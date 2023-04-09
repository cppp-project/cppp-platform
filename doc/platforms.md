# Platforms
## Source
src/lpcomps.h
## Content
## \_\_has_xxx\_\_
#### Type
macros
#### Description
If there is a corresponding OS environment, it is 1, otherwise it is 0.
The 'xxx' here refers to the OS name, and details can be found in the 'src/lpplat.h' source code.

**Note: An environment may contain multiple OS environments**
#### Usage
```c
#include <platform_predef.h>
#if __has_windows__
#error "You are compile in Windows!"
#endif
int main(){}
```
#### Prototype
```c
/*no AIX*/
#define __has_aix__ 0
/*no Android*/
#define __has_android__ 0
/*no Amdahl UTS*/
#define __has_amdahl_uts__ 0
/*no AmigaOS*/
#define __has_amiga__ 0
/*no Apollo AEGIS*/
#define __has_aegis__ 0
/*no Apollo Domain/OS*/
#define __has_apollo__ 0
/*no BeOS*/
#define __has_beos__ 0
/*no Blue Gene*/
#define __has_blue_gene__ 0
/*no BSD*/
#define __has_bsd__ 0
/*no ConvexOS*/
#define __has_convex__ 0
/*no Cygwin Environment*/
#define __has_cygwin__ 0
/*no DG/UX*/
#define __has_dgux__ 0
/*no DYNIX/ptx*/
#define __has_dynix_ptx__ 0
/*no eCos*/
#define __has_ecos__ 0
/*no EMX Environment*/
#define __has_emx__ 0
/*no Haiku*/
#define __has_haiku__ 0
/*no HI-UX MPP*/
#define __has_hiux_mpp__ 0
/*no HP-US*/
#define __has_hpux__ 0
/*no IBM OS/400*/
#define __has_os_400__ 0
/*no INTEGRITY*/
#define __has_integrity__ 0
/*no Interix Environment*/
#define __has_interix__ 0
/*no IRIX*/
#define __has_irix__ 0
/*no Linux*/
#define __has_linux__ 0
/*no LynxOS*/
#define __has_lunx__ 0
/*no MacOS*/
#define __has_mac_os__ 0
/*no Microware OS-9*/
#define __has_microware_os_9__ 0
/*no MINIX*/
#define __has_minix__ 0
/*no MinGW*/
#define __has_mingw__ 0
/*no MorphOS*/
#define __has_morph_os__ 0
/*no MPE/iX*/
#define __has_mpe_ix__ 0
/*no MSDOS (C++ Plus C unsupport platform)*/
#define __has_dos__ 0
/*no NonStop*/
#define __has_non_stop__ 0
/*no Nucleus RTOS*/
#define __has_nucleus__ 0
/*no OS/2*/
#define __has_os2__ 0
/*no Palm OS*/
#define __has_palmos__ 0
/*no EPLAN9*/
#define __has_eplan9__ 0
/*no Pyramid DC/OSx*/
#define __has_pyr__ 0
/*no QNX*/
#define __has_qnx__ 0
/*no Reliant UNIX*/
#define __has_reliant_unix__ 0
/*no sun*/
#define __has_sun__ 0
/*no Solaris*/
#define __has_solaris__ 0
/*no SunOS*/
#define __has_sunos__ 0
/*no Stratus VOS*/
#define __has_vos__ 0
/*no SVR4 Environment*/
#define __has_svr4__ 0
/*no Syllable*/
#define __has_syllable__ 0
/*no Symbian OS*/
#define __has_symbianos__ 0
/*no OSF/1*/
#define __has_ofs1__ 0
/*no Ultrix*/
#define __has_ultrix__ 0
/*no UNICOS*/
#define __has_unicos__ 0
/*no UNICOS/mp*/
#define __has_unicos_mp__ 0
/*no UNIX Enviroment*/
#define __has_unix__ 0
/*no UnixWare*/
#define __has_unix_ware__ 0
/*no U/Win Environment*/
#define __has_uwin__ 0
/*no VMS*/
#define __has_vms__ 0
/*no VxWorks*/
#define __has_vxworks__ 0
/*no Windows*/
#define __has_windows__ 0
/*no Windows CE*/
#define __has_windows_ce__ 0
/*no Wind/U Environment*/
#define __has_windu__ 0
/*no z/OS*/
#define __has_zos__ 0
```
