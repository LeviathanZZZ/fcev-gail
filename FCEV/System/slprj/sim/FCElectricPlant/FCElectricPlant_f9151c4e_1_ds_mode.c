#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_mode.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_mode ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t295 , NeDsMethodOutput * t296 ) { PmIntVector
out ; real_T X [ 394 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; real_T U_idx_1 ;
real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_6 ; real_T
U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1021 ; real_T intrm_sf_mf_1053
; real_T intrm_sf_mf_1160 ; real_T intrm_sf_mf_1161 ; real_T intrm_sf_mf_1250
; real_T intrm_sf_mf_1252 ; real_T intrm_sf_mf_1502 ; real_T intrm_sf_mf_17 ;
real_T intrm_sf_mf_170 ; real_T intrm_sf_mf_240 ; real_T intrm_sf_mf_281 ;
real_T intrm_sf_mf_29 ; real_T intrm_sf_mf_31 ; real_T intrm_sf_mf_357 ;
real_T intrm_sf_mf_478 ; real_T intrm_sf_mf_479 ; real_T t100 ; real_T t101 ;
real_T t102 ; real_T t103 ; real_T t106 ; real_T t108 ; real_T t111 ; real_T
t113 ; real_T t115 ; real_T t15 ; real_T t18 ; real_T t21 ; real_T t27 ;
real_T t3 ; real_T t33 ; real_T t39 ; real_T t64 ; real_T t65 ; real_T t67 ;
real_T t70 ; real_T t73 ; real_T t75 ; real_T t77 ; real_T t80 ; real_T t82 ;
real_T t85 ; real_T t89 ; real_T t91 ; real_T t95 ; real_T t96 ; real_T t97 ;
real_T t98 ; int32_T t0 [ 214 ] ; int32_T b ; ( void ) LC ; U_idx_1 = t295 ->
mU . mX [ 1 ] ; U_idx_2 = t295 -> mU . mX [ 2 ] ; U_idx_3 = t295 -> mU . mX [
3 ] ; U_idx_6 = t295 -> mU . mX [ 6 ] ; U_idx_8 = t295 -> mU . mX [ 8 ] ;
U_idx_9 = t295 -> mU . mX [ 9 ] ; U_idx_10 = t295 -> mU . mX [ 10 ] ; for ( b
= 0 ; b < 394 ; b ++ ) { X [ b ] = t295 -> mX . mX [ b ] ; } out = t296 ->
mMODE ; if ( X [ 122ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 122ULL
] >= 1.0 ? 1.0 : X [ 122ULL ] ; } if ( X [ 123ULL ] <= 0.0 ) { intrm_sf_mf_29
= 0.0 ; } else { intrm_sf_mf_29 = X [ 123ULL ] >= 1.0 ? 1.0 : X [ 123ULL ] ;
} intrm_sf_mf_17 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) -
intrm_sf_mf_29 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * 461.523 ) +
intrm_sf_mf_29 * 4124.48151675695 ; if ( X [ 19ULL ] <= 0.0 ) {
intrm_sf_mf_29 = 0.0 ; } else { intrm_sf_mf_29 = X [ 19ULL ] >= 1.0 ? 1.0 : X
[ 19ULL ] ; } if ( X [ 20ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
20ULL ] >= 1.0 ? 1.0 : X [ 20ULL ] ; } intrm_sf_mf_31 = ( ( ( 1.0 -
intrm_sf_mf_29 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) *
296.802103844292 + intrm_sf_mf_29 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
4124.48151675695 ; if ( X [ 130ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI = X [ 130ULL ]
>= 623.15 ? 623.15 : X [ 130ULL ] ; } t3 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t3 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_29 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t3 * - 0.00038614513167823636 ) * intrm_sf_mf_29 ) + (
( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
6.9647057412840034 ) + t3 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; t64 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ -
intrm_sf_mf_31 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / ( t64 ==
0.0 ? 1.0E-16 : t64 ) ; if ( X [ 134ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [ 134ULL
] >= 623.15 ? 623.15 : X [ 134ULL ] ; } t64 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ; t3 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ * -
0.2214565261064495 ) + t64 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_29 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
1.2002114337048222 ) + t64 * - 0.00038614513167823636 ) * intrm_sf_mf_29 ) +
( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
6.9647057412840034 ) + t64 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; t65 = t3 -
intrm_sf_mf_31 ; intrm_sf_mf_29 = t3 / ( t65 == 0.0 ? 1.0E-16 : t65 ) ; if (
X [ 128ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
128ULL ] >= 1.0 ? 1.0 : X [ 128ULL ] ; } if ( X [ 127ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ; } t3 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
4124.48151675695 ; if ( X [ 109ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [
109ULL ] >= 1.0 ? 1.0 : X [ 109ULL ] ; } if ( X [ 108ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
108ULL ] >= 1.0 ? 1.0 : X [ 108ULL ] ; } t64 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = U_idx_2 *
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
7.8539816339744827E-5 ; if ( X [ 149ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
149ULL ] >= 1.0 ? 1.0 : X [ 149ULL ] ; } if ( X [ 150ULL ] <= 0.0 ) { t65 =
0.0 ; } else { t65 = X [ 150ULL ] >= 1.0 ? 1.0 : X [ 150ULL ] ; }
intrm_sf_mf_170 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) - t65 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ * 461.523 ) +
t65 * 4124.48151675695 ; t67 = X [ 147ULL ] * intrm_sf_mf_170 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 148ULL
] / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [ 126ULL ] ) * ( X [ 151ULL ] / ( X [
147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t70 = X [ 148ULL ] / 1.01325 *
( X [ 152ULL ] / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t75 = (
X [ 126ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t73 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ) ;
intrm_sf_mf_357 = t75 * t73 ; intrm_sf_mf_240 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * t70 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 2.0 ;
intrm_sf_mf_281 = ( X [ 126ULL ] - 1.01325 ) * ( intrm_sf_mf_240 >= t73 ?
intrm_sf_mf_240 : t73 ) ; intrm_sf_mf_240 = ( X [ 126ULL ] - 1.01325 ) / (
t75 == 0.0 ? 1.0E-16 : t75 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I =
intrm_sf_mf_240 * intrm_sf_mf_240 * 3.0 - intrm_sf_mf_240 * intrm_sf_mf_240 *
intrm_sf_mf_240 * 2.0 ; if ( X [ 126ULL ] - 1.01325 <= 0.0 ) {
intrm_sf_mf_240 = intrm_sf_mf_357 ; } else if ( X [ 126ULL ] - 1.01325 >= t75
) { intrm_sf_mf_240 = intrm_sf_mf_281 ; } else { intrm_sf_mf_240 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) *
intrm_sf_mf_357 + intrm_sf_mf_281 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ; }
intrm_sf_mf_281 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * t70 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = ( 1.01325 -
X [ 126ULL ] ) * ( intrm_sf_mf_281 >= t73 ? intrm_sf_mf_281 : t73 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.01325 -
X [ 126ULL ] ) / ( t75 == 0.0 ? 1.0E-16 : t75 ) ; t70 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ; if (
1.01325 - X [ 126ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_357 ; } else if ( 1.01325 - X [ 126ULL ] >= t75 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.0 - t70
) * intrm_sf_mf_357 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r * t70 ; } if
( X [ 126ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r =
intrm_sf_mf_240 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r = X [ 126ULL
] < 1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13
: intrm_sf_mf_357 ; } if ( X [ 147ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 147ULL
] >= 623.15 ? 623.15 : X [ 147ULL ] ; } t77 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t70 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * -
0.2214565261064495 ) + t77 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) - t65 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
1.2002114337048222 ) + t77 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
6.9647057412840034 ) + t77 * - 0.0070524868246844051 ) * t65 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = t70 -
intrm_sf_mf_170 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = t70 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) ;
if ( X [ 24ULL ] <= 0.0 ) { t65 = 0.0 ; } else { t65 = X [ 24ULL ] >= 1.0 ?
1.0 : X [ 24ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; } t70 = ( ( ( 1.0 - t65 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t65 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 27ULL ] <= 0.0 ) { t65 = 0.0 ; } else { t65 = X [
27ULL ] >= 1.0 ? 1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } t73 = ( ( ( 1.0 - t65 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) *
296.802103844292 + t65 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
4124.48151675695 ; if ( X [ 177ULL ] <= 216.59999999999997 ) { t75 =
216.59999999999997 ; } else { t75 = X [ 177ULL ] >= 623.15 ? 623.15 : X [
177ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I =
t75 * t75 ; intrm_sf_mf_357 = ( ( ( 1074.1165326382641 + t75 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
0.00037212980109014541 ) * ( ( 1.0 - t65 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + t75 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * -
0.00038614513167823636 ) * t65 ) + ( ( 12825.281119789837 + t75 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t15 =
intrm_sf_mf_357 - t73 ; t75 = intrm_sf_mf_357 / ( t15 == 0.0 ? 1.0E-16 : t15
) ; if ( X [ 182ULL ] <= 216.59999999999997 ) { intrm_sf_mf_357 =
216.59999999999997 ; } else { intrm_sf_mf_357 = X [ 182ULL ] >= 623.15 ?
623.15 : X [ 182ULL ] ; } t15 = intrm_sf_mf_357 * intrm_sf_mf_357 ;
intrm_sf_mf_240 = ( ( ( 1074.1165326382641 + intrm_sf_mf_357 * -
0.2214565261064495 ) + t15 * 0.00037212980109014541 ) * ( ( 1.0 - t65 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) + ( (
1479.6504774711011 + intrm_sf_mf_357 * 1.2002114337048222 ) + t15 * -
0.00038614513167823636 ) * t65 ) + ( ( 12825.281119789837 + intrm_sf_mf_357 *
6.9647057412840034 ) + t15 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; t80 =
intrm_sf_mf_240 - t73 ; t65 = intrm_sf_mf_240 / ( t80 == 0.0 ? 1.0E-16 : t80
) ; if ( X [ 176ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
176ULL ] >= 1.0 ? 1.0 : X [ 176ULL ] ; } if ( X [ 175ULL ] <= 0.0 ) {
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
: X [ 197ULL ] ; } if ( X [ 198ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 198ULL
] >= 1.0 ? 1.0 : X [ 198ULL ] ; } t77 = ( ( ( 1.0 - intrm_sf_mf_357 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) *
296.802103844292 + intrm_sf_mf_357 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
4124.48151675695 ; t82 = X [ 195ULL ] * t77 ; t15 = X [ 196ULL ] / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) * ( X [ 199ULL ] / ( X [ 195ULL ] ==
0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ; t80 = X [ 196ULL ] / ( X [ 174ULL ] == 0.0
? 1.0E-16 : X [ 174ULL ] ) * ( X [ 200ULL ] / ( X [ 195ULL ] == 0.0 ? 1.0E-16
: X [ 195ULL ] ) ) ; t89 = ( X [ 22ULL ] + X [ 174ULL ] ) / 2.0 *
0.0010000000000000009 ; t85 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ; t91 = t89
* t85 ; intrm_sf_mf_1502 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t15 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t80 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0
; intrm_sf_mf_478 = ( X [ 22ULL ] - X [ 174ULL ] ) * ( intrm_sf_mf_1502 >=
t85 ? intrm_sf_mf_1502 : t85 ) ; intrm_sf_mf_1502 = ( X [ 22ULL ] - X [
174ULL ] ) / ( t89 == 0.0 ? 1.0E-16 : t89 ) ; intrm_sf_mf_479 =
intrm_sf_mf_1502 * intrm_sf_mf_1502 * 3.0 - intrm_sf_mf_1502 *
intrm_sf_mf_1502 * intrm_sf_mf_1502 * 2.0 ; if ( X [ 22ULL ] - X [ 174ULL ]
<= 0.0 ) { intrm_sf_mf_1502 = t91 ; } else if ( X [ 22ULL ] - X [ 174ULL ] >=
t89 ) { intrm_sf_mf_1502 = intrm_sf_mf_478 ; } else { intrm_sf_mf_1502 = (
1.0 - intrm_sf_mf_479 ) * t91 + intrm_sf_mf_478 * intrm_sf_mf_479 ; }
intrm_sf_mf_478 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t80 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t15 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
174ULL ] - X [ 22ULL ] ) * ( intrm_sf_mf_478 >= t85 ? intrm_sf_mf_478 : t85 )
; t15 = ( X [ 174ULL ] - X [ 22ULL ] ) / ( t89 == 0.0 ? 1.0E-16 : t89 ) ; t80
= t15 * t15 * 3.0 - t15 * t15 * t15 * 2.0 ; if ( X [ 174ULL ] - X [ 22ULL ]
<= 0.0 ) { t15 = t91 ; } else if ( X [ 174ULL ] - X [ 22ULL ] >= t89 ) { t15
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
t15 = ( 1.0 - t80 ) * t91 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t80 ; } if
( X [ 22ULL ] > X [ 174ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_1502 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [ 22ULL ]
< X [ 174ULL ] ? t15 : t91 ; } if ( X [ 195ULL ] <= 216.59999999999997 ) {
t15 = 216.59999999999997 ; } else { t15 = X [ 195ULL ] >= 623.15 ? 623.15 : X
[ 195ULL ] ; } t18 = t15 * t15 ; t80 = ( ( ( 1074.1165326382641 + t15 * -
0.2214565261064495 ) + t18 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_357 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) + ( (
1479.6504774711011 + t15 * 1.2002114337048222 ) + t18 * -
0.00038614513167823636 ) * intrm_sf_mf_357 ) + ( ( 12825.281119789837 + t15 *
6.9647057412840034 ) + t18 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ; t21 = t80 -
t77 ; intrm_sf_mf_357 = t80 / ( t21 == 0.0 ? 1.0E-16 : t21 ) ; if ( X [
213ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 213ULL
] >= 1.0 ? 1.0 : X [ 213ULL ] ; } if ( X [ 214ULL ] <= 0.0 ) { t15 = 0.0 ; }
else { t15 = X [ 214ULL ] >= 1.0 ? 1.0 : X [ 214ULL ] ; } t80 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) - t15 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * 461.523 ) +
t15 * 259.836612622973 ; if ( X [ 226ULL ] <= 0.0 ) { t15 = 0.0 ; } else {
t15 = X [ 226ULL ] >= 1.0 ? 1.0 : X [ 226ULL ] ; } if ( X [ 225ULL ] <= 0.0 )
{ t85 = 0.0 ; } else { t85 = X [ 225ULL ] >= 1.0 ? 1.0 : X [ 225ULL ] ; } t89
= ( ( ( 1.0 - t15 ) - t85 ) * 296.802103844292 + t15 * 461.523 ) + t85 *
259.836612622973 ; if ( X [ 32ULL ] <= 0.0 ) { t15 = 0.0 ; } else { t15 = X [
32ULL ] >= 1.0 ? 1.0 : X [ 32ULL ] ; } if ( X [ 31ULL ] <= 0.0 ) { t85 = 0.0
; } else { t85 = X [ 31ULL ] >= 1.0 ? 1.0 : X [ 31ULL ] ; } t91 = ( ( ( 1.0 -
t15 ) - t85 ) * 296.802103844292 + t15 * 461.523 ) + t85 * 259.836612622973 ;
if ( X [ 218ULL ] <= 0.0 ) { t15 = 0.0 ; } else { t15 = X [ 218ULL ] >= 1.0 ?
1.0 : X [ 218ULL ] ; } if ( X [ 217ULL ] <= 0.0 ) { t85 = 0.0 ; } else { t85
= X [ 217ULL ] >= 1.0 ? 1.0 : X [ 217ULL ] ; } intrm_sf_mf_1502 = ( ( ( 1.0 -
t15 ) - t85 ) * 296.802103844292 + t15 * 461.523 ) + t85 * 259.836612622973 ;
if ( X [ 35ULL ] <= 0.0 ) { t15 = 0.0 ; } else { t15 = X [ 35ULL ] >= 1.0 ?
1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { t85 = 0.0 ; } else { t85 =
X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_478 = ( ( ( 1.0 - t15
) - t85 ) * 296.802103844292 + t15 * 461.523 ) + t85 * 4124.48151675695 ; if
( X [ 256ULL ] <= 216.59999999999997 ) { intrm_sf_mf_479 = 216.59999999999997
; } else { intrm_sf_mf_479 = X [ 256ULL ] >= 623.15 ? 623.15 : X [ 256ULL ] ;
} t21 = intrm_sf_mf_479 * intrm_sf_mf_479 ; t18 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_479 * - 0.2214565261064495 ) + t21 * 0.00037212980109014541 ) * (
( 1.0 - t15 ) - t85 ) + ( ( 1479.6504774711011 + intrm_sf_mf_479 *
1.2002114337048222 ) + t21 * - 0.00038614513167823636 ) * t15 ) + ( (
12825.281119789837 + intrm_sf_mf_479 * 6.9647057412840034 ) + t21 * -
0.0070524868246844051 ) * t85 ; t95 = t18 - intrm_sf_mf_478 ; intrm_sf_mf_479
= t18 / ( t95 == 0.0 ? 1.0E-16 : t95 ) ; if ( X [ 259ULL ] <=
216.59999999999997 ) { t18 = 216.59999999999997 ; } else { t18 = X [ 259ULL ]
>= 623.15 ? 623.15 : X [ 259ULL ] ; } t95 = t18 * t18 ; t21 = ( ( (
1074.1165326382641 + t18 * - 0.2214565261064495 ) + t95 *
0.00037212980109014541 ) * ( ( 1.0 - t15 ) - t85 ) + ( ( 1479.6504774711011 +
t18 * 1.2002114337048222 ) + t95 * - 0.00038614513167823636 ) * t15 ) + ( (
12825.281119789837 + t18 * 6.9647057412840034 ) + t95 * -
0.0070524868246844051 ) * t85 ; t96 = t21 - intrm_sf_mf_478 ; t15 = t21 / (
t96 == 0.0 ? 1.0E-16 : t96 ) ; if ( X [ 248ULL ] <= 0.0 ) { t85 = 0.0 ; }
else { t85 = X [ 248ULL ] >= 1.0 ? 1.0 : X [ 248ULL ] ; } if ( X [ 247ULL ]
<= 0.0 ) { t18 = 0.0 ; } else { t18 = X [ 247ULL ] >= 1.0 ? 1.0 : X [ 247ULL
] ; } t21 = ( ( ( 1.0 - t85 ) - t18 ) * 296.802103844292 + t85 * 461.523 ) +
t18 * 4124.48151675695 ; if ( X [ 6ULL ] <= 0.0 ) { t85 = 0.0 ; } else { t85
= X [ 6ULL ] >= 1.0 ? 1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) { t18 =
0.0 ; } else { t18 = X [ 5ULL ] >= 1.0 ? 1.0 : X [ 5ULL ] ; } t95 = ( ( ( 1.0
- t85 ) - t18 ) * 296.802103844292 + t85 * 461.523 ) + t18 * 4124.48151675695
; if ( X [ 270ULL ] <= 216.59999999999997 ) { t96 = 216.59999999999997 ; }
else { t96 = X [ 270ULL ] >= 623.15 ? 623.15 : X [ 270ULL ] ; } t27 = t96 *
t96 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = ( ( (
1074.1165326382641 + t96 * - 0.2214565261064495 ) + t27 *
0.00037212980109014541 ) * ( ( 1.0 - t85 ) - t18 ) + ( ( 1479.6504774711011 +
t96 * 1.2002114337048222 ) + t27 * - 0.00038614513167823636 ) * t85 ) + ( (
12825.281119789837 + t96 * 6.9647057412840034 ) + t27 * -
0.0070524868246844051 ) * t18 ; t97 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI - t95 ; t96 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t97 == 0.0 ?
1.0E-16 : t97 ) ; if ( X [ 273ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 273ULL ] >=
623.15 ? 623.15 : X [ 273ULL ] ; } t97 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t27 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * -
0.2214565261064495 ) + t97 * 0.00037212980109014541 ) * ( ( 1.0 - t85 ) - t18
) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
1.2002114337048222 ) + t97 * - 0.00038614513167823636 ) * t85 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI *
6.9647057412840034 ) + t97 * - 0.0070524868246844051 ) * t18 ; t98 = t27 -
t95 ; t85 = t27 / ( t98 == 0.0 ? 1.0E-16 : t98 ) ; if ( X [ 62ULL ] <= 0.0 )
{ t18 = 0.0 ; } else { t18 = X [ 62ULL ] >= 1.0 ? 1.0 : X [ 62ULL ] ; } if (
X [ 61ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 61ULL ] >=
1.0 ? 1.0 : X [ 61ULL ] ; } t27 = ( ( ( 1.0 - t18 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t18 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 9ULL ] <= 0.0 ) { t18 = 0.0 ; } else { t18 = X [ 9ULL ] >= 1.0 ?
1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 8ULL ] >=
1.0 ? 1.0 : X [ 8ULL ] ; } t97 = ( ( ( 1.0 - t18 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + t18 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 284ULL ] <= 216.59999999999997 ) { t98 = 216.59999999999997 ; }
else { t98 = X [ 284ULL ] >= 623.15 ? 623.15 : X [ 284ULL ] ; } t33 = t98 *
t98 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = ( ( (
1074.1165326382641 + t98 * - 0.2214565261064495 ) + t33 *
0.00037212980109014541 ) * ( ( 1.0 - t18 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t98 * 1.2002114337048222 ) + t33 * -
0.00038614513167823636 ) * t18 ) + ( ( 12825.281119789837 + t98 *
6.9647057412840034 ) + t33 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I - t97 ; t98 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ) ; if ( X [
286ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 286ULL ]
>= 623.15 ? 623.15 : X [ 286ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ; t33 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
0.00037212980109014541 ) * ( ( 1.0 - t18 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.00038614513167823636 ) * t18 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t100 = t33 - t97
; t18 = t33 / ( t100 == 0.0 ? 1.0E-16 : t100 ) ; if ( X [ 41ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 41ULL ] >=
1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 40ULL
] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t33 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I
* 259.836612622973 ; if ( X [ 305ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = X [ 305ULL ] >=
623.15 ? 623.15 : X [ 305ULL ] ; } t39 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; t100 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t39 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t39 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + t39 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ; t101 = t100
- t33 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = t100 / (
t101 == 0.0 ? 1.0E-16 : t101 ) ; if ( X [ 308ULL ] <= 216.59999999999997 ) {
t100 = 216.59999999999997 ; } else { t100 = X [ 308ULL ] >= 623.15 ? 623.15 :
X [ 308ULL ] ; } t101 = t100 * t100 ; t39 = ( ( ( 1074.1165326382641 + t100 *
- 0.2214565261064495 ) + t101 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) + ( (
1479.6504774711011 + t100 * 1.2002114337048222 ) + t101 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t100 * - 0.044484923911382625 ) + t101 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ; t102 = t39 -
t33 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = t39 / (
t102 == 0.0 ? 1.0E-16 : t102 ) ; if ( X [ 229ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 229ULL
] >= 1.0 ? 1.0 : X [ 229ULL ] ; } if ( X [ 228ULL ] <= 0.0 ) { t100 = 0.0 ; }
else { t100 = X [ 228ULL ] >= 1.0 ? 1.0 : X [ 228ULL ] ; } t39 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) - t100 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * 461.523 ) +
t100 * 259.836612622973 ; if ( X [ 297ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 297ULL
] >= 1.0 ? 1.0 : X [ 297ULL ] ; } if ( X [ 296ULL ] <= 0.0 ) { t100 = 0.0 ; }
else { t100 = X [ 296ULL ] >= 1.0 ? 1.0 : X [ 296ULL ] ; } t101 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) - t100 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * 461.523 ) +
t100 * 259.836612622973 ; if ( X [ 335ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 335ULL
] >= 1.0 ? 1.0 : X [ 335ULL ] ; } if ( X [ 336ULL ] <= 0.0 ) { t100 = 0.0 ; }
else { t100 = X [ 336ULL ] >= 1.0 ? 1.0 : X [ 336ULL ] ; } t102 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) - t100 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * 461.523 ) +
t100 * 259.836612622973 ; t100 = ( X [ 339ULL ] * 0.07812500122070315 +
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
623.15 ? 623.15 : X [ 343ULL ] ; } intrm_sf_mf_1053 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + intrm_sf_mf_1053 * 0.00037212980109014541 ) * ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
1.2002114337048222 ) + intrm_sf_mf_1053 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + intrm_sf_mf_1053 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ; t103 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 -
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 / ( t103 ==
0.0 ? 1.0E-16 : t103 ) ; if ( X [ 347ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 347ULL ]
>= 623.15 ? 623.15 : X [ 347ULL ] ; } t103 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ;
intrm_sf_mf_1053 = ( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.2214565261064495 ) + t103 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
1.2002114337048222 ) + t103 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * -
0.044484923911382625 ) + t103 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = intrm_sf_mf_1053
- intrm_sf_mf_1021 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = intrm_sf_mf_1053
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) ; if (
X [ 322ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = X [
322ULL ] >= 1.0 ? 1.0 : X [ 322ULL ] ; } if ( X [ 321ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = X [ 321ULL
] >= 1.0 ? 1.0 : X [ 321ULL ] ; } intrm_sf_mf_1053 = ( ( ( 1.0 -
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
] >= 1.0 ? 1.0 : X [ 340ULL ] ; } t103 = ( ( ( 1.0 -
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
; t106 = X [ 360ULL ] * intrm_sf_mf_1160 ; intrm_sf_mf_1250 = X [ 361ULL ] /
( t100 == 0.0 ? 1.0E-16 : t100 ) * ( X [ 364ULL ] / ( X [ 360ULL ] == 0.0 ?
1.0E-16 : X [ 360ULL ] ) ) ; t108 = X [ 361ULL ] / 1.01325 * ( X [ 365ULL ] /
( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ; t113 = ( t100 + 1.01325
) / 2.0 * 0.0010000000000000009 ; t111 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
intrm_sf_mf_1252 = t113 * t111 ; intrm_sf_mf_1161 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1250 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t108 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = ( t100 -
1.01325 ) * ( intrm_sf_mf_1161 >= t111 ? intrm_sf_mf_1161 : t111 ) ;
intrm_sf_mf_1161 = ( t100 - 1.01325 ) / ( t113 == 0.0 ? 1.0E-16 : t113 ) ;
U_idx_9 = intrm_sf_mf_1161 * intrm_sf_mf_1161 * 3.0 - intrm_sf_mf_1161 *
intrm_sf_mf_1161 * intrm_sf_mf_1161 * 2.0 ; if ( t100 - 1.01325 <= 0.0 ) {
intrm_sf_mf_1161 = intrm_sf_mf_1252 ; } else if ( t100 - 1.01325 >= t113 ) {
intrm_sf_mf_1161 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; } else {
intrm_sf_mf_1161 = ( 1.0 - U_idx_9 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * U_idx_9 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t108 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1250 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( 1.01325 -
t100 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI >=
t111 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI : t111 ) ;
intrm_sf_mf_1250 = ( 1.01325 - t100 ) / ( t113 == 0.0 ? 1.0E-16 : t113 ) ;
t108 = intrm_sf_mf_1250 * intrm_sf_mf_1250 * 3.0 - intrm_sf_mf_1250 *
intrm_sf_mf_1250 * intrm_sf_mf_1250 * 2.0 ; if ( 1.01325 - t100 <= 0.0 ) {
intrm_sf_mf_1250 = intrm_sf_mf_1252 ; } else if ( 1.01325 - t100 >= t113 ) {
intrm_sf_mf_1250 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; } else {
intrm_sf_mf_1250 = ( 1.0 - t108 ) * intrm_sf_mf_1252 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t108 ; } if
( t100 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
intrm_sf_mf_1161 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t100 <
1.01325 ? intrm_sf_mf_1250 : intrm_sf_mf_1252 ; } if ( X [ 360ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1250 = 216.59999999999997 ; } else {
intrm_sf_mf_1250 = X [ 360ULL ] >= 623.15 ? 623.15 : X [ 360ULL ] ; } t115 =
intrm_sf_mf_1250 * intrm_sf_mf_1250 ; t108 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_1250 * - 0.2214565261064495 ) + t115 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + intrm_sf_mf_1250 * 1.2002114337048222 ) + t115 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 ) + ( (
900.63941224838356 + intrm_sf_mf_1250 * - 0.044484923911382625 ) + t115 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; U_idx_2 = t108 -
intrm_sf_mf_1160 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 = t108 / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; if ( X [ 12ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 12ULL ] >=
1.0 ? 1.0 : X [ 12ULL ] ; } if ( X [ 11ULL ] <= 0.0 ) { intrm_sf_mf_1250 =
0.0 ; } else { intrm_sf_mf_1250 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; }
t108 = ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
) - intrm_sf_mf_1250 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 461.523 ) +
intrm_sf_mf_1250 * 259.836612622973 ; if ( X [ 367ULL ] <= 216.59999999999997
) { t111 = 216.59999999999997 ; } else { t111 = X [ 367ULL ] >= 623.15 ?
623.15 : X [ 367ULL ] ; } U_idx_2 = t111 * t111 ; t113 = ( ( (
1074.1165326382641 + t111 * - 0.2214565261064495 ) + U_idx_2 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1250 ) + ( ( 1479.6504774711011 + t111 * 1.2002114337048222 ) +
U_idx_2 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t111 * - 0.044484923911382625 ) + U_idx_2 *
0.00036936011832044979 ) * intrm_sf_mf_1250 ; U_idx_3 = t113 - t108 ; t111 =
t113 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; if ( X [ 370ULL ] <=
216.59999999999997 ) { t113 = 216.59999999999997 ; } else { t113 = X [ 370ULL
] >= 623.15 ? 623.15 : X [ 370ULL ] ; } U_idx_3 = t113 * t113 ;
intrm_sf_mf_1252 = ( ( ( 1074.1165326382641 + t113 * - 0.2214565261064495 ) +
U_idx_3 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1250 ) + ( ( 1479.6504774711011 + t113 * 1.2002114337048222 ) +
U_idx_3 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t113 * - 0.044484923911382625 ) + U_idx_3 *
0.00036936011832044979 ) * intrm_sf_mf_1250 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I =
intrm_sf_mf_1252 - t108 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = intrm_sf_mf_1252
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) ;
if ( X [ 66ULL ] <= 0.0 ) { intrm_sf_mf_1250 = 0.0 ; } else {
intrm_sf_mf_1250 = X [ 66ULL ] >= 1.0 ? 1.0 : X [ 66ULL ] ; } if ( X [ 65ULL
] <= 0.0 ) { t113 = 0.0 ; } else { t113 = X [ 65ULL ] >= 1.0 ? 1.0 : X [
65ULL ] ; } intrm_sf_mf_1252 = ( ( ( 1.0 - intrm_sf_mf_1250 ) - t113 ) *
296.802103844292 + intrm_sf_mf_1250 * 461.523 ) + t113 * 259.836612622973 ;
if ( X [ 15ULL ] <= 0.0 ) { intrm_sf_mf_1250 = 0.0 ; } else {
intrm_sf_mf_1250 = X [ 15ULL ] >= 1.0 ? 1.0 : X [ 15ULL ] ; } if ( X [ 14ULL
] <= 0.0 ) { t113 = 0.0 ; } else { t113 = X [ 14ULL ] >= 1.0 ? 1.0 : X [
14ULL ] ; } intrm_sf_mf_1161 = ( ( ( 1.0 - intrm_sf_mf_1250 ) - t113 ) *
296.802103844292 + intrm_sf_mf_1250 * 461.523 ) + t113 * 259.836612622973 ;
if ( X [ 381ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = X [ 381ULL ] >=
623.15 ? 623.15 : X [ 381ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI ; U_idx_9 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_1250 ) - t113 ) + ( (
1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * -
0.00038614513167823636 ) * intrm_sf_mf_1250 ) + ( ( 900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI * -
0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
0.00036936011832044979 ) * t113 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = U_idx_9 -
intrm_sf_mf_1161 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI = U_idx_9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) ;
if ( X [ 383ULL ] <= 216.59999999999997 ) { U_idx_9 = 216.59999999999997 ; }
else { U_idx_9 = X [ 383ULL ] >= 623.15 ? 623.15 : X [ 383ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = U_idx_9 *
U_idx_9 ; t115 = ( ( ( 1074.1165326382641 + U_idx_9 * - 0.2214565261064495 )
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_1250 ) - t113 ) + ( (
1479.6504774711011 + U_idx_9 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I * -
0.00038614513167823636 ) * intrm_sf_mf_1250 ) + ( ( 900.63941224838356 +
U_idx_9 * - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
0.00036936011832044979 ) * t113 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = t115 -
intrm_sf_mf_1161 ; intrm_sf_mf_1250 = t115 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) ;
if ( X [ 326ULL ] <= 0.0 ) { t113 = 0.0 ; } else { t113 = X [ 326ULL ] >= 1.0
? 1.0 : X [ 326ULL ] ; } if ( X [ 325ULL ] <= 0.0 ) { U_idx_9 = 0.0 ; } else
{ U_idx_9 = X [ 325ULL ] >= 1.0 ? 1.0 : X [ 325ULL ] ; } t115 = ( ( ( 1.0 -
t113 ) - U_idx_9 ) * 296.802103844292 + t113 * 461.523 ) + U_idx_9 *
259.836612622973 ; if ( U_idx_10 >= 1.0 ) { t113 = 1.0 ; } else { t113 =
U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; } if ( X [ 113ULL ] <= 0.0 ) { U_idx_9 =
0.0 ; } else { U_idx_9 = X [ 113ULL ] >= 1.0 ? 1.0 : X [ 113ULL ] ; } if ( X
[ 112ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X [ 112ULL
] >= 1.0 ? 1.0 : X [ 112ULL ] ; } U_idx_2 = ( ( ( 1.0 - U_idx_9 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) *
296.802103844292 + U_idx_9 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
4124.48151675695 ; if ( X [ 160ULL ] <= 0.0 ) { U_idx_9 = 0.0 ; } else {
U_idx_9 = X [ 160ULL ] >= 1.0 ? 1.0 : X [ 160ULL ] ; } if ( X [ 159ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X
[ 159ULL ] >= 1.0 ? 1.0 : X [ 159ULL ] ; } U_idx_3 = ( ( ( 1.0 - U_idx_9 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) *
296.802103844292 + U_idx_9 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
4124.48151675695 ; if ( X [ 204ULL ] <= 0.0 ) { U_idx_9 = 0.0 ; } else {
U_idx_9 = X [ 204ULL ] >= 1.0 ? 1.0 : X [ 204ULL ] ; } if ( X [ 203ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I = X
[ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } t0 [ 0ULL ] = ( int32_T ) (
U_idx_1 >= 0.9 ) ; t0 [ 1ULL ] = ( int32_T ) ( ( ( X [ 2ULL ] * - 1.0E-6 + X
[ 56ULL ] * - 1.0000000000000011 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] >
X [ 55ULL ] + 0.8 ) ; t0 [ 2ULL ] = ( int32_T ) ( X [ 131ULL ] * X [ 131ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI / (
intrm_sf_mf_31 == 0.0 ? 1.0E-16 : intrm_sf_mf_31 ) / ( X [ 130ULL ] == 0.0 ?
1.0E-16 : X [ 130ULL ] ) >= 0.0 ) ; t0 [ 3ULL ] = ( int32_T ) ( X [ 347ULL ]
* intrm_sf_mf_1021 / ( X [ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) >= 0.0
) ; t0 [ 4ULL ] = ( int32_T ) ( X [ 43ULL ] * intrm_sf_mf_1021 / ( X [ 44ULL
] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) >= 0.0 ) ; t0 [ 5ULL ] = ( int32_T ) ( X [
338ULL ] * t103 / ( t100 == 0.0 ? 1.0E-16 : t100 ) >= 0.0 ) ; t0 [ 6ULL ] = (
int32_T ) ( X [ 324ULL ] * t115 / 1.01325 >= 0.0 ) ; t0 [ 7ULL ] = ( int32_T
) ( X [ 361ULL ] / ( t106 == 0.0 ? 1.0E-16 : t106 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) >=
0.0 ) ; t0 [ 8ULL ] = ( int32_T ) ( X [ 361ULL ] * X [ 361ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val19 / (
intrm_sf_mf_1160 == 0.0 ? 1.0E-16 : intrm_sf_mf_1160 ) / ( X [ 360ULL ] ==
0.0 ? 1.0E-16 : X [ 360ULL ] ) >= 0.0 ) ; t0 [ 9ULL ] = ( int32_T ) ( X [
364ULL ] * intrm_sf_mf_1160 / ( t100 == 0.0 ? 1.0E-16 : t100 ) >= 0.0 ) ; t0
[ 10ULL ] = ( int32_T ) ( X [ 365ULL ] * intrm_sf_mf_1160 / 1.01325 >= 0.0 )
; t0 [ 11ULL ] = ( int32_T ) ( t106 / ( X [ 361ULL ] == 0.0 ? 1.0E-16 : X [
361ULL ] ) >= 0.0 ) ; t0 [ 12ULL ] = ( int32_T ) ( X [ 294ULL ] * t101 / ( X
[ 295ULL ] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) >= 0.0 ) ; t0 [ 13ULL ] = (
int32_T ) ( X [ 135ULL ] * X [ 135ULL ] * intrm_sf_mf_29 / ( intrm_sf_mf_31
== 0.0 ? 1.0E-16 : intrm_sf_mf_31 ) / ( X [ 134ULL ] == 0.0 ? 1.0E-16 : X [
134ULL ] ) >= 0.0 ) ; t0 [ 14ULL ] = ( int32_T ) ( X [ 63ULL ] *
intrm_sf_mf_1252 / ( X [ 64ULL ] == 0.0 ? 1.0E-16 : X [ 64ULL ] ) >= 0.0 ) ;
t0 [ 15ULL ] = ( int32_T ) ( X [ 367ULL ] * t111 * t108 >= 0.0 ) ; t0 [ 16ULL
] = ( int32_T ) ( X [ 370ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t108 >= 0.0 ) ;
t0 [ 17ULL ] = ( int32_T ) ( X [ 368ULL ] * X [ 368ULL ] * t111 / ( t108 ==
0.0 ? 1.0E-16 : t108 ) / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [ 367ULL ] ) >=
0.0 ) ; t0 [ 18ULL ] = ( int32_T ) ( X [ 371ULL ] * X [ 371ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / ( t108 == 0.0 ?
1.0E-16 : t108 ) / ( X [ 370ULL ] == 0.0 ? 1.0E-16 : X [ 370ULL ] ) >= 0.0 )
; t0 [ 19ULL ] = ( int32_T ) ( X [ 367ULL ] * t108 / ( X [ 368ULL ] == 0.0 ?
1.0E-16 : X [ 368ULL ] ) >= 0.0 ) ; t0 [ 20ULL ] = ( int32_T ) ( X [ 370ULL ]
* t108 / ( X [ 371ULL ] == 0.0 ? 1.0E-16 : X [ 371ULL ] ) >= 0.0 ) ; t0 [
21ULL ] = ( int32_T ) ( X [ 10ULL ] * t108 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 :
X [ 47ULL ] ) >= 0.0 ) ; t0 [ 22ULL ] = ( int32_T ) ( X [ 319ULL ] *
intrm_sf_mf_1053 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) >= 0.0 )
; t0 [ 23ULL ] = ( int32_T ) ( X [ 130ULL ] * intrm_sf_mf_31 / ( X [ 131ULL ]
== 0.0 ? 1.0E-16 : X [ 131ULL ] ) >= 0.0 ) ; t0 [ 24ULL ] = ( int32_T ) ( X [
381ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI *
intrm_sf_mf_1161 >= 0.0 ) ; t0 [ 25ULL ] = ( int32_T ) ( X [ 383ULL ] *
intrm_sf_mf_1250 * intrm_sf_mf_1161 >= 0.0 ) ; t0 [ 26ULL ] = ( int32_T ) ( X
[ 382ULL ] * X [ 382ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_AI / (
intrm_sf_mf_1161 == 0.0 ? 1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 381ULL ] ==
0.0 ? 1.0E-16 : X [ 381ULL ] ) >= 0.0 ) ; t0 [ 27ULL ] = ( int32_T ) ( X [
384ULL ] * X [ 384ULL ] * intrm_sf_mf_1250 / ( intrm_sf_mf_1161 == 0.0 ?
1.0E-16 : intrm_sf_mf_1161 ) / ( X [ 383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ]
) >= 0.0 ) ; t0 [ 28ULL ] = ( int32_T ) ( X [ 381ULL ] * intrm_sf_mf_1161 / (
X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) >= 0.0 ) ; t0 [ 29ULL ] = (
int32_T ) ( X [ 383ULL ] * intrm_sf_mf_1161 / ( X [ 384ULL ] == 0.0 ? 1.0E-16
: X [ 384ULL ] ) >= 0.0 ) ; t0 [ 30ULL ] = ( int32_T ) ( X [ 13ULL ] *
intrm_sf_mf_1161 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) >= 0.0 ) ;
t0 [ 31ULL ] = ( int32_T ) ( X [ 50ULL ] > X [ 393ULL ] ) ; t0 [ 32ULL ] = (
int32_T ) ( X [ 50ULL ] < - X [ 393ULL ] ) ; t0 [ 33ULL ] = ( int32_T ) ( X [
16ULL ] > 0.0 ) ; t0 [ 34ULL ] = ( int32_T ) ( X [ 134ULL ] * intrm_sf_mf_31
/ ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) >= 0.0 ) ; t0 [ 35ULL ] =
( int32_T ) ( ( 1.0 - X [ 122ULL ] ) - X [ 123ULL ] >= 0.0 ) ; t0 [ 36ULL ] =
( int32_T ) ( X [ 107ULL ] >= 0.01 ) ; t0 [ 37ULL ] = ( int32_T ) ( X [
107ULL ] <= pmf_get_inf ( ) ) ; t0 [ 38ULL ] = ( int32_T ) ( X [ 106ULL ] >=
216.59999999999997 ) ; t0 [ 39ULL ] = ( int32_T ) ( X [ 106ULL ] <= 623.15 )
; t0 [ 40ULL ] = ( int32_T ) ( X [ 126ULL ] >= 0.01 ) ; t0 [ 41ULL ] = (
int32_T ) ( X [ 126ULL ] <= pmf_get_inf ( ) ) ; t0 [ 42ULL ] = ( int32_T ) (
X [ 125ULL ] >= 216.59999999999997 ) ; t0 [ 43ULL ] = ( int32_T ) ( X [
125ULL ] <= 623.15 ) ; t0 [ 44ULL ] = ( int32_T ) ( X [ 18ULL ] >= 0.01 ) ;
t0 [ 45ULL ] = ( int32_T ) ( X [ 17ULL ] * intrm_sf_mf_31 / ( X [ 18ULL ] ==
0.0 ? 1.0E-16 : X [ 18ULL ] ) >= 0.0 ) ; t0 [ 46ULL ] = ( int32_T ) ( X [
18ULL ] <= pmf_get_inf ( ) ) ; t0 [ 47ULL ] = ( int32_T ) ( X [ 17ULL ] >=
216.59999999999997 ) ; t0 [ 48ULL ] = ( int32_T ) ( X [ 17ULL ] <= 623.15 ) ;
t0 [ 49ULL ] = ( int32_T ) ( X [ 111ULL ] >= 216.59999999999997 ) ; t0 [
50ULL ] = ( int32_T ) ( X [ 111ULL ] <= 623.15 ) ; t0 [ 51ULL ] = ( int32_T )
( X [ 22ULL ] >= 0.01 ) ; t0 [ 52ULL ] = ( int32_T ) ( X [ 22ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 53ULL ] = ( int32_T ) ( X [ 21ULL ] >=
216.59999999999997 ) ; t0 [ 54ULL ] = ( int32_T ) ( X [ 21ULL ] <= 623.15 ) ;
t0 [ 55ULL ] = ( int32_T ) ( X [ 174ULL ] >= 0.01 ) ; t0 [ 56ULL ] = (
int32_T ) ( X [ 125ULL ] * t3 / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [ 126ULL
] ) >= 0.0 ) ; t0 [ 57ULL ] = ( int32_T ) ( X [ 174ULL ] <= pmf_get_inf ( ) )
; t0 [ 58ULL ] = ( int32_T ) ( X [ 173ULL ] >= 216.59999999999997 ) ; t0 [
59ULL ] = ( int32_T ) ( X [ 173ULL ] <= 623.15 ) ; t0 [ 60ULL ] = ( int32_T )
( X [ 155ULL ] >= 0.01 ) ; t0 [ 61ULL ] = ( int32_T ) ( X [ 155ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 62ULL ] = ( int32_T ) ( X [ 154ULL ] >=
216.59999999999997 ) ; t0 [ 63ULL ] = ( int32_T ) ( X [ 154ULL ] <= 623.15 )
; t0 [ 64ULL ] = ( int32_T ) ( X [ 26ULL ] >= 0.01 ) ; t0 [ 65ULL ] = (
int32_T ) ( X [ 26ULL ] <= pmf_get_inf ( ) ) ; t0 [ 66ULL ] = ( int32_T ) ( X
[ 25ULL ] >= 216.59999999999997 ) ; t0 [ 67ULL ] = ( int32_T ) ( X [ 111ULL ]
* U_idx_2 / 1.01325 >= 0.0 ) ; t0 [ 68ULL ] = ( int32_T ) ( X [ 25ULL ] <=
623.15 ) ; t0 [ 69ULL ] = ( int32_T ) ( X [ 158ULL ] >= 216.59999999999997 )
; t0 [ 70ULL ] = ( int32_T ) ( X [ 158ULL ] <= 623.15 ) ; t0 [ 71ULL ] = (
int32_T ) ( ( 1.0 - X [ 213ULL ] ) - X [ 214ULL ] >= 0.0 ) ; t0 [ 72ULL ] = (
int32_T ) ( X [ 202ULL ] >= 216.59999999999997 ) ; t0 [ 73ULL ] = ( int32_T )
( X [ 202ULL ] <= 623.15 ) ; t0 [ 74ULL ] = ( int32_T ) ( X [ 29ULL ] >= 0.01
) ; t0 [ 75ULL ] = ( int32_T ) ( X [ 29ULL ] <= pmf_get_inf ( ) ) ; t0 [
76ULL ] = ( int32_T ) ( X [ 216ULL ] >= 216.59999999999997 ) ; t0 [ 77ULL ] =
( int32_T ) ( X [ 216ULL ] <= 623.15 ) ; t0 [ 78ULL ] = ( int32_T ) ( X [
148ULL ] / ( t67 == 0.0 ? 1.0E-16 : t67 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_area_r )
>= 0.0 ) ; t0 [ 79ULL ] = ( int32_T ) ( X [ 30ULL ] >= 216.59999999999997 ) ;
t0 [ 80ULL ] = ( int32_T ) ( X [ 30ULL ] <= 623.15 ) ; t0 [ 81ULL ] = (
int32_T ) ( X [ 246ULL ] >= 0.01 ) ; t0 [ 82ULL ] = ( int32_T ) ( X [ 246ULL
] <= pmf_get_inf ( ) ) ; t0 [ 83ULL ] = ( int32_T ) ( X [ 245ULL ] >=
216.59999999999997 ) ; t0 [ 84ULL ] = ( int32_T ) ( X [ 245ULL ] <= 623.15 )
; t0 [ 85ULL ] = ( int32_T ) ( X [ 36ULL ] >= 0.01 ) ; t0 [ 86ULL ] = (
int32_T ) ( X [ 36ULL ] <= pmf_get_inf ( ) ) ; t0 [ 87ULL ] = ( int32_T ) ( X
[ 33ULL ] >= 216.59999999999997 ) ; t0 [ 88ULL ] = ( int32_T ) ( X [ 33ULL ]
<= 623.15 ) ; t0 [ 89ULL ] = ( int32_T ) ( X [ 148ULL ] * X [ 148ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / (
intrm_sf_mf_170 == 0.0 ? 1.0E-16 : intrm_sf_mf_170 ) / ( X [ 147ULL ] == 0.0
? 1.0E-16 : X [ 147ULL ] ) >= 0.0 ) ; t0 [ 90ULL ] = ( int32_T ) ( X [ 60ULL
] >= 0.01 ) ; t0 [ 91ULL ] = ( int32_T ) ( X [ 60ULL ] <= pmf_get_inf ( ) ) ;
t0 [ 92ULL ] = ( int32_T ) ( X [ 59ULL ] >= 216.59999999999997 ) ; t0 [ 93ULL
] = ( int32_T ) ( X [ 59ULL ] <= 623.15 ) ; t0 [ 94ULL ] = ( int32_T ) ( X [
37ULL ] >= 0.01 ) ; t0 [ 95ULL ] = ( int32_T ) ( X [ 37ULL ] <= pmf_get_inf (
) ) ; t0 [ 96ULL ] = ( int32_T ) ( X [ 4ULL ] >= 216.59999999999997 ) ; t0 [
97ULL ] = ( int32_T ) ( X [ 4ULL ] <= 623.15 ) ; t0 [ 98ULL ] = ( int32_T ) (
X [ 38ULL ] >= 0.01 ) ; t0 [ 99ULL ] = ( int32_T ) ( X [ 38ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 100ULL ] = ( int32_T ) ( X [ 151ULL ] *
intrm_sf_mf_170 / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [ 126ULL ] ) >= 0.0 ) ;
t0 [ 101ULL ] = ( int32_T ) ( X [ 7ULL ] >= 216.59999999999997 ) ; t0 [
102ULL ] = ( int32_T ) ( X [ 7ULL ] <= 623.15 ) ; t0 [ 103ULL ] = ( int32_T )
( X [ 227ULL ] >= 216.59999999999997 ) ; t0 [ 104ULL ] = ( int32_T ) ( X [
227ULL ] <= 623.15 ) ; t0 [ 105ULL ] = ( int32_T ) ( X [ 295ULL ] >= 0.01 ) ;
t0 [ 106ULL ] = ( int32_T ) ( X [ 295ULL ] <= pmf_get_inf ( ) ) ; t0 [ 107ULL
] = ( int32_T ) ( X [ 294ULL ] >= 216.59999999999997 ) ; t0 [ 108ULL ] = (
int32_T ) ( X [ 294ULL ] <= 623.15 ) ; t0 [ 109ULL ] = ( int32_T ) ( X [
42ULL ] >= 0.01 ) ; t0 [ 110ULL ] = ( int32_T ) ( X [ 42ULL ] <= pmf_get_inf
( ) ) ; t0 [ 111ULL ] = ( int32_T ) ( t113 == 1.0 ) ; t0 [ 112ULL ] = (
int32_T ) ( X [ 152ULL ] * intrm_sf_mf_170 / 1.01325 >= 0.0 ) ; t0 [ 113ULL ]
= ( int32_T ) ( X [ 39ULL ] >= 216.59999999999997 ) ; t0 [ 114ULL ] = (
int32_T ) ( X [ 39ULL ] <= 623.15 ) ; t0 [ 115ULL ] = ( int32_T ) ( ( 1.0 - X
[ 335ULL ] ) - X [ 336ULL ] >= 0.0 ) ; t0 [ 116ULL ] = ( int32_T ) ( X [
320ULL ] >= 0.01 ) ; t0 [ 117ULL ] = ( int32_T ) ( X [ 320ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 118ULL ] = ( int32_T ) ( X [ 319ULL ] >=
216.59999999999997 ) ; t0 [ 119ULL ] = ( int32_T ) ( X [ 319ULL ] <= 623.15 )
; t0 [ 120ULL ] = ( int32_T ) ( t100 >= 0.01 ) ; t0 [ 121ULL ] = ( int32_T )
( t100 <= pmf_get_inf ( ) ) ; t0 [ 122ULL ] = ( int32_T ) ( X [ 338ULL ] >=
216.59999999999997 ) ; t0 [ 123ULL ] = ( int32_T ) ( t67 / ( X [ 148ULL ] ==
0.0 ? 1.0E-16 : X [ 148ULL ] ) >= 0.0 ) ; t0 [ 124ULL ] = ( int32_T ) ( X [
338ULL ] <= 623.15 ) ; t0 [ 125ULL ] = ( int32_T ) ( X [ 44ULL ] >= 0.01 ) ;
t0 [ 126ULL ] = ( int32_T ) ( X [ 44ULL ] <= pmf_get_inf ( ) ) ; t0 [ 127ULL
] = ( int32_T ) ( X [ 43ULL ] >= 216.59999999999997 ) ; t0 [ 128ULL ] = (
int32_T ) ( X [ 43ULL ] <= 623.15 ) ; t0 [ 129ULL ] = ( int32_T ) ( X [
324ULL ] >= 216.59999999999997 ) ; t0 [ 130ULL ] = ( int32_T ) ( X [ 324ULL ]
<= 623.15 ) ; t0 [ 131ULL ] = ( int32_T ) ( X [ 64ULL ] >= 0.01 ) ; t0 [
132ULL ] = ( int32_T ) ( X [ 64ULL ] <= pmf_get_inf ( ) ) ; t0 [ 133ULL ] = (
int32_T ) ( X [ 63ULL ] >= 216.59999999999997 ) ; t0 [ 134ULL ] = ( int32_T )
( X [ 158ULL ] * U_idx_3 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) >=
0.0 ) ; t0 [ 135ULL ] = ( int32_T ) ( X [ 63ULL ] <= 623.15 ) ; t0 [ 136ULL ]
= ( int32_T ) ( X [ 47ULL ] >= 0.01 ) ; t0 [ 137ULL ] = ( int32_T ) ( X [
47ULL ] <= pmf_get_inf ( ) ) ; t0 [ 138ULL ] = ( int32_T ) ( X [ 10ULL ] >=
216.59999999999997 ) ; t0 [ 139ULL ] = ( int32_T ) ( X [ 10ULL ] <= 623.15 )
; t0 [ 140ULL ] = ( int32_T ) ( X [ 48ULL ] >= 0.01 ) ; t0 [ 141ULL ] = (
int32_T ) ( X [ 48ULL ] <= pmf_get_inf ( ) ) ; t0 [ 142ULL ] = ( int32_T ) (
X [ 13ULL ] >= 216.59999999999997 ) ; t0 [ 143ULL ] = ( int32_T ) ( X [ 13ULL
] <= 623.15 ) ; t0 [ 144ULL ] = ( int32_T ) ( X [ 53ULL ] > 0.0 ) ; t0 [
145ULL ] = ( int32_T ) ( X [ 21ULL ] * t70 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 :
X [ 22ULL ] ) >= 0.0 ) ; t0 [ 146ULL ] = ( int32_T ) ( X [ 173ULL ] *
intrm_sf_mf_240 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) >= 0.0 ) ;
t0 [ 147ULL ] = ( int32_T ) ( X [ 154ULL ] * intrm_sf_mf_281 / ( X [ 155ULL ]
== 0.0 ? 1.0E-16 : X [ 155ULL ] ) >= 0.0 ) ; t0 [ 148ULL ] = ( int32_T ) ( X
[ 177ULL ] * t75 * t73 >= 0.0 ) ; t0 [ 149ULL ] = ( int32_T ) ( X [ 182ULL ]
* t65 * t73 >= 0.0 ) ; t0 [ 150ULL ] = ( int32_T ) ( X [ 178ULL ] * X [
178ULL ] * t75 / ( t73 == 0.0 ? 1.0E-16 : t73 ) / ( X [ 177ULL ] == 0.0 ?
1.0E-16 : X [ 177ULL ] ) >= 0.0 ) ; t0 [ 151ULL ] = ( int32_T ) ( X [ 183ULL
] * X [ 183ULL ] * t65 / ( t73 == 0.0 ? 1.0E-16 : t73 ) / ( X [ 182ULL ] ==
0.0 ? 1.0E-16 : X [ 182ULL ] ) >= 0.0 ) ; t0 [ 152ULL ] = ( int32_T ) ( X [
90ULL ] > 0.6 ) ; t0 [ 153ULL ] = ( int32_T ) ( X [ 177ULL ] * t73 / ( X [
178ULL ] == 0.0 ? 1.0E-16 : X [ 178ULL ] ) >= 0.0 ) ; t0 [ 154ULL ] = (
int32_T ) ( X [ 182ULL ] * t73 / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [ 183ULL
] ) >= 0.0 ) ; t0 [ 155ULL ] = ( int32_T ) ( X [ 25ULL ] * t73 / ( X [ 26ULL
] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) >= 0.0 ) ; t0 [ 156ULL ] = ( int32_T ) ( X
[ 196ULL ] / ( t82 == 0.0 ? 1.0E-16 : t82 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 )
>= 0.0 ) ; t0 [ 157ULL ] = ( int32_T ) ( X [ 196ULL ] * X [ 196ULL ] *
intrm_sf_mf_357 / ( t77 == 0.0 ? 1.0E-16 : t77 ) / ( X [ 195ULL ] == 0.0 ?
1.0E-16 : X [ 195ULL ] ) >= 0.0 ) ; t0 [ 158ULL ] = ( int32_T ) ( X [ 199ULL
] * t77 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) >= 0.0 ) ; t0 [
159ULL ] = ( int32_T ) ( X [ 200ULL ] * t77 / ( X [ 174ULL ] == 0.0 ? 1.0E-16
: X [ 174ULL ] ) >= 0.0 ) ; t0 [ 160ULL ] = ( int32_T ) ( t82 / ( X [ 196ULL
] == 0.0 ? 1.0E-16 : X [ 196ULL ] ) >= 0.0 ) ; t0 [ 161ULL ] = ( int32_T ) (
X [ 202ULL ] * ( ( ( ( 1.0 - U_idx_9 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I ) *
296.802103844292 + U_idx_9 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_x_a_I *
259.836612622973 ) / 1.01325 >= 0.0 ) ; t0 [ 162ULL ] = ( int32_T ) ( t80 *
293.15 / 1.01325 >= 0.0 ) ; t0 [ 163ULL ] = ( int32_T ) ( X [ 216ULL ] *
intrm_sf_mf_1502 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) >= 0.0 ) ;
t0 [ 164ULL ] = ( int32_T ) ( X [ 223ULL ] * t89 / ( X [ 29ULL ] == 0.0 ?
1.0E-16 : X [ 29ULL ] ) >= 0.0 ) ; t0 [ 165ULL ] = ( int32_T ) ( X [ 220ULL ]
* t89 / 1.01325 >= 0.0 ) ; t0 [ 166ULL ] = ( int32_T ) ( X [ 222ULL ] * t89 /
1.01325 >= 0.0 ) ; t0 [ 167ULL ] = ( int32_T ) ( X [ 221ULL ] * t89 / ( X [
29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) >= 0.0 ) ; t0 [ 168ULL ] = ( int32_T
) ( X [ 227ULL ] * t39 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) >=
0.0 ) ; t0 [ 169ULL ] = ( int32_T ) ( intrm_sf_mf_17 * 293.15 / 1.01325 >=
0.0 ) ; t0 [ 170ULL ] = ( int32_T ) ( X [ 30ULL ] * t91 / ( X [ 29ULL ] ==
0.0 ? 1.0E-16 : X [ 29ULL ] ) >= 0.0 ) ; t0 [ 171ULL ] = ( int32_T ) (
U_idx_6 <= 216.59999999999997 ) ; t0 [ 172ULL ] = ( int32_T ) ( U_idx_6 >=
623.15 ) ; t0 [ 173ULL ] = ( int32_T ) ( X [ 245ULL ] * t21 / ( X [ 246ULL ]
== 0.0 ? 1.0E-16 : X [ 246ULL ] ) >= 0.0 ) ; t0 [ 174ULL ] = ( int32_T ) ( X
[ 256ULL ] * intrm_sf_mf_479 * intrm_sf_mf_478 >= 0.0 ) ; t0 [ 175ULL ] = (
int32_T ) ( X [ 259ULL ] * t15 * intrm_sf_mf_478 >= 0.0 ) ; t0 [ 176ULL ] = (
int32_T ) ( X [ 257ULL ] * X [ 257ULL ] * intrm_sf_mf_479 / ( intrm_sf_mf_478
== 0.0 ? 1.0E-16 : intrm_sf_mf_478 ) / ( X [ 256ULL ] == 0.0 ? 1.0E-16 : X [
256ULL ] ) >= 0.0 ) ; t0 [ 177ULL ] = ( int32_T ) ( X [ 260ULL ] * X [ 260ULL
] * t15 / ( intrm_sf_mf_478 == 0.0 ? 1.0E-16 : intrm_sf_mf_478 ) / ( X [
259ULL ] == 0.0 ? 1.0E-16 : X [ 259ULL ] ) >= 0.0 ) ; t0 [ 178ULL ] = (
int32_T ) ( X [ 256ULL ] * intrm_sf_mf_478 / ( X [ 257ULL ] == 0.0 ? 1.0E-16
: X [ 257ULL ] ) >= 0.0 ) ; t0 [ 179ULL ] = ( int32_T ) ( X [ 106ULL ] * t64
/ ( X [ 107ULL ] == 0.0 ? 1.0E-16 : X [ 107ULL ] ) >= 0.0 ) ; t0 [ 180ULL ] =
( int32_T ) ( X [ 259ULL ] * intrm_sf_mf_478 / ( X [ 260ULL ] == 0.0 ?
1.0E-16 : X [ 260ULL ] ) >= 0.0 ) ; t0 [ 181ULL ] = ( int32_T ) ( X [ 33ULL ]
* intrm_sf_mf_478 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) >= 0.0 ) ;
t0 [ 182ULL ] = ( int32_T ) ( X [ 59ULL ] * t27 / ( X [ 60ULL ] == 0.0 ?
1.0E-16 : X [ 60ULL ] ) >= 0.0 ) ; t0 [ 183ULL ] = ( int32_T ) ( X [ 270ULL ]
* t96 * t95 >= 0.0 ) ; t0 [ 184ULL ] = ( int32_T ) ( X [ 273ULL ] * t85 * t95
>= 0.0 ) ; t0 [ 185ULL ] = ( int32_T ) ( X [ 271ULL ] * X [ 271ULL ] * t96 /
( t95 == 0.0 ? 1.0E-16 : t95 ) / ( X [ 270ULL ] == 0.0 ? 1.0E-16 : X [ 270ULL
] ) >= 0.0 ) ; t0 [ 186ULL ] = ( int32_T ) ( X [ 274ULL ] * X [ 274ULL ] *
t85 / ( t95 == 0.0 ? 1.0E-16 : t95 ) / ( X [ 273ULL ] == 0.0 ? 1.0E-16 : X [
273ULL ] ) >= 0.0 ) ; t0 [ 187ULL ] = ( int32_T ) ( X [ 270ULL ] * t95 / ( X
[ 271ULL ] == 0.0 ? 1.0E-16 : X [ 271ULL ] ) >= 0.0 ) ; t0 [ 188ULL ] = (
int32_T ) ( X [ 273ULL ] * t95 / ( X [ 274ULL ] == 0.0 ? 1.0E-16 : X [ 274ULL
] ) >= 0.0 ) ; t0 [ 189ULL ] = ( int32_T ) ( X [ 4ULL ] * t95 / ( X [ 37ULL ]
== 0.0 ? 1.0E-16 : X [ 37ULL ] ) >= 0.0 ) ; t0 [ 190ULL ] = ( int32_T ) ( X [
284ULL ] * t98 * t97 >= 0.0 ) ; t0 [ 191ULL ] = ( int32_T ) ( X [ 286ULL ] *
t18 * t97 >= 0.0 ) ; t0 [ 192ULL ] = ( int32_T ) ( X [ 285ULL ] * X [ 285ULL
] * t98 / ( t97 == 0.0 ? 1.0E-16 : t97 ) / ( X [ 284ULL ] == 0.0 ? 1.0E-16 :
X [ 284ULL ] ) >= 0.0 ) ; t0 [ 193ULL ] = ( int32_T ) ( X [ 287ULL ] * X [
287ULL ] * t18 / ( t97 == 0.0 ? 1.0E-16 : t97 ) / ( X [ 286ULL ] == 0.0 ?
1.0E-16 : X [ 286ULL ] ) >= 0.0 ) ; t0 [ 194ULL ] = ( int32_T ) ( X [ 284ULL
] * t97 / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [ 285ULL ] ) >= 0.0 ) ; t0 [
195ULL ] = ( int32_T ) ( X [ 286ULL ] * t97 / ( X [ 287ULL ] == 0.0 ? 1.0E-16
: X [ 287ULL ] ) >= 0.0 ) ; t0 [ 196ULL ] = ( int32_T ) ( X [ 7ULL ] * t97 /
( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) >= 0.0 ) ; t0 [ 197ULL ] = (
int32_T ) ( X [ 130ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
intrm_sf_mf_31 >= 0.0 ) ; t0 [ 198ULL ] = ( int32_T ) ( U_idx_8 <=
216.59999999999997 ) ; t0 [ 199ULL ] = ( int32_T ) ( U_idx_8 >= 623.15 ) ; t0
[ 200ULL ] = ( int32_T ) ( X [ 305ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * t33 >= 0.0 ) ;
t0 [ 201ULL ] = ( int32_T ) ( X [ 308ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t33 >= 0.0 ) ;
t0 [ 202ULL ] = ( int32_T ) ( X [ 306ULL ] * X [ 306ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI / ( t33 == 0.0 ?
1.0E-16 : t33 ) / ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) >= 0.0 ) ;
t0 [ 203ULL ] = ( int32_T ) ( X [ 309ULL ] * X [ 309ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t33 == 0.0 ?
1.0E-16 : t33 ) / ( X [ 308ULL ] == 0.0 ? 1.0E-16 : X [ 308ULL ] ) >= 0.0 ) ;
t0 [ 204ULL ] = ( int32_T ) ( X [ 305ULL ] * t33 / ( X [ 306ULL ] == 0.0 ?
1.0E-16 : X [ 306ULL ] ) >= 0.0 ) ; t0 [ 205ULL ] = ( int32_T ) ( X [ 308ULL
] * t33 / ( X [ 309ULL ] == 0.0 ? 1.0E-16 : X [ 309ULL ] ) >= 0.0 ) ; t0 [
206ULL ] = ( int32_T ) ( X [ 134ULL ] * intrm_sf_mf_29 * intrm_sf_mf_31 >=
0.0 ) ; t0 [ 207ULL ] = ( int32_T ) ( X [ 39ULL ] * t33 / ( X [ 42ULL ] ==
0.0 ? 1.0E-16 : X [ 42ULL ] ) >= 0.0 ) ; t0 [ 208ULL ] = ( int32_T ) ( t102 *
293.15 / 1.01325 >= 0.0 ) ; t0 [ 209ULL ] = ( int32_T ) ( X [ 343ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * intrm_sf_mf_1021
>= 0.0 ) ; t0 [ 210ULL ] = ( int32_T ) ( X [ 347ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * intrm_sf_mf_1021
>= 0.0 ) ; t0 [ 211ULL ] = ( int32_T ) ( X [ 344ULL ] * X [ 344ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 343ULL ] ==
0.0 ? 1.0E-16 : X [ 343ULL ] ) >= 0.0 ) ; t0 [ 212ULL ] = ( int32_T ) ( X [
348ULL ] * X [ 348ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI / (
intrm_sf_mf_1021 == 0.0 ? 1.0E-16 : intrm_sf_mf_1021 ) / ( X [ 347ULL ] ==
0.0 ? 1.0E-16 : X [ 347ULL ] ) >= 0.0 ) ; t0 [ 213ULL ] = ( int32_T ) ( X [
343ULL ] * intrm_sf_mf_1021 / ( X [ 344ULL ] == 0.0 ? 1.0E-16 : X [ 344ULL ]
) >= 0.0 ) ; for ( b = 0 ; b < 214 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } (
void ) LC ; ( void ) t296 ; return 0 ; }
