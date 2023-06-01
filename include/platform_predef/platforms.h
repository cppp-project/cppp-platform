/* ============================================================================================= */
/* Libplatform platforms detection. */

/* No AIX */
#define __has_aix__ 0
/* No Android */
#define __has_android__ 0
/* No Amdahl UTS */
#define __has_amdahl_uts__ 0
/* No AmigaOS */
#define __has_amiga__ 0
/* No Apollo AEGIS */
#define __has_aegis__ 0
/* No Apollo Domain/OS */
#define __has_apollo__ 0
/* No BeOS */
#define __has_beos__ 0
/* No Blue Gene */
#define __has_blue_gene__ 0
/* No BSD */
#define __has_bsd__ 0
/* No ConvexOS */
#define __has_convex__ 0
/* No Cygwin Environment */
#define __has_cygwin__ 0
/* No DG/UX */
#define __has_dgux__ 0
/* No DYNIX/ptx */
#define __has_dynix_ptx__ 0
/* No eCos */
#define __has_ecos__ 0
/* No EMX Environment */
#define __has_emx__ 0
/* No Haiku */
#define __has_haiku__ 0
/* No HI-UX MPP */
#define __has_hiux_mpp__ 0
/* No HP-US */
#define __has_hpux__ 0
/* No IBM OS/400 */
#define __has_os_400__ 0
/* No INTEGRITY */
#define __has_integrity__ 0
/* No Interix Environment */
#define __has_interix__ 0
/* No IRIX */
#define __has_irix__ 0
/* No Linux */
#define __has_linux__ 0
/* No LynxOS */
#define __has_lunx__ 0
/* No MacOS */
#define __has_mac_os__ 0
/* No Microware OS-9 */
#define __has_microware_os_9__ 0
/* No MINIX */
#define __has_minix__ 0
/* No MinGW */
#define __has_mingw__ 0
/* No MorphOS */
#define __has_morph_os__ 0
/* No MPE/iX */
#define __has_mpe_ix__ 0
/* No MSDOS (C++ Plus C unsupport platform) */
#define __has_dos__ 0
/* No NonStop */
#define __has_non_stop__ 0
/* No Nucleus RTOS */
#define __has_nucleus__ 0
/* No OS/2 */
#define __has_os2__ 0
/* No Palm OS */
#define __has_palmos__ 0
/* No EPLAN9 */
#define __has_eplan9__ 0
/* No Pyramid DC/OSx */
#define __has_pyr__ 0
/* No QNX */
#define __has_qnx__ 0
/* No Reliant UNIX */
#define __has_reliant_unix__ 0
/* No sun */
#define __has_sun__ 0
/* No Solaris */
#define __has_solaris__ 0
/* No SunOS */
#define __has_sunos__ 0
/* No Stratus VOS */
#define __has_vos__ 0
/* No SVR4 Environment */
#define __has_svr4__ 0
/* No Syllable */
#define __has_syllable__ 0
/* No Symbian OS */
#define __has_symbianos__ 0
/* No OSF/1 */
#define __has_ofs1__ 0
/* No Ultrix */
#define __has_ultrix__ 0
/* No UNICOS */
#define __has_unicos__ 0
/* No UNICOS/mp */
#define __has_unicos_mp__ 0
/* No UNIX Enviroment */
#define __has_unix__ 0
/* No UnixWare */
#define __has_unix_ware__ 0
/* No U/Win Environment */
#define __has_uwin__ 0
/* No VMS */
#define __has_vms__ 0
/* No VxWorks */
#define __has_vxworks__ 0
/* No Windows */
#define __has_windows__ 0
/* No Windows CE */
#define __has_windows_ce__ 0
/* No Wind/U Environment */
#define __has_windu__ 0
/* No z/OS */
#define __has_zos__ 0

#if defined(_AIX) || defined(__TOS_AIX__)
#undef __has_aix__
/* Has AIX */
#define __has_aix__ 1
#endif
#if defined(_ANDROID_)
#undef __has_android__
/* Has Android */
#define __has_android__ 1
#endif
#if defined(UTS)
#undef __has_amdahl_uts__
/* Has Amdahl UTS */
#define __has_amdahl_uts__ 1
#endif
#if defined(AMIGA) || defined(__amigaos__)
#undef __has_amiga__
/* Has AmigaOS */
#define __has_amiga__ 1
#endif
#if defined(aegis)
#undef __has_aegis__
/* Has Apollo AEGIS */
#define __has_aegis__ 1
#endif
#if defined(apollo)
#undef __has_apollo__
/* Has Apollo Domain/OS */
#define __has_apollo__ 1
#endif
#if defined(__BEOS__)
#undef __has_beos__
/* Has BeOS */
#define __has_beos__ 1
#endif
#if defined(__bg__) || defined(__TOS_BGQ__) || defined(__bgq__) || defined(__THW_BLUEGENE__)
#undef __has_blue_gene__
/* Has Blue Gene */
#define __has_blue_gene__ 1
#endif
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__DragonFly__)
#undef __has_bsd__
/* Has BSD */
#define __has_bsd__ 1
#endif
#if defined(__convex__)
#undef __has_convex__
/* Has ConvexOS */
#define __has_convex__ 1
#endif
#if defined(__CYGWIN__)
#undef __has_cygwin__
/* Has Cygwin Environment */
#define __has_cygwin__ 1
#endif
#if defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
#undef __has_dgux__
/* Has DG/UX */
#define __has_dgux__ 1
#endif
#if defined(_SEQUENT_) || defined(sequent)
#undef __has_dynix_ptx__
/* Has DYNIX/ptx */
#define __has_dynix_ptx__ 1
#endif
#if defined(__ECOS)
#undef __has_ecos__
/* Has eCos */
#define __has_ecos__ 1
#endif
#if defined(__EMX__)
#undef __has_emx__
/* Has EMX Environment */
#define __has_emx__ 1
#endif
#if defined(__HAIKU__)
/* Has Haiku */
#define __has_haiku__ 1
#endif
#if defined(__hiuxmpp)
#undef __has_hiux_mpp__
/* Has HI-UX MPP */
#define __has_hiux_mpp__ 1
#endif
#if defined(_hpux) || defined(hpux) || defined(__hpux)
#undef __has_hpux__
/* Has HP-US */
#define __has_hpux__ 1
#endif
#if defined(__OS400__) || defined(__OS400_TGTVRM__)
#undef __has_os_400__
/* Has IBM OS/400 */
#define __has_os_400__ 1
#endif
#if defined(__INTEGRITY)
#undef __has_integrity__
/* Has INTEGRITY */
#define __has_integrity__ 1
#endif
#if defined(__INTERIX)
#undef __has_interix__
/* Has Interix Environment */
#define __has_interix__ 1
#endif
#if defined(sgi) || defined(__sgi)
#undef __has_irix__
/* Has IRIX */
#define __has_irix__ 1
#endif
#if defined(__linux__) || defined(linux) || defined(__linux) || defined(__nividia_fk_you__)
#undef __has_linux__
/* Has Linux */
#define __has_linux__ 1
#endif
#if defined(__Lynx__)
#undef __has_lunx__
/* Has LynxOS */
#define __has_lunx__ 1
#endif
#if defined(macintosh) || defined(Macintosh) || defined(__APPLE__) || defined(__MACH__)
#undef __has_mac_os__
/* Has MacOS */
#define __has_mac_os__ 1
#endif
#if defined(__OS9000) || defined(_OSK)
#undef __has_microware_os_9__
/* Has Microware OS-9 */
#define __has_microware_os_9__ 1
#endif
#if defined(__minix)
#undef __has_minix__
/* Has MINIX */
#define __has_minix__ 1
#endif
#if defined(__MINGW32__) || defined(__MINGW64__)
/* Has MinGW */
#define __has_mingw__ 1
#endif
#if defined(__MORPHOS__)
#undef __has_morph_os__
/* Has MorphOS */
#define __has_morph_os__ 1
#endif
#if defined(mpeix) || defined(__mpexl)
#undef __has_mpe_ix__
/* Has MPE/iX */
#define __has_mpe_ix__ 1
#endif
#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(	__DOS__)
#undef __has_dos__
/* Has MSDOS (C++ Plus C unsupport platform) */
#define __has_dos__ 1
#endif
#if defined(__TANDEM)
#undef __has_non_stop__
/* Has NonStop */
#define __has_non_stop__ 1
#endif
#if defined(__nucleus__)
#undef __has_nucleus__
/* Has Nucleus RTOS */
#define __has_nucleus__ 1
#endif
#if defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
#undef __has_os2__
/* Has OS/2 */
#define __has_os2__ 1
#endif
#if defined(__palmos__)
#undef __has_palmos__
/* Has Palm OS */
#define __has_palmos__ 1
#endif
#if defined(EPLAN9)
#undef __has_eplan9__
/* Has EPLAN9 */
#define __has_eplan9__ 1
#endif
#if defined(pyr)
#undef __has_pyr__
/* Has Pyramid DC/OSx */
#define __has_pyr__ 1
#endif
#if defined(__QNX__) || defined(__QNXNTO__)
#undef __has_qnx__
/* Has QNX */
#define __has_qnx__ 1
#endif
#if defined(sinux)
#undef __has_reliant_unix__
/* Has Reliant UNIX */
#define __has_reliant_unix__ 1
#endif
#if defined(sun) || defined(__sun)
#undef __has_sun__
/* Has sun */
#define __has_sun__ 1
#if defined(__SVR4) || defined(__svr4__)
#undef __has_solaris__
/* Has Solaris */
#define __has_solaris__ 1
#else
#undef __has_sunos__
/* Has SunOS */
#define __has_sunos__ 1
#endif
#endif
#if defined(__VOS__)
#undef __has_vos__
/* Has Stratus VOS */
#define __has_vos__ 1
#endif
#if defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4)
#undef __has_svr4__
/* Has SVR4 Environment */
#define __has_svr4__ 1
#endif
#if defined(__SYLLABLE__)
#undef __has_syllable__
/* Has Syllable */
#define __has_syllable__ 1
#endif
#if defined(__SYMBIAN32__)
#undef __has_symbianos__
/* Has Symbian OS */
#define __has_symbianos__ 1
#endif
#if defined(__osf__) || defined(__osf)
#undef __has_ofs1__
/* Has OSF/1 */
#define __has_ofs1__ 1
#endif
#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || (defined(unix) && defined(vax))
#undef __has_ultrix__
/* Has Ultrix */
#define __has_ultrix__ 1
#endif
#if defined(_UNICOS)
#undef __has_unicos__
/* Has UNICOS */
#define __has_unicos__ 1
#endif
#if defined(_CRAY) || defined(__crayx1)
#undef __has_unicos_mp__
/* Has UNICOS/mp */
#define __has_unicos_mp__ 1
#endif
#if defined(__unix__) || defined(__unix)
#undef __has_unix__
/* Has UNIX Enviroment */
#define __has_unix__ 1
#endif
#if defined(sco) || defined(_UNIXWARE7)
#undef __has_unix_ware__
/* Has UnixWare */
#define __has_unix_ware__ 1
#endif
#if defined(_UWIN)
#undef __has_uwin__
/* Has U/Win Environment */
#define __has_uwin__ 1
#endif
#if defined(VMS) || defined(__VMS) || defined(__VMS_VER)
#undef __has_vms__
/* Has VMS */
#define __has_vms__ 1
#endif
#if defined(__VXWORKS__) || defined(__vxworks)
#undef __has_vxworks__
/* Has VxWorks */
#define __has_vxworks__ 1
#endif
#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#undef __has_windows__
/* Has Windows */
#define __has_windows__ 1
#endif
#if defined(_WIN32_WCE)
#undef __has_windows_ce__
/* Has Windows CE */
#define __has_windows_ce__ 1
#endif
#if defined(_WINDU_SOURCE)
#undef __has_windu__
/* Has Wind/U Environment */
#define __has_windu__ 1
#endif
#if defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
#undef __has_zos__
/* Has z/OS */
#define __has_zos__ 1
#endif
