@echo off
set GHIDRA_HEADLESS_MAXMEM=11G
"C:\Program Files\Ghidra\support\analyzeHeadless.bat" E:\Projects\cpp\mgrr_decomp\ghidra MGRR -import "E:\SteamLibrary\steamapps\common\METAL GEAR RISING REVENGEANCE\METAL GEAR RISING REVENGEANCE.exe" -overwrite -scriptPath E:\Projects\cpp\mgrr_decomp\tools\ghidra_scripts -preScript PreAnalysisOptions.java -analysisTimeoutPerFile 86400 -log E:\Projects\cpp\mgrr_decomp\logs\ghidra_app.log -scriptlog E:\Projects\cpp\mgrr_decomp\logs\ghidra_script.log
