# Architectures
## Source
src/lparchs.h
## Content
### \_\_arch\_\_
#### Type
macro
#### Description
Represents the processor architecture type
If the judgment fails, the value is '\_\_arch_unknown\_\_'
##### We provide preset architecture types
```c
/*Alpha*/
#define __arch_alpha__ 1
/*x86*/
#define __arch_x86__ 2
/*ARM*/
#define __arch_arm__ 3
/*Blackfin*/
#define __arch_blackfin__ 4
/*Convex*/
#define __arch_convex__ 5
/*Epiphany*/
#define __arch_epiphany__ 6
/*HP/PA RISC*/
#define __arch_hppa__ 7
/*Itanium*/
#define __arch_itanium__ 8
/*Motorola 68k*/
#define __arch_motorola68k__ 9
/*MIPS*/
#define __arch_mips__ 10
/*PowerPC*/
#define __arch_ppc__ 11
/*Pyramid 9810*/
#define __arch_pyramid9810__ 12
/*RS/6000*/
#define __arch_rs6000__ 13
/*SPARC*/
#define __arch_sparc__ 14
/*SuperH*/
#define __arch_superh__ 15
/*SystemZ*/
#define __arch_systemz__ 16
/*TMS320*/
#define __arch_tms320__ 17
/*TMS470*/
#define __arch_tms470__ 18
/*unknown arch*/
#define __arch_unknown__ 0
```
#### Usage
```c
#include <platform_predef.h>
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
#include <platform_predef.h>
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
#include <platform_predef.h>
#include <stdio.h>
int main()
{
    printf("Pointer width: %ld\n", __POINTER_WIDTH__);
}
```
