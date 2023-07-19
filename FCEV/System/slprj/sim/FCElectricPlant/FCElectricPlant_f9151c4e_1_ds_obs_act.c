#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_obs_act.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_obs_act ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t252 , NeDsMethodOutput * t253 ) { ETTS0 c_efOut
; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 i_efOut ; ETTS0 k_efOut
; ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut ; ETTS0 s_efOut ; ETTS0 t10 ;
ETTS0 t11 ; ETTS0 u_efOut ; ETTS0 w_efOut ; ETTS0 x_efOut ; PmRealVector out
; real_T t78 [ 1746 ] ; real_T X [ 399 ] ; real_T
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
real_T Battery_System_Battery_Table_Based1_stateOfCharge ; real_T
Battery_System_DC_DC_Converter_i1 ; real_T
Battery_System_DC_DC_Converter_power_dissipated ; real_T
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
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_2 ; real_T U_idx_3
; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T
U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1503 ; real_T intrm_sf_mf_305 ;
real_T intrm_sf_mf_609 ; real_T t131 ; real_T t134 ; real_T t138 ; real_T
t139 ; real_T t140 ; real_T t144 ; real_T t153 ; real_T t159 ; real_T t165 ;
real_T t167 ; real_T t171 ; real_T t173 ; real_T t176 ; real_T t94_idx_0 ;
size_t t16 [ 1 ] ; size_t t70 [ 1 ] ; size_t t73 [ 1 ] ; size_t t119 ;
int32_T b ; U_idx_0 = t252 -> mU . mX [ 0 ] ; U_idx_1 = t252 -> mU . mX [ 1 ]
; U_idx_2 = t252 -> mU . mX [ 2 ] ; U_idx_3 = t252 -> mU . mX [ 3 ] ; U_idx_4
= t252 -> mU . mX [ 4 ] ; U_idx_5 = t252 -> mU . mX [ 5 ] ; U_idx_6 = t252 ->
mU . mX [ 6 ] ; U_idx_7 = t252 -> mU . mX [ 7 ] ; U_idx_8 = t252 -> mU . mX [
8 ] ; U_idx_9 = t252 -> mU . mX [ 9 ] ; U_idx_10 = t252 -> mU . mX [ 10 ] ;
U_idx_11 = t252 -> mU . mX [ 11 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ]
= t252 -> mX . mX [ b ] ; } out = t253 -> mOBS_ACT ;
Battery_System_Battery_Table_Based1_stateOfCharge = X [ 0ULL ] *
9.2592592592592591E-6 ; Battery_System_DC_DC_Converter_i1 = - X [ 53ULL ] -
U_idx_0 ; Battery_System_DC_DC_Converter_power_dissipated = ( ( ( real_T ) (
Battery_System_DC_DC_Converter_i1 >= 0.0 ) *
Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X [ 55ULL ] ) - 0.9 ) /
0.099999999999999978 ; if ( ( real_T ) ( Battery_System_DC_DC_Converter_i1 >=
0.0 ) * Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X [ 55ULL ] <= 0.9 ) {
Battery_System_DC_DC_Converter_power_dissipated = 0.0 ; } else {
Battery_System_DC_DC_Converter_power_dissipated = ( real_T ) (
Battery_System_DC_DC_Converter_i1 >= 0.0 ) *
Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X [ 55ULL ] >= 1.0 ? 1.0 :
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 3.0 -
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 2.0 ; }
Fuel_Cell_Boost_Converter_L_i = X [ 61ULL ] * 1.0E-9 + X [ 4ULL ] ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0000000000000011 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0E-15 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Current_Sensor1_I = ( ( ( X [ 3ULL ] * 0.1 + X [ 58ULL ] * - 0.1 )
+ X [ 61ULL ] * 1.0E-9 ) - X [ 63ULL ] ) + X [ 4ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 0ULL ] = X [
72ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 1ULL ]
= X [ 6ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
2ULL ] = X [ 73ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 3ULL ] = X [
8ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 4ULL ]
= X [ 76ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
5ULL ] = X [ 74ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 6ULL ] = X [
7ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 7ULL ]
= X [ 75ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
0ULL ] = X [ 78ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 1ULL ] = X [
9ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 2ULL ]
= X [ 79ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
3ULL ] = X [ 11ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 4ULL ] = X [
81ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 5ULL ]
= X [ 77ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
6ULL ] = X [ 10ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 7ULL ] = X [
80ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 0ULL ]
= X [ 82ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
1ULL ] = X [ 12ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 2ULL ] = X [
83ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 3ULL ]
= X [ 14ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
4ULL ] = X [ 86ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 5ULL ] = X [
84ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 6ULL ]
= X [ 13ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
7ULL ] = X [ 85ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 0ULL ] = X [
87ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 1ULL ]
= X [ 15ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
2ULL ] = X [ 88ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 3ULL ] = X [
17ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 4ULL ]
= X [ 91ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
5ULL ] = X [ 89ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 6ULL ] = X [
16ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 7ULL ]
= X [ 90ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 = ( ( ( X [
4ULL ] * - 1.0E-6 + X [ 61ULL ] * - 1.0E-15 ) + X [ 62ULL ] * - 0.001001 ) +
X [ 5ULL ] ) + X [ 95ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 = - X [ 96ULL
] + X [ 105ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v =
( ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * - 1.0E-15 ) + X [ 62ULL ] * -
1.0E-6 ) + X [ 5ULL ] ) + X [ 95ULL ] ; if ( X [ 21ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con = X [
21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 22ULL ] >=
1.0 ? 1.0 : X [ 22ULL ] ; } t131 = X [ 19ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
4124.48151675695 ) ; t79 [ 0ULL ] = X [ 20ULL ] * 100000.0 ; t79 [ 1ULL ] = X
[ 19ULL ] ; t79 [ 2ULL ] = X [ 142ULL ] ; t79 [ 3ULL ] = X [ 21ULL ] ; t79 [
4ULL ] = X [ 137ULL ] ; t79 [ 5ULL ] = X [ 141ULL ] ; t79 [ 6ULL ] = X [
22ULL ] ; t79 [ 7ULL ] = X [ 138ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ;
t119 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t119 ] =
t79 [ t119 ] ; } if ( 1.0 - X [ 21ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = 1.0 - X [ 21ULL ]
; } else if ( 1.0 - X [ 21ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = pmf_exp ( ( ( 1.0
- X [ 21ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 22ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 19ULL ] ; t70 [ 0
] = 52ULL ; t16 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut .
mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL
] , & t16 [ 0ULL ] ) ; t10 = efOut ; tlu2_1d_linear_linear_value ( & b_efOut
[ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] )
; t94_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = pmf_exp ( pmf_log
( X [ 20ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I >= 1.0 ) { t134 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR / ( t134 == 0.0 ?
1.0E-16 : t134 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 21ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; if ( X [
21ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else if
( X [ 21ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 21ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 21ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con = X [ 20ULL ]
/ ( t131 == 0.0 ? 1.0E-16 : t131 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
7.8539816339744827E-5 / 0.001 * 100000.0 ; t81 [ 0ULL ] = X [ 24ULL ] *
100000.0 ; t81 [ 1ULL ] = X [ 23ULL ] ; t81 [ 2ULL ] = X [ 167ULL ] ; t81 [
3ULL ] = X [ 26ULL ] ; t81 [ 4ULL ] = X [ 169ULL ] ; t81 [ 5ULL ] = X [
166ULL ] ; t81 [ 6ULL ] = X [ 25ULL ] ; t81 [ 7ULL ] = X [ 168ULL ] ; for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t79 [ t119 ] = t81 [ t119 ] ; } if (
X [ 26ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = X [ 26ULL ] >=
1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 25ULL ] >= 1.0 ?
1.0 : X [ 25ULL ] ; } t140 = X [ 23ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 4124.48151675695 ) ; if
( 1.0 - X [ 26ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 1.0 - X [ 26ULL ] ; }
else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = pmf_exp ( ( ( 1.0 - X [
26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 1.6701700790245661E-7 ;
} t131 = X [ 25ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W
== 0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = d_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = pmf_exp ( pmf_log ( X
[ 24ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W - 1.0 ) * 461.523 + t131
; intrm_sf_mf_305 = t131 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; } else {
intrm_sf_mf_305 = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = intrm_sf_mf_305
* 0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = ( X [ 26ULL ]
- intrm_sf_mf_305 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; if ( X [
26ULL ] - intrm_sf_mf_305 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 0.0 ; } else if ( X [
26ULL ] - intrm_sf_mf_305 >= intrm_sf_mf_305 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 26ULL ] -
intrm_sf_mf_305 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = ( X [ 26ULL ] -
intrm_sf_mf_305 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = X [ 24ULL ] / (
t140 == 0.0 ? 1.0E-16 : t140 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W * 0.12 / 0.001 * 100000.0
; if ( X [ 29ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 29ULL ] >= 1.0 ?
1.0 : X [ 29ULL ] ; } if ( X [ 30ULL ] <= 0.0 ) { t131 = 0.0 ; } else { t131
= X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } t140 = X [ 27ULL ] * ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ) - t131 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W *
461.523 ) + t131 * 4124.48151675695 ) ; t83 [ 0ULL ] = X [ 28ULL ] * 100000.0
; t83 [ 1ULL ] = X [ 27ULL ] ; t83 [ 2ULL ] = X [ 190ULL ] ; t83 [ 3ULL ] = X
[ 29ULL ] ; t83 [ 4ULL ] = X [ 184ULL ] ; t83 [ 5ULL ] = X [ 189ULL ] ; t83 [
6ULL ] = X [ 30ULL ] ; t83 [ 7ULL ] = X [ 185ULL ] ; for ( t119 = 0ULL ; t119
< 8ULL ; t119 ++ ) { t81 [ t119 ] = t83 [ t119 ] ; } if ( 1.0 - X [ 29ULL ]
>= 0.01 ) { intrm_sf_mf_305 = 1.0 - X [ 29ULL ] ; } else if ( 1.0 - X [ 29ULL
] >= - 0.1 ) { intrm_sf_mf_305 = pmf_exp ( ( ( 1.0 - X [ 29ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { intrm_sf_mf_305 = 1.6701700790245661E-7 ; } t131 = X
[ 30ULL ] / ( intrm_sf_mf_305 == 0.0 ? 1.0E-16 : intrm_sf_mf_305 ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 27ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = f_efOut [ 0 ]
; intrm_sf_mf_305 = pmf_exp ( pmf_log ( X [ 28ULL ] * 100000.0 ) - t94_idx_0
) ; if ( intrm_sf_mf_305 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = ( intrm_sf_mf_305 - 1.0
) * 461.523 + t131 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t131 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; }
intrm_sf_mf_609 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR
* 0.01 ; t131 = ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) / (
intrm_sf_mf_609 == 0.0 ? 1.0E-16 : intrm_sf_mf_609 ) ; if ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t131 =
0.0 ; } else if ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t131 =
X [ 29ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t131 = ( X [ 29ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t131 * t131
* 3.0 - t131 * t131 * t131 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W = X [ 28ULL ] / ( t140 ==
0.0 ? 1.0E-16 : t140 ) * t131 * 7.8539816339744827E-5 / 0.001 * 100000.0 ;
t131 = ( X [ 179ULL ] * - 0.7999998 + U_idx_2 * 7.9999980000000006 ) -
0.039999990000000013 ; intrm_sf_mf_305 = ( X [ 179ULL ] * - 0.7999998 +
U_idx_2 * 7.9999980000000006 ) + 9.9999999947364415E-9 ; t134 = U_idx_2 *
10.0 ; t85 [ 0ULL ] = X [ 31ULL ] * 100000.0 ; t85 [ 1ULL ] = X [ 32ULL ] ;
t85 [ 2ULL ] = X [ 236ULL ] ; t85 [ 3ULL ] = X [ 34ULL ] ; t85 [ 4ULL ] = X [
238ULL ] ; t85 [ 5ULL ] = X [ 235ULL ] ; t85 [ 6ULL ] = X [ 33ULL ] ; t85 [
7ULL ] = X [ 237ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t83 [
t119 ] = t85 [ t119 ] ; } if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 34ULL ] >=
1.0 ? 1.0 : X [ 34ULL ] ; } if ( X [ 33ULL ] <= 0.0 ) { t138 = 0.0 ; } else {
t138 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } t159 = X [ 32ULL ] * ( ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) - t138
) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 461.523 ) +
t138 * 259.836612622973 ) ; if ( 1.0 - X [ 34ULL ] >= 0.01 ) { t138 = 1.0 - X
[ 34ULL ] ; } else if ( 1.0 - X [ 34ULL ] >= - 0.1 ) { t138 = pmf_exp ( ( (
1.0 - X [ 34ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t138 =
1.6701700790245661E-7 ; } t139 = X [ 33ULL ] / ( t138 == 0.0 ? 1.0E-16 : t138
) * - 36.965491221318985 + 296.802103844292 ; t69 [ 0ULL ] = X [ 32ULL ] ;
tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = h_efOut [ 0 ]
; t138 = pmf_exp ( pmf_log ( X [ 31ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
t138 >= 1.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
( t138 - 1.0 ) * 461.523 + t139 ; t140 = t139 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; } else {
t140 = 1.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
t140 * 0.01 ; t138 = ( X [ 34ULL ] - t140 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; if ( X [
34ULL ] - t140 <= 0.0 ) { t138 = 0.0 ; } else if ( X [ 34ULL ] - t140 >= t140
* 0.01 ) { t138 = X [ 34ULL ] - t140 ; } else { t138 = ( X [ 34ULL ] - t140 )
* ( t138 * t138 * 3.0 - t138 * t138 * t138 * 2.0 ) ; } t139 = U_idx_3 *
376.99111843077515 ; if ( X [ 223ULL ] <= 0.0 ) { intrm_sf_mf_1503 = 0.0 ; }
else { intrm_sf_mf_1503 = X [ 223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X
[ 222ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 = X [ 222ULL
] >= 1.0 ? 1.0 : X [ 222ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( ( ( 1.0 -
intrm_sf_mf_1503 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 ) *
296.802103844292 + intrm_sf_mf_1503 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
259.836612622973 ; intrm_sf_mf_1503 = X [ 31ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) / ( X [
221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ; intrm_sf_mf_1503 = - X [ 213ULL
] / ( intrm_sf_mf_1503 == 0.0 ? 1.0E-16 : intrm_sf_mf_1503 ) * 10.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 = - ( X [
31ULL ] - 1.01325 ) * intrm_sf_mf_1503 * 0.0001 ; t144 = t139 *
0.99999999999999978 / 0.99999999999999978 ; t85 [ 0ULL ] = X [ 255ULL ] ; t85
[ 1ULL ] = X [ 35ULL ] ; t85 [ 2ULL ] = X [ 257ULL ] ; t85 [ 3ULL ] = X [
37ULL ] ; t85 [ 4ULL ] = X [ 259ULL ] ; t85 [ 5ULL ] = X [ 256ULL ] ; t85 [
6ULL ] = X [ 36ULL ] ; t85 [ 7ULL ] = X [ 258ULL ] ; if ( X [ 37ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = X [ 37ULL ] >= 1.0 ?
1.0 : X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) { t153 = 0.0 ; } else { t153
= X [ 36ULL ] >= 1.0 ? 1.0 : X [ 36ULL ] ; } t140 = X [ 35ULL ] * ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ) - t153 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W *
461.523 ) + t153 * 4124.48151675695 ) ; if ( 1.0 - X [ 37ULL ] >= 0.01 ) {
intrm_sf_mf_609 = 1.0 - X [ 37ULL ] ; } else if ( 1.0 - X [ 37ULL ] >= - 0.1
) { intrm_sf_mf_609 = pmf_exp ( ( ( 1.0 - X [ 37ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { intrm_sf_mf_609 = 1.6701700790245661E-7 ; } t153 = X [ 36ULL
] / ( intrm_sf_mf_609 == 0.0 ? 1.0E-16 : intrm_sf_mf_609 ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t11
= i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t11 .
mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = j_efOut [ 0 ]
; intrm_sf_mf_609 = pmf_exp ( pmf_log ( X [ 38ULL ] * 100000.0 ) - t94_idx_0
) ; if ( intrm_sf_mf_609 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = (
intrm_sf_mf_609 - 1.0 ) * 461.523 + t153 ; intrm_sf_mf_609 = t153 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) ; } else {
intrm_sf_mf_609 = 1.0 ; } t94_idx_0 = intrm_sf_mf_609 * 0.01 ; t153 = ( X [
37ULL ] - intrm_sf_mf_609 ) / ( t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; if
( X [ 37ULL ] - intrm_sf_mf_609 <= 0.0 ) { t153 = 0.0 ; } else if ( X [ 37ULL
] - intrm_sf_mf_609 >= intrm_sf_mf_609 * 0.01 ) { t153 = X [ 37ULL ] -
intrm_sf_mf_609 ; } else { t153 = ( X [ 37ULL ] - intrm_sf_mf_609 ) * ( t153
* t153 * 3.0 - t153 * t153 * t153 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W = X [ 38ULL ] / ( t140 ==
0.0 ? 1.0E-16 : t140 ) * t153 * 0.00049087385212340522 / 0.001 * 100000.0 ;
if ( X [ 8ULL ] <= 0.0 ) { t153 = 0.0 ; } else { t153 = X [ 8ULL ] >= 1.0 ?
1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { intrm_sf_mf_609 = 0.0 ; }
else { intrm_sf_mf_609 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t140 = X [
6ULL ] * ( ( ( ( 1.0 - t153 ) - intrm_sf_mf_609 ) * 296.802103844292 + t153 *
461.523 ) + intrm_sf_mf_609 * 4124.48151675695 ) ; t153 = X [ 39ULL ] / (
t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( 1.0 - X [ 8ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = 1.0 - X [ 8ULL ] ; }
else if ( 1.0 - X [ 8ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = pmf_exp ( ( ( 1.0 - X
[ 8ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = 1.6701700790245661E-7
; } intrm_sf_mf_609 = X [ 7ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ) * 3827.6794129126583 +
296.802103844292 ; t69 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup (
& k_efOut . mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t69 [
0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10 = k_efOut ;
tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = l_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = pmf_exp ( pmf_log ( X
[ 39ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W >= 1.0 ) { t94_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W - 1.0 ) * 461.523 +
intrm_sf_mf_609 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR
= intrm_sf_mf_609 / ( t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ;
intrm_sf_mf_609 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) / ( t140 == 0.0
? 1.0E-16 : t140 ) ; if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) {
intrm_sf_mf_609 = 0.0 ; } else if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) {
intrm_sf_mf_609 = X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; } else {
intrm_sf_mf_609 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * (
intrm_sf_mf_609 * intrm_sf_mf_609 * 3.0 - intrm_sf_mf_609 * intrm_sf_mf_609 *
intrm_sf_mf_609 * 2.0 ) ; } t153 = t153 * intrm_sf_mf_609 *
0.026773120849090417 / 0.001 ; t153 *= 100000.0 ; if ( X [ 11ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = X [ 11ULL ] >= 1.0 ?
1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 10ULL ] >=
1.0 ? 1.0 : X [ 10ULL ] ; } t140 = X [ 9ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W *
461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
4124.48151675695 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W = X
[ 40ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( 1.0 - X [ 11ULL ] >= 0.01
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 - X [
11ULL ] ; } else if ( 1.0 - X [ 11ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = pmf_exp ( ( (
1.0 - X [ 11ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR =
1.6701700790245661E-7 ; } t140 = X [ 10ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
3827.6794129126583 + 296.802103844292 ; t69 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = n_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = pmf_exp (
pmf_log ( X [ 40ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >= 1.0 ) {
t94_idx_0 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR -
1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 11ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 11ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W * t140 *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 0ULL ] = X
[ 304ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 1ULL ] = X [ 41ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 2ULL ] = X
[ 306ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 3ULL ] = X [ 43ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 4ULL ] = X
[ 308ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 5ULL ] = X [ 305ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 6ULL ] = X
[ 42ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [
7ULL ] = X [ 307ULL ] ; if ( X [ 43ULL ] <= 0.0 ) { t165 = 0.0 ; } else {
t165 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 42ULL ] >=
1.0 ? 1.0 : X [ 42ULL ] ; } t140 = X [ 41ULL ] * ( ( ( ( 1.0 - t165 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + t165 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
259.836612622973 ) ; t165 = X [ 44ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ;
if ( 1.0 - X [ 43ULL ] >= 0.01 ) { t167 = 1.0 - X [ 43ULL ] ; } else if ( 1.0
- X [ 43ULL ] >= - 0.1 ) { t167 = pmf_exp ( ( ( 1.0 - X [ 43ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t167 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 42ULL ] / (
t167 == 0.0 ? 1.0E-16 : t167 ) * - 36.965491221318985 + 296.802103844292 ;
t69 [ 0ULL ] = X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & o_efOut .
mField0 [ 0ULL ] , & o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [
0ULL ] , & t16 [ 0ULL ] ) ; t11 = o_efOut ; tlu2_1d_linear_linear_value ( &
p_efOut [ 0ULL ] , & t11 . mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] )
; t94_idx_0 = p_efOut [ 0 ] ; t167 = pmf_exp ( pmf_log ( X [ 44ULL ] *
100000.0 ) - t94_idx_0 ) ; if ( t167 >= 1.0 ) { t94_idx_0 = ( t167 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR / ( t94_idx_0 ==
0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 43ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ) / ( t140 == 0.0 ?
1.0E-16 : t140 ) ; if ( X [ 43ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else if
( X [ 43ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 43ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = ( X [ 43ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 2.0 ) ; } t165
= t165 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
0.00049087385212340522 / 0.001 ; t165 *= 100000.0 ; t167 = ( X [ 344ULL ] *
0.07812500122070315 + U_idx_8 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
47ULL ] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X [ 47ULL ]
>= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) { t140 = 0.0 ; }
else { t140 = X [ 48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } t140 = X [ 45ULL ] *
( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ) - t140 )
* 296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
461.523 ) + t140 * 259.836612622973 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X [ 46ULL ] / ( t140 ==
0.0 ? 1.0E-16 : t140 ) ; t91 [ 0ULL ] = X [ 46ULL ] * 100000.0 ; t91 [ 1ULL ]
= X [ 45ULL ] ; t91 [ 2ULL ] = X [ 355ULL ] ; t91 [ 3ULL ] = X [ 47ULL ] ;
t91 [ 4ULL ] = X [ 350ULL ] ; t91 [ 5ULL ] = X [ 354ULL ] ; t91 [ 6ULL ] = X
[ 48ULL ] ; t91 [ 7ULL ] = X [ 351ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ;
t119 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t119 ] =
t91 [ t119 ] ; } if ( 1.0 - X [ 47ULL ] >= 0.01 ) { t171 = 1.0 - X [ 47ULL ]
; } else if ( 1.0 - X [ 47ULL ] >= - 0.1 ) { t171 = pmf_exp ( ( ( 1.0 - X [
47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t171 = 1.6701700790245661E-7 ;
} t140 = X [ 48ULL ] / ( t171 == 0.0 ? 1.0E-16 : t171 ) * -
36.965491221318985 + 296.802103844292 ; t69 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t11
= q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t11 .
mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = r_efOut [ 0 ]
; t171 = pmf_exp ( pmf_log ( X [ 46ULL ] * 100000.0 ) - t94_idx_0 ) ; if (
t171 >= 1.0 ) { t94_idx_0 = ( t171 - 1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 47ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 47ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * t140 *
0.0019634954084936209 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *= 100000.0 ; t171 =
U_idx_8 * 10.0 ; if ( X [ 14ULL ] <= 0.0 ) { t173 = 0.0 ; } else { t173 = X [
14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 13ULL ] >=
1.0 ? 1.0 : X [ 13ULL ] ; } t140 = X [ 12ULL ] * ( ( ( ( 1.0 - t173 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + t173 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
259.836612622973 ) ; t173 = X [ 49ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ;
if ( 1.0 - X [ 14ULL ] >= 0.01 ) { t176 = 1.0 - X [ 14ULL ] ; } else if ( 1.0
- X [ 14ULL ] >= - 0.1 ) { t176 = pmf_exp ( ( ( 1.0 - X [ 14ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t176 = 1.6701700790245661E-7 ; } t140 = X [ 13ULL
] / ( t176 == 0.0 ? 1.0E-16 : t176 ) * - 36.965491221318985 +
296.802103844292 ; t69 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup
( & s_efOut . mField0 [ 0ULL ] , & s_efOut . mField1 [ 0ULL ] , & s_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t69 [
0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10 = s_efOut ;
tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = t_efOut [ 0 ] ; t176 = pmf_exp
( pmf_log ( X [ 49ULL ] * 100000.0 ) - t94_idx_0 ) ; if ( t176 >= 1.0 ) {
t94_idx_0 = ( t176 - 1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 14ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 14ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 14ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 14ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 14ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; } t173 = t173 * t140 *
0.026773120849090417 / 0.001 ; t173 *= 100000.0 ; if ( X [ 17ULL ] <= 0.0 ) {
t176 = 0.0 ; } else { t176 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if (
X [ 16ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = X [ 16ULL ] >=
1.0 ? 1.0 : X [ 16ULL ] ; } t140 = X [ 15ULL ] * ( ( ( ( 1.0 - t176 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) *
296.802103844292 + t176 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR *
259.836612622973 ) ; t176 = X [ 50ULL ] / ( t140 == 0.0 ? 1.0E-16 : t140 ) ;
if ( 1.0 - X [ 17ULL ] >= 0.01 ) { t94_idx_0 = 1.0 - X [ 17ULL ] ; } else if
( 1.0 - X [ 17ULL ] >= - 0.1 ) { t94_idx_0 = pmf_exp ( ( ( 1.0 - X [ 17ULL ]
) - 0.01 ) / 0.01 ) * 0.01 ; } else { t94_idx_0 = 1.6701700790245661E-7 ; }
t140 = X [ 16ULL ] / ( t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) * -
36.965491221318985 + 296.802103844292 ; t69 [ 0ULL ] = X [ 15ULL ] ;
tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t94_idx_0 = v_efOut [ 0 ]
; t94_idx_0 = pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t94_idx_0 ) ; if
( t94_idx_0 >= 1.0 ) { t94_idx_0 = ( t94_idx_0 - 1.0 ) * 461.523 + t140 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t140 / (
t94_idx_0 == 0.0 ? 1.0E-16 : t94_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = 1.0 ; } t140 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ; t140 = (
X [ 17ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) /
( t140 == 0.0 ? 1.0E-16 : t140 ) ; if ( X [ 17ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR <= 0.0 ) { t140 =
0.0 ; } else if ( X [ 17ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 0.01 ) { t140 =
X [ 17ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ; }
else { t140 = ( X [ 17ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR ) * ( t140 * t140
* 3.0 - t140 * t140 * t140 * 2.0 ) ; } t176 = t176 * t140 *
0.026773120849090417 / 0.001 ; t176 *= 100000.0 ; t94_idx_0 = ( ( ( ( X [
3ULL ] * 0.1 - X [ 57ULL ] ) + X [ 58ULL ] * - 0.1 ) + X [ 61ULL ] * 1.0E-9 )
- X [ 63ULL ] ) + X [ 4ULL ] ; t69 [ 0ULL ] = X [ 51ULL ] ; t70 [ 0 ] = 23ULL
; tlu2_linear_nearest_prelookup ( & w_efOut . mField0 [ 0ULL ] , & w_efOut .
mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t69 [ 0ULL ] , & t70 [ 0ULL ] , & t16 [ 0ULL ] ) ; t11
= w_efOut ; t69 [ 0ULL ] = X [ 396ULL ] ; t73 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & x_efOut . mField0 [ 0ULL ] , & x_efOut .
mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField22 , & t69 [ 0ULL ] , & t73 [ 0ULL ] , & t16 [ 0ULL ] ) ; t10
= x_efOut ; tlu2_2d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t11 .
mField0 [ 0ULL ] , & t11 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , &
t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t70 [ 0ULL ] , & t73 [ 0ULL ] , & t16 [ 0ULL ] ) ; t69 [ 0 ] = y_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR = t69 [ 0ULL ]
; t140 = X [ 115ULL ] * 0.00062831853071795862 ; intrm_sf_mf_609 = X [ 328ULL
] * 0.0031415926535897937 ; t78 [ 0ULL ] = 0.0 ; t78 [ 1ULL ] = 298.15 ; t78
[ 2ULL ] = X [ 0ULL ] * 0.00027777777777777778 ; t78 [ 3ULL ] = X [ 53ULL ] ;
t78 [ 4ULL ] = 0.0 ; t78 [ 5ULL ] = X [ 1ULL ] ; t78 [ 6ULL ] = X [ 54ULL ] ;
t78 [ 7ULL ] = 1.0 ; t78 [ 8ULL ] = X [ 55ULL ] ; t78 [ 9ULL ] = 0.0 ; t78 [
10ULL ] = 0.0 ; t78 [ 11ULL ] = 0.0 ; t78 [ 12ULL ] = 0.0 ; t78 [ 13ULL ] =
0.0 ; t78 [ 14ULL ] = 0.0 ; t78 [ 15ULL ] = 0.0 ; t78 [ 16ULL ] = 0.0 ; t78 [
17ULL ] = 0.0 ; t78 [ 18ULL ] = 0.0 ; t78 [ 19ULL ] = 0.0 ; t78 [ 20ULL ] = X
[ 56ULL ] ; t78 [ 21ULL ] = 1.0 ; t78 [ 22ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t78 [ 23ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t78 [ 24ULL ] = X [ 55ULL
] ; t78 [ 25ULL ] = 1.0 ; t78 [ 26ULL ] = 30.0 ; t78 [ 27ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t78 [ 28ULL ] =
Battery_System_DC_DC_Converter_i1 ; t78 [ 29ULL ] = X [ 55ULL ] ; t78 [ 30ULL
] = 0.0 ; t78 [ 31ULL ] = 0.0 ; t78 [ 32ULL ] = X [ 57ULL ] ; t78 [ 33ULL ] =
0.0 ; t78 [ 34ULL ] = 0.0 ; t78 [ 35ULL ] = X [ 55ULL ] ; t78 [ 36ULL ] = X [
58ULL ] ; t78 [ 37ULL ] = ( X [ 59ULL ] *
Battery_System_DC_DC_Converter_power_dissipated + ( 1.0 -
Battery_System_DC_DC_Converter_power_dissipated ) *
Battery_System_DC_DC_Converter_i1 * Battery_System_DC_DC_Converter_i1 ) *
1000.0 ; t78 [ 38ULL ] = X [ 59ULL ] * 1000.0 ; t78 [ 39ULL ] = X [ 2ULL ] ;
t78 [ 40ULL ] = X [ 58ULL ] ; t78 [ 41ULL ] = 0.0 ; t78 [ 42ULL ] = 0.0 ; t78
[ 43ULL ] = 0.0 ; t78 [ 44ULL ] = U_idx_0 ; t78 [ 45ULL ] = U_idx_0 ; t78 [
46ULL ] = X [ 55ULL ] ; t78 [ 47ULL ] = X [ 55ULL ] ; t78 [ 48ULL ] = U_idx_0
; t78 [ 49ULL ] = X [ 55ULL ] ; t78 [ 50ULL ] = 0.0 ; t78 [ 51ULL ] = - X [
53ULL ] ; t78 [ 52ULL ] = - X [ 53ULL ] ; t78 [ 53ULL ] = X [ 55ULL ] ; t78 [
54ULL ] = X [ 55ULL ] ; t78 [ 55ULL ] = - X [ 53ULL ] ; t78 [ 56ULL ] = 0.0 ;
t78 [ 57ULL ] = X [ 55ULL ] ; t78 [ 58ULL ] = 0.0 ; t78 [ 59ULL ] = X [ 55ULL
] ; t78 [ 60ULL ] = X [ 55ULL ] ; t78 [ 61ULL ] = X [ 55ULL ] ; t78 [ 62ULL ]
= X [ 55ULL ] ; t78 [ 63ULL ] = - X [ 57ULL ] ; t78 [ 64ULL ] = - X [ 57ULL ]
; t78 [ 65ULL ] = X [ 58ULL ] ; t78 [ 66ULL ] = X [ 58ULL ] ; t78 [ 67ULL ] =
0.0 ; t78 [ 68ULL ] = - X [ 57ULL ] ; t78 [ 69ULL ] = X [ 58ULL ] ; t78 [
70ULL ] = 0.0 ; t78 [ 71ULL ] = X [ 58ULL ] ; t78 [ 72ULL ] = X [ 58ULL ] ;
t78 [ 73ULL ] = X [ 58ULL ] ; t78 [ 74ULL ] = X [ 58ULL ] ; t78 [ 75ULL ] = -
X [ 57ULL ] ; t78 [ 76ULL ] = - X [ 57ULL ] ; t78 [ 77ULL ] = X [ 58ULL ] ;
t78 [ 78ULL ] = 0.0 ; t78 [ 79ULL ] = 0.0 ; t78 [ 80ULL ] = X [ 3ULL ] * -
0.1 + X [ 58ULL ] * 0.1 ; t78 [ 81ULL ] = 0.0 ; t78 [ 82ULL ] = X [ 58ULL ] ;
t78 [ 83ULL ] = X [ 58ULL ] ; t78 [ 84ULL ] = X [ 3ULL ] ; t78 [ 85ULL ] = X
[ 60ULL ] ; t78 [ 86ULL ] = U_idx_9 ; t78 [ 87ULL ] = 0.0 ; t78 [ 88ULL ] =
0.0 ; t78 [ 89ULL ] = Fuel_Cell_Boost_Converter_L_i ; t78 [ 90ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t78 [ 91ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 92ULL ] = X [ 61ULL ] ; t78 [ 93ULL ]
= X [ 4ULL ] ; t78 [ 94ULL ] = Fuel_Cell_Boost_Converter_L_n_v ; t78 [ 95ULL
] = X [ 63ULL ] ; t78 [ 96ULL ] = X [ 4ULL ] ; t78 [ 97ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t78 [ 98ULL ] = Fuel_Cell_Boost_Converter_L_i
; t78 [ 99ULL ] = 0.0 ; t78 [ 100ULL ] = 0.0 ; t78 [ 101ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 102ULL ] = X [ 58ULL ] ; t78 [ 103ULL
] = X [ 3ULL ] ; t78 [ 104ULL ] = Fuel_Cell_Current_Sensor1_I ; t78 [ 105ULL
] = Fuel_Cell_Current_Sensor1_I ; t78 [ 106ULL ] = X [ 58ULL ] ; t78 [ 107ULL
] = X [ 58ULL ] ; t78 [ 108ULL ] = Fuel_Cell_Current_Sensor1_I ; t78 [ 109ULL
] = 0.0 ; t78 [ 110ULL ] = X [ 64ULL ] ; t78 [ 111ULL ] = X [ 65ULL ] * 0.1 ;
t78 [ 112ULL ] = X [ 66ULL ] ; t78 [ 113ULL ] = X [ 67ULL ] ; t78 [ 114ULL ]
= X [ 68ULL ] ; t78 [ 115ULL ] = X [ 69ULL ] * 0.1 ; t78 [ 116ULL ] = X [
70ULL ] ; t78 [ 117ULL ] = X [ 71ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ;
t119 ++ ) { t78 [ t119 + 118ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 126ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 134ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 142ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
150ULL ] = 343.15 ; t78 [ 151ULL ] = X [ 64ULL ] ; t78 [ 152ULL ] = X [ 65ULL
] * 0.1 ; t78 [ 153ULL ] = X [ 66ULL ] ; t78 [ 154ULL ] = X [ 67ULL ] ; t78 [
155ULL ] = X [ 68ULL ] ; t78 [ 156ULL ] = X [ 69ULL ] * 0.1 ; t78 [ 157ULL ]
= X [ 70ULL ] ; t78 [ 158ULL ] = X [ 71ULL ] ; t78 [ 159ULL ] = X [ 92ULL ] ;
t78 [ 160ULL ] = X [ 93ULL ] ; t78 [ 161ULL ] = 343.15 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 162ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 170ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 178ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 186ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
194ULL ] = X [ 62ULL ] ; t78 [ 195ULL ] = X [ 94ULL ] ; t78 [ 196ULL ] = X [
9ULL ] ; t78 [ 197ULL ] = X [ 10ULL ] ; t78 [ 198ULL ] = X [ 11ULL ] ; t78 [
199ULL ] = X [ 15ULL ] ; t78 [ 200ULL ] = X [ 16ULL ] ; t78 [ 201ULL ] = X [
17ULL ] ; t78 [ 202ULL ] = 0.0 ; t78 [ 203ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
204ULL ] = X [ 96ULL ] ; t78 [ 205ULL ] = X [ 97ULL ] ; t78 [ 206ULL ] = X [
15ULL ] ; t78 [ 207ULL ] = X [ 16ULL ] ; t78 [ 208ULL ] = X [ 17ULL ] ; t78 [
209ULL ] = 343.15 ; t78 [ 210ULL ] = - X [ 96ULL ] ; t78 [ 211ULL ] = X [
98ULL ] ; t78 [ 212ULL ] = X [ 99ULL ] ; t78 [ 213ULL ] = X [ 9ULL ] ; t78 [
214ULL ] = X [ 10ULL ] ; t78 [ 215ULL ] = X [ 11ULL ] ; t78 [ 216ULL ] =
343.15 ; t78 [ 217ULL ] = - X [ 98ULL ] ; t78 [ 218ULL ] = X [ 100ULL ] ; t78
[ 219ULL ] = X [ 101ULL ] ; t78 [ 220ULL ] = X [ 15ULL ] ; t78 [ 221ULL ] = X
[ 16ULL ] ; t78 [ 222ULL ] = X [ 17ULL ] ; t78 [ 223ULL ] = 343.15 ; t78 [
224ULL ] = - X [ 100ULL ] ; t78 [ 225ULL ] = X [ 104ULL ] ; t78 [ 226ULL ] =
X [ 102ULL ] ; t78 [ 227ULL ] = X [ 9ULL ] ; t78 [ 228ULL ] = X [ 10ULL ] ;
t78 [ 229ULL ] = X [ 11ULL ] ; t78 [ 230ULL ] = 343.15 ; t78 [ 231ULL ] = - X
[ 104ULL ] ; t78 [ 232ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 ; t78 [
233ULL ] = X [ 103ULL ] ; t78 [ 234ULL ] = X [ 15ULL ] ; t78 [ 235ULL ] = X [
16ULL ] ; t78 [ 236ULL ] = X [ 17ULL ] ; t78 [ 237ULL ] = 343.15 ; t78 [
238ULL ] = - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50
; t78 [ 239ULL ] = X [ 9ULL ] ; t78 [ 240ULL ] = X [ 10ULL ] ; t78 [ 241ULL ]
= X [ 11ULL ] ; t78 [ 242ULL ] = X [ 15ULL ] ; t78 [ 243ULL ] = X [ 16ULL ] ;
t78 [ 244ULL ] = X [ 17ULL ] ; t78 [ 245ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
246ULL ] = 0.0 ; t78 [ 247ULL ] = 343.15 ; t78 [ 248ULL ] = 343.15 ; t78 [
249ULL ] = 343.15 ; t78 [ 250ULL ] = 343.15 ; t78 [ 251ULL ] = X [ 94ULL ] *
- 1000.0 ; t78 [ 252ULL ] = X [ 94ULL ] * - 1000.0 ; t78 [ 253ULL ] = - X [
94ULL ] ; t78 [ 254ULL ] = 343.15 ; t78 [ 255ULL ] = 0.0 ; t78 [ 256ULL ] =
343.15 ; t78 [ 257ULL ] = X [ 106ULL ] * 1000.0 ; t78 [ 258ULL ] = X [ 18ULL
] - 273.15 ; t78 [ 259ULL ] = 0.0 ; t78 [ 260ULL ] = 1.0 ; t78 [ 261ULL ] = (
- X [ 4ULL ] + X [ 61ULL ] * - 1.0E-9 ) - X [ 62ULL ] ; t78 [ 262ULL ] = 0.0
; t78 [ 263ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 264ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 265ULL ] = X [ 5ULL ] ; t78 [ 266ULL
] = Fuel_Cell_Boost_Converter_L_i ; t78 [ 267ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t78 [ 268ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 269ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 270ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t78 [ 271ULL ] = - X [ 62ULL ] ; t78 [ 272ULL
] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 273ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; t78 [ 274ULL ] = X
[ 95ULL ] ; t78 [ 275ULL ] = - X [ 62ULL ] ; t78 [ 276ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; t78 [ 277ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
278ULL ] = X [ 62ULL ] * - 0.001 ; t78 [ 279ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 280ULL ] = 0.0 ; t78 [ 281ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 282ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 283ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t78 [
284ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [ 285ULL ] = 0.0 ; t78 [
286ULL ] = 343.15 ; t78 [ 287ULL ] = 0.0 ; t78 [ 288ULL ] = 343.15 ; t78 [
289ULL ] = 70.0 ; t78 [ 290ULL ] = 343.15 ; t78 [ 291ULL ] = ( ( ( ( ( - X [
94ULL ] - X [ 106ULL ] ) - X [ 107ULL ] ) - X [ 108ULL ] ) - X [ 109ULL ] ) -
X [ 110ULL ] ) * 1000.0 ; t78 [ 292ULL ] = 0.0 ; t78 [ 293ULL ] = X [ 111ULL
] ; t78 [ 294ULL ] = X [ 112ULL ] * 0.1 ; t78 [ 295ULL ] = X [ 113ULL ] ; t78
[ 296ULL ] = X [ 114ULL ] ; t78 [ 297ULL ] = X [ 115ULL ] ; t78 [ 298ULL ] =
293.15 ; t78 [ 299ULL ] = - 184.19157727996955 + t140 * 1000.0 ; t78 [ 300ULL
] = ( X [ 115ULL ] * 0.00062831853071795862 - 0.18419157727996954 ) *
1591.5494309189535 ; t78 [ 301ULL ] = 0.0 ; t78 [ 302ULL ] = X [ 116ULL ] ;
t78 [ 303ULL ] = 0.101325 ; t78 [ 304ULL ] = X [ 117ULL ] ; t78 [ 305ULL ] =
X [ 118ULL ] ; t78 [ 306ULL ] = X [ 119ULL ] ; t78 [ 307ULL ] = X [ 120ULL ]
; t78 [ 308ULL ] = 0.0 ; t78 [ 309ULL ] = X [ 128ULL ] ; t78 [ 310ULL ] = X [
127ULL ] ; t78 [ 311ULL ] = 293.15 ; t78 [ 312ULL ] = X [ 116ULL ] ; t78 [
313ULL ] = 0.101325 ; t78 [ 314ULL ] = X [ 117ULL ] ; t78 [ 315ULL ] = X [
118ULL ] ; t78 [ 316ULL ] = X [ 120ULL ] ; t78 [ 317ULL ] = X [ 121ULL ] ;
t78 [ 318ULL ] = X [ 122ULL ] ; t78 [ 319ULL ] = X [ 123ULL ] ; t78 [ 320ULL
] = X [ 124ULL ] ; t78 [ 321ULL ] = X [ 125ULL ] ; t78 [ 322ULL ] = X [
126ULL ] ; t78 [ 323ULL ] = X [ 122ULL ] ; t78 [ 324ULL ] = X [ 123ULL ] ;
t78 [ 325ULL ] = X [ 124ULL ] ; t78 [ 326ULL ] = 0.101325 ; t78 [ 327ULL ] =
0.9997 ; t78 [ 328ULL ] = X [ 129ULL ] ; t78 [ 329ULL ] = 293.15 ; t78 [
330ULL ] = - 184.19157727996955 + t140 * 1000.0 ; t78 [ 331ULL ] = U_idx_1 ;
t78 [ 332ULL ] = U_idx_1 * 3.1415926535897929E-6 ; t78 [ 333ULL ] = X [
111ULL ] ; t78 [ 334ULL ] = X [ 112ULL ] * 0.1 ; t78 [ 335ULL ] = X [ 113ULL
] ; t78 [ 336ULL ] = X [ 114ULL ] ; t78 [ 337ULL ] = X [ 130ULL ] ; t78 [
338ULL ] = X [ 131ULL ] * 0.1 ; t78 [ 339ULL ] = X [ 132ULL ] ; t78 [ 340ULL
] = X [ 133ULL ] ; t78 [ 341ULL ] = X [ 22ULL ] ; t78 [ 342ULL ] = X [ 138ULL
] ; t78 [ 343ULL ] = X [ 21ULL ] ; t78 [ 344ULL ] = X [ 135ULL ] ; t78 [
345ULL ] = X [ 19ULL ] - 273.15 ; t78 [ 346ULL ] = X [ 134ULL ] ; t78 [
347ULL ] = X [ 136ULL ] * 0.1 ; t78 [ 348ULL ] = X [ 20ULL ] * 0.1 ; t78 [
349ULL ] = X [ 137ULL ] ; t78 [ 350ULL ] = X [ 139ULL ] ; t78 [ 351ULL ] = -
X [ 122ULL ] ; t78 [ 352ULL ] = X [ 140ULL ] * 0.1 ; for ( t119 = 0ULL ; t119
< 8ULL ; t119 ++ ) { t78 [ t119 + 353ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t119 ] ; } t78 [
361ULL ] = X [ 115ULL ] ; t78 [ 362ULL ] = X [ 141ULL ] ; t78 [ 363ULL ] = X
[ 143ULL ] ; t78 [ 364ULL ] = - X [ 120ULL ] ; t78 [ 365ULL ] = 0.0 ; t78 [
366ULL ] = 0.18419157727996954 - t140 ; t78 [ 367ULL ] = X [ 142ULL ] ; t78 [
368ULL ] = X [ 19ULL ] ; t78 [ 369ULL ] = X [ 22ULL ] ; t78 [ 370ULL ] = X [
21ULL ] ; t78 [ 371ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_w_con ; t78 [
372ULL ] = X [ 111ULL ] ; t78 [ 373ULL ] = X [ 112ULL ] * 0.1 ; t78 [ 374ULL
] = X [ 113ULL ] ; t78 [ 375ULL ] = X [ 114ULL ] ; t78 [ 376ULL ] = X [
143ULL ] ; t78 [ 377ULL ] = X [ 144ULL ] ; t78 [ 378ULL ] = X [ 134ULL ] ;
t78 [ 379ULL ] = X [ 145ULL ] ; t78 [ 380ULL ] = X [ 146ULL ] ; t78 [ 381ULL
] = X [ 147ULL ] ; t78 [ 382ULL ] = X [ 148ULL ] ; t78 [ 383ULL ] = X [
130ULL ] ; t78 [ 384ULL ] = X [ 131ULL ] * 0.1 ; t78 [ 385ULL ] = X [ 132ULL
] ; t78 [ 386ULL ] = X [ 133ULL ] ; t78 [ 387ULL ] = - X [ 120ULL ] ; t78 [
388ULL ] = X [ 149ULL ] ; t78 [ 389ULL ] = - X [ 122ULL ] ; t78 [ 390ULL ] =
- X [ 123ULL ] ; t78 [ 391ULL ] = - X [ 124ULL ] ; t78 [ 392ULL ] = X [
150ULL ] ; t78 [ 393ULL ] = X [ 151ULL ] ; t78 [ 394ULL ] = X [ 145ULL ] ;
t78 [ 395ULL ] = - X [ 123ULL ] ; t78 [ 396ULL ] = 0.0 ; t78 [ 397ULL ] = 0.0
; t78 [ 398ULL ] = X [ 146ULL ] ; t78 [ 399ULL ] = - X [ 124ULL ] ; t78 [
400ULL ] = X [ 130ULL ] ; t78 [ 401ULL ] = X [ 131ULL ] * 0.1 ; t78 [ 402ULL
] = X [ 132ULL ] ; t78 [ 403ULL ] = X [ 133ULL ] ; t78 [ 404ULL ] = U_idx_1 *
0.031415926535897927 * 0.0001 ; t78 [ 405ULL ] = X [ 116ULL ] ; t78 [ 406ULL
] = 0.101325 ; t78 [ 407ULL ] = X [ 117ULL ] ; t78 [ 408ULL ] = X [ 118ULL ]
; t78 [ 409ULL ] = X [ 122ULL ] ; t78 [ 410ULL ] = X [ 130ULL ] ; t78 [
411ULL ] = X [ 131ULL ] * 0.1 ; t78 [ 412ULL ] = X [ 132ULL ] ; t78 [ 413ULL
] = X [ 133ULL ] ; t78 [ 414ULL ] = X [ 120ULL ] ; t78 [ 415ULL ] = X [
158ULL ] ; t78 [ 416ULL ] = X [ 122ULL ] ; t78 [ 417ULL ] = X [ 123ULL ] ;
t78 [ 418ULL ] = X [ 124ULL ] ; t78 [ 419ULL ] = X [ 155ULL ] ; t78 [ 420ULL
] = X [ 154ULL ] ; t78 [ 421ULL ] = X [ 152ULL ] ; t78 [ 422ULL ] = X [
153ULL ] * 0.1 ; t78 [ 423ULL ] = X [ 156ULL ] ; t78 [ 424ULL ] = X [ 157ULL
] ; t78 [ 425ULL ] = X [ 120ULL ] ; t78 [ 426ULL ] = - X [ 120ULL ] ; t78 [
427ULL ] = X [ 116ULL ] ; t78 [ 428ULL ] = 0.101325 ; t78 [ 429ULL ] = X [
117ULL ] ; t78 [ 430ULL ] = X [ 118ULL ] ; t78 [ 431ULL ] = - X [ 120ULL ] ;
t78 [ 432ULL ] = X [ 158ULL ] ; t78 [ 433ULL ] = - X [ 122ULL ] ; t78 [
434ULL ] = - X [ 123ULL ] ; t78 [ 435ULL ] = - X [ 124ULL ] ; t78 [ 436ULL ]
= X [ 155ULL ] ; t78 [ 437ULL ] = X [ 154ULL ] ; t78 [ 438ULL ] = - X [
122ULL ] ; t78 [ 439ULL ] = X [ 123ULL ] ; t78 [ 440ULL ] = - X [ 123ULL ] ;
t78 [ 441ULL ] = X [ 124ULL ] ; t78 [ 442ULL ] = - X [ 124ULL ] ; t78 [
443ULL ] = U_idx_1 ; t78 [ 444ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t78 [
445ULL ] = 0.0 ; t78 [ 446ULL ] = X [ 159ULL ] ; t78 [ 447ULL ] = X [ 160ULL
] * 0.1 ; t78 [ 448ULL ] = X [ 161ULL ] ; t78 [ 449ULL ] = X [ 162ULL ] ; t78
[ 450ULL ] = X [ 163ULL ] ; t78 [ 451ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 452ULL
] = X [ 164ULL ] ; t78 [ 453ULL ] = X [ 165ULL ] ; t78 [ 454ULL ] = X [ 23ULL
] ; t78 [ 455ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 456ULL ] = X [ 25ULL ] ; t78 [
457ULL ] = X [ 26ULL ] ; t78 [ 458ULL ] = X [ 23ULL ] ; t78 [ 459ULL ] = X [
24ULL ] * 0.1 ; t78 [ 460ULL ] = X [ 25ULL ] ; t78 [ 461ULL ] = X [ 26ULL ] ;
t78 [ 462ULL ] = X [ 23ULL ] ; t78 [ 463ULL ] = X [ 24ULL ] * 0.1 ; t78 [
464ULL ] = X [ 25ULL ] ; t78 [ 465ULL ] = X [ 26ULL ] ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 466ULL ] = t79 [ t119 ] ; } t78 [
474ULL ] = X [ 23ULL ] ; t78 [ 475ULL ] = X [ 166ULL ] ; t78 [ 476ULL ] = X [
170ULL ] ; t78 [ 477ULL ] = 0.0 ; t78 [ 478ULL ] = 0.0 ; t78 [ 479ULL ] = 0.0
; t78 [ 480ULL ] = 0.0 ; t78 [ 481ULL ] = X [ 23ULL ] - 273.15 ; t78 [ 482ULL
] = X [ 25ULL ] ; t78 [ 483ULL ] = X [ 168ULL ] ; t78 [ 484ULL ] = X [ 26ULL
] ; t78 [ 485ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 486ULL ] = 0.0 ; t78 [ 487ULL
] = X [ 167ULL ] ; t78 [ 488ULL ] = X [ 23ULL ] ; t78 [ 489ULL ] = X [ 25ULL
] ; t78 [ 490ULL ] = X [ 26ULL ] ; t78 [ 491ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ; t78 [ 492ULL ] =
X [ 163ULL ] ; t78 [ 493ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 494ULL ] = X [
164ULL ] ; t78 [ 495ULL ] = X [ 165ULL ] ; t78 [ 496ULL ] = X [ 170ULL ] ;
t78 [ 497ULL ] = X [ 171ULL ] ; t78 [ 498ULL ] = X [ 172ULL ] ; t78 [ 499ULL
] = X [ 173ULL ] ; t78 [ 500ULL ] = X [ 174ULL ] ; t78 [ 501ULL ] = X [
175ULL ] ; t78 [ 502ULL ] = X [ 176ULL ] ; t78 [ 503ULL ] = X [ 172ULL ] ;
t78 [ 504ULL ] = 0.0 ; t78 [ 505ULL ] = 0.0 ; t78 [ 506ULL ] = 0.0 ; t78 [
507ULL ] = X [ 173ULL ] ; t78 [ 508ULL ] = 0.0 ; t78 [ 509ULL ] = 0.0 ; t78 [
510ULL ] = 0.0 ; t78 [ 511ULL ] = 0.0 ; t78 [ 512ULL ] = 0.0 ; t78 [ 513ULL ]
= X [ 174ULL ] ; t78 [ 514ULL ] = 0.0 ; t78 [ 515ULL ] = 0.0 ; t78 [ 516ULL ]
= 0.0 ; t78 [ 517ULL ] = X [ 169ULL ] ; t78 [ 518ULL ] = X [ 159ULL ] ; t78 [
519ULL ] = X [ 160ULL ] * 0.1 ; t78 [ 520ULL ] = X [ 161ULL ] ; t78 [ 521ULL
] = X [ 162ULL ] ; t78 [ 522ULL ] = X [ 163ULL ] ; t78 [ 523ULL ] = X [ 24ULL
] * 0.1 ; t78 [ 524ULL ] = X [ 164ULL ] ; t78 [ 525ULL ] = X [ 165ULL ] ; t78
[ 526ULL ] = X [ 163ULL ] ; t78 [ 527ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 528ULL
] = X [ 164ULL ] ; t78 [ 529ULL ] = X [ 165ULL ] ; t78 [ 530ULL ] = - X [
172ULL ] ; t78 [ 531ULL ] = - X [ 173ULL ] ; t78 [ 532ULL ] = - X [ 174ULL ]
; t78 [ 533ULL ] = X [ 170ULL ] * - 1000.0 ; t78 [ 534ULL ] = - X [ 170ULL ]
; t78 [ 535ULL ] = 0.0 ; t78 [ 536ULL ] = - X [ 172ULL ] ; t78 [ 537ULL ] = -
X [ 173ULL ] ; t78 [ 538ULL ] = - X [ 174ULL ] ; t78 [ 539ULL ] = - X [
172ULL ] ; t78 [ 540ULL ] = X [ 23ULL ] ; t78 [ 541ULL ] = X [ 23ULL ] ; t78
[ 542ULL ] = X [ 177ULL ] ; t78 [ 543ULL ] = X [ 177ULL ] ; t78 [ 544ULL ] =
X [ 178ULL ] ; t78 [ 545ULL ] = X [ 179ULL ] * 0.1 ; t78 [ 546ULL ] = X [
180ULL ] ; t78 [ 547ULL ] = X [ 181ULL ] ; t78 [ 548ULL ] = X [ 159ULL ] ;
t78 [ 549ULL ] = X [ 160ULL ] * 0.1 ; t78 [ 550ULL ] = X [ 161ULL ] ; t78 [
551ULL ] = X [ 162ULL ] ; t78 [ 552ULL ] = X [ 30ULL ] ; t78 [ 553ULL ] = X [
185ULL ] ; t78 [ 554ULL ] = X [ 29ULL ] ; t78 [ 555ULL ] = X [ 182ULL ] ; t78
[ 556ULL ] = X [ 27ULL ] - 273.15 ; t78 [ 557ULL ] = - X [ 172ULL ] ; t78 [
558ULL ] = X [ 183ULL ] * 0.1 ; t78 [ 559ULL ] = X [ 28ULL ] * 0.1 ; t78 [
560ULL ] = X [ 184ULL ] ; t78 [ 561ULL ] = X [ 187ULL ] ; t78 [ 562ULL ] = X
[ 186ULL ] ; t78 [ 563ULL ] = X [ 188ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 <
8ULL ; t119 ++ ) { t78 [ t119 + 564ULL ] = t81 [ t119 ] ; } t78 [ 572ULL ] =
X [ 177ULL ] ; t78 [ 573ULL ] = X [ 189ULL ] ; t78 [ 574ULL ] = - X [ 170ULL
] ; t78 [ 575ULL ] = X [ 191ULL ] ; t78 [ 576ULL ] = 0.0 ; t78 [ 577ULL ] =
0.0 ; t78 [ 578ULL ] = X [ 190ULL ] ; t78 [ 579ULL ] = X [ 27ULL ] ; t78 [
580ULL ] = X [ 30ULL ] ; t78 [ 581ULL ] = X [ 29ULL ] ; t78 [ 582ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_W ; t78 [ 583ULL ] = X [
178ULL ] ; t78 [ 584ULL ] = X [ 179ULL ] * 0.1 ; t78 [ 585ULL ] = X [ 180ULL
] ; t78 [ 586ULL ] = X [ 181ULL ] ; t78 [ 587ULL ] = - X [ 170ULL ] ; t78 [
588ULL ] = X [ 192ULL ] ; t78 [ 589ULL ] = - X [ 172ULL ] ; t78 [ 590ULL ] =
- X [ 173ULL ] ; t78 [ 591ULL ] = - X [ 174ULL ] ; t78 [ 592ULL ] = X [
193ULL ] ; t78 [ 593ULL ] = X [ 194ULL ] ; t78 [ 594ULL ] = X [ 159ULL ] ;
t78 [ 595ULL ] = X [ 160ULL ] * 0.1 ; t78 [ 596ULL ] = X [ 161ULL ] ; t78 [
597ULL ] = X [ 162ULL ] ; t78 [ 598ULL ] = X [ 191ULL ] ; t78 [ 599ULL ] = X
[ 195ULL ] ; t78 [ 600ULL ] = X [ 186ULL ] ; t78 [ 601ULL ] = X [ 196ULL ] ;
t78 [ 602ULL ] = X [ 197ULL ] ; t78 [ 603ULL ] = X [ 198ULL ] ; t78 [ 604ULL
] = X [ 199ULL ] ; t78 [ 605ULL ] = - X [ 173ULL ] ; t78 [ 606ULL ] = X [
196ULL ] ; t78 [ 607ULL ] = 0.0 ; t78 [ 608ULL ] = 0.0 ; t78 [ 609ULL ] = - X
[ 174ULL ] ; t78 [ 610ULL ] = X [ 197ULL ] ; t78 [ 611ULL ] = X [ 163ULL ] ;
t78 [ 612ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 613ULL ] = X [ 164ULL ] ; t78 [
614ULL ] = X [ 165ULL ] ; t78 [ 615ULL ] = 0.0 ; t78 [ 616ULL ] = 0.0 ; t78 [
617ULL ] = 0.0 ; t78 [ 618ULL ] = 0.0 ; t78 [ 619ULL ] = X [ 178ULL ] ; t78 [
620ULL ] = X [ 179ULL ] * 0.1 ; t78 [ 621ULL ] = X [ 180ULL ] ; t78 [ 622ULL
] = X [ 181ULL ] ; t78 [ 623ULL ] = 0.040000000000000008 ; t78 [ 624ULL ] =
t131 * 1.0E+6 ; t78 [ 625ULL ] = intrm_sf_mf_305 ; t78 [ 626ULL ] =
0.040000000000000008 ; t78 [ 627ULL ] = 0.005000000000000001 ; t78 [ 628ULL ]
= t131 * - 125000.03125000779 ; t78 [ 629ULL ] = t131 * 1.0E+6 ; t78 [ 630ULL
] = intrm_sf_mf_305 ; t78 [ 631ULL ] = intrm_sf_mf_305 *
7.8539816339744827E-5 ; t78 [ 632ULL ] = X [ 179ULL ] * 99999.999999999985 ;
t78 [ 633ULL ] = ( t134 - 0.05000000000000001 ) * 0.1 ; t78 [ 634ULL ] = t131
* - 125000.03125000779 ; t78 [ 635ULL ] = t134 * 0.1 ; t78 [ 636ULL ] =
0.005000000000000001 ; t78 [ 637ULL ] = ( t134 - 0.05000000000000001 ) * 0.1
; t78 [ 638ULL ] = X [ 178ULL ] ; t78 [ 639ULL ] = X [ 179ULL ] * 0.1 ; t78 [
640ULL ] = X [ 180ULL ] ; t78 [ 641ULL ] = X [ 181ULL ] ; t78 [ 642ULL ] =
0.0 ; t78 [ 643ULL ] = 0.0 ; t78 [ 644ULL ] = 0.0 ; t78 [ 645ULL ] = 0.0 ;
t78 [ 646ULL ] = X [ 179ULL ] * 99999.999999999985 ; t78 [ 647ULL ] =
101324.99999999999 ; t78 [ 648ULL ] = 101324.99999999999 ; t78 [ 649ULL ] = X
[ 178ULL ] ; t78 [ 650ULL ] = X [ 163ULL ] ; t78 [ 651ULL ] = X [ 24ULL ] *
0.1 ; t78 [ 652ULL ] = X [ 164ULL ] ; t78 [ 653ULL ] = X [ 165ULL ] ; t78 [
654ULL ] = intrm_sf_mf_305 * 7.8539816339744827E-5 ; t78 [ 655ULL ] = X [
178ULL ] ; t78 [ 656ULL ] = X [ 179ULL ] * 0.1 ; t78 [ 657ULL ] = X [ 180ULL
] ; t78 [ 658ULL ] = X [ 181ULL ] ; t78 [ 659ULL ] = - X [ 172ULL ] ; t78 [
660ULL ] = X [ 163ULL ] ; t78 [ 661ULL ] = X [ 24ULL ] * 0.1 ; t78 [ 662ULL ]
= X [ 164ULL ] ; t78 [ 663ULL ] = X [ 165ULL ] ; t78 [ 664ULL ] = - X [
170ULL ] ; t78 [ 665ULL ] = X [ 206ULL ] ; t78 [ 666ULL ] = - X [ 172ULL ] ;
t78 [ 667ULL ] = - X [ 173ULL ] ; t78 [ 668ULL ] = - X [ 174ULL ] ; t78 [
669ULL ] = X [ 203ULL ] ; t78 [ 670ULL ] = X [ 202ULL ] ; t78 [ 671ULL ] = X
[ 200ULL ] ; t78 [ 672ULL ] = X [ 201ULL ] * 0.1 ; t78 [ 673ULL ] = X [
204ULL ] ; t78 [ 674ULL ] = X [ 205ULL ] ; t78 [ 675ULL ] = - X [ 170ULL ] ;
t78 [ 676ULL ] = X [ 170ULL ] ; t78 [ 677ULL ] = X [ 178ULL ] ; t78 [ 678ULL
] = X [ 179ULL ] * 0.1 ; t78 [ 679ULL ] = X [ 180ULL ] ; t78 [ 680ULL ] = X [
181ULL ] ; t78 [ 681ULL ] = X [ 170ULL ] ; t78 [ 682ULL ] = X [ 206ULL ] ;
t78 [ 683ULL ] = X [ 172ULL ] ; t78 [ 684ULL ] = X [ 173ULL ] ; t78 [ 685ULL
] = X [ 174ULL ] ; t78 [ 686ULL ] = X [ 203ULL ] ; t78 [ 687ULL ] = X [
202ULL ] ; t78 [ 688ULL ] = X [ 172ULL ] ; t78 [ 689ULL ] = - X [ 173ULL ] ;
t78 [ 690ULL ] = X [ 173ULL ] ; t78 [ 691ULL ] = - X [ 174ULL ] ; t78 [
692ULL ] = X [ 174ULL ] ; t78 [ 693ULL ] = t134 * 0.1 ; t78 [ 694ULL ] =
U_idx_2 ; t78 [ 695ULL ] = X [ 207ULL ] ; t78 [ 696ULL ] = 0.101325 ; t78 [
697ULL ] = X [ 208ULL ] ; t78 [ 698ULL ] = X [ 209ULL ] ; t78 [ 699ULL ] = X
[ 210ULL ] ; t78 [ 700ULL ] = X [ 211ULL ] ; t78 [ 701ULL ] = 0.5 ; t78 [
702ULL ] = X [ 219ULL ] ; t78 [ 703ULL ] = X [ 218ULL ] ; t78 [ 704ULL ] =
293.15 ; t78 [ 705ULL ] = X [ 207ULL ] ; t78 [ 706ULL ] = 0.101325 ; t78 [
707ULL ] = X [ 208ULL ] ; t78 [ 708ULL ] = X [ 209ULL ] ; t78 [ 709ULL ] = X
[ 211ULL ] ; t78 [ 710ULL ] = X [ 212ULL ] ; t78 [ 711ULL ] = X [ 213ULL ] ;
t78 [ 712ULL ] = X [ 214ULL ] ; t78 [ 713ULL ] = X [ 215ULL ] ; t78 [ 714ULL
] = X [ 216ULL ] ; t78 [ 715ULL ] = X [ 217ULL ] ; t78 [ 716ULL ] = X [
213ULL ] ; t78 [ 717ULL ] = X [ 214ULL ] ; t78 [ 718ULL ] = X [ 215ULL ] ;
t78 [ 719ULL ] = 0.101325 ; t78 [ 720ULL ] = 0.21 ; t78 [ 721ULL ] = X [
220ULL ] ; t78 [ 722ULL ] = X [ 221ULL ] ; t78 [ 723ULL ] = X [ 31ULL ] * 0.1
; t78 [ 724ULL ] = X [ 222ULL ] ; t78 [ 725ULL ] = X [ 223ULL ] ; t78 [
726ULL ] = X [ 207ULL ] ; t78 [ 727ULL ] = 0.101325 ; t78 [ 728ULL ] = X [
208ULL ] ; t78 [ 729ULL ] = X [ 209ULL ] ; t78 [ 730ULL ] = X [ 221ULL ] ;
t78 [ 731ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 732ULL ] = X [ 222ULL ] ; t78 [
733ULL ] = X [ 223ULL ] ; t78 [ 734ULL ] = X [ 225ULL ] ; t78 [ 735ULL ] = X
[ 228ULL ] ; t78 [ 736ULL ] = X [ 207ULL ] ; t78 [ 737ULL ] = 0.101325 ; t78
[ 738ULL ] = X [ 208ULL ] ; t78 [ 739ULL ] = X [ 209ULL ] ; t78 [ 740ULL ] =
- X [ 211ULL ] ; t78 [ 741ULL ] = X [ 229ULL ] ; t78 [ 742ULL ] = - X [
213ULL ] ; t78 [ 743ULL ] = - X [ 214ULL ] ; t78 [ 744ULL ] = - X [ 215ULL ]
; t78 [ 745ULL ] = X [ 230ULL ] ; t78 [ 746ULL ] = X [ 231ULL ] ; t78 [
747ULL ] = - X [ 213ULL ] ; t78 [ 748ULL ] = X [ 226ULL ] ; t78 [ 749ULL ] =
X [ 227ULL ] ; t78 [ 750ULL ] = X [ 221ULL ] ; t78 [ 751ULL ] = X [ 31ULL ] *
0.1 ; t78 [ 752ULL ] = X [ 222ULL ] ; t78 [ 753ULL ] = X [ 223ULL ] ; t78 [
754ULL ] = X [ 224ULL ] ; t78 [ 755ULL ] = X [ 229ULL ] ; t78 [ 756ULL ] = X
[ 213ULL ] ; t78 [ 757ULL ] = X [ 214ULL ] ; t78 [ 758ULL ] = X [ 215ULL ] ;
t78 [ 759ULL ] = X [ 230ULL ] ; t78 [ 760ULL ] = X [ 231ULL ] ; t78 [ 761ULL
] = X [ 213ULL ] ; t78 [ 762ULL ] = - X [ 213ULL ] ; t78 [ 763ULL ] = - X [
211ULL ] ; t78 [ 764ULL ] = X [ 224ULL ] ; t78 [ 765ULL ] = - X [ 214ULL ] ;
t78 [ 766ULL ] = X [ 214ULL ] ; t78 [ 767ULL ] = - X [ 215ULL ] ; t78 [
768ULL ] = X [ 215ULL ] ; t78 [ 769ULL ] = X [ 221ULL ] ; t78 [ 770ULL ] = X
[ 31ULL ] * 0.1 ; t78 [ 771ULL ] = X [ 222ULL ] ; t78 [ 772ULL ] = X [ 223ULL
] ; t78 [ 773ULL ] = X [ 232ULL ] ; t78 [ 774ULL ] = X [ 31ULL ] * 0.1 ; t78
[ 775ULL ] = X [ 233ULL ] ; t78 [ 776ULL ] = X [ 234ULL ] ; t78 [ 777ULL ] =
X [ 32ULL ] ; t78 [ 778ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 779ULL ] = X [ 33ULL
] ; t78 [ 780ULL ] = X [ 34ULL ] ; t78 [ 781ULL ] = X [ 32ULL ] ; t78 [
782ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 783ULL ] = X [ 33ULL ] ; t78 [ 784ULL ]
= X [ 34ULL ] ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 +
785ULL ] = t83 [ t119 ] ; } t78 [ 793ULL ] = X [ 32ULL ] ; t78 [ 794ULL ] = X
[ 235ULL ] ; t78 [ 795ULL ] = - X [ 224ULL ] ; t78 [ 796ULL ] = X [ 239ULL ]
; t78 [ 797ULL ] = 0.0 ; t78 [ 798ULL ] = 0.0 ; t78 [ 799ULL ] = 0.0 ; t78 [
800ULL ] = X [ 32ULL ] - 273.15 ; t78 [ 801ULL ] = X [ 33ULL ] ; t78 [ 802ULL
] = X [ 237ULL ] ; t78 [ 803ULL ] = X [ 34ULL ] ; t78 [ 804ULL ] = X [ 31ULL
] * 0.1 ; t78 [ 805ULL ] = 0.0 ; t78 [ 806ULL ] = X [ 236ULL ] ; t78 [ 807ULL
] = X [ 32ULL ] ; t78 [ 808ULL ] = X [ 33ULL ] ; t78 [ 809ULL ] = X [ 34ULL ]
; t78 [ 810ULL ] = X [ 31ULL ] / ( t159 == 0.0 ? 1.0E-16 : t159 ) * t138 *
0.0003 / 0.001 * 100000.0 ; t78 [ 811ULL ] = X [ 221ULL ] ; t78 [ 812ULL ] =
X [ 31ULL ] * 0.1 ; t78 [ 813ULL ] = X [ 222ULL ] ; t78 [ 814ULL ] = X [
223ULL ] ; t78 [ 815ULL ] = - X [ 224ULL ] ; t78 [ 816ULL ] = X [ 240ULL ] ;
t78 [ 817ULL ] = - X [ 213ULL ] ; t78 [ 818ULL ] = - X [ 214ULL ] ; t78 [
819ULL ] = - X [ 215ULL ] ; t78 [ 820ULL ] = X [ 241ULL ] ; t78 [ 821ULL ] =
X [ 242ULL ] ; t78 [ 822ULL ] = X [ 232ULL ] ; t78 [ 823ULL ] = X [ 31ULL ] *
0.1 ; t78 [ 824ULL ] = X [ 233ULL ] ; t78 [ 825ULL ] = X [ 234ULL ] ; t78 [
826ULL ] = X [ 239ULL ] ; t78 [ 827ULL ] = X [ 243ULL ] ; t78 [ 828ULL ] = X
[ 244ULL ] ; t78 [ 829ULL ] = X [ 245ULL ] ; t78 [ 830ULL ] = X [ 246ULL ] ;
t78 [ 831ULL ] = X [ 247ULL ] ; t78 [ 832ULL ] = X [ 248ULL ] ; t78 [ 833ULL
] = - X [ 213ULL ] ; t78 [ 834ULL ] = X [ 244ULL ] ; t78 [ 835ULL ] = 0.0 ;
t78 [ 836ULL ] = 0.0 ; t78 [ 837ULL ] = - X [ 214ULL ] ; t78 [ 838ULL ] = X [
245ULL ] ; t78 [ 839ULL ] = 0.0 ; t78 [ 840ULL ] = 0.0 ; t78 [ 841ULL ] = 0.0
; t78 [ 842ULL ] = 0.0 ; t78 [ 843ULL ] = - X [ 215ULL ] ; t78 [ 844ULL ] = X
[ 246ULL ] ; t78 [ 845ULL ] = 0.0 ; t78 [ 846ULL ] = 0.0 ; t78 [ 847ULL ] = X
[ 238ULL ] ; t78 [ 848ULL ] = X [ 232ULL ] ; t78 [ 849ULL ] = X [ 31ULL ] *
0.1 ; t78 [ 850ULL ] = X [ 233ULL ] ; t78 [ 851ULL ] = X [ 234ULL ] ; t78 [
852ULL ] = X [ 232ULL ] ; t78 [ 853ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 854ULL ]
= X [ 233ULL ] ; t78 [ 855ULL ] = X [ 234ULL ] ; t78 [ 856ULL ] = - X [
244ULL ] ; t78 [ 857ULL ] = - X [ 245ULL ] ; t78 [ 858ULL ] = - X [ 246ULL ]
; t78 [ 859ULL ] = X [ 239ULL ] * - 1000.0 ; t78 [ 860ULL ] = - X [ 239ULL ]
; t78 [ 861ULL ] = 0.0 ; t78 [ 862ULL ] = - X [ 244ULL ] ; t78 [ 863ULL ] = -
X [ 245ULL ] ; t78 [ 864ULL ] = - X [ 246ULL ] ; t78 [ 865ULL ] = - X [
244ULL ] ; t78 [ 866ULL ] = U_idx_3 ; t78 [ 867ULL ] = t139 *
9.5492965855137211 ; t78 [ 868ULL ] = X [ 232ULL ] ; t78 [ 869ULL ] = X [
31ULL ] * 0.1 ; t78 [ 870ULL ] = X [ 233ULL ] ; t78 [ 871ULL ] = X [ 234ULL ]
; t78 [ 872ULL ] = X [ 32ULL ] ; t78 [ 873ULL ] = X [ 32ULL ] ; t78 [ 874ULL
] = X [ 221ULL ] ; t78 [ 875ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 876ULL ] = X [
222ULL ] ; t78 [ 877ULL ] = X [ 223ULL ] ; t78 [ 878ULL ] = X [ 207ULL ] ;
t78 [ 879ULL ] = 0.101325 ; t78 [ 880ULL ] = X [ 208ULL ] ; t78 [ 881ULL ] =
X [ 209ULL ] ; t78 [ 882ULL ] = 0.9 ; t78 [ 883ULL ] = X [ 221ULL ] ; t78 [
884ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 885ULL ] = X [ 222ULL ] ; t78 [ 886ULL ]
= X [ 223ULL ] ; t78 [ 887ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 * 1000.0 ; t78
[ 888ULL ] = 0.9 ; t78 [ 889ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
1111.1111111111111 ; t78 [ 890ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
1111.1111111111111 ; t78 [ 891ULL ] = - ( X [ 31ULL ] - 1.01325 ) *
99999.999999999985 ; t78 [ 892ULL ] = intrm_sf_mf_1503 * 1.0E-6 ; t78 [
893ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Sensors_PS_Divide_I1 *
1000.0 ; t78 [ 894ULL ] = X [ 207ULL ] ; t78 [ 895ULL ] = 0.101325 ; t78 [
896ULL ] = X [ 208ULL ] ; t78 [ 897ULL ] = X [ 209ULL ] ; t78 [ 898ULL ] = X
[ 221ULL ] ; t78 [ 899ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 900ULL ] = X [ 222ULL
] ; t78 [ 901ULL ] = X [ 223ULL ] ; t78 [ 902ULL ] = - ( X [ 31ULL ] -
1.01325 ) * 99999.999999999985 ; t78 [ 903ULL ] = 101324.99999999999 ; t78 [
904ULL ] = 101324.99999999999 ; t78 [ 905ULL ] = X [ 207ULL ] - X [ 221ULL ]
; t78 [ 906ULL ] = X [ 221ULL ] ; t78 [ 907ULL ] = X [ 31ULL ] * 0.1 ; t78 [
908ULL ] = X [ 222ULL ] ; t78 [ 909ULL ] = X [ 223ULL ] ; t78 [ 910ULL ] = X
[ 221ULL ] ; t78 [ 911ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 912ULL ] = X [ 222ULL
] ; t78 [ 913ULL ] = X [ 223ULL ] ; t78 [ 914ULL ] = 0.0 ; t78 [ 915ULL ] =
0.0 ; t78 [ 916ULL ] = 0.0 ; t78 [ 917ULL ] = 0.0 ; t78 [ 918ULL ] = - X [
224ULL ] ; t78 [ 919ULL ] = intrm_sf_mf_1503 * 1.0E-6 ; t78 [ 920ULL ] = - X
[ 213ULL ] ; t78 [ 921ULL ] = - X [ 214ULL ] ; t78 [ 922ULL ] = - X [ 215ULL
] ; t78 [ 923ULL ] = U_idx_3 ; t78 [ 924ULL ] = 0.0 ; t78 [ 925ULL ] = 0.0 ;
t78 [ 926ULL ] = 0.0 ; t78 [ 927ULL ] = 0.0 ; t78 [ 928ULL ] = 0.0 ; t78 [
929ULL ] = 0.0 ; t78 [ 930ULL ] = 0.0 ; t78 [ 931ULL ] = 0.0 ; t78 [ 932ULL ]
= X [ 249ULL ] ; t78 [ 933ULL ] = t144 * 0.99999999999999978 /
0.99999999999999978 * 9.5492965855137211 ; t78 [ 934ULL ] = - X [ 213ULL ] ;
t78 [ 935ULL ] = X [ 31ULL ] * 99999.999999999985 ; t78 [ 936ULL ] =
101324.99999999999 ; t78 [ 937ULL ] = X [ 249ULL ] ; t78 [ 938ULL ] = X [
207ULL ] ; t78 [ 939ULL ] = 0.101325 ; t78 [ 940ULL ] = X [ 208ULL ] ; t78 [
941ULL ] = X [ 209ULL ] ; t78 [ 942ULL ] = 0.0 ; t78 [ 943ULL ] = 0.0 ; t78 [
944ULL ] = 0.0 ; t78 [ 945ULL ] = 0.0 ; t78 [ 946ULL ] = 101324.99999999999 ;
t78 [ 947ULL ] = 101324.99999999999 ; t78 [ 948ULL ] = 101324.99999999999 ;
t78 [ 949ULL ] = X [ 207ULL ] ; t78 [ 950ULL ] = X [ 221ULL ] ; t78 [ 951ULL
] = X [ 31ULL ] * 0.1 ; t78 [ 952ULL ] = X [ 222ULL ] ; t78 [ 953ULL ] = X [
223ULL ] ; t78 [ 954ULL ] = 0.0 ; t78 [ 955ULL ] = 0.0 ; t78 [ 956ULL ] = 0.0
; t78 [ 957ULL ] = 0.0 ; t78 [ 958ULL ] = X [ 31ULL ] * 99999.999999999985 ;
t78 [ 959ULL ] = 101324.99999999999 ; t78 [ 960ULL ] = 101324.99999999999 ;
t78 [ 961ULL ] = X [ 221ULL ] ; t78 [ 962ULL ] = X [ 207ULL ] ; t78 [ 963ULL
] = 0.101325 ; t78 [ 964ULL ] = X [ 208ULL ] ; t78 [ 965ULL ] = X [ 209ULL ]
; t78 [ 966ULL ] = - X [ 213ULL ] ; t78 [ 967ULL ] = X [ 221ULL ] ; t78 [
968ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 969ULL ] = X [ 222ULL ] ; t78 [ 970ULL ]
= X [ 223ULL ] ; t78 [ 971ULL ] = t144 * 9.5492965855137211 ; t78 [ 972ULL ]
= X [ 159ULL ] ; t78 [ 973ULL ] = X [ 160ULL ] * 0.1 ; t78 [ 974ULL ] = X [
161ULL ] ; t78 [ 975ULL ] = X [ 162ULL ] ; t78 [ 976ULL ] = X [ 250ULL ] ;
t78 [ 977ULL ] = X [ 251ULL ] * 0.1 ; t78 [ 978ULL ] = X [ 252ULL ] ; t78 [
979ULL ] = X [ 253ULL ] ; t78 [ 980ULL ] = U_idx_4 ; t78 [ 981ULL ] = X [
254ULL ] ; t78 [ 982ULL ] = X [ 35ULL ] ; t78 [ 983ULL ] = X [ 36ULL ] ; t78
[ 984ULL ] = X [ 37ULL ] ; t78 [ 985ULL ] = U_idx_5 ; t78 [ 986ULL ] = -
U_idx_4 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 987ULL ]
= t85 [ t119 ] ; } t78 [ 995ULL ] = X [ 258ULL ] ; t78 [ 996ULL ] = X [
255ULL ] * 1.0E-5 * 99999.999999999985 ; t78 [ 997ULL ] = X [ 35ULL ] ; t78 [
998ULL ] = X [ 257ULL ] ; t78 [ 999ULL ] = X [ 257ULL ] ; t78 [ 1000ULL ] = X
[ 260ULL ] ; t78 [ 1001ULL ] = X [ 260ULL ] ; t78 [ 1002ULL ] = X [ 159ULL ]
; t78 [ 1003ULL ] = X [ 160ULL ] * 0.1 ; t78 [ 1004ULL ] = X [ 161ULL ] ; t78
[ 1005ULL ] = X [ 162ULL ] ; t78 [ 1006ULL ] = X [ 250ULL ] ; t78 [ 1007ULL ]
= X [ 251ULL ] * 0.1 ; t78 [ 1008ULL ] = X [ 252ULL ] ; t78 [ 1009ULL ] = X [
253ULL ] ; t78 [ 1010ULL ] = X [ 36ULL ] ; t78 [ 1011ULL ] = X [ 258ULL ] ;
t78 [ 1012ULL ] = X [ 37ULL ] ; t78 [ 1013ULL ] = X [ 261ULL ] ; t78 [
1014ULL ] = X [ 35ULL ] - 273.15 ; t78 [ 1015ULL ] = - X [ 186ULL ] ; t78 [
1016ULL ] = X [ 262ULL ] * 0.1 ; t78 [ 1017ULL ] = X [ 38ULL ] * 0.1 ; t78 [
1018ULL ] = X [ 259ULL ] ; t78 [ 1019ULL ] = X [ 264ULL ] ; t78 [ 1020ULL ] =
X [ 263ULL ] ; t78 [ 1021ULL ] = X [ 265ULL ] * 0.1 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1022ULL ] = t85 [ t119 ] ; } t78 [
1030ULL ] = X [ 260ULL ] ; t78 [ 1031ULL ] = X [ 256ULL ] ; t78 [ 1032ULL ] =
- X [ 191ULL ] ; t78 [ 1033ULL ] = X [ 266ULL ] ; t78 [ 1034ULL ] = - X [
254ULL ] ; t78 [ 1035ULL ] = 0.0 ; t78 [ 1036ULL ] = X [ 257ULL ] ; t78 [
1037ULL ] = X [ 35ULL ] ; t78 [ 1038ULL ] = X [ 36ULL ] ; t78 [ 1039ULL ] = X
[ 37ULL ] ; t78 [ 1040ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_W ; t78 [ 1041ULL ] = X [
159ULL ] ; t78 [ 1042ULL ] = X [ 160ULL ] * 0.1 ; t78 [ 1043ULL ] = X [
161ULL ] ; t78 [ 1044ULL ] = X [ 162ULL ] ; t78 [ 1045ULL ] = - X [ 191ULL ]
; t78 [ 1046ULL ] = X [ 267ULL ] ; t78 [ 1047ULL ] = - X [ 186ULL ] ; t78 [
1048ULL ] = - X [ 196ULL ] ; t78 [ 1049ULL ] = - X [ 197ULL ] ; t78 [ 1050ULL
] = X [ 268ULL ] ; t78 [ 1051ULL ] = X [ 269ULL ] ; t78 [ 1052ULL ] = X [
250ULL ] ; t78 [ 1053ULL ] = X [ 251ULL ] * 0.1 ; t78 [ 1054ULL ] = X [
252ULL ] ; t78 [ 1055ULL ] = X [ 253ULL ] ; t78 [ 1056ULL ] = X [ 266ULL ] ;
t78 [ 1057ULL ] = X [ 270ULL ] ; t78 [ 1058ULL ] = X [ 263ULL ] ; t78 [
1059ULL ] = X [ 271ULL ] ; t78 [ 1060ULL ] = X [ 272ULL ] ; t78 [ 1061ULL ] =
X [ 273ULL ] ; t78 [ 1062ULL ] = X [ 274ULL ] ; t78 [ 1063ULL ] = - X [
196ULL ] ; t78 [ 1064ULL ] = X [ 271ULL ] ; t78 [ 1065ULL ] = 0.0 ; t78 [
1066ULL ] = U_idx_4 ; t78 [ 1067ULL ] = - X [ 197ULL ] ; t78 [ 1068ULL ] = X
[ 272ULL ] ; t78 [ 1069ULL ] = U_idx_5 ; t78 [ 1070ULL ] = U_idx_4 ; t78 [
1071ULL ] = X [ 64ULL ] ; t78 [ 1072ULL ] = X [ 65ULL ] * 0.1 ; t78 [ 1073ULL
] = X [ 66ULL ] ; t78 [ 1074ULL ] = X [ 67ULL ] ; for ( t119 = 0ULL ; t119 <
8ULL ; t119 ++ ) { t78 [ t119 + 1075ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1083ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } t78 [
1091ULL ] = 343.15 ; t78 [ 1092ULL ] = X [ 250ULL ] ; t78 [ 1093ULL ] = X [
251ULL ] * 0.1 ; t78 [ 1094ULL ] = X [ 252ULL ] ; t78 [ 1095ULL ] = X [
253ULL ] ; t78 [ 1096ULL ] = X [ 64ULL ] ; t78 [ 1097ULL ] = X [ 65ULL ] *
0.1 ; t78 [ 1098ULL ] = X [ 66ULL ] ; t78 [ 1099ULL ] = X [ 67ULL ] ; t78 [
1100ULL ] = X [ 7ULL ] ; t78 [ 1101ULL ] = X [ 75ULL ] ; t78 [ 1102ULL ] = X
[ 8ULL ] ; t78 [ 1103ULL ] = X [ 275ULL ] ; t78 [ 1104ULL ] = X [ 6ULL ] -
273.15 ; t78 [ 1105ULL ] = - X [ 263ULL ] ; t78 [ 1106ULL ] = X [ 276ULL ] *
0.1 ; t78 [ 1107ULL ] = X [ 39ULL ] * 0.1 ; t78 [ 1108ULL ] = X [ 76ULL ] ;
t78 [ 1109ULL ] = X [ 278ULL ] ; t78 [ 1110ULL ] = X [ 277ULL ] ; t78 [
1111ULL ] = X [ 279ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ )
{ t78 [ t119 + 1112ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t119 ] ; } t78 [
1120ULL ] = 343.15 ; t78 [ 1121ULL ] = X [ 74ULL ] ; t78 [ 1122ULL ] = - X [
266ULL ] ; t78 [ 1123ULL ] = X [ 280ULL ] ; t78 [ 1124ULL ] = 0.0 ; t78 [
1125ULL ] = X [ 107ULL ] ; t78 [ 1126ULL ] = X [ 73ULL ] ; t78 [ 1127ULL ] =
X [ 6ULL ] ; t78 [ 1128ULL ] = X [ 7ULL ] ; t78 [ 1129ULL ] = X [ 8ULL ] ;
t78 [ 1130ULL ] = t153 ; t78 [ 1131ULL ] = X [ 250ULL ] ; t78 [ 1132ULL ] = X
[ 251ULL ] * 0.1 ; t78 [ 1133ULL ] = X [ 252ULL ] ; t78 [ 1134ULL ] = X [
253ULL ] ; t78 [ 1135ULL ] = - X [ 266ULL ] ; t78 [ 1136ULL ] = X [ 281ULL ]
; t78 [ 1137ULL ] = - X [ 263ULL ] ; t78 [ 1138ULL ] = - X [ 271ULL ] ; t78 [
1139ULL ] = - X [ 272ULL ] ; t78 [ 1140ULL ] = X [ 282ULL ] ; t78 [ 1141ULL ]
= X [ 283ULL ] ; t78 [ 1142ULL ] = X [ 64ULL ] ; t78 [ 1143ULL ] = X [ 65ULL
] * 0.1 ; t78 [ 1144ULL ] = X [ 66ULL ] ; t78 [ 1145ULL ] = X [ 67ULL ] ; t78
[ 1146ULL ] = X [ 280ULL ] ; t78 [ 1147ULL ] = X [ 284ULL ] ; t78 [ 1148ULL ]
= X [ 277ULL ] ; t78 [ 1149ULL ] = X [ 285ULL ] ; t78 [ 1150ULL ] = X [
286ULL ] ; t78 [ 1151ULL ] = X [ 287ULL ] ; t78 [ 1152ULL ] = X [ 288ULL ] ;
t78 [ 1153ULL ] = - X [ 271ULL ] ; t78 [ 1154ULL ] = X [ 285ULL ] ; t78 [
1155ULL ] = 0.0 ; t78 [ 1156ULL ] = 0.0 ; t78 [ 1157ULL ] = - X [ 272ULL ] ;
t78 [ 1158ULL ] = X [ 286ULL ] ; t78 [ 1159ULL ] = X [ 64ULL ] ; t78 [
1160ULL ] = X [ 65ULL ] * 0.1 ; t78 [ 1161ULL ] = X [ 66ULL ] ; t78 [ 1162ULL
] = X [ 67ULL ] ; t78 [ 1163ULL ] = X [ 111ULL ] ; t78 [ 1164ULL ] = X [
112ULL ] * 0.1 ; t78 [ 1165ULL ] = X [ 113ULL ] ; t78 [ 1166ULL ] = X [
114ULL ] ; t78 [ 1167ULL ] = X [ 10ULL ] ; t78 [ 1168ULL ] = X [ 80ULL ] ;
t78 [ 1169ULL ] = X [ 11ULL ] ; t78 [ 1170ULL ] = X [ 289ULL ] ; t78 [
1171ULL ] = X [ 9ULL ] - 273.15 ; t78 [ 1172ULL ] = - X [ 277ULL ] ; t78 [
1173ULL ] = X [ 290ULL ] * 0.1 ; t78 [ 1174ULL ] = X [ 40ULL ] * 0.1 ; t78 [
1175ULL ] = X [ 81ULL ] ; t78 [ 1176ULL ] = X [ 291ULL ] ; t78 [ 1177ULL ] =
- X [ 134ULL ] ; t78 [ 1178ULL ] = X [ 292ULL ] * 0.1 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1179ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t119 ] ; } t78 [
1187ULL ] = 343.15 ; t78 [ 1188ULL ] = X [ 77ULL ] ; t78 [ 1189ULL ] = - X [
280ULL ] ; t78 [ 1190ULL ] = - X [ 143ULL ] ; t78 [ 1191ULL ] = - X [ 99ULL ]
- X [ 102ULL ] ; t78 [ 1192ULL ] = X [ 108ULL ] ; t78 [ 1193ULL ] = X [ 79ULL
] ; t78 [ 1194ULL ] = X [ 9ULL ] ; t78 [ 1195ULL ] = X [ 10ULL ] ; t78 [
1196ULL ] = X [ 11ULL ] ; t78 [ 1197ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_W ; t78 [ 1198ULL ] = X [
64ULL ] ; t78 [ 1199ULL ] = X [ 65ULL ] * 0.1 ; t78 [ 1200ULL ] = X [ 66ULL ]
; t78 [ 1201ULL ] = X [ 67ULL ] ; t78 [ 1202ULL ] = - X [ 280ULL ] ; t78 [
1203ULL ] = X [ 293ULL ] ; t78 [ 1204ULL ] = - X [ 277ULL ] ; t78 [ 1205ULL ]
= - X [ 285ULL ] ; t78 [ 1206ULL ] = - X [ 286ULL ] ; t78 [ 1207ULL ] = X [
294ULL ] ; t78 [ 1208ULL ] = X [ 295ULL ] ; t78 [ 1209ULL ] = X [ 111ULL ] ;
t78 [ 1210ULL ] = X [ 112ULL ] * 0.1 ; t78 [ 1211ULL ] = X [ 113ULL ] ; t78 [
1212ULL ] = X [ 114ULL ] ; t78 [ 1213ULL ] = - X [ 143ULL ] ; t78 [ 1214ULL ]
= X [ 296ULL ] ; t78 [ 1215ULL ] = - X [ 134ULL ] ; t78 [ 1216ULL ] = - X [
145ULL ] ; t78 [ 1217ULL ] = - X [ 146ULL ] ; t78 [ 1218ULL ] = X [ 297ULL ]
; t78 [ 1219ULL ] = X [ 298ULL ] ; t78 [ 1220ULL ] = - X [ 285ULL ] ; t78 [
1221ULL ] = - X [ 145ULL ] ; t78 [ 1222ULL ] = X [ 98ULL ] ; t78 [ 1223ULL ]
= X [ 104ULL ] ; t78 [ 1224ULL ] = - X [ 286ULL ] ; t78 [ 1225ULL ] = - X [
146ULL ] ; t78 [ 1226ULL ] = X [ 9ULL ] ; t78 [ 1227ULL ] = X [ 10ULL ] ; t78
[ 1228ULL ] = X [ 11ULL ] ; t78 [ 1229ULL ] = X [ 250ULL ] ; t78 [ 1230ULL ]
= X [ 251ULL ] * 0.1 ; t78 [ 1231ULL ] = X [ 252ULL ] ; t78 [ 1232ULL ] = X [
253ULL ] ; t78 [ 1233ULL ] = X [ 111ULL ] ; t78 [ 1234ULL ] = X [ 112ULL ] *
0.1 ; t78 [ 1235ULL ] = X [ 113ULL ] ; t78 [ 1236ULL ] = X [ 114ULL ] ; t78 [
1237ULL ] = X [ 232ULL ] ; t78 [ 1238ULL ] = X [ 31ULL ] * 0.1 ; t78 [
1239ULL ] = X [ 233ULL ] ; t78 [ 1240ULL ] = X [ 234ULL ] ; t78 [ 1241ULL ] =
X [ 299ULL ] ; t78 [ 1242ULL ] = X [ 300ULL ] * 0.1 ; t78 [ 1243ULL ] = X [
301ULL ] ; t78 [ 1244ULL ] = X [ 302ULL ] ; t78 [ 1245ULL ] = U_idx_6 ; t78 [
1246ULL ] = X [ 303ULL ] ; t78 [ 1247ULL ] = X [ 41ULL ] ; t78 [ 1248ULL ] =
X [ 42ULL ] ; t78 [ 1249ULL ] = X [ 43ULL ] ; t78 [ 1250ULL ] = U_idx_7 ; t78
[ 1251ULL ] = - U_idx_6 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [
t119 + 1252ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t119 ] ; }
t78 [ 1260ULL ] = X [ 307ULL ] ; t78 [ 1261ULL ] = X [ 304ULL ] * 1.0E-5 *
99999.999999999985 ; t78 [ 1262ULL ] = X [ 41ULL ] ; t78 [ 1263ULL ] = X [
306ULL ] ; t78 [ 1264ULL ] = X [ 306ULL ] ; t78 [ 1265ULL ] = X [ 309ULL ] ;
t78 [ 1266ULL ] = X [ 309ULL ] ; t78 [ 1267ULL ] = X [ 232ULL ] ; t78 [
1268ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 1269ULL ] = X [ 233ULL ] ; t78 [
1270ULL ] = X [ 234ULL ] ; t78 [ 1271ULL ] = X [ 299ULL ] ; t78 [ 1272ULL ] =
X [ 300ULL ] * 0.1 ; t78 [ 1273ULL ] = X [ 301ULL ] ; t78 [ 1274ULL ] = X [
302ULL ] ; t78 [ 1275ULL ] = X [ 42ULL ] ; t78 [ 1276ULL ] = X [ 307ULL ] ;
t78 [ 1277ULL ] = X [ 43ULL ] ; t78 [ 1278ULL ] = X [ 310ULL ] ; t78 [
1279ULL ] = X [ 41ULL ] - 273.15 ; t78 [ 1280ULL ] = - X [ 244ULL ] ; t78 [
1281ULL ] = X [ 311ULL ] * 0.1 ; t78 [ 1282ULL ] = X [ 44ULL ] * 0.1 ; t78 [
1283ULL ] = X [ 308ULL ] ; t78 [ 1284ULL ] = X [ 313ULL ] ; t78 [ 1285ULL ] =
X [ 312ULL ] ; t78 [ 1286ULL ] = X [ 314ULL ] * 0.1 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1287ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t119 ] ; }
t78 [ 1295ULL ] = X [ 309ULL ] ; t78 [ 1296ULL ] = X [ 305ULL ] ; t78 [
1297ULL ] = - X [ 239ULL ] ; t78 [ 1298ULL ] = X [ 315ULL ] ; t78 [ 1299ULL ]
= - X [ 303ULL ] ; t78 [ 1300ULL ] = 0.0 ; t78 [ 1301ULL ] = X [ 306ULL ] ;
t78 [ 1302ULL ] = X [ 41ULL ] ; t78 [ 1303ULL ] = X [ 42ULL ] ; t78 [ 1304ULL
] = X [ 43ULL ] ; t78 [ 1305ULL ] = t165 ; t78 [ 1306ULL ] = X [ 232ULL ] ;
t78 [ 1307ULL ] = X [ 31ULL ] * 0.1 ; t78 [ 1308ULL ] = X [ 233ULL ] ; t78 [
1309ULL ] = X [ 234ULL ] ; t78 [ 1310ULL ] = - X [ 239ULL ] ; t78 [ 1311ULL ]
= X [ 316ULL ] ; t78 [ 1312ULL ] = - X [ 244ULL ] ; t78 [ 1313ULL ] = - X [
245ULL ] ; t78 [ 1314ULL ] = - X [ 246ULL ] ; t78 [ 1315ULL ] = X [ 317ULL ]
; t78 [ 1316ULL ] = X [ 318ULL ] ; t78 [ 1317ULL ] = X [ 299ULL ] ; t78 [
1318ULL ] = X [ 300ULL ] * 0.1 ; t78 [ 1319ULL ] = X [ 301ULL ] ; t78 [
1320ULL ] = X [ 302ULL ] ; t78 [ 1321ULL ] = X [ 315ULL ] ; t78 [ 1322ULL ] =
X [ 319ULL ] ; t78 [ 1323ULL ] = X [ 312ULL ] ; t78 [ 1324ULL ] = X [ 320ULL
] ; t78 [ 1325ULL ] = X [ 321ULL ] ; t78 [ 1326ULL ] = X [ 322ULL ] ; t78 [
1327ULL ] = X [ 323ULL ] ; t78 [ 1328ULL ] = - X [ 245ULL ] ; t78 [ 1329ULL ]
= X [ 320ULL ] ; t78 [ 1330ULL ] = 0.0 ; t78 [ 1331ULL ] = U_idx_6 ; t78 [
1332ULL ] = - X [ 246ULL ] ; t78 [ 1333ULL ] = X [ 321ULL ] ; t78 [ 1334ULL ]
= U_idx_7 ; t78 [ 1335ULL ] = U_idx_6 ; t78 [ 1336ULL ] = X [ 324ULL ] ; t78
[ 1337ULL ] = X [ 325ULL ] * 0.1 ; t78 [ 1338ULL ] = X [ 326ULL ] ; t78 [
1339ULL ] = X [ 327ULL ] ; t78 [ 1340ULL ] = X [ 328ULL ] ; t78 [ 1341ULL ] =
293.15 ; t78 [ 1342ULL ] = - 920.95788639984789 + intrm_sf_mf_609 * 1000.0 ;
t78 [ 1343ULL ] = ( X [ 328ULL ] * 0.0031415926535897937 -
0.92095788639984788 ) * 318.30988618379064 ; t78 [ 1344ULL ] = 0.0 ; t78 [
1345ULL ] = X [ 329ULL ] ; t78 [ 1346ULL ] = 0.101325 ; t78 [ 1347ULL ] = X [
330ULL ] ; t78 [ 1348ULL ] = X [ 331ULL ] ; t78 [ 1349ULL ] = X [ 332ULL ] ;
t78 [ 1350ULL ] = X [ 333ULL ] ; t78 [ 1351ULL ] = 0.5 ; t78 [ 1352ULL ] = X
[ 341ULL ] ; t78 [ 1353ULL ] = X [ 340ULL ] ; t78 [ 1354ULL ] = 293.15 ; t78
[ 1355ULL ] = X [ 329ULL ] ; t78 [ 1356ULL ] = 0.101325 ; t78 [ 1357ULL ] = X
[ 330ULL ] ; t78 [ 1358ULL ] = X [ 331ULL ] ; t78 [ 1359ULL ] = X [ 333ULL ]
; t78 [ 1360ULL ] = X [ 334ULL ] ; t78 [ 1361ULL ] = X [ 335ULL ] ; t78 [
1362ULL ] = X [ 336ULL ] ; t78 [ 1363ULL ] = X [ 337ULL ] ; t78 [ 1364ULL ] =
X [ 338ULL ] ; t78 [ 1365ULL ] = X [ 339ULL ] ; t78 [ 1366ULL ] = X [ 335ULL
] ; t78 [ 1367ULL ] = X [ 336ULL ] ; t78 [ 1368ULL ] = X [ 337ULL ] ; t78 [
1369ULL ] = 0.101325 ; t78 [ 1370ULL ] = 0.21 ; t78 [ 1371ULL ] = X [ 342ULL
] ; t78 [ 1372ULL ] = 293.15 ; t78 [ 1373ULL ] = - 920.95788639984789 +
intrm_sf_mf_609 * 1000.0 ; t78 [ 1374ULL ] = X [ 324ULL ] ; t78 [ 1375ULL ] =
X [ 325ULL ] * 0.1 ; t78 [ 1376ULL ] = X [ 326ULL ] ; t78 [ 1377ULL ] = X [
327ULL ] ; t78 [ 1378ULL ] = X [ 343ULL ] ; t78 [ 1379ULL ] = t167 * 0.1 ;
t78 [ 1380ULL ] = X [ 345ULL ] ; t78 [ 1381ULL ] = X [ 346ULL ] ; t78 [
1382ULL ] = X [ 48ULL ] ; t78 [ 1383ULL ] = X [ 351ULL ] ; t78 [ 1384ULL ] =
X [ 47ULL ] ; t78 [ 1385ULL ] = X [ 348ULL ] ; t78 [ 1386ULL ] = X [ 45ULL ]
- 273.15 ; t78 [ 1387ULL ] = X [ 347ULL ] ; t78 [ 1388ULL ] = X [ 349ULL ] *
0.1 ; t78 [ 1389ULL ] = X [ 46ULL ] * 0.1 ; t78 [ 1390ULL ] = X [ 350ULL ] ;
t78 [ 1391ULL ] = X [ 352ULL ] ; t78 [ 1392ULL ] = - X [ 335ULL ] ; t78 [
1393ULL ] = X [ 353ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ )
{ t78 [ t119 + 1394ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t119 ] ; } t78 [
1402ULL ] = X [ 328ULL ] ; t78 [ 1403ULL ] = X [ 354ULL ] ; t78 [ 1404ULL ] =
X [ 356ULL ] ; t78 [ 1405ULL ] = - X [ 333ULL ] ; t78 [ 1406ULL ] = 0.0 ; t78
[ 1407ULL ] = 0.92095788639984788 - intrm_sf_mf_609 ; t78 [ 1408ULL ] = X [
355ULL ] ; t78 [ 1409ULL ] = X [ 45ULL ] ; t78 [ 1410ULL ] = X [ 48ULL ] ;
t78 [ 1411ULL ] = X [ 47ULL ] ; t78 [ 1412ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W ; t78 [ 1413ULL ] = X [
324ULL ] ; t78 [ 1414ULL ] = X [ 325ULL ] * 0.1 ; t78 [ 1415ULL ] = X [
326ULL ] ; t78 [ 1416ULL ] = X [ 327ULL ] ; t78 [ 1417ULL ] = X [ 356ULL ] ;
t78 [ 1418ULL ] = X [ 357ULL ] ; t78 [ 1419ULL ] = X [ 347ULL ] ; t78 [
1420ULL ] = X [ 358ULL ] ; t78 [ 1421ULL ] = X [ 359ULL ] ; t78 [ 1422ULL ] =
X [ 360ULL ] ; t78 [ 1423ULL ] = X [ 361ULL ] ; t78 [ 1424ULL ] = X [ 343ULL
] ; t78 [ 1425ULL ] = t167 * 0.1 ; t78 [ 1426ULL ] = X [ 345ULL ] ; t78 [
1427ULL ] = X [ 346ULL ] ; t78 [ 1428ULL ] = - X [ 333ULL ] ; t78 [ 1429ULL ]
= X [ 362ULL ] ; t78 [ 1430ULL ] = - X [ 335ULL ] ; t78 [ 1431ULL ] = - X [
336ULL ] ; t78 [ 1432ULL ] = - X [ 337ULL ] ; t78 [ 1433ULL ] = X [ 363ULL ]
; t78 [ 1434ULL ] = X [ 364ULL ] ; t78 [ 1435ULL ] = X [ 358ULL ] ; t78 [
1436ULL ] = - X [ 336ULL ] ; t78 [ 1437ULL ] = 0.0 ; t78 [ 1438ULL ] = 0.0 ;
t78 [ 1439ULL ] = X [ 359ULL ] ; t78 [ 1440ULL ] = - X [ 337ULL ] ; t78 [
1441ULL ] = X [ 343ULL ] ; t78 [ 1442ULL ] = t167 * 0.1 ; t78 [ 1443ULL ] = X
[ 345ULL ] ; t78 [ 1444ULL ] = X [ 346ULL ] ; t78 [ 1445ULL ] = 0.0 ; t78 [
1446ULL ] = 0.0 ; t78 [ 1447ULL ] = 0.0 ; t78 [ 1448ULL ] = 0.0 ; t78 [
1449ULL ] = X [ 329ULL ] ; t78 [ 1450ULL ] = 0.101325 ; t78 [ 1451ULL ] = X [
330ULL ] ; t78 [ 1452ULL ] = X [ 331ULL ] ; t78 [ 1453ULL ] = ( X [ 344ULL ]
- 1.0E-8 ) * 1.0E+6 ; t78 [ 1454ULL ] = 1.0E-8 ; t78 [ 1455ULL ] = X [ 344ULL
] ; t78 [ 1456ULL ] = 1.0E-8 ; t78 [ 1457ULL ] = ( X [ 344ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t78 [ 1458ULL ] = ( X [ 344ULL ] - 1.0E-8 ) * 1.0E+6 ;
t78 [ 1459ULL ] = X [ 344ULL ] ; t78 [ 1460ULL ] = X [ 344ULL ] *
0.0019634954084936209 ; t78 [ 1461ULL ] = t167 * 99999.999999999985 ; t78 [
1462ULL ] = t171 * 0.1 ; t78 [ 1463ULL ] = ( X [ 344ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t78 [ 1464ULL ] = X [ 343ULL ] ; t78 [ 1465ULL ] = t167
* 0.1 ; t78 [ 1466ULL ] = X [ 345ULL ] ; t78 [ 1467ULL ] = X [ 346ULL ] ; t78
[ 1468ULL ] = 0.0 ; t78 [ 1469ULL ] = 0.0 ; t78 [ 1470ULL ] = 0.0 ; t78 [
1471ULL ] = 0.0 ; t78 [ 1472ULL ] = t167 * 99999.999999999985 ; t78 [ 1473ULL
] = 101324.99999999999 ; t78 [ 1474ULL ] = 101324.99999999999 ; t78 [ 1475ULL
] = X [ 343ULL ] ; t78 [ 1476ULL ] = X [ 343ULL ] ; t78 [ 1477ULL ] = t167 *
0.1 ; t78 [ 1478ULL ] = X [ 345ULL ] ; t78 [ 1479ULL ] = X [ 346ULL ] ; t78 [
1480ULL ] = X [ 344ULL ] * 0.0019634954084936209 ; t78 [ 1481ULL ] = X [
329ULL ] ; t78 [ 1482ULL ] = 0.101325 ; t78 [ 1483ULL ] = X [ 330ULL ] ; t78
[ 1484ULL ] = X [ 331ULL ] ; t78 [ 1485ULL ] = X [ 335ULL ] ; t78 [ 1486ULL ]
= X [ 343ULL ] ; t78 [ 1487ULL ] = t167 * 0.1 ; t78 [ 1488ULL ] = X [ 345ULL
] ; t78 [ 1489ULL ] = X [ 346ULL ] ; t78 [ 1490ULL ] = X [ 333ULL ] ; t78 [
1491ULL ] = X [ 371ULL ] ; t78 [ 1492ULL ] = X [ 335ULL ] ; t78 [ 1493ULL ] =
X [ 336ULL ] ; t78 [ 1494ULL ] = X [ 337ULL ] ; t78 [ 1495ULL ] = X [ 368ULL
] ; t78 [ 1496ULL ] = X [ 367ULL ] ; t78 [ 1497ULL ] = X [ 365ULL ] ; t78 [
1498ULL ] = X [ 366ULL ] * 0.1 ; t78 [ 1499ULL ] = X [ 369ULL ] ; t78 [
1500ULL ] = X [ 370ULL ] ; t78 [ 1501ULL ] = X [ 333ULL ] ; t78 [ 1502ULL ] =
- X [ 333ULL ] ; t78 [ 1503ULL ] = X [ 329ULL ] ; t78 [ 1504ULL ] = 0.101325
; t78 [ 1505ULL ] = X [ 330ULL ] ; t78 [ 1506ULL ] = X [ 331ULL ] ; t78 [
1507ULL ] = - X [ 333ULL ] ; t78 [ 1508ULL ] = X [ 371ULL ] ; t78 [ 1509ULL ]
= - X [ 335ULL ] ; t78 [ 1510ULL ] = - X [ 336ULL ] ; t78 [ 1511ULL ] = - X [
337ULL ] ; t78 [ 1512ULL ] = X [ 368ULL ] ; t78 [ 1513ULL ] = X [ 367ULL ] ;
t78 [ 1514ULL ] = - X [ 335ULL ] ; t78 [ 1515ULL ] = X [ 336ULL ] ; t78 [
1516ULL ] = - X [ 336ULL ] ; t78 [ 1517ULL ] = X [ 337ULL ] ; t78 [ 1518ULL ]
= - X [ 337ULL ] ; t78 [ 1519ULL ] = t171 * 0.1 ; t78 [ 1520ULL ] = U_idx_8 ;
t78 [ 1521ULL ] = X [ 68ULL ] ; t78 [ 1522ULL ] = X [ 69ULL ] * 0.1 ; t78 [
1523ULL ] = X [ 70ULL ] ; t78 [ 1524ULL ] = X [ 71ULL ] ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1525ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } for (
t119 = 0ULL ; t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1533ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
1541ULL ] = 343.15 ; t78 [ 1542ULL ] = X [ 299ULL ] ; t78 [ 1543ULL ] = X [
300ULL ] * 0.1 ; t78 [ 1544ULL ] = X [ 301ULL ] ; t78 [ 1545ULL ] = X [
302ULL ] ; t78 [ 1546ULL ] = X [ 68ULL ] ; t78 [ 1547ULL ] = X [ 69ULL ] *
0.1 ; t78 [ 1548ULL ] = X [ 70ULL ] ; t78 [ 1549ULL ] = X [ 71ULL ] ; t78 [
1550ULL ] = X [ 13ULL ] ; t78 [ 1551ULL ] = X [ 85ULL ] ; t78 [ 1552ULL ] = X
[ 14ULL ] ; t78 [ 1553ULL ] = X [ 372ULL ] ; t78 [ 1554ULL ] = X [ 12ULL ] -
273.15 ; t78 [ 1555ULL ] = - X [ 312ULL ] ; t78 [ 1556ULL ] = X [ 373ULL ] *
0.1 ; t78 [ 1557ULL ] = X [ 49ULL ] * 0.1 ; t78 [ 1558ULL ] = X [ 86ULL ] ;
t78 [ 1559ULL ] = X [ 375ULL ] ; t78 [ 1560ULL ] = X [ 374ULL ] ; t78 [
1561ULL ] = X [ 376ULL ] * 0.1 ; for ( t119 = 0ULL ; t119 < 8ULL ; t119 ++ )
{ t78 [ t119 + 1562ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t119 ] ; } t78 [
1570ULL ] = 343.15 ; t78 [ 1571ULL ] = X [ 84ULL ] ; t78 [ 1572ULL ] = - X [
315ULL ] ; t78 [ 1573ULL ] = X [ 377ULL ] ; t78 [ 1574ULL ] = 0.0 ; t78 [
1575ULL ] = X [ 109ULL ] ; t78 [ 1576ULL ] = X [ 83ULL ] ; t78 [ 1577ULL ] =
X [ 12ULL ] ; t78 [ 1578ULL ] = X [ 13ULL ] ; t78 [ 1579ULL ] = X [ 14ULL ] ;
t78 [ 1580ULL ] = t173 ; t78 [ 1581ULL ] = X [ 299ULL ] ; t78 [ 1582ULL ] = X
[ 300ULL ] * 0.1 ; t78 [ 1583ULL ] = X [ 301ULL ] ; t78 [ 1584ULL ] = X [
302ULL ] ; t78 [ 1585ULL ] = - X [ 315ULL ] ; t78 [ 1586ULL ] = X [ 378ULL ]
; t78 [ 1587ULL ] = - X [ 312ULL ] ; t78 [ 1588ULL ] = - X [ 320ULL ] ; t78 [
1589ULL ] = - X [ 321ULL ] ; t78 [ 1590ULL ] = X [ 379ULL ] ; t78 [ 1591ULL ]
= X [ 380ULL ] ; t78 [ 1592ULL ] = X [ 68ULL ] ; t78 [ 1593ULL ] = X [ 69ULL
] * 0.1 ; t78 [ 1594ULL ] = X [ 70ULL ] ; t78 [ 1595ULL ] = X [ 71ULL ] ; t78
[ 1596ULL ] = X [ 377ULL ] ; t78 [ 1597ULL ] = X [ 381ULL ] ; t78 [ 1598ULL ]
= X [ 374ULL ] ; t78 [ 1599ULL ] = X [ 382ULL ] ; t78 [ 1600ULL ] = X [
383ULL ] ; t78 [ 1601ULL ] = X [ 384ULL ] ; t78 [ 1602ULL ] = X [ 385ULL ] ;
t78 [ 1603ULL ] = - X [ 320ULL ] ; t78 [ 1604ULL ] = X [ 382ULL ] ; t78 [
1605ULL ] = 0.0 ; t78 [ 1606ULL ] = 0.0 ; t78 [ 1607ULL ] = - X [ 321ULL ] ;
t78 [ 1608ULL ] = X [ 383ULL ] ; t78 [ 1609ULL ] = X [ 68ULL ] ; t78 [
1610ULL ] = X [ 69ULL ] * 0.1 ; t78 [ 1611ULL ] = X [ 70ULL ] ; t78 [ 1612ULL
] = X [ 71ULL ] ; t78 [ 1613ULL ] = X [ 324ULL ] ; t78 [ 1614ULL ] = X [
325ULL ] * 0.1 ; t78 [ 1615ULL ] = X [ 326ULL ] ; t78 [ 1616ULL ] = X [
327ULL ] ; t78 [ 1617ULL ] = X [ 16ULL ] ; t78 [ 1618ULL ] = X [ 90ULL ] ;
t78 [ 1619ULL ] = X [ 17ULL ] ; t78 [ 1620ULL ] = X [ 386ULL ] ; t78 [
1621ULL ] = X [ 15ULL ] - 273.15 ; t78 [ 1622ULL ] = - X [ 374ULL ] ; t78 [
1623ULL ] = X [ 387ULL ] * 0.1 ; t78 [ 1624ULL ] = X [ 50ULL ] * 0.1 ; t78 [
1625ULL ] = X [ 91ULL ] ; t78 [ 1626ULL ] = X [ 388ULL ] ; t78 [ 1627ULL ] =
- X [ 347ULL ] ; t78 [ 1628ULL ] = X [ 389ULL ] * 0.1 ; for ( t119 = 0ULL ;
t119 < 8ULL ; t119 ++ ) { t78 [ t119 + 1629ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t119 ] ; } t78 [
1637ULL ] = 343.15 ; t78 [ 1638ULL ] = X [ 89ULL ] ; t78 [ 1639ULL ] = - X [
377ULL ] ; t78 [ 1640ULL ] = - X [ 356ULL ] ; t78 [ 1641ULL ] = ( - X [ 97ULL
] - X [ 101ULL ] ) - X [ 103ULL ] ; t78 [ 1642ULL ] = X [ 110ULL ] ; t78 [
1643ULL ] = X [ 88ULL ] ; t78 [ 1644ULL ] = X [ 15ULL ] ; t78 [ 1645ULL ] = X
[ 16ULL ] ; t78 [ 1646ULL ] = X [ 17ULL ] ; t78 [ 1647ULL ] = t176 ; t78 [
1648ULL ] = X [ 68ULL ] ; t78 [ 1649ULL ] = X [ 69ULL ] * 0.1 ; t78 [ 1650ULL
] = X [ 70ULL ] ; t78 [ 1651ULL ] = X [ 71ULL ] ; t78 [ 1652ULL ] = - X [
377ULL ] ; t78 [ 1653ULL ] = X [ 390ULL ] ; t78 [ 1654ULL ] = - X [ 374ULL ]
; t78 [ 1655ULL ] = - X [ 382ULL ] ; t78 [ 1656ULL ] = - X [ 383ULL ] ; t78 [
1657ULL ] = X [ 391ULL ] ; t78 [ 1658ULL ] = X [ 392ULL ] ; t78 [ 1659ULL ] =
X [ 324ULL ] ; t78 [ 1660ULL ] = X [ 325ULL ] * 0.1 ; t78 [ 1661ULL ] = X [
326ULL ] ; t78 [ 1662ULL ] = X [ 327ULL ] ; t78 [ 1663ULL ] = - X [ 356ULL ]
; t78 [ 1664ULL ] = X [ 393ULL ] ; t78 [ 1665ULL ] = - X [ 347ULL ] ; t78 [
1666ULL ] = - X [ 358ULL ] ; t78 [ 1667ULL ] = - X [ 359ULL ] ; t78 [ 1668ULL
] = X [ 394ULL ] ; t78 [ 1669ULL ] = X [ 395ULL ] ; t78 [ 1670ULL ] = - X [
382ULL ] ; t78 [ 1671ULL ] = - X [ 358ULL ] ; t78 [ 1672ULL ] = X [ 100ULL ]
; t78 [ 1673ULL ] = X [ 105ULL ] ; t78 [ 1674ULL ] = - X [ 383ULL ] ; t78 [
1675ULL ] = - X [ 359ULL ] ; t78 [ 1676ULL ] = X [ 15ULL ] ; t78 [ 1677ULL ]
= X [ 16ULL ] ; t78 [ 1678ULL ] = X [ 17ULL ] ; t78 [ 1679ULL ] = X [ 299ULL
] ; t78 [ 1680ULL ] = X [ 300ULL ] * 0.1 ; t78 [ 1681ULL ] = X [ 301ULL ] ;
t78 [ 1682ULL ] = X [ 302ULL ] ; t78 [ 1683ULL ] = X [ 324ULL ] ; t78 [
1684ULL ] = X [ 325ULL ] * 0.1 ; t78 [ 1685ULL ] = X [ 326ULL ] ; t78 [
1686ULL ] = X [ 327ULL ] ; t78 [ 1687ULL ] = Fuel_Cell_Boost_Converter_L_p_v
; t78 [ 1688ULL ] = 0.0 ; t78 [ 1689ULL ] = U_idx_9 ; t78 [ 1690ULL ] = X [
58ULL ] ; t78 [ 1691ULL ] = 0.0 ; t78 [ 1692ULL ] = X [ 58ULL ] ; t78 [
1693ULL ] = X [ 58ULL ] ; t78 [ 1694ULL ] = X [ 58ULL ] ; t78 [ 1695ULL ] =
0.0 ; t78 [ 1696ULL ] = t94_idx_0 ; t78 [ 1697ULL ] = t94_idx_0 ; t78 [
1698ULL ] = X [ 58ULL ] ; t78 [ 1699ULL ] = X [ 58ULL ] ; t78 [ 1700ULL ] =
t94_idx_0 ; t78 [ 1701ULL ] = 0.0 ; t78 [ 1702ULL ] = X [ 58ULL ] ; t78 [
1703ULL ] = 0.0 ; t78 [ 1704ULL ] = X [ 58ULL ] ; t78 [ 1705ULL ] = X [ 58ULL
] ; t78 [ 1706ULL ] = X [ 58ULL ] ; t78 [ 1707ULL ] = X [ 58ULL ] ; t78 [
1708ULL ] = 0.0 ; t78 [ 1709ULL ] = 0.0 ; t78 [ 1710ULL ] = X [ 51ULL ] ; t78
[ 1711ULL ] = X [ 51ULL ] ; t78 [ 1712ULL ] = U_idx_10 ; t78 [ 1713ULL ] =
0.0 ; t78 [ 1714ULL ] = X [ 58ULL ] ; t78 [ 1715ULL ] = 0.0 ; t78 [ 1716ULL ]
= 0.0 ; t78 [ 1717ULL ] = t94_idx_0 ; t78 [ 1718ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_AR * 1000.0 ; t78 [
1719ULL ] = X [ 397ULL ] ; t78 [ 1720ULL ] = X [ 398ULL ] ; t78 [ 1721ULL ] =
X [ 398ULL ] ; t78 [ 1722ULL ] = X [ 396ULL ] ; t78 [ 1723ULL ] = X [ 52ULL ]
; t78 [ 1724ULL ] = X [ 58ULL ] ; t78 [ 1725ULL ] = X [ 51ULL ] *
9.5492965855137211 ; t78 [ 1726ULL ] = 0.0 ; t78 [ 1727ULL ] = 0.0 ; t78 [
1728ULL ] = X [ 51ULL ] ; t78 [ 1729ULL ] = U_idx_11 ; t78 [ 1730ULL ] = - X
[ 397ULL ] ; t78 [ 1731ULL ] = U_idx_11 ; t78 [ 1732ULL ] = X [ 51ULL ] ; t78
[ 1733ULL ] = X [ 51ULL ] ; t78 [ 1734ULL ] = - X [ 397ULL ] ; t78 [ 1735ULL
] = - X [ 397ULL ] ; t78 [ 1736ULL ] = X [ 51ULL ] ; t78 [ 1737ULL ] = X [
51ULL ] ; t78 [ 1738ULL ] = - X [ 397ULL ] ; t78 [ 1739ULL ] = - X [ 397ULL ]
; t78 [ 1740ULL ] = - X [ 397ULL ] ; t78 [ 1741ULL ] = X [ 51ULL ] ; t78 [
1742ULL ] = U_idx_11 ; t78 [ 1743ULL ] = U_idx_10 ; t78 [ 1744ULL ] = X [
58ULL ] ; t78 [ 1745ULL ] = 0.0 ; for ( b = 0 ; b < 1746 ; b ++ ) { out . mX
[ b ] = t78 [ b ] ; } ( void ) LC ; ( void ) t253 ; return 0 ; }
