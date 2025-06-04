#include "Driveline_capi.h"
#include "Driveline.h"
#include "Driveline_private.h"
#include "automldiffas_4HAP7ofC.h"
#include "look1_binlcpw.h"
#include "plook_u32d_binckan.h"
static RegMdlInfo rtMdlInfo_Driveline [ 58 ] = { { "jqwwoyb30s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"d3gakkxfww" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "a2ygobmwxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "ff2cksbxt0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "cfznqp4b1y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"dtppvsdcp2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "l41wzh1l0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "ln3lkwz4rh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "kmddtugdcs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"o0yp5nw210" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "mrk1ln3yua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "djxjuig0lf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "efchnu4f1l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"n5qm5cab0up" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Driveline"
} , { "jn1etpvcka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "ewin1y1mwc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "bhoei0xoot" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "grfcawoazk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"l1pljxktrl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "bjbjifrsrv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "oakdhkzk5b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "brjax2ilbj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"gvxaj4x0qw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "n5wdhep3vv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "azw1xo1vqg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "bsz3qtxrxd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"fxrjyezkwn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "p0pqiusydn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "btsnzboicn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "p51od2swfx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"m2vwjmi2um" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "oms0l24gxw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "bpgqz3xzpl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "cyzpp4e52p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"aj1apekess" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "djkfokdtse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Driveline" } , { "jnccjczqwr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "Driveline" } , { "igx4apxpta" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"me451mp2tt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Driveline" } , { "Driveline" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , (
NULL ) } , { "nrwapxhmtv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Driveline" } , { "coyvih0rk1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Driveline" } , { "dwsgrvz41y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Driveline" } , {
"struct_gd1DcuoPLQ4kduEClWjbAB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "mr_Driveline_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Driveline" } , { "mr_Driveline_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Driveline" } , { "mr_Driveline_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Driveline" } , { "mr_Driveline_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Driveline" } , {
"mr_Driveline_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Driveline" } , { "Driveline.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "Driveline.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Driveline" } } ; gimbih1di0h gimbih1di0 = { 0.01 , 0.0 , 0.0 , { - 1.0 , 0.0
, 1.0 , 2.0 , 3.0 , 4.0 , 5.0 , 6.0 , 7.0 , 8.0 } , 0.0 , 0.08 , 0.003 , {
0.128 , 0.027999999999999997 , 0.128 , 0.1 , 0.062 , 0.028 , 0.01 , 0.01 ,
0.01 , 0.01 } , 0.01 , 0.01 , { - 3.82 , 4.56 , 4.56 , 2.97 , 2.08 , 1.69 ,
1.27 , 1.0 , 0.85 , 0.65 } , 2.77 , 4.0 , 0.875 , 1.125 , 0.08 , 18.0 ,
9.42477796076938 , 1.922 , 3.019 , 50.0 , 50.0 , 50.0 , 0.001 , { 0.003 ,
0.001 , 0.003 , 0.0025 , 0.002 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ,
0.001 , 0.001 , 0.0 , 0.0 , 0.0 , { 0.0 , 10.0 , 20.0 , 40.0 , 60.0 , 80.0 ,
100.0 , 1000.0 } , { 0.9 , 0.9 , 0.9 , 0.9 , 0.9 , 0.95 , 0.95 , 0.95 , 0.95
, 0.95 } , 5000.0 , 5000.0 , 5000.0 , { 0.16 , 0.13 , 0.115 , 0.11 , 0.105 ,
0.1025 , 0.10125 , 0.10125 } , 0.0 , 150.0 , 150.0 , 150.0 , 0.0 , 0.0 , 0.0
, 0.04 , 0.02 , 0.0 , 0.0 , 0.0 , 1.0E-6 , 1.0E-6 , 1.4901161193847656E-8 ,
1.4901161193847656E-8 , 1256.6370614359173 , 1.0 , 1.0 , 0.0 , 1.0 , 0.0 , -
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.0 , - 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
5000.0 , - 5000.0 , - 0.5 , 2.0 , 0.5 , 0.5 , 2.0 , 0.5 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 6.2831853071795862 , 0.0 , 1.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , - 1.0 , 0.0 , 1.0 , 0.0
, 0.001 , 8.0E+6 , 0.0 , { 6.2831853071795862 , 0.0 , 0.0 , 0.0 , 4.0 } } ;
void djkfokdtse ( dwsgrvz41y * const pubqvcmed4 , real_T * azye50kz02 ,
real_T * dkfocn2kw3 , bsz3qtxrxd * localDW , oakdhkzk5b * localX ) { int32_T
mr12l2gfl3 ; boolean_T tmp ; localDW -> aydhqotte1 = gimbih1di0 . P_76 ;
localDW -> l502nimlgu = gimbih1di0 . P_80 ; localDW -> a3mzd4aqhf = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX -> nkhwyywomp = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
a3mzd4aqhf = ! tmp ; } else { localDW -> a3mzd4aqhf = 1 ; } localX ->
hddpi2g224 = 0.0 ; } localX -> gmkd3jzxo3 = gimbih1di0 . P_45 ; localDW ->
f3zzxvwsi0 = gimbih1di0 . P_81 ; localDW -> lgx52collq = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> lgx52collq = ! tmp ; } else { localDW ->
lgx52collq = 1 ; } localX -> o2lamygnrv = 0.0 ; } localX -> aaxaf4jedn =
gimbih1di0 . P_46 ; localDW -> fjczxzuj0e = gimbih1di0 . P_82 ; localDW ->
g3picovpjs = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
g3picovpjs = ! tmp ; } else { localDW -> g3picovpjs = 1 ; } localX ->
apjpgtpiwz [ 0 ] = 0.0 ; localX -> apjpgtpiwz [ 1 ] = 0.0 ; } localX ->
jkxxbnfgvy = gimbih1di0 . P_47 ; localDW -> arxnnxrfcl = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> arxnnxrfcl = ! tmp ; } else { localDW ->
arxnnxrfcl = 1 ; } localX -> ioq10m20tp = 0.0 ; } localDW -> djp1o4y0ml =
gimbih1di0 . P_97 ; localDW -> oddg33f5qe = 1 ; if ( rtmIsFirstInitCond (
pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW
-> oddg33f5qe = ! tmp ; } else { localDW -> oddg33f5qe = 1 ; } } localX ->
ahzdiwsjut [ 0 ] = gimbih1di0 . P_114 ; localX -> jkw01kdco1 [ 0 ] =
gimbih1di0 . P_119 ; localX -> ahzdiwsjut [ 1 ] = gimbih1di0 . P_114 ; localX
-> jkw01kdco1 [ 1 ] = gimbih1di0 . P_119 ; localX -> ahzdiwsjut [ 2 ] =
gimbih1di0 . P_114 ; localX -> jkw01kdco1 [ 2 ] = gimbih1di0 . P_119 ; localX
-> ahzdiwsjut [ 3 ] = gimbih1di0 . P_114 ; localX -> jkw01kdco1 [ 3 ] =
gimbih1di0 . P_119 ; for ( mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ )
{ localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 = gimbih1di0 . akkqis3b1g
. P_1 ; } localDW -> fiuvbwgdvm = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 )
) { localX -> ih5x40znwx = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> fiuvbwgdvm = ! tmp ; } else { localDW ->
fiuvbwgdvm = 1 ; } localX -> lsght3lvcc = 0.0 ; } localDW -> p2muon2qgq = 1 ;
if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
p2muon2qgq = ! tmp ; } else { localDW -> p2muon2qgq = 1 ; } localX ->
oinmq3iuai = 0.0 ; } localDW -> jcljt300rr = 1 ; if ( rtmIsFirstInitCond (
pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW
-> jcljt300rr = ! tmp ; } else { localDW -> jcljt300rr = 1 ; } } * azye50kz02
= gimbih1di0 . P_108 ; * dkfocn2kw3 = 0.0 ; } void aj1apekess ( dwsgrvz41y *
const pubqvcmed4 , bsz3qtxrxd * localDW , oakdhkzk5b * localX ) { int32_T
mr12l2gfl3 ; boolean_T tmp ; localDW -> aydhqotte1 = gimbih1di0 . P_76 ;
localDW -> l502nimlgu = gimbih1di0 . P_80 ; localDW -> a3mzd4aqhf = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { localX -> nkhwyywomp = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
a3mzd4aqhf = ! tmp ; } else { localDW -> a3mzd4aqhf = 1 ; } localX ->
hddpi2g224 = 0.0 ; } localX -> gmkd3jzxo3 = gimbih1di0 . P_45 ; localDW ->
f3zzxvwsi0 = gimbih1di0 . P_81 ; localDW -> lgx52collq = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> lgx52collq = ! tmp ; } else { localDW ->
lgx52collq = 1 ; } localX -> o2lamygnrv = 0.0 ; } localX -> aaxaf4jedn =
gimbih1di0 . P_46 ; localDW -> fjczxzuj0e = gimbih1di0 . P_82 ; localDW ->
g3picovpjs = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
g3picovpjs = ! tmp ; } else { localDW -> g3picovpjs = 1 ; } localX ->
apjpgtpiwz [ 0 ] = 0.0 ; localX -> apjpgtpiwz [ 1 ] = 0.0 ; } localX ->
jkxxbnfgvy = gimbih1di0 . P_47 ; localDW -> arxnnxrfcl = 1 ; if (
rtmIsFirstInitCond ( pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( pubqvcmed4 ->
_mdlRefSfcnS ) ; localDW -> arxnnxrfcl = ! tmp ; } else { localDW ->
arxnnxrfcl = 1 ; } localX -> ioq10m20tp = 0.0 ; } localDW -> djp1o4y0ml =
gimbih1di0 . P_97 ; localDW -> oddg33f5qe = 1 ; if ( rtmIsFirstInitCond (
pubqvcmed4 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW
-> oddg33f5qe = ! tmp ; } else { localDW -> oddg33f5qe = 1 ; } } localX ->
ahzdiwsjut [ 0 ] = gimbih1di0 . P_114 ; localX -> jkw01kdco1 [ 0 ] =
gimbih1di0 . P_119 ; localX -> ahzdiwsjut [ 1 ] = gimbih1di0 . P_114 ; localX
-> jkw01kdco1 [ 1 ] = gimbih1di0 . P_119 ; localX -> ahzdiwsjut [ 2 ] =
gimbih1di0 . P_114 ; localX -> jkw01kdco1 [ 2 ] = gimbih1di0 . P_119 ; localX
-> ahzdiwsjut [ 3 ] = gimbih1di0 . P_114 ; localX -> jkw01kdco1 [ 3 ] =
gimbih1di0 . P_119 ; for ( mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ )
{ localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 = gimbih1di0 . akkqis3b1g
. P_1 ; } } void m2vwjmi2um ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd *
localDW , l1pljxktrl * localXdis ) { switch ( localDW -> katpv1neqp ) { case
0 : ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS )
; localXdis -> ih5x40znwx = 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> lsght3lvcc ) , 1 , 2 * sizeof ( boolean_T )
) ; break ; } localDW -> katpv1neqp = - 1 ; } void igx4apxpta ( fxrjyezkwn *
localB , bsz3qtxrxd * localDW ) { int32_T mr12l2gfl3 ; for ( mr12l2gfl3 = 0 ;
mr12l2gfl3 < 2 ; mr12l2gfl3 ++ ) { localB -> akkqis3b1g [ mr12l2gfl3 ] .
ehj3cf1fgx = 0.0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] . aiakq53oml = 0.0 ;
localB -> akkqis3b1g [ mr12l2gfl3 ] . ln30aiya51 = 0.0 ; localB -> akkqis3b1g
[ mr12l2gfl3 ] . flrers22xb = 0.0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] .
or5utkl21c = 0.0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod = 0.0 ;
localB -> akkqis3b1g [ mr12l2gfl3 ] . oxs5m0350u = 0.0 ; localB -> akkqis3b1g
[ mr12l2gfl3 ] . gnl0hwcrar = 0.0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] .
hyoixrofmv = 0.0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] . kbvouq0vuj = 0.0 ; }
localB -> lcteodzxol = gimbih1di0 . P_27 ; localB -> nk43iwq3jf = gimbih1di0
. P_28 ; localB -> khtv03rqea = gimbih1di0 . P_29 ; localB -> flty4tax20 =
gimbih1di0 . P_4 ; localDW -> lipy4djzen = true ; localDW -> aatsaj2ujy =
true ; localDW -> i1vb2cxyv5 = true ; localDW -> katpv1neqp = - 1 ; } void
Driveline ( dwsgrvz41y * const pubqvcmed4 , const real_T * j45cp5ppdn , const
real_T * ldxbfzy4yw , real_T iioyllnquu [ 4 ] , real_T jp4z35ch12 [ 4 ] ,
real_T bumnd4n3ix [ 4 ] , real_T * azye50kz02 , real_T * i215und1x3 ,
fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw
* localZCE , l1pljxktrl * localXdis ) { boolean_T resetSolver ; ZCEventType
zcEvent ; real_T biprsijieh ; real_T ct1350zqmw ; real_T cg5z05eaxh ; real_T
oexatecjko ; int8_T rtPrevAction ; int8_T rtAction ; real_T b1ktd4gwdg ;
real_T bljdg3kynq_p ; real_T njvhvg5yop_p ; uint32_T bljdg3kynq_tmp ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ iioyllnquu [ 2 ] = 0.0 ; iioyllnquu [ 3 ] = 0.0 ; oexatecjko = gimbih1di0 .
P_1 / 2.0 ; if ( * j45cp5ppdn < localDW -> aydhqotte1 - oexatecjko ) { localB
-> i1qakge32u = * j45cp5ppdn + oexatecjko ; } else if ( * j45cp5ppdn <=
localDW -> aydhqotte1 + oexatecjko ) { localB -> i1qakge32u = localDW ->
aydhqotte1 ; } else { localB -> i1qakge32u = * j45cp5ppdn - oexatecjko ; } if
( localB -> i1qakge32u > gimbih1di0 . P_17 ) { oexatecjko = gimbih1di0 . P_17
; } else if ( localB -> i1qakge32u < - gimbih1di0 . P_17 ) { oexatecjko = -
gimbih1di0 . P_17 ; } else { oexatecjko = localB -> i1qakge32u ; } biprsijieh
= muDoubleScalarTan ( 1.0 / gimbih1di0 . P_16 * oexatecjko ) ; ct1350zqmw =
gimbih1di0 . P_18 / 2.0 * biprsijieh ; oexatecjko = gimbih1di0 . P_19 +
ct1350zqmw ; ct1350zqmw = gimbih1di0 . P_19 - ct1350zqmw ; cg5z05eaxh =
gimbih1di0 . P_19 * biprsijieh ; if ( ( oexatecjko >= - gimbih1di0 . P_50 )
&& ( oexatecjko <= gimbih1di0 . P_50 ) ) { oexatecjko = 2.9802322387695313E-8
/ ( 3.0 - muDoubleScalarPower ( oexatecjko / 1.4901161193847656e-8 , 2.0 ) )
; } else { oexatecjko = muDoubleScalarAbs ( oexatecjko ) ; } if ( (
ct1350zqmw >= - gimbih1di0 . P_51 ) && ( ct1350zqmw <= gimbih1di0 . P_51 ) )
{ ct1350zqmw = 2.9802322387695313E-8 / ( 3.0 - muDoubleScalarPower (
ct1350zqmw / 1.4901161193847656e-8 , 2.0 ) ) ; } else { ct1350zqmw =
muDoubleScalarAbs ( ct1350zqmw ) ; } if ( gimbih1di0 . P_77 > gimbih1di0 .
P_78 ) { iioyllnquu [ 0 ] = muDoubleScalarAtan ( 1.0 / oexatecjko *
cg5z05eaxh ) ; } else { iioyllnquu [ 0 ] = - muDoubleScalarAtan ( 1.0 /
oexatecjko * cg5z05eaxh ) ; } if ( gimbih1di0 . P_77 > gimbih1di0 . P_79 ) {
iioyllnquu [ 1 ] = muDoubleScalarAtan ( cg5z05eaxh / ct1350zqmw ) ; } else {
iioyllnquu [ 1 ] = - muDoubleScalarAtan ( cg5z05eaxh / ct1350zqmw ) ; }
localB -> mrbaluwzmx = localDW -> l502nimlgu ; localB -> lcteodzxol =
gimbih1di0 . P_27 ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 ) ) { zcEvent =
rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> p3b4nvkjzw , ( localB ->
mrbaluwzmx ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> a3mzd4aqhf !=
0 ) ) { localX -> nkhwyywomp = localB -> lcteodzxol ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} oexatecjko = localX -> nkhwyywomp ; localB -> ibw0lnuow3 = gimbih1di0 .
P_20 * localX -> nkhwyywomp + gimbih1di0 . P_32 * localX -> gmkd3jzxo3 ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localB -> izsosdb44b = localDW -> f3zzxvwsi0 ; localB -> nk43iwq3jf =
gimbih1di0 . P_28 ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 ) ) { zcEvent =
rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> giezqglh10 , ( localB ->
izsosdb44b ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> lgx52collq !=
0 ) ) { localX -> hddpi2g224 = localB -> nk43iwq3jf ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} ct1350zqmw = localX -> hddpi2g224 ; cg5z05eaxh = gimbih1di0 . P_21 * localX
-> hddpi2g224 + gimbih1di0 . P_33 * localX -> aaxaf4jedn ; localB ->
kjoljr1ckb = - cg5z05eaxh ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) &&
rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB -> btyi2ndgbz = localDW ->
fjczxzuj0e ; localB -> khtv03rqea = gimbih1di0 . P_29 ; } if (
rtmIsMajorTimeStep ( pubqvcmed4 ) ) { zcEvent = rt_ZCFcn (
RISING_ZERO_CROSSING , & localZCE -> obw1lxt001 , ( localB -> btyi2ndgbz ) )
; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> g3picovpjs != 0 ) ) { localX
-> o2lamygnrv = localB -> khtv03rqea ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} bljdg3kynq_p = localX -> o2lamygnrv ; njvhvg5yop_p = gimbih1di0 . P_22 *
localX -> o2lamygnrv + gimbih1di0 . P_34 * localX -> jkxxbnfgvy ; localB ->
jxpjayeew1 = - njvhvg5yop_p ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) &&
rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB -> kt0uvncp2i [ 0 ] =
gimbih1di0 . P_41 ; localB -> kt0uvncp2i [ 1 ] = gimbih1di0 . P_42 ; } if (
localDW -> arxnnxrfcl != 0 ) { localX -> apjpgtpiwz [ 0 ] = localB ->
kt0uvncp2i [ 0 ] ; localX -> apjpgtpiwz [ 1 ] = localB -> kt0uvncp2i [ 1 ] ;
} if ( localX -> apjpgtpiwz [ 0 ] >= gimbih1di0 . P_83 ) { if ( localX ->
apjpgtpiwz [ 0 ] != gimbih1di0 . P_83 ) { localX -> apjpgtpiwz [ 0 ] =
gimbih1di0 . P_83 ; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4
-> _mdlRefSfcnS ) ; } } else { if ( ( localX -> apjpgtpiwz [ 0 ] <=
gimbih1di0 . P_84 ) && ( localX -> apjpgtpiwz [ 0 ] != gimbih1di0 . P_84 ) )
{ localX -> apjpgtpiwz [ 0 ] = gimbih1di0 . P_84 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} if ( localX -> apjpgtpiwz [ 1 ] >= gimbih1di0 . P_83 ) { if ( localX ->
apjpgtpiwz [ 1 ] != gimbih1di0 . P_83 ) { localX -> apjpgtpiwz [ 1 ] =
gimbih1di0 . P_83 ; ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4
-> _mdlRefSfcnS ) ; } } else { if ( ( localX -> apjpgtpiwz [ 1 ] <=
gimbih1di0 . P_84 ) && ( localX -> apjpgtpiwz [ 1 ] != gimbih1di0 . P_84 ) )
{ localX -> apjpgtpiwz [ 1 ] = gimbih1di0 . P_84 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} localB -> oz5keqi3jl [ 0 ] = localX -> apjpgtpiwz [ 0 ] ; localB ->
oz5keqi3jl [ 1 ] = localX -> apjpgtpiwz [ 1 ] ; if ( rtmIsMajorTimeStep (
pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB ->
dencyobjsn = gimbih1di0 . P_13 ; localB -> g2yxee4wvs = ( gimbih1di0 . P_86 -
gimbih1di0 . P_13 ) * gimbih1di0 . P_87 ; localB -> abnerhvlz0 = gimbih1di0 .
P_14 ; localB -> blyeaw1pdn = ( gimbih1di0 . P_89 - gimbih1di0 . P_14 ) *
gimbih1di0 . P_90 ; } localB -> bjrqukpcvi [ 0 ] = gimbih1di0 . P_85 * localB
-> oz5keqi3jl [ 0 ] * localB -> dencyobjsn + localB -> oz5keqi3jl [ 1 ] *
localB -> g2yxee4wvs ; localB -> bjrqukpcvi [ 1 ] = gimbih1di0 . P_88 *
localB -> oz5keqi3jl [ 0 ] * localB -> abnerhvlz0 - localB -> oz5keqi3jl [ 1
] * localB -> blyeaw1pdn ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) &&
rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { if ( gimbih1di0 . P_92 > gimbih1di0
. P_93 ) { localB -> egxs2cv14b = gimbih1di0 . P_91 ; } else { localB ->
egxs2cv14b = - gimbih1di0 . P_91 ; } localB -> owdxvnl4zt = gimbih1di0 . P_37
; } biprsijieh = gimbih1di0 . P_11 / 2.0 ; localB -> fdewlfwvcf [ 0 ] = -
localB -> oz5keqi3jl [ 0 ] ; localB -> fdewlfwvcf [ 1 ] = - localB ->
oz5keqi3jl [ 1 ] ; * i215und1x3 = localB -> egxs2cv14b * localB -> oz5keqi3jl
[ 0 ] * biprsijieh + localB -> egxs2cv14b * localB -> oz5keqi3jl [ 1 ] *
biprsijieh ; jp4z35ch12 [ 0 ] = 0.0 ; jp4z35ch12 [ 1 ] = 0.0 ; jp4z35ch12 [ 2
] = cg5z05eaxh ; jp4z35ch12 [ 3 ] = njvhvg5yop_p ; if ( localB -> izsosdb44b
!= 0.0 ) { localB -> bjcl1qsi0h = ct1350zqmw ; } else { localB -> bjcl1qsi0h
= localB -> nk43iwq3jf ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 ) &&
rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB -> pjazufybvm = gimbih1di0 .
P_38 ; localB -> ijmrsoeuus = 1.0 / gimbih1di0 . P_44 * gimbih1di0 . P_96 ;
localB -> flty4tax20 = gimbih1di0 . P_4 ; localB -> nqq21eh4fz = localDW ->
djp1o4y0ml ; } if ( localB -> btyi2ndgbz != 0.0 ) { localB -> d1zatzg4p1 =
bljdg3kynq_p ; } else { localB -> d1zatzg4p1 = localB -> khtv03rqea ; } if (
rtmIsMajorTimeStep ( pubqvcmed4 ) ) { zcEvent = rt_ZCFcn (
RISING_ZERO_CROSSING , & localZCE -> p33raon0ot , ( localB -> nqq21eh4fz ) )
; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> oddg33f5qe != 0 ) ) { localX
-> ioq10m20tp = localB -> flty4tax20 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} if ( localB -> nqq21eh4fz != 0.0 ) { localB -> k03bggqg1w = localX ->
ioq10m20tp ; } else { localB -> k03bggqg1w = localB -> flty4tax20 ; } if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localB -> lz5ipm1gur = gimbih1di0 . P_40 ; if ( localDW -> lipy4djzen ) {
localDW -> lipy4djzen = false ; localB -> ikqfneohrd = gimbih1di0 . P_100 ; }
else { localB -> ikqfneohrd = gimbih1di0 . P_99 ; } } if ( localB ->
ikqfneohrd > gimbih1di0 . P_101 ) { cg5z05eaxh = localX -> lsght3lvcc ; }
else { cg5z05eaxh = localB -> lz5ipm1gur ; } biprsijieh = muDoubleScalarRound
( localX -> ioq10m20tp ) ; ct1350zqmw = - localB -> ibw0lnuow3 ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ if ( localDW -> aatsaj2ujy ) { localDW -> aatsaj2ujy = false ; localB ->
i3lty3zbjd = gimbih1di0 . P_103 ; } else { localB -> i3lty3zbjd = gimbih1di0
. P_102 ; } localB -> dkw2oxd3md = gimbih1di0 . P_40 ; if ( localDW ->
i1vb2cxyv5 ) { localDW -> i1vb2cxyv5 = false ; localB -> p0mm3cjimv =
gimbih1di0 . P_106 ; } else { localB -> p0mm3cjimv = gimbih1di0 . P_105 ; }
localB -> lyir1nkvdn = gimbih1di0 . P_36 ; } if ( localB -> i3lty3zbjd >
gimbih1di0 . P_104 ) { bljdg3kynq_p = localX -> ih5x40znwx ; } else {
bljdg3kynq_p = localB -> dkw2oxd3md ; } if ( localB -> p0mm3cjimv >
gimbih1di0 . P_107 ) { njvhvg5yop_p = localX -> ih5x40znwx ; } else {
njvhvg5yop_p = localB -> lyir1nkvdn ; } rtPrevAction = localDW -> katpv1neqp
; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) ) { rtAction = ( int8_T ) ! (
biprsijieh != 0.0 ) ; localDW -> katpv1neqp = rtAction ; } else { rtAction =
localDW -> katpv1neqp ; } if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; localXdis -> ih5x40znwx = 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; (
void ) memset ( & ( localXdis -> lsght3lvcc ) , 1 , 2 * sizeof ( boolean_T )
) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction
) { localDW -> fiuvbwgdvm = 1 ; if ( rtmIsFirstInitCond ( pubqvcmed4 ) ) {
localX -> ih5x40znwx = 0.0 ; resetSolver = slIsRapidAcceleratorSimulating ( )
; if ( resetSolver ) { resetSolver = ssGetGlobalInitialStatesAvailable (
pubqvcmed4 -> _mdlRefSfcnS ) ; localDW -> fiuvbwgdvm = ! resetSolver ; } else
{ localDW -> fiuvbwgdvm = 1 ; } } if ( rtmGetTaskTime ( pubqvcmed4 , 0 ) !=
rtmGetTStart ( pubqvcmed4 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; } localXdis -> ih5x40znwx = 0 ; }
bljdg3kynq_tmp = plook_u32d_binckan ( biprsijieh , gimbih1di0 . P_3 , 9U ) ;
bljdg3kynq_p = gimbih1di0 . P_10 [ bljdg3kynq_tmp ] ; njvhvg5yop_p =
muDoubleScalarAbs ( gimbih1di0 . P_10 [ bljdg3kynq_tmp ] ) ; b1ktd4gwdg =
gimbih1di0 . P_31 [ bljdg3kynq_tmp ] ; if ( localDW -> fiuvbwgdvm != 0 ) {
localX -> ih5x40znwx = cg5z05eaxh ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( pubqvcmed4 ->
_mdlRefSfcnS ) ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit (
pubqvcmed4 , 1 , 0 ) ) { localB -> k3shwnsgzx = gimbih1di0 . P_54 ; localB ->
d2jsuokv1c = gimbih1di0 . P_56 ; } ct1350zqmw /= bljdg3kynq_p ; if ( *
ldxbfzy4yw * localX -> ih5x40znwx > gimbih1di0 . P_55 ) { cg5z05eaxh =
b1ktd4gwdg ; } else { cg5z05eaxh = localB -> k3shwnsgzx ; } if ( ! (
ct1350zqmw * localX -> ih5x40znwx > gimbih1di0 . P_57 ) ) { b1ktd4gwdg =
localB -> d2jsuokv1c ; } localB -> a1fwu101by = ( ( cg5z05eaxh * * ldxbfzy4yw
+ b1ktd4gwdg * ct1350zqmw ) - 1.0 / njvhvg5yop_p / njvhvg5yop_p * gimbih1di0
. P_24 [ plook_u32d_binckan ( biprsijieh , gimbih1di0 . P_3 , 9U ) ] * localX
-> ih5x40znwx ) * ( 1.0 / ( gimbih1di0 . P_7 [ plook_u32d_binckan (
biprsijieh , gimbih1di0 . P_3 , 9U ) ] / njvhvg5yop_p / njvhvg5yop_p ) ) ; *
azye50kz02 = localX -> ih5x40znwx ; localB -> plkwzt0jdc = localX ->
ih5x40znwx / bljdg3kynq_p ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) ) {
srUpdateBC ( localDW -> prlkxfgjhi ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { localDW -> p2muon2qgq = 1 ; if ( rtmIsFirstInitCond (
pubqvcmed4 ) ) { localX -> lsght3lvcc = 0.0 ; resetSolver =
slIsRapidAcceleratorSimulating ( ) ; if ( resetSolver ) { resetSolver =
ssGetGlobalInitialStatesAvailable ( pubqvcmed4 -> _mdlRefSfcnS ) ; localDW ->
p2muon2qgq = ! resetSolver ; } else { localDW -> p2muon2qgq = 1 ; } localX ->
oinmq3iuai = 0.0 ; } localDW -> jcljt300rr = 1 ; if ( rtmIsFirstInitCond (
pubqvcmed4 ) ) { resetSolver = slIsRapidAcceleratorSimulating ( ) ; if (
resetSolver ) { resetSolver = ssGetGlobalInitialStatesAvailable ( pubqvcmed4
-> _mdlRefSfcnS ) ; localDW -> jcljt300rr = ! resetSolver ; } else { localDW
-> jcljt300rr = 1 ; } } if ( rtmGetTaskTime ( pubqvcmed4 , 0 ) !=
rtmGetTStart ( pubqvcmed4 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis ->
lsght3lvcc ) , 0 , 2 * sizeof ( boolean_T ) ) ; } cg5z05eaxh = gimbih1di0 .
P_10 [ plook_u32d_binckan ( biprsijieh , gimbih1di0 . P_3 , 9U ) ] ;
b1ktd4gwdg = muDoubleScalarAbs ( gimbih1di0 . P_10 [ plook_u32d_binckan (
biprsijieh , gimbih1di0 . P_3 , 9U ) ] ) ; if ( localDW -> p2muon2qgq != 0 )
{ localX -> lsght3lvcc = bljdg3kynq_p ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( pubqvcmed4 ->
_mdlRefSfcnS ) ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit (
pubqvcmed4 , 1 , 0 ) ) { localB -> jvkzg1oilo = gimbih1di0 . P_65 ; } if (
localDW -> jcljt300rr != 0 ) { localX -> oinmq3iuai = njvhvg5yop_p ; }
ct1350zqmw /= cg5z05eaxh ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) &&
rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB -> jcwcn4joys = gimbih1di0 .
P_66 ; localB -> msublvgoyb = gimbih1di0 . P_68 ; } bljdg3kynq_tmp =
plook_u32d_binckan ( localB -> jvkzg1oilo , gimbih1di0 . P_3 , 9U ) ; localB
-> d4vabuirjb = 1.0 / ( gimbih1di0 . P_7 [ plook_u32d_binckan ( localB ->
msublvgoyb , gimbih1di0 . P_3 , 9U ) ] - gimbih1di0 . P_7 [ bljdg3kynq_tmp ]
) * ( * ldxbfzy4yw - gimbih1di0 . P_24 [ bljdg3kynq_tmp ] * localX ->
lsght3lvcc ) ; if ( ct1350zqmw * localX -> oinmq3iuai > gimbih1di0 . P_67 ) {
bljdg3kynq_p = gimbih1di0 . P_31 [ plook_u32d_binckan ( biprsijieh ,
gimbih1di0 . P_3 , 9U ) ] ; } else { bljdg3kynq_p = localB -> jcwcn4joys ; }
localB -> gzmglqqijm = ( bljdg3kynq_p * ct1350zqmw - 1.0 / b1ktd4gwdg /
b1ktd4gwdg * gimbih1di0 . P_24 [ plook_u32d_binckan ( biprsijieh , gimbih1di0
. P_3 , 9U ) ] * localX -> oinmq3iuai ) * ( 1.0 / ( gimbih1di0 . P_7 [
plook_u32d_binckan ( biprsijieh , gimbih1di0 . P_3 , 9U ) ] / b1ktd4gwdg /
b1ktd4gwdg ) ) ; localB -> plkwzt0jdc = localX -> oinmq3iuai / cg5z05eaxh ; *
azye50kz02 = localX -> lsght3lvcc ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) )
{ srUpdateBC ( localDW -> l14mkp5oex ) ; } break ; } if ( rtmIsMajorTimeStep
( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB ->
fg2huvqeff = gimbih1di0 . P_39 ; } localB -> mjmd5kagwc = localB ->
plkwzt0jdc - * i215und1x3 ; if ( ! ( localB -> mrbaluwzmx != 0.0 ) ) {
oexatecjko = localB -> lcteodzxol ; } localB -> pknws2tgu3 = ( localB ->
mjmd5kagwc - oexatecjko ) * localB -> fg2huvqeff ; if ( rtmIsMajorTimeStep (
pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localB ->
gnuptvaren = gimbih1di0 . P_113 ; } if ( localX -> ahzdiwsjut [ 0 ] >=
gimbih1di0 . P_115 ) { if ( localX -> ahzdiwsjut [ 0 ] != gimbih1di0 . P_115
) { localX -> ahzdiwsjut [ 0 ] = gimbih1di0 . P_115 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} else { if ( ( localX -> ahzdiwsjut [ 0 ] <= gimbih1di0 . P_116 ) && (
localX -> ahzdiwsjut [ 0 ] != gimbih1di0 . P_116 ) ) { localX -> ahzdiwsjut [
0 ] = gimbih1di0 . P_116 ; ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; } } if ( localX -> ahzdiwsjut [ 1 ] >=
gimbih1di0 . P_115 ) { if ( localX -> ahzdiwsjut [ 1 ] != gimbih1di0 . P_115
) { localX -> ahzdiwsjut [ 1 ] = gimbih1di0 . P_115 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} else { if ( ( localX -> ahzdiwsjut [ 1 ] <= gimbih1di0 . P_116 ) && (
localX -> ahzdiwsjut [ 1 ] != gimbih1di0 . P_116 ) ) { localX -> ahzdiwsjut [
1 ] = gimbih1di0 . P_116 ; ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; } } if ( localX -> ahzdiwsjut [ 2 ] >=
gimbih1di0 . P_115 ) { if ( localX -> ahzdiwsjut [ 2 ] != gimbih1di0 . P_115
) { localX -> ahzdiwsjut [ 2 ] = gimbih1di0 . P_115 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} else { if ( ( localX -> ahzdiwsjut [ 2 ] <= gimbih1di0 . P_116 ) && (
localX -> ahzdiwsjut [ 2 ] != gimbih1di0 . P_116 ) ) { localX -> ahzdiwsjut [
2 ] = gimbih1di0 . P_116 ; ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; } } if ( localX -> ahzdiwsjut [ 3 ] >=
gimbih1di0 . P_115 ) { if ( localX -> ahzdiwsjut [ 3 ] != gimbih1di0 . P_115
) { localX -> ahzdiwsjut [ 3 ] = gimbih1di0 . P_115 ;
ssSetBlockStateForSolverChangedAtMajorStep ( pubqvcmed4 -> _mdlRefSfcnS ) ; }
} else { if ( ( localX -> ahzdiwsjut [ 3 ] <= gimbih1di0 . P_116 ) && (
localX -> ahzdiwsjut [ 3 ] != gimbih1di0 . P_116 ) ) { localX -> ahzdiwsjut [
3 ] = gimbih1di0 . P_116 ; ssSetBlockStateForSolverChangedAtMajorStep (
pubqvcmed4 -> _mdlRefSfcnS ) ; } } bumnd4n3ix [ 0 ] = gimbih1di0 . P_118 *
localX -> ahzdiwsjut [ 0 ] ; bumnd4n3ix [ 1 ] = gimbih1di0 . P_118 * localX
-> ahzdiwsjut [ 1 ] ; bumnd4n3ix [ 2 ] = gimbih1di0 . P_118 * localX ->
ahzdiwsjut [ 2 ] ; bumnd4n3ix [ 3 ] = gimbih1di0 . P_118 * localX ->
ahzdiwsjut [ 3 ] ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit (
pubqvcmed4 , 1 , 0 ) ) { localB -> anx20fm34p = gimbih1di0 . P_52 ; } localB
-> biwytgqqig [ 0 ] = localX -> jkw01kdco1 [ 0 ] ; localB -> biwytgqqig [ 1 ]
= localX -> jkw01kdco1 [ 1 ] ; localB -> biwytgqqig [ 2 ] = localX ->
jkw01kdco1 [ 2 ] ; localB -> biwytgqqig [ 3 ] = localX -> jkw01kdco1 [ 3 ] ;
} void DrivelineTID2 ( real_T * dkfocn2kw3 ) { * dkfocn2kw3 = 0.0 ; } void
cyzpp4e52p ( dwsgrvz41y * const pubqvcmed4 , const real_T owpf0zg2wy [ 4 ] ,
fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , grfcawoazk
* localXAbsTol ) { int32_T mr12l2gfl3 ; real_T unusedU1 [ 5 ] ; real_T
brcrvidjin ; real_T m0xyjwqd0t ; real_T moe2rcqkav_p [ 5 ] ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) ) { if ( memcmp ( pubqvcmed4 ->
nonContDerivSignal [ 0 ] . pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 0 ]
. pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) {
( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [ 0 ] . pPrevVal ,
pubqvcmed4 -> nonContDerivSignal [ 0 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) ; ssSetSolverNeedsReset ( pubqvcmed4
-> _mdlRefSfcnS ) ; } if ( memcmp ( pubqvcmed4 -> nonContDerivSignal [ 1 ] .
pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 1 ] . pPrevVal , pubqvcmed4 ->
nonContDerivSignal [ 1 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
pubqvcmed4 -> nonContDerivSignal [ 1 ] . pPrevVal , pubqvcmed4 ->
nonContDerivSignal [ 1 ] . pCurrVal , pubqvcmed4 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if
( memcmp ( pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 2 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
2 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 2 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 3 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
3 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 3 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 4 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 4 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 4 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
4 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 4 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 4 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 5 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 5 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 5 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
5 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 5 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 5 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 6 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 6 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 6 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
6 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 6 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 6 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 7 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 7 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 7 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
7 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 7 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 7 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 8 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 8 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 8 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
8 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 8 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 8 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } if ( memcmp (
pubqvcmed4 -> nonContDerivSignal [ 9 ] . pCurrVal , pubqvcmed4 ->
nonContDerivSignal [ 9 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 9 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( pubqvcmed4 -> nonContDerivSignal [
9 ] . pPrevVal , pubqvcmed4 -> nonContDerivSignal [ 9 ] . pCurrVal ,
pubqvcmed4 -> nonContDerivSignal [ 9 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( pubqvcmed4 -> _mdlRefSfcnS ) ; } } for ( mr12l2gfl3 =
0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ ) { brcrvidjin = localB -> bjrqukpcvi [
mr12l2gfl3 ] ; m0xyjwqd0t = owpf0zg2wy [ mr12l2gfl3 + 2 ] ; if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localB -> akkqis3b1g [ mr12l2gfl3 ] . ehj3cf1fgx = 1.0 / gimbih1di0 . P_43
* gimbih1di0 . akkqis3b1g . P_0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] .
ln30aiya51 = gimbih1di0 . P_0 ; } localB -> akkqis3b1g [ mr12l2gfl3 ] .
aiakq53oml = muDoubleScalarAbs ( brcrvidjin ) ; localB -> akkqis3b1g [
mr12l2gfl3 ] . flrers22xb = m0xyjwqd0t * localB -> akkqis3b1g [ mr12l2gfl3 ]
. ln30aiya51 ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit (
pubqvcmed4 , 1 , 0 ) ) { localB -> akkqis3b1g [ mr12l2gfl3 ] . or5utkl21c =
gimbih1di0 . P_2 ; } localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod =
localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 ; m0xyjwqd0t = localB ->
akkqis3b1g [ mr12l2gfl3 ] . flrers22xb + localB -> akkqis3b1g [ mr12l2gfl3 ]
. or5utkl21c ; if ( m0xyjwqd0t > gimbih1di0 . akkqis3b1g . P_2 ) { localB ->
akkqis3b1g [ mr12l2gfl3 ] . oxs5m0350u = gimbih1di0 . akkqis3b1g . P_2 ; }
else if ( m0xyjwqd0t < gimbih1di0 . akkqis3b1g . P_3 ) { localB -> akkqis3b1g
[ mr12l2gfl3 ] . oxs5m0350u = gimbih1di0 . akkqis3b1g . P_3 ; } else { localB
-> akkqis3b1g [ mr12l2gfl3 ] . oxs5m0350u = m0xyjwqd0t ; } if (
rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) )
{ localB -> akkqis3b1g [ mr12l2gfl3 ] . gnl0hwcrar = gimbih1di0 . P_12 ;
localB -> akkqis3b1g [ mr12l2gfl3 ] . hyoixrofmv = gimbih1di0 . P_15 ; }
localB -> akkqis3b1g [ mr12l2gfl3 ] . kbvouq0vuj = ( localB -> akkqis3b1g [
mr12l2gfl3 ] . oxs5m0350u * localB -> akkqis3b1g [ mr12l2gfl3 ] . gnl0hwcrar
* localB -> akkqis3b1g [ mr12l2gfl3 ] . hyoixrofmv * muDoubleScalarTanh (
gimbih1di0 . akkqis3b1g . P_4 * brcrvidjin ) * look1_binlcpw ( localB ->
akkqis3b1g [ mr12l2gfl3 ] . aiakq53oml , gimbih1di0 . P_30 , gimbih1di0 .
P_35 , 7U ) - localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod ) * localB ->
akkqis3b1g [ mr12l2gfl3 ] . ehj3cf1fgx ; localB -> iuhn1r0yqn [ mr12l2gfl3 ]
= localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod ; } moe2rcqkav_p [ 0 ] =
localB -> ibw0lnuow3 ; moe2rcqkav_p [ 1 ] = localB -> kjoljr1ckb ;
moe2rcqkav_p [ 2 ] = localB -> jxpjayeew1 ; moe2rcqkav_p [ 3 ] = localB ->
iuhn1r0yqn [ 0 ] ; moe2rcqkav_p [ 4 ] = localB -> iuhn1r0yqn [ 1 ] ; if (
gimbih1di0 . P_53 == 1.0 ) { automldiffas_4HAP7ofC ( moe2rcqkav_p ,
gimbih1di0 . P_25 , gimbih1di0 . P_23 , gimbih1di0 . P_26 , gimbih1di0 . P_11
, gimbih1di0 . P_13 , gimbih1di0 . P_14 , 1.0 , gimbih1di0 . P_5 , gimbih1di0
. P_8 , gimbih1di0 . P_9 , gimbih1di0 . P_6 , localB -> oz5keqi3jl , unusedU1
, localB -> hmsvslmdxi ) ; } else { automldiffas_4HAP7ofC ( moe2rcqkav_p ,
gimbih1di0 . P_25 , gimbih1di0 . P_23 , gimbih1di0 . P_26 , gimbih1di0 . P_11
, gimbih1di0 . P_13 , gimbih1di0 . P_14 , 0.0 , gimbih1di0 . P_5 , gimbih1di0
. P_8 , gimbih1di0 . P_9 , gimbih1di0 . P_6 , localB -> oz5keqi3jl , unusedU1
, localB -> hmsvslmdxi ) ; } if ( rtmIsMajorTimeStep ( pubqvcmed4 ) &&
rtmIsSampleHit ( pubqvcmed4 , 1 , 0 ) ) { localDW -> aydhqotte1 = localB ->
i1qakge32u ; localDW -> l502nimlgu = gimbih1di0 . P_112 ; localDW ->
f3zzxvwsi0 = gimbih1di0 . P_94 ; } localDW -> a3mzd4aqhf = 0 ; localDW ->
lgx52collq = 0 ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit (
pubqvcmed4 , 1 , 0 ) ) { localDW -> fjczxzuj0e = gimbih1di0 . P_95 ; localDW
-> djp1o4y0ml = gimbih1di0 . P_98 ; } localDW -> g3picovpjs = 0 ; localDW ->
arxnnxrfcl = 0 ; localDW -> oddg33f5qe = 0 ; switch ( localDW -> katpv1neqp )
{ case 0 : localDW -> fiuvbwgdvm = 0 ; break ; case 1 : localDW -> p2muon2qgq
= 0 ; localDW -> jcljt300rr = 0 ; break ; } localXAbsTol -> ahzdiwsjut [ 0 ]
= gimbih1di0 . P_117 ; localXAbsTol -> ahzdiwsjut [ 1 ] = gimbih1di0 . P_117
; localXAbsTol -> ahzdiwsjut [ 2 ] = gimbih1di0 . P_117 ; localXAbsTol ->
ahzdiwsjut [ 3 ] = gimbih1di0 . P_117 ; } void cyzpp4e52pTID2 ( void ) { }
void bpgqz3xzpl ( dwsgrvz41y * const pubqvcmed4 , const int8_T * jovsfwfg3e ,
const real_T caebyi2sab [ 4 ] , const real_T gilc33j2pa [ 4 ] , const real_T
owpf0zg2wy [ 4 ] , fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b *
localX , bjbjifrsrv * localXdot ) { int32_T mr12l2gfl3 ; boolean_T lsat ;
boolean_T usat ; real_T unusedU1 [ 5 ] ; real_T jxcoxcn4sw_p ; real_T
bdmuipchxr_p ; real_T moe2rcqkav_e [ 5 ] ; real_T agk5xvh3rn_idx_0 ; real_T
agk5xvh3rn_idx_1 ; real_T agk5xvh3rn_idx_2 ; real_T agk5xvh3rn_idx_3 ; for (
mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ ) { jxcoxcn4sw_p = localB ->
bjrqukpcvi [ mr12l2gfl3 ] ; bdmuipchxr_p = owpf0zg2wy [ mr12l2gfl3 + 2 ] ; if
( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 )
) { localB -> akkqis3b1g [ mr12l2gfl3 ] . ehj3cf1fgx = 1.0 / gimbih1di0 .
P_43 * gimbih1di0 . akkqis3b1g . P_0 ; localB -> akkqis3b1g [ mr12l2gfl3 ] .
ln30aiya51 = gimbih1di0 . P_0 ; } localB -> akkqis3b1g [ mr12l2gfl3 ] .
aiakq53oml = muDoubleScalarAbs ( jxcoxcn4sw_p ) ; localB -> akkqis3b1g [
mr12l2gfl3 ] . flrers22xb = bdmuipchxr_p * localB -> akkqis3b1g [ mr12l2gfl3
] . ln30aiya51 ; if ( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit (
pubqvcmed4 , 1 , 0 ) ) { localB -> akkqis3b1g [ mr12l2gfl3 ] . or5utkl21c =
gimbih1di0 . P_2 ; } localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod =
localX -> akkqis3b1g [ mr12l2gfl3 ] . cjupo52fq3 ; bdmuipchxr_p = localB ->
akkqis3b1g [ mr12l2gfl3 ] . flrers22xb + localB -> akkqis3b1g [ mr12l2gfl3 ]
. or5utkl21c ; if ( bdmuipchxr_p > gimbih1di0 . akkqis3b1g . P_2 ) { localB
-> akkqis3b1g [ mr12l2gfl3 ] . oxs5m0350u = gimbih1di0 . akkqis3b1g . P_2 ; }
else if ( bdmuipchxr_p < gimbih1di0 . akkqis3b1g . P_3 ) { localB ->
akkqis3b1g [ mr12l2gfl3 ] . oxs5m0350u = gimbih1di0 . akkqis3b1g . P_3 ; }
else { localB -> akkqis3b1g [ mr12l2gfl3 ] . oxs5m0350u = bdmuipchxr_p ; } if
( rtmIsMajorTimeStep ( pubqvcmed4 ) && rtmIsSampleHit ( pubqvcmed4 , 1 , 0 )
) { localB -> akkqis3b1g [ mr12l2gfl3 ] . gnl0hwcrar = gimbih1di0 . P_12 ;
localB -> akkqis3b1g [ mr12l2gfl3 ] . hyoixrofmv = gimbih1di0 . P_15 ; }
localB -> akkqis3b1g [ mr12l2gfl3 ] . kbvouq0vuj = ( localB -> akkqis3b1g [
mr12l2gfl3 ] . oxs5m0350u * localB -> akkqis3b1g [ mr12l2gfl3 ] . gnl0hwcrar
* localB -> akkqis3b1g [ mr12l2gfl3 ] . hyoixrofmv * muDoubleScalarTanh (
gimbih1di0 . akkqis3b1g . P_4 * jxcoxcn4sw_p ) * look1_binlcpw ( localB ->
akkqis3b1g [ mr12l2gfl3 ] . aiakq53oml , gimbih1di0 . P_30 , gimbih1di0 .
P_35 , 7U ) - localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod ) * localB ->
akkqis3b1g [ mr12l2gfl3 ] . ehj3cf1fgx ; localB -> iuhn1r0yqn [ mr12l2gfl3 ]
= localB -> akkqis3b1g [ mr12l2gfl3 ] . ffc3jv4qod ; } moe2rcqkav_e [ 0 ] =
localB -> ibw0lnuow3 ; moe2rcqkav_e [ 1 ] = localB -> kjoljr1ckb ;
moe2rcqkav_e [ 2 ] = localB -> jxpjayeew1 ; moe2rcqkav_e [ 3 ] = localB ->
iuhn1r0yqn [ 0 ] ; moe2rcqkav_e [ 4 ] = localB -> iuhn1r0yqn [ 1 ] ; if (
gimbih1di0 . P_53 == 1.0 ) { automldiffas_4HAP7ofC ( moe2rcqkav_e ,
gimbih1di0 . P_25 , gimbih1di0 . P_23 , gimbih1di0 . P_26 , gimbih1di0 . P_11
, gimbih1di0 . P_13 , gimbih1di0 . P_14 , 1.0 , gimbih1di0 . P_5 , gimbih1di0
. P_8 , gimbih1di0 . P_9 , gimbih1di0 . P_6 , localB -> oz5keqi3jl , unusedU1
, localB -> hmsvslmdxi ) ; } else { automldiffas_4HAP7ofC ( moe2rcqkav_e ,
gimbih1di0 . P_25 , gimbih1di0 . P_23 , gimbih1di0 . P_26 , gimbih1di0 . P_11
, gimbih1di0 . P_13 , gimbih1di0 . P_14 , 0.0 , gimbih1di0 . P_5 , gimbih1di0
. P_8 , gimbih1di0 . P_9 , gimbih1di0 . P_6 , localB -> oz5keqi3jl , unusedU1
, localB -> hmsvslmdxi ) ; } jxcoxcn4sw_p = localB -> fdewlfwvcf [ 0 ] -
gilc33j2pa [ 2 ] ; bdmuipchxr_p = localB -> fdewlfwvcf [ 1 ] - gilc33j2pa [ 3
] ; if ( caebyi2sab [ 0 ] != 0.0 ) { agk5xvh3rn_idx_3 = caebyi2sab [ 0 ] ; }
else { agk5xvh3rn_idx_3 = localB -> gnuptvaren ; } agk5xvh3rn_idx_0 = (
agk5xvh3rn_idx_3 - localB -> biwytgqqig [ 0 ] ) * localB -> anx20fm34p ; if (
caebyi2sab [ 1 ] != 0.0 ) { agk5xvh3rn_idx_3 = caebyi2sab [ 1 ] ; } else {
agk5xvh3rn_idx_3 = localB -> gnuptvaren ; } agk5xvh3rn_idx_1 = (
agk5xvh3rn_idx_3 - localB -> biwytgqqig [ 1 ] ) * localB -> anx20fm34p ; if (
caebyi2sab [ 2 ] != 0.0 ) { agk5xvh3rn_idx_3 = caebyi2sab [ 2 ] ; } else {
agk5xvh3rn_idx_3 = localB -> gnuptvaren ; } agk5xvh3rn_idx_2 = (
agk5xvh3rn_idx_3 - localB -> biwytgqqig [ 2 ] ) * localB -> anx20fm34p ; if (
caebyi2sab [ 3 ] != 0.0 ) { agk5xvh3rn_idx_3 = caebyi2sab [ 3 ] ; } else {
agk5xvh3rn_idx_3 = localB -> gnuptvaren ; } agk5xvh3rn_idx_3 = (
agk5xvh3rn_idx_3 - localB -> biwytgqqig [ 3 ] ) * localB -> anx20fm34p ; for
( mr12l2gfl3 = 0 ; mr12l2gfl3 < 2 ; mr12l2gfl3 ++ ) { localXdot -> akkqis3b1g
[ mr12l2gfl3 ] . cjupo52fq3 = localB -> akkqis3b1g [ mr12l2gfl3 ] .
kbvouq0vuj ; } localXdot -> nkhwyywomp = localB -> pknws2tgu3 ; localXdot ->
gmkd3jzxo3 = localB -> mjmd5kagwc ; localXdot -> hddpi2g224 = ( jxcoxcn4sw_p
- localB -> bjcl1qsi0h ) * localB -> owdxvnl4zt ; localXdot -> aaxaf4jedn =
jxcoxcn4sw_p ; localXdot -> o2lamygnrv = ( bdmuipchxr_p - localB ->
d1zatzg4p1 ) * localB -> pjazufybvm ; localXdot -> jkxxbnfgvy = bdmuipchxr_p
; lsat = ( localX -> apjpgtpiwz [ 0 ] <= gimbih1di0 . P_84 ) ; usat = (
localX -> apjpgtpiwz [ 0 ] >= gimbih1di0 . P_83 ) ; if ( ( ( ! lsat ) && ( !
usat ) ) || ( lsat && ( localB -> hmsvslmdxi [ 0 ] > 0.0 ) ) || ( usat && (
localB -> hmsvslmdxi [ 0 ] < 0.0 ) ) ) { localXdot -> apjpgtpiwz [ 0 ] =
localB -> hmsvslmdxi [ 0 ] ; } else { localXdot -> apjpgtpiwz [ 0 ] = 0.0 ; }
lsat = ( localX -> apjpgtpiwz [ 1 ] <= gimbih1di0 . P_84 ) ; usat = ( localX
-> apjpgtpiwz [ 1 ] >= gimbih1di0 . P_83 ) ; if ( ( ( ! lsat ) && ( ! usat )
) || ( lsat && ( localB -> hmsvslmdxi [ 1 ] > 0.0 ) ) || ( usat && ( localB
-> hmsvslmdxi [ 1 ] < 0.0 ) ) ) { localXdot -> apjpgtpiwz [ 1 ] = localB ->
hmsvslmdxi [ 1 ] ; } else { localXdot -> apjpgtpiwz [ 1 ] = 0.0 ; } localXdot
-> ioq10m20tp = ( ( real_T ) * jovsfwfg3e - localB -> k03bggqg1w ) * localB
-> ijmrsoeuus ; localXdot -> ih5x40znwx = 0.0 ; { real_T * dx ; int_T i ; dx
= & ( localXdot -> lsght3lvcc ) ; for ( i = 0 ; i < 2 ; i ++ ) { dx [ i ] =
0.0 ; } } switch ( localDW -> katpv1neqp ) { case 0 : localXdot -> ih5x40znwx
= localB -> a1fwu101by ; break ; case 1 : localXdot -> lsght3lvcc = localB ->
d4vabuirjb ; localXdot -> oinmq3iuai = localB -> gzmglqqijm ; break ; } lsat
= ( localX -> ahzdiwsjut [ 0 ] <= gimbih1di0 . P_116 ) ; usat = ( localX ->
ahzdiwsjut [ 0 ] >= gimbih1di0 . P_115 ) ; if ( ( ( ! lsat ) && ( ! usat ) )
|| ( lsat && ( localB -> biwytgqqig [ 0 ] > 0.0 ) ) || ( usat && ( localB ->
biwytgqqig [ 0 ] < 0.0 ) ) ) { localXdot -> ahzdiwsjut [ 0 ] = localB ->
biwytgqqig [ 0 ] ; } else { localXdot -> ahzdiwsjut [ 0 ] = 0.0 ; } localXdot
-> jkw01kdco1 [ 0 ] = agk5xvh3rn_idx_0 ; lsat = ( localX -> ahzdiwsjut [ 1 ]
<= gimbih1di0 . P_116 ) ; usat = ( localX -> ahzdiwsjut [ 1 ] >= gimbih1di0 .
P_115 ) ; if ( ( ( ! lsat ) && ( ! usat ) ) || ( lsat && ( localB ->
biwytgqqig [ 1 ] > 0.0 ) ) || ( usat && ( localB -> biwytgqqig [ 1 ] < 0.0 )
) ) { localXdot -> ahzdiwsjut [ 1 ] = localB -> biwytgqqig [ 1 ] ; } else {
localXdot -> ahzdiwsjut [ 1 ] = 0.0 ; } localXdot -> jkw01kdco1 [ 1 ] =
agk5xvh3rn_idx_1 ; lsat = ( localX -> ahzdiwsjut [ 2 ] <= gimbih1di0 . P_116
) ; usat = ( localX -> ahzdiwsjut [ 2 ] >= gimbih1di0 . P_115 ) ; if ( ( ( !
lsat ) && ( ! usat ) ) || ( lsat && ( localB -> biwytgqqig [ 2 ] > 0.0 ) ) ||
( usat && ( localB -> biwytgqqig [ 2 ] < 0.0 ) ) ) { localXdot -> ahzdiwsjut
[ 2 ] = localB -> biwytgqqig [ 2 ] ; } else { localXdot -> ahzdiwsjut [ 2 ] =
0.0 ; } localXdot -> jkw01kdco1 [ 2 ] = agk5xvh3rn_idx_2 ; lsat = ( localX ->
ahzdiwsjut [ 3 ] <= gimbih1di0 . P_116 ) ; usat = ( localX -> ahzdiwsjut [ 3
] >= gimbih1di0 . P_115 ) ; if ( ( ( ! lsat ) && ( ! usat ) ) || ( lsat && (
localB -> biwytgqqig [ 3 ] > 0.0 ) ) || ( usat && ( localB -> biwytgqqig [ 3
] < 0.0 ) ) ) { localXdot -> ahzdiwsjut [ 3 ] = localB -> biwytgqqig [ 3 ] ;
} else { localXdot -> ahzdiwsjut [ 3 ] = 0.0 ; } localXdot -> jkw01kdco1 [ 3
] = agk5xvh3rn_idx_3 ; } void btsnzboicn ( dwsgrvz41y * const pubqvcmed4 ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( pubqvcmed4
-> _mdlRefSfcnS , "Driveline" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void jnccjczqwr ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , dwsgrvz41y * const
pubqvcmed4 , fxrjyezkwn * localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX
, gvxaj4x0qw * localZCE , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; gimbih1di0 . P_60 = rtMinusInf ; gimbih1di0 . P_61 = rtInf ; gimbih1di0 .
P_71 = rtMinusInf ; gimbih1di0 . P_72 = rtInf ; gimbih1di0 . akkqis3b1g . P_2
= rtInf ; ( void ) memset ( ( void * ) pubqvcmed4 , 0 , sizeof ( dwsgrvz41y )
) ; pubqvcmed4 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; pubqvcmed4
-> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; pubqvcmed4 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; pubqvcmed4 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( pubqvcmed4 -> _mdlRefSfcnS , "Driveline" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> i1qakge32u = 0.0
; localB -> mrbaluwzmx = 0.0 ; localB -> lcteodzxol = 0.0 ; localB ->
ibw0lnuow3 = 0.0 ; localB -> izsosdb44b = 0.0 ; localB -> nk43iwq3jf = 0.0 ;
localB -> kjoljr1ckb = 0.0 ; localB -> btyi2ndgbz = 0.0 ; localB ->
khtv03rqea = 0.0 ; localB -> jxpjayeew1 = 0.0 ; localB -> kt0uvncp2i [ 0 ] =
0.0 ; localB -> kt0uvncp2i [ 1 ] = 0.0 ; localB -> oz5keqi3jl [ 0 ] = 0.0 ;
localB -> oz5keqi3jl [ 1 ] = 0.0 ; localB -> dencyobjsn = 0.0 ; localB ->
g2yxee4wvs = 0.0 ; localB -> abnerhvlz0 = 0.0 ; localB -> blyeaw1pdn = 0.0 ;
localB -> bjrqukpcvi [ 0 ] = 0.0 ; localB -> bjrqukpcvi [ 1 ] = 0.0 ; localB
-> egxs2cv14b = 0.0 ; localB -> fdewlfwvcf [ 0 ] = 0.0 ; localB -> fdewlfwvcf
[ 1 ] = 0.0 ; localB -> owdxvnl4zt = 0.0 ; localB -> bjcl1qsi0h = 0.0 ;
localB -> pjazufybvm = 0.0 ; localB -> d1zatzg4p1 = 0.0 ; localB ->
ijmrsoeuus = 0.0 ; localB -> flty4tax20 = 0.0 ; localB -> nqq21eh4fz = 0.0 ;
localB -> k03bggqg1w = 0.0 ; localB -> lz5ipm1gur = 0.0 ; localB ->
ikqfneohrd = 0.0 ; localB -> i3lty3zbjd = 0.0 ; localB -> dkw2oxd3md = 0.0 ;
localB -> p0mm3cjimv = 0.0 ; localB -> lyir1nkvdn = 0.0 ; localB ->
plkwzt0jdc = 0.0 ; localB -> fg2huvqeff = 0.0 ; localB -> mjmd5kagwc = 0.0 ;
localB -> pknws2tgu3 = 0.0 ; localB -> gnuptvaren = 0.0 ; localB ->
anx20fm34p = 0.0 ; localB -> biwytgqqig [ 0 ] = 0.0 ; localB -> biwytgqqig [
1 ] = 0.0 ; localB -> biwytgqqig [ 2 ] = 0.0 ; localB -> biwytgqqig [ 3 ] =
0.0 ; localB -> jvkzg1oilo = 0.0 ; localB -> jcwcn4joys = 0.0 ; localB ->
msublvgoyb = 0.0 ; localB -> d4vabuirjb = 0.0 ; localB -> gzmglqqijm = 0.0 ;
localB -> k3shwnsgzx = 0.0 ; localB -> d2jsuokv1c = 0.0 ; localB ->
a1fwu101by = 0.0 ; localB -> iuhn1r0yqn [ 0 ] = 0.0 ; localB -> iuhn1r0yqn [
1 ] = 0.0 ; localB -> hmsvslmdxi [ 0 ] = 0.0 ; localB -> hmsvslmdxi [ 1 ] =
0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( bsz3qtxrxd ) ) ;
localDW -> aydhqotte1 = 0.0 ; localDW -> l502nimlgu = 0.0 ; localDW ->
f3zzxvwsi0 = 0.0 ; localDW -> fjczxzuj0e = 0.0 ; localDW -> djp1o4y0ml = 0.0
; Driveline_InitializeDataMapInfo ( pubqvcmed4 , localDW , localX , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
pubqvcmed4 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( pubqvcmed4 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
pubqvcmed4 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } pubqvcmed4 ->
nonContDerivSignal [ 0 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig0 ; pubqvcmed4 -> nonContDerivSignal [ 0 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 0 ] . pCurrVal = ( char_T * ) ( & localB -> nqq21eh4fz ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 1 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig1 ; pubqvcmed4 -> nonContDerivSignal [ 1 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 1 ] . pCurrVal = ( char_T * ) ( & localB -> ijmrsoeuus ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 2 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig2 ; pubqvcmed4 -> nonContDerivSignal [ 2 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 2 ] . pCurrVal = ( char_T * ) ( & localB -> egxs2cv14b ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 3 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig3 ; pubqvcmed4 -> nonContDerivSignal [ 3 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 3 ] . pCurrVal = ( char_T * ) ( & localB -> blyeaw1pdn ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 4 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig4 ; pubqvcmed4 -> nonContDerivSignal [ 4 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 4 ] . pCurrVal = ( char_T * ) ( & localB -> g2yxee4wvs ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 5 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig5 ; pubqvcmed4 -> nonContDerivSignal [ 5 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 5 ] . pCurrVal = ( char_T * ) ( & localB -> btyi2ndgbz ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 6 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig6 ; pubqvcmed4 -> nonContDerivSignal [ 6 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 6 ] . pCurrVal = ( char_T * ) ( & localB -> izsosdb44b ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 7 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig7 ; pubqvcmed4 -> nonContDerivSignal [ 7 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 7 ] . pCurrVal = ( char_T * ) ( & localB -> mrbaluwzmx ) ; ; pubqvcmed4 ->
nonContDerivSignal [ 8 ] . pPrevVal = ( char_T * ) pubqvcmed4 ->
NonContDerivMemory . mr_nonContSig8 ; pubqvcmed4 -> nonContDerivSignal [ 8 ]
. sizeInBytes = ( 1 * sizeof ( real_T ) ) ; pubqvcmed4 -> nonContDerivSignal
[ 8 ] . pCurrVal = ( char_T * ) ( & localB -> akkqis3b1g [ 1 ] . ehj3cf1fgx )
; ; pubqvcmed4 -> nonContDerivSignal [ 9 ] . pPrevVal = ( char_T * )
pubqvcmed4 -> NonContDerivMemory . mr_nonContSig9 ; pubqvcmed4 ->
nonContDerivSignal [ 9 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
pubqvcmed4 -> nonContDerivSignal [ 9 ] . pCurrVal = ( char_T * ) ( & localB
-> akkqis3b1g [ 0 ] . ehj3cf1fgx ) ; ; if ( mr_nonContOutputArray [ 4 ] != (
NULL ) ) { mr_nonContOutputArray [ 4 ] [ 0 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 4 ] [ 0 ] . currVal = ( char_T * ) &
localB -> egxs2cv14b ; mr_nonContOutputArray [ 4 ] [ 0 ] . next = ( NULL ) ;
} localZCE -> p3b4nvkjzw = UNINITIALIZED_ZCSIG ; localZCE -> giezqglh10 =
UNINITIALIZED_ZCSIG ; localZCE -> obw1lxt001 = UNINITIALIZED_ZCSIG ; localZCE
-> p33raon0ot = UNINITIALIZED_ZCSIG ; } void mr_Driveline_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Driveline , 58 ) ; * retVal = 1 ; } static void
mr_Driveline_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Driveline_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Driveline_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Driveline_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Driveline_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Driveline_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Driveline_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Driveline_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Driveline_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Driveline_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Driveline_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Driveline_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Driveline_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Driveline_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Driveline_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Driveline_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Driveline_GetDWork ( const n5qm5cab0up * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Driveline_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) ,
sizeof ( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 19
] = { "mdlrefDW->rtdw.aydhqotte1" , "mdlrefDW->rtdw.l502nimlgu" ,
"mdlrefDW->rtdw.f3zzxvwsi0" , "mdlrefDW->rtdw.fjczxzuj0e" ,
"mdlrefDW->rtdw.djp1o4y0ml" , "mdlrefDW->rtdw.a3mzd4aqhf" ,
"mdlrefDW->rtdw.lgx52collq" , "mdlrefDW->rtdw.g3picovpjs" ,
"mdlrefDW->rtdw.arxnnxrfcl" , "mdlrefDW->rtdw.oddg33f5qe" ,
"mdlrefDW->rtdw.p2muon2qgq" , "mdlrefDW->rtdw.jcljt300rr" ,
"mdlrefDW->rtdw.fiuvbwgdvm" , "mdlrefDW->rtdw.katpv1neqp" ,
"mdlrefDW->rtdw.l14mkp5oex" , "mdlrefDW->rtdw.prlkxfgjhi" ,
"mdlrefDW->rtdw.lipy4djzen" , "mdlrefDW->rtdw.aatsaj2ujy" ,
"mdlrefDW->rtdw.i1vb2cxyv5" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 19 , rtdwDataFieldNames ) ; mr_Driveline_cacheDataAsMxArray (
rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw . aydhqotte1 ) , sizeof ( mdlrefDW ->
rtdw . aydhqotte1 ) ) ; mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 1 ,
& ( mdlrefDW -> rtdw . l502nimlgu ) , sizeof ( mdlrefDW -> rtdw . l502nimlgu
) ) ; mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW ->
rtdw . f3zzxvwsi0 ) , sizeof ( mdlrefDW -> rtdw . f3zzxvwsi0 ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
fjczxzuj0e ) , sizeof ( mdlrefDW -> rtdw . fjczxzuj0e ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
djp1o4y0ml ) , sizeof ( mdlrefDW -> rtdw . djp1o4y0ml ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw .
a3mzd4aqhf ) , sizeof ( mdlrefDW -> rtdw . a3mzd4aqhf ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW -> rtdw .
lgx52collq ) , sizeof ( mdlrefDW -> rtdw . lgx52collq ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW -> rtdw .
g3picovpjs ) , sizeof ( mdlrefDW -> rtdw . g3picovpjs ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW -> rtdw .
arxnnxrfcl ) , sizeof ( mdlrefDW -> rtdw . arxnnxrfcl ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW -> rtdw .
oddg33f5qe ) , sizeof ( mdlrefDW -> rtdw . oddg33f5qe ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW -> rtdw .
p2muon2qgq ) , sizeof ( mdlrefDW -> rtdw . p2muon2qgq ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW -> rtdw .
jcljt300rr ) , sizeof ( mdlrefDW -> rtdw . jcljt300rr ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW -> rtdw .
fiuvbwgdvm ) , sizeof ( mdlrefDW -> rtdw . fiuvbwgdvm ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW -> rtdw .
katpv1neqp ) , sizeof ( mdlrefDW -> rtdw . katpv1neqp ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW -> rtdw .
l14mkp5oex ) , sizeof ( mdlrefDW -> rtdw . l14mkp5oex ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 15 , & ( mdlrefDW -> rtdw .
prlkxfgjhi ) , sizeof ( mdlrefDW -> rtdw . prlkxfgjhi ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 16 , & ( mdlrefDW -> rtdw .
lipy4djzen ) , sizeof ( mdlrefDW -> rtdw . lipy4djzen ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 17 , & ( mdlrefDW -> rtdw .
aatsaj2ujy ) , sizeof ( mdlrefDW -> rtdw . aatsaj2ujy ) ) ;
mr_Driveline_cacheDataAsMxArray ( rtdwData , 0 , 18 , & ( mdlrefDW -> rtdw .
i1vb2cxyv5 ) , sizeof ( mdlrefDW -> rtdw . i1vb2cxyv5 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_Driveline_cacheDataAsMxArray ( ssDW , 0 , 2 , & ( mdlrefDW -> rtzce ) ,
sizeof ( mdlrefDW -> rtzce ) ) ; ( void ) mdlrefDW ; return ssDW ; } void
mr_Driveline_SetDWork ( n5qm5cab0up * mdlrefDW , const mxArray * ssDW ) { (
void ) ssDW ; ( void ) mdlrefDW ; mr_Driveline_restoreDataFromMxArray ( & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . aydhqotte1 ) ,
rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . aydhqotte1 ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . l502nimlgu ) ,
rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . l502nimlgu ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . f3zzxvwsi0 ) ,
rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . f3zzxvwsi0 ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . fjczxzuj0e ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . fjczxzuj0e ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . djp1o4y0ml ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . djp1o4y0ml ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . a3mzd4aqhf ) ,
rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . a3mzd4aqhf ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lgx52collq ) ,
rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . lgx52collq ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . g3picovpjs ) ,
rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . g3picovpjs ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . arxnnxrfcl ) ,
rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . arxnnxrfcl ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . oddg33f5qe ) ,
rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . oddg33f5qe ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . p2muon2qgq ) ,
rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . p2muon2qgq ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . jcljt300rr ) ,
rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . jcljt300rr ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . fiuvbwgdvm ) ,
rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . fiuvbwgdvm ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . katpv1neqp ) ,
rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . katpv1neqp ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . l14mkp5oex ) ,
rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . l14mkp5oex ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . prlkxfgjhi ) ,
rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . prlkxfgjhi ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lipy4djzen ) ,
rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . lipy4djzen ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . aatsaj2ujy ) ,
rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . aatsaj2ujy ) ) ;
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . i1vb2cxyv5 ) ,
rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . i1vb2cxyv5 ) ) ; }
mr_Driveline_restoreDataFromMxArray ( & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2
, sizeof ( mdlrefDW -> rtzce ) ) ; } void
mr_Driveline_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1916916321U , 4083691615U , 634403319U , 3104390673U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Driveline" , & chksum [ 0 ] ) ; }
mxArray * mr_Driveline_GetSimStateDisallowedBlocks ( ) { return NULL ; }
