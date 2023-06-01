# Introduction
libplatform is a portable platform check library for C++ Plus
## Build
### Build with GNU Makefile
#### Dependence
+ GNU Make
+ GNU/Linux commands: **cat, mkdir, install, rm**
#### Make and Install
```shell
./configure
make
make install
```
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

## Usage
After install, you can use libplatform in C/C++
```c
#include <cppp/libplatform.h>
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
