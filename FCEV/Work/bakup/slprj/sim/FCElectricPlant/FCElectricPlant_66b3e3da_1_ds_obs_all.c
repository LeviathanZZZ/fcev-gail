#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_obs_all.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_obs_all ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t20 , NeDsMethodOutput * t21 ) { ETTS0 b_efOut ;
ETTS0 efOut ; ETTS0 t0 ; ETTS0 t1 ; PmRealVector out ; real_T t12 [ 200 ] ;
real_T c_efOut [ 1 ] ; real_T t13 [ 1 ] ; real_T
Battery_System_Battery_Table_Based1_stateOfCharge ; real_T
Battery_System_DC_DC_Converter_i1 ; real_T
Battery_System_DC_DC_Converter_power_dissipated ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T Fuel_Cell_Boost_Converter_L_n_v ;
real_T Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ;
real_T Fuel_Cell_Fuel_Cell_x2_Diode_p_v ; real_T Motor_Motor_power_dissipated
; real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
U_idx_4 ; real_T X_idx_0 ; real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11
; real_T X_idx_12 ; real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ;
real_T X_idx_16 ; real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ;
real_T X_idx_2 ; real_T X_idx_20 ; real_T X_idx_21 ; real_T X_idx_3 ; real_T
X_idx_4 ; real_T X_idx_5 ; real_T X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8 ;
real_T X_idx_9 ; real_T t17 ; size_t t4 [ 1 ] ; size_t t5 [ 1 ] ; size_t t7 [
1 ] ; int32_T M_idx_0 ; M_idx_0 = t20 -> mM . mX [ 0 ] ; U_idx_0 = t20 -> mU
. mX [ 0 ] ; U_idx_1 = t20 -> mU . mX [ 1 ] ; U_idx_2 = t20 -> mU . mX [ 2 ]
; U_idx_3 = t20 -> mU . mX [ 3 ] ; U_idx_4 = t20 -> mU . mX [ 4 ] ; X_idx_0 =
t20 -> mX . mX [ 0 ] ; X_idx_1 = t20 -> mX . mX [ 1 ] ; X_idx_2 = t20 -> mX .
mX [ 2 ] ; X_idx_3 = t20 -> mX . mX [ 3 ] ; X_idx_4 = t20 -> mX . mX [ 4 ] ;
X_idx_5 = t20 -> mX . mX [ 5 ] ; X_idx_6 = t20 -> mX . mX [ 6 ] ; X_idx_7 =
t20 -> mX . mX [ 7 ] ; X_idx_8 = t20 -> mX . mX [ 8 ] ; X_idx_9 = t20 -> mX .
mX [ 9 ] ; X_idx_10 = t20 -> mX . mX [ 10 ] ; X_idx_11 = t20 -> mX . mX [ 11
] ; X_idx_12 = t20 -> mX . mX [ 12 ] ; X_idx_13 = t20 -> mX . mX [ 13 ] ;
X_idx_14 = t20 -> mX . mX [ 14 ] ; X_idx_15 = t20 -> mX . mX [ 15 ] ;
X_idx_16 = t20 -> mX . mX [ 16 ] ; X_idx_17 = t20 -> mX . mX [ 17 ] ;
X_idx_18 = t20 -> mX . mX [ 18 ] ; X_idx_19 = t20 -> mX . mX [ 19 ] ;
X_idx_20 = t20 -> mX . mX [ 20 ] ; X_idx_21 = t20 -> mX . mX [ 21 ] ; out =
t21 -> mOBS_ALL ; Battery_System_Battery_Table_Based1_stateOfCharge = X_idx_0
* 5.2410901467505238E-5 ; Battery_System_DC_DC_Converter_i1 = - X_idx_8 -
U_idx_0 ; Battery_System_DC_DC_Converter_power_dissipated = ( ( ( real_T ) (
Battery_System_DC_DC_Converter_i1 >= 0.0 ) *
Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X_idx_10 ) - 0.9 ) /
0.099999999999999978 ; if ( ( real_T ) ( Battery_System_DC_DC_Converter_i1 >=
0.0 ) * Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X_idx_10 <= 0.9 ) {
Battery_System_DC_DC_Converter_power_dissipated = 0.0 ; } else {
Battery_System_DC_DC_Converter_power_dissipated = ( real_T ) (
Battery_System_DC_DC_Converter_i1 >= 0.0 ) *
Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X_idx_10 >= 1.0 ? 1.0 :
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 3.0 -
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 2.0 ; }
Fuel_Cell_Boost_Converter_L_i = X_idx_16 * 1.0E-9 + X_idx_4 ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * -
1.0000000000000011 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * -
1.0E-15 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 ; Fuel_Cell_Current_Sensor1_I = (
( ( X_idx_3 * 0.1 + X_idx_13 * - 0.1 ) + X_idx_16 * 1.0E-9 ) - X_idx_18 ) +
X_idx_4 ; Fuel_Cell_Fuel_Cell_x2_Diode_p_v = X_idx_17 * 0.001 + U_idx_1 ; t17
= ( ( ( ( X_idx_3 * 0.1 - X_idx_12 ) + X_idx_13 * - 0.1 ) + X_idx_16 * 1.0E-9
) - X_idx_18 ) + X_idx_4 ; t13 [ 0ULL ] = X_idx_6 ; t4 [ 0 ] = 23ULL ; t5 [ 0
] = 1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , &
efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField2 , & t13 [ 0ULL ] , & t4 [ 0ULL ] , & t5 [ 0ULL ] ) ;
t1 = efOut ; t13 [ 0ULL ] = X_idx_19 ; t7 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t13 [ 0ULL ] , & t7 [ 0ULL ] , & t5 [ 0ULL ] ) ; t0 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t1 . mField0
[ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t4 [ 0ULL ] , &
t7 [ 0ULL ] , & t5 [ 0ULL ] ) ; t13 [ 0 ] = c_efOut [ 0 ] ;
Motor_Motor_power_dissipated = t13 [ 0ULL ] ; t12 [ 0ULL ] = 0.0 ; t12 [ 1ULL
] = 298.15 ; t12 [ 2ULL ] = X_idx_0 * 0.00027777777777777778 ; t12 [ 3ULL ] =
X_idx_8 ; t12 [ 4ULL ] = 0.0 ; t12 [ 5ULL ] = X_idx_1 ; t12 [ 6ULL ] =
X_idx_9 ; t12 [ 7ULL ] = 1.0 ; t12 [ 8ULL ] = X_idx_10 ; t12 [ 9ULL ] =
X_idx_8 * X_idx_8 * ( M_idx_0 != 0 ? 4.03416E-7 : X_idx_11 ) * 0.001 * 1000.0
; t12 [ 10ULL ] = Battery_System_Battery_Table_Based1_stateOfCharge ; t12 [
11ULL ] = Battery_System_Battery_Table_Based1_stateOfCharge ; t12 [ 12ULL ] =
X_idx_10 ; t12 [ 13ULL ] = 0.0 ; t12 [ 14ULL ] = 0.0 ; t12 [ 15ULL ] = 0.0 ;
t12 [ 16ULL ] = 0.0 ; t12 [ 17ULL ] = 0.0 ; t12 [ 18ULL ] = 0.0 ; t12 [ 19ULL
] = 0.0 ; t12 [ 20ULL ] = 0.0 ; t12 [ 21ULL ] = 0.0 ; t12 [ 22ULL ] = 0.0 ;
t12 [ 23ULL ] = 0.0 ; t12 [ 24ULL ] = X_idx_11 ; t12 [ 25ULL ] = 1.0 ; t12 [
26ULL ] = 1.0 ; t12 [ 27ULL ] = 5.3 ; t12 [ 28ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t12 [ 29ULL ] =
Battery_System_DC_DC_Converter_i1 ; t12 [ 30ULL ] = X_idx_10 ; t12 [ 31ULL ]
= 0.0 ; t12 [ 32ULL ] = 0.0 ; t12 [ 33ULL ] = X_idx_12 ; t12 [ 34ULL ] = 0.0
; t12 [ 35ULL ] = 0.0 ; t12 [ 36ULL ] = X_idx_10 ; t12 [ 37ULL ] = X_idx_13 ;
t12 [ 38ULL ] = ( X_idx_14 * Battery_System_DC_DC_Converter_power_dissipated
+ ( 1.0 - Battery_System_DC_DC_Converter_power_dissipated ) *
Battery_System_DC_DC_Converter_i1 * Battery_System_DC_DC_Converter_i1 ) *
1000.0 ; t12 [ 39ULL ] = X_idx_14 * 1000.0 ; t12 [ 40ULL ] = X_idx_2 ; t12 [
41ULL ] = X_idx_13 ; t12 [ 42ULL ] = 0.0 ; t12 [ 43ULL ] = 0.0 ; t12 [ 44ULL
] = 0.0 ; t12 [ 45ULL ] = U_idx_0 ; t12 [ 46ULL ] = U_idx_0 ; t12 [ 47ULL ] =
X_idx_10 ; t12 [ 48ULL ] = X_idx_10 ; t12 [ 49ULL ] = U_idx_0 ; t12 [ 50ULL ]
= X_idx_10 ; t12 [ 51ULL ] = 0.0 ; t12 [ 52ULL ] = - X_idx_8 ; t12 [ 53ULL ]
= - X_idx_8 ; t12 [ 54ULL ] = X_idx_10 ; t12 [ 55ULL ] = X_idx_10 ; t12 [
56ULL ] = - X_idx_8 ; t12 [ 57ULL ] = 0.0 ; t12 [ 58ULL ] = X_idx_10 ; t12 [
59ULL ] = 0.0 ; t12 [ 60ULL ] = X_idx_10 ; t12 [ 61ULL ] = X_idx_10 ; t12 [
62ULL ] = X_idx_10 ; t12 [ 63ULL ] = X_idx_10 ; t12 [ 64ULL ] = - X_idx_12 ;
t12 [ 65ULL ] = - X_idx_12 ; t12 [ 66ULL ] = X_idx_13 ; t12 [ 67ULL ] =
X_idx_13 ; t12 [ 68ULL ] = 0.0 ; t12 [ 69ULL ] = - X_idx_12 ; t12 [ 70ULL ] =
X_idx_13 ; t12 [ 71ULL ] = 0.0 ; t12 [ 72ULL ] = X_idx_13 ; t12 [ 73ULL ] =
X_idx_13 ; t12 [ 74ULL ] = X_idx_13 ; t12 [ 75ULL ] = X_idx_13 ; t12 [ 76ULL
] = - X_idx_12 ; t12 [ 77ULL ] = - X_idx_12 ; t12 [ 78ULL ] = X_idx_13 ; t12
[ 79ULL ] = 0.0 ; t12 [ 80ULL ] = 0.0 ; t12 [ 81ULL ] = X_idx_3 * - 0.1 +
X_idx_13 * 0.1 ; t12 [ 82ULL ] = 0.0 ; t12 [ 83ULL ] = X_idx_13 ; t12 [ 84ULL
] = X_idx_13 ; t12 [ 85ULL ] = X_idx_3 ; t12 [ 86ULL ] = X_idx_15 ; t12 [
87ULL ] = U_idx_2 ; t12 [ 88ULL ] = 0.0 ; t12 [ 89ULL ] = 0.0 ; t12 [ 90ULL ]
= Fuel_Cell_Boost_Converter_L_i ; t12 [ 91ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t12 [ 92ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 93ULL ] = X_idx_16 ; t12 [ 94ULL ] =
X_idx_4 ; t12 [ 95ULL ] = Fuel_Cell_Boost_Converter_L_n_v ; t12 [ 96ULL ] =
X_idx_18 ; t12 [ 97ULL ] = X_idx_4 ; t12 [ 98ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t12 [ 99ULL ] = Fuel_Cell_Boost_Converter_L_i
; t12 [ 100ULL ] = 0.0 ; t12 [ 101ULL ] = 0.0 ; t12 [ 102ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 103ULL ] = X_idx_13 ; t12 [ 104ULL ]
= X_idx_3 ; t12 [ 105ULL ] = Fuel_Cell_Current_Sensor1_I ; t12 [ 106ULL ] =
Fuel_Cell_Current_Sensor1_I ; t12 [ 107ULL ] = X_idx_13 ; t12 [ 108ULL ] =
X_idx_13 ; t12 [ 109ULL ] = Fuel_Cell_Current_Sensor1_I ; t12 [ 110ULL ] =
0.0 ; t12 [ 111ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 112ULL ] = 0.0
; t12 [ 113ULL ] = ( - X_idx_4 + X_idx_16 * - 1.0E-9 ) - X_idx_17 ; t12 [
114ULL ] = 0.0 ; t12 [ 115ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [
116ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 117ULL ] = X_idx_5 ; t12 [
118ULL ] = X_idx_17 ; t12 [ 119ULL ] = 0.0 ; t12 [ 120ULL ] = U_idx_1 ; t12 [
121ULL ] = U_idx_1 ; t12 [ 122ULL ] = U_idx_1 ; t12 [ 123ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t12 [ 124ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t12 [ 125ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 126ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 127ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t12 [ 128ULL ] = - X_idx_17 ; t12 [ 129ULL ]
= Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 130ULL ] =
Fuel_Cell_Fuel_Cell_x2_Diode_p_v ; t12 [ 131ULL ] = ( ( ( X_idx_4 * 1.0E-6 -
X_idx_5 ) + X_idx_16 * 1.0E-15 ) + X_idx_17 * 0.001001 ) + U_idx_1 ; t12 [
132ULL ] = - X_idx_17 ; t12 [ 133ULL ] = Fuel_Cell_Fuel_Cell_x2_Diode_p_v ;
t12 [ 134ULL ] = U_idx_1 ; t12 [ 135ULL ] = X_idx_17 * - 0.001 ; t12 [ 136ULL
] = U_idx_1 ; t12 [ 137ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 138ULL
] = 0.0 ; t12 [ 139ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 140ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 141ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t12 [ 142ULL ] = 0.0 ; t12 [ 143ULL ] =
U_idx_2 ; t12 [ 144ULL ] = X_idx_13 ; t12 [ 145ULL ] = 0.0 ; t12 [ 146ULL ] =
X_idx_13 ; t12 [ 147ULL ] = X_idx_13 ; t12 [ 148ULL ] = X_idx_13 ; t12 [
149ULL ] = 0.0 ; t12 [ 150ULL ] = t17 ; t12 [ 151ULL ] = t17 ; t12 [ 152ULL ]
= X_idx_13 ; t12 [ 153ULL ] = X_idx_13 ; t12 [ 154ULL ] = t17 ; t12 [ 155ULL
] = 0.0 ; t12 [ 156ULL ] = X_idx_13 ; t12 [ 157ULL ] = 0.0 ; t12 [ 158ULL ] =
X_idx_13 ; t12 [ 159ULL ] = X_idx_13 ; t12 [ 160ULL ] = X_idx_13 ; t12 [
161ULL ] = X_idx_13 ; t12 [ 162ULL ] = 0.0 ; t12 [ 163ULL ] = X_idx_6 ; t12 [
164ULL ] = X_idx_6 ; t12 [ 165ULL ] = U_idx_3 ; t12 [ 166ULL ] = 0.0 ; t12 [
167ULL ] = X_idx_13 ; t12 [ 168ULL ] = 0.0 ; t12 [ 169ULL ] = 0.0 ; t12 [
170ULL ] = t17 ; t12 [ 171ULL ] = Motor_Motor_power_dissipated * 1000.0 ; t12
[ 172ULL ] = X_idx_20 ; t12 [ 173ULL ] = X_idx_21 ; t12 [ 174ULL ] = X_idx_21
; t12 [ 175ULL ] = X_idx_19 ; t12 [ 176ULL ] = X_idx_7 ; t12 [ 177ULL ] =
X_idx_13 ; t12 [ 178ULL ] = X_idx_6 * 9.5492965855137211 ; t12 [ 179ULL ] =
0.0 ; t12 [ 180ULL ] = 0.0 ; t12 [ 181ULL ] = 0.0 ; t12 [ 182ULL ] = X_idx_6
; t12 [ 183ULL ] = U_idx_4 ; t12 [ 184ULL ] = - X_idx_20 ; t12 [ 185ULL ] =
U_idx_4 ; t12 [ 186ULL ] = X_idx_6 ; t12 [ 187ULL ] = X_idx_6 ; t12 [ 188ULL
] = - X_idx_20 ; t12 [ 189ULL ] = - X_idx_20 ; t12 [ 190ULL ] = X_idx_6 ; t12
[ 191ULL ] = X_idx_6 ; t12 [ 192ULL ] = - X_idx_20 ; t12 [ 193ULL ] = -
X_idx_20 ; t12 [ 194ULL ] = - X_idx_20 ; t12 [ 195ULL ] = X_idx_6 ; t12 [
196ULL ] = U_idx_4 ; t12 [ 197ULL ] = U_idx_3 ; t12 [ 198ULL ] = X_idx_13 ;
t12 [ 199ULL ] = 0.0 ; for ( M_idx_0 = 0 ; M_idx_0 < 200 ; M_idx_0 ++ ) { out
. mX [ M_idx_0 ] = t12 [ M_idx_0 ] ; } ( void ) LC ; ( void ) t21 ; return 0
; }
