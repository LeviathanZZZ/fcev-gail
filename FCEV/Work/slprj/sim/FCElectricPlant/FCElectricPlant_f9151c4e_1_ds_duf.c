#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_duf.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t417 , NeDsMethodOutput * t418 ) { ETTS0 e_efOut
; ETTS0 efOut ; ETTS0 i_efOut ; ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 s_efOut
; ETTS0 t5 ; ETTS0 t6 ; ETTS0 t_efOut ; PmRealVector out ; real_T X [ 399 ] ;
real_T t59 [ 28 ] ; real_T t78 [ 6 ] ; real_T t76 [ 5 ] ; real_T t77 [ 5 ] ;
real_T nonscalar38 [ 3 ] ; real_T b_efOut [ 1 ] ; real_T c_efOut [ 1 ] ;
real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T l_efOut
[ 1 ] ; real_T n_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T q_efOut [ 1 ] ;
real_T r_efOut [ 1 ] ; real_T t50 [ 1 ] ; real_T u_efOut [ 1 ] ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ;
real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intermediate_der1307 ; real_T intermediate_der1331 ; real_T
intermediate_der2138 ; real_T intermediate_der2362 ; real_T
intermediate_der4559 ; real_T intermediate_der5173 ; real_T
intermediate_der6445 ; real_T intermediate_der6663 ; real_T
intermediate_der8661 ; real_T intermediate_der8894 ; real_T
intermediate_der8904 ; real_T intermediate_der9874 ; real_T
intermediate_der9915 ; real_T intrm_sf_mf_1080 ; real_T intrm_sf_mf_1161 ;
real_T intrm_sf_mf_1167 ; real_T intrm_sf_mf_350 ; real_T intrm_sf_mf_875 ;
real_T t100 ; real_T t103 ; real_T t108 ; real_T t111 ; real_T t113 ; real_T
t121 ; real_T t122 ; real_T t123 ; real_T t124 ; real_T t126 ; real_T t128 ;
real_T t137 ; real_T t141 ; real_T t142 ; real_T t144 ; real_T t147 ; real_T
t149 ; real_T t152 ; real_T t156 ; real_T t158 ; real_T t159 ; real_T t160 ;
real_T t161 ; real_T t162 ; real_T t164 ; real_T t165 ; real_T t166 ; real_T
t167 ; real_T t168 ; real_T t175 ; real_T t176 ; real_T t177 ; real_T t178 ;
real_T t179 ; real_T t182 ; real_T t183 ; real_T t184 ; real_T t186 ; real_T
t188 ; real_T t190 ; real_T t192 ; real_T t193 ; real_T t195 ; real_T t196 ;
real_T t220 ; real_T t265 ; real_T t313 ; real_T t322 ; real_T t329 ; real_T
t330 ; real_T t338 ; real_T t344 ; real_T t350 ; real_T t357 ; real_T t372 ;
real_T t380 ; real_T t398 ; real_T t400 ; real_T t405 ; real_T t407 ; real_T
t413 ; real_T t415 ; real_T t71_idx_0 ; real_T t8 ; real_T t88 ; real_T t94 ;
real_T zc_int260 ; real_T zc_int263 ; size_t t11 [ 1 ] ; size_t t51 [ 1 ] ;
size_t t54 [ 1 ] ; size_t t84 ; int32_T M [ 218 ] ; int32_T b ; for ( b = 0 ;
b < 218 ; b ++ ) { M [ b ] = t417 -> mM . mX [ b ] ; } U_idx_0 = t417 -> mU .
mX [ 0 ] ; U_idx_1 = t417 -> mU . mX [ 1 ] ; U_idx_2 = t417 -> mU . mX [ 2 ]
; U_idx_3 = t417 -> mU . mX [ 3 ] ; U_idx_4 = t417 -> mU . mX [ 4 ] ; U_idx_5
= t417 -> mU . mX [ 5 ] ; U_idx_6 = t417 -> mU . mX [ 6 ] ; U_idx_7 = t417 ->
mU . mX [ 7 ] ; U_idx_8 = t417 -> mU . mX [ 8 ] ; U_idx_9 = t417 -> mU . mX [
9 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t417 -> mX . mX [ b ] ; }
out = t418 -> mDUF ; t76 [ 0 ] = 1.0 ; t76 [ 1 ] = 1.25 ; t76 [ 2 ] = 1.5 ;
t76 [ 3 ] = 1.75 ; t76 [ 4 ] = 2.0 ; nonscalar38 [ 0 ] = 0.0 ; nonscalar38 [
1 ] = 188.49555921538757 ; nonscalar38 [ 2 ] = 376.99111843077515 ;
intermediate_der9874 = - X [ 53ULL ] - U_idx_0 ; t8 = ( ( ( real_T ) (
intermediate_der9874 >= 0.0 ) * intermediate_der9874 * 1000.0 + ( real_T ) (
intermediate_der9874 < 0.0 ) * X [ 55ULL ] ) - 0.9 ) / 0.099999999999999978 ;
Fuel_Cell_Boost_Converter_L_i = X [ 61ULL ] * 1.0E-9 + X [ 4ULL ] ;
intermediate_der1331 = U_idx_1 * 0.031415926535897927 ; if (
intermediate_der1331 * 0.0001 <= 7.8539816339744857E-13 ) { t103 =
7.8539816339744857E-13 ; } else if ( intermediate_der1331 * 0.0001 >=
3.1415926535897929E-6 ) { t103 = 3.1415926535897929E-6 ; } else { t103 =
intermediate_der1331 * 0.0001 ; } intermediate_der2138 = t103 /
7.8539816339744827E-5 ; if ( X [ 154ULL ] <= 0.0 ) { intermediate_der9915 =
0.0 ; } else { intermediate_der9915 = X [ 154ULL ] >= 1.0 ? 1.0 : X [ 154ULL
] ; } if ( X [ 155ULL ] <= 0.0 ) { t108 = 0.0 ; } else { t108 = X [ 155ULL ]
>= 1.0 ? 1.0 : X [ 155ULL ] ; } t405 = ( ( ( 1.0 - intermediate_der9915 ) -
t108 ) * 296.802103844292 + intermediate_der9915 * 461.523 ) + t108 *
4124.48151675695 ; t111 = X [ 152ULL ] * t405 ; t407 = X [ 153ULL ] / ( t111
== 0.0 ? 1.0E-16 : t111 ) ; t413 = X [ 153ULL ] / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) * ( X [ 156ULL ] / ( X [ 152ULL ] == 0.0 ? 1.0E-16 :
X [ 152ULL ] ) ) ; t113 = X [ 153ULL ] / 1.01325 * ( X [ 157ULL ] / ( X [
152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ; intermediate_der4559 = ( X [
131ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; intermediate_der2362 = (
1.0 - intermediate_der2138 ) * ( 1.0 - intermediate_der2138 ) ; t415 =
intermediate_der4559 * intermediate_der2362 ; t265 = ( intermediate_der2138 +
1.0 ) * ( 1.0 - intermediate_der2138 * t413 ) - ( 1.0 - intermediate_der2138
* t113 ) * intermediate_der2138 * 2.0 ; intermediate_der6445 = ( X [ 131ULL ]
- 1.01325 ) * ( t265 >= intermediate_der2362 ? t265 : intermediate_der2362 )
; intrm_sf_mf_350 = ( X [ 131ULL ] - 1.01325 ) / ( intermediate_der4559 ==
0.0 ? 1.0E-16 : intermediate_der4559 ) ; intermediate_der6663 =
intrm_sf_mf_350 * intrm_sf_mf_350 * 3.0 - intrm_sf_mf_350 * intrm_sf_mf_350 *
intrm_sf_mf_350 * 2.0 ; if ( X [ 131ULL ] - 1.01325 <= 0.0 ) {
intrm_sf_mf_350 = t415 ; } else if ( X [ 131ULL ] - 1.01325 >=
intermediate_der4559 ) { intrm_sf_mf_350 = intermediate_der6445 ; } else {
intrm_sf_mf_350 = ( 1.0 - intermediate_der6663 ) * t415 +
intermediate_der6445 * intermediate_der6663 ; } intermediate_der6445 = (
intermediate_der2138 + 1.0 ) * ( 1.0 - intermediate_der2138 * t113 ) - ( 1.0
- intermediate_der2138 * t413 ) * intermediate_der2138 * 2.0 ; t398 = (
1.01325 - X [ 131ULL ] ) * ( intermediate_der6445 >= intermediate_der2362 ?
intermediate_der6445 : intermediate_der2362 ) ; intermediate_der5173 = (
1.01325 - X [ 131ULL ] ) / ( intermediate_der4559 == 0.0 ? 1.0E-16 :
intermediate_der4559 ) ; t121 = intermediate_der5173 * intermediate_der5173 *
3.0 - intermediate_der5173 * intermediate_der5173 * intermediate_der5173 *
2.0 ; if ( 1.01325 - X [ 131ULL ] <= 0.0 ) { intermediate_der5173 = t415 ; }
else if ( 1.01325 - X [ 131ULL ] >= intermediate_der4559 ) {
intermediate_der5173 = t398 ; } else { intermediate_der5173 = ( 1.0 - t121 )
* t415 + t398 * t121 ; } if ( X [ 131ULL ] > 1.01325 ) { t398 =
intrm_sf_mf_350 ; } else { t398 = X [ 131ULL ] < 1.01325 ?
intermediate_der5173 : t415 ; } if ( X [ 152ULL ] <= 216.59999999999997 ) {
t415 = 216.59999999999997 ; } else { t415 = X [ 152ULL ] >= 623.15 ? 623.15 :
X [ 152ULL ] ; } t400 = t415 * t415 ; intrm_sf_mf_350 = ( ( (
1074.1165326382641 + t415 * - 0.2214565261064495 ) + t400 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der9915 ) - t108 ) + ( (
1479.6504774711011 + t415 * 1.2002114337048222 ) + t400 * -
0.00038614513167823636 ) * intermediate_der9915 ) + ( ( 12825.281119789837 +
t415 * 6.9647057412840034 ) + t400 * - 0.0070524868246844051 ) * t108 ; t122
= intrm_sf_mf_350 - t405 ; t123 = X [ 153ULL ] * X [ 153ULL ] * (
intrm_sf_mf_350 / ( t122 == 0.0 ? 1.0E-16 : t122 ) ) ; intermediate_der9915 =
pmf_sqrt ( fabs ( t123 / ( t405 == 0.0 ? 1.0E-16 : t405 ) / ( X [ 152ULL ] ==
0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ) * t103 * 0.64 ; t126 = t407 * 2.0 ; t108 =
( X [ 131ULL ] - 1.01325 ) * pmf_sqrt ( fabs ( t126 / ( t398 == 0.0 ? 1.0E-16
: t398 ) ) ) * t103 * 0.64 ; t415 = ( X [ 179ULL ] * - 0.7999998 + U_idx_2 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t415 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_350 =
7.8539816339744857E-13 ; } else if ( t415 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { intrm_sf_mf_350 = 3.1415926535897929E-6 ; } else {
intrm_sf_mf_350 = t415 * 7.8539816339744827E-5 ; } intermediate_der5173 =
intrm_sf_mf_350 / 7.8539816339744827E-5 ; if ( X [ 202ULL ] <= 0.0 ) { t400 =
0.0 ; } else { t400 = X [ 202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } if ( X [
203ULL ] <= 0.0 ) { t122 = 0.0 ; } else { t122 = X [ 203ULL ] >= 1.0 ? 1.0 :
X [ 203ULL ] ; } t124 = ( ( ( 1.0 - t400 ) - t122 ) * 296.802103844292 + t400
* 461.523 ) + t122 * 4124.48151675695 ; t128 = X [ 200ULL ] * t124 ; t380 = X
[ 201ULL ] / ( t128 == 0.0 ? 1.0E-16 : t128 ) ; intermediate_der8661 = X [
201ULL ] / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( X [ 204ULL ] /
( X [ 200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; intermediate_der8904 = X
[ 201ULL ] / ( X [ 179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) * ( X [ 205ULL
] / ( X [ 200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t88 = ( X [ 24ULL ]
+ X [ 179ULL ] ) / 2.0 * 0.0010000000000000009 ; intermediate_der8894 = ( 1.0
- intermediate_der5173 ) * ( 1.0 - intermediate_der5173 ) ; U_idx_0 = t88 *
intermediate_der8894 ; t137 = ( intermediate_der5173 + 1.0 ) * ( 1.0 -
intermediate_der5173 * intermediate_der8661 ) - ( 1.0 - intermediate_der5173
* intermediate_der8904 ) * intermediate_der5173 * 2.0 ; t372 = ( X [ 24ULL ]
- X [ 179ULL ] ) * ( t137 >= intermediate_der8894 ? t137 :
intermediate_der8894 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( X [ 24ULL ] - X [
179ULL ] ) / ( t88 == 0.0 ? 1.0E-16 : t88 ) ; t350 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 2.0 ; if ( X [ 24ULL
] - X [ 179ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = U_idx_0 ; } else if (
X [ 24ULL ] - X [ 179ULL ] >= t88 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = t372 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( 1.0 - t350 ) *
U_idx_0 + t372 * t350 ; } t372 = ( intermediate_der5173 + 1.0 ) * ( 1.0 -
intermediate_der5173 * intermediate_der8904 ) - ( 1.0 - intermediate_der5173
* intermediate_der8661 ) * intermediate_der5173 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
179ULL ] - X [ 24ULL ] ) * ( t372 >= intermediate_der8894 ? t372 :
intermediate_der8894 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = ( X [ 179ULL ] - X
[ 24ULL ] ) / ( t88 == 0.0 ? 1.0E-16 : t88 ) ; t357 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 2.0 ; if ( X [
179ULL ] - X [ 24ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = U_idx_0 ; } else if
( X [ 179ULL ] - X [ 24ULL ] >= t88 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = ( 1.0 - t357 ) *
U_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t357 ; } if ( X [ 24ULL ] > X [ 179ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 24ULL ]
< X [ 179ULL ] ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I :
U_idx_0 ; } if ( X [ 200ULL ] <= 216.59999999999997 ) { U_idx_0 =
216.59999999999997 ; } else { U_idx_0 = X [ 200ULL ] >= 623.15 ? 623.15 : X [
200ULL ] ; } t94 = U_idx_0 * U_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( ( (
1074.1165326382641 + U_idx_0 * - 0.2214565261064495 ) + t94 *
0.00037212980109014541 ) * ( ( 1.0 - t400 ) - t122 ) + ( ( 1479.6504774711011
+ U_idx_0 * 1.2002114337048222 ) + t94 * - 0.00038614513167823636 ) * t400 )
+ ( ( 12825.281119789837 + U_idx_0 * 6.9647057412840034 ) + t94 * -
0.0070524868246844051 ) * t122 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I - t124 ; t141 = X [
201ULL ] * X [ 201ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) ) ; t400 = pmf_sqrt (
fabs ( t141 / ( t124 == 0.0 ? 1.0E-16 : t124 ) / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ) ) * intrm_sf_mf_350 * 0.64 ; t144 = t380 * 2.0 ;
t122 = ( X [ 24ULL ] - X [ 179ULL ] ) * pmf_sqrt ( fabs ( t144 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * intrm_sf_mf_350 * 0.64 ; if ( X [ 37ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = X [ 37ULL ] >= 1.0 ?
1.0 : X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = X [ 36ULL ] >= 1.0
? 1.0 : X [ 36ULL ] ; } t94 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * 296.802103844292
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 4124.48151675695 ;
t50 [ 0ULL ] = X [ 35ULL ] ; t51 [ 0 ] = 52ULL ; t11 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t50 [ 0ULL ] , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t6 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & c_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = c_efOut [ 0 ] ; t142 =
t71_idx_0 ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t6 . mField0
[ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * t142 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) + t71_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) - X [ 35ULL ] * t94
* 0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = t142 - X
[ 35ULL ] * 0.296802103844292 ; t142 = t71_idx_0 - X [ 35ULL ] *
4.12448151675695 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I - X [ 35ULL ] *
0.461523 ; if ( X [ 43ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = X [ 43ULL ] >= 1.0 ?
1.0 : X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = X [ 42ULL ] >= 1.0
? 1.0 : X [ 42ULL ] ; } intrm_sf_mf_875 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I ) * 296.802103844292
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I * 259.836612622973 ;
t50 [ 0ULL ] = X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & e_efOut .
mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t50 [ 0ULL ] , & t51 [
0ULL ] , & t11 [ 0ULL ] ) ; t6 = e_efOut ; tlu2_1d_linear_linear_value ( &
f_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t51 [ 0ULL ] , & t11 [ 0ULL ] )
; t71_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & g_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = g_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t71_idx_0 ;
tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) + t71_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I ) - X [ 41ULL ] *
intrm_sf_mf_875 * 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - X [ 41ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I =
t71_idx_0 - X [ 41ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 - X [ 41ULL ]
* 0.461523 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2
= pmf_sqrt ( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = ( X [ 344ULL ] *
0.07812500122070315 + U_idx_8 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
47ULL ] <= 0.0 ) { t338 = 0.0 ; } else { t338 = X [ 47ULL ] >= 1.0 ? 1.0 : X
[ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) { t344 = 0.0 ; } else { t344 = X [
48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } zc_int263 = ( ( ( 1.0 - t338 ) - t344
) * 296.802103844292 + t338 * 461.523 ) + t344 * 259.836612622973 ; if ( X [
350ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = X [
350ULL ] >= 1.0 ? 1.0 : X [ 350ULL ] ; } if ( X [ 351ULL ] <= 0.0 ) { U_idx_2
= 0.0 ; } else { U_idx_2 = X [ 351ULL ] >= 1.0 ? 1.0 : X [ 351ULL ] ; } t50 [
0ULL ] = X [ 45ULL ] ; tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [
0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t50 [ 0ULL ] , & t51 [ 0ULL ] ,
& t11 [ 0ULL ] ) ; t6 = i_efOut ; tlu2_1d_linear_nearest_value ( & j_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t51 [ 0ULL ] , & t11 [ 0ULL ] )
; t71_idx_0 = j_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL
] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField1 , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; U_idx_0 =
k_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField17 , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; U_idx_1 = l_efOut [ 0 ] ;
zc_int260 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ) - U_idx_2 )
* t71_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ) + U_idx_1 *
U_idx_2 ; intrm_sf_mf_1080 = X [ 45ULL ] * zc_int263 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = X [ 46ULL ]
/ ( intrm_sf_mf_1080 == 0.0 ? 1.0E-16 : intrm_sf_mf_1080 ) ; U_idx_2 = - ( (
X [ 45ULL ] / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) - X [ 352ULL ] /
( X [ 353ULL ] == 0.0 ? 1.0E-16 : X [ 353ULL ] ) ) * X [ 335ULL ] * zc_int263
) / 0.0019634954084936209 ; if ( X [ 352ULL ] <= 216.59999999999997 ) { t147
= 216.59999999999997 ; } else { t147 = X [ 352ULL ] >= 623.15 ? 623.15 : X [
352ULL ] ; } t149 = t147 * t147 ; intrm_sf_mf_1080 = ( ( ( 1074.1165326382641
+ t147 * - 0.2214565261064495 ) + t149 * 0.00037212980109014541 ) * ( ( 1.0 -
t338 ) - t344 ) + ( ( 1479.6504774711011 + t147 * 1.2002114337048222 ) + t149
* - 0.00038614513167823636 ) * t338 ) + ( ( 900.63941224838356 + t147 * -
0.044484923911382625 ) + t149 * 0.00036936011832044979 ) * t344 ; t322 =
intrm_sf_mf_1080 - zc_int263 ; t338 = intrm_sf_mf_1080 / ( t322 == 0.0 ?
1.0E-16 : t322 ) ; t344 = pmf_sqrt ( U_idx_2 * U_idx_2 *
9.999999999999999E-14 + fabs ( X [ 352ULL ] * t338 * zc_int263 ) * 1.0E-9 ) ;
U_idx_1 = X [ 353ULL ] * X [ 353ULL ] * t338 ; t147 = - pmf_sqrt ( fabs (
U_idx_1 / ( zc_int263 == 0.0 ? 1.0E-16 : zc_int263 ) / ( X [ 352ULL ] == 0.0
? 1.0E-16 : X [ 352ULL ] ) ) ) * 0.0019634954084936209 ; if ( t147 >= 0.0 ) {
intrm_sf_mf_1080 = t147 * 100000.0 ; } else { intrm_sf_mf_1080 = - t147 *
100000.0 ; } t159 = zc_int260 * 0.0019634954084936209 ; t149 =
intrm_sf_mf_1080 * 0.05 / ( t159 == 0.0 ? 1.0E-16 : t159 ) ; t161 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke *
9.8174770424681068E-6 ; t152 = t147 * zc_int260 * 35.2 / ( t161 == 0.0 ?
1.0E-16 : t161 ) ; t330 = t149 >= 1.0 ? t149 : 1.0 ; t162 = pmf_log10 ( 6.9 /
( t330 == 0.0 ? 1.0E-16 : t330 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t330 == 0.0 ? 1.0E-16 : t330 ) + 2.8767404433520813E-5 ) * 3.24 ; t164 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke *
3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = t147 *
intrm_sf_mf_1080 * ( 1.0 / ( t162 == 0.0 ? 1.0E-16 : t162 ) ) * 0.55 / ( t164
== 0.0 ? 1.0E-16 : t164 ) ; intrm_sf_mf_1080 = ( t149 - 2000.0 ) / 2000.0 ;
t330 = intrm_sf_mf_1080 * intrm_sf_mf_1080 * 3.0 - intrm_sf_mf_1080 *
intrm_sf_mf_1080 * intrm_sf_mf_1080 * 2.0 ; if ( t149 <= 2000.0 ) {
intrm_sf_mf_1080 = t152 * 1.0E-5 ; } else if ( t149 >= 4000.0 ) {
intrm_sf_mf_1080 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke * 1.0E-5 ; }
else { intrm_sf_mf_1080 = ( ( 1.0 - t330 ) * t152 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke * t330 ) *
1.0E-5 ; } t344 = - ( X [ 335ULL ] * t344 ) / 0.0019634954084936209 *
0.00031622776601683789 + intrm_sf_mf_1080 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - X [ 46ULL ] ; if ( X
[ 346ULL ] <= 0.0 ) { intrm_sf_mf_1080 = 0.0 ; } else { intrm_sf_mf_1080 = X
[ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } if ( X [ 345ULL ] <= 0.0 ) { t152
= 0.0 ; } else { t152 = X [ 345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ; } t330 = (
( ( 1.0 - intrm_sf_mf_1080 ) - t152 ) * 296.802103844292 + intrm_sf_mf_1080 *
461.523 ) + t152 * 259.836612622973 ; intrm_sf_mf_1080 = pmf_sqrt ( X [
335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 ) ; if ( X [ 344ULL ] *
0.0019634954084936209 <= 1.9634954084936209E-11 ) { t152 =
1.9634954084936209E-11 ; } else if ( X [ 344ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t152 = 0.0012566370614359179 ; } else { t152 = X [
344ULL ] * 0.0019634954084936209 ; } t322 = t152 / 0.0019634954084936209 ; if
( X [ 367ULL ] <= 0.0 ) { t156 = 0.0 ; } else { t156 = X [ 367ULL ] >= 1.0 ?
1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0 ) { t158 = 0.0 ; } else {
t158 = X [ 368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ; } t160 = ( ( ( 1.0 - t156 )
- t158 ) * 296.802103844292 + t156 * 461.523 ) + t158 * 259.836612622973 ;
t168 = X [ 365ULL ] * t160 ; t162 = X [ 366ULL ] / ( t168 == 0.0 ? 1.0E-16 :
t168 ) ; t329 = X [ 366ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * ( X [ 369ULL ] / (
X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ; t165 = X [ 366ULL ] /
1.01325 * ( X [ 370ULL ] / ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) )
; t167 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p + 1.01325 )
/ 2.0 * 0.0010000000000000009 ; t166 = ( 1.0 - t322 ) * ( 1.0 - t322 ) ; t168
= t167 * t166 ; t313 = ( t322 + 1.0 ) * ( 1.0 - t322 * t329 ) - ( 1.0 - t322
* t165 ) * t322 * 2.0 ; t175 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( t313 >=
t166 ? t313 : t166 ) ; intrm_sf_mf_1161 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) / ( t167 ==
0.0 ? 1.0E-16 : t167 ) ; t176 = intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 -
intrm_sf_mf_1161 * intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intrm_sf_mf_1167 = t168 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t167 ) {
intrm_sf_mf_1167 = t175 ; } else { intrm_sf_mf_1167 = ( 1.0 - t176 ) * t168 +
t175 * t176 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 = ( t322 +
1.0 ) * ( 1.0 - t322 * t165 ) - ( 1.0 - t322 * t329 ) * t322 * 2.0 ; t329 = (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t166 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 : t166 ) ;
t165 = ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) /
( t167 == 0.0 ? 1.0E-16 : t167 ) ; t177 = t165 * t165 * 3.0 - t165 * t165 *
t165 * 2.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0 ) { U_idx_0 =
t168 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= t167 ) { U_idx_0 =
t329 ; } else { U_idx_0 = ( 1.0 - t177 ) * t168 + t329 * t177 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1167 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ? U_idx_0 :
t168 ; } if ( X [ 365ULL ] <= 216.59999999999997 ) { intrm_sf_mf_1167 =
216.59999999999997 ; } else { intrm_sf_mf_1167 = X [ 365ULL ] >= 623.15 ?
623.15 : X [ 365ULL ] ; } t100 = intrm_sf_mf_1167 * intrm_sf_mf_1167 ;
U_idx_0 = ( ( ( 1074.1165326382641 + intrm_sf_mf_1167 * - 0.2214565261064495
) + t100 * 0.00037212980109014541 ) * ( ( 1.0 - t156 ) - t158 ) + ( (
1479.6504774711011 + intrm_sf_mf_1167 * 1.2002114337048222 ) + t100 * -
0.00038614513167823636 ) * t156 ) + ( ( 900.63941224838356 + intrm_sf_mf_1167
* - 0.044484923911382625 ) + t100 * 0.00036936011832044979 ) * t158 ; t178 =
U_idx_0 - t160 ; t179 = X [ 366ULL ] * X [ 366ULL ] * ( U_idx_0 / ( t178 ==
0.0 ? 1.0E-16 : t178 ) ) ; t156 = pmf_sqrt ( fabs ( t179 / ( t160 == 0.0 ?
1.0E-16 : t160 ) / ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ) *
t152 * 0.64 ; t182 = t162 * 2.0 ; t158 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( fabs ( t182 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * t152 * 0.64 ; t184 = t167 - ( - t167 ) ; intrm_sf_mf_1167 = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) - ( - t167
) ) / ( t184 == 0.0 ? 1.0E-16 : t184 ) ; if ( M [ 178ULL ] != 0 ) { t100 =
216.59999999999997 ; } else { t100 = M [ 179ULL ] != 0 ? 623.15 : U_idx_5 ; }
t50 [ 0ULL ] = U_idx_4 >= 0.0 ? t100 : X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t50 [ 0ULL ] , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t5 =
m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t5 . mField0 [
0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = n_efOut [ 0 ] ;
t100 = t71_idx_0 ; if ( M [ 205ULL ] != 0 ) { t178 = 216.59999999999997 ; }
else { t178 = M [ 206ULL ] != 0 ? 623.15 : U_idx_7 ; } t50 [ 0ULL ] = U_idx_6
>= 0.0 ? t178 : X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & o_efOut .
mField0 [ 0ULL ] , & o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t50 [ 0ULL ] , & t51 [
0ULL ] , & t11 [ 0ULL ] ) ; t6 = o_efOut ; tlu2_1d_linear_linear_value ( &
p_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t51 [ 0ULL ] , & t11 [ 0ULL ] )
; t71_idx_0 = p_efOut [ 0 ] ; t178 = t71_idx_0 ; U_idx_0 = pmf_sqrt ( U_idx_2
* U_idx_2 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 216ULL ] != 0 ) * 2.0
- 1.0 ) * X [ 352ULL ] * t338 * zc_int263 * 1.0E-9 ) ; t338 = - pmf_sqrt ( (
( real_T ) ( M [ 3ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( zc_int263 == 0.0
? 1.0E-16 : zc_int263 ) / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) )
) * 0.0019634954084936209 ; zc_int263 = zc_int260 * t338 * 35.2 / ( t161 ==
0.0 ? 1.0E-16 : t161 ) ; if ( t147 >= 0.0 ) { U_idx_2 = t338 * 100000.0 ; }
else { U_idx_2 = - t338 * 100000.0 ; } zc_int260 = U_idx_2 * 0.05 / ( t159 ==
0.0 ? 1.0E-16 : t159 ) ; t147 = t149 >= 1.0 ? zc_int260 : 1.0 ; t192 =
pmf_log10 ( 6.9 / ( t147 == 0.0 ? 1.0E-16 : t147 ) + 2.8767404433520813E-5 )
* pmf_log10 ( 6.9 / ( t147 == 0.0 ? 1.0E-16 : t147 ) + 2.8767404433520813E-5
) * 3.24 ; t338 = t338 * U_idx_2 * ( 1.0 / ( t192 == 0.0 ? 1.0E-16 : t192 ) )
* 0.55 / ( t164 == 0.0 ? 1.0E-16 : t164 ) ; U_idx_2 = ( zc_int260 - 2000.0 )
/ 2000.0 ; zc_int260 = U_idx_2 * U_idx_2 * 3.0 - U_idx_2 * U_idx_2 * U_idx_2
* 2.0 ; if ( t149 <= 2000.0 ) { U_idx_2 = zc_int263 * 1.0E-5 ; } else if (
t149 >= 4000.0 ) { U_idx_2 = t338 * 1.0E-5 ; } else { U_idx_2 = ( ( 1.0 -
zc_int260 ) * zc_int263 + t338 * zc_int260 ) * 1.0E-5 ; } t338 = - ( X [
335ULL ] * U_idx_0 ) / 0.0019634954084936209 * 0.00031622776601683789 +
U_idx_2 ; U_idx_2 = - t338 - t338 * - 0.95 ; zc_int263 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke - t338 * -
0.95 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; zc_int260 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t182 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * t152 * 0.64 ; t147 = pmf_sqrt ( ( ( real_T ) ( M [ 10ULL ] != 0 ) * 2.0 -
1.0 ) * ( t179 / ( t160 == 0.0 ? 1.0E-16 : t160 ) / ( X [ 365ULL ] == 0.0 ?
1.0E-16 : X [ 365ULL ] ) ) ) * t152 * 0.64 ; U_idx_8 = t147 - t147 * 0.95 ;
t149 = ( zc_int260 - t147 * 0.95 ) / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ;
U_idx_5 = ( - zc_int260 - t147 * 0.95 ) / ( U_idx_8 == 0.0 ? 1.0E-16 :
U_idx_8 ) ; t159 = ( X [ 131ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [
100ULL ] != 0 ) * 2.0 - 1.0 ) * ( t126 / ( t398 == 0.0 ? 1.0E-16 : t398 ) ) )
* t103 * 0.64 ; t161 = pmf_sqrt ( ( ( real_T ) ( M [ 112ULL ] != 0 ) * 2.0 -
1.0 ) * ( t123 / ( t405 == 0.0 ? 1.0E-16 : t405 ) / ( X [ 152ULL ] == 0.0 ?
1.0E-16 : X [ 152ULL ] ) ) ) * t103 * 0.64 ; U_idx_7 = t161 - t161 * 0.95 ;
t164 = ( t159 - t161 * 0.95 ) / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ; t179
= t164 * t164 * 3.0 - t164 * t164 * t164 * 2.0 ; t183 = ( - t159 - t161 *
0.95 ) / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ; t186 = t183 * t183 * 3.0 -
t183 * t183 * t183 * 2.0 ; t188 = ( X [ 24ULL ] - X [ 179ULL ] ) * pmf_sqrt (
( ( real_T ) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0 ) * ( t144 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * intrm_sf_mf_350 * 0.64 ; t190 = pmf_sqrt ( ( ( real_T ) ( M [ 163ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t141 / ( t124 == 0.0 ? 1.0E-16 : t124 ) / ( X [ 200ULL
] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ) * intrm_sf_mf_350 * 0.64 ; t220 =
t190 - t190 * 0.95 ; t192 = ( t188 - t190 * 0.95 ) / ( t220 == 0.0 ? 1.0E-16
: t220 ) ; t193 = t192 * t192 * 3.0 - t192 * t192 * t192 * 2.0 ; t195 = ( -
t188 - t190 * 0.95 ) / ( t220 == 0.0 ? 1.0E-16 : t220 ) ; t196 = t195 * t195
* 3.0 - t195 * t195 * t195 * 2.0 ; intermediate_der1307 = - ( real_T ) (
intermediate_der9874 >= 0.0 ) * 1000.0 / 0.099999999999999978 ; if ( ( real_T
) ( intermediate_der9874 >= 0.0 ) * intermediate_der9874 * 1000.0 + ( real_T
) ( intermediate_der9874 < 0.0 ) * X [ 55ULL ] <= 0.9 ) { t8 = 0.0 ; } else {
t8 = ( real_T ) ( intermediate_der9874 >= 0.0 ) * intermediate_der9874 *
1000.0 + ( real_T ) ( intermediate_der9874 < 0.0 ) * X [ 55ULL ] >= 1.0 ? 0.0
: intermediate_der1307 * t8 * 6.0 - t8 * t8 * intermediate_der1307 * 6.0 ; }
if ( intermediate_der1331 * 0.0001 <= 7.8539816339744857E-13 ) {
intermediate_der1307 = 0.0 ; } else if ( intermediate_der1331 * 0.0001 >=
3.1415926535897929E-6 ) { intermediate_der1307 = 0.0 ; } else {
intermediate_der1307 = 3.1415926535897929E-6 ; } intermediate_der9874 =
intermediate_der1307 / 7.8539816339744827E-5 ; if ( X [ 122ULL ] > 0.0 ) {
U_idx_0 = t103 * t103 ; intermediate_der1331 = ( ( ( intermediate_der2138 +
1.0 ) * ( X [ 122ULL ] / 0.64 / ( t103 == 0.0 ? 1.0E-16 : t103 ) * ( - ( X [
122ULL ] / 0.64 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) *
intermediate_der1307 * 2.0 / 2.0 / ( t407 == 0.0 ? 1.0E-16 : t407 ) ) + X [
122ULL ] / 0.64 / ( t103 == 0.0 ? 1.0E-16 : t103 ) * ( X [ 122ULL ] / 0.64 /
( t103 == 0.0 ? 1.0E-16 : t103 ) ) / 2.0 / ( t407 == 0.0 ? 1.0E-16 : t407 ) *
intermediate_der9874 ) * ( 1.0 - intermediate_der2138 * t413 ) + - ( t413 *
intermediate_der9874 ) * ( intermediate_der2138 + 1.0 ) * ( X [ 122ULL ] /
0.64 / ( t103 == 0.0 ? 1.0E-16 : t103 ) * ( X [ 122ULL ] / 0.64 / ( t103 ==
0.0 ? 1.0E-16 : t103 ) ) / 2.0 / ( t407 == 0.0 ? 1.0E-16 : t407 ) ) ) *
9.9999999999999991E-11 ; } else if ( X [ 122ULL ] < 0.0 ) { U_idx_0 = t103 *
t103 ; intermediate_der1331 = ( ( ( intermediate_der2138 + 1.0 ) * ( X [
122ULL ] / 0.64 / ( t103 == 0.0 ? 1.0E-16 : t103 ) * ( - ( X [ 122ULL ] /
0.64 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * intermediate_der1307 *
2.0 / 2.0 / ( t407 == 0.0 ? 1.0E-16 : t407 ) ) + X [ 122ULL ] / 0.64 / ( t103
== 0.0 ? 1.0E-16 : t103 ) * ( X [ 122ULL ] / 0.64 / ( t103 == 0.0 ? 1.0E-16 :
t103 ) ) / 2.0 / ( t407 == 0.0 ? 1.0E-16 : t407 ) * intermediate_der9874 ) *
( 1.0 - intermediate_der2138 * t113 ) + - ( t113 * intermediate_der9874 ) * (
intermediate_der2138 + 1.0 ) * ( X [ 122ULL ] / 0.64 / ( t103 == 0.0 ?
1.0E-16 : t103 ) * ( X [ 122ULL ] / 0.64 / ( t103 == 0.0 ? 1.0E-16 : t103 ) )
/ 2.0 / ( t407 == 0.0 ? 1.0E-16 : t407 ) ) ) * 9.9999999999999991E-11 ; }
else { intermediate_der1331 = 0.0 ; } U_idx_1 = - intermediate_der9874 * (
1.0 - intermediate_der2138 ) * 2.0 ; U_idx_0 = intermediate_der4559 * U_idx_1
; t265 = ( X [ 131ULL ] - 1.01325 ) * ( t265 >= intermediate_der2362 ? ( (
1.0 - intermediate_der2138 * t413 ) * intermediate_der9874 + - ( t413 *
intermediate_der9874 ) * ( intermediate_der2138 + 1.0 ) ) - ( ( 1.0 -
intermediate_der2138 * t113 ) * intermediate_der9874 * 2.0 + - ( t113 *
intermediate_der9874 ) * intermediate_der2138 * 2.0 ) : U_idx_1 ) ; if ( X [
131ULL ] - 1.01325 <= 0.0 ) { t265 = U_idx_0 ; } else if ( X [ 131ULL ] -
1.01325 >= intermediate_der4559 ) { } else { t265 = ( 1.0 -
intermediate_der6663 ) * U_idx_0 + t265 * intermediate_der6663 ; }
intermediate_der9874 = ( 1.01325 - X [ 131ULL ] ) * ( intermediate_der6445 >=
intermediate_der2362 ? ( ( 1.0 - intermediate_der2138 * t113 ) *
intermediate_der9874 + - ( t113 * intermediate_der9874 ) * (
intermediate_der2138 + 1.0 ) ) - ( ( 1.0 - intermediate_der2138 * t413 ) *
intermediate_der9874 * 2.0 + - ( t413 * intermediate_der9874 ) *
intermediate_der2138 * 2.0 ) : U_idx_1 ) ; if ( 1.01325 - X [ 131ULL ] <= 0.0
) { intermediate_der2138 = U_idx_0 ; } else if ( 1.01325 - X [ 131ULL ] >=
intermediate_der4559 ) { intermediate_der2138 = intermediate_der9874 ; } else
{ intermediate_der2138 = ( 1.0 - t121 ) * U_idx_0 + intermediate_der9874 *
t121 ; } if ( X [ 131ULL ] > 1.01325 ) { intermediate_der9874 = t265 ; } else
{ intermediate_der9874 = X [ 131ULL ] < 1.01325 ? intermediate_der2138 :
U_idx_0 ; } if ( t415 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) {
t413 = 0.0 ; } else if ( t415 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t413 = 0.0 ; } else { t413 = 0.000628318373638326 ;
} intermediate_der2138 = t413 / 7.8539816339744827E-5 ; if ( - X [ 172ULL ] >
0.0 ) { U_idx_0 = intrm_sf_mf_350 * intrm_sf_mf_350 ; t113 = ( ( (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - ( - X [ 172ULL ] / 0.64 ) / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) ) * t413 * 2.0 / 2.0 / ( t380 == 0.0 ? 1.0E-16 :
t380 ) ) + - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ?
1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t380 == 0.0 ? 1.0E-16 : t380 ) *
intermediate_der2138 ) * ( 1.0 - intermediate_der5173 * intermediate_der8661
) + - ( intermediate_der8661 * intermediate_der2138 ) * (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / (
intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t380 == 0.0
? 1.0E-16 : t380 ) ) ) * 9.9999999999999991E-11 ; } else if ( - X [ 172ULL ]
< 0.0 ) { U_idx_0 = intrm_sf_mf_350 * intrm_sf_mf_350 ; t113 = ( ( (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - ( - X [ 172ULL ] / 0.64 ) / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) ) * t413 * 2.0 / 2.0 / ( t380 == 0.0 ? 1.0E-16 :
t380 ) ) + - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ?
1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t380 == 0.0 ? 1.0E-16 : t380 ) *
intermediate_der2138 ) * ( 1.0 - intermediate_der5173 * intermediate_der8904
) + - ( intermediate_der8904 * intermediate_der2138 ) * (
intermediate_der5173 + 1.0 ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - X [ 172ULL ] / 0.64 / (
intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t380 == 0.0
? 1.0E-16 : t380 ) ) ) * 9.9999999999999991E-11 ; } else { t113 = 0.0 ; }
intermediate_der2362 = - intermediate_der2138 * ( 1.0 - intermediate_der5173
) * 2.0 ; intermediate_der4559 = t88 * intermediate_der2362 ; t265 = ( X [
24ULL ] - X [ 179ULL ] ) * ( t137 >= intermediate_der8894 ? ( ( 1.0 -
intermediate_der5173 * intermediate_der8661 ) * intermediate_der2138 + - (
intermediate_der8661 * intermediate_der2138 ) * ( intermediate_der5173 + 1.0
) ) - ( ( 1.0 - intermediate_der5173 * intermediate_der8904 ) *
intermediate_der2138 * 2.0 + - ( intermediate_der8904 * intermediate_der2138
) * intermediate_der5173 * 2.0 ) : intermediate_der2362 ) ; if ( X [ 24ULL ]
- X [ 179ULL ] <= 0.0 ) { t415 = intermediate_der4559 ; } else if ( X [ 24ULL
] - X [ 179ULL ] >= t88 ) { t415 = t265 ; } else { t415 = ( 1.0 - t350 ) *
intermediate_der4559 + t265 * t350 ; } intermediate_der2138 = ( X [ 179ULL ]
- X [ 24ULL ] ) * ( t372 >= intermediate_der8894 ? ( ( 1.0 -
intermediate_der5173 * intermediate_der8904 ) * intermediate_der2138 + - (
intermediate_der8904 * intermediate_der2138 ) * ( intermediate_der5173 + 1.0
) ) - ( ( 1.0 - intermediate_der5173 * intermediate_der8661 ) *
intermediate_der2138 * 2.0 + - ( intermediate_der8661 * intermediate_der2138
) * intermediate_der5173 * 2.0 ) : intermediate_der2362 ) ; if ( X [ 179ULL ]
- X [ 24ULL ] <= 0.0 ) { intermediate_der2362 = intermediate_der4559 ; } else
if ( X [ 179ULL ] - X [ 24ULL ] >= t88 ) { intermediate_der2362 =
intermediate_der2138 ; } else { intermediate_der2362 = ( 1.0 - t357 ) *
intermediate_der4559 + intermediate_der2138 * t357 ; } if ( X [ 24ULL ] > X [
179ULL ] ) { intermediate_der2138 = t415 ; } else { intermediate_der2138 = X
[ 24ULL ] < X [ 179ULL ] ? intermediate_der2362 : intermediate_der4559 ; }
U_idx_1 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; t415 = X [ 369ULL ] /
( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) * ( - X [ 366ULL ] / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 ; if ( X [ 335ULL ] > 0.0 ) {
t265 = - ( t322 * t415 ) * ( t322 + 1.0 ) * ( X [ 335ULL ] / 0.64 / ( t152 ==
0.0 ? 1.0E-16 : t152 ) * ( X [ 335ULL ] / 0.64 / ( t152 == 0.0 ? 1.0E-16 :
t152 ) ) / 2.0 / ( t162 == 0.0 ? 1.0E-16 : t162 ) ) * 9.9999999999999991E-11
; } else { t265 = 0.0 ; } intermediate_der6663 = 0.0050000000000000044 ;
intermediate_der6445 = t166 * intermediate_der6663 ; t121 = ( t313 >= t166 ?
t313 : t166 ) * 10.0 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( t313 >=
t166 ? - ( t322 * t415 ) * ( t322 + 1.0 ) : 0.0 ) ; t313 = t167 * t167 ;
intermediate_der5173 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) / ( t313 ==
0.0 ? 1.0E-16 : t313 ) * intermediate_der6663 + 10.0 / ( t167 == 0.0 ?
1.0E-16 : t167 ) ; intermediate_der8661 = intermediate_der5173 *
intrm_sf_mf_1161 * 6.0 - intrm_sf_mf_1161 * intrm_sf_mf_1161 *
intermediate_der5173 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intermediate_der5173 = intermediate_der6445 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t167 ) {
intermediate_der5173 = t121 ; } else { intermediate_der5173 = ( ( -
intermediate_der8661 * t168 + ( 1.0 - t176 ) * intermediate_der6445 ) + t175
* intermediate_der8661 ) + t121 * t176 ; } t415 = - 10.0 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t166 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 : t166 ) + (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t166 ? - (
- ( t322 * t415 ) * t322 * 2.0 ) : 0.0 ) ; t121 = - ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) / ( t313 == 0.0 ?
1.0E-16 : t313 ) * intermediate_der6663 + - 10.0 / ( t167 == 0.0 ? 1.0E-16 :
t167 ) ; intermediate_der8661 = t121 * t165 * 6.0 - t165 * t165 * t121 * 6.0
; if ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0
) { t121 = intermediate_der6445 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= t167 ) { t121 = t415
; } else { t121 = ( ( - intermediate_der8661 * t168 + ( 1.0 - t177 ) *
intermediate_der6445 ) + t329 * intermediate_der8661 ) + t415 * t177 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) { t415 =
intermediate_der5173 ; } else { t415 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ? t121 :
intermediate_der6445 ; } t322 = ( t167 - ( - t167 ) ) * ( t167 - ( - t167 ) )
; intermediate_der6445 = ( intermediate_der6663 - ( - intermediate_der6663 )
) * ( - ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 )
- ( - t167 ) ) / ( t322 == 0.0 ? 1.0E-16 : t322 ) ) + ( 10.0 - ( -
intermediate_der6663 ) ) / ( t184 == 0.0 ? 1.0E-16 : t184 ) ;
intermediate_der6663 = intermediate_der6445 * intrm_sf_mf_1167 * 6.0 -
intrm_sf_mf_1167 * intrm_sf_mf_1167 * intermediate_der6445 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= - t167 ) {
intermediate_der6445 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t167 ) {
intermediate_der6445 = 10.0 ; } else { intermediate_der6445 = ( -
intermediate_der6663 * 1.01325 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p * intermediate_der6663
) + 10.0 * ( intrm_sf_mf_1167 * intrm_sf_mf_1167 * 3.0 - intrm_sf_mf_1167 *
intrm_sf_mf_1167 * intrm_sf_mf_1167 * 2.0 ) ; } if ( U_idx_9 >= 1.0 ) {
intermediate_der6663 = 0.0 ; } else { intermediate_der6663 = ( real_T ) ! (
U_idx_9 <= 0.0 ) ; } if ( M [ 178ULL ] != 0 ) { intermediate_der5173 = 0.0 ;
} else { intermediate_der5173 = ( real_T ) ( M [ 179ULL ] == 0 ) ; }
tlu2_1d_linear_linear_value ( & q_efOut [ 0ULL ] , & t5 . mField1 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = q_efOut [ 0 ] ;
intermediate_der5173 = t71_idx_0 * ( U_idx_4 >= 0.0 ? intermediate_der5173 :
0.0 ) ; if ( M [ 205ULL ] != 0 ) { t121 = 0.0 ; } else { t121 = ( real_T ) (
M [ 206ULL ] == 0 ) ; } tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , &
t6 . mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField4 , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t71_idx_0 = r_efOut [
0 ] ; t121 = t71_idx_0 * ( U_idx_6 >= 0.0 ? t121 : 0.0 ) ; t357 = X [ 343ULL
] * t330 ; t322 = - ( X [ 343ULL ] * t330 ) ; t329 = ( ( ( real_T ) ( M [
7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t357 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t322 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 + ( ( real_T ) ( M [ 7ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t357 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t322 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 ) * ( - X [ 335ULL ] /
0.0019634954084936209 ) * ( - X [ 335ULL ] / 0.0019634954084936209 ) ;
intermediate_der8904 = - 10.0 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ;
intermediate_der8894 = intermediate_der8904 * zc_int263 * 6.0 - zc_int263 *
zc_int263 * intermediate_der8904 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke <= t344 * -
0.95 ) { intermediate_der8904 = 10.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke >= - t344 ) {
intermediate_der8904 = 0.0 ; } else { intermediate_der8904 = ( -
intermediate_der8894 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke + ( 1.0 - (
zc_int263 * zc_int263 * 3.0 - zc_int263 * zc_int263 * zc_int263 * 2.0 ) ) *
10.0 ) + intermediate_der8894 * t338 ; } intermediate_der8894 = ( ( ( real_T
) ( M [ 7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t357 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t322 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 + ( ( real_T ) ( M [ 7ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t357 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t322 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 ) * ( X [ 335ULL ] /
0.0019634954084936209 ) * ( X [ 335ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 ; t350 = pmf_sqrt ( ( ( real_T ) ( M [ 9ULL ] != 0 ) *
2.0 - 1.0 ) * ( t182 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) ; t344 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; t88 =
pmf_sqrt ( ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t182 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * 10.0 * t152 * 0.64 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( (
real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( - ( t162 * 2.0 ) / ( t344 ==
0.0 ? 1.0E-16 : t344 ) ) * ( 1.0 / ( t350 == 0.0 ? 1.0E-16 : t350 ) ) * t415
* t152 * 0.32 ; t415 = t88 / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ; t137 =
t415 * t149 * 6.0 - t149 * t149 * t415 * 6.0 ; if ( t158 <= t156 * 0.95 ) {
t415 = t88 * 100000.0 ; } else if ( t158 >= t156 ) { t415 = 0.0 ; } else {
t415 = ( ( - t137 * zc_int260 + ( 1.0 - ( t149 * t149 * 3.0 - t149 * t149 *
t149 * 2.0 ) ) * t88 ) + t137 * t147 ) * 100000.0 ; } t137 = - t88 / (
U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ; t372 = t137 * U_idx_5 * 6.0 - U_idx_5
* U_idx_5 * t137 * 6.0 ; if ( - t158 <= t156 * 0.95 ) { t137 = t88 * 100000.0
; } else if ( - t158 >= t156 ) { t137 = 0.0 ; } else { t137 = ( ( - t372 *
zc_int260 + ( 1.0 - ( U_idx_5 * U_idx_5 * 3.0 - U_idx_5 * U_idx_5 * U_idx_5 *
2.0 ) ) * t88 ) + - t147 * t372 ) * 100000.0 ; } t372 = pmf_sqrt ( ( ( real_T
) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( t126 / ( t398 == 0.0 ? 1.0E-16 :
t398 ) ) ) ; t357 = t398 * t398 ; t407 = ( X [ 131ULL ] - 1.01325 ) *
pmf_sqrt ( ( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( t126 / ( t398
== 0.0 ? 1.0E-16 : t398 ) ) ) * intermediate_der1307 * 0.64 + ( X [ 131ULL ]
- 1.01325 ) * ( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( - ( t407 *
2.0 ) / ( t357 == 0.0 ? 1.0E-16 : t357 ) ) * ( 1.0 / ( t372 == 0.0 ? 1.0E-16
: t372 ) ) * intermediate_der9874 * t103 * 0.32 ; intermediate_der9874 =
pmf_sqrt ( ( ( real_T ) ( M [ 112ULL ] != 0 ) * 2.0 - 1.0 ) * ( t123 / ( t405
== 0.0 ? 1.0E-16 : t405 ) / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] )
) ) * intermediate_der1307 * 0.64 ; t350 = ( t161 - t161 * 0.95 ) * ( t161 -
t161 * 0.95 ) ; t405 = ( intermediate_der9874 - intermediate_der9874 * 0.95 )
* ( - ( t159 - t161 * 0.95 ) / ( t350 == 0.0 ? 1.0E-16 : t350 ) ) + ( t407 -
intermediate_der9874 * 0.95 ) / ( U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7 ) ; t398
= t405 * t164 * 6.0 - t164 * t164 * t405 * 6.0 ; if ( t108 <=
intermediate_der9915 * 0.95 ) { t405 = t407 * 100000.0 ; } else if ( t108 >=
intermediate_der9915 ) { t405 = intermediate_der9874 * 100000.0 ; } else {
t405 = ( ( ( - t398 * t159 + ( 1.0 - t179 ) * t407 ) + t398 * t161 ) +
intermediate_der9874 * t179 ) * 100000.0 ; } t398 = ( intermediate_der9874 -
intermediate_der9874 * 0.95 ) * ( - ( - t159 - t161 * 0.95 ) / ( t350 == 0.0
? 1.0E-16 : t350 ) ) + ( - t407 - intermediate_der9874 * 0.95 ) / ( U_idx_7
== 0.0 ? 1.0E-16 : U_idx_7 ) ; t88 = t398 * t183 * 6.0 - t183 * t183 * t398 *
6.0 ; if ( - t108 <= intermediate_der9915 * 0.95 ) { t398 = t407 * 100000.0 ;
} else if ( - t108 >= intermediate_der9915 ) { t398 = - intermediate_der9874
* 100000.0 ; } else { t398 = ( ( ( - t88 * t159 + ( 1.0 - t186 ) * t407 ) + -
t161 * t88 ) + - intermediate_der9874 * t186 ) * 100000.0 ; } t88 = pmf_sqrt
( ( ( real_T ) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0 ) * ( t144 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) ; t372 = - ( t380 * 2.0 ) ; t380 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
intermediate_der9874 = ( X [ 24ULL ] - X [ 179ULL ] ) * pmf_sqrt ( ( ( real_T
) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0 ) * ( t144 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * t413 * 0.64 + ( X [ 24ULL ] - X [ 179ULL ] ) * ( ( real_T ) ( M [ 162ULL
] != 0 ) * 2.0 - 1.0 ) * ( t372 / ( t380 == 0.0 ? 1.0E-16 : t380 ) ) * ( 1.0
/ ( t88 == 0.0 ? 1.0E-16 : t88 ) ) * intermediate_der2138 * intrm_sf_mf_350 *
0.32 ; intermediate_der2138 = pmf_sqrt ( ( ( real_T ) ( M [ 163ULL ] != 0 ) *
2.0 - 1.0 ) * ( t141 / ( t124 == 0.0 ? 1.0E-16 : t124 ) / ( X [ 200ULL ] ==
0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ) * t413 * 0.64 ; t88 = ( t190 - t190 * 0.95
) * ( t190 - t190 * 0.95 ) ; intermediate_der9915 = ( intermediate_der2138 -
intermediate_der2138 * 0.95 ) * ( - ( t188 - t190 * 0.95 ) / ( t88 == 0.0 ?
1.0E-16 : t88 ) ) + ( intermediate_der9874 - intermediate_der2138 * 0.95 ) /
( t220 == 0.0 ? 1.0E-16 : t220 ) ; t407 = intermediate_der9915 * t192 * 6.0 -
t192 * t192 * intermediate_der9915 * 6.0 ; if ( t122 <= t400 * 0.95 ) {
intermediate_der9915 = intermediate_der9874 * 100000.0 ; } else if ( t122 >=
t400 ) { intermediate_der9915 = intermediate_der2138 * 100000.0 ; } else {
intermediate_der9915 = ( ( ( - t407 * t188 + ( 1.0 - t193 ) *
intermediate_der9874 ) + t407 * t190 ) + intermediate_der2138 * t193 ) *
100000.0 ; } t407 = ( intermediate_der2138 - intermediate_der2138 * 0.95 ) *
( - ( - t188 - t190 * 0.95 ) / ( t88 == 0.0 ? 1.0E-16 : t88 ) ) + ( -
intermediate_der9874 - intermediate_der2138 * 0.95 ) / ( t220 == 0.0 ?
1.0E-16 : t220 ) ; t124 = t407 * t195 * 6.0 - t195 * t195 * t407 * 6.0 ; if (
- t122 <= t400 * 0.95 ) { t407 = intermediate_der9874 * 100000.0 ; } else if
( - t122 >= t400 ) { t407 = - intermediate_der2138 * 100000.0 ; } else { t407
= ( ( ( - t124 * t188 + ( 1.0 - t196 ) * intermediate_der9874 ) + - t190 *
t124 ) + - intermediate_der2138 * t196 ) * 100000.0 ; } t50 [ 0ULL ] = X [
249ULL ] ; t51 [ 0 ] = 5ULL ; tlu2_linear_nearest_prelookup ( & s_efOut .
mField0 [ 0ULL ] , & s_efOut . mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL
] , & t76 [ 0ULL ] , & t50 [ 0ULL ] , & t51 [ 0ULL ] , & t11 [ 0ULL ] ) ; t5
= s_efOut ; t50 [ 0ULL ] = U_idx_3 * 376.99111843077515 * 0.99999999999999978
/ 0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978 ; t54 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & t_efOut . mField0 [ 0ULL ] , &
t_efOut . mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , & nonscalar38 [
0ULL ] , & t50 [ 0ULL ] , & t54 [ 0ULL ] , & t11 [ 0ULL ] ) ; t6 = t_efOut ;
t124 = M [ 111ULL ] != 0 ? X [ 55ULL ] : 0.9 ; intermediate_der9874 = - ( ( X
[ 59ULL ] - X [ 57ULL ] * X [ 58ULL ] * 0.001 ) * t8 / ( t124 == 0.0 ?
1.0E-16 : t124 ) * 1000.0 + - t8 * X [ 55ULL ] / 1000.0 ) ; if ( M [ 165ULL ]
!= 0 ) { t8 = - ( ( X [ 63ULL ] - Fuel_Cell_Boost_Converter_L_i ) *
intermediate_der6663 * 0.001 ) ; } else { t8 = - ( (
Fuel_Cell_Boost_Converter_L_i * 0.001 + X [ 58ULL ] ) * intermediate_der6663
) ; } U_idx_0 = t108 >= 0.0 ? - t405 : - t398 ; t405 = t103 * t103 ; t124 = (
( real_T ) ( M [ 145ULL ] != 0 ) * 2.0 - 1.0 ) * ( t111 / ( X [ 153ULL ] ==
0.0 ? 1.0E-16 : X [ 153ULL ] ) ) * ( t111 / ( X [ 153ULL ] == 0.0 ? 1.0E-16 :
X [ 153ULL ] ) ) * ( X [ 122ULL ] / 0.64 / ( t103 == 0.0 ? 1.0E-16 : t103 ) )
* ( - ( X [ 122ULL ] / 0.64 ) / ( t405 == 0.0 ? 1.0E-16 : t405 ) ) *
intermediate_der1307 * 2.0 ; intermediate_der2138 = t122 >= 0.0 ? -
intermediate_der9915 : - t407 ; t405 = intrm_sf_mf_350 * intrm_sf_mf_350 ;
t400 = ( ( real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t128 / ( X [
201ULL ] == 0.0 ? 1.0E-16 : X [ 201ULL ] ) ) * ( t128 / ( X [ 201ULL ] == 0.0
? 1.0E-16 : X [ 201ULL ] ) ) * ( - X [ 172ULL ] / 0.64 / ( intrm_sf_mf_350 ==
0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) * ( - ( - X [ 172ULL ] / 0.64 ) / ( t405
== 0.0 ? 1.0E-16 : t405 ) ) * t413 * 2.0 ; tlu2_2d_linear_nearest_value ( &
u_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t6 .
mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField27 , & t51 [ 0ULL ] , & t54 [ 0ULL ] , & t11 [ 0ULL ] ) ; t50 [ 0
] = u_efOut [ 0 ] ; t76 [ 0ULL ] = - ( ( ( 1.0 - X [ 37ULL ] ) * ( -
164.72089615570803 / ( t94 == 0.0 ? 1.0E-16 : t94 ) ) + - X [ 36ULL ] * ( -
3827.6794129126583 / ( t94 == 0.0 ? 1.0E-16 : t94 ) ) ) / 12.896402563644669
) ; t76 [ 1ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_w_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * ( 1.0 - X [ 37ULL
] ) + - X [ 36ULL ] * ( t142 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) / 2246.65922904024 )
; t76 [ 2ULL ] = - X [ 37ULL ] ; t76 [ 3ULL ] = - X [ 36ULL ] ; t76 [ 4ULL ]
= t100 ; t77 [ 0ULL ] = - ( ( 1.0 - X [ 43ULL ] ) * ( - 164.72089615570803 /
( intrm_sf_mf_875 == 0.0 ? 1.0E-16 : intrm_sf_mf_875 ) ) + - X [ 42ULL ] * (
36.965491221318985 / ( intrm_sf_mf_875 == 0.0 ? 1.0E-16 : intrm_sf_mf_875 ) )
) ; t77 [ 1ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I ) * ( 1.0 - X [ 43ULL
] ) + - X [ 42ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) / 2172.7681408465714
) ; t77 [ 2ULL ] = - X [ 43ULL ] ; t77 [ 3ULL ] = - X [ 42ULL ] ; t77 [ 4ULL
] = t178 ; t78 [ 0ULL ] = - ( ( - X [ 335ULL ] + intrm_sf_mf_1080 ) / 2.0 * (
t329 / 2.0 * 9.999999999999999E-14 ) ) ; t78 [ 1ULL ] = - X [ 335ULL ] >= 0.0
? - 10.0 : - intermediate_der8904 ; t78 [ 2ULL ] = - ( ( X [ 335ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 ) / 2.0 *
intermediate_der8894 ) ; t78 [ 3ULL ] = t158 >= 0.0 ? - t415 : - t137 ; t78 [
4ULL ] = - ( intermediate_der6445 - t265 ) ; t405 = X [ 369ULL ] * t160 ;
t407 = - ( X [ 369ULL ] * t160 ) ; t78 [ 5ULL ] = - ( ( ( ( real_T ) ( M [
11ULL ] != 0 ) * 2.0 - 1.0 ) * ( t405 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t407 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 + ( ( real_T ) ( M [ 11ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t405 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t407 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 10.0 ) * ( X [ 335ULL ] / 0.64 /
0.0019634954084936209 ) * ( X [ 335ULL ] / 0.64 / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 ) ; t59 [ 0ULL ] = intermediate_der9874 ; t59 [
1ULL ] = U_idx_0 ; t59 [ 2ULL ] = intermediate_der1331 ; t59 [ 3ULL ] = - (
t124 / 2.0 * 9.999999999999999E-14 ) ; t59 [ 4ULL ] = intermediate_der2138 ;
t59 [ 5ULL ] = t113 ; t59 [ 6ULL ] = - ( t400 / 2.0 * 9.999999999999999E-14 )
; t59 [ 7ULL ] = - ( t50 [ 0ULL ] * 376.99111843077515 ) ; for ( t84 = 0ULL ;
t84 < 5ULL ; t84 ++ ) { t59 [ t84 + 8ULL ] = t76 [ t84 ] ; } t59 [ 13ULL ] =
U_idx_4 * intermediate_der5173 ; for ( t84 = 0ULL ; t84 < 5ULL ; t84 ++ ) {
t59 [ t84 + 14ULL ] = t77 [ t84 ] ; } t59 [ 19ULL ] = U_idx_6 * t121 ; for (
t84 = 0ULL ; t84 < 6ULL ; t84 ++ ) { t59 [ t84 + 20ULL ] = t78 [ t84 ] ; }
out . mX [ 0 ] = t59 [ 0 ] ; out . mX [ 1 ] = t59 [ 1 ] ; out . mX [ 2 ] =
t59 [ 2 ] ; out . mX [ 3 ] = t59 [ 3 ] ; out . mX [ 4 ] = t59 [ 4 ] ; out .
mX [ 5 ] = t59 [ 5 ] ; out . mX [ 6 ] = t59 [ 6 ] ; out . mX [ 7 ] = t59 [ 7
] ; out . mX [ 8 ] = t59 [ 8 ] ; out . mX [ 9 ] = t59 [ 9 ] ; out . mX [ 10 ]
= t59 [ 10 ] ; out . mX [ 11 ] = t59 [ 11 ] ; out . mX [ 12 ] = t59 [ 12 ] ;
out . mX [ 13 ] = t59 [ 13 ] ; out . mX [ 14 ] = t59 [ 14 ] ; out . mX [ 15 ]
= t59 [ 15 ] ; out . mX [ 16 ] = t59 [ 16 ] ; out . mX [ 17 ] = t59 [ 17 ] ;
out . mX [ 18 ] = t59 [ 18 ] ; out . mX [ 19 ] = t59 [ 19 ] ; out . mX [ 20 ]
= t59 [ 20 ] ; out . mX [ 21 ] = t59 [ 21 ] ; out . mX [ 22 ] = t59 [ 22 ] ;
out . mX [ 23 ] = t59 [ 23 ] ; out . mX [ 24 ] = t59 [ 24 ] ; out . mX [ 25 ]
= t59 [ 25 ] ; out . mX [ 26 ] = t8 ; out . mX [ 27 ] = - (
Fuel_Cell_Boost_Converter_L_i * intermediate_der6663 ) ; ( void ) LC ; ( void
) t418 ; return 0 ; }
