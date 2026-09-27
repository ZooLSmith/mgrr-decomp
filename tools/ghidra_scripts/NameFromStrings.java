// Names default-named functions from the "Class::method" prefixes of the debug/assert strings
// they reference. Only names a function when every such string it references agrees.
// Writes logs/names_from_strings.csv.
// @category MGRR
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.StringDataInstance;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class NameFromStrings extends GhidraScript {
    // "[Ns::Class::method]", "Class::method()", "Class::method - ..." etc.
    static final Pattern P = Pattern.compile(
        "^[\\s\\[<!,@]*((?:[A-Za-z_]\\w*(?:<\\w+>)?::)+[A-Za-z_~]\\w*)");

    static final Set<String> SKIP_NS = new HashSet<>(Arrays.asList("std", "Structure"));

    @Override
    public void run() throws Exception {
        Listing listing = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        Map<Function, Map<String, Integer>> votes = new HashMap<>();

        // Scan initialized non-code blocks for NUL-terminated byte strings; the debug strings are
        // ASCII method names followed by Shift-JIS text, which Ghidra's string analyzer skips.
        ghidra.program.model.mem.Memory mem = currentProgram.getMemory();
        for (ghidra.program.model.mem.MemoryBlock b : mem.getBlocks()) {
            if (b.isExecute() || !b.isInitialized()) continue;
            byte[] buf = new byte[(int) b.getSize()];
            b.getBytes(b.getStart(), buf);
            int i = 0;
            while (i < buf.length) {
                int j = i;
                while (j < buf.length && buf[j] != 0 && (buf[j] & 0xFF) >= 0x09) j++;
                if (j < buf.length && buf[j] == 0 && j - i >= 6) {
                    String s = new String(buf, i, Math.min(j - i, 160), java.nio.charset.StandardCharsets.ISO_8859_1);
                    Matcher m = P.matcher(s);
                    if (m.find()) {
                        String qn = m.group(1).replaceAll("<\\w+>", "");
                        String first = qn.substring(0, qn.indexOf("::"));
                        if (!SKIP_NS.contains(first) && !first.startsWith("hk") && !first.startsWith("Hk")) {
                            Address sa = b.getStart().add(i);
                            for (Reference r : rm.getReferencesTo(sa)) {
                                Function f = getFunctionContaining(r.getFromAddress());
                                if (f == null) continue;
                                votes.computeIfAbsent(f, k -> new HashMap<>()).merge(qn, 1, Integer::sum);
                            }
                        }
                    }
                }
                i = j + 1;
            }
        }

        // name -> functions claiming it, to detect names shared by several functions
        Map<String, List<Function>> claims = new HashMap<>();
        for (Map.Entry<Function, Map<String, Integer>> e : votes.entrySet()) {
            if (e.getValue().size() != 1) continue;   // ambiguous: function mentions several methods
            claims.computeIfAbsent(e.getValue().keySet().iterator().next(), k -> new ArrayList<>()).add(e.getKey());
        }

        PrintWriter out = new PrintWriter(new FileWriter(new File(getProjectRootFolderLogDir(), "names_from_strings.csv")));
        out.println("entry,old,new,shared");
        int renamed = 0;
        for (Map.Entry<String, List<Function>> e : claims.entrySet()) {
            List<Function> fs = e.getValue();
            // a name claimed by many functions comes from an assert in an inlined helper
            if (fs.size() > 3) continue;
            fs.sort(Comparator.comparing(Function::getEntryPoint));
            for (int i = 0; i < fs.size(); i++) {
                Function f = fs.get(i);
                if (f.getSymbol().getSource() == SourceType.USER_DEFINED || f.getSymbol().getSource() == SourceType.IMPORTED) continue;
                // default names, and RTTI-recovery placeholder names for virtuals
                if (!f.getName().startsWith("FUN_") && !f.getName().startsWith("thunk_FUN_")
                        && !f.getName().matches("(thunk_)?(vfunction\\d+|vf[0-9A-F]+)")) continue;
                String[] parts = e.getKey().split("::");
                String method = parts[parts.length - 1] + (fs.size() > 1 && i > 0 ? "_" + (i + 1) : "");
                Namespace ns = currentProgram.getGlobalNamespace();
                for (int k = 0; k < parts.length - 1; k++)
                    ns = getOrCreateNamespace(ns, parts[k]);
                String old = f.getName();
                try {
                    f.setParentNamespace(ns);
                    f.setName(method, SourceType.ANALYSIS);
                    renamed++;
                    out.println(f.getEntryPoint() + "," + old + "," + e.getKey() + "," + fs.size());
                } catch (Exception ex) {
                    printerr("rename failed " + f.getEntryPoint() + ": " + ex.getMessage());
                }
            }
        }
        out.close();
        println("NameFromStrings: renamed " + renamed + " functions");
    }

    private File getProjectRootFolderLogDir() {
        File f = new File("E:\\Projects\\cpp\\mgrr_decomp\\logs");
        f.mkdirs();
        return f;
    }

    private Namespace getOrCreateNamespace(Namespace parent, String name) throws Exception {
        SymbolTable st = currentProgram.getSymbolTable();
        Namespace ns = st.getNamespace(name, parent);
        if (ns != null) return ns;
        return st.createNameSpace(parent, name, SourceType.ANALYSIS);
    }
}
