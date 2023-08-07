# Architectures
## Source
src/architectures.h
## Content
### \_\_arch\_\_
#### Type
macros
#### Description
Represents the processor architecture type
If the judgment fails, the value is '\_\_arch_unknown\_\_'
#### We provide preset architecture macros
| Architecture | Macro |
| :----: | :----: |
| Alpha | \_\_arch_alpha\_\_ |
| x86 | \_\_arch_x86\_\_ |
| ARM | \_\_arch_arm\_\_ |
| Blackfin | \_\_arch_blackfin\_\_ |
| Convex | \_\_arch_convex\_\_ |
| Epiphany | \_\_arch_epiphany\_\_ |
| HP/PA RISC | \_\_arch_hppa\_\_ |
| Itanium | \_\_arch_itanium\_\_ |
| Motorola8k | \_\_arch_motorola68k\_\_ |
| MIPS | \_\_arch_mips\_\_0 |
| PowerPC | \_\_arch_ppc\_\_1 |
| Pyramid810 | \_\_arch_pyramid9810\_\_2 |
| RS/6000 | \_\_arch_rs6000\_\_3 |
| SPARC | \_\_arch_sparc\_\_4 |
| SuperH | \_\_arch_superh\_\_5 |
| SystemZ | \_\_arch_systemz\_\_6 |
| TMS320 | \_\_arch_tms320\_\_7 |
| TMS470 | \_\_arch_tms470\_\_8 |
| Unknown architecture | \_\_arch_unknown\_\_ |

#### Usage
```c
#include <cppp/cppp-platform.h>
#if (__arch__ == __arch_x86__)
#pragma message "Build in x86 arch"
#elif (__arch__ == __arch_arm__)
#pragma message "Build in arm arch"
#elif
#pragma message "Build in other arch"
#endif
int main(){}
```
### \_\_arch_name\_\_
#### Type
macro
#### Description
Architecture name, like 'uname -m'
If the judgment fails, the value is "unknown"
#### Usage
```c
#include <cppp/cppp-platform.h>
#include <stdio.h>
int main()
{
    printf("Arch name: %s\n", __arch_name__);
}
```
### \_\_POINTER_WIDTH\_\_
#### Type
macro
#### Description
This represents the calculation formula for pointer length
The value is generally 32 or 64
#### Usage
```c
#include <cppp/cppp-platform.h>
#include <stdio.h>
int main()
{
    printf("Pointer width: %ld\n", __POINTER_WIDTH__);
}
```
