#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_log.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t28 , NeDsMethodOutput * t29 ) { ETTS0 b_efOut ;
ETTS0 efOut ; ETTS0 t0 ; ETTS0 t1 ; PmRealVector out ; real_T t12 [ 154 ] ;
real_T c_efOut [ 1 ] ; real_T t14 [ 1 ] ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T Fuel_Cell_Boost_Converter_L_n_v ;
real_T Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ;
real_T Fuel_Cell_Fuel_Cell_x2_Capacitor_i ; real_T
Fuel_Cell_Fuel_Cell_x2_Diode_p_v ; real_T Fuel_Cell_Fuel_Cell_x2_Diode_v ;
real_T Motor_Motor_power_dissipated ; real_T U_idx_0 ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T X_idx_0 ; real_T
X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T X_idx_12 ; real_T
X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T
X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T
X_idx_20 ; real_T X_idx_21 ; real_T X_idx_3 ; real_T X_idx_4 ; real_T X_idx_5
; real_T X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8 ; real_T X_idx_9 ; real_T
intrm_sf_mf_2 ; real_T intrm_sf_mf_5 ; real_T t17 ; real_T t19 ; real_T t20 ;
real_T t23 ; real_T t24 ; size_t t4 [ 1 ] ; size_t t5 [ 1 ] ; size_t t7 [ 1 ]
; size_t t15 ; size_t t16 ; int32_T M_idx_0 ; M_idx_0 = t28 -> mM . mX [ 0 ]
; U_idx_0 = t28 -> mU . mX [ 0 ] ; U_idx_1 = t28 -> mU . mX [ 1 ] ; U_idx_2 =
t28 -> mU . mX [ 2 ] ; U_idx_3 = t28 -> mU . mX [ 3 ] ; U_idx_4 = t28 -> mU .
mX [ 4 ] ; X_idx_0 = t28 -> mX . mX [ 0 ] ; X_idx_1 = t28 -> mX . mX [ 1 ] ;
X_idx_2 = t28 -> mX . mX [ 2 ] ; X_idx_3 = t28 -> mX . mX [ 3 ] ; X_idx_4 =
t28 -> mX . mX [ 4 ] ; X_idx_5 = t28 -> mX . mX [ 5 ] ; X_idx_6 = t28 -> mX .
mX [ 6 ] ; X_idx_7 = t28 -> mX . mX [ 7 ] ; X_idx_8 = t28 -> mX . mX [ 8 ] ;
X_idx_9 = t28 -> mX . mX [ 9 ] ; X_idx_10 = t28 -> mX . mX [ 10 ] ; X_idx_11
= t28 -> mX . mX [ 11 ] ; X_idx_12 = t28 -> mX . mX [ 12 ] ; X_idx_13 = t28
-> mX . mX [ 13 ] ; X_idx_14 = t28 -> mX . mX [ 14 ] ; X_idx_15 = t28 -> mX .
mX [ 15 ] ; X_idx_16 = t28 -> mX . mX [ 16 ] ; X_idx_17 = t28 -> mX . mX [ 17
] ; X_idx_18 = t28 -> mX . mX [ 18 ] ; X_idx_19 = t28 -> mX . mX [ 19 ] ;
X_idx_20 = t28 -> mX . mX [ 20 ] ; X_idx_21 = t28 -> mX . mX [ 21 ] ; out =
t29 -> mLOG ; t14 [ 0ULL ] = pmf_get_inf ( ) ; for ( t15 = 0ULL ; t15 < 42ULL
; t15 ++ ) { t16 = t15 / 42ULL ; t17 = t14 [ t16 > 0ULL ? 0ULL : t16 ] ; t19
= ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t15 ] * 1.0E-5 ; t14 [ t16 >
0ULL ? 0ULL : t16 ] = t17 > t19 ? t19 : t17 ; } t19 = t14 [ 0ULL ] ; t17 =
t19 > X_idx_9 ? t19 : X_idx_9 ; t19 = X_idx_0 * 5.2410901467505238E-5 ; t20 =
- X_idx_8 - U_idx_0 ; intrm_sf_mf_2 = ( ( ( real_T ) ( t20 >= 0.0 ) * t20 *
1000.0 + ( real_T ) ( t20 < 0.0 ) * X_idx_10 ) - 0.9 ) / 0.099999999999999978
; if ( ( real_T ) ( t20 >= 0.0 ) * t20 * 1000.0 + ( real_T ) ( t20 < 0.0 ) *
X_idx_10 <= 0.9 ) { intrm_sf_mf_2 = 0.0 ; } else { intrm_sf_mf_2 = ( real_T )
( t20 >= 0.0 ) * t20 * 1000.0 + ( real_T ) ( t20 < 0.0 ) * X_idx_10 >= 1.0 ?
1.0 : intrm_sf_mf_2 * intrm_sf_mf_2 * 3.0 - intrm_sf_mf_2 * intrm_sf_mf_2 *
intrm_sf_mf_2 * 2.0 ; } t23 = X_idx_3 * - 0.1 + X_idx_13 * 0.1 ;
Fuel_Cell_Boost_Converter_L_i = X_idx_16 * 1.0E-9 + X_idx_4 ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * -
1.0000000000000011 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * -
1.0E-15 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 ; Fuel_Cell_Current_Sensor1_I = (
( ( X_idx_3 * 0.1 + X_idx_13 * - 0.1 ) + X_idx_16 * 1.0E-9 ) - X_idx_18 ) +
X_idx_4 ; Fuel_Cell_Fuel_Cell_x2_Capacitor_i = ( - X_idx_4 + X_idx_16 * -
1.0E-9 ) - X_idx_17 ; Fuel_Cell_Fuel_Cell_x2_Diode_p_v = X_idx_17 * 0.001 +
U_idx_1 ; Fuel_Cell_Fuel_Cell_x2_Diode_v = ( ( ( X_idx_4 * 1.0E-6 - X_idx_5 )
+ X_idx_16 * 1.0E-15 ) + X_idx_17 * 0.001001 ) + U_idx_1 ; t24 = ( ( ( (
X_idx_3 * 0.1 - X_idx_12 ) + X_idx_13 * - 0.1 ) + X_idx_16 * 1.0E-9 ) -
X_idx_18 ) + X_idx_4 ; t14 [ 0ULL ] = X_idx_6 ; t4 [ 0 ] = 23ULL ; t5 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t14 [ 0ULL ] , & t4 [ 0ULL ] , & t5 [ 0ULL ] ) ; t1 =
efOut ; t14 [ 0ULL ] = X_idx_19 ; t7 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t14 [ 0ULL ] , & t7 [ 0ULL ] , & t5 [ 0ULL ] ) ; t0 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t1 . mField0
[ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t4 [ 0ULL ] , &
t7 [ 0ULL ] , & t5 [ 0ULL ] ) ; t14 [ 0 ] = c_efOut [ 0 ] ;
Motor_Motor_power_dissipated = t14 [ 0ULL ] ; intrm_sf_mf_5 = ( X_idx_10 -
0.9 ) / 0.099999999999999978 ; if ( X_idx_10 <= 0.9 ) { intrm_sf_mf_5 = 0.0 ;
} else { intrm_sf_mf_5 = X_idx_10 >= 1.0 ? 1.0 : intrm_sf_mf_5 *
intrm_sf_mf_5 * 3.0 - intrm_sf_mf_5 * intrm_sf_mf_5 * intrm_sf_mf_5 * 2.0 ; }
t12 [ 0ULL ] = X_idx_0 * 0.00027777777777777778 ; t12 [ 1ULL ] = X_idx_8 ;
t12 [ 2ULL ] = X_idx_1 ; t12 [ 3ULL ] = X_idx_9 ; t12 [ 4ULL ] = t17 ; t12 [
5ULL ] = X_idx_10 ; t12 [ 6ULL ] = X_idx_8 * X_idx_8 * ( M_idx_0 != 0 ?
4.03416E-7 : X_idx_11 ) * 0.001 * 1000.0 ; t12 [ 7ULL ] = t19 ; t12 [ 8ULL ]
= t19 ; t12 [ 9ULL ] = X_idx_10 ; t12 [ 10ULL ] = X_idx_11 ; t12 [ 11ULL ] =
t19 ; t12 [ 12ULL ] = t20 ; t12 [ 13ULL ] = X_idx_10 ; t12 [ 14ULL ] =
intrm_sf_mf_2 ; t12 [ 15ULL ] = intrm_sf_mf_5 ; t12 [ 16ULL ] = X_idx_12 ;
t12 [ 17ULL ] = X_idx_10 ; t12 [ 18ULL ] = X_idx_13 ; t12 [ 19ULL ] = (
X_idx_14 * intrm_sf_mf_2 + ( 1.0 - intrm_sf_mf_2 ) * t20 * t20 ) * 1000.0 ;
t12 [ 20ULL ] = X_idx_14 * 1000.0 ; t12 [ 21ULL ] = X_idx_2 ; t12 [ 22ULL ] =
X_idx_13 ; t12 [ 23ULL ] = U_idx_0 ; t12 [ 24ULL ] = U_idx_0 ; t12 [ 25ULL ]
= X_idx_10 ; t12 [ 26ULL ] = X_idx_10 ; t12 [ 27ULL ] = U_idx_0 ; t12 [ 28ULL
] = X_idx_10 ; t12 [ 29ULL ] = - X_idx_8 ; t12 [ 30ULL ] = - X_idx_8 ; t12 [
31ULL ] = X_idx_10 ; t12 [ 32ULL ] = X_idx_10 ; t12 [ 33ULL ] = - X_idx_8 ;
t12 [ 34ULL ] = X_idx_10 ; t12 [ 35ULL ] = X_idx_10 ; t12 [ 36ULL ] =
X_idx_10 ; t12 [ 37ULL ] = X_idx_10 ; t12 [ 38ULL ] = X_idx_10 ; t12 [ 39ULL
] = - X_idx_12 ; t12 [ 40ULL ] = - X_idx_12 ; t12 [ 41ULL ] = X_idx_13 ; t12
[ 42ULL ] = X_idx_13 ; t12 [ 43ULL ] = - X_idx_12 ; t12 [ 44ULL ] = X_idx_13
; t12 [ 45ULL ] = X_idx_13 ; t12 [ 46ULL ] = X_idx_13 ; t12 [ 47ULL ] =
X_idx_13 ; t12 [ 48ULL ] = X_idx_13 ; t12 [ 49ULL ] = - X_idx_12 ; t12 [
50ULL ] = - X_idx_12 ; t12 [ 51ULL ] = X_idx_13 ; t12 [ 52ULL ] = t23 ; t12 [
53ULL ] = X_idx_13 ; t12 [ 54ULL ] = X_idx_13 ; t12 [ 55ULL ] = X_idx_3 ; t12
[ 56ULL ] = t23 * t23 * 0.01 ; t12 [ 57ULL ] = X_idx_15 ; t12 [ 58ULL ] =
U_idx_2 ; t12 [ 59ULL ] = Fuel_Cell_Boost_Converter_L_i ; t12 [ 60ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t12 [ 61ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 62ULL ] = X_idx_16 ; t12 [ 63ULL ] =
X_idx_4 ; t12 [ 64ULL ] = X_idx_16 * X_idx_16 * 1.0000000000000002E-12 ; t12
[ 65ULL ] = Fuel_Cell_Boost_Converter_L_n_v ; t12 [ 66ULL ] = X_idx_18 ; t12
[ 67ULL ] = X_idx_4 ; t12 [ 68ULL ] = Fuel_Cell_Boost_Converter_L_i ; t12 [
69ULL ] = Fuel_Cell_Boost_Converter_L_i ; t12 [ 70ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 71ULL ] = X_idx_13 ; t12 [ 72ULL ] =
Fuel_Cell_Boost_Converter_L_n_v * X_idx_18 + (
Fuel_Cell_Boost_Converter_L_n_v - X_idx_15 ) * (
Fuel_Cell_Boost_Converter_L_i - X_idx_18 ) ; t12 [ 73ULL ] = X_idx_3 ; t12 [
74ULL ] = Fuel_Cell_Current_Sensor1_I ; t12 [ 75ULL ] =
Fuel_Cell_Current_Sensor1_I ; t12 [ 76ULL ] = X_idx_13 ; t12 [ 77ULL ] =
X_idx_13 ; t12 [ 78ULL ] = Fuel_Cell_Current_Sensor1_I ; t12 [ 79ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 80ULL ] =
Fuel_Cell_Fuel_Cell_x2_Capacitor_i ; t12 [ 81ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 82ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 83ULL ] = X_idx_5 ; t12 [ 84ULL ] =
Fuel_Cell_Fuel_Cell_x2_Capacitor_i * Fuel_Cell_Fuel_Cell_x2_Capacitor_i *
1.0E-9 ; t12 [ 85ULL ] = X_idx_17 ; t12 [ 86ULL ] = U_idx_1 ; t12 [ 87ULL ] =
U_idx_1 ; t12 [ 88ULL ] = U_idx_1 ; t12 [ 89ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t12 [ 90ULL ] = Fuel_Cell_Boost_Converter_L_i
; t12 [ 91ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 92ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 93ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t12 [ 94ULL ] = - X_idx_17 ; t12 [ 95ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 96ULL ] =
Fuel_Cell_Fuel_Cell_x2_Diode_p_v ; t12 [ 97ULL ] =
Fuel_Cell_Fuel_Cell_x2_Diode_v ; t12 [ 98ULL ] = - ( X_idx_17 *
Fuel_Cell_Fuel_Cell_x2_Diode_v ) ; t12 [ 99ULL ] = - X_idx_17 ; t12 [ 100ULL
] = Fuel_Cell_Fuel_Cell_x2_Diode_p_v ; t12 [ 101ULL ] = U_idx_1 ; t12 [
102ULL ] = X_idx_17 * - 0.001 ; t12 [ 103ULL ] = X_idx_17 * X_idx_17 * 0.001
; t12 [ 104ULL ] = U_idx_1 ; t12 [ 105ULL ] = Fuel_Cell_Boost_Converter_L_p_v
; t12 [ 106ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 107ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 108ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 109ULL ] = U_idx_2 ; t12 [ 110ULL ] =
X_idx_13 ; t12 [ 111ULL ] = X_idx_13 ; t12 [ 112ULL ] = X_idx_13 ; t12 [
113ULL ] = X_idx_13 ; t12 [ 114ULL ] = t24 ; t12 [ 115ULL ] = t24 ; t12 [
116ULL ] = X_idx_13 ; t12 [ 117ULL ] = X_idx_13 ; t12 [ 118ULL ] = t24 ; t12
[ 119ULL ] = X_idx_13 ; t12 [ 120ULL ] = X_idx_13 ; t12 [ 121ULL ] = X_idx_13
; t12 [ 122ULL ] = X_idx_13 ; t12 [ 123ULL ] = X_idx_13 ; t12 [ 124ULL ] =
X_idx_6 ; t12 [ 125ULL ] = X_idx_6 ; t12 [ 126ULL ] = U_idx_3 ; t12 [ 127ULL
] = X_idx_13 ; t12 [ 128ULL ] = t24 ; t12 [ 129ULL ] =
Motor_Motor_power_dissipated * 1000.0 ; t12 [ 130ULL ] = X_idx_20 ; t12 [
131ULL ] = X_idx_21 ; t12 [ 132ULL ] = X_idx_21 ; t12 [ 133ULL ] = X_idx_19 ;
t12 [ 134ULL ] = X_idx_7 ; t12 [ 135ULL ] = X_idx_13 ; t12 [ 136ULL ] =
X_idx_6 * 9.5492965855137211 ; t12 [ 137ULL ] = X_idx_6 ; t12 [ 138ULL ] =
U_idx_4 ; t12 [ 139ULL ] = - X_idx_20 ; t12 [ 140ULL ] = U_idx_4 ; t12 [
141ULL ] = X_idx_6 ; t12 [ 142ULL ] = X_idx_6 ; t12 [ 143ULL ] = - X_idx_20 ;
t12 [ 144ULL ] = - X_idx_20 ; t12 [ 145ULL ] = X_idx_6 ; t12 [ 146ULL ] =
X_idx_6 ; t12 [ 147ULL ] = - X_idx_20 ; t12 [ 148ULL ] = - X_idx_20 ; t12 [
149ULL ] = - X_idx_20 ; t12 [ 150ULL ] = X_idx_6 ; t12 [ 151ULL ] = U_idx_4 ;
t12 [ 152ULL ] = U_idx_3 ; t12 [ 153ULL ] = X_idx_13 ; for ( M_idx_0 = 0 ;
M_idx_0 < 154 ; M_idx_0 ++ ) { out . mX [ M_idx_0 ] = t12 [ M_idx_0 ] ; } (
void ) LC ; ( void ) t29 ; return 0 ; }
