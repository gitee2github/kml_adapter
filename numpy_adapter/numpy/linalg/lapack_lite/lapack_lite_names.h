/*
 * NOTE: This is generated code. Look in numpy/linalg/lapack_lite for
 *       information on remaking this file.
 */
/*
 * This file renames all BLAS/LAPACK and f2c symbols to avoid
 * dynamic symbol name conflicts, in cases where e.g.
 * integer sizes do not match with 'standard' ABI.
 */
#define caxpy_ (caxpy)
#define ccopy_ (ccopy)
#define cdotc_ (cdotc)
#define cdotu_ (cdotu)
#define cgebak_ (cgebak)
#define cgebal_ (cgebal)
#define cgebd2_ (cgebd2)
#define cgebrd_ (cgebrd)
#define cgeev_ (cgeev)
#define cgehd2_ (cgehd2)
#define cgehrd_ (cgehrd)
#define cgelq2_ (cgelq2)
#define cgelqf_ (cgelqf)
#define cgelsd_ (cgelsd)
#define cgemm_ (cgemm)
#define cgemv_ (cgemv)
#define cgeqr2_ (cgeqr2)
#define cgeqrf_ (cgeqrf)
#define cgerc_ (cgerc)
#define cgeru_ (cgeru)
#define cgesdd_ (cgesdd)
#define cgesv_ (cgesv)
#define cgetf2_ (cgetf2)
#define cgetrf_ (cgetrf)
#define cgetrs_ (cgetrs)
#define cheevd_ (cheevd)
#define chemv_ (chemv)
#define cher2_ (cher2)
#define cher2k_ (cher2k)
#define cherk_ (cherk)
#define chetd2_ (chetd2)
#define chetrd_ (chetrd)
#define chseqr_ (chseqr)
#define clabrd_ (clabrd)
#define clacgv_ (clacgv)
#define clacp2_ (clacp2)
#define clacpy_ (clacpy)
#define clacrm_ (clacrm)
#define cladiv_ (cladiv)
#define claed0_ (claed0)
#define claed7_ (claed7)
#define claed8_ (claed8)
#define clahqr_ (clahqr)
#define clahr2_ (clahr2)
#define clals0_ (clals0)
#define clalsa_ (clalsa)
#define clalsd_ (clalsd)
#define clange_ (clange)
#define clanhe_ (clanhe)
#define claqr0_ (claqr0)
#define claqr1_ (claqr1)
#define claqr2_ (claqr2)
#define claqr3_ (claqr3)
#define claqr4_ (claqr4)
#define claqr5_ (claqr5)
#define clarcm_ (clarcm)
#define clarf_ (clarf)
#define clarfb_ (clarfb)
#define clarfg_ (clarfg)
#define clarft_ (clarft)
#define clartg_ (clartg)
#define clascl_ (clascl)
#define claset_ (claset)
#define clasr_ (clasr)
#define classq_ (classq)
#define claswp_ (claswp)
#define clatrd_ (clatrd)
#define clatrs_ (clatrs)
#define clauu2_ (clauu2)
#define clauum_ (clauum)
#define cpotf2_ (cpotf2)
#define cpotrf_ (cpotrf)
#define cpotri_ (cpotri)
#define cpotrs_ (cpotrs)
#define crot_ (crot)
#define cscal_ (cscal)
#define csrot_ (csrot)
#define csscal_ (csscal)
#define cstedc_ (cstedc)
#define csteqr_ (csteqr)
#define cswap_ (cswap)
#define ctrevc_ (ctrevc)
#define ctrexc_ (ctrexc)
#define ctrmm_ (ctrmm)
#define ctrmv_ (ctrmv)
#define ctrsm_ (ctrsm)
#define ctrsv_ (ctrsv)
#define ctrti2_ (ctrti2)
#define ctrtri_ (ctrtri)
#define cung2r_ (cung2r)
#define cungbr_ (cungbr)
#define cunghr_ (cunghr)
#define cungl2_ (cungl2)
#define cunglq_ (cunglq)
#define cungqr_ (cungqr)
#define cunm2l_ (cunm2l)
#define cunm2r_ (cunm2r)
#define cunmbr_ (cunmbr)
#define cunmhr_ (cunmhr)
#define cunml2_ (cunml2)
#define cunmlq_ (cunmlq)
#define cunmql_ (cunmql)
#define cunmqr_ (cunmqr)
#define cunmtr_ (cunmtr)
#define daxpy_ (daxpy)
#define dbdsdc_ (dbdsdc)
#define dbdsqr_ (dbdsqr)
#define dcabs1_ (dcabs1)
#define dcopy_ (dcopy)
#define ddot_ (ddot)
#define dgebak_ (dgebak)
#define dgebal_ (dgebal)
#define dgebd2_ (dgebd2)
#define dgebrd_ (dgebrd)
#define dgeev_ (dgeev)
#define dgehd2_ (dgehd2)
#define dgehrd_ (dgehrd)
#define dgelq2_ (dgelq2)
#define dgelqf_ (dgelqf)
#define dgelsd_ (dgelsd)
#define dgemm_ (dgemm)
#define dgemv_ (dgemv)
#define dgeqr2_ (dgeqr2)
#define dgeqrf_ (dgeqrf)
#define dger_ (dger)
#define dgesdd_ (dgesdd)
#define dgesv_ (dgesv)
#define dgetf2_ (dgetf2)
#define dgetrf_ (dgetrf)
#define dgetrs_ (dgetrs)
#define dhseqr_ (dhseqr)
#define disnan_ (disnan)
#define dlabad_ (dlabad)
#define dlabrd_ (dlabrd)
#define dlacpy_ (dlacpy)
#define dladiv_ (dladiv)
#define dlae2_ (dlae2)
#define dlaed0_ (dlaed0)
#define dlaed1_ (dlaed1)
#define dlaed2_ (dlaed2)
#define dlaed3_ (dlaed3)
#define dlaed4_ (dlaed4)
#define dlaed5_ (dlaed5)
#define dlaed6_ (dlaed6)
#define dlaed7_ (dlaed7)
#define dlaed8_ (dlaed8)
#define dlaed9_ (dlaed9)
#define dlaeda_ (dlaeda)
#define dlaev2_ (dlaev2)
#define dlaexc_ (dlaexc)
#define dlahqr_ (dlahqr)
#define dlahr2_ (dlahr2)
#define dlaisnan_ (dlaisnan)
#define dlaln2_ (dlaln2)
#define dlals0_ (dlals0)
#define dlalsa_ (dlalsa)
#define dlalsd_ (dlalsd)
#define dlamc1_ (dlamc1)
#define dlamc2_ (dlamc2)
#define dlamc3_ (dlamc3)
#define dlamc4_ (dlamc4)
#define dlamc5_ (dlamc5)
#define dlamch_ (dlamch)
#define dlamrg_ (dlamrg)
#define dlange_ (dlange)
#define dlanst_ (dlanst)
#define dlansy_ (dlansy)
#define dlanv2_ (dlanv2)
#define dlapy2_ (dlapy2)
#define dlapy3_ (dlapy3)
#define dlaqr0_ (dlaqr0)
#define dlaqr1_ (dlaqr1)
#define dlaqr2_ (dlaqr2)
#define dlaqr3_ (dlaqr3)
#define dlaqr4_ (dlaqr4)
#define dlaqr5_ (dlaqr5)
#define dlarf_ (dlarf)
#define dlarfb_ (dlarfb)
#define dlarfg_ (dlarfg)
#define dlarft_ (dlarft)
#define dlarfx_ (dlarfx)
#define dlartg_ (dlartg)
#define dlas2_ (dlas2)
#define dlascl_ (dlascl)
#define dlasd0_ (dlasd0)
#define dlasd1_ (dlasd1)
#define dlasd2_ (dlasd2)
#define dlasd3_ (dlasd3)
#define dlasd4_ (dlasd4)
#define dlasd5_ (dlasd5)
#define dlasd6_ (dlasd6)
#define dlasd7_ (dlasd7)
#define dlasd8_ (dlasd8)
#define dlasda_ (dlasda)
#define dlasdq_ (dlasdq)
#define dlasdt_ (dlasdt)
#define dlaset_ (dlaset)
#define dlasq1_ (dlasq1)
#define dlasq2_ (dlasq2)
#define dlasq3_ (dlasq3)
#define dlasq4_ (dlasq4)
#define dlasq5_ (dlasq5)
#define dlasq6_ (dlasq6)
#define dlasr_ (dlasr)
#define dlasrt_ (dlasrt)
#define dlassq_ (dlassq)
#define dlasv2_ (dlasv2)
#define dlaswp_ (dlaswp)
#define dlasy2_ (dlasy2)
#define dlatrd_ (dlatrd)
#define dlauu2_ (dlauu2)
#define dlauum_ (dlauum)
#define dnrm2_ (dnrm2)
#define dorg2r_ (dorg2r)
#define dorgbr_ (dorgbr)
#define dorghr_ (dorghr)
#define dorgl2_ (dorgl2)
#define dorglq_ (dorglq)
#define dorgqr_ (dorgqr)
#define dorm2l_ (dorm2l)
#define dorm2r_ (dorm2r)
#define dormbr_ (dormbr)
#define dormhr_ (dormhr)
#define dorml2_ (dorml2)
#define dormlq_ (dormlq)
#define dormql_ (dormql)
#define dormqr_ (dormqr)
#define dormtr_ (dormtr)
#define dpotf2_ (dpotf2)
#define dpotrf_ (dpotrf)
#define dpotri_ (dpotri)
#define dpotrs_ (dpotrs)
#define drot_ (drot)
#define dscal_ (dscal)
#define dstedc_ (dstedc)
#define dsteqr_ (dsteqr)
#define dsterf_ (dsterf)
#define dswap_ (dswap)
#define dsyevd_ (dsyevd)
#define dsymv_ (dsymv)
#define dsyr2_ (dsyr2)
#define dsyr2k_ (dsyr2k)
#define dsyrk_ (dsyrk)
#define dsytd2_ (dsytd2)
#define dsytrd_ (dsytrd)
#define dtrevc_ (dtrevc)
#define dtrexc_ (dtrexc)
#define dtrmm_ (dtrmm)
#define dtrmv_ (dtrmv)
#define dtrsm_ (dtrsm)
#define dtrti2_ (dtrti2)
#define dtrtri_ (dtrtri)
#define dzasum_ (dzasum)
#define dznrm2_ (dznrm2)
#define icamax_ (icamax)
#define idamax_ (idamax)
#define ieeeck_ (ieeeck)
#define ilaclc_ (ilaclc)
#define ilaclr_ (ilaclr)
#define iladlc_ (iladlc)
#define iladlr_ (iladlr)
#define ilaenv_ (ilaenv)
#define ilaslc_ (ilaslc)
#define ilaslr_ (ilaslr)
#define ilazlc_ (ilazlc)
#define ilazlr_ (ilazlr)
#define iparmq_ (iparmq)
#define isamax_ (isamax)
#define izamax_ (izamax)
#define lsame_ (lsame)
#define saxpy_ (saxpy)
#define sbdsdc_ (sbdsdc)
#define sbdsqr_ (sbdsqr)
#define scabs1_ (scabs1)
#define scasum_ (scasum)
#define scnrm2_ (scnrm2)
#define scopy_ (scopy)
#define sdot_ (sdot)
#define sgebak_ (sgebak)
#define sgebal_ (sgebal)
#define sgebd2_ (sgebd2)
#define sgebrd_ (sgebrd)
#define sgeev_ (sgeev)
#define sgehd2_ (sgehd2)
#define sgehrd_ (sgehrd)
#define sgelq2_ (sgelq2)
#define sgelqf_ (sgelqf)
#define sgelsd_ (sgelsd)
#define sgemm_ (sgemm)
#define sgemv_ (sgemv)
#define sgeqr2_ (sgeqr2)
#define sgeqrf_ (sgeqrf)
#define sger_ (sger)
#define sgesdd_ (sgesdd)
#define sgesv_ (sgesv)
#define sgetf2_ (sgetf2)
#define sgetrf_ (sgetrf)
#define sgetrs_ (sgetrs)
#define shseqr_ (shseqr)
#define sisnan_ (sisnan)
#define slabad_ (slabad)
#define slabrd_ (slabrd)
#define slacpy_ (slacpy)
#define sladiv_ (sladiv)
#define slae2_ (slae2)
#define slaed0_ (slaed0)
#define slaed1_ (slaed1)
#define slaed2_ (slaed2)
#define slaed3_ (slaed3)
#define slaed4_ (slaed4)
#define slaed5_ (slaed5)
#define slaed6_ (slaed6)
#define slaed7_ (slaed7)
#define slaed8_ (slaed8)
#define slaed9_ (slaed9)
#define slaeda_ (slaeda)
#define slaev2_ (slaev2)
#define slaexc_ (slaexc)
#define slahqr_ (slahqr)
#define slahr2_ (slahr2)
#define slaisnan_ (slaisnan)
#define slaln2_ (slaln2)
#define slals0_ (slals0)
#define slalsa_ (slalsa)
#define slalsd_ (slalsd)
#define slamc1_ (slamc1)
#define slamc2_ (slamc2)
#define slamc3_ (slamc3)
#define slamc4_ (slamc4)
#define slamc5_ (slamc5)
#define slamch_ (slamch)
#define slamrg_ (slamrg)
#define slange_ (slange)
#define slanst_ (slanst)
#define slansy_ (slansy)
#define slanv2_ (slanv2)
#define slapy2_ (slapy2)
#define slapy3_ (slapy3)
#define slaqr0_ (slaqr0)
#define slaqr1_ (slaqr1)
#define slaqr2_ (slaqr2)
#define slaqr3_ (slaqr3)
#define slaqr4_ (slaqr4)
#define slaqr5_ (slaqr5)
#define slarf_ (slarf)
#define slarfb_ (slarfb)
#define slarfg_ (slarfg)
#define slarft_ (slarft)
#define slarfx_ (slarfx)
#define slartg_ (slartg)
#define slas2_ (slas2)
#define slascl_ (slascl)
#define slasd0_ (slasd0)
#define slasd1_ (slasd1)
#define slasd2_ (slasd2)
#define slasd3_ (slasd3)
#define slasd4_ (slasd4)
#define slasd5_ (slasd5)
#define slasd6_ (slasd6)
#define slasd7_ (slasd7)
#define slasd8_ (slasd8)
#define slasda_ (slasda)
#define slasdq_ (slasdq)
#define slasdt_ (slasdt)
#define slaset_ (slaset)
#define slasq1_ (slasq1)
#define slasq2_ (slasq2)
#define slasq3_ (slasq3)
#define slasq4_ (slasq4)
#define slasq5_ (slasq5)
#define slasq6_ (slasq6)
#define slasr_ (slasr)
#define slasrt_ (slasrt)
#define slassq_ (slassq)
#define slasv2_ (slasv2)
#define slaswp_ (slaswp)
#define slasy2_ (slasy2)
#define slatrd_ (slatrd)
#define slauu2_ (slauu2)
#define slauum_ (slauum)
#define snrm2_ (snrm2)
#define sorg2r_ (sorg2r)
#define sorgbr_ (sorgbr)
#define sorghr_ (sorghr)
#define sorgl2_ (sorgl2)
#define sorglq_ (sorglq)
#define sorgqr_ (sorgqr)
#define sorm2l_ (sorm2l)
#define sorm2r_ (sorm2r)
#define sormbr_ (sormbr)
#define sormhr_ (sormhr)
#define sorml2_ (sorml2)
#define sormlq_ (sormlq)
#define sormql_ (sormql)
#define sormqr_ (sormqr)
#define sormtr_ (sormtr)
#define spotf2_ (spotf2)
#define spotrf_ (spotrf)
#define spotri_ (spotri)
#define spotrs_ (spotrs)
#define srot_ (srot)
#define sscal_ (sscal)
#define sstedc_ (sstedc)
#define ssteqr_ (ssteqr)
#define ssterf_ (ssterf)
#define sswap_ (sswap)
#define ssyevd_ (ssyevd)
#define ssymv_ (ssymv)
#define ssyr2_ (ssyr2)
#define ssyr2k_ (ssyr2k)
#define ssyrk_ (ssyrk)
#define ssytd2_ (ssytd2)
#define ssytrd_ (ssytrd)
#define strevc_ (strevc)
#define strexc_ (strexc)
#define strmm_ (strmm)
#define strmv_ (strmv)
#define strsm_ (strsm)
#define strti2_ (strti2)
#define strtri_ (strtri)
#define xerbla_ (xerbla)
#define zaxpy_ (zaxpy)
#define zcopy_ (zcopy)
#define zdotc_ (zdotc)
#define zdotu_ (zdotu)
#define zdrot_ (zdrot)
#define zdscal_ (zdscal)
#define zgebak_ (zgebak)
#define zgebal_ (zgebal)
#define zgebd2_ (zgebd2)
#define zgebrd_ (zgebrd)
#define zgeev_ (zgeev)
#define zgehd2_ (zgehd2)
#define zgehrd_ (zgehrd)
#define zgelq2_ (zgelq2)
#define zgelqf_ (zgelqf)
#define zgelsd_ (zgelsd)
#define zgemm_ (zgemm)
#define zgemv_ (zgemv)
#define zgeqr2_ (zgeqr2)
#define zgeqrf_ (zgeqrf)
#define zgerc_ (zgerc)
#define zgeru_ (zgeru)
#define zgesdd_ (zgesdd)
#define zgesv_ (zgesv)
#define zgetf2_ (zgetf2)
#define zgetrf_ (zgetrf)
#define zgetrs_ (zgetrs)
#define zheevd_ (zheevd)
#define zhemv_ (zhemv)
#define zher2_ (zher2)
#define zher2k_ (zher2k)
#define zherk_ (zherk)
#define zhetd2_ (zhetd2)
#define zhetrd_ (zhetrd)
#define zhseqr_ (zhseqr)
#define zlabrd_ (zlabrd)
#define zlacgv_ (zlacgv)
#define zlacp2_ (zlacp2)
#define zlacpy_ (zlacpy)
#define zlacrm_ (zlacrm)
#define zladiv_ (zladiv)
#define zlaed0_ (zlaed0)
#define zlaed7_ (zlaed7)
#define zlaed8_ (zlaed8)
#define zlahqr_ (zlahqr)
#define zlahr2_ (zlahr2)
#define zlals0_ (zlals0)
#define zlalsa_ (zlalsa)
#define zlalsd_ (zlalsd)
#define zlange_ (zlange)
#define zlanhe_ (zlanhe)
#define zlaqr0_ (zlaqr0)
#define zlaqr1_ (zlaqr1)
#define zlaqr2_ (zlaqr2)
#define zlaqr3_ (zlaqr3)
#define zlaqr4_ (zlaqr4)
#define zlaqr5_ (zlaqr5)
#define zlarcm_ (zlarcm)
#define zlarf_ (zlarf)
#define zlarfb_ (zlarfb)
#define zlarfg_ (zlarfg)
#define zlarft_ (zlarft)
#define zlartg_ (zlartg)
#define zlascl_ (zlascl)
#define zlaset_ (zlaset)
#define zlasr_ (zlasr)
#define zlassq_ (zlassq)
#define zlaswp_ (zlaswp)
#define zlatrd_ (zlatrd)
#define zlatrs_ (zlatrs)
#define zlauu2_ (zlauu2)
#define zlauum_ (zlauum)
#define zpotf2_ (zpotf2)
#define zpotrf_ (zpotrf)
#define zpotri_ (zpotri)
#define zpotrs_ (zpotrs)
#define zrot_ (zrot)
#define zscal_ (zscal)
#define zstedc_ (zstedc)
#define zsteqr_ (zsteqr)
#define zswap_ (zswap)
#define ztrevc_ (ztrevc)
#define ztrexc_ (ztrexc)
#define ztrmm_ (ztrmm)
#define ztrmv_ (ztrmv)
#define ztrsm_ (ztrsm)
#define ztrsv_ (ztrsv)
#define ztrti2_ (ztrti2)
#define ztrtri_ (ztrtri)
#define zung2r_ (zung2r)
#define zungbr_ (zungbr)
#define zunghr_ (zunghr)
#define zungl2_ (zungl2)
#define zunglq_ (zunglq)
#define zungqr_ (zungqr)
#define zunm2l_ (zunm2l)
#define zunm2r_ (zunm2r)
#define zunmbr_ (zunmbr)
#define zunmhr_ (zunmhr)
#define zunml2_ (zunml2)
#define zunmlq_ (zunmlq)
#define zunmql_ (zunmql)
#define zunmqr_ (zunmqr)
#define zunmtr_ (zunmtr)

/* Symbols exported by f2c.c */
#define abort_ numpy_lapack_lite_abort_
#define c_abs numpy_lapack_lite_c_abs
#define c_cos numpy_lapack_lite_c_cos
#define c_div numpy_lapack_lite_c_div
#define c_exp numpy_lapack_lite_c_exp
#define c_log numpy_lapack_lite_c_log
#define c_sin numpy_lapack_lite_c_sin
#define c_sqrt numpy_lapack_lite_c_sqrt
#define d_abs numpy_lapack_lite_d_abs
#define d_acos numpy_lapack_lite_d_acos
#define d_asin numpy_lapack_lite_d_asin
#define d_atan numpy_lapack_lite_d_atan
#define d_atn2 numpy_lapack_lite_d_atn2
#define d_cnjg numpy_lapack_lite_d_cnjg
#define d_cos numpy_lapack_lite_d_cos
#define d_cosh numpy_lapack_lite_d_cosh
#define d_dim numpy_lapack_lite_d_dim
#define d_exp numpy_lapack_lite_d_exp
#define d_imag numpy_lapack_lite_d_imag
#define d_int numpy_lapack_lite_d_int
#define d_lg10 numpy_lapack_lite_d_lg10
#define d_log numpy_lapack_lite_d_log
#define d_mod numpy_lapack_lite_d_mod
#define d_nint numpy_lapack_lite_d_nint
#define d_prod numpy_lapack_lite_d_prod
#define d_sign numpy_lapack_lite_d_sign
#define d_sin numpy_lapack_lite_d_sin
#define d_sinh numpy_lapack_lite_d_sinh
#define d_sqrt numpy_lapack_lite_d_sqrt
#define d_tan numpy_lapack_lite_d_tan
#define d_tanh numpy_lapack_lite_d_tanh
#define derf_ numpy_lapack_lite_derf_
#define derfc_ numpy_lapack_lite_derfc_
#define do_fio numpy_lapack_lite_do_fio
#define do_lio numpy_lapack_lite_do_lio
#define do_uio numpy_lapack_lite_do_uio
#define e_rdfe numpy_lapack_lite_e_rdfe
#define e_rdue numpy_lapack_lite_e_rdue
#define e_rsfe numpy_lapack_lite_e_rsfe
#define e_rsfi numpy_lapack_lite_e_rsfi
#define e_rsle numpy_lapack_lite_e_rsle
#define e_rsli numpy_lapack_lite_e_rsli
#define e_rsue numpy_lapack_lite_e_rsue
#define e_wdfe numpy_lapack_lite_e_wdfe
#define e_wdue numpy_lapack_lite_e_wdue
#define e_wsfe numpy_lapack_lite_e_wsfe
#define e_wsfi numpy_lapack_lite_e_wsfi
#define e_wsle numpy_lapack_lite_e_wsle
#define e_wsli numpy_lapack_lite_e_wsli
#define e_wsue numpy_lapack_lite_e_wsue
#define ef1asc_ numpy_lapack_lite_ef1asc_
#define ef1cmc_ numpy_lapack_lite_ef1cmc_
#define erf_ numpy_lapack_lite_erf_
#define erfc_ numpy_lapack_lite_erfc_
#define f__cabs numpy_lapack_lite_f__cabs
#define f__cabsf numpy_lapack_lite_f__cabsf
#define f_back numpy_lapack_lite_f_back
#define f_clos numpy_lapack_lite_f_clos
#define f_end numpy_lapack_lite_f_end
#define f_exit numpy_lapack_lite_f_exit
#define f_inqu numpy_lapack_lite_f_inqu
#define f_open numpy_lapack_lite_f_open
#define f_rew numpy_lapack_lite_f_rew
#define flush_ numpy_lapack_lite_flush_
#define getarg_ numpy_lapack_lite_getarg_
#define getenv_ numpy_lapack_lite_getenv_
#define h_abs numpy_lapack_lite_h_abs
#define h_dim numpy_lapack_lite_h_dim
#define h_dnnt numpy_lapack_lite_h_dnnt
#define h_indx numpy_lapack_lite_h_indx
#define h_len numpy_lapack_lite_h_len
#define h_mod numpy_lapack_lite_h_mod
#define h_nint numpy_lapack_lite_h_nint
#define h_sign numpy_lapack_lite_h_sign
#define hl_ge numpy_lapack_lite_hl_ge
#define hl_gt numpy_lapack_lite_hl_gt
#define hl_le numpy_lapack_lite_hl_le
#define hl_lt numpy_lapack_lite_hl_lt
#define i_abs numpy_lapack_lite_i_abs
#define i_dim numpy_lapack_lite_i_dim
#define i_dnnt numpy_lapack_lite_i_dnnt
#define i_indx numpy_lapack_lite_i_indx
#define i_len numpy_lapack_lite_i_len
#define i_mod numpy_lapack_lite_i_mod
#define i_nint numpy_lapack_lite_i_nint
#define i_sign numpy_lapack_lite_i_sign
#define iargc_ numpy_lapack_lite_iargc_
#define l_ge numpy_lapack_lite_l_ge
#define l_gt numpy_lapack_lite_l_gt
#define l_le numpy_lapack_lite_l_le
#define l_lt numpy_lapack_lite_l_lt
#define pow_ci numpy_lapack_lite_pow_ci
#define pow_dd numpy_lapack_lite_pow_dd
#define pow_di numpy_lapack_lite_pow_di
#define pow_hh numpy_lapack_lite_pow_hh
#define pow_ii numpy_lapack_lite_pow_ii
#define pow_ri numpy_lapack_lite_pow_ri
#define pow_zi numpy_lapack_lite_pow_zi
#define pow_zz numpy_lapack_lite_pow_zz
#define r_abs numpy_lapack_lite_r_abs
#define r_acos numpy_lapack_lite_r_acos
#define r_asin numpy_lapack_lite_r_asin
#define r_atan numpy_lapack_lite_r_atan
#define r_atn2 numpy_lapack_lite_r_atn2
#define r_cnjg numpy_lapack_lite_r_cnjg
#define r_cos numpy_lapack_lite_r_cos
#define r_cosh numpy_lapack_lite_r_cosh
#define r_dim numpy_lapack_lite_r_dim
#define r_exp numpy_lapack_lite_r_exp
#define r_imag numpy_lapack_lite_r_imag
#define r_int numpy_lapack_lite_r_int
#define r_lg10 numpy_lapack_lite_r_lg10
#define r_log numpy_lapack_lite_r_log
#define r_mod numpy_lapack_lite_r_mod
#define r_nint numpy_lapack_lite_r_nint
#define r_sign numpy_lapack_lite_r_sign
#define r_sin numpy_lapack_lite_r_sin
#define r_sinh numpy_lapack_lite_r_sinh
#define r_sqrt numpy_lapack_lite_r_sqrt
#define r_tan numpy_lapack_lite_r_tan
#define r_tanh numpy_lapack_lite_r_tanh
#define s_cat numpy_lapack_lite_s_cat
#define s_cmp numpy_lapack_lite_s_cmp
#define s_copy numpy_lapack_lite_s_copy
#define s_paus numpy_lapack_lite_s_paus
#define s_rdfe numpy_lapack_lite_s_rdfe
#define s_rdue numpy_lapack_lite_s_rdue
#define s_rnge numpy_lapack_lite_s_rnge
#define s_rsfe numpy_lapack_lite_s_rsfe
#define s_rsfi numpy_lapack_lite_s_rsfi
#define s_rsle numpy_lapack_lite_s_rsle
#define s_rsli numpy_lapack_lite_s_rsli
#define s_rsne numpy_lapack_lite_s_rsne
#define s_rsni numpy_lapack_lite_s_rsni
#define s_rsue numpy_lapack_lite_s_rsue
#define s_stop numpy_lapack_lite_s_stop
#define s_wdfe numpy_lapack_lite_s_wdfe
#define s_wdue numpy_lapack_lite_s_wdue
#define s_wsfe numpy_lapack_lite_s_wsfe
#define s_wsfi numpy_lapack_lite_s_wsfi
#define s_wsle numpy_lapack_lite_s_wsle
#define s_wsli numpy_lapack_lite_s_wsli
#define s_wsne numpy_lapack_lite_s_wsne
#define s_wsni numpy_lapack_lite_s_wsni
#define s_wsue numpy_lapack_lite_s_wsue
#define sig_die numpy_lapack_lite_sig_die
#define signal_ numpy_lapack_lite_signal_
#define system_ numpy_lapack_lite_system_
#define z_abs numpy_lapack_lite_z_abs
#define z_cos numpy_lapack_lite_z_cos
#define z_div numpy_lapack_lite_z_div
#define z_exp numpy_lapack_lite_z_exp
#define z_log numpy_lapack_lite_z_log
#define z_sin numpy_lapack_lite_z_sin
#define z_sqrt numpy_lapack_lite_z_sqrt