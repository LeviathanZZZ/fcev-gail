#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_obs_all.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_obs_all ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t252 , NeDsMethodOutput * t253 ) { ETTS0 c_efOut
; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 i_efOut ; ETTS0 k_efOut
; ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut ; ETTS0 s_efOut ; ETTS0 t10 ;
ETTS0 t2 ; ETTS0 u_efOut ; ETTS0 w_efOut ; ETTS0 x_efOut ; PmRealVector out ;
real_T t78 [ 1709 ] ; real_T X [ 394 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ 8 ] ; real_T t79
[ 8 ] ; real_T t81 [ 8 ] ; real_T t83 [ 8 ] ; real_T t85 [ 8 ] ; real_T t91 [
8 ] ; real_T b_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ;
real_T h_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T t69 [ 1
] ; real_T t_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T y_efOut [ 1 ] ;
real_T Battery_System_DC_DC_Converter_power_dissipated ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T Fuel_Cell_Boost_Converter_L_n_v ;
real_T Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1503 ;
real_T intrm_sf_mf_305 ; real_T intrm_sf_mf_609 ; real_T t131 ; real_T t134 ;
real_T t138 ; real_T t139 ; real_T t140 ; real_T t144 ; real_T t153 ; real_T
t159 ; real_T t165 ; real_T t167 ; real_T t171 ; real_T t173 ; real_T t176 ;
real_T t94_idx_0 ; size_t t16 [ 1 ] ; size_t t70 [ 1 ] ; size_t t73 [ 1 ] ;
size_t t119 ; int32_T b ; U_idx_0 = t252 -> mU . mX [ 0 ] ; U_idx_1 = t252 ->
mU . mX [ 1 ] ; U_idx_2 = t252 -> mU . mX [ 2 ] ; U_idx_3 = t252 -> mU . mX [
3 ] ; U_idx_4 = t252 -> mU . mX [ 4 ] ; U_idx_5 = t252 -> mU . mX [ 5 ] ;
U_idx_6 = t252 -> mU . mX [ 6 ] ; U_idx_7 = t252 -> mU . mX [ 7 ] ; U_idx_8 =
t252 -> mU . mX [ 8 ] ; U_idx_9 = t252 -> mU . mX [ 9 ] ; U_idx_10 = t252 ->
mU . mX [ 10 ] ; U_idx_11 = t252 -> mU . mX [ 11 ] ; U_idx_12 = t252 -> mU .
mX [ 12 ] ; for ( b = 0 ; b < 394 ; b ++ ) { X [ b ] = t252 -> mX . mX [ b ]
; } out = t253 -> mOBS_ALL ; Battery_System_DC_DC_Converter_power_dissipated
= ( ( ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) (
X [ 51ULL ] < 0.0 ) * U_idx_1 ) - 0.9 ) / 0.099999999999999978 ; if ( (
real_T ) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [
51ULL ] < 0.0 ) * U_idx_1 <= 0.9 ) {
Battery_System_DC_DC_Converter_power_dissipated = 0.0 ; } else {
Battery_System_DC_DC_Converter_power_dissipated = ( real_T ) ( X [ 51ULL ] >=
0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 >=
1.0 ? 1.0 : Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 3.0 -
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 2.0 ; }
Battery_System_DC_DC_Converter_power_dissipated = X [ 54ULL ] *
Battery_System_DC_DC_Converter_power_dissipated + ( 1.0 -
Battery_System_DC_DC_Converter_power_dissipated ) * X [ 51ULL ] * X [ 51ULL ]
; Fuel_Cell_Boost_Converter_L_i = X [ 56ULL ] * 1.0E-9 + X [ 2ULL ] ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * -
1.0000000000000011 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * -
1.0E-15 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] ;
Fuel_Cell_Current_Sensor1_I = ( ( ( X [ 1ULL ] * 0.1 + X [ 53ULL ] * - 0.1 )
+ X [ 56ULL ] * 1.0E-9 ) - X [ 58ULL ] ) + X [ 2ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 0ULL ] = X [
67ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 1ULL ]
= X [ 4ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
2ULL ] = X [ 68ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 3ULL ] = X [
6ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 4ULL ]
= X [ 71ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
5ULL ] = X [ 69ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 6ULL ] = X [
5ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 7ULL ]
= X [ 70ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
0ULL ] = X [ 73ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 1ULL ] = X [
7ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 2ULL ]
= X [ 74ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
3ULL ] = X [ 9ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 4ULL ] = X [
76ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 5ULL ]
= X [ 72ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
6ULL ] = X [ 8ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 7ULL ] = X [
75ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 0ULL ]
= X [ 77ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
1ULL ] = X [ 10ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 2ULL ] = X [
78ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 3ULL ]
= X [ 12ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
4ULL ] = X [ 81ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 5ULL ] = X [
79ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 6ULL ]
= X [ 11ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
7ULL ] = X [ 80ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 0ULL ] = X [
82ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 1ULL ]
= X [ 13ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
2ULL ] = X [ 83ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 3ULL ] = X [
15ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 4ULL ]
= X [ 86ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
5ULL ] = X [ 84ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 6ULL ] = X [
14ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 7ULL ]
= X [ 85ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 = ( ( ( X [
2ULL ] * - 1.0E-6 + X [ 56ULL ] * - 1.0E-15 ) + X [ 57ULL ] * - 0.001001 ) +
X [ 3ULL ] ) + X [ 90ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 = - X [ 91ULL
] + X [ 100ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v =
( ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * - 1.0E-15 ) + X [ 57ULL ] * -
1.0E-6 ) + X [ 3ULL ] ) + X [ 90ULL ] ; if ( X [ 19ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con = X [
19ULL ] >= 1.0 ? 1.0 : X [ 19ULL ] ; } if ( X [ 20ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 20ULL ] >=
1.0 ? 1.0 : X [ 20ULL ] ; } t131 = X [ 17ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
4124.48151675695 ) ; t79 [ 0ULL ] = X [ 18ULL ] * 100000.0 ; t79 [ 1ULL ] = X
[ 17ULL ] ; t79 [ 2ULL ] = X [ 137ULL ] ; t79 [ 3ULL ] = X [ 19ULL ] ; t79 [
4ULL ] = X [ 132ULL ] ; t79 [ 5ULL ] = X [ 136ULL ] ; t79 [ 6ULL ] = X [
20ULL ] ; t79 [ 7ULL ] = X [ 133ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ;
t119 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t119 ] =
t79 [ t119 ] ; } if ( 1.0 - X [ 19ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = 1.0 - X [ 19ULL ]
; } else if ( 1.0 - X [ 19ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = pmf_exp ( ( ( 1.0
- X [ 19ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 20ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 17ULL ] ; t70 [ 0
] = 52ULL ; t16 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut .
mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL
] , & t16 [ 0ULL ] ) ; t10 = efOut ; tlu2_1d_linear_linear_value ( & b_efOut
[ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] )
; t94_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = pmf_exp ( pmf_log
( X [ 18ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I >= 1.0 ) { t134 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR / ( t134 == 0.0 ?
1.0E-16 : t134 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 19ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; if ( X [
19ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else if
( X [ 19ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 19ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 19ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con = X [ 18ULL ]
/ ( t131 == 0.0 ? 1.0E-16 : t131 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
7.8539816339744827E-5 / 0.001 * 100000.0 ; t81 [ 0ULL ] = X [ 22ULL ] *
100000.0 ; t81 [ 1ULL ] = X [ 21ULL ] ; t81 [ 2ULL ] = X [ 162ULL ] ; t81 [
3ULL ] = X [ 24ULL ] ; t81 [ 4ULL ] = X [ 164ULL ] ; t81 [ 5ULL ] = X [
161ULL ] ; t81 [ 6ULL ] = X [ 23ULL ] ; t81 [ 7ULL ] = X [ 163ULL ] ; for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t79 [ t119 ] = t81 [ t119 ] ; } if (
X [ 24ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = X [ 24ULL ] >=
1.0 ? 1.0 : X [ 24ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 23ULL ] >= 1.0 ?
1.0 : X [ 23ULL ] ; } t140 = X [ 21ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 4124.48151675695 ) ; if
( 1.0 - X [ 24ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 1.0 - X [ 24ULL ] ; }
else if ( 1.0 - X [ 24ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = pmf_exp ( ( ( 1.0 - X [
24ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 1.6701700790245661E-7 ;
} t131 = X [ 23ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W
== 0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 21ULL ] ;
tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = d_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = pmf_exp ( pmf_log ( X
[ 22ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W - 1.0 ) * 461.523 + t131
; intrm_sf_mf_305 = t131 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; } else {
intrm_sf_mf_305 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = intrm_sf_mf_305
* 0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = ( X [ 24ULL ]
- intrm_sf_mf_305 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; if ( X [
24ULL ] - intrm_sf_mf_305 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 0.0 ; } else if ( X [
24ULL ] - intrm_sf_mf_305 >= intrm_sf_mf_305 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 24ULL ] -
intrm_sf_mf_305 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = ( X [ 24ULL ] -
intrm_sf_mf_305 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = X [ 22ULL ] / (
t140 == 0.0 ? 1.0E-16 : t140 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 0.12 / 0.001 * 100000.0
; if ( X [ 27ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 27ULL ] >= 1.0 ?
1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) { t131 = 0.0 ; } else { t131
= X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } t140 = X [ 25ULL ] * ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) - t131 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
461.523 ) + t131 * 4124.48151675695 ) ; t83 [ 0ULL ] = X [ 26ULL ] * 100000.0
; t83 [ 1ULL ] = X [ 25ULL ] ; t83 [ 2ULL ] = X [ 185ULL ] ; t83 [ 3ULL ] = X
[ 27ULL ] ; t83 [ 4ULL ] = X [ 179ULL ] ; t83 [ 5ULL ] = X [ 184ULL ] ; t83 [
6ULL ] = X [ 28ULL ] ; t83 [ 7ULL ] = X [ 180ULL ] ; for ( t119 = 0ULL ; t119
< 8ULL ; t119 ++ ) { t81 [ t119 ] = t83 [ t119 ] ; } if ( 1.0 - X [ 27ULL ]
>= 0.01 ) { intrm_sf_mf_305 = 1.0 - X [ 27ULL ] ; } else if ( 1.0 - X [ 27ULL
] >= - 0.1 ) { intrm_sf_mf_305 = pmf_exp ( ( ( 1.0 - X [ 27ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { intrm_sf_mf_305 = 1.6701700790245661E-7 ; } t131 = X
[ 28ULL ] / ( intrm_sf_mf_305 == 0.0 ? 1.0E-16 : intrm_sf_mf_305 ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 25ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = f_efOut [ 0 ]
; intrm_sf_mf_305 = pmf_exp ( pmf_log ( X [ 26ULL ] * 100000.0 ) - t94_idx_0
) ; if ( intrm_sf_mf_305 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = ( intrm_sf_mf_305 - 1.0
) * 461.523 + t131 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t131 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; }
intrm_sf_mf_609 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR
* 0.01 ; t131 = ( X [ 27ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) / (
intrm_sf_mf_609 == 0.0 ? 1.0E-16 : intrm_sf_mf_609 ) ; if ( X [ 27ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t131 =
0.0 ; } else if ( X [ 27ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t131 =
X [ 27ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t131 = ( X [ 27ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t131 * t131
* 3.0 - t131 * t131 * t131 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 26ULL ] / ( t140 ==
0.0 ? 1.0E-16 : t140 ) * t131 * 7.8539816339744827E-5 / 0.001 * 100000.0 ;
t131 = ( X [ 174ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) -
0.039999990000000013 ; intrm_sf_mf_305 = ( X [ 174ULL ] * - 0.7999998 +
U_idx_3 * 7.9999980000000006 ) + 9.9999999947364415E-9 ; t134 = U_idx_3 *
10.0 ; t85 [ 0ULL ] = X [ 29ULL ] * 100000.0 ; t85 [ 1ULL ] = X [ 30ULL ] ;
t85 [ 2ULL ] = X [ 231ULL ] ; t85 [ 3ULL ] = X [ 32ULL ] ; t85 [ 4ULL ] = X [
233ULL ] ; t85 [ 5ULL ] = X [ 230ULL ] ; t85 [ 6ULL ] = X [ 31ULL ] ; t85 [
7ULL ] = X [ 232ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t83 [
t119 ] = t85 [ t119 ] ; } if ( X [ 32ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 32ULL ] >=
1.0 ? 1.0 : X [ 32ULL ] ; } if ( X [ 31ULL ] <= 0.0 ) { t138 = 0.0 ; } else {
t138 = X [ 31ULL ] >= 1.0 ? 1.0 : X [ 31ULL ] ; } t159 = X [ 30ULL ] * ( ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) - t138
) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 461.523 ) +
t138 * 259.836612622973 ) ; if ( 1.0 - X [ 32ULL ] >= 0.01 ) { t138 = 1.0 - X
[ 32ULL ] ; } else if ( 1.0 - X [ 32ULL ] >= - 0.1 ) { t138 = pmf_exp ( ( (
1.0 - X [ 32ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t138 =
1.6701700790245661E-7 ; } t139 = X [ 31ULL ] / ( t138 == 0.0 ? 1.0E-16 : t138
) * - 36.965491221318985 + 296.802103844292 ; t69 [ 0ULL ] = X [ 30ULL ] ;
tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = h_efOut [ 0 ]
; t138 = pmf_exp ( pmf_log ( X [ 29ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
t138 >= 1.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
( t138 - 1.0 ) * 461.523 + t139 ; t140 = t139 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; } else {
t140 = 1.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
t140 * 0.01 ; t138 = ( X [ 32ULL ] - t140 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; if ( X [
32ULL ] - t140 <= 0.0 ) { t138 = 0.0 ; } else if ( X [ 32ULL ] - t140 >= t140
* 0.01 ) { t138 = X [ 32ULL ] - t140 ; } else { t138 = ( X [ 32ULL ] - t140 )
* ( t138 * t138 * 3.0 - t138 * t138 * t138 * 2.0 ) ; } t139 = U_idx_4 *
837.75804095727813 ; if ( X [ 218ULL ] <= 0.0 ) { intrm_sf_mf_1503 = 0.0 ; }
else { intrm_sf_mf_1503 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if ( X
[ 217ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 = X [ 217ULL
] >= 1.0 ? 1.0 : X [ 217ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( ( ( 1.0 -
intrm_sf_mf_1503 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 ) *
296.802103844292 + intrm_sf_mf_1503 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
259.836612622973 ; intrm_sf_mf_1503 = X [ 29ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) / ( X [
216ULL ] == 0.0 ? 1.0E-16 : X [ 216ULL ] ) ; intrm_sf_mf_1503 = - X [ 208ULL
] / ( intrm_sf_mf_1503 == 0.0 ? 1.0E-16 : intrm_sf_mf_1503 ) * 10.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 = - ( X [
29ULL ] - 1.01325 ) * intrm_sf_mf_1503 * 0.0001 ; t144 = t139 *
0.99999999999999978 / 0.99999999999999978 ; t85 [ 0ULL ] = X [ 250ULL ] ; t85
[ 1ULL ] = X [ 33ULL ] ; t85 [ 2ULL ] = X [ 252ULL ] ; t85 [ 3ULL ] = X [
35ULL ] ; t85 [ 4ULL ] = X [ 254ULL ] ; t85 [ 5ULL ] = X [ 251ULL ] ; t85 [
6ULL ] = X [ 34ULL ] ; t85 [ 7ULL ] = X [ 253ULL ] ; if ( X [ 35ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = X [ 35ULL ] >= 1.0 ?
1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { t153 = 0.0 ; } else { t153
= X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t140 = X [ 33ULL ] * ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ) - t153 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W *
461.523 ) + t153 * 4124.48151675695 ) ; if ( 1.0 - X [ 35ULL ] >= 0.01 ) {
intrm_sf_mf_609 = 1.0 - X [ 35ULL ] ; } else if ( 1.0 - X [ 35ULL ] >= - 0.1
) { intrm_sf_mf_609 = pmf_exp ( ( ( 1.0 - X [ 35ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { intrm_sf_mf_609 = 1.6701700790245661E-7 ; } t153 = X [ 34ULL
] / ( intrm_sf_mf_609 == 0.0 ? 1.0E-16 : intrm_sf_mf_609 ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 33ULL ] ;
tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = j_efOut [ 0 ]
; intrm_sf_mf_609 = pmf_exp ( pmf_log ( X [ 36ULL ] * 100000.0 ) - t94_idx_0
) ; if ( intrm_sf_mf_609 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = (
intrm_sf_mf_609 - 1.0 ) * 461.523 + t153 ; intrm_sf_mf_609 = t153 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; } else {
intrm_sf_mf_609 = 1.0 ; } t94_idx_0 = intrm_sf_mf_609 * 0.01 ; t153 = ( X [
35ULL ] - intrm_sf_mf_609 ) / ( t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; if
( X [ 35ULL ] - intrm_sf_mf_609 <= 0.0 ) { t153 = 0.0 ; } else if ( X [ 35ULL
] - intrm_sf_mf_609 >= intrm_sf_mf_609 * 0.01 ) { t153 = X [ 35ULL ] -
intrm_sf_mf_609 ; } else { t153 = ( X [ 35ULL ] - intrm_sf_mf_609 ) * ( t153
* t153 * 3.0 - t153 * t153 * t153 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = X [ 36ULL ] / ( t140 ==
0.0 ? 1.0E-16 : t140 ) * t153 * 0.00049087385212340522 / 0.001 * 100000.0 ;
if ( X [ 6ULL ] <= 0.0 ) { t153 = 0.0 ; } else { t153 = X [ 6ULL ] >= 1.0 ?
1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) { intrm_sf_mf_609 = 0.0 ; }
else { intrm_sf_mf_609 = X [ 5ULL ] >= 1.0 ? 1.0 : X [ 5ULL ] ; } t140 = X [
4ULL ] * ( ( ( ( 1.0 - t153 ) - intrm_sf_mf_609 ) * 296.802103844292 + t153 *
461.523 ) + intrm_sf_mf_609 * 4124.48151675695 ) ; t153 = X [ 37ULL ] / (
t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( 1.0 - X [ 6ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = 1.0 - X [ 6ULL ] ; }
else if ( 1.0 - X [ 6ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = pmf_exp ( ( ( 1.0 - X
[ 6ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = 1.6701700790245661E-7
; } intrm_sf_mf_609 = X [ 5ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ) * 3827.6794129126583 +
296.802103844292 ; t69 [ 0ULL ] = X [ 4ULL ] ; tlu2_linear_linear_prelookup (
& k_efOut . mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t69 [
0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10 = k_efOut ;
tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = l_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = pmf_exp ( pmf_log ( X
[ 37ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W >= 1.0 ) { t94_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W - 1.0 ) * 461.523 +
intrm_sf_mf_609 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR
= intrm_sf_mf_609 / ( t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ;
intrm_sf_mf_609 = ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) / ( t140 == 0.0
? 1.0E-16 : t140 ) ; if ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) {
intrm_sf_mf_609 = 0.0 ; } else if ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) {
intrm_sf_mf_609 = X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; } else {
intrm_sf_mf_609 = ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * (
intrm_sf_mf_609 * intrm_sf_mf_609 * 3.0 - intrm_sf_mf_609 * intrm_sf_mf_609 *
intrm_sf_mf_609 * 2.0 ) ; } t153 = t153 * intrm_sf_mf_609 *
0.026773120849090417 / 0.001 ; t153 *= 100000.0 ; if ( X [ 9ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = X [ 9ULL ] >= 1.0 ?
1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 8ULL ] >=
1.0 ? 1.0 : X [ 8ULL ] ; } t140 = X [ 7ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W *
461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
4124.48151675695 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = X
[ 38ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( 1.0 - X [ 9ULL ] >= 0.01
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 - X [
9ULL ] ; } else if ( 1.0 - X [ 9ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = pmf_exp ( ( (
1.0 - X [ 9ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
1.6701700790245661E-7 ; } t140 = X [ 8ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 7ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = n_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = pmf_exp (
pmf_log ( X [ 38ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >= 1.0 ) {
t94_idx_0 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR -
1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 9ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 9ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 9ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 9ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 9ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W * t140 *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 0ULL ] = X
[ 299ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 1ULL ] = X [ 39ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 2ULL ] = X
[ 301ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 3ULL ] = X [ 41ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 4ULL ] = X
[ 303ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 5ULL ] = X [ 300ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 6ULL ] = X
[ 40ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [
7ULL ] = X [ 302ULL ] ; if ( X [ 41ULL ] <= 0.0 ) { t165 = 0.0 ; } else {
t165 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 40ULL ] >=
1.0 ? 1.0 : X [ 40ULL ] ; } t140 = X [ 39ULL ] * ( ( ( ( 1.0 - t165 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + t165 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
259.836612622973 ) ; t165 = X [ 42ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ;
if ( 1.0 - X [ 41ULL ] >= 0.01 ) { t167 = 1.0 - X [ 41ULL ] ; } else if ( 1.0
- X [ 41ULL ] >= - 0.1 ) { t167 = pmf_exp ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t167 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 40ULL ] / (
t167 == 0.0 ? 1.0E-16 : t167 ) * - 36.965491221318985 + 296.802103844292 ;
t69 [ 0ULL ] = X [ 39ULL ] ; tlu2_linear_linear_prelookup ( & o_efOut .
mField0 [ 0ULL ] , & o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [
0ULL ] , & t16 [ 0ULL ] ) ; t10 = o_efOut ; tlu2_1d_linear_linear_value ( &
p_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] )
; t94_idx_0 = p_efOut [ 0 ] ; t167 = pmf_exp ( pmf_log ( X [ 42ULL ] *
100000.0 ) - t94_idx_0 ) ; if ( t167 >= 1.0 ) { t94_idx_0 = ( t167 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR / ( t94_idx_0 ==
0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ) / ( t140 == 0.0 ?
1.0E-16 : t140 ) ; if ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else if
( X [ 41ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 2.0 ) ; } t165
= t165 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
0.00049087385212340522 / 0.001 ; t165 *= 100000.0 ; t167 = ( X [ 339ULL ] *
0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
45ULL ] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X [ 45ULL ]
>= 1.0 ? 1.0 : X [ 45ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t140 = 0.0 ; }
else { t140 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } t140 = X [ 43ULL ] *
( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ) - t140 )
* 296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
461.523 ) + t140 * 259.836612622973 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X [ 44ULL ] / ( t140 ==
0.0 ? 1.0E-16 : t140 ) ; t91 [ 0ULL ] = X [ 44ULL ] * 100000.0 ; t91 [ 1ULL ]
= X [ 43ULL ] ; t91 [ 2ULL ] = X [ 350ULL ] ; t91 [ 3ULL ] = X [ 45ULL ] ;
t91 [ 4ULL ] = X [ 345ULL ] ; t91 [ 5ULL ] = X [ 349ULL ] ; t91 [ 6ULL ] = X
[ 46ULL ] ; t91 [ 7ULL ] = X [ 346ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ;
t119 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t119 ] =
t91 [ t119 ] ; } if ( 1.0 - X [ 45ULL ] >= 0.01 ) { t171 = 1.0 - X [ 45ULL ]
; } else if ( 1.0 - X [ 45ULL ] >= - 0.1 ) { t171 = pmf_exp ( ( ( 1.0 - X [
45ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t171 = 1.6701700790245661E-7 ;
} t140 = X [ 46ULL ] / ( t171 == 0.0 ? 1.0E-16 : t171 ) * -
36.965491221318985 + 296.802103844292 ; t69 [ 0ULL ] = X [ 43ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t2 =
q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t2 . mField0 [
0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = r_efOut [ 0 ] ;
t171 = pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t94_idx_0 ) ; if ( t171
>= 1.0 ) { t94_idx_0 = ( t171 - 1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 45ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 45ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * t140 *
0.0019634954084936209 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *= 100000.0 ; t171 =
U_idx_9 * 10.0 ; if ( X [ 12ULL ] <= 0.0 ) { t173 = 0.0 ; } else { t173 = X [
12ULL ] >= 1.0 ? 1.0 : X [ 12ULL ] ; } if ( X [ 11ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 11ULL ] >=
1.0 ? 1.0 : X [ 11ULL ] ; } t140 = X [ 10ULL ] * ( ( ( ( 1.0 - t173 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + t173 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
259.836612622973 ) ; t173 = X [ 47ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ;
if ( 1.0 - X [ 12ULL ] >= 0.01 ) { t176 = 1.0 - X [ 12ULL ] ; } else if ( 1.0
- X [ 12ULL ] >= - 0.1 ) { t176 = pmf_exp ( ( ( 1.0 - X [ 12ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t176 = 1.6701700790245661E-7 ; } t140 = X [ 11ULL
] / ( t176 == 0.0 ? 1.0E-16 : t176 ) * - 36.965491221318985 +
296.802103844292 ; t69 [ 0ULL ] = X [ 10ULL ] ; tlu2_linear_linear_prelookup
( & s_efOut . mField0 [ 0ULL ] , & s_efOut . mField1 [ 0ULL ] , & s_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t69 [
0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10 = s_efOut ;
tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = t_efOut [ 0 ] ; t176 = pmf_exp
( pmf_log ( X [ 47ULL ] * 100000.0 ) - t94_idx_0 ) ; if ( t176 >= 1.0 ) {
t94_idx_0 = ( t176 - 1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 12ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 12ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 12ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 12ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 12ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; } t173 = t173 * t140 *
0.026773120849090417 / 0.001 ; t173 *= 100000.0 ; if ( X [ 15ULL ] <= 0.0 ) {
t176 = 0.0 ; } else { t176 = X [ 15ULL ] >= 1.0 ? 1.0 : X [ 15ULL ] ; } if (
X [ 14ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 14ULL ] >=
1.0 ? 1.0 : X [ 14ULL ] ; } t140 = X [ 13ULL ] * ( ( ( ( 1.0 - t176 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + t176 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
259.836612622973 ) ; t176 = X [ 48ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ;
if ( 1.0 - X [ 15ULL ] >= 0.01 ) { t94_idx_0 = 1.0 - X [ 15ULL ] ; } else if
( 1.0 - X [ 15ULL ] >= - 0.1 ) { t94_idx_0 = pmf_exp ( ( ( 1.0 - X [ 15ULL ]
) - 0.01 ) / 0.01 ) * 0.01 ; } else { t94_idx_0 = 1.6701700790245661E-7 ; }
t140 = X [ 14ULL ] / ( t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) * -
36.965491221318985 + 296.802103844292 ; t69 [ 0ULL ] = X [ 13ULL ] ;
tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = v_efOut [ 0 ]
; t94_idx_0 = pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t94_idx_0 ) ; if
( t94_idx_0 >= 1.0 ) { t94_idx_0 = ( t94_idx_0 - 1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 15ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 15ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 15ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 15ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 15ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; } t176 = t176 * t140 *
0.026773120849090417 / 0.001 ; t176 *= 100000.0 ; t94_idx_0 = ( ( ( ( X [
1ULL ] * 0.1 - X [ 52ULL ] ) + X [ 53ULL ] * - 0.1 ) + X [ 56ULL ] * 1.0E-9 )
- X [ 58ULL ] ) + X [ 2ULL ] ; t69 [ 0ULL ] = X [ 49ULL ] ; t70 [ 0 ] = 23ULL
; tlu2_linear_nearest_prelookup ( & w_efOut . mField0 [ 0ULL ] , & w_efOut .
mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField20 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t2
= w_efOut ; t69 [ 0ULL ] = X [ 391ULL ] ; t73 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & x_efOut . mField0 [ 0ULL ] , & x_efOut .
mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t69 [ 0ULL ] , & t73 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= x_efOut ; tlu2_2d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t2 .
mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 , & t70 [
0ULL ] , & t73 [ 0ULL ] , & t16 [ 0ULL ] ) ; t69 [ 0 ] = y_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t69 [ 0ULL ] ;
t140 = X [ 110ULL ] * 0.00062831853071795862 ; intrm_sf_mf_609 = X [ 323ULL ]
* 0.0031415926535897937 ; t78 [ 0ULL ] = 0.0 ; t78 [ 1ULL ] = U_idx_0 ; t78 [
2ULL ] = U_idx_0 ; t78 [ 3ULL ] = U_idx_1 ; t78 [ 4ULL ] = U_idx_1 ; t78 [
5ULL ] = - X [ 51ULL ] - U_idx_0 ; t78 [ 6ULL ] = 0.0 ; t78 [ 7ULL ] =
U_idx_1 ; t78 [ 8ULL ] = U_idx_1 ; t78 [ 9ULL ] = U_idx_1 ; t78 [ 10ULL ] = X
[ 51ULL ] ; t78 [ 11ULL ] = U_idx_1 ; t78 [ 12ULL ] = 0.0 ; t78 [ 13ULL ] =
0.0 ; t78 [ 14ULL ] = X [ 52ULL ] ; t78 [ 15ULL ] = 0.0 ; t78 [ 16ULL ] = 0.0
; t78 [ 17ULL ] = U_idx_1 ; t78 [ 18ULL ] = X [ 53ULL ] ; t78 [ 19ULL ] =
Battery_System_DC_DC_Converter_power_dissipated * 1000.0 ; t78 [ 20ULL ] = X
[ 54ULL ] * 1000.0 ; t78 [ 21ULL ] = X [ 0ULL ] ; t78 [ 22ULL ] = X [ 53ULL ]
; t78 [ 23ULL ] = 0.0 ; t78 [ 24ULL ] = - X [ 52ULL ] ; t78 [ 25ULL ] = - X [
52ULL ] ; t78 [ 26ULL ] = X [ 53ULL ] ; t78 [ 27ULL ] = X [ 53ULL ] ; t78 [
28ULL ] = 0.0 ; t78 [ 29ULL ] = - X [ 52ULL ] ; t78 [ 30ULL ] = X [ 53ULL ] ;
t78 [ 31ULL ] = 0.0 ; t78 [ 32ULL ] = X [ 53ULL ] ; t78 [ 33ULL ] = X [ 53ULL
] ; t78 [ 34ULL ] = X [ 53ULL ] ; t78 [ 35ULL ] = X [ 53ULL ] ; t78 [ 36ULL ]
= U_idx_1 ; t78 [ 37ULL ] = U_idx_0 ; t78 [ 38ULL ] = - X [ 52ULL ] ; t78 [
39ULL ] = - X [ 52ULL ] ; t78 [ 40ULL ] = X [ 53ULL ] ; t78 [ 41ULL ] = 0.0 ;
t78 [ 42ULL ] = 0.0 ; t78 [ 43ULL ] = X [ 1ULL ] * - 0.1 + X [ 53ULL ] * 0.1
; t78 [ 44ULL ] = 0.0 ; t78 [ 45ULL ] = X [ 53ULL ] ; t78 [ 46ULL ] = X [
53ULL ] ; t78 [ 47ULL ] = X [ 1ULL ] ; t78 [ 48ULL ] = X [ 55ULL ] ; t78 [
49ULL ] = U_idx_10 ; t78 [ 50ULL ] = 0.0 ; t78 [ 51ULL ] = 0.0 ; t78 [ 52ULL
] = Fuel_Cell_Boost_Converter_L_i ; t78 [ 53ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t78 [ 54ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 55ULL ] = X [ 56ULL ] ; t78 [ 56ULL ]
= X [ 2ULL ] ; t78 [ 57ULL ] = Fuel_Cell_Boost_Converter_L_n_v ; t78 [ 58ULL
] = X [ 58ULL ] ; t78 [ 59ULL ] = X [ 2ULL ] ; t78 [ 60ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t78 [ 61ULL ] = Fuel_Cell_Boost_Converter_L_i
; t78 [ 62ULL ] = 0.0 ; t78 [ 63ULL ] = 0.0 ; t78 [ 64ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 65ULL ] = X [ 53ULL ] ; t78 [ 66ULL ]
= X [ 1ULL ] ; t78 [ 67ULL ] = Fuel_Cell_Current_Sensor1_I ; t78 [ 68ULL ] =
Fuel_Cell_Current_Sensor1_I ; t78 [ 69ULL ] = X [ 53ULL ] ; t78 [ 70ULL ] = X
[ 53ULL ] ; t78 [ 71ULL ] = Fuel_Cell_Current_Sensor1_I ; t78 [ 72ULL ] = 0.0
; t78 [ 73ULL ] = X [ 59ULL ] ; t78 [ 74ULL ] = X [ 60ULL ] * 0.1 ; t78 [
75ULL ] = X [ 61ULL ] ; t78 [ 76ULL ] = X [ 62ULL ] ; t78 [ 77ULL ] = X [
63ULL ] ; t78 [ 78ULL ] = X [ 64ULL ] * 0.1 ; t78 [ 79ULL ] = X [ 65ULL ] ;
t78 [ 80ULL ] = X [ 66ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) {
t78 [ t119 + 81ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 89ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 97ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 105ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
113ULL ] = 343.15 ; t78 [ 114ULL ] = X [ 59ULL ] ; t78 [ 115ULL ] = X [ 60ULL
] * 0.1 ; t78 [ 116ULL ] = X [ 61ULL ] ; t78 [ 117ULL ] = X [ 62ULL ] ; t78 [
118ULL ] = X [ 63ULL ] ; t78 [ 119ULL ] = X [ 64ULL ] * 0.1 ; t78 [ 120ULL ]
= X [ 65ULL ] ; t78 [ 121ULL ] = X [ 66ULL ] ; t78 [ 122ULL ] = X [ 87ULL ] ;
t78 [ 123ULL ] = X [ 88ULL ] ; t78 [ 124ULL ] = 343.15 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 125ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 133ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 141ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 149ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
157ULL ] = X [ 57ULL ] ; t78 [ 158ULL ] = X [ 89ULL ] ; t78 [ 159ULL ] = X [
7ULL ] ; t78 [ 160ULL ] = X [ 8ULL ] ; t78 [ 161ULL ] = X [ 9ULL ] ; t78 [
162ULL ] = X [ 13ULL ] ; t78 [ 163ULL ] = X [ 14ULL ] ; t78 [ 164ULL ] = X [
15ULL ] ; t78 [ 165ULL ] = 0.0 ; t78 [ 166ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
167ULL ] = X [ 91ULL ] ; t78 [ 168ULL ] = X [ 92ULL ] ; t78 [ 169ULL ] = X [
13ULL ] ; t78 [ 170ULL ] = X [ 14ULL ] ; t78 [ 171ULL ] = X [ 15ULL ] ; t78 [
172ULL ] = 343.15 ; t78 [ 173ULL ] = - X [ 91ULL ] ; t78 [ 174ULL ] = X [
93ULL ] ; t78 [ 175ULL ] = X [ 94ULL ] ; t78 [ 176ULL ] = X [ 7ULL ] ; t78 [
177ULL ] = X [ 8ULL ] ; t78 [ 178ULL ] = X [ 9ULL ] ; t78 [ 179ULL ] = 343.15
; t78 [ 180ULL ] = - X [ 93ULL ] ; t78 [ 181ULL ] = X [ 95ULL ] ; t78 [
182ULL ] = X [ 96ULL ] ; t78 [ 183ULL ] = X [ 13ULL ] ; t78 [ 184ULL ] = X [
14ULL ] ; t78 [ 185ULL ] = X [ 15ULL ] ; t78 [ 186ULL ] = 343.15 ; t78 [
187ULL ] = - X [ 95ULL ] ; t78 [ 188ULL ] = X [ 99ULL ] ; t78 [ 189ULL ] = X
[ 97ULL ] ; t78 [ 190ULL ] = X [ 7ULL ] ; t78 [ 191ULL ] = X [ 8ULL ] ; t78 [
192ULL ] = X [ 9ULL ] ; t78 [ 193ULL ] = 343.15 ; t78 [ 194ULL ] = - X [
99ULL ] ; t78 [ 195ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 ; t78 [
196ULL ] = X [ 98ULL ] ; t78 [ 197ULL ] = X [ 13ULL ] ; t78 [ 198ULL ] = X [
14ULL ] ; t78 [ 199ULL ] = X [ 15ULL ] ; t78 [ 200ULL ] = 343.15 ; t78 [
201ULL ] = - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50
; t78 [ 202ULL ] = X [ 7ULL ] ; t78 [ 203ULL ] = X [ 8ULL ] ; t78 [ 204ULL ]
= X [ 9ULL ] ; t78 [ 205ULL ] = X [ 13ULL ] ; t78 [ 206ULL ] = X [ 14ULL ] ;
t78 [ 207ULL ] = X [ 15ULL ] ; t78 [ 208ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
209ULL ] = 0.0 ; t78 [ 210ULL ] = 343.15 ; t78 [ 211ULL ] = 343.15 ; t78 [
212ULL ] = 343.15 ; t78 [ 213ULL ] = 343.15 ; t78 [ 214ULL ] = X [ 89ULL ] *
- 1000.0 ; t78 [ 215ULL ] = X [ 89ULL ] * - 1000.0 ; t78 [ 216ULL ] = - X [
89ULL ] ; t78 [ 217ULL ] = 343.15 ; t78 [ 218ULL ] = 0.0 ; t78 [ 219ULL ] =
343.15 ; t78 [ 220ULL ] = X [ 101ULL ] * 1000.0 ; t78 [ 221ULL ] = X [ 16ULL
] - 273.15 ; t78 [ 222ULL ] = 0.0 ; t78 [ 223ULL ] = 1.0 ; t78 [ 224ULL ] = (
- X [ 2ULL ] + X [ 56ULL ] * - 1.0E-9 ) - X [ 57ULL ] ; t78 [ 225ULL ] = 0.0
; t78 [ 226ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 227ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 228ULL ] = X [ 3ULL ] ; t78 [ 229ULL
] = Fuel_Cell_Boost_Converter_L_i ; t78 [ 230ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t78 [ 231ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 232ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 233ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t78 [ 234ULL ] = - X [ 57ULL ] ; t78 [ 235ULL
] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 236ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; t78 [ 237ULL ] = X
[ 90ULL ] ; t78 [ 238ULL ] = - X [ 57ULL ] ; t78 [ 239ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; t78 [ 240ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
241ULL ] = X [ 57ULL ] * - 0.001 ; t78 [ 242ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 243ULL ] = 0.0 ; t78 [ 244ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 245ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 246ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
247ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 248ULL ] = 0.0 ; t78 [
249ULL ] = 343.15 ; t78 [ 250ULL ] = 0.0 ; t78 [ 251ULL ] = 343.15 ; t78 [
252ULL ] = 70.0 ; t78 [ 253ULL ] = 343.15 ; t78 [ 254ULL ] = ( ( ( ( ( - X [
89ULL ] - X [ 101ULL ] ) - X [ 102ULL ] ) - X [ 103ULL ] ) - X [ 104ULL ] ) -
X [ 105ULL ] ) * 1000.0 ; t78 [ 255ULL ] = 0.0 ; t78 [ 256ULL ] = X [ 106ULL
] ; t78 [ 257ULL ] = X [ 107ULL ] * 0.1 ; t78 [ 258ULL ] = X [ 108ULL ] ; t78
[ 259ULL ] = X [ 109ULL ] ; t78 [ 260ULL ] = X [ 110ULL ] ; t78 [ 261ULL ] =
293.15 ; t78 [ 262ULL ] = - 184.19157727996955 + t140 * 1000.0 ; t78 [ 263ULL
] = ( X [ 110ULL ] * 0.00062831853071795862 - 0.18419157727996954 ) *
1591.5494309189535 ; t78 [ 264ULL ] = 0.0 ; t78 [ 265ULL ] = X [ 111ULL ] ;
t78 [ 266ULL ] = 0.101325 ; t78 [ 267ULL ] = X [ 112ULL ] ; t78 [ 268ULL ] =
X [ 113ULL ] ; t78 [ 269ULL ] = X [ 114ULL ] ; t78 [ 270ULL ] = X [ 115ULL ]
; t78 [ 271ULL ] = 0.0 ; t78 [ 272ULL ] = X [ 123ULL ] ; t78 [ 273ULL ] = X [
122ULL ] ; t78 [ 274ULL ] = 293.15 ; t78 [ 275ULL ] = X [ 111ULL ] ; t78 [
276ULL ] = 0.101325 ; t78 [ 277ULL ] = X [ 112ULL ] ; t78 [ 278ULL ] = X [
113ULL ] ; t78 [ 279ULL ] = X [ 115ULL ] ; t78 [ 280ULL ] = X [ 116ULL ] ;
t78 [ 281ULL ] = X [ 117ULL ] ; t78 [ 282ULL ] = X [ 118ULL ] ; t78 [ 283ULL
] = X [ 119ULL ] ; t78 [ 284ULL ] = X [ 120ULL ] ; t78 [ 285ULL ] = X [
121ULL ] ; t78 [ 286ULL ] = X [ 117ULL ] ; t78 [ 287ULL ] = X [ 118ULL ] ;
t78 [ 288ULL ] = X [ 119ULL ] ; t78 [ 289ULL ] = 0.101325 ; t78 [ 290ULL ] =
0.9997 ; t78 [ 291ULL ] = X [ 124ULL ] ; t78 [ 292ULL ] = 293.15 ; t78 [
293ULL ] = - 184.19157727996955 + t140 * 1000.0 ; t78 [ 294ULL ] = U_idx_2 ;
t78 [ 295ULL ] = U_idx_2 * 3.1415926535897929E-6 ; t78 [ 296ULL ] = X [
106ULL ] ; t78 [ 297ULL ] = X [ 107ULL ] * 0.1 ; t78 [ 298ULL ] = X [ 108ULL
] ; t78 [ 299ULL ] = X [ 109ULL ] ; t78 [ 300ULL ] = X [ 125ULL ] ; t78 [
301ULL ] = X [ 126ULL ] * 0.1 ; t78 [ 302ULL ] = X [ 127ULL ] ; t78 [ 303ULL
] = X [ 128ULL ] ; t78 [ 304ULL ] = X [ 20ULL ] ; t78 [ 305ULL ] = X [ 133ULL
] ; t78 [ 306ULL ] = X [ 19ULL ] ; t78 [ 307ULL ] = X [ 130ULL ] ; t78 [
308ULL ] = X [ 17ULL ] - 273.15 ; t78 [ 309ULL ] = X [ 129ULL ] ; t78 [
310ULL ] = X [ 131ULL ] * 0.1 ; t78 [ 311ULL ] = X [ 18ULL ] * 0.1 ; t78 [
312ULL ] = X [ 132ULL ] ; t78 [ 313ULL ] = X [ 134ULL ] ; t78 [ 314ULL ] = -
X [ 117ULL ] ; t78 [ 315ULL ] = X [ 135ULL ] * 0.1 ; for ( t119 = 0ULL ; t119
< 8ULL ; t119 ++ ) { t78 [ t119 + 316ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t119 ] ; } t78 [
324ULL ] = X [ 110ULL ] ; t78 [ 325ULL ] = X [ 136ULL ] ; t78 [ 326ULL ] = X
[ 138ULL ] ; t78 [ 327ULL ] = - X [ 115ULL ] ; t78 [ 328ULL ] = 0.0 ; t78 [
329ULL ] = 0.18419157727996954 - t140 ; t78 [ 330ULL ] = X [ 137ULL ] ; t78 [
331ULL ] = X [ 17ULL ] ; t78 [ 332ULL ] = X [ 20ULL ] ; t78 [ 333ULL ] = X [
19ULL ] ; t78 [ 334ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con ; t78 [
335ULL ] = X [ 106ULL ] ; t78 [ 336ULL ] = X [ 107ULL ] * 0.1 ; t78 [ 337ULL
] = X [ 108ULL ] ; t78 [ 338ULL ] = X [ 109ULL ] ; t78 [ 339ULL ] = X [
138ULL ] ; t78 [ 340ULL ] = X [ 139ULL ] ; t78 [ 341ULL ] = X [ 129ULL ] ;
t78 [ 342ULL ] = X [ 140ULL ] ; t78 [ 343ULL ] = X [ 141ULL ] ; t78 [ 344ULL
] = X [ 142ULL ] ; t78 [ 345ULL ] = X [ 143ULL ] ; t78 [ 346ULL ] = X [
125ULL ] ; t78 [ 347ULL ] = X [ 126ULL ] * 0.1 ; t78 [ 348ULL ] = X [ 127ULL
] ; t78 [ 349ULL ] = X [ 128ULL ] ; t78 [ 350ULL ] = - X [ 115ULL ] ; t78 [
351ULL ] = X [ 144ULL ] ; t78 [ 352ULL ] = - X [ 117ULL ] ; t78 [ 353ULL ] =
- X [ 118ULL ] ; t78 [ 354ULL ] = - X [ 119ULL ] ; t78 [ 355ULL ] = X [
145ULL ] ; t78 [ 356ULL ] = X [ 146ULL ] ; t78 [ 357ULL ] = X [ 140ULL ] ;
t78 [ 358ULL ] = - X [ 118ULL ] ; t78 [ 359ULL ] = 0.0 ; t78 [ 360ULL ] = 0.0
; t78 [ 361ULL ] = X [ 141ULL ] ; t78 [ 362ULL ] = - X [ 119ULL ] ; t78 [
363ULL ] = X [ 125ULL ] ; t78 [ 364ULL ] = X [ 126ULL ] * 0.1 ; t78 [ 365ULL
] = X [ 127ULL ] ; t78 [ 366ULL ] = X [ 128ULL ] ; t78 [ 367ULL ] = U_idx_2 *
0.031415926535897927 * 0.0001 ; t78 [ 368ULL ] = X [ 111ULL ] ; t78 [ 369ULL
] = 0.101325 ; t78 [ 370ULL ] = X [ 112ULL ] ; t78 [ 371ULL ] = X [ 113ULL ]
; t78 [ 372ULL ] = X [ 117ULL ] ; t78 [ 373ULL ] = X [ 125ULL ] ; t78 [
374ULL ] = X [ 126ULL ] * 0.1 ; t78 [ 375ULL ] = X [ 127ULL ] ; t78 [ 376ULL
] = X [ 128ULL ] ; t78 [ 377ULL ] = X [ 115ULL ] ; t78 [ 378ULL ] = X [
153ULL ] ; t78 [ 379ULL ] = X [ 117ULL ] ; t78 [ 380ULL ] = X [ 118ULL ] ;
t78 [ 381ULL ] = X [ 119ULL ] ; t78 [ 382ULL ] = X [ 150ULL ] ; t78 [ 383ULL
] = X [ 149ULL ] ; t78 [ 384ULL ] = X [ 147ULL ] ; t78 [ 385ULL ] = X [
148ULL ] * 0.1 ; t78 [ 386ULL ] = X [ 151ULL ] ; t78 [ 387ULL ] = X [ 152ULL
] ; t78 [ 388ULL ] = X [ 115ULL ] ; t78 [ 389ULL ] = - X [ 115ULL ] ; t78 [
390ULL ] = X [ 111ULL ] ; t78 [ 391ULL ] = 0.101325 ; t78 [ 392ULL ] = X [
112ULL ] ; t78 [ 393ULL ] = X [ 113ULL ] ; t78 [ 394ULL ] = - X [ 115ULL ] ;
t78 [ 395ULL ] = X [ 153ULL ] ; t78 [ 396ULL ] = - X [ 117ULL ] ; t78 [
397ULL ] = - X [ 118ULL ] ; t78 [ 398ULL ] = - X [ 119ULL ] ; t78 [ 399ULL ]
= X [ 150ULL ] ; t78 [ 400ULL ] = X [ 149ULL ] ; t78 [ 401ULL ] = - X [
117ULL ] ; t78 [ 402ULL ] = X [ 118ULL ] ; t78 [ 403ULL ] = - X [ 118ULL ] ;
t78 [ 404ULL ] = X [ 119ULL ] ; t78 [ 405ULL ] = - X [ 119ULL ] ; t78 [
406ULL ] = U_idx_2 ; t78 [ 407ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [
408ULL ] = 0.0 ; t78 [ 409ULL ] = X [ 154ULL ] ; t78 [ 410ULL ] = X [ 155ULL
] * 0.1 ; t78 [ 411ULL ] = X [ 156ULL ] ; t78 [ 412ULL ] = X [ 157ULL ] ; t78
[ 413ULL ] = X [ 158ULL ] ; t78 [ 414ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 415ULL
] = X [ 159ULL ] ; t78 [ 416ULL ] = X [ 160ULL ] ; t78 [ 417ULL ] = X [ 21ULL
] ; t78 [ 418ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 419ULL ] = X [ 23ULL ] ; t78 [
420ULL ] = X [ 24ULL ] ; t78 [ 421ULL ] = X [ 21ULL ] ; t78 [ 422ULL ] = X [
22ULL ] * 0.1 ; t78 [ 423ULL ] = X [ 23ULL ] ; t78 [ 424ULL ] = X [ 24ULL ] ;
t78 [ 425ULL ] = X [ 21ULL ] ; t78 [ 426ULL ] = X [ 22ULL ] * 0.1 ; t78 [
427ULL ] = X [ 23ULL ] ; t78 [ 428ULL ] = X [ 24ULL ] ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 429ULL ] = t79 [ t119 ] ; } t78 [
437ULL ] = X [ 21ULL ] ; t78 [ 438ULL ] = X [ 161ULL ] ; t78 [ 439ULL ] = X [
165ULL ] ; t78 [ 440ULL ] = 0.0 ; t78 [ 441ULL ] = 0.0 ; t78 [ 442ULL ] = 0.0
; t78 [ 443ULL ] = 0.0 ; t78 [ 444ULL ] = X [ 21ULL ] - 273.15 ; t78 [ 445ULL
] = X [ 23ULL ] ; t78 [ 446ULL ] = X [ 163ULL ] ; t78 [ 447ULL ] = X [ 24ULL
] ; t78 [ 448ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 449ULL ] = 0.0 ; t78 [ 450ULL
] = X [ 162ULL ] ; t78 [ 451ULL ] = X [ 21ULL ] ; t78 [ 452ULL ] = X [ 23ULL
] ; t78 [ 453ULL ] = X [ 24ULL ] ; t78 [ 454ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ; t78 [ 455ULL ] =
X [ 158ULL ] ; t78 [ 456ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 457ULL ] = X [
159ULL ] ; t78 [ 458ULL ] = X [ 160ULL ] ; t78 [ 459ULL ] = X [ 165ULL ] ;
t78 [ 460ULL ] = X [ 166ULL ] ; t78 [ 461ULL ] = X [ 167ULL ] ; t78 [ 462ULL
] = X [ 168ULL ] ; t78 [ 463ULL ] = X [ 169ULL ] ; t78 [ 464ULL ] = X [
170ULL ] ; t78 [ 465ULL ] = X [ 171ULL ] ; t78 [ 466ULL ] = X [ 167ULL ] ;
t78 [ 467ULL ] = 0.0 ; t78 [ 468ULL ] = 0.0 ; t78 [ 469ULL ] = 0.0 ; t78 [
470ULL ] = X [ 168ULL ] ; t78 [ 471ULL ] = 0.0 ; t78 [ 472ULL ] = 0.0 ; t78 [
473ULL ] = 0.0 ; t78 [ 474ULL ] = 0.0 ; t78 [ 475ULL ] = 0.0 ; t78 [ 476ULL ]
= X [ 169ULL ] ; t78 [ 477ULL ] = 0.0 ; t78 [ 478ULL ] = 0.0 ; t78 [ 479ULL ]
= 0.0 ; t78 [ 480ULL ] = X [ 164ULL ] ; t78 [ 481ULL ] = X [ 154ULL ] ; t78 [
482ULL ] = X [ 155ULL ] * 0.1 ; t78 [ 483ULL ] = X [ 156ULL ] ; t78 [ 484ULL
] = X [ 157ULL ] ; t78 [ 485ULL ] = X [ 158ULL ] ; t78 [ 486ULL ] = X [ 22ULL
] * 0.1 ; t78 [ 487ULL ] = X [ 159ULL ] ; t78 [ 488ULL ] = X [ 160ULL ] ; t78
[ 489ULL ] = X [ 158ULL ] ; t78 [ 490ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 491ULL
] = X [ 159ULL ] ; t78 [ 492ULL ] = X [ 160ULL ] ; t78 [ 493ULL ] = - X [
167ULL ] ; t78 [ 494ULL ] = - X [ 168ULL ] ; t78 [ 495ULL ] = - X [ 169ULL ]
; t78 [ 496ULL ] = X [ 165ULL ] * - 1000.0 ; t78 [ 497ULL ] = - X [ 165ULL ]
; t78 [ 498ULL ] = 0.0 ; t78 [ 499ULL ] = - X [ 167ULL ] ; t78 [ 500ULL ] = -
X [ 168ULL ] ; t78 [ 501ULL ] = - X [ 169ULL ] ; t78 [ 502ULL ] = - X [
167ULL ] ; t78 [ 503ULL ] = X [ 21ULL ] ; t78 [ 504ULL ] = X [ 21ULL ] ; t78
[ 505ULL ] = X [ 172ULL ] ; t78 [ 506ULL ] = X [ 172ULL ] ; t78 [ 507ULL ] =
X [ 173ULL ] ; t78 [ 508ULL ] = X [ 174ULL ] * 0.1 ; t78 [ 509ULL ] = X [
175ULL ] ; t78 [ 510ULL ] = X [ 176ULL ] ; t78 [ 511ULL ] = X [ 154ULL ] ;
t78 [ 512ULL ] = X [ 155ULL ] * 0.1 ; t78 [ 513ULL ] = X [ 156ULL ] ; t78 [
514ULL ] = X [ 157ULL ] ; t78 [ 515ULL ] = X [ 28ULL ] ; t78 [ 516ULL ] = X [
180ULL ] ; t78 [ 517ULL ] = X [ 27ULL ] ; t78 [ 518ULL ] = X [ 177ULL ] ; t78
[ 519ULL ] = X [ 25ULL ] - 273.15 ; t78 [ 520ULL ] = - X [ 167ULL ] ; t78 [
521ULL ] = X [ 178ULL ] * 0.1 ; t78 [ 522ULL ] = X [ 26ULL ] * 0.1 ; t78 [
523ULL ] = X [ 179ULL ] ; t78 [ 524ULL ] = X [ 182ULL ] ; t78 [ 525ULL ] = X
[ 181ULL ] ; t78 [ 526ULL ] = X [ 183ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 <
8ULL ; t119 ++ ) { t78 [ t119 + 527ULL ] = t81 [ t119 ] ; } t78 [ 535ULL ] =
X [ 172ULL ] ; t78 [ 536ULL ] = X [ 184ULL ] ; t78 [ 537ULL ] = - X [ 165ULL
] ; t78 [ 538ULL ] = X [ 186ULL ] ; t78 [ 539ULL ] = 0.0 ; t78 [ 540ULL ] =
0.0 ; t78 [ 541ULL ] = X [ 185ULL ] ; t78 [ 542ULL ] = X [ 25ULL ] ; t78 [
543ULL ] = X [ 28ULL ] ; t78 [ 544ULL ] = X [ 27ULL ] ; t78 [ 545ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ; t78 [ 546ULL ] = X [
173ULL ] ; t78 [ 547ULL ] = X [ 174ULL ] * 0.1 ; t78 [ 548ULL ] = X [ 175ULL
] ; t78 [ 549ULL ] = X [ 176ULL ] ; t78 [ 550ULL ] = - X [ 165ULL ] ; t78 [
551ULL ] = X [ 187ULL ] ; t78 [ 552ULL ] = - X [ 167ULL ] ; t78 [ 553ULL ] =
- X [ 168ULL ] ; t78 [ 554ULL ] = - X [ 169ULL ] ; t78 [ 555ULL ] = X [
188ULL ] ; t78 [ 556ULL ] = X [ 189ULL ] ; t78 [ 557ULL ] = X [ 154ULL ] ;
t78 [ 558ULL ] = X [ 155ULL ] * 0.1 ; t78 [ 559ULL ] = X [ 156ULL ] ; t78 [
560ULL ] = X [ 157ULL ] ; t78 [ 561ULL ] = X [ 186ULL ] ; t78 [ 562ULL ] = X
[ 190ULL ] ; t78 [ 563ULL ] = X [ 181ULL ] ; t78 [ 564ULL ] = X [ 191ULL ] ;
t78 [ 565ULL ] = X [ 192ULL ] ; t78 [ 566ULL ] = X [ 193ULL ] ; t78 [ 567ULL
] = X [ 194ULL ] ; t78 [ 568ULL ] = - X [ 168ULL ] ; t78 [ 569ULL ] = X [
191ULL ] ; t78 [ 570ULL ] = 0.0 ; t78 [ 571ULL ] = 0.0 ; t78 [ 572ULL ] = - X
[ 169ULL ] ; t78 [ 573ULL ] = X [ 192ULL ] ; t78 [ 574ULL ] = X [ 158ULL ] ;
t78 [ 575ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 576ULL ] = X [ 159ULL ] ; t78 [
577ULL ] = X [ 160ULL ] ; t78 [ 578ULL ] = 0.0 ; t78 [ 579ULL ] = 0.0 ; t78 [
580ULL ] = 0.0 ; t78 [ 581ULL ] = 0.0 ; t78 [ 582ULL ] = X [ 173ULL ] ; t78 [
583ULL ] = X [ 174ULL ] * 0.1 ; t78 [ 584ULL ] = X [ 175ULL ] ; t78 [ 585ULL
] = X [ 176ULL ] ; t78 [ 586ULL ] = 0.040000000000000008 ; t78 [ 587ULL ] =
t131 * 1.0E+6 ; t78 [ 588ULL ] = intrm_sf_mf_305 ; t78 [ 589ULL ] =
0.040000000000000008 ; t78 [ 590ULL ] = 0.005000000000000001 ; t78 [ 591ULL ]
= t131 * - 125000.03125000779 ; t78 [ 592ULL ] = t131 * 1.0E+6 ; t78 [ 593ULL
] = intrm_sf_mf_305 ; t78 [ 594ULL ] = intrm_sf_mf_305 *
7.8539816339744827E-5 ; t78 [ 595ULL ] = X [ 174ULL ] * 99999.999999999985 ;
t78 [ 596ULL ] = ( t134 - 0.05000000000000001 ) * 0.1 ; t78 [ 597ULL ] = t131
* - 125000.03125000779 ; t78 [ 598ULL ] = t134 * 0.1 ; t78 [ 599ULL ] =
0.005000000000000001 ; t78 [ 600ULL ] = ( t134 - 0.05000000000000001 ) * 0.1
; t78 [ 601ULL ] = X [ 173ULL ] ; t78 [ 602ULL ] = X [ 174ULL ] * 0.1 ; t78 [
603ULL ] = X [ 175ULL ] ; t78 [ 604ULL ] = X [ 176ULL ] ; t78 [ 605ULL ] =
0.0 ; t78 [ 606ULL ] = 0.0 ; t78 [ 607ULL ] = 0.0 ; t78 [ 608ULL ] = 0.0 ;
t78 [ 609ULL ] = X [ 174ULL ] * 99999.999999999985 ; t78 [ 610ULL ] =
101324.99999999999 ; t78 [ 611ULL ] = 101324.99999999999 ; t78 [ 612ULL ] = X
[ 173ULL ] ; t78 [ 613ULL ] = X [ 158ULL ] ; t78 [ 614ULL ] = X [ 22ULL ] *
0.1 ; t78 [ 615ULL ] = X [ 159ULL ] ; t78 [ 616ULL ] = X [ 160ULL ] ; t78 [
617ULL ] = intrm_sf_mf_305 * 7.8539816339744827E-5 ; t78 [ 618ULL ] = X [
173ULL ] ; t78 [ 619ULL ] = X [ 174ULL ] * 0.1 ; t78 [ 620ULL ] = X [ 175ULL
] ; t78 [ 621ULL ] = X [ 176ULL ] ; t78 [ 622ULL ] = - X [ 167ULL ] ; t78 [
623ULL ] = X [ 158ULL ] ; t78 [ 624ULL ] = X [ 22ULL ] * 0.1 ; t78 [ 625ULL ]
= X [ 159ULL ] ; t78 [ 626ULL ] = X [ 160ULL ] ; t78 [ 627ULL ] = - X [
165ULL ] ; t78 [ 628ULL ] = X [ 201ULL ] ; t78 [ 629ULL ] = - X [ 167ULL ] ;
t78 [ 630ULL ] = - X [ 168ULL ] ; t78 [ 631ULL ] = - X [ 169ULL ] ; t78 [
632ULL ] = X [ 198ULL ] ; t78 [ 633ULL ] = X [ 197ULL ] ; t78 [ 634ULL ] = X
[ 195ULL ] ; t78 [ 635ULL ] = X [ 196ULL ] * 0.1 ; t78 [ 636ULL ] = X [
199ULL ] ; t78 [ 637ULL ] = X [ 200ULL ] ; t78 [ 638ULL ] = - X [ 165ULL ] ;
t78 [ 639ULL ] = X [ 165ULL ] ; t78 [ 640ULL ] = X [ 173ULL ] ; t78 [ 641ULL
] = X [ 174ULL ] * 0.1 ; t78 [ 642ULL ] = X [ 175ULL ] ; t78 [ 643ULL ] = X [
176ULL ] ; t78 [ 644ULL ] = X [ 165ULL ] ; t78 [ 645ULL ] = X [ 201ULL ] ;
t78 [ 646ULL ] = X [ 167ULL ] ; t78 [ 647ULL ] = X [ 168ULL ] ; t78 [ 648ULL
] = X [ 169ULL ] ; t78 [ 649ULL ] = X [ 198ULL ] ; t78 [ 650ULL ] = X [
197ULL ] ; t78 [ 651ULL ] = X [ 167ULL ] ; t78 [ 652ULL ] = - X [ 168ULL ] ;
t78 [ 653ULL ] = X [ 168ULL ] ; t78 [ 654ULL ] = - X [ 169ULL ] ; t78 [
655ULL ] = X [ 169ULL ] ; t78 [ 656ULL ] = t134 * 0.1 ; t78 [ 657ULL ] =
U_idx_3 ; t78 [ 658ULL ] = X [ 202ULL ] ; t78 [ 659ULL ] = 0.101325 ; t78 [
660ULL ] = X [ 203ULL ] ; t78 [ 661ULL ] = X [ 204ULL ] ; t78 [ 662ULL ] = X
[ 205ULL ] ; t78 [ 663ULL ] = X [ 206ULL ] ; t78 [ 664ULL ] = 0.5 ; t78 [
665ULL ] = X [ 214ULL ] ; t78 [ 666ULL ] = X [ 213ULL ] ; t78 [ 667ULL ] =
293.15 ; t78 [ 668ULL ] = X [ 202ULL ] ; t78 [ 669ULL ] = 0.101325 ; t78 [
670ULL ] = X [ 203ULL ] ; t78 [ 671ULL ] = X [ 204ULL ] ; t78 [ 672ULL ] = X
[ 206ULL ] ; t78 [ 673ULL ] = X [ 207ULL ] ; t78 [ 674ULL ] = X [ 208ULL ] ;
t78 [ 675ULL ] = X [ 209ULL ] ; t78 [ 676ULL ] = X [ 210ULL ] ; t78 [ 677ULL
] = X [ 211ULL ] ; t78 [ 678ULL ] = X [ 212ULL ] ; t78 [ 679ULL ] = X [
208ULL ] ; t78 [ 680ULL ] = X [ 209ULL ] ; t78 [ 681ULL ] = X [ 210ULL ] ;
t78 [ 682ULL ] = 0.101325 ; t78 [ 683ULL ] = 0.21 ; t78 [ 684ULL ] = X [
215ULL ] ; t78 [ 685ULL ] = X [ 216ULL ] ; t78 [ 686ULL ] = X [ 29ULL ] * 0.1
; t78 [ 687ULL ] = X [ 217ULL ] ; t78 [ 688ULL ] = X [ 218ULL ] ; t78 [
689ULL ] = X [ 202ULL ] ; t78 [ 690ULL ] = 0.101325 ; t78 [ 691ULL ] = X [
203ULL ] ; t78 [ 692ULL ] = X [ 204ULL ] ; t78 [ 693ULL ] = X [ 216ULL ] ;
t78 [ 694ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 695ULL ] = X [ 217ULL ] ; t78 [
696ULL ] = X [ 218ULL ] ; t78 [ 697ULL ] = X [ 220ULL ] ; t78 [ 698ULL ] = X
[ 223ULL ] ; t78 [ 699ULL ] = X [ 202ULL ] ; t78 [ 700ULL ] = 0.101325 ; t78
[ 701ULL ] = X [ 203ULL ] ; t78 [ 702ULL ] = X [ 204ULL ] ; t78 [ 703ULL ] =
- X [ 206ULL ] ; t78 [ 704ULL ] = X [ 224ULL ] ; t78 [ 705ULL ] = - X [
208ULL ] ; t78 [ 706ULL ] = - X [ 209ULL ] ; t78 [ 707ULL ] = - X [ 210ULL ]
; t78 [ 708ULL ] = X [ 225ULL ] ; t78 [ 709ULL ] = X [ 226ULL ] ; t78 [
710ULL ] = - X [ 208ULL ] ; t78 [ 711ULL ] = X [ 221ULL ] ; t78 [ 712ULL ] =
X [ 222ULL ] ; t78 [ 713ULL ] = X [ 216ULL ] ; t78 [ 714ULL ] = X [ 29ULL ] *
0.1 ; t78 [ 715ULL ] = X [ 217ULL ] ; t78 [ 716ULL ] = X [ 218ULL ] ; t78 [
717ULL ] = X [ 219ULL ] ; t78 [ 718ULL ] = X [ 224ULL ] ; t78 [ 719ULL ] = X
[ 208ULL ] ; t78 [ 720ULL ] = X [ 209ULL ] ; t78 [ 721ULL ] = X [ 210ULL ] ;
t78 [ 722ULL ] = X [ 225ULL ] ; t78 [ 723ULL ] = X [ 226ULL ] ; t78 [ 724ULL
] = X [ 208ULL ] ; t78 [ 725ULL ] = - X [ 208ULL ] ; t78 [ 726ULL ] = - X [
206ULL ] ; t78 [ 727ULL ] = X [ 219ULL ] ; t78 [ 728ULL ] = - X [ 209ULL ] ;
t78 [ 729ULL ] = X [ 209ULL ] ; t78 [ 730ULL ] = - X [ 210ULL ] ; t78 [
731ULL ] = X [ 210ULL ] ; t78 [ 732ULL ] = X [ 216ULL ] ; t78 [ 733ULL ] = X
[ 29ULL ] * 0.1 ; t78 [ 734ULL ] = X [ 217ULL ] ; t78 [ 735ULL ] = X [ 218ULL
] ; t78 [ 736ULL ] = X [ 227ULL ] ; t78 [ 737ULL ] = X [ 29ULL ] * 0.1 ; t78
[ 738ULL ] = X [ 228ULL ] ; t78 [ 739ULL ] = X [ 229ULL ] ; t78 [ 740ULL ] =
X [ 30ULL ] ; t78 [ 741ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 742ULL ] = X [ 31ULL
] ; t78 [ 743ULL ] = X [ 32ULL ] ; t78 [ 744ULL ] = X [ 30ULL ] ; t78 [
745ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 746ULL ] = X [ 31ULL ] ; t78 [ 747ULL ]
= X [ 32ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 +
748ULL ] = t83 [ t119 ] ; } t78 [ 756ULL ] = X [ 30ULL ] ; t78 [ 757ULL ] = X
[ 230ULL ] ; t78 [ 758ULL ] = - X [ 219ULL ] ; t78 [ 759ULL ] = X [ 234ULL ]
; t78 [ 760ULL ] = 0.0 ; t78 [ 761ULL ] = 0.0 ; t78 [ 762ULL ] = 0.0 ; t78 [
763ULL ] = X [ 30ULL ] - 273.15 ; t78 [ 764ULL ] = X [ 31ULL ] ; t78 [ 765ULL
] = X [ 232ULL ] ; t78 [ 766ULL ] = X [ 32ULL ] ; t78 [ 767ULL ] = X [ 29ULL
] * 0.1 ; t78 [ 768ULL ] = 0.0 ; t78 [ 769ULL ] = X [ 231ULL ] ; t78 [ 770ULL
] = X [ 30ULL ] ; t78 [ 771ULL ] = X [ 31ULL ] ; t78 [ 772ULL ] = X [ 32ULL ]
; t78 [ 773ULL ] = X [ 29ULL ] / ( t159 == 0.0 ? 1.0E-16 : t159 ) * t138 *
0.0003 / 0.001 * 100000.0 ; t78 [ 774ULL ] = X [ 216ULL ] ; t78 [ 775ULL ] =
X [ 29ULL ] * 0.1 ; t78 [ 776ULL ] = X [ 217ULL ] ; t78 [ 777ULL ] = X [
218ULL ] ; t78 [ 778ULL ] = - X [ 219ULL ] ; t78 [ 779ULL ] = X [ 235ULL ] ;
t78 [ 780ULL ] = - X [ 208ULL ] ; t78 [ 781ULL ] = - X [ 209ULL ] ; t78 [
782ULL ] = - X [ 210ULL ] ; t78 [ 783ULL ] = X [ 236ULL ] ; t78 [ 784ULL ] =
X [ 237ULL ] ; t78 [ 785ULL ] = X [ 227ULL ] ; t78 [ 786ULL ] = X [ 29ULL ] *
0.1 ; t78 [ 787ULL ] = X [ 228ULL ] ; t78 [ 788ULL ] = X [ 229ULL ] ; t78 [
789ULL ] = X [ 234ULL ] ; t78 [ 790ULL ] = X [ 238ULL ] ; t78 [ 791ULL ] = X
[ 239ULL ] ; t78 [ 792ULL ] = X [ 240ULL ] ; t78 [ 793ULL ] = X [ 241ULL ] ;
t78 [ 794ULL ] = X [ 242ULL ] ; t78 [ 795ULL ] = X [ 243ULL ] ; t78 [ 796ULL
] = - X [ 208ULL ] ; t78 [ 797ULL ] = X [ 239ULL ] ; t78 [ 798ULL ] = 0.0 ;
t78 [ 799ULL ] = 0.0 ; t78 [ 800ULL ] = - X [ 209ULL ] ; t78 [ 801ULL ] = X [
240ULL ] ; t78 [ 802ULL ] = 0.0 ; t78 [ 803ULL ] = 0.0 ; t78 [ 804ULL ] = 0.0
; t78 [ 805ULL ] = 0.0 ; t78 [ 806ULL ] = - X [ 210ULL ] ; t78 [ 807ULL ] = X
[ 241ULL ] ; t78 [ 808ULL ] = 0.0 ; t78 [ 809ULL ] = 0.0 ; t78 [ 810ULL ] = X
[ 233ULL ] ; t78 [ 811ULL ] = X [ 227ULL ] ; t78 [ 812ULL ] = X [ 29ULL ] *
0.1 ; t78 [ 813ULL ] = X [ 228ULL ] ; t78 [ 814ULL ] = X [ 229ULL ] ; t78 [
815ULL ] = X [ 227ULL ] ; t78 [ 816ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 817ULL ]
= X [ 228ULL ] ; t78 [ 818ULL ] = X [ 229ULL ] ; t78 [ 819ULL ] = - X [
239ULL ] ; t78 [ 820ULL ] = - X [ 240ULL ] ; t78 [ 821ULL ] = - X [ 241ULL ]
; t78 [ 822ULL ] = X [ 234ULL ] * - 1000.0 ; t78 [ 823ULL ] = - X [ 234ULL ]
; t78 [ 824ULL ] = 0.0 ; t78 [ 825ULL ] = - X [ 239ULL ] ; t78 [ 826ULL ] = -
X [ 240ULL ] ; t78 [ 827ULL ] = - X [ 241ULL ] ; t78 [ 828ULL ] = - X [
239ULL ] ; t78 [ 829ULL ] = U_idx_4 ; t78 [ 830ULL ] = t139 *
9.5492965855137211 ; t78 [ 831ULL ] = X [ 227ULL ] ; t78 [ 832ULL ] = X [
29ULL ] * 0.1 ; t78 [ 833ULL ] = X [ 228ULL ] ; t78 [ 834ULL ] = X [ 229ULL ]
; t78 [ 835ULL ] = X [ 30ULL ] ; t78 [ 836ULL ] = X [ 30ULL ] ; t78 [ 837ULL
] = X [ 216ULL ] ; t78 [ 838ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 839ULL ] = X [
217ULL ] ; t78 [ 840ULL ] = X [ 218ULL ] ; t78 [ 841ULL ] = X [ 202ULL ] ;
t78 [ 842ULL ] = 0.101325 ; t78 [ 843ULL ] = X [ 203ULL ] ; t78 [ 844ULL ] =
X [ 204ULL ] ; t78 [ 845ULL ] = 0.9 ; t78 [ 846ULL ] = X [ 216ULL ] ; t78 [
847ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 848ULL ] = X [ 217ULL ] ; t78 [ 849ULL ]
= X [ 218ULL ] ; t78 [ 850ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 * 1000.0 ; t78
[ 851ULL ] = 0.9 ; t78 [ 852ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
1111.1111111111111 ; t78 [ 853ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
1111.1111111111111 ; t78 [ 854ULL ] = - ( X [ 29ULL ] - 1.01325 ) *
99999.999999999985 ; t78 [ 855ULL ] = intrm_sf_mf_1503 * 1.0E-6 ; t78 [
856ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
1000.0 ; t78 [ 857ULL ] = X [ 202ULL ] ; t78 [ 858ULL ] = 0.101325 ; t78 [
859ULL ] = X [ 203ULL ] ; t78 [ 860ULL ] = X [ 204ULL ] ; t78 [ 861ULL ] = X
[ 216ULL ] ; t78 [ 862ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 863ULL ] = X [ 217ULL
] ; t78 [ 864ULL ] = X [ 218ULL ] ; t78 [ 865ULL ] = - ( X [ 29ULL ] -
1.01325 ) * 99999.999999999985 ; t78 [ 866ULL ] = 101324.99999999999 ; t78 [
867ULL ] = 101324.99999999999 ; t78 [ 868ULL ] = X [ 202ULL ] - X [ 216ULL ]
; t78 [ 869ULL ] = X [ 216ULL ] ; t78 [ 870ULL ] = X [ 29ULL ] * 0.1 ; t78 [
871ULL ] = X [ 217ULL ] ; t78 [ 872ULL ] = X [ 218ULL ] ; t78 [ 873ULL ] = X
[ 216ULL ] ; t78 [ 874ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 875ULL ] = X [ 217ULL
] ; t78 [ 876ULL ] = X [ 218ULL ] ; t78 [ 877ULL ] = 0.0 ; t78 [ 878ULL ] =
0.0 ; t78 [ 879ULL ] = 0.0 ; t78 [ 880ULL ] = 0.0 ; t78 [ 881ULL ] = - X [
219ULL ] ; t78 [ 882ULL ] = intrm_sf_mf_1503 * 1.0E-6 ; t78 [ 883ULL ] = - X
[ 208ULL ] ; t78 [ 884ULL ] = - X [ 209ULL ] ; t78 [ 885ULL ] = - X [ 210ULL
] ; t78 [ 886ULL ] = U_idx_4 ; t78 [ 887ULL ] = 0.0 ; t78 [ 888ULL ] = 0.0 ;
t78 [ 889ULL ] = 0.0 ; t78 [ 890ULL ] = 0.0 ; t78 [ 891ULL ] = 0.0 ; t78 [
892ULL ] = 0.0 ; t78 [ 893ULL ] = 0.0 ; t78 [ 894ULL ] = 0.0 ; t78 [ 895ULL ]
= X [ 244ULL ] ; t78 [ 896ULL ] = t144 * 0.99999999999999978 /
0.99999999999999978 * 9.5492965855137211 ; t78 [ 897ULL ] = - X [ 208ULL ] ;
t78 [ 898ULL ] = X [ 29ULL ] * 99999.999999999985 ; t78 [ 899ULL ] =
101324.99999999999 ; t78 [ 900ULL ] = X [ 244ULL ] ; t78 [ 901ULL ] = X [
202ULL ] ; t78 [ 902ULL ] = 0.101325 ; t78 [ 903ULL ] = X [ 203ULL ] ; t78 [
904ULL ] = X [ 204ULL ] ; t78 [ 905ULL ] = 0.0 ; t78 [ 906ULL ] = 0.0 ; t78 [
907ULL ] = 0.0 ; t78 [ 908ULL ] = 0.0 ; t78 [ 909ULL ] = 101324.99999999999 ;
t78 [ 910ULL ] = 101324.99999999999 ; t78 [ 911ULL ] = 101324.99999999999 ;
t78 [ 912ULL ] = X [ 202ULL ] ; t78 [ 913ULL ] = X [ 216ULL ] ; t78 [ 914ULL
] = X [ 29ULL ] * 0.1 ; t78 [ 915ULL ] = X [ 217ULL ] ; t78 [ 916ULL ] = X [
218ULL ] ; t78 [ 917ULL ] = 0.0 ; t78 [ 918ULL ] = 0.0 ; t78 [ 919ULL ] = 0.0
; t78 [ 920ULL ] = 0.0 ; t78 [ 921ULL ] = X [ 29ULL ] * 99999.999999999985 ;
t78 [ 922ULL ] = 101324.99999999999 ; t78 [ 923ULL ] = 101324.99999999999 ;
t78 [ 924ULL ] = X [ 216ULL ] ; t78 [ 925ULL ] = X [ 202ULL ] ; t78 [ 926ULL
] = 0.101325 ; t78 [ 927ULL ] = X [ 203ULL ] ; t78 [ 928ULL ] = X [ 204ULL ]
; t78 [ 929ULL ] = - X [ 208ULL ] ; t78 [ 930ULL ] = X [ 216ULL ] ; t78 [
931ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 932ULL ] = X [ 217ULL ] ; t78 [ 933ULL ]
= X [ 218ULL ] ; t78 [ 934ULL ] = t144 * 9.5492965855137211 ; t78 [ 935ULL ]
= X [ 154ULL ] ; t78 [ 936ULL ] = X [ 155ULL ] * 0.1 ; t78 [ 937ULL ] = X [
156ULL ] ; t78 [ 938ULL ] = X [ 157ULL ] ; t78 [ 939ULL ] = X [ 245ULL ] ;
t78 [ 940ULL ] = X [ 246ULL ] * 0.1 ; t78 [ 941ULL ] = X [ 247ULL ] ; t78 [
942ULL ] = X [ 248ULL ] ; t78 [ 943ULL ] = U_idx_5 ; t78 [ 944ULL ] = X [
249ULL ] ; t78 [ 945ULL ] = X [ 33ULL ] ; t78 [ 946ULL ] = X [ 34ULL ] ; t78
[ 947ULL ] = X [ 35ULL ] ; t78 [ 948ULL ] = U_idx_6 ; t78 [ 949ULL ] = -
U_idx_5 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 950ULL ]
= t85 [ t119 ] ; } t78 [ 958ULL ] = X [ 253ULL ] ; t78 [ 959ULL ] = X [
250ULL ] * 1.0E-5 * 99999.999999999985 ; t78 [ 960ULL ] = X [ 33ULL ] ; t78 [
961ULL ] = X [ 252ULL ] ; t78 [ 962ULL ] = X [ 252ULL ] ; t78 [ 963ULL ] = X
[ 255ULL ] ; t78 [ 964ULL ] = X [ 255ULL ] ; t78 [ 965ULL ] = X [ 154ULL ] ;
t78 [ 966ULL ] = X [ 155ULL ] * 0.1 ; t78 [ 967ULL ] = X [ 156ULL ] ; t78 [
968ULL ] = X [ 157ULL ] ; t78 [ 969ULL ] = X [ 245ULL ] ; t78 [ 970ULL ] = X
[ 246ULL ] * 0.1 ; t78 [ 971ULL ] = X [ 247ULL ] ; t78 [ 972ULL ] = X [
248ULL ] ; t78 [ 973ULL ] = X [ 34ULL ] ; t78 [ 974ULL ] = X [ 253ULL ] ; t78
[ 975ULL ] = X [ 35ULL ] ; t78 [ 976ULL ] = X [ 256ULL ] ; t78 [ 977ULL ] = X
[ 33ULL ] - 273.15 ; t78 [ 978ULL ] = - X [ 181ULL ] ; t78 [ 979ULL ] = X [
257ULL ] * 0.1 ; t78 [ 980ULL ] = X [ 36ULL ] * 0.1 ; t78 [ 981ULL ] = X [
254ULL ] ; t78 [ 982ULL ] = X [ 259ULL ] ; t78 [ 983ULL ] = X [ 258ULL ] ;
t78 [ 984ULL ] = X [ 260ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119
++ ) { t78 [ t119 + 985ULL ] = t85 [ t119 ] ; } t78 [ 993ULL ] = X [ 255ULL ]
; t78 [ 994ULL ] = X [ 251ULL ] ; t78 [ 995ULL ] = - X [ 186ULL ] ; t78 [
996ULL ] = X [ 261ULL ] ; t78 [ 997ULL ] = - X [ 249ULL ] ; t78 [ 998ULL ] =
0.0 ; t78 [ 999ULL ] = X [ 252ULL ] ; t78 [ 1000ULL ] = X [ 33ULL ] ; t78 [
1001ULL ] = X [ 34ULL ] ; t78 [ 1002ULL ] = X [ 35ULL ] ; t78 [ 1003ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ; t78 [ 1004ULL ] = X [
154ULL ] ; t78 [ 1005ULL ] = X [ 155ULL ] * 0.1 ; t78 [ 1006ULL ] = X [
156ULL ] ; t78 [ 1007ULL ] = X [ 157ULL ] ; t78 [ 1008ULL ] = - X [ 186ULL ]
; t78 [ 1009ULL ] = X [ 262ULL ] ; t78 [ 1010ULL ] = - X [ 181ULL ] ; t78 [
1011ULL ] = - X [ 191ULL ] ; t78 [ 1012ULL ] = - X [ 192ULL ] ; t78 [ 1013ULL
] = X [ 263ULL ] ; t78 [ 1014ULL ] = X [ 264ULL ] ; t78 [ 1015ULL ] = X [
245ULL ] ; t78 [ 1016ULL ] = X [ 246ULL ] * 0.1 ; t78 [ 1017ULL ] = X [
247ULL ] ; t78 [ 1018ULL ] = X [ 248ULL ] ; t78 [ 1019ULL ] = X [ 261ULL ] ;
t78 [ 1020ULL ] = X [ 265ULL ] ; t78 [ 1021ULL ] = X [ 258ULL ] ; t78 [
1022ULL ] = X [ 266ULL ] ; t78 [ 1023ULL ] = X [ 267ULL ] ; t78 [ 1024ULL ] =
X [ 268ULL ] ; t78 [ 1025ULL ] = X [ 269ULL ] ; t78 [ 1026ULL ] = - X [
191ULL ] ; t78 [ 1027ULL ] = X [ 266ULL ] ; t78 [ 1028ULL ] = 0.0 ; t78 [
1029ULL ] = U_idx_5 ; t78 [ 1030ULL ] = - X [ 192ULL ] ; t78 [ 1031ULL ] = X
[ 267ULL ] ; t78 [ 1032ULL ] = U_idx_6 ; t78 [ 1033ULL ] = U_idx_5 ; t78 [
1034ULL ] = X [ 59ULL ] ; t78 [ 1035ULL ] = X [ 60ULL ] * 0.1 ; t78 [ 1036ULL
] = X [ 61ULL ] ; t78 [ 1037ULL ] = X [ 62ULL ] ; for ( t119 = 0ULL ; t119 <
8ULL ; t119 ++ ) { t78 [ t119 + 1038ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1046ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } t78 [
1054ULL ] = 343.15 ; t78 [ 1055ULL ] = X [ 245ULL ] ; t78 [ 1056ULL ] = X [
246ULL ] * 0.1 ; t78 [ 1057ULL ] = X [ 247ULL ] ; t78 [ 1058ULL ] = X [
248ULL ] ; t78 [ 1059ULL ] = X [ 59ULL ] ; t78 [ 1060ULL ] = X [ 60ULL ] *
0.1 ; t78 [ 1061ULL ] = X [ 61ULL ] ; t78 [ 1062ULL ] = X [ 62ULL ] ; t78 [
1063ULL ] = X [ 5ULL ] ; t78 [ 1064ULL ] = X [ 70ULL ] ; t78 [ 1065ULL ] = X
[ 6ULL ] ; t78 [ 1066ULL ] = X [ 270ULL ] ; t78 [ 1067ULL ] = X [ 4ULL ] -
273.15 ; t78 [ 1068ULL ] = - X [ 258ULL ] ; t78 [ 1069ULL ] = X [ 271ULL ] *
0.1 ; t78 [ 1070ULL ] = X [ 37ULL ] * 0.1 ; t78 [ 1071ULL ] = X [ 71ULL ] ;
t78 [ 1072ULL ] = X [ 273ULL ] ; t78 [ 1073ULL ] = X [ 272ULL ] ; t78 [
1074ULL ] = X [ 274ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ )
{ t78 [ t119 + 1075ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } t78 [
1083ULL ] = 343.15 ; t78 [ 1084ULL ] = X [ 69ULL ] ; t78 [ 1085ULL ] = - X [
261ULL ] ; t78 [ 1086ULL ] = X [ 275ULL ] ; t78 [ 1087ULL ] = 0.0 ; t78 [
1088ULL ] = X [ 102ULL ] ; t78 [ 1089ULL ] = X [ 68ULL ] ; t78 [ 1090ULL ] =
X [ 4ULL ] ; t78 [ 1091ULL ] = X [ 5ULL ] ; t78 [ 1092ULL ] = X [ 6ULL ] ;
t78 [ 1093ULL ] = t153 ; t78 [ 1094ULL ] = X [ 245ULL ] ; t78 [ 1095ULL ] = X
[ 246ULL ] * 0.1 ; t78 [ 1096ULL ] = X [ 247ULL ] ; t78 [ 1097ULL ] = X [
248ULL ] ; t78 [ 1098ULL ] = - X [ 261ULL ] ; t78 [ 1099ULL ] = X [ 276ULL ]
; t78 [ 1100ULL ] = - X [ 258ULL ] ; t78 [ 1101ULL ] = - X [ 266ULL ] ; t78 [
1102ULL ] = - X [ 267ULL ] ; t78 [ 1103ULL ] = X [ 277ULL ] ; t78 [ 1104ULL ]
= X [ 278ULL ] ; t78 [ 1105ULL ] = X [ 59ULL ] ; t78 [ 1106ULL ] = X [ 60ULL
] * 0.1 ; t78 [ 1107ULL ] = X [ 61ULL ] ; t78 [ 1108ULL ] = X [ 62ULL ] ; t78
[ 1109ULL ] = X [ 275ULL ] ; t78 [ 1110ULL ] = X [ 279ULL ] ; t78 [ 1111ULL ]
= X [ 272ULL ] ; t78 [ 1112ULL ] = X [ 280ULL ] ; t78 [ 1113ULL ] = X [
281ULL ] ; t78 [ 1114ULL ] = X [ 282ULL ] ; t78 [ 1115ULL ] = X [ 283ULL ] ;
t78 [ 1116ULL ] = - X [ 266ULL ] ; t78 [ 1117ULL ] = X [ 280ULL ] ; t78 [
1118ULL ] = 0.0 ; t78 [ 1119ULL ] = 0.0 ; t78 [ 1120ULL ] = - X [ 267ULL ] ;
t78 [ 1121ULL ] = X [ 281ULL ] ; t78 [ 1122ULL ] = X [ 59ULL ] ; t78 [
1123ULL ] = X [ 60ULL ] * 0.1 ; t78 [ 1124ULL ] = X [ 61ULL ] ; t78 [ 1125ULL
] = X [ 62ULL ] ; t78 [ 1126ULL ] = X [ 106ULL ] ; t78 [ 1127ULL ] = X [
107ULL ] * 0.1 ; t78 [ 1128ULL ] = X [ 108ULL ] ; t78 [ 1129ULL ] = X [
109ULL ] ; t78 [ 1130ULL ] = X [ 8ULL ] ; t78 [ 1131ULL ] = X [ 75ULL ] ; t78
[ 1132ULL ] = X [ 9ULL ] ; t78 [ 1133ULL ] = X [ 284ULL ] ; t78 [ 1134ULL ] =
X [ 7ULL ] - 273.15 ; t78 [ 1135ULL ] = - X [ 272ULL ] ; t78 [ 1136ULL ] = X
[ 285ULL ] * 0.1 ; t78 [ 1137ULL ] = X [ 38ULL ] * 0.1 ; t78 [ 1138ULL ] = X
[ 76ULL ] ; t78 [ 1139ULL ] = X [ 286ULL ] ; t78 [ 1140ULL ] = - X [ 129ULL ]
; t78 [ 1141ULL ] = X [ 287ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ;
t119 ++ ) { t78 [ t119 + 1142ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } t78 [
1150ULL ] = 343.15 ; t78 [ 1151ULL ] = X [ 72ULL ] ; t78 [ 1152ULL ] = - X [
275ULL ] ; t78 [ 1153ULL ] = - X [ 138ULL ] ; t78 [ 1154ULL ] = - X [ 94ULL ]
- X [ 97ULL ] ; t78 [ 1155ULL ] = X [ 103ULL ] ; t78 [ 1156ULL ] = X [ 74ULL
] ; t78 [ 1157ULL ] = X [ 7ULL ] ; t78 [ 1158ULL ] = X [ 8ULL ] ; t78 [
1159ULL ] = X [ 9ULL ] ; t78 [ 1160ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ; t78 [ 1161ULL ] = X [
59ULL ] ; t78 [ 1162ULL ] = X [ 60ULL ] * 0.1 ; t78 [ 1163ULL ] = X [ 61ULL ]
; t78 [ 1164ULL ] = X [ 62ULL ] ; t78 [ 1165ULL ] = - X [ 275ULL ] ; t78 [
1166ULL ] = X [ 288ULL ] ; t78 [ 1167ULL ] = - X [ 272ULL ] ; t78 [ 1168ULL ]
= - X [ 280ULL ] ; t78 [ 1169ULL ] = - X [ 281ULL ] ; t78 [ 1170ULL ] = X [
289ULL ] ; t78 [ 1171ULL ] = X [ 290ULL ] ; t78 [ 1172ULL ] = X [ 106ULL ] ;
t78 [ 1173ULL ] = X [ 107ULL ] * 0.1 ; t78 [ 1174ULL ] = X [ 108ULL ] ; t78 [
1175ULL ] = X [ 109ULL ] ; t78 [ 1176ULL ] = - X [ 138ULL ] ; t78 [ 1177ULL ]
= X [ 291ULL ] ; t78 [ 1178ULL ] = - X [ 129ULL ] ; t78 [ 1179ULL ] = - X [
140ULL ] ; t78 [ 1180ULL ] = - X [ 141ULL ] ; t78 [ 1181ULL ] = X [ 292ULL ]
; t78 [ 1182ULL ] = X [ 293ULL ] ; t78 [ 1183ULL ] = - X [ 280ULL ] ; t78 [
1184ULL ] = - X [ 140ULL ] ; t78 [ 1185ULL ] = X [ 93ULL ] ; t78 [ 1186ULL ]
= X [ 99ULL ] ; t78 [ 1187ULL ] = - X [ 281ULL ] ; t78 [ 1188ULL ] = - X [
141ULL ] ; t78 [ 1189ULL ] = X [ 7ULL ] ; t78 [ 1190ULL ] = X [ 8ULL ] ; t78
[ 1191ULL ] = X [ 9ULL ] ; t78 [ 1192ULL ] = X [ 245ULL ] ; t78 [ 1193ULL ] =
X [ 246ULL ] * 0.1 ; t78 [ 1194ULL ] = X [ 247ULL ] ; t78 [ 1195ULL ] = X [
248ULL ] ; t78 [ 1196ULL ] = X [ 106ULL ] ; t78 [ 1197ULL ] = X [ 107ULL ] *
0.1 ; t78 [ 1198ULL ] = X [ 108ULL ] ; t78 [ 1199ULL ] = X [ 109ULL ] ; t78 [
1200ULL ] = X [ 227ULL ] ; t78 [ 1201ULL ] = X [ 29ULL ] * 0.1 ; t78 [
1202ULL ] = X [ 228ULL ] ; t78 [ 1203ULL ] = X [ 229ULL ] ; t78 [ 1204ULL ] =
X [ 294ULL ] ; t78 [ 1205ULL ] = X [ 295ULL ] * 0.1 ; t78 [ 1206ULL ] = X [
296ULL ] ; t78 [ 1207ULL ] = X [ 297ULL ] ; t78 [ 1208ULL ] = U_idx_7 ; t78 [
1209ULL ] = X [ 298ULL ] ; t78 [ 1210ULL ] = X [ 39ULL ] ; t78 [ 1211ULL ] =
X [ 40ULL ] ; t78 [ 1212ULL ] = X [ 41ULL ] ; t78 [ 1213ULL ] = U_idx_8 ; t78
[ 1214ULL ] = - U_idx_7 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [
t119 + 1215ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t119 ] ; }
t78 [ 1223ULL ] = X [ 302ULL ] ; t78 [ 1224ULL ] = X [ 299ULL ] * 1.0E-5 *
99999.999999999985 ; t78 [ 1225ULL ] = X [ 39ULL ] ; t78 [ 1226ULL ] = X [
301ULL ] ; t78 [ 1227ULL ] = X [ 301ULL ] ; t78 [ 1228ULL ] = X [ 304ULL ] ;
t78 [ 1229ULL ] = X [ 304ULL ] ; t78 [ 1230ULL ] = X [ 227ULL ] ; t78 [
1231ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 1232ULL ] = X [ 228ULL ] ; t78 [
1233ULL ] = X [ 229ULL ] ; t78 [ 1234ULL ] = X [ 294ULL ] ; t78 [ 1235ULL ] =
X [ 295ULL ] * 0.1 ; t78 [ 1236ULL ] = X [ 296ULL ] ; t78 [ 1237ULL ] = X [
297ULL ] ; t78 [ 1238ULL ] = X [ 40ULL ] ; t78 [ 1239ULL ] = X [ 302ULL ] ;
t78 [ 1240ULL ] = X [ 41ULL ] ; t78 [ 1241ULL ] = X [ 305ULL ] ; t78 [
1242ULL ] = X [ 39ULL ] - 273.15 ; t78 [ 1243ULL ] = - X [ 239ULL ] ; t78 [
1244ULL ] = X [ 306ULL ] * 0.1 ; t78 [ 1245ULL ] = X [ 42ULL ] * 0.1 ; t78 [
1246ULL ] = X [ 303ULL ] ; t78 [ 1247ULL ] = X [ 308ULL ] ; t78 [ 1248ULL ] =
X [ 307ULL ] ; t78 [ 1249ULL ] = X [ 309ULL ] * 0.1 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1250ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t119 ] ; }
t78 [ 1258ULL ] = X [ 304ULL ] ; t78 [ 1259ULL ] = X [ 300ULL ] ; t78 [
1260ULL ] = - X [ 234ULL ] ; t78 [ 1261ULL ] = X [ 310ULL ] ; t78 [ 1262ULL ]
= - X [ 298ULL ] ; t78 [ 1263ULL ] = 0.0 ; t78 [ 1264ULL ] = X [ 301ULL ] ;
t78 [ 1265ULL ] = X [ 39ULL ] ; t78 [ 1266ULL ] = X [ 40ULL ] ; t78 [ 1267ULL
] = X [ 41ULL ] ; t78 [ 1268ULL ] = t165 ; t78 [ 1269ULL ] = X [ 227ULL ] ;
t78 [ 1270ULL ] = X [ 29ULL ] * 0.1 ; t78 [ 1271ULL ] = X [ 228ULL ] ; t78 [
1272ULL ] = X [ 229ULL ] ; t78 [ 1273ULL ] = - X [ 234ULL ] ; t78 [ 1274ULL ]
= X [ 311ULL ] ; t78 [ 1275ULL ] = - X [ 239ULL ] ; t78 [ 1276ULL ] = - X [
240ULL ] ; t78 [ 1277ULL ] = - X [ 241ULL ] ; t78 [ 1278ULL ] = X [ 312ULL ]
; t78 [ 1279ULL ] = X [ 313ULL ] ; t78 [ 1280ULL ] = X [ 294ULL ] ; t78 [
1281ULL ] = X [ 295ULL ] * 0.1 ; t78 [ 1282ULL ] = X [ 296ULL ] ; t78 [
1283ULL ] = X [ 297ULL ] ; t78 [ 1284ULL ] = X [ 310ULL ] ; t78 [ 1285ULL ] =
X [ 314ULL ] ; t78 [ 1286ULL ] = X [ 307ULL ] ; t78 [ 1287ULL ] = X [ 315ULL
] ; t78 [ 1288ULL ] = X [ 316ULL ] ; t78 [ 1289ULL ] = X [ 317ULL ] ; t78 [
1290ULL ] = X [ 318ULL ] ; t78 [ 1291ULL ] = - X [ 240ULL ] ; t78 [ 1292ULL ]
= X [ 315ULL ] ; t78 [ 1293ULL ] = 0.0 ; t78 [ 1294ULL ] = U_idx_7 ; t78 [
1295ULL ] = - X [ 241ULL ] ; t78 [ 1296ULL ] = X [ 316ULL ] ; t78 [ 1297ULL ]
= U_idx_8 ; t78 [ 1298ULL ] = U_idx_7 ; t78 [ 1299ULL ] = X [ 319ULL ] ; t78
[ 1300ULL ] = X [ 320ULL ] * 0.1 ; t78 [ 1301ULL ] = X [ 321ULL ] ; t78 [
1302ULL ] = X [ 322ULL ] ; t78 [ 1303ULL ] = X [ 323ULL ] ; t78 [ 1304ULL ] =
293.15 ; t78 [ 1305ULL ] = - 920.95788639984789 + intrm_sf_mf_609 * 1000.0 ;
t78 [ 1306ULL ] = ( X [ 323ULL ] * 0.0031415926535897937 -
0.92095788639984788 ) * 318.30988618379064 ; t78 [ 1307ULL ] = 0.0 ; t78 [
1308ULL ] = X [ 324ULL ] ; t78 [ 1309ULL ] = 0.101325 ; t78 [ 1310ULL ] = X [
325ULL ] ; t78 [ 1311ULL ] = X [ 326ULL ] ; t78 [ 1312ULL ] = X [ 327ULL ] ;
t78 [ 1313ULL ] = X [ 328ULL ] ; t78 [ 1314ULL ] = 0.5 ; t78 [ 1315ULL ] = X
[ 336ULL ] ; t78 [ 1316ULL ] = X [ 335ULL ] ; t78 [ 1317ULL ] = 293.15 ; t78
[ 1318ULL ] = X [ 324ULL ] ; t78 [ 1319ULL ] = 0.101325 ; t78 [ 1320ULL ] = X
[ 325ULL ] ; t78 [ 1321ULL ] = X [ 326ULL ] ; t78 [ 1322ULL ] = X [ 328ULL ]
; t78 [ 1323ULL ] = X [ 329ULL ] ; t78 [ 1324ULL ] = X [ 330ULL ] ; t78 [
1325ULL ] = X [ 331ULL ] ; t78 [ 1326ULL ] = X [ 332ULL ] ; t78 [ 1327ULL ] =
X [ 333ULL ] ; t78 [ 1328ULL ] = X [ 334ULL ] ; t78 [ 1329ULL ] = X [ 330ULL
] ; t78 [ 1330ULL ] = X [ 331ULL ] ; t78 [ 1331ULL ] = X [ 332ULL ] ; t78 [
1332ULL ] = 0.101325 ; t78 [ 1333ULL ] = 0.21 ; t78 [ 1334ULL ] = X [ 337ULL
] ; t78 [ 1335ULL ] = 293.15 ; t78 [ 1336ULL ] = - 920.95788639984789 +
intrm_sf_mf_609 * 1000.0 ; t78 [ 1337ULL ] = X [ 319ULL ] ; t78 [ 1338ULL ] =
X [ 320ULL ] * 0.1 ; t78 [ 1339ULL ] = X [ 321ULL ] ; t78 [ 1340ULL ] = X [
322ULL ] ; t78 [ 1341ULL ] = X [ 338ULL ] ; t78 [ 1342ULL ] = t167 * 0.1 ;
t78 [ 1343ULL ] = X [ 340ULL ] ; t78 [ 1344ULL ] = X [ 341ULL ] ; t78 [
1345ULL ] = X [ 46ULL ] ; t78 [ 1346ULL ] = X [ 346ULL ] ; t78 [ 1347ULL ] =
X [ 45ULL ] ; t78 [ 1348ULL ] = X [ 343ULL ] ; t78 [ 1349ULL ] = X [ 43ULL ]
- 273.15 ; t78 [ 1350ULL ] = X [ 342ULL ] ; t78 [ 1351ULL ] = X [ 344ULL ] *
0.1 ; t78 [ 1352ULL ] = X [ 44ULL ] * 0.1 ; t78 [ 1353ULL ] = X [ 345ULL ] ;
t78 [ 1354ULL ] = X [ 347ULL ] ; t78 [ 1355ULL ] = - X [ 330ULL ] ; t78 [
1356ULL ] = X [ 348ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ )
{ t78 [ t119 + 1357ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t119 ] ; } t78 [
1365ULL ] = X [ 323ULL ] ; t78 [ 1366ULL ] = X [ 349ULL ] ; t78 [ 1367ULL ] =
X [ 351ULL ] ; t78 [ 1368ULL ] = - X [ 328ULL ] ; t78 [ 1369ULL ] = 0.0 ; t78
[ 1370ULL ] = 0.92095788639984788 - intrm_sf_mf_609 ; t78 [ 1371ULL ] = X [
350ULL ] ; t78 [ 1372ULL ] = X [ 43ULL ] ; t78 [ 1373ULL ] = X [ 46ULL ] ;
t78 [ 1374ULL ] = X [ 45ULL ] ; t78 [ 1375ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ; t78 [ 1376ULL ] = X [
319ULL ] ; t78 [ 1377ULL ] = X [ 320ULL ] * 0.1 ; t78 [ 1378ULL ] = X [
321ULL ] ; t78 [ 1379ULL ] = X [ 322ULL ] ; t78 [ 1380ULL ] = X [ 351ULL ] ;
t78 [ 1381ULL ] = X [ 352ULL ] ; t78 [ 1382ULL ] = X [ 342ULL ] ; t78 [
1383ULL ] = X [ 353ULL ] ; t78 [ 1384ULL ] = X [ 354ULL ] ; t78 [ 1385ULL ] =
X [ 355ULL ] ; t78 [ 1386ULL ] = X [ 356ULL ] ; t78 [ 1387ULL ] = X [ 338ULL
] ; t78 [ 1388ULL ] = t167 * 0.1 ; t78 [ 1389ULL ] = X [ 340ULL ] ; t78 [
1390ULL ] = X [ 341ULL ] ; t78 [ 1391ULL ] = - X [ 328ULL ] ; t78 [ 1392ULL ]
= X [ 357ULL ] ; t78 [ 1393ULL ] = - X [ 330ULL ] ; t78 [ 1394ULL ] = - X [
331ULL ] ; t78 [ 1395ULL ] = - X [ 332ULL ] ; t78 [ 1396ULL ] = X [ 358ULL ]
; t78 [ 1397ULL ] = X [ 359ULL ] ; t78 [ 1398ULL ] = X [ 353ULL ] ; t78 [
1399ULL ] = - X [ 331ULL ] ; t78 [ 1400ULL ] = 0.0 ; t78 [ 1401ULL ] = 0.0 ;
t78 [ 1402ULL ] = X [ 354ULL ] ; t78 [ 1403ULL ] = - X [ 332ULL ] ; t78 [
1404ULL ] = X [ 338ULL ] ; t78 [ 1405ULL ] = t167 * 0.1 ; t78 [ 1406ULL ] = X
[ 340ULL ] ; t78 [ 1407ULL ] = X [ 341ULL ] ; t78 [ 1408ULL ] = 0.0 ; t78 [
1409ULL ] = 0.0 ; t78 [ 1410ULL ] = 0.0 ; t78 [ 1411ULL ] = 0.0 ; t78 [
1412ULL ] = X [ 324ULL ] ; t78 [ 1413ULL ] = 0.101325 ; t78 [ 1414ULL ] = X [
325ULL ] ; t78 [ 1415ULL ] = X [ 326ULL ] ; t78 [ 1416ULL ] = ( X [ 339ULL ]
- 1.0E-8 ) * 1.0E+6 ; t78 [ 1417ULL ] = 1.0E-8 ; t78 [ 1418ULL ] = X [ 339ULL
] ; t78 [ 1419ULL ] = 1.0E-8 ; t78 [ 1420ULL ] = ( X [ 339ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t78 [ 1421ULL ] = ( X [ 339ULL ] - 1.0E-8 ) * 1.0E+6 ;
t78 [ 1422ULL ] = X [ 339ULL ] ; t78 [ 1423ULL ] = X [ 339ULL ] *
0.0019634954084936209 ; t78 [ 1424ULL ] = t167 * 99999.999999999985 ; t78 [
1425ULL ] = t171 * 0.1 ; t78 [ 1426ULL ] = ( X [ 339ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t78 [ 1427ULL ] = X [ 338ULL ] ; t78 [ 1428ULL ] = t167
* 0.1 ; t78 [ 1429ULL ] = X [ 340ULL ] ; t78 [ 1430ULL ] = X [ 341ULL ] ; t78
[ 1431ULL ] = 0.0 ; t78 [ 1432ULL ] = 0.0 ; t78 [ 1433ULL ] = 0.0 ; t78 [
1434ULL ] = 0.0 ; t78 [ 1435ULL ] = t167 * 99999.999999999985 ; t78 [ 1436ULL
] = 101324.99999999999 ; t78 [ 1437ULL ] = 101324.99999999999 ; t78 [ 1438ULL
] = X [ 338ULL ] ; t78 [ 1439ULL ] = X [ 338ULL ] ; t78 [ 1440ULL ] = t167 *
0.1 ; t78 [ 1441ULL ] = X [ 340ULL ] ; t78 [ 1442ULL ] = X [ 341ULL ] ; t78 [
1443ULL ] = X [ 339ULL ] * 0.0019634954084936209 ; t78 [ 1444ULL ] = X [
324ULL ] ; t78 [ 1445ULL ] = 0.101325 ; t78 [ 1446ULL ] = X [ 325ULL ] ; t78
[ 1447ULL ] = X [ 326ULL ] ; t78 [ 1448ULL ] = X [ 330ULL ] ; t78 [ 1449ULL ]
= X [ 338ULL ] ; t78 [ 1450ULL ] = t167 * 0.1 ; t78 [ 1451ULL ] = X [ 340ULL
] ; t78 [ 1452ULL ] = X [ 341ULL ] ; t78 [ 1453ULL ] = X [ 328ULL ] ; t78 [
1454ULL ] = X [ 366ULL ] ; t78 [ 1455ULL ] = X [ 330ULL ] ; t78 [ 1456ULL ] =
X [ 331ULL ] ; t78 [ 1457ULL ] = X [ 332ULL ] ; t78 [ 1458ULL ] = X [ 363ULL
] ; t78 [ 1459ULL ] = X [ 362ULL ] ; t78 [ 1460ULL ] = X [ 360ULL ] ; t78 [
1461ULL ] = X [ 361ULL ] * 0.1 ; t78 [ 1462ULL ] = X [ 364ULL ] ; t78 [
1463ULL ] = X [ 365ULL ] ; t78 [ 1464ULL ] = X [ 328ULL ] ; t78 [ 1465ULL ] =
- X [ 328ULL ] ; t78 [ 1466ULL ] = X [ 324ULL ] ; t78 [ 1467ULL ] = 0.101325
; t78 [ 1468ULL ] = X [ 325ULL ] ; t78 [ 1469ULL ] = X [ 326ULL ] ; t78 [
1470ULL ] = - X [ 328ULL ] ; t78 [ 1471ULL ] = X [ 366ULL ] ; t78 [ 1472ULL ]
= - X [ 330ULL ] ; t78 [ 1473ULL ] = - X [ 331ULL ] ; t78 [ 1474ULL ] = - X [
332ULL ] ; t78 [ 1475ULL ] = X [ 363ULL ] ; t78 [ 1476ULL ] = X [ 362ULL ] ;
t78 [ 1477ULL ] = - X [ 330ULL ] ; t78 [ 1478ULL ] = X [ 331ULL ] ; t78 [
1479ULL ] = - X [ 331ULL ] ; t78 [ 1480ULL ] = X [ 332ULL ] ; t78 [ 1481ULL ]
= - X [ 332ULL ] ; t78 [ 1482ULL ] = t171 * 0.1 ; t78 [ 1483ULL ] = U_idx_9 ;
t78 [ 1484ULL ] = X [ 63ULL ] ; t78 [ 1485ULL ] = X [ 64ULL ] * 0.1 ; t78 [
1486ULL ] = X [ 65ULL ] ; t78 [ 1487ULL ] = X [ 66ULL ] ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1488ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1496ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
1504ULL ] = 343.15 ; t78 [ 1505ULL ] = X [ 294ULL ] ; t78 [ 1506ULL ] = X [
295ULL ] * 0.1 ; t78 [ 1507ULL ] = X [ 296ULL ] ; t78 [ 1508ULL ] = X [
297ULL ] ; t78 [ 1509ULL ] = X [ 63ULL ] ; t78 [ 1510ULL ] = X [ 64ULL ] *
0.1 ; t78 [ 1511ULL ] = X [ 65ULL ] ; t78 [ 1512ULL ] = X [ 66ULL ] ; t78 [
1513ULL ] = X [ 11ULL ] ; t78 [ 1514ULL ] = X [ 80ULL ] ; t78 [ 1515ULL ] = X
[ 12ULL ] ; t78 [ 1516ULL ] = X [ 367ULL ] ; t78 [ 1517ULL ] = X [ 10ULL ] -
273.15 ; t78 [ 1518ULL ] = - X [ 307ULL ] ; t78 [ 1519ULL ] = X [ 368ULL ] *
0.1 ; t78 [ 1520ULL ] = X [ 47ULL ] * 0.1 ; t78 [ 1521ULL ] = X [ 81ULL ] ;
t78 [ 1522ULL ] = X [ 370ULL ] ; t78 [ 1523ULL ] = X [ 369ULL ] ; t78 [
1524ULL ] = X [ 371ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ )
{ t78 [ t119 + 1525ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } t78 [
1533ULL ] = 343.15 ; t78 [ 1534ULL ] = X [ 79ULL ] ; t78 [ 1535ULL ] = - X [
310ULL ] ; t78 [ 1536ULL ] = X [ 372ULL ] ; t78 [ 1537ULL ] = 0.0 ; t78 [
1538ULL ] = X [ 104ULL ] ; t78 [ 1539ULL ] = X [ 78ULL ] ; t78 [ 1540ULL ] =
X [ 10ULL ] ; t78 [ 1541ULL ] = X [ 11ULL ] ; t78 [ 1542ULL ] = X [ 12ULL ] ;
t78 [ 1543ULL ] = t173 ; t78 [ 1544ULL ] = X [ 294ULL ] ; t78 [ 1545ULL ] = X
[ 295ULL ] * 0.1 ; t78 [ 1546ULL ] = X [ 296ULL ] ; t78 [ 1547ULL ] = X [
297ULL ] ; t78 [ 1548ULL ] = - X [ 310ULL ] ; t78 [ 1549ULL ] = X [ 373ULL ]
; t78 [ 1550ULL ] = - X [ 307ULL ] ; t78 [ 1551ULL ] = - X [ 315ULL ] ; t78 [
1552ULL ] = - X [ 316ULL ] ; t78 [ 1553ULL ] = X [ 374ULL ] ; t78 [ 1554ULL ]
= X [ 375ULL ] ; t78 [ 1555ULL ] = X [ 63ULL ] ; t78 [ 1556ULL ] = X [ 64ULL
] * 0.1 ; t78 [ 1557ULL ] = X [ 65ULL ] ; t78 [ 1558ULL ] = X [ 66ULL ] ; t78
[ 1559ULL ] = X [ 372ULL ] ; t78 [ 1560ULL ] = X [ 376ULL ] ; t78 [ 1561ULL ]
= X [ 369ULL ] ; t78 [ 1562ULL ] = X [ 377ULL ] ; t78 [ 1563ULL ] = X [
378ULL ] ; t78 [ 1564ULL ] = X [ 379ULL ] ; t78 [ 1565ULL ] = X [ 380ULL ] ;
t78 [ 1566ULL ] = - X [ 315ULL ] ; t78 [ 1567ULL ] = X [ 377ULL ] ; t78 [
1568ULL ] = 0.0 ; t78 [ 1569ULL ] = 0.0 ; t78 [ 1570ULL ] = - X [ 316ULL ] ;
t78 [ 1571ULL ] = X [ 378ULL ] ; t78 [ 1572ULL ] = X [ 63ULL ] ; t78 [
1573ULL ] = X [ 64ULL ] * 0.1 ; t78 [ 1574ULL ] = X [ 65ULL ] ; t78 [ 1575ULL
] = X [ 66ULL ] ; t78 [ 1576ULL ] = X [ 319ULL ] ; t78 [ 1577ULL ] = X [
320ULL ] * 0.1 ; t78 [ 1578ULL ] = X [ 321ULL ] ; t78 [ 1579ULL ] = X [
322ULL ] ; t78 [ 1580ULL ] = X [ 14ULL ] ; t78 [ 1581ULL ] = X [ 85ULL ] ;
t78 [ 1582ULL ] = X [ 15ULL ] ; t78 [ 1583ULL ] = X [ 381ULL ] ; t78 [
1584ULL ] = X [ 13ULL ] - 273.15 ; t78 [ 1585ULL ] = - X [ 369ULL ] ; t78 [
1586ULL ] = X [ 382ULL ] * 0.1 ; t78 [ 1587ULL ] = X [ 48ULL ] * 0.1 ; t78 [
1588ULL ] = X [ 86ULL ] ; t78 [ 1589ULL ] = X [ 383ULL ] ; t78 [ 1590ULL ] =
- X [ 342ULL ] ; t78 [ 1591ULL ] = X [ 384ULL ] * 0.1 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1592ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
1600ULL ] = 343.15 ; t78 [ 1601ULL ] = X [ 84ULL ] ; t78 [ 1602ULL ] = - X [
372ULL ] ; t78 [ 1603ULL ] = - X [ 351ULL ] ; t78 [ 1604ULL ] = ( - X [ 92ULL
] - X [ 96ULL ] ) - X [ 98ULL ] ; t78 [ 1605ULL ] = X [ 105ULL ] ; t78 [
1606ULL ] = X [ 83ULL ] ; t78 [ 1607ULL ] = X [ 13ULL ] ; t78 [ 1608ULL ] = X
[ 14ULL ] ; t78 [ 1609ULL ] = X [ 15ULL ] ; t78 [ 1610ULL ] = t176 ; t78 [
1611ULL ] = X [ 63ULL ] ; t78 [ 1612ULL ] = X [ 64ULL ] * 0.1 ; t78 [ 1613ULL
] = X [ 65ULL ] ; t78 [ 1614ULL ] = X [ 66ULL ] ; t78 [ 1615ULL ] = - X [
372ULL ] ; t78 [ 1616ULL ] = X [ 385ULL ] ; t78 [ 1617ULL ] = - X [ 369ULL ]
; t78 [ 1618ULL ] = - X [ 377ULL ] ; t78 [ 1619ULL ] = - X [ 378ULL ] ; t78 [
1620ULL ] = X [ 386ULL ] ; t78 [ 1621ULL ] = X [ 387ULL ] ; t78 [ 1622ULL ] =
X [ 319ULL ] ; t78 [ 1623ULL ] = X [ 320ULL ] * 0.1 ; t78 [ 1624ULL ] = X [
321ULL ] ; t78 [ 1625ULL ] = X [ 322ULL ] ; t78 [ 1626ULL ] = - X [ 351ULL ]
; t78 [ 1627ULL ] = X [ 388ULL ] ; t78 [ 1628ULL ] = - X [ 342ULL ] ; t78 [
1629ULL ] = - X [ 353ULL ] ; t78 [ 1630ULL ] = - X [ 354ULL ] ; t78 [ 1631ULL
] = X [ 389ULL ] ; t78 [ 1632ULL ] = X [ 390ULL ] ; t78 [ 1633ULL ] = - X [
377ULL ] ; t78 [ 1634ULL ] = - X [ 353ULL ] ; t78 [ 1635ULL ] = X [ 95ULL ] ;
t78 [ 1636ULL ] = X [ 100ULL ] ; t78 [ 1637ULL ] = - X [ 378ULL ] ; t78 [
1638ULL ] = - X [ 354ULL ] ; t78 [ 1639ULL ] = X [ 13ULL ] ; t78 [ 1640ULL ]
= X [ 14ULL ] ; t78 [ 1641ULL ] = X [ 15ULL ] ; t78 [ 1642ULL ] = X [ 294ULL
] ; t78 [ 1643ULL ] = X [ 295ULL ] * 0.1 ; t78 [ 1644ULL ] = X [ 296ULL ] ;
t78 [ 1645ULL ] = X [ 297ULL ] ; t78 [ 1646ULL ] = X [ 319ULL ] ; t78 [
1647ULL ] = X [ 320ULL ] * 0.1 ; t78 [ 1648ULL ] = X [ 321ULL ] ; t78 [
1649ULL ] = X [ 322ULL ] ; t78 [ 1650ULL ] = Fuel_Cell_Boost_Converter_L_p_v
; t78 [ 1651ULL ] = 0.0 ; t78 [ 1652ULL ] = U_idx_10 ; t78 [ 1653ULL ] = X [
53ULL ] ; t78 [ 1654ULL ] = 0.0 ; t78 [ 1655ULL ] = X [ 53ULL ] ; t78 [
1656ULL ] = X [ 53ULL ] ; t78 [ 1657ULL ] = X [ 53ULL ] ; t78 [ 1658ULL ] =
0.0 ; t78 [ 1659ULL ] = t94_idx_0 ; t78 [ 1660ULL ] = t94_idx_0 ; t78 [
1661ULL ] = X [ 53ULL ] ; t78 [ 1662ULL ] = X [ 53ULL ] ; t78 [ 1663ULL ] =
t94_idx_0 ; t78 [ 1664ULL ] = 0.0 ; t78 [ 1665ULL ] = X [ 53ULL ] ; t78 [
1666ULL ] = 0.0 ; t78 [ 1667ULL ] = X [ 53ULL ] ; t78 [ 1668ULL ] = X [ 53ULL
] ; t78 [ 1669ULL ] = X [ 53ULL ] ; t78 [ 1670ULL ] = X [ 53ULL ] ; t78 [
1671ULL ] = 0.0 ; t78 [ 1672ULL ] = 0.0 ; t78 [ 1673ULL ] = X [ 49ULL ] ; t78
[ 1674ULL ] = X [ 49ULL ] ; t78 [ 1675ULL ] = U_idx_11 ; t78 [ 1676ULL ] =
0.0 ; t78 [ 1677ULL ] = X [ 53ULL ] ; t78 [ 1678ULL ] = 0.0 ; t78 [ 1679ULL ]
= 0.0 ; t78 [ 1680ULL ] = t94_idx_0 ; t78 [ 1681ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 1000.0 ; t78 [
1682ULL ] = X [ 392ULL ] ; t78 [ 1683ULL ] = X [ 393ULL ] ; t78 [ 1684ULL ] =
X [ 393ULL ] ; t78 [ 1685ULL ] = X [ 391ULL ] ; t78 [ 1686ULL ] = X [ 50ULL ]
; t78 [ 1687ULL ] = X [ 53ULL ] ; t78 [ 1688ULL ] = X [ 49ULL ] *
9.5492965855137211 ; t78 [ 1689ULL ] = 0.0 ; t78 [ 1690ULL ] = 0.0 ; t78 [
1691ULL ] = X [ 49ULL ] ; t78 [ 1692ULL ] = U_idx_12 ; t78 [ 1693ULL ] = - X
[ 392ULL ] ; t78 [ 1694ULL ] = U_idx_12 ; t78 [ 1695ULL ] = X [ 49ULL ] ; t78
[ 1696ULL ] = X [ 49ULL ] ; t78 [ 1697ULL ] = - X [ 392ULL ] ; t78 [ 1698ULL
] = - X [ 392ULL ] ; t78 [ 1699ULL ] = X [ 49ULL ] ; t78 [ 1700ULL ] = X [
49ULL ] ; t78 [ 1701ULL ] = - X [ 392ULL ] ; t78 [ 1702ULL ] = - X [ 392ULL ]
; t78 [ 1703ULL ] = - X [ 392ULL ] ; t78 [ 1704ULL ] = X [ 49ULL ] ; t78 [
1705ULL ] = U_idx_12 ; t78 [ 1706ULL ] = U_idx_11 ; t78 [ 1707ULL ] = X [
53ULL ] ; t78 [ 1708ULL ] = 0.0 ; for ( b = 0 ; b < 1709 ; b ++ ) { out . mX
[ b ] = t78 [ b ] ; } ( void ) LC ; ( void ) t253 ; return 0 ; }
