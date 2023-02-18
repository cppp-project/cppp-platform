/*=============================================================================================*/
/*libplatform compilers*/

/*ACC*/
#define __has_acc__ 0
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

#if defined(_ACC_)
#undef __has_acc__
/*ACC*/
#define __has_acc__ 1
#endif
#if defined(__CMB__)
#undef __has_has_altium_microblaze_c_compiler__
/*Altium MicroBlaze C*/
#define __has_has_altium_microblaze_c_compiler__ 1
#endif
#if defined(__CHC__)
#undef __has_altium_c_to_hardware_compiler__
/*Altium C-to-Hardware*/
#define __has_altium_c_to_hardware_compiler__ 1
#endif
#if defined(__ACK__)
#undef __has_amsterdam_compiler__
/*Amsterdam Compiler Kit*/
#define __has_amsterdam_compiler__ 1
#endif
#if defined(__CC_ARM)
#undef __has_arm_compiler__
/*ARM Compiler*/
#define __has_arm_compiler__ 1
#endif
#if defined(AZTEC_C)
#undef __has_aztec_c_compiler__
/*Aztec C*/
#define __has_aztec_c_compiler__ 1
#endif
#if defined(__BORLANDC__)
#undef __has_borland_compiler__
/*Borland C/C++*/
#define __has_borland_compiler__ 1
#endif
#if defined(__CC65__)
#undef __has_cc65_compiler__
/*CC65*/
#define __has_cc65_compiler__ 1
#endif
#if defined(__clang__)
#undef __has_clang_compiler__
/*Clang*/
#define __has_clang_compiler__ 1
#endif
#if defined(__COMO__)
#undef __has_comeau_compiler__
/*Comeau*/
#define __has_comeau_compiler__ 1
#endif
#if defined(__DECC)
#undef __has_compaq_compiler__
/*Compaq C/C++*/
#define __has_compaq_compiler__ 1
#endif
#if defined(__convexc__)
#undef __has_convex_c_compiler__
/*Convex C*/
#define __has_convex_c_compiler__ 1
#endif
#if defined(__COMPCERT__)
#undef __has_compcert_compiler__
/*CompCert*/
#define __has_compcert_compiler__ 1
#endif
#if defined(__COVERITY__)
#undef __has_coverity_compiler__
/*Coverity C/C++ Static Analyzer*/
#define __has_coverity_compiler__ 1
#endif
#if defined(_CRAYC)
#undef __has_cray_c_compiler__
/*Cray C*/
#define __has_cray_c_compiler__ 1
#endif
#if defined(__DCC__)
#undef __has_diab_compiler__
/*Diab C/C++*/
#define __has_diab_compiler__ 1
#endif
#if defined(_DICE)
#undef __has_dice_c_compiler__
/*DICE C*/
#define __has_dice_c_compiler__ 1
#endif
#if defined(__DMC__)
#undef __has_digital_mars_compiler__
/*Digital Mars*/
#define __has_digital_mars_compiler__ 1
#endif
#if defined(__SYSC__)
#undef __has_dignus_systems_compiler__
/*Dignus Systems/C++*/
#define __has_dignus_systems_compiler__ 1
#endif
#if defined(__DJGPP__)
#undef __has_djgpp_compiler__
/*DJGPP*/
#define __has_djgpp_compiler__ 1
#endif
#if defined(__EDG__)
#undef __has_edg_compiler__
/*EDG C++ Frontend*/
#define __has_edg_compiler__ 1
#endif
#if defined(__PATHCC__)
#undef __has_ekopath_compiler__
/*EKOPath*/
#define __has_ekopath_compiler__ 1
#endif
#if defined(__FCC_VERSION)
#undef __has_fujitsu_compiler__
/*Fujitsu C++*/
#define __has_fujitsu_compiler__ 1
#endif
#if defined(__GNUC__)
#undef __has_gcc_compiler__
/*GCC C/C++*/
#define __has_gcc_compiler__ 1
#endif
#if defined(__ghs__)
#undef __has_greenhill_compiler__
/*Green Hill C/C++*/
#define __has_greenhill_compiler__ 1
#endif
#if defined(__HP_cc)
#undef __has_hpansi_c_compiler__
/*HP ANSI C*/
#define __has_hpansi_c_compiler__ 1
#endif
#if defined(__HP_aCC)
#undef __has_hpa_compiler__
/*HP aC++*/
#define __has_hpa_compiler__ 1
#endif
#if defined(__IAR_SYSTEMS_ICC__)
#undef __has_iar_compiler__
/*IAR C/C++*/
#define __has_iar_compiler__ 1
#endif
#if defined(__IMAGECRAFT__)
#undef __has_imagecraft_c_compiler__
/*ImageCraft C*/
#define __has_imagecraft_c_compiler__ 1
#endif
#if defined(__INTEL_COMPILER)
#undef __has_intel_compiler__
/*Intel C/C++*/
#define __has_intel_compiler__ 1
#endif
#if defined(__KCC)
#undef __has_kai_compiler__
/*KAI C++*/
#define __has_kai_compiler__ 1
#endif
#if defined(__CA__) || defined(__KEIL__)
#undef __has_keil_carm_compiler__
/*KEIL CARM*/
#define __has_keil_carm_compiler__ 1
#endif
#if defined(__C166__)
#undef __has_keil_c166_compiler__
/*KEIL C166*/
#define __has_keil_c166_compiler__ 1
#endif
#if defined(__C51__) || defined(__CX51__)
#undef __has_keil_c51_compiler__
/*KEIL C51*/
#define __has_keil_c51_compiler__ 1
#endif
#if defined(__LCC__)
#undef __has_lcc_compiler__
/*LCC*/
#define __has_lcc_compiler__ 1
#endif
#if defined(__llvm__)
#undef __has_llvm_compiler__
/*LLVM*/
#define __has_llvm_compiler__ 1
#endif
#if defined(__HIGHC__)
#undef __has_metaware_high_compiler__
/*MetaWare High C/C++*/
#define __has_metaware_high_compiler__ 1
#endif
#if defined(__MWERKS__)
#undef __has_metrowerks_codewarrior_compiler__
/*Metrowerks CodeWarrior*/
#define __has_metrowerks_codewarrior_compiler__ 1
#endif
#if defined(_MSC_VER)
#undef __has_msvc_compiler__
/*Microsoft Visual C++*/
#define __has_msvc_compiler__ 1
#endif
#if defined(_MRI)
#undef __has_microtec_compiler__
/*Microtec C/C++*/
#define __has_microtec_compiler__ 1
#endif
#if defined(__NDPC__)
#undef __has_microway_ndp_c_compiler__
/*Microway NDP C*/
#define __has_microway_ndp_c_compiler__ 1
#endif
#if defined(__MINGW32__) || defined(__MINGW64__)
#undef __has_mingw_compiler__
/*MinGW*/
#define __has_mingw_compiler__ 1
#endif
#if defined(__sgi) || defined(sgi)
#undef __has_mipspro_compiler__
/*MIPSpro*/
#define __has_mipspro_compiler__ 1
#endif
#if defined(MIRACLE)
#undef __has_miracle_c_compiler__
/*Miracle C*/
#define __has_miracle_c_compiler__ 1
#endif
#if defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
#undef __has_mpr_compiler__
/*MPW C++*/
#define __has_mpr_compiler__ 1
#endif
#if defined(__CC_NORCROFT)
#undef __has_norcroft_c_compiler__
/*Norcroft C*/
#define __has_norcroft_c_compiler__ 1
#endif
#if defined(__NWCC__)
#undef __has_nwcc_compiler__
/*NWCC*/
#define __has_nwcc_compiler__ 1
#endif
#if defined(__OPEN64__) || defined(__OPENCC__)
#undef __has_open64_compiler__
/*Open64*/
#define __has_open64_compiler__ 1
#endif
#if defined(ORA_PROC)
#undef __has_oracle_pro_compiler__
/*Oracle Pro*C Precompiler*/
#define __has_oracle_pro_compiler__ 1
#endif
#if defined(__SUNPRO_C)
#undef __has_oracle_solaris_studio_compiler__
/*Oracle Solaris Studio*/
#define __has_oracle_solaris_studio_compiler__ 1
#endif
#if defined(__PACIFIC__)
#undef __has_pacific_c_compiler__
/*Pacific C*/
#define __has_pacific_c_compiler__ 1
#endif
#if defined(_PACC_VER)
#undef __has_palm_compiler__
/*Palm C/C++*/
#define __has_palm_compiler__ 1
#endif
#if defined(__POCC__)
#undef __has_pelles_c_compiler__
/*Pelles C*/
#define __has_pelles_c_compiler__ 1
#endif
#if defined(__PGI)
#undef __has_portland_group_compiler__
/*Portland Group C/C++*/
#define __has_portland_group_compiler__ 1
#endif
#if defined(__RENESAS__)
#undef __has_renesas_compiler__
/*Renesas C/C++*/
#define __has_renesas_compiler__ 1
#endif
#if defined(SASC) || defined(__SASC) || defined(__SASC__)
#undef __has_sas_c_compiler__
/*SAS/C*/
#define __has_sas_c_compiler__ 1
#endif
#if defined(_SCO_DS)
#undef __has_sco_compiler__
/*SCO OpenServer*/
#define __has_sco_compiler__ 1
#endif
#if defined(SDCC)
#undef __has_small_device_compiler__
/*Small Device C Compiler*/
#define __has_small_device_compiler__ 1
#endif
#if defined(__SNC__)
#undef __has_sn_compiler__
/*SN Compiler*/
#define __has_sn_compiler__ 1
#endif
#if defined(__VOSC__)
#undef __has_stratus_vos_c_compiler__
/*Stratus VOS C*/
#define __has_stratus_vos_c_compiler__ 1
#endif
#if defined(__SC__)
#undef __has_symantec_compiler__
/*Symantec C++*/
#define __has_symantec_compiler__ 1
#endif
#if defined(__TenDRA__)
#undef __has_tendra_compiler__
/*TenDRA C/C++*/
#define __has_tendra_compiler__ 1
#endif
#if defined(__TI_COMPILER_VERSION__) || defined(_TMS320C6X)
#undef __has_texas_instruments_compiler__
/*Texas Instruments C/C++ Compiler*/
#define __has_texas_instruments_compiler__ 1
#endif
#if defined(THINKC3) || defined(THINKC4)
#undef __has_think_c_compiler__
/*THINK C*/
#define __has_think_c_compiler__ 1
#endif
#if defined(__TINYC__)
#undef __has_tiny_c_compiler__
/*Tiny C*/
#define __has_tiny_c_compiler__ 1
#endif
#if defined(__TURBOC__)
#undef __has_turboc_compiler__
/*Turbo C/C++*/
#define __has_turboc_compiler__ 1
#endif
#if defined(_UCC)
#undef __has_ultimate_compiler__
/*Ultimate C/C++*/
#define __has_ultimate_compiler__ 1
#endif
#if defined(__USLC__)
#undef __has_usl_c_compiler__
/*USL C*/
#define __has_usl_c_compiler__ 1
#endif
#if defined(__VBCC__)
#undef __has_vbcc_compiler__
/*VBCC*/
#define __has_vbcc_compiler__ 1
#endif
#if defined(__WATCOMC__)
#undef __has_watcom_compiler__
/*Watcom C++*/
#define __has_watcom_compiler__ 1
#endif
#if defined(__ZTC__)
#undef __has_zortech_compiler__
/*Zortech C++*/
#define __has_zortech_compiler__ 1
#endif
