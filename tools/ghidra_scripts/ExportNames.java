// Exports every function's name/namespace/signature and all data types, so names from one
// Ghidra project copy can be merged into another (ImportNames.java).
// Arg 0: output tag (default "names") -> logs\<tag>_names.csv, logs\<tag>_types.h
// @category MGRR
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class ExportNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String tag = args.length > 0 ? args[0] : "names";
        String dir = "E:\\Projects\\cpp\\mgrr_decomp\\logs\\";
        try (PrintWriter out = new PrintWriter(new OutputStreamWriter(
                new FileOutputStream(dir + tag + "_names.csv"), StandardCharsets.UTF_8))) {
            out.println("entry\tsource\tnamespace\tname\tcallconv\tsignature");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                Namespace ns = f.getParentNamespace();
                out.println(f.getEntryPoint() + "\t" + f.getSymbol().getSource() + "\t"
                    + (ns.isGlobal() ? "" : ns.getName(true)) + "\t" + f.getName() + "\t"
                    + f.getCallingConventionName() + "\t" + f.getPrototypeString(false, false));
            }
        }
        try (Writer w = new OutputStreamWriter(new FileOutputStream(dir + tag + "_types.h"), StandardCharsets.UTF_8)) {
            DataTypeWriter dtw = new DataTypeWriter(currentProgram.getDataTypeManager(), w, false);
            List<DataType> all = new ArrayList<>();
            currentProgram.getDataTypeManager().getAllDataTypes(all);
            dtw.write(all, monitor);
        }
        println("ExportNames done: " + tag);
    }
}
