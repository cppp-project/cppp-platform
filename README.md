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
### Build on Windows
#### Dependence
+ cmd.exe on Windows
#### Make
```shell
make.cmd
```
make.cmd don't support install.
### Build with CMake
#### Dependence
+ CMake (version >= 3.0)
#### Make
```shell
mkdir build
cd build
cmake ..
# Now, build output is in 'build/include'
```
## Usage
After install, you can use libplatform in C/C++
```c
#include <platform_predef.h>
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
