@echo off
rem Maker for libplatform on Windows
echo This is maker for libplatform on Windows.
echo This tool can only make include to 'build\include' but not support install.
echo.

rem Source path
set SRCDIR = "."
echo %SRCDIR%
exit 0
rem Remove old output
rmdir /s /q build

rem Make build output dir
mkdir build

rem Make include
mkdir build\include
type src\title.h src\lparchs.h src\lpcomps.h src\lpplat.h src\lpstds.h src\end.h > build\include\platform_predef.h


rem Make done.
echo.
echo done.