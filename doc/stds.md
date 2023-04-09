# C/C++ Standards
## Source
src/lpstds.h
## Content
## \_\_has_cXX\_\_
#### Type
macros
#### Description
The 'XX' here refers to the C standard, and details can be found in the 'src/lpstds.h' source code.
#### Usage
```c
#include <platform_predef.h>
#if __has_c11__
#pragma message "You are in C11."
#endif
int main(){}
```
## \_\_has_cppXX\_\_
#### Type
macros
#### Description
The 'XX' here refers to the C++ standard, and details can be found in the 'src/lpstds.h' source code.
#### Usage
```c
#include <platform_predef.h>
#if __has_cpp17__
#pragma message "You are in C++17."
#endif
int main(){}
```
## \_\_cpp_version\_\_
#### Type
macro
#### Description
C++ standard for fixing issues with '\_MSVC_LANG'
### Usage
```cpp
#include <platform_predef.h>
#include <iostream>
int main()
{
    std::cout<<__cpp_version__<<"\n";
}
```
