@echo off
rem Compile-check reconstructed sources with 32-bit MSVC (syntax/type check only, no link).
rem usage: tools\cc.bat src\path\File.cpp [more files...]
setlocal
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat" >nul 2>&1
set ROOT=%~dp0..
cl /nologo /c /Zs /TP /EHsc /W3 /wd4100 /wd4101 /wd4102 /wd4189 /wd4700 /wd4715 /FI"%ROOT%\include\mgrr.h" /I"%ROOT%\include" /I"%ROOT%\include\auto\classes" %*
