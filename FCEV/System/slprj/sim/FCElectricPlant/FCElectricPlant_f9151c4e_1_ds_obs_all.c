#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_obs_all.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_obs_all ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t265 , NeDsMethodOutput * t266 ) { ETTS0
ab_efOut ; ETTS0 c_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ;
ETTS0 i_efOut ; ETTS0 k_efOut ; ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut
; ETTS0 s_efOut ; ETTS0 t10 ; ETTS0 t13 ; ETTS0 t3 ; ETTS0 u_efOut ; ETTS0
w_efOut ; ETTS0 y_efOut ; PmRealVector out ; real_T t84 [ 1885 ] ; real_T X [
440 ] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 8
] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_F [ 8 ] ; real_T t85
[ 8 ] ; real_T t87 [ 8 ] ; real_T t89 [ 8 ] ; real_T t91 [ 8 ] ; real_T t93 [
8 ] ; real_T t99 [ 8 ] ; real_T b_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ;
real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T
j_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T p_efOut
[ 1 ] ; real_T r_efOut [ 1 ] ; real_T t70 [ 1 ] ; real_T t_efOut [ 1 ] ;
real_T v_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
Battery_System_Battery_Table_Based1_stateOfCharge ; real_T
Battery_System_DC_DC_Converter_i1 ; real_T
Battery_System_DC_DC_Converter_power_dissipated ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T Fuel_Cell_Boost_Converter_L_n_v ;
real_T Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra49 ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T t102_idx_0 ; real_T
t140 ; real_T t141 ; real_T t142 ; real_T t143 ; real_T t144 ; real_T t146 ;
real_T t147 ; real_T t149 ; real_T t151 ; real_T t156 ; real_T t158 ; real_T
t160 ; real_T t169 ; real_T t172 ; real_T t181 ; real_T t183 ; real_T t184 ;
real_T t186 ; real_T t188 ; real_T t191 ; size_t t17 [ 1 ] ; size_t t76 [ 1 ]
; size_t t79 [ 1 ] ; size_t t127 ; int32_T M [ 231 ] ; int32_T b ; for ( b =
0 ; b < 231 ; b ++ ) { M [ b ] = t265 -> mM . mX [ b ] ; } U_idx_0 = t265 ->
mU . mX [ 0 ] ; U_idx_1 = t265 -> mU . mX [ 1 ] ; U_idx_2 = t265 -> mU . mX [
2 ] ; U_idx_3 = t265 -> mU . mX [ 3 ] ; U_idx_4 = t265 -> mU . mX [ 4 ] ;
U_idx_5 = t265 -> mU . mX [ 5 ] ; U_idx_6 = t265 -> mU . mX [ 6 ] ; U_idx_7 =
t265 -> mU . mX [ 7 ] ; U_idx_8 = t265 -> mU . mX [ 8 ] ; U_idx_9 = t265 ->
mU . mX [ 9 ] ; U_idx_10 = t265 -> mU . mX [ 10 ] ; U_idx_11 = t265 -> mU .
mX [ 11 ] ; U_idx_12 = t265 -> mU . mX [ 12 ] ; for ( b = 0 ; b < 440 ; b ++
) { X [ b ] = t265 -> mX . mX [ b ] ; } out = t266 -> mOBS_ALL ;
Battery_System_Battery_Table_Based1_stateOfCharge = X [ 0ULL ] *
9.2592592592592591E-6 ; Battery_System_DC_DC_Converter_i1 = - X [ 57ULL ] -
U_idx_0 ; Battery_System_DC_DC_Converter_power_dissipated = ( ( ( real_T ) (
Battery_System_DC_DC_Converter_i1 >= 0.0 ) *
Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X [ 59ULL ] ) - 0.9 ) /
0.099999999999999978 ; if ( ( real_T ) ( Battery_System_DC_DC_Converter_i1 >=
0.0 ) * Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X [ 59ULL ] <= 0.9 ) {
Battery_System_DC_DC_Converter_power_dissipated = 0.0 ; } else {
Battery_System_DC_DC_Converter_power_dissipated = ( real_T ) (
Battery_System_DC_DC_Converter_i1 >= 0.0 ) *
Battery_System_DC_DC_Converter_i1 * 1000.0 + ( real_T ) (
Battery_System_DC_DC_Converter_i1 < 0.0 ) * X [ 59ULL ] >= 1.0 ? 1.0 :
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 3.0 -
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated *
Battery_System_DC_DC_Converter_power_dissipated * 2.0 ; }
Fuel_Cell_Boost_Converter_L_i = X [ 65ULL ] * 1.0E-9 + X [ 4ULL ] ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * -
1.0000000000000011 ) + X [ 66ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * -
1.0E-15 ) + X [ 66ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Current_Sensor1_I = ( ( ( X [ 3ULL ] * 0.1 + X [ 62ULL ] * - 0.1 )
+ X [ 65ULL ] * 1.0E-9 ) - X [ 67ULL ] ) + X [ 4ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 0ULL ] = X [
78ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 1ULL ]
= X [ 6ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
2ULL ] = X [ 79ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 3ULL ] = X [
8ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 4ULL ]
= X [ 77ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
5ULL ] = X [ 80ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 6ULL ] = X [
7ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 7ULL ]
= X [ 76ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
0ULL ] = X [ 83ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 1ULL ] = X [
9ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 2ULL ]
= X [ 84ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
3ULL ] = X [ 11ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 4ULL ] = X [
82ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 5ULL ]
= X [ 85ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
6ULL ] = X [ 10ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 7ULL ] = X [
81ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 0ULL ]
= X [ 88ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
1ULL ] = X [ 12ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 2ULL ] = X [
89ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 3ULL ]
= X [ 14ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
4ULL ] = X [ 87ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 5ULL ] = X [
90ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 6ULL ]
= X [ 13ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
7ULL ] = X [ 86ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 0ULL ] = X [
93ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 1ULL ]
= X [ 15ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
2ULL ] = X [ 94ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 3ULL ] = X [
17ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 4ULL ]
= X [ 92ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
5ULL ] = X [ 95ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 6ULL ] = X [
16ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 7ULL ]
= X [ 91ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 = ( ( ( X [
4ULL ] * - 1.0E-6 + X [ 65ULL ] * - 1.0E-15 ) + X [ 66ULL ] * - 0.001001 ) +
X [ 5ULL ] ) + X [ 99ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra49 = - X [
100ULL ] + X [ 109ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v = ( ( ( X [ 4ULL ] *
- 1.0E-6 + X [ 65ULL ] * - 1.0E-15 ) + X [ 66ULL ] * - 1.0E-6 ) + X [ 5ULL ]
) + X [ 99ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = - X [
138ULL ] + U_idx_2 * - 0.01 ; if ( X [ 21ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X [ 21ULL ] >= 1.0 ?
1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = X [ 22ULL ] >=
1.0 ? 1.0 : X [ 22ULL ] ; } t141 = X [ 19ULL ] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A *
4124.48151675695 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W =
X [ 20ULL ] / ( t141 == 0.0 ? 1.0E-16 : t141 ) ; t85 [ 0ULL ] = X [ 20ULL ] *
100000.0 ; t85 [ 1ULL ] = X [ 19ULL ] ; t85 [ 2ULL ] = X [ 146ULL ] ; t85 [
3ULL ] = X [ 21ULL ] ; t85 [ 4ULL ] = X [ 141ULL ] ; t85 [ 5ULL ] = X [
145ULL ] ; t85 [ 6ULL ] = X [ 22ULL ] ; t85 [ 7ULL ] = X [ 142ULL ] ; for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t127 ] = t85 [ t127
] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = - X [
147ULL ] - X [ 148ULL ] ; if ( 1.0 - X [ 21ULL ] >= 0.01 ) { t140 = 1.0 - X [
21ULL ] ; } else if ( 1.0 - X [ 21ULL ] >= - 0.1 ) { t140 = pmf_exp ( ( ( 1.0
- X [ 21ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t140 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = X [ 22ULL ]
/ ( t140 == 0.0 ? 1.0E-16 : t140 ) * 3827.6794129126583 + 296.802103844292 ;
t70 [ 0ULL ] = X [ 19ULL ] ; t76 [ 0 ] = 52ULL ; t17 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] ,
& t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = b_efOut [ 0 ] ; t140 = pmf_exp
( pmf_log ( X [ 20ULL ] * 100000.0 ) - t102_idx_0 ) ; if ( t140 >= 1.0 ) {
t144 = ( t140 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 ; t141 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 / ( t144 ==
0.0 ? 1.0E-16 : t144 ) ; } else { t141 = 1.0 ; } t146 = t141 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = ( X [ 21ULL
] - t141 ) / ( t146 == 0.0 ? 1.0E-16 : t146 ) ; if ( X [ 21ULL ] - t141 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = 0.0
; } else if ( X [ 21ULL ] - t141 >= t141 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = X [ 21ULL ]
- t141 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = ( X [ 21ULL
] - t141 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 *
7.8539816339744827E-5 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = - X [
150ULL ] - X [ 151ULL ] ; t140 = - X [ 152ULL ] - X [ 153ULL ] ; t87 [ 0ULL ]
= X [ 24ULL ] * 100000.0 ; t87 [ 1ULL ] = X [ 23ULL ] ; t87 [ 2ULL ] = X [
176ULL ] ; t87 [ 3ULL ] = X [ 26ULL ] ; t87 [ 4ULL ] = X [ 178ULL ] ; t87 [
5ULL ] = X [ 175ULL ] ; t87 [ 6ULL ] = X [ 25ULL ] ; t87 [ 7ULL ] = X [
177ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t85 [ t127 ] = t87 [
t127 ] ; } if ( X [ 26ULL ] <= 0.0 ) { t142 = 0.0 ; } else { t142 = X [ 26ULL
] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) { t143 = 0.0 ; }
else { t143 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = X [ 23ULL ]
* ( ( ( ( 1.0 - t142 ) - t143 ) * 296.802103844292 + t142 * 461.523 ) + t143
* 4124.48151675695 ) ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) { t143 = 1.0 - X [
26ULL ] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) { t143 = pmf_exp ( ( ( 1.0
- X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t143 =
1.6701700790245661E-7 ; } t144 = X [ 25ULL ] / ( t143 == 0.0 ? 1.0E-16 : t143
) * 3827.6794129126583 + 296.802103844292 ; t70 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = d_efOut [ 0 ]
; t143 = pmf_exp ( pmf_log ( X [ 24ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
t143 >= 1.0 ) { t141 = ( t143 - 1.0 ) * 461.523 + t144 ; t141 = t144 / ( t141
== 0.0 ? 1.0E-16 : t141 ) ; } else { t141 = 1.0 ; } t144 = t141 * 0.01 ; t143
= ( X [ 26ULL ] - t141 ) / ( t144 == 0.0 ? 1.0E-16 : t144 ) ; if ( X [ 26ULL
] - t141 <= 0.0 ) { t143 = 0.0 ; } else if ( X [ 26ULL ] - t141 >= t141 *
0.01 ) { t143 = X [ 26ULL ] - t141 ; } else { t143 = ( X [ 26ULL ] - t141 ) *
( t143 * t143 * 3.0 - t143 * t143 * t143 * 2.0 ) ; } t142 = X [ 24ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) *
t143 * 0.00012500000000000003 / 0.001 * 100000.0 ; t143 = U_idx_2 * 0.01 ;
t89 [ 0ULL ] = X [ 28ULL ] * 100000.0 ; t89 [ 1ULL ] = X [ 27ULL ] ; t89 [
2ULL ] = X [ 208ULL ] ; t89 [ 3ULL ] = X [ 30ULL ] ; t89 [ 4ULL ] = X [
210ULL ] ; t89 [ 5ULL ] = X [ 207ULL ] ; t89 [ 6ULL ] = X [ 29ULL ] ; t89 [
7ULL ] = X [ 209ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t87 [
t127 ] = t89 [ t127 ] ; } if ( X [ 30ULL ] <= 0.0 ) { t146 = 0.0 ; } else {
t146 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } if ( X [ 29ULL ] <= 0.0 ) {
t147 = 0.0 ; } else { t147 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } t144
= X [ 27ULL ] * ( ( ( ( 1.0 - t146 ) - t147 ) * 296.802103844292 + t146 *
461.523 ) + t147 * 4124.48151675695 ) ; if ( 1.0 - X [ 30ULL ] >= 0.01 ) {
t147 = 1.0 - X [ 30ULL ] ; } else if ( 1.0 - X [ 30ULL ] >= - 0.1 ) { t147 =
pmf_exp ( ( ( 1.0 - X [ 30ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t147 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = X [ 29ULL ]
/ ( t147 == 0.0 ? 1.0E-16 : t147 ) * 3827.6794129126583 + 296.802103844292 ;
t70 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup ( & e_efOut .
mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [
0ULL ] , & t17 [ 0ULL ] ) ; t10 = e_efOut ; tlu2_1d_linear_linear_value ( &
f_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] )
; t102_idx_0 = f_efOut [ 0 ] ; t147 = pmf_exp ( pmf_log ( X [ 28ULL ] *
100000.0 ) - t102_idx_0 ) ; if ( t147 >= 1.0 ) { t141 = ( t147 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 ;
t149 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 / (
t141 == 0.0 ? 1.0E-16 : t141 ) ; } else { t149 = 1.0 ; } t141 = t149 * 0.01 ;
t147 = ( X [ 30ULL ] - t149 ) / ( t141 == 0.0 ? 1.0E-16 : t141 ) ; if ( X [
30ULL ] - t149 <= 0.0 ) { t147 = 0.0 ; } else if ( X [ 30ULL ] - t149 >= t149
* 0.01 ) { t147 = X [ 30ULL ] - t149 ; } else { t147 = ( X [ 30ULL ] - t149 )
* ( t147 * t147 * 3.0 - t147 * t147 * t147 * 2.0 ) ; } t146 = X [ 28ULL ] / (
t144 == 0.0 ? 1.0E-16 : t144 ) * t147 * 0.12 / 0.001 * 100000.0 ; if ( X [
33ULL ] <= 0.0 ) { t147 = 0.0 ; } else { t147 = X [ 33ULL ] >= 1.0 ? 1.0 : X
[ 33ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = X [ 34ULL
] >= 1.0 ? 1.0 : X [ 34ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = X [ 31ULL ] * ( ( ( (
1.0 - t147 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0
) * 296.802103844292 + t147 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 *
4124.48151675695 ) ; t91 [ 0ULL ] = X [ 32ULL ] * 100000.0 ; t91 [ 1ULL ] = X
[ 31ULL ] ; t91 [ 2ULL ] = X [ 230ULL ] ; t91 [ 3ULL ] = X [ 33ULL ] ; t91 [
4ULL ] = X [ 225ULL ] ; t91 [ 5ULL ] = X [ 229ULL ] ; t91 [ 6ULL ] = X [
34ULL ] ; t91 [ 7ULL ] = X [ 226ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ;
t127 ++ ) { t89 [ t127 ] = t91 [ t127 ] ; } if ( 1.0 - X [ 33ULL ] >= 0.01 )
{ t149 = 1.0 - X [ 33ULL ] ; } else if ( 1.0 - X [ 33ULL ] >= - 0.1 ) { t149
= pmf_exp ( ( ( 1.0 - X [ 33ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t149
= 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = X [ 34ULL ]
/ ( t149 == 0.0 ? 1.0E-16 : t149 ) * 3827.6794129126583 + 296.802103844292 ;
t70 [ 0ULL ] = X [ 31ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [
0ULL ] , & t17 [ 0ULL ] ) ; t10 = g_efOut ; tlu2_1d_linear_linear_value ( &
h_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] )
; t102_idx_0 = h_efOut [ 0 ] ; t149 = pmf_exp ( pmf_log ( X [ 32ULL ] *
100000.0 ) - t102_idx_0 ) ; if ( t149 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = ( t149 - 1.0
) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = 1.0
; } t141 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 *
0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = ( X [
33ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) /
( t141 == 0.0 ? 1.0E-16 : t141 ) ; if ( X [ 33ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = 0.0 ; } else
if ( X [ 33ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = X [ 33ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = ( X [ 33ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 * 2.0 ) ; }
t147 = X [ 32ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 *
7.8539816339744827E-5 / 0.001 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 = ( X [ 220ULL
] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) - 0.039999990000000013 ;
t149 = ( X [ 220ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; t151 = U_idx_3 * 10.0 ; t93 [ 0ULL ] = X [ 35ULL ] *
100000.0 ; t93 [ 1ULL ] = X [ 36ULL ] ; t93 [ 2ULL ] = X [ 273ULL ] ; t93 [
3ULL ] = X [ 38ULL ] ; t93 [ 4ULL ] = X [ 275ULL ] ; t93 [ 5ULL ] = X [
272ULL ] ; t93 [ 6ULL ] = X [ 37ULL ] ; t93 [ 7ULL ] = X [ 274ULL ] ; for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t91 [ t127 ] = t93 [ t127 ] ; } if (
X [ 38ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W = X [ 38ULL ]
>= 1.0 ? 1.0 : X [ 38ULL ] ; } if ( X [ 37ULL ] <= 0.0 ) { t144 = 0.0 ; }
else { t144 = X [ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = X [ 36ULL ]
* ( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W
) - t144 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W * 461.523 ) +
t144 * 259.836612622973 ) ; if ( 1.0 - X [ 38ULL ] >= 0.01 ) { t144 = 1.0 - X
[ 38ULL ] ; } else if ( 1.0 - X [ 38ULL ] >= - 0.1 ) { t144 = pmf_exp ( ( (
1.0 - X [ 38ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t144 =
1.6701700790245661E-7 ; } t156 = X [ 37ULL ] / ( t144 == 0.0 ? 1.0E-16 : t144
) * - 36.965491221318985 + 296.802103844292 ; t70 [ 0ULL ] = X [ 36ULL ] ;
tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = j_efOut [ 0 ]
; t144 = pmf_exp ( pmf_log ( X [ 35ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
t144 >= 1.0 ) { t181 = ( t144 - 1.0 ) * 461.523 + t156 ; t141 = t156 / ( t181
== 0.0 ? 1.0E-16 : t181 ) ; } else { t141 = 1.0 ; } t183 = t141 * 0.01 ; t144
= ( X [ 38ULL ] - t141 ) / ( t183 == 0.0 ? 1.0E-16 : t183 ) ; if ( X [ 38ULL
] - t141 <= 0.0 ) { t144 = 0.0 ; } else if ( X [ 38ULL ] - t141 >= t141 *
0.01 ) { t144 = X [ 38ULL ] - t141 ; } else { t144 = ( X [ 38ULL ] - t141 ) *
( t144 * t144 * 3.0 - t144 * t144 * t144 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W = X [ 35ULL ] /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) *
t144 * 0.0003 / 0.001 * 100000.0 ; t156 = U_idx_4 * 376.99111843077515 ; t158
= - ( X [ 35ULL ] - 1.01325 ) * X [ 286ULL ] * 0.0001 ; t160 = t156 *
0.99999999999999978 / 0.99999999999999978 ; t93 [ 0ULL ] = X [ 300ULL ] ; t93
[ 1ULL ] = X [ 39ULL ] ; t93 [ 2ULL ] = X [ 297ULL ] ; t93 [ 3ULL ] = X [
41ULL ] ; t93 [ 4ULL ] = X [ 299ULL ] ; t93 [ 5ULL ] = X [ 296ULL ] ; t93 [
6ULL ] = X [ 40ULL ] ; t93 [ 7ULL ] = X [ 298ULL ] ; if ( X [ 41ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = X [ 41ULL ] >= 1.0 ?
1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t169 = 0.0 ; } else { t169
= X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t144 = X [ 39ULL ] * ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ) - t169 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W *
461.523 ) + t169 * 4124.48151675695 ) ; if ( 1.0 - X [ 41ULL ] >= 0.01 ) {
t141 = 1.0 - X [ 41ULL ] ; } else if ( 1.0 - X [ 41ULL ] >= - 0.1 ) { t141 =
pmf_exp ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t141 =
1.6701700790245661E-7 ; } t169 = X [ 40ULL ] / ( t141 == 0.0 ? 1.0E-16 : t141
) * 3827.6794129126583 + 296.802103844292 ; t70 [ 0ULL ] = X [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= k_efOut ; tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = l_efOut [ 0 ]
; t141 = pmf_exp ( pmf_log ( X [ 42ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
t141 >= 1.0 ) { t141 = ( t141 - 1.0 ) * 461.523 + t169 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = t169 / (
t141 == 0.0 ? 1.0E-16 : t141 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = 1.0 ; }
t102_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 *
0.01 ; t169 = ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) / (
t102_idx_0 == 0.0 ? 1.0E-16 : t102_idx_0 ) ; if ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 <= 0.0 ) {
t169 = 0.0 ; } else if ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 * 0.01 ) {
t169 = X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; } else {
t169 = ( X [ 41ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) * ( t169 *
t169 * 3.0 - t169 * t169 * t169 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = X [ 42ULL ] / ( t144 ==
0.0 ? 1.0E-16 : t144 ) * t169 * 0.00049087385212340522 / 0.001 * 100000.0 ;
if ( X [ 8ULL ] <= 0.0 ) { t169 = 0.0 ; } else { t169 = X [ 8ULL ] >= 1.0 ?
1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t141 = 0.0 ; } else { t141 =
X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t144 = X [ 6ULL ] * ( ( ( ( 1.0 -
t169 ) - t141 ) * 296.802103844292 + t169 * 461.523 ) + t141 *
4124.48151675695 ) ; t169 = X [ 43ULL ] / ( t144 == 0.0 ? 1.0E-16 : t144 ) ;
if ( 1.0 - X [ 8ULL ] >= 0.01 ) { t172 = 1.0 - X [ 8ULL ] ; } else if ( 1.0 -
X [ 8ULL ] >= - 0.1 ) { t172 = pmf_exp ( ( ( 1.0 - X [ 8ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t172 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = X [ 7ULL ] /
( t172 == 0.0 ? 1.0E-16 : t172 ) * 3827.6794129126583 + 296.802103844292 ;
t70 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup ( & m_efOut .
mField0 [ 0ULL ] , & m_efOut . mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [
0ULL ] , & t17 [ 0ULL ] ) ; t10 = m_efOut ; tlu2_1d_linear_linear_value ( &
n_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] )
; t102_idx_0 = n_efOut [ 0 ] ; t172 = pmf_exp ( pmf_log ( X [ 43ULL ] *
100000.0 ) - t102_idx_0 ) ; if ( t172 >= 1.0 ) { t102_idx_0 = ( t172 - 1.0 )
* 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ;
t141 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 / (
t102_idx_0 == 0.0 ? 1.0E-16 : t102_idx_0 ) ; } else { t141 = 1.0 ; } t144 =
t141 * 0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4
= ( X [ 8ULL ] - t141 ) / ( t144 == 0.0 ? 1.0E-16 : t144 ) ; if ( X [ 8ULL ]
- t141 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = 0.0 ; } else
if ( X [ 8ULL ] - t141 >= t141 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = X [ 8ULL ] -
t141 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = ( X [ 8ULL ]
- t141 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 * 2.0 ) ; }
t169 = t169 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4
* 0.026773120849090417 / 0.001 ; t169 *= 100000.0 ; if ( X [ 11ULL ] <= 0.0 )
{ t172 = 0.0 ; } else { t172 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if
( X [ 10ULL ] <= 0.0 ) { t141 = 0.0 ; } else { t141 = X [ 10ULL ] >= 1.0 ?
1.0 : X [ 10ULL ] ; } t144 = X [ 9ULL ] * ( ( ( ( 1.0 - t172 ) - t141 ) *
296.802103844292 + t172 * 461.523 ) + t141 * 4124.48151675695 ) ; t172 = X [
44ULL ] / ( t144 == 0.0 ? 1.0E-16 : t144 ) ; if ( 1.0 - X [ 11ULL ] >= 0.01 )
{ t141 = 1.0 - X [ 11ULL ] ; } else if ( 1.0 - X [ 11ULL ] >= - 0.1 ) { t141
= pmf_exp ( ( ( 1.0 - X [ 11ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t141
= 1.6701700790245661E-7 ; } t144 = X [ 10ULL ] / ( t141 == 0.0 ? 1.0E-16 :
t141 ) * 3827.6794129126583 + 296.802103844292 ; t70 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t13
= o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = p_efOut [ 0 ]
; t141 = pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
t141 >= 1.0 ) { t102_idx_0 = ( t141 - 1.0 ) * 461.523 + t144 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = t144 / (
t102_idx_0 == 0.0 ? 1.0E-16 : t102_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = 1.0 ; } t144
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 * 0.01 ;
t144 = ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) / ( t144 ==
0.0 ? 1.0E-16 : t144 ) ; if ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 <= 0.0 ) {
t144 = 0.0 ; } else if ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 * 0.01 ) {
t144 = X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; } else {
t144 = ( X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) * ( t144 *
t144 * 3.0 - t144 * t144 * t144 * 2.0 ) ; } t172 = t172 * t144 *
0.026773120849090417 / 0.001 ; t172 *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 0ULL ] = X
[ 349ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0
[ 1ULL ] = X [ 45ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 2ULL ] = X
[ 346ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0
[ 3ULL ] = X [ 47ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 4ULL ] = X
[ 348ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0
[ 5ULL ] = X [ 345ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 6ULL ] = X
[ 46ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [
7ULL ] = X [ 347ULL ] ; if ( X [ 47ULL ] <= 0.0 ) { t181 = 0.0 ; } else {
t181 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) {
t141 = 0.0 ; } else { t141 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } t144
= X [ 45ULL ] * ( ( ( ( 1.0 - t181 ) - t141 ) * 296.802103844292 + t181 *
461.523 ) + t141 * 259.836612622973 ) ; t181 = X [ 48ULL ] / ( t144 == 0.0 ?
1.0E-16 : t144 ) ; if ( 1.0 - X [ 47ULL ] >= 0.01 ) { t183 = 1.0 - X [ 47ULL
] ; } else if ( 1.0 - X [ 47ULL ] >= - 0.1 ) { t183 = pmf_exp ( ( ( 1.0 - X [
47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t183 = 1.6701700790245661E-7 ;
} t141 = X [ 46ULL ] / ( t183 == 0.0 ? 1.0E-16 : t183 ) * -
36.965491221318985 + 296.802103844292 ; t70 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = r_efOut [ 0 ]
; t183 = pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
t183 >= 1.0 ) { t102_idx_0 = ( t183 - 1.0 ) * 461.523 + t141 ; t184 = t141 /
( t102_idx_0 == 0.0 ? 1.0E-16 : t102_idx_0 ) ; } else { t184 = 1.0 ; } t144 =
t184 * 0.01 ; t141 = ( X [ 47ULL ] - t184 ) / ( t144 == 0.0 ? 1.0E-16 : t144
) ; if ( X [ 47ULL ] - t184 <= 0.0 ) { t141 = 0.0 ; } else if ( X [ 47ULL ] -
t184 >= t184 * 0.01 ) { t141 = X [ 47ULL ] - t184 ; } else { t141 = ( X [
47ULL ] - t184 ) * ( t141 * t141 * 3.0 - t141 * t141 * t141 * 2.0 ) ; } t181
= t181 * t141 * 0.00049087385212340522 / 0.001 ; t181 *= 100000.0 ; t183 = (
X [ 385ULL ] * 0.07812500122070315 + U_idx_9 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 51ULL ] <= 0.0 ) { t184 = 0.0 ; } else {
t184 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) {
t144 = 0.0 ; } else { t144 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } t144
= X [ 49ULL ] * ( ( ( ( 1.0 - t184 ) - t144 ) * 296.802103844292 + t184 *
461.523 ) + t144 * 259.836612622973 ) ; t184 = X [ 50ULL ] / ( t144 == 0.0 ?
1.0E-16 : t144 ) ; t99 [ 0ULL ] = X [ 50ULL ] * 100000.0 ; t99 [ 1ULL ] = X [
49ULL ] ; t99 [ 2ULL ] = X [ 396ULL ] ; t99 [ 3ULL ] = X [ 51ULL ] ; t99 [
4ULL ] = X [ 391ULL ] ; t99 [ 5ULL ] = X [ 395ULL ] ; t99 [ 6ULL ] = X [
52ULL ] ; t99 [ 7ULL ] = X [ 392ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ;
t127 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_F [ t127 ] =
t99 [ t127 ] ; } if ( 1.0 - X [ 51ULL ] >= 0.01 ) { t186 = 1.0 - X [ 51ULL ]
; } else if ( 1.0 - X [ 51ULL ] >= - 0.1 ) { t186 = pmf_exp ( ( ( 1.0 - X [
51ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t186 = 1.6701700790245661E-7 ;
} t144 = X [ 52ULL ] / ( t186 == 0.0 ? 1.0E-16 : t186 ) * -
36.965491221318985 + 296.802103844292 ; t70 [ 0ULL ] = X [ 49ULL ] ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= s_efOut ; tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = t_efOut [ 0 ]
; t186 = pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
t186 >= 1.0 ) { t102_idx_0 = ( t186 - 1.0 ) * 461.523 + t144 ; t141 = t144 /
( t102_idx_0 == 0.0 ? 1.0E-16 : t102_idx_0 ) ; } else { t141 = 1.0 ; } t144 =
t141 * 0.01 ; t144 = ( X [ 51ULL ] - t141 ) / ( t144 == 0.0 ? 1.0E-16 : t144
) ; if ( X [ 51ULL ] - t141 <= 0.0 ) { t144 = 0.0 ; } else if ( X [ 51ULL ] -
t141 >= t141 * 0.01 ) { t144 = X [ 51ULL ] - t141 ; } else { t144 = ( X [
51ULL ] - t141 ) * ( t144 * t144 * 3.0 - t144 * t144 * t144 * 2.0 ) ; } t184
= t184 * t144 * 0.0019634954084936209 / 0.001 ; t184 *= 100000.0 ; t186 =
U_idx_9 * 10.0 ; if ( X [ 14ULL ] <= 0.0 ) { t188 = 0.0 ; } else { t188 = X [
14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { t141 = 0.0
; } else { t141 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; } t144 = X [ 12ULL
] * ( ( ( ( 1.0 - t188 ) - t141 ) * 296.802103844292 + t188 * 461.523 ) +
t141 * 259.836612622973 ) ; t188 = X [ 53ULL ] / ( t144 == 0.0 ? 1.0E-16 :
t144 ) ; if ( 1.0 - X [ 14ULL ] >= 0.01 ) { t191 = 1.0 - X [ 14ULL ] ; } else
if ( 1.0 - X [ 14ULL ] >= - 0.1 ) { t191 = pmf_exp ( ( ( 1.0 - X [ 14ULL ] )
- 0.01 ) / 0.01 ) * 0.01 ; } else { t191 = 1.6701700790245661E-7 ; } t144 = X
[ 13ULL ] / ( t191 == 0.0 ? 1.0E-16 : t191 ) * - 36.965491221318985 +
296.802103844292 ; t70 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup
( & u_efOut . mField0 [ 0ULL ] , & u_efOut . mField1 [ 0ULL ] , & u_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [
0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t3 = u_efOut ;
tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = v_efOut [ 0 ] ; t191 = pmf_exp
( pmf_log ( X [ 53ULL ] * 100000.0 ) - t102_idx_0 ) ; if ( t191 >= 1.0 ) {
t102_idx_0 = ( t191 - 1.0 ) * 461.523 + t144 ; t141 = t144 / ( t102_idx_0 ==
0.0 ? 1.0E-16 : t102_idx_0 ) ; } else { t141 = 1.0 ; } t144 = t141 * 0.01 ;
t144 = ( X [ 14ULL ] - t141 ) / ( t144 == 0.0 ? 1.0E-16 : t144 ) ; if ( X [
14ULL ] - t141 <= 0.0 ) { t144 = 0.0 ; } else if ( X [ 14ULL ] - t141 >= t141
* 0.01 ) { t144 = X [ 14ULL ] - t141 ; } else { t144 = ( X [ 14ULL ] - t141 )
* ( t144 * t144 * 3.0 - t144 * t144 * t144 * 2.0 ) ; } t188 = t188 * t144 *
0.026773120849090417 / 0.001 ; t188 *= 100000.0 ; if ( X [ 17ULL ] <= 0.0 ) {
t191 = 0.0 ; } else { t191 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if (
X [ 16ULL ] <= 0.0 ) { t141 = 0.0 ; } else { t141 = X [ 16ULL ] >= 1.0 ? 1.0
: X [ 16ULL ] ; } t144 = X [ 15ULL ] * ( ( ( ( 1.0 - t191 ) - t141 ) *
296.802103844292 + t191 * 461.523 ) + t141 * 259.836612622973 ) ; t191 = X [
54ULL ] / ( t144 == 0.0 ? 1.0E-16 : t144 ) ; if ( 1.0 - X [ 17ULL ] >= 0.01 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = 1.0 - X [
17ULL ] ; } else if ( 1.0 - X [ 17ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = pmf_exp ( (
( 1.0 - X [ 17ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 =
1.6701700790245661E-7 ; } t144 = X [ 16ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ) *
- 36.965491221318985 + 296.802103844292 ; t70 [ 0ULL ] = X [ 15ULL ] ;
tlu2_linear_linear_prelookup ( & w_efOut . mField0 [ 0ULL ] , & w_efOut .
mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= w_efOut ; tlu2_1d_linear_linear_value ( & x_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t102_idx_0 = x_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = pmf_exp (
pmf_log ( X [ 54ULL ] * 100000.0 ) - t102_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 >= 1.0 ) {
t102_idx_0 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4
- 1.0 ) * 461.523 + t144 ; t141 = t144 / ( t102_idx_0 == 0.0 ? 1.0E-16 :
t102_idx_0 ) ; } else { t141 = 1.0 ; } t144 = t141 * 0.01 ; t144 = ( X [
17ULL ] - t141 ) / ( t144 == 0.0 ? 1.0E-16 : t144 ) ; if ( X [ 17ULL ] - t141
<= 0.0 ) { t144 = 0.0 ; } else if ( X [ 17ULL ] - t141 >= t141 * 0.01 ) {
t144 = X [ 17ULL ] - t141 ; } else { t144 = ( X [ 17ULL ] - t141 ) * ( t144 *
t144 * 3.0 - t144 * t144 * t144 * 2.0 ) ; } t191 = t191 * t144 *
0.026773120849090417 / 0.001 ; t191 *= 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 = ( ( ( ( X [
3ULL ] * 0.1 - X [ 61ULL ] ) + X [ 62ULL ] * - 0.1 ) + X [ 65ULL ] * 1.0E-9 )
- X [ 67ULL ] ) + X [ 4ULL ] ; t70 [ 0ULL ] = X [ 55ULL ] ; t76 [ 0 ] = 23ULL
; tlu2_linear_nearest_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t70 [ 0ULL ] , & t76 [ 0ULL ] , & t17 [ 0ULL ] ) ; t13
= y_efOut ; t70 [ 0ULL ] = X [ 437ULL ] ; t79 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField22 , & t70 [ 0ULL ] , & t79 [ 0ULL ] , & t17 [ 0ULL ] ) ; t10
= ab_efOut ; tlu2_2d_linear_nearest_value ( & bb_efOut [ 0ULL ] , & t13 .
mField0 [ 0ULL ] , & t13 . mField2 [ 0ULL ] , & t10 . mField0 [ 0ULL ] , &
t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t76 [ 0ULL ] , & t79 [ 0ULL ] , & t17 [ 0ULL ] ) ; t70 [ 0 ] = bb_efOut [ 0 ]
; t141 = t70 [ 0ULL ] ; t102_idx_0 = X [ 119ULL ] * 0.00062831853071795862 ;
t144 = X [ 369ULL ] * 0.0031415926535897937 ; t84 [ 0ULL ] = 0.0 ; t84 [ 1ULL
] = 298.15 ; t84 [ 2ULL ] = X [ 0ULL ] * 0.00027777777777777778 ; t84 [ 3ULL
] = X [ 57ULL ] ; t84 [ 4ULL ] = 0.0 ; t84 [ 5ULL ] = X [ 1ULL ] ; t84 [ 6ULL
] = X [ 58ULL ] ; t84 [ 7ULL ] = 1.0 ; t84 [ 8ULL ] = X [ 59ULL ] ; t84 [
9ULL ] = X [ 57ULL ] * X [ 57ULL ] * ( M [ 0ULL ] != 0 ? 4.03416E-7 : X [
60ULL ] ) * 0.001 * 1000.0 ; t84 [ 10ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t84 [ 11ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t84 [ 12ULL ] = X [ 59ULL
] ; t84 [ 13ULL ] = 0.0 ; t84 [ 14ULL ] = 0.0 ; t84 [ 15ULL ] = 0.0 ; t84 [
16ULL ] = 0.0 ; t84 [ 17ULL ] = 0.0 ; t84 [ 18ULL ] = 0.0 ; t84 [ 19ULL ] =
0.0 ; t84 [ 20ULL ] = 0.0 ; t84 [ 21ULL ] = 0.0 ; t84 [ 22ULL ] = 0.0 ; t84 [
23ULL ] = 0.0 ; t84 [ 24ULL ] = X [ 60ULL ] ; t84 [ 25ULL ] = 1.0 ; t84 [
26ULL ] = 1.0 ; t84 [ 27ULL ] = 30.0 ; t84 [ 28ULL ] =
Battery_System_Battery_Table_Based1_stateOfCharge ; t84 [ 29ULL ] =
Battery_System_DC_DC_Converter_i1 ; t84 [ 30ULL ] = X [ 59ULL ] ; t84 [ 31ULL
] = 0.0 ; t84 [ 32ULL ] = 0.0 ; t84 [ 33ULL ] = X [ 61ULL ] ; t84 [ 34ULL ] =
0.0 ; t84 [ 35ULL ] = 0.0 ; t84 [ 36ULL ] = X [ 59ULL ] ; t84 [ 37ULL ] = X [
62ULL ] ; t84 [ 38ULL ] = ( X [ 63ULL ] *
Battery_System_DC_DC_Converter_power_dissipated + ( 1.0 -
Battery_System_DC_DC_Converter_power_dissipated ) *
Battery_System_DC_DC_Converter_i1 * Battery_System_DC_DC_Converter_i1 ) *
1000.0 ; t84 [ 39ULL ] = X [ 63ULL ] * 1000.0 ; t84 [ 40ULL ] = X [ 2ULL ] ;
t84 [ 41ULL ] = X [ 62ULL ] ; t84 [ 42ULL ] = 0.0 ; t84 [ 43ULL ] = 0.0 ; t84
[ 44ULL ] = 0.0 ; t84 [ 45ULL ] = U_idx_0 ; t84 [ 46ULL ] = U_idx_0 ; t84 [
47ULL ] = X [ 59ULL ] ; t84 [ 48ULL ] = X [ 59ULL ] ; t84 [ 49ULL ] = U_idx_0
; t84 [ 50ULL ] = X [ 59ULL ] ; t84 [ 51ULL ] = 0.0 ; t84 [ 52ULL ] = - X [
57ULL ] ; t84 [ 53ULL ] = - X [ 57ULL ] ; t84 [ 54ULL ] = X [ 59ULL ] ; t84 [
55ULL ] = X [ 59ULL ] ; t84 [ 56ULL ] = - X [ 57ULL ] ; t84 [ 57ULL ] = 0.0 ;
t84 [ 58ULL ] = X [ 59ULL ] ; t84 [ 59ULL ] = 0.0 ; t84 [ 60ULL ] = X [ 59ULL
] ; t84 [ 61ULL ] = X [ 59ULL ] ; t84 [ 62ULL ] = X [ 59ULL ] ; t84 [ 63ULL ]
= X [ 59ULL ] ; t84 [ 64ULL ] = - X [ 61ULL ] ; t84 [ 65ULL ] = - X [ 61ULL ]
; t84 [ 66ULL ] = X [ 62ULL ] ; t84 [ 67ULL ] = X [ 62ULL ] ; t84 [ 68ULL ] =
0.0 ; t84 [ 69ULL ] = - X [ 61ULL ] ; t84 [ 70ULL ] = X [ 62ULL ] ; t84 [
71ULL ] = 0.0 ; t84 [ 72ULL ] = X [ 62ULL ] ; t84 [ 73ULL ] = X [ 62ULL ] ;
t84 [ 74ULL ] = X [ 62ULL ] ; t84 [ 75ULL ] = X [ 62ULL ] ; t84 [ 76ULL ] = -
X [ 61ULL ] ; t84 [ 77ULL ] = - X [ 61ULL ] ; t84 [ 78ULL ] = X [ 62ULL ] ;
t84 [ 79ULL ] = 0.0 ; t84 [ 80ULL ] = 0.0 ; t84 [ 81ULL ] = X [ 3ULL ] * -
0.1 + X [ 62ULL ] * 0.1 ; t84 [ 82ULL ] = 0.0 ; t84 [ 83ULL ] = X [ 62ULL ] ;
t84 [ 84ULL ] = X [ 62ULL ] ; t84 [ 85ULL ] = X [ 3ULL ] ; t84 [ 86ULL ] = X
[ 64ULL ] ; t84 [ 87ULL ] = U_idx_10 ; t84 [ 88ULL ] = 0.0 ; t84 [ 89ULL ] =
0.0 ; t84 [ 90ULL ] = Fuel_Cell_Boost_Converter_L_i ; t84 [ 91ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t84 [ 92ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 93ULL ] = X [ 65ULL ] ; t84 [ 94ULL ]
= X [ 4ULL ] ; t84 [ 95ULL ] = Fuel_Cell_Boost_Converter_L_n_v ; t84 [ 96ULL
] = X [ 67ULL ] ; t84 [ 97ULL ] = X [ 4ULL ] ; t84 [ 98ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t84 [ 99ULL ] = Fuel_Cell_Boost_Converter_L_i
; t84 [ 100ULL ] = 0.0 ; t84 [ 101ULL ] = 0.0 ; t84 [ 102ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 103ULL ] = X [ 62ULL ] ; t84 [ 104ULL
] = X [ 3ULL ] ; t84 [ 105ULL ] = Fuel_Cell_Current_Sensor1_I ; t84 [ 106ULL
] = Fuel_Cell_Current_Sensor1_I ; t84 [ 107ULL ] = X [ 62ULL ] ; t84 [ 108ULL
] = X [ 62ULL ] ; t84 [ 109ULL ] = Fuel_Cell_Current_Sensor1_I ; t84 [ 110ULL
] = 0.0 ; t84 [ 111ULL ] = X [ 68ULL ] ; t84 [ 112ULL ] = X [ 69ULL ] * 0.1 ;
t84 [ 113ULL ] = X [ 70ULL ] ; t84 [ 114ULL ] = X [ 71ULL ] ; t84 [ 115ULL ]
= X [ 72ULL ] ; t84 [ 116ULL ] = X [ 73ULL ] * 0.1 ; t84 [ 117ULL ] = X [
74ULL ] ; t84 [ 118ULL ] = X [ 75ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ;
t127 ++ ) { t84 [ t127 + 119ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 127ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 135ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 143ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t127 ] ; } t84 [
151ULL ] = 323.15 ; t84 [ 152ULL ] = X [ 68ULL ] ; t84 [ 153ULL ] = X [ 69ULL
] * 0.1 ; t84 [ 154ULL ] = X [ 70ULL ] ; t84 [ 155ULL ] = X [ 71ULL ] ; t84 [
156ULL ] = X [ 72ULL ] ; t84 [ 157ULL ] = X [ 73ULL ] * 0.1 ; t84 [ 158ULL ]
= X [ 74ULL ] ; t84 [ 159ULL ] = X [ 75ULL ] ; t84 [ 160ULL ] = X [ 96ULL ] ;
t84 [ 161ULL ] = X [ 97ULL ] ; t84 [ 162ULL ] = 323.15 ; for ( t127 = 0ULL ;
t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 163ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 171ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 179ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 187ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t127 ] ; } t84 [
195ULL ] = X [ 66ULL ] ; t84 [ 196ULL ] = X [ 98ULL ] ; t84 [ 197ULL ] = X [
9ULL ] ; t84 [ 198ULL ] = X [ 10ULL ] ; t84 [ 199ULL ] = X [ 11ULL ] ; t84 [
200ULL ] = X [ 15ULL ] ; t84 [ 201ULL ] = X [ 16ULL ] ; t84 [ 202ULL ] = X [
17ULL ] ; t84 [ 203ULL ] = 0.0 ; t84 [ 204ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t84 [
205ULL ] = X [ 100ULL ] ; t84 [ 206ULL ] = X [ 101ULL ] ; t84 [ 207ULL ] = X
[ 15ULL ] ; t84 [ 208ULL ] = X [ 16ULL ] ; t84 [ 209ULL ] = X [ 17ULL ] ; t84
[ 210ULL ] = 323.15 ; t84 [ 211ULL ] = - X [ 100ULL ] ; t84 [ 212ULL ] = X [
102ULL ] ; t84 [ 213ULL ] = X [ 103ULL ] ; t84 [ 214ULL ] = X [ 9ULL ] ; t84
[ 215ULL ] = X [ 10ULL ] ; t84 [ 216ULL ] = X [ 11ULL ] ; t84 [ 217ULL ] =
323.15 ; t84 [ 218ULL ] = - X [ 102ULL ] ; t84 [ 219ULL ] = X [ 104ULL ] ;
t84 [ 220ULL ] = X [ 105ULL ] ; t84 [ 221ULL ] = X [ 15ULL ] ; t84 [ 222ULL ]
= X [ 16ULL ] ; t84 [ 223ULL ] = X [ 17ULL ] ; t84 [ 224ULL ] = 323.15 ; t84
[ 225ULL ] = - X [ 104ULL ] ; t84 [ 226ULL ] = X [ 108ULL ] ; t84 [ 227ULL ]
= X [ 106ULL ] ; t84 [ 228ULL ] = X [ 9ULL ] ; t84 [ 229ULL ] = X [ 10ULL ] ;
t84 [ 230ULL ] = X [ 11ULL ] ; t84 [ 231ULL ] = 323.15 ; t84 [ 232ULL ] = - X
[ 108ULL ] ; t84 [ 233ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra49 ; t84 [
234ULL ] = X [ 107ULL ] ; t84 [ 235ULL ] = X [ 15ULL ] ; t84 [ 236ULL ] = X [
16ULL ] ; t84 [ 237ULL ] = X [ 17ULL ] ; t84 [ 238ULL ] = 323.15 ; t84 [
239ULL ] = - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra49
; t84 [ 240ULL ] = X [ 9ULL ] ; t84 [ 241ULL ] = X [ 10ULL ] ; t84 [ 242ULL ]
= X [ 11ULL ] ; t84 [ 243ULL ] = X [ 15ULL ] ; t84 [ 244ULL ] = X [ 16ULL ] ;
t84 [ 245ULL ] = X [ 17ULL ] ; t84 [ 246ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t84 [
247ULL ] = 0.0 ; t84 [ 248ULL ] = 323.15 ; t84 [ 249ULL ] = 323.15 ; t84 [
250ULL ] = 323.15 ; t84 [ 251ULL ] = 323.15 ; t84 [ 252ULL ] = X [ 98ULL ] *
- 1000.0 ; t84 [ 253ULL ] = X [ 98ULL ] * - 1000.0 ; t84 [ 254ULL ] = - X [
98ULL ] ; t84 [ 255ULL ] = 323.15 ; t84 [ 256ULL ] = 323.15 ; t84 [ 257ULL ]
= X [ 110ULL ] * 1000.0 ; t84 [ 258ULL ] = X [ 18ULL ] - 273.15 ; t84 [
259ULL ] = ( - X [ 4ULL ] + X [ 65ULL ] * - 1.0E-9 ) - X [ 66ULL ] ; t84 [
260ULL ] = 0.0 ; t84 [ 261ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t84 [
262ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 263ULL ] = X [ 5ULL ] ;
t84 [ 264ULL ] = Fuel_Cell_Boost_Converter_L_i ; t84 [ 265ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t84 [ 266ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 267ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 268ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t84 [ 269ULL ] = - X [ 66ULL ] ; t84 [ 270ULL
] = Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 271ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; t84 [ 272ULL ] = X
[ 99ULL ] ; t84 [ 273ULL ] = - X [ 66ULL ] ; t84 [ 274ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v ; t84 [ 275ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t84 [
276ULL ] = X [ 66ULL ] * - 0.001 ; t84 [ 277ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 278ULL ] = 0.0 ; t84 [ 279ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 280ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 281ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t84 [
282ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 283ULL ] = 0.0 ; t84 [
284ULL ] = 323.15 ; t84 [ 285ULL ] = ( ( ( ( ( - X [ 98ULL ] - X [ 110ULL ] )
- X [ 111ULL ] ) - X [ 112ULL ] ) - X [ 113ULL ] ) - X [ 114ULL ] ) * 1000.0
; t84 [ 286ULL ] = X [ 115ULL ] ; t84 [ 287ULL ] = X [ 116ULL ] * 0.1 ; t84 [
288ULL ] = X [ 117ULL ] ; t84 [ 289ULL ] = X [ 118ULL ] ; t84 [ 290ULL ] = X
[ 119ULL ] ; t84 [ 291ULL ] = 293.15 ; t84 [ 292ULL ] = - 184.19157727996955
+ t102_idx_0 * 1000.0 ; t84 [ 293ULL ] = ( X [ 119ULL ] *
0.00062831853071795862 - 0.18419157727996954 ) * 1591.5494309189535 ; t84 [
294ULL ] = 0.0 ; t84 [ 295ULL ] = X [ 120ULL ] ; t84 [ 296ULL ] = 0.101325 ;
t84 [ 297ULL ] = X [ 121ULL ] ; t84 [ 298ULL ] = X [ 122ULL ] ; t84 [ 299ULL
] = X [ 123ULL ] ; t84 [ 300ULL ] = X [ 124ULL ] ; t84 [ 301ULL ] = 0.0 ; t84
[ 302ULL ] = X [ 132ULL ] ; t84 [ 303ULL ] = X [ 131ULL ] ; t84 [ 304ULL ] =
293.15 ; t84 [ 305ULL ] = X [ 120ULL ] ; t84 [ 306ULL ] = 0.101325 ; t84 [
307ULL ] = X [ 121ULL ] ; t84 [ 308ULL ] = X [ 122ULL ] ; t84 [ 309ULL ] = X
[ 124ULL ] ; t84 [ 310ULL ] = X [ 125ULL ] ; t84 [ 311ULL ] = X [ 126ULL ] ;
t84 [ 312ULL ] = X [ 127ULL ] ; t84 [ 313ULL ] = X [ 128ULL ] ; t84 [ 314ULL
] = X [ 129ULL ] ; t84 [ 315ULL ] = X [ 130ULL ] ; t84 [ 316ULL ] = X [
126ULL ] ; t84 [ 317ULL ] = X [ 127ULL ] ; t84 [ 318ULL ] = X [ 128ULL ] ;
t84 [ 319ULL ] = 0.101325 ; t84 [ 320ULL ] = 0.9997 ; t84 [ 321ULL ] = X [
133ULL ] ; t84 [ 322ULL ] = 293.15 ; t84 [ 323ULL ] = - 184.19157727996955 +
t102_idx_0 * 1000.0 ; t84 [ 324ULL ] = U_idx_1 ; t84 [ 325ULL ] = U_idx_1 *
3.1415926535897929E-6 ; t84 [ 326ULL ] = X [ 115ULL ] ; t84 [ 327ULL ] = X [
116ULL ] * 0.1 ; t84 [ 328ULL ] = X [ 117ULL ] ; t84 [ 329ULL ] = X [ 118ULL
] ; t84 [ 330ULL ] = X [ 134ULL ] ; t84 [ 331ULL ] = X [ 135ULL ] * 0.1 ; t84
[ 332ULL ] = X [ 136ULL ] ; t84 [ 333ULL ] = X [ 137ULL ] ; t84 [ 334ULL ] =
X [ 22ULL ] ; t84 [ 335ULL ] = X [ 142ULL ] ; t84 [ 336ULL ] = X [ 21ULL ] ;
t84 [ 337ULL ] = X [ 139ULL ] ; t84 [ 338ULL ] = X [ 19ULL ] - 273.15 ; t84 [
339ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ;
t84 [ 340ULL ] = X [ 140ULL ] * 0.1 ; t84 [ 341ULL ] = X [ 20ULL ] * 0.1 ;
t84 [ 342ULL ] = X [ 141ULL ] ; t84 [ 343ULL ] = X [ 143ULL ] ; t84 [ 344ULL
] = - X [ 126ULL ] ; t84 [ 345ULL ] = X [ 144ULL ] * 0.1 ; for ( t127 = 0ULL
; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 346ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t127 ] ; } t84 [
354ULL ] = X [ 119ULL ] ; t84 [ 355ULL ] = X [ 145ULL ] ; t84 [ 356ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A ; t84 [ 357ULL ] =
- X [ 124ULL ] ; t84 [ 358ULL ] = 0.0 ; t84 [ 359ULL ] = 0.18419157727996954
- t102_idx_0 ; t84 [ 360ULL ] = X [ 146ULL ] ; t84 [ 361ULL ] = X [ 19ULL ] ;
t84 [ 362ULL ] = X [ 22ULL ] ; t84 [ 363ULL ] = X [ 21ULL ] ; t84 [ 364ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; t84 [ 365ULL ] = X
[ 115ULL ] ; t84 [ 366ULL ] = X [ 116ULL ] * 0.1 ; t84 [ 367ULL ] = X [
117ULL ] ; t84 [ 368ULL ] = X [ 118ULL ] ; t84 [ 369ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A ; t84 [ 370ULL ] =
X [ 149ULL ] ; t84 [ 371ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ; t84 [
372ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 ;
t84 [ 373ULL ] = t140 ; t84 [ 374ULL ] = X [ 154ULL ] ; t84 [ 375ULL ] = X [
155ULL ] ; t84 [ 376ULL ] = X [ 134ULL ] ; t84 [ 377ULL ] = X [ 135ULL ] *
0.1 ; t84 [ 378ULL ] = X [ 136ULL ] ; t84 [ 379ULL ] = X [ 137ULL ] ; t84 [
380ULL ] = - X [ 124ULL ] ; t84 [ 381ULL ] = X [ 156ULL ] ; t84 [ 382ULL ] =
- X [ 126ULL ] ; t84 [ 383ULL ] = - X [ 127ULL ] ; t84 [ 384ULL ] = - X [
128ULL ] ; t84 [ 385ULL ] = X [ 157ULL ] ; t84 [ 386ULL ] = X [ 158ULL ] ;
t84 [ 387ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 ; t84 [
388ULL ] = - X [ 127ULL ] ; t84 [ 389ULL ] = 0.0 ; t84 [ 390ULL ] = 0.0 ; t84
[ 391ULL ] = t140 ; t84 [ 392ULL ] = - X [ 128ULL ] ; t84 [ 393ULL ] = X [
134ULL ] ; t84 [ 394ULL ] = X [ 135ULL ] * 0.1 ; t84 [ 395ULL ] = X [ 136ULL
] ; t84 [ 396ULL ] = X [ 137ULL ] ; t84 [ 397ULL ] = U_idx_1 *
0.031415926535897927 * 0.0001 ; t84 [ 398ULL ] = X [ 120ULL ] ; t84 [ 399ULL
] = 0.101325 ; t84 [ 400ULL ] = X [ 121ULL ] ; t84 [ 401ULL ] = X [ 122ULL ]
; t84 [ 402ULL ] = X [ 126ULL ] ; t84 [ 403ULL ] = X [ 134ULL ] ; t84 [
404ULL ] = X [ 135ULL ] * 0.1 ; t84 [ 405ULL ] = X [ 136ULL ] ; t84 [ 406ULL
] = X [ 137ULL ] ; t84 [ 407ULL ] = X [ 124ULL ] ; t84 [ 408ULL ] = X [
165ULL ] ; t84 [ 409ULL ] = X [ 126ULL ] ; t84 [ 410ULL ] = X [ 127ULL ] ;
t84 [ 411ULL ] = X [ 128ULL ] ; t84 [ 412ULL ] = X [ 162ULL ] ; t84 [ 413ULL
] = X [ 161ULL ] ; t84 [ 414ULL ] = X [ 159ULL ] ; t84 [ 415ULL ] = X [
160ULL ] * 0.1 ; t84 [ 416ULL ] = X [ 163ULL ] ; t84 [ 417ULL ] = X [ 164ULL
] ; t84 [ 418ULL ] = X [ 124ULL ] ; t84 [ 419ULL ] = - X [ 124ULL ] ; t84 [
420ULL ] = X [ 120ULL ] ; t84 [ 421ULL ] = 0.101325 ; t84 [ 422ULL ] = X [
121ULL ] ; t84 [ 423ULL ] = X [ 122ULL ] ; t84 [ 424ULL ] = - X [ 124ULL ] ;
t84 [ 425ULL ] = X [ 165ULL ] ; t84 [ 426ULL ] = - X [ 126ULL ] ; t84 [
427ULL ] = - X [ 127ULL ] ; t84 [ 428ULL ] = - X [ 128ULL ] ; t84 [ 429ULL ]
= X [ 162ULL ] ; t84 [ 430ULL ] = X [ 161ULL ] ; t84 [ 431ULL ] = - X [
126ULL ] ; t84 [ 432ULL ] = X [ 127ULL ] ; t84 [ 433ULL ] = - X [ 127ULL ] ;
t84 [ 434ULL ] = X [ 128ULL ] ; t84 [ 435ULL ] = - X [ 128ULL ] ; t84 [
436ULL ] = U_idx_1 ; t84 [ 437ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t84 [
438ULL ] = 0.0 ; t84 [ 439ULL ] = X [ 166ULL ] ; t84 [ 440ULL ] = X [ 24ULL ]
* 0.1 ; t84 [ 441ULL ] = X [ 167ULL ] ; t84 [ 442ULL ] = X [ 168ULL ] ; t84 [
443ULL ] = X [ 169ULL ] ; t84 [ 444ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 445ULL ]
= X [ 170ULL ] ; t84 [ 446ULL ] = X [ 171ULL ] ; t84 [ 447ULL ] = X [ 166ULL
] ; t84 [ 448ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 449ULL ] = X [ 167ULL ] ; t84
[ 450ULL ] = X [ 168ULL ] ; t84 [ 451ULL ] = X [ 172ULL ] ; t84 [ 452ULL ] =
X [ 24ULL ] * 0.1 ; t84 [ 453ULL ] = X [ 173ULL ] ; t84 [ 454ULL ] = X [
174ULL ] ; t84 [ 455ULL ] = X [ 169ULL ] ; t84 [ 456ULL ] = X [ 24ULL ] * 0.1
; t84 [ 457ULL ] = X [ 170ULL ] ; t84 [ 458ULL ] = X [ 171ULL ] ; t84 [
459ULL ] = X [ 23ULL ] ; t84 [ 460ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 461ULL ]
= X [ 25ULL ] ; t84 [ 462ULL ] = X [ 26ULL ] ; for ( t127 = 0ULL ; t127 <
8ULL ; t127 ++ ) { t84 [ t127 + 463ULL ] = t85 [ t127 ] ; } t84 [ 471ULL ] =
X [ 23ULL ] ; t84 [ 472ULL ] = X [ 175ULL ] ; t84 [ 473ULL ] = X [ 179ULL ] ;
t84 [ 474ULL ] = X [ 180ULL ] ; t84 [ 475ULL ] = X [ 181ULL ] ; t84 [ 476ULL
] = 0.0 ; t84 [ 477ULL ] = 0.0 ; t84 [ 478ULL ] = X [ 23ULL ] - 273.15 ; t84
[ 479ULL ] = X [ 25ULL ] ; t84 [ 480ULL ] = X [ 177ULL ] ; t84 [ 481ULL ] = X
[ 26ULL ] ; t84 [ 482ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 483ULL ] = 0.0 ; t84 [
484ULL ] = X [ 176ULL ] ; t84 [ 485ULL ] = X [ 23ULL ] ; t84 [ 486ULL ] = X [
25ULL ] ; t84 [ 487ULL ] = X [ 26ULL ] ; t84 [ 488ULL ] = t142 ; t84 [ 489ULL
] = X [ 166ULL ] ; t84 [ 490ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 491ULL ] = X [
167ULL ] ; t84 [ 492ULL ] = X [ 168ULL ] ; t84 [ 493ULL ] = X [ 179ULL ] ;
t84 [ 494ULL ] = X [ 182ULL ] ; t84 [ 495ULL ] = X [ 183ULL ] ; t84 [ 496ULL
] = X [ 184ULL ] ; t84 [ 497ULL ] = X [ 185ULL ] ; t84 [ 498ULL ] = X [
186ULL ] ; t84 [ 499ULL ] = X [ 187ULL ] ; t84 [ 500ULL ] = X [ 172ULL ] ;
t84 [ 501ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 502ULL ] = X [ 173ULL ] ; t84 [
503ULL ] = X [ 174ULL ] ; t84 [ 504ULL ] = X [ 180ULL ] ; t84 [ 505ULL ] = X
[ 188ULL ] ; t84 [ 506ULL ] = t143 ; t84 [ 507ULL ] = X [ 150ULL ] ; t84 [
508ULL ] = X [ 152ULL ] ; t84 [ 509ULL ] = X [ 189ULL ] ; t84 [ 510ULL ] = X
[ 190ULL ] ; t84 [ 511ULL ] = X [ 169ULL ] ; t84 [ 512ULL ] = X [ 24ULL ] *
0.1 ; t84 [ 513ULL ] = X [ 170ULL ] ; t84 [ 514ULL ] = X [ 171ULL ] ; t84 [
515ULL ] = X [ 181ULL ] ; t84 [ 516ULL ] = X [ 191ULL ] ; t84 [ 517ULL ] = X
[ 192ULL ] ; t84 [ 518ULL ] = X [ 193ULL ] ; t84 [ 519ULL ] = X [ 194ULL ] ;
t84 [ 520ULL ] = X [ 195ULL ] ; t84 [ 521ULL ] = X [ 196ULL ] ; t84 [ 522ULL
] = X [ 183ULL ] ; t84 [ 523ULL ] = t143 ; t84 [ 524ULL ] = X [ 192ULL ] ;
t84 [ 525ULL ] = 0.0 ; t84 [ 526ULL ] = X [ 184ULL ] ; t84 [ 527ULL ] = X [
150ULL ] ; t84 [ 528ULL ] = X [ 193ULL ] ; t84 [ 529ULL ] = 0.0 ; t84 [
530ULL ] = 0.0 ; t84 [ 531ULL ] = 0.0 ; t84 [ 532ULL ] = X [ 185ULL ] ; t84 [
533ULL ] = X [ 152ULL ] ; t84 [ 534ULL ] = X [ 194ULL ] ; t84 [ 535ULL ] =
0.0 ; t84 [ 536ULL ] = X [ 178ULL ] ; t84 [ 537ULL ] = X [ 115ULL ] ; t84 [
538ULL ] = X [ 116ULL ] * 0.1 ; t84 [ 539ULL ] = X [ 117ULL ] ; t84 [ 540ULL
] = X [ 118ULL ] ; t84 [ 541ULL ] = X [ 172ULL ] ; t84 [ 542ULL ] = X [ 24ULL
] * 0.1 ; t84 [ 543ULL ] = X [ 173ULL ] ; t84 [ 544ULL ] = X [ 174ULL ] ; t84
[ 545ULL ] = X [ 197ULL ] ; t84 [ 546ULL ] = X [ 200ULL ] ; t84 [ 547ULL ] =
X [ 115ULL ] ; t84 [ 548ULL ] = X [ 116ULL ] * 0.1 ; t84 [ 549ULL ] = X [
117ULL ] ; t84 [ 550ULL ] = X [ 118ULL ] ; t84 [ 551ULL ] = X [ 147ULL ] ;
t84 [ 552ULL ] = X [ 201ULL ] ; t84 [ 553ULL ] = t143 ; t84 [ 554ULL ] = X [
150ULL ] ; t84 [ 555ULL ] = X [ 152ULL ] ; t84 [ 556ULL ] = X [ 202ULL ] ;
t84 [ 557ULL ] = X [ 203ULL ] ; t84 [ 558ULL ] = t143 ; t84 [ 559ULL ] = X [
198ULL ] ; t84 [ 560ULL ] = X [ 199ULL ] ; t84 [ 561ULL ] = X [ 172ULL ] ;
t84 [ 562ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 563ULL ] = X [ 173ULL ] ; t84 [
564ULL ] = X [ 174ULL ] ; t84 [ 565ULL ] = - X [ 180ULL ] ; t84 [ 566ULL ] =
X [ 201ULL ] ; t84 [ 567ULL ] = - t143 ; t84 [ 568ULL ] = - X [ 150ULL ] ;
t84 [ 569ULL ] = - X [ 152ULL ] ; t84 [ 570ULL ] = X [ 202ULL ] ; t84 [
571ULL ] = X [ 203ULL ] ; t84 [ 572ULL ] = - t143 ; t84 [ 573ULL ] = t143 ;
t84 [ 574ULL ] = X [ 147ULL ] ; t84 [ 575ULL ] = - X [ 180ULL ] ; t84 [
576ULL ] = X [ 150ULL ] ; t84 [ 577ULL ] = - X [ 150ULL ] ; t84 [ 578ULL ] =
X [ 152ULL ] ; t84 [ 579ULL ] = - X [ 152ULL ] ; t84 [ 580ULL ] = U_idx_2 ;
t84 [ 581ULL ] = U_idx_2 * 0.01 ; t84 [ 582ULL ] = X [ 23ULL ] ; t84 [ 583ULL
] = X [ 23ULL ] ; t84 [ 584ULL ] = X [ 115ULL ] ; t84 [ 585ULL ] = X [ 116ULL
] * 0.1 ; t84 [ 586ULL ] = X [ 117ULL ] ; t84 [ 587ULL ] = X [ 118ULL ] ; t84
[ 588ULL ] = U_idx_2 ; t84 [ 589ULL ] = X [ 166ULL ] ; t84 [ 590ULL ] = X [
24ULL ] * 0.1 ; t84 [ 591ULL ] = X [ 167ULL ] ; t84 [ 592ULL ] = X [ 168ULL ]
; t84 [ 593ULL ] = X [ 204ULL ] ; t84 [ 594ULL ] = X [ 28ULL ] * 0.1 ; t84 [
595ULL ] = X [ 205ULL ] ; t84 [ 596ULL ] = X [ 206ULL ] ; t84 [ 597ULL ] = X
[ 27ULL ] ; t84 [ 598ULL ] = X [ 28ULL ] * 0.1 ; t84 [ 599ULL ] = X [ 29ULL ]
; t84 [ 600ULL ] = X [ 30ULL ] ; t84 [ 601ULL ] = X [ 27ULL ] ; t84 [ 602ULL
] = X [ 28ULL ] * 0.1 ; t84 [ 603ULL ] = X [ 29ULL ] ; t84 [ 604ULL ] = X [
30ULL ] ; t84 [ 605ULL ] = X [ 27ULL ] ; t84 [ 606ULL ] = X [ 28ULL ] * 0.1 ;
t84 [ 607ULL ] = X [ 29ULL ] ; t84 [ 608ULL ] = X [ 30ULL ] ; for ( t127 =
0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 609ULL ] = t87 [ t127 ] ; } t84
[ 617ULL ] = X [ 27ULL ] ; t84 [ 618ULL ] = X [ 207ULL ] ; t84 [ 619ULL ] = X
[ 211ULL ] ; t84 [ 620ULL ] = 0.0 ; t84 [ 621ULL ] = 0.0 ; t84 [ 622ULL ] =
0.0 ; t84 [ 623ULL ] = 0.0 ; t84 [ 624ULL ] = X [ 27ULL ] - 273.15 ; t84 [
625ULL ] = X [ 29ULL ] ; t84 [ 626ULL ] = X [ 209ULL ] ; t84 [ 627ULL ] = X [
30ULL ] ; t84 [ 628ULL ] = X [ 28ULL ] * 0.1 ; t84 [ 629ULL ] = 0.0 ; t84 [
630ULL ] = X [ 208ULL ] ; t84 [ 631ULL ] = X [ 27ULL ] ; t84 [ 632ULL ] = X [
29ULL ] ; t84 [ 633ULL ] = X [ 30ULL ] ; t84 [ 634ULL ] = t146 ; t84 [ 635ULL
] = X [ 204ULL ] ; t84 [ 636ULL ] = X [ 28ULL ] * 0.1 ; t84 [ 637ULL ] = X [
205ULL ] ; t84 [ 638ULL ] = X [ 206ULL ] ; t84 [ 639ULL ] = X [ 211ULL ] ;
t84 [ 640ULL ] = X [ 212ULL ] ; t84 [ 641ULL ] = X [ 213ULL ] ; t84 [ 642ULL
] = X [ 214ULL ] ; t84 [ 643ULL ] = X [ 215ULL ] ; t84 [ 644ULL ] = X [
216ULL ] ; t84 [ 645ULL ] = X [ 217ULL ] ; t84 [ 646ULL ] = X [ 213ULL ] ;
t84 [ 647ULL ] = 0.0 ; t84 [ 648ULL ] = 0.0 ; t84 [ 649ULL ] = 0.0 ; t84 [
650ULL ] = X [ 214ULL ] ; t84 [ 651ULL ] = 0.0 ; t84 [ 652ULL ] = 0.0 ; t84 [
653ULL ] = 0.0 ; t84 [ 654ULL ] = 0.0 ; t84 [ 655ULL ] = 0.0 ; t84 [ 656ULL ]
= X [ 215ULL ] ; t84 [ 657ULL ] = 0.0 ; t84 [ 658ULL ] = 0.0 ; t84 [ 659ULL ]
= 0.0 ; t84 [ 660ULL ] = X [ 210ULL ] ; t84 [ 661ULL ] = X [ 166ULL ] ; t84 [
662ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 663ULL ] = X [ 167ULL ] ; t84 [ 664ULL ]
= X [ 168ULL ] ; t84 [ 665ULL ] = X [ 204ULL ] ; t84 [ 666ULL ] = X [ 28ULL ]
* 0.1 ; t84 [ 667ULL ] = X [ 205ULL ] ; t84 [ 668ULL ] = X [ 206ULL ] ; t84 [
669ULL ] = X [ 204ULL ] ; t84 [ 670ULL ] = X [ 28ULL ] * 0.1 ; t84 [ 671ULL ]
= X [ 205ULL ] ; t84 [ 672ULL ] = X [ 206ULL ] ; t84 [ 673ULL ] = - X [
213ULL ] ; t84 [ 674ULL ] = - X [ 214ULL ] ; t84 [ 675ULL ] = - X [ 215ULL ]
; t84 [ 676ULL ] = X [ 211ULL ] * - 1000.0 ; t84 [ 677ULL ] = - X [ 211ULL ]
; t84 [ 678ULL ] = - X [ 213ULL ] ; t84 [ 679ULL ] = - X [ 214ULL ] ; t84 [
680ULL ] = - X [ 215ULL ] ; t84 [ 681ULL ] = - X [ 213ULL ] ; t84 [ 682ULL ]
= X [ 27ULL ] ; t84 [ 683ULL ] = X [ 27ULL ] ; t84 [ 684ULL ] = X [ 218ULL ]
; t84 [ 685ULL ] = X [ 218ULL ] ; t84 [ 686ULL ] = X [ 219ULL ] ; t84 [
687ULL ] = X [ 220ULL ] * 0.1 ; t84 [ 688ULL ] = X [ 221ULL ] ; t84 [ 689ULL
] = X [ 222ULL ] ; t84 [ 690ULL ] = X [ 166ULL ] ; t84 [ 691ULL ] = X [ 24ULL
] * 0.1 ; t84 [ 692ULL ] = X [ 167ULL ] ; t84 [ 693ULL ] = X [ 168ULL ] ; t84
[ 694ULL ] = X [ 34ULL ] ; t84 [ 695ULL ] = X [ 226ULL ] ; t84 [ 696ULL ] = X
[ 33ULL ] ; t84 [ 697ULL ] = X [ 223ULL ] ; t84 [ 698ULL ] = X [ 31ULL ] -
273.15 ; t84 [ 699ULL ] = - X [ 213ULL ] ; t84 [ 700ULL ] = X [ 224ULL ] *
0.1 ; t84 [ 701ULL ] = X [ 32ULL ] * 0.1 ; t84 [ 702ULL ] = X [ 225ULL ] ;
t84 [ 703ULL ] = X [ 227ULL ] ; t84 [ 704ULL ] = - X [ 183ULL ] ; t84 [
705ULL ] = X [ 228ULL ] * 0.1 ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) {
t84 [ t127 + 706ULL ] = t89 [ t127 ] ; } t84 [ 714ULL ] = X [ 218ULL ] ; t84
[ 715ULL ] = X [ 229ULL ] ; t84 [ 716ULL ] = - X [ 211ULL ] ; t84 [ 717ULL ]
= - X [ 179ULL ] ; t84 [ 718ULL ] = 0.0 ; t84 [ 719ULL ] = 0.0 ; t84 [ 720ULL
] = X [ 230ULL ] ; t84 [ 721ULL ] = X [ 31ULL ] ; t84 [ 722ULL ] = X [ 34ULL
] ; t84 [ 723ULL ] = X [ 33ULL ] ; t84 [ 724ULL ] = t147 ; t84 [ 725ULL ] = X
[ 219ULL ] ; t84 [ 726ULL ] = X [ 220ULL ] * 0.1 ; t84 [ 727ULL ] = X [
221ULL ] ; t84 [ 728ULL ] = X [ 222ULL ] ; t84 [ 729ULL ] = - X [ 211ULL ] ;
t84 [ 730ULL ] = X [ 231ULL ] ; t84 [ 731ULL ] = - X [ 213ULL ] ; t84 [
732ULL ] = - X [ 214ULL ] ; t84 [ 733ULL ] = - X [ 215ULL ] ; t84 [ 734ULL ]
= X [ 232ULL ] ; t84 [ 735ULL ] = X [ 233ULL ] ; t84 [ 736ULL ] = X [ 166ULL
] ; t84 [ 737ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 738ULL ] = X [ 167ULL ] ; t84
[ 739ULL ] = X [ 168ULL ] ; t84 [ 740ULL ] = - X [ 179ULL ] ; t84 [ 741ULL ]
= X [ 234ULL ] ; t84 [ 742ULL ] = - X [ 183ULL ] ; t84 [ 743ULL ] = - X [
184ULL ] ; t84 [ 744ULL ] = - X [ 185ULL ] ; t84 [ 745ULL ] = X [ 235ULL ] ;
t84 [ 746ULL ] = X [ 236ULL ] ; t84 [ 747ULL ] = - X [ 214ULL ] ; t84 [
748ULL ] = - X [ 184ULL ] ; t84 [ 749ULL ] = 0.0 ; t84 [ 750ULL ] = 0.0 ; t84
[ 751ULL ] = - X [ 215ULL ] ; t84 [ 752ULL ] = - X [ 185ULL ] ; t84 [ 753ULL
] = X [ 204ULL ] ; t84 [ 754ULL ] = X [ 28ULL ] * 0.1 ; t84 [ 755ULL ] = X [
205ULL ] ; t84 [ 756ULL ] = X [ 206ULL ] ; t84 [ 757ULL ] = 0.0 ; t84 [
758ULL ] = 0.0 ; t84 [ 759ULL ] = 0.0 ; t84 [ 760ULL ] = 0.0 ; t84 [ 761ULL ]
= X [ 219ULL ] ; t84 [ 762ULL ] = X [ 220ULL ] * 0.1 ; t84 [ 763ULL ] = X [
221ULL ] ; t84 [ 764ULL ] = X [ 222ULL ] ; t84 [ 765ULL ] =
0.040000000000000008 ; t84 [ 766ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 * 1.0E+6 ; t84
[ 767ULL ] = t149 ; t84 [ 768ULL ] = 0.040000000000000008 ; t84 [ 769ULL ] =
0.005000000000000001 ; t84 [ 770ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 * -
125000.03125000779 ; t84 [ 771ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 * 1.0E+6 ; t84
[ 772ULL ] = t149 ; t84 [ 773ULL ] = t149 * 7.8539816339744827E-5 ; t84 [
774ULL ] = X [ 220ULL ] * 99999.999999999985 ; t84 [ 775ULL ] = ( t151 -
0.05000000000000001 ) * 0.1 ; t84 [ 776ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V0 * -
125000.03125000779 ; t84 [ 777ULL ] = t151 * 0.1 ; t84 [ 778ULL ] =
0.005000000000000001 ; t84 [ 779ULL ] = ( t151 - 0.05000000000000001 ) * 0.1
; t84 [ 780ULL ] = X [ 219ULL ] ; t84 [ 781ULL ] = X [ 220ULL ] * 0.1 ; t84 [
782ULL ] = X [ 221ULL ] ; t84 [ 783ULL ] = X [ 222ULL ] ; t84 [ 784ULL ] =
0.0 ; t84 [ 785ULL ] = 0.0 ; t84 [ 786ULL ] = 0.0 ; t84 [ 787ULL ] = 0.0 ;
t84 [ 788ULL ] = X [ 220ULL ] * 99999.999999999985 ; t84 [ 789ULL ] = X [
219ULL ] ; t84 [ 790ULL ] = X [ 204ULL ] ; t84 [ 791ULL ] = X [ 28ULL ] * 0.1
; t84 [ 792ULL ] = X [ 205ULL ] ; t84 [ 793ULL ] = X [ 206ULL ] ; t84 [
794ULL ] = t149 * 7.8539816339744827E-5 ; t84 [ 795ULL ] = X [ 219ULL ] ; t84
[ 796ULL ] = X [ 220ULL ] * 0.1 ; t84 [ 797ULL ] = X [ 221ULL ] ; t84 [
798ULL ] = X [ 222ULL ] ; t84 [ 799ULL ] = - X [ 213ULL ] ; t84 [ 800ULL ] =
X [ 204ULL ] ; t84 [ 801ULL ] = X [ 28ULL ] * 0.1 ; t84 [ 802ULL ] = X [
205ULL ] ; t84 [ 803ULL ] = X [ 206ULL ] ; t84 [ 804ULL ] = - X [ 211ULL ] ;
t84 [ 805ULL ] = X [ 243ULL ] ; t84 [ 806ULL ] = - X [ 213ULL ] ; t84 [
807ULL ] = - X [ 214ULL ] ; t84 [ 808ULL ] = - X [ 215ULL ] ; t84 [ 809ULL ]
= X [ 240ULL ] ; t84 [ 810ULL ] = X [ 239ULL ] ; t84 [ 811ULL ] = X [ 237ULL
] ; t84 [ 812ULL ] = X [ 238ULL ] * 0.1 ; t84 [ 813ULL ] = X [ 241ULL ] ; t84
[ 814ULL ] = X [ 242ULL ] ; t84 [ 815ULL ] = - X [ 211ULL ] ; t84 [ 816ULL ]
= X [ 211ULL ] ; t84 [ 817ULL ] = X [ 219ULL ] ; t84 [ 818ULL ] = X [ 220ULL
] * 0.1 ; t84 [ 819ULL ] = X [ 221ULL ] ; t84 [ 820ULL ] = X [ 222ULL ] ; t84
[ 821ULL ] = X [ 211ULL ] ; t84 [ 822ULL ] = X [ 243ULL ] ; t84 [ 823ULL ] =
X [ 213ULL ] ; t84 [ 824ULL ] = X [ 214ULL ] ; t84 [ 825ULL ] = X [ 215ULL ]
; t84 [ 826ULL ] = X [ 240ULL ] ; t84 [ 827ULL ] = X [ 239ULL ] ; t84 [
828ULL ] = X [ 213ULL ] ; t84 [ 829ULL ] = - X [ 214ULL ] ; t84 [ 830ULL ] =
X [ 214ULL ] ; t84 [ 831ULL ] = - X [ 215ULL ] ; t84 [ 832ULL ] = X [ 215ULL
] ; t84 [ 833ULL ] = t151 * 0.1 ; t84 [ 834ULL ] = U_idx_3 ; t84 [ 835ULL ] =
X [ 244ULL ] ; t84 [ 836ULL ] = 0.101325 ; t84 [ 837ULL ] = X [ 245ULL ] ;
t84 [ 838ULL ] = X [ 246ULL ] ; t84 [ 839ULL ] = X [ 247ULL ] ; t84 [ 840ULL
] = X [ 248ULL ] ; t84 [ 841ULL ] = 0.5 ; t84 [ 842ULL ] = X [ 256ULL ] ; t84
[ 843ULL ] = X [ 255ULL ] ; t84 [ 844ULL ] = 293.15 ; t84 [ 845ULL ] = X [
244ULL ] ; t84 [ 846ULL ] = 0.101325 ; t84 [ 847ULL ] = X [ 245ULL ] ; t84 [
848ULL ] = X [ 246ULL ] ; t84 [ 849ULL ] = X [ 248ULL ] ; t84 [ 850ULL ] = X
[ 249ULL ] ; t84 [ 851ULL ] = X [ 250ULL ] ; t84 [ 852ULL ] = X [ 251ULL ] ;
t84 [ 853ULL ] = X [ 252ULL ] ; t84 [ 854ULL ] = X [ 253ULL ] ; t84 [ 855ULL
] = X [ 254ULL ] ; t84 [ 856ULL ] = X [ 250ULL ] ; t84 [ 857ULL ] = X [
251ULL ] ; t84 [ 858ULL ] = X [ 252ULL ] ; t84 [ 859ULL ] = 0.101325 ; t84 [
860ULL ] = 0.21 ; t84 [ 861ULL ] = X [ 257ULL ] ; t84 [ 862ULL ] = X [ 258ULL
] ; t84 [ 863ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 864ULL ] = X [ 259ULL ] ; t84
[ 865ULL ] = X [ 260ULL ] ; t84 [ 866ULL ] = X [ 244ULL ] ; t84 [ 867ULL ] =
0.101325 ; t84 [ 868ULL ] = X [ 245ULL ] ; t84 [ 869ULL ] = X [ 246ULL ] ;
t84 [ 870ULL ] = X [ 258ULL ] ; t84 [ 871ULL ] = X [ 35ULL ] * 0.1 ; t84 [
872ULL ] = X [ 259ULL ] ; t84 [ 873ULL ] = X [ 260ULL ] ; t84 [ 874ULL ] = X
[ 262ULL ] ; t84 [ 875ULL ] = X [ 265ULL ] ; t84 [ 876ULL ] = X [ 244ULL ] ;
t84 [ 877ULL ] = 0.101325 ; t84 [ 878ULL ] = X [ 245ULL ] ; t84 [ 879ULL ] =
X [ 246ULL ] ; t84 [ 880ULL ] = - X [ 248ULL ] ; t84 [ 881ULL ] = X [ 266ULL
] ; t84 [ 882ULL ] = - X [ 250ULL ] ; t84 [ 883ULL ] = - X [ 251ULL ] ; t84 [
884ULL ] = - X [ 252ULL ] ; t84 [ 885ULL ] = X [ 267ULL ] ; t84 [ 886ULL ] =
X [ 268ULL ] ; t84 [ 887ULL ] = - X [ 250ULL ] ; t84 [ 888ULL ] = X [ 263ULL
] ; t84 [ 889ULL ] = X [ 264ULL ] ; t84 [ 890ULL ] = X [ 258ULL ] ; t84 [
891ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 892ULL ] = X [ 259ULL ] ; t84 [ 893ULL ]
= X [ 260ULL ] ; t84 [ 894ULL ] = X [ 261ULL ] ; t84 [ 895ULL ] = X [ 266ULL
] ; t84 [ 896ULL ] = X [ 250ULL ] ; t84 [ 897ULL ] = X [ 251ULL ] ; t84 [
898ULL ] = X [ 252ULL ] ; t84 [ 899ULL ] = X [ 267ULL ] ; t84 [ 900ULL ] = X
[ 268ULL ] ; t84 [ 901ULL ] = X [ 250ULL ] ; t84 [ 902ULL ] = - X [ 250ULL ]
; t84 [ 903ULL ] = - X [ 248ULL ] ; t84 [ 904ULL ] = X [ 261ULL ] ; t84 [
905ULL ] = - X [ 251ULL ] ; t84 [ 906ULL ] = X [ 251ULL ] ; t84 [ 907ULL ] =
- X [ 252ULL ] ; t84 [ 908ULL ] = X [ 252ULL ] ; t84 [ 909ULL ] = X [ 258ULL
] ; t84 [ 910ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 911ULL ] = X [ 259ULL ] ; t84
[ 912ULL ] = X [ 260ULL ] ; t84 [ 913ULL ] = X [ 269ULL ] ; t84 [ 914ULL ] =
X [ 35ULL ] * 0.1 ; t84 [ 915ULL ] = X [ 270ULL ] ; t84 [ 916ULL ] = X [
271ULL ] ; t84 [ 917ULL ] = X [ 36ULL ] ; t84 [ 918ULL ] = X [ 35ULL ] * 0.1
; t84 [ 919ULL ] = X [ 37ULL ] ; t84 [ 920ULL ] = X [ 38ULL ] ; t84 [ 921ULL
] = X [ 36ULL ] ; t84 [ 922ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 923ULL ] = X [
37ULL ] ; t84 [ 924ULL ] = X [ 38ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ;
t127 ++ ) { t84 [ t127 + 925ULL ] = t91 [ t127 ] ; } t84 [ 933ULL ] = X [
36ULL ] ; t84 [ 934ULL ] = X [ 272ULL ] ; t84 [ 935ULL ] = - X [ 261ULL ] ;
t84 [ 936ULL ] = X [ 276ULL ] ; t84 [ 937ULL ] = 0.0 ; t84 [ 938ULL ] = 0.0 ;
t84 [ 939ULL ] = 0.0 ; t84 [ 940ULL ] = X [ 36ULL ] - 273.15 ; t84 [ 941ULL ]
= X [ 37ULL ] ; t84 [ 942ULL ] = X [ 274ULL ] ; t84 [ 943ULL ] = X [ 38ULL ]
; t84 [ 944ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 945ULL ] = 0.0 ; t84 [ 946ULL ]
= X [ 273ULL ] ; t84 [ 947ULL ] = X [ 36ULL ] ; t84 [ 948ULL ] = X [ 37ULL ]
; t84 [ 949ULL ] = X [ 38ULL ] ; t84 [ 950ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_W ; t84 [ 951ULL
] = X [ 258ULL ] ; t84 [ 952ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 953ULL ] = X [
259ULL ] ; t84 [ 954ULL ] = X [ 260ULL ] ; t84 [ 955ULL ] = - X [ 261ULL ] ;
t84 [ 956ULL ] = X [ 277ULL ] ; t84 [ 957ULL ] = - X [ 250ULL ] ; t84 [
958ULL ] = - X [ 251ULL ] ; t84 [ 959ULL ] = - X [ 252ULL ] ; t84 [ 960ULL ]
= X [ 278ULL ] ; t84 [ 961ULL ] = X [ 279ULL ] ; t84 [ 962ULL ] = X [ 269ULL
] ; t84 [ 963ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 964ULL ] = X [ 270ULL ] ; t84
[ 965ULL ] = X [ 271ULL ] ; t84 [ 966ULL ] = X [ 276ULL ] ; t84 [ 967ULL ] =
X [ 280ULL ] ; t84 [ 968ULL ] = X [ 281ULL ] ; t84 [ 969ULL ] = X [ 282ULL ]
; t84 [ 970ULL ] = X [ 283ULL ] ; t84 [ 971ULL ] = X [ 284ULL ] ; t84 [
972ULL ] = X [ 285ULL ] ; t84 [ 973ULL ] = - X [ 250ULL ] ; t84 [ 974ULL ] =
X [ 281ULL ] ; t84 [ 975ULL ] = 0.0 ; t84 [ 976ULL ] = 0.0 ; t84 [ 977ULL ] =
- X [ 251ULL ] ; t84 [ 978ULL ] = X [ 282ULL ] ; t84 [ 979ULL ] = 0.0 ; t84 [
980ULL ] = 0.0 ; t84 [ 981ULL ] = 0.0 ; t84 [ 982ULL ] = 0.0 ; t84 [ 983ULL ]
= - X [ 252ULL ] ; t84 [ 984ULL ] = X [ 283ULL ] ; t84 [ 985ULL ] = 0.0 ; t84
[ 986ULL ] = 0.0 ; t84 [ 987ULL ] = X [ 275ULL ] ; t84 [ 988ULL ] = X [
269ULL ] ; t84 [ 989ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 990ULL ] = X [ 270ULL ]
; t84 [ 991ULL ] = X [ 271ULL ] ; t84 [ 992ULL ] = X [ 269ULL ] ; t84 [
993ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 994ULL ] = X [ 270ULL ] ; t84 [ 995ULL ]
= X [ 271ULL ] ; t84 [ 996ULL ] = - X [ 281ULL ] ; t84 [ 997ULL ] = - X [
282ULL ] ; t84 [ 998ULL ] = - X [ 283ULL ] ; t84 [ 999ULL ] = X [ 276ULL ] *
- 1000.0 ; t84 [ 1000ULL ] = - X [ 276ULL ] ; t84 [ 1001ULL ] = - X [ 281ULL
] ; t84 [ 1002ULL ] = - X [ 282ULL ] ; t84 [ 1003ULL ] = - X [ 283ULL ] ; t84
[ 1004ULL ] = - X [ 281ULL ] ; t84 [ 1005ULL ] = U_idx_4 ; t84 [ 1006ULL ] =
t156 * 9.5492965855137211 ; t84 [ 1007ULL ] = X [ 269ULL ] ; t84 [ 1008ULL ]
= X [ 35ULL ] * 0.1 ; t84 [ 1009ULL ] = X [ 270ULL ] ; t84 [ 1010ULL ] = X [
271ULL ] ; t84 [ 1011ULL ] = X [ 36ULL ] ; t84 [ 1012ULL ] = X [ 36ULL ] ;
t84 [ 1013ULL ] = X [ 258ULL ] ; t84 [ 1014ULL ] = X [ 35ULL ] * 0.1 ; t84 [
1015ULL ] = X [ 259ULL ] ; t84 [ 1016ULL ] = X [ 260ULL ] ; t84 [ 1017ULL ] =
X [ 244ULL ] ; t84 [ 1018ULL ] = 0.101325 ; t84 [ 1019ULL ] = X [ 245ULL ] ;
t84 [ 1020ULL ] = X [ 246ULL ] ; t84 [ 1021ULL ] = 0.9 ; t84 [ 1022ULL ] = X
[ 258ULL ] ; t84 [ 1023ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 1024ULL ] = X [
259ULL ] ; t84 [ 1025ULL ] = X [ 260ULL ] ; t84 [ 1026ULL ] = t158 * 1000.0 ;
t84 [ 1027ULL ] = 0.9 ; t84 [ 1028ULL ] = t158 * 1111.1111111111111 ; t84 [
1029ULL ] = t158 * 1111.1111111111111 ; t84 [ 1030ULL ] = - ( X [ 35ULL ] -
1.01325 ) * 99999.999999999985 ; t84 [ 1031ULL ] = X [ 286ULL ] * 1.0E-6 ;
t84 [ 1032ULL ] = t158 * 1000.0 ; t84 [ 1033ULL ] = X [ 244ULL ] ; t84 [
1034ULL ] = 0.101325 ; t84 [ 1035ULL ] = X [ 245ULL ] ; t84 [ 1036ULL ] = X [
246ULL ] ; t84 [ 1037ULL ] = X [ 258ULL ] ; t84 [ 1038ULL ] = X [ 35ULL ] *
0.1 ; t84 [ 1039ULL ] = X [ 259ULL ] ; t84 [ 1040ULL ] = X [ 260ULL ] ; t84 [
1041ULL ] = - ( X [ 35ULL ] - 1.01325 ) * 99999.999999999985 ; t84 [ 1042ULL
] = X [ 244ULL ] - X [ 258ULL ] ; t84 [ 1043ULL ] = X [ 258ULL ] ; t84 [
1044ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 1045ULL ] = X [ 259ULL ] ; t84 [
1046ULL ] = X [ 260ULL ] ; t84 [ 1047ULL ] = X [ 258ULL ] ; t84 [ 1048ULL ] =
X [ 35ULL ] * 0.1 ; t84 [ 1049ULL ] = X [ 259ULL ] ; t84 [ 1050ULL ] = X [
260ULL ] ; t84 [ 1051ULL ] = - X [ 261ULL ] ; t84 [ 1052ULL ] = X [ 286ULL ]
* 1.0E-6 ; t84 [ 1053ULL ] = - X [ 250ULL ] ; t84 [ 1054ULL ] = - X [ 251ULL
] ; t84 [ 1055ULL ] = - X [ 252ULL ] ; t84 [ 1056ULL ] = U_idx_4 ; t84 [
1057ULL ] = 0.0 ; t84 [ 1058ULL ] = 0.0 ; t84 [ 1059ULL ] = 0.0 ; t84 [
1060ULL ] = 0.0 ; t84 [ 1061ULL ] = 0.0 ; t84 [ 1062ULL ] = 0.0 ; t84 [
1063ULL ] = 0.0 ; t84 [ 1064ULL ] = 0.0 ; t84 [ 1065ULL ] = X [ 287ULL ] ;
t84 [ 1066ULL ] = t160 * 0.99999999999999978 / 0.99999999999999978 *
9.5492965855137211 ; t84 [ 1067ULL ] = X [ 288ULL ] ; t84 [ 1068ULL ] = X [
35ULL ] * 99999.999999999985 ; t84 [ 1069ULL ] = 101324.99999999999 ; t84 [
1070ULL ] = X [ 287ULL ] ; t84 [ 1071ULL ] = X [ 289ULL ] ; t84 [ 1072ULL ] =
X [ 290ULL ] ; t84 [ 1073ULL ] = - X [ 250ULL ] ; t84 [ 1074ULL ] = 1.0 ; t84
[ 1075ULL ] = X [ 288ULL ] ; t84 [ 1076ULL ] = X [ 289ULL ] ; t84 [ 1077ULL ]
= X [ 244ULL ] ; t84 [ 1078ULL ] = 0.101325 ; t84 [ 1079ULL ] = X [ 245ULL ]
; t84 [ 1080ULL ] = X [ 246ULL ] ; t84 [ 1081ULL ] = 0.0 ; t84 [ 1082ULL ] =
0.0 ; t84 [ 1083ULL ] = 0.0 ; t84 [ 1084ULL ] = 0.0 ; t84 [ 1085ULL ] =
101324.99999999999 ; t84 [ 1086ULL ] = X [ 244ULL ] ; t84 [ 1087ULL ] = X [
258ULL ] ; t84 [ 1088ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 1089ULL ] = X [ 259ULL
] ; t84 [ 1090ULL ] = X [ 260ULL ] ; t84 [ 1091ULL ] = 0.0 ; t84 [ 1092ULL ]
= 0.0 ; t84 [ 1093ULL ] = 0.0 ; t84 [ 1094ULL ] = 0.0 ; t84 [ 1095ULL ] = X [
35ULL ] * 99999.999999999985 ; t84 [ 1096ULL ] = X [ 258ULL ] ; t84 [ 1097ULL
] = X [ 244ULL ] ; t84 [ 1098ULL ] = 0.101325 ; t84 [ 1099ULL ] = X [ 245ULL
] ; t84 [ 1100ULL ] = X [ 246ULL ] ; t84 [ 1101ULL ] = - X [ 250ULL ] ; t84 [
1102ULL ] = X [ 258ULL ] ; t84 [ 1103ULL ] = X [ 35ULL ] * 0.1 ; t84 [
1104ULL ] = X [ 259ULL ] ; t84 [ 1105ULL ] = X [ 260ULL ] ; t84 [ 1106ULL ] =
t160 * 9.5492965855137211 ; t84 [ 1107ULL ] = X [ 244ULL ] *
0.00347041471455839 ; t84 [ 1108ULL ] = X [ 290ULL ] ; t84 [ 1109ULL ] =
101324.99999999999 ; t84 [ 1110ULL ] = 1.0 ; t84 [ 1111ULL ] = X [ 244ULL ] ;
t84 [ 1112ULL ] = X [ 244ULL ] * 0.00347041471455839 ; t84 [ 1113ULL ] = X [
169ULL ] ; t84 [ 1114ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 1115ULL ] = X [ 170ULL
] ; t84 [ 1116ULL ] = X [ 171ULL ] ; t84 [ 1117ULL ] = X [ 291ULL ] ; t84 [
1118ULL ] = X [ 292ULL ] * 0.1 ; t84 [ 1119ULL ] = X [ 293ULL ] ; t84 [
1120ULL ] = X [ 294ULL ] ; t84 [ 1121ULL ] = U_idx_5 ; t84 [ 1122ULL ] = X [
295ULL ] ; t84 [ 1123ULL ] = X [ 39ULL ] ; t84 [ 1124ULL ] = X [ 40ULL ] ;
t84 [ 1125ULL ] = X [ 41ULL ] ; t84 [ 1126ULL ] = U_idx_6 ; t84 [ 1127ULL ] =
- U_idx_5 ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 +
1128ULL ] = t93 [ t127 ] ; } t84 [ 1136ULL ] = X [ 298ULL ] ; t84 [ 1137ULL ]
= X [ 300ULL ] * 1.0E-5 * 99999.999999999985 ; t84 [ 1138ULL ] = X [ 39ULL ]
; t84 [ 1139ULL ] = X [ 297ULL ] ; t84 [ 1140ULL ] = X [ 297ULL ] ; t84 [
1141ULL ] = X [ 301ULL ] ; t84 [ 1142ULL ] = X [ 301ULL ] ; t84 [ 1143ULL ] =
X [ 169ULL ] ; t84 [ 1144ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 1145ULL ] = X [
170ULL ] ; t84 [ 1146ULL ] = X [ 171ULL ] ; t84 [ 1147ULL ] = X [ 291ULL ] ;
t84 [ 1148ULL ] = X [ 292ULL ] * 0.1 ; t84 [ 1149ULL ] = X [ 293ULL ] ; t84 [
1150ULL ] = X [ 294ULL ] ; t84 [ 1151ULL ] = X [ 40ULL ] ; t84 [ 1152ULL ] =
X [ 298ULL ] ; t84 [ 1153ULL ] = X [ 41ULL ] ; t84 [ 1154ULL ] = X [ 302ULL ]
; t84 [ 1155ULL ] = X [ 39ULL ] - 273.15 ; t84 [ 1156ULL ] = - X [ 192ULL ] ;
t84 [ 1157ULL ] = X [ 303ULL ] * 0.1 ; t84 [ 1158ULL ] = X [ 42ULL ] * 0.1 ;
t84 [ 1159ULL ] = X [ 299ULL ] ; t84 [ 1160ULL ] = X [ 305ULL ] ; t84 [
1161ULL ] = X [ 304ULL ] ; t84 [ 1162ULL ] = X [ 306ULL ] * 0.1 ; for ( t127
= 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1163ULL ] = t93 [ t127 ] ; }
t84 [ 1171ULL ] = X [ 301ULL ] ; t84 [ 1172ULL ] = X [ 296ULL ] ; t84 [
1173ULL ] = - X [ 181ULL ] ; t84 [ 1174ULL ] = X [ 307ULL ] ; t84 [ 1175ULL ]
= - X [ 295ULL ] ; t84 [ 1176ULL ] = 0.0 ; t84 [ 1177ULL ] = X [ 297ULL ] ;
t84 [ 1178ULL ] = X [ 39ULL ] ; t84 [ 1179ULL ] = X [ 40ULL ] ; t84 [ 1180ULL
] = X [ 41ULL ] ; t84 [ 1181ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ; t84 [ 1182ULL ] = X [
169ULL ] ; t84 [ 1183ULL ] = X [ 24ULL ] * 0.1 ; t84 [ 1184ULL ] = X [ 170ULL
] ; t84 [ 1185ULL ] = X [ 171ULL ] ; t84 [ 1186ULL ] = - X [ 181ULL ] ; t84 [
1187ULL ] = X [ 308ULL ] ; t84 [ 1188ULL ] = - X [ 192ULL ] ; t84 [ 1189ULL ]
= - X [ 193ULL ] ; t84 [ 1190ULL ] = - X [ 194ULL ] ; t84 [ 1191ULL ] = X [
309ULL ] ; t84 [ 1192ULL ] = X [ 310ULL ] ; t84 [ 1193ULL ] = X [ 291ULL ] ;
t84 [ 1194ULL ] = X [ 292ULL ] * 0.1 ; t84 [ 1195ULL ] = X [ 293ULL ] ; t84 [
1196ULL ] = X [ 294ULL ] ; t84 [ 1197ULL ] = X [ 307ULL ] ; t84 [ 1198ULL ] =
X [ 311ULL ] ; t84 [ 1199ULL ] = X [ 304ULL ] ; t84 [ 1200ULL ] = X [ 312ULL
] ; t84 [ 1201ULL ] = X [ 313ULL ] ; t84 [ 1202ULL ] = X [ 314ULL ] ; t84 [
1203ULL ] = X [ 315ULL ] ; t84 [ 1204ULL ] = - X [ 193ULL ] ; t84 [ 1205ULL ]
= X [ 312ULL ] ; t84 [ 1206ULL ] = 0.0 ; t84 [ 1207ULL ] = U_idx_5 ; t84 [
1208ULL ] = - X [ 194ULL ] ; t84 [ 1209ULL ] = X [ 313ULL ] ; t84 [ 1210ULL ]
= U_idx_6 ; t84 [ 1211ULL ] = U_idx_5 ; t84 [ 1212ULL ] = X [ 68ULL ] ; t84 [
1213ULL ] = X [ 69ULL ] * 0.1 ; t84 [ 1214ULL ] = X [ 70ULL ] ; t84 [ 1215ULL
] = X [ 71ULL ] ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 +
1216ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t127
] ; } for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1224ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t127 ] ; } t84 [
1232ULL ] = 323.15 ; t84 [ 1233ULL ] = X [ 291ULL ] ; t84 [ 1234ULL ] = X [
292ULL ] * 0.1 ; t84 [ 1235ULL ] = X [ 293ULL ] ; t84 [ 1236ULL ] = X [
294ULL ] ; t84 [ 1237ULL ] = X [ 68ULL ] ; t84 [ 1238ULL ] = X [ 69ULL ] *
0.1 ; t84 [ 1239ULL ] = X [ 70ULL ] ; t84 [ 1240ULL ] = X [ 71ULL ] ; t84 [
1241ULL ] = X [ 7ULL ] ; t84 [ 1242ULL ] = X [ 76ULL ] ; t84 [ 1243ULL ] = X
[ 8ULL ] ; t84 [ 1244ULL ] = X [ 316ULL ] ; t84 [ 1245ULL ] = X [ 6ULL ] -
273.15 ; t84 [ 1246ULL ] = - X [ 304ULL ] ; t84 [ 1247ULL ] = X [ 317ULL ] *
0.1 ; t84 [ 1248ULL ] = X [ 43ULL ] * 0.1 ; t84 [ 1249ULL ] = X [ 77ULL ] ;
t84 [ 1250ULL ] = X [ 319ULL ] ; t84 [ 1251ULL ] = X [ 318ULL ] ; t84 [
1252ULL ] = X [ 320ULL ] * 0.1 ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ )
{ t84 [ t127 + 1253ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t127 ] ; } t84 [
1261ULL ] = 323.15 ; t84 [ 1262ULL ] = X [ 80ULL ] ; t84 [ 1263ULL ] = - X [
307ULL ] ; t84 [ 1264ULL ] = X [ 321ULL ] ; t84 [ 1265ULL ] = 0.0 ; t84 [
1266ULL ] = X [ 111ULL ] ; t84 [ 1267ULL ] = X [ 79ULL ] ; t84 [ 1268ULL ] =
X [ 6ULL ] ; t84 [ 1269ULL ] = X [ 7ULL ] ; t84 [ 1270ULL ] = X [ 8ULL ] ;
t84 [ 1271ULL ] = t169 ; t84 [ 1272ULL ] = X [ 291ULL ] ; t84 [ 1273ULL ] = X
[ 292ULL ] * 0.1 ; t84 [ 1274ULL ] = X [ 293ULL ] ; t84 [ 1275ULL ] = X [
294ULL ] ; t84 [ 1276ULL ] = - X [ 307ULL ] ; t84 [ 1277ULL ] = X [ 322ULL ]
; t84 [ 1278ULL ] = - X [ 304ULL ] ; t84 [ 1279ULL ] = - X [ 312ULL ] ; t84 [
1280ULL ] = - X [ 313ULL ] ; t84 [ 1281ULL ] = X [ 323ULL ] ; t84 [ 1282ULL ]
= X [ 324ULL ] ; t84 [ 1283ULL ] = X [ 68ULL ] ; t84 [ 1284ULL ] = X [ 69ULL
] * 0.1 ; t84 [ 1285ULL ] = X [ 70ULL ] ; t84 [ 1286ULL ] = X [ 71ULL ] ; t84
[ 1287ULL ] = X [ 321ULL ] ; t84 [ 1288ULL ] = X [ 325ULL ] ; t84 [ 1289ULL ]
= X [ 318ULL ] ; t84 [ 1290ULL ] = X [ 326ULL ] ; t84 [ 1291ULL ] = X [
327ULL ] ; t84 [ 1292ULL ] = X [ 328ULL ] ; t84 [ 1293ULL ] = X [ 329ULL ] ;
t84 [ 1294ULL ] = - X [ 312ULL ] ; t84 [ 1295ULL ] = X [ 326ULL ] ; t84 [
1296ULL ] = 0.0 ; t84 [ 1297ULL ] = 0.0 ; t84 [ 1298ULL ] = - X [ 313ULL ] ;
t84 [ 1299ULL ] = X [ 327ULL ] ; t84 [ 1300ULL ] = X [ 68ULL ] ; t84 [
1301ULL ] = X [ 69ULL ] * 0.1 ; t84 [ 1302ULL ] = X [ 70ULL ] ; t84 [ 1303ULL
] = X [ 71ULL ] ; t84 [ 1304ULL ] = X [ 115ULL ] ; t84 [ 1305ULL ] = X [
116ULL ] * 0.1 ; t84 [ 1306ULL ] = X [ 117ULL ] ; t84 [ 1307ULL ] = X [
118ULL ] ; t84 [ 1308ULL ] = X [ 10ULL ] ; t84 [ 1309ULL ] = X [ 81ULL ] ;
t84 [ 1310ULL ] = X [ 11ULL ] ; t84 [ 1311ULL ] = X [ 330ULL ] ; t84 [
1312ULL ] = X [ 9ULL ] - 273.15 ; t84 [ 1313ULL ] = - X [ 318ULL ] ; t84 [
1314ULL ] = X [ 331ULL ] * 0.1 ; t84 [ 1315ULL ] = X [ 44ULL ] * 0.1 ; t84 [
1316ULL ] = X [ 82ULL ] ; t84 [ 1317ULL ] = X [ 332ULL ] ; t84 [ 1318ULL ] =
X [ 138ULL ] ; t84 [ 1319ULL ] = X [ 333ULL ] * 0.1 ; for ( t127 = 0ULL ;
t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1320ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t127 ] ; } t84 [
1328ULL ] = 323.15 ; t84 [ 1329ULL ] = X [ 85ULL ] ; t84 [ 1330ULL ] = - X [
321ULL ] ; t84 [ 1331ULL ] = X [ 148ULL ] ; t84 [ 1332ULL ] = - X [ 103ULL ]
- X [ 106ULL ] ; t84 [ 1333ULL ] = X [ 112ULL ] ; t84 [ 1334ULL ] = X [ 84ULL
] ; t84 [ 1335ULL ] = X [ 9ULL ] ; t84 [ 1336ULL ] = X [ 10ULL ] ; t84 [
1337ULL ] = X [ 11ULL ] ; t84 [ 1338ULL ] = t172 ; t84 [ 1339ULL ] = X [
68ULL ] ; t84 [ 1340ULL ] = X [ 69ULL ] * 0.1 ; t84 [ 1341ULL ] = X [ 70ULL ]
; t84 [ 1342ULL ] = X [ 71ULL ] ; t84 [ 1343ULL ] = - X [ 321ULL ] ; t84 [
1344ULL ] = X [ 334ULL ] ; t84 [ 1345ULL ] = - X [ 318ULL ] ; t84 [ 1346ULL ]
= - X [ 326ULL ] ; t84 [ 1347ULL ] = - X [ 327ULL ] ; t84 [ 1348ULL ] = X [
335ULL ] ; t84 [ 1349ULL ] = X [ 336ULL ] ; t84 [ 1350ULL ] = X [ 115ULL ] ;
t84 [ 1351ULL ] = X [ 116ULL ] * 0.1 ; t84 [ 1352ULL ] = X [ 117ULL ] ; t84 [
1353ULL ] = X [ 118ULL ] ; t84 [ 1354ULL ] = X [ 148ULL ] ; t84 [ 1355ULL ] =
X [ 337ULL ] ; t84 [ 1356ULL ] = X [ 138ULL ] ; t84 [ 1357ULL ] = X [ 151ULL
] ; t84 [ 1358ULL ] = X [ 153ULL ] ; t84 [ 1359ULL ] = X [ 338ULL ] ; t84 [
1360ULL ] = X [ 339ULL ] ; t84 [ 1361ULL ] = - X [ 326ULL ] ; t84 [ 1362ULL ]
= X [ 151ULL ] ; t84 [ 1363ULL ] = X [ 102ULL ] ; t84 [ 1364ULL ] = X [
108ULL ] ; t84 [ 1365ULL ] = - X [ 327ULL ] ; t84 [ 1366ULL ] = X [ 153ULL ]
; t84 [ 1367ULL ] = X [ 9ULL ] ; t84 [ 1368ULL ] = X [ 10ULL ] ; t84 [
1369ULL ] = X [ 11ULL ] ; t84 [ 1370ULL ] = X [ 291ULL ] ; t84 [ 1371ULL ] =
X [ 292ULL ] * 0.1 ; t84 [ 1372ULL ] = X [ 293ULL ] ; t84 [ 1373ULL ] = X [
294ULL ] ; t84 [ 1374ULL ] = X [ 115ULL ] ; t84 [ 1375ULL ] = X [ 116ULL ] *
0.1 ; t84 [ 1376ULL ] = X [ 117ULL ] ; t84 [ 1377ULL ] = X [ 118ULL ] ; t84 [
1378ULL ] = X [ 269ULL ] ; t84 [ 1379ULL ] = X [ 35ULL ] * 0.1 ; t84 [
1380ULL ] = X [ 270ULL ] ; t84 [ 1381ULL ] = X [ 271ULL ] ; t84 [ 1382ULL ] =
X [ 340ULL ] ; t84 [ 1383ULL ] = X [ 341ULL ] * 0.1 ; t84 [ 1384ULL ] = X [
342ULL ] ; t84 [ 1385ULL ] = X [ 343ULL ] ; t84 [ 1386ULL ] = U_idx_7 ; t84 [
1387ULL ] = X [ 344ULL ] ; t84 [ 1388ULL ] = X [ 45ULL ] ; t84 [ 1389ULL ] =
X [ 46ULL ] ; t84 [ 1390ULL ] = X [ 47ULL ] ; t84 [ 1391ULL ] = U_idx_8 ; t84
[ 1392ULL ] = - U_idx_7 ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [
t127 + 1393ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ t127 ] ; }
t84 [ 1401ULL ] = X [ 347ULL ] ; t84 [ 1402ULL ] = X [ 349ULL ] * 1.0E-5 *
99999.999999999985 ; t84 [ 1403ULL ] = X [ 45ULL ] ; t84 [ 1404ULL ] = X [
346ULL ] ; t84 [ 1405ULL ] = X [ 346ULL ] ; t84 [ 1406ULL ] = X [ 350ULL ] ;
t84 [ 1407ULL ] = X [ 350ULL ] ; t84 [ 1408ULL ] = X [ 269ULL ] ; t84 [
1409ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 1410ULL ] = X [ 270ULL ] ; t84 [
1411ULL ] = X [ 271ULL ] ; t84 [ 1412ULL ] = X [ 340ULL ] ; t84 [ 1413ULL ] =
X [ 341ULL ] * 0.1 ; t84 [ 1414ULL ] = X [ 342ULL ] ; t84 [ 1415ULL ] = X [
343ULL ] ; t84 [ 1416ULL ] = X [ 46ULL ] ; t84 [ 1417ULL ] = X [ 347ULL ] ;
t84 [ 1418ULL ] = X [ 47ULL ] ; t84 [ 1419ULL ] = X [ 351ULL ] ; t84 [
1420ULL ] = X [ 45ULL ] - 273.15 ; t84 [ 1421ULL ] = - X [ 281ULL ] ; t84 [
1422ULL ] = X [ 352ULL ] * 0.1 ; t84 [ 1423ULL ] = X [ 48ULL ] * 0.1 ; t84 [
1424ULL ] = X [ 348ULL ] ; t84 [ 1425ULL ] = X [ 354ULL ] ; t84 [ 1426ULL ] =
X [ 353ULL ] ; t84 [ 1427ULL ] = X [ 355ULL ] * 0.1 ; for ( t127 = 0ULL ;
t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1428ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ t127 ] ; }
t84 [ 1436ULL ] = X [ 350ULL ] ; t84 [ 1437ULL ] = X [ 345ULL ] ; t84 [
1438ULL ] = - X [ 276ULL ] ; t84 [ 1439ULL ] = X [ 356ULL ] ; t84 [ 1440ULL ]
= - X [ 344ULL ] ; t84 [ 1441ULL ] = 0.0 ; t84 [ 1442ULL ] = X [ 346ULL ] ;
t84 [ 1443ULL ] = X [ 45ULL ] ; t84 [ 1444ULL ] = X [ 46ULL ] ; t84 [ 1445ULL
] = X [ 47ULL ] ; t84 [ 1446ULL ] = t181 ; t84 [ 1447ULL ] = X [ 269ULL ] ;
t84 [ 1448ULL ] = X [ 35ULL ] * 0.1 ; t84 [ 1449ULL ] = X [ 270ULL ] ; t84 [
1450ULL ] = X [ 271ULL ] ; t84 [ 1451ULL ] = - X [ 276ULL ] ; t84 [ 1452ULL ]
= X [ 357ULL ] ; t84 [ 1453ULL ] = - X [ 281ULL ] ; t84 [ 1454ULL ] = - X [
282ULL ] ; t84 [ 1455ULL ] = - X [ 283ULL ] ; t84 [ 1456ULL ] = X [ 358ULL ]
; t84 [ 1457ULL ] = X [ 359ULL ] ; t84 [ 1458ULL ] = X [ 340ULL ] ; t84 [
1459ULL ] = X [ 341ULL ] * 0.1 ; t84 [ 1460ULL ] = X [ 342ULL ] ; t84 [
1461ULL ] = X [ 343ULL ] ; t84 [ 1462ULL ] = X [ 356ULL ] ; t84 [ 1463ULL ] =
X [ 360ULL ] ; t84 [ 1464ULL ] = X [ 353ULL ] ; t84 [ 1465ULL ] = X [ 361ULL
] ; t84 [ 1466ULL ] = X [ 362ULL ] ; t84 [ 1467ULL ] = X [ 363ULL ] ; t84 [
1468ULL ] = X [ 364ULL ] ; t84 [ 1469ULL ] = - X [ 282ULL ] ; t84 [ 1470ULL ]
= X [ 361ULL ] ; t84 [ 1471ULL ] = 0.0 ; t84 [ 1472ULL ] = U_idx_7 ; t84 [
1473ULL ] = - X [ 283ULL ] ; t84 [ 1474ULL ] = X [ 362ULL ] ; t84 [ 1475ULL ]
= U_idx_8 ; t84 [ 1476ULL ] = U_idx_7 ; t84 [ 1477ULL ] = X [ 365ULL ] ; t84
[ 1478ULL ] = X [ 366ULL ] * 0.1 ; t84 [ 1479ULL ] = X [ 367ULL ] ; t84 [
1480ULL ] = X [ 368ULL ] ; t84 [ 1481ULL ] = X [ 369ULL ] ; t84 [ 1482ULL ] =
293.15 ; t84 [ 1483ULL ] = - 920.95788639984789 + t144 * 1000.0 ; t84 [
1484ULL ] = ( X [ 369ULL ] * 0.0031415926535897937 - 0.92095788639984788 ) *
318.30988618379064 ; t84 [ 1485ULL ] = 0.0 ; t84 [ 1486ULL ] = X [ 370ULL ] ;
t84 [ 1487ULL ] = 0.101325 ; t84 [ 1488ULL ] = X [ 371ULL ] ; t84 [ 1489ULL ]
= X [ 372ULL ] ; t84 [ 1490ULL ] = X [ 373ULL ] ; t84 [ 1491ULL ] = X [
374ULL ] ; t84 [ 1492ULL ] = 0.5 ; t84 [ 1493ULL ] = X [ 382ULL ] ; t84 [
1494ULL ] = X [ 381ULL ] ; t84 [ 1495ULL ] = 293.15 ; t84 [ 1496ULL ] = X [
370ULL ] ; t84 [ 1497ULL ] = 0.101325 ; t84 [ 1498ULL ] = X [ 371ULL ] ; t84
[ 1499ULL ] = X [ 372ULL ] ; t84 [ 1500ULL ] = X [ 374ULL ] ; t84 [ 1501ULL ]
= X [ 375ULL ] ; t84 [ 1502ULL ] = X [ 376ULL ] ; t84 [ 1503ULL ] = X [
377ULL ] ; t84 [ 1504ULL ] = X [ 378ULL ] ; t84 [ 1505ULL ] = X [ 379ULL ] ;
t84 [ 1506ULL ] = X [ 380ULL ] ; t84 [ 1507ULL ] = X [ 376ULL ] ; t84 [
1508ULL ] = X [ 377ULL ] ; t84 [ 1509ULL ] = X [ 378ULL ] ; t84 [ 1510ULL ] =
0.101325 ; t84 [ 1511ULL ] = 0.21 ; t84 [ 1512ULL ] = X [ 383ULL ] ; t84 [
1513ULL ] = 293.15 ; t84 [ 1514ULL ] = - 920.95788639984789 + t144 * 1000.0 ;
t84 [ 1515ULL ] = X [ 365ULL ] ; t84 [ 1516ULL ] = X [ 366ULL ] * 0.1 ; t84 [
1517ULL ] = X [ 367ULL ] ; t84 [ 1518ULL ] = X [ 368ULL ] ; t84 [ 1519ULL ] =
X [ 384ULL ] ; t84 [ 1520ULL ] = t183 * 0.1 ; t84 [ 1521ULL ] = X [ 386ULL ]
; t84 [ 1522ULL ] = X [ 387ULL ] ; t84 [ 1523ULL ] = X [ 52ULL ] ; t84 [
1524ULL ] = X [ 392ULL ] ; t84 [ 1525ULL ] = X [ 51ULL ] ; t84 [ 1526ULL ] =
X [ 389ULL ] ; t84 [ 1527ULL ] = X [ 49ULL ] - 273.15 ; t84 [ 1528ULL ] = X [
388ULL ] ; t84 [ 1529ULL ] = X [ 390ULL ] * 0.1 ; t84 [ 1530ULL ] = X [ 50ULL
] * 0.1 ; t84 [ 1531ULL ] = X [ 391ULL ] ; t84 [ 1532ULL ] = X [ 393ULL ] ;
t84 [ 1533ULL ] = - X [ 376ULL ] ; t84 [ 1534ULL ] = X [ 394ULL ] * 0.1 ; for
( t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1535ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_F [ t127 ] ; } t84 [
1543ULL ] = X [ 369ULL ] ; t84 [ 1544ULL ] = X [ 395ULL ] ; t84 [ 1545ULL ] =
X [ 397ULL ] ; t84 [ 1546ULL ] = - X [ 374ULL ] ; t84 [ 1547ULL ] = 0.0 ; t84
[ 1548ULL ] = 0.92095788639984788 - t144 ; t84 [ 1549ULL ] = X [ 396ULL ] ;
t84 [ 1550ULL ] = X [ 49ULL ] ; t84 [ 1551ULL ] = X [ 52ULL ] ; t84 [ 1552ULL
] = X [ 51ULL ] ; t84 [ 1553ULL ] = t184 ; t84 [ 1554ULL ] = X [ 365ULL ] ;
t84 [ 1555ULL ] = X [ 366ULL ] * 0.1 ; t84 [ 1556ULL ] = X [ 367ULL ] ; t84 [
1557ULL ] = X [ 368ULL ] ; t84 [ 1558ULL ] = X [ 397ULL ] ; t84 [ 1559ULL ] =
X [ 398ULL ] ; t84 [ 1560ULL ] = X [ 388ULL ] ; t84 [ 1561ULL ] = X [ 399ULL
] ; t84 [ 1562ULL ] = X [ 400ULL ] ; t84 [ 1563ULL ] = X [ 401ULL ] ; t84 [
1564ULL ] = X [ 402ULL ] ; t84 [ 1565ULL ] = X [ 384ULL ] ; t84 [ 1566ULL ] =
t183 * 0.1 ; t84 [ 1567ULL ] = X [ 386ULL ] ; t84 [ 1568ULL ] = X [ 387ULL ]
; t84 [ 1569ULL ] = - X [ 374ULL ] ; t84 [ 1570ULL ] = X [ 403ULL ] ; t84 [
1571ULL ] = - X [ 376ULL ] ; t84 [ 1572ULL ] = - X [ 377ULL ] ; t84 [ 1573ULL
] = - X [ 378ULL ] ; t84 [ 1574ULL ] = X [ 404ULL ] ; t84 [ 1575ULL ] = X [
405ULL ] ; t84 [ 1576ULL ] = X [ 399ULL ] ; t84 [ 1577ULL ] = - X [ 377ULL ]
; t84 [ 1578ULL ] = 0.0 ; t84 [ 1579ULL ] = 0.0 ; t84 [ 1580ULL ] = X [
400ULL ] ; t84 [ 1581ULL ] = - X [ 378ULL ] ; t84 [ 1582ULL ] = X [ 384ULL ]
; t84 [ 1583ULL ] = t183 * 0.1 ; t84 [ 1584ULL ] = X [ 386ULL ] ; t84 [
1585ULL ] = X [ 387ULL ] ; t84 [ 1586ULL ] = 0.0 ; t84 [ 1587ULL ] = 0.0 ;
t84 [ 1588ULL ] = 0.0 ; t84 [ 1589ULL ] = 0.0 ; t84 [ 1590ULL ] = X [ 370ULL
] ; t84 [ 1591ULL ] = 0.101325 ; t84 [ 1592ULL ] = X [ 371ULL ] ; t84 [
1593ULL ] = X [ 372ULL ] ; t84 [ 1594ULL ] = ( X [ 385ULL ] - 1.0E-8 ) *
1.0E+6 ; t84 [ 1595ULL ] = 1.0E-8 ; t84 [ 1596ULL ] = X [ 385ULL ] ; t84 [
1597ULL ] = 1.0E-8 ; t84 [ 1598ULL ] = ( X [ 385ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t84 [ 1599ULL ] = ( X [ 385ULL ] - 1.0E-8 ) * 1.0E+6 ;
t84 [ 1600ULL ] = X [ 385ULL ] ; t84 [ 1601ULL ] = X [ 385ULL ] *
0.0019634954084936209 ; t84 [ 1602ULL ] = t183 * 99999.999999999985 ; t84 [
1603ULL ] = t186 * 0.1 ; t84 [ 1604ULL ] = ( X [ 385ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t84 [ 1605ULL ] = X [ 384ULL ] ; t84 [ 1606ULL ] = t183
* 0.1 ; t84 [ 1607ULL ] = X [ 386ULL ] ; t84 [ 1608ULL ] = X [ 387ULL ] ; t84
[ 1609ULL ] = 0.0 ; t84 [ 1610ULL ] = 0.0 ; t84 [ 1611ULL ] = 0.0 ; t84 [
1612ULL ] = 0.0 ; t84 [ 1613ULL ] = t183 * 99999.999999999985 ; t84 [ 1614ULL
] = X [ 384ULL ] ; t84 [ 1615ULL ] = X [ 384ULL ] ; t84 [ 1616ULL ] = t183 *
0.1 ; t84 [ 1617ULL ] = X [ 386ULL ] ; t84 [ 1618ULL ] = X [ 387ULL ] ; t84 [
1619ULL ] = X [ 385ULL ] * 0.0019634954084936209 ; t84 [ 1620ULL ] = X [
370ULL ] ; t84 [ 1621ULL ] = 0.101325 ; t84 [ 1622ULL ] = X [ 371ULL ] ; t84
[ 1623ULL ] = X [ 372ULL ] ; t84 [ 1624ULL ] = X [ 376ULL ] ; t84 [ 1625ULL ]
= X [ 384ULL ] ; t84 [ 1626ULL ] = t183 * 0.1 ; t84 [ 1627ULL ] = X [ 386ULL
] ; t84 [ 1628ULL ] = X [ 387ULL ] ; t84 [ 1629ULL ] = X [ 374ULL ] ; t84 [
1630ULL ] = X [ 412ULL ] ; t84 [ 1631ULL ] = X [ 376ULL ] ; t84 [ 1632ULL ] =
X [ 377ULL ] ; t84 [ 1633ULL ] = X [ 378ULL ] ; t84 [ 1634ULL ] = X [ 409ULL
] ; t84 [ 1635ULL ] = X [ 408ULL ] ; t84 [ 1636ULL ] = X [ 406ULL ] ; t84 [
1637ULL ] = X [ 407ULL ] * 0.1 ; t84 [ 1638ULL ] = X [ 410ULL ] ; t84 [
1639ULL ] = X [ 411ULL ] ; t84 [ 1640ULL ] = X [ 374ULL ] ; t84 [ 1641ULL ] =
- X [ 374ULL ] ; t84 [ 1642ULL ] = X [ 370ULL ] ; t84 [ 1643ULL ] = 0.101325
; t84 [ 1644ULL ] = X [ 371ULL ] ; t84 [ 1645ULL ] = X [ 372ULL ] ; t84 [
1646ULL ] = - X [ 374ULL ] ; t84 [ 1647ULL ] = X [ 412ULL ] ; t84 [ 1648ULL ]
= - X [ 376ULL ] ; t84 [ 1649ULL ] = - X [ 377ULL ] ; t84 [ 1650ULL ] = - X [
378ULL ] ; t84 [ 1651ULL ] = X [ 409ULL ] ; t84 [ 1652ULL ] = X [ 408ULL ] ;
t84 [ 1653ULL ] = - X [ 376ULL ] ; t84 [ 1654ULL ] = X [ 377ULL ] ; t84 [
1655ULL ] = - X [ 377ULL ] ; t84 [ 1656ULL ] = X [ 378ULL ] ; t84 [ 1657ULL ]
= - X [ 378ULL ] ; t84 [ 1658ULL ] = t186 * 0.1 ; t84 [ 1659ULL ] = U_idx_9 ;
t84 [ 1660ULL ] = X [ 72ULL ] ; t84 [ 1661ULL ] = X [ 73ULL ] * 0.1 ; t84 [
1662ULL ] = X [ 74ULL ] ; t84 [ 1663ULL ] = X [ 75ULL ] ; for ( t127 = 0ULL ;
t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1664ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t127 ] ; } for (
t127 = 0ULL ; t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1672ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t127 ] ; } t84 [
1680ULL ] = 323.15 ; t84 [ 1681ULL ] = X [ 340ULL ] ; t84 [ 1682ULL ] = X [
341ULL ] * 0.1 ; t84 [ 1683ULL ] = X [ 342ULL ] ; t84 [ 1684ULL ] = X [
343ULL ] ; t84 [ 1685ULL ] = X [ 72ULL ] ; t84 [ 1686ULL ] = X [ 73ULL ] *
0.1 ; t84 [ 1687ULL ] = X [ 74ULL ] ; t84 [ 1688ULL ] = X [ 75ULL ] ; t84 [
1689ULL ] = X [ 13ULL ] ; t84 [ 1690ULL ] = X [ 86ULL ] ; t84 [ 1691ULL ] = X
[ 14ULL ] ; t84 [ 1692ULL ] = X [ 413ULL ] ; t84 [ 1693ULL ] = X [ 12ULL ] -
273.15 ; t84 [ 1694ULL ] = - X [ 353ULL ] ; t84 [ 1695ULL ] = X [ 414ULL ] *
0.1 ; t84 [ 1696ULL ] = X [ 53ULL ] * 0.1 ; t84 [ 1697ULL ] = X [ 87ULL ] ;
t84 [ 1698ULL ] = X [ 416ULL ] ; t84 [ 1699ULL ] = X [ 415ULL ] ; t84 [
1700ULL ] = X [ 417ULL ] * 0.1 ; for ( t127 = 0ULL ; t127 < 8ULL ; t127 ++ )
{ t84 [ t127 + 1701ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t127 ] ; } t84 [
1709ULL ] = 323.15 ; t84 [ 1710ULL ] = X [ 90ULL ] ; t84 [ 1711ULL ] = - X [
356ULL ] ; t84 [ 1712ULL ] = X [ 418ULL ] ; t84 [ 1713ULL ] = 0.0 ; t84 [
1714ULL ] = X [ 113ULL ] ; t84 [ 1715ULL ] = X [ 89ULL ] ; t84 [ 1716ULL ] =
X [ 12ULL ] ; t84 [ 1717ULL ] = X [ 13ULL ] ; t84 [ 1718ULL ] = X [ 14ULL ] ;
t84 [ 1719ULL ] = t188 ; t84 [ 1720ULL ] = X [ 340ULL ] ; t84 [ 1721ULL ] = X
[ 341ULL ] * 0.1 ; t84 [ 1722ULL ] = X [ 342ULL ] ; t84 [ 1723ULL ] = X [
343ULL ] ; t84 [ 1724ULL ] = - X [ 356ULL ] ; t84 [ 1725ULL ] = X [ 419ULL ]
; t84 [ 1726ULL ] = - X [ 353ULL ] ; t84 [ 1727ULL ] = - X [ 361ULL ] ; t84 [
1728ULL ] = - X [ 362ULL ] ; t84 [ 1729ULL ] = X [ 420ULL ] ; t84 [ 1730ULL ]
= X [ 421ULL ] ; t84 [ 1731ULL ] = X [ 72ULL ] ; t84 [ 1732ULL ] = X [ 73ULL
] * 0.1 ; t84 [ 1733ULL ] = X [ 74ULL ] ; t84 [ 1734ULL ] = X [ 75ULL ] ; t84
[ 1735ULL ] = X [ 418ULL ] ; t84 [ 1736ULL ] = X [ 422ULL ] ; t84 [ 1737ULL ]
= X [ 415ULL ] ; t84 [ 1738ULL ] = X [ 423ULL ] ; t84 [ 1739ULL ] = X [
424ULL ] ; t84 [ 1740ULL ] = X [ 425ULL ] ; t84 [ 1741ULL ] = X [ 426ULL ] ;
t84 [ 1742ULL ] = - X [ 361ULL ] ; t84 [ 1743ULL ] = X [ 423ULL ] ; t84 [
1744ULL ] = 0.0 ; t84 [ 1745ULL ] = 0.0 ; t84 [ 1746ULL ] = - X [ 362ULL ] ;
t84 [ 1747ULL ] = X [ 424ULL ] ; t84 [ 1748ULL ] = X [ 72ULL ] ; t84 [
1749ULL ] = X [ 73ULL ] * 0.1 ; t84 [ 1750ULL ] = X [ 74ULL ] ; t84 [ 1751ULL
] = X [ 75ULL ] ; t84 [ 1752ULL ] = X [ 365ULL ] ; t84 [ 1753ULL ] = X [
366ULL ] * 0.1 ; t84 [ 1754ULL ] = X [ 367ULL ] ; t84 [ 1755ULL ] = X [
368ULL ] ; t84 [ 1756ULL ] = X [ 16ULL ] ; t84 [ 1757ULL ] = X [ 91ULL ] ;
t84 [ 1758ULL ] = X [ 17ULL ] ; t84 [ 1759ULL ] = X [ 427ULL ] ; t84 [
1760ULL ] = X [ 15ULL ] - 273.15 ; t84 [ 1761ULL ] = - X [ 415ULL ] ; t84 [
1762ULL ] = X [ 428ULL ] * 0.1 ; t84 [ 1763ULL ] = X [ 54ULL ] * 0.1 ; t84 [
1764ULL ] = X [ 92ULL ] ; t84 [ 1765ULL ] = X [ 429ULL ] ; t84 [ 1766ULL ] =
- X [ 388ULL ] ; t84 [ 1767ULL ] = X [ 430ULL ] * 0.1 ; for ( t127 = 0ULL ;
t127 < 8ULL ; t127 ++ ) { t84 [ t127 + 1768ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t127 ] ; } t84 [
1776ULL ] = 323.15 ; t84 [ 1777ULL ] = X [ 95ULL ] ; t84 [ 1778ULL ] = - X [
418ULL ] ; t84 [ 1779ULL ] = - X [ 397ULL ] ; t84 [ 1780ULL ] = ( - X [
101ULL ] - X [ 105ULL ] ) - X [ 107ULL ] ; t84 [ 1781ULL ] = X [ 114ULL ] ;
t84 [ 1782ULL ] = X [ 94ULL ] ; t84 [ 1783ULL ] = X [ 15ULL ] ; t84 [ 1784ULL
] = X [ 16ULL ] ; t84 [ 1785ULL ] = X [ 17ULL ] ; t84 [ 1786ULL ] = t191 ;
t84 [ 1787ULL ] = X [ 72ULL ] ; t84 [ 1788ULL ] = X [ 73ULL ] * 0.1 ; t84 [
1789ULL ] = X [ 74ULL ] ; t84 [ 1790ULL ] = X [ 75ULL ] ; t84 [ 1791ULL ] = -
X [ 418ULL ] ; t84 [ 1792ULL ] = X [ 431ULL ] ; t84 [ 1793ULL ] = - X [
415ULL ] ; t84 [ 1794ULL ] = - X [ 423ULL ] ; t84 [ 1795ULL ] = - X [ 424ULL
] ; t84 [ 1796ULL ] = X [ 432ULL ] ; t84 [ 1797ULL ] = X [ 433ULL ] ; t84 [
1798ULL ] = X [ 365ULL ] ; t84 [ 1799ULL ] = X [ 366ULL ] * 0.1 ; t84 [
1800ULL ] = X [ 367ULL ] ; t84 [ 1801ULL ] = X [ 368ULL ] ; t84 [ 1802ULL ] =
- X [ 397ULL ] ; t84 [ 1803ULL ] = X [ 434ULL ] ; t84 [ 1804ULL ] = - X [
388ULL ] ; t84 [ 1805ULL ] = - X [ 399ULL ] ; t84 [ 1806ULL ] = - X [ 400ULL
] ; t84 [ 1807ULL ] = X [ 435ULL ] ; t84 [ 1808ULL ] = X [ 436ULL ] ; t84 [
1809ULL ] = - X [ 423ULL ] ; t84 [ 1810ULL ] = - X [ 399ULL ] ; t84 [ 1811ULL
] = X [ 104ULL ] ; t84 [ 1812ULL ] = X [ 109ULL ] ; t84 [ 1813ULL ] = - X [
424ULL ] ; t84 [ 1814ULL ] = - X [ 400ULL ] ; t84 [ 1815ULL ] = X [ 15ULL ] ;
t84 [ 1816ULL ] = X [ 16ULL ] ; t84 [ 1817ULL ] = X [ 17ULL ] ; t84 [ 1818ULL
] = X [ 340ULL ] ; t84 [ 1819ULL ] = X [ 341ULL ] * 0.1 ; t84 [ 1820ULL ] = X
[ 342ULL ] ; t84 [ 1821ULL ] = X [ 343ULL ] ; t84 [ 1822ULL ] = X [ 365ULL ]
; t84 [ 1823ULL ] = X [ 366ULL ] * 0.1 ; t84 [ 1824ULL ] = X [ 367ULL ] ; t84
[ 1825ULL ] = X [ 368ULL ] ; t84 [ 1826ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t84 [ 1827ULL ] = 0.0 ; t84 [ 1828ULL ] =
U_idx_10 ; t84 [ 1829ULL ] = X [ 62ULL ] ; t84 [ 1830ULL ] = 0.0 ; t84 [
1831ULL ] = X [ 62ULL ] ; t84 [ 1832ULL ] = X [ 62ULL ] ; t84 [ 1833ULL ] = X
[ 62ULL ] ; t84 [ 1834ULL ] = 0.0 ; t84 [ 1835ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; t84 [
1836ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ;
t84 [ 1837ULL ] = X [ 62ULL ] ; t84 [ 1838ULL ] = X [ 62ULL ] ; t84 [ 1839ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; t84 [
1840ULL ] = 0.0 ; t84 [ 1841ULL ] = X [ 62ULL ] ; t84 [ 1842ULL ] = 0.0 ; t84
[ 1843ULL ] = X [ 62ULL ] ; t84 [ 1844ULL ] = X [ 62ULL ] ; t84 [ 1845ULL ] =
X [ 62ULL ] ; t84 [ 1846ULL ] = X [ 62ULL ] ; t84 [ 1847ULL ] = 0.0 ; t84 [
1848ULL ] = X [ 55ULL ] ; t84 [ 1849ULL ] = X [ 55ULL ] ; t84 [ 1850ULL ] =
U_idx_11 ; t84 [ 1851ULL ] = 0.0 ; t84 [ 1852ULL ] = X [ 62ULL ] ; t84 [
1853ULL ] = 0.0 ; t84 [ 1854ULL ] = 0.0 ; t84 [ 1855ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V4 ; t84 [
1856ULL ] = t141 * 1000.0 ; t84 [ 1857ULL ] = X [ 438ULL ] ; t84 [ 1858ULL ]
= X [ 439ULL ] ; t84 [ 1859ULL ] = X [ 439ULL ] ; t84 [ 1860ULL ] = X [
437ULL ] ; t84 [ 1861ULL ] = X [ 56ULL ] ; t84 [ 1862ULL ] = X [ 62ULL ] ;
t84 [ 1863ULL ] = X [ 55ULL ] * 9.5492965855137211 ; t84 [ 1864ULL ] = 0.0 ;
t84 [ 1865ULL ] = 0.0 ; t84 [ 1866ULL ] = 0.0 ; t84 [ 1867ULL ] = X [ 55ULL ]
; t84 [ 1868ULL ] = U_idx_12 ; t84 [ 1869ULL ] = - X [ 438ULL ] ; t84 [
1870ULL ] = U_idx_12 ; t84 [ 1871ULL ] = X [ 55ULL ] ; t84 [ 1872ULL ] = X [
55ULL ] ; t84 [ 1873ULL ] = - X [ 438ULL ] ; t84 [ 1874ULL ] = - X [ 438ULL ]
; t84 [ 1875ULL ] = X [ 55ULL ] ; t84 [ 1876ULL ] = X [ 55ULL ] ; t84 [
1877ULL ] = - X [ 438ULL ] ; t84 [ 1878ULL ] = - X [ 438ULL ] ; t84 [ 1879ULL
] = - X [ 438ULL ] ; t84 [ 1880ULL ] = X [ 55ULL ] ; t84 [ 1881ULL ] =
U_idx_12 ; t84 [ 1882ULL ] = U_idx_11 ; t84 [ 1883ULL ] = X [ 62ULL ] ; t84 [
1884ULL ] = 0.0 ; for ( b = 0 ; b < 1885 ; b ++ ) { out . mX [ b ] = t84 [ b
] ; } ( void ) LC ; ( void ) t266 ; return 0 ; }
