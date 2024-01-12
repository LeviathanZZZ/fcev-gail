#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_zc.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t329 , NeDsMethodOutput * t330 ) { PmRealVector out ;
real_T X [ 394 ] ; real_T t4 [ 200 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; real_T U_idx_1 ;
real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_6 ; real_T
U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1021 ; real_T intrm_sf_mf_1160
; real_T intrm_sf_mf_1161 ; real_T intrm_sf_mf_1252 ; real_T intrm_sf_mf_1455
; real_T intrm_sf_mf_1502 ; real_T intrm_sf_mf_170 ; real_T intrm_sf_mf_240 ;
real_T intrm_sf_mf_281 ; real_T intrm_sf_mf_357 ; real_T intrm_sf_mf_369 ;
real_T intrm_sf_mf_410 ; real_T intrm_sf_mf_478 ; real_T intrm_sf_mf_92 ;
real_T t100 ; real_T t103 ; real_T t105 ; real_T t106 ; real_T t107 ; real_T
t108 ; real_T t109 ; real_T t112 ; real_T t114 ; real_T t117 ; real_T t123 ;
real_T t124 ; real_T t128 ; real_T t150 ; real_T t152 ; real_T t268 ; real_T
t273 ; real_T t274 ; real_T t275 ; real_T t289 ; real_T t30 ; real_T t318 ;
real_T t33 ; real_T t39 ; real_T t45 ; real_T t51 ; real_T t57 ; real_T t60 ;
real_T t69 ; real_T t70 ; real_T t71 ; real_T t73 ; real_T t76 ; real_T t79 ;
real_T t81 ; real_T t83 ; real_T t88 ; real_T t91 ; real_T t97 ; real_T t98 ;
int32_T M [ 184 ] ; int32_T b ; ( void ) LC ; for ( b = 0 ; b < 184 ; b ++ )
{ M [ b ] = t329 -> mM . mX [ b ] ; } U_idx_1 = t329 -> mU . mX [ 1 ] ;
U_idx_2 = t329 -> mU . mX [ 2 ] ; U_idx_3 = t329 -> mU . mX [ 3 ] ; U_idx_6 =
t329 -> mU . mX [ 6 ] ; U_idx_8 = t329 -> mU . mX [ 8 ] ; U_idx_9 = t329 ->
mU . mX [ 9 ] ; U_idx_10 = t329 -> mU . mX [ 10 ] ; for ( b = 0 ; b < 394 ; b
++ ) { X [ b ] = t329 -> mX . mX [ b ] ; } out = t330 -> mZC ; if ( X [
122ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 = X [ 122ULL ] >= 1.0 ? 1.0 :
X [ 122ULL ] ; } if ( X [ 123ULL ] <= 0.0 ) { t318 = 0.0 ; } else { t318 = X
[ 123ULL ] >= 1.0 ? 1.0 : X [ 123ULL ] ; } t273 = ( ( ( 1.0 - t268 ) - t318 )
* 296.802103844292 + t268 * 461.523 ) + t318 * 4124.48151675695 ; if ( X [
19ULL ] <= 0.0 ) { t318 = 0.0 ; } else { t318 = X [ 19ULL ] >= 1.0 ? 1.0 : X
[ 19ULL ] ; } if ( X [ 20ULL ] <= 0.0 ) { t274 = 0.0 ; } else { t274 = X [
20ULL ] >= 1.0 ? 1.0 : X [ 20ULL ] ; } t275 = ( ( ( 1.0 - t318 ) - t274 ) *
296.802103844292 + t318 * 461.523 ) + t274 * 4124.48151675695 ; if ( X [
130ULL ] <= 216.59999999999997 ) { t152 = 216.59999999999997 ; } else { t152
= X [ 130ULL ] >= 623.15 ? 623.15 : X [ 130ULL ] ; } intrm_sf_mf_92 = t152 *
t152 ; t289 = ( ( ( 1074.1165326382641 + t152 * - 0.2214565261064495 ) +
intrm_sf_mf_92 * 0.00037212980109014541 ) * ( ( 1.0 - t318 ) - t274 ) + ( (
1479.6504774711011 + t152 * 1.2002114337048222 ) + intrm_sf_mf_92 * -
0.00038614513167823636 ) * t318 ) + ( ( 12825.281119789837 + t152 *
6.9647057412840034 ) + intrm_sf_mf_92 * - 0.0070524868246844051 ) * t274 ;
t70 = t289 - t275 ; t152 = t289 / ( t70 == 0.0 ? 1.0E-16 : t70 ) ; if ( X [
134ULL ] <= 216.59999999999997 ) { t289 = 216.59999999999997 ; } else { t289
= X [ 134ULL ] >= 623.15 ? 623.15 : X [ 134ULL ] ; } t70 = t289 * t289 ;
intrm_sf_mf_92 = ( ( ( 1074.1165326382641 + t289 * - 0.2214565261064495 ) +
t70 * 0.00037212980109014541 ) * ( ( 1.0 - t318 ) - t274 ) + ( (
1479.6504774711011 + t289 * 1.2002114337048222 ) + t70 * -
0.00038614513167823636 ) * t318 ) + ( ( 12825.281119789837 + t289 *
6.9647057412840034 ) + t70 * - 0.0070524868246844051 ) * t274 ; t71 =
intrm_sf_mf_92 - t275 ; t318 = intrm_sf_mf_92 / ( t71 == 0.0 ? 1.0E-16 : t71
) ; if ( X [ 128ULL ] <= 0.0 ) { t274 = 0.0 ; } else { t274 = X [ 128ULL ] >=
1.0 ? 1.0 : X [ 128ULL ] ; } if ( X [ 127ULL ] <= 0.0 ) { t289 = 0.0 ; } else
{ t289 = X [ 127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ; } intrm_sf_mf_92 = ( ( (
1.0 - t274 ) - t289 ) * 296.802103844292 + t274 * 461.523 ) + t289 *
4124.48151675695 ; if ( X [ 109ULL ] <= 0.0 ) { t274 = 0.0 ; } else { t274 =
X [ 109ULL ] >= 1.0 ? 1.0 : X [ 109ULL ] ; } if ( X [ 108ULL ] <= 0.0 ) {
t289 = 0.0 ; } else { t289 = X [ 108ULL ] >= 1.0 ? 1.0 : X [ 108ULL ] ; } t70
= ( ( ( 1.0 - t274 ) - t289 ) * 296.802103844292 + t274 * 461.523 ) + t289 *
4124.48151675695 ; t274 = U_idx_2 * 0.031415926535897927 ; if ( t274 * 0.0001
<= 7.8539816339744857E-13 ) { t289 = 7.8539816339744857E-13 ; } else if (
t274 * 0.0001 >= 3.1415926535897929E-6 ) { t289 = 3.1415926535897929E-6 ; }
else { t289 = t274 * 0.0001 ; } t274 = t289 / 7.8539816339744827E-5 ; if ( X
[ 149ULL ] <= 0.0 ) { t289 = 0.0 ; } else { t289 = X [ 149ULL ] >= 1.0 ? 1.0
: X [ 149ULL ] ; } if ( X [ 150ULL ] <= 0.0 ) { t71 = 0.0 ; } else { t71 = X
[ 150ULL ] >= 1.0 ? 1.0 : X [ 150ULL ] ; } intrm_sf_mf_170 = ( ( ( 1.0 - t289
) - t71 ) * 296.802103844292 + t289 * 461.523 ) + t71 * 4124.48151675695 ;
t73 = X [ 147ULL ] * intrm_sf_mf_170 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 148ULL
] / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [ 126ULL ] ) * ( X [ 151ULL ] / ( X [
147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t76 = X [ 148ULL ] / 1.01325 *
( X [ 152ULL ] / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t81 = (
X [ 126ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t79 = ( 1.0 - t274 )
* ( 1.0 - t274 ) ; intrm_sf_mf_357 = t81 * t79 ; intrm_sf_mf_240 = ( t274 +
1.0 ) * ( 1.0 - t274 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) - ( 1.0 -
t274 * t76 ) * t274 * 2.0 ; intrm_sf_mf_281 = ( X [ 126ULL ] - 1.01325 ) * (
intrm_sf_mf_240 >= t79 ? intrm_sf_mf_240 : t79 ) ; intrm_sf_mf_240 = ( X [
126ULL ] - 1.01325 ) / ( t81 == 0.0 ? 1.0E-16 : t81 ) ; t268 =
intrm_sf_mf_240 * intrm_sf_mf_240 * 3.0 - intrm_sf_mf_240 * intrm_sf_mf_240 *
intrm_sf_mf_240 * 2.0 ; if ( X [ 126ULL ] - 1.01325 <= 0.0 ) {
intrm_sf_mf_240 = intrm_sf_mf_357 ; } else if ( X [ 126ULL ] - 1.01325 >= t81
) { intrm_sf_mf_240 = intrm_sf_mf_281 ; } else { intrm_sf_mf_240 = ( 1.0 -
t268 ) * intrm_sf_mf_357 + intrm_sf_mf_281 * t268 ; } intrm_sf_mf_281 = (
t274 + 1.0 ) * ( 1.0 - t274 * t76 ) - ( 1.0 - t274 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) * t274 *
2.0 ; t274 = ( 1.01325 - X [ 126ULL ] ) * ( intrm_sf_mf_281 >= t79 ?
intrm_sf_mf_281 : t79 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.01325 -
X [ 126ULL ] ) / ( t81 == 0.0 ? 1.0E-16 : t81 ) ; t76 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ; if (
1.01325 - X [ 126ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_357 ; } else if ( 1.01325 - X [ 126ULL ] >= t81 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = t274 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = (
1.0 - t76 ) * intrm_sf_mf_357 + t274 * t76 ; } if ( X [ 126ULL ] > 1.01325 )
{ t274 = intrm_sf_mf_240 ; } else { t274 = X [ 126ULL ] < 1.01325 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 :
intrm_sf_mf_357 ; } if ( X [ 147ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 147ULL
] >= 623.15 ? 623.15 : X [ 147ULL ] ; } t83 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t76 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * -
0.2214565261064495 ) + t83 * 0.00037212980109014541 ) * ( ( 1.0 - t289 ) -
t71 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
1.2002114337048222 ) + t83 * - 0.00038614513167823636 ) * t289 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
6.9647057412840034 ) + t83 * - 0.0070524868246844051 ) * t71 ; t268 = t76 -
intrm_sf_mf_170 ; t289 = t76 / ( t268 == 0.0 ? 1.0E-16 : t268 ) ; if ( X [
24ULL ] <= 0.0 ) { t71 = 0.0 ; } else { t71 = X [ 24ULL ] >= 1.0 ? 1.0 : X [
24ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; } t76 = ( ( ( 1.0 - t71 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t71 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 27ULL ] <= 0.0 ) { t71 = 0.0 ; } else { t71 = X [
27ULL ] >= 1.0 ? 1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } t79 = ( ( ( 1.0 - t71 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t71 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 177ULL ] <= 216.59999999999997 ) { t81 =
216.59999999999997 ; } else { t81 = X [ 177ULL ] >= 623.15 ? 623.15 : X [
177ULL ] ; } t268 = t81 * t81 ; intrm_sf_mf_357 = ( ( ( 1074.1165326382641 +
t81 * - 0.2214565261064495 ) + t268 * 0.00037212980109014541 ) * ( ( 1.0 -
t71 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + (
( 1479.6504774711011 + t81 * 1.2002114337048222 ) + t268 * -
0.00038614513167823636 ) * t71 ) + ( ( 12825.281119789837 + t81 *
6.9647057412840034 ) + t268 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = intrm_sf_mf_357
- t79 ; t81 = intrm_sf_mf_357 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) ; if ( X [
182ULL ] <= 216.59999999999997 ) { intrm_sf_mf_357 = 216.59999999999997 ; }
else { intrm_sf_mf_357 = X [ 182ULL ] >= 623.15 ? 623.15 : X [ 182ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = intrm_sf_mf_357
* intrm_sf_mf_357 ; intrm_sf_mf_240 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_357 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
0.00037212980109014541 ) * ( ( 1.0 - t71 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + intrm_sf_mf_357 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * -
0.00038614513167823636 ) * t71 ) + ( ( 12825.281119789837 + intrm_sf_mf_357 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
intrm_sf_mf_369 = intrm_sf_mf_240 - t79 ; t71 = intrm_sf_mf_240 / (
intrm_sf_mf_369 == 0.0 ? 1.0E-16 : intrm_sf_mf_369 ) ; if ( X [ 176ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
X [ 176ULL ] >= 1.0 ? 1.0 : X [ 176ULL ] ; } if ( X [ 175ULL ] <= 0.0 ) {
intrm_sf_mf_357 = 0.0 ; } else { intrm_sf_mf_357 = X [ 175ULL ] >= 1.0 ? 1.0
: X [ 175ULL ] ; } intrm_sf_mf_240 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) -
intrm_sf_mf_357 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 461.523 ) +
intrm_sf_mf_357 * 4124.48151675695 ; if ( X [ 157ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
157ULL ] >= 1.0 ? 1.0 : X [ 157ULL ] ; } if ( X [ 156ULL ] <= 0.0 ) {
intrm_sf_mf_357 = 0.0 ; } else { intrm_sf_mf_357 = X [ 156ULL ] >= 1.0 ? 1.0
: X [ 156ULL ] ; } intrm_sf_mf_281 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) -
intrm_sf_mf_357 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 461.523 ) +
intrm_sf_mf_357 * 4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
174ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_357 =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) { intrm_sf_mf_357 =
3.1415926535897929E-6 ; } else { intrm_sf_mf_357 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_357 / 7.8539816339744827E-5 ; if ( X [ 197ULL ] <= 0.0 ) {
intrm_sf_mf_357 = 0.0 ; } else { intrm_sf_mf_357 = X [ 197ULL ] >= 1.0 ? 1.0
: X [ 197ULL ] ; } if ( X [ 198ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 =
X [ 198ULL ] >= 1.0 ? 1.0 : X [ 198ULL ] ; } t83 = ( ( ( 1.0 -
intrm_sf_mf_357 ) - t268 ) * 296.802103844292 + intrm_sf_mf_357 * 461.523 ) +
t268 * 4124.48151675695 ; t88 = X [ 195ULL ] * t83 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 196ULL ] / (
X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) * ( X [ 199ULL ] / ( X [ 195ULL
] == 0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ; intrm_sf_mf_369 = X [ 196ULL ] / ( X
[ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) * ( X [ 200ULL ] / ( X [ 195ULL
] == 0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ; intrm_sf_mf_410 = ( X [ 22ULL ] + X [
174ULL ] ) / 2.0 * 0.0010000000000000009 ; t91 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ; t97 =
intrm_sf_mf_410 * t91 ; intrm_sf_mf_1502 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
intrm_sf_mf_369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ;
intrm_sf_mf_478 = ( X [ 22ULL ] - X [ 174ULL ] ) * ( intrm_sf_mf_1502 >= t91
? intrm_sf_mf_1502 : t91 ) ; intrm_sf_mf_1502 = ( X [ 22ULL ] - X [ 174ULL ]
) / ( intrm_sf_mf_410 == 0.0 ? 1.0E-16 : intrm_sf_mf_410 ) ; t98 =
intrm_sf_mf_1502 * intrm_sf_mf_1502 * 3.0 - intrm_sf_mf_1502 *
intrm_sf_mf_1502 * intrm_sf_mf_1502 * 2.0 ; if ( X [ 22ULL ] - X [ 174ULL ]
<= 0.0 ) { intrm_sf_mf_1502 = t97 ; } else if ( X [ 22ULL ] - X [ 174ULL ] >=
intrm_sf_mf_410 ) { intrm_sf_mf_1502 = intrm_sf_mf_478 ; } else {
intrm_sf_mf_1502 = ( 1.0 - t98 ) * t97 + intrm_sf_mf_478 * t98 ; }
intrm_sf_mf_478 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
intrm_sf_mf_369 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
174ULL ] - X [ 22ULL ] ) * ( intrm_sf_mf_478 >= t91 ? intrm_sf_mf_478 : t91 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = ( X [ 174ULL ]
- X [ 22ULL ] ) / ( intrm_sf_mf_410 == 0.0 ? 1.0E-16 : intrm_sf_mf_410 ) ;
intrm_sf_mf_369 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 2.0 ; if ( X [
174ULL ] - X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = t97 ; } else if
( X [ 174ULL ] - X [ 22ULL ] >= intrm_sf_mf_410 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = ( 1.0 -
intrm_sf_mf_369 ) * t97 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
intrm_sf_mf_369 ; } if ( X [ 22ULL ] > X [ 174ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_1502 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 22ULL ]
< X [ 174ULL ] ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI :
t97 ; } if ( X [ 195ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 195ULL ] >=
623.15 ? 623.15 : X [ 195ULL ] ; } t150 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ; intrm_sf_mf_369
= ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * -
0.2214565261064495 ) + t150 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_357 ) - t268 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
1.2002114337048222 ) + t150 * - 0.00038614513167823636 ) * intrm_sf_mf_357 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
6.9647057412840034 ) + t150 * - 0.0070524868246844051 ) * t268 ; t100 =
intrm_sf_mf_369 - t83 ; intrm_sf_mf_357 = intrm_sf_mf_369 / ( t100 == 0.0 ?
1.0E-16 : t100 ) ; if ( X [ 213ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 =
X [ 213ULL ] >= 1.0 ? 1.0 : X [ 213ULL ] ; } if ( X [ 214ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 214ULL ] >=
1.0 ? 1.0 : X [ 214ULL ] ; } intrm_sf_mf_369 = ( ( ( 1.0 - t268 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) *
296.802103844292 + t268 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 259.836612622973
; if ( X [ 226ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 226ULL ] >=
1.0 ? 1.0 : X [ 226ULL ] ; } if ( X [ 225ULL ] <= 0.0 ) { t91 = 0.0 ; } else
{ t91 = X [ 225ULL ] >= 1.0 ? 1.0 : X [ 225ULL ] ; } intrm_sf_mf_410 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t91 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t91 * 259.836612622973 ; if ( X [ 32ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 32ULL ] >=
1.0 ? 1.0 : X [ 32ULL ] ; } if ( X [ 31ULL ] <= 0.0 ) { t91 = 0.0 ; } else {
t91 = X [ 31ULL ] >= 1.0 ? 1.0 : X [ 31ULL ] ; } t97 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t91 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t91 * 259.836612622973 ; if ( X [ 218ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 218ULL ] >=
1.0 ? 1.0 : X [ 218ULL ] ; } if ( X [ 217ULL ] <= 0.0 ) { t91 = 0.0 ; } else
{ t91 = X [ 217ULL ] >= 1.0 ? 1.0 : X [ 217ULL ] ; } intrm_sf_mf_1502 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t91 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t91 * 259.836612622973 ; if ( X [ 35ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 35ULL ] >=
1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { t91 = 0.0 ; } else {
t91 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_478 = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t91 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t91 * 4124.48151675695 ; if ( X [ 256ULL ] <=
216.59999999999997 ) { t98 = 216.59999999999997 ; } else { t98 = X [ 256ULL ]
>= 623.15 ? 623.15 : X [ 256ULL ] ; } t100 = t98 * t98 ; t150 = ( ( (
1074.1165326382641 + t98 * - 0.2214565261064495 ) + t100 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t91 ) + ( (
1479.6504774711011 + t98 * 1.2002114337048222 ) + t100 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t98 * 6.9647057412840034 ) + t100 * -
0.0070524868246844051 ) * t91 ; t30 = t150 - intrm_sf_mf_478 ; t98 = t150 / (
t30 == 0.0 ? 1.0E-16 : t30 ) ; if ( X [ 259ULL ] <= 216.59999999999997 ) {
t150 = 216.59999999999997 ; } else { t150 = X [ 259ULL ] >= 623.15 ? 623.15 :
X [ 259ULL ] ; } t30 = t150 * t150 ; t100 = ( ( ( 1074.1165326382641 + t150 *
- 0.2214565261064495 ) + t30 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t91 ) + ( (
1479.6504774711011 + t150 * 1.2002114337048222 ) + t30 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t150 * 6.9647057412840034 ) + t30 * -
0.0070524868246844051 ) * t91 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = t100 -
intrm_sf_mf_478 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
= t100 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI == 0.0
? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ) ; if
( X [ 248ULL ] <= 0.0 ) { t91 = 0.0 ; } else { t91 = X [ 248ULL ] >= 1.0 ?
1.0 : X [ 248ULL ] ; } if ( X [ 247ULL ] <= 0.0 ) { t150 = 0.0 ; } else {
t150 = X [ 247ULL ] >= 1.0 ? 1.0 : X [ 247ULL ] ; } t100 = ( ( ( 1.0 - t91 )
- t150 ) * 296.802103844292 + t91 * 461.523 ) + t150 * 4124.48151675695 ; if
( X [ 6ULL ] <= 0.0 ) { t91 = 0.0 ; } else { t91 = X [ 6ULL ] >= 1.0 ? 1.0 :
X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) { t150 = 0.0 ; } else { t150 = X [
5ULL ] >= 1.0 ? 1.0 : X [ 5ULL ] ; } t30 = ( ( ( 1.0 - t91 ) - t150 ) *
296.802103844292 + t91 * 461.523 ) + t150 * 4124.48151675695 ; if ( X [
270ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = X [ 270ULL ] >=
623.15 ? 623.15 : X [ 270ULL ] ; } t33 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t33 * 0.00037212980109014541 ) * ( ( 1.0 - t91 ) -
t150 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t33 * - 0.00038614513167823636 ) * t91 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
6.9647057412840034 ) + t33 * - 0.0070524868246844051 ) * t150 ; t103 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI - t30 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t103 == 0.0 ?
1.0E-16 : t103 ) ; if ( X [ 273ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 273ULL ] >=
623.15 ? 623.15 : X [ 273ULL ] ; } t103 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t33 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * -
0.2214565261064495 ) + t103 * 0.00037212980109014541 ) * ( ( 1.0 - t91 ) -
t150 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
1.2002114337048222 ) + t103 * - 0.00038614513167823636 ) * t91 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
6.9647057412840034 ) + t103 * - 0.0070524868246844051 ) * t150 ; t128 = t33 -
t30 ; t91 = t33 / ( t128 == 0.0 ? 1.0E-16 : t128 ) ; if ( X [ 62ULL ] <= 0.0
) { t150 = 0.0 ; } else { t150 = X [ 62ULL ] >= 1.0 ? 1.0 : X [ 62ULL ] ; }
if ( X [ 61ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 61ULL ] >=
1.0 ? 1.0 : X [ 61ULL ] ; } t33 = ( ( ( 1.0 - t150 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t150 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 9ULL ] <= 0.0 ) { t150 = 0.0 ; } else { t150 = X [ 9ULL ] >= 1.0 ?
1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 8ULL ] >=
1.0 ? 1.0 : X [ 8ULL ] ; } t103 = ( ( ( 1.0 - t150 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t150 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 284ULL ] <= 216.59999999999997 ) { t128 = 216.59999999999997 ; }
else { t128 = X [ 284ULL ] >= 623.15 ? 623.15 : X [ 284ULL ] ; } t39 = t128 *
t128 ; t268 = ( ( ( 1074.1165326382641 + t128 * - 0.2214565261064495 ) + t39
* 0.00037212980109014541 ) * ( ( 1.0 - t150 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t128 * 1.2002114337048222 ) + t39 * -
0.00038614513167823636 ) * t150 ) + ( ( 12825.281119789837 + t128 *
6.9647057412840034 ) + t39 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t105 = t268 -
t103 ; t128 = t268 / ( t105 == 0.0 ? 1.0E-16 : t105 ) ; if ( X [ 286ULL ] <=
216.59999999999997 ) { t268 = 216.59999999999997 ; } else { t268 = X [ 286ULL
] >= 623.15 ? 623.15 : X [ 286ULL ] ; } t105 = t268 * t268 ; t39 = ( ( (
1074.1165326382641 + t268 * - 0.2214565261064495 ) + t105 *
0.00037212980109014541 ) * ( ( 1.0 - t150 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t268 * 1.2002114337048222 ) + t105 * -
0.00038614513167823636 ) * t150 ) + ( ( 12825.281119789837 + t268 *
6.9647057412840034 ) + t105 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t106 = t39 -
t103 ; t150 = t39 / ( t106 == 0.0 ? 1.0E-16 : t106 ) ; if ( X [ 41ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 41ULL
] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t268 = 0.0 ; }
else { t268 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t39 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t268 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + t268 * 259.836612622973 ; if ( X [ 305ULL ] <=
216.59999999999997 ) { t105 = 216.59999999999997 ; } else { t105 = X [ 305ULL
] >= 623.15 ? 623.15 : X [ 305ULL ] ; } t45 = t105 * t105 ; t106 = ( ( (
1074.1165326382641 + t105 * - 0.2214565261064495 ) + t45 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t268 ) + ( (
1479.6504774711011 + t105 * 1.2002114337048222 ) + t45 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t105 * - 0.044484923911382625 ) + t45 *
0.00036936011832044979 ) * t268 ; t107 = t106 - t39 ; t105 = t106 / ( t107 ==
0.0 ? 1.0E-16 : t107 ) ; if ( X [ 308ULL ] <= 216.59999999999997 ) { t106 =
216.59999999999997 ; } else { t106 = X [ 308ULL ] >= 623.15 ? 623.15 : X [
308ULL ] ; } t107 = t106 * t106 ; t45 = ( ( ( 1074.1165326382641 + t106 * -
0.2214565261064495 ) + t107 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t268 ) + ( (
1479.6504774711011 + t106 * 1.2002114337048222 ) + t107 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t106 * - 0.044484923911382625 ) + t107 *
0.00036936011832044979 ) * t268 ; t108 = t45 - t39 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = t45 / ( t108 ==
0.0 ? 1.0E-16 : t108 ) ; if ( X [ 229ULL ] <= 0.0 ) { t268 = 0.0 ; } else {
t268 = X [ 229ULL ] >= 1.0 ? 1.0 : X [ 229ULL ] ; } if ( X [ 228ULL ] <= 0.0
) { t106 = 0.0 ; } else { t106 = X [ 228ULL ] >= 1.0 ? 1.0 : X [ 228ULL ] ; }
t45 = ( ( ( 1.0 - t268 ) - t106 ) * 296.802103844292 + t268 * 461.523 ) +
t106 * 259.836612622973 ; if ( X [ 297ULL ] <= 0.0 ) { t268 = 0.0 ; } else {
t268 = X [ 297ULL ] >= 1.0 ? 1.0 : X [ 297ULL ] ; } if ( X [ 296ULL ] <= 0.0
) { t106 = 0.0 ; } else { t106 = X [ 296ULL ] >= 1.0 ? 1.0 : X [ 296ULL ] ; }
t107 = ( ( ( 1.0 - t268 ) - t106 ) * 296.802103844292 + t268 * 461.523 ) +
t106 * 259.836612622973 ; if ( X [ 335ULL ] <= 0.0 ) { t268 = 0.0 ; } else {
t268 = X [ 335ULL ] >= 1.0 ? 1.0 : X [ 335ULL ] ; } if ( X [ 336ULL ] <= 0.0
) { t106 = 0.0 ; } else { t106 = X [ 336ULL ] >= 1.0 ? 1.0 : X [ 336ULL ] ; }
t108 = ( ( ( 1.0 - t268 ) - t106 ) * 296.802103844292 + t268 * 461.523 ) +
t106 * 259.836612622973 ; t106 = ( X [ 339ULL ] * 0.07812500122070315 +
U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [ 45ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X [ 45ULL ] >=
1.0 ? 1.0 : X [ 45ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } intrm_sf_mf_1021 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
* 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19
* 259.836612622973 ; if ( X [ 343ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI = X [ 343ULL ] >=
623.15 ? 623.15 : X [ 343ULL ] ; } t51 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t51 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t51 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + t51 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; t109 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 -
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 / ( t109 ==
0.0 ? 1.0E-16 : t109 ) ; if ( X [ 347ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 347ULL ]
>= 623.15 ? 623.15 : X [ 347ULL ] ; } t109 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; t51 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.2214565261064495 ) + t109 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
1.2002114337048222 ) + t109 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.044484923911382625 ) + t109 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t51 -
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
= t51 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) ; if (
X [ 322ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
322ULL ] >= 1.0 ? 1.0 : X [ 322ULL ] ; } if ( X [ 321ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 321ULL
] >= 1.0 ? 1.0 : X [ 321ULL ] ; } t51 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
259.836612622973 ; if ( X [ 341ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
341ULL ] >= 1.0 ? 1.0 : X [ 341ULL ] ; } if ( X [ 340ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 340ULL
] >= 1.0 ? 1.0 : X [ 340ULL ] ; } t109 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
259.836612622973 ; if ( X [ 339ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 =
1.9634954084936209E-11 ; } else if ( X [ 339ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 =
0.0012566370614359179 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [ 339ULL
] * 0.0019634954084936209 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 /
0.0019634954084936209 ; if ( X [ 362ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
362ULL ] >= 1.0 ? 1.0 : X [ 362ULL ] ; } if ( X [ 363ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 363ULL ] >=
1.0 ? 1.0 : X [ 363ULL ] ; } intrm_sf_mf_1160 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 259.836612622973
; t112 = X [ 360ULL ] * intrm_sf_mf_1160 ; U_idx_9 = X [ 361ULL ] / ( t106 ==
0.0 ? 1.0E-16 : t106 ) * ( X [ 364ULL ] / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X
[ 360ULL ] ) ) ; t114 = X [ 361ULL ] / 1.01325 * ( X [ 365ULL ] / ( X [
360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ; intrm_sf_mf_1455 = ( t106 +
1.01325 ) / 2.0 * 0.0010000000000000009 ; t117 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
intrm_sf_mf_1252 = intrm_sf_mf_1455 * t117 ; intrm_sf_mf_1161 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
U_idx_9 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t114 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = ( t106 -
1.01325 ) * ( intrm_sf_mf_1161 >= t117 ? intrm_sf_mf_1161 : t117 ) ;
intrm_sf_mf_1161 = ( t106 - 1.01325 ) / ( intrm_sf_mf_1455 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1455 ) ; t268 = intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 -
intrm_sf_mf_1161 * intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if ( t106 -
1.01325 <= 0.0 ) { intrm_sf_mf_1161 = intrm_sf_mf_1252 ; } else if ( t106 -
1.01325 >= intrm_sf_mf_1455 ) { intrm_sf_mf_1161 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; } else {
intrm_sf_mf_1161 = ( 1.0 - t268 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * t268 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t114 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
U_idx_9 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = (
1.01325 - t106 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI >= t117 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI : t117 ) ;
U_idx_9 = ( 1.01325 - t106 ) / ( intrm_sf_mf_1455 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1455 ) ; t114 = U_idx_9 * U_idx_9 * 3.0 - U_idx_9 * U_idx_9 *
U_idx_9 * 2.0 ; if ( 1.01325 - t106 <= 0.0 ) { U_idx_9 = intrm_sf_mf_1252 ; }
else if ( 1.01325 - t106 >= intrm_sf_mf_1455 ) { U_idx_9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; } else {
U_idx_9 = ( 1.0 - t114 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t114 ; } if
( t106 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1161 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t106 <
1.01325 ? U_idx_9 : intrm_sf_mf_1252 ; } if ( X [ 360ULL ] <=
216.59999999999997 ) { U_idx_9 = 216.59999999999997 ; } else { U_idx_9 = X [
360ULL ] >= 623.15 ? 623.15 : X [ 360ULL ] ; } t57 = U_idx_9 * U_idx_9 ; t114
= ( ( ( 1074.1165326382641 + U_idx_9 * - 0.2214565261064495 ) + t57 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + U_idx_9 * 1.2002114337048222 ) + t57 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
900.63941224838356 + U_idx_9 * - 0.044484923911382625 ) + t57 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; t60 = t114 -
intrm_sf_mf_1160 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = t114 / (
t60 == 0.0 ? 1.0E-16 : t60 ) ; if ( X [ 12ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 12ULL ] >=
1.0 ? 1.0 : X [ 12ULL ] ; } if ( X [ 11ULL ] <= 0.0 ) { U_idx_9 = 0.0 ; }
else { U_idx_9 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } t114 = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) - U_idx_9 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
* 461.523 ) + U_idx_9 * 259.836612622973 ; if ( X [ 367ULL ] <=
216.59999999999997 ) { t117 = 216.59999999999997 ; } else { t117 = X [ 367ULL
] >= 623.15 ? 623.15 : X [ 367ULL ] ; } t60 = t117 * t117 ; intrm_sf_mf_1455
= ( ( ( 1074.1165326382641 + t117 * - 0.2214565261064495 ) + t60 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) - U_idx_9 ) + (
( 1479.6504774711011 + t117 * 1.2002114337048222 ) + t60 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t117 * - 0.044484923911382625 ) + t60 *
0.00036936011832044979 ) * U_idx_9 ; t123 = intrm_sf_mf_1455 - t114 ; t117 =
intrm_sf_mf_1455 / ( t123 == 0.0 ? 1.0E-16 : t123 ) ; if ( X [ 370ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1455 = 216.59999999999997 ; } else {
intrm_sf_mf_1455 = X [ 370ULL ] >= 623.15 ? 623.15 : X [ 370ULL ] ; } t123 =
intrm_sf_mf_1455 * intrm_sf_mf_1455 ; intrm_sf_mf_1252 = ( ( (
1074.1165326382641 + intrm_sf_mf_1455 * - 0.2214565261064495 ) + t123 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) - U_idx_9 ) + (
( 1479.6504774711011 + intrm_sf_mf_1455 * 1.2002114337048222 ) + t123 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + intrm_sf_mf_1455 * - 0.044484923911382625 ) + t123 *
0.00036936011832044979 ) * U_idx_9 ; t124 = intrm_sf_mf_1252 - t114 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = intrm_sf_mf_1252
/ ( t124 == 0.0 ? 1.0E-16 : t124 ) ; if ( X [ 66ULL ] <= 0.0 ) { U_idx_9 =
0.0 ; } else { U_idx_9 = X [ 66ULL ] >= 1.0 ? 1.0 : X [ 66ULL ] ; } if ( X [
65ULL ] <= 0.0 ) { intrm_sf_mf_1455 = 0.0 ; } else { intrm_sf_mf_1455 = X [
65ULL ] >= 1.0 ? 1.0 : X [ 65ULL ] ; } intrm_sf_mf_1252 = ( ( ( 1.0 - U_idx_9
) - intrm_sf_mf_1455 ) * 296.802103844292 + U_idx_9 * 461.523 ) +
intrm_sf_mf_1455 * 259.836612622973 ; if ( X [ 15ULL ] <= 0.0 ) { U_idx_9 =
0.0 ; } else { U_idx_9 = X [ 15ULL ] >= 1.0 ? 1.0 : X [ 15ULL ] ; } if ( X [
14ULL ] <= 0.0 ) { intrm_sf_mf_1455 = 0.0 ; } else { intrm_sf_mf_1455 = X [
14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } intrm_sf_mf_1161 = ( ( ( 1.0 - U_idx_9
) - intrm_sf_mf_1455 ) * 296.802103844292 + U_idx_9 * 461.523 ) +
intrm_sf_mf_1455 * 259.836612622973 ; if ( X [ 381ULL ] <= 216.59999999999997
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = X [ 381ULL ] >=
623.15 ? 623.15 : X [ 381ULL ] ; } t124 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; t268 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.2214565261064495 ) + t124 * 0.00037212980109014541 ) * ( ( 1.0 - U_idx_9 )
- intrm_sf_mf_1455 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
1.2002114337048222 ) + t124 * - 0.00038614513167823636 ) * U_idx_9 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.044484923911382625 ) + t124 * 0.00036936011832044979 ) * intrm_sf_mf_1455 ;
t69 = t268 - intrm_sf_mf_1161 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = t268 / ( t69 ==
0.0 ? 1.0E-16 : t69 ) ; if ( X [ 383ULL ] <= 216.59999999999997 ) { t268 =
216.59999999999997 ; } else { t268 = X [ 383ULL ] >= 623.15 ? 623.15 : X [
383ULL ] ; } t69 = t268 * t268 ; t57 = ( ( ( 1074.1165326382641 + t268 * -
0.2214565261064495 ) + t69 * 0.00037212980109014541 ) * ( ( 1.0 - U_idx_9 ) -
intrm_sf_mf_1455 ) + ( ( 1479.6504774711011 + t268 * 1.2002114337048222 ) +
t69 * - 0.00038614513167823636 ) * U_idx_9 ) + ( ( 900.63941224838356 + t268
* - 0.044484923911382625 ) + t69 * 0.00036936011832044979 ) *
intrm_sf_mf_1455 ; t268 = t57 - intrm_sf_mf_1161 ; U_idx_9 = t57 / ( t268 ==
0.0 ? 1.0E-16 : t268 ) ; if ( X [ 326ULL ] <= 0.0 ) { intrm_sf_mf_1455 = 0.0
; } else { intrm_sf_mf_1455 = X [ 326ULL ] >= 1.0 ? 1.0 : X [ 326ULL ] ; } if
( X [ 325ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 = X [ 325ULL ] >= 1.0 ?
1.0 : X [ 325ULL ] ; } t57 = ( ( ( 1.0 - intrm_sf_mf_1455 ) - t268 ) *
296.802103844292 + intrm_sf_mf_1455 * 461.523 ) + t268 * 259.836612622973 ;
if ( U_idx_10 >= 1.0 ) { intrm_sf_mf_1455 = 1.0 ; } else { intrm_sf_mf_1455 =
U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; } if ( X [ 113ULL ] <= 0.0 ) { t268 = 0.0
; } else { t268 = X [ 113ULL ] >= 1.0 ? 1.0 : X [ 113ULL ] ; } if ( X [
112ULL ] <= 0.0 ) { U_idx_2 = 0.0 ; } else { U_idx_2 = X [ 112ULL ] >= 1.0 ?
1.0 : X [ 112ULL ] ; } t60 = ( ( ( 1.0 - t268 ) - U_idx_2 ) *
296.802103844292 + t268 * 461.523 ) + U_idx_2 * 4124.48151675695 ; if ( X [
160ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 = X [ 160ULL ] >= 1.0 ? 1.0 :
X [ 160ULL ] ; } if ( X [ 159ULL ] <= 0.0 ) { U_idx_2 = 0.0 ; } else {
U_idx_2 = X [ 159ULL ] >= 1.0 ? 1.0 : X [ 159ULL ] ; } t123 = ( ( ( 1.0 -
t268 ) - U_idx_2 ) * 296.802103844292 + t268 * 461.523 ) + U_idx_2 *
4124.48151675695 ; if ( X [ 204ULL ] <= 0.0 ) { t268 = 0.0 ; } else { t268 =
X [ 204ULL ] >= 1.0 ? 1.0 : X [ 204ULL ] ; } if ( X [ 203ULL ] <= 0.0 ) {
U_idx_2 = 0.0 ; } else { U_idx_2 = X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ;
} t124 = ( ( ( 1.0 - t268 ) - U_idx_2 ) * 296.802103844292 + t268 * 461.523 )
+ U_idx_2 * 259.836612622973 ; if ( M [ 31ULL ] == 0 ) { U_idx_3 = - X [
393ULL ] - X [ 50ULL ] ; } else { U_idx_3 = 0.0 ; } if ( M [ 141ULL ] == 0 )
{ U_idx_2 = U_idx_6 - 623.15 ; } else { U_idx_2 = 0.0 ; } if ( M [ 168ULL ]
== 0 ) { t69 = U_idx_8 - 623.15 ; } else { t69 = 0.0 ; } t4 [ 0ULL ] =
U_idx_1 - 0.9 ; t4 [ 1ULL ] = ( ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * -
1.0000000000000011 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] ) - ( X [ 55ULL
] + 0.8 ) ; t4 [ 2ULL ] = intrm_sf_mf_1455 - 1.0 > 1.0 - intrm_sf_mf_1455 ?
1.0 - intrm_sf_mf_1455 : intrm_sf_mf_1455 - 1.0 ; t4 [ 3ULL ] = X [ 284ULL ]
* t128 * t103 ; t128 = X [ 285ULL ] * X [ 285ULL ] * t128 / ( t103 == 0.0 ?
1.0E-16 : t103 ) ; t4 [ 4ULL ] = t128 / ( X [ 284ULL ] == 0.0 ? 1.0E-16 : X [
284ULL ] ) ; t4 [ 5ULL ] = X [ 286ULL ] * t150 * t103 ; t150 = X [ 287ULL ] *
X [ 287ULL ] * t150 / ( t103 == 0.0 ? 1.0E-16 : t103 ) ; t4 [ 6ULL ] = t150 /
( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) ; t4 [ 7ULL ] = X [ 284ULL ]
* t103 / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [ 285ULL ] ) ; t4 [ 8ULL ] = X [
286ULL ] * t103 / ( X [ 287ULL ] == 0.0 ? 1.0E-16 : X [ 287ULL ] ) ; t4 [
9ULL ] = X [ 38ULL ] - 0.01 ; t4 [ 10ULL ] = pmf_get_inf ( ) - X [ 38ULL ] ;
t4 [ 11ULL ] = X [ 7ULL ] - 216.59999999999997 ; t4 [ 12ULL ] = 623.15 - X [
7ULL ] ; t4 [ 13ULL ] = X [ 7ULL ] * t103 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 :
X [ 38ULL ] ) ; t4 [ 14ULL ] = X [ 381ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
intrm_sf_mf_1161 ; t4 [ 15ULL ] = X [ 382ULL ] * X [ 382ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI / (
intrm_sf_mf_1161 == 0.0 ? 1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 381ULL ] ==
0.0 ? 1.0E-16 : X [ 381ULL ] ) ; t4 [ 16ULL ] = X [ 383ULL ] * U_idx_9 *
intrm_sf_mf_1161 ; t4 [ 17ULL ] = X [ 384ULL ] * X [ 384ULL ] * U_idx_9 / (
intrm_sf_mf_1161 == 0.0 ? 1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 383ULL ] ==
0.0 ? 1.0E-16 : X [ 383ULL ] ) ; t4 [ 18ULL ] = X [ 381ULL ] *
intrm_sf_mf_1161 / ( X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) ; t4 [
19ULL ] = X [ 383ULL ] * intrm_sf_mf_1161 / ( X [ 384ULL ] == 0.0 ? 1.0E-16 :
X [ 384ULL ] ) ; t4 [ 20ULL ] = X [ 48ULL ] - 0.01 ; t4 [ 21ULL ] =
pmf_get_inf ( ) - X [ 48ULL ] ; t4 [ 22ULL ] = X [ 13ULL ] -
216.59999999999997 ; t4 [ 23ULL ] = 623.15 - X [ 13ULL ] ; t4 [ 24ULL ] = X [
13ULL ] * intrm_sf_mf_1161 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ;
t4 [ 25ULL ] = X [ 130ULL ] * t152 * t275 ; t152 = X [ 131ULL ] * X [ 131ULL
] * t152 / ( t275 == 0.0 ? 1.0E-16 : t275 ) ; t4 [ 26ULL ] = t152 / ( X [
130ULL ] == 0.0 ? 1.0E-16 : X [ 130ULL ] ) ; t4 [ 27ULL ] = X [ 134ULL ] *
t318 * t275 ; t318 = X [ 135ULL ] * X [ 135ULL ] * t318 / ( t275 == 0.0 ?
1.0E-16 : t275 ) ; t4 [ 28ULL ] = t318 / ( X [ 134ULL ] == 0.0 ? 1.0E-16 : X
[ 134ULL ] ) ; t4 [ 29ULL ] = X [ 130ULL ] * t275 / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) ; t4 [ 30ULL ] = X [ 134ULL ] * t275 / ( X [ 135ULL
] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ; t4 [ 31ULL ] = X [ 18ULL ] - 0.01 ; t4
[ 32ULL ] = pmf_get_inf ( ) - X [ 18ULL ] ; t4 [ 33ULL ] = X [ 17ULL ] -
216.59999999999997 ; t4 [ 34ULL ] = 623.15 - X [ 17ULL ] ; t4 [ 35ULL ] = X [
17ULL ] * t275 / ( X [ 18ULL ] == 0.0 ? 1.0E-16 : X [ 18ULL ] ) ; t4 [ 36ULL
] = X [ 177ULL ] * t81 * t79 ; t4 [ 37ULL ] = X [ 178ULL ] * X [ 178ULL ] *
t81 / ( t79 == 0.0 ? 1.0E-16 : t79 ) / ( X [ 177ULL ] == 0.0 ? 1.0E-16 : X [
177ULL ] ) ; t4 [ 38ULL ] = X [ 182ULL ] * t71 * t79 ; t4 [ 39ULL ] = X [
183ULL ] * X [ 183ULL ] * t71 / ( t79 == 0.0 ? 1.0E-16 : t79 ) / ( X [ 182ULL
] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) ; t4 [ 40ULL ] = X [ 177ULL ] * t79 / ( X
[ 178ULL ] == 0.0 ? 1.0E-16 : X [ 178ULL ] ) ; t4 [ 41ULL ] = X [ 182ULL ] *
t79 / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [ 183ULL ] ) ; t4 [ 42ULL ] = X [
26ULL ] - 0.01 ; t4 [ 43ULL ] = pmf_get_inf ( ) - X [ 26ULL ] ; t4 [ 44ULL ]
= X [ 25ULL ] - 216.59999999999997 ; t4 [ 45ULL ] = 623.15 - X [ 25ULL ] ; t4
[ 46ULL ] = X [ 25ULL ] * t79 / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ]
) ; t4 [ 47ULL ] = X [ 256ULL ] * t98 * intrm_sf_mf_478 ; t4 [ 48ULL ] = X [
257ULL ] * X [ 257ULL ] * t98 / ( intrm_sf_mf_478 == 0.0 ? 1.0E-16 :
intrm_sf_mf_478 ) / ( X [ 256ULL ] == 0.0 ? 1.0E-16 : X [ 256ULL ] ) ; t4 [
49ULL ] = X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * intrm_sf_mf_478
; t4 [ 50ULL ] = X [ 260ULL ] * X [ 260ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI / (
intrm_sf_mf_478 == 0.0 ? 1.0E-16 : intrm_sf_mf_478 ) / ( X [ 259ULL ] == 0.0
? 1.0E-16 : X [ 259ULL ] ) ; t4 [ 51ULL ] = X [ 256ULL ] * intrm_sf_mf_478 /
( X [ 257ULL ] == 0.0 ? 1.0E-16 : X [ 257ULL ] ) ; t4 [ 52ULL ] = X [ 259ULL
] * intrm_sf_mf_478 / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) ; t4 [
53ULL ] = X [ 36ULL ] - 0.01 ; t4 [ 54ULL ] = pmf_get_inf ( ) - X [ 36ULL ] ;
t4 [ 55ULL ] = X [ 33ULL ] - 216.59999999999997 ; t4 [ 56ULL ] = 623.15 - X [
33ULL ] ; t4 [ 57ULL ] = X [ 33ULL ] * intrm_sf_mf_478 / ( X [ 36ULL ] == 0.0
? 1.0E-16 : X [ 36ULL ] ) ; t4 [ 58ULL ] = X [ 270ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * t30 ; t4 [ 59ULL
] = X [ 271ULL ] * X [ 271ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI / ( t30 == 0.0 ?
1.0E-16 : t30 ) / ( X [ 270ULL ] == 0.0 ? 1.0E-16 : X [ 270ULL ] ) ; t4 [
60ULL ] = X [ 273ULL ] * t91 * t30 ; t4 [ 61ULL ] = X [ 274ULL ] * X [ 274ULL
] * t91 / ( t30 == 0.0 ? 1.0E-16 : t30 ) / ( X [ 273ULL ] == 0.0 ? 1.0E-16 :
X [ 273ULL ] ) ; t4 [ 62ULL ] = X [ 270ULL ] * t30 / ( X [ 271ULL ] == 0.0 ?
1.0E-16 : X [ 271ULL ] ) ; t4 [ 63ULL ] = X [ 273ULL ] * t30 / ( X [ 274ULL ]
== 0.0 ? 1.0E-16 : X [ 274ULL ] ) ; t4 [ 64ULL ] = X [ 37ULL ] - 0.01 ; t4 [
65ULL ] = pmf_get_inf ( ) - X [ 37ULL ] ; t4 [ 66ULL ] = X [ 4ULL ] -
216.59999999999997 ; t4 [ 67ULL ] = 623.15 - X [ 4ULL ] ; t4 [ 68ULL ] = X [
4ULL ] * t30 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ; t4 [ 69ULL ]
= X [ 305ULL ] * t105 * t39 ; t4 [ 70ULL ] = X [ 306ULL ] * X [ 306ULL ] *
t105 / ( t39 == 0.0 ? 1.0E-16 : t39 ) / ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [
305ULL ] ) ; t4 [ 71ULL ] = X [ 308ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t39 ; t4 [ 72ULL
] = X [ 309ULL ] * X [ 309ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t39 == 0.0 ?
1.0E-16 : t39 ) / ( X [ 308ULL ] == 0.0 ? 1.0E-16 : X [ 308ULL ] ) ; t4 [
73ULL ] = X [ 305ULL ] * t39 / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL ]
) ; t4 [ 74ULL ] = X [ 308ULL ] * t39 / ( X [ 309ULL ] == 0.0 ? 1.0E-16 : X [
309ULL ] ) ; t4 [ 75ULL ] = X [ 42ULL ] - 0.01 ; t4 [ 76ULL ] = pmf_get_inf (
) - X [ 42ULL ] ; t4 [ 77ULL ] = X [ 39ULL ] - 216.59999999999997 ; t4 [
78ULL ] = 623.15 - X [ 39ULL ] ; t4 [ 79ULL ] = X [ 39ULL ] * t39 / ( X [
42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) ; t4 [ 80ULL ] = X [ 343ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * intrm_sf_mf_1021
; t4 [ 81ULL ] = X [ 344ULL ] * X [ 344ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 343ULL ] ==
0.0 ? 1.0E-16 : X [ 343ULL ] ) ; t4 [ 82ULL ] = X [ 347ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * intrm_sf_mf_1021
; t4 [ 83ULL ] = X [ 348ULL ] * X [ 348ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 347ULL ] ==
0.0 ? 1.0E-16 : X [ 347ULL ] ) ; t4 [ 84ULL ] = X [ 343ULL ] *
intrm_sf_mf_1021 / ( X [ 344ULL ] == 0.0 ? 1.0E-16 : X [ 344ULL ] ) ; t4 [
85ULL ] = X [ 347ULL ] * intrm_sf_mf_1021 / ( X [ 348ULL ] == 0.0 ? 1.0E-16 :
X [ 348ULL ] ) ; t4 [ 86ULL ] = X [ 44ULL ] - 0.01 ; t4 [ 87ULL ] =
pmf_get_inf ( ) - X [ 44ULL ] ; t4 [ 88ULL ] = X [ 43ULL ] -
216.59999999999997 ; t4 [ 89ULL ] = 623.15 - X [ 43ULL ] ; t4 [ 90ULL ] = X [
43ULL ] * intrm_sf_mf_1021 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ;
t4 [ 91ULL ] = X [ 367ULL ] * t117 * t114 ; t4 [ 92ULL ] = X [ 368ULL ] * X [
368ULL ] * t117 / ( t114 == 0.0 ? 1.0E-16 : t114 ) / ( X [ 367ULL ] == 0.0 ?
1.0E-16 : X [ 367ULL ] ) ; t4 [ 93ULL ] = X [ 370ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t114 ; t4 [
94ULL ] = X [ 371ULL ] * X [ 371ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / ( t114 == 0.0 ?
1.0E-16 : t114 ) / ( X [ 370ULL ] == 0.0 ? 1.0E-16 : X [ 370ULL ] ) ; t4 [
95ULL ] = X [ 367ULL ] * t114 / ( X [ 368ULL ] == 0.0 ? 1.0E-16 : X [ 368ULL
] ) ; t4 [ 96ULL ] = X [ 370ULL ] * t114 / ( X [ 371ULL ] == 0.0 ? 1.0E-16 :
X [ 371ULL ] ) ; t4 [ 97ULL ] = X [ 47ULL ] - 0.01 ; t4 [ 98ULL ] =
pmf_get_inf ( ) - X [ 47ULL ] ; t4 [ 99ULL ] = X [ 10ULL ] -
216.59999999999997 ; t4 [ 100ULL ] = 623.15 - X [ 10ULL ] ; t4 [ 101ULL ] = X
[ 10ULL ] * t114 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) ; t4 [
102ULL ] = X [ 16ULL ] ; t4 [ 103ULL ] = ( 1.0 - X [ 122ULL ] ) - X [ 123ULL
] ; t4 [ 104ULL ] = t273 * 293.15 / 1.01325 ; t4 [ 105ULL ] = ( 1.0 - X [
213ULL ] ) - X [ 214ULL ] ; t4 [ 106ULL ] = intrm_sf_mf_369 * 293.15 /
1.01325 ; t4 [ 107ULL ] = ( 1.0 - X [ 335ULL ] ) - X [ 336ULL ] ; t4 [ 108ULL
] = t108 * 293.15 / 1.01325 ; t4 [ 109ULL ] = X [ 148ULL ] * X [ 148ULL ] *
t289 / ( intrm_sf_mf_170 == 0.0 ? 1.0E-16 : intrm_sf_mf_170 ) / ( X [ 147ULL
] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ; t4 [ 110ULL ] = X [ 148ULL ] / ( t73 ==
0.0 ? 1.0E-16 : t73 ) * 2.0 / ( t274 == 0.0 ? 1.0E-16 : t274 ) ; t4 [ 111ULL
] = X [ 151ULL ] * intrm_sf_mf_170 / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [
126ULL ] ) ; t4 [ 112ULL ] = X [ 152ULL ] * intrm_sf_mf_170 / 1.01325 ; t4 [
113ULL ] = t73 / ( X [ 148ULL ] == 0.0 ? 1.0E-16 : X [ 148ULL ] ) ; t4 [
114ULL ] = X [ 126ULL ] - 0.01 ; t4 [ 115ULL ] = pmf_get_inf ( ) - X [ 126ULL
] ; t4 [ 116ULL ] = X [ 125ULL ] - 216.59999999999997 ; t4 [ 117ULL ] =
623.15 - X [ 125ULL ] ; t4 [ 118ULL ] = X [ 111ULL ] - 216.59999999999997 ;
t4 [ 119ULL ] = 623.15 - X [ 111ULL ] ; t4 [ 120ULL ] = X [ 196ULL ] * X [
196ULL ] * intrm_sf_mf_357 / ( t83 == 0.0 ? 1.0E-16 : t83 ) / ( X [ 195ULL ]
== 0.0 ? 1.0E-16 : X [ 195ULL ] ) ; t4 [ 121ULL ] = X [ 196ULL ] / ( t88 ==
0.0 ? 1.0E-16 : t88 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ;
t4 [ 122ULL ] = X [ 199ULL ] * t83 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [
22ULL ] ) ; t4 [ 123ULL ] = X [ 200ULL ] * t83 / ( X [ 174ULL ] == 0.0 ?
1.0E-16 : X [ 174ULL ] ) ; t4 [ 124ULL ] = t88 / ( X [ 196ULL ] == 0.0 ?
1.0E-16 : X [ 196ULL ] ) ; t4 [ 125ULL ] = X [ 22ULL ] - 0.01 ; t4 [ 126ULL ]
= pmf_get_inf ( ) - X [ 22ULL ] ; t4 [ 127ULL ] = X [ 158ULL ] -
216.59999999999997 ; t4 [ 128ULL ] = 623.15 - X [ 158ULL ] ; t4 [ 129ULL ] =
X [ 174ULL ] - 0.01 ; t4 [ 130ULL ] = pmf_get_inf ( ) - X [ 174ULL ] ; t4 [
131ULL ] = X [ 173ULL ] - 216.59999999999997 ; t4 [ 132ULL ] = 623.15 - X [
173ULL ] ; t4 [ 133ULL ] = X [ 361ULL ] * X [ 361ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 / (
intrm_sf_mf_1160 == 0.0 ? 1.0E-16 : intrm_sf_mf_1160 ) / ( X [ 360ULL ] ==
0.0 ? 1.0E-16 : X [ 360ULL ] ) ; t4 [ 134ULL ] = X [ 361ULL ] / ( t112 == 0.0
? 1.0E-16 : t112 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
t4 [ 135ULL ] = X [ 364ULL ] * intrm_sf_mf_1160 / ( t106 == 0.0 ? 1.0E-16 :
t106 ) ; t4 [ 136ULL ] = X [ 365ULL ] * intrm_sf_mf_1160 / 1.01325 ; t4 [
137ULL ] = t112 / ( X [ 361ULL ] == 0.0 ? 1.0E-16 : X [ 361ULL ] ) ; t4 [
138ULL ] = t106 - 0.01 ; t4 [ 139ULL ] = pmf_get_inf ( ) - t106 ; t4 [ 140ULL
] = X [ 338ULL ] - 216.59999999999997 ; t4 [ 141ULL ] = 623.15 - X [ 338ULL ]
; t4 [ 142ULL ] = X [ 324ULL ] - 216.59999999999997 ; t4 [ 143ULL ] = 623.15
- X [ 324ULL ] ; t4 [ 144ULL ] = X [ 21ULL ] - 216.59999999999997 ; t4 [
145ULL ] = 623.15 - X [ 21ULL ] ; t4 [ 146ULL ] = X [ 21ULL ] * t76 / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ; t4 [ 147ULL ] = X [ 29ULL ] - 0.01
; t4 [ 148ULL ] = pmf_get_inf ( ) - X [ 29ULL ] ; t4 [ 149ULL ] = X [ 30ULL ]
- 216.59999999999997 ; t4 [ 150ULL ] = 623.15 - X [ 30ULL ] ; t4 [ 151ULL ] =
X [ 30ULL ] * t97 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ; t4 [
152ULL ] = X [ 202ULL ] - 216.59999999999997 ; t4 [ 153ULL ] = 623.15 - X [
202ULL ] ; t4 [ 154ULL ] = X [ 216ULL ] - 216.59999999999997 ; t4 [ 155ULL ]
= 623.15 - X [ 216ULL ] ; t4 [ 156ULL ] = ( real_T ) ( X [ 53ULL ] > 0.0 ) ;
t4 [ 157ULL ] = X [ 50ULL ] - X [ 393ULL ] ; t4 [ 158ULL ] = U_idx_3 ; t4 [
159ULL ] = 216.59999999999997 - U_idx_6 ; t4 [ 160ULL ] = U_idx_2 ; t4 [
161ULL ] = 216.59999999999997 - U_idx_8 ; t4 [ 162ULL ] = t69 ; t4 [ 163ULL ]
= X [ 90ULL ] - 0.6 ; U_idx_3 = X [ 59ULL ] * t33 ; t4 [ 164ULL ] = U_idx_3 /
( X [ 60ULL ] == 0.0 ? 1.0E-16 : X [ 60ULL ] ) ; t268 = X [ 106ULL ] * t70 ;
t4 [ 165ULL ] = t268 / ( X [ 107ULL ] == 0.0 ? 1.0E-16 : X [ 107ULL ] ) ;
t273 = X [ 63ULL ] * intrm_sf_mf_1252 ; t4 [ 166ULL ] = t273 / ( X [ 64ULL ]
== 0.0 ? 1.0E-16 : X [ 64ULL ] ) ; t275 = X [ 319ULL ] * t51 ; t4 [ 167ULL ]
= t275 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ; t289 = X [ 111ULL
] * t60 ; t4 [ 168ULL ] = t289 / 1.01325 ; t4 [ 169ULL ] = t268 / ( X [
107ULL ] == 0.0 ? 1.0E-16 : X [ 107ULL ] ) ; t268 = X [ 125ULL ] *
intrm_sf_mf_92 ; t4 [ 170ULL ] = t268 / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [
126ULL ] ) ; t4 [ 171ULL ] = t268 / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [
126ULL ] ) ; t4 [ 172ULL ] = t289 / 1.01325 ; t268 = X [ 158ULL ] * t123 ; t4
[ 173ULL ] = t268 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ; t318 = X
[ 173ULL ] * intrm_sf_mf_240 ; t4 [ 174ULL ] = t318 / ( X [ 174ULL ] == 0.0 ?
1.0E-16 : X [ 174ULL ] ) ; t289 = X [ 154ULL ] * intrm_sf_mf_281 ; t4 [
175ULL ] = t289 / ( X [ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) ; t4 [
176ULL ] = t268 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ; t4 [
177ULL ] = t318 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) ; t268 = X
[ 202ULL ] * t124 ; t4 [ 178ULL ] = t268 / 1.01325 ; t4 [ 179ULL ] = t268 /
1.01325 ; t268 = X [ 216ULL ] * intrm_sf_mf_1502 ; t4 [ 180ULL ] = t268 / ( X
[ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ; t4 [ 181ULL ] = t268 / ( X [
29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ; t268 = X [ 227ULL ] * t45 ; t4 [
182ULL ] = t268 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ; t4 [
183ULL ] = t289 / ( X [ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) ; t318 = X
[ 245ULL ] * t100 ; t4 [ 184ULL ] = t318 / ( X [ 246ULL ] == 0.0 ? 1.0E-16 :
X [ 246ULL ] ) ; t4 [ 185ULL ] = t318 / ( X [ 246ULL ] == 0.0 ? 1.0E-16 : X [
246ULL ] ) ; t4 [ 186ULL ] = U_idx_3 / ( X [ 60ULL ] == 0.0 ? 1.0E-16 : X [
60ULL ] ) ; t4 [ 187ULL ] = t268 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL
] ) ; U_idx_3 = X [ 294ULL ] * t107 ; t4 [ 188ULL ] = U_idx_3 / ( X [ 295ULL
] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) ; t268 = X [ 324ULL ] * t57 ; t4 [ 189ULL
] = t268 / 1.01325 ; t4 [ 190ULL ] = t275 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 :
X [ 320ULL ] ) ; t318 = X [ 338ULL ] * t109 ; t4 [ 191ULL ] = t318 / ( t106
== 0.0 ? 1.0E-16 : t106 ) ; t4 [ 192ULL ] = t318 / ( t106 == 0.0 ? 1.0E-16 :
t106 ) ; t4 [ 193ULL ] = t268 / 1.01325 ; t4 [ 194ULL ] = U_idx_3 / ( X [
295ULL ] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) ; t4 [ 195ULL ] = t273 / ( X [
64ULL ] == 0.0 ? 1.0E-16 : X [ 64ULL ] ) ; t4 [ 196ULL ] = X [ 220ULL ] *
intrm_sf_mf_410 / 1.01325 ; t4 [ 197ULL ] = X [ 223ULL ] * intrm_sf_mf_410 /
( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ; t4 [ 198ULL ] = X [ 221ULL ]
* intrm_sf_mf_410 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ; t4 [
199ULL ] = X [ 222ULL ] * intrm_sf_mf_410 / 1.01325 ; for ( b = 0 ; b < 200 ;
b ++ ) { out . mX [ b ] = t4 [ b ] ; } ( void ) LC ; ( void ) t330 ; return 0
; }
