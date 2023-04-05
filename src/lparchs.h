/*=============================================================================================*/
/*libplatform archs*/

/*Alpha*/
#define __arch_alpha__ "Alpha"
/*x86*/
#define __arch_x86__ "x86"
/*ARM*/
#define __arch_arm__ "ARM"
/*Blackfin*/
#define __arch_blackfin__ "Blackfin"
/*Convex*/
#define __arch_convex__ "Convex"
/*Epiphany*/
#define __arch_epiphany__ "Epiphany"
/*HP/PA RISC*/
#define __arch_hppa__ "HP/PA RISC"
/*Itanium*/
#define __arch_itanium__ "Itanium"
/*Motorola 68k*/
#define __arch_motorola68k__ "Motorola 68k"
/*MIPS*/
#define __arch_mips__ "MIPS"
/*PowerPC*/
#define __arch_ppc__ "PowerPC"
/*Pyramid 9810*/
#define __arch_pyramid9810__ "Pyramid 9810"
/*RS/6000*/
#define __arch_rs6000__ "RS/6000"
/*SPARC*/
#define __arch_sparc__ "SPARC"
/*SuperH*/
#define __arch_superh__ "SuperH"
/*SystemZ*/
#define __arch_systemz__ "SystemZ"
/*TMS320*/
#define __arch_tms320__ "TMS320"
/*TMS470*/
#define __arch_tms470__ "TMS470"
/*unknown arch*/
#define __arch_unknown__ "unknown"

#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#define __arch__ __arch_alpha__
#define __arch_name__ "Alpha"
#elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64) 
#define __arch__ __arch_x86__
#define __arch_name__ "AMD64"
#elif defined(__aarch64__)
#define __arch__ __arch_arm__
#define __arch_name__ "aarch64"
#elif defined(__arm__) || defined(__thumb__) || defined(_ARM) || defined(_M_ARMT) || defined(__arm)
#define __arch__ __arch_arm__
#define __arch_name__ "ARM"
#elif defined(__bfin) || defined(__BFIN__)
#define __arch__ __arch_blackfin__
#define __arch_name__ "Blackfin"
#elif defined(__convex__)
#define __arch__ __arch_convex__
#define __arch_name__ "Convex"
#elif defined(__epiphany__)
#define __arch__ __arch_epiphany__
#define __arch_name__ "Epiphany"
#elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
#define __arch__ __arch_hppa__
#define __arch_name__ "HP/PA RISC"
#elif defined(i386) || defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__i386) || defined(__IA32__) || defined(_M_I86) || defined(_M_IX86) || defined(__X86__) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || defined(__386)
#define __arch__ __arch_x86__
#define __arch_name__ "Intel x86"
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
#define __arch__ __arch_itanium__
#define __arch_name__ "Intel Itanium"
#elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
#define __arch__ __arch_motorola68k__
#define __arch_name__ "Motorola 68k"
#elif defined(__mips__) || defined(mips) || defined(_MIPS_ISA) || defined(__mips) || defined(__MIPS__)
#define __arch__ __arch_mips__
#define __arch_name__ "MIPS"
#elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__ppc)
#define __arch__ __arch_ppc__
#define __arch_name__ "PowerPC"
#elif defined(pyr)
#define __arch__ __arch_pyramid9810__
#define __arch_name__ "Pyramid 9810"
#elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || defined(_ARCH_PWR4)
#define __arch__ __arch_rs6000__
#define __arch__ "RS/6000"
#elif defined(__sparc__) || defined(__sparc)
#define __arch__ __arch_sparc__
#define __arch_name__ "SPARC"
#elif defined(__sh__)
#define __arch__ __arch_superh__
#define __arch_name__ "SuperH"
#elif defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(__s390x__) || defined(__zarch__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
#define __arch__ __arch_systemz__
#define __arch__ "SystemZ"
#elif defined(_TMS320C2XX) || defined(__TMS320C2000__) || defined(_TMS320C5X) || defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__)
#define __arch__ __arch_tms320__
#define __arch_name__ "TMS320"
#elif defined(__TMS470__)
#define __arch__ __arch_tms470__
#define __arch_name__ "TMS470"
#else
#define __arch__ __arch_unknown__
#define __arch_name__ __arch_unknown__
#endif

#ifndef __POINTER_WIDTH__
/*pointer width 64/32/16...*/
#define __POINTER_WIDTH__ (sizeof(void*) * 8)
#endif
