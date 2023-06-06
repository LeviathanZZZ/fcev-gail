#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "FCEvReferenceApplication_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 20
#endif
#ifndef SS_INT64
#define SS_INT64 21
#endif
#else
#include "builtin_typeid_types.h"
#include "FCEvReferenceApplication.h"
#include "FCEvReferenceApplication_capi.h"
#include "FCEvReferenceApplication_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Clock" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 1 , 0 , TARGET_STRING ( "FCEvReferenceApplication/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 3 , 0 , TARGET_STRING ( "FCEvReferenceApplication/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" )
, 1 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 1 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 2 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 3 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 4 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 5 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 6 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 7 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) , TARGET_STRING (
"" ) , 8 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Derivative" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Gain" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/m//s to mph" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/rad//s to RPM" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 3 } , { 26 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Rate Transition1" ) , TARGET_STRING (
"Battery SOC (%)" ) , 0 , 0 , 0 , 0 , 3 } , { 27 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Rate Transition2" ) , TARGET_STRING (
"Motor Speed (RPM)" ) , 0 , 0 , 0 , 0 , 3 } , { 28 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Rate Transition3" ) , TARGET_STRING (
"Fuel Cell Voltage (V)" ) , 0 , 0 , 0 , 0 , 3 } , { 29 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Rate Transition4" ) , TARGET_STRING (
"Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 1 , 0 , 3 } , { 30 , 0 ,
TARGET_STRING ( "FCEvReferenceApplication/Visualization/Rate Transition5" ) ,
TARGET_STRING ( "Motor Torque (Nm)" ) , 0 , 0 , 0 , 0 , 3 } , { 31 , 0 ,
TARGET_STRING ( "FCEvReferenceApplication/Visualization/Rate Transition6" ) ,
TARGET_STRING ( "Battery Current (A)" ) , 0 , 0 , 0 , 0 , 3 } , { 32 , 0 ,
TARGET_STRING ( "FCEvReferenceApplication/Visualization/Rate Transition7" ) ,
TARGET_STRING ( "Fuel Cell Current (A)" ) , 0 , 0 , 0 , 0 , 3 } , { 33 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 34 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 35 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 37 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 39 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition6"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 40 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Drive Cycle Source/Signal Routing/UnitConversion" )
, TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "BrkCmd" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/Motor Coupling Dynamics"
) , TARGET_STRING ( "MotTrq" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold1"
) , TARGET_STRING ( "FCCurrCmd" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Visualization/Performance Calculations/kg//s to Gas gal//s"
) , TARGET_STRING ( "Gas gal/s" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m to 100Km"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m^3 per gal"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Divide1" ) ,
TARGET_STRING ( "Gas  Gallons/s" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Divide2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/L//100 Km Calc"
) , TARGET_STRING ( "L/100Km" ) , 0 , 0 , 0 , 0 , 0 } , { 56 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/US MPG Calc"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Visualization/Performance Calculations/Rate Transition3"
) , TARGET_STRING ( "US MPG" ) , 0 , 0 , 0 , 0 , 3 } , { 59 , 0 ,
TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Sqrt" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 62 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Add1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
"FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Switch" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Sum7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 66 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 0 , 0 , 0 } , { 71 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 0 , 0 , 0 } , { 73 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 76 , 13 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 77 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 1 , 0 , 0 , 4 } , { 78 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 2 , 0 , 0 , 4
} , { 79 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 2 , 0 , 0 , 4 } , { 80 , 0
, TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 85 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 4 } , { 86 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 2 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 89 , 5 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 91 , 2 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 92 , 5 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 93 , TARGET_STRING (
"FCEvReferenceApplication/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0
} , { 94 , TARGET_STRING ( "FCEvReferenceApplication/pause_time" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"FCEvReferenceApplication/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 96 , TARGET_STRING ( "FCEvReferenceApplication/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"FCEvReferenceApplication/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 98 , TARGET_STRING ( "FCEvReferenceApplication/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
"FCEvReferenceApplication/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0
, 0 , 0 } , { 100 , TARGET_STRING (
"FCEvReferenceApplication/Environment/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
"FCEvReferenceApplication/Environment/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 103 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/m//s to mph" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/rad//s to RPM" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "Kpt" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tau" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "aR" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "bR" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "cR" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "GearInit" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tShift" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING
(
 "FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/Motor Coupling Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING (
 "FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/Motor Coupling Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING
(
"FCEvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
"FCEvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold1"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 125 , TARGET_STRING
(
 "FCEvReferenceApplication/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/s per h" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/w to kw" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
 "FCEvReferenceApplication/Visualization/Performance Calculations/kg//s to Gas gal//s"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m to 100Km"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m to mile" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m^3 per gal"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m^3 to L" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 135 ,
TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 136 ,
TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 139 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING (
"FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/repeat" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/tFinal" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 142 , TARGET_STRING (
 "FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing"
) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 143 ,
TARGET_STRING (
 "FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 2 , 0 } , { 144 , TARGET_STRING (
 "FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 145 ,
TARGET_STRING (
"FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Switch" )
, TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 146 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 147 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 148 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 154 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 155 ,
TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 158 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 159 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 160 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 164 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 165 , 0 ,
TARGET_STRING (
 "FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input/Motor Coupling Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 166 , 524 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 167 , 525 , TARGET_STRING (
"FCEvReferenceApplication/Visualization/Performance Calculations/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 168 , 527 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 169 , - 1 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 2 , 0 , - 1 , 0 } , {
170 , 526 , TARGET_STRING (
 "FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 3 , 4 , 6 , 0 ,
5 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) ,
( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs
[ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & arol2xwgeua . mdtyud1uco , &
arol2xwgeua . jrtiyk3oiq , & arol2xwgeua . azqdsmx4o5 , & arol2xwgeua .
b5bw4cab53 , & arol2xwgeua . akfb4dpcur , & arol2xwgeua . c0jtinjrgp , &
arol2xwgeua . fi4crlath4 , & arol2xwgeua . byu4dnscl5 , & arol2xwgeua .
dffnpnahry , & arol2xwgeua . itnb0b3ert , & arol2xwgeua . k0miwqwhp4 , &
arol2xwgeua . ccugnyas5r , & arol2xwgeua . grzfptpe55 , & arol2xwgeua .
hzezmdv3lt , & arol2xwgeua . aqtgj50qai , & arol2xwgeua . evj5xoqrrj , &
arol2xwgeua . lfu0clsnxa , & arol2xwgeua . hrpk2gwn22 , & arol2xwgeua .
fvrzozslmz , & arol2xwgeua . nlscj1wkoa , & arol2xwgeua . f1gdql1qam , &
arol2xwgeua . ifdyy33fmz , & arol2xwgeua . bg0r4hctuw , & arol2xwgeua .
fyc3gwx23b [ 0 ] , & arol2xwgeua . nivlwap1ku , & arol2xwgeua . pvr5co4ozs ,
& arol2xwgeua . jb5z2dve1g , & arol2xwgeua . ovilnfqx3i , & arol2xwgeua .
pngeld3eh4 , & arol2xwgeua . jvpo5pxor4 [ 0 ] , & arol2xwgeua . jo21islmqg ,
& arol2xwgeua . okzca3psdg , & arol2xwgeua . nclhnaqn33 , & arol2xwgeua .
ntnlhbhu4n , & arol2xwgeua . jrzv51i13d , & arol2xwgeua . n1mdtuox5b , &
arol2xwgeua . ixmdmgwvrg , & arol2xwgeua . gc4ky0bjec , & arol2xwgeua .
a5mvaifpwe , & arol2xwgeua . pg4vu0woab , & arol2xwgeua . cxt45itkxu , &
arol2xwgeua . kyvnagqwsz , & arol2xwgeua . gh4eu0hgdx , & arol2xwgeua .
nldptn0dqc , & arol2xwgeua . k4zvb232bn , & arol2xwgeua . nwobq5pehg , &
arol2xwgeua . amo2ayshmg , & arol2xwgeua . hnspac23rl , & arol2xwgeua .
ob5patswnz , & arol2xwgeua . c1yh21bbxg , & arol2xwgeua . dex1ynigww , &
arol2xwgeua . eksslsa3nq , & arol2xwgeua . gmg1uuwodr , & arol2xwgeua .
pjcnv0yr3h , & arol2xwgeua . imasaqk5dh , & arol2xwgeua . ghz3myl3uq , &
arol2xwgeua . ox3udpfx0s , & arol2xwgeua . puf4jg5pqu , & arol2xwgeua .
jjtf4hxjvb , & arol2xwgeua . mtqi5bjqaq , & arol2xwgeua . ggv2kf5x13 , &
arol2xwgeua . aawice3zmc , & arol2xwgeua . pwqsmmfyxm , & arol2xwgeua .
hs2db3gxe1 , & arol2xwgeua . l0xwo0ycrz , & arol2xwgeua . caokwv1pyy , &
arol2xwgeua . iioo4rwecj , & arol2xwgeua . a1ifzjuqu2 , & arol2xwgeua .
kfjumalmu5 , & arol2xwgeua . dkmci12msj , & arol2xwgeua . mbw0oe0xgq , &
arol2xwgeua . iewvvph2bn , & arol2xwgeua . b0hrwclaey , & arol2xwgeua .
b2ehf0ulx5 , & arol2xwgeua . lpbnodzorb [ 0 ] , & arol2xwgeua . ee51mjy2aa [
0 ] , & arol2xwgeua . dcnebbmssf , & lw0sy0o11jr . nmxkq34d03 , & lw0sy0o11jr
. mbvoiiw20z , & lw0sy0o11jr . draduovrmv , & arol2xwgeua . l33ngyt2ph , &
arol2xwgeua . m2ujessiey , & arol2xwgeua . dfgfnvbjkq , & arol2xwgeua .
gnzc0nrj3w , & arol2xwgeua . mhizywt5g2 , & arol2xwgeua . pmarfk24je , &
arol2xwgeua . jdqevtvewp [ 0 ] , & arol2xwgeua . mfp3l0luimk . i1rtqrd21n , &
arol2xwgeua . drdlsysypy , & arol2xwgeua . dxcv00k5uk . i1rtqrd21n , &
arol2xwgeua . jupidj25f2 , & arol2xwgeua . mfp3l0luimk . i1rtqrd21n , &
arol2xwgeua . dxcv00k5uk . i1rtqrd21n , & bo1z0vnccp .
Constant_Value_brbakq3rcg , & bo1z0vnccp . pause_time_Value , & bo1z0vnccp .
Gain_Gain_nhytib1535 , & bo1z0vnccp . Gain1_Gain , & bo1z0vnccp . Gain2_Gain
, & bo1z0vnccp . Saturation_UpperSat_eqdlv1qluu , & bo1z0vnccp .
Saturation_LowerSat_lo2mm43j55 , & bo1z0vnccp . Constant2_Value , &
bo1z0vnccp . Constant3_Value , & bo1z0vnccp . Gain_Gain , & bo1z0vnccp .
mstomph_Gain , & bo1z0vnccp . radstoRPM_Gain , & bo1z0vnccp .
Saturation_UpperSat_i5ock22ux5 , & bo1z0vnccp .
Saturation_LowerSat_lcopxrfjqs , & bo1z0vnccp . LongitudinalDriverModel_m , &
bo1z0vnccp . LongitudinalDriverModel_Kpt , & bo1z0vnccp .
LongitudinalDriverModel_tau , & bo1z0vnccp . LongitudinalDriverModel_L , &
bo1z0vnccp . LongitudinalDriverModel_aR , & bo1z0vnccp .
LongitudinalDriverModel_bR , & bo1z0vnccp . LongitudinalDriverModel_cR , &
bo1z0vnccp . LongitudinalDriverModel_g , & bo1z0vnccp .
LongitudinalDriverModel_GearInit , & bo1z0vnccp .
LongitudinalDriverModel_tShift , & bo1z0vnccp . FirstOrderHold_IniOut , &
bo1z0vnccp . FirstOrderHold_ErrTol , & bo1z0vnccp . MotorCouplingDynamics_A ,
& bo1z0vnccp . MotorCouplingDynamics_C , & bo1z0vnccp .
FirstOrderHold_IniOut_ign3oxg5f1 , & bo1z0vnccp .
FirstOrderHold_ErrTol_gdzadtrzfv , & bo1z0vnccp . FirstOrderHold1_IniOut , &
bo1z0vnccp . FirstOrderHold1_ErrTol , & bo1z0vnccp .
USEPAkwhUSgalequivalent_Value , & bo1z0vnccp . sperh_Value , & bo1z0vnccp .
wtokw_Value , & bo1z0vnccp . kgstoGasgals_Gain , & bo1z0vnccp . mto100Km_Gain
, & bo1z0vnccp . mtomile_Gain , & bo1z0vnccp . m3pergal_Gain , & bo1z0vnccp .
m3toL_Gain , & bo1z0vnccp . m3toUSGal_Gain , & bo1z0vnccp . Integrator_IC , &
bo1z0vnccp . Integrator1_IC , & bo1z0vnccp . Saturation_UpperSat , &
bo1z0vnccp . Saturation_LowerSat , & bo1z0vnccp . Saturation1_UpperSat , &
bo1z0vnccp . Saturation1_LowerSat , & bo1z0vnccp . repeat_Value , &
bo1z0vnccp . tFinal_Value , & bo1z0vnccp . HitCrossing_Offset , & bo1z0vnccp
. uDLookupTable_tableData [ 0 ] , & bo1z0vnccp . uDLookupTable_bp01Data [ 0 ]
, & bo1z0vnccp . Switch_Threshold , & bo1z0vnccp . Integrator2_IC , &
bo1z0vnccp . UnitDelay_InitialCondition [ 0 ] , & bo1z0vnccp . SignalHold_IC
, & bo1z0vnccp . Constant_Value_mg0ii2c5jx , & bo1z0vnccp . u1_UpperSat , &
bo1z0vnccp . u1_LowerSat , & bo1z0vnccp . Saturation_UpperSat_ejlhkaxvm3 , &
bo1z0vnccp . Saturation_LowerSat_jq5vbx40o3 , & bo1z0vnccp .
Integrator1_IC_ajivek24xs , & bo1z0vnccp . SignalHold_IC_k5etbcnmrh , &
bo1z0vnccp . Constant_Value_lfd1si2n0l , & bo1z0vnccp . u0_UpperSat , &
bo1z0vnccp . u0_LowerSat , & bo1z0vnccp . Saturation_UpperSat_n5cfzewtp3 , &
bo1z0vnccp . Saturation_LowerSat_jdvecoiqp4 , & bo1z0vnccp .
Constant_Value_fb5mg350bv , & bo1z0vnccp . Constant1_Value , & bo1z0vnccp .
Constant_Value , & bo1z0vnccp . Constant_Value_nhp3htkj21 , & gtrdqgpqkfx .
gstwyn3q5a , & gtrdqgpqkfx . ksul3xbf4x , & gtrdqgpqkfx . mbchhank0o , &
gtrdqgpqkfx . pq24pxcnro , & lw0sy0o11jr . mumtw2t4fy [ 0 ] , & gtrdqgpqkfx .
k335v0wdxu , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T )
SS_UINT32 , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } , { "unsigned char" ,
"boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T ) SS_BOOLEAN , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 1370 , 1 , 1 , 2 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.01 , 0.5 , 1.0 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 6 , 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 4 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ]
, ( const void * ) & rtcapiStoredFloats [ 3 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
93 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 72 ,
rtModelParameters , 0 } , { rtBlockStates , 6 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 869903735U , 1051471062U , 1937168891U ,
3224586444U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo *
FCEvReferenceApplication_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void FCEvReferenceApplication_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( * rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 3 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void FCEvReferenceApplication_host_InitializeDataMapInfo (
FCEvReferenceApplication_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; FCEvPowertrainController_host_InitializeDataMapInfo ( & ( dataMap -> child0
) , "FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" )
; dataMap -> childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
DrivetrainEv_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"FCEvReferenceApplication/Passenger Car/Drivetrain" ) ; dataMap -> childMMI [
2 ] = & ( dataMap -> child2 . mmi ) ;
FCElectricPlant_host_InitializeDataMapInfo ( & ( dataMap -> child2 ) ,
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 3 ) ; }
#ifdef __cplusplus
}
#endif
#endif
