// Pre-analysis options for the MGR:R exe: turn off analyzers that are too slow on an 18 MB .text.
// @category MGRR
import ghidra.app.script.GhidraScript;
public class PreAnalysisOptions extends GhidraScript {
    @Override
    public void run() throws Exception {
        setAnalysisOption(currentProgram, "Decompiler Parameter ID", "false");
        setAnalysisOption(currentProgram, "Windows x86 PE RTTI Analyzer", "true");
        setAnalysisOption(currentProgram, "Function ID", "true");
        setAnalysisOption(currentProgram, "Shared Return Calls", "true");
    }
}
