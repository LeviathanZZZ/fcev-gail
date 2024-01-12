#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "FCEvPowertrainController_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "FCEvPowertrainController.h"
#include "FCEvPowertrainController_capi.h"
#include "FCEvPowertrainController_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING ( "FCEvPowertrainController/Transfer Fcn" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 ,
( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void FCEvPowertrainController_InitializeDataAddr ( void * dataAddr [ ]
, kfczeuvxuu * localDW , ax0myfw24a * localX ) { dataAddr [ 0 ] = ( void * )
( & localX -> bzjnqqh5ry ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void FCEvPowertrainController_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void FCEvPowertrainController_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 3 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 3 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1707961625U , 2013681959U , 24693777U , 2980718006U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * FCEvPowertrainController_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void FCEvPowertrainController_InitializeSystemRan ( ezkw1qrycv * const
jxp0bqrs0w , sysRanDType * systemRan [ ] , kfczeuvxuu * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
jxp0bqrs0w ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = jxp0bqrs0w -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = jxp0bqrs0w -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void FCEvPowertrainController_InitializeDataMapInfo ( ezkw1qrycv * const
jxp0bqrs0w , kfczeuvxuu * localDW , ax0myfw24a * localX , void * sysRanPtr ,
int contextTid ) { rtwCAPI_SetVersion ( jxp0bqrs0w -> DataMapInfo . mmi , 1 )
; rtwCAPI_SetStaticMap ( jxp0bqrs0w -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( jxp0bqrs0w -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; FCEvPowertrainController_InitializeDataAddr (
jxp0bqrs0w -> DataMapInfo . dataAddress , localDW , localX ) ;
rtwCAPI_SetDataAddressMap ( jxp0bqrs0w -> DataMapInfo . mmi , jxp0bqrs0w ->
DataMapInfo . dataAddress ) ; FCEvPowertrainController_InitializeVarDimsAddr
( jxp0bqrs0w -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap
( jxp0bqrs0w -> DataMapInfo . mmi , jxp0bqrs0w -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetPath ( jxp0bqrs0w -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetFullPath ( jxp0bqrs0w -> DataMapInfo . mmi , ( NULL ) ) ;
FCEvPowertrainController_InitializeLoggingFunctions ( jxp0bqrs0w ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( jxp0bqrs0w ->
DataMapInfo . mmi , jxp0bqrs0w -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( jxp0bqrs0w -> DataMapInfo . mmi , &
jxp0bqrs0w -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
jxp0bqrs0w -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
jxp0bqrs0w -> DataMapInfo . mmi , 0 ) ;
FCEvPowertrainController_InitializeSystemRan ( jxp0bqrs0w , jxp0bqrs0w ->
DataMapInfo . systemRan , localDW , jxp0bqrs0w -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( jxp0bqrs0w -> DataMapInfo .
mmi , jxp0bqrs0w -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
jxp0bqrs0w -> DataMapInfo . mmi , jxp0bqrs0w -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( jxp0bqrs0w -> DataMapInfo . mmi , & jxp0bqrs0w ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void FCEvPowertrainController_host_InitializeDataMapInfo (
FCEvPowertrainController_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
