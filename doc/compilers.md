# Compilers
## Source
include/platform_predef/compilers.h
## Content
## \_\_has_xxx_compiler\_\_
#### Type
macros
#### Description
1 if there is a corresponding compiler, otherwise 0.
The 'xxx' here refers to the compiler name, and details can be found in the 'src/lpcomps.h' source code.

**Note: An environment may contain multiple compiler environments**
#### Usage
```c
#include <cppp/libplatform.h>
#if __has_msvc_compiler__
#error "You are compile with MSVC!"
#endif
int main(){}
```
#### Prototype
```c
/*ACC*/
#define __has_acc_compiler__ 0
/*Altium MicroBlaze C*/
#define __has_has_altium_microblaze_c_compiler__ 0
/*Altium C-to-Hardware*/
#define __has_altium_c_to_hardware_compiler__ 0
/*Amsterdam Compiler Kit*/
#define __has_amsterdam_compiler__ 0
/*ARM Compiler*/
#define __has_arm_compiler__ 0
/*Aztec C*/
#define __has_aztec_c_compiler__ 0
/*Borland C/C++*/
#define __has_borland_compiler__ 0
/*CC65*/
#define __has_cc65_compiler__ 0
/*Clang*/
#define __has_clang_compiler__ 0
/*Comeau*/
#define __has_comeau_compiler__ 0
/*Compaq C/C++*/
#define __has_compaq_compiler__ 0
/*Convex C*/
#define __has_convex_c_compiler__ 0
/*CompCert*/
#define __has_compcert_compiler__ 0
/*Coverity C/C++ Static Analyzer*/
#define __has_coverity_compiler__ 0
/*Cray C*/
#define __has_cray_c_compiler__ 0
/*Diab C/C++*/
#define __has_diab_compiler__ 0
/*DICE C*/
#define __has_dice_c_compiler__ 0
/*Digital Mars*/
#define __has_digital_mars_compiler__ 0
/*Dignus Systems/C++*/
#define __has_dignus_systems_compiler__ 0
/*DJGPP*/
#define __has_djgpp_compiler__ 0
/*EDG C++ Frontend*/
#define __has_edg_compiler__ 0
/*EKOPath*/
#define __has_ekopath_compiler__ 0
/*Fujitsu C++*/
#define __has_fujitsu_compiler__ 0
/*GCC C/C++*/
#define __has_gcc_compiler__ 0
/*Green Hill C/C++*/
#define __has_greenhill_compiler__ 0
/*HP ANSI C*/
#define __has_hpansi_c_compiler__ 0
/*HP aC++*/
#define __has_hpa_compiler__ 0
/*IAR C/C++*/
#define __has_iar_compiler__ 0
/*ImageCraft C*/
#define __has_imagecraft_c_compiler__ 0
/*Intel C/C++*/
#define __has_intel_compiler__ 0
/*KAI C++*/
#define __has_kai_compiler__ 0
/*KEIL CARM*/
#define __has_keil_carm_compiler__ 0
/*KEIL C166*/
#define __has_keil_c166_compiler__ 0
/*KEIL C51*/
#define __has_keil_c51_compiler__ 0
/*LCC*/
#define __has_lcc_compiler__ 0
/*LLVM*/
#define __has_llvm_compiler__ 0
/*MetaWare High C/C++*/
#define __has_metaware_high_compiler__ 0
/*Metrowerks CodeWarrior*/
#define __has_metrowerks_codewarrior_compiler__ 0
/*Microsoft Visual C++*/
#define __has_msvc_compiler__ 0
/*Microtec C/C++*/
#define __has_microtec_compiler__ 0
/*Microway NDP C*/
#define __has_microway_ndp_c_compiler__ 0
/*MinGW*/
#define __has_mingw_compiler__ 0
/*MIPSpro*/
#define __has_mipspro_compiler__ 0
/*Miracle C*/
#define __has_miracle_c_compiler__ 0
/*MPW C++*/
#define __has_mpr_compiler__ 0
/*Norcroft C*/
#define __has_norcroft_c_compiler__ 0
/*NWCC*/
#define __has_nwcc_compiler__ 0
/*Open64*/
#define __has_open64_compiler__ 0
/*Oracle Pro*C Precompiler*/
#define __has_oracle_pro_compiler__ 0
/*Oracle Solaris Studio*/
#define __has_oracle_solaris_studio_compiler__ 0
/*Pacific C*/
#define __has_pacific_c_compiler__ 0
/*Palm C/C++*/
#define __has_palm_compiler__ 0
/*Pelles C*/
#define __has_pelles_c_compiler__ 0
/*Portland Group C/C++*/
#define __has_portland_group_compiler__ 0
/*Renesas C/C++*/
#define __has_renesas_compiler__ 0
/*SAS/C*/
#define __has_sas_c_compiler__ 0
/*SCO OpenServer*/
#define __has_sco_compiler__ 0
/*Small Device C Compiler*/
#define __has_small_device_compiler__ 0
/*SN Compiler*/
#define __has_sn_compiler__ 0
/*Stratus VOS C*/
#define __has_stratus_vos_c_compiler__ 0
/*Symantec C++*/
#define __has_symantec_compiler__ 0
/*TenDRA C/C++*/
#define __has_tendra_compiler__ 0
/*Texas Instruments C/C++ Compiler*/
#define __has_texas_instruments_compiler__ 0
/*THINK C*/
#define __has_think_c_compiler__ 0
/*Tiny C*/
#define __has_tiny_c_compiler__ 0
/*Turbo C/C++*/
#define __has_turboc_compiler__ 0
/*Ultimate C/C++*/
#define __has_ultimate_compiler__ 0
/*USL C*/
#define __has_usl_c_compiler__ 0
/*VBCC*/
#define __has_vbcc_compiler__ 0
/*Watcom C++*/
#define __has_watcom_compiler__ 0
/*Zortech C++*/
#define __has_zortech_compiler__ 0
```
