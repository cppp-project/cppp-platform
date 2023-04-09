@echo off
rem Builder for libplatform on Windows
rem Written by ChenPi11 <wushengwuxi-msctinoulk@outlook.com>

rem Init builder
echo Libplatform Builder v1.0
echo This is builder for libplatform on Microsoft Windows.
echo This tool can only make include to 'build\include' but not support install.
echo.

rem Check pwd is right
if not exist src cd ..

rem Build path
set BUILD_OUTPUT=build
set OUT_INCLUDE_DIR=%BUILD_OUTPUT%\include
set OUT_RUNIME_DIR=%BUILD_OUTPUT%\bin
set OUT_LIBRARY_DIR=%BUILD_OUTPUT%\lib

rem Source path
set SRCDIR=.\SRC

rem Targets
rem Build include
echo Start building ...
echo.
echo Make build directory ...
echo Mkdir '%BUILD_OUTPUT%'
mkdir %BUILD_OUTPUT%
echo Mkdir '%OUT_INCLUDE_DIR%'
mkdir %OUT_INCLUDE_DIR%
echo.
echo Add title ...
echo "type %SRCDIR%\title.h >> %OUT_INCLUDE_DIR%\platform_predef.h"
type %SRCDIR%\title.h >> %OUT_INCLUDE_DIR%\platform_predef.h
echo Add lparchs ...
echo "type %SRCDIR%\lparchs.h >> %OUT_INCLUDE_DIR%\platform_predef.h"
type %SRCDIR%\lparchs.h >> %OUT_INCLUDE_DIR%\platform_predef.h
echo Add lpcomps ...
echo "type %SRCDIR%\lpcomps.h >> %OUT_INCLUDE_DIR%\platform_predef.h"
type %SRCDIR%\lpcomps.h >> %OUT_INCLUDE_DIR%\platform_predef.h
echo Add lpplat ...
echo "type %SRCDIR%\lpplat.h >> %OUT_INCLUDE_DIR%\platform_predef.h"
type %SRCDIR%\lpplat.h >> %OUT_INCLUDE_DIR%\platform_predef.h
echo Add lpstds ...
echo "type %SRCDIR%\lpstds.h >> %OUT_INCLUDE_DIR%\platform_predef.h"
type %SRCDIR%\lpstds.h >> %OUT_INCLUDE_DIR%\platform_predef.h
echo Add end ...
echo "type %SRCDIR%\end.h >> %OUT_INCLUDE_DIR%\platform_predef.h"
type %SRCDIR%\end.h >> %OUT_INCLUDE_DIR%\platform_predef.h
echo done.
echo.
echo If you want to clean, please remove directory '%OUT_INCLUDE_DIR%'
goto quit

rem Unset vars and exit
:quit
set BUILD_OUTPUT=
set OUT_INCLUDE_DIR=
set OUT_RUNIME_DIR=
set OUT_LIBRARY_DIR=
set SRCDIR=
echo Quit.
