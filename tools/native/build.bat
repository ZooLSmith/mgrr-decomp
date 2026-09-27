@echo off
rem Builds crilayla.dll (x64, matches 64-bit Python) using the latest VS install found via vswhere.
setlocal
set VSWHERE=C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe
for /f "usebackq delims=" %%i in (`call "%VSWHERE%" -latest -products * -property installationPath`) do set VSPATH=%%i
call "%VSPATH%\VC\Auxiliary\Build\vcvars64.bat" >nul
cd /d "%~dp0"
cl /nologo /LD /O2 /W3 crilayla.c /link /OUT:crilayla.dll
del /q crilayla.obj crilayla.exp crilayla.lib 2>nul
