// Decompiles every function in parallel and writes export/functions.jsonl, one JSON object per
// function, plus export/types.h (all program data types) and export/globals.jsonl (named data).
// @category MGRR
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.parallel.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.TaskMonitor;
import com.google.gson.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class ExportDecomp extends GhidraScript {
    static final String OUT = "E:\\Projects\\cpp\\mgrr_decomp\\export";

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        // resumable: types/globals are cheap to redo, functions already exported are skipped
        exportTypes();
        exportGlobals();
        exportFunctions();
    }

    private void exportTypes() throws Exception {
        try (Writer w = new OutputStreamWriter(new FileOutputStream(OUT + "\\types.h"), StandardCharsets.UTF_8)) {
            DataTypeWriter dtw = new DataTypeWriter(currentProgram.getDataTypeManager(), w, false);
            List<DataType> all = new ArrayList<>();
            currentProgram.getDataTypeManager().getAllDataTypes(all);
            dtw.write(all, monitor);
        }
        println("types.h written");
    }

    private void exportGlobals() throws Exception {
        Gson g = new Gson();
        try (Writer w = new OutputStreamWriter(new FileOutputStream(OUT + "\\globals.jsonl"), StandardCharsets.UTF_8)) {
            for (Data d : currentProgram.getListing().getDefinedData(true)) {
                Symbol s = d.getPrimarySymbol();
                if (s == null) continue;
                JsonObject o = new JsonObject();
                o.addProperty("ea", d.getAddress().toString());
                o.addProperty("name", s.getName(true));
                o.addProperty("type", d.getDataType().getDisplayName());
                o.addProperty("size", d.getLength());
                o.addProperty("block", currentProgram.getMemory().getBlock(d.getAddress()).getName());
                if (d.hasStringValue()) {
                    Object v = d.getValue();
                    o.addProperty("str", v == null ? "" : v.toString());
                }
                w.write(g.toJson(o));
                w.write("\n");
            }
        }
        println("globals.jsonl written");
    }

    private void exportFunctions() throws Exception {
        final Program prog = currentProgram;
        final Gson g = new Gson();
        File jf = new File(OUT + "\\functions.jsonl");
        final Set<String> done = new HashSet<>();
        if (jf.exists()) {
            try (BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream(jf), StandardCharsets.UTF_8))) {
                String line;
                while ((line = br.readLine()) != null) {
                    int i = line.indexOf("\"ea\":\"");
                    if (i >= 0) done.add(line.substring(i + 6, line.indexOf('"', i + 6)));
                }
            }
            println("resuming; already exported: " + done.size());
        }
        final Writer w = new BufferedWriter(new OutputStreamWriter(
            new FileOutputStream(jf, true), StandardCharsets.UTF_8), 1 << 20);
        final ReferenceManager rm = prog.getReferenceManager();

        DecompilerCallback<String> cb = new DecompilerCallback<String>(prog, new DecompileConfigurer() {
            @Override
            public void configure(DecompInterface d) {
                DecompileOptions opts = new DecompileOptions();
                opts.grabFromProgram(prog);
                d.setOptions(opts);
                d.toggleCCode(true);
                d.toggleSyntaxTree(false);
                d.setSimplificationStyle("decompile");
            }
        }) {
            @Override
            public String process(DecompileResults res, TaskMonitor m) throws Exception {
                Function f = res.getFunction();
                JsonObject o = new JsonObject();
                o.addProperty("ea", f.getEntryPoint().toString());
                o.addProperty("name", f.getName());
                o.addProperty("ns", f.getParentNamespace().isGlobal() ? "" : f.getParentNamespace().getName(true));
                o.addProperty("size", f.getBody().getNumAddresses());
                o.addProperty("thunk", f.isThunk());
                o.addProperty("lib", f.isExternal() || f.getSymbol().getSource() == SourceType.IMPORTED);
                o.addProperty("src", f.getSymbol().getSource().toString());
                o.addProperty("sig", f.getPrototypeString(false, false));
                JsonArray callees = new JsonArray();
                for (Function c : f.getCalledFunctions(m)) callees.add(c.getEntryPoint().toString());
                o.add("callees", callees);
                JsonArray callers = new JsonArray();
                for (Function c : f.getCallingFunctions(m)) callers.add(c.getEntryPoint().toString());
                o.add("callers", callers);
                JsonArray strs = new JsonArray();
                JsonArray datarefs = new JsonArray();
                for (Address a : f.getBody().getAddresses(true)) {
                    for (Reference r : rm.getReferencesFrom(a)) {
                        if (!r.getReferenceType().isData()) continue;
                        Data d = prog.getListing().getDataAt(r.getToAddress());
                        if (d != null && d.hasStringValue()) {
                            Object v = d.getValue();
                            if (v != null && strs.size() < 64) strs.add(v.toString());
                        } else if (datarefs.size() < 256) {
                            datarefs.add(r.getToAddress().toString());
                        }
                    }
                }
                o.add("strings", strs);
                o.add("datarefs", datarefs);
                if (res.decompileCompleted()) {
                    o.addProperty("c", res.getDecompiledFunction().getC());
                } else {
                    o.addProperty("c", "");
                    o.addProperty("error", res.getErrorMessage());
                }
                return g.toJson(o);
            }
        };
        cb.setTimeout(120);

        List<Function> funcs = new ArrayList<>();
        for (Function f : prog.getFunctionManager().getFunctions(true))
            if (!done.contains(f.getEntryPoint().toString())) funcs.add(f);
        println("decompiling " + funcs.size() + " functions");

        // Batch so results can be streamed to disk rather than held in memory.
        int batch = 2000;
        for (int i = 0; i < funcs.size(); i += batch) {
            if (monitor.isCancelled()) break;
            List<Function> part = funcs.subList(i, Math.min(funcs.size(), i + batch));
            List<String> results = ParallelDecompiler.decompileFunctions(cb, part, monitor);
            for (String s : results) {
                if (s == null) continue;
                w.write(s);
                w.write("\n");
            }
            w.flush();
            println("exported " + Math.min(funcs.size(), i + batch) + "/" + funcs.size());
        }
        cb.dispose();
        w.close();
    }
}
