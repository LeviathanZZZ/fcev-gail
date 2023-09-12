#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_zc.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t336 , NeDsMethodOutput * t337 ) { PmRealVector out ;
real_T X [ 399 ] ; real_T t4 [ 234 ] ; real_T t5 [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_5 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_1021 ; real_T intrm_sf_mf_1160 ; real_T
intrm_sf_mf_1161 ; real_T intrm_sf_mf_1250 ; real_T intrm_sf_mf_1252 ; real_T
intrm_sf_mf_1455 ; real_T intrm_sf_mf_1502 ; real_T intrm_sf_mf_170 ; real_T
intrm_sf_mf_201 ; real_T intrm_sf_mf_221 ; real_T intrm_sf_mf_240 ; real_T
intrm_sf_mf_281 ; real_T intrm_sf_mf_357 ; real_T intrm_sf_mf_478 ; real_T
t100 ; real_T t102 ; real_T t103 ; real_T t107 ; real_T t108 ; real_T t110 ;
real_T t112 ; real_T t113 ; real_T t114 ; real_T t117 ; real_T t119 ; real_T
t127 ; real_T t128 ; real_T t133 ; real_T t155 ; real_T t263 ; real_T t279 ;
real_T t280 ; real_T t281 ; real_T t282 ; real_T t311 ; real_T t32 ; real_T
t320 ; real_T t323 ; real_T t35 ; real_T t38 ; real_T t44 ; real_T t50 ;
real_T t56 ; real_T t62 ; real_T t71 ; real_T t74 ; real_T t76 ; real_T t78 ;
real_T t84 ; real_T t88 ; real_T t91 ; real_T t93 ; real_T t96 ; size_t t6 ;
size_t t7 ; int32_T M [ 218 ] ; int32_T b ; for ( b = 0 ; b < 218 ; b ++ ) {
M [ b ] = t336 -> mM . mX [ b ] ; } U_idx_1 = t336 -> mU . mX [ 1 ] ; U_idx_2
= t336 -> mU . mX [ 2 ] ; U_idx_5 = t336 -> mU . mX [ 5 ] ; U_idx_7 = t336 ->
mU . mX [ 7 ] ; U_idx_8 = t336 -> mU . mX [ 8 ] ; U_idx_9 = t336 -> mU . mX [
9 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t336 -> mX . mX [ b ] ; }
out = t337 -> mZC ; if ( X [ 127ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 =
X [ 127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ; } if ( X [ 128ULL ] <= 0.0 ) {
t320 = 0.0 ; } else { t320 = X [ 128ULL ] >= 1.0 ? 1.0 : X [ 128ULL ] ; }
t323 = ( ( ( 1.0 - t263 ) - t320 ) * 296.802103844292 + t263 * 461.523 ) +
t320 * 4124.48151675695 ; if ( X [ 21ULL ] <= 0.0 ) { t320 = 0.0 ; } else {
t320 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } t279 = ( ( ( 1.0 - t320 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) *
296.802103844292 + t320 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
4124.48151675695 ; if ( X [ 135ULL ] <= 216.59999999999997 ) { t280 =
216.59999999999997 ; } else { t280 = X [ 135ULL ] >= 623.15 ? 623.15 : X [
135ULL ] ; } t311 = t280 * t280 ; t281 = ( ( ( 1074.1165326382641 + t280 * -
0.2214565261064495 ) + t311 * 0.00037212980109014541 ) * ( ( 1.0 - t320 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) + ( (
1479.6504774711011 + t280 * 1.2002114337048222 ) + t311 * -
0.00038614513167823636 ) * t320 ) + ( ( 12825.281119789837 + t280 *
6.9647057412840034 ) + t311 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; t282 = t281
- t279 ; t280 = t281 / ( t282 == 0.0 ? 1.0E-16 : t282 ) ; if ( X [ 139ULL ]
<= 216.59999999999997 ) { t281 = 216.59999999999997 ; } else { t281 = X [
139ULL ] >= 623.15 ? 623.15 : X [ 139ULL ] ; } t282 = t281 * t281 ; t311 = (
( ( 1074.1165326382641 + t281 * - 0.2214565261064495 ) + t282 *
0.00037212980109014541 ) * ( ( 1.0 - t320 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) + ( (
1479.6504774711011 + t281 * 1.2002114337048222 ) + t282 * -
0.00038614513167823636 ) * t320 ) + ( ( 12825.281119789837 + t281 *
6.9647057412840034 ) + t282 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; t76 = t311
- t279 ; t320 = t311 / ( t76 == 0.0 ? 1.0E-16 : t76 ) ; if ( X [ 133ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r =
X [ 133ULL ] >= 1.0 ? 1.0 : X [ 133ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) {
t281 = 0.0 ; } else { t281 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; }
t311 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) - t281 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 461.523 ) +
t281 * 4124.48151675695 ; if ( X [ 114ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
114ULL ] >= 1.0 ? 1.0 : X [ 114ULL ] ; } if ( X [ 113ULL ] <= 0.0 ) { t281 =
0.0 ; } else { t281 = X [ 113ULL ] >= 1.0 ? 1.0 : X [ 113ULL ] ; } t282 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) -
t281 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 461.523 ) +
t281 * 4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = U_idx_1 *
0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 0.0001 <=
7.8539816339744857E-13 ) { t281 = 7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 0.0001 >=
3.1415926535897929E-6 ) { t281 = 3.1415926535897929E-6 ; } else { t281 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = t281 /
7.8539816339744827E-5 ; if ( X [ 154ULL ] <= 0.0 ) { t281 = 0.0 ; } else {
t281 = X [ 154ULL ] >= 1.0 ? 1.0 : X [ 154ULL ] ; } if ( X [ 155ULL ] <= 0.0
) { t76 = 0.0 ; } else { t76 = X [ 155ULL ] >= 1.0 ? 1.0 : X [ 155ULL ] ; }
intrm_sf_mf_170 = ( ( ( 1.0 - t281 ) - t76 ) * 296.802103844292 + t281 *
461.523 ) + t76 * 4124.48151675695 ; t78 = X [ 152ULL ] * intrm_sf_mf_170 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 153ULL
] / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) * ( X [ 156ULL ] / ( X [
152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ; intrm_sf_mf_201 = X [ 153ULL ]
/ 1.01325 * ( X [ 157ULL ] / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] )
) ; intrm_sf_mf_221 = ( X [ 131ULL ] + 1.01325 ) / 2.0 *
0.0010000000000000009 ; t84 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) ;
intrm_sf_mf_357 = intrm_sf_mf_221 * t84 ; intrm_sf_mf_240 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
intrm_sf_mf_201 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 2.0 ;
intrm_sf_mf_281 = ( X [ 131ULL ] - 1.01325 ) * ( intrm_sf_mf_240 >= t84 ?
intrm_sf_mf_240 : t84 ) ; intrm_sf_mf_240 = ( X [ 131ULL ] - 1.01325 ) / (
intrm_sf_mf_221 == 0.0 ? 1.0E-16 : intrm_sf_mf_221 ) ; t263 = intrm_sf_mf_240
* intrm_sf_mf_240 * 3.0 - intrm_sf_mf_240 * intrm_sf_mf_240 * intrm_sf_mf_240
* 2.0 ; if ( X [ 131ULL ] - 1.01325 <= 0.0 ) { intrm_sf_mf_240 =
intrm_sf_mf_357 ; } else if ( X [ 131ULL ] - 1.01325 >= intrm_sf_mf_221 ) {
intrm_sf_mf_240 = intrm_sf_mf_281 ; } else { intrm_sf_mf_240 = ( 1.0 - t263 )
* intrm_sf_mf_357 + intrm_sf_mf_281 * t263 ; } intrm_sf_mf_281 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
intrm_sf_mf_201 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = ( 1.01325 -
X [ 131ULL ] ) * ( intrm_sf_mf_281 >= t84 ? intrm_sf_mf_281 : t84 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.01325 -
X [ 131ULL ] ) / ( intrm_sf_mf_221 == 0.0 ? 1.0E-16 : intrm_sf_mf_221 ) ;
intrm_sf_mf_201 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ; if (
1.01325 - X [ 131ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_357 ; } else if ( 1.01325 - X [ 131ULL ] >= intrm_sf_mf_221 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.0 -
intrm_sf_mf_201 ) * intrm_sf_mf_357 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
intrm_sf_mf_201 ; } if ( X [ 131ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r =
intrm_sf_mf_240 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [ 131ULL
] < 1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13
: intrm_sf_mf_357 ; } if ( X [ 152ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 152ULL
] >= 623.15 ? 623.15 : X [ 152ULL ] ; } t88 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
intrm_sf_mf_201 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * -
0.2214565261064495 ) + t88 * 0.00037212980109014541 ) * ( ( 1.0 - t281 ) -
t76 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
1.2002114337048222 ) + t88 * - 0.00038614513167823636 ) * t281 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
6.9647057412840034 ) + t88 * - 0.0070524868246844051 ) * t76 ; t263 =
intrm_sf_mf_201 - intrm_sf_mf_170 ; t281 = intrm_sf_mf_201 / ( t263 == 0.0 ?
1.0E-16 : t263 ) ; if ( X [ 26ULL ] <= 0.0 ) { t76 = 0.0 ; } else { t76 = X [
26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } intrm_sf_mf_201 = ( ( ( 1.0 - t76 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t76 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 29ULL ] <= 0.0 ) { t76 = 0.0 ; } else { t76 = X [
29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 30ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } t84 = ( ( ( 1.0 - t76 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t76 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 182ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_221 = 216.59999999999997 ; } else { intrm_sf_mf_221 = X [ 182ULL
] >= 623.15 ? 623.15 : X [ 182ULL ] ; } t263 = intrm_sf_mf_221 *
intrm_sf_mf_221 ; intrm_sf_mf_357 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_221 * - 0.2214565261064495 ) + t263 * 0.00037212980109014541 ) *
( ( 1.0 - t76 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + intrm_sf_mf_221 * 1.2002114337048222 ) + t263 * -
0.00038614513167823636 ) * t76 ) + ( ( 12825.281119789837 + intrm_sf_mf_221 *
6.9647057412840034 ) + t263 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = intrm_sf_mf_357
- t84 ; intrm_sf_mf_221 = intrm_sf_mf_357 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) ; if ( X [
187ULL ] <= 216.59999999999997 ) { intrm_sf_mf_357 = 216.59999999999997 ; }
else { intrm_sf_mf_357 = X [ 187ULL ] >= 623.15 ? 623.15 : X [ 187ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = intrm_sf_mf_357
* intrm_sf_mf_357 ; intrm_sf_mf_240 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_357 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
0.00037212980109014541 ) * ( ( 1.0 - t76 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + intrm_sf_mf_357 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * -
0.00038614513167823636 ) * t76 ) + ( ( 12825.281119789837 + intrm_sf_mf_357 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t91 =
intrm_sf_mf_240 - t84 ; t76 = intrm_sf_mf_240 / ( t91 == 0.0 ? 1.0E-16 : t91
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
: X [ 202ULL ] ; } if ( X [ 203ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 =
X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } t88 = ( ( ( 1.0 -
intrm_sf_mf_357 ) - t263 ) * 296.802103844292 + intrm_sf_mf_357 * 461.523 ) +
t263 * 4124.48151675695 ; t93 = X [ 200ULL ] * t88 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 201ULL ] / (
X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( X [ 204ULL ] / ( X [ 200ULL
] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t91 = X [ 201ULL ] / ( X [ 179ULL ]
== 0.0 ? 1.0E-16 : X [ 179ULL ] ) * ( X [ 205ULL ] / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ) ; t100 = ( X [ 24ULL ] + X [ 179ULL ] ) / 2.0 *
0.0010000000000000009 ; t96 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ; t102 =
t100 * t96 ; intrm_sf_mf_1502 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t91 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ;
intrm_sf_mf_478 = ( X [ 24ULL ] - X [ 179ULL ] ) * ( intrm_sf_mf_1502 >= t96
? intrm_sf_mf_1502 : t96 ) ; intrm_sf_mf_1502 = ( X [ 24ULL ] - X [ 179ULL ]
) / ( t100 == 0.0 ? 1.0E-16 : t100 ) ; t103 = intrm_sf_mf_1502 *
intrm_sf_mf_1502 * 3.0 - intrm_sf_mf_1502 * intrm_sf_mf_1502 *
intrm_sf_mf_1502 * 2.0 ; if ( X [ 24ULL ] - X [ 179ULL ] <= 0.0 ) {
intrm_sf_mf_1502 = t102 ; } else if ( X [ 24ULL ] - X [ 179ULL ] >= t100 ) {
intrm_sf_mf_1502 = intrm_sf_mf_478 ; } else { intrm_sf_mf_1502 = ( 1.0 - t103
) * t102 + intrm_sf_mf_478 * t103 ; } intrm_sf_mf_478 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t91 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
179ULL ] - X [ 24ULL ] ) * ( intrm_sf_mf_478 >= t96 ? intrm_sf_mf_478 : t96 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = ( X [ 179ULL ]
- X [ 24ULL ] ) / ( t100 == 0.0 ? 1.0E-16 : t100 ) ; t91 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 2.0 ; if ( X [
179ULL ] - X [ 24ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = t102 ; } else if
( X [ 179ULL ] - X [ 24ULL ] >= t100 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = ( 1.0 - t91 ) *
t102 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t91
; } if ( X [ 24ULL ] > X [ 179ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_1502 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 24ULL ]
< X [ 179ULL ] ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI :
t102 ; } if ( X [ 200ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 200ULL ] >=
623.15 ? 623.15 : X [ 200ULL ] ; } t155 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ; t91 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * -
0.2214565261064495 ) + t155 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_357 ) - t263 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
1.2002114337048222 ) + t155 * - 0.00038614513167823636 ) * intrm_sf_mf_357 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI *
6.9647057412840034 ) + t155 * - 0.0070524868246844051 ) * t263 ; t32 = t91 -
t88 ; intrm_sf_mf_357 = t91 / ( t32 == 0.0 ? 1.0E-16 : t32 ) ; if ( X [
218ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [ 218ULL ] >= 1.0 ? 1.0 :
X [ 218ULL ] ; } if ( X [ 219ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 219ULL ] >=
1.0 ? 1.0 : X [ 219ULL ] ; } t91 = ( ( ( 1.0 - t263 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) *
296.802103844292 + t263 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 259.836612622973
; if ( X [ 231ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 231ULL ] >=
1.0 ? 1.0 : X [ 231ULL ] ; } if ( X [ 230ULL ] <= 0.0 ) { t96 = 0.0 ; } else
{ t96 = X [ 230ULL ] >= 1.0 ? 1.0 : X [ 230ULL ] ; } t100 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t96 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t96 * 259.836612622973 ; if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 34ULL ] >=
1.0 ? 1.0 : X [ 34ULL ] ; } if ( X [ 33ULL ] <= 0.0 ) { t96 = 0.0 ; } else {
t96 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } t102 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t96 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t96 * 259.836612622973 ; if ( X [ 223ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 223ULL ] >=
1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) { t96 = 0.0 ; } else
{ t96 = X [ 222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; } intrm_sf_mf_1502 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t96 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t96 * 259.836612622973 ; if ( X [ 37ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 37ULL ] >=
1.0 ? 1.0 : X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) { t96 = 0.0 ; } else {
t96 = X [ 36ULL ] >= 1.0 ? 1.0 : X [ 36ULL ] ; } intrm_sf_mf_478 = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t96 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t96 * 4124.48151675695 ; if ( X [ 261ULL ] <=
216.59999999999997 ) { t103 = 216.59999999999997 ; } else { t103 = X [ 261ULL
] >= 623.15 ? 623.15 : X [ 261ULL ] ; } t32 = t103 * t103 ; t155 = ( ( (
1074.1165326382641 + t103 * - 0.2214565261064495 ) + t32 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t96 ) + ( (
1479.6504774711011 + t103 * 1.2002114337048222 ) + t32 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t103 * 6.9647057412840034 ) + t32 * -
0.0070524868246844051 ) * t96 ; t35 = t155 - intrm_sf_mf_478 ; t103 = t155 /
( t35 == 0.0 ? 1.0E-16 : t35 ) ; if ( X [ 264ULL ] <= 216.59999999999997 ) {
t155 = 216.59999999999997 ; } else { t155 = X [ 264ULL ] >= 623.15 ? 623.15 :
X [ 264ULL ] ; } t35 = t155 * t155 ; t32 = ( ( ( 1074.1165326382641 + t155 *
- 0.2214565261064495 ) + t35 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t96 ) + ( (
1479.6504774711011 + t155 * 1.2002114337048222 ) + t35 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t155 * 6.9647057412840034 ) + t35 * -
0.0070524868246844051 ) * t96 ; t107 = t32 - intrm_sf_mf_478 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = t32 / ( t107 ==
0.0 ? 1.0E-16 : t107 ) ; if ( X [ 253ULL ] <= 0.0 ) { t96 = 0.0 ; } else {
t96 = X [ 253ULL ] >= 1.0 ? 1.0 : X [ 253ULL ] ; } if ( X [ 252ULL ] <= 0.0 )
{ t155 = 0.0 ; } else { t155 = X [ 252ULL ] >= 1.0 ? 1.0 : X [ 252ULL ] ; }
t32 = ( ( ( 1.0 - t96 ) - t155 ) * 296.802103844292 + t96 * 461.523 ) + t155
* 4124.48151675695 ; if ( X [ 8ULL ] <= 0.0 ) { t96 = 0.0 ; } else { t96 = X
[ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t155 = 0.0
; } else { t155 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t35 = ( ( ( 1.0 -
t96 ) - t155 ) * 296.802103844292 + t96 * 461.523 ) + t155 * 4124.48151675695
; if ( X [ 275ULL ] <= 216.59999999999997 ) { t107 = 216.59999999999997 ; }
else { t107 = X [ 275ULL ] >= 623.15 ? 623.15 : X [ 275ULL ] ; } t38 = t107 *
t107 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = ( ( (
1074.1165326382641 + t107 * - 0.2214565261064495 ) + t38 *
0.00037212980109014541 ) * ( ( 1.0 - t96 ) - t155 ) + ( ( 1479.6504774711011
+ t107 * 1.2002114337048222 ) + t38 * - 0.00038614513167823636 ) * t96 ) + (
( 12825.281119789837 + t107 * 6.9647057412840034 ) + t38 * -
0.0070524868246844051 ) * t155 ; t108 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI - t35 ; t107 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t108 == 0.0 ?
1.0E-16 : t108 ) ; if ( X [ 278ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 278ULL ] >=
623.15 ? 623.15 : X [ 278ULL ] ; } t108 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t38 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * -
0.2214565261064495 ) + t108 * 0.00037212980109014541 ) * ( ( 1.0 - t96 ) -
t155 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
1.2002114337048222 ) + t108 * - 0.00038614513167823636 ) * t96 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
6.9647057412840034 ) + t108 * - 0.0070524868246844051 ) * t155 ; t133 = t38 -
t35 ; t96 = t38 / ( t133 == 0.0 ? 1.0E-16 : t133 ) ; if ( X [ 67ULL ] <= 0.0
) { t155 = 0.0 ; } else { t155 = X [ 67ULL ] >= 1.0 ? 1.0 : X [ 67ULL ] ; }
if ( X [ 66ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 66ULL ] >=
1.0 ? 1.0 : X [ 66ULL ] ; } t38 = ( ( ( 1.0 - t155 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t155 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 11ULL ] <= 0.0 ) { t155 = 0.0 ; } else { t155 = X [ 11ULL ] >= 1.0
? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 10ULL ] >=
1.0 ? 1.0 : X [ 10ULL ] ; } t108 = ( ( ( 1.0 - t155 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t155 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 289ULL ] <= 216.59999999999997 ) { t133 = 216.59999999999997 ; }
else { t133 = X [ 289ULL ] >= 623.15 ? 623.15 : X [ 289ULL ] ; } t44 = t133 *
t133 ; t263 = ( ( ( 1074.1165326382641 + t133 * - 0.2214565261064495 ) + t44
* 0.00037212980109014541 ) * ( ( 1.0 - t155 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t133 * 1.2002114337048222 ) + t44 * -
0.00038614513167823636 ) * t155 ) + ( ( 12825.281119789837 + t133 *
6.9647057412840034 ) + t44 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t110 = t263 -
t108 ; t133 = t263 / ( t110 == 0.0 ? 1.0E-16 : t110 ) ; if ( X [ 291ULL ] <=
216.59999999999997 ) { t263 = 216.59999999999997 ; } else { t263 = X [ 291ULL
] >= 623.15 ? 623.15 : X [ 291ULL ] ; } t110 = t263 * t263 ; t44 = ( ( (
1074.1165326382641 + t263 * - 0.2214565261064495 ) + t110 *
0.00037212980109014541 ) * ( ( 1.0 - t155 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t263 * 1.2002114337048222 ) + t110 * -
0.00038614513167823636 ) * t155 ) + ( ( 12825.281119789837 + t263 *
6.9647057412840034 ) + t110 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = t44 - t108 ; t155 =
t44 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ; if ( X [
43ULL ] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
= 0.0 ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI =
X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) { t263 =
0.0 ; } else { t263 = X [ 42ULL ] >= 1.0 ? 1.0 : X [ 42ULL ] ; } t44 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t263 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + t263 * 259.836612622973 ; if ( X [ 310ULL ] <=
216.59999999999997 ) { t110 = 216.59999999999997 ; } else { t110 = X [ 310ULL
] >= 623.15 ? 623.15 : X [ 310ULL ] ; } t50 = t110 * t110 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = ( ( (
1074.1165326382641 + t110 * - 0.2214565261064495 ) + t50 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t263 ) + ( (
1479.6504774711011 + t110 * 1.2002114337048222 ) + t50 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t110 * - 0.044484923911382625 ) + t50 *
0.00036936011832044979 ) * t263 ; t112 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - t44 ; t110 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p / ( t112 == 0.0 ?
1.0E-16 : t112 ) ; if ( X [ 313ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = 216.59999999999997 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = X [ 313ULL ]
>= 623.15 ? 623.15 : X [ 313ULL ] ; } t112 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ; t50 = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
- 0.2214565261064495 ) + t112 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t263 ) + ( (
1479.6504774711011 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
1.2002114337048222 ) + t112 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
- 0.044484923911382625 ) + t112 * 0.00036936011832044979 ) * t263 ; t113 =
t50 - t44 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = t50
/ ( t113 == 0.0 ? 1.0E-16 : t113 ) ; if ( X [ 234ULL ] <= 0.0 ) { t263 = 0.0
; } else { t263 = X [ 234ULL ] >= 1.0 ? 1.0 : X [ 234ULL ] ; } if ( X [
233ULL ] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p =
0.0 ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = X [
233ULL ] >= 1.0 ? 1.0 : X [ 233ULL ] ; } t50 = ( ( ( 1.0 - t263 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * 296.802103844292 +
t263 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
259.836612622973 ; if ( X [ 302ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 =
X [ 302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } if ( X [ 301ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = X [ 301ULL ] >= 1.0 ?
1.0 : X [ 301ULL ] ; } t112 = ( ( ( 1.0 - t263 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * 296.802103844292 +
t263 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
259.836612622973 ; if ( X [ 340ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 =
X [ 340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; } if ( X [ 341ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = X [ 341ULL ] >= 1.0 ?
1.0 : X [ 341ULL ] ; } t113 = ( ( ( 1.0 - t263 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * 296.802103844292 +
t263 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p *
259.836612622973 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p = (
X [ 344ULL ] * 0.07812500122070315 + U_idx_8 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 47ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X [ 47ULL ] >=
1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } intrm_sf_mf_1021 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
* 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19
* 259.836612622973 ; if ( X [ 348ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI = X [ 348ULL ] >=
623.15 ? 623.15 : X [ 348ULL ] ; } t56 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t56 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t56 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + t56 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; t114 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 -
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 / ( t114 ==
0.0 ? 1.0E-16 : t114 ) ; if ( X [ 352ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 352ULL ]
>= 623.15 ? 623.15 : X [ 352ULL ] ; } t114 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; t56 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.2214565261064495 ) + t114 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
1.2002114337048222 ) + t114 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.044484923911382625 ) + t114 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t56 -
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
= t56 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) ; if (
X [ 327ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
327ULL ] >= 1.0 ? 1.0 : X [ 327ULL ] ; } if ( X [ 326ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 326ULL
] >= 1.0 ? 1.0 : X [ 326ULL ] ; } t56 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
259.836612622973 ; if ( X [ 346ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } if ( X [ 345ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 345ULL
] >= 1.0 ? 1.0 : X [ 345ULL ] ; } t114 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
259.836612622973 ; if ( X [ 344ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 =
1.9634954084936209E-11 ; } else if ( X [ 344ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 =
0.0012566370614359179 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [ 344ULL
] * 0.0019634954084936209 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 /
0.0019634954084936209 ; if ( X [ 367ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
367ULL ] >= 1.0 ? 1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 368ULL ] >=
1.0 ? 1.0 : X [ 368ULL ] ; } intrm_sf_mf_1160 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 259.836612622973
; t117 = X [ 365ULL ] * intrm_sf_mf_1160 ; intrm_sf_mf_1250 = X [ 366ULL ] /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * ( X [ 369ULL ] / (
X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ; t119 = X [ 366ULL ] /
1.01325 * ( X [ 370ULL ] / ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) )
; intrm_sf_mf_1455 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p
+ 1.01325 ) / 2.0 * 0.0010000000000000009 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
intrm_sf_mf_1252 = intrm_sf_mf_1455 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; intrm_sf_mf_1161
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) *
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1250 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t119 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 ) * (
intrm_sf_mf_1161 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ? intrm_sf_mf_1161
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ) ;
intrm_sf_mf_1161 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p -
1.01325 ) / ( intrm_sf_mf_1455 == 0.0 ? 1.0E-16 : intrm_sf_mf_1455 ) ; t263 =
intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 - intrm_sf_mf_1161 *
intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intrm_sf_mf_1161 = intrm_sf_mf_1252 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 1.01325 >=
intrm_sf_mf_1455 ) { intrm_sf_mf_1161 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; } else {
intrm_sf_mf_1161 = ( 1.0 - t263 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * t263 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t119 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1250 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ) ;
intrm_sf_mf_1250 = ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) / ( intrm_sf_mf_1455
== 0.0 ? 1.0E-16 : intrm_sf_mf_1455 ) ; t119 = intrm_sf_mf_1250 *
intrm_sf_mf_1250 * 3.0 - intrm_sf_mf_1250 * intrm_sf_mf_1250 *
intrm_sf_mf_1250 * 2.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p <= 0.0 ) {
intrm_sf_mf_1250 = intrm_sf_mf_1252 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p >= intrm_sf_mf_1455 ) {
intrm_sf_mf_1250 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; } else {
intrm_sf_mf_1250 = ( 1.0 - t119 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t119 ; } if
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1161 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p < 1.01325 ?
intrm_sf_mf_1250 : intrm_sf_mf_1252 ; } if ( X [ 365ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1250 = 216.59999999999997 ; } else {
intrm_sf_mf_1250 = X [ 365ULL ] >= 623.15 ? 623.15 : X [ 365ULL ] ; } t62 =
intrm_sf_mf_1250 * intrm_sf_mf_1250 ; t119 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_1250 * - 0.2214565261064495 ) + t62 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + intrm_sf_mf_1250 * 1.2002114337048222 ) + t62 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
900.63941224838356 + intrm_sf_mf_1250 * - 0.044484923911382625 ) + t62 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; t127 = t119 -
intrm_sf_mf_1160 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = t119 / (
t127 == 0.0 ? 1.0E-16 : t127 ) ; if ( X [ 14ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 14ULL ] >=
1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { intrm_sf_mf_1250 =
0.0 ; } else { intrm_sf_mf_1250 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; }
t119 = ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
) - intrm_sf_mf_1250 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 461.523 ) +
intrm_sf_mf_1250 * 259.836612622973 ; if ( X [ 372ULL ] <= 216.59999999999997
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = X [ 372ULL ] >=
623.15 ? 623.15 : X [ 372ULL ] ; } t127 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; intrm_sf_mf_1455
= ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t127 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1250 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t127 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + t127 * 0.00036936011832044979 ) * intrm_sf_mf_1250 ;
t128 = intrm_sf_mf_1455 - t119 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = intrm_sf_mf_1455
/ ( t128 == 0.0 ? 1.0E-16 : t128 ) ; if ( X [ 375ULL ] <= 216.59999999999997
) { intrm_sf_mf_1455 = 216.59999999999997 ; } else { intrm_sf_mf_1455 = X [
375ULL ] >= 623.15 ? 623.15 : X [ 375ULL ] ; } t128 = intrm_sf_mf_1455 *
intrm_sf_mf_1455 ; intrm_sf_mf_1252 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_1455 * - 0.2214565261064495 ) + t128 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1250 ) + ( ( 1479.6504774711011 + intrm_sf_mf_1455 *
1.2002114337048222 ) + t128 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + intrm_sf_mf_1455 * - 0.044484923911382625 ) + t128 *
0.00036936011832044979 ) * intrm_sf_mf_1250 ; t71 = intrm_sf_mf_1252 - t119 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = intrm_sf_mf_1252
/ ( t71 == 0.0 ? 1.0E-16 : t71 ) ; if ( X [ 71ULL ] <= 0.0 ) {
intrm_sf_mf_1250 = 0.0 ; } else { intrm_sf_mf_1250 = X [ 71ULL ] >= 1.0 ? 1.0
: X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 ) { intrm_sf_mf_1455 = 0.0 ; } else
{ intrm_sf_mf_1455 = X [ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ] ; }
intrm_sf_mf_1252 = ( ( ( 1.0 - intrm_sf_mf_1250 ) - intrm_sf_mf_1455 ) *
296.802103844292 + intrm_sf_mf_1250 * 461.523 ) + intrm_sf_mf_1455 *
259.836612622973 ; if ( X [ 17ULL ] <= 0.0 ) { intrm_sf_mf_1250 = 0.0 ; }
else { intrm_sf_mf_1250 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [
16ULL ] <= 0.0 ) { intrm_sf_mf_1455 = 0.0 ; } else { intrm_sf_mf_1455 = X [
16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } intrm_sf_mf_1161 = ( ( ( 1.0 -
intrm_sf_mf_1250 ) - intrm_sf_mf_1455 ) * 296.802103844292 + intrm_sf_mf_1250
* 461.523 ) + intrm_sf_mf_1455 * 259.836612622973 ; if ( X [ 386ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = X [ 386ULL ] >=
623.15 ? 623.15 : X [ 386ULL ] ; } t71 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; t263 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.2214565261064495 ) + t71 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1250 ) - intrm_sf_mf_1455 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
1.2002114337048222 ) + t71 * - 0.00038614513167823636 ) * intrm_sf_mf_1250 )
+ ( ( 900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.044484923911382625 ) + t71 * 0.00036936011832044979 ) * intrm_sf_mf_1455 ;
t74 = t263 - intrm_sf_mf_1161 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = t263 / ( t74 ==
0.0 ? 1.0E-16 : t74 ) ; if ( X [ 388ULL ] <= 216.59999999999997 ) { t263 =
216.59999999999997 ; } else { t263 = X [ 388ULL ] >= 623.15 ? 623.15 : X [
388ULL ] ; } t74 = t263 * t263 ; t62 = ( ( ( 1074.1165326382641 + t263 * -
0.2214565261064495 ) + t74 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1250 ) - intrm_sf_mf_1455 ) + ( ( 1479.6504774711011 + t263 *
1.2002114337048222 ) + t74 * - 0.00038614513167823636 ) * intrm_sf_mf_1250 )
+ ( ( 900.63941224838356 + t263 * - 0.044484923911382625 ) + t74 *
0.00036936011832044979 ) * intrm_sf_mf_1455 ; U_idx_2 = t62 -
intrm_sf_mf_1161 ; intrm_sf_mf_1250 = t62 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ; if ( X [ 331ULL ] <= 0.0 ) { intrm_sf_mf_1455 = 0.0 ; } else {
intrm_sf_mf_1455 = X [ 331ULL ] >= 1.0 ? 1.0 : X [ 331ULL ] ; } if ( X [
330ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [ 330ULL ] >= 1.0 ? 1.0 :
X [ 330ULL ] ; } t62 = ( ( ( 1.0 - intrm_sf_mf_1455 ) - t263 ) *
296.802103844292 + intrm_sf_mf_1455 * 461.523 ) + t263 * 259.836612622973 ;
if ( U_idx_9 >= 1.0 ) { intrm_sf_mf_1455 = 1.0 ; } else { intrm_sf_mf_1455 =
U_idx_9 <= 0.0 ? 0.0 : U_idx_9 ; } if ( X [ 118ULL ] <= 0.0 ) { t263 = 0.0 ;
} else { t263 = X [ 118ULL ] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [ 117ULL
] <= 0.0 ) { U_idx_8 = 0.0 ; } else { U_idx_8 = X [ 117ULL ] >= 1.0 ? 1.0 : X
[ 117ULL ] ; } t127 = ( ( ( 1.0 - t263 ) - U_idx_8 ) * 296.802103844292 +
t263 * 461.523 ) + U_idx_8 * 4124.48151675695 ; if ( X [ 165ULL ] <= 0.0 ) {
t263 = 0.0 ; } else { t263 = X [ 165ULL ] >= 1.0 ? 1.0 : X [ 165ULL ] ; } if
( X [ 164ULL ] <= 0.0 ) { U_idx_8 = 0.0 ; } else { U_idx_8 = X [ 164ULL ] >=
1.0 ? 1.0 : X [ 164ULL ] ; } t128 = ( ( ( 1.0 - t263 ) - U_idx_8 ) *
296.802103844292 + t263 * 461.523 ) + U_idx_8 * 4124.48151675695 ; if ( X [
209ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [ 209ULL ] >= 1.0 ? 1.0 :
X [ 209ULL ] ; } if ( X [ 208ULL ] <= 0.0 ) { U_idx_8 = 0.0 ; } else {
U_idx_8 = X [ 208ULL ] >= 1.0 ? 1.0 : X [ 208ULL ] ; } t71 = ( ( ( 1.0 - t263
) - U_idx_8 ) * 296.802103844292 + t263 * 461.523 ) + U_idx_8 *
259.836612622973 ; if ( M [ 33ULL ] == 0 ) { U_idx_8 = - X [ 398ULL ] - X [
52ULL ] ; } else { U_idx_8 = 0.0 ; } if ( M [ 178ULL ] == 0 ) { t74 = U_idx_5
- 623.15 ; } else { t74 = 0.0 ; } if ( M [ 205ULL ] == 0 ) { U_idx_2 =
U_idx_7 - 623.15 ; } else { U_idx_2 = 0.0 ; } t5 [ 0ULL ] = pmf_get_inf ( ) ;
for ( t6 = 0ULL ; t6 < 12ULL ; t6 ++ ) { t7 = t6 / 12ULL ; t263 = t5 [ t7 >
0ULL ? 0ULL : t7 ] ; U_idx_1 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [
t6 ] * 1.0E-5 ; t5 [ t7 > 0ULL ? 0ULL : t7 ] = t263 > U_idx_1 ? U_idx_1 :
t263 ; } t4 [ 0ULL ] = t5 [ 0ULL ] - X [ 54ULL ] ; t4 [ 1ULL ] = 4.03416E-7 -
X [ 56ULL ] ; t4 [ 2ULL ] = X [ 56ULL ] ; t4 [ 3ULL ] = X [ 54ULL ] ; t4 [
4ULL ] = X [ 55ULL ] - 0.9 ; t4 [ 5ULL ] = ( ( ( X [ 4ULL ] * - 1.0E-6 + X [
61ULL ] * - 1.0000000000000011 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ) -
( X [ 60ULL ] + 0.8 ) ; t4 [ 6ULL ] = intrm_sf_mf_1455 - 1.0 > 1.0 -
intrm_sf_mf_1455 ? 1.0 - intrm_sf_mf_1455 : intrm_sf_mf_1455 - 1.0 ; t4 [
7ULL ] = X [ 289ULL ] * t133 * t108 ; t133 = X [ 290ULL ] * X [ 290ULL ] *
t133 / ( t108 == 0.0 ? 1.0E-16 : t108 ) ; t4 [ 8ULL ] = t133 / ( X [ 289ULL ]
== 0.0 ? 1.0E-16 : X [ 289ULL ] ) ; t4 [ 9ULL ] = X [ 291ULL ] * t155 * t108
; t155 = X [ 292ULL ] * X [ 292ULL ] * t155 / ( t108 == 0.0 ? 1.0E-16 : t108
) ; t4 [ 10ULL ] = t155 / ( X [ 291ULL ] == 0.0 ? 1.0E-16 : X [ 291ULL ] ) ;
t4 [ 11ULL ] = X [ 289ULL ] * t108 / ( X [ 290ULL ] == 0.0 ? 1.0E-16 : X [
290ULL ] ) ; t4 [ 12ULL ] = X [ 291ULL ] * t108 / ( X [ 292ULL ] == 0.0 ?
1.0E-16 : X [ 292ULL ] ) ; t4 [ 13ULL ] = X [ 65ULL ] - 0.01 ; t4 [ 14ULL ] =
pmf_get_inf ( ) - X [ 65ULL ] ; t4 [ 15ULL ] = X [ 64ULL ] -
216.59999999999997 ; t4 [ 16ULL ] = 623.15 - X [ 64ULL ] ; t4 [ 17ULL ] = X [
112ULL ] - 0.01 ; t4 [ 18ULL ] = pmf_get_inf ( ) - X [ 112ULL ] ; t4 [ 19ULL
] = X [ 111ULL ] - 216.59999999999997 ; t4 [ 20ULL ] = 623.15 - X [ 111ULL ]
; t4 [ 21ULL ] = X [ 40ULL ] - 0.01 ; t4 [ 22ULL ] = pmf_get_inf ( ) - X [
40ULL ] ; t4 [ 23ULL ] = X [ 9ULL ] - 216.59999999999997 ; t4 [ 24ULL ] =
623.15 - X [ 9ULL ] ; t4 [ 25ULL ] = X [ 9ULL ] * t108 / ( X [ 40ULL ] == 0.0
? 1.0E-16 : X [ 40ULL ] ) ; t4 [ 26ULL ] = X [ 386ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
intrm_sf_mf_1161 ; t4 [ 27ULL ] = X [ 387ULL ] * X [ 387ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI / (
intrm_sf_mf_1161 == 0.0 ? 1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 386ULL ] ==
0.0 ? 1.0E-16 : X [ 386ULL ] ) ; t4 [ 28ULL ] = X [ 388ULL ] *
intrm_sf_mf_1250 * intrm_sf_mf_1161 ; t4 [ 29ULL ] = X [ 389ULL ] * X [
389ULL ] * intrm_sf_mf_1250 / ( intrm_sf_mf_1161 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1161 ) / ( X [ 388ULL ] == 0.0 ? 1.0E-16 : X [ 388ULL ] ) ; t4 [
30ULL ] = X [ 386ULL ] * intrm_sf_mf_1161 / ( X [ 387ULL ] == 0.0 ? 1.0E-16 :
X [ 387ULL ] ) ; t4 [ 31ULL ] = X [ 388ULL ] * intrm_sf_mf_1161 / ( X [
389ULL ] == 0.0 ? 1.0E-16 : X [ 389ULL ] ) ; t4 [ 32ULL ] = X [ 69ULL ] -
0.01 ; t4 [ 33ULL ] = pmf_get_inf ( ) - X [ 69ULL ] ; t4 [ 34ULL ] = X [
68ULL ] - 216.59999999999997 ; t4 [ 35ULL ] = 623.15 - X [ 68ULL ] ; t4 [
36ULL ] = X [ 325ULL ] - 0.01 ; t4 [ 37ULL ] = pmf_get_inf ( ) - X [ 325ULL ]
; t4 [ 38ULL ] = X [ 324ULL ] - 216.59999999999997 ; t4 [ 39ULL ] = 623.15 -
X [ 324ULL ] ; t4 [ 40ULL ] = X [ 50ULL ] - 0.01 ; t4 [ 41ULL ] = pmf_get_inf
( ) - X [ 50ULL ] ; t4 [ 42ULL ] = X [ 15ULL ] - 216.59999999999997 ; t4 [
43ULL ] = 623.15 - X [ 15ULL ] ; t4 [ 44ULL ] = X [ 15ULL ] *
intrm_sf_mf_1161 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ; t4 [
45ULL ] = X [ 135ULL ] * t280 * t279 ; t280 = X [ 136ULL ] * X [ 136ULL ] *
t280 / ( t279 == 0.0 ? 1.0E-16 : t279 ) ; t4 [ 46ULL ] = t280 / ( X [ 135ULL
] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ; t4 [ 47ULL ] = X [ 139ULL ] * t320 *
t279 ; t320 = X [ 140ULL ] * X [ 140ULL ] * t320 / ( t279 == 0.0 ? 1.0E-16 :
t279 ) ; t4 [ 48ULL ] = t320 / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ]
) ; t4 [ 49ULL ] = X [ 135ULL ] * t279 / ( X [ 136ULL ] == 0.0 ? 1.0E-16 : X
[ 136ULL ] ) ; t4 [ 50ULL ] = X [ 139ULL ] * t279 / ( X [ 140ULL ] == 0.0 ?
1.0E-16 : X [ 140ULL ] ) ; t4 [ 51ULL ] = X [ 131ULL ] - 0.01 ; t4 [ 52ULL ]
= pmf_get_inf ( ) - X [ 131ULL ] ; t4 [ 53ULL ] = X [ 130ULL ] -
216.59999999999997 ; t4 [ 54ULL ] = 623.15 - X [ 130ULL ] ; t4 [ 55ULL ] = X
[ 20ULL ] - 0.01 ; t4 [ 56ULL ] = pmf_get_inf ( ) - X [ 20ULL ] ; t4 [ 57ULL
] = X [ 19ULL ] - 216.59999999999997 ; t4 [ 58ULL ] = 623.15 - X [ 19ULL ] ;
t4 [ 59ULL ] = X [ 19ULL ] * t279 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [
20ULL ] ) ; t4 [ 60ULL ] = X [ 182ULL ] * intrm_sf_mf_221 * t84 ; t4 [ 61ULL
] = X [ 183ULL ] * X [ 183ULL ] * intrm_sf_mf_221 / ( t84 == 0.0 ? 1.0E-16 :
t84 ) / ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) ; t4 [ 62ULL ] = X [
187ULL ] * t76 * t84 ; t4 [ 63ULL ] = X [ 188ULL ] * X [ 188ULL ] * t76 / (
t84 == 0.0 ? 1.0E-16 : t84 ) / ( X [ 187ULL ] == 0.0 ? 1.0E-16 : X [ 187ULL ]
) ; t4 [ 64ULL ] = X [ 182ULL ] * t84 / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [
183ULL ] ) ; t4 [ 65ULL ] = X [ 187ULL ] * t84 / ( X [ 188ULL ] == 0.0 ?
1.0E-16 : X [ 188ULL ] ) ; t4 [ 66ULL ] = X [ 179ULL ] - 0.01 ; t4 [ 67ULL ]
= pmf_get_inf ( ) - X [ 179ULL ] ; t4 [ 68ULL ] = X [ 178ULL ] -
216.59999999999997 ; t4 [ 69ULL ] = 623.15 - X [ 178ULL ] ; t4 [ 70ULL ] = X
[ 160ULL ] - 0.01 ; t4 [ 71ULL ] = pmf_get_inf ( ) - X [ 160ULL ] ; t4 [
72ULL ] = X [ 159ULL ] - 216.59999999999997 ; t4 [ 73ULL ] = 623.15 - X [
159ULL ] ; t4 [ 74ULL ] = X [ 28ULL ] - 0.01 ; t4 [ 75ULL ] = pmf_get_inf ( )
- X [ 28ULL ] ; t4 [ 76ULL ] = X [ 27ULL ] - 216.59999999999997 ; t4 [ 77ULL
] = 623.15 - X [ 27ULL ] ; t4 [ 78ULL ] = X [ 27ULL ] * t84 / ( X [ 28ULL ]
== 0.0 ? 1.0E-16 : X [ 28ULL ] ) ; t4 [ 79ULL ] = X [ 261ULL ] * t103 *
intrm_sf_mf_478 ; t4 [ 80ULL ] = X [ 262ULL ] * X [ 262ULL ] * t103 / (
intrm_sf_mf_478 == 0.0 ? 1.0E-16 : intrm_sf_mf_478 ) / ( X [ 261ULL ] == 0.0
? 1.0E-16 : X [ 261ULL ] ) ; t4 [ 81ULL ] = X [ 264ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * intrm_sf_mf_478
; t4 [ 82ULL ] = X [ 265ULL ] * X [ 265ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI / (
intrm_sf_mf_478 == 0.0 ? 1.0E-16 : intrm_sf_mf_478 ) / ( X [ 264ULL ] == 0.0
? 1.0E-16 : X [ 264ULL ] ) ; t4 [ 83ULL ] = X [ 261ULL ] * intrm_sf_mf_478 /
( X [ 262ULL ] == 0.0 ? 1.0E-16 : X [ 262ULL ] ) ; t4 [ 84ULL ] = X [ 264ULL
] * intrm_sf_mf_478 / ( X [ 265ULL ] == 0.0 ? 1.0E-16 : X [ 265ULL ] ) ; t4 [
85ULL ] = X [ 251ULL ] - 0.01 ; t4 [ 86ULL ] = pmf_get_inf ( ) - X [ 251ULL ]
; t4 [ 87ULL ] = X [ 250ULL ] - 216.59999999999997 ; t4 [ 88ULL ] = 623.15 -
X [ 250ULL ] ; t4 [ 89ULL ] = X [ 38ULL ] - 0.01 ; t4 [ 90ULL ] = pmf_get_inf
( ) - X [ 38ULL ] ; t4 [ 91ULL ] = X [ 35ULL ] - 216.59999999999997 ; t4 [
92ULL ] = 623.15 - X [ 35ULL ] ; t4 [ 93ULL ] = X [ 35ULL ] * intrm_sf_mf_478
/ ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ; t4 [ 94ULL ] = X [ 275ULL
] * t107 * t35 ; t4 [ 95ULL ] = X [ 276ULL ] * X [ 276ULL ] * t107 / ( t35 ==
0.0 ? 1.0E-16 : t35 ) / ( X [ 275ULL ] == 0.0 ? 1.0E-16 : X [ 275ULL ] ) ; t4
[ 96ULL ] = X [ 278ULL ] * t96 * t35 ; t4 [ 97ULL ] = X [ 279ULL ] * X [
279ULL ] * t96 / ( t35 == 0.0 ? 1.0E-16 : t35 ) / ( X [ 278ULL ] == 0.0 ?
1.0E-16 : X [ 278ULL ] ) ; t4 [ 98ULL ] = X [ 275ULL ] * t35 / ( X [ 276ULL ]
== 0.0 ? 1.0E-16 : X [ 276ULL ] ) ; t4 [ 99ULL ] = X [ 278ULL ] * t35 / ( X [
279ULL ] == 0.0 ? 1.0E-16 : X [ 279ULL ] ) ; t4 [ 100ULL ] = X [ 39ULL ] -
0.01 ; t4 [ 101ULL ] = pmf_get_inf ( ) - X [ 39ULL ] ; t4 [ 102ULL ] = X [
6ULL ] - 216.59999999999997 ; t4 [ 103ULL ] = 623.15 - X [ 6ULL ] ; t4 [
104ULL ] = X [ 6ULL ] * t35 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] )
; t4 [ 105ULL ] = X [ 310ULL ] * t110 * t44 ; t4 [ 106ULL ] = X [ 311ULL ] *
X [ 311ULL ] * t110 / ( t44 == 0.0 ? 1.0E-16 : t44 ) / ( X [ 310ULL ] == 0.0
? 1.0E-16 : X [ 310ULL ] ) ; t4 [ 107ULL ] = X [ 313ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t44 ; t4 [
108ULL ] = X [ 314ULL ] * X [ 314ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t44 == 0.0 ?
1.0E-16 : t44 ) / ( X [ 313ULL ] == 0.0 ? 1.0E-16 : X [ 313ULL ] ) ; t4 [
109ULL ] = X [ 310ULL ] * t44 / ( X [ 311ULL ] == 0.0 ? 1.0E-16 : X [ 311ULL
] ) ; t4 [ 110ULL ] = X [ 313ULL ] * t44 / ( X [ 314ULL ] == 0.0 ? 1.0E-16 :
X [ 314ULL ] ) ; t4 [ 111ULL ] = X [ 31ULL ] - 0.01 ; t4 [ 112ULL ] =
pmf_get_inf ( ) - X [ 31ULL ] ; t4 [ 113ULL ] = X [ 232ULL ] -
216.59999999999997 ; t4 [ 114ULL ] = 623.15 - X [ 232ULL ] ; t4 [ 115ULL ] =
X [ 300ULL ] - 0.01 ; t4 [ 116ULL ] = pmf_get_inf ( ) - X [ 300ULL ] ; t4 [
117ULL ] = X [ 299ULL ] - 216.59999999999997 ; t4 [ 118ULL ] = 623.15 - X [
299ULL ] ; t4 [ 119ULL ] = X [ 44ULL ] - 0.01 ; t4 [ 120ULL ] = pmf_get_inf (
) - X [ 44ULL ] ; t4 [ 121ULL ] = X [ 41ULL ] - 216.59999999999997 ; t4 [
122ULL ] = 623.15 - X [ 41ULL ] ; t4 [ 123ULL ] = X [ 41ULL ] * t44 / ( X [
44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ; t4 [ 124ULL ] = X [ 348ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * intrm_sf_mf_1021
; t4 [ 125ULL ] = X [ 349ULL ] * X [ 349ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 348ULL ] ==
0.0 ? 1.0E-16 : X [ 348ULL ] ) ; t4 [ 126ULL ] = X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * intrm_sf_mf_1021
; t4 [ 127ULL ] = X [ 353ULL ] * X [ 353ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 352ULL ] ==
0.0 ? 1.0E-16 : X [ 352ULL ] ) ; t4 [ 128ULL ] = X [ 348ULL ] *
intrm_sf_mf_1021 / ( X [ 349ULL ] == 0.0 ? 1.0E-16 : X [ 349ULL ] ) ; t4 [
129ULL ] = X [ 352ULL ] * intrm_sf_mf_1021 / ( X [ 353ULL ] == 0.0 ? 1.0E-16
: X [ 353ULL ] ) ; t4 [ 130ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p - 0.01 ; t4 [ 131ULL ]
= pmf_get_inf ( ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ;
t4 [ 132ULL ] = X [ 343ULL ] - 216.59999999999997 ; t4 [ 133ULL ] = 623.15 -
X [ 343ULL ] ; t4 [ 134ULL ] = X [ 46ULL ] - 0.01 ; t4 [ 135ULL ] =
pmf_get_inf ( ) - X [ 46ULL ] ; t4 [ 136ULL ] = X [ 45ULL ] -
216.59999999999997 ; t4 [ 137ULL ] = 623.15 - X [ 45ULL ] ; t4 [ 138ULL ] = X
[ 45ULL ] * intrm_sf_mf_1021 / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] )
; t4 [ 139ULL ] = X [ 372ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * t119 ; t4 [
140ULL ] = X [ 373ULL ] * X [ 373ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI / ( t119 == 0.0 ?
1.0E-16 : t119 ) / ( X [ 372ULL ] == 0.0 ? 1.0E-16 : X [ 372ULL ] ) ; t4 [
141ULL ] = X [ 375ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t119 ; t4 [
142ULL ] = X [ 376ULL ] * X [ 376ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / ( t119 == 0.0 ?
1.0E-16 : t119 ) / ( X [ 375ULL ] == 0.0 ? 1.0E-16 : X [ 375ULL ] ) ; t4 [
143ULL ] = X [ 372ULL ] * t119 / ( X [ 373ULL ] == 0.0 ? 1.0E-16 : X [ 373ULL
] ) ; t4 [ 144ULL ] = X [ 375ULL ] * t119 / ( X [ 376ULL ] == 0.0 ? 1.0E-16 :
X [ 376ULL ] ) ; t4 [ 145ULL ] = X [ 49ULL ] - 0.01 ; t4 [ 146ULL ] =
pmf_get_inf ( ) - X [ 49ULL ] ; t4 [ 147ULL ] = X [ 12ULL ] -
216.59999999999997 ; t4 [ 148ULL ] = 623.15 - X [ 12ULL ] ; t4 [ 149ULL ] = X
[ 12ULL ] * t119 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ; t4 [
150ULL ] = X [ 18ULL ] ; t4 [ 151ULL ] = ( 1.0 - X [ 127ULL ] ) - X [ 128ULL
] ; t4 [ 152ULL ] = t323 * 293.15 / 1.01325 ; t4 [ 153ULL ] = ( 1.0 - X [
218ULL ] ) - X [ 219ULL ] ; t4 [ 154ULL ] = t91 * 293.15 / 1.01325 ; t4 [
155ULL ] = ( 1.0 - X [ 340ULL ] ) - X [ 341ULL ] ; t4 [ 156ULL ] = t113 *
293.15 / 1.01325 ; t4 [ 157ULL ] = X [ 153ULL ] * X [ 153ULL ] * t281 / (
intrm_sf_mf_170 == 0.0 ? 1.0E-16 : intrm_sf_mf_170 ) / ( X [ 152ULL ] == 0.0
? 1.0E-16 : X [ 152ULL ] ) ; t4 [ 158ULL ] = X [ 153ULL ] / ( t78 == 0.0 ?
1.0E-16 : t78 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) ;
t4 [ 159ULL ] = X [ 156ULL ] * intrm_sf_mf_170 / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) ; t4 [ 160ULL ] = X [ 157ULL ] * intrm_sf_mf_170 /
1.01325 ; t4 [ 161ULL ] = t78 / ( X [ 153ULL ] == 0.0 ? 1.0E-16 : X [ 153ULL
] ) ; t4 [ 162ULL ] = X [ 116ULL ] - 216.59999999999997 ; t4 [ 163ULL ] =
623.15 - X [ 116ULL ] ; t4 [ 164ULL ] = X [ 201ULL ] * X [ 201ULL ] *
intrm_sf_mf_357 / ( t88 == 0.0 ? 1.0E-16 : t88 ) / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ; t4 [ 165ULL ] = X [ 201ULL ] / ( t93 == 0.0 ?
1.0E-16 : t93 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ;
t4 [ 166ULL ] = X [ 204ULL ] * t88 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) ; t4 [ 167ULL ] = X [ 205ULL ] * t88 / ( X [ 179ULL ] == 0.0 ?
1.0E-16 : X [ 179ULL ] ) ; t4 [ 168ULL ] = t93 / ( X [ 201ULL ] == 0.0 ?
1.0E-16 : X [ 201ULL ] ) ; t4 [ 169ULL ] = X [ 24ULL ] - 0.01 ; t4 [ 170ULL ]
= pmf_get_inf ( ) - X [ 24ULL ] ; t4 [ 171ULL ] = X [ 163ULL ] -
216.59999999999997 ; t4 [ 172ULL ] = 623.15 - X [ 163ULL ] ; t4 [ 173ULL ] =
X [ 366ULL ] * X [ 366ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 / (
intrm_sf_mf_1160 == 0.0 ? 1.0E-16 : intrm_sf_mf_1160 ) / ( X [ 365ULL ] ==
0.0 ? 1.0E-16 : X [ 365ULL ] ) ; t4 [ 174ULL ] = X [ 366ULL ] / ( t117 == 0.0
? 1.0E-16 : t117 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
t4 [ 175ULL ] = X [ 369ULL ] * intrm_sf_mf_1160 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ; t4 [ 176ULL ] = X [
370ULL ] * intrm_sf_mf_1160 / 1.01325 ; t4 [ 177ULL ] = t117 / ( X [ 366ULL ]
== 0.0 ? 1.0E-16 : X [ 366ULL ] ) ; t4 [ 178ULL ] = X [ 329ULL ] -
216.59999999999997 ; t4 [ 179ULL ] = 623.15 - X [ 329ULL ] ; t4 [ 180ULL ] =
X [ 23ULL ] - 216.59999999999997 ; t4 [ 181ULL ] = 623.15 - X [ 23ULL ] ; t4
[ 182ULL ] = X [ 23ULL ] * intrm_sf_mf_201 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 :
X [ 24ULL ] ) ; t4 [ 183ULL ] = X [ 32ULL ] - 216.59999999999997 ; t4 [
184ULL ] = 623.15 - X [ 32ULL ] ; t4 [ 185ULL ] = X [ 32ULL ] * t102 / ( X [
31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ; t4 [ 186ULL ] = X [ 207ULL ] -
216.59999999999997 ; t4 [ 187ULL ] = 623.15 - X [ 207ULL ] ; t4 [ 188ULL ] =
X [ 221ULL ] - 216.59999999999997 ; t4 [ 189ULL ] = 623.15 - X [ 221ULL ] ;
t4 [ 190ULL ] = ( real_T ) ( X [ 58ULL ] > 0.0 ) ; t4 [ 191ULL ] = X [ 52ULL
] - X [ 398ULL ] ; t4 [ 192ULL ] = U_idx_8 ; t4 [ 193ULL ] =
216.59999999999997 - U_idx_5 ; t4 [ 194ULL ] = t74 ; t4 [ 195ULL ] =
216.59999999999997 - U_idx_7 ; t4 [ 196ULL ] = U_idx_2 ; t4 [ 197ULL ] = X [
95ULL ] - 0.6 ; t263 = X [ 64ULL ] * t38 ; t4 [ 198ULL ] = t263 / ( X [ 65ULL
] == 0.0 ? 1.0E-16 : X [ 65ULL ] ) ; t320 = X [ 111ULL ] * t282 ; t4 [ 199ULL
] = t320 / ( X [ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [ 68ULL ]
* intrm_sf_mf_1252 ; t4 [ 200ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r / ( X [ 69ULL
] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ; t280 = X [ 324ULL ] * t56 ; t4 [ 201ULL
] = t280 / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ; t282 = X [
116ULL ] * t127 ; t4 [ 202ULL ] = t282 / 1.01325 ; t4 [ 203ULL ] = t320 / ( X
[ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) ; t320 = X [ 130ULL ] * t311 ;
t4 [ 204ULL ] = t320 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) ; t4
[ 205ULL ] = t320 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) ; t4 [
206ULL ] = t282 / 1.01325 ; t320 = X [ 163ULL ] * t128 ; t4 [ 207ULL ] = t320
/ ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ; t323 = X [ 178ULL ] *
intrm_sf_mf_240 ; t4 [ 208ULL ] = t323 / ( X [ 179ULL ] == 0.0 ? 1.0E-16 : X
[ 179ULL ] ) ; t311 = X [ 159ULL ] * intrm_sf_mf_281 ; t4 [ 209ULL ] = t311 /
( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ; t4 [ 210ULL ] = t320 / ( X
[ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ; t4 [ 211ULL ] = t323 / ( X [
179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) ; t320 = X [ 207ULL ] * t71 ; t4 [
212ULL ] = t320 / 1.01325 ; t4 [ 213ULL ] = t320 / 1.01325 ; t320 = X [
221ULL ] * intrm_sf_mf_1502 ; t4 [ 214ULL ] = t320 / ( X [ 31ULL ] == 0.0 ?
1.0E-16 : X [ 31ULL ] ) ; t4 [ 215ULL ] = t320 / ( X [ 31ULL ] == 0.0 ?
1.0E-16 : X [ 31ULL ] ) ; t320 = X [ 232ULL ] * t50 ; t4 [ 216ULL ] = t320 /
( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ; t4 [ 217ULL ] = t311 / ( X [
160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ; t323 = X [ 250ULL ] * t32 ; t4 [
218ULL ] = t323 / ( X [ 251ULL ] == 0.0 ? 1.0E-16 : X [ 251ULL ] ) ; t4 [
219ULL ] = t323 / ( X [ 251ULL ] == 0.0 ? 1.0E-16 : X [ 251ULL ] ) ; t4 [
220ULL ] = t263 / ( X [ 65ULL ] == 0.0 ? 1.0E-16 : X [ 65ULL ] ) ; t4 [
221ULL ] = t320 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ; t263 = X [
299ULL ] * t112 ; t4 [ 222ULL ] = t263 / ( X [ 300ULL ] == 0.0 ? 1.0E-16 : X
[ 300ULL ] ) ; t320 = X [ 329ULL ] * t62 ; t4 [ 223ULL ] = t320 / 1.01325 ;
t4 [ 224ULL ] = t280 / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ;
t323 = X [ 343ULL ] * t114 ; t4 [ 225ULL ] = t323 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ; t4 [ 226ULL ] =
t323 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_B_p ) ; t4 [
227ULL ] = t320 / 1.01325 ; t4 [ 228ULL ] = t263 / ( X [ 300ULL ] == 0.0 ?
1.0E-16 : X [ 300ULL ] ) ; t4 [ 229ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r / ( X [ 69ULL
] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ; t4 [ 230ULL ] = X [ 225ULL ] * t100 /
1.01325 ; t4 [ 231ULL ] = X [ 228ULL ] * t100 / ( X [ 31ULL ] == 0.0 ?
1.0E-16 : X [ 31ULL ] ) ; t4 [ 232ULL ] = X [ 226ULL ] * t100 / ( X [ 31ULL ]
== 0.0 ? 1.0E-16 : X [ 31ULL ] ) ; t4 [ 233ULL ] = X [ 227ULL ] * t100 /
1.01325 ; for ( b = 0 ; b < 234 ; b ++ ) { out . mX [ b ] = t4 [ b ] ; } (
void ) LC ; ( void ) t337 ; return 0 ; }
