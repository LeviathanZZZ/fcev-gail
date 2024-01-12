#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_duf.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t424 , NeDsMethodOutput * t425 ) { ETTS0 e_efOut
; ETTS0 efOut ; ETTS0 i_efOut ; ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 s_efOut
; ETTS0 t2 ; ETTS0 t6 ; ETTS0 t_efOut ; PmRealVector out ; real_T X [ 394 ] ;
real_T t60 [ 29 ] ; real_T t80 [ 6 ] ; real_T t78 [ 5 ] ; real_T t79 [ 5 ] ;
real_T nonscalar32 [ 3 ] ; real_T b_efOut [ 1 ] ; real_T c_efOut [ 1 ] ;
real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T l_efOut
[ 1 ] ; real_T n_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T q_efOut [ 1 ] ;
real_T r_efOut [ 1 ] ; real_T t54 [ 1 ] ; real_T u_efOut [ 1 ] ; real_T
Fuel_Cell_Boost_Converter_L_i ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4
; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intermediate_der2333 ; real_T intermediate_der6439 ; real_T
intermediate_der8394 ; real_T intermediate_der8922 ; real_T
intermediate_der8977 ; real_T intermediate_der9865 ; real_T
intermediate_der9879 ; real_T intermediate_der9924 ; real_T
intermediate_der9977 ; real_T intrm_sf_mf_1161 ; real_T intrm_sf_mf_1167 ;
real_T intrm_sf_mf_350 ; real_T intrm_sf_mf_875 ; real_T t103 ; real_T t104 ;
real_T t108 ; real_T t109 ; real_T t116 ; real_T t118 ; real_T t122 ; real_T
t125 ; real_T t126 ; real_T t127 ; real_T t128 ; real_T t131 ; real_T t133 ;
real_T t136 ; real_T t142 ; real_T t146 ; real_T t147 ; real_T t149 ; real_T
t150 ; real_T t151 ; real_T t153 ; real_T t154 ; real_T t156 ; real_T t157 ;
real_T t161 ; real_T t163 ; real_T t164 ; real_T t165 ; real_T t166 ; real_T
t167 ; real_T t169 ; real_T t170 ; real_T t171 ; real_T t172 ; real_T t173 ;
real_T t180 ; real_T t181 ; real_T t182 ; real_T t183 ; real_T t184 ; real_T
t187 ; real_T t188 ; real_T t189 ; real_T t190 ; real_T t192 ; real_T t194 ;
real_T t196 ; real_T t198 ; real_T t199 ; real_T t201 ; real_T t207 ; real_T
t210 ; real_T t218 ; real_T t226 ; real_T t271 ; real_T t319 ; real_T t325 ;
real_T t328 ; real_T t336 ; real_T t344 ; real_T t362 ; real_T t367 ; real_T
t377 ; real_T t378 ; real_T t385 ; real_T t386 ; real_T t396 ; real_T t398 ;
real_T t414 ; real_T t415 ; real_T t423 ; real_T t73_idx_0 ; real_T t8 ;
real_T t97 ; real_T zc_int254 ; real_T zc_int260 ; real_T zc_int265 ; size_t
t12 [ 1 ] ; size_t t52 [ 1 ] ; size_t t55 [ 1 ] ; size_t t87 ; int32_T M [
184 ] ; int32_T b ; for ( b = 0 ; b < 184 ; b ++ ) { M [ b ] = t424 -> mM .
mX [ b ] ; } U_idx_1 = t424 -> mU . mX [ 1 ] ; U_idx_2 = t424 -> mU . mX [ 2
] ; U_idx_3 = t424 -> mU . mX [ 3 ] ; U_idx_4 = t424 -> mU . mX [ 4 ] ;
U_idx_5 = t424 -> mU . mX [ 5 ] ; U_idx_6 = t424 -> mU . mX [ 6 ] ; U_idx_7 =
t424 -> mU . mX [ 7 ] ; U_idx_8 = t424 -> mU . mX [ 8 ] ; U_idx_9 = t424 ->
mU . mX [ 9 ] ; U_idx_10 = t424 -> mU . mX [ 10 ] ; for ( b = 0 ; b < 394 ; b
++ ) { X [ b ] = t424 -> mX . mX [ b ] ; } out = t425 -> mDUF ; t78 [ 0 ] =
1.0 ; t78 [ 1 ] = 1.25 ; t78 [ 2 ] = 1.5 ; t78 [ 3 ] = 1.75 ; t78 [ 4 ] = 2.0
; nonscalar32 [ 0 ] = 0.0 ; nonscalar32 [ 1 ] = 188.49555921538757 ;
nonscalar32 [ 2 ] = 376.99111843077515 ; t104 = ( ( ( real_T ) ( X [ 51ULL ]
>= 0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1
) - 0.9 ) / 0.099999999999999978 ; if ( ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X
[ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 <= 0.9 ) {
t108 = 0.0 ; } else { t108 = ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ]
* 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 >= 1.0 ? 1.0 : t104 *
t104 * 3.0 - t104 * t104 * t104 * 2.0 ; } Fuel_Cell_Boost_Converter_L_i = X [
56ULL ] * 1.0E-9 + X [ 2ULL ] ; intermediate_der9977 = U_idx_2 *
0.031415926535897927 ; if ( intermediate_der9977 * 0.0001 <=
7.8539816339744857E-13 ) { t109 = 7.8539816339744857E-13 ; } else if (
intermediate_der9977 * 0.0001 >= 3.1415926535897929E-6 ) { t109 =
3.1415926535897929E-6 ; } else { t109 = intermediate_der9977 * 0.0001 ; }
intermediate_der9865 = t109 / 7.8539816339744827E-5 ; if ( X [ 149ULL ] <=
0.0 ) { intermediate_der9879 = 0.0 ; } else { intermediate_der9879 = X [
149ULL ] >= 1.0 ? 1.0 : X [ 149ULL ] ; } if ( X [ 150ULL ] <= 0.0 ) { t414 =
0.0 ; } else { t414 = X [ 150ULL ] >= 1.0 ? 1.0 : X [ 150ULL ] ; } t415 = ( (
( 1.0 - intermediate_der9879 ) - t414 ) * 296.802103844292 +
intermediate_der9879 * 461.523 ) + t414 * 4124.48151675695 ; t116 = X [
147ULL ] * t415 ; intermediate_der9924 = X [ 148ULL ] / ( t116 == 0.0 ?
1.0E-16 : t116 ) ; t423 = X [ 148ULL ] / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X
[ 126ULL ] ) * ( X [ 151ULL ] / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL
] ) ) ; t118 = X [ 148ULL ] / 1.01325 * ( X [ 152ULL ] / ( X [ 147ULL ] ==
0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t122 = ( X [ 126ULL ] + 1.01325 ) / 2.0 *
0.0010000000000000009 ; intermediate_der2333 = ( 1.0 - intermediate_der9865 )
* ( 1.0 - intermediate_der9865 ) ; intermediate_der8977 = t122 *
intermediate_der2333 ; t271 = ( intermediate_der9865 + 1.0 ) * ( 1.0 -
intermediate_der9865 * t423 ) - ( 1.0 - intermediate_der9865 * t118 ) *
intermediate_der9865 * 2.0 ; intermediate_der6439 = ( X [ 126ULL ] - 1.01325
) * ( t271 >= intermediate_der2333 ? t271 : intermediate_der2333 ) ;
intrm_sf_mf_350 = ( X [ 126ULL ] - 1.01325 ) / ( t122 == 0.0 ? 1.0E-16 : t122
) ; t125 = intrm_sf_mf_350 * intrm_sf_mf_350 * 3.0 - intrm_sf_mf_350 *
intrm_sf_mf_350 * intrm_sf_mf_350 * 2.0 ; if ( X [ 126ULL ] - 1.01325 <= 0.0
) { intrm_sf_mf_350 = intermediate_der8977 ; } else if ( X [ 126ULL ] -
1.01325 >= t122 ) { intrm_sf_mf_350 = intermediate_der6439 ; } else {
intrm_sf_mf_350 = ( 1.0 - t125 ) * intermediate_der8977 +
intermediate_der6439 * t125 ; } intermediate_der6439 = ( intermediate_der9865
+ 1.0 ) * ( 1.0 - intermediate_der9865 * t118 ) - ( 1.0 -
intermediate_der9865 * t423 ) * intermediate_der9865 * 2.0 ; t396 = ( 1.01325
- X [ 126ULL ] ) * ( intermediate_der6439 >= intermediate_der2333 ?
intermediate_der6439 : intermediate_der2333 ) ; t8 = ( 1.01325 - X [ 126ULL ]
) / ( t122 == 0.0 ? 1.0E-16 : t122 ) ; t126 = t8 * t8 * 3.0 - t8 * t8 * t8 *
2.0 ; if ( 1.01325 - X [ 126ULL ] <= 0.0 ) { t8 = intermediate_der8977 ; }
else if ( 1.01325 - X [ 126ULL ] >= t122 ) { t8 = t396 ; } else { t8 = ( 1.0
- t126 ) * intermediate_der8977 + t396 * t126 ; } if ( X [ 126ULL ] > 1.01325
) { t396 = intrm_sf_mf_350 ; } else { t396 = X [ 126ULL ] < 1.01325 ? t8 :
intermediate_der8977 ; } if ( X [ 147ULL ] <= 216.59999999999997 ) {
intermediate_der8977 = 216.59999999999997 ; } else { intermediate_der8977 = X
[ 147ULL ] >= 623.15 ? 623.15 : X [ 147ULL ] ; } t398 = intermediate_der8977
* intermediate_der8977 ; intrm_sf_mf_350 = ( ( ( 1074.1165326382641 +
intermediate_der8977 * - 0.2214565261064495 ) + t398 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der9879 ) - t414 ) + ( ( 1479.6504774711011 +
intermediate_der8977 * 1.2002114337048222 ) + t398 * - 0.00038614513167823636
) * intermediate_der9879 ) + ( ( 12825.281119789837 + intermediate_der8977 *
6.9647057412840034 ) + t398 * - 0.0070524868246844051 ) * t414 ; t127 =
intrm_sf_mf_350 - t415 ; t128 = X [ 148ULL ] * X [ 148ULL ] * (
intrm_sf_mf_350 / ( t127 == 0.0 ? 1.0E-16 : t127 ) ) ; intermediate_der9879 =
pmf_sqrt ( fabs ( t128 / ( t415 == 0.0 ? 1.0E-16 : t415 ) / ( X [ 147ULL ] ==
0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ) * t109 * 0.64 ; t131 =
intermediate_der9924 * 2.0 ; t414 = ( X [ 126ULL ] - 1.01325 ) * pmf_sqrt (
fabs ( t131 / ( t396 == 0.0 ? 1.0E-16 : t396 ) ) ) * t109 * 0.64 ;
intermediate_der8977 = ( X [ 174ULL ] * - 0.7999998 + U_idx_3 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( intermediate_der8977 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_350 =
7.8539816339744857E-13 ; } else if ( intermediate_der8977 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) { intrm_sf_mf_350 =
3.1415926535897929E-6 ; } else { intrm_sf_mf_350 = intermediate_der8977 *
7.8539816339744827E-5 ; } t8 = intrm_sf_mf_350 / 7.8539816339744827E-5 ; if (
X [ 197ULL ] <= 0.0 ) { t398 = 0.0 ; } else { t398 = X [ 197ULL ] >= 1.0 ?
1.0 : X [ 197ULL ] ; } if ( X [ 198ULL ] <= 0.0 ) { t127 = 0.0 ; } else {
t127 = X [ 198ULL ] >= 1.0 ? 1.0 : X [ 198ULL ] ; } t385 = ( ( ( 1.0 - t398 )
- t127 ) * 296.802103844292 + t398 * 461.523 ) + t127 * 4124.48151675695 ;
t133 = X [ 195ULL ] * t385 ; t386 = X [ 196ULL ] / ( t133 == 0.0 ? 1.0E-16 :
t133 ) ; intermediate_der8394 = X [ 196ULL ] / ( X [ 22ULL ] == 0.0 ? 1.0E-16
: X [ 22ULL ] ) * ( X [ 199ULL ] / ( X [ 195ULL ] == 0.0 ? 1.0E-16 : X [
195ULL ] ) ) ; intermediate_der8922 = X [ 196ULL ] / ( X [ 174ULL ] == 0.0 ?
1.0E-16 : X [ 174ULL ] ) * ( X [ 200ULL ] / ( X [ 195ULL ] == 0.0 ? 1.0E-16 :
X [ 195ULL ] ) ) ; t377 = ( X [ 22ULL ] + X [ 174ULL ] ) / 2.0 *
0.0010000000000000009 ; t136 = ( 1.0 - t8 ) * ( 1.0 - t8 ) ; U_idx_2 = t377 *
t136 ; t142 = ( t8 + 1.0 ) * ( 1.0 - t8 * intermediate_der8394 ) - ( 1.0 - t8
* intermediate_der8922 ) * t8 * 2.0 ; t378 = ( X [ 22ULL ] - X [ 174ULL ] ) *
( t142 >= t136 ? t142 : t136 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( X [ 22ULL ] - X [
174ULL ] ) / ( t377 == 0.0 ? 1.0E-16 : t377 ) ; t362 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 2.0 ; if ( X [ 22ULL
] - X [ 174ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = U_idx_2 ; } else if (
X [ 22ULL ] - X [ 174ULL ] >= t377 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = t378 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( 1.0 - t362 ) *
U_idx_2 + t378 * t362 ; } t378 = ( t8 + 1.0 ) * ( 1.0 - t8 *
intermediate_der8922 ) - ( 1.0 - t8 * intermediate_der8394 ) * t8 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
174ULL ] - X [ 22ULL ] ) * ( t378 >= t136 ? t378 : t136 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = ( X [ 174ULL ] - X
[ 22ULL ] ) / ( t377 == 0.0 ? 1.0E-16 : t377 ) ; t367 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 2.0 ; if ( X [
174ULL ] - X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = U_idx_2 ; } else if
( X [ 174ULL ] - X [ 22ULL ] >= t377 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = ( 1.0 - t367 ) *
U_idx_2 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t367 ; } if ( X [ 22ULL ] > X [ 174ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 22ULL ]
< X [ 174ULL ] ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I :
U_idx_2 ; } if ( X [ 195ULL ] <= 216.59999999999997 ) { U_idx_2 =
216.59999999999997 ; } else { U_idx_2 = X [ 195ULL ] >= 623.15 ? 623.15 : X [
195ULL ] ; } t97 = U_idx_2 * U_idx_2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( ( (
1074.1165326382641 + U_idx_2 * - 0.2214565261064495 ) + t97 *
0.00037212980109014541 ) * ( ( 1.0 - t398 ) - t127 ) + ( ( 1479.6504774711011
+ U_idx_2 * 1.2002114337048222 ) + t97 * - 0.00038614513167823636 ) * t398 )
+ ( ( 12825.281119789837 + U_idx_2 * 6.9647057412840034 ) + t97 * -
0.0070524868246844051 ) * t127 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I - t385 ; t146 = X [
196ULL ] * X [ 196ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) ) ; t398 = pmf_sqrt (
fabs ( t146 / ( t385 == 0.0 ? 1.0E-16 : t385 ) / ( X [ 195ULL ] == 0.0 ?
1.0E-16 : X [ 195ULL ] ) ) ) * intrm_sf_mf_350 * 0.64 ; t149 = t386 * 2.0 ;
t127 = ( X [ 22ULL ] - X [ 174ULL ] ) * pmf_sqrt ( fabs ( t149 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * intrm_sf_mf_350 * 0.64 ; if ( X [ 35ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = X [ 35ULL ] >= 1.0 ?
1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = X [ 34ULL ] >= 1.0
? 1.0 : X [ 34ULL ] ; } t97 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * 296.802103844292
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I * 4124.48151675695 ;
t54 [ 0ULL ] = X [ 33ULL ] ; t52 [ 0 ] = 52ULL ; t12 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t54 [ 0ULL ] , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t6 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = t73_idx_0 ;
tlu2_1d_linear_linear_value ( & c_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = c_efOut [ 0 ] ; t147 =
t73_idx_0 ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t6 . mField0
[ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I = ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * t147 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) + t73_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) - X [ 33ULL ] * t97
* 0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I = t147 - X
[ 33ULL ] * 0.296802103844292 ; t147 = t73_idx_0 - X [ 33ULL ] *
4.12448151675695 ; t150 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I - X [ 33ULL ] *
0.461523 ; if ( X [ 41ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = X [ 41ULL ] >= 1.0 ?
1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t151 = 0.0 ; } else { t151
= X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } intrm_sf_mf_875 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) - t151 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
461.523 ) + t151 * 259.836612622973 ; t54 [ 0ULL ] = X [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t54 [ 0ULL ] , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t6 =
e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 = t73_idx_0 ;
tlu2_1d_linear_linear_value ( & g_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = g_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t73_idx_0 ;
tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) - t151 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) + t73_idx_0 * t151 )
- X [ 39ULL ] * intrm_sf_mf_875 * 0.001 ; t151 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - X [ 39ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I =
t73_idx_0 - X [ 39ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 - X [ 39ULL ]
* 0.461523 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2
= pmf_sqrt ( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = ( X [ 339ULL ] *
0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
45ULL ] <= 0.0 ) { t344 = 0.0 ; } else { t344 = X [ 45ULL ] >= 1.0 ? 1.0 : X
[ 45ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = X [
46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } zc_int260 = ( ( ( 1.0 - t344 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) *
296.802103844292 + t344 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 *
259.836612622973 ; if ( X [ 345ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = X [
345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ; } if ( X [ 346ULL ] <= 0.0 ) { U_idx_9
= 0.0 ; } else { U_idx_9 = X [ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } t54 [
0ULL ] = X [ 43ULL ] ; tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [
0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t54 [ 0ULL ] , & t52 [ 0ULL ] ,
& t12 [ 0ULL ] ) ; t6 = i_efOut ; tlu2_1d_linear_nearest_value ( & j_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t52 [ 0ULL ] , & t12 [ 0ULL ] )
; t73_idx_0 = j_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL
] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField0 , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; U_idx_2 =
k_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; U_idx_3 = l_efOut [ 0 ] ;
zc_int265 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ) - U_idx_9 )
* t73_idx_0 + U_idx_2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke ) + U_idx_3 *
U_idx_9 ; t153 = X [ 43ULL ] * zc_int260 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = X [ 44ULL ]
/ ( t153 == 0.0 ? 1.0E-16 : t153 ) ; U_idx_9 = - ( ( X [ 43ULL ] / ( X [
44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 347ULL ] / ( X [ 348ULL ] ==
0.0 ? 1.0E-16 : X [ 348ULL ] ) ) * X [ 330ULL ] * zc_int260 ) /
0.0019634954084936209 ; if ( X [ 347ULL ] <= 216.59999999999997 ) { zc_int254
= 216.59999999999997 ; } else { zc_int254 = X [ 347ULL ] >= 623.15 ? 623.15 :
X [ 347ULL ] ; } t154 = zc_int254 * zc_int254 ; t153 = ( ( (
1074.1165326382641 + zc_int254 * - 0.2214565261064495 ) + t154 *
0.00037212980109014541 ) * ( ( 1.0 - t344 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) + ( (
1479.6504774711011 + zc_int254 * 1.2002114337048222 ) + t154 * -
0.00038614513167823636 ) * t344 ) + ( ( 900.63941224838356 + zc_int254 * -
0.044484923911382625 ) + t154 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ; t328 = t153
- zc_int260 ; t344 = t153 / ( t328 == 0.0 ? 1.0E-16 : t328 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = pmf_sqrt (
U_idx_9 * U_idx_9 * 9.999999999999999E-14 + fabs ( X [ 347ULL ] * t344 *
zc_int260 ) * 1.0E-9 ) ; U_idx_3 = X [ 348ULL ] * X [ 348ULL ] * t344 ;
zc_int254 = - pmf_sqrt ( fabs ( U_idx_3 / ( zc_int260 == 0.0 ? 1.0E-16 :
zc_int260 ) / ( X [ 347ULL ] == 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) ) *
0.0019634954084936209 ; if ( zc_int254 >= 0.0 ) { t153 = zc_int254 * 100000.0
; } else { t153 = - zc_int254 * 100000.0 ; } t164 = zc_int265 *
0.0019634954084936209 ; t154 = t153 * 0.05 / ( t164 == 0.0 ? 1.0E-16 : t164 )
; t166 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke *
9.8174770424681068E-6 ; t157 = zc_int254 * zc_int265 * 35.2 / ( t166 == 0.0 ?
1.0E-16 : t166 ) ; t336 = t154 >= 1.0 ? t154 : 1.0 ; t167 = pmf_log10 ( 6.9 /
( t336 == 0.0 ? 1.0E-16 : t336 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t336 == 0.0 ? 1.0E-16 : t336 ) + 2.8767404433520813E-5 ) * 3.24 ; t169 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke *
3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke = zc_int254 *
t153 * ( 1.0 / ( t167 == 0.0 ? 1.0E-16 : t167 ) ) * 0.55 / ( t169 == 0.0 ?
1.0E-16 : t169 ) ; t153 = ( t154 - 2000.0 ) / 2000.0 ; t336 = t153 * t153 *
3.0 - t153 * t153 * t153 * 2.0 ; if ( t154 <= 2000.0 ) { t153 = t157 * 1.0E-5
; } else if ( t154 >= 4000.0 ) { t153 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke * 1.0E-5 ; }
else { t153 = ( ( 1.0 - t336 ) * t157 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke * t336 ) *
1.0E-5 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 =
- ( X [ 330ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) /
0.0019634954084936209 * 0.00031622776601683789 + t153 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - X [ 44ULL ] ; if ( X
[ 341ULL ] <= 0.0 ) { t153 = 0.0 ; } else { t153 = X [ 341ULL ] >= 1.0 ? 1.0
: X [ 341ULL ] ; } if ( X [ 340ULL ] <= 0.0 ) { t157 = 0.0 ; } else { t157 =
X [ 340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; } t336 = ( ( ( 1.0 - t153 ) - t157
) * 296.802103844292 + t153 * 461.523 ) + t157 * 259.836612622973 ; t153 =
pmf_sqrt ( X [ 330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 ) ; if ( X [
339ULL ] * 0.0019634954084936209 <= 1.9634954084936209E-11 ) { t157 =
1.9634954084936209E-11 ; } else if ( X [ 339ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t157 = 0.0012566370614359179 ; } else { t157 = X [
339ULL ] * 0.0019634954084936209 ; } t328 = t157 / 0.0019634954084936209 ; if
( X [ 362ULL ] <= 0.0 ) { t161 = 0.0 ; } else { t161 = X [ 362ULL ] >= 1.0 ?
1.0 : X [ 362ULL ] ; } if ( X [ 363ULL ] <= 0.0 ) { t163 = 0.0 ; } else {
t163 = X [ 363ULL ] >= 1.0 ? 1.0 : X [ 363ULL ] ; } t165 = ( ( ( 1.0 - t161 )
- t163 ) * 296.802103844292 + t161 * 461.523 ) + t163 * 259.836612622973 ;
t173 = X [ 360ULL ] * t165 ; t167 = X [ 361ULL ] / ( t173 == 0.0 ? 1.0E-16 :
t173 ) ; t325 = X [ 361ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * ( X [ 364ULL ] / (
X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ; t170 = X [ 361ULL ] /
1.01325 * ( X [ 365ULL ] / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) )
; t172 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p + 1.01325 )
/ 2.0 * 0.0010000000000000009 ; t171 = ( 1.0 - t328 ) * ( 1.0 - t328 ) ; t173
= t172 * t171 ; t319 = ( t328 + 1.0 ) * ( 1.0 - t328 * t325 ) - ( 1.0 - t328
* t170 ) * t328 * 2.0 ; t180 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( t319 >=
t171 ? t319 : t171 ) ; intrm_sf_mf_1161 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) / ( t172 ==
0.0 ? 1.0E-16 : t172 ) ; t181 = intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 -
intrm_sf_mf_1161 * intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intrm_sf_mf_1167 = t173 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t172 ) {
intrm_sf_mf_1167 = t180 ; } else { intrm_sf_mf_1167 = ( 1.0 - t181 ) * t173 +
t180 * t181 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 = ( t328 +
1.0 ) * ( 1.0 - t328 * t170 ) - ( 1.0 - t328 * t325 ) * t328 * 2.0 ; t325 = (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t171 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 : t171 ) ;
t170 = ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) /
( t172 == 0.0 ? 1.0E-16 : t172 ) ; t182 = t170 * t170 * 3.0 - t170 * t170 *
t170 * 2.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0 ) { U_idx_2 =
t173 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= t172 ) { U_idx_2 =
t325 ; } else { U_idx_2 = ( 1.0 - t182 ) * t173 + t325 * t182 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1167 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ? U_idx_2 :
t173 ; } if ( X [ 360ULL ] <= 216.59999999999997 ) { intrm_sf_mf_1167 =
216.59999999999997 ; } else { intrm_sf_mf_1167 = X [ 360ULL ] >= 623.15 ?
623.15 : X [ 360ULL ] ; } t103 = intrm_sf_mf_1167 * intrm_sf_mf_1167 ;
U_idx_2 = ( ( ( 1074.1165326382641 + intrm_sf_mf_1167 * - 0.2214565261064495
) + t103 * 0.00037212980109014541 ) * ( ( 1.0 - t161 ) - t163 ) + ( (
1479.6504774711011 + intrm_sf_mf_1167 * 1.2002114337048222 ) + t103 * -
0.00038614513167823636 ) * t161 ) + ( ( 900.63941224838356 + intrm_sf_mf_1167
* - 0.044484923911382625 ) + t103 * 0.00036936011832044979 ) * t163 ; t183 =
U_idx_2 - t165 ; t184 = X [ 361ULL ] * X [ 361ULL ] * ( U_idx_2 / ( t183 ==
0.0 ? 1.0E-16 : t183 ) ) ; t161 = pmf_sqrt ( fabs ( t184 / ( t165 == 0.0 ?
1.0E-16 : t165 ) / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ) *
t157 * 0.64 ; t187 = t167 * 2.0 ; t163 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( fabs ( t187 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * t157 * 0.64 ; t189 = t172 - ( - t172 ) ; intrm_sf_mf_1167 = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) - ( - t172
) ) / ( t189 == 0.0 ? 1.0E-16 : t189 ) ; t103 = ( U_idx_1 - 0.9 ) /
0.099999999999999978 ; if ( M [ 168ULL ] != 0 ) { t183 = 216.59999999999997 ;
} else { t183 = M [ 169ULL ] != 0 ? 623.15 : U_idx_8 ; } t54 [ 0ULL ] =
U_idx_7 >= 0.0 ? t183 : X [ 39ULL ] ; tlu2_linear_linear_prelookup ( &
m_efOut . mField0 [ 0ULL ] , & m_efOut . mField1 [ 0ULL ] , & m_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t54 [
0ULL ] , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t2 = m_efOut ;
tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = n_efOut [ 0 ] ; t183 =
t73_idx_0 ; U_idx_2 = pmf_sqrt ( U_idx_9 * U_idx_9 * 9.999999999999999E-14 +
( ( real_T ) ( M [ 180ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 347ULL ] * t344 *
zc_int260 * 1.0E-9 ) ; t344 = - pmf_sqrt ( ( ( real_T ) ( M [ 182ULL ] != 0 )
* 2.0 - 1.0 ) * ( U_idx_3 / ( zc_int260 == 0.0 ? 1.0E-16 : zc_int260 ) / ( X
[ 347ULL ] == 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) ) * 0.0019634954084936209 ;
zc_int260 = zc_int265 * t344 * 35.2 / ( t166 == 0.0 ? 1.0E-16 : t166 ) ; if (
zc_int254 >= 0.0 ) { U_idx_9 = t344 * 100000.0 ; } else { U_idx_9 = - t344 *
100000.0 ; } zc_int265 = U_idx_9 * 0.05 / ( t164 == 0.0 ? 1.0E-16 : t164 ) ;
zc_int254 = t154 >= 1.0 ? zc_int265 : 1.0 ; t198 = pmf_log10 ( 6.9 / (
zc_int254 == 0.0 ? 1.0E-16 : zc_int254 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( zc_int254 == 0.0 ? 1.0E-16 : zc_int254 ) +
2.8767404433520813E-5 ) * 3.24 ; t344 = t344 * U_idx_9 * ( 1.0 / ( t198 ==
0.0 ? 1.0E-16 : t198 ) ) * 0.55 / ( t169 == 0.0 ? 1.0E-16 : t169 ) ; U_idx_9
= ( zc_int265 - 2000.0 ) / 2000.0 ; zc_int265 = U_idx_9 * U_idx_9 * 3.0 -
U_idx_9 * U_idx_9 * U_idx_9 * 2.0 ; if ( t154 <= 2000.0 ) { U_idx_9 =
zc_int260 * 1.0E-5 ; } else if ( t154 >= 4000.0 ) { U_idx_9 = t344 * 1.0E-5 ;
} else { U_idx_9 = ( ( 1.0 - zc_int265 ) * zc_int260 + t344 * zc_int265 ) *
1.0E-5 ; } t344 = - ( X [ 330ULL ] * U_idx_2 ) / 0.0019634954084936209 *
0.00031622776601683789 + U_idx_9 ; U_idx_3 = - t344 - t344 * - 0.95 ;
zc_int260 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke - t344 * -
0.95 ) / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; zc_int265 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( ( ( real_T ) ( M [ 7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t187 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * t157 * 0.64 ; zc_int254 = pmf_sqrt ( ( ( real_T ) ( M [ 8ULL ] != 0 ) *
2.0 - 1.0 ) * ( t184 / ( t165 == 0.0 ? 1.0E-16 : t165 ) / ( X [ 360ULL ] ==
0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ) * t157 * 0.64 ; t210 = zc_int254 -
zc_int254 * 0.95 ; t154 = ( zc_int265 - zc_int254 * 0.95 ) / ( t210 == 0.0 ?
1.0E-16 : t210 ) ; t156 = ( - zc_int265 - zc_int254 * 0.95 ) / ( t210 == 0.0
? 1.0E-16 : t210 ) ; t164 = ( X [ 126ULL ] - 1.01325 ) * pmf_sqrt ( ( (
real_T ) ( M [ 78ULL ] != 0 ) * 2.0 - 1.0 ) * ( t131 / ( t396 == 0.0 ?
1.0E-16 : t396 ) ) ) * t109 * 0.64 ; t166 = pmf_sqrt ( ( ( real_T ) ( M [
89ULL ] != 0 ) * 2.0 - 1.0 ) * ( t128 / ( t415 == 0.0 ? 1.0E-16 : t415 ) / (
X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ) * t109 * 0.64 ; t218 =
t166 - t166 * 0.95 ; t169 = ( t164 - t166 * 0.95 ) / ( t218 == 0.0 ? 1.0E-16
: t218 ) ; t184 = t169 * t169 * 3.0 - t169 * t169 * t169 * 2.0 ; t188 = ( -
t164 - t166 * 0.95 ) / ( t218 == 0.0 ? 1.0E-16 : t218 ) ; t190 = t188 * t188
* 3.0 - t188 * t188 * t188 * 2.0 ; t192 = ( X [ 22ULL ] - X [ 174ULL ] ) *
pmf_sqrt ( ( ( real_T ) ( M [ 126ULL ] != 0 ) * 2.0 - 1.0 ) * ( t149 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * intrm_sf_mf_350 * 0.64 ; t194 = pmf_sqrt ( ( ( real_T ) ( M [ 127ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t146 / ( t385 == 0.0 ? 1.0E-16 : t385 ) / ( X [ 195ULL
] == 0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ) * intrm_sf_mf_350 * 0.64 ; t226 =
t194 - t194 * 0.95 ; t196 = ( t192 - t194 * 0.95 ) / ( t226 == 0.0 ? 1.0E-16
: t226 ) ; t198 = t196 * t196 * 3.0 - t196 * t196 * t196 * 2.0 ; t199 = ( -
t192 - t194 * 0.95 ) / ( t226 == 0.0 ? 1.0E-16 : t226 ) ; t201 = t199 * t199
* 3.0 - t199 * t199 * t199 * 2.0 ; if ( M [ 141ULL ] != 0 ) { U_idx_6 =
216.59999999999997 ; } else { U_idx_6 = M [ 142ULL ] != 0 ? 623.15 : U_idx_6
; } t54 [ 0ULL ] = U_idx_5 >= 0.0 ? U_idx_6 : X [ 33ULL ] ;
tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t54 [ 0ULL ] , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t6 =
o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = p_efOut [ 0 ] ;
U_idx_6 = t73_idx_0 ; U_idx_8 = ( real_T ) ( X [ 51ULL ] < 0.0 ) /
0.099999999999999978 ; if ( ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ] *
1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 <= 0.9 ) { t104 = 0.0 ; }
else { t104 = ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ] * 1000.0 + (
real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 >= 1.0 ? 0.0 : U_idx_8 * t104 * 6.0
- t104 * t104 * U_idx_8 * 6.0 ; } if ( intermediate_der9977 * 0.0001 <=
7.8539816339744857E-13 ) { t207 = 0.0 ; } else if ( intermediate_der9977 *
0.0001 >= 3.1415926535897929E-6 ) { t207 = 0.0 ; } else { t207 =
3.1415926535897929E-6 ; } intermediate_der9977 = t207 / 7.8539816339744827E-5
; if ( X [ 117ULL ] > 0.0 ) { U_idx_2 = t109 * t109 ; U_idx_8 = ( ( (
intermediate_der9865 + 1.0 ) * ( X [ 117ULL ] / 0.64 / ( t109 == 0.0 ?
1.0E-16 : t109 ) * ( - ( X [ 117ULL ] / 0.64 ) / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ) * t207 * 2.0 / 2.0 / ( intermediate_der9924 == 0.0 ? 1.0E-16 :
intermediate_der9924 ) ) + X [ 117ULL ] / 0.64 / ( t109 == 0.0 ? 1.0E-16 :
t109 ) * ( X [ 117ULL ] / 0.64 / ( t109 == 0.0 ? 1.0E-16 : t109 ) ) / 2.0 / (
intermediate_der9924 == 0.0 ? 1.0E-16 : intermediate_der9924 ) *
intermediate_der9977 ) * ( 1.0 - intermediate_der9865 * t423 ) + - ( t423 *
intermediate_der9977 ) * ( intermediate_der9865 + 1.0 ) * ( X [ 117ULL ] /
0.64 / ( t109 == 0.0 ? 1.0E-16 : t109 ) * ( X [ 117ULL ] / 0.64 / ( t109 ==
0.0 ? 1.0E-16 : t109 ) ) / 2.0 / ( intermediate_der9924 == 0.0 ? 1.0E-16 :
intermediate_der9924 ) ) ) * 9.9999999999999991E-11 ; } else if ( X [ 117ULL
] < 0.0 ) { U_idx_2 = t109 * t109 ; U_idx_8 = ( ( ( intermediate_der9865 +
1.0 ) * ( X [ 117ULL ] / 0.64 / ( t109 == 0.0 ? 1.0E-16 : t109 ) * ( - ( X [
117ULL ] / 0.64 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * t207 * 2.0 /
2.0 / ( intermediate_der9924 == 0.0 ? 1.0E-16 : intermediate_der9924 ) ) + X
[ 117ULL ] / 0.64 / ( t109 == 0.0 ? 1.0E-16 : t109 ) * ( X [ 117ULL ] / 0.64
/ ( t109 == 0.0 ? 1.0E-16 : t109 ) ) / 2.0 / ( intermediate_der9924 == 0.0 ?
1.0E-16 : intermediate_der9924 ) * intermediate_der9977 ) * ( 1.0 -
intermediate_der9865 * t118 ) + - ( t118 * intermediate_der9977 ) * (
intermediate_der9865 + 1.0 ) * ( X [ 117ULL ] / 0.64 / ( t109 == 0.0 ?
1.0E-16 : t109 ) * ( X [ 117ULL ] / 0.64 / ( t109 == 0.0 ? 1.0E-16 : t109 ) )
/ 2.0 / ( intermediate_der9924 == 0.0 ? 1.0E-16 : intermediate_der9924 ) ) )
* 9.9999999999999991E-11 ; } else { U_idx_8 = 0.0 ; } U_idx_9 = -
intermediate_der9977 * ( 1.0 - intermediate_der9865 ) * 2.0 ; U_idx_2 = t122
* U_idx_9 ; t271 = ( X [ 126ULL ] - 1.01325 ) * ( t271 >=
intermediate_der2333 ? ( ( 1.0 - intermediate_der9865 * t423 ) *
intermediate_der9977 + - ( t423 * intermediate_der9977 ) * (
intermediate_der9865 + 1.0 ) ) - ( ( 1.0 - intermediate_der9865 * t118 ) *
intermediate_der9977 * 2.0 + - ( t118 * intermediate_der9977 ) *
intermediate_der9865 * 2.0 ) : U_idx_9 ) ; if ( X [ 126ULL ] - 1.01325 <= 0.0
) { t271 = U_idx_2 ; } else if ( X [ 126ULL ] - 1.01325 >= t122 ) { } else {
t271 = ( 1.0 - t125 ) * U_idx_2 + t271 * t125 ; } intermediate_der9977 = (
1.01325 - X [ 126ULL ] ) * ( intermediate_der6439 >= intermediate_der2333 ? (
( 1.0 - intermediate_der9865 * t118 ) * intermediate_der9977 + - ( t118 *
intermediate_der9977 ) * ( intermediate_der9865 + 1.0 ) ) - ( ( 1.0 -
intermediate_der9865 * t423 ) * intermediate_der9977 * 2.0 + - ( t423 *
intermediate_der9977 ) * intermediate_der9865 * 2.0 ) : U_idx_9 ) ; if (
1.01325 - X [ 126ULL ] <= 0.0 ) { intermediate_der9865 = U_idx_2 ; } else if
( 1.01325 - X [ 126ULL ] >= t122 ) { intermediate_der9865 =
intermediate_der9977 ; } else { intermediate_der9865 = ( 1.0 - t126 ) *
U_idx_2 + intermediate_der9977 * t126 ; } if ( X [ 126ULL ] > 1.01325 ) {
intermediate_der9977 = t271 ; } else { intermediate_der9977 = X [ 126ULL ] <
1.01325 ? intermediate_der9865 : U_idx_2 ; } if ( intermediate_der8977 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t423 = 0.0 ; } else if (
intermediate_der8977 * 7.8539816339744827E-5 >= 3.1415926535897929E-6 ) {
t423 = 0.0 ; } else { t423 = 0.000628318373638326 ; } intermediate_der9865 =
t423 / 7.8539816339744827E-5 ; if ( - X [ 167ULL ] > 0.0 ) { U_idx_2 =
intrm_sf_mf_350 * intrm_sf_mf_350 ; t118 = ( ( ( t8 + 1.0 ) * ( - X [ 167ULL
] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - ( - X
[ 167ULL ] / 0.64 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * t423 * 2.0 /
2.0 / ( t386 == 0.0 ? 1.0E-16 : t386 ) ) + - X [ 167ULL ] / 0.64 / (
intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - X [ 167ULL ] /
0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / (
t386 == 0.0 ? 1.0E-16 : t386 ) * intermediate_der9865 ) * ( 1.0 - t8 *
intermediate_der8394 ) + - ( intermediate_der8394 * intermediate_der9865 ) *
( t8 + 1.0 ) * ( - X [ 167ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) * ( - X [ 167ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ?
1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t386 == 0.0 ? 1.0E-16 : t386 ) ) ) *
9.9999999999999991E-11 ; } else if ( - X [ 167ULL ] < 0.0 ) { U_idx_2 =
intrm_sf_mf_350 * intrm_sf_mf_350 ; t118 = ( ( ( t8 + 1.0 ) * ( - X [ 167ULL
] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - ( - X
[ 167ULL ] / 0.64 ) / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * t423 * 2.0 /
2.0 / ( t386 == 0.0 ? 1.0E-16 : t386 ) ) + - X [ 167ULL ] / 0.64 / (
intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) * ( - X [ 167ULL ] /
0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / (
t386 == 0.0 ? 1.0E-16 : t386 ) * intermediate_der9865 ) * ( 1.0 - t8 *
intermediate_der8922 ) + - ( intermediate_der8922 * intermediate_der9865 ) *
( t8 + 1.0 ) * ( - X [ 167ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) * ( - X [ 167ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ?
1.0E-16 : intrm_sf_mf_350 ) ) / 2.0 / ( t386 == 0.0 ? 1.0E-16 : t386 ) ) ) *
9.9999999999999991E-11 ; } else { t118 = 0.0 ; } intermediate_der2333 = -
intermediate_der9865 * ( 1.0 - t8 ) * 2.0 ; t122 = t377 *
intermediate_der2333 ; t271 = ( X [ 22ULL ] - X [ 174ULL ] ) * ( t142 >= t136
? ( ( 1.0 - t8 * intermediate_der8394 ) * intermediate_der9865 + - (
intermediate_der8394 * intermediate_der9865 ) * ( t8 + 1.0 ) ) - ( ( 1.0 - t8
* intermediate_der8922 ) * intermediate_der9865 * 2.0 + - (
intermediate_der8922 * intermediate_der9865 ) * t8 * 2.0 ) :
intermediate_der2333 ) ; if ( X [ 22ULL ] - X [ 174ULL ] <= 0.0 ) {
intermediate_der8977 = t122 ; } else if ( X [ 22ULL ] - X [ 174ULL ] >= t377
) { intermediate_der8977 = t271 ; } else { intermediate_der8977 = ( 1.0 -
t362 ) * t122 + t271 * t362 ; } intermediate_der9865 = ( X [ 174ULL ] - X [
22ULL ] ) * ( t378 >= t136 ? ( ( 1.0 - t8 * intermediate_der8922 ) *
intermediate_der9865 + - ( intermediate_der8922 * intermediate_der9865 ) * (
t8 + 1.0 ) ) - ( ( 1.0 - t8 * intermediate_der8394 ) * intermediate_der9865 *
2.0 + - ( intermediate_der8394 * intermediate_der9865 ) * t8 * 2.0 ) :
intermediate_der2333 ) ; if ( X [ 174ULL ] - X [ 22ULL ] <= 0.0 ) {
intermediate_der2333 = t122 ; } else if ( X [ 174ULL ] - X [ 22ULL ] >= t377
) { intermediate_der2333 = intermediate_der9865 ; } else {
intermediate_der2333 = ( 1.0 - t367 ) * t122 + intermediate_der9865 * t367 ;
} if ( X [ 22ULL ] > X [ 174ULL ] ) { intermediate_der9865 =
intermediate_der8977 ; } else { intermediate_der9865 = X [ 22ULL ] < X [
174ULL ] ? intermediate_der2333 : t122 ; } U_idx_9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; intermediate_der8977
= X [ 364ULL ] / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) * ( - X [
361ULL ] / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 ; if ( X [ 330ULL
] > 0.0 ) { t271 = - ( t328 * intermediate_der8977 ) * ( t328 + 1.0 ) * ( X [
330ULL ] / 0.64 / ( t157 == 0.0 ? 1.0E-16 : t157 ) * ( X [ 330ULL ] / 0.64 /
( t157 == 0.0 ? 1.0E-16 : t157 ) ) / 2.0 / ( t167 == 0.0 ? 1.0E-16 : t167 ) )
* 9.9999999999999991E-11 ; } else { t271 = 0.0 ; } t125 =
0.0050000000000000044 ; intermediate_der6439 = t171 * t125 ; t126 = ( t319 >=
t171 ? t319 : t171 ) * 10.0 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( t319 >=
t171 ? - ( t328 * intermediate_der8977 ) * ( t328 + 1.0 ) : 0.0 ) ; t319 =
t172 * t172 ; t8 = - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p
- 1.01325 ) / ( t319 == 0.0 ? 1.0E-16 : t319 ) * t125 + 10.0 / ( t172 == 0.0
? 1.0E-16 : t172 ) ; intermediate_der8394 = t8 * intrm_sf_mf_1161 * 6.0 -
intrm_sf_mf_1161 * intrm_sf_mf_1161 * t8 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) { t8
= intermediate_der6439 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t172 ) {
t8 = t126 ; } else { t8 = ( ( - intermediate_der8394 * t173 + ( 1.0 - t181 )
* intermediate_der6439 ) + t180 * intermediate_der8394 ) + t126 * t181 ; }
intermediate_der8977 = - 10.0 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t171 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 : t171 ) + (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val12 >= t171 ? - (
- ( t328 * intermediate_der8977 ) * t328 * 2.0 ) : 0.0 ) ; t126 = - ( 1.01325
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) / ( t319 == 0.0 ?
1.0E-16 : t319 ) * t125 + - 10.0 / ( t172 == 0.0 ? 1.0E-16 : t172 ) ;
intermediate_der8394 = t126 * t170 * 6.0 - t170 * t170 * t126 * 6.0 ; if (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0 ) {
t126 = intermediate_der6439 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= t172 ) { t126 =
intermediate_der8977 ; } else { t126 = ( ( - intermediate_der8394 * t173 + (
1.0 - t182 ) * intermediate_der6439 ) + t325 * intermediate_der8394 ) +
intermediate_der8977 * t182 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) {
intermediate_der8977 = t8 ; } else { intermediate_der8977 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ? t126 :
intermediate_der6439 ; } t328 = ( t172 - ( - t172 ) ) * ( t172 - ( - t172 ) )
; intermediate_der6439 = ( t125 - ( - t125 ) ) * ( - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) - ( - t172
) ) / ( t328 == 0.0 ? 1.0E-16 : t328 ) ) + ( 10.0 - ( - t125 ) ) / ( t189 ==
0.0 ? 1.0E-16 : t189 ) ; t125 = intermediate_der6439 * intrm_sf_mf_1167 * 6.0
- intrm_sf_mf_1167 * intrm_sf_mf_1167 * intermediate_der6439 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= - t172 ) {
intermediate_der6439 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >= t172 ) {
intermediate_der6439 = 10.0 ; } else { intermediate_der6439 = ( - t125 *
1.01325 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p * t125 ) +
10.0 * ( intrm_sf_mf_1167 * intrm_sf_mf_1167 * 3.0 - intrm_sf_mf_1167 *
intrm_sf_mf_1167 * intrm_sf_mf_1167 * 2.0 ) ; } if ( U_idx_10 >= 1.0 ) { t125
= 0.0 ; } else { t125 = ( real_T ) ! ( U_idx_10 <= 0.0 ) ; } t8 =
10.000000000000002 ; if ( U_idx_1 <= 0.9 ) { t8 = 0.0 ; } else { t8 = U_idx_1
>= 1.0 ? 0.0 : t8 * t103 * 6.0 - t103 * t103 * t8 * 6.0 ; } if ( M [ 168ULL ]
!= 0 ) { t126 = 0.0 ; } else { t126 = ( real_T ) ( M [ 169ULL ] == 0 ) ; }
tlu2_1d_linear_linear_value ( & q_efOut [ 0ULL ] , & t2 . mField1 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = q_efOut [ 0 ] ; t126 =
t73_idx_0 * ( U_idx_7 >= 0.0 ? t126 : 0.0 ) ; t367 = X [ 338ULL ] * t336 ;
t328 = - ( X [ 338ULL ] * t336 ) ; t325 = ( ( ( real_T ) ( M [ 5ULL ] != 0 )
* 2.0 - 1.0 ) * ( t367 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t328 / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 + ( ( real_T ) ( M [ 5ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t367 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t328 / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 ) * ( - X [ 330ULL ] /
0.0019634954084936209 ) * ( - X [ 330ULL ] / 0.0019634954084936209 ) ;
intermediate_der8922 = - 10.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; t136
= intermediate_der8922 * zc_int260 * 6.0 - zc_int260 * zc_int260 *
intermediate_der8922 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 * - 0.95 ) {
intermediate_der8922 = 10.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke >= -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) {
intermediate_der8922 = 0.0 ; } else { intermediate_der8922 = ( - t136 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_unchoke + ( 1.0 - (
zc_int260 * zc_int260 * 3.0 - zc_int260 * zc_int260 * zc_int260 * 2.0 ) ) *
10.0 ) + t136 * t344 ; } t136 = ( ( ( real_T ) ( M [ 5ULL ] != 0 ) * 2.0 -
1.0 ) * ( t367 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * (
t328 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 + ( ( real_T ) ( M [
5ULL ] != 0 ) * 2.0 - 1.0 ) * ( t367 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t328 / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 ) * ( X [ 330ULL ] /
0.0019634954084936209 ) * ( X [ 330ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 ; t362 = pmf_sqrt ( ( ( real_T ) ( M [ 7ULL ] != 0 ) *
2.0 - 1.0 ) * ( t187 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; t377 =
pmf_sqrt ( ( ( real_T ) ( M [ 7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t187 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
) * 10.0 * t157 * 0.64 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * ( (
real_T ) ( M [ 7ULL ] != 0 ) * 2.0 - 1.0 ) * ( - ( t167 * 2.0 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) )
* ( 1.0 / ( t362 == 0.0 ? 1.0E-16 : t362 ) ) * intermediate_der8977 * t157 *
0.32 ; intermediate_der8977 = t377 / ( t210 == 0.0 ? 1.0E-16 : t210 ) ; t142
= intermediate_der8977 * t154 * 6.0 - t154 * t154 * intermediate_der8977 *
6.0 ; if ( t163 <= t161 * 0.95 ) { intermediate_der8977 = t377 * 100000.0 ; }
else if ( t163 >= t161 ) { intermediate_der8977 = 0.0 ; } else {
intermediate_der8977 = ( ( - t142 * zc_int265 + ( 1.0 - ( t154 * t154 * 3.0 -
t154 * t154 * t154 * 2.0 ) ) * t377 ) + t142 * zc_int254 ) * 100000.0 ; }
t142 = - t377 / ( t210 == 0.0 ? 1.0E-16 : t210 ) ; t378 = t142 * t156 * 6.0 -
t156 * t156 * t142 * 6.0 ; if ( - t163 <= t161 * 0.95 ) { t142 = t377 *
100000.0 ; } else if ( - t163 >= t161 ) { t142 = 0.0 ; } else { t142 = ( ( -
t378 * zc_int265 + ( 1.0 - ( t156 * t156 * 3.0 - t156 * t156 * t156 * 2.0 ) )
* t377 ) + - zc_int254 * t378 ) * 100000.0 ; } t378 = pmf_sqrt ( ( ( real_T )
( M [ 78ULL ] != 0 ) * 2.0 - 1.0 ) * ( t131 / ( t396 == 0.0 ? 1.0E-16 : t396
) ) ) ; t367 = t396 * t396 ; intermediate_der9924 = ( X [ 126ULL ] - 1.01325
) * pmf_sqrt ( ( ( real_T ) ( M [ 78ULL ] != 0 ) * 2.0 - 1.0 ) * ( t131 / (
t396 == 0.0 ? 1.0E-16 : t396 ) ) ) * t207 * 0.64 + ( X [ 126ULL ] - 1.01325 )
* ( ( real_T ) ( M [ 78ULL ] != 0 ) * 2.0 - 1.0 ) * ( - (
intermediate_der9924 * 2.0 ) / ( t367 == 0.0 ? 1.0E-16 : t367 ) ) * ( 1.0 / (
t378 == 0.0 ? 1.0E-16 : t378 ) ) * intermediate_der9977 * t109 * 0.32 ;
intermediate_der9977 = pmf_sqrt ( ( ( real_T ) ( M [ 89ULL ] != 0 ) * 2.0 -
1.0 ) * ( t128 / ( t415 == 0.0 ? 1.0E-16 : t415 ) / ( X [ 147ULL ] == 0.0 ?
1.0E-16 : X [ 147ULL ] ) ) ) * t207 * 0.64 ; t362 = ( t166 - t166 * 0.95 ) *
( t166 - t166 * 0.95 ) ; t415 = ( intermediate_der9977 - intermediate_der9977
* 0.95 ) * ( - ( t164 - t166 * 0.95 ) / ( t362 == 0.0 ? 1.0E-16 : t362 ) ) +
( intermediate_der9924 - intermediate_der9977 * 0.95 ) / ( t218 == 0.0 ?
1.0E-16 : t218 ) ; t396 = t415 * t169 * 6.0 - t169 * t169 * t415 * 6.0 ; if (
t414 <= intermediate_der9879 * 0.95 ) { t415 = intermediate_der9924 *
100000.0 ; } else if ( t414 >= intermediate_der9879 ) { t415 =
intermediate_der9977 * 100000.0 ; } else { t415 = ( ( ( - t396 * t164 + ( 1.0
- t184 ) * intermediate_der9924 ) + t396 * t166 ) + intermediate_der9977 *
t184 ) * 100000.0 ; } t396 = ( intermediate_der9977 - intermediate_der9977 *
0.95 ) * ( - ( - t164 - t166 * 0.95 ) / ( t362 == 0.0 ? 1.0E-16 : t362 ) ) +
( - intermediate_der9924 - intermediate_der9977 * 0.95 ) / ( t218 == 0.0 ?
1.0E-16 : t218 ) ; t377 = t396 * t188 * 6.0 - t188 * t188 * t396 * 6.0 ; if (
- t414 <= intermediate_der9879 * 0.95 ) { t396 = intermediate_der9924 *
100000.0 ; } else if ( - t414 >= intermediate_der9879 ) { t396 = -
intermediate_der9977 * 100000.0 ; } else { t396 = ( ( ( - t377 * t164 + ( 1.0
- t190 ) * intermediate_der9924 ) + - t166 * t377 ) + - intermediate_der9977
* t190 ) * 100000.0 ; } t377 = pmf_sqrt ( ( ( real_T ) ( M [ 126ULL ] != 0 )
* 2.0 - 1.0 ) * ( t149 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) ; t378 = - ( t386 * 2.0 ) ; t386 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
intermediate_der9977 = ( X [ 22ULL ] - X [ 174ULL ] ) * pmf_sqrt ( ( ( real_T
) ( M [ 126ULL ] != 0 ) * 2.0 - 1.0 ) * ( t149 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
) * t423 * 0.64 + ( X [ 22ULL ] - X [ 174ULL ] ) * ( ( real_T ) ( M [ 126ULL
] != 0 ) * 2.0 - 1.0 ) * ( t378 / ( t386 == 0.0 ? 1.0E-16 : t386 ) ) * ( 1.0
/ ( t377 == 0.0 ? 1.0E-16 : t377 ) ) * intermediate_der9865 * intrm_sf_mf_350
* 0.32 ; intermediate_der9865 = pmf_sqrt ( ( ( real_T ) ( M [ 127ULL ] != 0 )
* 2.0 - 1.0 ) * ( t146 / ( t385 == 0.0 ? 1.0E-16 : t385 ) / ( X [ 195ULL ] ==
0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ) * t423 * 0.64 ; t377 = ( t194 - t194 *
0.95 ) * ( t194 - t194 * 0.95 ) ; intermediate_der9879 = (
intermediate_der9865 - intermediate_der9865 * 0.95 ) * ( - ( t192 - t194 *
0.95 ) / ( t377 == 0.0 ? 1.0E-16 : t377 ) ) + ( intermediate_der9977 -
intermediate_der9865 * 0.95 ) / ( t226 == 0.0 ? 1.0E-16 : t226 ) ;
intermediate_der9924 = intermediate_der9879 * t196 * 6.0 - t196 * t196 *
intermediate_der9879 * 6.0 ; if ( t127 <= t398 * 0.95 ) {
intermediate_der9879 = intermediate_der9977 * 100000.0 ; } else if ( t127 >=
t398 ) { intermediate_der9879 = intermediate_der9865 * 100000.0 ; } else {
intermediate_der9879 = ( ( ( - intermediate_der9924 * t192 + ( 1.0 - t198 ) *
intermediate_der9977 ) + intermediate_der9924 * t194 ) + intermediate_der9865
* t198 ) * 100000.0 ; } intermediate_der9924 = ( intermediate_der9865 -
intermediate_der9865 * 0.95 ) * ( - ( - t192 - t194 * 0.95 ) / ( t377 == 0.0
? 1.0E-16 : t377 ) ) + ( - intermediate_der9977 - intermediate_der9865 * 0.95
) / ( t226 == 0.0 ? 1.0E-16 : t226 ) ; t385 = intermediate_der9924 * t199 *
6.0 - t199 * t199 * intermediate_der9924 * 6.0 ; if ( - t127 <= t398 * 0.95 )
{ intermediate_der9924 = intermediate_der9977 * 100000.0 ; } else if ( - t127
>= t398 ) { intermediate_der9924 = - intermediate_der9865 * 100000.0 ; } else
{ intermediate_der9924 = ( ( ( - t385 * t192 + ( 1.0 - t201 ) *
intermediate_der9977 ) + - t194 * t385 ) + - intermediate_der9865 * t201 ) *
100000.0 ; } if ( M [ 141ULL ] != 0 ) { intermediate_der9977 = 0.0 ; } else {
intermediate_der9977 = ( real_T ) ( M [ 142ULL ] == 0 ) ; }
tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t6 . mField1 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t73_idx_0 = r_efOut [ 0 ] ;
intermediate_der9977 = t73_idx_0 * ( U_idx_5 >= 0.0 ? intermediate_der9977 :
0.0 ) ; t54 [ 0ULL ] = X [ 244ULL ] ; t52 [ 0 ] = 5ULL ;
tlu2_linear_nearest_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , & t78 [ 0ULL ] , & t54 [
0ULL ] , & t52 [ 0ULL ] , & t12 [ 0ULL ] ) ; t2 = s_efOut ; t54 [ 0ULL ] =
U_idx_4 * 837.75804095727813 * 0.99999999999999978 / 0.99999999999999978 *
0.99999999999999978 / 0.99999999999999978 ; t55 [ 0 ] = 3ULL ;
tlu2_linear_nearest_prelookup ( & t_efOut . mField0 [ 0ULL ] , & t_efOut .
mField1 [ 0ULL ] , & t_efOut . mField2 [ 0ULL ] , & nonscalar32 [ 0ULL ] , &
t54 [ 0ULL ] , & t55 [ 0ULL ] , & t12 [ 0ULL ] ) ; t6 = t_efOut ; t385 = ( M
[ 0ULL ] != 0 ? U_idx_1 : 0.9 ) * ( M [ 0ULL ] != 0 ? U_idx_1 : 0.9 ) ; t377
= M [ 0ULL ] != 0 ? U_idx_1 : 0.9 ; if ( M [ 111ULL ] != 0 ) { U_idx_2 = - (
( X [ 58ULL ] - Fuel_Cell_Boost_Converter_L_i ) * t125 * 0.001 ) ; } else {
U_idx_2 = - ( ( Fuel_Cell_Boost_Converter_L_i * 0.001 + X [ 53ULL ] ) * t125
) ; } U_idx_3 = t414 >= 0.0 ? - t415 : - t396 ; t414 = t109 * t109 ; t398 = (
( real_T ) ( M [ 113ULL ] != 0 ) * 2.0 - 1.0 ) * ( t116 / ( X [ 148ULL ] ==
0.0 ? 1.0E-16 : X [ 148ULL ] ) ) * ( t116 / ( X [ 148ULL ] == 0.0 ? 1.0E-16 :
X [ 148ULL ] ) ) * ( X [ 117ULL ] / 0.64 / ( t109 == 0.0 ? 1.0E-16 : t109 ) )
* ( - ( X [ 117ULL ] / 0.64 ) / ( t414 == 0.0 ? 1.0E-16 : t414 ) ) * t207 *
2.0 ; t414 = intrm_sf_mf_350 * intrm_sf_mf_350 ; t396 = ( ( real_T ) ( M [
130ULL ] != 0 ) * 2.0 - 1.0 ) * ( t133 / ( X [ 196ULL ] == 0.0 ? 1.0E-16 : X
[ 196ULL ] ) ) * ( t133 / ( X [ 196ULL ] == 0.0 ? 1.0E-16 : X [ 196ULL ] ) )
* ( - X [ 167ULL ] / 0.64 / ( intrm_sf_mf_350 == 0.0 ? 1.0E-16 :
intrm_sf_mf_350 ) ) * ( - ( - X [ 167ULL ] / 0.64 ) / ( t414 == 0.0 ? 1.0E-16
: t414 ) ) * t423 * 2.0 ; tlu2_2d_linear_nearest_value ( & u_efOut [ 0ULL ] ,
& t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField25 , &
t52 [ 0ULL ] , & t55 [ 0ULL ] , & t12 [ 0ULL ] ) ; t54 [ 0 ] = u_efOut [ 0 ]
; t78 [ 0ULL ] = - ( ( ( 1.0 - X [ 35ULL ] ) * ( - 164.72089615570803 / ( t97
== 0.0 ? 1.0E-16 : t97 ) ) + - X [ 34ULL ] * ( - 3827.6794129126583 / ( t97
== 0.0 ? 1.0E-16 : t97 ) ) ) / 12.896402563644669 ) ; t78 [ 1ULL ] = - ( ( (
( t150 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) * ( 1.0 -
X [ 35ULL ] ) + - X [ 34ULL ] * ( t147 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_a_I ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_u_I ) / 2246.65922904024 )
; t78 [ 2ULL ] = - X [ 35ULL ] ; t78 [ 3ULL ] = - X [ 34ULL ] ; t78 [ 4ULL ]
= U_idx_6 ; t79 [ 0ULL ] = - ( ( 1.0 - X [ 41ULL ] ) * ( - 164.72089615570803
/ ( intrm_sf_mf_875 == 0.0 ? 1.0E-16 : intrm_sf_mf_875 ) ) + - X [ 40ULL ] *
( 36.965491221318985 / ( intrm_sf_mf_875 == 0.0 ? 1.0E-16 : intrm_sf_mf_875 )
) ) ; t79 [ 1ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I - t151 ) * ( 1.0 - X
[ 41ULL ] ) + - X [ 40ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - t151 ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I ) / 2172.7681408465714
) ; t79 [ 2ULL ] = - X [ 41ULL ] ; t79 [ 3ULL ] = - X [ 40ULL ] ; t79 [ 4ULL
] = t183 ; t80 [ 0ULL ] = - ( ( - X [ 330ULL ] + t153 ) / 2.0 * ( t325 / 2.0
* 9.999999999999999E-14 ) ) ; t80 [ 1ULL ] = - X [ 330ULL ] >= 0.0 ? - 10.0 :
- intermediate_der8922 ; t80 [ 2ULL ] = - ( ( X [ 330ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti2 ) / 2.0 *
t136 ) ; t80 [ 3ULL ] = t163 >= 0.0 ? - intermediate_der8977 : - t142 ; t80 [
4ULL ] = - ( intermediate_der6439 - t271 ) ; t414 = X [ 364ULL ] * t165 ;
t415 = - ( X [ 364ULL ] * t165 ) ; t80 [ 5ULL ] = - ( ( ( ( real_T ) ( M [
9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t414 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t415 / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 + ( ( real_T ) ( M [ 9ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t414 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ) * ( t415 / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ) * 10.0 ) * ( X [ 330ULL ] / 0.64 /
0.0019634954084936209 ) * ( X [ 330ULL ] / 0.64 / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 ) ; t60 [ 0ULL ] = - ( ( X [ 52ULL ] * 0.1 +
650.0 ) * t8 + - t8 * X [ 52ULL ] * 1000.0 ) / 1000.0 ; t60 [ 1ULL ] = - ( (
- ( ( X [ 54ULL ] - X [ 52ULL ] * X [ 53ULL ] * 0.001 ) * t108 ) / ( t385 ==
0.0 ? 1.0E-16 : t385 ) * ( real_T ) ( M [ 0ULL ] != 0 ) + ( X [ 54ULL ] - X [
52ULL ] * X [ 53ULL ] * 0.001 ) * t104 / ( t377 == 0.0 ? 1.0E-16 : t377 ) ) *
1000.0 + ( - t104 * U_idx_1 + ( 1.0 - t108 ) ) / 1000.0 ) ; t60 [ 2ULL ] =
U_idx_3 ; t60 [ 3ULL ] = U_idx_8 ; t60 [ 4ULL ] = - ( t398 / 2.0 *
9.999999999999999E-14 ) ; t60 [ 5ULL ] = t127 >= 0.0 ? - intermediate_der9879
: - intermediate_der9924 ; t60 [ 6ULL ] = t118 ; t60 [ 7ULL ] = - ( t396 /
2.0 * 9.999999999999999E-14 ) ; t60 [ 8ULL ] = - ( t54 [ 0ULL ] *
837.75804095727813 ) ; for ( t87 = 0ULL ; t87 < 5ULL ; t87 ++ ) { t60 [ t87 +
9ULL ] = t78 [ t87 ] ; } t60 [ 14ULL ] = U_idx_5 * intermediate_der9977 ; for
( t87 = 0ULL ; t87 < 5ULL ; t87 ++ ) { t60 [ t87 + 15ULL ] = t79 [ t87 ] ; }
t60 [ 20ULL ] = U_idx_7 * t126 ; for ( t87 = 0ULL ; t87 < 6ULL ; t87 ++ ) {
t60 [ t87 + 21ULL ] = t80 [ t87 ] ; } out . mX [ 0 ] = t60 [ 0 ] ; out . mX [
1 ] = t60 [ 1 ] ; out . mX [ 2 ] = t60 [ 2 ] ; out . mX [ 3 ] = t60 [ 3 ] ;
out . mX [ 4 ] = t60 [ 4 ] ; out . mX [ 5 ] = t60 [ 5 ] ; out . mX [ 6 ] =
t60 [ 6 ] ; out . mX [ 7 ] = t60 [ 7 ] ; out . mX [ 8 ] = t60 [ 8 ] ; out .
mX [ 9 ] = t60 [ 9 ] ; out . mX [ 10 ] = t60 [ 10 ] ; out . mX [ 11 ] = t60 [
11 ] ; out . mX [ 12 ] = t60 [ 12 ] ; out . mX [ 13 ] = t60 [ 13 ] ; out . mX
[ 14 ] = t60 [ 14 ] ; out . mX [ 15 ] = t60 [ 15 ] ; out . mX [ 16 ] = t60 [
16 ] ; out . mX [ 17 ] = t60 [ 17 ] ; out . mX [ 18 ] = t60 [ 18 ] ; out . mX
[ 19 ] = t60 [ 19 ] ; out . mX [ 20 ] = t60 [ 20 ] ; out . mX [ 21 ] = t60 [
21 ] ; out . mX [ 22 ] = t60 [ 22 ] ; out . mX [ 23 ] = t60 [ 23 ] ; out . mX
[ 24 ] = t60 [ 24 ] ; out . mX [ 25 ] = t60 [ 25 ] ; out . mX [ 26 ] = t60 [
26 ] ; out . mX [ 27 ] = U_idx_2 ; out . mX [ 28 ] = - (
Fuel_Cell_Boost_Converter_L_i * t125 ) ; ( void ) LC ; ( void ) t425 ; return
0 ; }
