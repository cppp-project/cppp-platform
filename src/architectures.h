/* Alpha */
#define __arch_alpha__ 1
/* x86 */
#define __arch_x86__ 2
/* ARM */
#define __arch_arm__ 3
/* Blackfin */
#define __arch_blackfin__ 4
/* Convex */
#define __arch_convex__ 5
/* Epiphany */
#define __arch_epiphany__ 6
/* HP/PA RISC */
#define __arch_hppa__ 7
/* Itanium */
#define __arch_itanium__ 8
/* Motorola 68k */
#define __arch_motorola68k__ 9
/* MIPS */
#define __arch_mips__ 10
/* PowerPC */
#define __arch_ppc__ 11
/* Pyramid 9810 */
#define __arch_pyramid9810__ 12
/* RS/6000 */
#define __arch_rs6000__ 13
/* SPARC */
#define __arch_sparc__ 14
/* SuperH */
#define __arch_superh__ 15
/* SystemZ */
#define __arch_systemz__ 16
/* TMS320 */
#define __arch_tms320__ 17
/* TMS470 */
#define __arch_tms470__ 18
/* Unknown architectures */
#define __arch_unknown__ 0

#define __arch__ __arch_unknown__
#define __arch_name__ "unknown"
#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_alpha__
#define __arch_name__ "Alpha"
#endif
#if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64) 
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_x86__
#define __arch_name__ "AMD64"
#define __lp_amd64_flag 1
#endif
#if defined(__aarch64__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_arm__
#define __arch_name__ "aarch64"
#endif
#if defined(__arm__) || defined(__thumb__) || defined(_ARM) || defined(_M_ARMT) || defined(__arm)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_arm__
#define __arch_name__ "ARM"
#endif
#if defined(__bfin) || defined(__BFIN__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_blackfin__
#define __arch_name__ "Blackfin"
#endif
#if defined(__convex__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_convex__
#define __arch_name__ "Convex"
#endif
#if defined(__epiphany__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_epiphany__
#define __arch_name__ "Epiphany"
#endif
#if defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_hppa__
#define __arch_name__ "HP/PA RISC"
#endif
#if (defined(i386) || defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__i386) || defined(__IA32__) || defined(_M_I86) || defined(_M_IX86) || defined(__X86__) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || defined(__386)) && !defined(__lp_amd64_flag)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_x86__
#define __arch_name__ "Intel x86"
#endif
#if defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_itanium__
#define __arch_name__ "Intel Itanium"
#endif
#if defined(__m68k__) || defined(M68000) || defined(__MC68K__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_motorola68k__
#define __arch_name__ "Motorola 68k"
#endif
#if defined(__mips__) || defined(mips) || defined(_MIPS_ISA) || defined(__mips) || defined(__MIPS__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_mips__
#define __arch_name__ "MIPS"
#endif
#if defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__ppc)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_ppc__
#define __arch_name__ "PowerPC"
#endif
#if defined(pyr)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_pyramid9810__
#define __arch_name__ "Pyramid 9810"
#endif
#if defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || defined(_ARCH_PWR4)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_rs6000__
#define __arch__ "RS/6000"
#endif
#if defined(__sparc__) || defined(__sparc)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_sparc__
#define __arch_name__ "SPARC"
#endif
#if defined(__sh__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_superh__
#define __arch_name__ "SuperH"
#endif
#if defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(__s390x__) || defined(__zarch__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_systemz__
#define __arch__ "SystemZ"
#endif
#if defined(_TMS320C2XX) || defined(__TMS320C2000__) || defined(_TMS320C5X) || defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_tms320__
#define __arch_name__ "TMS320"
#endif
#if defined(__TMS470__)
#undef __arch__
#undef __arch_name__
#define __arch__ __arch_tms470__
#define __arch_name__ "TMS470"
#endif

#ifndef __POINTER_WIDTH__
/* Pointer width 64/32/16... */
#define __POINTER_WIDTH__ (long)(sizeof(void*) * 8)
#endif
/* Fix amd64 and 8086 bug */
#undef __lp_amd64_flag
