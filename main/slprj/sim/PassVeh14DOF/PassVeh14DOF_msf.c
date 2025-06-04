#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME PassVeh14DOF_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "PassVeh14DOF_types.h"
#include "PassVeh14DOF.h"
#include "PassVeh14DOF_private.h"
real_T rtP_camberFront = - 0.012217304763960306 ; real_T rtP_camberRear = -
0.020420352248333655 ; real_T rtP_casterFront = 0.03577924966588375 ; real_T
rtP_casterRear = 0.03577924966588375 ; real_T rtP_lateralStiffness =
157087.404633332 ; real_T rtP_pressaoPneu = 220000.00000000003 ; real_T
rtP_toeFront = - 0.0013962634015954637 ; real_T rtP_toeRear = 0.0 ; real_T
rtP_verticalStiffness = 207885.061134007 ; const char *
rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) { if ( !
_ssIsErrorStatusAslErrMsg ( S ) ) { _ssSet_slErrMsg ( S , diag ) ; } else {
_ssDiscardDiagnostic ( S , diag ) ; } } void rt_ssReportDiagnosticAsWarning (
SimStruct * S , void * diag ) { _ssReportDiagnosticAsWarning ( S , diag ) ; }
const char * rt_CreateFullPathToTop ( const char * toppath , const char *
subpath ) { char * fullpath = NULL ; slmrCreateFullPathToTop ( toppath ,
subpath , & fullpath ) ; return fullpath ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { real_T * GlobalPrm_0 = (
real_T * ) NULL ; real_T * GlobalPrm_1 = ( real_T * ) NULL ; real_T *
GlobalPrm_2 = ( real_T * ) NULL ; real_T * GlobalPrm_3 = ( real_T * ) NULL ;
real_T * GlobalPrm_4 = ( real_T * ) NULL ; real_T * GlobalPrm_5 = ( real_T *
) NULL ; real_T * GlobalPrm_6 = ( real_T * ) NULL ; real_T * GlobalPrm_7 = (
real_T * ) NULL ; real_T * GlobalPrm_8 = ( real_T * ) NULL ; if ( !
ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( & GlobalPrm_0 ) ) )
return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & ( rtP_camberFront )
, GlobalPrm_0 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 1 , ( void * * ) ( & GlobalPrm_1 ) ) ) return ; if ( GlobalPrm_1 != NULL
) { ( void ) memcpy ( & ( rtP_camberRear ) , GlobalPrm_1 , sizeof ( real_T )
) ; } if ( ! ssGetModelRefGlobalParamData ( S , 2 , ( void * * ) ( &
GlobalPrm_2 ) ) ) return ; if ( GlobalPrm_2 != NULL ) { ( void ) memcpy ( & (
rtP_casterFront ) , GlobalPrm_2 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 3 , ( void * * ) ( & GlobalPrm_3 ) ) )
return ; if ( GlobalPrm_3 != NULL ) { ( void ) memcpy ( & ( rtP_casterRear )
, GlobalPrm_3 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 4 , ( void * * ) ( & GlobalPrm_4 ) ) ) return ; if ( GlobalPrm_4 != NULL
) { ( void ) memcpy ( & ( rtP_lateralStiffness ) , GlobalPrm_4 , sizeof (
real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 5 , ( void * * ) ( &
GlobalPrm_5 ) ) ) return ; if ( GlobalPrm_5 != NULL ) { ( void ) memcpy ( & (
rtP_pressaoPneu ) , GlobalPrm_5 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 6 , ( void * * ) ( & GlobalPrm_6 ) ) )
return ; if ( GlobalPrm_6 != NULL ) { ( void ) memcpy ( & ( rtP_toeFront ) ,
GlobalPrm_6 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S
, 7 , ( void * * ) ( & GlobalPrm_7 ) ) ) return ; if ( GlobalPrm_7 != NULL )
{ ( void ) memcpy ( & ( rtP_toeRear ) , GlobalPrm_7 , sizeof ( real_T ) ) ; }
if ( ! ssGetModelRefGlobalParamData ( S , 8 , ( void * * ) ( & GlobalPrm_8 )
) ) return ; if ( GlobalPrm_8 != NULL ) { ( void ) memcpy ( & (
rtP_verticalStiffness ) , GlobalPrm_8 , sizeof ( real_T ) ) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { egcgcay4tuh * dw = (
egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; h21fsrthfa * localX = ( h21fsrthfa * )
ssGetContStates ( S ) ; m3kvjvuvj4 ( & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localX ) ; ssSetPeriodicContState ( S , 0 , 11 , - 3.1415926535897931 ,
3.1415926535897931 ) ; ssSetPeriodicContState ( S , 1 , 12 , -
3.1415926535897931 , 3.1415926535897931 ) ; ssSetPeriodicContState ( S , 2 ,
13 , - 3.1415926535897931 , 3.1415926535897931 ) ; } static void mdlReset (
SimStruct * S ) { egcgcay4tuh * dw = ( egcgcay4tuh * ) ssGetDWork ( S , 0 ) ;
h21fsrthfa * localX = ( h21fsrthfa * ) ssGetContStates ( S ) ; nqasp5wza1 ( &
( dw -> rtb ) , & ( dw -> rtdw ) , localX ) ; } static void
mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { egcgcay4tuh * dw = (
egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; const real_T * i_krp1l3jf4p = ( real_T
* ) ssGetInputPortSignal ( S , 0 ) ; const real_T * i_jb1g1kp3ja = ( real_T *
) ssGetInputPortSignal ( S , 1 ) ; const real_T * i_mcau1kqq0y = ( real_T * )
ssGetInputPortSignal ( S , 2 ) ; const real_T * i_eics31md2u = ( real_T * )
ssGetInputPortSignal ( S , 3 ) ; const real_T * i_itd21vjha2 = ( real_T * )
ssGetInputPortSignal ( S , 4 ) ; const real_T * i_dvme42dmxf = ( real_T * )
ssGetInputPortSignal ( S , 5 ) ; real_T * o_o_B_22_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_22_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_22_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_B_22_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_22_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_22_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_22_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_22_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_22_9 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_22_10 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_22_11 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_B_22_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_22_13 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_22_14 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_B_22_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; h21fsrthfa * localX = ( h21fsrthfa * )
ssGetContStates ( S ) ; mq10j5tdpd * localXAbsTollocalXAbsTol = ( mq10j5tdpd
* ) ssGetAbsTolVector ( S ) ; if ( tid == 0 ) { PassVeh14DOF ( & ( dw -> rtm
) , i_krp1l3jf4p , i_jb1g1kp3ja , i_mcau1kqq0y , i_eics31md2u , i_itd21vjha2
, i_dvme42dmxf , o_o_B_22_1 , o_B_22_2 , o_B_22_3 , o_B_22_4 , o_B_22_5 ,
o_B_22_6 , o_B_22_7 , o_B_22_8 , o_B_22_9 , o_B_22_10 , o_B_22_11 , o_B_22_12
, o_B_22_13 , o_B_22_14 , o_B_22_15 , & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localX ) ; jpl1qt0btr ( & ( dw -> rtm ) , localXAbsTollocalXAbsTol ) ; } }
static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo ->
genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 55 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 3 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
6 , 15 ) ; if ( ! ssSetNumInputPorts ( S , 6 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 4 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "N*m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 , false )
; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 1
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "Pa" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 , false )
; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 2
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 3 , false )
; ssSetInputPortSampleTime ( S , 3 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 3
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 4 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 4 , false )
; ssSetInputPortSampleTime ( S , 4 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 4
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 5 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 5 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 5 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 5 , 1 ) ; ssSetInputPortOptimOpts ( S
, 5 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 5 , false )
; ssSetInputPortSampleTime ( S , 5 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 5
, 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 15 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 2 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 3 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 4 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "gn" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 5 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 6 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 7 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 8 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 8 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 8 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
8 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 8 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 8 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 8 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 9 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 9 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 9 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
9 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 9 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 9 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 9 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 10 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 10 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 10 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 10 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 10 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 10 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 10 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 11 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 11 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 11 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 11 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 11 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 11 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 11 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 12 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 12 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 12 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 12 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 12 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 12 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 12 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 13 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 13 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 13 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 13 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 13 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 13 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 13 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 14 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 14 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 14 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 14 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 14 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 14 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 14 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_PassVeh14DOF_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S , 2
) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Sf0" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Sf0" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Sf0" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Sf0" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "AbsZc" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; }
ssSetZCCacheNeedsReset ( S , 1 ) ; ssSetDerivCacheNeedsReset ( S , 1 ) ;
ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 1 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 8 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 8 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 9 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 9 , 1 ) ;
ssSetOutputPortIsNonContinuous ( S , 10 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 10 , 1 ) ;
ssSetOutputPortIsNonContinuous ( S , 11 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 11 , 1 ) ;
ssSetOutputPortIsNonContinuous ( S , 12 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 12 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 13 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 13 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 14 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 14 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 5 , 0 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:LoggingBlockDoesNotSupportMultiExecInstancesWithCustomMsg\" pr=\"d\"><arguments><arg type=\"encoded\">UABhAHMAcwBWAGUAaAAxADQARABPAEYALwBTAHUAcwBwAGUAbgBzAGkAbwBuAC8ARAB1AHAAbABvACAAQQAgAG4AYQBzACAANAAvAFQAbwAgAFcAbwByAGsAcwBwAGEAYwBlAAAA</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AAAACsCT2UD+</h></hs><causes><diag id=\"Simulink:logLoadBlocks:ToWksBlkMultiExecInsNoSupportMsg\" pr=\"d\"><msg encoded=\"yes\">VABvACAAVwBvAHIAawBzAHAAYQBjAGUAIABiAGwAbwBjAGsAcwAgAGQAbwAgAG4AbwB0ACAAcwB1AHAAcABvAHIAdAAgAGQAYQB0AGEAIABsAG8AZwBnAGkAbgBnACAAaQBuAHMAaQBkAGUAIABGAG8AcgAgAEUAYQBjAGgAIABzAHUAYgBzAHkAcwB0AGUAbQBzAC4AIABDAG8AbgBzAGkAZABlAHIAIAB1AHMAaQBuAGcAIABzAGkAZwBuAGEAbAAgAGwAbwBnAGcAaQBuAGcAIAB0AG8AIABsAG8AZwAgAGQAYQB0AGEAIABpAG4AcwBpAGQAZQAgAHQAaABlACAARgBvAHIAIABFAGEAYwBoACAAcwB1AGIAcwB5AHMAdABlAG0ALgAgAFMAZQBlACAAPABhACAAaAByAGUAZgA9ACIAbQBhAHQAbABhAGIAOgBoAGUAbABwAHYAaQBlAHcAKABmAHUAbABsAGYAaQBsAGUAKABkAG8AYwByAG8AbwB0ACwAJwBzAGkAbQB1AGwAaQBuAGsAJwAsACcAaABlAGwAcAB0AGEAcgBnAGUAdABzAC4AbQBhAHAAJwApACwAJwBsAG8AZwBnAGkAbgBnAF8AcwBpAGcAbgBhAGwAcwAnACkAIgA+AE0AYQByAGsAIABhACAAUwBpAGcAbgBhAGwAIABmAG8AcgAgAFMAaQBnAG4AYQBsACAATABvAGcAZwBpAG4AZwA8AC8AYQA+ACAAaQBuACAAUwBpAG0AdQBsAGkAbgBrACAAZABvAGMAdQBtAGUAbgB0AGEAdABpAG8AbgAuAAAA</msg></diag></causes></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , true ) ; ssSetOptions ( S ,
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_PassVeh14DOF_MdlInfoRegFcn ( S , "PassVeh14DOF" , & retVal ) ; if ( !
retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( egcgcay4tuh ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.1" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 0 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 0 ) ; ssSetOffsetTime ( S , 1 , 1 ) ; return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { egcgcay4tuh * dw = (
egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; h21fsrthfa * localX = ( h21fsrthfa * )
ssGetContStates ( S ) ; ssNonContDerivSigFeedingOutports mr_nonContOutput5 [
43 ] ; ssNonContDerivSigFeedingOutports mr_nonContOutput6 [ 1 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput7 [ 1 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput8 [ 1 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput9 [ 9 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput10 [ 14 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput11 [ 14 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput12 [ 4 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput13 [ 4 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput14 [ 5 ] ;
ssNonContDerivSigFeedingOutports * mr_nonContOutputArray [ 15 ] ; void *
sysRanPtr = ( NULL ) ; int sysTid = 0 ; uint8_T * absTolControl =
ssGetAbsTolControlVector ( S ) ; ssGetContextSysRanBCPtr ( S , & sysRanPtr )
; ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) {
sysTid = 0 ; } absTolControl [ 24 ] = 1 ; absTolControl [ 25 ] = 1 ;
absTolControl [ 26 ] = 1 ; absTolControl [ 27 ] = 1 ; absTolControl [ 44 ] =
1 ; absTolControl [ 45 ] = 1 ; absTolControl [ 46 ] = 1 ; absTolControl [ 47
] = 1 ; mr_nonContOutputArray [ 0 ] = ( NULL ) ; mr_nonContOutputArray [ 1 ]
= ( NULL ) ; mr_nonContOutputArray [ 2 ] = ( NULL ) ; mr_nonContOutputArray [
3 ] = ( NULL ) ; mr_nonContOutputArray [ 4 ] = ( NULL ) ;
mr_nonContOutputArray [ 5 ] = mr_nonContOutput5 ; mr_nonContOutputArray [ 6 ]
= mr_nonContOutput6 ; mr_nonContOutputArray [ 7 ] = mr_nonContOutput7 ;
mr_nonContOutputArray [ 8 ] = mr_nonContOutput8 ; mr_nonContOutputArray [ 9 ]
= mr_nonContOutput9 ; mr_nonContOutputArray [ 10 ] = mr_nonContOutput10 ;
mr_nonContOutputArray [ 11 ] = mr_nonContOutput11 ; mr_nonContOutputArray [
12 ] = mr_nonContOutput12 ; mr_nonContOutputArray [ 13 ] = mr_nonContOutput13
; mr_nonContOutputArray [ 14 ] = mr_nonContOutput14 ; klg3zs3vu4 ( S ,
mr_nonContOutputArray , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , sysRanPtr , sysTid , ( NULL ) , ( NULL
) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo .
mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S
-> mdlInfo -> genericFcn ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 5 , mr_nonContOutput5 ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 6 , mr_nonContOutput6 ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 7 ,
mr_nonContOutput7 ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 8 , mr_nonContOutput8 ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 9 , mr_nonContOutput9 ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 10 ,
mr_nonContOutput10 ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 11 , mr_nonContOutput11 ) ) return ; if (
! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 12 , mr_nonContOutput12 )
) return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 13 ,
mr_nonContOutput13 ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 14 , mr_nonContOutput14 ) ) return ; }
pas0r4q5nt ( & ( dw -> rtm ) , & ( dw -> rtdw ) ) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { egcgcay4tuh * dw = ( egcgcay4tuh * )
ssGetDWork ( S , 0 ) ; mdlProcessParameters ( S ) ; g53loesncj ( & ( dw ->
rtb ) , & ( dw -> rtdw ) ) ; } static void mdlOutputs ( SimStruct * S , int_T
tid ) { egcgcay4tuh * dw = ( egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; const
real_T * i_krp1l3jf4p = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; const
real_T * i_jb1g1kp3ja = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; const
real_T * i_mcau1kqq0y = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; const
real_T * i_eics31md2u = ( real_T * ) ssGetInputPortSignal ( S , 3 ) ; const
real_T * i_itd21vjha2 = ( real_T * ) ssGetInputPortSignal ( S , 4 ) ; const
real_T * i_dvme42dmxf = ( real_T * ) ssGetInputPortSignal ( S , 5 ) ; real_T
* o_o_B_22_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T *
o_B_22_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_22_3 =
( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_B_22_4 = ( real_T *
) ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_22_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_22_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_22_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_22_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_22_9 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_22_10 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_22_11 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_B_22_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_22_13 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_22_14 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_B_22_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; h21fsrthfa * localX = ( h21fsrthfa * )
ssGetContStates ( S ) ; if ( tid != CONSTANT_TID && tid !=
PARAMETER_TUNING_TID ) { PassVeh14DOF ( & ( dw -> rtm ) , i_krp1l3jf4p ,
i_jb1g1kp3ja , i_mcau1kqq0y , i_eics31md2u , i_itd21vjha2 , i_dvme42dmxf ,
o_o_B_22_1 , o_B_22_2 , o_B_22_3 , o_B_22_4 , o_B_22_5 , o_B_22_6 , o_B_22_7
, o_B_22_8 , o_B_22_9 , o_B_22_10 , o_B_22_11 , o_B_22_12 , o_B_22_13 ,
o_B_22_14 , o_B_22_15 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { egcgcay4tuh * dw = (
egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; mq10j5tdpd * localXAbsTollocalXAbsTol
= ( mq10j5tdpd * ) ssGetAbsTolVector ( S ) ; jpl1qt0btr ( & ( dw -> rtm ) ,
localXAbsTollocalXAbsTol ) ; return ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { egcgcay4tuh * dw = (
egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; beahf2xhqn * localZCSV = ( beahf2xhqn
* ) ssGetNonsampledZCs ( S ) ; gahgwqe10m ( & ( dw -> rtm ) , & ( dw -> rtb )
, & ( dw -> rtdw ) , localZCSV ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { egcgcay4tuh * dw = (
egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; real_T * o_o_B_22_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; h21fsrthfa * localX = ( h21fsrthfa * )
ssGetContStates ( S ) ; ectmdkaxud * localXdot = ( ectmdkaxud * ) ssGetdX ( S
) ; kpl5p5meuz ( o_o_B_22_1 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ,
localXdot ) ; } static void mdlTerminate ( SimStruct * S ) { egcgcay4tuh * dw
= ( egcgcay4tuh * ) ssGetDWork ( S , 0 ) ; apei0jh2jv ( & ( dw -> rtm ) ) ;
return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { const h21fsrthfa * localX = ( const h21fsrthfa * )
ssGetContStates ( S ) ; const size_t numBytes = sizeof ( h21fsrthfa ) ;
mxArray * storedX = mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; UINT8_T * rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy (
& rawData [ 0 ] , localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 ,
storedX ) ; } { mxArray * mdlrefDW = mr_PassVeh14DOF_GetDWork ( ssGetDWork (
S , 0 ) ) ; mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data
= mr_PassVeh14DOF_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss ,
0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar (
( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
h21fsrthfa * localX = ( h21fsrthfa * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( h21fsrthfa ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_PassVeh14DOF_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss ,
0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss
, 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
