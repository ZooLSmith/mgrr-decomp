// Applies renames from a CSV (entry,namespace,name[,...]) with a header row.
// Arg 0: CSV path. Namespaces are created as needed ("A::B" -> nested); template scopes are
// created as single namespaces named literally.
// @category MGRR
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;

public class ApplyRenames extends GhidraScript {
    @Override
    public void run() throws Exception {
        String path = getScriptArgs()[0];
        List<String> lines = Files.readAllLines(Paths.get(path));
        int ok = 0, fail = 0;
        for (String l : lines.subList(1, lines.size())) {
            List<String> c = parseCsv(l);
            if (c.size() < 3) continue;
            Function f = getFunctionAt(toAddr(c.get(0)));
            if (f == null) { fail++; continue; }
            try {
                Namespace ns = currentProgram.getGlobalNamespace();
                for (String part : splitScope(c.get(1))) {
                    if (part.isEmpty()) continue;
                    Namespace n = currentProgram.getSymbolTable().getNamespace(part, ns);
                    ns = n != null ? n : currentProgram.getSymbolTable().createNameSpace(ns, part, SourceType.ANALYSIS);
                }
                f.setParentNamespace(ns);
                f.setName(c.get(2), SourceType.ANALYSIS);
                ok++;
            } catch (Exception e) {
                fail++;
            }
        }
        println("ApplyRenames: " + ok + " applied, " + fail + " failed");
    }

    static List<String> splitScope(String ns) {
        List<String> out = new ArrayList<>();
        int depth = 0; StringBuilder cur = new StringBuilder();
        for (int i = 0; i < ns.length(); i++) {
            char ch = ns.charAt(i);
            if (ch == '<') depth++;
            else if (ch == '>') depth--;
            if (depth == 0 && ns.startsWith("::", i)) { out.add(cur.toString()); cur.setLength(0); i++; continue; }
            cur.append(ch);
        }
        out.add(cur.toString());
        return out;
    }

    static List<String> parseCsv(String l) {
        List<String> out = new ArrayList<>();
        StringBuilder cur = new StringBuilder(); boolean q = false;
        for (int i = 0; i < l.length(); i++) {
            char ch = l.charAt(i);
            if (q) {
                if (ch == '"' && i + 1 < l.length() && l.charAt(i + 1) == '"') { cur.append('"'); i++; }
                else if (ch == '"') q = false;
                else cur.append(ch);
            } else if (ch == '"') q = true;
            else if (ch == ',') { out.add(cur.toString()); cur.setLength(0); }
            else cur.append(ch);
        }
        out.add(cur.toString());
        return out;
    }
}
