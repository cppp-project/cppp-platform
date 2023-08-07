# Compilers
## Source
src/compilers.h
## Content
### \_\_has_xxx_compiler\_\_
#### Type
macros
#### Description
1 if there is a corresponding compiler, otherwise 0.
The 'xxx' here refers to the compiler name, and details can be found in the 'src/compilers.h' source code.

**Note: An environment may contain multiple compiler environments.**
#### Usage
```c
#include <cppp/cppp-platform.h>
#if __has_msvc_compiler__
#error "This project do not support MSVC!"
#endif
int main(){}
```
#### We provide preset compiler macros
| Compiler | Macro |
| :----: | :----: |
| ACC | \_\_has_acc_compiler\_\_ |
| Altium MicroBlaze C | \_\_has_has_altium_microblaze_c_compiler\_\_ |
| Altium C-to-Hardware | \_\_has_altium_c_to_hardware_compiler\_\_ |
| Amsterdam Compiler Kit | \_\_has_amsterdam_compiler\_\_ |
| ARM Compiler | \_\_has_arm_compiler\_\_ |
| Aztec C | \_\_has_aztec_c_compiler\_\_ |
| Borland C/C++ | \_\_has_borland_compiler\_\_ |
| CC65 | \_\_has_cc65_compiler\_\_ |
| Clang | \_\_has_clang_compiler\_\_ |
| Comeau | \_\_has_comeau_compiler\_\_ |
| Compaq C/C++ | \_\_has_compaq_compiler\_\_ |
| Convex C | \_\_has_convex_c_compiler\_\_ |
| CompCert | \_\_has_compcert_compiler\_\_ |
| Coverity C/C++ Static Analyzer | \_\_has_coverity_compiler\_\_ |
| Cray C | \_\_has_cray_c_compiler\_\_ |
| Diab C/C++ | \_\_has_diab_compiler\_\_ |
| DICE C | \_\_has_dice_c_compiler\_\_ |
| Digital Mars | \_\_has_digital_mars_compiler\_\_ |
| Dignus Systems/C++ | \_\_has_dignus_systems_compiler\_\_ |
| DJGPP | \_\_has_djgpp_compiler\_\_ |
| EDG C++ Frontend | \_\_has_edg_compiler\_\_ |
| EKOPath | \_\_has_ekopath_compiler\_\_ |
| Fujitsu C++ | \_\_has_fujitsu_compiler\_\_ |
| GCC C/C++ | \_\_has_gcc_compiler\_\_ |
| Green Hill C/C++ | \_\_has_greenhill_compiler\_\_ |
| HP ANSI C | \_\_has_hpansi_c_compiler\_\_ |
| HP aC++ | \_\_has_hpa_compiler\_\_ |
| IAR C/C++ | \_\_has_iar_compiler\_\_ |
| ImageCraft C | \_\_has_imagecraft_c_compiler\_\_ |
| Intel C/C++ | \_\_has_intel_compiler\_\_ |
| KAI C++ | \_\_has_kai_compiler\_\_ |
| KEIL CARM | \_\_has_keil_carm_compiler\_\_ |
| KEIL C166 | \_\_has_keil_c166_compiler\_\_ |
| KEIL C51 | \_\_has_keil_c51_compiler\_\_ |
| LCC | \_\_has_lcc_compiler\_\_ |
| LLVM | \_\_has_llvm_compiler\_\_ |
| MetaWare High C/C++ | \_\_has_metaware_high_compiler\_\_ |
| Metrowerks CodeWarrior | \_\_has_metrowerks_codewarrior_compiler\_\_ |
| Microsoft Visual C++ | \_\_has_msvc_compiler\_\_ |
| Microtec C/C++ | \_\_has_microtec_compiler\_\_ |
| Microway NDP C | \_\_has_microway_ndp_c_compiler\_\_ |
| MinGW | \_\_has_mingw_compiler\_\_ |
| MIPSpro | \_\_has_mipspro_compiler\_\_ |
| Miracle C | \_\_has_miracle_c_compiler\_\_ |
| MPW C++ | \_\_has_mpr_compiler\_\_ |
| Norcroft C | \_\_has_norcroft_c_compiler\_\_ |
| NWCC | \_\_has_nwcc_compiler\_\_ |
| Open64 | \_\_has_open64_compiler\_\_ |
| Oracle Pro*C Precompiler | \_\_has_oracle_pro_compiler\_\_ |
| Oracle Solaris Studio | \_\_has_oracle_solaris_studio_compiler\_\_ |
| Pacific C | \_\_has_pacific_c_compiler\_\_ |
| Palm C/C++ | \_\_has_palm_compiler\_\_ |
| Pelles C | \_\_has_pelles_c_compiler\_\_ |
| Portland Group C/C++ | \_\_has_portland_group_compiler\_\_ |
| Renesas C/C++ | \_\_has_renesas_compiler\_\_ |
| SAS/C | \_\_has_sas_c_compiler\_\_ |
| SCO OpenServer | \_\_has_sco_compiler\_\_ |
| Small Device C Compiler | \_\_has_small_device_compiler\_\_ |
| SN Compiler | \_\_has_sn_compiler\_\_ |
| Stratus VOS C | \_\_has_stratus_vos_c_compiler\_\_ |
| Symantec C++ | \_\_has_symantec_compiler\_\_ |
| TenDRA C/C++ | \_\_has_tendra_compiler\_\_ |
| Texas Instruments C/C++ Compiler | \_\_has_texas_instruments_compiler\_\_ |
| THINK C | \_\_has_think_c_compiler\_\_ |
| Tiny C | \_\_has_tiny_c_compiler\_\_ |
| Turbo C/C++ | \_\_has_turboc_compiler\_\_ |
| Ultimate C/C++ | \_\_has_ultimate_compiler\_\_ |
| USL C | \_\_has_usl_c_compiler\_\_ |
| VBCC | \_\_has_vbcc_compiler\_\_ |
| Watcom C++ | \_\_has_watcom_compiler\_\_ |
| Zortech C++ | \_\_has_zortech_compiler\_\_ |
