#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_zc.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t356 , NeDsMethodOutput * t357 ) { PmRealVector out ;
real_T X [ 440 ] ; real_T t4 [ 250 ] ; real_T t5 [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI ; real_T U_idx_1
; real_T U_idx_10 ; real_T U_idx_3 ; real_T U_idx_6 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_1124 ; real_T intrm_sf_mf_1266 ; real_T
intrm_sf_mf_1268 ; real_T intrm_sf_mf_1300 ; real_T intrm_sf_mf_1364 ; real_T
intrm_sf_mf_1434 ; real_T intrm_sf_mf_1436 ; real_T intrm_sf_mf_283 ; real_T
intrm_sf_mf_302 ; real_T intrm_sf_mf_456 ; real_T intrm_sf_mf_537 ; real_T
intrm_sf_mf_561 ; real_T intrm_sf_mf_563 ; real_T intrm_sf_mf_765 ; real_T
intrm_sf_mf_973 ; real_T t102 ; real_T t104 ; real_T t105 ; real_T t106 ;
real_T t108 ; real_T t109 ; real_T t110 ; real_T t111 ; real_T t112 ; real_T
t113 ; real_T t114 ; real_T t115 ; real_T t117 ; real_T t119 ; real_T t124 ;
real_T t126 ; real_T t127 ; real_T t128 ; real_T t131 ; real_T t155 ; real_T
t157 ; real_T t20 ; real_T t263 ; real_T t275 ; real_T t280 ; real_T t283 ;
real_T t287 ; real_T t322 ; real_T t323 ; real_T t332 ; real_T t335 ; real_T
t44 ; real_T t50 ; real_T t56 ; real_T t71 ; real_T t74 ; real_T t78 ; real_T
t81 ; real_T t84 ; real_T t87 ; real_T t90 ; real_T t93 ; size_t t6 ; size_t
t7 ; int32_T M [ 231 ] ; int32_T b ; for ( b = 0 ; b < 231 ; b ++ ) { M [ b ]
= t356 -> mM . mX [ b ] ; } U_idx_1 = t356 -> mU . mX [ 1 ] ; U_idx_3 = t356
-> mU . mX [ 3 ] ; U_idx_6 = t356 -> mU . mX [ 6 ] ; U_idx_8 = t356 -> mU .
mX [ 8 ] ; U_idx_9 = t356 -> mU . mX [ 9 ] ; U_idx_10 = t356 -> mU . mX [ 10
] ; for ( b = 0 ; b < 440 ; b ++ ) { X [ b ] = t356 -> mX . mX [ b ] ; } out
= t357 -> mZC ; if ( X [ 131ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [
131ULL ] >= 1.0 ? 1.0 : X [ 131ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) { t275 =
0.0 ; } else { t275 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; } t332 = ( (
( 1.0 - t263 ) - t275 ) * 296.802103844292 + t263 * 461.523 ) + t275 *
4124.48151675695 ; if ( X [ 21ULL ] <= 0.0 ) { t275 = 0.0 ; } else { t275 = X
[ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 22ULL ]
>= 1.0 ? 1.0 : X [ 22ULL ] ; } t280 = ( ( ( 1.0 - t275 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) *
296.802103844292 + t275 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
4124.48151675695 ; if ( X [ 139ULL ] <= 216.59999999999997 ) { t157 =
216.59999999999997 ; } else { t157 = X [ 139ULL ] >= 623.15 ? 623.15 : X [
139ULL ] ; } t322 = t157 * t157 ; t335 = ( ( ( 1074.1165326382541 + t157 * -
0.2214565261064077 ) + t322 * 0.00037212980109010952 ) * ( ( 1.0 - t275 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) + ( (
1479.6504774710445 + t157 * 1.200211433705052 ) + t322 * -
0.00038614513167842338 ) * t275 ) + ( ( 12825.281119790017 + t157 *
6.9647057412830984 ) + t322 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; t283 = t335 -
t280 ; t157 = t335 / ( t283 == 0.0 ? 1.0E-16 : t283 ) ; if ( X [ 143ULL ] <=
216.59999999999997 ) { t335 = 216.59999999999997 ; } else { t335 = X [ 143ULL
] >= 623.15 ? 623.15 : X [ 143ULL ] ; } t283 = t335 * t335 ; t322 = ( ( (
1074.1165326382541 + t335 * - 0.2214565261064077 ) + t283 *
0.00037212980109010952 ) * ( ( 1.0 - t275 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) + ( (
1479.6504774710445 + t335 * 1.200211433705052 ) + t283 * -
0.00038614513167842338 ) * t275 ) + ( ( 12825.281119790017 + t335 *
6.9647057412830984 ) + t283 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; t323 = t322 -
t280 ; t275 = t322 / ( t323 == 0.0 ? 1.0E-16 : t323 ) ; if ( X [ 137ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [
137ULL ] >= 1.0 ? 1.0 : X [ 137ULL ] ; } if ( X [ 136ULL ] <= 0.0 ) { t335 =
0.0 ; } else { t335 = X [ 136ULL ] >= 1.0 ? 1.0 : X [ 136ULL ] ; } t322 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) -
t335 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 461.523 ) +
t335 * 4124.48151675695 ; if ( X [ 118ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 118ULL
] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [ 117ULL ] <= 0.0 ) { t335 = 0.0 ; }
else { t335 = X [ 117ULL ] >= 1.0 ? 1.0 : X [ 117ULL ] ; } t283 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) - t335 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 461.523 ) +
t335 * 4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = U_idx_1 *
0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 <=
7.8539816339744857E-13 ) { t335 = 7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 >=
3.1415926535897929E-6 ) { t335 = 3.1415926535897929E-6 ; } else { t335 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = t335 /
7.8539816339744827E-5 ; if ( X [ 161ULL ] <= 0.0 ) { t335 = 0.0 ; } else {
t335 = X [ 161ULL ] >= 1.0 ? 1.0 : X [ 161ULL ] ; } if ( X [ 162ULL ] <= 0.0
) { t323 = 0.0 ; } else { t323 = X [ 162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; }
t287 = ( ( ( 1.0 - t335 ) - t323 ) * 296.802103844292 + t335 * 461.523 ) +
t323 * 4124.48151675695 ; t78 = X [ 159ULL ] * t287 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 160ULL
] / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) * ( X [ 163ULL ] / ( X [
159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ; t81 = X [ 160ULL ] / 1.01325 *
( X [ 164ULL ] / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ;
intrm_sf_mf_283 = ( X [ 135ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ;
t84 = ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp )
* ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ;
intrm_sf_mf_302 = intrm_sf_mf_283 * t84 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0 ) * ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t81 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = ( X [
135ULL ] - 1.01325 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI >= t84 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI : t84 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = ( X [ 135ULL ] -
1.01325 ) / ( intrm_sf_mf_283 == 0.0 ? 1.0E-16 : intrm_sf_mf_283 ) ; t87 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI * 2.0 ; if ( X [
135ULL ] - 1.01325 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = intrm_sf_mf_302
; } else if ( X [ 135ULL ] - 1.01325 >= intrm_sf_mf_283 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = ( 1.0 - t87 ) *
intrm_sf_mf_302 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * t87 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0 ) * ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t81 ) - (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = ( 1.01325 - X
[ 135ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 >= t84 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 : t84 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( 1.01325 -
X [ 135ULL ] ) / ( intrm_sf_mf_283 == 0.0 ? 1.0E-16 : intrm_sf_mf_283 ) ; t81
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ; if (
1.01325 - X [ 135ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
intrm_sf_mf_302 ; } else if ( 1.01325 - X [ 135ULL ] >= intrm_sf_mf_283 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( 1.0 - t81
) * intrm_sf_mf_302 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t81 ; } if (
X [ 135ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 135ULL ]
< 1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 :
intrm_sf_mf_302 ; } if ( X [ 159ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 159ULL
] >= 623.15 ? 623.15 : X [ 159ULL ] ; } t20 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t81 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * -
0.2214565261064077 ) + t20 * 0.00037212980109010952 ) * ( ( 1.0 - t335 ) -
t323 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
1.200211433705052 ) + t20 * - 0.00038614513167842338 ) * t335 ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
6.9647057412830984 ) + t20 * - 0.007052486824683288 ) * t323 ; t263 = t81 -
t287 ; t335 = t81 / ( t263 == 0.0 ? 1.0E-16 : t263 ) ; if ( X [ 26ULL ] <=
0.0 ) { t323 = 0.0 ; } else { t323 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ;
} if ( X [ 25ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t81 = ( ( ( 1.0 - t323 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + t323 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 203ULL ] <= 0.0 ) { t323 = 0.0 ; } else { t323 =
X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } if ( X [ 202ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } t84 = ( ( ( 1.0 - t323 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + t323 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 30ULL ] <= 0.0 ) { t323 = 0.0 ; } else { t323 = X
[ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } if ( X [ 29ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } intrm_sf_mf_283 = ( ( ( 1.0 - t323 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + t323 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 33ULL ] <= 0.0 ) { t323 = 0.0 ; } else { t323 = X
[ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_302 = ( ( ( 1.0 - t323 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + t323 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 223ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = X [ 223ULL ] >=
623.15 ? 623.15 : X [ 223ULL ] ; } t263 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI * -
0.2214565261064077 ) + t263 * 0.00037212980109010952 ) * ( ( 1.0 - t323 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
1.200211433705052 ) + t263 * - 0.00038614513167842338 ) * t323 ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
6.9647057412830984 ) + t263 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t90 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 -
intrm_sf_mf_302 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 / ( t90 ==
0.0 ? 1.0E-16 : t90 ) ; if ( X [ 227ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [ 227ULL
] >= 623.15 ? 623.15 : X [ 227ULL ] ; } t90 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ; t87 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * -
0.2214565261064077 ) + t90 * 0.00037212980109010952 ) * ( ( 1.0 - t323 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
1.200211433705052 ) + t90 * - 0.00038614513167842338 ) * t323 ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
6.9647057412830984 ) + t90 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t263 = t87
- intrm_sf_mf_302 ; t323 = t87 / ( t263 == 0.0 ? 1.0E-16 : t263 ) ; if ( X [
222ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; } if ( X [ 221ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [
221ULL ] >= 1.0 ? 1.0 : X [ 221ULL ] ; } t87 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
4124.48151675695 ; if ( X [ 168ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
168ULL ] >= 1.0 ? 1.0 : X [ 168ULL ] ; } if ( X [ 167ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [
167ULL ] >= 1.0 ? 1.0 : X [ 167ULL ] ; } t20 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( X [
220ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 /
7.8539816339744827E-5 ; if ( X [ 239ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [
239ULL ] >= 1.0 ? 1.0 : X [ 239ULL ] ; } if ( X [ 240ULL ] <= 0.0 ) { t263 =
0.0 ; } else { t263 = X [ 240ULL ] >= 1.0 ? 1.0 : X [ 240ULL ] ; } t90 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) -
t263 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * 461.523 ) +
t263 * 4124.48151675695 ; t93 = X [ 237ULL ] * t90 ; intrm_sf_mf_561 = X [
238ULL ] / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) * ( X [ 241ULL ] /
( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; intrm_sf_mf_456 = X [
238ULL ] / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) * ( X [ 242ULL ]
/ ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; t102 = ( X [ 28ULL ] +
X [ 220ULL ] ) / 2.0 * 0.0010000000000000009 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) ;
intrm_sf_mf_537 = t102 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; intrm_sf_mf_563
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + 1.0 ) *
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_561 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_456 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = ( X [ 28ULL ] -
X [ 220ULL ] ) * ( intrm_sf_mf_563 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ? intrm_sf_mf_563
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) ;
intrm_sf_mf_563 = ( X [ 28ULL ] - X [ 220ULL ] ) / ( t102 == 0.0 ? 1.0E-16 :
t102 ) ; t155 = intrm_sf_mf_563 * intrm_sf_mf_563 * 3.0 - intrm_sf_mf_563 *
intrm_sf_mf_563 * intrm_sf_mf_563 * 2.0 ; if ( X [ 28ULL ] - X [ 220ULL ] <=
0.0 ) { intrm_sf_mf_563 = intrm_sf_mf_537 ; } else if ( X [ 28ULL ] - X [
220ULL ] >= t102 ) { intrm_sf_mf_563 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; } else {
intrm_sf_mf_563 = ( 1.0 - t155 ) * intrm_sf_mf_537 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * t155 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_456 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_561 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( X [
220ULL ] - X [ 28ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) ;
intrm_sf_mf_561 = ( X [ 220ULL ] - X [ 28ULL ] ) / ( t102 == 0.0 ? 1.0E-16 :
t102 ) ; intrm_sf_mf_456 = intrm_sf_mf_561 * intrm_sf_mf_561 * 3.0 -
intrm_sf_mf_561 * intrm_sf_mf_561 * intrm_sf_mf_561 * 2.0 ; if ( X [ 220ULL ]
- X [ 28ULL ] <= 0.0 ) { intrm_sf_mf_561 = intrm_sf_mf_537 ; } else if ( X [
220ULL ] - X [ 28ULL ] >= t102 ) { intrm_sf_mf_561 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; } else {
intrm_sf_mf_561 = ( 1.0 - intrm_sf_mf_456 ) * intrm_sf_mf_537 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_456 ; } if ( X [ 28ULL ] > X [ 220ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
intrm_sf_mf_563 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 28ULL ]
< X [ 220ULL ] ? intrm_sf_mf_561 : intrm_sf_mf_537 ; } if ( X [ 237ULL ] <=
216.59999999999997 ) { intrm_sf_mf_561 = 216.59999999999997 ; } else {
intrm_sf_mf_561 = X [ 237ULL ] >= 623.15 ? 623.15 : X [ 237ULL ] ; } t104 =
intrm_sf_mf_561 * intrm_sf_mf_561 ; intrm_sf_mf_456 = ( ( (
1074.1165326382541 + intrm_sf_mf_561 * - 0.2214565261064077 ) + t104 *
0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) - t263 ) +
( ( 1479.6504774710445 + intrm_sf_mf_561 * 1.200211433705052 ) + t104 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) + ( (
12825.281119790017 + intrm_sf_mf_561 * 6.9647057412830984 ) + t104 * -
0.007052486824683288 ) * t263 ; t105 = intrm_sf_mf_456 - t90 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 =
intrm_sf_mf_456 / ( t105 == 0.0 ? 1.0E-16 : t105 ) ; if ( X [ 255ULL ] <= 0.0
) { t263 = 0.0 ; } else { t263 = X [ 255ULL ] >= 1.0 ? 1.0 : X [ 255ULL ] ; }
if ( X [ 256ULL ] <= 0.0 ) { intrm_sf_mf_561 = 0.0 ; } else { intrm_sf_mf_561
= X [ 256ULL ] >= 1.0 ? 1.0 : X [ 256ULL ] ; } intrm_sf_mf_456 = ( ( ( 1.0 -
t263 ) - intrm_sf_mf_561 ) * 296.802103844292 + t263 * 461.523 ) +
intrm_sf_mf_561 * 259.836612622973 ; if ( X [ 268ULL ] <= 0.0 ) {
intrm_sf_mf_561 = 0.0 ; } else { intrm_sf_mf_561 = X [ 268ULL ] >= 1.0 ? 1.0
: X [ 268ULL ] ; } if ( X [ 267ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 267ULL ] >=
1.0 ? 1.0 : X [ 267ULL ] ; } t102 = ( ( ( 1.0 - intrm_sf_mf_561 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + intrm_sf_mf_561 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 259.836612622973
; if ( X [ 38ULL ] <= 0.0 ) { intrm_sf_mf_561 = 0.0 ; } else {
intrm_sf_mf_561 = X [ 38ULL ] >= 1.0 ? 1.0 : X [ 38ULL ] ; } if ( X [ 37ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [
37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } intrm_sf_mf_537 = ( ( ( 1.0 -
intrm_sf_mf_561 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + intrm_sf_mf_561 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 259.836612622973
; if ( X [ 41ULL ] <= 0.0 ) { intrm_sf_mf_561 = 0.0 ; } else {
intrm_sf_mf_561 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [
40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } intrm_sf_mf_563 = ( ( ( 1.0 -
intrm_sf_mf_561 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) *
296.802103844292 + intrm_sf_mf_561 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 4124.48151675695
; if ( X [ 302ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = X [ 302ULL ] >=
623.15 ? 623.15 : X [ 302ULL ] ; } t105 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; t155 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * -
0.2214565261064077 ) + t105 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_561 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
1.200211433705052 ) + t105 * - 0.00038614513167842338 ) * intrm_sf_mf_561 ) +
( ( 12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
6.9647057412830984 ) + t105 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ; t106 = t155 -
intrm_sf_mf_563 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI
= t155 / ( t106 == 0.0 ? 1.0E-16 : t106 ) ; if ( X [ 305ULL ] <=
216.59999999999997 ) { t155 = 216.59999999999997 ; } else { t155 = X [ 305ULL
] >= 623.15 ? 623.15 : X [ 305ULL ] ; } t106 = t155 * t155 ; t104 = ( ( (
1074.1165326382541 + t155 * - 0.2214565261064077 ) + t106 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_561 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
1479.6504774710445 + t155 * 1.200211433705052 ) + t106 * -
0.00038614513167842338 ) * intrm_sf_mf_561 ) + ( ( 12825.281119790017 + t155
* 6.9647057412830984 ) + t106 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = t104 -
intrm_sf_mf_563 ; intrm_sf_mf_561 = t104 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ) ; if ( X [
171ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 171ULL ] >=
1.0 ? 1.0 : X [ 171ULL ] ; } if ( X [ 170ULL ] <= 0.0 ) { t155 = 0.0 ; } else
{ t155 = X [ 170ULL ] >= 1.0 ? 1.0 : X [ 170ULL ] ; } t104 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t155 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + t155 * 4124.48151675695 ; if ( X [ 294ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 294ULL ] >=
1.0 ? 1.0 : X [ 294ULL ] ; } if ( X [ 293ULL ] <= 0.0 ) { t155 = 0.0 ; } else
{ t155 = X [ 293ULL ] >= 1.0 ? 1.0 : X [ 293ULL ] ; } t105 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t155 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + t155 * 4124.48151675695 ; if ( X [ 8ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X [ 8ULL ] >=
1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t155 = 0.0 ; } else {
t155 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t106 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t155 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI
* 461.523 ) + t155 * 4124.48151675695 ; if ( X [ 316ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = X [ 316ULL ] >=
623.15 ? 623.15 : X [ 316ULL ] ; } intrm_sf_mf_765 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; intrm_sf_mf_973
= ( ( ( 1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.2214565261064077 ) + intrm_sf_mf_765 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t155 ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
1.200211433705052 ) + intrm_sf_mf_765 * - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
6.9647057412830984 ) + intrm_sf_mf_765 * - 0.007052486824683288 ) * t155 ;
t108 = intrm_sf_mf_973 - t106 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = intrm_sf_mf_973
/ ( t108 == 0.0 ? 1.0E-16 : t108 ) ; if ( X [ 319ULL ] <= 216.59999999999997
) { intrm_sf_mf_973 = 216.59999999999997 ; } else { intrm_sf_mf_973 = X [
319ULL ] >= 623.15 ? 623.15 : X [ 319ULL ] ; } t108 = intrm_sf_mf_973 *
intrm_sf_mf_973 ; intrm_sf_mf_765 = ( ( ( 1074.1165326382541 +
intrm_sf_mf_973 * - 0.2214565261064077 ) + t108 * 0.00037212980109010952 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) - t155
) + ( ( 1479.6504774710445 + intrm_sf_mf_973 * 1.200211433705052 ) + t108 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI ) + ( (
12825.281119790017 + intrm_sf_mf_973 * 6.9647057412830984 ) + t108 * -
0.007052486824683288 ) * t155 ; t109 = intrm_sf_mf_765 - t106 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = intrm_sf_mf_765
/ ( t109 == 0.0 ? 1.0E-16 : t109 ) ; if ( X [ 71ULL ] <= 0.0 ) { t155 = 0.0 ;
} else { t155 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ]
<= 0.0 ) { intrm_sf_mf_973 = 0.0 ; } else { intrm_sf_mf_973 = X [ 70ULL ] >=
1.0 ? 1.0 : X [ 70ULL ] ; } intrm_sf_mf_765 = ( ( ( 1.0 - t155 ) -
intrm_sf_mf_973 ) * 296.802103844292 + t155 * 461.523 ) + intrm_sf_mf_973 *
4124.48151675695 ; if ( X [ 11ULL ] <= 0.0 ) { t155 = 0.0 ; } else { t155 = X
[ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) {
intrm_sf_mf_973 = 0.0 ; } else { intrm_sf_mf_973 = X [ 10ULL ] >= 1.0 ? 1.0 :
X [ 10ULL ] ; } t108 = ( ( ( 1.0 - t155 ) - intrm_sf_mf_973 ) *
296.802103844292 + t155 * 461.523 ) + intrm_sf_mf_973 * 4124.48151675695 ; if
( X [ 330ULL ] <= 216.59999999999997 ) { t109 = 216.59999999999997 ; } else {
t109 = X [ 330ULL ] >= 623.15 ? 623.15 : X [ 330ULL ] ; } t44 = t109 * t109 ;
t263 = ( ( ( 1074.1165326382541 + t109 * - 0.2214565261064077 ) + t44 *
0.00037212980109010952 ) * ( ( 1.0 - t155 ) - intrm_sf_mf_973 ) + ( (
1479.6504774710445 + t109 * 1.200211433705052 ) + t44 * -
0.00038614513167842338 ) * t155 ) + ( ( 12825.281119790017 + t109 *
6.9647057412830984 ) + t44 * - 0.007052486824683288 ) * intrm_sf_mf_973 ;
t110 = t263 - t108 ; t109 = t263 / ( t110 == 0.0 ? 1.0E-16 : t110 ) ; if ( X
[ 332ULL ] <= 216.59999999999997 ) { t263 = 216.59999999999997 ; } else {
t263 = X [ 332ULL ] >= 623.15 ? 623.15 : X [ 332ULL ] ; } t110 = t263 * t263
; t44 = ( ( ( 1074.1165326382541 + t263 * - 0.2214565261064077 ) + t110 *
0.00037212980109010952 ) * ( ( 1.0 - t155 ) - intrm_sf_mf_973 ) + ( (
1479.6504774710445 + t263 * 1.200211433705052 ) + t110 * -
0.00038614513167842338 ) * t155 ) + ( ( 12825.281119790017 + t263 *
6.9647057412830984 ) + t110 * - 0.007052486824683288 ) * intrm_sf_mf_973 ;
t111 = t44 - t108 ; t155 = t44 / ( t111 == 0.0 ? 1.0E-16 : t111 ) ; if ( X [
47ULL ] <= 0.0 ) { intrm_sf_mf_973 = 0.0 ; } else { intrm_sf_mf_973 = X [
47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t263 = 0.0
; } else { t263 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } t44 = ( ( ( 1.0
- intrm_sf_mf_973 ) - t263 ) * 296.802103844292 + intrm_sf_mf_973 * 461.523 )
+ t263 * 259.836612622973 ; if ( X [ 351ULL ] <= 216.59999999999997 ) { t110
= 216.59999999999997 ; } else { t110 = X [ 351ULL ] >= 623.15 ? 623.15 : X [
351ULL ] ; } t50 = t110 * t110 ; t111 = ( ( ( 1074.1165326382541 + t110 * -
0.2214565261064077 ) + t50 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_973 ) - t263 ) + ( ( 1479.6504774710445 + t110 *
1.200211433705052 ) + t50 * - 0.00038614513167842338 ) * intrm_sf_mf_973 ) +
( ( 900.63941224837913 + t110 * - 0.044484923911364271 ) + t50 *
0.00036936011832043369 ) * t263 ; t112 = t111 - t44 ; t110 = t111 / ( t112 ==
0.0 ? 1.0E-16 : t112 ) ; if ( X [ 354ULL ] <= 216.59999999999997 ) { t111 =
216.59999999999997 ; } else { t111 = X [ 354ULL ] >= 623.15 ? 623.15 : X [
354ULL ] ; } t112 = t111 * t111 ; t50 = ( ( ( 1074.1165326382541 + t111 * -
0.2214565261064077 ) + t112 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_973 ) - t263 ) + ( ( 1479.6504774710445 + t111 *
1.200211433705052 ) + t112 * - 0.00038614513167842338 ) * intrm_sf_mf_973 ) +
( ( 900.63941224837913 + t111 * - 0.044484923911364271 ) + t112 *
0.00036936011832043369 ) * t263 ; t113 = t50 - t44 ; intrm_sf_mf_973 = t50 /
( t113 == 0.0 ? 1.0E-16 : t113 ) ; if ( X [ 271ULL ] <= 0.0 ) { t263 = 0.0 ;
} else { t263 = X [ 271ULL ] >= 1.0 ? 1.0 : X [ 271ULL ] ; } if ( X [ 270ULL
] <= 0.0 ) { t111 = 0.0 ; } else { t111 = X [ 270ULL ] >= 1.0 ? 1.0 : X [
270ULL ] ; } t50 = ( ( ( 1.0 - t263 ) - t111 ) * 296.802103844292 + t263 *
461.523 ) + t111 * 259.836612622973 ; if ( X [ 343ULL ] <= 0.0 ) { t263 = 0.0
; } else { t263 = X [ 343ULL ] >= 1.0 ? 1.0 : X [ 343ULL ] ; } if ( X [
342ULL ] <= 0.0 ) { t111 = 0.0 ; } else { t111 = X [ 342ULL ] >= 1.0 ? 1.0 :
X [ 342ULL ] ; } t112 = ( ( ( 1.0 - t263 ) - t111 ) * 296.802103844292 + t263
* 461.523 ) + t111 * 259.836612622973 ; if ( X [ 381ULL ] <= 0.0 ) { t263 =
0.0 ; } else { t263 = X [ 381ULL ] >= 1.0 ? 1.0 : X [ 381ULL ] ; } if ( X [
382ULL ] <= 0.0 ) { t111 = 0.0 ; } else { t111 = X [ 382ULL ] >= 1.0 ? 1.0 :
X [ 382ULL ] ; } t113 = ( ( ( 1.0 - t263 ) - t111 ) * 296.802103844292 + t263
* 461.523 ) + t111 * 259.836612622973 ; t111 = ( X [ 385ULL ] *
0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
51ULL ] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
= 0.0 ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) {
intrm_sf_mf_1266 = 0.0 ; } else { intrm_sf_mf_1266 = X [ 52ULL ] >= 1.0 ? 1.0
: X [ 52ULL ] ; } intrm_sf_mf_1124 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1266 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 461.523 ) +
intrm_sf_mf_1266 * 259.836612622973 ; if ( X [ 389ULL ] <= 216.59999999999997
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI = X [ 389ULL ] >=
623.15 ? 623.15 : X [ 389ULL ] ; } t56 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * -
0.2214565261064077 ) + t56 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1266 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI *
1.200211433705052 ) + t56 * - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * -
0.044484923911364271 ) + t56 * 0.00036936011832043369 ) * intrm_sf_mf_1266 ;
t114 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 -
intrm_sf_mf_1124 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 / ( t114 ==
0.0 ? 1.0E-16 : t114 ) ; if ( X [ 393ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = X [ 393ULL ]
>= 623.15 ? 623.15 : X [ 393ULL ] ; } t114 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ; t56 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * -
0.2214565261064077 ) + t114 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
intrm_sf_mf_1266 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
1.200211433705052 ) + t114 * - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * -
0.044484923911364271 ) + t114 * 0.00036936011832043369 ) * intrm_sf_mf_1266 ;
t115 = t56 - intrm_sf_mf_1124 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t56 / ( t115 ==
0.0 ? 1.0E-16 : t115 ) ; if ( X [ 368ULL ] <= 0.0 ) { intrm_sf_mf_1266 = 0.0
; } else { intrm_sf_mf_1266 = X [ 368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ; } if
( X [ 367ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = X [ 367ULL
] >= 1.0 ? 1.0 : X [ 367ULL ] ; } t56 = ( ( ( 1.0 - intrm_sf_mf_1266 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) *
296.802103844292 + intrm_sf_mf_1266 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
259.836612622973 ; if ( X [ 387ULL ] <= 0.0 ) { intrm_sf_mf_1266 = 0.0 ; }
else { intrm_sf_mf_1266 = X [ 387ULL ] >= 1.0 ? 1.0 : X [ 387ULL ] ; } if ( X
[ 386ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = X [ 386ULL
] >= 1.0 ? 1.0 : X [ 386ULL ] ; } t114 = ( ( ( 1.0 - intrm_sf_mf_1266 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) *
296.802103844292 + intrm_sf_mf_1266 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
259.836612622973 ; if ( X [ 385ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { intrm_sf_mf_1266 = 1.9634954084936209E-11 ; } else
if ( X [ 385ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) {
intrm_sf_mf_1266 = 0.0012566370614359179 ; } else { intrm_sf_mf_1266 = X [
385ULL ] * 0.0019634954084936209 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 =
intrm_sf_mf_1266 / 0.0019634954084936209 ; if ( X [ 408ULL ] <= 0.0 ) {
intrm_sf_mf_1266 = 0.0 ; } else { intrm_sf_mf_1266 = X [ 408ULL ] >= 1.0 ?
1.0 : X [ 408ULL ] ; } if ( X [ 409ULL ] <= 0.0 ) { t115 = 0.0 ; } else {
t115 = X [ 409ULL ] >= 1.0 ? 1.0 : X [ 409ULL ] ; } intrm_sf_mf_1268 = ( ( (
1.0 - intrm_sf_mf_1266 ) - t115 ) * 296.802103844292 + intrm_sf_mf_1266 *
461.523 ) + t115 * 259.836612622973 ; t117 = X [ 406ULL ] * intrm_sf_mf_1268
; intrm_sf_mf_1434 = X [ 407ULL ] / ( t111 == 0.0 ? 1.0E-16 : t111 ) * ( X [
410ULL ] / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ; t119 = X [
407ULL ] / 1.01325 * ( X [ 411ULL ] / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [
406ULL ] ) ) ; t124 = ( t111 + 1.01325 ) / 2.0 * 0.0010000000000000009 ;
intrm_sf_mf_1300 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) ;
intrm_sf_mf_1364 = t124 * intrm_sf_mf_1300 ; intrm_sf_mf_1436 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1434 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * t119 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = ( t111 -
1.01325 ) * ( intrm_sf_mf_1436 >= intrm_sf_mf_1300 ? intrm_sf_mf_1436 :
intrm_sf_mf_1300 ) ; intrm_sf_mf_1436 = ( t111 - 1.01325 ) / ( t124 == 0.0 ?
1.0E-16 : t124 ) ; t263 = intrm_sf_mf_1436 * intrm_sf_mf_1436 * 3.0 -
intrm_sf_mf_1436 * intrm_sf_mf_1436 * intrm_sf_mf_1436 * 2.0 ; if ( t111 -
1.01325 <= 0.0 ) { intrm_sf_mf_1436 = intrm_sf_mf_1364 ; } else if ( t111 -
1.01325 >= t124 ) { intrm_sf_mf_1436 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI ; } else {
intrm_sf_mf_1436 = ( 1.0 - t263 ) * intrm_sf_mf_1364 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI * t263 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * t119 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1434 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = ( 1.01325 -
t111 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI >=
intrm_sf_mf_1300 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI :
intrm_sf_mf_1300 ) ; intrm_sf_mf_1434 = ( 1.01325 - t111 ) / ( t124 == 0.0 ?
1.0E-16 : t124 ) ; t119 = intrm_sf_mf_1434 * intrm_sf_mf_1434 * 3.0 -
intrm_sf_mf_1434 * intrm_sf_mf_1434 * intrm_sf_mf_1434 * 2.0 ; if ( 1.01325 -
t111 <= 0.0 ) { intrm_sf_mf_1434 = intrm_sf_mf_1364 ; } else if ( 1.01325 -
t111 >= t124 ) { intrm_sf_mf_1434 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ; } else {
intrm_sf_mf_1434 = ( 1.0 - t119 ) * intrm_sf_mf_1364 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * t119 ; } if
( t111 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 =
intrm_sf_mf_1436 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = t111 <
1.01325 ? intrm_sf_mf_1434 : intrm_sf_mf_1364 ; } if ( X [ 406ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1434 = 216.59999999999997 ; } else {
intrm_sf_mf_1434 = X [ 406ULL ] >= 623.15 ? 623.15 : X [ 406ULL ] ; } t126 =
intrm_sf_mf_1434 * intrm_sf_mf_1434 ; t119 = ( ( ( 1074.1165326382541 +
intrm_sf_mf_1434 * - 0.2214565261064077 ) + t126 * 0.00037212980109010952 ) *
( ( 1.0 - intrm_sf_mf_1266 ) - t115 ) + ( ( 1479.6504774710445 +
intrm_sf_mf_1434 * 1.200211433705052 ) + t126 * - 0.00038614513167842338 ) *
intrm_sf_mf_1266 ) + ( ( 900.63941224837913 + intrm_sf_mf_1434 * -
0.044484923911364271 ) + t126 * 0.00036936011832043369 ) * t115 ; t127 = t119
- intrm_sf_mf_1268 ; intrm_sf_mf_1266 = t119 / ( t127 == 0.0 ? 1.0E-16 : t127
) ; if ( X [ 14ULL ] <= 0.0 ) { t115 = 0.0 ; } else { t115 = X [ 14ULL ] >=
1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { intrm_sf_mf_1434 =
0.0 ; } else { intrm_sf_mf_1434 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; }
t119 = ( ( ( 1.0 - t115 ) - intrm_sf_mf_1434 ) * 296.802103844292 + t115 *
461.523 ) + intrm_sf_mf_1434 * 259.836612622973 ; if ( X [ 413ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1300 = 216.59999999999997 ; } else {
intrm_sf_mf_1300 = X [ 413ULL ] >= 623.15 ? 623.15 : X [ 413ULL ] ; } t127 =
intrm_sf_mf_1300 * intrm_sf_mf_1300 ; t124 = ( ( ( 1074.1165326382541 +
intrm_sf_mf_1300 * - 0.2214565261064077 ) + t127 * 0.00037212980109010952 ) *
( ( 1.0 - t115 ) - intrm_sf_mf_1434 ) + ( ( 1479.6504774710445 +
intrm_sf_mf_1300 * 1.200211433705052 ) + t127 * - 0.00038614513167842338 ) *
t115 ) + ( ( 900.63941224837913 + intrm_sf_mf_1300 * - 0.044484923911364271 )
+ t127 * 0.00036936011832043369 ) * intrm_sf_mf_1434 ; t128 = t124 - t119 ;
intrm_sf_mf_1300 = t124 / ( t128 == 0.0 ? 1.0E-16 : t128 ) ; if ( X [ 416ULL
] <= 216.59999999999997 ) { t124 = 216.59999999999997 ; } else { t124 = X [
416ULL ] >= 623.15 ? 623.15 : X [ 416ULL ] ; } t128 = t124 * t124 ;
intrm_sf_mf_1364 = ( ( ( 1074.1165326382541 + t124 * - 0.2214565261064077 ) +
t128 * 0.00037212980109010952 ) * ( ( 1.0 - t115 ) - intrm_sf_mf_1434 ) + ( (
1479.6504774710445 + t124 * 1.200211433705052 ) + t128 * -
0.00038614513167842338 ) * t115 ) + ( ( 900.63941224837913 + t124 * -
0.044484923911364271 ) + t128 * 0.00036936011832043369 ) * intrm_sf_mf_1434 ;
t71 = intrm_sf_mf_1364 - t119 ; t115 = intrm_sf_mf_1364 / ( t71 == 0.0 ?
1.0E-16 : t71 ) ; if ( X [ 75ULL ] <= 0.0 ) { intrm_sf_mf_1434 = 0.0 ; } else
{ intrm_sf_mf_1434 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [
74ULL ] <= 0.0 ) { t124 = 0.0 ; } else { t124 = X [ 74ULL ] >= 1.0 ? 1.0 : X
[ 74ULL ] ; } intrm_sf_mf_1364 = ( ( ( 1.0 - intrm_sf_mf_1434 ) - t124 ) *
296.802103844292 + intrm_sf_mf_1434 * 461.523 ) + t124 * 259.836612622973 ;
if ( X [ 17ULL ] <= 0.0 ) { intrm_sf_mf_1434 = 0.0 ; } else {
intrm_sf_mf_1434 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL
] <= 0.0 ) { t124 = 0.0 ; } else { t124 = X [ 16ULL ] >= 1.0 ? 1.0 : X [
16ULL ] ; } intrm_sf_mf_1436 = ( ( ( 1.0 - intrm_sf_mf_1434 ) - t124 ) *
296.802103844292 + intrm_sf_mf_1434 * 461.523 ) + t124 * 259.836612622973 ;
if ( X [ 427ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = X [ 427ULL ] >=
623.15 ? 623.15 : X [ 427ULL ] ; } t71 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI ; t263 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI * -
0.2214565261064077 ) + t71 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1434 ) - t124 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI *
1.200211433705052 ) + t71 * - 0.00038614513167842338 ) * intrm_sf_mf_1434 ) +
( ( 900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI * -
0.044484923911364271 ) + t71 * 0.00036936011832043369 ) * t124 ; t74 = t263 -
intrm_sf_mf_1436 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = t263 / ( t74 ==
0.0 ? 1.0E-16 : t74 ) ; if ( X [ 429ULL ] <= 216.59999999999997 ) { t263 =
216.59999999999997 ; } else { t263 = X [ 429ULL ] >= 623.15 ? 623.15 : X [
429ULL ] ; } t74 = t263 * t263 ; t126 = ( ( ( 1074.1165326382541 + t263 * -
0.2214565261064077 ) + t74 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1434 ) - t124 ) + ( ( 1479.6504774710445 + t263 *
1.200211433705052 ) + t74 * - 0.00038614513167842338 ) * intrm_sf_mf_1434 ) +
( ( 900.63941224837913 + t263 * - 0.044484923911364271 ) + t74 *
0.00036936011832043369 ) * t124 ; t131 = t126 - intrm_sf_mf_1436 ;
intrm_sf_mf_1434 = t126 / ( t131 == 0.0 ? 1.0E-16 : t131 ) ; if ( X [ 372ULL
] <= 0.0 ) { t124 = 0.0 ; } else { t124 = X [ 372ULL ] >= 1.0 ? 1.0 : X [
372ULL ] ; } if ( X [ 371ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [
371ULL ] >= 1.0 ? 1.0 : X [ 371ULL ] ; } t126 = ( ( ( 1.0 - t124 ) - t263 ) *
296.802103844292 + t124 * 461.523 ) + t263 * 259.836612622973 ; if ( U_idx_10
>= 1.0 ) { t124 = 1.0 ; } else { t124 = U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; }
if ( X [ 260ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [ 260ULL ] >= 1.0
? 1.0 : X [ 260ULL ] ; } if ( X [ 259ULL ] <= 0.0 ) { U_idx_10 = 0.0 ; } else
{ U_idx_10 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; } t127 = ( ( ( 1.0 -
t263 ) - U_idx_10 ) * 296.802103844292 + t263 * 461.523 ) + U_idx_10 *
259.836612622973 ; if ( X [ 122ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 =
X [ 122ULL ] >= 1.0 ? 1.0 : X [ 122ULL ] ; } if ( X [ 121ULL ] <= 0.0 ) {
U_idx_10 = 0.0 ; } else { U_idx_10 = X [ 121ULL ] >= 1.0 ? 1.0 : X [ 121ULL ]
; } t128 = ( ( ( 1.0 - t263 ) - U_idx_10 ) * 296.802103844292 + t263 *
461.523 ) + U_idx_10 * 4124.48151675695 ; if ( X [ 174ULL ] <= 0.0 ) { t263 =
0.0 ; } else { t263 = X [ 174ULL ] >= 1.0 ? 1.0 : X [ 174ULL ] ; } if ( X [
173ULL ] <= 0.0 ) { U_idx_10 = 0.0 ; } else { U_idx_10 = X [ 173ULL ] >= 1.0
? 1.0 : X [ 173ULL ] ; } t71 = ( ( ( 1.0 - t263 ) - U_idx_10 ) *
296.802103844292 + t263 * 461.523 ) + U_idx_10 * 4124.48151675695 ; if ( X [
206ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 = X [ 206ULL ] >= 1.0 ? 1.0 :
X [ 206ULL ] ; } if ( X [ 205ULL ] <= 0.0 ) { U_idx_10 = 0.0 ; } else {
U_idx_10 = X [ 205ULL ] >= 1.0 ? 1.0 : X [ 205ULL ] ; } t74 = ( ( ( 1.0 -
t263 ) - U_idx_10 ) * 296.802103844292 + t263 * 461.523 ) + U_idx_10 *
4124.48151675695 ; if ( X [ 246ULL ] <= 0.0 ) { t263 = 0.0 ; } else { t263 =
X [ 246ULL ] >= 1.0 ? 1.0 : X [ 246ULL ] ; } if ( X [ 245ULL ] <= 0.0 ) {
U_idx_10 = 0.0 ; } else { U_idx_10 = X [ 245ULL ] >= 1.0 ? 1.0 : X [ 245ULL ]
; } t131 = ( ( ( 1.0 - t263 ) - U_idx_10 ) * 296.802103844292 + t263 *
461.523 ) + U_idx_10 * 259.836612622973 ; if ( M [ 41ULL ] == 0 ) { U_idx_10
= - X [ 439ULL ] - X [ 56ULL ] ; } else { U_idx_10 = 0.0 ; } if ( M [ 199ULL
] == 0 ) { t263 = U_idx_6 - 623.15 ; } else { t263 = 0.0 ; } if ( M [ 225ULL
] == 0 ) { U_idx_1 = U_idx_8 - 623.15 ; } else { U_idx_1 = 0.0 ; } t5 [ 0ULL
] = pmf_get_inf ( ) ; for ( t6 = 0ULL ; t6 < 42ULL ; t6 ++ ) { t7 = t6 /
42ULL ; U_idx_3 = t5 [ t7 > 0ULL ? 0ULL : t7 ] ; U_idx_9 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t6 ] * 1.0E-5 ; t5 [ t7 > 0ULL ?
0ULL : t7 ] = U_idx_3 > U_idx_9 ? U_idx_9 : U_idx_3 ; } t4 [ 0ULL ] = t5 [
0ULL ] - X [ 58ULL ] ; t4 [ 1ULL ] = 4.03416E-7 - X [ 60ULL ] ; t4 [ 2ULL ] =
X [ 60ULL ] ; t4 [ 3ULL ] = X [ 58ULL ] ; t4 [ 4ULL ] = X [ 59ULL ] - 0.9 ;
t4 [ 5ULL ] = ( ( ( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * -
1.0000000000000011 ) + X [ 66ULL ] * - 1.0E-6 ) + X [ 5ULL ] ) - ( X [ 64ULL
] + 0.8 ) ; t4 [ 6ULL ] = t124 - 1.0 > 1.0 - t124 ? 1.0 - t124 : t124 - 1.0 ;
t4 [ 7ULL ] = X [ 330ULL ] * t109 * t108 ; t109 = X [ 331ULL ] * X [ 331ULL ]
* t109 / ( t108 == 0.0 ? 1.0E-16 : t108 ) ; t4 [ 8ULL ] = t109 / ( X [ 330ULL
] == 0.0 ? 1.0E-16 : X [ 330ULL ] ) ; t4 [ 9ULL ] = X [ 332ULL ] * t155 *
t108 ; t155 = X [ 333ULL ] * X [ 333ULL ] * t155 / ( t108 == 0.0 ? 1.0E-16 :
t108 ) ; t4 [ 10ULL ] = t155 / ( X [ 332ULL ] == 0.0 ? 1.0E-16 : X [ 332ULL ]
) ; t4 [ 11ULL ] = X [ 330ULL ] * t108 / ( X [ 331ULL ] == 0.0 ? 1.0E-16 : X
[ 331ULL ] ) ; t4 [ 12ULL ] = X [ 332ULL ] * t108 / ( X [ 333ULL ] == 0.0 ?
1.0E-16 : X [ 333ULL ] ) ; t4 [ 13ULL ] = X [ 69ULL ] - 0.01 ; t4 [ 14ULL ] =
pmf_get_inf ( ) - X [ 69ULL ] ; t4 [ 15ULL ] = X [ 68ULL ] -
216.59999999999997 ; t4 [ 16ULL ] = 623.15 - X [ 68ULL ] ; t4 [ 17ULL ] = X [
116ULL ] - 0.01 ; t4 [ 18ULL ] = pmf_get_inf ( ) - X [ 116ULL ] ; t4 [ 19ULL
] = X [ 115ULL ] - 216.59999999999997 ; t4 [ 20ULL ] = 623.15 - X [ 115ULL ]
; t4 [ 21ULL ] = X [ 44ULL ] - 0.01 ; t4 [ 22ULL ] = pmf_get_inf ( ) - X [
44ULL ] ; t4 [ 23ULL ] = X [ 9ULL ] - 216.59999999999997 ; t4 [ 24ULL ] =
623.15 - X [ 9ULL ] ; t4 [ 25ULL ] = X [ 9ULL ] * t108 / ( X [ 44ULL ] == 0.0
? 1.0E-16 : X [ 44ULL ] ) ; t4 [ 26ULL ] = X [ 427ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI *
intrm_sf_mf_1436 ; t4 [ 27ULL ] = X [ 428ULL ] * X [ 428ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI / (
intrm_sf_mf_1436 == 0.0 ? 1.0E-16 : intrm_sf_mf_1436 ) / ( X [ 427ULL ] ==
0.0 ? 1.0E-16 : X [ 427ULL ] ) ; t4 [ 28ULL ] = X [ 429ULL ] *
intrm_sf_mf_1434 * intrm_sf_mf_1436 ; t4 [ 29ULL ] = X [ 430ULL ] * X [
430ULL ] * intrm_sf_mf_1434 / ( intrm_sf_mf_1436 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1436 ) / ( X [ 429ULL ] == 0.0 ? 1.0E-16 : X [ 429ULL ] ) ; t4 [
30ULL ] = X [ 427ULL ] * intrm_sf_mf_1436 / ( X [ 428ULL ] == 0.0 ? 1.0E-16 :
X [ 428ULL ] ) ; t4 [ 31ULL ] = X [ 429ULL ] * intrm_sf_mf_1436 / ( X [
430ULL ] == 0.0 ? 1.0E-16 : X [ 430ULL ] ) ; t4 [ 32ULL ] = X [ 73ULL ] -
0.01 ; t4 [ 33ULL ] = pmf_get_inf ( ) - X [ 73ULL ] ; t4 [ 34ULL ] = X [
72ULL ] - 216.59999999999997 ; t4 [ 35ULL ] = 623.15 - X [ 72ULL ] ; t4 [
36ULL ] = X [ 366ULL ] - 0.01 ; t4 [ 37ULL ] = pmf_get_inf ( ) - X [ 366ULL ]
; t4 [ 38ULL ] = X [ 365ULL ] - 216.59999999999997 ; t4 [ 39ULL ] = 623.15 -
X [ 365ULL ] ; t4 [ 40ULL ] = X [ 54ULL ] - 0.01 ; t4 [ 41ULL ] = pmf_get_inf
( ) - X [ 54ULL ] ; t4 [ 42ULL ] = X [ 15ULL ] - 216.59999999999997 ; t4 [
43ULL ] = 623.15 - X [ 15ULL ] ; t4 [ 44ULL ] = X [ 15ULL ] *
intrm_sf_mf_1436 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ; t4 [
45ULL ] = X [ 139ULL ] * t157 * t280 ; t157 = X [ 140ULL ] * X [ 140ULL ] *
t157 / ( t280 == 0.0 ? 1.0E-16 : t280 ) ; t4 [ 46ULL ] = t157 / ( X [ 139ULL
] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ; t4 [ 47ULL ] = X [ 143ULL ] * t275 *
t280 ; t275 = X [ 144ULL ] * X [ 144ULL ] * t275 / ( t280 == 0.0 ? 1.0E-16 :
t280 ) ; t4 [ 48ULL ] = t275 / ( X [ 143ULL ] == 0.0 ? 1.0E-16 : X [ 143ULL ]
) ; t4 [ 49ULL ] = X [ 139ULL ] * t280 / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X
[ 140ULL ] ) ; t4 [ 50ULL ] = X [ 143ULL ] * t280 / ( X [ 144ULL ] == 0.0 ?
1.0E-16 : X [ 144ULL ] ) ; t4 [ 51ULL ] = X [ 135ULL ] - 0.01 ; t4 [ 52ULL ]
= pmf_get_inf ( ) - X [ 135ULL ] ; t4 [ 53ULL ] = X [ 134ULL ] -
216.59999999999997 ; t4 [ 54ULL ] = 623.15 - X [ 134ULL ] ; t4 [ 55ULL ] = X
[ 20ULL ] - 0.01 ; t4 [ 56ULL ] = pmf_get_inf ( ) - X [ 20ULL ] ; t4 [ 57ULL
] = X [ 19ULL ] - 216.59999999999997 ; t4 [ 58ULL ] = 623.15 - X [ 19ULL ] ;
t4 [ 59ULL ] = X [ 19ULL ] * t280 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [
20ULL ] ) ; t4 [ 60ULL ] = X [ 223ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI * intrm_sf_mf_302
; t4 [ 61ULL ] = X [ 224ULL ] * X [ 224ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI / (
intrm_sf_mf_302 == 0.0 ? 1.0E-16 : intrm_sf_mf_302 ) / ( X [ 223ULL ] == 0.0
? 1.0E-16 : X [ 223ULL ] ) ; t4 [ 62ULL ] = X [ 227ULL ] * t323 *
intrm_sf_mf_302 ; t4 [ 63ULL ] = X [ 228ULL ] * X [ 228ULL ] * t323 / (
intrm_sf_mf_302 == 0.0 ? 1.0E-16 : intrm_sf_mf_302 ) / ( X [ 227ULL ] == 0.0
? 1.0E-16 : X [ 227ULL ] ) ; t4 [ 64ULL ] = X [ 223ULL ] * intrm_sf_mf_302 /
( X [ 224ULL ] == 0.0 ? 1.0E-16 : X [ 224ULL ] ) ; t4 [ 65ULL ] = X [ 227ULL
] * intrm_sf_mf_302 / ( X [ 228ULL ] == 0.0 ? 1.0E-16 : X [ 228ULL ] ) ; t4 [
66ULL ] = X [ 220ULL ] - 0.01 ; t4 [ 67ULL ] = pmf_get_inf ( ) - X [ 220ULL ]
; t4 [ 68ULL ] = X [ 219ULL ] - 216.59999999999997 ; t4 [ 69ULL ] = 623.15 -
X [ 219ULL ] ; t4 [ 70ULL ] = X [ 24ULL ] - 0.01 ; t4 [ 71ULL ] = pmf_get_inf
( ) - X [ 24ULL ] ; t4 [ 72ULL ] = X [ 166ULL ] - 216.59999999999997 ; t4 [
73ULL ] = 623.15 - X [ 166ULL ] ; t4 [ 74ULL ] = X [ 32ULL ] - 0.01 ; t4 [
75ULL ] = pmf_get_inf ( ) - X [ 32ULL ] ; t4 [ 76ULL ] = X [ 31ULL ] -
216.59999999999997 ; t4 [ 77ULL ] = 623.15 - X [ 31ULL ] ; t4 [ 78ULL ] = X [
31ULL ] * intrm_sf_mf_302 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) ;
t4 [ 79ULL ] = X [ 302ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * intrm_sf_mf_563
; t4 [ 80ULL ] = X [ 303ULL ] * X [ 303ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI / (
intrm_sf_mf_563 == 0.0 ? 1.0E-16 : intrm_sf_mf_563 ) / ( X [ 302ULL ] == 0.0
? 1.0E-16 : X [ 302ULL ] ) ; t4 [ 81ULL ] = X [ 305ULL ] * intrm_sf_mf_561 *
intrm_sf_mf_563 ; t4 [ 82ULL ] = X [ 306ULL ] * X [ 306ULL ] *
intrm_sf_mf_561 / ( intrm_sf_mf_563 == 0.0 ? 1.0E-16 : intrm_sf_mf_563 ) / (
X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ; t4 [ 83ULL ] = X [ 302ULL ]
* intrm_sf_mf_563 / ( X [ 303ULL ] == 0.0 ? 1.0E-16 : X [ 303ULL ] ) ; t4 [
84ULL ] = X [ 305ULL ] * intrm_sf_mf_563 / ( X [ 306ULL ] == 0.0 ? 1.0E-16 :
X [ 306ULL ] ) ; t4 [ 85ULL ] = X [ 169ULL ] - 216.59999999999997 ; t4 [
86ULL ] = 623.15 - X [ 169ULL ] ; t4 [ 87ULL ] = X [ 292ULL ] - 0.01 ; t4 [
88ULL ] = pmf_get_inf ( ) - X [ 292ULL ] ; t4 [ 89ULL ] = X [ 291ULL ] -
216.59999999999997 ; t4 [ 90ULL ] = 623.15 - X [ 291ULL ] ; t4 [ 91ULL ] = X
[ 42ULL ] - 0.01 ; t4 [ 92ULL ] = pmf_get_inf ( ) - X [ 42ULL ] ; t4 [ 93ULL
] = X [ 39ULL ] - 216.59999999999997 ; t4 [ 94ULL ] = 623.15 - X [ 39ULL ] ;
t4 [ 95ULL ] = X [ 39ULL ] * intrm_sf_mf_563 / ( X [ 42ULL ] == 0.0 ? 1.0E-16
: X [ 42ULL ] ) ; t4 [ 96ULL ] = X [ 316ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * t106 ; t4 [
97ULL ] = X [ 317ULL ] * X [ 317ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI / ( t106 == 0.0 ?
1.0E-16 : t106 ) / ( X [ 316ULL ] == 0.0 ? 1.0E-16 : X [ 316ULL ] ) ; t4 [
98ULL ] = X [ 319ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t106 ; t4 [
99ULL ] = X [ 320ULL ] * X [ 320ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI / ( t106 == 0.0 ?
1.0E-16 : t106 ) / ( X [ 319ULL ] == 0.0 ? 1.0E-16 : X [ 319ULL ] ) ; t4 [
100ULL ] = X [ 316ULL ] * t106 / ( X [ 317ULL ] == 0.0 ? 1.0E-16 : X [ 317ULL
] ) ; t4 [ 101ULL ] = X [ 319ULL ] * t106 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 :
X [ 320ULL ] ) ; t4 [ 102ULL ] = X [ 43ULL ] - 0.01 ; t4 [ 103ULL ] =
pmf_get_inf ( ) - X [ 43ULL ] ; t4 [ 104ULL ] = X [ 6ULL ] -
216.59999999999997 ; t4 [ 105ULL ] = 623.15 - X [ 6ULL ] ; t4 [ 106ULL ] = X
[ 6ULL ] * t106 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ; t4 [
107ULL ] = X [ 351ULL ] * t110 * t44 ; t4 [ 108ULL ] = X [ 352ULL ] * X [
352ULL ] * t110 / ( t44 == 0.0 ? 1.0E-16 : t44 ) / ( X [ 351ULL ] == 0.0 ?
1.0E-16 : X [ 351ULL ] ) ; t4 [ 109ULL ] = X [ 354ULL ] * intrm_sf_mf_973 *
t44 ; t4 [ 110ULL ] = X [ 355ULL ] * X [ 355ULL ] * intrm_sf_mf_973 / ( t44
== 0.0 ? 1.0E-16 : t44 ) / ( X [ 354ULL ] == 0.0 ? 1.0E-16 : X [ 354ULL ] ) ;
t4 [ 111ULL ] = X [ 351ULL ] * t44 / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [
352ULL ] ) ; t4 [ 112ULL ] = X [ 354ULL ] * t44 / ( X [ 355ULL ] == 0.0 ?
1.0E-16 : X [ 355ULL ] ) ; t4 [ 113ULL ] = X [ 35ULL ] - 0.01 ; t4 [ 114ULL ]
= pmf_get_inf ( ) - X [ 35ULL ] ; t4 [ 115ULL ] = X [ 269ULL ] -
216.59999999999997 ; t4 [ 116ULL ] = 623.15 - X [ 269ULL ] ; t4 [ 117ULL ] =
X [ 341ULL ] - 0.01 ; t4 [ 118ULL ] = pmf_get_inf ( ) - X [ 341ULL ] ; t4 [
119ULL ] = X [ 340ULL ] - 216.59999999999997 ; t4 [ 120ULL ] = 623.15 - X [
340ULL ] ; t4 [ 121ULL ] = X [ 48ULL ] - 0.01 ; t4 [ 122ULL ] = pmf_get_inf (
) - X [ 48ULL ] ; t4 [ 123ULL ] = X [ 45ULL ] - 216.59999999999997 ; t4 [
124ULL ] = 623.15 - X [ 45ULL ] ; t4 [ 125ULL ] = X [ 45ULL ] * t44 / ( X [
48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ; t4 [ 126ULL ] = X [ 389ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI * intrm_sf_mf_1124
; t4 [ 127ULL ] = X [ 390ULL ] * X [ 390ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_AI / (
intrm_sf_mf_1124 == 0.0 ? 1.0E-16 : intrm_sf_mf_1124 ) / ( X [ 389ULL ] ==
0.0 ? 1.0E-16 : X [ 389ULL ] ) ; t4 [ 128ULL ] = X [ 393ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * intrm_sf_mf_1124
; t4 [ 129ULL ] = X [ 394ULL ] * X [ 394ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / (
intrm_sf_mf_1124 == 0.0 ? 1.0E-16 : intrm_sf_mf_1124 ) / ( X [ 393ULL ] ==
0.0 ? 1.0E-16 : X [ 393ULL ] ) ; t4 [ 130ULL ] = X [ 389ULL ] *
intrm_sf_mf_1124 / ( X [ 390ULL ] == 0.0 ? 1.0E-16 : X [ 390ULL ] ) ; t4 [
131ULL ] = X [ 393ULL ] * intrm_sf_mf_1124 / ( X [ 394ULL ] == 0.0 ? 1.0E-16
: X [ 394ULL ] ) ; t4 [ 132ULL ] = t111 - 0.01 ; t4 [ 133ULL ] = pmf_get_inf
( ) - t111 ; t4 [ 134ULL ] = X [ 384ULL ] - 216.59999999999997 ; t4 [ 135ULL
] = 623.15 - X [ 384ULL ] ; t4 [ 136ULL ] = X [ 50ULL ] - 0.01 ; t4 [ 137ULL
] = pmf_get_inf ( ) - X [ 50ULL ] ; t4 [ 138ULL ] = X [ 49ULL ] -
216.59999999999997 ; t4 [ 139ULL ] = 623.15 - X [ 49ULL ] ; t4 [ 140ULL ] = X
[ 49ULL ] * intrm_sf_mf_1124 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] )
; t4 [ 141ULL ] = X [ 413ULL ] * intrm_sf_mf_1300 * t119 ; t4 [ 142ULL ] = X
[ 414ULL ] * X [ 414ULL ] * intrm_sf_mf_1300 / ( t119 == 0.0 ? 1.0E-16 : t119
) / ( X [ 413ULL ] == 0.0 ? 1.0E-16 : X [ 413ULL ] ) ; t4 [ 143ULL ] = X [
416ULL ] * t115 * t119 ; t4 [ 144ULL ] = X [ 417ULL ] * X [ 417ULL ] * t115 /
( t119 == 0.0 ? 1.0E-16 : t119 ) / ( X [ 416ULL ] == 0.0 ? 1.0E-16 : X [
416ULL ] ) ; t4 [ 145ULL ] = X [ 413ULL ] * t119 / ( X [ 414ULL ] == 0.0 ?
1.0E-16 : X [ 414ULL ] ) ; t4 [ 146ULL ] = X [ 416ULL ] * t119 / ( X [ 417ULL
] == 0.0 ? 1.0E-16 : X [ 417ULL ] ) ; t4 [ 147ULL ] = X [ 53ULL ] - 0.01 ; t4
[ 148ULL ] = pmf_get_inf ( ) - X [ 53ULL ] ; t4 [ 149ULL ] = X [ 12ULL ] -
216.59999999999997 ; t4 [ 150ULL ] = 623.15 - X [ 12ULL ] ; t4 [ 151ULL ] = X
[ 12ULL ] * t119 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) ; t4 [
152ULL ] = ( 1.0 - X [ 131ULL ] ) - X [ 132ULL ] ; t4 [ 153ULL ] = t332 *
293.15 / 1.01325 ; t4 [ 154ULL ] = ( 1.0 - X [ 255ULL ] ) - X [ 256ULL ] ; t4
[ 155ULL ] = intrm_sf_mf_456 * 293.15 / 1.01325 ; t4 [ 156ULL ] = ( 1.0 - X [
381ULL ] ) - X [ 382ULL ] ; t4 [ 157ULL ] = t113 * 293.15 / 1.01325 ; t4 [
158ULL ] = X [ 160ULL ] * X [ 160ULL ] * t335 / ( t287 == 0.0 ? 1.0E-16 :
t287 ) / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ; t4 [ 159ULL ] = X
[ 160ULL ] / ( t78 == 0.0 ? 1.0E-16 : t78 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ;
t4 [ 160ULL ] = X [ 163ULL ] * t287 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [
135ULL ] ) ; t4 [ 161ULL ] = X [ 164ULL ] * t287 / 1.01325 ; t4 [ 162ULL ] =
t78 / ( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ; t4 [ 163ULL ] = X [
120ULL ] - 216.59999999999997 ; t4 [ 164ULL ] = 623.15 - X [ 120ULL ] ; t4 [
165ULL ] = X [ 238ULL ] * X [ 238ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 / ( t90 ==
0.0 ? 1.0E-16 : t90 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ; t4
[ 166ULL ] = X [ 238ULL ] / ( t93 == 0.0 ? 1.0E-16 : t93 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) ;
t4 [ 167ULL ] = X [ 241ULL ] * t90 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [
28ULL ] ) ; t4 [ 168ULL ] = X [ 242ULL ] * t90 / ( X [ 220ULL ] == 0.0 ?
1.0E-16 : X [ 220ULL ] ) ; t4 [ 169ULL ] = t93 / ( X [ 238ULL ] == 0.0 ?
1.0E-16 : X [ 238ULL ] ) ; t4 [ 170ULL ] = X [ 28ULL ] - 0.01 ; t4 [ 171ULL ]
= pmf_get_inf ( ) - X [ 28ULL ] ; t4 [ 172ULL ] = X [ 204ULL ] -
216.59999999999997 ; t4 [ 173ULL ] = 623.15 - X [ 204ULL ] ; t4 [ 174ULL ] =
X [ 407ULL ] * X [ 407ULL ] * intrm_sf_mf_1266 / ( intrm_sf_mf_1268 == 0.0 ?
1.0E-16 : intrm_sf_mf_1268 ) / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ]
) ; t4 [ 175ULL ] = X [ 407ULL ] / ( t117 == 0.0 ? 1.0E-16 : t117 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) ;
t4 [ 176ULL ] = X [ 410ULL ] * intrm_sf_mf_1268 / ( t111 == 0.0 ? 1.0E-16 :
t111 ) ; t4 [ 177ULL ] = X [ 411ULL ] * intrm_sf_mf_1268 / 1.01325 ; t4 [
178ULL ] = t117 / ( X [ 407ULL ] == 0.0 ? 1.0E-16 : X [ 407ULL ] ) ; t4 [
179ULL ] = X [ 370ULL ] - 216.59999999999997 ; t4 [ 180ULL ] = 623.15 - X [
370ULL ] ; t4 [ 181ULL ] = X [ 23ULL ] - 216.59999999999997 ; t4 [ 182ULL ] =
623.15 - X [ 23ULL ] ; t4 [ 183ULL ] = X [ 23ULL ] * t81 / ( X [ 24ULL ] ==
0.0 ? 1.0E-16 : X [ 24ULL ] ) ; t4 [ 184ULL ] = X [ 27ULL ] -
216.59999999999997 ; t4 [ 185ULL ] = 623.15 - X [ 27ULL ] ; t4 [ 186ULL ] = X
[ 27ULL ] * intrm_sf_mf_283 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] )
; t4 [ 187ULL ] = X [ 36ULL ] - 216.59999999999997 ; t4 [ 188ULL ] = 623.15 -
X [ 36ULL ] ; t4 [ 189ULL ] = X [ 36ULL ] * intrm_sf_mf_537 / ( X [ 35ULL ]
== 0.0 ? 1.0E-16 : X [ 35ULL ] ) ; t4 [ 190ULL ] = X [ 172ULL ] -
216.59999999999997 ; t4 [ 191ULL ] = 623.15 - X [ 172ULL ] ; t4 [ 192ULL ] =
X [ 244ULL ] - 216.59999999999997 ; t4 [ 193ULL ] = 623.15 - X [ 244ULL ] ;
t4 [ 194ULL ] = X [ 258ULL ] - 216.59999999999997 ; t4 [ 195ULL ] = 623.15 -
X [ 258ULL ] ; t4 [ 196ULL ] = ( real_T ) ( X [ 62ULL ] > 0.0 ) ; t4 [ 197ULL
] = X [ 56ULL ] - X [ 439ULL ] ; t4 [ 198ULL ] = U_idx_10 ; t4 [ 199ULL ] =
216.59999999999997 - U_idx_6 ; t4 [ 200ULL ] = t263 ; t4 [ 201ULL ] =
216.59999999999997 - U_idx_8 ; t4 [ 202ULL ] = U_idx_1 ; t4 [ 203ULL ] = X [
18ULL ] ; t4 [ 204ULL ] = X [ 99ULL ] - 0.6 ; t263 = X [ 68ULL ] *
intrm_sf_mf_765 ; t4 [ 205ULL ] = t263 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 : X [
69ULL ] ) ; t332 = X [ 115ULL ] * t283 ; t4 [ 206ULL ] = t332 / ( X [ 116ULL
] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ; t280 = X [ 72ULL ] * intrm_sf_mf_1364 ;
t4 [ 207ULL ] = t280 / ( X [ 73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ; t335
= X [ 365ULL ] * t56 ; t4 [ 208ULL ] = t335 / ( X [ 366ULL ] == 0.0 ? 1.0E-16
: X [ 366ULL ] ) ; t323 = X [ 120ULL ] * t128 ; t4 [ 209ULL ] = t323 /
1.01325 ; t4 [ 210ULL ] = t332 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL
] ) ; t287 = X [ 134ULL ] * t322 ; t4 [ 211ULL ] = t287 / ( X [ 135ULL ] ==
0.0 ? 1.0E-16 : X [ 135ULL ] ) ; t4 [ 212ULL ] = t287 / ( X [ 135ULL ] == 0.0
? 1.0E-16 : X [ 135ULL ] ) ; t4 [ 213ULL ] = t323 / 1.01325 ; t322 = X [
166ULL ] * t20 ; t4 [ 214ULL ] = t322 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) ; t323 = X [ 172ULL ] * t71 ; t4 [ 215ULL ] = t323 / ( X [ 24ULL ]
== 0.0 ? 1.0E-16 : X [ 24ULL ] ) ; t287 = X [ 169ULL ] * t104 ; t4 [ 216ULL ]
= t287 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ; t4 [ 217ULL ] =
t332 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ; t4 [ 218ULL ] =
t323 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ; t332 = X [ 204ULL ] *
t74 ; t4 [ 219ULL ] = t332 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ;
t323 = X [ 219ULL ] * t87 ; t4 [ 220ULL ] = t323 / ( X [ 220ULL ] == 0.0 ?
1.0E-16 : X [ 220ULL ] ) ; t4 [ 221ULL ] = t322 / ( X [ 24ULL ] == 0.0 ?
1.0E-16 : X [ 24ULL ] ) ; t4 [ 222ULL ] = t332 / ( X [ 28ULL ] == 0.0 ?
1.0E-16 : X [ 28ULL ] ) ; t4 [ 223ULL ] = t323 / ( X [ 220ULL ] == 0.0 ?
1.0E-16 : X [ 220ULL ] ) ; t332 = X [ 244ULL ] * t131 ; t4 [ 224ULL ] = t332
/ 1.01325 ; t4 [ 225ULL ] = t332 / 1.01325 ; t332 = X [ 258ULL ] * t127 ; t4
[ 226ULL ] = t332 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ; t4 [
227ULL ] = t332 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ; t332 = X [
269ULL ] * t50 ; t4 [ 228ULL ] = t332 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [
35ULL ] ) ; t4 [ 229ULL ] = t287 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL
] ) ; t322 = X [ 291ULL ] * t105 ; t4 [ 230ULL ] = t322 / ( X [ 292ULL ] ==
0.0 ? 1.0E-16 : X [ 292ULL ] ) ; t4 [ 231ULL ] = t322 / ( X [ 292ULL ] == 0.0
? 1.0E-16 : X [ 292ULL ] ) ; t4 [ 232ULL ] = t263 / ( X [ 69ULL ] == 0.0 ?
1.0E-16 : X [ 69ULL ] ) ; t4 [ 233ULL ] = t332 / ( X [ 35ULL ] == 0.0 ?
1.0E-16 : X [ 35ULL ] ) ; t263 = X [ 340ULL ] * t112 ; t4 [ 234ULL ] = t263 /
( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [ 341ULL ] ) ; t332 = X [ 370ULL ] * t126
; t4 [ 235ULL ] = t332 / 1.01325 ; t4 [ 236ULL ] = t335 / ( X [ 366ULL ] ==
0.0 ? 1.0E-16 : X [ 366ULL ] ) ; t335 = X [ 384ULL ] * t114 ; t4 [ 237ULL ] =
t335 / ( t111 == 0.0 ? 1.0E-16 : t111 ) ; t4 [ 238ULL ] = t335 / ( t111 ==
0.0 ? 1.0E-16 : t111 ) ; t4 [ 239ULL ] = t332 / 1.01325 ; t4 [ 240ULL ] =
t263 / ( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [ 341ULL ] ) ; t4 [ 241ULL ] =
t280 / ( X [ 73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ; t4 [ 242ULL ] = X [
197ULL ] * t84 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ; t4 [
243ULL ] = X [ 200ULL ] * t84 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ]
) ; t4 [ 244ULL ] = X [ 198ULL ] * t84 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) ; t4 [ 245ULL ] = X [ 199ULL ] * t84 / ( X [ 116ULL ] == 0.0 ?
1.0E-16 : X [ 116ULL ] ) ; t4 [ 246ULL ] = X [ 262ULL ] * t102 / 1.01325 ; t4
[ 247ULL ] = X [ 265ULL ] * t102 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL
] ) ; t4 [ 248ULL ] = X [ 263ULL ] * t102 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 :
X [ 35ULL ] ) ; t4 [ 249ULL ] = X [ 264ULL ] * t102 / 1.01325 ; for ( b = 0 ;
b < 250 ; b ++ ) { out . mX [ b ] = t4 [ b ] ; } ( void ) LC ; ( void ) t357
; return 0 ; }
