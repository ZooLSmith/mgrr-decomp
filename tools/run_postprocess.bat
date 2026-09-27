@echo off
rem Post-analysis passes on the existing Ghidra project: RTTI class recovery, string-based naming, export.
if not defined GHIDRA_HEADLESS_MAXMEM set GHIDRA_HEADLESS_MAXMEM=8G
"C:\Program Files\Ghidra\support\analyzeHeadless.bat" E:\Projects\cpp\mgrr_decomp\ghidra MGRR -process "METAL GEAR RISING REVENGEANCE.exe" -noanalysis -scriptPath "E:\Projects\cpp\mgrr_decomp\tools\ghidra_scripts;C:\Program Files\Ghidra\Ghidra\Features\Decompiler\ghidra_scripts" %* -log E:\Projects\cpp\mgrr_decomp\logs\ghidra_post.log -scriptlog E:\Projects\cpp\mgrr_decomp\logs\ghidra_post_script.log
