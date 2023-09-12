#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_duf.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t411 , NeDsMethodOutput * t412 ) { ETTS0 e_efOut
; ETTS0 efOut ; ETTS0 i_efOut ; ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 s_efOut
; ETTS0 t5 ; ETTS0 t6 ; ETTS0 t_efOut ; PmRealVector out ; real_T X [ 399 ] ;
real_T t58 [ 27 ] ; real_T t77 [ 6 ] ; real_T t75 [ 5 ] ; real_T t76 [ 5 ] ;
real_T nonscalar38 [ 3 ] ; real_T b_efOut [ 1 ] ; real_T c_efOut [ 1 ] ;
real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T l_efOut
[ 1 ] ; real_T n_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T q_efOut [ 1 ] ;
real_T r_efOut [ 1 ] ; real_T t74 [ 1 ] ; real_T u_efOut [ 1 ] ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ;
real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T
intermediate_der1365 ; real_T intermediate_der2138 ; real_T
intermediate_der5173 ; real_T intermediate_der6663 ; real_T
intermediate_der8661 ; real_T intrm_sf_mf_1080 ; real_T intrm_sf_mf_1161 ;
real_T intrm_sf_mf_1167 ; real_T intrm_sf_mf_350 ; real_T intrm_sf_mf_875 ;
real_T t102 ; real_T t103 ; real_T t105 ; real_T t107 ; real_T t109 ; real_T
t111 ; real_T t112 ; real_T t115 ; real_T t119 ; real_T t121 ; real_T t122 ;
real_T t124 ; real_T t126 ; real_T t128 ; real_T t129 ; real_T t132 ; real_T
t135 ; real_T t139 ; real_T t142 ; real_T t143 ; real_T t144 ; real_T t149 ;
real_T t150 ; real_T t157 ; real_T t158 ; real_T t159 ; real_T t160 ; real_T
t162 ; real_T t163 ; real_T t164 ; real_T t165 ; real_T t166 ; real_T t173 ;
real_T t174 ; real_T t175 ; real_T t176 ; real_T t177 ; real_T t180 ; real_T
t181 ; real_T t182 ; real_T t184 ; real_T t186 ; real_T t188 ; real_T t190 ;
real_T t191 ; real_T t193 ; real_T t194 ; real_T t199 ; real_T t210 ; real_T
t218 ; real_T t306 ; real_T t310 ; real_T t315 ; real_T t326 ; real_T t327 ;
real_T t335 ; real_T t341 ; real_T t347 ; real_T t358 ; real_T t373 ; real_T
t384 ; real_T t390 ; real_T t392 ; real_T t394 ; real_T t400 ; real_T t401 ;
real_T t407 ; real_T t410 ; real_T t71_idx_0 ; real_T t93 ; real_T t96 ;
real_T t99 ; real_T zc_int260 ; real_T zc_int263 ; real_T zc_int269 ; size_t
t10 [ 1 ] ; size_t t50 [ 1 ] ; size_t t53 [ 1 ] ; size_t t83 ; int32_T M [
218 ] ; int32_T b ; for ( b = 0 ; b < 218 ; b ++ ) { M [ b ] = t411 -> mM .
mX [ b ] ; } U_idx_1 = t411 -> mU . mX [ 1 ] ; U_idx_2 = t411 -> mU . mX [ 2
] ; U_idx_3 = t411 -> mU . mX [ 3 ] ; U_idx_4 = t411 -> mU . mX [ 4 ] ;
U_idx_5 = t411 -> mU . mX [ 5 ] ; U_idx_6 = t411 -> mU . mX [ 6 ] ; U_idx_7 =
t411 -> mU . mX [ 7 ] ; U_idx_8 = t411 -> mU . mX [ 8 ] ; U_idx_9 = t411 ->
mU . mX [ 9 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t411 -> mX . mX [
b ] ; } out = t412 -> mDUF ; t75 [ 0 ] = 1.0 ; t75 [ 1 ] = 1.25 ; t75 [ 2 ] =
1.5 ; t75 [ 3 ] = 1.75 ; t75 [ 4 ] = 2.0 ; nonscalar38 [ 0 ] = 0.0 ;
nonscalar38 [ 1 ] = 188.49555921538757 ; nonscalar38 [ 2 ] =
376.99111843077515 ; Fuel_Cell_Boost_Converter_L_i = X [ 61ULL ] * 1.0E-9 + X
[ 4ULL ] ; intermediate_der1365 = U_idx_1 * 0.031415926535897927 ; if (
intermediate_der1365 * 0.0001 <= 7.8539816339744857E-13 ) { t102 =
7.8539816339744857E-13 ; } else if ( intermediate_der1365 * 0.0001 >=
3.1415926535897929E-6 ) { t102 = 3.1415926535897929E-6 ; } else { t102 =
intermediate_der1365 * 0.0001 ; } intermediate_der2138 = t102 /
7.8539816339744827E-5 ; if ( X [ 154ULL ] <= 0.0 ) { t105 = 0.0 ; } else {
t105 = X [ 154ULL ] >= 1.0 ? 1.0 : X [ 154ULL ] ; } if ( X [ 155ULL ] <= 0.0
) { t103 = 0.0 ; } else { t103 = X [ 155ULL ] >= 1.0 ? 1.0 : X [ 155ULL ] ; }
t107 = ( ( ( 1.0 - t105 ) - t103 ) * 296.802103844292 + t105 * 461.523 ) +
t103 * 4124.48151675695 ; t109 = X [ 152ULL ] * t107 ; t400 = X [ 153ULL ] /
( t109 == 0.0 ? 1.0E-16 : t109 ) ; t401 = X [ 153ULL ] / ( X [ 131ULL ] ==
0.0 ? 1.0E-16 : X [ 131ULL ] ) * ( X [ 156ULL ] / ( X [ 152ULL ] == 0.0 ?
1.0E-16 : X [ 152ULL ] ) ) ; t111 = X [ 153ULL ] / 1.01325 * ( X [ 157ULL ] /
( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ; t115 = ( X [ 131ULL ] +
1.01325 ) / 2.0 * 0.0010000000000000009 ; t112 = ( 1.0 - intermediate_der2138
) * ( 1.0 - intermediate_der2138 ) ; t407 = t115 * t112 ; t306 = (
intermediate_der2138 + 1.0 ) * ( 1.0 - intermediate_der2138 * t401 ) - ( 1.0
- intermediate_der2138 * t111 ) * intermediate_der2138 * 2.0 ; t410 = ( X [
131ULL ] - 1.01325 ) * ( t306 >= t112 ? t306 : t112 ) ; intrm_sf_mf_350 = ( X
[ 131ULL ] - 1.01325 ) / ( t115 == 0.0 ? 1.0E-16 : t115 ) ;
intermediate_der6663 = intrm_sf_mf_350 * intrm_sf_mf_350 * 3.0 -
intrm_sf_mf_350 * intrm_sf_mf_350 * intrm_sf_mf_350 * 2.0 ; if ( X [ 131ULL ]
- 1.01325 <= 0.0 ) { intrm_sf_mf_350 = t407 ; } else if ( X [ 131ULL ] -
1.01325 >= t115 ) { intrm_sf_mf_350 = t410 ; } else { intrm_sf_mf_350 = ( 1.0
- intermediate_der6663 ) * t407 + t410 * intermediate_der6663 ; } t410 = (
intermediate_der2138 + 1.0 ) * ( 1.0 - intermediate_der2138 * t111 ) - ( 1.0
- intermediate_der2138 * t401 ) * intermediate_der2138 * 2.0 ; t390 = (
1.01325 - X [ 131ULL ] ) * ( t410 >= t112 ? t410 : t112 ) ;
intermediate_der5173 = ( 1.01325 - X [ 131ULL ] ) / ( t115 == 0.0 ? 1.0E-16 :
t115 ) ; t119 = intermediate_der5173 * intermediate_der5173 * 3.0 -
intermediate_der5173 * intermediate_der5173 * intermediate_der5173 * 2.0 ; if
( 1.01325 - X [ 131ULL ] <= 0.0 ) { intermediate_der5173 = t407 ; } else if (
1.01325 - X [ 131ULL ] >= t115 ) { intermediate_der5173 = t390 ; } else {
intermediate_der5173 = ( 1.0 - t119 ) * t407 + t390 * t119 ; } if ( X [
131ULL ] > 1.01325 ) { t390 = intrm_sf_mf_350 ; } else { t390 = X [ 131ULL ]
< 1.01325 ? intermediate_der5173 : t407 ; } if ( X [ 152ULL ] <=
216.59999999999997 ) { t407 = 216.59999999999997 ; } else { t407 = X [ 152ULL
] >= 623.15 ? 623.15 : X [ 152ULL ] ; } t392 = t407 * t407 ; intrm_sf_mf_350
= ( ( ( 1074.1165326382641 + t407 * - 0.2214565261064495 ) + t392 *
0.00037212980109014541 ) * ( ( 1.0 - t105 ) - t103 ) + ( ( 1479.6504774711011
+ t407 * 1.2002114337048222 ) + t392 * - 0.00038614513167823636 ) * t105 ) +
( ( 12825.281119789837 + t407 * 6.9647057412840034 ) + t392 * -
0.0070524868246844051 ) * t103 ; t394 = intrm_sf_mf_350 - t107 ; t121 = X [
153ULL ] * X [ 153ULL ] * ( intrm_sf_mf_350 / ( t394 == 0.0 ? 1.0E-16 : t394
) ) ; t105 = pmf_sqrt ( fabs ( t121 / ( t107 == 0.0 ? 1.0E-16 : t107 ) / ( X
[ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ) * t102 * 0.64 ; t124 = t400
* 2.0 ; t103 = ( X [ 131ULL ] - 1.01325 ) * pmf_sqrt ( fabs ( t124 / ( t390
== 0.0 ? 1.0E-16 : t390 ) ) ) * t102 * 0.64 ; t407 = ( X [ 179ULL ] * -
0.7999998 + U_idx_2 * 7.9999980000000006 ) + 9.9999999947364415E-9 ; if (
t407 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_350 =
7.8539816339744857E-13 ; } else if ( t407 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { intrm_sf_mf_350 = 3.1415926535897929E-6 ; } else {
intrm_sf_mf_350 = t407 * 7.8539816339744827E-5 ; } intermediate_der5173 =
intrm_sf_mf_350 / 7.8539816339744827E-5 ; if ( X [ 202ULL ] <= 0.0 ) { t392 =
0.0 ; } else { t392 = X [ 202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } if ( X [
203ULL ] <= 0.0 ) { t394 = 0.0 ; } else { t394 = X [ 203ULL ] >= 1.0 ? 1.0 :
X [ 203ULL ] ; } t122 = ( ( ( 1.0 - t392 ) - t394 ) * 296.802103844292 + t392
* 461.523 ) + t394 * 4124.48151675695 ; t126 = X [ 200ULL ] * t122 ; t384 = X
[ 201ULL ] / ( t126 == 0.0 ? 1.0E-16 : t126 ) ; intermediate_der8661 = X [
201ULL ] / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( X [ 204ULL ] /
( X [ 200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t128 = X [ 201ULL ] / (
X [ 179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) * ( X [ 205ULL ] / ( X [
200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t132 = ( X [ 24ULL ] + X [
179ULL ] ) / 2.0 * 0.0010000000000000009 ; t129 = ( 1.0 -
intermediate_der5173 ) * ( 1.0 - intermediate_der5173 ) ; U_idx_1 = t132 *
t129 ; t135 = ( intermediate_der5173 + 1.0 ) * ( 1.0 - intermediate_der5173 *
intermediate_der8661 ) - ( 1.0 - intermediate_der5173 * t128 ) *
intermediate_der5173 * 2.0 ; t373 = ( X [ 24ULL ] - X [ 179ULL ] ) * ( t135
>= t129 ? t135 : t129 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( X [ 24ULL ] - X [
179ULL ] ) / ( t132 == 0.0 ? 1.0E-16 : t132 ) ; t347 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 2.0 ; if ( X [ 24ULL
] - X [ 179ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = U_idx_1 ; } else if (
X [ 24ULL ] - X [ 179ULL ] >= t132 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = t373 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( 1.0 - t347 ) *
U_idx_1 + t373 * t347 ; } t373 = ( intermediate_der5173 + 1.0 ) * ( 1.0 -
intermediate_der5173 * t128 ) - ( 1.0 - intermediate_der5173 *
intermediate_der8661 ) * intermediate_der5173 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
179ULL ] - X [ 24ULL ] ) * ( t373 >= t129 ? t373 : t129 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = ( X [ 179ULL ] - X
[ 24ULL ] ) / ( t132 == 0.0 ? 1.0E-16 : t132 ) ; t358 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 2.0 ; if ( X [
179ULL ] - X [ 24ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = U_idx_1 ; } else if
( X [ 179ULL ] - X [ 24ULL ] >= t132 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = ( 1.0 - t358 ) *
U_idx_1 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t358 ; } if ( X [ 24ULL ] > X [ 179ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 24ULL ]
< X [ 179ULL ] ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I :
U_idx_1 ; } if ( X [ 200ULL ] <= 216.59999999999997 ) { U_idx_1 =
216.59999999999997 ; } else { U_idx_1 = X [ 200ULL ] >= 623.15 ? 623.15 : X [
200ULL ] ; } t93 = U_idx_1 * U_idx_1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( ( (
1074.1165326382641 + U_idx_1 * - 0.2214565261064495 ) + t93 *
0.00037212980109014541 ) * ( ( 1.0 - t392 ) - t394 ) + ( ( 1479.6504774711011
+ U_idx_1 * 1.2002114337048222 ) + t93 * - 0.00038614513167823636 ) * t392 )
+ ( ( 12825.281119789837 + U_idx_1 * 6.9647057412840034 ) + t93 * -
0.0070524868246844051 ) * t394 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I - t122 ; t139 = X [
201ULL ] * X [ 201ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) ) ; t392 = pmf_sqrt (
fabs ( t139 / ( t122 == 0.0 ? 1.0E-16 : t122 ) / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ) ) * intrm_sf_mf_350 * 0.64 ; t142 = t384 * 2.0 ;
t394 = ( X [ 24ULL ] - X [ 179ULL ] ) * pmf_sqrt ( fabs ( t142 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * intrm_sf_mf_350 * 0.64 ; if ( X [ 37ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = X [ 37ULL ] >= 1.0 ?
1.0 : X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = X [ 36ULL ] >= 1.0
? 1.0 : X [ 36ULL ] ; } t93 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * 296.802103844292
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 4124.48151675695 ;
t74 [ 0ULL ] = X [ 35ULL ] ; t50 [ 0 ] = 52ULL ; t10 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t74 [ 0ULL ] , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t6 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & c_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = c_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_g_I = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) + t71_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) - X [ 35ULL ] * t93
* 0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_g_I - X [ 35ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_g_I =
t71_idx_0 - X [ 35ULL ] * 4.12448151675695 ; t143 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I - X [ 35ULL ] *
0.461523 ; if ( X [ 43ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = X [ 43ULL ] >= 1.0 ?
1.0 : X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) { t144 = 0.0 ; } else { t144
= X [ 42ULL ] >= 1.0 ? 1.0 : X [ 42ULL ] ; } intrm_sf_mf_875 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) - t144 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
461.523 ) + t144 * 259.836612622973 ; t74 [ 0ULL ] = X [ 41ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t74 [ 0ULL ] , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t6 =
e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & g_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = g_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) - t144 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) + t71_idx_0 * t144 )
- X [ 41ULL ] * intrm_sf_mf_875 * 0.001 ; t144 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - X [ 41ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I =
t71_idx_0 - X [ 41ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 - X [ 41ULL ]
* 0.461523 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2
= pmf_sqrt ( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = ( X [ 344ULL ] *
0.07812500122070315 + U_idx_8 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
47ULL ] <= 0.0 ) { t335 = 0.0 ; } else { t335 = X [ 47ULL ] >= 1.0 ? 1.0 : X
[ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) { t341 = 0.0 ; } else { t341 = X [
48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } zc_int263 = ( ( ( 1.0 - t335 ) - t341
) * 296.802103844292 + t335 * 461.523 ) + t341 * 259.836612622973 ; if ( X [
350ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = X [
350ULL ] >= 1.0 ? 1.0 : X [ 350ULL ] ; } if ( X [ 351ULL ] <= 0.0 ) { U_idx_8
= 0.0 ; } else { U_idx_8 = X [ 351ULL ] >= 1.0 ? 1.0 : X [ 351ULL ] ; } t74 [
0ULL ] = X [ 45ULL ] ; tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [
0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t74 [ 0ULL ] , & t50 [ 0ULL ] ,
& t10 [ 0ULL ] ) ; t6 = i_efOut ; tlu2_1d_linear_nearest_value ( & j_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t50 [ 0ULL ] , & t10 [ 0ULL ] )
; t71_idx_0 = j_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL
] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField1 , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; U_idx_1 =
k_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField17 , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; U_idx_2 = l_efOut [ 0 ] ;
zc_int260 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ) - U_idx_8 )
* t71_idx_0 + U_idx_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ) + U_idx_2 *
U_idx_8 ; intrm_sf_mf_1080 = X [ 45ULL ] * zc_int263 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = X [ 46ULL ]
/ ( intrm_sf_mf_1080 == 0.0 ? 1.0E-16 : intrm_sf_mf_1080 ) ; U_idx_8 = - ( (
X [ 45ULL ] / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) - X [ 352ULL ] /
( X [ 353ULL ] == 0.0 ? 1.0E-16 : X [ 353ULL ] ) ) * X [ 335ULL ] * zc_int263
) / 0.0019634954084936209 ; if ( X [ 352ULL ] <= 216.59999999999997 ) {
zc_int269 = 216.59999999999997 ; } else { zc_int269 = X [ 352ULL ] >= 623.15
? 623.15 : X [ 352ULL ] ; } t96 = zc_int269 * zc_int269 ; intrm_sf_mf_1080 =
( ( ( 1074.1165326382641 + zc_int269 * - 0.2214565261064495 ) + t96 *
0.00037212980109014541 ) * ( ( 1.0 - t335 ) - t341 ) + ( ( 1479.6504774711011
+ zc_int269 * 1.2002114337048222 ) + t96 * - 0.00038614513167823636 ) * t335
) + ( ( 900.63941224838356 + zc_int269 * - 0.044484923911382625 ) + t96 *
0.00036936011832044979 ) * t341 ; t315 = intrm_sf_mf_1080 - zc_int263 ; t335
= intrm_sf_mf_1080 / ( t315 == 0.0 ? 1.0E-16 : t315 ) ; t341 = pmf_sqrt (
U_idx_8 * U_idx_8 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] * t335 *
zc_int263 ) * 1.0E-9 ) ; U_idx_2 = X [ 353ULL ] * X [ 353ULL ] * t335 ;
zc_int269 = - pmf_sqrt ( fabs ( U_idx_2 / ( zc_int263 == 0.0 ? 1.0E-16 :
zc_int263 ) / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) ) *
0.0019634954084936209 ; if ( zc_int269 >= 0.0 ) { intrm_sf_mf_1080 =
zc_int269 * 100000.0 ; } else { intrm_sf_mf_1080 = - zc_int269 * 100000.0 ; }
t157 = zc_int260 * 0.0019634954084936209 ; t96 = intrm_sf_mf_1080 * 0.05 / (
t157 == 0.0 ? 1.0E-16 : t157 ) ; t159 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke *
9.8174770424681068E-6 ; t150 = zc_int269 * zc_int260 * 35.2 / ( t159 == 0.0 ?
1.0E-16 : t159 ) ; t327 = t96 >= 1.0 ? t96 : 1.0 ; t160 = pmf_log10 ( 6.9 / (
t327 == 0.0 ? 1.0E-16 : t327 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 /
( t327 == 0.0 ? 1.0E-16 : t327 ) + 2.8767404433520813E-5 ) * 3.24 ; t162 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke *
3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = zc_int269 *
intrm_sf_mf_1080 * ( 1.0 / ( t160 == 0.0 ? 1.0E-16 : t160 ) ) * 0.55 / ( t162
== 0.0 ? 1.0E-16 : t162 ) ; intrm_sf_mf_1080 = ( t96 - 2000.0 ) / 2000.0 ;
t327 = intrm_sf_mf_1080 * intrm_sf_mf_1080 * 3.0 - intrm_sf_mf_1080 *
intrm_sf_mf_1080 * intrm_sf_mf_1080 * 2.0 ; if ( t96 <= 2000.0 ) {
intrm_sf_mf_1080 = t150 * 1.0E-5 ; } else if ( t96 >= 4000.0 ) {
intrm_sf_mf_1080 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke * 1.0E-5 ; }
else { intrm_sf_mf_1080 = ( ( 1.0 - t327 ) * t150 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke * t327 ) *
1.0E-5 ; } t341 = - ( X [ 335ULL ] * t341 ) / 0.0019634954084936209 *
0.00031622776601683789 + intrm_sf_mf_1080 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - X [ 46ULL ] ; if ( X
[ 346ULL ] <= 0.0 ) { intrm_sf_mf_1080 = 0.0 ; } else { intrm_sf_mf_1080 = X
[ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } if ( X [ 345ULL ] <= 0.0 ) { t150
= 0.0 ; } else { t150 = X [ 345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ; } t327 = (
( ( 1.0 - intrm_sf_mf_1080 ) - t150 ) * 296.802103844292 + intrm_sf_mf_1080 *
461.523 ) + t150 * 259.836612622973 ; intrm_sf_mf_1080 = pmf_sqrt ( X [
335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 ) ; if ( X [ 344ULL ] *
0.0019634954084936209 <= 1.9634954084936209E-11 ) { t150 =
1.9634954084936209E-11 ; } else if ( X [ 344ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t150 = 0.0012566370614359179 ; } else { t150 = X [
344ULL ] * 0.0019634954084936209 ; } t315 = t150 / 0.0019634954084936209 ; if
( X [ 367ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
367ULL ] >= 1.0 ? 1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 = X [
368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ; } t158 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 *
259.836612622973 ; t166 = X [ 365ULL ] * t158 ; t160 = X [ 366ULL ] / ( t166
== 0.0 ? 1.0E-16 : t166 ) ; t326 = X [ 366ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * ( X [ 369ULL ] / (
X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ; t163 = X [ 366ULL ] /
1.01325 * ( X [ 370ULL ] / ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) )
; t165 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p + 1.01325 )
/ 2.0 * 0.0010000000000000009 ; t164 = ( 1.0 - t315 ) * ( 1.0 - t315 ) ; t166
= t165 * t164 ; t310 = ( t315 + 1.0 ) * ( 1.0 - t315 * t326 ) - ( 1.0 - t315
* t163 ) * t315 * 2.0 ; t173 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( t310 >=
t164 ? t310 : t164 ) ; intrm_sf_mf_1161 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) / ( t165 ==
0.0 ? 1.0E-16 : t165 ) ; t174 = intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 -
intrm_sf_mf_1161 * intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intrm_sf_mf_1167 = t166 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t165 ) {
intrm_sf_mf_1167 = t173 ; } else { intrm_sf_mf_1167 = ( 1.0 - t174 ) * t166 +
t173 * t174 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 = ( t315 +
1.0 ) * ( 1.0 - t315 * t163 ) - ( 1.0 - t315 * t326 ) * t315 * 2.0 ; t326 = (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t164 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 : t164 ) ;
t163 = ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) /
( t165 == 0.0 ? 1.0E-16 : t165 ) ; t175 = t163 * t163 * 3.0 - t163 * t163 *
t163 * 2.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0 ) { U_idx_1 =
t166 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= t165 ) { U_idx_1 =
t326 ; } else { U_idx_1 = ( 1.0 - t175 ) * t166 + t326 * t175 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1167 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ? U_idx_1 :
t166 ; } if ( X [ 365ULL ] <= 216.59999999999997 ) { intrm_sf_mf_1167 =
216.59999999999997 ; } else { intrm_sf_mf_1167 = X [ 365ULL ] >= 623.15 ?
623.15 : X [ 365ULL ] ; } t99 = intrm_sf_mf_1167 * intrm_sf_mf_1167 ; U_idx_1
= ( ( ( 1074.1165326382641 + intrm_sf_mf_1167 * - 0.2214565261064495 ) + t99
* 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 ) + ( (
1479.6504774711011 + intrm_sf_mf_1167 * 1.2002114337048222 ) + t99 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
900.63941224838356 + intrm_sf_mf_1167 * - 0.044484923911382625 ) + t99 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 ; t176 =
U_idx_1 - t158 ; t177 = X [ 366ULL ] * X [ 366ULL ] * ( U_idx_1 / ( t176 ==
0.0 ? 1.0E-16 : t176 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = pmf_sqrt (
fabs ( t177 / ( t158 == 0.0 ? 1.0E-16 : t158 ) / ( X [ 365ULL ] == 0.0 ?
1.0E-16 : X [ 365ULL ] ) ) ) * t150 * 0.64 ; t180 = t160 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( fabs ( t180 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * t150 * 0.64 ; t182 = t165 - ( - t165 ) ; intrm_sf_mf_1167 = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) - ( - t165
) ) / ( t182 == 0.0 ? 1.0E-16 : t182 ) ; if ( M [ 178ULL ] != 0 ) { t99 =
216.59999999999997 ; } else { t99 = M [ 179ULL ] != 0 ? 623.15 : U_idx_5 ; }
t74 [ 0ULL ] = U_idx_4 >= 0.0 ? t99 : X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t74 [ 0ULL ] , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t5 =
m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t5 . mField0 [
0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = n_efOut [ 0 ] ; t99
= t71_idx_0 ; if ( M [ 205ULL ] != 0 ) { t176 = 216.59999999999997 ; } else {
t176 = M [ 206ULL ] != 0 ? 623.15 : U_idx_7 ; } t74 [ 0ULL ] = U_idx_6 >= 0.0
? t176 : X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & o_efOut . mField0 [
0ULL ] , & o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t74 [ 0ULL ] , & t50 [ 0ULL ] ,
& t10 [ 0ULL ] ) ; t6 = o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t50 [ 0ULL ] , & t10 [ 0ULL ] )
; t71_idx_0 = p_efOut [ 0 ] ; t176 = t71_idx_0 ; U_idx_1 = pmf_sqrt ( U_idx_8
* U_idx_8 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 216ULL ] != 0 ) * 2.0
- 1.0 ) * X [ 352ULL ] * t335 * zc_int263 * 1.0E-9 ) ; t335 = - pmf_sqrt ( (
( real_T ) ( M [ 3ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( zc_int263 == 0.0
? 1.0E-16 : zc_int263 ) / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) )
) * 0.0019634954084936209 ; zc_int263 = zc_int260 * t335 * 35.2 / ( t159 ==
0.0 ? 1.0E-16 : t159 ) ; if ( zc_int269 >= 0.0 ) { U_idx_8 = t335 * 100000.0
; } else { U_idx_8 = - t335 * 100000.0 ; } zc_int260 = U_idx_8 * 0.05 / (
t157 == 0.0 ? 1.0E-16 : t157 ) ; zc_int269 = t96 >= 1.0 ? zc_int260 : 1.0 ;
t190 = pmf_log10 ( 6.9 / ( zc_int269 == 0.0 ? 1.0E-16 : zc_int269 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( zc_int269 == 0.0 ? 1.0E-16 :
zc_int269 ) + 2.8767404433520813E-5 ) * 3.24 ; t335 = t335 * U_idx_8 * ( 1.0
/ ( t190 == 0.0 ? 1.0E-16 : t190 ) ) * 0.55 / ( t162 == 0.0 ? 1.0E-16 : t162
) ; U_idx_8 = ( zc_int260 - 2000.0 ) / 2000.0 ; zc_int260 = U_idx_8 * U_idx_8
* 3.0 - U_idx_8 * U_idx_8 * U_idx_8 * 2.0 ; if ( t96 <= 2000.0 ) { U_idx_8 =
zc_int263 * 1.0E-5 ; } else if ( t96 >= 4000.0 ) { U_idx_8 = t335 * 1.0E-5 ;
} else { U_idx_8 = ( ( 1.0 - zc_int260 ) * zc_int263 + t335 * zc_int260 ) *
1.0E-5 ; } t335 = - ( X [ 335ULL ] * U_idx_1 ) / 0.0019634954084936209 *
0.00031622776601683789 + U_idx_8 ; U_idx_5 = - t335 - t335 * - 0.95 ;
zc_int263 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke - t335 * -
0.95 ) / ( U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5 ) ; zc_int260 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t180 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * t150 * 0.64 ; zc_int269 = pmf_sqrt ( ( ( real_T ) ( M [ 10ULL ] != 0 ) *
2.0 - 1.0 ) * ( t177 / ( t158 == 0.0 ? 1.0E-16 : t158 ) / ( X [ 365ULL ] ==
0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ) * t150 * 0.64 ; U_idx_7 = zc_int269 -
zc_int269 * 0.95 ; t96 = ( zc_int260 - zc_int269 * 0.95 ) / ( U_idx_7 == 0.0
? 1.0E-16 : U_idx_7 ) ; t149 = ( - zc_int260 - zc_int269 * 0.95 ) / ( U_idx_7
== 0.0 ? 1.0E-16 : U_idx_7 ) ; t157 = ( X [ 131ULL ] - 1.01325 ) * pmf_sqrt (
( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( t124 / ( t390 == 0.0 ?
1.0E-16 : t390 ) ) ) * t102 * 0.64 ; t159 = pmf_sqrt ( ( ( real_T ) ( M [
112ULL ] != 0 ) * 2.0 - 1.0 ) * ( t121 / ( t107 == 0.0 ? 1.0E-16 : t107 ) / (
X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ) * t102 * 0.64 ; t210 =
t159 - t159 * 0.95 ; t162 = ( t157 - t159 * 0.95 ) / ( t210 == 0.0 ? 1.0E-16
: t210 ) ; t177 = t162 * t162 * 3.0 - t162 * t162 * t162 * 2.0 ; t181 = ( -
t157 - t159 * 0.95 ) / ( t210 == 0.0 ? 1.0E-16 : t210 ) ; t184 = t181 * t181
* 3.0 - t181 * t181 * t181 * 2.0 ; t186 = ( X [ 24ULL ] - X [ 179ULL ] ) *
pmf_sqrt ( ( ( real_T ) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0 ) * ( t142 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * intrm_sf_mf_350 * 0.64 ; t188 = pmf_sqrt ( ( ( real_T ) ( M [ 163ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t139 / ( t122 == 0.0 ? 1.0E-16 : t122 ) / ( X [ 200ULL
] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ) * intrm_sf_mf_350 * 0.64 ; t218 =
t188 - t188 * 0.95 ; t190 = ( t186 - t188 * 0.95 ) / ( t218 == 0.0 ? 1.0E-16
: t218 ) ; t191 = t190 * t190 * 3.0 - t190 * t190 * t190 * 2.0 ; t193 = ( -
t186 - t188 * 0.95 ) / ( t218 == 0.0 ? 1.0E-16 : t218 ) ; t194 = t193 * t193
* 3.0 - t193 * t193 * t193 * 2.0 ; if ( intermediate_der1365 * 0.0001 <=
7.8539816339744857E-13 ) { t199 = 0.0 ; } else if ( intermediate_der1365 *
0.0001 >= 3.1415926535897929E-6 ) { t199 = 0.0 ; } else { t199 =
3.1415926535897929E-6 ; } intermediate_der1365 = t199 / 7.8539816339744827E-5
; if ( X [ 122ULL ] > 0.0 ) { U_idx_1 = t102 * t102 ; U_idx_8 = ( ( (
intermediate_der2138 + 1.0 ) * ( X [ 122ULL ] / 0.64 / ( t102 == 0.0 ?
1.0E-16 : t102 ) * ( - ( X [ 122ULL ] / 0.64 ) / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ) * t199 * 2.0 / 2.0 / ( t400 == 0.0 ? 1.0E-16 : t400 ) ) + X [
122ULL ] / 0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) * ( X [ 122ULL ] / 0.64 /
( t102 == 0.0 ? 1.0E-16 : t102 ) ) / 2.0 / ( t400 == 0.0 ? 1.0E-16 : t400 ) *
intermediate_der1365 ) * ( 1.0 - intermediate_der2138 * t401 ) + - ( t401 *
intermediate_der1365 ) * ( intermediate_der2138 + 1.0 ) * ( X [ 122ULL ] /
0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) * ( X [ 122ULL ] / 0.64 / ( t102 ==
0.0 ? 1.0E-16 : t102 ) ) / 2.0 / ( t400 == 0.0 ? 1.0E-16 : t400 ) ) ) *
9.9999999999999991E-11 ; } else if ( X [ 122ULL ] < 0.0 ) { U_idx_1 = t102 *
t102 ; U_idx_8 = ( ( ( intermediate_der2138 + 1.0 ) * ( X [ 122ULL ] / 0.64 /
( t102 == 0.0 ? 1.0E-16 : t102 ) * ( - ( X [ 122ULL ] / 0.64 ) / ( U_idx_1 ==
0.0 ? 1.0E-16 : U_idx_1 ) ) * t199 * 2.0 / 2.0 / ( t400 == 0.0 ? 1.0E-16 :
t400 ) ) + X [ 122ULL ] / 0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) * ( X [
122ULL ] / 0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) ) / 2.0 / ( t400 == 0.0 ?
1.0E-16 : t400 ) * intermediate_der1365 ) * ( 1.0 - intermediate_der2138 *
t111 ) + - ( t111 * intermediate_der1365 ) * ( intermediate_der2138 + 1.0 ) *
( X [ 122ULL ] / 0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) * ( X [ 122ULL ] /
0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) ) / 2.0 / ( t400 == 0.0 ? 1.0E-16 :
t400 ) ) ) * 9.9999999999999991E-11 ; } else { U_idx_8 = 0.0 ; } U_idx_2 = -
intermediate_der1365 * ( 1.0 - intermediate_der2138 ) * 2.0 ; U_idx_1 = t115
* U_idx_2 ; t306 = ( X [ 131ULL ] - 1.01325 ) * ( t306 >= t112 ? ( ( 1.0 -
intermediate_der2138 * t401 ) * intermediate_der1365 + - ( t401 *
intermediate_der1365 ) * ( intermediate_der2138 + 1.0 ) ) - ( ( 1.0 -
intermediate_der2138 * t111 ) * intermediate_der1365 * 2.0 + - ( t111 *
intermediate_der1365 ) * intermediate_der2138 * 2.0 ) : U_idx_2 ) ; if ( X [
131ULL ] - 1.01325 <= 0.0 ) { t306 = U_idx_1 ; } else if ( X [ 131ULL ] -
1.01325 >= t115 ) { } else { t306 = ( 1.0 - intermediate_der6663 ) * U_idx_1
+ t306 * intermediate_der6663 ; } intermediate_der1365 = ( 1.01325 - X [
131ULL ] ) * ( t410 >= t112 ? ( ( 1.0 - intermediate_der2138 * t111 ) *
intermediate_der1365 + - ( t111 * intermediate_der1365 ) * (
intermediate_der2138 + 1.0 ) ) - ( ( 1.0 - intermediate_der2138 * t401 ) *
intermediate_der1365 * 2.0 + - ( t401 * intermediate_der1365 ) *
intermediate_der2138 * 2.0 ) : U_idx_2 ) ; if ( 1.01325 - X [ 131ULL ] <= 0.0
) { intermediate_der2138 = U_idx_1 ; } else if ( 1.01325 - X [ 131ULL ] >=
t115 ) { intermediate_der2138 = intermediate_der1365 ; } else {
intermediate_der2138 = ( 1.0 - t119 ) * U_idx_1 + intermediate_der1365 * t119
; } if ( X [ 131ULL ] > 1.01325 ) { intermediate_der1365 = t306 ; } else {
intermediate_der1365 = X [ 131ULL ] < 1.01325 ? intermediate_der2138 :
U_idx_1 ; } if ( t407 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) {
t401 = 0.0 ; } else if ( t407 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t401 = 0.0 ; } else { t401 = 0.000628318373638326 ;
} intermediate_der2138 = t401 / 7.8539816339744827E-5 ; if ( - X [ 172ULL ] >
0.0 ) { U_idx_1 = intrm_sf_mf_350 * intrm_sf_mf_350 ; t111 = ( ( (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - ( - X [ 172ULL ] / 0.64 ) / ( U_idx_1
== 0.0 ? 1.0E-16 : U_idx_1 ) ) * t401 * 2.0 / 2.0 / ( t384 == 0.0 ? 1.0E-16 :
t384 ) ) + - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ?
1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t384 == 0.0 ? 1.0E-16 : t384 ) *
intermediate_der2138 ) * ( 1.0 - intermediate_der5173 * intermediate_der8661
) + - ( intermediate_der8661 * intermediate_der2138 ) * (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / (
intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t384 == 0.0
? 1.0E-16 : t384 ) ) ) * 9.9999999999999991E-11 ; } else if ( - X [ 172ULL ]
< 0.0 ) { U_idx_1 = intrm_sf_mf_350 * intrm_sf_mf_350 ; t111 = ( ( (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - ( - X [ 172ULL ] / 0.64 ) / ( U_idx_1
== 0.0 ? 1.0E-16 : U_idx_1 ) ) * t401 * 2.0 / 2.0 / ( t384 == 0.0 ? 1.0E-16 :
t384 ) ) + - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ?
1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t384 == 0.0 ? 1.0E-16 : t384 ) *
intermediate_der2138 ) * ( 1.0 - intermediate_der5173 * t128 ) + - ( t128 *
intermediate_der2138 ) * ( intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] /
0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - X [
172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) /
2.0 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) ) * 9.9999999999999991E-11 ; } else
{ t111 = 0.0 ; } t112 = - intermediate_der2138 * ( 1.0 - intermediate_der5173
) * 2.0 ; t115 = t132 * t112 ; t306 = ( X [ 24ULL ] - X [ 179ULL ] ) * ( t135
>= t129 ? ( ( 1.0 - intermediate_der5173 * intermediate_der8661 ) *
intermediate_der2138 + - ( intermediate_der8661 * intermediate_der2138 ) * (
intermediate_der5173 + 1.0 ) ) - ( ( 1.0 - intermediate_der5173 * t128 ) *
intermediate_der2138 * 2.0 + - ( t128 * intermediate_der2138 ) *
intermediate_der5173 * 2.0 ) : t112 ) ; if ( X [ 24ULL ] - X [ 179ULL ] <=
0.0 ) { t407 = t115 ; } else if ( X [ 24ULL ] - X [ 179ULL ] >= t132 ) { t407
= t306 ; } else { t407 = ( 1.0 - t347 ) * t115 + t306 * t347 ; }
intermediate_der2138 = ( X [ 179ULL ] - X [ 24ULL ] ) * ( t373 >= t129 ? ( (
1.0 - intermediate_der5173 * t128 ) * intermediate_der2138 + - ( t128 *
intermediate_der2138 ) * ( intermediate_der5173 + 1.0 ) ) - ( ( 1.0 -
intermediate_der5173 * intermediate_der8661 ) * intermediate_der2138 * 2.0 +
- ( intermediate_der8661 * intermediate_der2138 ) * intermediate_der5173 *
2.0 ) : t112 ) ; if ( X [ 179ULL ] - X [ 24ULL ] <= 0.0 ) { t112 = t115 ; }
else if ( X [ 179ULL ] - X [ 24ULL ] >= t132 ) { t112 = intermediate_der2138
; } else { t112 = ( 1.0 - t358 ) * t115 + intermediate_der2138 * t358 ; } if
( X [ 24ULL ] > X [ 179ULL ] ) { intermediate_der2138 = t407 ; } else {
intermediate_der2138 = X [ 24ULL ] < X [ 179ULL ] ? t112 : t115 ; } U_idx_2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; t407 = X [ 369ULL ] /
( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) * ( - X [ 366ULL ] / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 ; if ( X [ 335ULL ] > 0.0 ) {
t306 = - ( t315 * t407 ) * ( t315 + 1.0 ) * ( X [ 335ULL ] / 0.64 / ( t150 ==
0.0 ? 1.0E-16 : t150 ) * ( X [ 335ULL ] / 0.64 / ( t150 == 0.0 ? 1.0E-16 :
t150 ) ) / 2.0 / ( t160 == 0.0 ? 1.0E-16 : t160 ) ) * 9.9999999999999991E-11
; } else { t306 = 0.0 ; } intermediate_der6663 = 0.0050000000000000044 ; t410
= t164 * intermediate_der6663 ; t119 = ( t310 >= t164 ? t310 : t164 ) * 10.0
+ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * (
t310 >= t164 ? - ( t315 * t407 ) * ( t315 + 1.0 ) : 0.0 ) ; t310 = t165 *
t165 ; intermediate_der5173 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) / ( t310 ==
0.0 ? 1.0E-16 : t310 ) * intermediate_der6663 + 10.0 / ( t165 == 0.0 ?
1.0E-16 : t165 ) ; intermediate_der8661 = intermediate_der5173 *
intrm_sf_mf_1161 * 6.0 - intrm_sf_mf_1161 * intrm_sf_mf_1161 *
intermediate_der5173 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intermediate_der5173 = t410 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t165 ) {
intermediate_der5173 = t119 ; } else { intermediate_der5173 = ( ( -
intermediate_der8661 * t166 + ( 1.0 - t174 ) * t410 ) + t173 *
intermediate_der8661 ) + t119 * t174 ; } t407 = - 10.0 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t164 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 : t164 ) + (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t164 ? - (
- ( t315 * t407 ) * t315 * 2.0 ) : 0.0 ) ; t119 = - ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) / ( t310 == 0.0 ?
1.0E-16 : t310 ) * intermediate_der6663 + - 10.0 / ( t165 == 0.0 ? 1.0E-16 :
t165 ) ; intermediate_der8661 = t119 * t163 * 6.0 - t163 * t163 * t119 * 6.0
; if ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0
) { t119 = t410 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= t165 ) { t119 = t407
; } else { t119 = ( ( - intermediate_der8661 * t166 + ( 1.0 - t175 ) * t410 )
+ t326 * intermediate_der8661 ) + t407 * t175 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) { t407 =
intermediate_der5173 ; } else { t407 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ? t119 : t410
; } t315 = ( t165 - ( - t165 ) ) * ( t165 - ( - t165 ) ) ; t410 = (
intermediate_der6663 - ( - intermediate_der6663 ) ) * ( - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) - ( - t165
) ) / ( t315 == 0.0 ? 1.0E-16 : t315 ) ) + ( 10.0 - ( - intermediate_der6663
) ) / ( t182 == 0.0 ? 1.0E-16 : t182 ) ; intermediate_der6663 = t410 *
intrm_sf_mf_1167 * 6.0 - intrm_sf_mf_1167 * intrm_sf_mf_1167 * t410 * 6.0 ;
if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= -
t165 ) { t410 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t165 ) {
t410 = 10.0 ; } else { t410 = ( - intermediate_der6663 * 1.01325 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p * intermediate_der6663
) + 10.0 * ( intrm_sf_mf_1167 * intrm_sf_mf_1167 * 3.0 - intrm_sf_mf_1167 *
intrm_sf_mf_1167 * intrm_sf_mf_1167 * 2.0 ) ; } if ( U_idx_9 >= 1.0 ) {
intermediate_der6663 = 0.0 ; } else { intermediate_der6663 = ( real_T ) ! (
U_idx_9 <= 0.0 ) ; } if ( M [ 178ULL ] != 0 ) { intermediate_der5173 = 0.0 ;
} else { intermediate_der5173 = ( real_T ) ( M [ 179ULL ] == 0 ) ; }
tlu2_1d_linear_linear_value ( & q_efOut [ 0ULL ] , & t5 . mField1 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = q_efOut [ 0 ] ;
intermediate_der5173 = t71_idx_0 * ( U_idx_4 >= 0.0 ? intermediate_der5173 :
0.0 ) ; if ( M [ 205ULL ] != 0 ) { t119 = 0.0 ; } else { t119 = ( real_T ) (
M [ 206ULL ] == 0 ) ; } tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , &
t6 . mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField4 , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t71_idx_0 = r_efOut [
0 ] ; t119 = t71_idx_0 * ( U_idx_6 >= 0.0 ? t119 : 0.0 ) ; t358 = X [ 343ULL
] * t327 ; t315 = - ( X [ 343ULL ] * t327 ) ; t326 = ( ( ( real_T ) ( M [
7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t358 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t315 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 + ( ( real_T ) ( M [ 7ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t358 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t315 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 ) * ( - X [ 335ULL ] /
0.0019634954084936209 ) * ( - X [ 335ULL ] / 0.0019634954084936209 ) ; t128 =
- 10.0 / ( U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5 ) ; t129 = t128 * zc_int263 *
6.0 - zc_int263 * zc_int263 * t128 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke <= t341 * -
0.95 ) { t128 = 10.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke >= - t341 ) {
t128 = 0.0 ; } else { t128 = ( - t129 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke + ( 1.0 - (
zc_int263 * zc_int263 * 3.0 - zc_int263 * zc_int263 * zc_int263 * 2.0 ) ) *
10.0 ) + t129 * t335 ; } t129 = ( ( ( real_T ) ( M [ 7ULL ] != 0 ) * 2.0 -
1.0 ) * ( t358 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * (
t315 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 + ( ( real_T ) ( M [
7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t358 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t315 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 ) * ( X [ 335ULL ] /
0.0019634954084936209 ) * ( X [ 335ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 ; t347 = pmf_sqrt ( ( ( real_T ) ( M [ 9ULL ] != 0 ) *
2.0 - 1.0 ) * ( t180 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) ; t341 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; t132 =
pmf_sqrt ( ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t180 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * 10.0 * t150 * 0.64 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( (
real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( - ( t160 * 2.0 ) / ( t341 ==
0.0 ? 1.0E-16 : t341 ) ) * ( 1.0 / ( t347 == 0.0 ? 1.0E-16 : t347 ) ) * t407
* t150 * 0.32 ; t407 = t132 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ; t135 =
t407 * t96 * 6.0 - t96 * t96 * t407 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 0.95 ) {
t407 = t132 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) { t407 =
0.0 ; } else { t407 = ( ( - t135 * zc_int260 + ( 1.0 - ( t96 * t96 * 3.0 -
t96 * t96 * t96 * 2.0 ) ) * t132 ) + t135 * zc_int269 ) * 100000.0 ; } t135 =
- t132 / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ; t373 = t135 * t149 * 6.0 -
t149 * t149 * t135 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 0.95 ) {
t135 = t132 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) { t135 =
0.0 ; } else { t135 = ( ( - t373 * zc_int260 + ( 1.0 - ( t149 * t149 * 3.0 -
t149 * t149 * t149 * 2.0 ) ) * t132 ) + - zc_int269 * t373 ) * 100000.0 ; }
t373 = pmf_sqrt ( ( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( t124 /
( t390 == 0.0 ? 1.0E-16 : t390 ) ) ) ; t358 = t390 * t390 ; t400 = ( X [
131ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 -
1.0 ) * ( t124 / ( t390 == 0.0 ? 1.0E-16 : t390 ) ) ) * t199 * 0.64 + ( X [
131ULL ] - 1.01325 ) * ( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( -
( t400 * 2.0 ) / ( t358 == 0.0 ? 1.0E-16 : t358 ) ) * ( 1.0 / ( t373 == 0.0 ?
1.0E-16 : t373 ) ) * intermediate_der1365 * t102 * 0.32 ;
intermediate_der1365 = pmf_sqrt ( ( ( real_T ) ( M [ 112ULL ] != 0 ) * 2.0 -
1.0 ) * ( t121 / ( t107 == 0.0 ? 1.0E-16 : t107 ) / ( X [ 152ULL ] == 0.0 ?
1.0E-16 : X [ 152ULL ] ) ) ) * t199 * 0.64 ; t347 = ( t159 - t159 * 0.95 ) *
( t159 - t159 * 0.95 ) ; t107 = ( intermediate_der1365 - intermediate_der1365
* 0.95 ) * ( - ( t157 - t159 * 0.95 ) / ( t347 == 0.0 ? 1.0E-16 : t347 ) ) +
( t400 - intermediate_der1365 * 0.95 ) / ( t210 == 0.0 ? 1.0E-16 : t210 ) ;
t390 = t107 * t162 * 6.0 - t162 * t162 * t107 * 6.0 ; if ( t103 <= t105 *
0.95 ) { t107 = t400 * 100000.0 ; } else if ( t103 >= t105 ) { t107 =
intermediate_der1365 * 100000.0 ; } else { t107 = ( ( ( - t390 * t157 + ( 1.0
- t177 ) * t400 ) + t390 * t159 ) + intermediate_der1365 * t177 ) * 100000.0
; } t390 = ( intermediate_der1365 - intermediate_der1365 * 0.95 ) * ( - ( -
t157 - t159 * 0.95 ) / ( t347 == 0.0 ? 1.0E-16 : t347 ) ) + ( - t400 -
intermediate_der1365 * 0.95 ) / ( t210 == 0.0 ? 1.0E-16 : t210 ) ; t132 =
t390 * t181 * 6.0 - t181 * t181 * t390 * 6.0 ; if ( - t103 <= t105 * 0.95 ) {
t390 = t400 * 100000.0 ; } else if ( - t103 >= t105 ) { t390 = -
intermediate_der1365 * 100000.0 ; } else { t390 = ( ( ( - t132 * t157 + ( 1.0
- t184 ) * t400 ) + - t159 * t132 ) + - intermediate_der1365 * t184 ) *
100000.0 ; } t132 = pmf_sqrt ( ( ( real_T ) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0
) * ( t142 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) ; t373 = - ( t384 * 2.0 ) ; t384 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
intermediate_der1365 = ( X [ 24ULL ] - X [ 179ULL ] ) * pmf_sqrt ( ( ( real_T
) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0 ) * ( t142 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * t401 * 0.64 + ( X [ 24ULL ] - X [ 179ULL ] ) * ( ( real_T ) ( M [ 162ULL
] != 0 ) * 2.0 - 1.0 ) * ( t373 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) * ( 1.0
/ ( t132 == 0.0 ? 1.0E-16 : t132 ) ) * intermediate_der2138 * intrm_sf_mf_350
* 0.32 ; intermediate_der2138 = pmf_sqrt ( ( ( real_T ) ( M [ 163ULL ] != 0 )
* 2.0 - 1.0 ) * ( t139 / ( t122 == 0.0 ? 1.0E-16 : t122 ) / ( X [ 200ULL ] ==
0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ) * t401 * 0.64 ; t132 = ( t188 - t188 *
0.95 ) * ( t188 - t188 * 0.95 ) ; t105 = ( intermediate_der2138 -
intermediate_der2138 * 0.95 ) * ( - ( t186 - t188 * 0.95 ) / ( t132 == 0.0 ?
1.0E-16 : t132 ) ) + ( intermediate_der1365 - intermediate_der2138 * 0.95 ) /
( t218 == 0.0 ? 1.0E-16 : t218 ) ; t400 = t105 * t190 * 6.0 - t190 * t190 *
t105 * 6.0 ; if ( t394 <= t392 * 0.95 ) { t105 = intermediate_der1365 *
100000.0 ; } else if ( t394 >= t392 ) { t105 = intermediate_der2138 *
100000.0 ; } else { t105 = ( ( ( - t400 * t186 + ( 1.0 - t191 ) *
intermediate_der1365 ) + t400 * t188 ) + intermediate_der2138 * t191 ) *
100000.0 ; } t400 = ( intermediate_der2138 - intermediate_der2138 * 0.95 ) *
( - ( - t186 - t188 * 0.95 ) / ( t132 == 0.0 ? 1.0E-16 : t132 ) ) + ( -
intermediate_der1365 - intermediate_der2138 * 0.95 ) / ( t218 == 0.0 ?
1.0E-16 : t218 ) ; t122 = t400 * t193 * 6.0 - t193 * t193 * t400 * 6.0 ; if (
- t394 <= t392 * 0.95 ) { t400 = intermediate_der1365 * 100000.0 ; } else if
( - t394 >= t392 ) { t400 = - intermediate_der2138 * 100000.0 ; } else { t400
= ( ( ( - t122 * t186 + ( 1.0 - t194 ) * intermediate_der1365 ) + - t188 *
t122 ) + - intermediate_der2138 * t194 ) * 100000.0 ; } t74 [ 0ULL ] = X [
249ULL ] ; t50 [ 0 ] = 5ULL ; tlu2_linear_nearest_prelookup ( & s_efOut .
mField0 [ 0ULL ] , & s_efOut . mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL
] , & t75 [ 0ULL ] , & t74 [ 0ULL ] , & t50 [ 0ULL ] , & t10 [ 0ULL ] ) ; t5
= s_efOut ; t74 [ 0ULL ] = U_idx_3 * 837.75804095727813 * 0.99999999999999978
/ 0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978 ; t53 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & t_efOut . mField0 [ 0ULL ] , &
t_efOut . mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , & nonscalar38 [
0ULL ] , & t74 [ 0ULL ] , & t53 [ 0ULL ] , & t10 [ 0ULL ] ) ; t6 = t_efOut ;
if ( M [ 165ULL ] != 0 ) { intermediate_der1365 = - ( ( X [ 63ULL ] -
Fuel_Cell_Boost_Converter_L_i ) * intermediate_der6663 * 0.001 ) ; } else {
intermediate_der1365 = - ( ( Fuel_Cell_Boost_Converter_L_i * 0.001 + X [
58ULL ] ) * intermediate_der6663 ) ; } intermediate_der2138 = t103 >= 0.0 ? -
t107 : - t390 ; t390 = t102 * t102 ; t103 = t394 >= 0.0 ? - t105 : - t400 ;
t400 = intrm_sf_mf_350 * intrm_sf_mf_350 ; t394 = ( ( real_T ) ( M [ 167ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t126 / ( X [ 201ULL ] == 0.0 ? 1.0E-16 : X [ 201ULL
] ) ) * ( t126 / ( X [ 201ULL ] == 0.0 ? 1.0E-16 : X [ 201ULL ] ) ) * ( - X [
172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) *
( - ( - X [ 172ULL ] / 0.64 ) / ( t400 == 0.0 ? 1.0E-16 : t400 ) ) * t401 *
2.0 ; tlu2_2d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t5 . mField0 [
0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t50 [ 0ULL ] , &
t53 [ 0ULL ] , & t10 [ 0ULL ] ) ; t74 [ 0 ] = u_efOut [ 0 ] ; t75 [ 0ULL ] =
- ( ( ( 1.0 - X [ 37ULL ] ) * ( - 164.72089615570803 / ( t93 == 0.0 ? 1.0E-16
: t93 ) ) + - X [ 36ULL ] * ( - 3827.6794129126583 / ( t93 == 0.0 ? 1.0E-16 :
t93 ) ) ) / 12.896402563644669 ) ; t75 [ 1ULL ] = - ( ( ( ( t143 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * ( 1.0 - X [ 37ULL
] ) + - X [ 36ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_g_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) / 2246.65922904024 )
; t75 [ 2ULL ] = - X [ 37ULL ] ; t75 [ 3ULL ] = - X [ 36ULL ] ; t75 [ 4ULL ]
= t99 ; t76 [ 0ULL ] = - ( ( 1.0 - X [ 43ULL ] ) * ( - 164.72089615570803 / (
intrm_sf_mf_875 == 0.0 ? 1.0E-16 : intrm_sf_mf_875 ) ) + - X [ 42ULL ] * (
36.965491221318985 / ( intrm_sf_mf_875 == 0.0 ? 1.0E-16 : intrm_sf_mf_875 ) )
) ; t76 [ 1ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I - t144 ) * ( 1.0 - X
[ 43ULL ] ) + - X [ 42ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - t144 ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) / 2172.7681408465714
) ; t76 [ 2ULL ] = - X [ 43ULL ] ; t76 [ 3ULL ] = - X [ 42ULL ] ; t76 [ 4ULL
] = t176 ; t77 [ 0ULL ] = - ( ( - X [ 335ULL ] + intrm_sf_mf_1080 ) / 2.0 * (
t326 / 2.0 * 9.999999999999999E-14 ) ) ; t77 [ 1ULL ] = - X [ 335ULL ] >= 0.0
? - 10.0 : - t128 ; t77 [ 2ULL ] = - ( ( X [ 335ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 ) / 2.0 *
t129 ) ; t77 [ 3ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val21 >= 0.0 ? -
t407 : - t135 ; t77 [ 4ULL ] = - ( t410 - t306 ) ; t400 = X [ 369ULL ] * t158
; t401 = - ( X [ 369ULL ] * t158 ) ; t77 [ 5ULL ] = - ( ( ( ( real_T ) ( M [
11ULL ] != 0 ) * 2.0 - 1.0 ) * ( t400 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t401 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 + ( ( real_T ) ( M [ 11ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t400 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t401 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 10.0 ) * ( X [ 335ULL ] / 0.64 /
0.0019634954084936209 ) * ( X [ 335ULL ] / 0.64 / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 ) ; t58 [ 0ULL ] = intermediate_der2138 ; t58 [
1ULL ] = U_idx_8 ; t58 [ 2ULL ] = - ( ( ( real_T ) ( M [ 145ULL ] != 0 ) *
2.0 - 1.0 ) * ( t109 / ( X [ 153ULL ] == 0.0 ? 1.0E-16 : X [ 153ULL ] ) ) * (
t109 / ( X [ 153ULL ] == 0.0 ? 1.0E-16 : X [ 153ULL ] ) ) * ( X [ 122ULL ] /
0.64 / ( t102 == 0.0 ? 1.0E-16 : t102 ) ) * ( - ( X [ 122ULL ] / 0.64 ) / (
t390 == 0.0 ? 1.0E-16 : t390 ) ) * t199 * 2.0 / 2.0 * 9.999999999999999E-14 )
; t58 [ 3ULL ] = t103 ; t58 [ 4ULL ] = t111 ; t58 [ 5ULL ] = - ( t394 / 2.0 *
9.999999999999999E-14 ) ; t58 [ 6ULL ] = - ( t74 [ 0ULL ] *
837.75804095727813 ) ; for ( t83 = 0ULL ; t83 < 5ULL ; t83 ++ ) { t58 [ t83 +
7ULL ] = t75 [ t83 ] ; } t58 [ 12ULL ] = U_idx_4 * intermediate_der5173 ; for
( t83 = 0ULL ; t83 < 5ULL ; t83 ++ ) { t58 [ t83 + 13ULL ] = t76 [ t83 ] ; }
t58 [ 18ULL ] = U_idx_6 * t119 ; for ( t83 = 0ULL ; t83 < 6ULL ; t83 ++ ) {
t58 [ t83 + 19ULL ] = t77 [ t83 ] ; } out . mX [ 0 ] = t58 [ 0 ] ; out . mX [
1 ] = t58 [ 1 ] ; out . mX [ 2 ] = t58 [ 2 ] ; out . mX [ 3 ] = t58 [ 3 ] ;
out . mX [ 4 ] = t58 [ 4 ] ; out . mX [ 5 ] = t58 [ 5 ] ; out . mX [ 6 ] =
t58 [ 6 ] ; out . mX [ 7 ] = t58 [ 7 ] ; out . mX [ 8 ] = t58 [ 8 ] ; out .
mX [ 9 ] = t58 [ 9 ] ; out . mX [ 10 ] = t58 [ 10 ] ; out . mX [ 11 ] = t58 [
11 ] ; out . mX [ 12 ] = t58 [ 12 ] ; out . mX [ 13 ] = t58 [ 13 ] ; out . mX
[ 14 ] = t58 [ 14 ] ; out . mX [ 15 ] = t58 [ 15 ] ; out . mX [ 16 ] = t58 [
16 ] ; out . mX [ 17 ] = t58 [ 17 ] ; out . mX [ 18 ] = t58 [ 18 ] ; out . mX
[ 19 ] = t58 [ 19 ] ; out . mX [ 20 ] = t58 [ 20 ] ; out . mX [ 21 ] = t58 [
21 ] ; out . mX [ 22 ] = t58 [ 22 ] ; out . mX [ 23 ] = t58 [ 23 ] ; out . mX
[ 24 ] = t58 [ 24 ] ; out . mX [ 25 ] = intermediate_der1365 ; out . mX [ 26
] = - ( Fuel_Cell_Boost_Converter_L_i * intermediate_der6663 ) ; ( void ) LC
; ( void ) t412 ; return 0 ; }
