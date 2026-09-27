// Reverts names applied by NameFromStrings that were shared by more than 3 functions
// (assert strings of inlined helpers). Reads logs/names_from_strings.csv.
// @category MGRR
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class RevertSharedNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        List<String> lines = Files.readAllLines(Paths.get("E:/Projects/cpp/mgrr_decomp/logs/names_from_strings_run1.csv"));
        int n = 0;
        for (String l : lines.subList(1, lines.size())) {
            String[] c = l.split(",");
            if (Integer.parseInt(c[3]) <= 3) continue;
            Function f = getFunctionAt(toAddr(c[0]));
            if (f == null) continue;
            f.setParentNamespace(currentProgram.getGlobalNamespace());
            f.setName("FUN_" + c[0], SourceType.ANALYSIS);
            n++;
        }
        println("RevertSharedNames: " + n);
    }
}
