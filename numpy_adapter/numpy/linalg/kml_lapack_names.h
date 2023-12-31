/*
 * NOTE: This is generated code. Look in numpy/linalg/lapack_lite for
 *       information on remaking this file.
 */
/*
 * This file renames all BLAS/LAPACK and f2c symbols to avoid
 * dynamic symbol name conflicts, in cases where e.g.
 * integer sizes do not match with 'standard' ABI.
 */
#ifndef KML_LAPACK_NAMES_H
#define KML_LAPACK_NAMES_H

#define caxpy caxpy_
#define ccopy ccopy_
#define cdotc cdotc_
#define cdotu cdotu_
#define cgebak cgebak_
#define cgebal cgebal_
#define cgebd2 cgebd2_
#define cgebrd cgebrd_
#define cgeev cgeev_
// #define cgeev_aux cgeev_aux_
#define cgehd2 cgehd2_
#define cgehrd cgehrd_
#define cgelq2 cgelq2_
#define cgelqf cgelqf_
#define cgelsd cgelsd_
#define cgemm cgemm_
#define cgemv cgemv_
#define cgeqr2 cgeqr2_
#define cgeqrf cgeqrf_
#define cgerc cgerc_
#define cgeru cgeru_
#define cgesdd cgesdd_
#define cgesv cgesv_
#define cgetf2 cgetf2_
#define cgetrf cgetrf_
#define cgetrs cgetrs_
#define cheevd cheevd_
#define chemv chemv_
#define cher2 cher2_
#define cher2k cher2k_
#define cherk cherk_
#define chetd2 chetd2_
#define chetrd chetrd_
#define chseqr chseqr_
#define clabrd clabrd_
#define clacgv clacgv_
#define clacp2 clacp2_
#define clacpy clacpy_
#define clacrm clacrm_
#define cladiv cladiv_
#define claed0 claed0_
#define claed7 claed7_
#define claed8 claed8_
#define clahqr clahqr_
#define clahr2 clahr2_
#define clals0 clals0_
#define clalsa clalsa_
#define clalsd clalsd_
#define clange clange_
#define clanhe clanhe_
#define claqr0 claqr0_
#define claqr1 claqr1_
#define claqr2 claqr2_
#define claqr3 claqr3_
#define claqr4 claqr4_
#define claqr5 claqr5_
#define clarcm clarcm_
#define clarf clarf_
#define clarfb clarfb_
#define clarfg clarfg_
#define clarft clarft_
#define clartg clartg_
#define clascl clascl_
#define claset claset_
#define clasr clasr_
#define classq classq_
#define claswp claswp_
#define clatrd clatrd_
#define clatrs clatrs_
#define clauu2 clauu2_
#define clauum clauum_
#define cpotf2 cpotf2_
#define cpotrf cpotrf_
#define cpotri cpotri_
#define cpotrs cpotrs_
#define crot crot_
#define cscal cscal_
#define csrot csrot_
#define csscal csscal_
#define cstedc cstedc_
#define csteqr csteqr_
#define cswap cswap_
#define ctrevc ctrevc_
#define ctrexc ctrexc_
#define ctrmm ctrmm_
#define ctrmv ctrmv_
#define ctrsm ctrsm_
#define ctrsv ctrsv_
#define ctrti2 ctrti2_
#define ctrtri ctrtri_
#define cung2r cung2r_
#define cungbr cungbr_
#define cunghr cunghr_
#define cungl2 cungl2_
#define cunglq cunglq_
#define cungqr cungqr_
#define cunm2l cunm2l_
#define cunm2r cunm2r_
#define cunmbr cunmbr_
#define cunmhr cunmhr_
#define cunml2 cunml2_
#define cunmlq cunmlq_
#define cunmql cunmql_
#define cunmqr cunmqr_
#define cunmtr cunmtr_
#define daxpy daxpy_
#define dbdsdc dbdsdc_
#define dbdsqr dbdsqr_
#define dcabs1 dcabs1_
#define dcopy dcopy_
#define ddot ddot_
#define dgebak dgebak_
#define dgebal dgebal_
#define dgebd2 dgebd2_
#define dgebrd dgebrd_
#define dgeev dgeev_
// #define dgeev_aux dgeev_aux_
#define dgehd2 dgehd2_
#define dgehrd dgehrd_
#define dgelq2 dgelq2_
#define dgelqf dgelqf_
#define dgelsd dgelsd_
#define dgemm dgemm_
#define dgemv dgemv_
#define dgeqr2 dgeqr2_
#define dgeqrf dgeqrf_
#define dger dger_
#define dgesdd dgesdd_
#define dgesv dgesv_
#define dgetf2 dgetf2_
#define dgetrf dgetrf_
#define dgetrs dgetrs_
#define dhseqr dhseqr_
#define disnan disnan_
#define dlabad dlabad_
#define dlabrd dlabrd_
#define dlacpy dlacpy_
#define dladiv dladiv_
#define dlae2 dlae2_
#define dlaed0 dlaed0_
#define dlaed1 dlaed1_
#define dlaed2 dlaed2_
#define dlaed3 dlaed3_
#define dlaed4 dlaed4_
#define dlaed5 dlaed5_
#define dlaed6 dlaed6_
#define dlaed7 dlaed7_
#define dlaed8 dlaed8_
#define dlaed9 dlaed9_
#define dlaeda dlaeda_
#define dlaev2 dlaev2_
#define dlaexc dlaexc_
#define dlahqr dlahqr_
#define dlahr2 dlahr2_
#define dlaisnan dlaisnan_
#define dlaln2 dlaln2_
#define dlals0 dlals0_
#define dlalsa dlalsa_
#define dlalsd dlalsd_
#define dlamc1 dlamc1_
#define dlamc2 dlamc2_
#define dlamc3 dlamc3_
#define dlamc4 dlamc4_
#define dlamc5 dlamc5_
#define dlamch dlamch_
#define dlamrg dlamrg_
#define dlange dlange_
#define dlanst dlanst_
#define dlansy dlansy_
#define dlanv2 dlanv2_
#define dlapy2 dlapy2_
#define dlapy3 dlapy3_
#define dlaqr0 dlaqr0_
#define dlaqr1 dlaqr1_
#define dlaqr2 dlaqr2_
#define dlaqr3 dlaqr3_
#define dlaqr4 dlaqr4_
#define dlaqr5 dlaqr5_
#define dlarf dlarf_
#define dlarfb dlarfb_
#define dlarfg dlarfg_
#define dlarft dlarft_
#define dlarfx dlarfx_
#define dlartg dlartg_
#define dlas2 dlas2_
#define dlascl dlascl_
#define dlasd0 dlasd0_
#define dlasd1 dlasd1_
#define dlasd2 dlasd2_
#define dlasd3 dlasd3_
#define dlasd4 dlasd4_
#define dlasd5 dlasd5_
#define dlasd6 dlasd6_
#define dlasd7 dlasd7_
#define dlasd8 dlasd8_
#define dlasda dlasda_
#define dlasdq dlasdq_
#define dlasdt dlasdt_
#define dlaset dlaset_
#define dlasq1 dlasq1_
#define dlasq2 dlasq2_
#define dlasq3 dlasq3_
#define dlasq4 dlasq4_
#define dlasq5 dlasq5_
#define dlasq6 dlasq6_
#define dlasr dlasr_
#define dlasrt dlasrt_
#define dlassq dlassq_
#define dlasv2 dlasv2_
#define dlaswp dlaswp_
#define dlasy2 dlasy2_
#define dlatrd dlatrd_
#define dlauu2 dlauu2_
#define dlauum dlauum_
#define dnrm2 dnrm2_
#define dorg2r dorg2r_
#define dorgbr dorgbr_
#define dorghr dorghr_
#define dorgl2 dorgl2_
#define dorglq dorglq_
#define dorgqr dorgqr_
#define dorm2l dorm2l_
#define dorm2r dorm2r_
#define dormbr dormbr_
#define dormhr dormhr_
#define dorml2 dorml2_
#define dormlq dormlq_
#define dormql dormql_
#define dormqr dormqr_
#define dormtr dormtr_
#define dpotf2 dpotf2_
#define dpotrf dpotrf_
#define dpotri dpotri_
#define dpotrs dpotrs_
#define drot drot_
#define dscal dscal_
#define dstedc dstedc_
#define dsteqr dsteqr_
#define dsterf dsterf_
#define dswap dswap_
#define dsyevd dsyevd_
#define dsymv dsymv_
#define dsyr2 dsyr2_
#define dsyr2k dsyr2k_
#define dsyrk dsyrk_
#define dsytd2 dsytd2_
#define dsytrd dsytrd_
#define dtrevc dtrevc_
#define dtrexc dtrexc_
#define dtrmm dtrmm_
#define dtrmv dtrmv_
#define dtrsm dtrsm_
#define dtrti2 dtrti2_
#define dtrtri dtrtri_
#define dzasum dzasum_
#define dznrm2 dznrm2_
#define icamax icamax_
#define idamax idamax_
#define ieeeck ieeeck_
#define ilaclc ilaclc_
#define ilaclr ilaclr_
#define iladlc iladlc_
#define iladlr iladlr_
#define ilaenv ilaenv_
#define ilaslc ilaslc_
#define ilaslr ilaslr_
#define ilazlc ilazlc_
#define ilazlr ilazlr_
#define iparmq iparmq_
#define isamax isamax_
#define izamax izamax_
#define lsame lsame_
#define saxpy saxpy_
#define sbdsdc sbdsdc_
#define sbdsqr sbdsqr_
#define scabs1 scabs1_
#define scasum scasum_
#define scnrm2 scnrm2_
#define scopy scopy_
#define sdot sdot_
#define sgebak sgebak_
#define sgebal sgebal_
#define sgebd2 sgebd2_
#define sgebrd sgebrd_
#define sgeev sgeev_
// #define sgeev_aux sgeev_aux_
#define sgehd2 sgehd2_
#define sgehrd sgehrd_
#define sgelq2 sgelq2_
#define sgelqf sgelqf_
#define sgelsd sgelsd_
#define sgemm sgemm_
#define sgemv sgemv_
#define sgeqr2 sgeqr2_
#define sgeqrf sgeqrf_
#define sger sger_
#define sgesdd sgesdd_
#define sgesv sgesv_
#define sgetf2 sgetf2_
#define sgetrf sgetrf_
#define sgetrs sgetrs_
#define shseqr shseqr_
#define sisnan sisnan_
#define slabad slabad_
#define slabrd slabrd_
#define slacpy slacpy_
#define sladiv sladiv_
#define slae2 slae2_
#define slaed0 slaed0_
#define slaed1 slaed1_
#define slaed2 slaed2_
#define slaed3 slaed3_
#define slaed4 slaed4_
#define slaed5 slaed5_
#define slaed6 slaed6_
#define slaed7 slaed7_
#define slaed8 slaed8_
#define slaed9 slaed9_
#define slaeda slaeda_
#define slaev2 slaev2_
#define slaexc slaexc_
#define slahqr slahqr_
#define slahr2 slahr2_
#define slaisnan slaisnan_
#define slaln2 slaln2_
#define slals0 slals0_
#define slalsa slalsa_
#define slalsd slalsd_
#define slamc1 slamc1_
#define slamc2 slamc2_
#define slamc3 slamc3_
#define slamc4 slamc4_
#define slamc5 slamc5_
#define slamch slamch_
#define slamrg slamrg_
#define slange slange_
#define slanst slanst_
#define slansy slansy_
#define slanv2 slanv2_
#define slapy2 slapy2_
#define slapy3 slapy3_
#define slaqr0 slaqr0_
#define slaqr1 slaqr1_
#define slaqr2 slaqr2_
#define slaqr3 slaqr3_
#define slaqr4 slaqr4_
#define slaqr5 slaqr5_
#define slarf slarf_
#define slarfb slarfb_
#define slarfg slarfg_
#define slarft slarft_
#define slarfx slarfx_
#define slartg slartg_
#define slas2 slas2_
#define slascl slascl_
#define slasd0 slasd0_
#define slasd1 slasd1_
#define slasd2 slasd2_
#define slasd3 slasd3_
#define slasd4 slasd4_
#define slasd5 slasd5_
#define slasd6 slasd6_
#define slasd7 slasd7_
#define slasd8 slasd8_
#define slasda slasda_
#define slasdq slasdq_
#define slasdt slasdt_
#define slaset slaset_
#define slasq1 slasq1_
#define slasq2 slasq2_
#define slasq3 slasq3_
#define slasq4 slasq4_
#define slasq5 slasq5_
#define slasq6 slasq6_
#define slasr slasr_
#define slasrt slasrt_
#define slassq slassq_
#define slasv2 slasv2_
#define slaswp slaswp_
#define slasy2 slasy2_
#define slatrd slatrd_
#define slauu2 slauu2_
#define slauum slauum_
#define snrm2 snrm2_
#define sorg2r sorg2r_
#define sorgbr sorgbr_
#define sorghr sorghr_
#define sorgl2 sorgl2_
#define sorglq sorglq_
#define sorgqr sorgqr_
#define sorm2l sorm2l_
#define sorm2r sorm2r_
#define sormbr sormbr_
#define sormhr sormhr_
#define sorml2 sorml2_
#define sormlq sormlq_
#define sormql sormql_
#define sormqr sormqr_
#define sormtr sormtr_
#define spotf2 spotf2_
#define spotrf spotrf_
#define spotri spotri_
#define spotrs spotrs_
#define srot srot_
#define sscal sscal_
#define sstedc sstedc_
#define ssteqr ssteqr_
#define ssterf ssterf_
#define sswap sswap_
#define ssyevd ssyevd_
#define ssymv ssymv_
#define ssyr2 ssyr2_
#define ssyr2k ssyr2k_
#define ssyrk ssyrk_
#define ssytd2 ssytd2_
#define ssytrd ssytrd_
#define strevc strevc_
#define strexc strexc_
#define strmm strmm_
#define strmv strmv_
#define strsm strsm_
#define strti2 strti2_
#define strtri strtri_
#define xerbla xerbla_
#define zaxpy zaxpy_
#define zcopy zcopy_
#define zdotc zdotc_
#define zdotu zdotu_
#define zdrot zdrot_
#define zdscal zdscal_
#define zgebak zgebak_
#define zgebal zgebal_
#define zgebd2 zgebd2_
#define zgebrd zgebrd_
#define zgeev zgeev_
// #define zgeev_aux zgeev_aux_
#define zgehd2 zgehd2_
#define zgehrd zgehrd_
#define zgelq2 zgelq2_
#define zgelqf zgelqf_
#define zgelsd zgelsd_
#define zgemm zgemm_
#define zgemv zgemv_
#define zgeqr2 zgeqr2_
#define zgeqrf zgeqrf_
#define zgerc zgerc_
#define zgeru zgeru_
#define zgesdd zgesdd_
#define zgesv zgesv_
#define zgetf2 zgetf2_
#define zgetrf zgetrf_
#define zgetrs zgetrs_
#define zheevd zheevd_
#define zhemv zhemv_
#define zher2 zher2_
#define zher2k zher2k_
#define zherk zherk_
#define zhetd2 zhetd2_
#define zhetrd zhetrd_
#define zhseqr zhseqr_
#define zlabrd zlabrd_
#define zlacgv zlacgv_
#define zlacp2 zlacp2_
#define zlacpy zlacpy_
#define zlacrm zlacrm_
#define zladiv zladiv_
#define zlaed0 zlaed0_
#define zlaed7 zlaed7_
#define zlaed8 zlaed8_
#define zlahqr zlahqr_
#define zlahr2 zlahr2_
#define zlals0 zlals0_
#define zlalsa zlalsa_
#define zlalsd zlalsd_
#define zlange zlange_
#define zlanhe zlanhe_
#define zlaqr0 zlaqr0_
#define zlaqr1 zlaqr1_
#define zlaqr2 zlaqr2_
#define zlaqr3 zlaqr3_
#define zlaqr4 zlaqr4_
#define zlaqr5 zlaqr5_
#define zlarcm zlarcm_
#define zlarf zlarf_
#define zlarfb zlarfb_
#define zlarfg zlarfg_
#define zlarft zlarft_
#define zlartg zlartg_
#define zlascl zlascl_
#define zlaset zlaset_
#define zlasr zlasr_
#define zlassq zlassq_
#define zlaswp zlaswp_
#define zlatrd zlatrd_
#define zlatrs zlatrs_
#define zlauu2 zlauu2_
#define zlauum zlauum_
#define zpotf2 zpotf2_
#define zpotrf zpotrf_
#define zpotri zpotri_
#define zpotrs zpotrs_
#define zrot zrot_
#define zscal zscal_
#define zstedc zstedc_
#define zsteqr zsteqr_
#define zswap zswap_
#define ztrevc ztrevc_
#define ztrexc ztrexc_
#define ztrmm ztrmm_
#define ztrmv ztrmv_
#define ztrsm ztrsm_
#define ztrsv ztrsv_
#define ztrti2 ztrti2_
#define ztrtri ztrtri_
#define zung2r zung2r_
#define zungbr zungbr_
#define zunghr zunghr_
#define zungl2 zungl2_
#define zunglq zunglq_
#define zungqr zungqr_
#define zunm2l zunm2l_
#define zunm2r zunm2r_
#define zunmbr zunmbr_
#define zunmhr zunmhr_
#define zunml2 zunml2_
#define zunmlq zunmlq_
#define zunmql zunmql_
#define zunmqr zunmqr_
#define zunmtr zunmtr_

#endif
