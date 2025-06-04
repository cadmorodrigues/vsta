#include "SiMappedEngineV_capi.h"
#include "SiMappedEngineV.h"
#include "SiMappedEngineV_private.h"
#include "look1_binlcpw.h"
#include "look2_binlcpw.h"
static RegMdlInfo rtMdlInfo_SiMappedEngineV [ 43 ] = { { "o2k4rz0uw5x" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"jgubm4xidl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "jfimtdo5tu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "mtobhgowxj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "i3uom1vnc5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "dk2lj1ie3v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "ih0mudozt1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "fpgmc1blog" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "m0sbce0q1j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "bnzlddutvq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "ac505oj1ao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "e3tultvbwk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "ow0cmqxpyk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "puu5fcics1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "atxsq1iycf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "po5zlrzzyd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "ecxs4hsbvq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "a20sjwaowh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "bmpf100lpn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "pj3vtlmlns" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "f4glzcjee3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "f5rmroe5ej" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "fbspkqemka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "eglqnicaef" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "as2gecbwug" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "SiMappedEngineV" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } ,
{ "ajamtm0fjy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SiMappedEngineV" } , { "mrj2qlehgq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SiMappedEngineV" } , { "kgxfljuibq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SiMappedEngineV" } ,
{ "mr_SiMappedEngineV_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SiMappedEngineV" } , { "mr_SiMappedEngineV_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SiMappedEngineV" } , {
"mr_SiMappedEngineV_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "SiMappedEngineV" } , { "SiMappedEngineV.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "SiMappedEngineV.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "SiMappedEngineV" } } ; anoacnregqm anoacnregq = { { 0.0 ,
80.720406734778649 , 99.765246949254859 , 118.693812360272 ,
137.62234128211631 , 156.55090181357946 , 175.47946455099819 ,
180.80435654325933 , 180.80398829886624 , 180.80366649344526 ,
180.80336927642165 , 180.80306418530185 , 180.80275283053993 ,
180.80243532741997 , 180.80209302086439 , 180.80176327127086 , -
22.263507264001191 , 80.720406734778649 , 99.765246949254859 ,
118.693812360272 , 137.62234128211631 , 156.55090181357946 ,
175.47946455099819 , 180.80435654325933 , 180.80398829886624 ,
180.80366649344526 , 180.80336927642165 , 180.80306418530185 ,
180.80275283053993 , 180.80243532741997 , 180.80209302086439 ,
180.80176327127086 , - 25.693538640386009 , 65.391116288191256 ,
86.558069146177175 , 105.48661877116152 , 124.4151638411915 ,
143.34373105885859 , 162.27230294098257 , 181.20087118945156 ,
200.12944547251942 , 219.05800935050473 , 225.41821883794893 ,
225.41610097836474 , 225.41981486968052 , 225.42155884683376 ,
225.42169952152761 , 225.42003177193607 , - 28.770100661322353 ,
59.354160378794951 , 79.259347428765352 , 98.187904103503286 ,
117.11647303489565 , 136.04504154510889 , 154.9736120614786 ,
173.90218170584853 , 192.83075305969638 , 211.75932590358579 ,
230.68789223639945 , 240.67719645461514 , 240.67693452107855 ,
240.67666908884044 , 240.67640142031831 , 240.67613215884575 , -
31.216926207523244 , 54.246315716475088 , 74.6289757451311 ,
93.557547706003362 , 112.48611720564661 , 131.41468689464645 ,
150.343259545529 , 169.27183085565679 , 188.2004017544653 ,
207.12896202298674 , 226.05754469875683 , 244.98611370945235 ,
254.78847856688628 , 254.78824111709309 , 254.78800209700017 ,
254.78776196343449 , - 33.590873608158077 , 50.450295580040432 ,
71.429822592572819 , 90.358393775293138 , 109.28696502472421 ,
128.21553593920609 , 147.14410774044197 , 166.07267833146906 ,
185.00124885525682 , 203.92982014201962 , 222.85839157102075 ,
241.7869613401642 , 260.71428764679086 , 264.75245320475028 ,
264.75225872572179 , 264.75205562448355 , - 35.611253332149417 ,
49.09801976170148 , 69.087135255110113 , 88.015706654861219 ,
106.94427836501715 , 125.87284805039266 , 144.80142132117919 ,
163.72999127594539 , 182.65856231976105 , 201.58713351484107 ,
220.51570437370691 , 239.4442763594443 , 258.37284504334917 ,
269.51458225679454 , 269.51440441762395 , 269.51421744438909 , -
37.677940916533473 , 47.201044861990226 , 67.297582615098221 ,
86.226153787548455 , 105.15471859459181 , 124.08329674624791 ,
143.01186830262472 , 161.94043883413536 , 180.86901015685388 ,
199.79758121559792 , 218.72615211860381 , 237.65472276739482 ,
256.58329227448945 , 275.51236893338375 , 278.68607129927182 ,
276.87349796274685 , - 39.6759555575005 , 46.054106432551691 ,
65.885948449046268 , 84.8145186603558 , 103.74307129735219 ,
122.67165762223439 , 141.60022627171338 , 160.52880457552911 ,
179.45737574262972 , 198.38594697976444 , 217.31451807371221 ,
236.24308870805334 , 255.17165901917858 , 274.1002305371187 ,
284.17316038905443 , 284.17294217112277 , - 41.566365012467443 ,
43.822946090738625 , 64.743946331638682 , 83.672532959514257 ,
102.60109937228647 , 121.5296653566831 , 140.45823677025967 ,
159.38680806556962 , 178.31537939737126 , 197.24395055516354 ,
216.1725215651891 , 235.10109253659704 , 254.02966017292928 ,
272.9582320785405 , 289.51044473421757 , 289.50484872278332 , -
43.34189134887491 , 42.717639385065851 , 63.801072769604026 ,
82.729643379625415 , 101.65820720891826 , 120.58678682625529 ,
139.51537545688481 , 158.4439306828954 , 177.37254570459481 ,
196.30107913306182 , 215.22964122355981 , 234.1582128531779 ,
253.0867826569891 , 272.01535233923983 , 290.94392661697975 ,
293.81589339297318 , - 44.866905560164206 , 43.071963875160463 ,
63.009409376456851 , 81.937980525195726 , 100.86655177191518 ,
119.79512402541354 , 138.72369228934389 , 157.65226562239914 ,
176.5808375771127 , 195.50940732709535 , 214.43797946840181 ,
233.36654980207359 , 252.29511994789709 , 271.22369403116005 ,
290.15225942935126 , 304.50451565212791 , - 46.636351948412106 ,
40.688498921592334 , 62.335286404735115 , 81.263857412646615 ,
100.19242850047475 , 119.12100088271517 , 138.04956940210312 ,
156.97814304853972 , 175.90671115704441 , 194.83528535875533 ,
213.76385597044546 , 232.6924264679725 , 251.62099596817714 ,
270.549568073657 , 289.47813936862752 , 298.68804523761804 , -
48.3356349510091 , 40.158377067025938 , 61.754334370263535 ,
80.682905330670451 , 99.6114754165019 , 118.54004685932756 ,
137.46862083763887 , 156.39719010112671 , 175.32576254336354 ,
194.254333593746 , 213.18290419163964 , 232.11147547034329 ,
251.04004929361352 , 269.96862105774829 , 288.89763746650397 ,
289.65170151399371 , - 50.055606905863961 , 41.546574059521944 ,
61.248486469918113 , 80.177057281966981 , 99.105628847267823 ,
118.03420192719092 , 136.96277263755053 , 155.8913434950239 ,
174.8199148219571 , 193.74848593978717 , 212.67705152435488 ,
231.60562070522712 , 250.5342161463341 , 269.4627659508684 ,
286.91804868078134 , 286.90692631023279 , - 51.968566410549563 ,
40.803397172994124 , 60.804063227708383 , 79.7326343035538 ,
98.661205675313369 , 117.58977713606674 , 136.518348738595 ,
155.44692010364759 , 174.37549143294655 , 193.30406251349632 ,
212.23263232711369 , 231.16120899665935 , 250.08978157925321 ,
269.01837241203748 , 283.9882204329424 , 283.9858415194546 } , { 0.0 ,
641.24104298962845 , 900.79098896162213 , 1160.3409349336159 ,
1419.8908809056095 , 1679.4408268775944 , 1938.9907728495882 ,
2198.5407188215822 , 2458.0906647935758 , 2717.6406107655689 ,
2977.1905567375629 , 3236.7405027095565 , 3496.2904486815419 ,
3755.8403946535359 , 4015.390340625529 , 4274.9402865975226 } , { 0.0 , 35.0
, 53.928571428571431 , 72.857142857142861 , 91.785714285714278 ,
110.71428571428571 , 129.64285714285714 , 148.57142857142856 , 167.5 ,
186.42857142857142 , 205.35714285714286 , 224.28571428571428 ,
243.21428571428572 , 262.14285714285711 , 281.07142857142856 , 300.0 } ,
73.91982714328924 , 251.32741228718345 , { 0.0 , 3.0779560993538198 } , {
256.49641719585139 , 641.24104298962845 } , 1000.0 , 0.0 , 300.0 ,
0.10471975511965977 , 6.0 , 0.0 , 0.0 , 0.0 , 720.0 , 0.0 , { 15U , 15U } } ;
void f5rmroe5ej ( fpgmc1blog * localX ) { localX -> obuuvimtvu = anoacnregq .
P_12 ; localX -> h235wq4fsj = anoacnregq . P_13 ; localX -> lf5wmc502m =
anoacnregq . P_14 ; } void f4glzcjee3 ( fpgmc1blog * localX ) { localX ->
obuuvimtvu = anoacnregq . P_12 ; localX -> h235wq4fsj = anoacnregq . P_13 ;
localX -> lf5wmc502m = anoacnregq . P_14 ; } void SiMappedEngineV (
kgxfljuibq * const plpdajfsza , real_T * p2vuqhqrpz , puu5fcics1 * localB ,
fpgmc1blog * localX ) { localB -> dqwaogngcj = localX -> obuuvimtvu ; if (
rtmIsMajorTimeStep ( plpdajfsza ) && rtmIsSampleHit ( plpdajfsza , 1 , 0 ) )
{ localB -> f5okwvopx5 = anoacnregq . P_3 ; localB -> gmez5pzjnd = anoacnregq
. P_4 ; } * p2vuqhqrpz = localX -> h235wq4fsj ; } void pj3vtlmlns (
kgxfljuibq * const plpdajfsza , const real_T * gzpwimsfg2 , ow0cmqxpyk *
localDW ) { real_T iko3rebvz5_p ; iko3rebvz5_p = 9.5492965855137211 * *
gzpwimsfg2 ; if ( rtmIsMajorTimeStep ( plpdajfsza ) ) { localDW -> ex3gnslpxt
= iko3rebvz5_p >= anoacnregq . P_8 ? 1 : iko3rebvz5_p > anoacnregq . P_9 ? 0
: - 1 ; } } void bmpf100lpn ( kgxfljuibq * const plpdajfsza , const real_T *
dhoq3itz5d , const real_T * gzpwimsfg2 , real_T * p2vuqhqrpz , puu5fcics1 *
localB , ow0cmqxpyk * localDW , ih0mudozt1 * localXdot ) { real_T
iko3rebvz5_e ; iko3rebvz5_e = 9.5492965855137211 * * gzpwimsfg2 ; if (
rtmIsMajorTimeStep ( plpdajfsza ) ) { localDW -> ex3gnslpxt = iko3rebvz5_e >=
anoacnregq . P_8 ? 1 : iko3rebvz5_e > anoacnregq . P_9 ? 0 : - 1 ; }
localXdot -> obuuvimtvu = ( * dhoq3itz5d - localB -> dqwaogngcj ) * localB ->
f5okwvopx5 ; localXdot -> h235wq4fsj = ( ( look2_binlcpw ( localB ->
dqwaogngcj , iko3rebvz5_e , anoacnregq . P_2 , anoacnregq . P_1 , anoacnregq
. P_0 , anoacnregq . P_17 , 16U ) - anoacnregq . P_7 * look1_binlcpw (
iko3rebvz5_e , anoacnregq . P_6 , anoacnregq . P_5 , 1U ) / ( ( localDW ->
ex3gnslpxt == 1 ? anoacnregq . P_8 : localDW -> ex3gnslpxt == - 1 ?
anoacnregq . P_9 : iko3rebvz5_e ) * anoacnregq . P_10 ) ) - * p2vuqhqrpz ) *
localB -> gmez5pzjnd ; localXdot -> lf5wmc502m = anoacnregq . P_11 *
iko3rebvz5_e ; } void a20sjwaowh ( kgxfljuibq * const plpdajfsza , const
real_T * gzpwimsfg2 , ow0cmqxpyk * localDW , jgubm4xidl * localZCSV ) {
real_T iko3rebvz5_m ; iko3rebvz5_m = 9.5492965855137211 * * gzpwimsfg2 ; if (
rtmIsMajorTimeStep ( plpdajfsza ) ) { localDW -> ex3gnslpxt = iko3rebvz5_m >=
anoacnregq . P_8 ? 1 : iko3rebvz5_m > anoacnregq . P_9 ? 0 : - 1 ; }
localZCSV -> oww3vu3njk = iko3rebvz5_m - anoacnregq . P_8 ; localZCSV ->
j54vi5dxsi = iko3rebvz5_m - anoacnregq . P_9 ; } void po5zlrzzyd ( kgxfljuibq
* const plpdajfsza ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( plpdajfsza -> _mdlRefSfcnS , "SiMappedEngineV" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fbspkqemka (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , kgxfljuibq
* const plpdajfsza , puu5fcics1 * localB , ow0cmqxpyk * localDW , fpgmc1blog
* localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; anoacnregq . P_8 =
rtInf ; ( void ) memset ( ( void * ) plpdajfsza , 0 , sizeof ( kgxfljuibq ) )
; plpdajfsza -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; plpdajfsza ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; plpdajfsza -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( plpdajfsza -> _mdlRefSfcnS , "SiMappedEngineV" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> dqwaogngcj = 0.0
; localB -> f5okwvopx5 = 0.0 ; localB -> gmez5pzjnd = 0.0 ; } ( void ) memset
( ( void * ) localDW , 0 , sizeof ( ow0cmqxpyk ) ) ;
SiMappedEngineV_InitializeDataMapInfo ( plpdajfsza , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( plpdajfsza -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
plpdajfsza -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( plpdajfsza -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_SiMappedEngineV_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_SiMappedEngineV , 43 ) ; * retVal = 1 ; } static void
mr_SiMappedEngineV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_SiMappedEngineV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SiMappedEngineV_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SiMappedEngineV_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_SiMappedEngineV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_SiMappedEngineV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SiMappedEngineV_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SiMappedEngineV_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SiMappedEngineV_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_SiMappedEngineV_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SiMappedEngineV_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_SiMappedEngineV_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_SiMappedEngineV_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_SiMappedEngineV_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_SiMappedEngineV_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SiMappedEngineV_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_SiMappedEngineV_GetDWork ( const
o2k4rz0uw5x * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_SiMappedEngineV_cacheDataAsMxArray ( ssDW , 0 , 0
, & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char
* rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.ex3gnslpxt" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ;
mr_SiMappedEngineV_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW ->
rtdw . ex3gnslpxt ) , sizeof ( mdlrefDW -> rtdw . ex3gnslpxt ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_SiMappedEngineV_SetDWork ( o2k4rz0uw5x * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_SiMappedEngineV_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0
, 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_SiMappedEngineV_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ex3gnslpxt
) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . ex3gnslpxt ) ) ; } } void
mr_SiMappedEngineV_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 4177679515U , 3231791274U , 3753496743U ,
4255701853U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"SiMappedEngineV" , & chksum [ 0 ] ) ; } mxArray *
mr_SiMappedEngineV_GetSimStateDisallowedBlocks ( ) { return NULL ; }
