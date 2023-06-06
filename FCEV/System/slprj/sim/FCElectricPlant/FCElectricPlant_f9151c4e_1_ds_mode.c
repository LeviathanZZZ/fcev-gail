#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_mode.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_mode ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t314 , NeDsMethodOutput * t315 ) { PmIntVector
out ; real_T X [ 440 ] ; real_T t1 [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI ; real_T U_idx_1
; real_T U_idx_10 ; real_T U_idx_3 ; real_T U_idx_6 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_1268 ; real_T intrm_sf_mf_1299 ; real_T
intrm_sf_mf_1364 ; real_T intrm_sf_mf_1434 ; real_T intrm_sf_mf_1436 ; real_T
intrm_sf_mf_17 ; real_T intrm_sf_mf_173 ; real_T intrm_sf_mf_283 ; real_T
intrm_sf_mf_29 ; real_T intrm_sf_mf_300 ; real_T intrm_sf_mf_302 ; real_T
intrm_sf_mf_537 ; real_T intrm_sf_mf_561 ; real_T intrm_sf_mf_563 ; real_T
intrm_sf_mf_973 ; real_T t100 ; real_T t101 ; real_T t103 ; real_T t108 ;
real_T t109 ; real_T t11 ; real_T t111 ; real_T t116 ; real_T t118 ; real_T
t120 ; real_T t121 ; real_T t124 ; real_T t125 ; real_T t128 ; real_T t135 ;
real_T t138 ; real_T t157 ; real_T t175 ; real_T t190 ; real_T t20 ; real_T
t206 ; real_T t210 ; real_T t32 ; real_T t35 ; real_T t38 ; real_T t41 ;
real_T t44 ; real_T t62 ; real_T t65 ; real_T t72 ; real_T t75 ; real_T t78 ;
real_T t8 ; real_T t81 ; real_T t82 ; real_T t87 ; real_T t90 ; real_T t94 ;
real_T t96 ; real_T t97 ; real_T t98 ; real_T t99 ; size_t t2 ; size_t t3 ;
int32_T t0 [ 231 ] ; int32_T b ; U_idx_1 = t314 -> mU . mX [ 1 ] ; U_idx_3 =
t314 -> mU . mX [ 3 ] ; U_idx_6 = t314 -> mU . mX [ 6 ] ; U_idx_8 = t314 ->
mU . mX [ 8 ] ; U_idx_9 = t314 -> mU . mX [ 9 ] ; U_idx_10 = t314 -> mU . mX
[ 10 ] ; for ( b = 0 ; b < 440 ; b ++ ) { X [ b ] = t314 -> mX . mX [ b ] ; }
out = t315 -> mMODE ; if ( X [ 131ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206
= X [ 131ULL ] >= 1.0 ? 1.0 : X [ 131ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) {
t210 = 0.0 ; } else { t210 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; }
intrm_sf_mf_17 = ( ( ( 1.0 - t206 ) - t210 ) * 296.802103844292 + t206 *
461.523 ) + t210 * 4124.48151675695 ; if ( X [ 21ULL ] <= 0.0 ) { t210 = 0.0
; } else { t210 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
0.0 ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp
= X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } intrm_sf_mf_29 = ( ( ( 1.0 -
t210 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) *
296.802103844292 + t210 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
4124.48151675695 ; if ( X [ 139ULL ] <= 216.59999999999997 ) { t190 =
216.59999999999997 ; } else { t190 = X [ 139ULL ] >= 623.15 ? 623.15 : X [
139ULL ] ; } t8 = t190 * t190 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = ( ( (
1074.1165326382541 + t190 * - 0.2214565261064077 ) + t8 *
0.00037212980109010952 ) * ( ( 1.0 - t210 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) + ( (
1479.6504774710445 + t190 * 1.200211433705052 ) + t8 * -
0.00038614513167842338 ) * t210 ) + ( ( 12825.281119790017 + t190 *
6.9647057412830984 ) + t8 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; t11 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ -
intrm_sf_mf_29 ; t190 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / ( t11 ==
0.0 ? 1.0E-16 : t11 ) ; if ( X [ 143ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [ 143ULL
] >= 623.15 ? 623.15 : X [ 143ULL ] ; } t11 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ; t8 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ * -
0.2214565261064077 ) + t11 * 0.00037212980109010952 ) * ( ( 1.0 - t210 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
1.200211433705052 ) + t11 * - 0.00038614513167842338 ) * t210 ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
6.9647057412830984 ) + t11 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ;
intrm_sf_mf_300 = t8 - intrm_sf_mf_29 ; t210 = t8 / ( intrm_sf_mf_300 == 0.0
? 1.0E-16 : intrm_sf_mf_300 ) ; if ( X [ 137ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 137ULL
] >= 1.0 ? 1.0 : X [ 137ULL ] ; } if ( X [ 136ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
136ULL ] >= 1.0 ? 1.0 : X [ 136ULL ] ; } t8 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
4124.48151675695 ; if ( X [ 118ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 118ULL
] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [ 117ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
117ULL ] >= 1.0 ? 1.0 : X [ 117ULL ] ; } t11 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = U_idx_1 *
0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 <=
7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 >=
3.1415926535897929E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ /
7.8539816339744827E-5 ; if ( X [ 161ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X [
161ULL ] >= 1.0 ? 1.0 : X [ 161ULL ] ; } if ( X [ 162ULL ] <= 0.0 ) {
intrm_sf_mf_300 = 0.0 ; } else { intrm_sf_mf_300 = X [ 162ULL ] >= 1.0 ? 1.0
: X [ 162ULL ] ; } intrm_sf_mf_173 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) -
intrm_sf_mf_300 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ * 461.523 ) +
intrm_sf_mf_300 * 4124.48151675695 ; t72 = X [ 159ULL ] * intrm_sf_mf_173 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 160ULL
] / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) * ( X [ 163ULL ] / ( X [
159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ; t75 = X [ 160ULL ] / 1.01325 *
( X [ 164ULL ] / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ;
intrm_sf_mf_283 = ( X [ 135ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ;
t78 = ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp )
* ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ;
intrm_sf_mf_302 = intrm_sf_mf_283 * t78 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0 ) * ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t75 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = ( X [
135ULL ] - 1.01325 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI >= t78 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI : t78 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = ( X [ 135ULL ] -
1.01325 ) / ( intrm_sf_mf_283 == 0.0 ? 1.0E-16 : intrm_sf_mf_283 ) ; t81 =
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
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = ( 1.0 - t81 ) *
intrm_sf_mf_302 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * t81 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0 ) * ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t75 ) - (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = ( 1.01325 - X
[ 135ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 >= t78 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 : t78 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( 1.01325 -
X [ 135ULL ] ) / ( intrm_sf_mf_283 == 0.0 ? 1.0E-16 : intrm_sf_mf_283 ) ; t75
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
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( 1.0 - t75
) * intrm_sf_mf_302 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t75 ; } if (
X [ 135ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 135ULL ]
< 1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 :
intrm_sf_mf_302 ; } if ( X [ 159ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 159ULL
] >= 623.15 ? 623.15 : X [ 159ULL ] ; } t82 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t75 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * -
0.2214565261064077 ) + t82 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) -
intrm_sf_mf_300 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
1.200211433705052 ) + t82 * - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
6.9647057412830984 ) + t82 * - 0.007052486824683288 ) * intrm_sf_mf_300 ;
t206 = t75 - intrm_sf_mf_173 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = t75 / (
t206 == 0.0 ? 1.0E-16 : t206 ) ; if ( X [ 26ULL ] <= 0.0 ) { intrm_sf_mf_300
= 0.0 ; } else { intrm_sf_mf_300 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; }
if ( X [ 25ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t75 = ( ( ( 1.0 - intrm_sf_mf_300 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + intrm_sf_mf_300 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 203ULL ] <= 0.0 ) { intrm_sf_mf_300 = 0.0 ; }
else { intrm_sf_mf_300 = X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } if ( X
[ 202ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } t78 = ( ( ( 1.0 - intrm_sf_mf_300 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + intrm_sf_mf_300 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 30ULL ] <= 0.0 ) { intrm_sf_mf_300 = 0.0 ; } else
{ intrm_sf_mf_300 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } if ( X [ 29ULL
] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12
= 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 29ULL ]
>= 1.0 ? 1.0 : X [ 29ULL ] ; } intrm_sf_mf_283 = ( ( ( 1.0 - intrm_sf_mf_300
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + intrm_sf_mf_300 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 33ULL ] <= 0.0 ) { intrm_sf_mf_300 = 0.0 ; } else
{ intrm_sf_mf_300 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } if ( X [ 34ULL
] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12
= 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 34ULL ]
>= 1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_302 = ( ( ( 1.0 - intrm_sf_mf_300
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) *
296.802103844292 + intrm_sf_mf_300 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
4124.48151675695 ; if ( X [ 223ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI = X [ 223ULL ] >=
623.15 ? 623.15 : X [ 223ULL ] ; } t206 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI * -
0.2214565261064077 ) + t206 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_300 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
1.200211433705052 ) + t206 * - 0.00038614513167842338 ) * intrm_sf_mf_300 ) +
( ( 12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI *
6.9647057412830984 ) + t206 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t20 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 -
intrm_sf_mf_302 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 / ( t20 ==
0.0 ? 1.0E-16 : t20 ) ; if ( X [ 227ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [ 227ULL
] >= 623.15 ? 623.15 : X [ 227ULL ] ; } t20 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ; t81 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * -
0.2214565261064077 ) + t20 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_300 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
1.200211433705052 ) + t20 * - 0.00038614513167842338 ) * intrm_sf_mf_300 ) +
( ( 12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 *
6.9647057412830984 ) + t20 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t206 = t81
- intrm_sf_mf_302 ; intrm_sf_mf_300 = t81 / ( t206 == 0.0 ? 1.0E-16 : t206 )
; if ( X [ 222ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [
222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; } if ( X [ 221ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [
221ULL ] >= 1.0 ? 1.0 : X [ 221ULL ] ; } t81 = ( ( ( 1.0 -
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
167ULL ] >= 1.0 ? 1.0 : X [ 167ULL ] ; } t82 = ( ( ( 1.0 -
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
239ULL ] >= 1.0 ? 1.0 : X [ 239ULL ] ; } if ( X [ 240ULL ] <= 0.0 ) { t206 =
0.0 ; } else { t206 = X [ 240ULL ] >= 1.0 ? 1.0 : X [ 240ULL ] ; } t20 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) -
t206 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * 461.523 ) +
t206 * 4124.48151675695 ; t87 = X [ 237ULL ] * t20 ; intrm_sf_mf_561 = X [
238ULL ] / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) * ( X [ 241ULL ] /
( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; t90 = X [ 238ULL ] / ( X
[ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) * ( X [ 242ULL ] / ( X [ 237ULL
] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; t96 = ( X [ 28ULL ] + X [ 220ULL ] )
/ 2.0 * 0.0010000000000000009 ; t94 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) ;
intrm_sf_mf_537 = t96 * t94 ; intrm_sf_mf_563 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_561 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * t90 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = ( X [ 28ULL ] -
X [ 220ULL ] ) * ( intrm_sf_mf_563 >= t94 ? intrm_sf_mf_563 : t94 ) ;
intrm_sf_mf_563 = ( X [ 28ULL ] - X [ 220ULL ] ) / ( t96 == 0.0 ? 1.0E-16 :
t96 ) ; t97 = intrm_sf_mf_563 * intrm_sf_mf_563 * 3.0 - intrm_sf_mf_563 *
intrm_sf_mf_563 * intrm_sf_mf_563 * 2.0 ; if ( X [ 28ULL ] - X [ 220ULL ] <=
0.0 ) { intrm_sf_mf_563 = intrm_sf_mf_537 ; } else if ( X [ 28ULL ] - X [
220ULL ] >= t96 ) { intrm_sf_mf_563 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; } else {
intrm_sf_mf_563 = ( 1.0 - t97 ) * intrm_sf_mf_537 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * t97 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * t90 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_561 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( X [
220ULL ] - X [ 28ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI >= t94 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI : t94 ) ;
intrm_sf_mf_561 = ( X [ 220ULL ] - X [ 28ULL ] ) / ( t96 == 0.0 ? 1.0E-16 :
t96 ) ; t90 = intrm_sf_mf_561 * intrm_sf_mf_561 * 3.0 - intrm_sf_mf_561 *
intrm_sf_mf_561 * intrm_sf_mf_561 * 2.0 ; if ( X [ 220ULL ] - X [ 28ULL ] <=
0.0 ) { intrm_sf_mf_561 = intrm_sf_mf_537 ; } else if ( X [ 220ULL ] - X [
28ULL ] >= t96 ) { intrm_sf_mf_561 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; } else {
intrm_sf_mf_561 = ( 1.0 - t90 ) * intrm_sf_mf_537 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * t90 ; } if
( X [ 28ULL ] > X [ 220ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
intrm_sf_mf_563 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 28ULL ]
< X [ 220ULL ] ? intrm_sf_mf_561 : intrm_sf_mf_537 ; } if ( X [ 237ULL ] <=
216.59999999999997 ) { intrm_sf_mf_561 = 216.59999999999997 ; } else {
intrm_sf_mf_561 = X [ 237ULL ] >= 623.15 ? 623.15 : X [ 237ULL ] ; } t98 =
intrm_sf_mf_561 * intrm_sf_mf_561 ; t90 = ( ( ( 1074.1165326382541 +
intrm_sf_mf_561 * - 0.2214565261064077 ) + t98 * 0.00037212980109010952 ) * (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) -
t206 ) + ( ( 1479.6504774710445 + intrm_sf_mf_561 * 1.200211433705052 ) + t98
* - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) + ( (
12825.281119790017 + intrm_sf_mf_561 * 6.9647057412830984 ) + t98 * -
0.007052486824683288 ) * t206 ; t99 = t90 - t20 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = t90 / ( t99
== 0.0 ? 1.0E-16 : t99 ) ; if ( X [ 255ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 255ULL ] >= 1.0 ? 1.0 : X [ 255ULL ] ; } if ( X [ 256ULL ] <= 0.0
) { intrm_sf_mf_561 = 0.0 ; } else { intrm_sf_mf_561 = X [ 256ULL ] >= 1.0 ?
1.0 : X [ 256ULL ] ; } t90 = ( ( ( 1.0 - t206 ) - intrm_sf_mf_561 ) *
296.802103844292 + t206 * 461.523 ) + intrm_sf_mf_561 * 259.836612622973 ; if
( X [ 268ULL ] <= 0.0 ) { intrm_sf_mf_561 = 0.0 ; } else { intrm_sf_mf_561 =
X [ 268ULL ] >= 1.0 ? 1.0 : X [ 268ULL ] ; } if ( X [ 267ULL ] <= 0.0 ) { t94
= 0.0 ; } else { t94 = X [ 267ULL ] >= 1.0 ? 1.0 : X [ 267ULL ] ; } t96 = ( (
( 1.0 - intrm_sf_mf_561 ) - t94 ) * 296.802103844292 + intrm_sf_mf_561 *
461.523 ) + t94 * 259.836612622973 ; if ( X [ 38ULL ] <= 0.0 ) {
intrm_sf_mf_561 = 0.0 ; } else { intrm_sf_mf_561 = X [ 38ULL ] >= 1.0 ? 1.0 :
X [ 38ULL ] ; } if ( X [ 37ULL ] <= 0.0 ) { t94 = 0.0 ; } else { t94 = X [
37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } intrm_sf_mf_537 = ( ( ( 1.0 -
intrm_sf_mf_561 ) - t94 ) * 296.802103844292 + intrm_sf_mf_561 * 461.523 ) +
t94 * 259.836612622973 ; if ( X [ 41ULL ] <= 0.0 ) { intrm_sf_mf_561 = 0.0 ;
} else { intrm_sf_mf_561 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X
[ 40ULL ] <= 0.0 ) { t94 = 0.0 ; } else { t94 = X [ 40ULL ] >= 1.0 ? 1.0 : X
[ 40ULL ] ; } intrm_sf_mf_563 = ( ( ( 1.0 - intrm_sf_mf_561 ) - t94 ) *
296.802103844292 + intrm_sf_mf_561 * 461.523 ) + t94 * 4124.48151675695 ; if
( X [ 302ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI = X [ 302ULL ] >=
623.15 ? 623.15 : X [ 302ULL ] ; } t99 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI ; t97 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * -
0.2214565261064077 ) + t99 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_561 ) - t94 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
1.200211433705052 ) + t99 * - 0.00038614513167842338 ) * intrm_sf_mf_561 ) +
( ( 12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI *
6.9647057412830984 ) + t99 * - 0.007052486824683288 ) * t94 ; t100 = t97 -
intrm_sf_mf_563 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI
= t97 / ( t100 == 0.0 ? 1.0E-16 : t100 ) ; if ( X [ 305ULL ] <=
216.59999999999997 ) { t97 = 216.59999999999997 ; } else { t97 = X [ 305ULL ]
>= 623.15 ? 623.15 : X [ 305ULL ] ; } t100 = t97 * t97 ; t98 = ( ( (
1074.1165326382541 + t97 * - 0.2214565261064077 ) + t100 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_561 ) - t94 ) + ( (
1479.6504774710445 + t97 * 1.200211433705052 ) + t100 * -
0.00038614513167842338 ) * intrm_sf_mf_561 ) + ( ( 12825.281119790017 + t97 *
6.9647057412830984 ) + t100 * - 0.007052486824683288 ) * t94 ; t101 = t98 -
intrm_sf_mf_563 ; intrm_sf_mf_561 = t98 / ( t101 == 0.0 ? 1.0E-16 : t101 ) ;
if ( X [ 171ULL ] <= 0.0 ) { t94 = 0.0 ; } else { t94 = X [ 171ULL ] >= 1.0 ?
1.0 : X [ 171ULL ] ; } if ( X [ 170ULL ] <= 0.0 ) { t97 = 0.0 ; } else { t97
= X [ 170ULL ] >= 1.0 ? 1.0 : X [ 170ULL ] ; } t98 = ( ( ( 1.0 - t94 ) - t97
) * 296.802103844292 + t94 * 461.523 ) + t97 * 4124.48151675695 ; if ( X [
294ULL ] <= 0.0 ) { t94 = 0.0 ; } else { t94 = X [ 294ULL ] >= 1.0 ? 1.0 : X
[ 294ULL ] ; } if ( X [ 293ULL ] <= 0.0 ) { t97 = 0.0 ; } else { t97 = X [
293ULL ] >= 1.0 ? 1.0 : X [ 293ULL ] ; } t99 = ( ( ( 1.0 - t94 ) - t97 ) *
296.802103844292 + t94 * 461.523 ) + t97 * 4124.48151675695 ; if ( X [ 8ULL ]
<= 0.0 ) { t94 = 0.0 ; } else { t94 = X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ;
} if ( X [ 7ULL ] <= 0.0 ) { t97 = 0.0 ; } else { t97 = X [ 7ULL ] >= 1.0 ?
1.0 : X [ 7ULL ] ; } t100 = ( ( ( 1.0 - t94 ) - t97 ) * 296.802103844292 +
t94 * 461.523 ) + t97 * 4124.48151675695 ; if ( X [ 316ULL ] <=
216.59999999999997 ) { t101 = 216.59999999999997 ; } else { t101 = X [ 316ULL
] >= 623.15 ? 623.15 : X [ 316ULL ] ; } t32 = t101 * t101 ; intrm_sf_mf_973 =
( ( ( 1074.1165326382541 + t101 * - 0.2214565261064077 ) + t32 *
0.00037212980109010952 ) * ( ( 1.0 - t94 ) - t97 ) + ( ( 1479.6504774710445 +
t101 * 1.200211433705052 ) + t32 * - 0.00038614513167842338 ) * t94 ) + ( (
12825.281119790017 + t101 * 6.9647057412830984 ) + t32 * -
0.007052486824683288 ) * t97 ; t35 = intrm_sf_mf_973 - t100 ; t101 =
intrm_sf_mf_973 / ( t35 == 0.0 ? 1.0E-16 : t35 ) ; if ( X [ 319ULL ] <=
216.59999999999997 ) { intrm_sf_mf_973 = 216.59999999999997 ; } else {
intrm_sf_mf_973 = X [ 319ULL ] >= 623.15 ? 623.15 : X [ 319ULL ] ; } t35 =
intrm_sf_mf_973 * intrm_sf_mf_973 ; t32 = ( ( ( 1074.1165326382541 +
intrm_sf_mf_973 * - 0.2214565261064077 ) + t35 * 0.00037212980109010952 ) * (
( 1.0 - t94 ) - t97 ) + ( ( 1479.6504774710445 + intrm_sf_mf_973 *
1.200211433705052 ) + t35 * - 0.00038614513167842338 ) * t94 ) + ( (
12825.281119790017 + intrm_sf_mf_973 * 6.9647057412830984 ) + t35 * -
0.007052486824683288 ) * t97 ; t103 = t32 - t100 ; t94 = t32 / ( t103 == 0.0
? 1.0E-16 : t103 ) ; if ( X [ 71ULL ] <= 0.0 ) { t97 = 0.0 ; } else { t97 = X
[ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 ) {
intrm_sf_mf_973 = 0.0 ; } else { intrm_sf_mf_973 = X [ 70ULL ] >= 1.0 ? 1.0 :
X [ 70ULL ] ; } t32 = ( ( ( 1.0 - t97 ) - intrm_sf_mf_973 ) *
296.802103844292 + t97 * 461.523 ) + intrm_sf_mf_973 * 4124.48151675695 ; if
( X [ 11ULL ] <= 0.0 ) { t97 = 0.0 ; } else { t97 = X [ 11ULL ] >= 1.0 ? 1.0
: X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) { intrm_sf_mf_973 = 0.0 ; } else
{ intrm_sf_mf_973 = X [ 10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ; } t35 = ( ( (
1.0 - t97 ) - intrm_sf_mf_973 ) * 296.802103844292 + t97 * 461.523 ) +
intrm_sf_mf_973 * 4124.48151675695 ; if ( X [ 330ULL ] <= 216.59999999999997
) { t103 = 216.59999999999997 ; } else { t103 = X [ 330ULL ] >= 623.15 ?
623.15 : X [ 330ULL ] ; } t38 = t103 * t103 ; t206 = ( ( ( 1074.1165326382541
+ t103 * - 0.2214565261064077 ) + t38 * 0.00037212980109010952 ) * ( ( 1.0 -
t97 ) - intrm_sf_mf_973 ) + ( ( 1479.6504774710445 + t103 * 1.200211433705052
) + t38 * - 0.00038614513167842338 ) * t97 ) + ( ( 12825.281119790017 + t103
* 6.9647057412830984 ) + t38 * - 0.007052486824683288 ) * intrm_sf_mf_973 ;
t41 = t206 - t35 ; t103 = t206 / ( t41 == 0.0 ? 1.0E-16 : t41 ) ; if ( X [
332ULL ] <= 216.59999999999997 ) { t206 = 216.59999999999997 ; } else { t206
= X [ 332ULL ] >= 623.15 ? 623.15 : X [ 332ULL ] ; } t41 = t206 * t206 ; t38
= ( ( ( 1074.1165326382541 + t206 * - 0.2214565261064077 ) + t41 *
0.00037212980109010952 ) * ( ( 1.0 - t97 ) - intrm_sf_mf_973 ) + ( (
1479.6504774710445 + t206 * 1.200211433705052 ) + t41 * -
0.00038614513167842338 ) * t97 ) + ( ( 12825.281119790017 + t206 *
6.9647057412830984 ) + t41 * - 0.007052486824683288 ) * intrm_sf_mf_973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = t38 - t35 ; t97 = t38
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ; if ( X [ 47ULL ] <=
0.0 ) { intrm_sf_mf_973 = 0.0 ; } else { intrm_sf_mf_973 = X [ 47ULL ] >= 1.0
? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } t38 = ( ( ( 1.0 -
intrm_sf_mf_973 ) - t206 ) * 296.802103844292 + intrm_sf_mf_973 * 461.523 ) +
t206 * 259.836612622973 ; if ( X [ 351ULL ] <= 216.59999999999997 ) { t41 =
216.59999999999997 ; } else { t41 = X [ 351ULL ] >= 623.15 ? 623.15 : X [
351ULL ] ; } t44 = t41 * t41 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = ( ( (
1074.1165326382541 + t41 * - 0.2214565261064077 ) + t44 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_973 ) - t206 ) + ( (
1479.6504774710445 + t41 * 1.200211433705052 ) + t44 * -
0.00038614513167842338 ) * intrm_sf_mf_973 ) + ( ( 900.63941224837913 + t41 *
- 0.044484923911364271 ) + t44 * 0.00036936011832043369 ) * t206 ; t175 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - t38 ; t41 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p / ( t175 == 0.0 ?
1.0E-16 : t175 ) ; if ( X [ 354ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = 216.59999999999997 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = X [ 354ULL ]
>= 623.15 ? 623.15 : X [ 354ULL ] ; } t175 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ; t44 = ( ( (
1074.1165326382541 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
- 0.2214565261064077 ) + t175 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_973 ) - t206 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p * 1.200211433705052 ) +
t175 * - 0.00038614513167842338 ) * intrm_sf_mf_973 ) + ( (
900.63941224837913 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
- 0.044484923911364271 ) + t175 * 0.00036936011832043369 ) * t206 ; t157 =
t44 - t38 ; intrm_sf_mf_973 = t44 / ( t157 == 0.0 ? 1.0E-16 : t157 ) ; if ( X
[ 271ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 = X [ 271ULL ] >= 1.0 ? 1.0
: X [ 271ULL ] ; } if ( X [ 270ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = X [ 270ULL ] >= 1.0 ?
1.0 : X [ 270ULL ] ; } t44 = ( ( ( 1.0 - t206 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * 296.802103844292 +
t206 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
259.836612622973 ; if ( X [ 343ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 =
X [ 343ULL ] >= 1.0 ? 1.0 : X [ 343ULL ] ; } if ( X [ 342ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = X [ 342ULL ] >= 1.0 ?
1.0 : X [ 342ULL ] ; } t175 = ( ( ( 1.0 - t206 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * 296.802103844292 +
t206 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
259.836612622973 ; if ( X [ 381ULL ] <= 0.0 ) { t206 = 0.0 ; } else { t206 =
X [ 381ULL ] >= 1.0 ? 1.0 : X [ 381ULL ] ; } if ( X [ 382ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = X [ 382ULL ] >= 1.0 ?
1.0 : X [ 382ULL ] ; } t157 = ( ( ( 1.0 - t206 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * 296.802103844292 +
t206 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
259.836612622973 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = (
X [ 385ULL ] * 0.07812500122070315 + U_idx_9 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 51ULL ] <= 0.0 ) { U_idx_1 = 0.0 ; } else {
U_idx_1 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0
) { U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ]
; } U_idx_9 = ( ( ( 1.0 - U_idx_1 ) - U_idx_3 ) * 296.802103844292 + U_idx_1
* 461.523 ) + U_idx_3 * 259.836612622973 ; if ( X [ 389ULL ] <=
216.59999999999997 ) { t138 = 216.59999999999997 ; } else { t138 = X [ 389ULL
] >= 623.15 ? 623.15 : X [ 389ULL ] ; } t135 = t138 * t138 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = ( ( (
1074.1165326382541 + t138 * - 0.2214565261064077 ) + t135 *
0.00037212980109010952 ) * ( ( 1.0 - U_idx_1 ) - U_idx_3 ) + ( (
1479.6504774710445 + t138 * 1.200211433705052 ) + t135 * -
0.00038614513167842338 ) * U_idx_1 ) + ( ( 900.63941224837913 + t138 * -
0.044484923911364271 ) + t135 * 0.00036936011832043369 ) * U_idx_3 ; t108 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 - U_idx_9 ;
t138 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 / (
t108 == 0.0 ? 1.0E-16 : t108 ) ; if ( X [ 393ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = X [ 393ULL ]
>= 623.15 ? 623.15 : X [ 393ULL ] ; } t108 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ; t135 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * -
0.2214565261064077 ) + t108 * 0.00037212980109010952 ) * ( ( 1.0 - U_idx_1 )
- U_idx_3 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
1.200211433705052 ) + t108 * - 0.00038614513167842338 ) * U_idx_1 ) + ( (
900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * -
0.044484923911364271 ) + t108 * 0.00036936011832043369 ) * U_idx_3 ; t109 =
t135 - U_idx_9 ; U_idx_1 = t135 / ( t109 == 0.0 ? 1.0E-16 : t109 ) ; if ( X [
368ULL ] <= 0.0 ) { U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 368ULL ] >= 1.0 ?
1.0 : X [ 368ULL ] ; } if ( X [ 367ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = X [ 367ULL
] >= 1.0 ? 1.0 : X [ 367ULL ] ; } t135 = ( ( ( 1.0 - U_idx_3 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) *
296.802103844292 + U_idx_3 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
259.836612622973 ; if ( X [ 387ULL ] <= 0.0 ) { U_idx_3 = 0.0 ; } else {
U_idx_3 = X [ 387ULL ] >= 1.0 ? 1.0 : X [ 387ULL ] ; } if ( X [ 386ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = X
[ 386ULL ] >= 1.0 ? 1.0 : X [ 386ULL ] ; } t108 = ( ( ( 1.0 - U_idx_3 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) *
296.802103844292 + U_idx_3 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
259.836612622973 ; if ( X [ 385ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { U_idx_3 = 1.9634954084936209E-11 ; } else if ( X [
385ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) { U_idx_3 =
0.0012566370614359179 ; } else { U_idx_3 = X [ 385ULL ] *
0.0019634954084936209 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = U_idx_3 /
0.0019634954084936209 ; if ( X [ 408ULL ] <= 0.0 ) { U_idx_3 = 0.0 ; } else {
U_idx_3 = X [ 408ULL ] >= 1.0 ? 1.0 : X [ 408ULL ] ; } if ( X [ 409ULL ] <=
0.0 ) { t109 = 0.0 ; } else { t109 = X [ 409ULL ] >= 1.0 ? 1.0 : X [ 409ULL ]
; } intrm_sf_mf_1268 = ( ( ( 1.0 - U_idx_3 ) - t109 ) * 296.802103844292 +
U_idx_3 * 461.523 ) + t109 * 259.836612622973 ; t111 = X [ 406ULL ] *
intrm_sf_mf_1268 ; intrm_sf_mf_1434 = X [ 407ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * ( X [ 410ULL ] / (
X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ; intrm_sf_mf_1299 = X [
407ULL ] / 1.01325 * ( X [ 411ULL ] / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [
406ULL ] ) ) ; t118 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p
+ 1.01325 ) / 2.0 * 0.0010000000000000009 ; t116 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) ;
intrm_sf_mf_1364 = t118 * t116 ; intrm_sf_mf_1436 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1434 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1299 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) * (
intrm_sf_mf_1436 >= t116 ? intrm_sf_mf_1436 : t116 ) ; intrm_sf_mf_1436 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) / ( t118 ==
0.0 ? 1.0E-16 : t118 ) ; t128 = intrm_sf_mf_1436 * intrm_sf_mf_1436 * 3.0 -
intrm_sf_mf_1436 * intrm_sf_mf_1436 * intrm_sf_mf_1436 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intrm_sf_mf_1436 = intrm_sf_mf_1364 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 >= t118 ) {
intrm_sf_mf_1436 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI ; } else {
intrm_sf_mf_1436 = ( 1.0 - t128 ) * intrm_sf_mf_1364 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI * t128 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1299 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1434 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 = ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI >= t116 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI : t116 ) ;
intrm_sf_mf_1434 = ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) / ( t118 == 0.0 ?
1.0E-16 : t118 ) ; intrm_sf_mf_1299 = intrm_sf_mf_1434 * intrm_sf_mf_1434 *
3.0 - intrm_sf_mf_1434 * intrm_sf_mf_1434 * intrm_sf_mf_1434 * 2.0 ; if (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p <= 0.0 ) {
intrm_sf_mf_1434 = intrm_sf_mf_1364 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p >= t118 ) {
intrm_sf_mf_1434 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ; } else {
intrm_sf_mf_1434 = ( 1.0 - intrm_sf_mf_1299 ) * intrm_sf_mf_1364 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 *
intrm_sf_mf_1299 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 =
intrm_sf_mf_1436 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p < 1.01325 ?
intrm_sf_mf_1434 : intrm_sf_mf_1364 ; } if ( X [ 406ULL ] <=
216.59999999999997 ) { intrm_sf_mf_1434 = 216.59999999999997 ; } else {
intrm_sf_mf_1434 = X [ 406ULL ] >= 623.15 ? 623.15 : X [ 406ULL ] ; } t120 =
intrm_sf_mf_1434 * intrm_sf_mf_1434 ; intrm_sf_mf_1299 = ( ( (
1074.1165326382541 + intrm_sf_mf_1434 * - 0.2214565261064077 ) + t120 *
0.00037212980109010952 ) * ( ( 1.0 - U_idx_3 ) - t109 ) + ( (
1479.6504774710445 + intrm_sf_mf_1434 * 1.200211433705052 ) + t120 * -
0.00038614513167842338 ) * U_idx_3 ) + ( ( 900.63941224837913 +
intrm_sf_mf_1434 * - 0.044484923911364271 ) + t120 * 0.00036936011832043369 )
* t109 ; t121 = intrm_sf_mf_1299 - intrm_sf_mf_1268 ; U_idx_3 =
intrm_sf_mf_1299 / ( t121 == 0.0 ? 1.0E-16 : t121 ) ; if ( X [ 14ULL ] <= 0.0
) { t109 = 0.0 ; } else { t109 = X [ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; }
if ( X [ 13ULL ] <= 0.0 ) { intrm_sf_mf_1434 = 0.0 ; } else {
intrm_sf_mf_1434 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; }
intrm_sf_mf_1299 = ( ( ( 1.0 - t109 ) - intrm_sf_mf_1434 ) * 296.802103844292
+ t109 * 461.523 ) + intrm_sf_mf_1434 * 259.836612622973 ; if ( X [ 413ULL ]
<= 216.59999999999997 ) { t116 = 216.59999999999997 ; } else { t116 = X [
413ULL ] >= 623.15 ? 623.15 : X [ 413ULL ] ; } t121 = t116 * t116 ; t118 = (
( ( 1074.1165326382541 + t116 * - 0.2214565261064077 ) + t121 *
0.00037212980109010952 ) * ( ( 1.0 - t109 ) - intrm_sf_mf_1434 ) + ( (
1479.6504774710445 + t116 * 1.200211433705052 ) + t121 * -
0.00038614513167842338 ) * t109 ) + ( ( 900.63941224837913 + t116 * -
0.044484923911364271 ) + t121 * 0.00036936011832043369 ) * intrm_sf_mf_1434 ;
t62 = t118 - intrm_sf_mf_1299 ; t116 = t118 / ( t62 == 0.0 ? 1.0E-16 : t62 )
; if ( X [ 416ULL ] <= 216.59999999999997 ) { t118 = 216.59999999999997 ; }
else { t118 = X [ 416ULL ] >= 623.15 ? 623.15 : X [ 416ULL ] ; } t62 = t118 *
t118 ; intrm_sf_mf_1364 = ( ( ( 1074.1165326382541 + t118 * -
0.2214565261064077 ) + t62 * 0.00037212980109010952 ) * ( ( 1.0 - t109 ) -
intrm_sf_mf_1434 ) + ( ( 1479.6504774710445 + t118 * 1.200211433705052 ) +
t62 * - 0.00038614513167842338 ) * t109 ) + ( ( 900.63941224837913 + t118 * -
0.044484923911364271 ) + t62 * 0.00036936011832043369 ) * intrm_sf_mf_1434 ;
t65 = intrm_sf_mf_1364 - intrm_sf_mf_1299 ; t109 = intrm_sf_mf_1364 / ( t65
== 0.0 ? 1.0E-16 : t65 ) ; if ( X [ 75ULL ] <= 0.0 ) { intrm_sf_mf_1434 = 0.0
; } else { intrm_sf_mf_1434 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if (
X [ 74ULL ] <= 0.0 ) { t118 = 0.0 ; } else { t118 = X [ 74ULL ] >= 1.0 ? 1.0
: X [ 74ULL ] ; } intrm_sf_mf_1364 = ( ( ( 1.0 - intrm_sf_mf_1434 ) - t118 )
* 296.802103844292 + intrm_sf_mf_1434 * 461.523 ) + t118 * 259.836612622973 ;
if ( X [ 17ULL ] <= 0.0 ) { intrm_sf_mf_1434 = 0.0 ; } else {
intrm_sf_mf_1434 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL
] <= 0.0 ) { t118 = 0.0 ; } else { t118 = X [ 16ULL ] >= 1.0 ? 1.0 : X [
16ULL ] ; } intrm_sf_mf_1436 = ( ( ( 1.0 - intrm_sf_mf_1434 ) - t118 ) *
296.802103844292 + intrm_sf_mf_1434 * 461.523 ) + t118 * 259.836612622973 ;
if ( X [ 427ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = X [ 427ULL ] >=
623.15 ? 623.15 : X [ 427ULL ] ; } t65 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI ; t128 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI * -
0.2214565261064077 ) + t65 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1434 ) - t118 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI *
1.200211433705052 ) + t65 * - 0.00038614513167842338 ) * intrm_sf_mf_1434 ) +
( ( 900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI * -
0.044484923911364271 ) + t65 * 0.00036936011832043369 ) * t118 ; t124 = t128
- intrm_sf_mf_1436 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI = t128 / ( t124
== 0.0 ? 1.0E-16 : t124 ) ; if ( X [ 429ULL ] <= 216.59999999999997 ) { t128
= 216.59999999999997 ; } else { t128 = X [ 429ULL ] >= 623.15 ? 623.15 : X [
429ULL ] ; } t124 = t128 * t128 ; t120 = ( ( ( 1074.1165326382541 + t128 * -
0.2214565261064077 ) + t124 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1434 ) - t118 ) + ( ( 1479.6504774710445 + t128 *
1.200211433705052 ) + t124 * - 0.00038614513167842338 ) * intrm_sf_mf_1434 )
+ ( ( 900.63941224837913 + t128 * - 0.044484923911364271 ) + t124 *
0.00036936011832043369 ) * t118 ; t125 = t120 - intrm_sf_mf_1436 ;
intrm_sf_mf_1434 = t120 / ( t125 == 0.0 ? 1.0E-16 : t125 ) ; if ( X [ 372ULL
] <= 0.0 ) { t118 = 0.0 ; } else { t118 = X [ 372ULL ] >= 1.0 ? 1.0 : X [
372ULL ] ; } if ( X [ 371ULL ] <= 0.0 ) { t128 = 0.0 ; } else { t128 = X [
371ULL ] >= 1.0 ? 1.0 : X [ 371ULL ] ; } t120 = ( ( ( 1.0 - t118 ) - t128 ) *
296.802103844292 + t118 * 461.523 ) + t128 * 259.836612622973 ; if ( U_idx_10
>= 1.0 ) { t118 = 1.0 ; } else { t118 = U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; }
if ( X [ 260ULL ] <= 0.0 ) { t128 = 0.0 ; } else { t128 = X [ 260ULL ] >= 1.0
? 1.0 : X [ 260ULL ] ; } if ( X [ 259ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; } t121 = ( ( ( 1.0 - t128 )
- t206 ) * 296.802103844292 + t128 * 461.523 ) + t206 * 259.836612622973 ; if
( X [ 122ULL ] <= 0.0 ) { t128 = 0.0 ; } else { t128 = X [ 122ULL ] >= 1.0 ?
1.0 : X [ 122ULL ] ; } if ( X [ 121ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 121ULL ] >= 1.0 ? 1.0 : X [ 121ULL ] ; } t62 = ( ( ( 1.0 - t128 )
- t206 ) * 296.802103844292 + t128 * 461.523 ) + t206 * 4124.48151675695 ; if
( X [ 174ULL ] <= 0.0 ) { t128 = 0.0 ; } else { t128 = X [ 174ULL ] >= 1.0 ?
1.0 : X [ 174ULL ] ; } if ( X [ 173ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 173ULL ] >= 1.0 ? 1.0 : X [ 173ULL ] ; } t65 = ( ( ( 1.0 - t128 )
- t206 ) * 296.802103844292 + t128 * 461.523 ) + t206 * 4124.48151675695 ; if
( X [ 206ULL ] <= 0.0 ) { t128 = 0.0 ; } else { t128 = X [ 206ULL ] >= 1.0 ?
1.0 : X [ 206ULL ] ; } if ( X [ 205ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 205ULL ] >= 1.0 ? 1.0 : X [ 205ULL ] ; } t124 = ( ( ( 1.0 - t128 )
- t206 ) * 296.802103844292 + t128 * 461.523 ) + t206 * 4124.48151675695 ; if
( X [ 246ULL ] <= 0.0 ) { t128 = 0.0 ; } else { t128 = X [ 246ULL ] >= 1.0 ?
1.0 : X [ 246ULL ] ; } if ( X [ 245ULL ] <= 0.0 ) { t206 = 0.0 ; } else {
t206 = X [ 245ULL ] >= 1.0 ? 1.0 : X [ 245ULL ] ; } t125 = ( ( ( 1.0 - t128 )
- t206 ) * 296.802103844292 + t128 * 461.523 ) + t206 * 259.836612622973 ; t1
[ 0ULL ] = pmf_get_inf ( ) ; for ( t2 = 0ULL ; t2 < 42ULL ; t2 ++ ) { t3 = t2
/ 42ULL ; t128 = t1 [ t3 > 0ULL ? 0ULL : t3 ] ; t206 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField0 [ t2 ] * 1.0E-5 ; t1 [ t3 > 0ULL ? 0ULL : t3 ] = t128 >
t206 ? t206 : t128 ; } t0 [ 0ULL ] = ( int32_T ) ( X [ 60ULL ] <= 4.03416E-7
) ; t0 [ 1ULL ] = ( int32_T ) ( t1 [ 0ULL ] >= X [ 58ULL ] ) ; t0 [ 2ULL ] =
( int32_T ) ( X [ 139ULL ] * t190 * intrm_sf_mf_29 >= 0.0 ) ; t0 [ 3ULL ] = (
int32_T ) ( X [ 351ULL ] * t38 / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL
] ) >= 0.0 ) ; t0 [ 4ULL ] = ( int32_T ) ( X [ 354ULL ] * t38 / ( X [ 355ULL
] == 0.0 ? 1.0E-16 : X [ 355ULL ] ) >= 0.0 ) ; t0 [ 5ULL ] = ( int32_T ) ( X
[ 45ULL ] * t38 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) >= 0.0 ) ;
t0 [ 6ULL ] = ( int32_T ) ( X [ 370ULL ] * t120 / 1.01325 >= 0.0 ) ; t0 [
7ULL ] = ( int32_T ) ( t157 * 293.15 / 1.01325 >= 0.0 ) ; t0 [ 8ULL ] = (
int32_T ) ( X [ 365ULL ] * t135 / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [
366ULL ] ) >= 0.0 ) ; t0 [ 9ULL ] = ( int32_T ) ( X [ 384ULL ] * t108 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) >= 0.0 ) ; t0 [ 10ULL
] = ( int32_T ) ( X [ 389ULL ] * t138 * U_idx_9 >= 0.0 ) ; t0 [ 11ULL ] = (
int32_T ) ( X [ 393ULL ] * U_idx_1 * U_idx_9 >= 0.0 ) ; t138 = X [ 390ULL ] *
X [ 390ULL ] * t138 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ; t0 [ 12ULL ] =
( int32_T ) ( t138 / ( X [ 389ULL ] == 0.0 ? 1.0E-16 : X [ 389ULL ] ) >= 0.0
) ; t0 [ 13ULL ] = ( int32_T ) ( X [ 143ULL ] * t210 * intrm_sf_mf_29 >= 0.0
) ; U_idx_1 = X [ 394ULL ] * X [ 394ULL ] * U_idx_1 / ( U_idx_9 == 0.0 ?
1.0E-16 : U_idx_9 ) ; t0 [ 14ULL ] = ( int32_T ) ( U_idx_1 / ( X [ 393ULL ]
== 0.0 ? 1.0E-16 : X [ 393ULL ] ) >= 0.0 ) ; t0 [ 15ULL ] = ( int32_T ) ( X [
389ULL ] * U_idx_9 / ( X [ 390ULL ] == 0.0 ? 1.0E-16 : X [ 390ULL ] ) >= 0.0
) ; t0 [ 16ULL ] = ( int32_T ) ( X [ 393ULL ] * U_idx_9 / ( X [ 394ULL ] ==
0.0 ? 1.0E-16 : X [ 394ULL ] ) >= 0.0 ) ; t0 [ 17ULL ] = ( int32_T ) ( X [
49ULL ] * U_idx_9 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) >= 0.0 ) ;
t0 [ 18ULL ] = ( int32_T ) ( X [ 407ULL ] / ( t111 == 0.0 ? 1.0E-16 : t111 )
* 2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val9 ) >= 0.0 ) ;
t0 [ 19ULL ] = ( int32_T ) ( X [ 407ULL ] * X [ 407ULL ] * U_idx_3 / (
intrm_sf_mf_1268 == 0.0 ? 1.0E-16 : intrm_sf_mf_1268 ) / ( X [ 406ULL ] ==
0.0 ? 1.0E-16 : X [ 406ULL ] ) >= 0.0 ) ; t0 [ 20ULL ] = ( int32_T ) ( X [
410ULL ] * intrm_sf_mf_1268 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) >= 0.0 ) ; t0 [ 21ULL
] = ( int32_T ) ( X [ 411ULL ] * intrm_sf_mf_1268 / 1.01325 >= 0.0 ) ; t190 =
X [ 140ULL ] * X [ 140ULL ] * t190 / ( intrm_sf_mf_29 == 0.0 ? 1.0E-16 :
intrm_sf_mf_29 ) ; t0 [ 22ULL ] = ( int32_T ) ( t190 / ( X [ 139ULL ] == 0.0
? 1.0E-16 : X [ 139ULL ] ) >= 0.0 ) ; t0 [ 23ULL ] = ( int32_T ) ( t111 / ( X
[ 407ULL ] == 0.0 ? 1.0E-16 : X [ 407ULL ] ) >= 0.0 ) ; t0 [ 24ULL ] = (
int32_T ) ( X [ 340ULL ] * t175 / ( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [
341ULL ] ) >= 0.0 ) ; t0 [ 25ULL ] = ( int32_T ) ( X [ 72ULL ] *
intrm_sf_mf_1364 / ( X [ 73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) >= 0.0 ) ;
t0 [ 26ULL ] = ( int32_T ) ( X [ 413ULL ] * t116 * intrm_sf_mf_1299 >= 0.0 )
; t0 [ 27ULL ] = ( int32_T ) ( X [ 416ULL ] * t109 * intrm_sf_mf_1299 >= 0.0
) ; t0 [ 28ULL ] = ( int32_T ) ( X [ 414ULL ] * X [ 414ULL ] * t116 / (
intrm_sf_mf_1299 == 0.0 ? 1.0E-16 : intrm_sf_mf_1299 ) / ( X [ 413ULL ] ==
0.0 ? 1.0E-16 : X [ 413ULL ] ) >= 0.0 ) ; t0 [ 29ULL ] = ( int32_T ) ( X [
417ULL ] * X [ 417ULL ] * t109 / ( intrm_sf_mf_1299 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1299 ) / ( X [ 416ULL ] == 0.0 ? 1.0E-16 : X [ 416ULL ] ) >= 0.0
) ; t0 [ 30ULL ] = ( int32_T ) ( X [ 413ULL ] * intrm_sf_mf_1299 / ( X [
414ULL ] == 0.0 ? 1.0E-16 : X [ 414ULL ] ) >= 0.0 ) ; t0 [ 31ULL ] = (
int32_T ) ( X [ 416ULL ] * intrm_sf_mf_1299 / ( X [ 417ULL ] == 0.0 ? 1.0E-16
: X [ 417ULL ] ) >= 0.0 ) ; t0 [ 32ULL ] = ( int32_T ) ( X [ 12ULL ] *
intrm_sf_mf_1299 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) >= 0.0 ) ;
t210 = X [ 144ULL ] * X [ 144ULL ] * t210 / ( intrm_sf_mf_29 == 0.0 ? 1.0E-16
: intrm_sf_mf_29 ) ; t0 [ 33ULL ] = ( int32_T ) ( t210 / ( X [ 143ULL ] ==
0.0 ? 1.0E-16 : X [ 143ULL ] ) >= 0.0 ) ; t0 [ 34ULL ] = ( int32_T ) ( X [
427ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI *
intrm_sf_mf_1436 >= 0.0 ) ; t0 [ 35ULL ] = ( int32_T ) ( X [ 429ULL ] *
intrm_sf_mf_1434 * intrm_sf_mf_1436 >= 0.0 ) ; t0 [ 36ULL ] = ( int32_T ) ( X
[ 428ULL ] * X [ 428ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_gamma_AI / (
intrm_sf_mf_1436 == 0.0 ? 1.0E-16 : intrm_sf_mf_1436 ) / ( X [ 427ULL ] ==
0.0 ? 1.0E-16 : X [ 427ULL ] ) >= 0.0 ) ; t0 [ 37ULL ] = ( int32_T ) ( X [
430ULL ] * X [ 430ULL ] * intrm_sf_mf_1434 / ( intrm_sf_mf_1436 == 0.0 ?
1.0E-16 : intrm_sf_mf_1436 ) / ( X [ 429ULL ] == 0.0 ? 1.0E-16 : X [ 429ULL ]
) >= 0.0 ) ; t0 [ 38ULL ] = ( int32_T ) ( X [ 427ULL ] * intrm_sf_mf_1436 / (
X [ 428ULL ] == 0.0 ? 1.0E-16 : X [ 428ULL ] ) >= 0.0 ) ; t0 [ 39ULL ] = (
int32_T ) ( X [ 429ULL ] * intrm_sf_mf_1436 / ( X [ 430ULL ] == 0.0 ? 1.0E-16
: X [ 430ULL ] ) >= 0.0 ) ; t0 [ 40ULL ] = ( int32_T ) ( X [ 15ULL ] *
intrm_sf_mf_1436 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) >= 0.0 ) ;
t0 [ 41ULL ] = ( int32_T ) ( X [ 56ULL ] > X [ 439ULL ] ) ; t0 [ 42ULL ] = (
int32_T ) ( X [ 139ULL ] * intrm_sf_mf_29 / ( X [ 140ULL ] == 0.0 ? 1.0E-16 :
X [ 140ULL ] ) >= 0.0 ) ; t0 [ 43ULL ] = ( int32_T ) ( X [ 56ULL ] < - X [
439ULL ] ) ; t0 [ 44ULL ] = ( int32_T ) ( X [ 60ULL ] > 0.0 ) ; t0 [ 45ULL ]
= ( int32_T ) ( X [ 58ULL ] >= 0.0 ) ; t0 [ 46ULL ] = ( int32_T ) ( X [ 18ULL
] > 0.0 ) ; t0 [ 47ULL ] = ( int32_T ) ( ( 1.0 - X [ 131ULL ] ) - X [ 132ULL
] >= 0.0 ) ; t0 [ 48ULL ] = ( int32_T ) ( X [ 116ULL ] >= 0.01 ) ; t0 [ 49ULL
] = ( int32_T ) ( X [ 116ULL ] <= pmf_get_inf ( ) ) ; t0 [ 50ULL ] = (
int32_T ) ( X [ 115ULL ] >= 216.59999999999997 ) ; t0 [ 51ULL ] = ( int32_T )
( X [ 115ULL ] <= 623.15 ) ; t0 [ 52ULL ] = ( int32_T ) ( X [ 135ULL ] >=
0.01 ) ; t0 [ 53ULL ] = ( int32_T ) ( X [ 143ULL ] * intrm_sf_mf_29 / ( X [
144ULL ] == 0.0 ? 1.0E-16 : X [ 144ULL ] ) >= 0.0 ) ; t0 [ 54ULL ] = (
int32_T ) ( X [ 135ULL ] <= pmf_get_inf ( ) ) ; t0 [ 55ULL ] = ( int32_T ) (
X [ 134ULL ] >= 216.59999999999997 ) ; t0 [ 56ULL ] = ( int32_T ) ( X [
134ULL ] <= 623.15 ) ; t0 [ 57ULL ] = ( int32_T ) ( X [ 20ULL ] >= 0.01 ) ;
t0 [ 58ULL ] = ( int32_T ) ( X [ 20ULL ] <= pmf_get_inf ( ) ) ; t0 [ 59ULL ]
= ( int32_T ) ( X [ 19ULL ] >= 216.59999999999997 ) ; t0 [ 60ULL ] = (
int32_T ) ( X [ 19ULL ] <= 623.15 ) ; t0 [ 61ULL ] = ( int32_T ) ( X [ 120ULL
] >= 216.59999999999997 ) ; t0 [ 62ULL ] = ( int32_T ) ( X [ 120ULL ] <=
623.15 ) ; t0 [ 63ULL ] = ( int32_T ) ( X [ 24ULL ] >= 0.01 ) ; t0 [ 64ULL ]
= ( int32_T ) ( X [ 19ULL ] * intrm_sf_mf_29 / ( X [ 20ULL ] == 0.0 ? 1.0E-16
: X [ 20ULL ] ) >= 0.0 ) ; t0 [ 65ULL ] = ( int32_T ) ( X [ 24ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 66ULL ] = ( int32_T ) ( X [ 23ULL ] >=
216.59999999999997 ) ; t0 [ 67ULL ] = ( int32_T ) ( X [ 23ULL ] <= 623.15 ) ;
t0 [ 68ULL ] = ( int32_T ) ( X [ 172ULL ] >= 216.59999999999997 ) ; t0 [
69ULL ] = ( int32_T ) ( X [ 172ULL ] <= 623.15 ) ; t0 [ 70ULL ] = ( int32_T )
( X [ 28ULL ] >= 0.01 ) ; t0 [ 71ULL ] = ( int32_T ) ( X [ 28ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 72ULL ] = ( int32_T ) ( X [ 27ULL ] >=
216.59999999999997 ) ; t0 [ 73ULL ] = ( int32_T ) ( X [ 27ULL ] <= 623.15 ) ;
t0 [ 74ULL ] = ( int32_T ) ( X [ 220ULL ] >= 0.01 ) ; t0 [ 75ULL ] = (
int32_T ) ( X [ 134ULL ] * t8 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL
] ) >= 0.0 ) ; t0 [ 76ULL ] = ( int32_T ) ( X [ 220ULL ] <= pmf_get_inf ( ) )
; t0 [ 77ULL ] = ( int32_T ) ( X [ 219ULL ] >= 216.59999999999997 ) ; t0 [
78ULL ] = ( int32_T ) ( X [ 219ULL ] <= 623.15 ) ; t0 [ 79ULL ] = ( int32_T )
( X [ 166ULL ] >= 216.59999999999997 ) ; t0 [ 80ULL ] = ( int32_T ) ( X [
166ULL ] <= 623.15 ) ; t0 [ 81ULL ] = ( int32_T ) ( X [ 32ULL ] >= 0.01 ) ;
t0 [ 82ULL ] = ( int32_T ) ( X [ 32ULL ] <= pmf_get_inf ( ) ) ; t0 [ 83ULL ]
= ( int32_T ) ( X [ 31ULL ] >= 216.59999999999997 ) ; t0 [ 84ULL ] = (
int32_T ) ( X [ 31ULL ] <= 623.15 ) ; t0 [ 85ULL ] = ( int32_T ) ( X [ 204ULL
] >= 216.59999999999997 ) ; t0 [ 86ULL ] = ( int32_T ) ( X [ 120ULL ] * t62 /
1.01325 >= 0.0 ) ; t0 [ 87ULL ] = ( int32_T ) ( X [ 204ULL ] <= 623.15 ) ; t0
[ 88ULL ] = ( int32_T ) ( ( 1.0 - X [ 255ULL ] ) - X [ 256ULL ] >= 0.0 ) ; t0
[ 89ULL ] = ( int32_T ) ( X [ 244ULL ] >= 216.59999999999997 ) ; t0 [ 90ULL ]
= ( int32_T ) ( X [ 244ULL ] <= 623.15 ) ; t0 [ 91ULL ] = ( int32_T ) ( X [
35ULL ] >= 0.01 ) ; t0 [ 92ULL ] = ( int32_T ) ( X [ 35ULL ] <= pmf_get_inf (
) ) ; t0 [ 93ULL ] = ( int32_T ) ( X [ 258ULL ] >= 216.59999999999997 ) ; t0
[ 94ULL ] = ( int32_T ) ( X [ 258ULL ] <= 623.15 ) ; t0 [ 95ULL ] = ( int32_T
) ( X [ 36ULL ] >= 216.59999999999997 ) ; t0 [ 96ULL ] = ( int32_T ) ( X [
36ULL ] <= 623.15 ) ; t0 [ 97ULL ] = ( int32_T ) ( X [ 160ULL ] / ( t72 ==
0.0 ? 1.0E-16 : t72 ) * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) >=
0.0 ) ; t0 [ 98ULL ] = ( int32_T ) ( X [ 169ULL ] >= 216.59999999999997 ) ;
t0 [ 99ULL ] = ( int32_T ) ( X [ 169ULL ] <= 623.15 ) ; t0 [ 100ULL ] = (
int32_T ) ( X [ 292ULL ] >= 0.01 ) ; t0 [ 101ULL ] = ( int32_T ) ( X [ 292ULL
] <= pmf_get_inf ( ) ) ; t0 [ 102ULL ] = ( int32_T ) ( X [ 291ULL ] >=
216.59999999999997 ) ; t0 [ 103ULL ] = ( int32_T ) ( X [ 291ULL ] <= 623.15 )
; t0 [ 104ULL ] = ( int32_T ) ( X [ 42ULL ] >= 0.01 ) ; t0 [ 105ULL ] = (
int32_T ) ( X [ 42ULL ] <= pmf_get_inf ( ) ) ; t0 [ 106ULL ] = ( int32_T ) (
X [ 39ULL ] >= 216.59999999999997 ) ; t0 [ 107ULL ] = ( int32_T ) ( X [ 39ULL
] <= 623.15 ) ; t0 [ 108ULL ] = ( int32_T ) ( X [ 59ULL ] >= 0.9 ) ; t0 [
109ULL ] = ( int32_T ) ( X [ 160ULL ] * X [ 160ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / (
intrm_sf_mf_173 == 0.0 ? 1.0E-16 : intrm_sf_mf_173 ) / ( X [ 159ULL ] == 0.0
? 1.0E-16 : X [ 159ULL ] ) >= 0.0 ) ; t0 [ 110ULL ] = ( int32_T ) ( X [ 69ULL
] >= 0.01 ) ; t0 [ 111ULL ] = ( int32_T ) ( X [ 69ULL ] <= pmf_get_inf ( ) )
; t0 [ 112ULL ] = ( int32_T ) ( X [ 68ULL ] >= 216.59999999999997 ) ; t0 [
113ULL ] = ( int32_T ) ( X [ 68ULL ] <= 623.15 ) ; t0 [ 114ULL ] = ( int32_T
) ( X [ 43ULL ] >= 0.01 ) ; t0 [ 115ULL ] = ( int32_T ) ( X [ 43ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 116ULL ] = ( int32_T ) ( X [ 6ULL ] >=
216.59999999999997 ) ; t0 [ 117ULL ] = ( int32_T ) ( X [ 6ULL ] <= 623.15 ) ;
t0 [ 118ULL ] = ( int32_T ) ( X [ 44ULL ] >= 0.01 ) ; t0 [ 119ULL ] = (
int32_T ) ( X [ 44ULL ] <= pmf_get_inf ( ) ) ; t0 [ 120ULL ] = ( int32_T ) (
X [ 163ULL ] * intrm_sf_mf_173 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL
] ) >= 0.0 ) ; t0 [ 121ULL ] = ( int32_T ) ( X [ 9ULL ] >= 216.59999999999997
) ; t0 [ 122ULL ] = ( int32_T ) ( X [ 9ULL ] <= 623.15 ) ; t0 [ 123ULL ] = (
int32_T ) ( X [ 269ULL ] >= 216.59999999999997 ) ; t0 [ 124ULL ] = ( int32_T
) ( X [ 269ULL ] <= 623.15 ) ; t0 [ 125ULL ] = ( int32_T ) ( X [ 341ULL ] >=
0.01 ) ; t0 [ 126ULL ] = ( int32_T ) ( X [ 341ULL ] <= pmf_get_inf ( ) ) ; t0
[ 127ULL ] = ( int32_T ) ( X [ 340ULL ] >= 216.59999999999997 ) ; t0 [ 128ULL
] = ( int32_T ) ( X [ 340ULL ] <= 623.15 ) ; t0 [ 129ULL ] = ( int32_T ) ( X
[ 48ULL ] >= 0.01 ) ; t0 [ 130ULL ] = ( int32_T ) ( X [ 48ULL ] <=
pmf_get_inf ( ) ) ; t0 [ 131ULL ] = ( int32_T ) ( X [ 164ULL ] *
intrm_sf_mf_173 / 1.01325 >= 0.0 ) ; t0 [ 132ULL ] = ( int32_T ) ( X [ 45ULL
] >= 216.59999999999997 ) ; t0 [ 133ULL ] = ( int32_T ) ( X [ 45ULL ] <=
623.15 ) ; t0 [ 134ULL ] = ( int32_T ) ( ( 1.0 - X [ 381ULL ] ) - X [ 382ULL
] >= 0.0 ) ; t0 [ 135ULL ] = ( int32_T ) ( X [ 366ULL ] >= 0.01 ) ; t0 [
136ULL ] = ( int32_T ) ( X [ 366ULL ] <= pmf_get_inf ( ) ) ; t0 [ 137ULL ] =
( int32_T ) ( X [ 365ULL ] >= 216.59999999999997 ) ; t0 [ 138ULL ] = (
int32_T ) ( X [ 365ULL ] <= 623.15 ) ; t0 [ 139ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p >= 0.01 ) ; t0 [ 140ULL
] = ( int32_T ) ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p <=
pmf_get_inf ( ) ) ; t0 [ 141ULL ] = ( int32_T ) ( X [ 384ULL ] >=
216.59999999999997 ) ; t0 [ 142ULL ] = ( int32_T ) ( t72 / ( X [ 160ULL ] ==
0.0 ? 1.0E-16 : X [ 160ULL ] ) >= 0.0 ) ; t0 [ 143ULL ] = ( int32_T ) ( X [
384ULL ] <= 623.15 ) ; t0 [ 144ULL ] = ( int32_T ) ( X [ 50ULL ] >= 0.01 ) ;
t0 [ 145ULL ] = ( int32_T ) ( X [ 50ULL ] <= pmf_get_inf ( ) ) ; t0 [ 146ULL
] = ( int32_T ) ( X [ 49ULL ] >= 216.59999999999997 ) ; t0 [ 147ULL ] = (
int32_T ) ( X [ 49ULL ] <= 623.15 ) ; t0 [ 148ULL ] = ( int32_T ) ( X [
370ULL ] >= 216.59999999999997 ) ; t0 [ 149ULL ] = ( int32_T ) ( X [ 370ULL ]
<= 623.15 ) ; t0 [ 150ULL ] = ( int32_T ) ( X [ 73ULL ] >= 0.01 ) ; t0 [
151ULL ] = ( int32_T ) ( X [ 73ULL ] <= pmf_get_inf ( ) ) ; t0 [ 152ULL ] = (
int32_T ) ( X [ 72ULL ] >= 216.59999999999997 ) ; t0 [ 153ULL ] = ( int32_T )
( X [ 166ULL ] * t82 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) >= 0.0
) ; t0 [ 154ULL ] = ( int32_T ) ( X [ 72ULL ] <= 623.15 ) ; t0 [ 155ULL ] = (
int32_T ) ( X [ 53ULL ] >= 0.01 ) ; t0 [ 156ULL ] = ( int32_T ) ( X [ 53ULL ]
<= pmf_get_inf ( ) ) ; t0 [ 157ULL ] = ( int32_T ) ( X [ 12ULL ] >=
216.59999999999997 ) ; t0 [ 158ULL ] = ( int32_T ) ( X [ 12ULL ] <= 623.15 )
; t0 [ 159ULL ] = ( int32_T ) ( X [ 54ULL ] >= 0.01 ) ; t0 [ 160ULL ] = (
int32_T ) ( X [ 54ULL ] <= pmf_get_inf ( ) ) ; t0 [ 161ULL ] = ( int32_T ) (
X [ 15ULL ] >= 216.59999999999997 ) ; t0 [ 162ULL ] = ( int32_T ) ( X [ 15ULL
] <= 623.15 ) ; t0 [ 163ULL ] = ( int32_T ) ( X [ 62ULL ] > 0.0 ) ; t0 [
164ULL ] = ( int32_T ) ( X [ 172ULL ] * t65 / ( X [ 24ULL ] == 0.0 ? 1.0E-16
: X [ 24ULL ] ) >= 0.0 ) ; t0 [ 165ULL ] = ( int32_T ) ( X [ 169ULL ] * t98 /
( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) >= 0.0 ) ; t0 [ 166ULL ] = (
int32_T ) ( X [ 23ULL ] * t75 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ]
) >= 0.0 ) ; t0 [ 167ULL ] = ( int32_T ) ( X [ 115ULL ] * t11 / ( X [ 116ULL
] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) >= 0.0 ) ; t0 [ 168ULL ] = ( int32_T ) (
( ( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * - 1.0000000000000011 ) + X [ 66ULL
] * - 1.0E-6 ) + X [ 5ULL ] > X [ 64ULL ] + 0.8 ) ; t0 [ 169ULL ] = ( int32_T
) ( X [ 200ULL ] * t78 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) >=
0.0 ) ; t0 [ 170ULL ] = ( int32_T ) ( X [ 197ULL ] * t78 / ( X [ 116ULL ] ==
0.0 ? 1.0E-16 : X [ 116ULL ] ) >= 0.0 ) ; t0 [ 171ULL ] = ( int32_T ) ( X [
199ULL ] * t78 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) >= 0.0 ) ;
t0 [ 172ULL ] = ( int32_T ) ( X [ 198ULL ] * t78 / ( X [ 24ULL ] == 0.0 ?
1.0E-16 : X [ 24ULL ] ) >= 0.0 ) ; t0 [ 173ULL ] = ( int32_T ) ( X [ 204ULL ]
* t124 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) >= 0.0 ) ; t0 [
174ULL ] = ( int32_T ) ( X [ 27ULL ] * intrm_sf_mf_283 / ( X [ 28ULL ] == 0.0
? 1.0E-16 : X [ 28ULL ] ) >= 0.0 ) ; t0 [ 175ULL ] = ( int32_T ) ( X [ 219ULL
] * t81 / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) >= 0.0 ) ; t0 [
176ULL ] = ( int32_T ) ( X [ 223ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI * intrm_sf_mf_302
>= 0.0 ) ; t0 [ 177ULL ] = ( int32_T ) ( X [ 227ULL ] * intrm_sf_mf_300 *
intrm_sf_mf_302 >= 0.0 ) ; t0 [ 178ULL ] = ( int32_T ) ( t118 == 1.0 ) ; t0 [
179ULL ] = ( int32_T ) ( X [ 224ULL ] * X [ 224ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_gamma_AI / (
intrm_sf_mf_302 == 0.0 ? 1.0E-16 : intrm_sf_mf_302 ) / ( X [ 223ULL ] == 0.0
? 1.0E-16 : X [ 223ULL ] ) >= 0.0 ) ; t0 [ 180ULL ] = ( int32_T ) ( X [
228ULL ] * X [ 228ULL ] * intrm_sf_mf_300 / ( intrm_sf_mf_302 == 0.0 ?
1.0E-16 : intrm_sf_mf_302 ) / ( X [ 227ULL ] == 0.0 ? 1.0E-16 : X [ 227ULL ]
) >= 0.0 ) ; t0 [ 181ULL ] = ( int32_T ) ( X [ 223ULL ] * intrm_sf_mf_302 / (
X [ 224ULL ] == 0.0 ? 1.0E-16 : X [ 224ULL ] ) >= 0.0 ) ; t0 [ 182ULL ] = (
int32_T ) ( X [ 227ULL ] * intrm_sf_mf_302 / ( X [ 228ULL ] == 0.0 ? 1.0E-16
: X [ 228ULL ] ) >= 0.0 ) ; t0 [ 183ULL ] = ( int32_T ) ( X [ 31ULL ] *
intrm_sf_mf_302 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) >= 0.0 ) ;
t0 [ 184ULL ] = ( int32_T ) ( X [ 238ULL ] / ( t87 == 0.0 ? 1.0E-16 : t87 ) *
2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) >= 0.0 ) ;
t0 [ 185ULL ] = ( int32_T ) ( X [ 238ULL ] * X [ 238ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 / ( t20 ==
0.0 ? 1.0E-16 : t20 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) >=
0.0 ) ; t0 [ 186ULL ] = ( int32_T ) ( X [ 241ULL ] * t20 / ( X [ 28ULL ] ==
0.0 ? 1.0E-16 : X [ 28ULL ] ) >= 0.0 ) ; t0 [ 187ULL ] = ( int32_T ) ( X [
99ULL ] > 0.6 ) ; t0 [ 188ULL ] = ( int32_T ) ( X [ 242ULL ] * t20 / ( X [
220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) >= 0.0 ) ; t0 [ 189ULL ] = (
int32_T ) ( t87 / ( X [ 238ULL ] == 0.0 ? 1.0E-16 : X [ 238ULL ] ) >= 0.0 ) ;
t0 [ 190ULL ] = ( int32_T ) ( X [ 244ULL ] * t125 / 1.01325 >= 0.0 ) ; t0 [
191ULL ] = ( int32_T ) ( t90 * 293.15 / 1.01325 >= 0.0 ) ; t0 [ 192ULL ] = (
int32_T ) ( X [ 258ULL ] * t121 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL
] ) >= 0.0 ) ; t0 [ 193ULL ] = ( int32_T ) ( X [ 265ULL ] * t96 / ( X [ 35ULL
] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) >= 0.0 ) ; t0 [ 194ULL ] = ( int32_T ) ( X
[ 262ULL ] * t96 / 1.01325 >= 0.0 ) ; t0 [ 195ULL ] = ( int32_T ) ( X [
264ULL ] * t96 / 1.01325 >= 0.0 ) ; t0 [ 196ULL ] = ( int32_T ) ( X [ 263ULL
] * t96 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) >= 0.0 ) ; t0 [
197ULL ] = ( int32_T ) ( X [ 269ULL ] * t44 / ( X [ 35ULL ] == 0.0 ? 1.0E-16
: X [ 35ULL ] ) >= 0.0 ) ; t0 [ 198ULL ] = ( int32_T ) ( X [ 36ULL ] *
intrm_sf_mf_537 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) >= 0.0 ) ;
t0 [ 199ULL ] = ( int32_T ) ( U_idx_6 <= 216.59999999999997 ) ; t0 [ 200ULL ]
= ( int32_T ) ( U_idx_6 >= 623.15 ) ; t0 [ 201ULL ] = ( int32_T ) ( X [
291ULL ] * t99 / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL ] ) >= 0.0 ) ;
t0 [ 202ULL ] = ( int32_T ) ( X [ 302ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI * intrm_sf_mf_563
>= 0.0 ) ; t0 [ 203ULL ] = ( int32_T ) ( X [ 305ULL ] * intrm_sf_mf_561 *
intrm_sf_mf_563 >= 0.0 ) ; t0 [ 204ULL ] = ( int32_T ) ( X [ 303ULL ] * X [
303ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_gamma_AI / (
intrm_sf_mf_563 == 0.0 ? 1.0E-16 : intrm_sf_mf_563 ) / ( X [ 302ULL ] == 0.0
? 1.0E-16 : X [ 302ULL ] ) >= 0.0 ) ; t0 [ 205ULL ] = ( int32_T ) (
intrm_sf_mf_17 * 293.15 / 1.01325 >= 0.0 ) ; t0 [ 206ULL ] = ( int32_T ) ( X
[ 306ULL ] * X [ 306ULL ] * intrm_sf_mf_561 / ( intrm_sf_mf_563 == 0.0 ?
1.0E-16 : intrm_sf_mf_563 ) / ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ]
) >= 0.0 ) ; t0 [ 207ULL ] = ( int32_T ) ( X [ 302ULL ] * intrm_sf_mf_563 / (
X [ 303ULL ] == 0.0 ? 1.0E-16 : X [ 303ULL ] ) >= 0.0 ) ; t0 [ 208ULL ] = (
int32_T ) ( X [ 305ULL ] * intrm_sf_mf_563 / ( X [ 306ULL ] == 0.0 ? 1.0E-16
: X [ 306ULL ] ) >= 0.0 ) ; t0 [ 209ULL ] = ( int32_T ) ( X [ 39ULL ] *
intrm_sf_mf_563 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) >= 0.0 ) ;
t0 [ 210ULL ] = ( int32_T ) ( X [ 68ULL ] * t32 / ( X [ 69ULL ] == 0.0 ?
1.0E-16 : X [ 69ULL ] ) >= 0.0 ) ; t0 [ 211ULL ] = ( int32_T ) ( X [ 316ULL ]
* t101 * t100 >= 0.0 ) ; t0 [ 212ULL ] = ( int32_T ) ( X [ 319ULL ] * t94 *
t100 >= 0.0 ) ; t0 [ 213ULL ] = ( int32_T ) ( X [ 317ULL ] * X [ 317ULL ] *
t101 / ( t100 == 0.0 ? 1.0E-16 : t100 ) / ( X [ 316ULL ] == 0.0 ? 1.0E-16 : X
[ 316ULL ] ) >= 0.0 ) ; t0 [ 214ULL ] = ( int32_T ) ( X [ 320ULL ] * X [
320ULL ] * t94 / ( t100 == 0.0 ? 1.0E-16 : t100 ) / ( X [ 319ULL ] == 0.0 ?
1.0E-16 : X [ 319ULL ] ) >= 0.0 ) ; t0 [ 215ULL ] = ( int32_T ) ( X [ 316ULL
] * t100 / ( X [ 317ULL ] == 0.0 ? 1.0E-16 : X [ 317ULL ] ) >= 0.0 ) ; t0 [
216ULL ] = ( int32_T ) ( X [ 319ULL ] * t100 / ( X [ 320ULL ] == 0.0 ?
1.0E-16 : X [ 320ULL ] ) >= 0.0 ) ; t0 [ 217ULL ] = ( int32_T ) ( X [ 6ULL ]
* t100 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) >= 0.0 ) ; t0 [
218ULL ] = ( int32_T ) ( X [ 330ULL ] * t103 * t35 >= 0.0 ) ; t0 [ 219ULL ] =
( int32_T ) ( X [ 332ULL ] * t97 * t35 >= 0.0 ) ; t0 [ 220ULL ] = ( int32_T )
( X [ 331ULL ] * X [ 331ULL ] * t103 / ( t35 == 0.0 ? 1.0E-16 : t35 ) / ( X [
330ULL ] == 0.0 ? 1.0E-16 : X [ 330ULL ] ) >= 0.0 ) ; t0 [ 221ULL ] = (
int32_T ) ( X [ 333ULL ] * X [ 333ULL ] * t97 / ( t35 == 0.0 ? 1.0E-16 : t35
) / ( X [ 332ULL ] == 0.0 ? 1.0E-16 : X [ 332ULL ] ) >= 0.0 ) ; t0 [ 222ULL ]
= ( int32_T ) ( X [ 330ULL ] * t35 / ( X [ 331ULL ] == 0.0 ? 1.0E-16 : X [
331ULL ] ) >= 0.0 ) ; t0 [ 223ULL ] = ( int32_T ) ( X [ 332ULL ] * t35 / ( X
[ 333ULL ] == 0.0 ? 1.0E-16 : X [ 333ULL ] ) >= 0.0 ) ; t0 [ 224ULL ] = (
int32_T ) ( X [ 9ULL ] * t35 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] )
>= 0.0 ) ; t0 [ 225ULL ] = ( int32_T ) ( U_idx_8 <= 216.59999999999997 ) ; t0
[ 226ULL ] = ( int32_T ) ( U_idx_8 >= 623.15 ) ; t0 [ 227ULL ] = ( int32_T )
( X [ 351ULL ] * t41 * t38 >= 0.0 ) ; t0 [ 228ULL ] = ( int32_T ) ( X [
354ULL ] * intrm_sf_mf_973 * t38 >= 0.0 ) ; t0 [ 229ULL ] = ( int32_T ) ( X [
352ULL ] * X [ 352ULL ] * t41 / ( t38 == 0.0 ? 1.0E-16 : t38 ) / ( X [ 351ULL
] == 0.0 ? 1.0E-16 : X [ 351ULL ] ) >= 0.0 ) ; t0 [ 230ULL ] = ( int32_T ) (
X [ 355ULL ] * X [ 355ULL ] * intrm_sf_mf_973 / ( t38 == 0.0 ? 1.0E-16 : t38
) / ( X [ 354ULL ] == 0.0 ? 1.0E-16 : X [ 354ULL ] ) >= 0.0 ) ; for ( b = 0 ;
b < 231 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t315
; return 0 ; }
