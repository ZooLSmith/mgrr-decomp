@echo off
rem Full Ghidra RTTI class recovery on a separate copy of the project (slow; single-threaded).
rem Results are exported by ExportNames.java to logs\rtti_names.csv and logs\rtti_types.h for merging.
set GHIDRA_HEADLESS_MAXMEM=5G
"C:\Program Files\Ghidra\support\analyzeHeadless.bat" E:\Projects\cpp\mgrr_decomp\ghidra_rtti MGRR -process "METAL GEAR RISING REVENGEANCE.exe" -noanalysis -scriptPath "E:\Projects\cpp\mgrr_decomp\tools\ghidra_scripts;C:\Program Files\Ghidra\Ghidra\Features\Decompiler\ghidra_scripts" -postScript RecoverClassesFromRTTIScript.java -postScript ExportNames.java rtti -log E:\Projects\cpp\mgrr_decomp\logs\ghidra_rtti.log -scriptlog E:\Projects\cpp\mgrr_decomp\logs\ghidra_rtti_script.log
