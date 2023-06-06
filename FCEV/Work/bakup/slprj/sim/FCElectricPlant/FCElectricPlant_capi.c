#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "FCElectricPlant_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
#else
#include "builtin_typeid_types.h"
#include "FCElectricPlant.h"
#include "FCElectricPlant_capi.h"
#include "FCElectricPlant_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 1 ,
TARGET_STRING ( "FCElectricPlant/Battery System/Sensor VI/Transfer Fcn5" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 1 , 4 , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Converter Control/Transfer Fcn" ) , TARGET_STRING
( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 2 , 32
, TARGET_STRING (
"FCElectricPlant/Motor/Simulink Interface/Motor Coupling Dynamics1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 3 , 7 , TARGET_STRING (
"FCElectricPlant/Motor/Simulink Interface/Transfer Fcn2" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 4 , - 1 ,
TARGET_STRING ( "FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
5 , - 1 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "FirstOutput" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
6 , 2 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING (
 "FCElectricPlant.Battery_System.Power_Acc.Simulink_PS_Converter.outputFiltered_306178345_0"
) , TARGET_STRING (
"FCElectricPlant/Battery System/Power Acc/Simulink-PS\nConverter" ) , 0 , 0 ,
0 , 0 , 0 , 1 , - 1 , 0 } , { 7 , - 1 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 8 ,
- 1 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 9 ,
- 1 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 10
, - 1 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "FirstOutput" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
11 , 8 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING (
 "FCElectricPlant.Motor.Simulink_Interface.Simulink_PS_Converter4.outputFiltered_3672073817_0"
) , TARGET_STRING (
"FCElectricPlant/Motor/Simulink Interface/Simulink-PS\nConverter4" ) , 0 , 0
, 0 , 0 , 0 , 1 , - 1 , 0 } , { 12 , - 1 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 13
, 9 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.Battery_Table_Based1.charge" ) ,
TARGET_STRING ( "FCElectricPlant/Battery System/Battery (Table-Based)1" ) , 0
, 0 , 2 , 0 , 0 , 1 , - 1 , 0 } , { 14 , 10 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.Battery_Table_Based1.num_cycles" ) ,
TARGET_STRING ( "FCElectricPlant/Battery System/Battery (Table-Based)1" ) , 0
, 0 , 2 , 0 , 0 , 1 , - 1 , 0 } , { 15 , 11 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.DC_DC_Converter.v" ) , TARGET_STRING (
"FCElectricPlant/Battery System/DC-DC Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 ,
- 1 , 0 } , { 16 , 12 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Boost_Converter.C.vc" ) , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Boost Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 ,
0 } , { 17 , 13 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Boost_Converter.L.i_L" ) , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Boost Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 ,
0 } , { 18 , 14 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Fuel_Cell.x2.Capacitor.vc" ) , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Fuel Cell/公式/Capacitor" ) , 0 , 0 , 2 , 0 , 0 ,
1 , - 1 , 0 } , { 19 , 15 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Motor.Motor.w" ) , TARGET_STRING (
"FCElectricPlant/Motor/Motor" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 , 0 } , { 20 ,
16 , TARGET_STRING ( "FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "FCElectricPlant.Motor.Motor.torque_ref" ) ,
TARGET_STRING ( "FCElectricPlant/Motor/Motor" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 21 , 17 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.Battery_Table_Based1.i" ) , TARGET_STRING (
"FCElectricPlant/Battery System/Battery (Table-Based)1" ) , 0 , 0 , 2 , 0 , 0
, 1 , - 1 , 0 } , { 22 , 18 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.Battery_Table_Based1.xVint" ) , TARGET_STRING
( "FCElectricPlant/Battery System/Battery (Table-Based)1" ) , 0 , 0 , 2 , 0 ,
0 , 1 , - 1 , 0 } , { 23 , 19 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.DC_DC_Converter.v1" ) , TARGET_STRING (
"FCElectricPlant/Battery System/DC-DC Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 ,
- 1 , 0 } , { 24 , 20 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.Battery_Table_Based1.xR0" ) , TARGET_STRING (
"FCElectricPlant/Battery System/Battery (Table-Based)1" ) , 0 , 0 , 2 , 0 , 0
, 1 , - 1 , 0 } , { 25 , 21 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.DC_DC_Converter.i2" ) , TARGET_STRING (
"FCElectricPlant/Battery System/DC-DC Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 ,
- 1 , 0 } , { 26 , 22 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.DC_DC_Converter.p2.v" ) , TARGET_STRING (
"FCElectricPlant/Battery System/DC-DC Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 ,
- 1 , 0 } , { 27 , 23 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Battery_System.DC_DC_Converter.power_loss_used" ) ,
TARGET_STRING ( "FCElectricPlant/Battery System/DC-DC Converter" ) , 0 , 0 ,
2 , 0 , 0 , 1 , - 1 , 0 } , { 28 , 24 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Boost_Converter.Dn.v" ) , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Boost Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 ,
0 } , { 29 , 25 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Boost_Converter.L.v" ) , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Boost Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 ,
0 } , { 30 , 26 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.i" ) ,
TARGET_STRING (
"FCElectricPlant/Fuel Cell/Fuel Cell/公式/Controlled Voltage Source1" ) , 0 ,
0 , 2 , 0 , 0 , 1 , - 1 , 0 } , { 31 , 27 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Fuel_Cell.Boost_Converter.i2" ) , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Boost Converter" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 ,
0 } , { 32 , 28 , TARGET_STRING (
"FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"FCElectricPlant.Motor.Motor.torque_elec" ) , TARGET_STRING (
"FCElectricPlant/Motor/Motor" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 , 0 } , { 33 ,
29 , TARGET_STRING ( "FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "FCElectricPlant.Motor.Motor.t" ) , TARGET_STRING (
"FCElectricPlant/Motor/Motor" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 , 0 } , { 34 ,
30 , TARGET_STRING ( "FCElectricPlant/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "FCElectricPlant.Motor.Motor.torqueLimit" ) ,
TARGET_STRING ( "FCElectricPlant/Motor/Motor" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 35 , 33 , TARGET_STRING (
 "FCElectricPlant/Battery System/Sensor VI1/Transfer Fcn\n(with initial outputs)/State Space"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 36 , 3 , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Fuel Cell/公式/Sensor_Delay" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 37 , 31 ,
TARGET_STRING ( "FCElectricPlant/Fuel Cell/Fuel Cell/公式/Sensor_Delay1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 38 , 0 , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Fuel Cell/公式/Sensor_Delay2" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 39 , 34 ,
TARGET_STRING ( "FCElectricPlant/Fuel Cell/Fuel Cell/公式/Sensor_Delay3" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 40 , 37 , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Fuel Cell/公式/System_Delay" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 41 , 35 ,
TARGET_STRING ( "FCElectricPlant/Fuel Cell/Fuel Cell/公式/System_Delay2" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 42 , 36 , TARGET_STRING (
"FCElectricPlant/Fuel Cell/Fuel Cell/公式/System_Delay3" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 43 , 6 ,
TARGET_STRING (
 "FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 44 , 5 , TARGET_STRING (
 "FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 1 , 4 , 11 , 7 , 0 ,
1 , 2 , 2 , 3 , 5 , 6 , 8 , 4 , 9 , 12 , 3 , 10 , 0 , 13 , 16 , 14 , 15 , 6 ,
5 } ;
#ifndef HOST_CAPI_BUILD
static void FCElectricPlant_InitializeDataAddr ( void * dataAddr [ ] ,
ammy3t1awn * localDW , fw3fcrujzt * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> ggydzdzl02 ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
czf51nn3to ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> hehcfcd5qe ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> fpiq4t01ji ) ; dataAddr [ 4 ] = (
void * ) ( & localDW -> kj5rz3xfjm ) ; dataAddr [ 5 ] = ( void * ) ( &
localDW -> edy5j03fnw ) ; dataAddr [ 6 ] = ( void * ) ( & localX ->
c0wdcmzq0f ) ; dataAddr [ 7 ] = ( void * ) ( & localDW -> b2ulb3kawc [ 0 ] )
; dataAddr [ 8 ] = ( void * ) ( & localDW -> lt1bov1sav [ 0 ] ) ; dataAddr [
9 ] = ( void * ) ( & localDW -> izk0xvw1xd ) ; dataAddr [ 10 ] = ( void * ) (
& localDW -> frobztw51j ) ; dataAddr [ 11 ] = ( void * ) ( & localX ->
bw1z2apabl ) ; dataAddr [ 12 ] = ( void * ) ( & localDW -> jshnxgkzwr [ 0 ] )
; dataAddr [ 13 ] = ( void * ) ( & localX -> hobiusbml3 [ 0 ] ) ; dataAddr [
14 ] = ( void * ) ( & localX -> hobiusbml3 [ 1 ] ) ; dataAddr [ 15 ] = ( void
* ) ( & localX -> hobiusbml3 [ 2 ] ) ; dataAddr [ 16 ] = ( void * ) ( &
localX -> hobiusbml3 [ 3 ] ) ; dataAddr [ 17 ] = ( void * ) ( & localX ->
hobiusbml3 [ 4 ] ) ; dataAddr [ 18 ] = ( void * ) ( & localX -> hobiusbml3 [
5 ] ) ; dataAddr [ 19 ] = ( void * ) ( & localX -> hobiusbml3 [ 6 ] ) ;
dataAddr [ 20 ] = ( void * ) ( & localX -> hobiusbml3 [ 7 ] ) ; dataAddr [ 21
] = ( void * ) ( & localX -> hobiusbml3 [ 8 ] ) ; dataAddr [ 22 ] = ( void *
) ( & localX -> hobiusbml3 [ 9 ] ) ; dataAddr [ 23 ] = ( void * ) ( & localX
-> hobiusbml3 [ 10 ] ) ; dataAddr [ 24 ] = ( void * ) ( & localX ->
hobiusbml3 [ 11 ] ) ; dataAddr [ 25 ] = ( void * ) ( & localX -> hobiusbml3 [
12 ] ) ; dataAddr [ 26 ] = ( void * ) ( & localX -> hobiusbml3 [ 13 ] ) ;
dataAddr [ 27 ] = ( void * ) ( & localX -> hobiusbml3 [ 14 ] ) ; dataAddr [
28 ] = ( void * ) ( & localX -> hobiusbml3 [ 15 ] ) ; dataAddr [ 29 ] = (
void * ) ( & localX -> hobiusbml3 [ 16 ] ) ; dataAddr [ 30 ] = ( void * ) ( &
localX -> hobiusbml3 [ 17 ] ) ; dataAddr [ 31 ] = ( void * ) ( & localX ->
hobiusbml3 [ 18 ] ) ; dataAddr [ 32 ] = ( void * ) ( & localX -> hobiusbml3 [
19 ] ) ; dataAddr [ 33 ] = ( void * ) ( & localX -> hobiusbml3 [ 20 ] ) ;
dataAddr [ 34 ] = ( void * ) ( & localX -> hobiusbml3 [ 21 ] ) ; dataAddr [
35 ] = ( void * ) ( & localX -> hrtmiik4pa ) ; dataAddr [ 36 ] = ( void * ) (
& localX -> cubrnq01gj ) ; dataAddr [ 37 ] = ( void * ) ( & localX ->
auhpbuhjo1 ) ; dataAddr [ 38 ] = ( void * ) ( & localX -> firselc23g ) ;
dataAddr [ 39 ] = ( void * ) ( & localX -> movu3laimu ) ; dataAddr [ 40 ] = (
void * ) ( & localX -> czexk0o1qx ) ; dataAddr [ 41 ] = ( void * ) ( & localX
-> msh41qf5ar ) ; dataAddr [ 42 ] = ( void * ) ( & localX -> krft1240nt ) ;
dataAddr [ 43 ] = ( void * ) ( & localX -> ghzzlnog0w ) ; dataAddr [ 44 ] = (
void * ) ( & localX -> abtw1mwj2p ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void FCElectricPlant_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void FCElectricPlant_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; loggingPtrs [
16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ; loggingPtrs [ 18 ] = ( NULL
) ; loggingPtrs [ 19 ] = ( NULL ) ; loggingPtrs [ 20 ] = ( NULL ) ;
loggingPtrs [ 21 ] = ( NULL ) ; loggingPtrs [ 22 ] = ( NULL ) ; loggingPtrs [
23 ] = ( NULL ) ; loggingPtrs [ 24 ] = ( NULL ) ; loggingPtrs [ 25 ] = ( NULL
) ; loggingPtrs [ 26 ] = ( NULL ) ; loggingPtrs [ 27 ] = ( NULL ) ;
loggingPtrs [ 28 ] = ( NULL ) ; loggingPtrs [ 29 ] = ( NULL ) ; loggingPtrs [
30 ] = ( NULL ) ; loggingPtrs [ 31 ] = ( NULL ) ; loggingPtrs [ 32 ] = ( NULL
) ; loggingPtrs [ 33 ] = ( NULL ) ; loggingPtrs [ 34 ] = ( NULL ) ;
loggingPtrs [ 35 ] = ( NULL ) ; loggingPtrs [ 36 ] = ( NULL ) ; loggingPtrs [
37 ] = ( NULL ) ; loggingPtrs [ 38 ] = ( NULL ) ; loggingPtrs [ 39 ] = ( NULL
) ; loggingPtrs [ 40 ] = ( NULL ) ; loggingPtrs [ 41 ] = ( NULL ) ;
loggingPtrs [ 42 ] = ( NULL ) ; loggingPtrs [ 43 ] = ( NULL ) ; loggingPtrs [
44 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
, 2 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 45 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1576470564U , 1629414008U , 867361625U , 106010976U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * FCElectricPlant_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void FCElectricPlant_InitializeSystemRan ( m5e23pbc2h * const
lmamcwn3a2 , sysRanDType * systemRan [ ] , ammy3t1awn * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
lmamcwn3a2 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = lmamcwn3a2
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void FCElectricPlant_InitializeDataMapInfo ( m5e23pbc2h * const lmamcwn3a2 ,
ammy3t1awn * localDW , fw3fcrujzt * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( lmamcwn3a2 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( lmamcwn3a2 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( lmamcwn3a2 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; FCElectricPlant_InitializeDataAddr ( lmamcwn3a2 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
lmamcwn3a2 -> DataMapInfo . mmi , lmamcwn3a2 -> DataMapInfo . dataAddress ) ;
FCElectricPlant_InitializeVarDimsAddr ( lmamcwn3a2 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( lmamcwn3a2 -> DataMapInfo .
mmi , lmamcwn3a2 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
lmamcwn3a2 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
lmamcwn3a2 -> DataMapInfo . mmi , ( NULL ) ) ;
FCElectricPlant_InitializeLoggingFunctions ( lmamcwn3a2 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( lmamcwn3a2 -> DataMapInfo . mmi ,
lmamcwn3a2 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
lmamcwn3a2 -> DataMapInfo . mmi , & lmamcwn3a2 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( lmamcwn3a2 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( lmamcwn3a2 -> DataMapInfo .
mmi , 0 ) ; FCElectricPlant_InitializeSystemRan ( lmamcwn3a2 , lmamcwn3a2 ->
DataMapInfo . systemRan , localDW , lmamcwn3a2 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( lmamcwn3a2 -> DataMapInfo .
mmi , lmamcwn3a2 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
lmamcwn3a2 -> DataMapInfo . mmi , lmamcwn3a2 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( lmamcwn3a2 -> DataMapInfo . mmi , & lmamcwn3a2 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void FCElectricPlant_host_InitializeDataMapInfo (
FCElectricPlant_host_DataMapInfo_T * dataMap , const char * path ) {
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
