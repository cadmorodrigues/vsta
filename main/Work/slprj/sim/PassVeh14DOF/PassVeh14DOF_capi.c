#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PassVeh14DOF_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "PassVeh14DOF.h"
#include "PassVeh14DOF_capi.h"
#include "PassVeh14DOF_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 11 , 0 } , { "Camber" , 0 , - 1 } , { "Caster" , 0 , - 1 } , { "Toe" , 0 ,
- 1 } , { "Height" , 0 , - 1 } , { "Power" , 0 , - 1 } , { "Energy" , 0 , - 1
} , { "VehF" , 0 , - 1 } , { "VehM" , 0 , - 1 } , { "WhlF" , 0 , - 1 } , {
"WhlV" , 0 , - 1 } , { "WhlAng" , 0 , - 1 } , { "" , 11 , 11 } , { "" , 2 ,
22 } , { "TireFrame" , 12 , 24 } , { "Omega" , 0 , - 1 } , { "Fx" , 0 , - 1 }
, { "Fy" , 0 , - 1 } , { "Fz" , 0 , - 1 } , { "Mx" , 0 , - 1 } , { "My" , 0 ,
- 1 } , { "Mz" , 0 , - 1 } , { "Re" , 0 , - 1 } , { "z" , 0 , - 1 } , {
"zdot" , 0 , - 1 } , { "Kappa" , 0 , - 1 } , { "Alpha" , 0 , - 1 } , {
"Steering" , 2 , 36 } , { "Wheel_Angles" , 0 , - 1 } , { "Camber_Angles" , 0
, - 1 } } ; static const uint_T rtSigHierLoggingChildIdxs [ ] = { 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 14 , 27 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 28 ,
29 } ; static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = {
{ 0 , 28 , TARGET_STRING (
"PassVeh14DOF/Wheels and Tires/Cont LPF/Integrator1" ) , TARGET_STRING ( "" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 32 ,
TARGET_STRING ( "PassVeh14DOF/Wheels and Tires/Cont LPF1/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 2 , 14 , TARGET_STRING (
 "PassVeh14DOF/Vehicle/Variant Subsystem/6DOF/Vehicle Body 6DOF/6 DOF Generic Vehicle Body/6DOF (Euler Angles)/p,q,r "
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 17 , TARGET_STRING (
 "PassVeh14DOF/Vehicle/Variant Subsystem/6DOF/Vehicle Body 6DOF/6 DOF Generic Vehicle Body/6DOF (Euler Angles)/ub,vb,wb"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 8 , TARGET_STRING (
 "PassVeh14DOF/Vehicle/Variant Subsystem/6DOF/Vehicle Body 6DOF/6 DOF Generic Vehicle Body/6DOF (Euler Angles)/xe,ye,ze"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 48 , TARGET_STRING (
 "PassVeh14DOF/Vehicle/Variant Subsystem/6DOF/Vehicle Body 6DOF/6 DOF Generic Vehicle Body/SignalCollection/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 6 , 0 , TARGET_STRING (
 "PassVeh14DOF/Wheels and Tires/VDBS/Tires/MF Tires Vector/Combined Slip Wheel 2DOF1/Vertical Wheel and Unsprung Mass Response/Integrator,\nSecond-Order"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 , 1 , - 1
, 0 } , { 7 , 11 , TARGET_STRING (
 "PassVeh14DOF/Vehicle/Variant Subsystem/6DOF/Vehicle Body 6DOF/6 DOF Generic Vehicle Body/6DOF (Euler Angles)/Calculate DCM &\nEuler Angles/phi\ntheta\npsi"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 8 , 20 , TARGET_STRING (
 "PassVeh14DOF/Wheels and Tires/VDBS/Tires/MF Tires Vector/Combined Slip Wheel 2DOF1/Magic Tire Const Input/Fx Relaxation/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 9 , 24 , TARGET_STRING (
 "PassVeh14DOF/Wheels and Tires/VDBS/Tires/MF Tires Vector/Combined Slip Wheel 2DOF1/Magic Tire Const Input/Fy Relaxation/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 10 , 44 , TARGET_STRING (
 "PassVeh14DOF/Wheels and Tires/VDBS/Tires/MF Tires Vector/Combined Slip Wheel 2DOF1/Magic Tire Const Input/My Relaxation/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void PassVeh14DOF_InitializeDataAddr ( void * dataAddr [ ] ,
jb251fek03 * localDW , h21fsrthfa * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> pbvhqqzyxg [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
dygqmcwtyc [ 0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> daheo5vuvb [ 0
] ) ; dataAddr [ 3 ] = ( void * ) ( & localX -> ku0nrbvwvg [ 0 ] ) ; dataAddr
[ 4 ] = ( void * ) ( & localX -> blvhp4tgtm [ 0 ] ) ; dataAddr [ 5 ] = ( void
* ) ( & localX -> icb2kaexil [ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( & localX
-> mikcbgv21f [ 0 ] ) ; dataAddr [ 7 ] = ( void * ) ( & localX -> hpjiynoun5
[ 0 ] ) ; dataAddr [ 8 ] = ( void * ) ( & localX -> fwmyae1wzn [ 0 ] ) ;
dataAddr [ 9 ] = ( void * ) ( & localX -> dtjafqjnli [ 0 ] ) ; dataAddr [ 10
] = ( void * ) ( & localX -> a5tsdaqepm [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PassVeh14DOF_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PassVeh14DOF_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 4 , 1 , 12 , 1 , 3 , 1 , 8 , 1 } ; static
const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * )
& rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0
, 0 } } ; static int_T rtContextSystems [ 25 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 25 ,
rtContextSystems , loggingMetaInfo , 0 , NULL , { 30 , rtSigHierLoggingInfo ,
rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 11
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 2870892747U , 3925794885U
, 802569792U , 673361913U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * PassVeh14DOF_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void PassVeh14DOF_InitializeSystemRan ( gwlxzditat * const ke3gqsjzkb
, sysRanDType * systemRan [ ] , jb251fek03 * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ke3gqsjzkb ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan
[ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ;
systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ]
= ( NULL ) ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( sysRanDType *
) & localDW -> fcx1mol1nq [ 3 ] . k31vvyldjn . htduue1soz ; systemRan [ 16 ]
= ( sysRanDType * ) & localDW -> fcx1mol1nq [ 3 ] . k31vvyldjn . fc00kr5opj ;
systemRan [ 17 ] = ( sysRanDType * ) & localDW -> fcx1mol1nq [ 3 ] .
k31vvyldjn . jvaxzka4z2 ; systemRan [ 18 ] = ( sysRanDType * ) & localDW ->
fcx1mol1nq [ 3 ] . k31vvyldjn . noth33b4op ; systemRan [ 19 ] = ( NULL ) ;
systemRan [ 20 ] = ( NULL ) ; systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ]
= ( NULL ) ; systemRan [ 23 ] = ( NULL ) ; systemRan [ 24 ] = ( NULL ) ;
systemTid [ 1 ] = ke3gqsjzkb -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
5 ] = ke3gqsjzkb -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] =
ke3gqsjzkb -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = ke3gqsjzkb
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 10 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 12 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 17 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 15 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = ke3gqsjzkb -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ;
rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 15 ; rtContextSystems [ 16 ] = 16 ; rtContextSystems [ 17 ] = 17 ;
rtContextSystems [ 18 ] = 18 ; rtContextSystems [ 19 ] = 0 ; rtContextSystems
[ 20 ] = 0 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems [ 22 ] = 0 ;
rtContextSystems [ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void PassVeh14DOF_InitializeDataMapInfo ( gwlxzditat * const ke3gqsjzkb ,
jb251fek03 * localDW , h21fsrthfa * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( ke3gqsjzkb -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ke3gqsjzkb -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ke3gqsjzkb -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; PassVeh14DOF_InitializeDataAddr ( ke3gqsjzkb ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
ke3gqsjzkb -> DataMapInfo . mmi , ke3gqsjzkb -> DataMapInfo . dataAddress ) ;
PassVeh14DOF_InitializeVarDimsAddr ( ke3gqsjzkb -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( ke3gqsjzkb -> DataMapInfo .
mmi , ke3gqsjzkb -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
ke3gqsjzkb -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
ke3gqsjzkb -> DataMapInfo . mmi , ( NULL ) ) ;
PassVeh14DOF_InitializeLoggingFunctions ( ke3gqsjzkb -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ke3gqsjzkb -> DataMapInfo . mmi ,
ke3gqsjzkb -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
ke3gqsjzkb -> DataMapInfo . mmi , & ke3gqsjzkb -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( ke3gqsjzkb -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ke3gqsjzkb -> DataMapInfo .
mmi , 0 ) ; PassVeh14DOF_InitializeSystemRan ( ke3gqsjzkb , ke3gqsjzkb ->
DataMapInfo . systemRan , localDW , ke3gqsjzkb -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( ke3gqsjzkb -> DataMapInfo .
mmi , ke3gqsjzkb -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
ke3gqsjzkb -> DataMapInfo . mmi , ke3gqsjzkb -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( ke3gqsjzkb -> DataMapInfo . mmi , & ke3gqsjzkb ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PassVeh14DOF_host_InitializeDataMapInfo (
PassVeh14DOF_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
