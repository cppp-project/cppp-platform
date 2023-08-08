# Platforms
## Source
src/platforms.h
## Content
## \_\_has_xxx\_\_
#### Type
macros
#### Description
If there is a corresponding OS environment, it is 1, otherwise it is 0.
The 'xxx' here refers to the OS name, and details can be found in the 'src/platforms.h' source code.

**Note: An compile environment may contain multiple environments**
#### Usage
```c
#include <cppp/libplatform.h>
#if __has_windows__
#error "We do not support Windows!"
#endif
int main(){}
```
#### We provide preset compiler macros
| Platform | Macro |
| :----: | :----: |
| AIX | \_\_has_aix\_\_ |
| Android | \_\_has_android\_\_ |
| Amdahl UTS | \_\_has_amdahl_uts\_\_ |
| AmigaOS | \_\_has_amiga\_\_ |
| Apollo AEGIS | \_\_has_aegis\_\_ |
| Apollo Domain/OS | \_\_has_apollo\_\_ |
| BeOS | \_\_has_beos\_\_ |
| Blue Gene | \_\_has_blue_gene\_\_ |
| BSD | \_\_has_bsd\_\_ |
| ConvexOS | \_\_has_convex\_\_ |
| Cygwin Environment | \_\_has_cygwin\_\_ |
| DG/UX | \_\_has_dgux\_\_ |
| DYNIX/ptx | \_\_has_dynix_ptx\_\_ |
| eCos | \_\_has_ecos\_\_ |
| EMX Environment | \_\_has_emx\_\_ |
| Haiku | \_\_has_haiku\_\_ |
| HI-UX MPP | \_\_has_hiux_mpp\_\_ |
| HP-US | \_\_has_hpux\_\_ |
| IBM OS/400 | \_\_has_os_400\_\_ |
| INTEGRITY | \_\_has_integrity\_\_ |
| Interix Environment | \_\_has_interix\_\_ |
| IRIX | \_\_has_irix\_\_ |
| Linux | \_\_has_linux\_\_ |
| LynxOS | \_\_has_lunx\_\_ |
| MacOS | \_\_has_mac_os\_\_ |
| Microware OS-9 | \_\_has_microware_os_9\_\_ |
| MINIX | \_\_has_minix\_\_ |
| MinGW | \_\_has_mingw\_\_ |
| MorphOS | \_\_has_morph_os\_\_ |
| MPE/iX | \_\_has_mpe_ix\_\_ |
| MSDOS (C++ Plus C unsupport platform) | \_\_has_dos\_\_ |
| NonStop | \_\_has_non_stop\_\_ |
| Nucleus RTOS | \_\_has_nucleus\_\_ |
| OS/2 | \_\_has_os2\_\_ |
| Palm OS | \_\_has_palmos\_\_ |
| EPLAN9 | \_\_has_eplan9\_\_ |
| Pyramid DC/OSx | \_\_has_pyr\_\_ |
| QNX | \_\_has_qnx\_\_ |
| Reliant UNIX | \_\_has_reliant_unix\_\_ |
| sun | \_\_has_sun\_\_ |
| Solaris | \_\_has_solaris\_\_ |
| SunOS | \_\_has_sunos\_\_ |
| Stratus VOS | \_\_has_vos\_\_ |
| SVR4 Environment | \_\_has_svr4\_\_ |
| Syllable | \_\_has_syllable\_\_ |
| Symbian OS | \_\_has_symbianos\_\_ |
| OSF/1 | \_\_has_ofs1\_\_ |
| Ultrix | \_\_has_ultrix\_\_ |
| UNICOS | \_\_has_unicos\_\_ |
| UNICOS/mp | \_\_has_unicos_mp\_\_ |
| UNIX Enviroment | \_\_has_unix\_\_ |
| UnixWare | \_\_has_unix_ware\_\_ |
| U/Win Environment | \_\_has_uwin\_\_ |
| VMS | \_\_has_vms\_\_ |
| VxWorks | \_\_has_vxworks\_\_ |
| Windows | \_\_has_windows\_\_ |
| Windows CE | \_\_has_windows_ce\_\_ |
| Wind/U Environment | \_\_has_windu\_\_ |
| z/OS | \_\_has_zos\_\_ |
