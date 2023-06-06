#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME FCElectricPlant_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "FCElectricPlant_types.h"
#include "FCElectricPlant.h"
#include "FCElectricPlant_private.h"
extern const bfougxayhi hgsz14qmxq ;
#define MDL_INIT_SYSTEM_MATRICES
static void mdlInitSystemMatrices ( SimStruct * S ) { static int_T
modelMassMatrixIr [ 25 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 12 , 13 , 14 , 16 , 30 , 15 , 31 , 32 , 33 , 34 , 35 , 36 , 37 } ; static
int_T modelMassMatrixJc [ 39 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10
, 11 , 12 , 13 , 14 , 15 , 17 , 18 , 18 , 18 , 18 , 18 , 18 , 18 , 18 , 18 ,
18 , 18 , 18 , 18 , 18 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 } ; static
real_T modelMassMatrixPr [ 25 ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; int_T *
massMatrixIr = ssGetMassMatrixIr ( S ) ; int_T * massMatrixJc =
ssGetMassMatrixJc ( S ) ; real_T * massMatrixPr = ssGetMassMatrixPr ( S ) ; (
void ) memcpy ( massMatrixIr , modelMassMatrixIr , 25 * sizeof ( int_T ) ) ;
( void ) memcpy ( massMatrixJc , modelMassMatrixJc , 39 * sizeof ( int_T ) )
; ( void ) memcpy ( massMatrixPr , modelMassMatrixPr , 25 * sizeof ( real_T )
) ; } const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; }
const char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void
* rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue
( void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void *
uniquePtr ) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char *
id , int nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ;
va_start ( args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
_ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic (
simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S ,
void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; }
void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; real_T * localMM = ( real_T * )
ssGetMassMatrixPr ( S ) ; kz4c240slf * localXPerturbMin = ( kz4c240slf * )
ssGetJacobianPerturbationBoundsMinVec ( S ) ; mclj3ytwnx * localXPerturbMax =
( mclj3ytwnx * ) ssGetJacobianPerturbationBoundsMaxVec ( S ) ; }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; k5nsrx2akm ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlReset ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; gtrcczzcor ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid
) { g5h05g3u4wx * dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const
* i_alps4cqvbe = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; real_T const *
i_i_i_broznjvo0f = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; real_T const
* i_i_bav2fyyxpd = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; real_T *
o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_1_2 = (
real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_1_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_B_1_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_1_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_1_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_1_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_1_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; if ( tid == 0 ) { FCElectricPlant ( & ( dw -> rtm ) ,
i_alps4cqvbe , i_i_i_broznjvo0f , i_i_bav2fyyxpd , o_B_1_1 , o_B_1_2 ,
o_B_1_3 , o_B_1_4 , o_B_1_5 , o_B_1_6 , o_B_1_7 , o_B_1_8 , & ( dw -> rtb ) ,
& ( dw -> rtdw ) , localX , & ( dw -> rtzce ) ) ; czx1gq31fm ( & ( dw -> rtm
) , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ) ; } } static void
mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != (
NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 38 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 0 ) ;
ssSetMassMatrixType ( S , 1 ) ; ssSetMassMatrixNzMax ( S , 25 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
3 , 9 ) ; if ( ! ssSetNumInputPorts ( S , 3 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "N*m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 9 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 2 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 3 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 4 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 5 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 6 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 7 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 8 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 8 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 8 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 8 , 0 ) ; ssSetOutputPortDiscreteValuedOutput
( S , 8 , 0 ) ; ssSetOutputPortOkToMerge ( S , 8 , SS_OK_TO_MERGE_CONDITIONAL
) ; ssSetOutputPortICAttributes ( S , 8 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_FCElectricPlant_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S ,
4 ) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"UprLim" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL_DN ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0
) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S ,
zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL_DN ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0
) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S ,
zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery_Table_Based1.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery_Table_Based1.xxR0.zc_2" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.Battery_Table_Based1.zc_3" )
; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Battery_System.Battery_Table_Based1.zc_4" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Battery_System.DC_DC_Converter.zc_1" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Boost_Converter.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Fuel_Cell.Boost_Converter.zc_2" ) ;
ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_Z2N | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_N2Z | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Motor.Motor.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Motor.Motor.zc_2" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Motor.Motor.zc_3" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z | SL_ZCS_EVENT_P2N |
SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ; ssSetZcSignalNeedsEventNotification (
S , zcsIdx , 0 ) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Fuel_Cell.Fuel_Cell.x2.Diode.zc_1" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_P2Z
| SL_ZCS_EVENT_P2N | SL_ZCS_EVENT_Z2P | SL_ZCS_EVENT_N2P ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
} ssSetZCCacheNeedsReset ( S , 1 ) ; ssSetOutputPortIsNonContinuous ( S , 0 ,
0 ) ; ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 8 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 8 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 0 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_FCElectricPlant_MdlInfoRegFcn ( S , "FCElectricPlant" , & retVal ) ; if (
! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( g5h05g3u4wx ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.6" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 0 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 0 ) ; ssSetOffsetTime ( S , 1 , 1 ) ;
ssSetSampleTime ( S , 2 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 2 , 0 ) ;
ssSetSampleTime ( S , 3 , rtInf ) ; ssSetOffsetTime ( S , 3 , rtInf ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; real_T * localMM = ( real_T * ) ssGetMassMatrixPr ( S
) ; kz4c240slf * localXPerturbMin = ( kz4c240slf * )
ssGetJacobianPerturbationBoundsMinVec ( S ) ; mclj3ytwnx * localXPerturbMax =
( mclj3ytwnx * ) ssGetJacobianPerturbationBoundsMaxVec ( S ) ; void *
sysRanPtr = ( NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , &
sysRanPtr ) ; ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid ==
CONSTANT_TID ) { sysTid = 0 ; } axkawtnuua ( S ,
slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 2 , true ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , localMM ,
sysRanPtr , sysTid , ( ( NULL ) ) , ( ( NULL ) ) , 0 , - 1 ) ;
ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo . mmi ) ) ; if ( S
-> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo ->
genericFcn ; } irvj0luwjw ( & ( dw -> rtm ) , & ( dw -> rtdw ) ) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { g5h05g3u4wx * dw = ( g5h05g3u4wx * )
ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * ) ssGetContStates
( S ) ; kz4c240slf * localXPerturbMin = ( kz4c240slf * )
ssGetJacobianPerturbationBoundsMinVec ( S ) ; mclj3ytwnx * localXPerturbMax =
( mclj3ytwnx * ) ssGetJacobianPerturbationBoundsMaxVec ( S ) ; alwc4n2foq ( &
( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ,
localXPerturbMin , localXPerturbMax ) ; } static void mdlOutputs ( SimStruct
* S , int_T tid ) { g5h05g3u4wx * dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 )
; real_T const * i_alps4cqvbe = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ;
real_T const * i_i_i_broznjvo0f = ( real_T * ) ssGetInputPortSignal ( S , 1 )
; real_T const * i_i_bav2fyyxpd = ( real_T * ) ssGetInputPortSignal ( S , 2 )
; real_T * o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T *
o_B_1_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_1_3 = (
real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_B_1_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_1_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_1_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_1_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_1_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; if ( tid == PARAMETER_TUNING_TID ) {
FCElectricPlantTID2 ( & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) )
; } if ( tid != CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { if (
ssIsSampleHit ( S , 0 , tid ) || ssIsMinorTimeStep ( S ) ) { FCElectricPlant
( & ( dw -> rtm ) , i_alps4cqvbe , i_i_i_broznjvo0f , i_i_bav2fyyxpd ,
o_B_1_1 , o_B_1_2 , o_B_1_3 , o_B_1_4 , o_B_1_5 , o_B_1_6 , o_B_1_7 , o_B_1_8
, & ( dw -> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) ) ; } } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; czx1gq31fm ( & ( dw -> rtm ) , & ( dw -> rtb ) , & (
dw -> rtdw ) , localX ) ; return ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const * i_i_bav2fyyxpd = (
real_T * ) ssGetInputPortSignal ( S , 2 ) ; fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; kqptpzakik * localZCSV = ( kqptpzakik
* ) ssGetNonsampledZCs ( S ) ; abih3gg12y ( & ( dw -> rtm ) , i_i_bav2fyyxpd
, & ( dw -> rtb ) , & ( dw -> rtdw ) , localX , localZCSV ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const * i_i_i_broznjvo0f = (
real_T * ) ssGetInputPortSignal ( S , 1 ) ; fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; dmzi3aztzd * localXdot = ( dmzi3aztzd
* ) ssGetdX ( S ) ; imv3dllygl ( & ( dw -> rtm ) , i_i_i_broznjvo0f , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , localXdot ) ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; mscgivy4fk ( & ( dw -> rtm ) , & ( dw -> rtb ) , & (
dw -> rtdw ) , localX ) ; }
#define MDL_FORCINGFUNCTION
static void mdlForcingFunction ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; real_T const * i_i_i_broznjvo0f = (
real_T * ) ssGetInputPortSignal ( S , 1 ) ; fw3fcrujzt * localX = (
fw3fcrujzt * ) ssGetContStates ( S ) ; dmzi3aztzd * localXdot = ( dmzi3aztzd
* ) ssGetdX ( S ) ; iyhavcqilr ( & ( dw -> rtm ) , i_i_i_broznjvo0f , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , localXdot ) ; }
#define MDL_MASSMATRIX
static void mdlMassMatrix ( SimStruct * S ) { g5h05g3u4wx * dw = (
g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; fw3fcrujzt * localX = ( fw3fcrujzt * )
ssGetContStates ( S ) ; bpia4crzhf ( & ( dw -> rtm ) , & ( dw -> rtb ) , & (
dw -> rtdw ) , localX ) ; } static void mdlTerminate ( SimStruct * S ) {
g5h05g3u4wx * dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; mt14yrnbuj ( & (
dw -> rtdw ) , & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { g5h05g3u4wx * dw =
( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; irfppkdltu ( & ( dw -> rtm ) , & (
dw -> rtdw ) ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { const fw3fcrujzt
* localX = ( const fw3fcrujzt * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( fw3fcrujzt ) ; mxArray * storedX = mxCreateNumericMatrix
( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T * rawData = ( UINT8_T * )
mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] , localX , numBytes ) ;
mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } { mxArray * mdlrefDW =
mr_FCElectricPlant_GetDWork ( ssGetDWork ( S , 0 ) ) ; mxSetFieldByNumber (
ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss
, 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar
( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; { g5h05g3u4wx *
dw = ( g5h05g3u4wx * ) ssGetDWork ( S , 0 ) ; m5e23pbc2h * rtm = & ( dw ->
rtm ) ; mxArray * nonContDerivSigInfo = mxCreateCellMatrix ( 3 , 1 ) ; for (
int i = 0 ; i < 3 ; ++ i ) { mxArray * prevValmxArray = mxCreateNumericMatrix
( 1 , rtm -> nonContDerivSignal [ i ] . sizeInBytes , mxUINT8_CLASS , mxREAL
) ; memcpy ( ( uint8_T * ) mxGetData ( prevValmxArray ) , ( const uint8_T * )
rtm -> nonContDerivSignal [ i ] . pPrevVal , rtm -> nonContDerivSignal [ i ]
. sizeInBytes ) ; mxSetCell ( nonContDerivSigInfo , i , prevValmxArray ) ; }
mxSetFieldByNumber ( ss , 0 , 5 , nonContDerivSigInfo ) ; } return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
fw3fcrujzt * localX = ( fw3fcrujzt * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( fw3fcrujzt ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_FCElectricPlant_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber (
ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber
( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; { mxArray * nonContDerivSigInfo =
mxGetFieldByNumber ( ss , 0 , 5 ) ; g5h05g3u4wx * dw = ( g5h05g3u4wx * )
ssGetDWork ( S , 0 ) ; m5e23pbc2h * rtm = & ( dw -> rtm ) ; for ( int i = 0 ;
i < 3 ; ++ i ) { mxArray * prevValmxArray = mxGetCell ( nonContDerivSigInfo ,
i ) ; ( void ) memcpy ( rtm -> nonContDerivSignal [ i ] . pPrevVal , ( char *
) mxGetData ( prevValmxArray ) , rtm -> nonContDerivSignal [ i ] .
sizeInBytes ) ; } } }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
