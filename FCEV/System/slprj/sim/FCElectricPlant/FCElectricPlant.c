#include "FCElectricPlant.h"
#include "rtwtypes.h"
#include "FCElectricPlant_private.h"
#include <string.h>
#include "mwmathutil.h"
#include <stddef.h>
#include "FCElectricPlant_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
const real_T FCElectricPlant_RGND = 0.0 ; static RegMdlInfo
rtMdlInfo_FCElectricPlant [ 56 ] = { { "g5h05g3u4wx" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"kqptpzakik" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "mclj3ytwnx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "kz4c240slf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "nwplfevrxw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "h1ig1prbuq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "dmzi3aztzd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "fw3fcrujzt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "fwt5jlu31r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "km30avrcex" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "bfougxayhi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "mieomydsao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "ammy3t1awn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "o4lq13rlvq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "eyoe1cz1wp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "mt14yrnbuj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "irfppkdltu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "nslrl0uz53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "abih3gg12y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "bpia4crzhf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "iyhavcqilr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "mscgivy4fk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "imv3dllygl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "czx1gq31fm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "gtrcczzcor" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "k5nsrx2akm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "axkawtnuua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "FCElectricPlant" } , { "alwc4n2foq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "irvj0luwjw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "FCElectricPlant" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "klcn51g3hh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "FCElectricPlant" } , { "fjefo04diq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "FCElectricPlant" } ,
{ "m5e23pbc2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCElectricPlant" } , { "struct_JO2GXfI9g1rAenTIGmuhPD" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_zSfISpRpY6aADD7OgXSulC" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_DwpI6bQuIOImzafpnoLEKE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_H6WPvM8rfrwYCCVKK0ESLD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_AFnjoI7EtZZSooCsoe6EE" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" }
, { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_FCElectricPlant_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "FCElectricPlant" } , { "mr_FCElectricPlant_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCElectricPlant" } , {
"mr_FCElectricPlant_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "FCElectricPlant" } , { "FCElectricPlant.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "FCElectricPlant.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "FCElectricPlant" } } ; locdm2fqb0b locdm2fqb0 = { 0.0 , 0.01
, 0.5 , 0.0 , 1.0 , - 1.0 , 0.0 , 100.0 , 0.006 , 5.0 , 1.0 , 1.0 , 0.01 , -
1000.0 , 1000.0 , - 1000.0 , 1000.0 , 0.0 , 201.6 , - 1.0 , 1.0 , - 0.5 , 0.5
, - 1.0 , 1.0 , - 1.0 , 1.0 , - 1.0 , 1.0 , - 1.0 , 1.0 , - 1000.0 , 1000.0 ,
- 1000.0 , 1000.0 , 1.0 , 0.0 , - 1000.0 , 1000.0 , - 1.0 , - 1000.0 , 1000.0
, - 1.0 , - 1.0 , 1.0 , - 1.0 , - 1000.0 , 1000.0 , - 1.0 , - 1.0 , 100.0 , -
100.0 , 1.0 , 100.0 , 6.5 , - 1000.0 , 1000.0 , 0.00015830919839518998 , 0.1
, 0.0 , 0.0 , 0.1 , 0.0 , 0.0 , 0.6 , 0.0 , 0.0 , 2.5 , 39.199999999999996 ,
0.5 , 20.0 , 0.101325 , 0.0 , 0.21 , 454.99261510564628 , 20.0 , 0.101325 ,
0.06 , 20.0 , 70.0 , 0.0 , 0.9997 , 20.0 , 0.101325 , 0.0 , 0.9997 , 0.8 ,
20.0 , 0.101325 , 0.0 , 0.9997 , 0.0 , 20.0 , 0.101325 , 0.0 , 0.9997 , 20.0
, 0.101325 , 0.0 , 0.9997 , 20.0 , 0.101325 , 0.0 , 0.9997 , 0.8 , 0.5 , 20.0
, 0.101325 , 0.0 , 0.21 , 0.101325 , 0.06 , 0.5 , 20.0 , 0.101325 , 0.0 ,
0.21 , 0.5 , 20.0 , 0.101325 , 0.0 , 0.21 , 0.5 , 20.0 , 0.101325 , 0.0 ,
0.21 , 0.0 , 650.0 , 0U , { 0U , 1U } , 0U , { 0U , 1U } , 0U , { 0U , 1U } }
; void irvj0luwjw ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ) {
if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pdiff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pdiff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Add"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pdiff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbr . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3a55345b-f6cf-4ff4-be05-c1081544ff81" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbr . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> gz2yikcxsbr . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbr . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> gz2yikcxsbr . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> gz2yikcxsbr . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gz2yikcxsbr . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> gz2yikcxsbr . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gz2yikcxsbr . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/P3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "InternalEnergyIn" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nwagfadtz5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "98540f84-2da4-4a4f-a442-f42c19a75941" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nwagfadtz5 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> nwagfadtz5 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nwagfadtz5 . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> nwagfadtz5 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> nwagfadtz5 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
nwagfadtz5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> nwagfadtz5 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> nwagfadtz5 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/P4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( lmamcwn3a2 -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> ir3sjqcelg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "dfe2c03f-1f9e-4b51-a931-a00d5a8c9e9c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> ir3sjqcelg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> ir3sjqcelg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> ir3sjqcelg . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> ir3sjqcelg . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> ir3sjqcelg . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
ir3sjqcelg . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> ir3sjqcelg . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> ir3sjqcelg . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Phe"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( lmamcwn3a2 -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> boxtz4t1xz . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "eeccc0d2-1cd3-4ce3-921d-ae01a1e39b59" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> boxtz4t1xz . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> boxtz4t1xz . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> boxtz4t1xz . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> boxtz4t1xz . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> boxtz4t1xz . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
boxtz4t1xz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> boxtz4t1xz . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> boxtz4t1xz . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pdiff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pdiff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Add"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pdiff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbro . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "27bd3981-706e-4ef0-8167-f0efdb542137" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbro . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> gz2yikcxsbro . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbro . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> gz2yikcxsbro . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> gz2yikcxsbro . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gz2yikcxsbro . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
localDW -> gz2yikcxsbro . AQHandles , loggedName , origSigName , propName ) ;
if ( forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gz2yikcxsbro . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/P1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "InternalEnergyIn" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jb5p2yd0pp . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "811447fe-f2d4-4aaa-8f15-528c9ec1041d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> jb5p2yd0pp . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> jb5p2yd0pp . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> jb5p2yd0pp . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> jb5p2yd0pp . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> jb5p2yd0pp . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jb5p2yd0pp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jb5p2yd0pp . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jb5p2yd0pp . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/P2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( lmamcwn3a2 -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> pt2ziyjsco . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a527cb92-3b2e-4b1e-925d-71238c441c33" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> pt2ziyjsco . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> pt2ziyjsco . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> pt2ziyjsco . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> pt2ziyjsco . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> pt2ziyjsco . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
pt2ziyjsco . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> pt2ziyjsco . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> pt2ziyjsco . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Pfc"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "HeatDissipated" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> kesjhajib2 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "7c0fc785-1d78-4b7b-9e24-aa1c751a98af" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> kesjhajib2 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> kesjhajib2 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> kesjhajib2 . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> kesjhajib2 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> kesjhajib2 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
kesjhajib2 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> kesjhajib2 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> kesjhajib2 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"P diff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "P diff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Add"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "P diff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbro0 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "b5d6ed1e-8833-435b-8d55-fca5ef7d8780" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbro0 . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> gz2yikcxsbro0 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbro0 . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> gz2yikcxsbro0 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> gz2yikcxsbro0 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gz2yikcxsbro0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
localDW -> gz2yikcxsbro0 . AQHandles , loggedName , origSigName , propName )
; if ( forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gz2yikcxsbro0 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"InternalEnergyIn" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/P2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "InternalEnergyIn" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> pt2ziyjsco3 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "1a7464d2-7000-4a6f-b967-8f8204e6321f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> pt2ziyjsco3 . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> pt2ziyjsco3 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> pt2ziyjsco3 . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> pt2ziyjsco3 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> pt2ziyjsco3 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
pt2ziyjsco3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> pt2ziyjsco3 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> pt2ziyjsco3 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/P3"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( lmamcwn3a2 -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nwagfadtz5a . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "6e8dffcc-dbab-491c-bde0-bc06fa1787dc" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nwagfadtz5a . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> nwagfadtz5a . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nwagfadtz5a . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> nwagfadtz5a . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> nwagfadtz5a . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
nwagfadtz5a . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> nwagfadtz5a . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> nwagfadtz5a . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"HeatDissipated" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Ptcm"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "HeatDissipated" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> li5lvqaaj1 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "e787fdf5-c72f-4a88-876e-3c27e376d4b8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> li5lvqaaj1 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> li5lvqaaj1 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> li5lvqaaj1 . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> li5lvqaaj1 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> li5lvqaaj1 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
li5lvqaaj1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> li5lvqaaj1 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> li5lvqaaj1 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Pdiff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Pdiff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Add" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Pdiff" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsbro0p . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "df98737a-a04e-4ef6-8a86-66f2c964cb85" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsbro0p . AQHandles , hDT
, & srcInfo ) ; if ( localDW -> gz2yikcxsbro0p . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsbro0p . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> gz2yikcxsbro0p . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> gz2yikcxsbro0p . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gz2yikcxsbro0p . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
localDW -> gz2yikcxsbro0p . AQHandles , loggedName , origSigName , propName )
; if ( forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gz2yikcxsbro0p . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/P1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( lmamcwn3a2 -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jb5p2yd0ppu . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "49dffa9c-6399-4398-9f54-d1f76c2157f4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> jb5p2yd0ppu . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> jb5p2yd0ppu . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> jb5p2yd0ppu . AQHandles ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> jb5p2yd0ppu . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> jb5p2yd0ppu . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jb5p2yd0ppu . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jb5p2yd0ppu . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jb5p2yd0ppu . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Boostout" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Boostout" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/Boost Converter Power Accounting/Gain3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Boostout" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> edo2yybvgy . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "dde3cef4-27d2-4bf6-bfb0-a91bf5525da9" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> edo2yybvgy . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> edo2yybvgy . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> edo2yybvgy . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> edo2yybvgy . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> edo2yybvgy . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
edo2yybvgy . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> edo2yybvgy . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> edo2yybvgy . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Boostdissipated" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"Boostdissipated" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Boost Converter Power Accounting/Gain4" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Boostdissipated" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> k5lhedc1qi . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "d9bc043c-0b3c-4e86-bf04-2d47c883984f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> k5lhedc1qi . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> k5lhedc1qi . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> k5lhedc1qi . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> k5lhedc1qi . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> k5lhedc1qi . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
k5lhedc1qi . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> k5lhedc1qi . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> k5lhedc1qi . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"dcdcout" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "dcdcout" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"FCElectricPlant/DC-DC Converter  Power Accounting/Gain2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "dcdcout" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> buyjzzgvti . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "92318c77-6bf4-4641-bbc3-ae5cc3489971" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> buyjzzgvti . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> buyjzzgvti . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> buyjzzgvti . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> buyjzzgvti . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> buyjzzgvti . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
buyjzzgvti . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> buyjzzgvti . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> buyjzzgvti . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"dcdcnotTransf" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"dcdcnotTransf" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/DC-DC Converter  Power Accounting/Gain3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "dcdcnotTransf" ) ; sdiAsyncQueueHandle hForEachParent
= ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> edo2yybvgya . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a889b1fc-0bcb-40a2-a968-76f4182fcf17" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> edo2yybvgya . AQHandles , hDT ,
& srcInfo ) ; if ( localDW -> edo2yybvgya . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> edo2yybvgya . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> edo2yybvgya . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> edo2yybvgya . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
edo2yybvgya . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> edo2yybvgya . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> edo2yybvgya . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/Motor Power Accounting/Add1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jhjx45yzf4 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "4c69ac4a-b093-4b1d-af1f-89c8f4057de0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> jhjx45yzf4 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> jhjx45yzf4 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> jhjx45yzf4 . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> jhjx45yzf4 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> jhjx45yzf4 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jhjx45yzf4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jhjx45yzf4 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jhjx45yzf4 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/Motor Power Accounting/Add" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz2yikcxsb . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "3348dfd4-b48c-457a-9528-77ef241eb0c1" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz2yikcxsb . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> gz2yikcxsb . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz2yikcxsb . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> gz2yikcxsb . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> gz2yikcxsb . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gz2yikcxsb . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> gz2yikcxsb . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gz2yikcxsb . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"MotPwrnotTransferred" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"MotPwrnotTransferred" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"FCElectricPlant/Motor Power Accounting/Gain1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "MotPwrnotTransferred" )
; sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; if ( slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims =
0 ; } else { forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel (
lmamcwn3a2 -> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims .
dimensions = forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 )
{ hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> aqh4yyrzcm . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "c9a3e688-7301-418b-8761-2e83460fcf83" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> aqh4yyrzcm . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> aqh4yyrzcm . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> aqh4yyrzcm . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> aqh4yyrzcm . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> aqh4yyrzcm . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
aqh4yyrzcm . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> aqh4yyrzcm . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> aqh4yyrzcm . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"MotPwrIn" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "MotPwrIn" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/Motor Power Accounting/Gain" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "MotPwrIn" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dkfsbamwtk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "a1c81041-bdd6-48b8-b899-61e56e925115" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "W" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dkfsbamwtk . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> dkfsbamwtk . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dkfsbamwtk . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> dkfsbamwtk . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> dkfsbamwtk . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
dkfsbamwtk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> dkfsbamwtk . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> dkfsbamwtk . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( lmamcwn3a2
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCElectricPlant/FCCurrCmd" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( lmamcwn3a2
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , lmamcwn3a2 ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gz3smcnpgn . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , lmamcwn3a2 -> DataMapInfo .
mmi . InstanceMap . fullPath , "c2a55455-5867-40a0-8540-2b12f034cb4a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> gz3smcnpgn . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> gz3smcnpgn . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> gz3smcnpgn . AQHandles ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( lmamcwn3a2 ) ) ;
sdiSetSignalRefRate ( localDW -> gz3smcnpgn . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( localDW -> gz3smcnpgn . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gz3smcnpgn . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> gz3smcnpgn . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gz3smcnpgn . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } } void k5nsrx2akm ( m5e23pbc2h *
const lmamcwn3a2 , ammy3t1awn * localDW , fw3fcrujzt * localX ) { int_T is ;
int_T tmp_e ; int_T tmp_g ; int_T tmp_i ; int_T tmp_j ; int_T tmp_m ;
boolean_T tmp ; boolean_T tmp_p ; void * S ; void * diag ; localX ->
cjg15axlwj = 0.0 ; localX -> ggydzdzl02 = 0.0 ; localX -> obun43xkmt = 0.0 ;
localX -> lqulrgwclj = 0.0 ; localX -> egyqa4syxe = 0.0 ; localX ->
ptuc3j0waz = 0.0 ; localX -> nupwktvts5 = 0.0 ; localX -> pbkku1th1h = 0.0 ;
localX -> ipbdkiozya = 0.0 ; localX -> czf51nn3to = 0.0 ; localDW ->
ie3nwfalvy = 1 ; if ( rtmIsFirstInitCond ( lmamcwn3a2 ) ) { localX ->
abtw1mwj2p = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; localDW
-> ie3nwfalvy = ! tmp ; } else { localDW -> ie3nwfalvy = 1 ; } localX ->
ghzzlnog0w = 0.0 ; } localDW -> ei0dla2ntt = 1 ; if ( rtmIsFirstInitCond (
lmamcwn3a2 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
lmamcwn3a2 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; localDW -> ei0dla2ntt = ! tmp ; } else {
localDW -> ei0dla2ntt = 1 ; } } localX -> fpiq4t01ji = 0.0 ; tmp = false ;
tmp_p = true ; if ( tmp_p || tmp ) { is = strcmp ( ssGetSolverName (
lmamcwn3a2 -> _mdlRefSfcnS ) , "daessc" ) ; tmp_e = strcmp ( ssGetSolverName
( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode14x" ) ; tmp_i = strcmp (
ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode15s" ) ; tmp_m = strcmp
( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode1be" ) ; tmp_g =
strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode23t" ) ; tmp_j
= strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "odeN" ) ; if ( (
boolean_T ) ( ( is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 )
& ( tmp_g != 0 ) & ( tmp_j != 0 ) ) ) { S = lmamcwn3a2 -> _mdlRefSfcnS ; diag
= CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "ode23t" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } localX -> ep1kvce3ls = 0.0 ; localX ->
hehcfcd5qe = 0.0 ; localX -> hrtmiik4pa = locdm2fqb0 . P_54 ; localX ->
cs23dlzame = 0.0 ; localX -> gr332uyzki = locdm2fqb0 . P_3 ; } void
gtrcczzcor ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ,
fw3fcrujzt * localX ) { int_T is ; int_T tmp_e ; int_T tmp_g ; int_T tmp_i ;
int_T tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; void * S ; void
* diag ; localX -> cjg15axlwj = 0.0 ; localX -> ggydzdzl02 = 0.0 ; localX ->
obun43xkmt = 0.0 ; localX -> lqulrgwclj = 0.0 ; localX -> egyqa4syxe = 0.0 ;
localX -> ptuc3j0waz = 0.0 ; localX -> nupwktvts5 = 0.0 ; localX ->
pbkku1th1h = 0.0 ; localX -> ipbdkiozya = 0.0 ; localX -> czf51nn3to = 0.0 ;
localDW -> ie3nwfalvy = 1 ; if ( rtmIsFirstInitCond ( lmamcwn3a2 ) ) { localX
-> abtw1mwj2p = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; localDW
-> ie3nwfalvy = ! tmp ; } else { localDW -> ie3nwfalvy = 1 ; } localX ->
ghzzlnog0w = 0.0 ; } localDW -> ei0dla2ntt = 1 ; if ( rtmIsFirstInitCond (
lmamcwn3a2 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
lmamcwn3a2 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; localDW -> ei0dla2ntt = ! tmp ; } else {
localDW -> ei0dla2ntt = 1 ; } } localX -> fpiq4t01ji = 0.0 ; tmp = false ;
tmp_p = true ; if ( tmp_p || tmp ) { is = strcmp ( ssGetSolverName (
lmamcwn3a2 -> _mdlRefSfcnS ) , "daessc" ) ; tmp_e = strcmp ( ssGetSolverName
( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode14x" ) ; tmp_i = strcmp (
ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode15s" ) ; tmp_m = strcmp
( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode1be" ) ; tmp_g =
strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "ode23t" ) ; tmp_j
= strcmp ( ssGetSolverName ( lmamcwn3a2 -> _mdlRefSfcnS ) , "odeN" ) ; if ( (
boolean_T ) ( ( is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 )
& ( tmp_g != 0 ) & ( tmp_j != 0 ) ) ) { S = lmamcwn3a2 -> _mdlRefSfcnS ; diag
= CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "ode23t" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } localX -> ep1kvce3ls = 0.0 ; localX ->
hehcfcd5qe = 0.0 ; localX -> hrtmiik4pa = locdm2fqb0 . P_54 ; localX ->
cs23dlzame = 0.0 ; localX -> gr332uyzki = locdm2fqb0 . P_3 ; } void
alwc4n2foq ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn
* localDW , fw3fcrujzt * localX , kz4c240slf * localXPerturbMin , mclj3ytwnx
* localXPerturbMax ) { NeModelParameters modelParameters ; NeModelParameters
modelParameters_p ; NeslRtpManager * manager ; NeslRtpManager * manager_p ;
NeslSimulationData * simulationData ; NeslSimulator * tmp_p ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p
; char * msg ; char * msg_e ; char * msg_p ; real_T tmp_m [ 48 ] ; real_T
time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 13 ] ; boolean_T tmp ;
boolean_T val ; localB -> jdyv4q3xm2 = locdm2fqb0 . P_65 ; manager_p =
nesl_lease_rtp_manager ( "FCElectricPlant/Solver Configuration1_1" , 0 ) ;
manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp ) {
FCElectricPlant_f9151c4e_1_gateway ( ) ; manager = nesl_lease_rtp_manager (
"FCElectricPlant/Solver Configuration1_1" , 0 ) ; } localDW -> ksiklz0hbn = (
void * ) manager ; localDW -> fczbez2now = true ; tmp_p =
nesl_lease_simulator ( "FCElectricPlant/Solver Configuration1_1" , 0 , 0 ) ;
localDW -> pymy2pyhih = ( void * ) tmp_p ; tmp = pointer_is_null ( localDW ->
pymy2pyhih ) ; if ( tmp ) { FCElectricPlant_f9151c4e_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "FCElectricPlant/Solver Configuration1_1" , 0 , 0 ) ;
localDW -> pymy2pyhih = ( void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP
( lmamcwn3a2 -> _mdlRefSfcnS , "FCElectricPlant/Solver Configuration1_100" ,
( void * * ) ( & localDW -> pymy2pyhih ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; localDW -> j1mjeinhrl = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; localDW ->
caf04x50w3 = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.0001 ;
modelParameters . mSolverRelTol = 0.0001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters . mStartTime
= 0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.0985605E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; tmp_e = 0.0001 ;
modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters .
mFixedStepSize = tmp_e ; tmp = true ; modelParameters . mVariableStepSolver =
tmp ; tmp = false ; modelParameters . mIsUsingODEN = tmp ; tmp =
slIsRapidAcceleratorSimulating ( ) ; val = ( slIsRapidAcceleratorSimulating (
) ? ssGetGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if (
tmp ) { val = ( val && rtmIsFirstInitCond ( lmamcwn3a2 ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) localDW -> caf04x50w3
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
localDW -> pymy2pyhih , & modelParameters , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } simulationData
= ( NeslSimulationData * ) localDW -> j1mjeinhrl ; time = rtmGetTaskTime (
lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 399 ; simulationData -> mData -> mContStates . mX = & localX -> lq4bzlrlb1
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> gfu5yue0a4 ; simulationData -> mData
-> mModeVector . mN = 218 ; simulationData -> mData -> mModeVector . mX = &
localDW -> dpbhdgg3j4 [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_m [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_m [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_m
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_m [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_m [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_m [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_m [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_m [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_m [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_m [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_m [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_m [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_m [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_m [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_m [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_g [ 5 ] =
20 ; tmp_m [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_m [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_m [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_m [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_m [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_m [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_m [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_m [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_m [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_m [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_m [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_m [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_m [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_m [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_m [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_m [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_g [ 10 ] =
40 ; tmp_m [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_m [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_m [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_m [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_m [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_m [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_m [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_g [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo .
mN = 399 ; simulationData -> mData -> mNumjacDxLo . mX = & localXPerturbMin
-> lq4bzlrlb1 [ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 399 ;
simulationData -> mData -> mNumjacDxHi . mX = & localXPerturbMax ->
lq4bzlrlb1 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) localDW ->
caf04x50w3 ; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * )
localDW -> pymy2pyhih , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( tmp ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS , msg_p ) ; } } tmp_p = nesl_lease_simulator (
"FCElectricPlant/Solver Configuration1_1" , 1 , 0 ) ; localDW -> ai5tmyvkr4 =
( void * ) tmp_p ; tmp = pointer_is_null ( localDW -> ai5tmyvkr4 ) ; if ( tmp
) { FCElectricPlant_f9151c4e_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
"FCElectricPlant/Solver Configuration1_1" , 1 , 0 ) ; localDW -> ai5tmyvkr4 =
( void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( lmamcwn3a2 ->
_mdlRefSfcnS , "FCElectricPlant/Solver Configuration1_110" , ( void * * ) ( &
localDW -> ai5tmyvkr4 ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
localDW -> fuu3yr5t3a = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; localDW -> ln3oq3n23r = ( void * )
diagnosticManager ; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ;
modelParameters_p . mSolverAbsTol = 0.0001 ; modelParameters_p .
mSolverRelTol = 0.0001 ; modelParameters_p . mSolverModifyAbsTol =
NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_p . mStartTime = 0.0 ;
modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_p .
mRTWModifiedTimeStamp = 6.0985605E+8 ; modelParameters_p . mZcDisabled =
false ; modelParameters_p . mUseModelRefSolver = false ; tmp_e = 0.0001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp = true ; modelParameters_p .
mVariableStepSolver = tmp ; tmp = false ; modelParameters_p . mIsUsingODEN =
tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
lmamcwn3a2 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( tmp ) { val = ( val &&
rtmIsFirstInitCond ( lmamcwn3a2 ) ) ; } modelParameters_p . mLoadInitialState
= val ; modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> ln3oq3n23r ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) localDW -> ai5tmyvkr4 , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
if ( tmp ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_e ) ; } } } void
FCElectricPlant ( m5e23pbc2h * const lmamcwn3a2 , const real_T * nhquhhxexx ,
const real_T * crmxvln0sn , const real_T * enxvezuult , real_T * laajwttrsw ,
real_T * l45wd5pbjh , real_T * pjtg1ua4jf , real_T * jkukrewnlm , real_T *
lwu0tsgovp , real_T * oz3dekjw3t , real_T * ca0lva1ra5 , real_T * csbds3kgit
, real_T * ndmmn1qxbt , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX , km30avrcex * localZCE ) { NeParameterBundle expl_temp ;
NeslSimulationData * simulationData ; NeuDiagnosticManager * diag ;
NeuDiagnosticTree * diagTree ; NeuDiagnosticTree * diagnosticTree ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; real_T tmp [ 54 ] ; real_T tmp_p [ 48 ] ; real_T csvlpmecmh_p ;
real_T dhexwepzal_p ; real_T doghfw52dl_p ; real_T kjijsatu5c_p ; real_T
l3aq3lzzaj_p ; real_T l3aq3lzzaj_tmp ; real_T n5zg2lo03g_p ; real_T time ;
real_T time_e ; real_T time_i ; real_T time_p ; real_T *
parameterBundle_mRealParameters_mX ; int_T tmp_m [ 14 ] ; int_T tmp_e [ 13 ]
; int_T iy ; boolean_T didZcEventOccur ; boolean_T fypbxhubtb_p ; boolean_T
tmp_i ; n5zg2lo03g_p = locdm2fqb0 . P_16 * localX -> ggydzdzl02 ; if (
n5zg2lo03g_p > locdm2fqb0 . P_17 ) { doghfw52dl_p = locdm2fqb0 . P_17 ; }
else if ( n5zg2lo03g_p < locdm2fqb0 . P_18 ) { doghfw52dl_p = locdm2fqb0 .
P_18 ; } else { doghfw52dl_p = n5zg2lo03g_p ; } localB -> pkj2z4oo3u =
locdm2fqb0 . P_14 * localX -> cjg15axlwj / doghfw52dl_p ; if ( localDW ->
cgymtfznvh == 0.0 ) { localDW -> cgymtfznvh = 1.0 ; localX -> kgxgv1vmlq =
localB -> pkj2z4oo3u ; } localB -> brkjgij31f [ 0 ] = localX -> kgxgv1vmlq ;
localB -> brkjgij31f [ 1 ] = ( localB -> pkj2z4oo3u - localX -> kgxgv1vmlq )
* 1000.0 ; localB -> brkjgij31f [ 2 ] = 0.0 ; localB -> brkjgij31f [ 3 ] =
0.0 ; localB -> d31fe02c1j [ 0 ] = locdm2fqb0 . P_20 * localX -> obun43xkmt ;
localB -> d31fe02c1j [ 1 ] = 0.0 ; localB -> d31fe02c1j [ 2 ] = 0.0 ; localB
-> d31fe02c1j [ 3 ] = 0.0 ; localB -> m4vtulkmjt [ 0 ] = localB ->
eartrnbzob_mbvzarwird ; localB -> m4vtulkmjt [ 1 ] = 0.0 ; localB ->
m4vtulkmjt [ 2 ] = 0.0 ; if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) ) { localDW
-> mybfclyhka [ 0 ] = ! ( localB -> m4vtulkmjt [ 0 ] == localDW -> mybfclyhka
[ 1 ] ) ; localDW -> mybfclyhka [ 1 ] = localB -> m4vtulkmjt [ 0 ] ; } localB
-> m4vtulkmjt [ 0 ] = localDW -> mybfclyhka [ 1 ] ; localB -> m4vtulkmjt [ 3
] = localDW -> mybfclyhka [ 0 ] ; localB -> ord4d0pj3d = 0.0 ; localB ->
ord4d0pj3d += locdm2fqb0 . P_22 * localX -> lqulrgwclj ; localB -> kqzmt5kme1
[ 0 ] = localB -> ord4d0pj3d ; localB -> kqzmt5kme1 [ 1 ] = 0.0 ; localB ->
kqzmt5kme1 [ 2 ] = 0.0 ; localB -> kqzmt5kme1 [ 3 ] = 0.0 ; localB ->
d1vyttnzih [ 0 ] = locdm2fqb0 . P_24 * localX -> egyqa4syxe ; localB ->
d1vyttnzih [ 1 ] = 0.0 ; localB -> d1vyttnzih [ 2 ] = 0.0 ; localB ->
d1vyttnzih [ 3 ] = 0.0 ; localB -> jke0x3nf0x [ 0 ] = locdm2fqb0 . P_26 *
localX -> ptuc3j0waz + 273.15 ; localB -> jke0x3nf0x [ 1 ] = 0.0 ; localB ->
jke0x3nf0x [ 2 ] = 0.0 ; localB -> jke0x3nf0x [ 3 ] = 0.0 ; localB ->
eartrnbzob [ 0 ] = locdm2fqb0 . P_28 * localX -> nupwktvts5 ; localB ->
eartrnbzob [ 1 ] = 0.0 ; localB -> eartrnbzob [ 2 ] = 0.0 ; localB ->
eartrnbzob [ 3 ] = 0.0 ; localB -> jbwae2aqzh [ 0 ] = locdm2fqb0 . P_30 *
localX -> pbkku1th1h + 273.15 ; localB -> jbwae2aqzh [ 1 ] = 0.0 ; localB ->
jbwae2aqzh [ 2 ] = 0.0 ; localB -> jbwae2aqzh [ 3 ] = 0.0 ; localB ->
l3n4ugyftb [ 0 ] = localB -> kziv2ppkm1 ; localB -> l3n4ugyftb [ 1 ] = 0.0 ;
localB -> l3n4ugyftb [ 2 ] = 0.0 ; if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) ) {
localDW -> jqrc2iageq [ 0 ] = ! ( localB -> l3n4ugyftb [ 0 ] == localDW ->
jqrc2iageq [ 1 ] ) ; localDW -> jqrc2iageq [ 1 ] = localB -> l3n4ugyftb [ 0 ]
; } localB -> l3n4ugyftb [ 0 ] = localDW -> jqrc2iageq [ 1 ] ; localB ->
l3n4ugyftb [ 3 ] = localDW -> jqrc2iageq [ 0 ] ; * oz3dekjw3t = 0.0 ; *
oz3dekjw3t += locdm2fqb0 . P_32 * localX -> ipbdkiozya ; doghfw52dl_p = *
enxvezuult - * oz3dekjw3t ; csvlpmecmh_p = locdm2fqb0 . P_8 * doghfw52dl_p ;
fypbxhubtb_p = ( * enxvezuult <= locdm2fqb0 . P_12 ) ; l3aq3lzzaj_p =
locdm2fqb0 . P_34 * localX -> czf51nn3to ; if ( ssIsModeUpdateTimeStep (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { didZcEventOccur = ( ( ! fypbxhubtb_p ) && (
localZCE -> eleagvs5h0 != ZERO_ZCSIG ) ) ; localZCE -> eleagvs5h0 =
fypbxhubtb_p ; if ( didZcEventOccur || ( localDW -> ie3nwfalvy != 0 ) ) {
didZcEventOccur = ( localX -> abtw1mwj2p != l3aq3lzzaj_p ) ; localX ->
abtw1mwj2p = l3aq3lzzaj_p ; if ( didZcEventOccur ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
} l3aq3lzzaj_p = localX -> abtw1mwj2p ; } else { l3aq3lzzaj_p = localX ->
abtw1mwj2p ; } dhexwepzal_p = locdm2fqb0 . P_0 * doghfw52dl_p ; if (
ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { didZcEventOccur = (
( ! fypbxhubtb_p ) && ( localZCE -> nrrnky0p5s != ZERO_ZCSIG ) ) ; localZCE
-> nrrnky0p5s = fypbxhubtb_p ; if ( didZcEventOccur || ( localDW ->
ei0dla2ntt != 0 ) ) { didZcEventOccur = ( localX -> ghzzlnog0w != localB ->
jdyv4q3xm2 ) ; localX -> ghzzlnog0w = localB -> jdyv4q3xm2 ; if (
didZcEventOccur ) { ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2
-> _mdlRefSfcnS ) ; } } kjijsatu5c_p = localX -> ghzzlnog0w ; } else {
kjijsatu5c_p = localX -> ghzzlnog0w ; } localB -> juwfq1mzri = ( dhexwepzal_p
- kjijsatu5c_p ) * locdm2fqb0 . P_7 ; localB -> hmhvu0ftwl = ( csvlpmecmh_p +
l3aq3lzzaj_p ) + localB -> juwfq1mzri ; if ( ssIsModeUpdateTimeStep (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { localDW -> itcp3adbb2 = localB -> hmhvu0ftwl
>= locdm2fqb0 . P_10 ? 1 : localB -> hmhvu0ftwl > locdm2fqb0 . P_5 ? 0 : - 1
; } localB -> ogx5lh5hr4 = localDW -> itcp3adbb2 == 1 ? locdm2fqb0 . P_10 :
localDW -> itcp3adbb2 == - 1 ? locdm2fqb0 . P_5 : localB -> hmhvu0ftwl ;
l3aq3lzzaj_p = localB -> ogx5lh5hr4 + locdm2fqb0 . P_66 ; if ( l3aq3lzzaj_p >
locdm2fqb0 . P_35 ) { localB -> dycp3mt3z3 [ 0 ] = locdm2fqb0 . P_35 ; } else
if ( l3aq3lzzaj_p < locdm2fqb0 . P_36 ) { localB -> dycp3mt3z3 [ 0 ] =
locdm2fqb0 . P_36 ; } else { localB -> dycp3mt3z3 [ 0 ] = l3aq3lzzaj_p ; }
localB -> dycp3mt3z3 [ 1 ] = 0.0 ; localB -> dycp3mt3z3 [ 2 ] = 0.0 ; localB
-> dycp3mt3z3 [ 3 ] = 0.0 ; localB -> hiaxbfam0w [ 0 ] = * nhquhhxexx ;
localB -> hiaxbfam0w [ 1 ] = 0.0 ; localB -> hiaxbfam0w [ 2 ] = 0.0 ; localB
-> hiaxbfam0w [ 3 ] = 0.0 ; localB -> ddehjbnx4b = 0.0 ; localB -> ddehjbnx4b
+= locdm2fqb0 . P_38 * localX -> fpiq4t01ji ; if ( localDW -> cgodyj4yxm ==
0.0 ) { localDW -> cgodyj4yxm = 1.0 ; localX -> n3wx255ehc = localB ->
ddehjbnx4b ; } localB -> jw0eii0b1p [ 0 ] = localX -> n3wx255ehc ; localB ->
jw0eii0b1p [ 1 ] = ( localB -> ddehjbnx4b - localX -> n3wx255ehc ) * 1000.0 ;
localB -> jw0eii0b1p [ 2 ] = 0.0 ; localB -> jw0eii0b1p [ 3 ] = 0.0 ; if (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && rtmIsSampleHit ( lmamcwn3a2 , 1 , 0 ) )
{ if ( localDW -> fczbez2now ) { tmp [ 0 ] = locdm2fqb0 . P_74 ; tmp [ 1 ] =
locdm2fqb0 . P_96 ; tmp [ 2 ] = locdm2fqb0 . P_98 ; tmp [ 3 ] = locdm2fqb0 .
P_99 ; tmp [ 4 ] = locdm2fqb0 . P_100 ; tmp [ 5 ] = locdm2fqb0 . P_102 ; tmp
[ 6 ] = locdm2fqb0 . P_103 ; tmp [ 7 ] = locdm2fqb0 . P_118 ; tmp [ 8 ] =
locdm2fqb0 . P_120 ; tmp [ 9 ] = locdm2fqb0 . P_121 ; tmp [ 10 ] = locdm2fqb0
. P_123 ; tmp [ 11 ] = locdm2fqb0 . P_125 ; tmp [ 12 ] = locdm2fqb0 . P_126 ;
tmp [ 13 ] = locdm2fqb0 . P_75 ; tmp [ 14 ] = locdm2fqb0 . P_92 ; tmp [ 15 ]
= locdm2fqb0 . P_93 ; tmp [ 16 ] = locdm2fqb0 . P_94 ; tmp [ 17 ] =
locdm2fqb0 . P_95 ; tmp [ 18 ] = locdm2fqb0 . P_78 ; tmp [ 19 ] = locdm2fqb0
. P_79 ; tmp [ 20 ] = locdm2fqb0 . P_80 ; tmp [ 21 ] = locdm2fqb0 . P_81 ;
tmp [ 22 ] = locdm2fqb0 . P_82 ; tmp [ 23 ] = locdm2fqb0 . P_83 ; tmp [ 24 ]
= locdm2fqb0 . P_84 ; tmp [ 25 ] = locdm2fqb0 . P_85 ; tmp [ 26 ] =
locdm2fqb0 . P_71 ; tmp [ 27 ] = locdm2fqb0 . P_69 ; tmp [ 28 ] = locdm2fqb0
. P_70 ; tmp [ 29 ] = locdm2fqb0 . P_72 ; tmp [ 30 ] = locdm2fqb0 . P_73 ;
tmp [ 31 ] = locdm2fqb0 . P_87 ; tmp [ 32 ] = locdm2fqb0 . P_89 ; tmp [ 33 ]
= locdm2fqb0 . P_90 ; tmp [ 34 ] = locdm2fqb0 . P_88 ; tmp [ 35 ] =
locdm2fqb0 . P_97 ; tmp [ 36 ] = locdm2fqb0 . P_101 ; tmp [ 37 ] = locdm2fqb0
. P_105 ; tmp [ 38 ] = locdm2fqb0 . P_106 ; tmp [ 39 ] = locdm2fqb0 . P_108 ;
tmp [ 40 ] = locdm2fqb0 . P_109 ; tmp [ 41 ] = locdm2fqb0 . P_107 ; tmp [ 42
] = locdm2fqb0 . P_113 ; tmp [ 43 ] = locdm2fqb0 . P_114 ; tmp [ 44 ] =
locdm2fqb0 . P_115 ; tmp [ 45 ] = locdm2fqb0 . P_116 ; tmp [ 46 ] =
locdm2fqb0 . P_112 ; tmp [ 47 ] = locdm2fqb0 . P_119 ; tmp [ 48 ] =
locdm2fqb0 . P_124 ; tmp [ 49 ] = locdm2fqb0 . P_64 ; tmp [ 50 ] = locdm2fqb0
. P_117 ; tmp [ 51 ] = locdm2fqb0 . P_122 ; tmp [ 52 ] = locdm2fqb0 . P_127 ;
tmp [ 53 ] = locdm2fqb0 . P_128 ; parameterBundle_mRealParameters_mX = & tmp
[ 0 ] ; diag = rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 54 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
fypbxhubtb_p = nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) localDW ->
ksiklz0hbn , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , expl_temp , diag ) ; if ( !
fypbxhubtb_p ) { fypbxhubtb_p = error_buffer_is_empty ( ssGetErrorStatus (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( fypbxhubtb_p ) { msg =
rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS , msg ) ; } } } localDW -> fczbez2now = false ; } simulationData
= ( NeslSimulationData * ) localDW -> j1mjeinhrl ; l3aq3lzzaj_p =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; time = l3aq3lzzaj_p ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 399 ; simulationData -> mData
-> mContStates . mX = & localX -> lq4bzlrlb1 [ 0 ] ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
localDW -> gfu5yue0a4 ; simulationData -> mData -> mModeVector . mN = 218 ;
simulationData -> mData -> mModeVector . mX = & localDW -> dpbhdgg3j4 [ 0 ] ;
fypbxhubtb_p = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = fypbxhubtb_p ; fypbxhubtb_p =
rtmIsMajorTimeStep ( lmamcwn3a2 ) ; simulationData -> mData ->
mIsMajorTimeStep = fypbxhubtb_p ; didZcEventOccur = _ssGetSolverAssertCheck (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverAssertCheck = didZcEventOccur ; didZcEventOccur =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = didZcEventOccur ; didZcEventOccur =
ssIsSolverComputingJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData
-> mData -> mIsComputingJacobian = didZcEventOccur ; simulationData -> mData
-> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 ->
_mdlRefSfcnS ) != 0 ) ; didZcEventOccur = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = didZcEventOccur ; didZcEventOccur =
ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsModeUpdateTimeStep = didZcEventOccur ; tmp_e [ 0 ] = 0 ; tmp_p [
0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] = localB -> brkjgij31f [ 1 ] ;
tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p [ 3 ] = localB -> brkjgij31f
[ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB -> d31fe02c1j [ 0 ] ; tmp_p [
5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ] = localB -> d31fe02c1j [ 2 ] ;
tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] = localB -> m4vtulkmjt [ 1 ] ; tmp_p
[ 10 ] = localB -> m4vtulkmjt [ 2 ] ; tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13
] = localB -> kqzmt5kme1 [ 1 ] ; tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ;
tmp_p [ 15 ] = localB -> kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
localB -> d1vyttnzih [ 0 ] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ;
tmp_p [ 18 ] = localB -> d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB ->
d1vyttnzih [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0
] ; tmp_p [ 21 ] = localB -> jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB ->
jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] = localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] =
24 ; tmp_p [ 24 ] = localB -> eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB ->
eartrnbzob [ 1 ] ; tmp_p [ 26 ] = localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] =
localB -> eartrnbzob [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB ->
jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] = localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] =
localB -> jbwae2aqzh [ 2 ] ; tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ;
tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] =
localB -> l3n4ugyftb [ 1 ] ; tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ;
tmp_p [ 35 ] = localB -> l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
localB -> dycp3mt3z3 [ 0 ] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ;
tmp_p [ 38 ] = localB -> dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB ->
dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [
0 ] ; tmp_p [ 41 ] = localB -> hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB ->
hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] = localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] =
44 ; tmp_p [ 44 ] = localB -> jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB ->
jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] = localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] =
localB -> jw0eii0b1p [ 3 ] ; tmp_e [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 617 ; simulationData -> mData ->
mOutputs . mX = & localB -> i3uwmxb4ma [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; csvlpmecmh_p =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; time_p = csvlpmecmh_p ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; diag = ( NeuDiagnosticManager * ) localDW -> caf04x50w3 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diag ) ; iy =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( iy != 0 ) { tmp_i =
error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
if ( tmp_i ) { msg_p = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg_p ) ; } } if (
fypbxhubtb_p && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
simulationData = ( NeslSimulationData * ) localDW -> fuu3yr5t3a ; time_e =
l3aq3lzzaj_p ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN
= 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& localDW -> jjwo3uvfgq ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & localDW -> gl2catqxix ; tmp_i
= ( rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp_i ; simulationData -> mData -> mIsMajorTimeStep = fypbxhubtb_p ; tmp_i =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp_i ; tmp_i = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_i ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_i = ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp_i ; simulationData
-> mData -> mIsModeUpdateTimeStep = didZcEventOccur ; tmp_m [ 0 ] = 0 ;
localB -> dv [ 0 ] = localB -> brkjgij31f [ 0 ] ; localB -> dv [ 1 ] = localB
-> brkjgij31f [ 1 ] ; localB -> dv [ 2 ] = localB -> brkjgij31f [ 2 ] ;
localB -> dv [ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_m [ 1 ] = 4 ; localB ->
dv [ 4 ] = localB -> d31fe02c1j [ 0 ] ; localB -> dv [ 5 ] = localB ->
d31fe02c1j [ 1 ] ; localB -> dv [ 6 ] = localB -> d31fe02c1j [ 2 ] ; localB
-> dv [ 7 ] = localB -> d31fe02c1j [ 3 ] ; tmp_m [ 2 ] = 8 ; localB -> dv [ 8
] = localB -> m4vtulkmjt [ 0 ] ; localB -> dv [ 9 ] = localB -> m4vtulkmjt [
1 ] ; localB -> dv [ 10 ] = localB -> m4vtulkmjt [ 2 ] ; localB -> dv [ 11 ]
= localB -> m4vtulkmjt [ 3 ] ; tmp_m [ 3 ] = 12 ; localB -> dv [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; localB -> dv [ 13 ] = localB -> kqzmt5kme1 [ 1 ]
; localB -> dv [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; localB -> dv [ 15 ] =
localB -> kqzmt5kme1 [ 3 ] ; tmp_m [ 4 ] = 16 ; localB -> dv [ 16 ] = localB
-> d1vyttnzih [ 0 ] ; localB -> dv [ 17 ] = localB -> d1vyttnzih [ 1 ] ;
localB -> dv [ 18 ] = localB -> d1vyttnzih [ 2 ] ; localB -> dv [ 19 ] =
localB -> d1vyttnzih [ 3 ] ; tmp_m [ 5 ] = 20 ; localB -> dv [ 20 ] = localB
-> jke0x3nf0x [ 0 ] ; localB -> dv [ 21 ] = localB -> jke0x3nf0x [ 1 ] ;
localB -> dv [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; localB -> dv [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_m [ 6 ] = 24 ; localB -> dv [ 24 ] = localB
-> eartrnbzob [ 0 ] ; localB -> dv [ 25 ] = localB -> eartrnbzob [ 1 ] ;
localB -> dv [ 26 ] = localB -> eartrnbzob [ 2 ] ; localB -> dv [ 27 ] =
localB -> eartrnbzob [ 3 ] ; tmp_m [ 7 ] = 28 ; localB -> dv [ 28 ] = localB
-> jbwae2aqzh [ 0 ] ; localB -> dv [ 29 ] = localB -> jbwae2aqzh [ 1 ] ;
localB -> dv [ 30 ] = localB -> jbwae2aqzh [ 2 ] ; localB -> dv [ 31 ] =
localB -> jbwae2aqzh [ 3 ] ; tmp_m [ 8 ] = 32 ; localB -> dv [ 32 ] = localB
-> l3n4ugyftb [ 0 ] ; localB -> dv [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
localB -> dv [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; localB -> dv [ 35 ] =
localB -> l3n4ugyftb [ 3 ] ; tmp_m [ 9 ] = 36 ; localB -> dv [ 36 ] = localB
-> dycp3mt3z3 [ 0 ] ; localB -> dv [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ;
localB -> dv [ 38 ] = localB -> dycp3mt3z3 [ 2 ] ; localB -> dv [ 39 ] =
localB -> dycp3mt3z3 [ 3 ] ; tmp_m [ 10 ] = 40 ; localB -> dv [ 40 ] = localB
-> hiaxbfam0w [ 0 ] ; localB -> dv [ 41 ] = localB -> hiaxbfam0w [ 1 ] ;
localB -> dv [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; localB -> dv [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_m [ 11 ] = 44 ; localB -> dv [ 44 ] = localB
-> jw0eii0b1p [ 0 ] ; localB -> dv [ 45 ] = localB -> jw0eii0b1p [ 1 ] ;
localB -> dv [ 46 ] = localB -> jw0eii0b1p [ 2 ] ; localB -> dv [ 47 ] =
localB -> jw0eii0b1p [ 3 ] ; tmp_m [ 12 ] = 48 ; memcpy ( & localB -> dv [ 48
] , & localB -> i3uwmxb4ma [ 0 ] , 617U * sizeof ( real_T ) ) ; tmp_m [ 13 ]
= 665 ; simulationData -> mData -> mInputValues . mN = 665 ; simulationData
-> mData -> mInputValues . mX = & localB -> dv [ 0 ] ; simulationData ->
mData -> mInputOffsets . mN = 14 ; simulationData -> mData -> mInputOffsets .
mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 19 ;
simulationData -> mData -> mOutputs . mX = & localB -> al53ax5qkn [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_i = csvlpmecmh_p ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) localDW -> ln3oq3n23r ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) localDW -> ai5tmyvkr4 , NESL_SIM_OUTPUTS , simulationData
, diag ) ; if ( iy != 0 ) { didZcEventOccur = error_buffer_is_empty (
ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ; if ( didZcEventOccur ) {
msg_e = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus (
lmamcwn3a2 -> _mdlRefSfcnS , msg_e ) ; } } if ( fypbxhubtb_p &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ; }
l3aq3lzzaj_p = localB -> al53ax5qkn [ 5 ] * localB -> al53ax5qkn [ 15 ] ;
csvlpmecmh_p = locdm2fqb0 . P_39 * l3aq3lzzaj_p ; { if ( localDW ->
edo2yybvgy . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> edo2yybvgy . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & csvlpmecmh_p + 0 ) ; } } * lwu0tsgovp = 0.0 ;
* lwu0tsgovp += locdm2fqb0 . P_41 * localX -> ep1kvce3ls ; kjijsatu5c_p = *
oz3dekjw3t * * lwu0tsgovp ; l3aq3lzzaj_p = ( kjijsatu5c_p - l3aq3lzzaj_p ) *
locdm2fqb0 . P_42 ; { if ( localDW -> k5lhedc1qi . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
k5lhedc1qi . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
l3aq3lzzaj_p + 0 ) ; } } l3aq3lzzaj_p = localB -> al53ax5qkn [ 3 ] * localB
-> al53ax5qkn [ 4 ] ; csvlpmecmh_p = locdm2fqb0 . P_43 * l3aq3lzzaj_p ; { if
( localDW -> buyjzzgvti . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> buyjzzgvti . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & csvlpmecmh_p + 0 ) ; } }
csvlpmecmh_p = localB -> al53ax5qkn [ 1 ] * n5zg2lo03g_p ; l3aq3lzzaj_p = (
locdm2fqb0 . P_44 * csvlpmecmh_p - l3aq3lzzaj_p ) * locdm2fqb0 . P_45 ; { if
( localDW -> edo2yybvgya . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> edo2yybvgya . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & l3aq3lzzaj_p + 0 ) ; } }
l3aq3lzzaj_p = localB -> al53ax5qkn [ 3 ] * localB -> al53ax5qkn [ 4 ] ;
csvlpmecmh_p = localB -> al53ax5qkn [ 5 ] * localB -> al53ax5qkn [ 15 ] ;
csvlpmecmh_p += l3aq3lzzaj_p ; * jkukrewnlm = 0.0 ; * jkukrewnlm +=
locdm2fqb0 . P_47 * localX -> hehcfcd5qe ; l3aq3lzzaj_tmp = * jkukrewnlm * *
crmxvln0sn ; l3aq3lzzaj_p = l3aq3lzzaj_tmp ; dhexwepzal_p = csvlpmecmh_p -
l3aq3lzzaj_p ; { if ( localDW -> jhjx45yzf4 . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> jhjx45yzf4 .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & dhexwepzal_p + 0
) ; } } { if ( localDW -> gz2yikcxsb . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> gz2yikcxsb .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) & csvlpmecmh_p + 0
) ; } } csvlpmecmh_p = locdm2fqb0 . P_48 * dhexwepzal_p ; { if ( localDW ->
aqh4yyrzcm . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> aqh4yyrzcm . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 0 ) , ( char * ) & csvlpmecmh_p + 0 ) ; } } l3aq3lzzaj_p *=
locdm2fqb0 . P_49 ; { if ( localDW -> dkfsbamwtk . AQHandles &&
ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
dkfsbamwtk . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) &
l3aq3lzzaj_p + 0 ) ; } } * laajwttrsw = locdm2fqb0 . P_50 * localB ->
al53ax5qkn [ 0 ] ; * ca0lva1ra5 = l3aq3lzzaj_tmp ; l3aq3lzzaj_p =
kjijsatu5c_p ; l3aq3lzzaj_p = localB -> al53ax5qkn [ 3 ] * localB ->
al53ax5qkn [ 4 ] ; { if ( localDW -> gz3smcnpgn . AQHandles && ssGetLogOutput
( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> gz3smcnpgn .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 0 ) , ( char * ) enxvezuult + 0 ) ;
} } localB -> d35fz3l5re = locdm2fqb0 . P_1 * doghfw52dl_p ; * csbds3kgit =
0.0 ; * csbds3kgit += locdm2fqb0 . P_56 * localX -> cs23dlzame ; doghfw52dl_p
= muDoubleScalarMax ( * enxvezuult , locdm2fqb0 . P_68 ) ; localB ->
ai5ttmjbcf = locdm2fqb0 . P_67 * doghfw52dl_p * locdm2fqb0 . P_57 ;
doghfw52dl_p = localB -> ai5ttmjbcf - localB -> al53ax5qkn [ 11 ] ; localB ->
mcmq1xxqdb = ( doghfw52dl_p + localX -> gr332uyzki ) * locdm2fqb0 . P_9 ; if
( ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { localDW ->
kzlwmf4i5c = localB -> mcmq1xxqdb >= locdm2fqb0 . P_11 ? 1 : localB ->
mcmq1xxqdb > locdm2fqb0 . P_6 ? 0 : - 1 ; } localB -> ctmtdicsz3 = localDW ->
kzlwmf4i5c == 1 ? locdm2fqb0 . P_11 : localDW -> kzlwmf4i5c == - 1 ?
locdm2fqb0 . P_6 : localB -> mcmq1xxqdb ; localB -> ngn4sopsrz = ( localB ->
ctmtdicsz3 - localB -> mcmq1xxqdb ) * locdm2fqb0 . P_4 + locdm2fqb0 . P_2 *
doghfw52dl_p ; localB -> gvz4ycnxix = muDoubleScalarAbs ( localB ->
al53ax5qkn [ 12 ] ) ; doghfw52dl_p = locdm2fqb0 . P_86 - localB -> al53ax5qkn
[ 13 ] ; l3aq3lzzaj_p = locdm2fqb0 . P_58 * doghfw52dl_p ; if ( l3aq3lzzaj_p
> locdm2fqb0 . P_59 ) { localB -> pldqi3izwq = locdm2fqb0 . P_59 ; } else if
( l3aq3lzzaj_p < locdm2fqb0 . P_60 ) { localB -> pldqi3izwq = locdm2fqb0 .
P_60 ; } else { localB -> pldqi3izwq = l3aq3lzzaj_p ; } doghfw52dl_p =
locdm2fqb0 . P_104 - localB -> al53ax5qkn [ 14 ] ; l3aq3lzzaj_p = locdm2fqb0
. P_61 * doghfw52dl_p ; if ( l3aq3lzzaj_p > locdm2fqb0 . P_62 ) { localB ->
oax1hn5ti2 = locdm2fqb0 . P_62 ; } else if ( l3aq3lzzaj_p < locdm2fqb0 . P_63
) { localB -> oax1hn5ti2 = locdm2fqb0 . P_63 ; } else { localB -> oax1hn5ti2
= l3aq3lzzaj_p ; } * l45wd5pbjh = n5zg2lo03g_p * localB -> al53ax5qkn [ 1 ] ;
* pjtg1ua4jf = localB -> al53ax5qkn [ 1 ] ; * ndmmn1qxbt = localB ->
al53ax5qkn [ 9 ] ; } void FCElectricPlantTID2 ( m5e23pbc2h * const lmamcwn3a2
, o4lq13rlvq * localB , ammy3t1awn * localDW ) { real_T hh4ezm1rfr ; localB
-> jdyv4q3xm2 = locdm2fqb0 . P_65 ; localB -> eartrnbzob_mbvzarwird =
locdm2fqb0 . P_77 + locdm2fqb0 . P_76 ; localB -> kziv2ppkm1 = locdm2fqb0 .
P_111 + locdm2fqb0 . P_110 ; hh4ezm1rfr = 0.0 ; { if ( localDW -> gz2yikcxsbr
. AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> gz2yikcxsbr . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) , ( char * ) & hh4ezm1rfr + 0 ) ; } } { if ( localDW ->
nwagfadtz5 . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> nwagfadtz5 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T * ) & FCElectricPlant_RGND ) +
0 ) ; } } { if ( localDW -> ir3sjqcelg . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> ir3sjqcelg .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T *
) & FCElectricPlant_RGND ) + 0 ) ; } } { if ( localDW -> boxtz4t1xz .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> boxtz4t1xz . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , (
char * ) ( ( const real_T * ) & FCElectricPlant_RGND ) + 0 ) ; } } { if (
localDW -> gz2yikcxsbro . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> gz2yikcxsbro . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) & hh4ezm1rfr + 0 ) ; } } { if
( localDW -> jb5p2yd0pp . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> jb5p2yd0pp . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T * ) &
FCElectricPlant_RGND ) + 0 ) ; } } { if ( localDW -> pt2ziyjsco . AQHandles
&& ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> pt2ziyjsco . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) (
( const real_T * ) & FCElectricPlant_RGND ) + 0 ) ; } } { if ( localDW ->
kesjhajib2 . AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> kesjhajib2 . AQHandles , rtmGetTaskTime (
lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T * ) & FCElectricPlant_RGND ) +
0 ) ; } } { if ( localDW -> gz2yikcxsbro0 . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> gz2yikcxsbro0 .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) & hh4ezm1rfr + 0 )
; } } { if ( localDW -> pt2ziyjsco3 . AQHandles && ssGetLogOutput (
lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> pt2ziyjsco3 .
AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T *
) & FCElectricPlant_RGND ) + 0 ) ; } } { if ( localDW -> nwagfadtz5a .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> nwagfadtz5a . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , (
char * ) ( ( const real_T * ) & FCElectricPlant_RGND ) + 0 ) ; } } { if (
localDW -> li5lvqaaj1 . AQHandles && ssGetLogOutput ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> li5lvqaaj1 . AQHandles ,
rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) ( ( const real_T * ) &
FCElectricPlant_RGND ) + 0 ) ; } } { if ( localDW -> gz2yikcxsbro0p .
AQHandles && ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> gz2yikcxsbro0p . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) ,
( char * ) & hh4ezm1rfr + 0 ) ; } } { if ( localDW -> jb5p2yd0ppu . AQHandles
&& ssGetLogOutput ( lmamcwn3a2 -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> jb5p2yd0ppu . AQHandles , rtmGetTaskTime ( lmamcwn3a2 , 2 ) , ( char * ) (
( const real_T * ) & FCElectricPlant_RGND ) + 0 ) ; } } } void czx1gq31fm (
m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 48 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 13 ] ; boolean_T tmp ; if ( rtmIsMajorTimeStep ( lmamcwn3a2 ) ) { if
( memcmp ( lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pCurrVal , lmamcwn3a2 ->
nonContDerivSignal [ 0 ] . pPrevVal , lmamcwn3a2 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( lmamcwn3a2 -> nonContDerivSignal [
0 ] . pPrevVal , lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pCurrVal ,
lmamcwn3a2 -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; } } localDW ->
ie3nwfalvy = 0 ; localDW -> ei0dla2ntt = 0 ; simulationData = (
NeslSimulationData * ) localDW -> j1mjeinhrl ; time = rtmGetTaskTime (
lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 399 ; simulationData -> mData -> mContStates . mX = & localX -> lq4bzlrlb1
[ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> gfu5yue0a4 ; simulationData -> mData
-> mModeVector . mN = 218 ; simulationData -> mData -> mModeVector . mX = &
localDW -> dpbhdgg3j4 [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_p [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_p [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_p [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_p [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_p [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_p [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_p [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_p [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_p [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_e [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> caf04x50w3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS )
) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } } void imv3dllygl
( m5e23pbc2h * const lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq *
localB , ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot
) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 48 ] ; real_T time ; int_T tmp_e [ 13 ] ; int_T is ; uint32_T ri ;
boolean_T tmp ; localXdot -> cjg15axlwj = 0.0 ; localXdot -> cjg15axlwj +=
locdm2fqb0 . P_13 * localX -> cjg15axlwj ; localXdot -> cjg15axlwj += localB
-> gvz4ycnxix ; localXdot -> ggydzdzl02 = 0.0 ; localXdot -> ggydzdzl02 +=
locdm2fqb0 . P_15 * localX -> ggydzdzl02 ; localXdot -> ggydzdzl02 += localB
-> al53ax5qkn [ 2 ] ; localXdot -> kgxgv1vmlq = ( localB -> pkj2z4oo3u -
localX -> kgxgv1vmlq ) * 1000.0 ; localXdot -> obun43xkmt = 0.0 ; localXdot
-> obun43xkmt += locdm2fqb0 . P_19 * localX -> obun43xkmt ; localXdot ->
obun43xkmt += locdm2fqb0 . P_91 ; localXdot -> lqulrgwclj = 0.0 ; localXdot
-> lqulrgwclj += locdm2fqb0 . P_21 * localX -> lqulrgwclj ; localXdot ->
lqulrgwclj += localB -> ctmtdicsz3 ; localXdot -> egyqa4syxe = 0.0 ;
localXdot -> egyqa4syxe += locdm2fqb0 . P_23 * localX -> egyqa4syxe ;
localXdot -> egyqa4syxe += localB -> pldqi3izwq ; localXdot -> ptuc3j0waz =
0.0 ; localXdot -> ptuc3j0waz += locdm2fqb0 . P_25 * localX -> ptuc3j0waz ;
localXdot -> ptuc3j0waz += localB -> al53ax5qkn [ 9 ] ; localXdot ->
nupwktvts5 = 0.0 ; localXdot -> nupwktvts5 += locdm2fqb0 . P_27 * localX ->
nupwktvts5 ; localXdot -> nupwktvts5 += localB -> oax1hn5ti2 ; localXdot ->
pbkku1th1h = 0.0 ; localXdot -> pbkku1th1h += locdm2fqb0 . P_29 * localX ->
pbkku1th1h ; localXdot -> pbkku1th1h += localB -> al53ax5qkn [ 9 ] ;
localXdot -> ipbdkiozya = 0.0 ; localXdot -> ipbdkiozya += locdm2fqb0 . P_31
* localX -> ipbdkiozya ; localXdot -> ipbdkiozya += localB -> al53ax5qkn [ 7
] ; localXdot -> czf51nn3to = 0.0 ; localXdot -> czf51nn3to += locdm2fqb0 .
P_33 * localX -> czf51nn3to ; localXdot -> czf51nn3to += localB -> ogx5lh5hr4
; localXdot -> abtw1mwj2p = localB -> d35fz3l5re ; localXdot -> ghzzlnog0w =
localB -> juwfq1mzri ; localXdot -> fpiq4t01ji = 0.0 ; localXdot ->
fpiq4t01ji += locdm2fqb0 . P_37 * localX -> fpiq4t01ji ; localXdot ->
fpiq4t01ji += * crmxvln0sn ; localXdot -> n3wx255ehc = ( localB -> ddehjbnx4b
- localX -> n3wx255ehc ) * 1000.0 ; simulationData = ( NeslSimulationData * )
localDW -> j1mjeinhrl ; time = rtmGetTaskTime ( lmamcwn3a2 , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 399 ;
simulationData -> mData -> mContStates . mX = & localX -> lq4bzlrlb1 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & localDW -> gfu5yue0a4 ; simulationData -> mData ->
mModeVector . mN = 218 ; simulationData -> mData -> mModeVector . mX = &
localDW -> dpbhdgg3j4 [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_p [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_p [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_p [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_p [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_p [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_p [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_p [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_p [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_p [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_e [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN =
399 ; simulationData -> mData -> mDx . mX = & localXdot -> lq4bzlrlb1 [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> caf04x50w3 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; is = ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS
) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } localXdot ->
ep1kvce3ls = 0.0 ; localXdot -> ep1kvce3ls += locdm2fqb0 . P_40 * localX ->
ep1kvce3ls ; localXdot -> ep1kvce3ls += localB -> al53ax5qkn [ 8 ] ;
localXdot -> hehcfcd5qe = 0.0 ; localXdot -> hehcfcd5qe += locdm2fqb0 . P_46
* localX -> hehcfcd5qe ; localXdot -> hehcfcd5qe += localB -> al53ax5qkn [ 18
] ; localXdot -> hrtmiik4pa = 0.0 ; for ( ri = locdm2fqb0 . P_130 [ 0U ] ; ri
< locdm2fqb0 . P_130 [ 1U ] ; ri ++ ) { localXdot -> hrtmiik4pa += locdm2fqb0
. P_51 * localX -> hrtmiik4pa ; } for ( ri = locdm2fqb0 . P_132 [ 0U ] ; ri <
locdm2fqb0 . P_132 [ 1U ] ; ri ++ ) { localXdot -> hrtmiik4pa += locdm2fqb0 .
P_52 * localB -> al53ax5qkn [ 3 ] ; } localXdot -> cs23dlzame = 0.0 ;
localXdot -> cs23dlzame += locdm2fqb0 . P_55 * localX -> cs23dlzame ;
localXdot -> cs23dlzame += localB -> al53ax5qkn [ 10 ] ; localXdot ->
gr332uyzki = localB -> ngn4sopsrz ; } void mscgivy4fk ( m5e23pbc2h * const
lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX
) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 48 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 13 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) localDW -> j1mjeinhrl ; time
= rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 399 ; simulationData -> mData -> mContStates . mX = &
localX -> lq4bzlrlb1 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & localDW -> gfu5yue0a4 ;
simulationData -> mData -> mModeVector . mN = 218 ; simulationData -> mData
-> mModeVector . mX = & localDW -> dpbhdgg3j4 [ 0 ] ; tmp = (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = rtmIsMajorTimeStep (
lmamcwn3a2 ) ; tmp = _ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp =
ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_p [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_p [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_p [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_p [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_p [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_p [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_p [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_p [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_p [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_e [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> caf04x50w3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } } void
iyhavcqilr ( m5e23pbc2h * const lmamcwn3a2 , const real_T * crmxvln0sn ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd
* localXdot ) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 48 ] ; real_T time ; int_T tmp_e [ 13 ] ; int_T is ; uint32_T ri ;
boolean_T tmp ; localXdot -> cjg15axlwj = 0.0 ; localXdot -> cjg15axlwj +=
locdm2fqb0 . P_13 * localX -> cjg15axlwj ; localXdot -> cjg15axlwj += localB
-> gvz4ycnxix ; localXdot -> ggydzdzl02 = 0.0 ; localXdot -> ggydzdzl02 +=
locdm2fqb0 . P_15 * localX -> ggydzdzl02 ; localXdot -> ggydzdzl02 += localB
-> al53ax5qkn [ 2 ] ; localXdot -> kgxgv1vmlq = ( localB -> pkj2z4oo3u -
localX -> kgxgv1vmlq ) * 1000.0 ; localXdot -> obun43xkmt = 0.0 ; localXdot
-> obun43xkmt += locdm2fqb0 . P_19 * localX -> obun43xkmt ; localXdot ->
obun43xkmt += locdm2fqb0 . P_91 ; localXdot -> lqulrgwclj = 0.0 ; localXdot
-> lqulrgwclj += locdm2fqb0 . P_21 * localX -> lqulrgwclj ; localXdot ->
lqulrgwclj += localB -> ctmtdicsz3 ; localXdot -> egyqa4syxe = 0.0 ;
localXdot -> egyqa4syxe += locdm2fqb0 . P_23 * localX -> egyqa4syxe ;
localXdot -> egyqa4syxe += localB -> pldqi3izwq ; localXdot -> ptuc3j0waz =
0.0 ; localXdot -> ptuc3j0waz += locdm2fqb0 . P_25 * localX -> ptuc3j0waz ;
localXdot -> ptuc3j0waz += localB -> al53ax5qkn [ 9 ] ; localXdot ->
nupwktvts5 = 0.0 ; localXdot -> nupwktvts5 += locdm2fqb0 . P_27 * localX ->
nupwktvts5 ; localXdot -> nupwktvts5 += localB -> oax1hn5ti2 ; localXdot ->
pbkku1th1h = 0.0 ; localXdot -> pbkku1th1h += locdm2fqb0 . P_29 * localX ->
pbkku1th1h ; localXdot -> pbkku1th1h += localB -> al53ax5qkn [ 9 ] ;
localXdot -> ipbdkiozya = 0.0 ; localXdot -> ipbdkiozya += locdm2fqb0 . P_31
* localX -> ipbdkiozya ; localXdot -> ipbdkiozya += localB -> al53ax5qkn [ 7
] ; localXdot -> czf51nn3to = 0.0 ; localXdot -> czf51nn3to += locdm2fqb0 .
P_33 * localX -> czf51nn3to ; localXdot -> czf51nn3to += localB -> ogx5lh5hr4
; localXdot -> abtw1mwj2p = localB -> d35fz3l5re ; localXdot -> ghzzlnog0w =
localB -> juwfq1mzri ; localXdot -> fpiq4t01ji = 0.0 ; localXdot ->
fpiq4t01ji += locdm2fqb0 . P_37 * localX -> fpiq4t01ji ; localXdot ->
fpiq4t01ji += * crmxvln0sn ; localXdot -> n3wx255ehc = ( localB -> ddehjbnx4b
- localX -> n3wx255ehc ) * 1000.0 ; simulationData = ( NeslSimulationData * )
localDW -> j1mjeinhrl ; time = rtmGetTaskTime ( lmamcwn3a2 , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 399 ;
simulationData -> mData -> mContStates . mX = & localX -> lq4bzlrlb1 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & localDW -> gfu5yue0a4 ; simulationData -> mData ->
mModeVector . mN = 218 ; simulationData -> mData -> mModeVector . mX = &
localDW -> dpbhdgg3j4 [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_p [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_p [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_p [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_p [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_p [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_p [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_p [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_p [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_p [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_e [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN =
399 ; simulationData -> mData -> mDx . mX = & localXdot -> lq4bzlrlb1 [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> caf04x50w3 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; is = ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( is !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } localXdot ->
ep1kvce3ls = 0.0 ; localXdot -> ep1kvce3ls += locdm2fqb0 . P_40 * localX ->
ep1kvce3ls ; localXdot -> ep1kvce3ls += localB -> al53ax5qkn [ 8 ] ;
localXdot -> hehcfcd5qe = 0.0 ; localXdot -> hehcfcd5qe += locdm2fqb0 . P_46
* localX -> hehcfcd5qe ; localXdot -> hehcfcd5qe += localB -> al53ax5qkn [ 18
] ; localXdot -> hrtmiik4pa = 0.0 ; for ( ri = locdm2fqb0 . P_130 [ 0U ] ; ri
< locdm2fqb0 . P_130 [ 1U ] ; ri ++ ) { localXdot -> hrtmiik4pa += locdm2fqb0
. P_51 * localX -> hrtmiik4pa ; } for ( ri = locdm2fqb0 . P_132 [ 0U ] ; ri <
locdm2fqb0 . P_132 [ 1U ] ; ri ++ ) { localXdot -> hrtmiik4pa += locdm2fqb0 .
P_52 * localB -> al53ax5qkn [ 3 ] ; } localXdot -> cs23dlzame = 0.0 ;
localXdot -> cs23dlzame += locdm2fqb0 . P_55 * localX -> cs23dlzame ;
localXdot -> cs23dlzame += localB -> al53ax5qkn [ 10 ] ; localXdot ->
gr332uyzki = localB -> ngn4sopsrz ; } void bpia4crzhf ( m5e23pbc2h * const
lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX
) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 48 ] ; real_T time ; real_T * tmp_i ; real_T * tmp_m ; int32_T tmp_g
; int_T tmp_e [ 13 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData
* ) localDW -> j1mjeinhrl ; time = rtmGetTaskTime ( lmamcwn3a2 , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 399 ;
simulationData -> mData -> mContStates . mX = & localX -> lq4bzlrlb1 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & localDW -> gfu5yue0a4 ; simulationData -> mData ->
mModeVector . mN = 218 ; simulationData -> mData -> mModeVector . mX = &
localDW -> dpbhdgg3j4 [ 0 ] ; tmp = ( rtmIsMajorTimeStep ( lmamcwn3a2 ) &&
ssGetSolverFoundContZcEvents ( lmamcwn3a2 -> _mdlRefSfcnS ) ) ;
simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = rtmIsMajorTimeStep ( lmamcwn3a2 ) ; tmp =
_ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( lmamcwn3a2
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsComputingJacobian = tmp ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp = ssIsSolverRequestingReset (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_p [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_p [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_p [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_p [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_p [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_p [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_p [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_p [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_p [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_e [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i = lmamcwn3a2 -> massMatrixBasePr ;
tmp_m = double_pointer_shift ( tmp_i , localDW -> kpvq4y4ytj ) ;
simulationData -> mData -> mMassMatrixPr . mN = 66 ; simulationData -> mData
-> mMassMatrixPr . mX = tmp_m ; diagnosticManager = ( NeuDiagnosticManager *
) localDW -> caf04x50w3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_g =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } } void
abih3gg12y ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn
* localDW , fw3fcrujzt * localX , kqptpzakik * localZCSV ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 48 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 13 ] ; boolean_T
tmp ; localZCSV -> l2mwos2kg4 = localB -> hmhvu0ftwl - locdm2fqb0 . P_10 ;
localZCSV -> p3lrsdcado = localB -> hmhvu0ftwl - locdm2fqb0 . P_5 ;
simulationData = ( NeslSimulationData * ) localDW -> j1mjeinhrl ; time =
rtmGetTaskTime ( lmamcwn3a2 , 0 ) ; simulationData -> mData -> mTime . mN = 1
; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 399 ; simulationData -> mData -> mContStates . mX = &
localX -> lq4bzlrlb1 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & localDW -> gfu5yue0a4 ;
simulationData -> mData -> mModeVector . mN = 218 ; simulationData -> mData
-> mModeVector . mX = & localDW -> dpbhdgg3j4 [ 0 ] ; tmp = (
rtmIsMajorTimeStep ( lmamcwn3a2 ) && ssGetSolverFoundContZcEvents (
lmamcwn3a2 -> _mdlRefSfcnS ) ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = rtmIsMajorTimeStep (
lmamcwn3a2 ) ; tmp = _ssGetSolverAssertCheck ( lmamcwn3a2 -> _mdlRefSfcnS ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian (
lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( lmamcwn3a2 -> _mdlRefSfcnS ) != 0 ) ; tmp =
ssIsSolverRequestingReset ( lmamcwn3a2 -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( lmamcwn3a2 -> _mdlRefSfcnS )
; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = localB -> brkjgij31f [ 0 ] ; tmp_p [ 1 ] =
localB -> brkjgij31f [ 1 ] ; tmp_p [ 2 ] = localB -> brkjgij31f [ 2 ] ; tmp_p
[ 3 ] = localB -> brkjgij31f [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB
-> d31fe02c1j [ 0 ] ; tmp_p [ 5 ] = localB -> d31fe02c1j [ 1 ] ; tmp_p [ 6 ]
= localB -> d31fe02c1j [ 2 ] ; tmp_p [ 7 ] = localB -> d31fe02c1j [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = localB -> m4vtulkmjt [ 0 ] ; tmp_p [ 9 ] =
localB -> m4vtulkmjt [ 1 ] ; tmp_p [ 10 ] = localB -> m4vtulkmjt [ 2 ] ;
tmp_p [ 11 ] = localB -> m4vtulkmjt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
localB -> kqzmt5kme1 [ 0 ] ; tmp_p [ 13 ] = localB -> kqzmt5kme1 [ 1 ] ;
tmp_p [ 14 ] = localB -> kqzmt5kme1 [ 2 ] ; tmp_p [ 15 ] = localB ->
kqzmt5kme1 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = localB -> d1vyttnzih [ 0
] ; tmp_p [ 17 ] = localB -> d1vyttnzih [ 1 ] ; tmp_p [ 18 ] = localB ->
d1vyttnzih [ 2 ] ; tmp_p [ 19 ] = localB -> d1vyttnzih [ 3 ] ; tmp_e [ 5 ] =
20 ; tmp_p [ 20 ] = localB -> jke0x3nf0x [ 0 ] ; tmp_p [ 21 ] = localB ->
jke0x3nf0x [ 1 ] ; tmp_p [ 22 ] = localB -> jke0x3nf0x [ 2 ] ; tmp_p [ 23 ] =
localB -> jke0x3nf0x [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = localB ->
eartrnbzob [ 0 ] ; tmp_p [ 25 ] = localB -> eartrnbzob [ 1 ] ; tmp_p [ 26 ] =
localB -> eartrnbzob [ 2 ] ; tmp_p [ 27 ] = localB -> eartrnbzob [ 3 ] ;
tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = localB -> jbwae2aqzh [ 0 ] ; tmp_p [ 29 ] =
localB -> jbwae2aqzh [ 1 ] ; tmp_p [ 30 ] = localB -> jbwae2aqzh [ 2 ] ;
tmp_p [ 31 ] = localB -> jbwae2aqzh [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
localB -> l3n4ugyftb [ 0 ] ; tmp_p [ 33 ] = localB -> l3n4ugyftb [ 1 ] ;
tmp_p [ 34 ] = localB -> l3n4ugyftb [ 2 ] ; tmp_p [ 35 ] = localB ->
l3n4ugyftb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = localB -> dycp3mt3z3 [ 0
] ; tmp_p [ 37 ] = localB -> dycp3mt3z3 [ 1 ] ; tmp_p [ 38 ] = localB ->
dycp3mt3z3 [ 2 ] ; tmp_p [ 39 ] = localB -> dycp3mt3z3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = localB -> hiaxbfam0w [ 0 ] ; tmp_p [ 41 ] = localB ->
hiaxbfam0w [ 1 ] ; tmp_p [ 42 ] = localB -> hiaxbfam0w [ 2 ] ; tmp_p [ 43 ] =
localB -> hiaxbfam0w [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = localB ->
jw0eii0b1p [ 0 ] ; tmp_p [ 45 ] = localB -> jw0eii0b1p [ 1 ] ; tmp_p [ 46 ] =
localB -> jw0eii0b1p [ 2 ] ; tmp_p [ 47 ] = localB -> jw0eii0b1p [ 3 ] ;
tmp_e [ 12 ] = 48 ; simulationData -> mData -> mInputValues . mN = 48 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 13 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; simulationData -> mData ->
mNonSampledZCs . mN = 234 ; simulationData -> mData -> mNonSampledZCs . mX =
& localZCSV -> bvy2rszkxl ; diagnosticManager = ( NeuDiagnosticManager * )
localDW -> caf04x50w3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> pymy2pyhih ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( lmamcwn3a2 ->
_mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree )
; ssSetErrorStatus ( lmamcwn3a2 -> _mdlRefSfcnS , msg ) ; } } localZCSV ->
dz0h1j5kaf = localB -> mcmq1xxqdb - locdm2fqb0 . P_11 ; localZCSV ->
jynw1pxquo = localB -> mcmq1xxqdb - locdm2fqb0 . P_6 ; } void irfppkdltu (
m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ) { if ( ( ssGetSimMode
( lmamcwn3a2 -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gz2yikcxsbr .
AQHandles ) { sdiTerminateStreaming ( & localDW -> gz2yikcxsbr . AQHandles )
; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
nwagfadtz5 . AQHandles ) { sdiTerminateStreaming ( & localDW -> nwagfadtz5 .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
ir3sjqcelg . AQHandles ) { sdiTerminateStreaming ( & localDW -> ir3sjqcelg .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
boxtz4t1xz . AQHandles ) { sdiTerminateStreaming ( & localDW -> boxtz4t1xz .
AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
gz2yikcxsbro . AQHandles ) { sdiTerminateStreaming ( & localDW ->
gz2yikcxsbro . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> jb5p2yd0pp . AQHandles ) { sdiTerminateStreaming ( & localDW ->
jb5p2yd0pp . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> pt2ziyjsco . AQHandles ) { sdiTerminateStreaming ( & localDW ->
pt2ziyjsco . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> kesjhajib2 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
kesjhajib2 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> gz2yikcxsbro0 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
gz2yikcxsbro0 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> pt2ziyjsco3 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
pt2ziyjsco3 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> nwagfadtz5a . AQHandles ) { sdiTerminateStreaming ( & localDW ->
nwagfadtz5a . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> li5lvqaaj1 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
li5lvqaaj1 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> gz2yikcxsbro0p . AQHandles ) { sdiTerminateStreaming ( & localDW
-> gz2yikcxsbro0p . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> jb5p2yd0ppu . AQHandles ) { sdiTerminateStreaming ( & localDW ->
jb5p2yd0ppu . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> edo2yybvgy . AQHandles ) { sdiTerminateStreaming ( & localDW ->
edo2yybvgy . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> k5lhedc1qi . AQHandles ) { sdiTerminateStreaming ( & localDW ->
k5lhedc1qi . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> buyjzzgvti . AQHandles ) { sdiTerminateStreaming ( & localDW ->
buyjzzgvti . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> edo2yybvgya . AQHandles ) { sdiTerminateStreaming ( & localDW ->
edo2yybvgya . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> jhjx45yzf4 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
jhjx45yzf4 . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> gz2yikcxsb . AQHandles ) { sdiTerminateStreaming ( & localDW ->
gz2yikcxsb . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> aqh4yyrzcm . AQHandles ) { sdiTerminateStreaming ( & localDW ->
aqh4yyrzcm . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dkfsbamwtk . AQHandles ) { sdiTerminateStreaming ( & localDW ->
dkfsbamwtk . AQHandles ) ; } } if ( ( ssGetSimMode ( lmamcwn3a2 ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( lmamcwn3a2 -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> gz3smcnpgn . AQHandles ) { sdiTerminateStreaming ( & localDW ->
gz3smcnpgn . AQHandles ) ; } } } void mt14yrnbuj ( ammy3t1awn * localDW ,
m5e23pbc2h * const lmamcwn3a2 ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) localDW -> caf04x50w3 ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) localDW -> j1mjeinhrl
) ; nesl_erase_simulator ( "FCElectricPlant/Solver Configuration1_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) localDW -> ln3oq3n23r ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) localDW -> fuu3yr5t3a
) ; nesl_erase_simulator ( "FCElectricPlant/Solver Configuration1_1" ) ;
nesl_destroy_registry ( ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lmamcwn3a2 -> _mdlRefSfcnS , "FCElectricPlant" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void axkawtnuua (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , km30avrcex * localZCE , real_T *
localMM , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; locdm2fqb0 . P_17 =
rtInf ; locdm2fqb0 . P_59 = rtInf ; locdm2fqb0 . P_62 = rtInf ; ( void )
memset ( ( void * ) lmamcwn3a2 , 0 , sizeof ( m5e23pbc2h ) ) ; lmamcwn3a2 ->
Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; lmamcwn3a2 -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; lmamcwn3a2 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; lmamcwn3a2 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lmamcwn3a2 -> _mdlRefSfcnS , "FCElectricPlant" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { int32_T i ; for ( i = 0 ; i
< 617 ; i ++ ) { localB -> i3uwmxb4ma [ i ] = 0.0 ; } for ( i = 0 ; i < 19 ;
i ++ ) { localB -> al53ax5qkn [ i ] = 0.0 ; } localB -> pkj2z4oo3u = 0.0 ;
localB -> brkjgij31f [ 0 ] = 0.0 ; localB -> brkjgij31f [ 1 ] = 0.0 ; localB
-> brkjgij31f [ 2 ] = 0.0 ; localB -> brkjgij31f [ 3 ] = 0.0 ; localB ->
d31fe02c1j [ 0 ] = 0.0 ; localB -> d31fe02c1j [ 1 ] = 0.0 ; localB ->
d31fe02c1j [ 2 ] = 0.0 ; localB -> d31fe02c1j [ 3 ] = 0.0 ; localB ->
m4vtulkmjt [ 0 ] = 0.0 ; localB -> m4vtulkmjt [ 1 ] = 0.0 ; localB ->
m4vtulkmjt [ 2 ] = 0.0 ; localB -> m4vtulkmjt [ 3 ] = 0.0 ; localB ->
ord4d0pj3d = 0.0 ; localB -> kqzmt5kme1 [ 0 ] = 0.0 ; localB -> kqzmt5kme1 [
1 ] = 0.0 ; localB -> kqzmt5kme1 [ 2 ] = 0.0 ; localB -> kqzmt5kme1 [ 3 ] =
0.0 ; localB -> d1vyttnzih [ 0 ] = 0.0 ; localB -> d1vyttnzih [ 1 ] = 0.0 ;
localB -> d1vyttnzih [ 2 ] = 0.0 ; localB -> d1vyttnzih [ 3 ] = 0.0 ; localB
-> jke0x3nf0x [ 0 ] = 0.0 ; localB -> jke0x3nf0x [ 1 ] = 0.0 ; localB ->
jke0x3nf0x [ 2 ] = 0.0 ; localB -> jke0x3nf0x [ 3 ] = 0.0 ; localB ->
eartrnbzob [ 0 ] = 0.0 ; localB -> eartrnbzob [ 1 ] = 0.0 ; localB ->
eartrnbzob [ 2 ] = 0.0 ; localB -> eartrnbzob [ 3 ] = 0.0 ; localB ->
jbwae2aqzh [ 0 ] = 0.0 ; localB -> jbwae2aqzh [ 1 ] = 0.0 ; localB ->
jbwae2aqzh [ 2 ] = 0.0 ; localB -> jbwae2aqzh [ 3 ] = 0.0 ; localB ->
l3n4ugyftb [ 0 ] = 0.0 ; localB -> l3n4ugyftb [ 1 ] = 0.0 ; localB ->
l3n4ugyftb [ 2 ] = 0.0 ; localB -> l3n4ugyftb [ 3 ] = 0.0 ; localB ->
juwfq1mzri = 0.0 ; localB -> hmhvu0ftwl = 0.0 ; localB -> ogx5lh5hr4 = 0.0 ;
localB -> dycp3mt3z3 [ 0 ] = 0.0 ; localB -> dycp3mt3z3 [ 1 ] = 0.0 ; localB
-> dycp3mt3z3 [ 2 ] = 0.0 ; localB -> dycp3mt3z3 [ 3 ] = 0.0 ; localB ->
hiaxbfam0w [ 0 ] = 0.0 ; localB -> hiaxbfam0w [ 1 ] = 0.0 ; localB ->
hiaxbfam0w [ 2 ] = 0.0 ; localB -> hiaxbfam0w [ 3 ] = 0.0 ; localB ->
ddehjbnx4b = 0.0 ; localB -> jw0eii0b1p [ 0 ] = 0.0 ; localB -> jw0eii0b1p [
1 ] = 0.0 ; localB -> jw0eii0b1p [ 2 ] = 0.0 ; localB -> jw0eii0b1p [ 3 ] =
0.0 ; localB -> l1cguzheni = 0.0 ; localB -> d35fz3l5re = 0.0 ; localB ->
ai5ttmjbcf = 0.0 ; localB -> mcmq1xxqdb = 0.0 ; localB -> ctmtdicsz3 = 0.0 ;
localB -> ngn4sopsrz = 0.0 ; localB -> gvz4ycnxix = 0.0 ; localB ->
pldqi3izwq = 0.0 ; localB -> oax1hn5ti2 = 0.0 ; localB -> jdyv4q3xm2 = 0.0 ;
localB -> eartrnbzob_mbvzarwird = 0.0 ; localB -> kziv2ppkm1 = 0.0 ; } ( void
) memset ( ( void * ) localDW , 0 , sizeof ( ammy3t1awn ) ) ; localDW ->
esgihri23s = 0.0 ; localDW -> cgymtfznvh = 0.0 ; localDW -> aol2pgne35 [ 0 ]
= 0.0 ; localDW -> aol2pgne35 [ 1 ] = 0.0 ; localDW -> mybfclyhka [ 0 ] = 0.0
; localDW -> mybfclyhka [ 1 ] = 0.0 ; localDW -> imu4ipn3nw [ 0 ] = 0.0 ;
localDW -> imu4ipn3nw [ 1 ] = 0.0 ; localDW -> am2ldqdyyx [ 0 ] = 0.0 ;
localDW -> am2ldqdyyx [ 1 ] = 0.0 ; localDW -> dfduxfsclz [ 0 ] = 0.0 ;
localDW -> dfduxfsclz [ 1 ] = 0.0 ; localDW -> cr135euvis [ 0 ] = 0.0 ;
localDW -> cr135euvis [ 1 ] = 0.0 ; localDW -> hinpofzfpa [ 0 ] = 0.0 ;
localDW -> hinpofzfpa [ 1 ] = 0.0 ; localDW -> jqrc2iageq [ 0 ] = 0.0 ;
localDW -> jqrc2iageq [ 1 ] = 0.0 ; localDW -> nhy4fjrvev [ 0 ] = 0.0 ;
localDW -> nhy4fjrvev [ 1 ] = 0.0 ; localDW -> do5uuitab4 [ 0 ] = 0.0 ;
localDW -> do5uuitab4 [ 1 ] = 0.0 ; localDW -> anv3dgii23 = 0.0 ; localDW ->
cgodyj4yxm = 0.0 ; localDW -> gfu5yue0a4 = 0.0 ; localDW -> jjwo3uvfgq = 0.0
; FCElectricPlant_InitializeDataMapInfo ( lmamcwn3a2 , localDW , localX ,
sysRanPtr , contextTid ) ; { lmamcwn3a2 -> massMatrixBasePr = localMM ;
localDW -> kpvq4y4ytj = 15 ; } if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( lmamcwn3a2 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
lmamcwn3a2 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( lmamcwn3a2 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) lmamcwn3a2 -> NonContDerivMemory . mr_nonContSig0 ; lmamcwn3a2 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
lmamcwn3a2 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> l1cguzheni ) ; ; localZCE -> eleagvs5h0 = UNINITIALIZED_ZCSIG ; localZCE
-> nrrnky0p5s = UNINITIALIZED_ZCSIG ; localZCE -> fmvjc00fed =
UNINITIALIZED_ZCSIG ; localZCE -> evkssu2rsd = UNINITIALIZED_ZCSIG ; localZCE
-> psv0ua1aol = UNINITIALIZED_ZCSIG ; localZCE -> ia3srrk1pb =
UNINITIALIZED_ZCSIG ; localZCE -> libeg1hv4e = UNINITIALIZED_ZCSIG ; localZCE
-> boupjdbcg3 = UNINITIALIZED_ZCSIG ; localZCE -> hrqohyz4mf =
UNINITIALIZED_ZCSIG ; localZCE -> hkraytumrs = UNINITIALIZED_ZCSIG ; localZCE
-> nl3o0xdpnk = UNINITIALIZED_ZCSIG ; localZCE -> ao2jzjggzq =
UNINITIALIZED_ZCSIG ; localZCE -> nm4jcpzxfu = UNINITIALIZED_ZCSIG ; localZCE
-> nhbu3okczd = UNINITIALIZED_ZCSIG ; localZCE -> c1e4qud3wq =
UNINITIALIZED_ZCSIG ; localZCE -> i521nz10nf = UNINITIALIZED_ZCSIG ; localZCE
-> pridysklhu = UNINITIALIZED_ZCSIG ; localZCE -> a1xkhd51th =
UNINITIALIZED_ZCSIG ; localZCE -> jf1ziybtf1 = UNINITIALIZED_ZCSIG ; localZCE
-> orw35egs4i = UNINITIALIZED_ZCSIG ; localZCE -> bv1jwv5syk =
UNINITIALIZED_ZCSIG ; localZCE -> mghjrg0aln = UNINITIALIZED_ZCSIG ; localZCE
-> fe03h5kqb3 = UNINITIALIZED_ZCSIG ; localZCE -> iuewezrumv =
UNINITIALIZED_ZCSIG ; localZCE -> lyabunf1ly = UNINITIALIZED_ZCSIG ; localZCE
-> n1lebq4iut = UNINITIALIZED_ZCSIG ; localZCE -> ibhttt5pr5 =
UNINITIALIZED_ZCSIG ; localZCE -> jvs2etvt2f = UNINITIALIZED_ZCSIG ; localZCE
-> paal0ddbkt = UNINITIALIZED_ZCSIG ; localZCE -> lka2wam4ya =
UNINITIALIZED_ZCSIG ; localZCE -> ckize1fh5d = UNINITIALIZED_ZCSIG ; localZCE
-> ccjjcl2cic = UNINITIALIZED_ZCSIG ; localZCE -> bh2t3bnkv2 =
UNINITIALIZED_ZCSIG ; localZCE -> jei1qbf04w = UNINITIALIZED_ZCSIG ; localZCE
-> iqqphkbxt1 = UNINITIALIZED_ZCSIG ; localZCE -> h1fv2mtzaf =
UNINITIALIZED_ZCSIG ; localZCE -> h21lreddzp = UNINITIALIZED_ZCSIG ; localZCE
-> mv4vhxmmbi = UNINITIALIZED_ZCSIG ; localZCE -> d3xb2myqos =
UNINITIALIZED_ZCSIG ; localZCE -> l2ohkzey3y = UNINITIALIZED_ZCSIG ; localZCE
-> mleg1hqyhf = UNINITIALIZED_ZCSIG ; localZCE -> kb5qrymeri =
UNINITIALIZED_ZCSIG ; localZCE -> i32rmv2hdb = UNINITIALIZED_ZCSIG ; localZCE
-> jkbnhs53wj = UNINITIALIZED_ZCSIG ; localZCE -> kaj0jlcpwl =
UNINITIALIZED_ZCSIG ; localZCE -> hpu401yzae = UNINITIALIZED_ZCSIG ; localZCE
-> msadgkay1b = UNINITIALIZED_ZCSIG ; localZCE -> nfmai42mqs =
UNINITIALIZED_ZCSIG ; localZCE -> kuciczc4gz = UNINITIALIZED_ZCSIG ; localZCE
-> hevzrsu12b = UNINITIALIZED_ZCSIG ; localZCE -> ncl0j1mino =
UNINITIALIZED_ZCSIG ; localZCE -> avocovtrxq = UNINITIALIZED_ZCSIG ; localZCE
-> f5jnvw3udr = UNINITIALIZED_ZCSIG ; localZCE -> akjjj4e4dw =
UNINITIALIZED_ZCSIG ; localZCE -> fx21ausayu = UNINITIALIZED_ZCSIG ; localZCE
-> psvpfmemoz = UNINITIALIZED_ZCSIG ; localZCE -> mdwxxjb3eb =
UNINITIALIZED_ZCSIG ; localZCE -> ayss0mba4m = UNINITIALIZED_ZCSIG ; localZCE
-> o41thu0335 = UNINITIALIZED_ZCSIG ; localZCE -> mesceqptjr =
UNINITIALIZED_ZCSIG ; localZCE -> i43qbihegi = UNINITIALIZED_ZCSIG ; localZCE
-> flnhylpk1g = UNINITIALIZED_ZCSIG ; localZCE -> gem3aodse2 =
UNINITIALIZED_ZCSIG ; localZCE -> f3j5qzdab4 = UNINITIALIZED_ZCSIG ; localZCE
-> fno2wglk1k = UNINITIALIZED_ZCSIG ; localZCE -> hdv2igxx3f =
UNINITIALIZED_ZCSIG ; localZCE -> ocijqaj22d = UNINITIALIZED_ZCSIG ; localZCE
-> kge20e2pmg = UNINITIALIZED_ZCSIG ; localZCE -> jo0cv35e5s =
UNINITIALIZED_ZCSIG ; localZCE -> jnhsuj3yu1 = UNINITIALIZED_ZCSIG ; localZCE
-> co1fkkdgg3 = UNINITIALIZED_ZCSIG ; localZCE -> gwgnnl12rx =
UNINITIALIZED_ZCSIG ; localZCE -> mutd1h5t0c = UNINITIALIZED_ZCSIG ; localZCE
-> kmdrkbwhqa = UNINITIALIZED_ZCSIG ; localZCE -> eqtapepeps =
UNINITIALIZED_ZCSIG ; localZCE -> dsaeyha1t1 = UNINITIALIZED_ZCSIG ; localZCE
-> aejl3gvgbx = UNINITIALIZED_ZCSIG ; localZCE -> dmegszdizx =
UNINITIALIZED_ZCSIG ; localZCE -> i544aferpx = UNINITIALIZED_ZCSIG ; localZCE
-> cipddz4yid = UNINITIALIZED_ZCSIG ; localZCE -> jm3lmbgx2a =
UNINITIALIZED_ZCSIG ; localZCE -> hy4e4ghkul = UNINITIALIZED_ZCSIG ; localZCE
-> auez45pm4v = UNINITIALIZED_ZCSIG ; localZCE -> oiv5ahvrho =
UNINITIALIZED_ZCSIG ; localZCE -> hsu2lutkpr = UNINITIALIZED_ZCSIG ; localZCE
-> nbskacgqbe = UNINITIALIZED_ZCSIG ; localZCE -> lj51bmfx0k =
UNINITIALIZED_ZCSIG ; localZCE -> m3xfiqwjcz = UNINITIALIZED_ZCSIG ; localZCE
-> l13ttzjubc = UNINITIALIZED_ZCSIG ; localZCE -> bf3smj5drg =
UNINITIALIZED_ZCSIG ; localZCE -> ar5wki4shq = UNINITIALIZED_ZCSIG ; localZCE
-> p5x4sv3nz3 = UNINITIALIZED_ZCSIG ; localZCE -> njudff11vp =
UNINITIALIZED_ZCSIG ; localZCE -> okg1cf4gcf = UNINITIALIZED_ZCSIG ; localZCE
-> cjv2iqli3k = UNINITIALIZED_ZCSIG ; localZCE -> el1qycvoj3 =
UNINITIALIZED_ZCSIG ; localZCE -> cytrwgbpvc = UNINITIALIZED_ZCSIG ; localZCE
-> env0rt4xog = UNINITIALIZED_ZCSIG ; localZCE -> hhjehxgbsd =
UNINITIALIZED_ZCSIG ; localZCE -> loeerk30id = UNINITIALIZED_ZCSIG ; localZCE
-> aogvu3xvhf = UNINITIALIZED_ZCSIG ; localZCE -> gxlma5yj10 =
UNINITIALIZED_ZCSIG ; localZCE -> g2vcql1xwb = UNINITIALIZED_ZCSIG ; localZCE
-> fsvjeqjdtu = UNINITIALIZED_ZCSIG ; localZCE -> ml5injlomp =
UNINITIALIZED_ZCSIG ; localZCE -> bzj5240qzn = UNINITIALIZED_ZCSIG ; localZCE
-> pa4s3rrmbh = UNINITIALIZED_ZCSIG ; localZCE -> hxdz40tgbg =
UNINITIALIZED_ZCSIG ; localZCE -> f02mexxeo4 = UNINITIALIZED_ZCSIG ; localZCE
-> hzb4b21guc = UNINITIALIZED_ZCSIG ; localZCE -> f3g2b10kt2 =
UNINITIALIZED_ZCSIG ; localZCE -> k20quwqpfj = UNINITIALIZED_ZCSIG ; localZCE
-> ctcgeyvbru = UNINITIALIZED_ZCSIG ; localZCE -> ptoymth24g =
UNINITIALIZED_ZCSIG ; localZCE -> h34ssvin1x = UNINITIALIZED_ZCSIG ; localZCE
-> aa5e54jjrr = UNINITIALIZED_ZCSIG ; localZCE -> kw3ehsv0rf =
UNINITIALIZED_ZCSIG ; localZCE -> jw1xes13nj = UNINITIALIZED_ZCSIG ; localZCE
-> ljpgvxzmsp = UNINITIALIZED_ZCSIG ; localZCE -> bokyjjvn25 =
UNINITIALIZED_ZCSIG ; localZCE -> dndxr3opog = UNINITIALIZED_ZCSIG ; localZCE
-> fwmngp2bsz = UNINITIALIZED_ZCSIG ; localZCE -> lyxbcjiw32 =
UNINITIALIZED_ZCSIG ; localZCE -> etw3kq2zrr = UNINITIALIZED_ZCSIG ; localZCE
-> awaddmvl14 = UNINITIALIZED_ZCSIG ; localZCE -> ppwkywvznn =
UNINITIALIZED_ZCSIG ; localZCE -> o10ryzn5g5 = UNINITIALIZED_ZCSIG ; localZCE
-> owrowdi2sk = UNINITIALIZED_ZCSIG ; localZCE -> ijbhvm0wfg =
UNINITIALIZED_ZCSIG ; localZCE -> pqj2xdsf4c = UNINITIALIZED_ZCSIG ; localZCE
-> mmmru1uovh = UNINITIALIZED_ZCSIG ; localZCE -> dz3j3mk13o =
UNINITIALIZED_ZCSIG ; localZCE -> n4bifpgjtf = UNINITIALIZED_ZCSIG ; localZCE
-> muqjlrx1l5 = UNINITIALIZED_ZCSIG ; localZCE -> elhwojcujw =
UNINITIALIZED_ZCSIG ; localZCE -> juxd1uenuo = UNINITIALIZED_ZCSIG ; localZCE
-> d0bsmlxx3s = UNINITIALIZED_ZCSIG ; localZCE -> dncq0r4cln =
UNINITIALIZED_ZCSIG ; localZCE -> fl5valihsh = UNINITIALIZED_ZCSIG ; localZCE
-> hog2ldhfuz = UNINITIALIZED_ZCSIG ; localZCE -> ae4lenlkkm =
UNINITIALIZED_ZCSIG ; localZCE -> opn5p0sqgc = UNINITIALIZED_ZCSIG ; localZCE
-> m3cpcm5uue = UNINITIALIZED_ZCSIG ; localZCE -> d0q1ng0k2o =
UNINITIALIZED_ZCSIG ; localZCE -> hdqitan1eg = UNINITIALIZED_ZCSIG ; localZCE
-> hvfq5bcuwa = UNINITIALIZED_ZCSIG ; localZCE -> fgw0qxbesi =
UNINITIALIZED_ZCSIG ; localZCE -> fht1fuqo0m = UNINITIALIZED_ZCSIG ; localZCE
-> fkivmermxj = UNINITIALIZED_ZCSIG ; localZCE -> o2w3icajkp =
UNINITIALIZED_ZCSIG ; localZCE -> iya3izxhzy = UNINITIALIZED_ZCSIG ; localZCE
-> on4x5u4cau = UNINITIALIZED_ZCSIG ; localZCE -> cxzwdmrck3 =
UNINITIALIZED_ZCSIG ; localZCE -> m5zcq1xrxo = UNINITIALIZED_ZCSIG ; localZCE
-> pkw433i0bf = UNINITIALIZED_ZCSIG ; localZCE -> am5rs2fvcn =
UNINITIALIZED_ZCSIG ; localZCE -> eguuezqhyp = UNINITIALIZED_ZCSIG ; localZCE
-> av0cda25ll = UNINITIALIZED_ZCSIG ; localZCE -> o3c0cz0hss =
UNINITIALIZED_ZCSIG ; localZCE -> hmefpbfyta = UNINITIALIZED_ZCSIG ; localZCE
-> dofl3qidxe = UNINITIALIZED_ZCSIG ; localZCE -> ihmzhbujvb =
UNINITIALIZED_ZCSIG ; localZCE -> ikscgjkhby = UNINITIALIZED_ZCSIG ; localZCE
-> gsv4gt0o5s = UNINITIALIZED_ZCSIG ; localZCE -> ag23a22sn5 =
UNINITIALIZED_ZCSIG ; localZCE -> budcknuw0y = UNINITIALIZED_ZCSIG ; localZCE
-> gjd230dw1s = UNINITIALIZED_ZCSIG ; localZCE -> gf4equhxhz =
UNINITIALIZED_ZCSIG ; localZCE -> g1bbbc43an = UNINITIALIZED_ZCSIG ; localZCE
-> fzjvcccsfy = UNINITIALIZED_ZCSIG ; localZCE -> i4fvamdqzp =
UNINITIALIZED_ZCSIG ; localZCE -> d1ybiygd0a = UNINITIALIZED_ZCSIG ; localZCE
-> cthsuosoqc = UNINITIALIZED_ZCSIG ; localZCE -> alz04moxyg =
UNINITIALIZED_ZCSIG ; localZCE -> jtxj1s12gt = UNINITIALIZED_ZCSIG ; localZCE
-> kvui0yyxrv = UNINITIALIZED_ZCSIG ; localZCE -> axz3en5pe0 =
UNINITIALIZED_ZCSIG ; localZCE -> mniplgwpgf = UNINITIALIZED_ZCSIG ; localZCE
-> hil3glumm2 = UNINITIALIZED_ZCSIG ; localZCE -> a0medo0mjy =
UNINITIALIZED_ZCSIG ; localZCE -> hguodon40t = UNINITIALIZED_ZCSIG ; localZCE
-> eko51t3jl5 = UNINITIALIZED_ZCSIG ; localZCE -> dgshmsiotz =
UNINITIALIZED_ZCSIG ; localZCE -> oel0mfqeyh = UNINITIALIZED_ZCSIG ; localZCE
-> gak4sjukmq = UNINITIALIZED_ZCSIG ; localZCE -> ij52uncflz =
UNINITIALIZED_ZCSIG ; localZCE -> omp4rhhopd = UNINITIALIZED_ZCSIG ; localZCE
-> l3l20maxir = UNINITIALIZED_ZCSIG ; localZCE -> fyjoayqwmu =
UNINITIALIZED_ZCSIG ; localZCE -> hluc4eyfwu = UNINITIALIZED_ZCSIG ; localZCE
-> mcvesezbmu = UNINITIALIZED_ZCSIG ; localZCE -> p1o1lprwf5 =
UNINITIALIZED_ZCSIG ; localZCE -> md5a3picax = UNINITIALIZED_ZCSIG ; localZCE
-> clgjf3wmls = UNINITIALIZED_ZCSIG ; localZCE -> i1socmabp1 =
UNINITIALIZED_ZCSIG ; localZCE -> akrvfrmz5o = UNINITIALIZED_ZCSIG ; localZCE
-> kczu34z4xs = UNINITIALIZED_ZCSIG ; localZCE -> gtbe5f2u2e =
UNINITIALIZED_ZCSIG ; localZCE -> cbqxkq1tyv = UNINITIALIZED_ZCSIG ; localZCE
-> nnyfz0clve = UNINITIALIZED_ZCSIG ; localZCE -> ivieb3etn0 =
UNINITIALIZED_ZCSIG ; localZCE -> ewej5w0hb1 = UNINITIALIZED_ZCSIG ; localZCE
-> bwavrbejm5 = UNINITIALIZED_ZCSIG ; localZCE -> g1vcgly2m2 =
UNINITIALIZED_ZCSIG ; localZCE -> hrhxd3trlz = UNINITIALIZED_ZCSIG ; localZCE
-> l2onhgg5ho = UNINITIALIZED_ZCSIG ; localZCE -> pgvwok2t04 =
UNINITIALIZED_ZCSIG ; localZCE -> obz3xcazrt = UNINITIALIZED_ZCSIG ; localZCE
-> ca4z4kzqb2 = UNINITIALIZED_ZCSIG ; localZCE -> dpgzcycmgu =
UNINITIALIZED_ZCSIG ; localZCE -> pb4mhcip4i = UNINITIALIZED_ZCSIG ; localZCE
-> h0tcddsie0 = UNINITIALIZED_ZCSIG ; localZCE -> ehupfweni1 =
UNINITIALIZED_ZCSIG ; localZCE -> b33facdz5o = UNINITIALIZED_ZCSIG ; localZCE
-> ecfujaq5op = UNINITIALIZED_ZCSIG ; localZCE -> pmtybztt2g =
UNINITIALIZED_ZCSIG ; localZCE -> jyb2ydmtjt = UNINITIALIZED_ZCSIG ; localZCE
-> bfvv3rnvfj = UNINITIALIZED_ZCSIG ; localZCE -> kaiv0wynnk =
UNINITIALIZED_ZCSIG ; localZCE -> m3mm324jly = UNINITIALIZED_ZCSIG ; localZCE
-> ceibz5evj2 = UNINITIALIZED_ZCSIG ; localZCE -> janxlgdt1e =
UNINITIALIZED_ZCSIG ; localZCE -> aiuyfkf4e0 = UNINITIALIZED_ZCSIG ; localZCE
-> is1zmppzbj = UNINITIALIZED_ZCSIG ; localZCE -> gc4eq24yu2 =
UNINITIALIZED_ZCSIG ; localZCE -> fd4k34d211 = UNINITIALIZED_ZCSIG ; localZCE
-> hythp0bxb1 = UNINITIALIZED_ZCSIG ; localZCE -> me0bzaayhw =
UNINITIALIZED_ZCSIG ; localZCE -> hkaan014hs = UNINITIALIZED_ZCSIG ; localZCE
-> gq5wxdkgfw = UNINITIALIZED_ZCSIG ; localZCE -> ectjarfsgx =
UNINITIALIZED_ZCSIG ; localZCE -> gxjb2tmiva = UNINITIALIZED_ZCSIG ; localZCE
-> kxn4wfo55l = UNINITIALIZED_ZCSIG ; localZCE -> ax0fkgjprq =
UNINITIALIZED_ZCSIG ; localZCE -> n20kbpcazg = UNINITIALIZED_ZCSIG ; localZCE
-> dilw5fjhxz = UNINITIALIZED_ZCSIG ; } void mr_FCElectricPlant_MdlInfoRegFcn
( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal
= 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_FCElectricPlant , 56 ) ; * retVal = 1 ; } static void
mr_FCElectricPlant_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_FCElectricPlant_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_FCElectricPlant_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_FCElectricPlant_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_FCElectricPlant_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_FCElectricPlant_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_FCElectricPlant_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_FCElectricPlant_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_FCElectricPlant_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_FCElectricPlant_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_FCElectricPlant_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_FCElectricPlant_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_FCElectricPlant_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_FCElectricPlant_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_FCElectricPlant_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_FCElectricPlant_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_FCElectricPlant_GetDWork ( const
g5h05g3u4wx * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_FCElectricPlant_cacheDataAsMxArray ( ssDW , 0 , 0
, ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; {
static const char_T * rtdwDataFieldNames [ 25 ] = {
"mdlrefDW->rtdw.esgihri23s" , "mdlrefDW->rtdw.cgymtfznvh" ,
"mdlrefDW->rtdw.aol2pgne35" , "mdlrefDW->rtdw.mybfclyhka" ,
"mdlrefDW->rtdw.imu4ipn3nw" , "mdlrefDW->rtdw.am2ldqdyyx" ,
"mdlrefDW->rtdw.dfduxfsclz" , "mdlrefDW->rtdw.cr135euvis" ,
"mdlrefDW->rtdw.hinpofzfpa" , "mdlrefDW->rtdw.jqrc2iageq" ,
"mdlrefDW->rtdw.nhy4fjrvev" , "mdlrefDW->rtdw.do5uuitab4" ,
"mdlrefDW->rtdw.anv3dgii23" , "mdlrefDW->rtdw.cgodyj4yxm" ,
"mdlrefDW->rtdw.gfu5yue0a4" , "mdlrefDW->rtdw.jjwo3uvfgq" ,
"mdlrefDW->rtdw.ie3nwfalvy" , "mdlrefDW->rtdw.ei0dla2ntt" ,
"mdlrefDW->rtdw.dpbhdgg3j4" , "mdlrefDW->rtdw.gl2catqxix" ,
"mdlrefDW->rtdw.itcp3adbb2" , "mdlrefDW->rtdw.kzlwmf4i5c" ,
"mdlrefDW->rtdw.kpvq4y4ytj" , "mdlrefDW->rtdw.f321hccueh" ,
"mdlrefDW->rtdw.ocb0wghbme" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 25 , rtdwDataFieldNames ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . esgihri23s ) ,
sizeof ( mdlrefDW -> rtdw . esgihri23s ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . cgymtfznvh ) , sizeof ( mdlrefDW -> rtdw . cgymtfznvh )
) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( mdlrefDW -> rtdw . aol2pgne35 ) , sizeof ( mdlrefDW -> rtdw .
aol2pgne35 ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 3 , (
const void * ) & ( mdlrefDW -> rtdw . mybfclyhka ) , sizeof ( mdlrefDW ->
rtdw . mybfclyhka ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 4 , ( const void * ) & ( mdlrefDW -> rtdw . imu4ipn3nw ) , sizeof (
mdlrefDW -> rtdw . imu4ipn3nw ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . am2ldqdyyx ) ,
sizeof ( mdlrefDW -> rtdw . am2ldqdyyx ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) &
( mdlrefDW -> rtdw . dfduxfsclz ) , sizeof ( mdlrefDW -> rtdw . dfduxfsclz )
) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( mdlrefDW -> rtdw . cr135euvis ) , sizeof ( mdlrefDW -> rtdw .
cr135euvis ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( mdlrefDW -> rtdw . hinpofzfpa ) , sizeof ( mdlrefDW ->
rtdw . hinpofzfpa ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 9 , ( const void * ) & ( mdlrefDW -> rtdw . jqrc2iageq ) , sizeof (
mdlrefDW -> rtdw . jqrc2iageq ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( mdlrefDW -> rtdw . nhy4fjrvev ) ,
sizeof ( mdlrefDW -> rtdw . nhy4fjrvev ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( mdlrefDW -> rtdw . do5uuitab4 ) , sizeof ( mdlrefDW -> rtdw . do5uuitab4
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( mdlrefDW -> rtdw . anv3dgii23 ) , sizeof ( mdlrefDW -> rtdw .
anv3dgii23 ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 13 ,
( const void * ) & ( mdlrefDW -> rtdw . cgodyj4yxm ) , sizeof ( mdlrefDW ->
rtdw . cgodyj4yxm ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 14 , ( const void * ) & ( mdlrefDW -> rtdw . gfu5yue0a4 ) , sizeof (
mdlrefDW -> rtdw . gfu5yue0a4 ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . jjwo3uvfgq ) ,
sizeof ( mdlrefDW -> rtdw . jjwo3uvfgq ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( mdlrefDW -> rtdw . ie3nwfalvy ) , sizeof ( mdlrefDW -> rtdw . ie3nwfalvy
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( mdlrefDW -> rtdw . ei0dla2ntt ) , sizeof ( mdlrefDW -> rtdw .
ei0dla2ntt ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 18 ,
( const void * ) & ( mdlrefDW -> rtdw . dpbhdgg3j4 ) , sizeof ( mdlrefDW ->
rtdw . dpbhdgg3j4 ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 19 , ( const void * ) & ( mdlrefDW -> rtdw . gl2catqxix ) , sizeof (
mdlrefDW -> rtdw . gl2catqxix ) ) ; mr_FCElectricPlant_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( mdlrefDW -> rtdw . itcp3adbb2 ) ,
sizeof ( mdlrefDW -> rtdw . itcp3adbb2 ) ) ;
mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( mdlrefDW -> rtdw . kzlwmf4i5c ) , sizeof ( mdlrefDW -> rtdw . kzlwmf4i5c
) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( mdlrefDW -> rtdw . kpvq4y4ytj ) , sizeof ( mdlrefDW -> rtdw .
kpvq4y4ytj ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0 , 23 ,
( const void * ) & ( mdlrefDW -> rtdw . f321hccueh ) , sizeof ( mdlrefDW ->
rtdw . f321hccueh ) ) ; mr_FCElectricPlant_cacheDataAsMxArray ( rtdwData , 0
, 24 , ( const void * ) & ( mdlrefDW -> rtdw . ocb0wghbme ) , sizeof (
mdlrefDW -> rtdw . ocb0wghbme ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } mr_FCElectricPlant_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void )
mdlrefDW ; return ssDW ; } void mr_FCElectricPlant_SetDWork ( g5h05g3u4wx *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
esgihri23s ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . esgihri23s ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. cgymtfznvh ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . cgymtfznvh )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . aol2pgne35 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
aol2pgne35 ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mybfclyhka ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . mybfclyhka ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . imu4ipn3nw ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW
-> rtdw . imu4ipn3nw ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . am2ldqdyyx ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . am2ldqdyyx ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . dfduxfsclz ) , rtdwData , 0 , 6 , sizeof
( mdlrefDW -> rtdw . dfduxfsclz ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
cr135euvis ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . cr135euvis ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. hinpofzfpa ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . hinpofzfpa )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . jqrc2iageq ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw .
jqrc2iageq ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nhy4fjrvev ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW ->
rtdw . nhy4fjrvev ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . do5uuitab4 ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW
-> rtdw . do5uuitab4 ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . anv3dgii23 ) , rtdwData , 0 , 12 , sizeof (
mdlrefDW -> rtdw . anv3dgii23 ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . cgodyj4yxm ) , rtdwData , 0 , 13 , sizeof
( mdlrefDW -> rtdw . cgodyj4yxm ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
gfu5yue0a4 ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . gfu5yue0a4 ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. jjwo3uvfgq ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . jjwo3uvfgq )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . ie3nwfalvy ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw .
ie3nwfalvy ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ei0dla2ntt ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW ->
rtdw . ei0dla2ntt ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . dpbhdgg3j4 ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW
-> rtdw . dpbhdgg3j4 ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . gl2catqxix ) , rtdwData , 0 , 19 , sizeof (
mdlrefDW -> rtdw . gl2catqxix ) ) ; mr_FCElectricPlant_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . itcp3adbb2 ) , rtdwData , 0 , 20 , sizeof
( mdlrefDW -> rtdw . itcp3adbb2 ) ) ;
mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kzlwmf4i5c ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . kzlwmf4i5c ) )
; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. kpvq4y4ytj ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . kpvq4y4ytj )
) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . f321hccueh ) , rtdwData , 0 , 23 , sizeof ( mdlrefDW -> rtdw .
f321hccueh ) ) ; mr_FCElectricPlant_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . ocb0wghbme ) , rtdwData , 0 , 24 , sizeof ( mdlrefDW ->
rtdw . ocb0wghbme ) ) ; } mr_FCElectricPlant_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce ) ) ;
} void mr_FCElectricPlant_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 3879452898U , 3606357580U , 2032545942U ,
4209238832U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"FCElectricPlant" , & chksum [ 0 ] ) ; } mxArray *
mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 3 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char_T * blockPath [ 3 ] = {
"FCElectricPlant/Solver Configuration1/RTP_1" ,
"FCElectricPlant/Solver Configuration1/EVAL_KEY/STATE_1" ,
"FCElectricPlant/Solver Configuration1/EVAL_KEY/OUTPUT_1_0" , } ; static
const int reason [ 3 ] = { 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ]
< 3 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
