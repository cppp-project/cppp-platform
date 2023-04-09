@ECHO OFF
REM Builder for libplatform on MS-DOS
REM Written by ChenPi11 <wushengwuxi-msctinoulk@outlook.com>

REM Init builder
ECHO Libplatform Builder v1.0
ECHO This is builder for libplatform on MS-DOS.
ECHO This tool can only make include to 'build\include' but not support install.
ECHO.
ECHO --------------------------------------------------------------------------
ECHO Due to MS-DOS not supporting long file names, the generated 'platform_predef.h' header file was generated as' libplat.h'
ECHO --------------------------------------------------------------------------
ECHO.

REM Checking path and is MS-DOS
REM Check is MS-DOS
GOTO AFTER_CHOICE

:_CHOICE
ECHO Notice: This build is for MS-DOS system, and the build program may not run properly. Do you want to continue? 
CHOICE
IF ERRORLEVEL 2 GOTO QUIT
GOTO CONTINUE

:AFTER_CHOICE
IF NOT EXIST \COMMAND.COM GOTO _CHOICE

:CONTINUE
REM Check pwd is right
IF NOT EXIST src CD ..

REM Build path
SET BUILD_OUTPUT=build
SET OUT_INCLUDE_DIR=%BUILD_OUTPUT%\include
SET OUT_RUNIME_DIR=%BUILD_OUTPUT%\bin
SET OUT_LIBRARY_DIR=%BUILD_OUTPUT%\lib

REM Source path
SET SRCDIR=src

REM Targets
REM Build include
ECHO Start building ...
ECHO.
ECHO Make build directory ...
ECHO Mkdir '%BUILD_OUTPUT%'
MKDIR %BUILD_OUTPUT%
ECHO Mkdir '%OUT_INCLUDE_DIR%'
MKDIR %OUT_INCLUDE_DIR%
ECHO.
ECHO Add title ...
ECHO "TYPE %SRCDIR%\title.h >> %OUT_INCLUDE_DIR%\libplat.h"
TYPE %SRCDIR%\title.h >> %OUT_INCLUDE_DIR%\libplat.h
ECHO Add lparchs ...
ECHO "TYPE %SRCDIR%\lparchs.h >> %OUT_INCLUDE_DIR%\libplat.h"
TYPE %SRCDIR%\lparchs.h >> %OUT_INCLUDE_DIR%\libplat.h
ECHO Add lpcomps ...
ECHO "TYPE %SRCDIR%\lpcomps.h >> %OUT_INCLUDE_DIR%\libplat.h"
TYPE %SRCDIR%\lpcomps.h >> %OUT_INCLUDE_DIR%\libplat.h
ECHO Add lpplat ...
ECHO "TYPE %SRCDIR%\lpplat.h >> %OUT_INCLUDE_DIR%\libplat.h"
TYPE %SRCDIR%\lpplat.h >> %OUT_INCLUDE_DIR%\libplat.h
ECHO Add lpstds ...
ECHO "TYPE %SRCDIR%\lpstds.h >> %OUT_INCLUDE_DIR%\libplat.h"
TYPE %SRCDIR%\lpstds.h >> %OUT_INCLUDE_DIR%\libplat.h
ECHO Add end ...
ECHO "TYPE %SRCDIR%\end.h >> %OUT_INCLUDE_DIR%\libplat.h"
TYPE %SRCDIR%\end.h >> %OUT_INCLUDE_DIR%\libplat.h
ECHO done.
ECHO.
ECHO If you want to clean, please remove directory '%OUT_INCLUDE_DIR%'
GOTO QUIT

REM Unset vars and exit
:QUIT
SET BUILD_OUTPUT=
SET OUT_INCLUDE_DIR=
SET OUT_RUNIME_DIR=
SET OUT_LIBRARY_DIR=
SET SRCDIR=
ECHO Quit.
