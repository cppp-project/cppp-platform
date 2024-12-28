# C/C++ Standards

## Source

[src/languagestandards.h](https://github.com/cppp-project/cppp-platform/blob/main/src/languagestandards.h)

## Content

### \_\_has_cXX\_\_

#### Type of \_\_has_cXX\_\_

macro

#### Description of \_\_has_cXX\_\_

The 'XX' here refers to the C standard, and details can be found in the 'src/languagestandards.h' source code.

#### Usage

```c
#include <cppp/cppp-platform.h>

#if __has_c11__
#pragma message "You are in C11."
#endif

int main()
{
    return 0;
}
```

### \_\_has_cppXX\_\_

#### Type of \_\_has_cppXX\_\_

macro

#### Description of \_\_has_cppXX\_\_

The 'XX' here refers to the C++ standard, and details can be found in the `src/languagestandards.h` source code.

#### Usage of \_\_has_cppXX\_\_

```c
#include <cppp/cppp-platform.h>

#if __has_cpp17__
#pragma message "You are in C++17."
#endif

int main()
{
    return 0;
}
```

### \_\_cpp_version\_\_

#### Type of \_\_cpp_version\_\_

macro

#### Description of \_\_cpp_version\_\_

C++ standard for fixing issues with '\_MSVC_LANG'

### Usage of \_\_cpp_version\_\_

```cpp
#include <cppp/cppp-platform.h>

#include <iostream>

int main()
{
    std::cout << __cpp_version__ << std::endl;
    return EXIT_SUCCESS;
}
```
