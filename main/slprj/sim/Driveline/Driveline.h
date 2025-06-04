#ifndef RTW_HEADER_Driveline_h_
#define RTW_HEADER_Driveline_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Driveline_COMMON_INCLUDES_
#define Driveline_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Driveline_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T ehj3cf1fgx ; real_T aiakq53oml ; real_T ln30aiya51 ;
real_T flrers22xb ; real_T or5utkl21c ; real_T ffc3jv4qod ; real_T oxs5m0350u
; real_T gnl0hwcrar ; real_T hyoixrofmv ; real_T kbvouq0vuj ; } efchnu4f1l ;
typedef struct { real_T cjupo52fq3 ; } l41wzh1l0b ; typedef struct { real_T
cjupo52fq3 ; } dtppvsdcp2 ; typedef struct { boolean_T cjupo52fq3 ; }
cfznqp4b1y ; typedef struct { real_T cjupo52fq3 ; } ff2cksbxt0 ; typedef
struct { real_T cjupo52fq3 ; } a2ygobmwxo ; typedef struct { real_T
cjupo52fq3 ; } d3gakkxfww ; typedef struct { real_T i1qakge32u ; real_T
mrbaluwzmx ; real_T lcteodzxol ; real_T ibw0lnuow3 ; real_T izsosdb44b ;
real_T nk43iwq3jf ; real_T kjoljr1ckb ; real_T btyi2ndgbz ; real_T khtv03rqea
; real_T jxpjayeew1 ; real_T kt0uvncp2i [ 2 ] ; real_T oz5keqi3jl [ 2 ] ;
real_T dencyobjsn ; real_T g2yxee4wvs ; real_T abnerhvlz0 ; real_T blyeaw1pdn
; real_T bjrqukpcvi [ 2 ] ; real_T egxs2cv14b ; real_T fdewlfwvcf [ 2 ] ;
real_T owdxvnl4zt ; real_T bjcl1qsi0h ; real_T pjazufybvm ; real_T d1zatzg4p1
; real_T ijmrsoeuus ; real_T flty4tax20 ; real_T nqq21eh4fz ; real_T
k03bggqg1w ; real_T lz5ipm1gur ; real_T ikqfneohrd ; real_T i3lty3zbjd ;
real_T dkw2oxd3md ; real_T p0mm3cjimv ; real_T lyir1nkvdn ; real_T plkwzt0jdc
; real_T fg2huvqeff ; real_T mjmd5kagwc ; real_T pknws2tgu3 ; real_T
gnuptvaren ; real_T anx20fm34p ; real_T biwytgqqig [ 4 ] ; real_T jvkzg1oilo
; real_T jcwcn4joys ; real_T msublvgoyb ; real_T d4vabuirjb ; real_T
gzmglqqijm ; real_T k3shwnsgzx ; real_T d2jsuokv1c ; real_T a1fwu101by ;
real_T iuhn1r0yqn [ 2 ] ; real_T hmsvslmdxi [ 2 ] ; efchnu4f1l akkqis3b1g [ 2
] ; } fxrjyezkwn ; typedef struct { real_T aydhqotte1 ; real_T l502nimlgu ;
real_T f3zzxvwsi0 ; real_T fjczxzuj0e ; real_T djp1o4y0ml ; int_T a3mzd4aqhf
; int_T lgx52collq ; int_T g3picovpjs ; int_T arxnnxrfcl ; int_T oddg33f5qe ;
int_T p2muon2qgq ; int_T jcljt300rr ; int_T fiuvbwgdvm ; int8_T katpv1neqp ;
int8_T l14mkp5oex ; int8_T prlkxfgjhi ; boolean_T lipy4djzen ; boolean_T
aatsaj2ujy ; boolean_T i1vb2cxyv5 ; } bsz3qtxrxd ; typedef struct { real_T
nkhwyywomp ; real_T gmkd3jzxo3 ; real_T hddpi2g224 ; real_T aaxaf4jedn ;
real_T o2lamygnrv ; real_T jkxxbnfgvy ; real_T apjpgtpiwz [ 2 ] ; real_T
ioq10m20tp ; real_T ahzdiwsjut [ 4 ] ; real_T jkw01kdco1 [ 4 ] ; real_T
lsght3lvcc ; real_T oinmq3iuai ; real_T ih5x40znwx ; l41wzh1l0b akkqis3b1g [
2 ] ; } oakdhkzk5b ; typedef struct { real_T nkhwyywomp ; real_T gmkd3jzxo3 ;
real_T hddpi2g224 ; real_T aaxaf4jedn ; real_T o2lamygnrv ; real_T jkxxbnfgvy
; real_T apjpgtpiwz [ 2 ] ; real_T ioq10m20tp ; real_T ahzdiwsjut [ 4 ] ;
real_T jkw01kdco1 [ 4 ] ; real_T lsght3lvcc ; real_T oinmq3iuai ; real_T
ih5x40znwx ; dtppvsdcp2 akkqis3b1g [ 2 ] ; } bjbjifrsrv ; typedef struct {
boolean_T nkhwyywomp ; boolean_T gmkd3jzxo3 ; boolean_T hddpi2g224 ;
boolean_T aaxaf4jedn ; boolean_T o2lamygnrv ; boolean_T jkxxbnfgvy ;
boolean_T apjpgtpiwz [ 2 ] ; boolean_T ioq10m20tp ; boolean_T ahzdiwsjut [ 4
] ; boolean_T jkw01kdco1 [ 4 ] ; boolean_T lsght3lvcc ; boolean_T oinmq3iuai
; boolean_T ih5x40znwx ; cfznqp4b1y akkqis3b1g [ 2 ] ; } l1pljxktrl ; typedef
struct { real_T nkhwyywomp ; real_T gmkd3jzxo3 ; real_T hddpi2g224 ; real_T
aaxaf4jedn ; real_T o2lamygnrv ; real_T jkxxbnfgvy ; real_T apjpgtpiwz [ 2 ]
; real_T ioq10m20tp ; real_T ahzdiwsjut [ 4 ] ; real_T jkw01kdco1 [ 4 ] ;
real_T lsght3lvcc ; real_T oinmq3iuai ; real_T ih5x40znwx ; ff2cksbxt0
akkqis3b1g [ 2 ] ; } grfcawoazk ; typedef struct { real_T nkhwyywomp ; real_T
gmkd3jzxo3 ; real_T hddpi2g224 ; real_T aaxaf4jedn ; real_T o2lamygnrv ;
real_T jkxxbnfgvy ; real_T apjpgtpiwz [ 2 ] ; real_T ioq10m20tp ; real_T
ahzdiwsjut [ 4 ] ; real_T jkw01kdco1 [ 4 ] ; real_T lsght3lvcc ; real_T
oinmq3iuai ; real_T ih5x40znwx ; a2ygobmwxo akkqis3b1g [ 2 ] ; } bhoei0xoot ;
typedef struct { real_T nkhwyywomp ; real_T gmkd3jzxo3 ; real_T hddpi2g224 ;
real_T aaxaf4jedn ; real_T o2lamygnrv ; real_T jkxxbnfgvy ; real_T apjpgtpiwz
[ 2 ] ; real_T ioq10m20tp ; real_T ahzdiwsjut [ 4 ] ; real_T jkw01kdco1 [ 4 ]
; real_T lsght3lvcc ; real_T oinmq3iuai ; real_T ih5x40znwx ; d3gakkxfww
akkqis3b1g [ 2 ] ; } ewin1y1mwc ; typedef struct { real_T op4gzlb3bs ; real_T
ofu1pcsnrr ; real_T pvg0ca34us ; real_T be2dgxlv2o ; } jn1etpvcka ; typedef
struct { ZCSigState p3b4nvkjzw ; ZCSigState giezqglh10 ; ZCSigState
obw1lxt001 ; ZCSigState p33raon0ot ; } gvxaj4x0qw ; struct mrk1ln3yua_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; } ; struct
gimbih1di0h_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 [ 10 ] ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 [ 10 ] ; real_T P_8 ;
real_T P_9 ; real_T P_10 [ 10 ] ; real_T P_11 ; real_T P_12 ; real_T P_13 ;
real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T
P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 [
10 ] ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ;
real_T P_30 [ 8 ] ; real_T P_31 [ 10 ] ; real_T P_32 ; real_T P_33 ; real_T
P_34 ; real_T P_35 [ 8 ] ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T
P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ;
real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T
P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ;
real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T
P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ;
real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T
P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ;
real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T
P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ;
real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T
P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ;
real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ;
real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T P_109 ;
real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ;
real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ;
mrk1ln3yua akkqis3b1g ; } ; struct coyvih0rk1 { struct SimStruct_tag *
_mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [
1 ] ; real_T mr_nonContSig2 [ 1 ] ; real_T mr_nonContSig3 [ 1 ] ; real_T
mr_nonContSig4 [ 1 ] ; real_T mr_nonContSig5 [ 1 ] ; real_T mr_nonContSig6 [
1 ] ; real_T mr_nonContSig7 [ 1 ] ; real_T mr_nonContSig8 [ 1 ] ; real_T
mr_nonContSig9 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 10 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 13 ] ; int32_T * vardimsAddress [
13 ] ; RTWLoggingFcnPtr loggingPtrs [ 13 ] ; sysRanDType * systemRan [ 8 ] ;
int_T systemTid [ 8 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; } Timing ; } ; typedef struct { fxrjyezkwn rtb ; bsz3qtxrxd rtdw ;
dwsgrvz41y rtm ; gvxaj4x0qw rtzce ; } n5qm5cab0up ; extern void jnccjczqwr (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn * localB ,
bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Driveline_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Driveline_GetDWork ( const
n5qm5cab0up * mdlrefDW ) ; extern void mr_Driveline_SetDWork ( n5qm5cab0up *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Driveline_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Driveline_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Driveline_GetCAPIStaticMap ( void ) ; extern
void djkfokdtse ( dwsgrvz41y * const pubqvcmed4 , real_T * azye50kz02 ,
real_T * dkfocn2kw3 , bsz3qtxrxd * localDW , oakdhkzk5b * localX ) ; extern
void aj1apekess ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd * localDW ,
oakdhkzk5b * localX ) ; extern void igx4apxpta ( fxrjyezkwn * localB ,
bsz3qtxrxd * localDW ) ; extern void bpgqz3xzpl ( dwsgrvz41y * const
pubqvcmed4 , const int8_T * jovsfwfg3e , const real_T caebyi2sab [ 4 ] ,
const real_T gilc33j2pa [ 4 ] , const real_T owpf0zg2wy [ 4 ] , fxrjyezkwn *
localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , bjbjifrsrv * localXdot
) ; extern void m2vwjmi2um ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd *
localDW , l1pljxktrl * localXdis ) ; extern void cyzpp4e52p ( dwsgrvz41y *
const pubqvcmed4 , const real_T owpf0zg2wy [ 4 ] , fxrjyezkwn * localB ,
bsz3qtxrxd * localDW , oakdhkzk5b * localX , grfcawoazk * localXAbsTol ) ;
extern void cyzpp4e52pTID2 ( void ) ; extern void Driveline ( dwsgrvz41y *
const pubqvcmed4 , const real_T * j45cp5ppdn , const real_T * ldxbfzy4yw ,
real_T iioyllnquu [ 4 ] , real_T jp4z35ch12 [ 4 ] , real_T bumnd4n3ix [ 4 ] ,
real_T * azye50kz02 , real_T * i215und1x3 , fxrjyezkwn * localB , bsz3qtxrxd
* localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE , l1pljxktrl *
localXdis ) ; extern void DrivelineTID2 ( real_T * dkfocn2kw3 ) ; extern void
btsnzboicn ( dwsgrvz41y * const pubqvcmed4 ) ;
#endif
