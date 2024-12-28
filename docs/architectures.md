# Architectures

## Source

[src/architectures.h](https://github.com/cppp-project/cppp-platform/blob/main/src/architectures.h)

## Contents

### \_\_arch\_\_

#### The type of \_\_arch\_\_

macro

#### Description of \_\_arch\_\_

Represents the processor architecture type. If the judgment fails, the value is set to '\_\_arch_unknown\_\_'.

#### Value of \_\_arch\_\_

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

#### Example of \_\_arch\_\_

```c
#include <cppp/cppp-platform.h>

#if (__arch__ == __arch_x86__)
#pragma message "Build in x86."
#elif (__arch__ == __arch_arm__)
#pragma message "Build in arm."
#elif
#pragma message "Build in other."
#endif

int main()
{
    return 0;
}
```

### \_\_arch_name\_\_

#### Type of \_\_arch_name\_\_

macro

#### Description of \_\_arch_name\_\_

Architecture name, like `uname -m`. If the judgment fails, the value is `"Unknown"`.

#### Example of \_\_arch_name\_\_

```c
#include <cppp/cppp-platform.h>

#include <stdio.h>

int main()
{
    printf("Arch name: %s\n", __arch_name__);
}
```

### \_\_POINTER_WIDTH\_\_

#### Type of \_\_POINTER_WIDTH\_\_

macro

#### Description of \_\_POINTER_WIDTH\_\_

This represents the pointer length. The value is generally 32 or 64.

#### Example of \_\_POINTER_WIDTH\_\_

```c
#include <cppp/cppp-platform.h>
#include <stdio.h>
int main()
{
    printf("Pointer width: %ld\n", __POINTER_WIDTH__);
}
```
