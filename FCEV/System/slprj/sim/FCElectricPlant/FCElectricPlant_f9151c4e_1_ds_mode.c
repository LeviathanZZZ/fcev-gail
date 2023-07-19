#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_mode.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_mode ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t301 , NeDsMethodOutput * t302 ) { PmIntVector
out ; real_T X [ 399 ] ; real_T t1 [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_5 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_1012 ; real_T intrm_sf_mf_1021 ; real_T
intrm_sf_mf_1053 ; real_T intrm_sf_mf_1160 ; real_T intrm_sf_mf_1161 ; real_T
intrm_sf_mf_1250 ; real_T intrm_sf_mf_1252 ; real_T intrm_sf_mf_1502 ; real_T
intrm_sf_mf_17 ; real_T intrm_sf_mf_170 ; real_T intrm_sf_mf_221 ; real_T
intrm_sf_mf_240 ; real_T intrm_sf_mf_281 ; real_T intrm_sf_mf_31 ; real_T
intrm_sf_mf_357 ; real_T intrm_sf_mf_477 ; real_T intrm_sf_mf_478 ; real_T
intrm_sf_mf_907 ; real_T t100 ; real_T t103 ; real_T t105 ; real_T t107 ;
real_T t111 ; real_T t113 ; real_T t118 ; real_T t128 ; real_T t137 ; real_T
t14 ; real_T t158 ; real_T t177 ; real_T t180 ; real_T t184 ; real_T t206 ;
real_T t32 ; real_T t35 ; real_T t38 ; real_T t41 ; real_T t69 ; real_T t70 ;
real_T t72 ; real_T t75 ; real_T t78 ; real_T t8 ; real_T t84 ; real_T t85 ;
real_T t87 ; real_T t94 ; real_T t96 ; real_T t97 ; real_T t98 ; real_T t99 ;
size_t t2 ; size_t t3 ; int32_T t0 [ 218 ] ; int32_T b ; U_idx_1 = t301 -> mU
. mX [ 1 ] ; U_idx_2 = t301 -> mU . mX [ 2 ] ; U_idx_5 = t301 -> mU . mX [ 5
] ; U_idx_7 = t301 -> mU . mX [ 7 ] ; U_idx_8 = t301 -> mU . mX [ 8 ] ;
U_idx_9 = t301 -> mU . mX [ 9 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] =
t301 -> mX . mX [ b ] ; } out = t302 -> mMODE ; if ( X [ 127ULL ] <= 0.0 ) {
t206 = 0.0 ; } else { t206 = X [ 127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ; } if
( X [ 128ULL ] <= 0.0 ) { t184 = 0.0 ; } else { t184 = X [ 128ULL ] >= 1.0 ?
1.0 : X [ 128ULL ] ; } intrm_sf_mf_17 = ( ( ( 1.0 - t206 ) - t184 ) *
296.802103844292 + t206 * 461.523 ) + t184 * 4124.48151675695 ; if ( X [
21ULL ] <= 0.0 ) { t184 = 0.0 ; } else { t184 = X [ 21ULL ] >= 1.0 ? 1.0 : X
[ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } intrm_sf_mf_31 = ( ( ( 1.0 - t184 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) *
296.802103844292 + t184 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
4124.48151675695 ; if ( X [ 135ULL ] <= 216.59999999999997 ) { t180 =
216.59999999999997 ; } else { t180 = X [ 135ULL ] >= 623.15 ? 623.15 : X [
135ULL ] ; } t8 = t180 * t180 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = ( ( (
1074.1165326382641 + t180 * - 0.2214565261064495 ) + t8 *
0.00037212980109014541 ) * ( ( 1.0 - t184 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) + ( (
1479.6504774711011 + t180 * 1.2002114337048222 ) + t8 * -
0.00038614513167823636 ) * t184 ) + ( ( 12825.281119789837 + t180 *
6.9647057412840034 ) + t8 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; t69 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ -
intrm_sf_mf_31 ; t180 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / ( t69 ==
0.0 ? 1.0E-16 : t69 ) ; if ( X [ 139ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [ 139ULL
] >= 623.15 ? 623.15 : X [ 139ULL ] ; } t69 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ; t8 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ * -
0.2214565261064495 ) + t69 * 0.00037212980109014541 ) * ( ( 1.0 - t184 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
1.2002114337048222 ) + t69 * - 0.00038614513167823636 ) * t184 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
6.9647057412840034 ) + t69 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; t70 = t8 -
intrm_sf_mf_31 ; t184 = t8 / ( t70 == 0.0 ? 1.0E-16 : t70 ) ; if ( X [ 133ULL
] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r
= 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [ 133ULL
] >= 1.0 ? 1.0 : X [ 133ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; } t8 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
4124.48151675695 ; if ( X [ 114ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
114ULL ] >= 1.0 ? 1.0 : X [ 114ULL ] ; } if ( X [ 113ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
113ULL ] >= 1.0 ? 1.0 : X [ 113ULL ] ; } t69 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = U_idx_1 *
0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 0.0001 <=
7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 0.0001 >=
3.1415926535897929E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ /
7.8539816339744827E-5 ; if ( X [ 154ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
154ULL ] >= 1.0 ? 1.0 : X [ 154ULL ] ; } if ( X [ 155ULL ] <= 0.0 ) { t70 =
0.0 ; } else { t70 = X [ 155ULL ] >= 1.0 ? 1.0 : X [ 155ULL ] ; }
intrm_sf_mf_170 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) - t70 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ * 461.523 ) +
t70 * 4124.48151675695 ; t72 = X [ 152ULL ] * intrm_sf_mf_170 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 153ULL
] / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) * ( X [ 156ULL ] / ( X [
152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ; t75 = X [ 153ULL ] / 1.01325 *
( X [ 157ULL ] / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ;
intrm_sf_mf_221 = ( X [ 131ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ;
t78 = ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r
) * ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r )
; intrm_sf_mf_357 = intrm_sf_mf_221 * t78 ; intrm_sf_mf_240 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * t75 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 2.0 ;
intrm_sf_mf_281 = ( X [ 131ULL ] - 1.01325 ) * ( intrm_sf_mf_240 >= t78 ?
intrm_sf_mf_240 : t78 ) ; intrm_sf_mf_240 = ( X [ 131ULL ] - 1.01325 ) / (
intrm_sf_mf_221 == 0.0 ? 1.0E-16 : intrm_sf_mf_221 ) ; t206 = intrm_sf_mf_240
* intrm_sf_mf_240 * 3.0 - intrm_sf_mf_240 * intrm_sf_mf_240 * intrm_sf_mf_240
* 2.0 ; if ( X [ 131ULL ] - 1.01325 <= 0.0 ) { intrm_sf_mf_240 =
intrm_sf_mf_357 ; } else if ( X [ 131ULL ] - 1.01325 >= intrm_sf_mf_221 ) {
intrm_sf_mf_240 = intrm_sf_mf_281 ; } else { intrm_sf_mf_240 = ( 1.0 - t206 )
* intrm_sf_mf_357 + intrm_sf_mf_281 * t206 ; } intrm_sf_mf_281 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * t75 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = ( 1.01325 -
X [ 131ULL ] ) * ( intrm_sf_mf_281 >= t78 ? intrm_sf_mf_281 : t78 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.01325 -
X [ 131ULL ] ) / ( intrm_sf_mf_221 == 0.0 ? 1.0E-16 : intrm_sf_mf_221 ) ; t75
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ; if (
1.01325 - X [ 131ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_357 ; } else if ( 1.01325 - X [ 131ULL ] >= intrm_sf_mf_221 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.0 - t75
) * intrm_sf_mf_357 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * t75 ; } if
( X [ 131ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r =
intrm_sf_mf_240 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [ 131ULL
] < 1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13
: intrm_sf_mf_357 ; } if ( X [ 152ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 152ULL
] >= 623.15 ? 623.15 : X [ 152ULL ] ; } t14 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t75 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * -
0.2214565261064495 ) + t14 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) - t70 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
1.2002114337048222 ) + t14 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
6.9647057412840034 ) + t14 * - 0.0070524868246844051 ) * t70 ; t206 = t75 -
intrm_sf_mf_170 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = t75 / (
t206 == 0.0 ? 1.0E-16 : t206 ) ; if ( X [ 26ULL ] <= 0.0 ) { t70 = 0.0 ; }
else { t70 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t75 = ( ( ( 1.0 - t70 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t70 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 29ULL ] <= 0.0 ) { t70 = 0.0 ; } else { t70 = X [
29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 30ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } t78 = ( ( ( 1.0 - t70 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t70 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 182ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_221 = 216.59999999999997 ; } else { intrm_sf_mf_221 = X [ 182ULL
] >= 623.15 ? 623.15 : X [ 182ULL ] ; } t206 = intrm_sf_mf_221 *
intrm_sf_mf_221 ; intrm_sf_mf_357 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_221 * - 0.2214565261064495 ) + t206 * 0.00037212980109014541 ) *
( ( 1.0 - t70 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + intrm_sf_mf_221 * 1.2002114337048222 ) + t206 * -
0.00038614513167823636 ) * t70 ) + ( ( 12825.281119789837 + intrm_sf_mf_221 *
6.9647057412840034 ) + t206 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t84 =
intrm_sf_mf_357 - t78 ; intrm_sf_mf_221 = intrm_sf_mf_357 / ( t84 == 0.0 ?
1.0E-16 : t84 ) ; if ( X [ 187ULL ] <= 216.59999999999997 ) { intrm_sf_mf_357
= 216.59999999999997 ; } else { intrm_sf_mf_357 = X [ 187ULL ] >= 623.15 ?
623.15 : X [ 187ULL ] ; } t84 = intrm_sf_mf_357 * intrm_sf_mf_357 ;
intrm_sf_mf_240 = ( ( ( 1074.1165326382641 + intrm_sf_mf_357 * -
0.2214565261064495 ) + t84 * 0.00037212980109014541 ) * ( ( 1.0 - t70 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + intrm_sf_mf_357 * 1.2002114337048222 ) + t84 * -
0.00038614513167823636 ) * t70 ) + ( ( 12825.281119789837 + intrm_sf_mf_357 *
6.9647057412840034 ) + t84 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t85 =
intrm_sf_mf_240 - t78 ; t70 = intrm_sf_mf_240 / ( t85 == 0.0 ? 1.0E-16 : t85
) ; if ( X [ 181ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
181ULL ] >= 1.0 ? 1.0 : X [ 181ULL ] ; } if ( X [ 180ULL ] <= 0.0 ) {
intrm_sf_mf_357 = 0.0 ; } else { intrm_sf_mf_357 = X [ 180ULL ] >= 1.0 ? 1.0
: X [ 180ULL ] ; } intrm_sf_mf_240 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) -
intrm_sf_mf_357 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 461.523 ) +
intrm_sf_mf_357 * 4124.48151675695 ; if ( X [ 162ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; } if ( X [ 161ULL ] <= 0.0 ) {
intrm_sf_mf_357 = 0.0 ; } else { intrm_sf_mf_357 = X [ 161ULL ] >= 1.0 ? 1.0
: X [ 161ULL ] ; } intrm_sf_mf_281 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) -
intrm_sf_mf_357 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 461.523 ) +
intrm_sf_mf_357 * 4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
179ULL ] * - 0.7999998 + U_idx_2 * 7.9999980000000006 ) +
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
intrm_sf_mf_357 / 7.8539816339744827E-5 ; if ( X [ 202ULL ] <= 0.0 ) {
intrm_sf_mf_357 = 0.0 ; } else { intrm_sf_mf_357 = X [ 202ULL ] >= 1.0 ? 1.0
: X [ 202ULL ] ; } if ( X [ 203ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 =
X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } t14 = ( ( ( 1.0 -
intrm_sf_mf_357 ) - t206 ) * 296.802103844292 + intrm_sf_mf_357 * 461.523 ) +
t206 * 4124.48151675695 ; t87 = X [ 200ULL ] * t14 ; t84 = X [ 201ULL ] / ( X
[ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( X [ 204ULL ] / ( X [ 200ULL ]
== 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t85 = X [ 201ULL ] / ( X [ 179ULL ] ==
0.0 ? 1.0E-16 : X [ 179ULL ] ) * ( X [ 205ULL ] / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ) ; t94 = ( X [ 24ULL ] + X [ 179ULL ] ) / 2.0 *
0.0010000000000000009 ; intrm_sf_mf_477 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ; t96 = t94
* intrm_sf_mf_477 ; intrm_sf_mf_1502 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t84 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t85 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0
; intrm_sf_mf_478 = ( X [ 24ULL ] - X [ 179ULL ] ) * ( intrm_sf_mf_1502 >=
intrm_sf_mf_477 ? intrm_sf_mf_1502 : intrm_sf_mf_477 ) ; intrm_sf_mf_1502 = (
X [ 24ULL ] - X [ 179ULL ] ) / ( t94 == 0.0 ? 1.0E-16 : t94 ) ; t97 =
intrm_sf_mf_1502 * intrm_sf_mf_1502 * 3.0 - intrm_sf_mf_1502 *
intrm_sf_mf_1502 * intrm_sf_mf_1502 * 2.0 ; if ( X [ 24ULL ] - X [ 179ULL ]
<= 0.0 ) { intrm_sf_mf_1502 = t96 ; } else if ( X [ 24ULL ] - X [ 179ULL ] >=
t94 ) { intrm_sf_mf_1502 = intrm_sf_mf_478 ; } else { intrm_sf_mf_1502 = (
1.0 - t97 ) * t96 + intrm_sf_mf_478 * t97 ; } intrm_sf_mf_478 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t85 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t84 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
179ULL ] - X [ 24ULL ] ) * ( intrm_sf_mf_478 >= intrm_sf_mf_477 ?
intrm_sf_mf_478 : intrm_sf_mf_477 ) ; t84 = ( X [ 179ULL ] - X [ 24ULL ] ) /
( t94 == 0.0 ? 1.0E-16 : t94 ) ; t85 = t84 * t84 * 3.0 - t84 * t84 * t84 *
2.0 ; if ( X [ 179ULL ] - X [ 24ULL ] <= 0.0 ) { t84 = t96 ; } else if ( X [
179ULL ] - X [ 24ULL ] >= t94 ) { t84 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
t84 = ( 1.0 - t85 ) * t96 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t85 ; } if
( X [ 24ULL ] > X [ 179ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_1502 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 24ULL ]
< X [ 179ULL ] ? t84 : t96 ; } if ( X [ 200ULL ] <= 216.59999999999997 ) {
t84 = 216.59999999999997 ; } else { t84 = X [ 200ULL ] >= 623.15 ? 623.15 : X
[ 200ULL ] ; } t98 = t84 * t84 ; t85 = ( ( ( 1074.1165326382641 + t84 * -
0.2214565261064495 ) + t98 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_357 ) - t206 ) + ( ( 1479.6504774711011 + t84 *
1.2002114337048222 ) + t98 * - 0.00038614513167823636 ) * intrm_sf_mf_357 ) +
( ( 12825.281119789837 + t84 * 6.9647057412840034 ) + t98 * -
0.0070524868246844051 ) * t206 ; t99 = t85 - t14 ; intrm_sf_mf_357 = t85 / (
t99 == 0.0 ? 1.0E-16 : t99 ) ; if ( X [ 218ULL ] <= 0.0 ) { t206 = 0.0 ; }
else { t206 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if ( X [ 219ULL ]
<= 0.0 ) { t84 = 0.0 ; } else { t84 = X [ 219ULL ] >= 1.0 ? 1.0 : X [ 219ULL
] ; } t85 = ( ( ( 1.0 - t206 ) - t84 ) * 296.802103844292 + t206 * 461.523 )
+ t84 * 259.836612622973 ; if ( X [ 231ULL ] <= 0.0 ) { t84 = 0.0 ; } else {
t84 = X [ 231ULL ] >= 1.0 ? 1.0 : X [ 231ULL ] ; } if ( X [ 230ULL ] <= 0.0 )
{ intrm_sf_mf_477 = 0.0 ; } else { intrm_sf_mf_477 = X [ 230ULL ] >= 1.0 ?
1.0 : X [ 230ULL ] ; } t94 = ( ( ( 1.0 - t84 ) - intrm_sf_mf_477 ) *
296.802103844292 + t84 * 461.523 ) + intrm_sf_mf_477 * 259.836612622973 ; if
( X [ 34ULL ] <= 0.0 ) { t84 = 0.0 ; } else { t84 = X [ 34ULL ] >= 1.0 ? 1.0
: X [ 34ULL ] ; } if ( X [ 33ULL ] <= 0.0 ) { intrm_sf_mf_477 = 0.0 ; } else
{ intrm_sf_mf_477 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } t96 = ( ( (
1.0 - t84 ) - intrm_sf_mf_477 ) * 296.802103844292 + t84 * 461.523 ) +
intrm_sf_mf_477 * 259.836612622973 ; if ( X [ 223ULL ] <= 0.0 ) { t84 = 0.0 ;
} else { t84 = X [ 223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ]
<= 0.0 ) { intrm_sf_mf_477 = 0.0 ; } else { intrm_sf_mf_477 = X [ 222ULL ] >=
1.0 ? 1.0 : X [ 222ULL ] ; } intrm_sf_mf_1502 = ( ( ( 1.0 - t84 ) -
intrm_sf_mf_477 ) * 296.802103844292 + t84 * 461.523 ) + intrm_sf_mf_477 *
259.836612622973 ; if ( X [ 37ULL ] <= 0.0 ) { t84 = 0.0 ; } else { t84 = X [
37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) {
intrm_sf_mf_477 = 0.0 ; } else { intrm_sf_mf_477 = X [ 36ULL ] >= 1.0 ? 1.0 :
X [ 36ULL ] ; } intrm_sf_mf_478 = ( ( ( 1.0 - t84 ) - intrm_sf_mf_477 ) *
296.802103844292 + t84 * 461.523 ) + intrm_sf_mf_477 * 4124.48151675695 ; if
( X [ 261ULL ] <= 216.59999999999997 ) { t97 = 216.59999999999997 ; } else {
t97 = X [ 261ULL ] >= 623.15 ? 623.15 : X [ 261ULL ] ; } t99 = t97 * t97 ;
t98 = ( ( ( 1074.1165326382641 + t97 * - 0.2214565261064495 ) + t99 *
0.00037212980109014541 ) * ( ( 1.0 - t84 ) - intrm_sf_mf_477 ) + ( (
1479.6504774711011 + t97 * 1.2002114337048222 ) + t99 * -
0.00038614513167823636 ) * t84 ) + ( ( 12825.281119789837 + t97 *
6.9647057412840034 ) + t99 * - 0.0070524868246844051 ) * intrm_sf_mf_477 ;
t100 = t98 - intrm_sf_mf_478 ; t97 = t98 / ( t100 == 0.0 ? 1.0E-16 : t100 ) ;
if ( X [ 264ULL ] <= 216.59999999999997 ) { t98 = 216.59999999999997 ; } else
{ t98 = X [ 264ULL ] >= 623.15 ? 623.15 : X [ 264ULL ] ; } t100 = t98 * t98 ;
t99 = ( ( ( 1074.1165326382641 + t98 * - 0.2214565261064495 ) + t100 *
0.00037212980109014541 ) * ( ( 1.0 - t84 ) - intrm_sf_mf_477 ) + ( (
1479.6504774711011 + t98 * 1.2002114337048222 ) + t100 * -
0.00038614513167823636 ) * t84 ) + ( ( 12825.281119789837 + t98 *
6.9647057412840034 ) + t100 * - 0.0070524868246844051 ) * intrm_sf_mf_477 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = t99 -
intrm_sf_mf_478 ; t84 = t99 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ) ; if ( X [
253ULL ] <= 0.0 ) { intrm_sf_mf_477 = 0.0 ; } else { intrm_sf_mf_477 = X [
253ULL ] >= 1.0 ? 1.0 : X [ 253ULL ] ; } if ( X [ 252ULL ] <= 0.0 ) { t98 =
0.0 ; } else { t98 = X [ 252ULL ] >= 1.0 ? 1.0 : X [ 252ULL ] ; } t99 = ( ( (
1.0 - intrm_sf_mf_477 ) - t98 ) * 296.802103844292 + intrm_sf_mf_477 *
461.523 ) + t98 * 4124.48151675695 ; if ( X [ 8ULL ] <= 0.0 ) {
intrm_sf_mf_477 = 0.0 ; } else { intrm_sf_mf_477 = X [ 8ULL ] >= 1.0 ? 1.0 :
X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t98 = 0.0 ; } else { t98 = X [ 7ULL
] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t100 = ( ( ( 1.0 - intrm_sf_mf_477 ) - t98 )
* 296.802103844292 + intrm_sf_mf_477 * 461.523 ) + t98 * 4124.48151675695 ;
if ( X [ 275ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = X [ 275ULL ] >=
623.15 ? 623.15 : X [ 275ULL ] ; } t32 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t32 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_477 ) - t98 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t32 * - 0.00038614513167823636 ) * intrm_sf_mf_477 ) +
( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
6.9647057412840034 ) + t32 * - 0.0070524868246844051 ) * t98 ; t35 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI - t100 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t35 == 0.0 ?
1.0E-16 : t35 ) ; if ( X [ 278ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 278ULL ] >=
623.15 ? 623.15 : X [ 278ULL ] ; } t35 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t32 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * -
0.2214565261064495 ) + t35 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_477 ) - t98 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
1.2002114337048222 ) + t35 * - 0.00038614513167823636 ) * intrm_sf_mf_477 ) +
( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
6.9647057412840034 ) + t35 * - 0.0070524868246844051 ) * t98 ; t103 = t32 -
t100 ; intrm_sf_mf_477 = t32 / ( t103 == 0.0 ? 1.0E-16 : t103 ) ; if ( X [
67ULL ] <= 0.0 ) { t98 = 0.0 ; } else { t98 = X [ 67ULL ] >= 1.0 ? 1.0 : X [
67ULL ] ; } if ( X [ 66ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 66ULL ] >=
1.0 ? 1.0 : X [ 66ULL ] ; } t32 = ( ( ( 1.0 - t98 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t98 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 11ULL ] <= 0.0 ) { t98 = 0.0 ; } else { t98 = X [ 11ULL ] >= 1.0 ?
1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 10ULL ] >=
1.0 ? 1.0 : X [ 10ULL ] ; } t35 = ( ( ( 1.0 - t98 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t98 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 289ULL ] <= 216.59999999999997 ) { t103 = 216.59999999999997 ; }
else { t103 = X [ 289ULL ] >= 623.15 ? 623.15 : X [ 289ULL ] ; } t38 = t103 *
t103 ; t206 = ( ( ( 1074.1165326382641 + t103 * - 0.2214565261064495 ) + t38
* 0.00037212980109014541 ) * ( ( 1.0 - t98 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t103 * 1.2002114337048222 ) + t38 * -
0.00038614513167823636 ) * t98 ) + ( ( 12825.281119789837 + t103 *
6.9647057412840034 ) + t38 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t41 = t206 - t35
; t103 = t206 / ( t41 == 0.0 ? 1.0E-16 : t41 ) ; if ( X [ 291ULL ] <=
216.59999999999997 ) { t206 = 216.59999999999997 ; } else { t206 = X [ 291ULL
] >= 623.15 ? 623.15 : X [ 291ULL ] ; } t41 = t206 * t206 ; t38 = ( ( (
1074.1165326382641 + t206 * - 0.2214565261064495 ) + t41 *
0.00037212980109014541 ) * ( ( 1.0 - t98 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t206 * 1.2002114337048222 ) + t41 * -
0.00038614513167823636 ) * t98 ) + ( ( 12825.281119789837 + t206 *
6.9647057412840034 ) + t41 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t105 = t38 - t35
; t98 = t38 / ( t105 == 0.0 ? 1.0E-16 : t105 ) ; if ( X [ 43ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 43ULL ] >=
1.0 ? 1.0 : X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 42ULL ] >= 1.0 ? 1.0 : X [ 42ULL ] ; } t38 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t206 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + t206 * 259.836612622973 ; if ( X [ 310ULL ] <=
216.59999999999997 ) { t41 = 216.59999999999997 ; } else { t41 = X [ 310ULL ]
>= 623.15 ? 623.15 : X [ 310ULL ] ; } intrm_sf_mf_907 = t41 * t41 ; t105 = (
( ( 1074.1165326382641 + t41 * - 0.2214565261064495 ) + intrm_sf_mf_907 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t206 ) + ( (
1479.6504774711011 + t41 * 1.2002114337048222 ) + intrm_sf_mf_907 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t41 * - 0.044484923911382625 ) + intrm_sf_mf_907 *
0.00036936011832044979 ) * t206 ; t177 = t105 - t38 ; t41 = t105 / ( t177 ==
0.0 ? 1.0E-16 : t177 ) ; if ( X [ 313ULL ] <= 216.59999999999997 ) { t105 =
216.59999999999997 ; } else { t105 = X [ 313ULL ] >= 623.15 ? 623.15 : X [
313ULL ] ; } t177 = t105 * t105 ; intrm_sf_mf_907 = ( ( ( 1074.1165326382641
+ t105 * - 0.2214565261064495 ) + t177 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t206 ) + ( (
1479.6504774711011 + t105 * 1.2002114337048222 ) + t177 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t105 * - 0.044484923911382625 ) + t177 *
0.00036936011832044979 ) * t206 ; t107 = intrm_sf_mf_907 - t38 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = intrm_sf_mf_907
/ ( t107 == 0.0 ? 1.0E-16 : t107 ) ; if ( X [ 234ULL ] <= 0.0 ) { t206 = 0.0
; } else { t206 = X [ 234ULL ] >= 1.0 ? 1.0 : X [ 234ULL ] ; } if ( X [
233ULL ] <= 0.0 ) { t105 = 0.0 ; } else { t105 = X [ 233ULL ] >= 1.0 ? 1.0 :
X [ 233ULL ] ; } intrm_sf_mf_907 = ( ( ( 1.0 - t206 ) - t105 ) *
296.802103844292 + t206 * 461.523 ) + t105 * 259.836612622973 ; if ( X [
302ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 = X [ 302ULL ] >= 1.0 ? 1.0 :
X [ 302ULL ] ; } if ( X [ 301ULL ] <= 0.0 ) { t105 = 0.0 ; } else { t105 = X
[ 301ULL ] >= 1.0 ? 1.0 : X [ 301ULL ] ; } t177 = ( ( ( 1.0 - t206 ) - t105 )
* 296.802103844292 + t206 * 461.523 ) + t105 * 259.836612622973 ; if ( X [
340ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 = X [ 340ULL ] >= 1.0 ? 1.0 :
X [ 340ULL ] ; } if ( X [ 341ULL ] <= 0.0 ) { t105 = 0.0 ; } else { t105 = X
[ 341ULL ] >= 1.0 ? 1.0 : X [ 341ULL ] ; } t107 = ( ( ( 1.0 - t206 ) - t105 )
* 296.802103844292 + t206 * 461.523 ) + t105 * 259.836612622973 ; t105 = ( X
[ 344ULL ] * 0.07812500122070315 + U_idx_8 * 10.0 ) - 7.8125001220703152E-10
; if ( X [ 47ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X [ 47ULL ] >=
1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) { t158 = 0.0 ; } else {
t158 = X [ 48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } intrm_sf_mf_1021 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) - t158 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
* 461.523 ) + t158 * 259.836612622973 ; if ( X [ 348ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI = X [ 348ULL ] >=
623.15 ? 623.15 : X [ 348ULL ] ; } intrm_sf_mf_1053 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + intrm_sf_mf_1053 * 0.00037212980109014541 ) * ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) - t158 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
1.2002114337048222 ) + intrm_sf_mf_1053 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + intrm_sf_mf_1053 * 0.00036936011832044979 ) * t158 ;
t137 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 -
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 / ( t137 ==
0.0 ? 1.0E-16 : t137 ) ; if ( X [ 352ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 352ULL ]
>= 623.15 ? 623.15 : X [ 352ULL ] ; } t137 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ;
intrm_sf_mf_1053 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.2214565261064495 ) + t137 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) - t158 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
1.2002114337048222 ) + t137 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.044484923911382625 ) + t137 * 0.00036936011832044979 ) * t158 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = intrm_sf_mf_1053
- intrm_sf_mf_1021 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = intrm_sf_mf_1053
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) ; if (
X [ 327ULL ] <= 0.0 ) { t158 = 0.0 ; } else { t158 = X [ 327ULL ] >= 1.0 ?
1.0 : X [ 327ULL ] ; } if ( X [ 326ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 326ULL
] >= 1.0 ? 1.0 : X [ 326ULL ] ; } intrm_sf_mf_1053 = ( ( ( 1.0 - t158 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) *
296.802103844292 + t158 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
259.836612622973 ; if ( X [ 346ULL ] <= 0.0 ) { t158 = 0.0 ; } else { t158 =
X [ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } if ( X [ 345ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 345ULL
] >= 1.0 ? 1.0 : X [ 345ULL ] ; } t137 = ( ( ( 1.0 - t158 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) *
296.802103844292 + t158 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
259.836612622973 ; if ( X [ 344ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { t158 = 1.9634954084936209E-11 ; } else if ( X [
344ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) { t158 =
0.0012566370614359179 ; } else { t158 = X [ 344ULL ] * 0.0019634954084936209
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t158 /
0.0019634954084936209 ; if ( X [ 367ULL ] <= 0.0 ) { t158 = 0.0 ; } else {
t158 = X [ 367ULL ] >= 1.0 ? 1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 368ULL ]
>= 1.0 ? 1.0 : X [ 368ULL ] ; } intrm_sf_mf_1160 = ( ( ( 1.0 - t158 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) *
296.802103844292 + t158 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 259.836612622973
; t111 = X [ 365ULL ] * intrm_sf_mf_1160 ; intrm_sf_mf_1250 = X [ 366ULL ] /
( t105 == 0.0 ? 1.0E-16 : t105 ) * ( X [ 369ULL ] / ( X [ 365ULL ] == 0.0 ?
1.0E-16 : X [ 365ULL ] ) ) ; t113 = X [ 366ULL ] / 1.01325 * ( X [ 370ULL ] /
( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ; t118 = ( t105 + 1.01325
) / 2.0 * 0.0010000000000000009 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
intrm_sf_mf_1252 = t118 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; intrm_sf_mf_1161
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) *
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1250 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t113 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = ( t105 -
1.01325 ) * ( intrm_sf_mf_1161 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ? intrm_sf_mf_1161
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ) ;
intrm_sf_mf_1161 = ( t105 - 1.01325 ) / ( t118 == 0.0 ? 1.0E-16 : t118 ) ;
t128 = intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 - intrm_sf_mf_1161 *
intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if ( t105 - 1.01325 <= 0.0 ) {
intrm_sf_mf_1161 = intrm_sf_mf_1252 ; } else if ( t105 - 1.01325 >= t118 ) {
intrm_sf_mf_1161 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; } else {
intrm_sf_mf_1161 = ( 1.0 - t128 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * t128 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t113 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1250 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( 1.01325 -
t105 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ) ;
intrm_sf_mf_1250 = ( 1.01325 - t105 ) / ( t118 == 0.0 ? 1.0E-16 : t118 ) ;
t113 = intrm_sf_mf_1250 * intrm_sf_mf_1250 * 3.0 - intrm_sf_mf_1250 *
intrm_sf_mf_1250 * intrm_sf_mf_1250 * 2.0 ; if ( 1.01325 - t105 <= 0.0 ) {
intrm_sf_mf_1250 = intrm_sf_mf_1252 ; } else if ( 1.01325 - t105 >= t118 ) {
intrm_sf_mf_1250 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; } else {
intrm_sf_mf_1250 = ( 1.0 - t113 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t113 ; } if
( t105 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1161 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t105 <
1.01325 ? intrm_sf_mf_1250 : intrm_sf_mf_1252 ; } if ( X [ 365ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1250 = 216.59999999999997 ; } else {
intrm_sf_mf_1250 = X [ 365ULL ] >= 623.15 ? 623.15 : X [ 365ULL ] ; }
intrm_sf_mf_1012 = intrm_sf_mf_1250 * intrm_sf_mf_1250 ; t113 = ( ( (
1074.1165326382641 + intrm_sf_mf_1250 * - 0.2214565261064495 ) +
intrm_sf_mf_1012 * 0.00037212980109014541 ) * ( ( 1.0 - t158 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + intrm_sf_mf_1250 * 1.2002114337048222 ) +
intrm_sf_mf_1012 * - 0.00038614513167823636 ) * t158 ) + ( (
900.63941224838356 + intrm_sf_mf_1250 * - 0.044484923911382625 ) +
intrm_sf_mf_1012 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; U_idx_1 = t113 -
intrm_sf_mf_1160 ; t158 = t113 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; if
( X [ 14ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 14ULL ] >=
1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { intrm_sf_mf_1250 =
0.0 ; } else { intrm_sf_mf_1250 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; }
t113 = ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
) - intrm_sf_mf_1250 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 461.523 ) +
intrm_sf_mf_1250 * 259.836612622973 ; if ( X [ 372ULL ] <= 216.59999999999997
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = X [ 372ULL ] >=
623.15 ? 623.15 : X [ 372ULL ] ; } U_idx_1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; t118 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + U_idx_1 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1250 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI *
1.2002114337048222 ) + U_idx_1 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + U_idx_1 * 0.00036936011832044979 ) *
intrm_sf_mf_1250 ; U_idx_2 = t118 - t113 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = t118 / ( U_idx_2
== 0.0 ? 1.0E-16 : U_idx_2 ) ; if ( X [ 375ULL ] <= 216.59999999999997 ) {
t118 = 216.59999999999997 ; } else { t118 = X [ 375ULL ] >= 623.15 ? 623.15 :
X [ 375ULL ] ; } U_idx_2 = t118 * t118 ; intrm_sf_mf_1252 = ( ( (
1074.1165326382641 + t118 * - 0.2214565261064495 ) + U_idx_2 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1250 ) + ( ( 1479.6504774711011 + t118 * 1.2002114337048222 ) +
U_idx_2 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t118 * - 0.044484923911382625 ) + U_idx_2 *
0.00036936011832044979 ) * intrm_sf_mf_1250 ; U_idx_8 = intrm_sf_mf_1252 -
t113 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
intrm_sf_mf_1252 / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ; if ( X [ 71ULL ]
<= 0.0 ) { intrm_sf_mf_1250 = 0.0 ; } else { intrm_sf_mf_1250 = X [ 71ULL ]
>= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 ) { t118 = 0.0 ; }
else { t118 = X [ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ] ; } intrm_sf_mf_1252 = (
( ( 1.0 - intrm_sf_mf_1250 ) - t118 ) * 296.802103844292 + intrm_sf_mf_1250 *
461.523 ) + t118 * 259.836612622973 ; if ( X [ 17ULL ] <= 0.0 ) {
intrm_sf_mf_1250 = 0.0 ; } else { intrm_sf_mf_1250 = X [ 17ULL ] >= 1.0 ? 1.0
: X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) { t118 = 0.0 ; } else { t118 = X
[ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } intrm_sf_mf_1161 = ( ( ( 1.0 -
intrm_sf_mf_1250 ) - t118 ) * 296.802103844292 + intrm_sf_mf_1250 * 461.523 )
+ t118 * 259.836612622973 ; if ( X [ 386ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = X [ 386ULL ] >=
623.15 ? 623.15 : X [ 386ULL ] ; } U_idx_8 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; t128 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.2214565261064495 ) + U_idx_8 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1250 ) - t118 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
1.2002114337048222 ) + U_idx_8 * - 0.00038614513167823636 ) *
intrm_sf_mf_1250 ) + ( ( 900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.044484923911382625 ) + U_idx_8 * 0.00036936011832044979 ) * t118 ; t206 =
t128 - intrm_sf_mf_1161 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = t128 / ( t206
== 0.0 ? 1.0E-16 : t206 ) ; if ( X [ 388ULL ] <= 216.59999999999997 ) { t128
= 216.59999999999997 ; } else { t128 = X [ 388ULL ] >= 623.15 ? 623.15 : X [
388ULL ] ; } t206 = t128 * t128 ; intrm_sf_mf_1012 = ( ( ( 1074.1165326382641
+ t128 * - 0.2214565261064495 ) + t206 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1250 ) - t118 ) + ( ( 1479.6504774711011 + t128 *
1.2002114337048222 ) + t206 * - 0.00038614513167823636 ) * intrm_sf_mf_1250 )
+ ( ( 900.63941224838356 + t128 * - 0.044484923911382625 ) + t206 *
0.00036936011832044979 ) * t118 ; t206 = intrm_sf_mf_1012 - intrm_sf_mf_1161
; intrm_sf_mf_1250 = intrm_sf_mf_1012 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ; if
( X [ 331ULL ] <= 0.0 ) { t118 = 0.0 ; } else { t118 = X [ 331ULL ] >= 1.0 ?
1.0 : X [ 331ULL ] ; } if ( X [ 330ULL ] <= 0.0 ) { t128 = 0.0 ; } else {
t128 = X [ 330ULL ] >= 1.0 ? 1.0 : X [ 330ULL ] ; } intrm_sf_mf_1012 = ( ( (
1.0 - t118 ) - t128 ) * 296.802103844292 + t118 * 461.523 ) + t128 *
259.836612622973 ; if ( U_idx_9 >= 1.0 ) { t118 = 1.0 ; } else { t118 =
U_idx_9 <= 0.0 ? 0.0 : U_idx_9 ; } if ( X [ 118ULL ] <= 0.0 ) { t128 = 0.0 ;
} else { t128 = X [ 118ULL ] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [ 117ULL
] <= 0.0 ) { t206 = 0.0 ; } else { t206 = X [ 117ULL ] >= 1.0 ? 1.0 : X [
117ULL ] ; } U_idx_1 = ( ( ( 1.0 - t128 ) - t206 ) * 296.802103844292 + t128
* 461.523 ) + t206 * 4124.48151675695 ; if ( X [ 165ULL ] <= 0.0 ) { t128 =
0.0 ; } else { t128 = X [ 165ULL ] >= 1.0 ? 1.0 : X [ 165ULL ] ; } if ( X [
164ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 = X [ 164ULL ] >= 1.0 ? 1.0 :
X [ 164ULL ] ; } U_idx_2 = ( ( ( 1.0 - t128 ) - t206 ) * 296.802103844292 +
t128 * 461.523 ) + t206 * 4124.48151675695 ; if ( X [ 209ULL ] <= 0.0 ) {
t128 = 0.0 ; } else { t128 = X [ 209ULL ] >= 1.0 ? 1.0 : X [ 209ULL ] ; } if
( X [ 208ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 = X [ 208ULL ] >= 1.0 ?
1.0 : X [ 208ULL ] ; } U_idx_8 = ( ( ( 1.0 - t128 ) - t206 ) *
296.802103844292 + t128 * 461.523 ) + t206 * 259.836612622973 ; t1 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t2 = 0ULL ; t2 < 42ULL ; t2 ++ ) { t3 = t2 / 42ULL ;
t128 = t1 [ t3 > 0ULL ? 0ULL : t3 ] ; t206 = ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 [ t2 ] * 1.0E-5 ; t1 [ t3 > 0ULL ? 0ULL : t3 ] = t128 > t206 ?
t206 : t128 ; } t0 [ 0ULL ] = ( int32_T ) ( t1 [ 0ULL ] >= X [ 54ULL ] ) ; t0
[ 1ULL ] = ( int32_T ) ( X [ 56ULL ] <= 4.03416E-7 ) ; t0 [ 2ULL ] = (
int32_T ) ( X [ 135ULL ] * t180 * intrm_sf_mf_31 >= 0.0 ) ; t0 [ 3ULL ] = (
int32_T ) ( X [ 353ULL ] * X [ 353ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 352ULL ] ==
0.0 ? 1.0E-16 : X [ 352ULL ] ) >= 0.0 ) ; t0 [ 4ULL ] = ( int32_T ) ( X [
348ULL ] * intrm_sf_mf_1021 / ( X [ 349ULL ] == 0.0 ? 1.0E-16 : X [ 349ULL ]
) >= 0.0 ) ; t0 [ 5ULL ] = ( int32_T ) ( X [ 352ULL ] * intrm_sf_mf_1021 / (
X [ 353ULL ] == 0.0 ? 1.0E-16 : X [ 353ULL ] ) >= 0.0 ) ; t0 [ 6ULL ] = (
int32_T ) ( X [ 45ULL ] * intrm_sf_mf_1021 / ( X [ 46ULL ] == 0.0 ? 1.0E-16 :
X [ 46ULL ] ) >= 0.0 ) ; t0 [ 7ULL ] = ( int32_T ) ( X [ 343ULL ] * t137 / (
t105 == 0.0 ? 1.0E-16 : t105 ) >= 0.0 ) ; t0 [ 8ULL ] = ( int32_T ) ( X [
329ULL ] * intrm_sf_mf_1012 / 1.01325 >= 0.0 ) ; t0 [ 9ULL ] = ( int32_T ) (
X [ 366ULL ] / ( t111 == 0.0 ? 1.0E-16 : t111 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) >=
0.0 ) ; t0 [ 10ULL ] = ( int32_T ) ( X [ 366ULL ] * X [ 366ULL ] * t158 / (
intrm_sf_mf_1160 == 0.0 ? 1.0E-16 : intrm_sf_mf_1160 ) / ( X [ 365ULL ] ==
0.0 ? 1.0E-16 : X [ 365ULL ] ) >= 0.0 ) ; t0 [ 11ULL ] = ( int32_T ) ( X [
369ULL ] * intrm_sf_mf_1160 / ( t105 == 0.0 ? 1.0E-16 : t105 ) >= 0.0 ) ; t0
[ 12ULL ] = ( int32_T ) ( X [ 370ULL ] * intrm_sf_mf_1160 / 1.01325 >= 0.0 )
; t0 [ 13ULL ] = ( int32_T ) ( X [ 139ULL ] * t184 * intrm_sf_mf_31 >= 0.0 )
; t0 [ 14ULL ] = ( int32_T ) ( t111 / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [
366ULL ] ) >= 0.0 ) ; t0 [ 15ULL ] = ( int32_T ) ( X [ 299ULL ] * t177 / ( X
[ 300ULL ] == 0.0 ? 1.0E-16 : X [ 300ULL ] ) >= 0.0 ) ; t0 [ 16ULL ] = (
int32_T ) ( X [ 68ULL ] * intrm_sf_mf_1252 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 :
X [ 69ULL ] ) >= 0.0 ) ; t0 [ 17ULL ] = ( int32_T ) ( X [ 372ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * t113 >= 0.0 ) ;
t0 [ 18ULL ] = ( int32_T ) ( X [ 375ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t113 >= 0.0 ) ;
t0 [ 19ULL ] = ( int32_T ) ( X [ 373ULL ] * X [ 373ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI / ( t113 == 0.0 ?
1.0E-16 : t113 ) / ( X [ 372ULL ] == 0.0 ? 1.0E-16 : X [ 372ULL ] ) >= 0.0 )
; t0 [ 20ULL ] = ( int32_T ) ( X [ 376ULL ] * X [ 376ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / ( t113 == 0.0 ?
1.0E-16 : t113 ) / ( X [ 375ULL ] == 0.0 ? 1.0E-16 : X [ 375ULL ] ) >= 0.0 )
; t0 [ 21ULL ] = ( int32_T ) ( X [ 372ULL ] * t113 / ( X [ 373ULL ] == 0.0 ?
1.0E-16 : X [ 373ULL ] ) >= 0.0 ) ; t0 [ 22ULL ] = ( int32_T ) ( X [ 375ULL ]
* t113 / ( X [ 376ULL ] == 0.0 ? 1.0E-16 : X [ 376ULL ] ) >= 0.0 ) ; t0 [
23ULL ] = ( int32_T ) ( X [ 12ULL ] * t113 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 :
X [ 49ULL ] ) >= 0.0 ) ; t180 = X [ 136ULL ] * X [ 136ULL ] * t180 / (
intrm_sf_mf_31 == 0.0 ? 1.0E-16 : intrm_sf_mf_31 ) ; t0 [ 24ULL ] = ( int32_T
) ( t180 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) >= 0.0 ) ; t0 [
25ULL ] = ( int32_T ) ( X [ 324ULL ] * intrm_sf_mf_1053 / ( X [ 325ULL ] ==
0.0 ? 1.0E-16 : X [ 325ULL ] ) >= 0.0 ) ; t0 [ 26ULL ] = ( int32_T ) ( X [
386ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
intrm_sf_mf_1161 >= 0.0 ) ; t0 [ 27ULL ] = ( int32_T ) ( X [ 388ULL ] *
intrm_sf_mf_1250 * intrm_sf_mf_1161 >= 0.0 ) ; t0 [ 28ULL ] = ( int32_T ) ( X
[ 387ULL ] * X [ 387ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI / (
intrm_sf_mf_1161 == 0.0 ? 1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 386ULL ] ==
0.0 ? 1.0E-16 : X [ 386ULL ] ) >= 0.0 ) ; t0 [ 29ULL ] = ( int32_T ) ( X [
389ULL ] * X [ 389ULL ] * intrm_sf_mf_1250 / ( intrm_sf_mf_1161 == 0.0 ?
1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 388ULL ] == 0.0 ? 1.0E-16 : X [ 388ULL ]
) >= 0.0 ) ; t0 [ 30ULL ] = ( int32_T ) ( X [ 386ULL ] * intrm_sf_mf_1161 / (
X [ 387ULL ] == 0.0 ? 1.0E-16 : X [ 387ULL ] ) >= 0.0 ) ; t0 [ 31ULL ] = (
int32_T ) ( X [ 388ULL ] * intrm_sf_mf_1161 / ( X [ 389ULL ] == 0.0 ? 1.0E-16
: X [ 389ULL ] ) >= 0.0 ) ; t0 [ 32ULL ] = ( int32_T ) ( X [ 15ULL ] *
intrm_sf_mf_1161 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) >= 0.0 ) ;
t0 [ 33ULL ] = ( int32_T ) ( X [ 52ULL ] > X [ 398ULL ] ) ; t184 = X [ 140ULL
] * X [ 140ULL ] * t184 / ( intrm_sf_mf_31 == 0.0 ? 1.0E-16 : intrm_sf_mf_31
) ; t0 [ 34ULL ] = ( int32_T ) ( t184 / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [
139ULL ] ) >= 0.0 ) ; t0 [ 35ULL ] = ( int32_T ) ( X [ 52ULL ] < - X [ 398ULL
] ) ; t0 [ 36ULL ] = ( int32_T ) ( X [ 56ULL ] > 0.0 ) ; t0 [ 37ULL ] = (
int32_T ) ( X [ 54ULL ] >= 0.0 ) ; t0 [ 38ULL ] = ( int32_T ) ( X [ 18ULL ] >
0.0 ) ; t0 [ 39ULL ] = ( int32_T ) ( ( 1.0 - X [ 127ULL ] ) - X [ 128ULL ] >=
0.0 ) ; t0 [ 40ULL ] = ( int32_T ) ( X [ 112ULL ] >= 0.01 ) ; t0 [ 41ULL ] =
( int32_T ) ( X [ 112ULL ] <= pmf_get_inf ( ) ) ; t0 [ 42ULL ] = ( int32_T )
( X [ 111ULL ] >= 216.59999999999997 ) ; t0 [ 43ULL ] = ( int32_T ) ( X [
111ULL ] <= 623.15 ) ; t0 [ 44ULL ] = ( int32_T ) ( X [ 131ULL ] >= 0.01 ) ;
t0 [ 45ULL ] = ( int32_T ) ( X [ 135ULL ] * intrm_sf_mf_31 / ( X [ 136ULL ]
== 0.0 ? 1.0E-16 : X [ 136ULL ] ) >= 0.0 ) ; t0 [ 46ULL ] = ( int32_T ) ( X [
131ULL ] <= pmf_get_inf ( ) ) ; t0 [ 47ULL ] = ( int32_T ) ( X [ 130ULL ] >=
216.59999999999997 ) ; t0 [ 48ULL ] = ( int32_T ) ( X [ 130ULL ] <= 623.15 )
; t0 [ 49ULL ] = ( int32_T ) ( X [ 20ULL ] >= 0.01 ) ; t0 [ 50ULL ] = (
int32_T ) ( X [ 20ULL ] <= pmf_get_inf ( ) ) ; t0 [ 51ULL ] = ( int32_T ) ( X
[ 19ULL ] >= 216.59999999999997 ) ; t0 [ 52ULL ] = ( int32_T ) ( X [ 19ULL ]
<= 623.15 ) ; t0 [ 53ULL ] = ( int32_T ) ( X [ 116ULL ] >= 216.59999999999997
) ; t0 [ 54ULL ] = ( int32_T ) ( X [ 116ULL ] <= 623.15 ) ; t0 [ 55ULL ] = (
int32_T ) ( X [ 24ULL ] >= 0.01 ) ; t0 [ 56ULL ] = ( int32_T ) ( X [ 139ULL ]
* intrm_sf_mf_31 / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ] ) >= 0.0 )
; t0 [ 57ULL ] = ( int32_T ) ( X [ 24ULL ] <= pmf_get_inf ( ) ) ; t0 [ 58ULL
] = ( int32_T ) ( X [ 23ULL ] >= 216.59999999999997 ) ; t0 [ 59ULL ] = (
int32_T ) ( X [ 23ULL ] <= 623.15 ) ; t0 [ 60ULL ] = ( int32_T ) ( X [ 179ULL
] >= 0.01 ) ; t0 [ 61ULL ] = ( int32_T ) ( X [ 179ULL ] <= pmf_get_inf ( ) )
; t0 [ 62ULL ] = ( int32_T ) ( X [ 178ULL ] >= 216.59999999999997 ) ; t0 [
63ULL ] = ( int32_T ) ( X [ 178ULL ] <= 623.15 ) ; t0 [ 64ULL ] = ( int32_T )
( X [ 160ULL ] >= 0.01 ) ; t0 [ 65ULL ] = ( int32_T ) ( X [ 160ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 66ULL ] = ( int32_T ) ( X [ 159ULL ] >=
216.59999999999997 ) ; t0 [ 67ULL ] = ( int32_T ) ( X [ 19ULL ] *
intrm_sf_mf_31 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) >= 0.0 ) ; t0
[ 68ULL ] = ( int32_T ) ( X [ 159ULL ] <= 623.15 ) ; t0 [ 69ULL ] = ( int32_T
) ( X [ 28ULL ] >= 0.01 ) ; t0 [ 70ULL ] = ( int32_T ) ( X [ 28ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 71ULL ] = ( int32_T ) ( X [ 27ULL ] >=
216.59999999999997 ) ; t0 [ 72ULL ] = ( int32_T ) ( X [ 27ULL ] <= 623.15 ) ;
t0 [ 73ULL ] = ( int32_T ) ( X [ 163ULL ] >= 216.59999999999997 ) ; t0 [
74ULL ] = ( int32_T ) ( X [ 163ULL ] <= 623.15 ) ; t0 [ 75ULL ] = ( int32_T )
( ( 1.0 - X [ 218ULL ] ) - X [ 219ULL ] >= 0.0 ) ; t0 [ 76ULL ] = ( int32_T )
( X [ 207ULL ] >= 216.59999999999997 ) ; t0 [ 77ULL ] = ( int32_T ) ( X [
207ULL ] <= 623.15 ) ; t0 [ 78ULL ] = ( int32_T ) ( X [ 130ULL ] * t8 / ( X [
131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) >= 0.0 ) ; t0 [ 79ULL ] = (
int32_T ) ( X [ 31ULL ] >= 0.01 ) ; t0 [ 80ULL ] = ( int32_T ) ( X [ 31ULL ]
<= pmf_get_inf ( ) ) ; t0 [ 81ULL ] = ( int32_T ) ( X [ 221ULL ] >=
216.59999999999997 ) ; t0 [ 82ULL ] = ( int32_T ) ( X [ 221ULL ] <= 623.15 )
; t0 [ 83ULL ] = ( int32_T ) ( X [ 32ULL ] >= 216.59999999999997 ) ; t0 [
84ULL ] = ( int32_T ) ( X [ 32ULL ] <= 623.15 ) ; t0 [ 85ULL ] = ( int32_T )
( X [ 251ULL ] >= 0.01 ) ; t0 [ 86ULL ] = ( int32_T ) ( X [ 251ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 87ULL ] = ( int32_T ) ( X [ 250ULL ] >=
216.59999999999997 ) ; t0 [ 88ULL ] = ( int32_T ) ( X [ 250ULL ] <= 623.15 )
; t0 [ 89ULL ] = ( int32_T ) ( X [ 116ULL ] * U_idx_1 / 1.01325 >= 0.0 ) ; t0
[ 90ULL ] = ( int32_T ) ( X [ 38ULL ] >= 0.01 ) ; t0 [ 91ULL ] = ( int32_T )
( X [ 38ULL ] <= pmf_get_inf ( ) ) ; t0 [ 92ULL ] = ( int32_T ) ( X [ 35ULL ]
>= 216.59999999999997 ) ; t0 [ 93ULL ] = ( int32_T ) ( X [ 35ULL ] <= 623.15
) ; t0 [ 94ULL ] = ( int32_T ) ( X [ 65ULL ] >= 0.01 ) ; t0 [ 95ULL ] = (
int32_T ) ( X [ 65ULL ] <= pmf_get_inf ( ) ) ; t0 [ 96ULL ] = ( int32_T ) ( X
[ 64ULL ] >= 216.59999999999997 ) ; t0 [ 97ULL ] = ( int32_T ) ( X [ 64ULL ]
<= 623.15 ) ; t0 [ 98ULL ] = ( int32_T ) ( X [ 39ULL ] >= 0.01 ) ; t0 [ 99ULL
] = ( int32_T ) ( X [ 39ULL ] <= pmf_get_inf ( ) ) ; t0 [ 100ULL ] = (
int32_T ) ( X [ 153ULL ] / ( t72 == 0.0 ? 1.0E-16 : t72 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r )
>= 0.0 ) ; t0 [ 101ULL ] = ( int32_T ) ( X [ 6ULL ] >= 216.59999999999997 ) ;
t0 [ 102ULL ] = ( int32_T ) ( X [ 6ULL ] <= 623.15 ) ; t0 [ 103ULL ] = (
int32_T ) ( X [ 40ULL ] >= 0.01 ) ; t0 [ 104ULL ] = ( int32_T ) ( X [ 40ULL ]
<= pmf_get_inf ( ) ) ; t0 [ 105ULL ] = ( int32_T ) ( X [ 9ULL ] >=
216.59999999999997 ) ; t0 [ 106ULL ] = ( int32_T ) ( X [ 9ULL ] <= 623.15 ) ;
t0 [ 107ULL ] = ( int32_T ) ( X [ 232ULL ] >= 216.59999999999997 ) ; t0 [
108ULL ] = ( int32_T ) ( X [ 232ULL ] <= 623.15 ) ; t0 [ 109ULL ] = ( int32_T
) ( X [ 300ULL ] >= 0.01 ) ; t0 [ 110ULL ] = ( int32_T ) ( X [ 300ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 111ULL ] = ( int32_T ) ( X [ 55ULL ] >= 0.9 ) ; t0 [
112ULL ] = ( int32_T ) ( X [ 153ULL ] * X [ 153ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / (
intrm_sf_mf_170 == 0.0 ? 1.0E-16 : intrm_sf_mf_170 ) / ( X [ 152ULL ] == 0.0
? 1.0E-16 : X [ 152ULL ] ) >= 0.0 ) ; t0 [ 113ULL ] = ( int32_T ) ( X [
299ULL ] >= 216.59999999999997 ) ; t0 [ 114ULL ] = ( int32_T ) ( X [ 299ULL ]
<= 623.15 ) ; t0 [ 115ULL ] = ( int32_T ) ( X [ 44ULL ] >= 0.01 ) ; t0 [
116ULL ] = ( int32_T ) ( X [ 44ULL ] <= pmf_get_inf ( ) ) ; t0 [ 117ULL ] = (
int32_T ) ( X [ 41ULL ] >= 216.59999999999997 ) ; t0 [ 118ULL ] = ( int32_T )
( X [ 41ULL ] <= 623.15 ) ; t0 [ 119ULL ] = ( int32_T ) ( ( 1.0 - X [ 340ULL
] ) - X [ 341ULL ] >= 0.0 ) ; t0 [ 120ULL ] = ( int32_T ) ( X [ 325ULL ] >=
0.01 ) ; t0 [ 121ULL ] = ( int32_T ) ( X [ 325ULL ] <= pmf_get_inf ( ) ) ; t0
[ 122ULL ] = ( int32_T ) ( X [ 324ULL ] >= 216.59999999999997 ) ; t0 [ 123ULL
] = ( int32_T ) ( X [ 156ULL ] * intrm_sf_mf_170 / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) >= 0.0 ) ; t0 [ 124ULL ] = ( int32_T ) ( X [ 324ULL
] <= 623.15 ) ; t0 [ 125ULL ] = ( int32_T ) ( t105 >= 0.01 ) ; t0 [ 126ULL ]
= ( int32_T ) ( t105 <= pmf_get_inf ( ) ) ; t0 [ 127ULL ] = ( int32_T ) ( X [
343ULL ] >= 216.59999999999997 ) ; t0 [ 128ULL ] = ( int32_T ) ( X [ 343ULL ]
<= 623.15 ) ; t0 [ 129ULL ] = ( int32_T ) ( X [ 46ULL ] >= 0.01 ) ; t0 [
130ULL ] = ( int32_T ) ( X [ 46ULL ] <= pmf_get_inf ( ) ) ; t0 [ 131ULL ] = (
int32_T ) ( X [ 45ULL ] >= 216.59999999999997 ) ; t0 [ 132ULL ] = ( int32_T )
( X [ 45ULL ] <= 623.15 ) ; t0 [ 133ULL ] = ( int32_T ) ( X [ 329ULL ] >=
216.59999999999997 ) ; t0 [ 134ULL ] = ( int32_T ) ( X [ 157ULL ] *
intrm_sf_mf_170 / 1.01325 >= 0.0 ) ; t0 [ 135ULL ] = ( int32_T ) ( X [ 329ULL
] <= 623.15 ) ; t0 [ 136ULL ] = ( int32_T ) ( X [ 69ULL ] >= 0.01 ) ; t0 [
137ULL ] = ( int32_T ) ( X [ 69ULL ] <= pmf_get_inf ( ) ) ; t0 [ 138ULL ] = (
int32_T ) ( X [ 68ULL ] >= 216.59999999999997 ) ; t0 [ 139ULL ] = ( int32_T )
( X [ 68ULL ] <= 623.15 ) ; t0 [ 140ULL ] = ( int32_T ) ( X [ 49ULL ] >= 0.01
) ; t0 [ 141ULL ] = ( int32_T ) ( X [ 49ULL ] <= pmf_get_inf ( ) ) ; t0 [
142ULL ] = ( int32_T ) ( X [ 12ULL ] >= 216.59999999999997 ) ; t0 [ 143ULL ]
= ( int32_T ) ( X [ 12ULL ] <= 623.15 ) ; t0 [ 144ULL ] = ( int32_T ) ( X [
50ULL ] >= 0.01 ) ; t0 [ 145ULL ] = ( int32_T ) ( t72 / ( X [ 153ULL ] == 0.0
? 1.0E-16 : X [ 153ULL ] ) >= 0.0 ) ; t0 [ 146ULL ] = ( int32_T ) ( X [ 50ULL
] <= pmf_get_inf ( ) ) ; t0 [ 147ULL ] = ( int32_T ) ( X [ 15ULL ] >=
216.59999999999997 ) ; t0 [ 148ULL ] = ( int32_T ) ( X [ 15ULL ] <= 623.15 )
; t0 [ 149ULL ] = ( int32_T ) ( X [ 58ULL ] > 0.0 ) ; t0 [ 150ULL ] = (
int32_T ) ( X [ 163ULL ] * U_idx_2 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) >= 0.0 ) ; t0 [ 151ULL ] = ( int32_T ) ( X [ 23ULL ] * t75 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) >= 0.0 ) ; t0 [ 152ULL ] = ( int32_T
) ( X [ 178ULL ] * intrm_sf_mf_240 / ( X [ 179ULL ] == 0.0 ? 1.0E-16 : X [
179ULL ] ) >= 0.0 ) ; t0 [ 153ULL ] = ( int32_T ) ( X [ 159ULL ] *
intrm_sf_mf_281 / ( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) >= 0.0 ) ;
t0 [ 154ULL ] = ( int32_T ) ( X [ 182ULL ] * intrm_sf_mf_221 * t78 >= 0.0 ) ;
t0 [ 155ULL ] = ( int32_T ) ( X [ 187ULL ] * t70 * t78 >= 0.0 ) ; t0 [ 156ULL
] = ( int32_T ) ( ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0000000000000011 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] > X [ 60ULL ] +
0.8 ) ; t0 [ 157ULL ] = ( int32_T ) ( X [ 183ULL ] * X [ 183ULL ] *
intrm_sf_mf_221 / ( t78 == 0.0 ? 1.0E-16 : t78 ) / ( X [ 182ULL ] == 0.0 ?
1.0E-16 : X [ 182ULL ] ) >= 0.0 ) ; t0 [ 158ULL ] = ( int32_T ) ( X [ 188ULL
] * X [ 188ULL ] * t70 / ( t78 == 0.0 ? 1.0E-16 : t78 ) / ( X [ 187ULL ] ==
0.0 ? 1.0E-16 : X [ 187ULL ] ) >= 0.0 ) ; t0 [ 159ULL ] = ( int32_T ) ( X [
182ULL ] * t78 / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [ 183ULL ] ) >= 0.0 ) ;
t0 [ 160ULL ] = ( int32_T ) ( X [ 187ULL ] * t78 / ( X [ 188ULL ] == 0.0 ?
1.0E-16 : X [ 188ULL ] ) >= 0.0 ) ; t0 [ 161ULL ] = ( int32_T ) ( X [ 27ULL ]
* t78 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) >= 0.0 ) ; t0 [ 162ULL
] = ( int32_T ) ( X [ 201ULL ] / ( t87 == 0.0 ? 1.0E-16 : t87 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 )
>= 0.0 ) ; t0 [ 163ULL ] = ( int32_T ) ( X [ 201ULL ] * X [ 201ULL ] *
intrm_sf_mf_357 / ( t14 == 0.0 ? 1.0E-16 : t14 ) / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) >= 0.0 ) ; t0 [ 164ULL ] = ( int32_T ) ( X [ 204ULL
] * t14 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) >= 0.0 ) ; t0 [
165ULL ] = ( int32_T ) ( t118 == 1.0 ) ; t0 [ 166ULL ] = ( int32_T ) ( X [
205ULL ] * t14 / ( X [ 179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) >= 0.0 ) ;
t0 [ 167ULL ] = ( int32_T ) ( t87 / ( X [ 201ULL ] == 0.0 ? 1.0E-16 : X [
201ULL ] ) >= 0.0 ) ; t0 [ 168ULL ] = ( int32_T ) ( X [ 207ULL ] * U_idx_8 /
1.01325 >= 0.0 ) ; t0 [ 169ULL ] = ( int32_T ) ( t85 * 293.15 / 1.01325 >=
0.0 ) ; t0 [ 170ULL ] = ( int32_T ) ( X [ 221ULL ] * intrm_sf_mf_1502 / ( X [
31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) >= 0.0 ) ; t0 [ 171ULL ] = ( int32_T
) ( X [ 228ULL ] * t94 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) >=
0.0 ) ; t0 [ 172ULL ] = ( int32_T ) ( X [ 225ULL ] * t94 / 1.01325 >= 0.0 ) ;
t0 [ 173ULL ] = ( int32_T ) ( X [ 227ULL ] * t94 / 1.01325 >= 0.0 ) ; t0 [
174ULL ] = ( int32_T ) ( X [ 226ULL ] * t94 / ( X [ 31ULL ] == 0.0 ? 1.0E-16
: X [ 31ULL ] ) >= 0.0 ) ; t0 [ 175ULL ] = ( int32_T ) ( X [ 95ULL ] > 0.6 )
; t0 [ 176ULL ] = ( int32_T ) ( X [ 232ULL ] * intrm_sf_mf_907 / ( X [ 31ULL
] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) >= 0.0 ) ; t0 [ 177ULL ] = ( int32_T ) ( X
[ 32ULL ] * t96 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) >= 0.0 ) ;
t0 [ 178ULL ] = ( int32_T ) ( U_idx_5 <= 216.59999999999997 ) ; t0 [ 179ULL ]
= ( int32_T ) ( U_idx_5 >= 623.15 ) ; t0 [ 180ULL ] = ( int32_T ) ( X [
250ULL ] * t99 / ( X [ 251ULL ] == 0.0 ? 1.0E-16 : X [ 251ULL ] ) >= 0.0 ) ;
t0 [ 181ULL ] = ( int32_T ) ( X [ 261ULL ] * t97 * intrm_sf_mf_478 >= 0.0 ) ;
t0 [ 182ULL ] = ( int32_T ) ( X [ 264ULL ] * t84 * intrm_sf_mf_478 >= 0.0 ) ;
t0 [ 183ULL ] = ( int32_T ) ( X [ 262ULL ] * X [ 262ULL ] * t97 / (
intrm_sf_mf_478 == 0.0 ? 1.0E-16 : intrm_sf_mf_478 ) / ( X [ 261ULL ] == 0.0
? 1.0E-16 : X [ 261ULL ] ) >= 0.0 ) ; t0 [ 184ULL ] = ( int32_T ) ( X [
265ULL ] * X [ 265ULL ] * t84 / ( intrm_sf_mf_478 == 0.0 ? 1.0E-16 :
intrm_sf_mf_478 ) / ( X [ 264ULL ] == 0.0 ? 1.0E-16 : X [ 264ULL ] ) >= 0.0 )
; t0 [ 185ULL ] = ( int32_T ) ( X [ 261ULL ] * intrm_sf_mf_478 / ( X [ 262ULL
] == 0.0 ? 1.0E-16 : X [ 262ULL ] ) >= 0.0 ) ; t0 [ 186ULL ] = ( int32_T ) (
X [ 264ULL ] * intrm_sf_mf_478 / ( X [ 265ULL ] == 0.0 ? 1.0E-16 : X [ 265ULL
] ) >= 0.0 ) ; t0 [ 187ULL ] = ( int32_T ) ( X [ 35ULL ] * intrm_sf_mf_478 /
( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) >= 0.0 ) ; t0 [ 188ULL ] = (
int32_T ) ( X [ 64ULL ] * t32 / ( X [ 65ULL ] == 0.0 ? 1.0E-16 : X [ 65ULL ]
) >= 0.0 ) ; t0 [ 189ULL ] = ( int32_T ) ( X [ 275ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * t100 >= 0.0 ) ;
t0 [ 190ULL ] = ( int32_T ) ( X [ 278ULL ] * intrm_sf_mf_477 * t100 >= 0.0 )
; t0 [ 191ULL ] = ( int32_T ) ( X [ 276ULL ] * X [ 276ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI / ( t100 == 0.0 ?
1.0E-16 : t100 ) / ( X [ 275ULL ] == 0.0 ? 1.0E-16 : X [ 275ULL ] ) >= 0.0 )
; t0 [ 192ULL ] = ( int32_T ) ( X [ 279ULL ] * X [ 279ULL ] * intrm_sf_mf_477
/ ( t100 == 0.0 ? 1.0E-16 : t100 ) / ( X [ 278ULL ] == 0.0 ? 1.0E-16 : X [
278ULL ] ) >= 0.0 ) ; t0 [ 193ULL ] = ( int32_T ) ( intrm_sf_mf_17 * 293.15 /
1.01325 >= 0.0 ) ; t0 [ 194ULL ] = ( int32_T ) ( X [ 275ULL ] * t100 / ( X [
276ULL ] == 0.0 ? 1.0E-16 : X [ 276ULL ] ) >= 0.0 ) ; t0 [ 195ULL ] = (
int32_T ) ( X [ 278ULL ] * t100 / ( X [ 279ULL ] == 0.0 ? 1.0E-16 : X [
279ULL ] ) >= 0.0 ) ; t0 [ 196ULL ] = ( int32_T ) ( X [ 6ULL ] * t100 / ( X [
39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) >= 0.0 ) ; t0 [ 197ULL ] = ( int32_T
) ( X [ 111ULL ] * t69 / ( X [ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) >=
0.0 ) ; t0 [ 198ULL ] = ( int32_T ) ( X [ 289ULL ] * t103 * t35 >= 0.0 ) ; t0
[ 199ULL ] = ( int32_T ) ( X [ 291ULL ] * t98 * t35 >= 0.0 ) ; t0 [ 200ULL ]
= ( int32_T ) ( X [ 290ULL ] * X [ 290ULL ] * t103 / ( t35 == 0.0 ? 1.0E-16 :
t35 ) / ( X [ 289ULL ] == 0.0 ? 1.0E-16 : X [ 289ULL ] ) >= 0.0 ) ; t0 [
201ULL ] = ( int32_T ) ( X [ 292ULL ] * X [ 292ULL ] * t98 / ( t35 == 0.0 ?
1.0E-16 : t35 ) / ( X [ 291ULL ] == 0.0 ? 1.0E-16 : X [ 291ULL ] ) >= 0.0 ) ;
t0 [ 202ULL ] = ( int32_T ) ( X [ 289ULL ] * t35 / ( X [ 290ULL ] == 0.0 ?
1.0E-16 : X [ 290ULL ] ) >= 0.0 ) ; t0 [ 203ULL ] = ( int32_T ) ( X [ 291ULL
] * t35 / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL ] ) >= 0.0 ) ; t0 [
204ULL ] = ( int32_T ) ( X [ 9ULL ] * t35 / ( X [ 40ULL ] == 0.0 ? 1.0E-16 :
X [ 40ULL ] ) >= 0.0 ) ; t0 [ 205ULL ] = ( int32_T ) ( U_idx_7 <=
216.59999999999997 ) ; t0 [ 206ULL ] = ( int32_T ) ( U_idx_7 >= 623.15 ) ; t0
[ 207ULL ] = ( int32_T ) ( X [ 310ULL ] * t41 * t38 >= 0.0 ) ; t0 [ 208ULL ]
= ( int32_T ) ( X [ 313ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t38 >= 0.0 ) ;
t0 [ 209ULL ] = ( int32_T ) ( X [ 311ULL ] * X [ 311ULL ] * t41 / ( t38 ==
0.0 ? 1.0E-16 : t38 ) / ( X [ 310ULL ] == 0.0 ? 1.0E-16 : X [ 310ULL ] ) >=
0.0 ) ; t0 [ 210ULL ] = ( int32_T ) ( X [ 314ULL ] * X [ 314ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t38 == 0.0 ?
1.0E-16 : t38 ) / ( X [ 313ULL ] == 0.0 ? 1.0E-16 : X [ 313ULL ] ) >= 0.0 ) ;
t0 [ 211ULL ] = ( int32_T ) ( X [ 310ULL ] * t38 / ( X [ 311ULL ] == 0.0 ?
1.0E-16 : X [ 311ULL ] ) >= 0.0 ) ; t0 [ 212ULL ] = ( int32_T ) ( X [ 313ULL
] * t38 / ( X [ 314ULL ] == 0.0 ? 1.0E-16 : X [ 314ULL ] ) >= 0.0 ) ; t0 [
213ULL ] = ( int32_T ) ( X [ 41ULL ] * t38 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 :
X [ 44ULL ] ) >= 0.0 ) ; t0 [ 214ULL ] = ( int32_T ) ( t107 * 293.15 /
1.01325 >= 0.0 ) ; t0 [ 215ULL ] = ( int32_T ) ( X [ 348ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * intrm_sf_mf_1021
>= 0.0 ) ; t0 [ 216ULL ] = ( int32_T ) ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * intrm_sf_mf_1021
>= 0.0 ) ; t0 [ 217ULL ] = ( int32_T ) ( X [ 349ULL ] * X [ 349ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 348ULL ] ==
0.0 ? 1.0E-16 : X [ 348ULL ] ) >= 0.0 ) ; for ( b = 0 ; b < 218 ; b ++ ) {
out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t302 ; return 0 ; }
