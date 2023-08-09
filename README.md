# Introduction
cppp-platform is a portable platform check library for C++ Plus.

# Build
## Dependence
+ CMake (version >= 3.12)

## Command
```shell
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=[[PREFIX]]
cmake --build .
cmake --install .
```

# Example
After install, you can use cppp-platform in C/C++
```c
#include <cppp/cppp-platform.h>
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

# Manual
[User Manual](doc/doc.md)
