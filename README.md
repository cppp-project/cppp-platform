# libplatform
libplatform is a platform check library
## Build
### Build with GNU Makefile
#### Dependence
+ GNU Make
+ GNU/Linux commands: **cat, mkdir, install, rm, echo**
#### Make and Install
```shell
make
make install
```
The build results are in the 'build' directory.
### Build on Windows
#### Dependence
+ cmd.exe on Windows
#### Make
```shell
call make.cmd
```
make.cmd does not support install.
The build results are in the 'build' directory.
### Build with CMake
#### Dependence
+ CMake (version >= 3.0)
#### Make
```shell
mkdir build
cd build
cmake ..
```
The build results are in the 'build' directory.
### Build with Python
#### Dependence
+ Python 3.x or Python 2.x
+ Python base libraries (platform, shutil)
+ Python build-in libraries (sys, os)
#### Make and Install
```shell
python tools/build.py
python tools/build.py install
```
Try 'python tools/build.py' --help for help
### Build on MS-DOS
**MS-DOS does not support long file names, so include output 'include\platform_predef.h' will be replaced to 'include\libplat.h'**
#### Dependence
+ MS-DOS shell (COMMAND.COM)
#### Make and Install
```shell
cd tools
call dos-make.bat
```
dos-make.bat will chdir to repository root directory automatic.
dos-make.bat does not support install.
The build results are in the 'build' directory.

**Do not use dos-make.bat for build on Windows!**

## Usage
After install, you can use libplatform in C/C++
```c
#include <platform_predef.h>
/*On MS-DOS, <platform_predef.h> is renamed to <libplat.h>*/
#include <stdio.h>
int main()
{
    if(__has_windows__)
    {
        printf("Compile in Windows!\n");
    }
    else
    {
        printf("Compile non-Windows!\n");
    }
    printf("Target arch:%s\n",__arch__);
    printf("Target arch name:%s\n",__arch_name__);
    printf("Pointer width:%d\n",__POINTER_WIDTH__);
}
```

## Manual
[User Manual](doc/doc.md)
