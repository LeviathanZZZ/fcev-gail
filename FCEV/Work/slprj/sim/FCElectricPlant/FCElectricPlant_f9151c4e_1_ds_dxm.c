#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_dxm.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_dxm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t519 , NeDsMethodOutput * t520 ) { PmRealVector
out ; real_T X [ 394 ] ; real_T t0 [ 220 ] ; real_T t12 [ 5 ] ; real_T t13 [
5 ] ; real_T t14 [ 5 ] ; real_T t15 [ 5 ] ; real_T t16 [ 5 ] ; real_T t17 [ 5
] ; real_T t18 [ 5 ] ; real_T t19 [ 5 ] ; real_T t20 [ 5 ] ; real_T t21 [ 5 ]
; real_T t22 [ 5 ] ; real_T t23 [ 5 ] ; real_T t24 [ 5 ] ; real_T t25 [ 5 ] ;
real_T t26 [ 5 ] ; real_T t27 [ 5 ] ; real_T t28 [ 5 ] ; real_T t29 [ 5 ] ;
real_T t30 [ 5 ] ; real_T t31 [ 5 ] ; real_T t32 [ 5 ] ; real_T t33 [ 5 ] ;
real_T t34 [ 5 ] ; real_T t35 [ 5 ] ; real_T t36 [ 5 ] ; real_T t37 [ 5 ] ;
real_T t38 [ 5 ] ; real_T t39 [ 5 ] ; real_T t40 [ 5 ] ; real_T t41 [ 5 ] ;
real_T t42 [ 5 ] ; real_T t43 [ 5 ] ; real_T t44 [ 5 ] ; real_T t45 [ 5 ] ;
real_T t46 [ 5 ] ; real_T t47 [ 5 ] ; real_T t48 [ 5 ] ; real_T t49 [ 5 ] ;
real_T t50 [ 5 ] ; real_T t51 [ 5 ] ; real_T t52 [ 5 ] ; real_T t53 [ 5 ] ;
real_T t54 [ 5 ] ; real_T t55 [ 5 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ; real_T
intermediate_der1419 ; real_T intermediate_der1420 ; real_T
intermediate_der1421 ; real_T intermediate_der1422 ; real_T
intermediate_der1424 ; real_T intermediate_der1425 ; real_T
intermediate_der1494 ; real_T intermediate_der1495 ; real_T
intermediate_der1496 ; real_T intermediate_der1539 ; real_T
intermediate_der1541 ; real_T intermediate_der1542 ; real_T
intermediate_der2254 ; real_T intermediate_der2255 ; real_T
intermediate_der2256 ; real_T intermediate_der2257 ; real_T
intermediate_der2259 ; real_T intermediate_der2260 ; real_T
intermediate_der2392 ; real_T intermediate_der2393 ; real_T
intermediate_der2394 ; real_T intermediate_der2437 ; real_T
intermediate_der2439 ; real_T intermediate_der2440 ; real_T
intermediate_der2924 ; real_T intermediate_der2925 ; real_T
intermediate_der2926 ; real_T intermediate_der2969 ; real_T
intermediate_der2971 ; real_T intermediate_der2972 ; real_T
intermediate_der3448 ; real_T intermediate_der3449 ; real_T
intermediate_der3450 ; real_T intermediate_der3493 ; real_T
intermediate_der3495 ; real_T intermediate_der3496 ; real_T
intermediate_der3988 ; real_T intermediate_der3989 ; real_T
intermediate_der3990 ; real_T intermediate_der4033 ; real_T
intermediate_der4035 ; real_T intermediate_der4036 ; real_T
intermediate_der4556 ; real_T intermediate_der4557 ; real_T
intermediate_der4600 ; real_T intermediate_der4602 ; real_T
intermediate_der4603 ; real_T intermediate_der5232 ; real_T
intermediate_der5233 ; real_T intermediate_der5234 ; real_T
intermediate_der5277 ; real_T intermediate_der5279 ; real_T
intermediate_der5280 ; real_T intermediate_der5756 ; real_T
intermediate_der5757 ; real_T intermediate_der5758 ; real_T
intermediate_der5801 ; real_T intermediate_der5803 ; real_T
intermediate_der5804 ; real_T intermediate_der6334 ; real_T
intermediate_der6335 ; real_T intermediate_der6450 ; real_T
intermediate_der6451 ; real_T intermediate_der6452 ; real_T
intermediate_der6546 ; real_T intermediate_der6547 ; real_T
intermediate_der6557 ; real_T intermediate_der6994 ; real_T
intermediate_der6995 ; real_T intermediate_der6996 ; real_T
intermediate_der7006 ; real_T intermediate_der7007 ; real_T
intermediate_der7008 ; real_T intermediate_der7154 ; real_T
intermediate_der7155 ; real_T intermediate_der7156 ; real_T
intermediate_der7161 ; real_T intermediate_der7162 ; real_T
intermediate_der7163 ; real_T intermediate_der7387 ; real_T
intermediate_der742 ; real_T intermediate_der743 ; real_T intermediate_der744
; real_T intermediate_der7513 ; real_T intermediate_der7514 ; real_T
intermediate_der7515 ; real_T intermediate_der787 ; real_T
intermediate_der789 ; real_T intermediate_der790 ; real_T intrm_sf_mf_1021 ;
real_T intrm_sf_mf_1123 ; real_T intrm_sf_mf_1191 ; real_T intrm_sf_mf_1293 ;
real_T intrm_sf_mf_1323 ; real_T intrm_sf_mf_133 ; real_T intrm_sf_mf_1425 ;
real_T intrm_sf_mf_201 ; real_T intrm_sf_mf_214 ; real_T intrm_sf_mf_220 ;
real_T intrm_sf_mf_322 ; real_T intrm_sf_mf_452 ; real_T intrm_sf_mf_471 ;
real_T intrm_sf_mf_478 ; real_T intrm_sf_mf_580 ; real_T intrm_sf_mf_610 ;
real_T intrm_sf_mf_712 ; real_T intrm_sf_mf_742 ; real_T intrm_sf_mf_844 ;
real_T intrm_sf_mf_875 ; real_T intrm_sf_mf_977 ; real_T t113 ; real_T t116 ;
real_T t119 ; real_T t122 ; real_T t125 ; real_T t128 ; real_T t131 ; real_T
t134 ; real_T t137 ; real_T t140 ; real_T t143 ; real_T t179 ; real_T t182 ;
real_T t185 ; real_T t188 ; real_T t191 ; real_T t194 ; real_T t197 ; real_T
t200 ; real_T t203 ; real_T t206 ; real_T t209 ; real_T t211 ; real_T t213 ;
real_T t215 ; real_T t217 ; real_T t219 ; real_T t221 ; real_T t223 ; real_T
t225 ; real_T t227 ; real_T t229 ; real_T t231 ; real_T t233 ; real_T t234 ;
real_T t240 ; real_T t241 ; real_T t247 ; real_T t248 ; real_T t254 ; real_T
t255 ; real_T t261 ; real_T t262 ; real_T t268 ; real_T t269 ; real_T t275 ;
real_T t276 ; real_T t282 ; real_T t283 ; real_T t289 ; real_T t290 ; real_T
t296 ; real_T t297 ; real_T t303 ; real_T t304 ; real_T t309 ; real_T t311 ;
real_T t312 ; real_T t325 ; real_T t327 ; real_T t338 ; real_T t351 ; real_T
t356 ; real_T t378 ; real_T t449 ; real_T t515 ; real_T t518 ; size_t t97 ;
int32_T b ; ( void ) LC ; for ( b = 0 ; b < 394 ; b ++ ) { X [ b ] = t519 ->
mX . mX [ b ] ; } out = t520 -> mDXM ; if ( X [ 19ULL ] <= 0.0 ) { t515 = 0.0
; } else { t515 = X [ 19ULL ] >= 1.0 ? 1.0 : X [ 19ULL ] ; } if ( X [ 20ULL ]
<= 0.0 ) { t518 = 0.0 ; } else { t518 = X [ 20ULL ] >= 1.0 ? 1.0 : X [ 20ULL
] ; } t449 = ( ( ( 1.0 - t515 ) - t518 ) * 296.802103844292 + t515 * 461.523
) + t518 * 4124.48151675695 ; t211 = X [ 17ULL ] * t449 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I = X [ 18ULL ] / (
t211 == 0.0 ? 1.0E-16 : t211 ) ; if ( X [ 17ULL ] <= 216.59999999999997 ) {
t378 = 216.59999999999997 ; } else { t378 = X [ 17ULL ] >= 623.15 ? 623.15 :
X [ 17ULL ] ; } t113 = t378 * t378 ; if ( X [ 24ULL ] <= 0.0 ) {
intermediate_der7006 = 0.0 ; } else { intermediate_der7006 = X [ 24ULL ] >=
1.0 ? 1.0 : X [ 24ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) { intermediate_der7007
= 0.0 ; } else { intermediate_der7007 = X [ 23ULL ] >= 1.0 ? 1.0 : X [ 23ULL
] ; } intrm_sf_mf_201 = ( ( ( 1.0 - intermediate_der7006 ) -
intermediate_der7007 ) * 296.802103844292 + intermediate_der7006 * 461.523 )
+ intermediate_der7007 * 4124.48151675695 ; t213 = X [ 21ULL ] *
intrm_sf_mf_201 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I =
X [ 22ULL ] / ( t213 == 0.0 ? 1.0E-16 : t213 ) ; if ( X [ 21ULL ] <=
216.59999999999997 ) { intermediate_der6996 = 216.59999999999997 ; } else {
intermediate_der6996 = X [ 21ULL ] >= 623.15 ? 623.15 : X [ 21ULL ] ; } t116
= intermediate_der6996 * intermediate_der6996 ; if ( X [ 27ULL ] <= 0.0 ) {
intermediate_der7154 = 0.0 ; } else { intermediate_der7154 = X [ 27ULL ] >=
1.0 ? 1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) { intermediate_der7155
= 0.0 ; } else { intermediate_der7155 = X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL
] ; } intrm_sf_mf_220 = ( ( ( 1.0 - intermediate_der7154 ) -
intermediate_der7155 ) * 296.802103844292 + intermediate_der7154 * 461.523 )
+ intermediate_der7155 * 4124.48151675695 ; t215 = X [ 25ULL ] *
intrm_sf_mf_220 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I = X
[ 26ULL ] / ( t215 == 0.0 ? 1.0E-16 : t215 ) ; if ( X [ 25ULL ] <=
216.59999999999997 ) { intermediate_der7008 = 216.59999999999997 ; } else {
intermediate_der7008 = X [ 25ULL ] >= 623.15 ? 623.15 : X [ 25ULL ] ; } t119
= intermediate_der7008 * intermediate_der7008 ; if ( X [ 32ULL ] <= 0.0 ) {
intermediate_der7161 = 0.0 ; } else { intermediate_der7161 = X [ 32ULL ] >=
1.0 ? 1.0 : X [ 32ULL ] ; } if ( X [ 31ULL ] <= 0.0 ) { intermediate_der7162
= 0.0 ; } else { intermediate_der7162 = X [ 31ULL ] >= 1.0 ? 1.0 : X [ 31ULL
] ; } intrm_sf_mf_452 = ( ( ( 1.0 - intermediate_der7161 ) -
intermediate_der7162 ) * 296.802103844292 + intermediate_der7161 * 461.523 )
+ intermediate_der7162 * 259.836612622973 ; t217 = X [ 30ULL ] *
intrm_sf_mf_452 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho = X [ 29ULL ]
/ ( t217 == 0.0 ? 1.0E-16 : t217 ) ; if ( X [ 30ULL ] <= 216.59999999999997 )
{ intermediate_der7156 = 216.59999999999997 ; } else { intermediate_der7156 =
X [ 30ULL ] >= 623.15 ? 623.15 : X [ 30ULL ] ; } t122 = intermediate_der7156
* intermediate_der7156 ; if ( X [ 35ULL ] <= 0.0 ) { intermediate_der7163 =
0.0 ; } else { intermediate_der7163 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ]
; } if ( X [ 34ULL ] <= 0.0 ) { t325 = 0.0 ; } else { t325 = X [ 34ULL ] >=
1.0 ? 1.0 : X [ 34ULL ] ; } intrm_sf_mf_478 = ( ( ( 1.0 -
intermediate_der7163 ) - t325 ) * 296.802103844292 + intermediate_der7163 *
461.523 ) + t325 * 4124.48151675695 ; t219 = X [ 33ULL ] * intrm_sf_mf_478 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I = X [ 36ULL ] / (
t219 == 0.0 ? 1.0E-16 : t219 ) ; if ( X [ 33ULL ] <= 216.59999999999997 ) {
t338 = 216.59999999999997 ; } else { t338 = X [ 33ULL ] >= 623.15 ? 623.15 :
X [ 33ULL ] ; } t125 = t338 * t338 ; if ( X [ 6ULL ] <= 0.0 ) { t351 = 0.0 ;
} else { t351 = X [ 6ULL ] >= 1.0 ? 1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <=
0.0 ) { t356 = 0.0 ; } else { t356 = X [ 5ULL ] >= 1.0 ? 1.0 : X [ 5ULL ] ; }
intrm_sf_mf_610 = ( ( ( 1.0 - t351 ) - t356 ) * 296.802103844292 + t351 *
461.523 ) + t356 * 4124.48151675695 ; t221 = X [ 4ULL ] * intrm_sf_mf_610 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = X [ 37ULL ] / (
t221 == 0.0 ? 1.0E-16 : t221 ) ; if ( X [ 4ULL ] <= 216.59999999999997 ) {
t327 = 216.59999999999997 ; } else { t327 = X [ 4ULL ] >= 623.15 ? 623.15 : X
[ 4ULL ] ; } t128 = t327 * t327 ; if ( X [ 9ULL ] <= 0.0 ) {
intermediate_der7513 = 0.0 ; } else { intermediate_der7513 = X [ 9ULL ] >=
1.0 ? 1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0 ) { intermediate_der7514 =
0.0 ; } else { intermediate_der7514 = X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ;
} intrm_sf_mf_742 = ( ( ( 1.0 - intermediate_der7513 ) - intermediate_der7514
) * 296.802103844292 + intermediate_der7513 * 461.523 ) +
intermediate_der7514 * 4124.48151675695 ; t223 = X [ 7ULL ] * intrm_sf_mf_742
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I = X [ 38ULL ] / (
t223 == 0.0 ? 1.0E-16 : t223 ) ; if ( X [ 7ULL ] <= 216.59999999999997 ) {
intermediate_der7387 = 216.59999999999997 ; } else { intermediate_der7387 = X
[ 7ULL ] >= 623.15 ? 623.15 : X [ 7ULL ] ; } t131 = intermediate_der7387 *
intermediate_der7387 ; if ( X [ 41ULL ] <= 0.0 ) { t309 = 0.0 ; } else { t309
= X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t312
= 0.0 ; } else { t312 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; }
intrm_sf_mf_875 = ( ( ( 1.0 - t309 ) - t312 ) * 296.802103844292 + t309 *
461.523 ) + t312 * 259.836612622973 ; t225 = X [ 39ULL ] * intrm_sf_mf_875 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X [ 42ULL ] / (
t225 == 0.0 ? 1.0E-16 : t225 ) ; if ( X [ 39ULL ] <= 216.59999999999997 ) {
intermediate_der7515 = 216.59999999999997 ; } else { intermediate_der7515 = X
[ 39ULL ] >= 623.15 ? 623.15 : X [ 39ULL ] ; } t134 = intermediate_der7515 *
intermediate_der7515 ; if ( X [ 45ULL ] <= 0.0 ) { intermediate_der6450 = 0.0
; } else { intermediate_der6450 = X [ 45ULL ] >= 1.0 ? 1.0 : X [ 45ULL ] ; }
if ( X [ 46ULL ] <= 0.0 ) { intermediate_der6451 = 0.0 ; } else {
intermediate_der6451 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
intrm_sf_mf_1021 = ( ( ( 1.0 - intermediate_der6450 ) - intermediate_der6451
) * 296.802103844292 + intermediate_der6450 * 461.523 ) +
intermediate_der6451 * 259.836612622973 ; t227 = X [ 43ULL ] *
intrm_sf_mf_1021 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I =
X [ 44ULL ] / ( t227 == 0.0 ? 1.0E-16 : t227 ) ; if ( X [ 43ULL ] <=
216.59999999999997 ) { intermediate_der6335 = 216.59999999999997 ; } else {
intermediate_der6335 = X [ 43ULL ] >= 623.15 ? 623.15 : X [ 43ULL ] ; } t137
= intermediate_der6335 * intermediate_der6335 ; if ( X [ 12ULL ] <= 0.0 ) {
intermediate_der6546 = 0.0 ; } else { intermediate_der6546 = X [ 12ULL ] >=
1.0 ? 1.0 : X [ 12ULL ] ; } if ( X [ 11ULL ] <= 0.0 ) { intermediate_der6547
= 0.0 ; } else { intermediate_der6547 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL
] ; } intrm_sf_mf_1191 = ( ( ( 1.0 - intermediate_der6546 ) -
intermediate_der6547 ) * 296.802103844292 + intermediate_der6546 * 461.523 )
+ intermediate_der6547 * 259.836612622973 ; t229 = X [ 10ULL ] *
intrm_sf_mf_1191 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I =
X [ 47ULL ] / ( t229 == 0.0 ? 1.0E-16 : t229 ) ; if ( X [ 10ULL ] <=
216.59999999999997 ) { intermediate_der6452 = 216.59999999999997 ; } else {
intermediate_der6452 = X [ 10ULL ] >= 623.15 ? 623.15 : X [ 10ULL ] ; } t140
= intermediate_der6452 * intermediate_der6452 ; if ( X [ 15ULL ] <= 0.0 ) {
intermediate_der6994 = 0.0 ; } else { intermediate_der6994 = X [ 15ULL ] >=
1.0 ? 1.0 : X [ 15ULL ] ; } if ( X [ 14ULL ] <= 0.0 ) { intermediate_der6995
= 0.0 ; } else { intermediate_der6995 = X [ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL
] ; } intrm_sf_mf_1323 = ( ( ( 1.0 - intermediate_der6994 ) -
intermediate_der6995 ) * 296.802103844292 + intermediate_der6994 * 461.523 )
+ intermediate_der6995 * 259.836612622973 ; t231 = X [ 13ULL ] *
intrm_sf_mf_1323 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I =
X [ 48ULL ] / ( t231 == 0.0 ? 1.0E-16 : t231 ) ; if ( X [ 13ULL ] <=
216.59999999999997 ) { intermediate_der6557 = 216.59999999999997 ; } else {
intermediate_der6557 = X [ 13ULL ] >= 623.15 ? 623.15 : X [ 13ULL ] ; } t143
= intermediate_der6557 * intermediate_der6557 ; intrm_sf_mf_1123 = ( ( (
1074.1165326382641 + intermediate_der6335 * - 0.2214565261064495 ) + t137 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der6450 ) -
intermediate_der6451 ) + ( ( 1479.6504774711011 + intermediate_der6335 *
1.2002114337048222 ) + t137 * - 0.00038614513167823636 ) *
intermediate_der6450 ) + ( ( 900.63941224838356 + intermediate_der6335 * -
0.044484923911382625 ) + t137 * 0.00036936011832044979 ) *
intermediate_der6451 ; intrm_sf_mf_1293 = ( ( ( 1074.1165326382641 +
intermediate_der6452 * - 0.2214565261064495 ) + t140 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der6546 ) - intermediate_der6547 ) + ( (
1479.6504774711011 + intermediate_der6452 * 1.2002114337048222 ) + t140 * -
0.00038614513167823636 ) * intermediate_der6546 ) + ( ( 900.63941224838356 +
intermediate_der6452 * - 0.044484923911382625 ) + t140 *
0.00036936011832044979 ) * intermediate_der6547 ; intrm_sf_mf_133 = ( ( (
1074.1165326382641 + t378 * - 0.2214565261064495 ) + t113 *
0.00037212980109014541 ) * ( ( 1.0 - t515 ) - t518 ) + ( ( 1479.6504774711011
+ t378 * 1.2002114337048222 ) + t113 * - 0.00038614513167823636 ) * t515 ) +
( ( 12825.281119789837 + t378 * 6.9647057412840034 ) + t113 * -
0.0070524868246844051 ) * t518 ; intrm_sf_mf_1425 = ( ( ( 1074.1165326382641
+ intermediate_der6557 * - 0.2214565261064495 ) + t143 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der6994 ) -
intermediate_der6995 ) + ( ( 1479.6504774711011 + intermediate_der6557 *
1.2002114337048222 ) + t143 * - 0.00038614513167823636 ) *
intermediate_der6994 ) + ( ( 900.63941224838356 + intermediate_der6557 * -
0.044484923911382625 ) + t143 * 0.00036936011832044979 ) *
intermediate_der6995 ; intrm_sf_mf_214 = ( ( ( 1074.1165326382641 +
intermediate_der6996 * - 0.2214565261064495 ) + t116 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der7006 ) - intermediate_der7007 ) + ( (
1479.6504774711011 + intermediate_der6996 * 1.2002114337048222 ) + t116 * -
0.00038614513167823636 ) * intermediate_der7006 ) + ( ( 12825.281119789837 +
intermediate_der6996 * 6.9647057412840034 ) + t116 * - 0.0070524868246844051
) * intermediate_der7007 ; intrm_sf_mf_322 = ( ( ( 1074.1165326382641 +
intermediate_der7008 * - 0.2214565261064495 ) + t119 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der7154 ) - intermediate_der7155 ) + ( (
1479.6504774711011 + intermediate_der7008 * 1.2002114337048222 ) + t119 * -
0.00038614513167823636 ) * intermediate_der7154 ) + ( ( 12825.281119789837 +
intermediate_der7008 * 6.9647057412840034 ) + t119 * - 0.0070524868246844051
) * intermediate_der7155 ; intrm_sf_mf_471 = ( ( ( 1074.1165326382641 +
intermediate_der7156 * - 0.2214565261064495 ) + t122 * 0.00037212980109014541
) * ( ( 1.0 - intermediate_der7161 ) - intermediate_der7162 ) + ( (
1479.6504774711011 + intermediate_der7156 * 1.2002114337048222 ) + t122 * -
0.00038614513167823636 ) * intermediate_der7161 ) + ( ( 900.63941224838356 +
intermediate_der7156 * - 0.044484923911382625 ) + t122 *
0.00036936011832044979 ) * intermediate_der7162 ; intrm_sf_mf_580 = ( ( (
1074.1165326382641 + t338 * - 0.2214565261064495 ) + t125 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der7163 ) - t325 ) + ( (
1479.6504774711011 + t338 * 1.2002114337048222 ) + t125 * -
0.00038614513167823636 ) * intermediate_der7163 ) + ( ( 12825.281119789837 +
t338 * 6.9647057412840034 ) + t125 * - 0.0070524868246844051 ) * t325 ;
intrm_sf_mf_712 = ( ( ( 1074.1165326382641 + t327 * - 0.2214565261064495 ) +
t128 * 0.00037212980109014541 ) * ( ( 1.0 - t351 ) - t356 ) + ( (
1479.6504774711011 + t327 * 1.2002114337048222 ) + t128 * -
0.00038614513167823636 ) * t351 ) + ( ( 12825.281119789837 + t327 *
6.9647057412840034 ) + t128 * - 0.0070524868246844051 ) * t356 ;
intrm_sf_mf_844 = ( ( ( 1074.1165326382641 + intermediate_der7387 * -
0.2214565261064495 ) + t131 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der7513 ) - intermediate_der7514 ) + ( ( 1479.6504774711011 +
intermediate_der7387 * 1.2002114337048222 ) + t131 * - 0.00038614513167823636
) * intermediate_der7513 ) + ( ( 12825.281119789837 + intermediate_der7387 *
6.9647057412840034 ) + t131 * - 0.0070524868246844051 ) *
intermediate_der7514 ; intrm_sf_mf_977 = ( ( ( 1074.1165326382641 +
intermediate_der7515 * - 0.2214565261064495 ) + t134 * 0.00037212980109014541
) * ( ( 1.0 - t309 ) - t312 ) + ( ( 1479.6504774711011 + intermediate_der7515
* 1.2002114337048222 ) + t134 * - 0.00038614513167823636 ) * t309 ) + ( (
900.63941224838356 + intermediate_der7515 * - 0.044484923911382625 ) + t134 *
0.00036936011832044979 ) * t312 ; if ( X [ 19ULL ] <= 0.0 ) { t311 = 0.0 ; }
else { t311 = ( real_T ) ! ( X [ 19ULL ] >= 1.0 ) ; } if ( X [ 20ULL ] <= 0.0
) { intermediate_der742 = 0.0 ; } else { intermediate_der742 = ( real_T ) ! (
X [ 20ULL ] >= 1.0 ) ; } intermediate_der743 = - intermediate_der742 *
296.802103844292 + intermediate_der742 * 4124.48151675695 ;
intermediate_der744 = - t311 * 296.802103844292 + t311 * 461.523 ;
intermediate_der787 = 1.0 / ( t211 == 0.0 ? 1.0E-16 : t211 ) ; t234 = X [
17ULL ] * X [ 17ULL ] * t449 * t449 ; t211 = - X [ 18ULL ] / ( t234 == 0.0 ?
1.0E-16 : t234 ) * X [ 17ULL ] * intermediate_der744 ; intermediate_der789 =
- X [ 18ULL ] / ( t234 == 0.0 ? 1.0E-16 : t234 ) * X [ 17ULL ] *
intermediate_der743 ; intermediate_der790 = - X [ 18ULL ] / ( t234 == 0.0 ?
1.0E-16 : t234 ) * t449 ; if ( X [ 17ULL ] <= 216.59999999999997 ) { t233 =
0.0 ; } else { t233 = ( real_T ) ! ( X [ 17ULL ] >= 623.15 ) ; } t179 = t378
* t233 * 2.0 ; if ( X [ 24ULL ] <= 0.0 ) { t234 = 0.0 ; } else { t234 = (
real_T ) ! ( X [ 24ULL ] >= 1.0 ) ; } if ( X [ 23ULL ] <= 0.0 ) {
intermediate_der1419 = 0.0 ; } else { intermediate_der1419 = ( real_T ) ! ( X
[ 23ULL ] >= 1.0 ) ; } intermediate_der1420 = - intermediate_der1419 *
296.802103844292 + intermediate_der1419 * 4124.48151675695 ;
intermediate_der1421 = - t234 * 296.802103844292 + t234 * 461.523 ;
intermediate_der1422 = 1.0 / ( t213 == 0.0 ? 1.0E-16 : t213 ) ; t241 = X [
21ULL ] * X [ 21ULL ] * intrm_sf_mf_201 * intrm_sf_mf_201 ; t213 = - X [
22ULL ] / ( t241 == 0.0 ? 1.0E-16 : t241 ) * X [ 21ULL ] *
intermediate_der1420 ; intermediate_der1424 = - X [ 22ULL ] / ( t241 == 0.0 ?
1.0E-16 : t241 ) * X [ 21ULL ] * intermediate_der1421 ; intermediate_der1425
= - X [ 22ULL ] / ( t241 == 0.0 ? 1.0E-16 : t241 ) * intrm_sf_mf_201 ; if ( X
[ 21ULL ] <= 216.59999999999997 ) { t240 = 0.0 ; } else { t240 = ( real_T ) !
( X [ 21ULL ] >= 623.15 ) ; } t182 = intermediate_der6996 * t240 * 2.0 ; if (
X [ 27ULL ] <= 0.0 ) { t241 = 0.0 ; } else { t241 = ( real_T ) ! ( X [ 27ULL
] >= 1.0 ) ; } if ( X [ 28ULL ] <= 0.0 ) { intermediate_der1494 = 0.0 ; }
else { intermediate_der1494 = ( real_T ) ! ( X [ 28ULL ] >= 1.0 ) ; }
intermediate_der1495 = - intermediate_der1494 * 296.802103844292 +
intermediate_der1494 * 4124.48151675695 ; intermediate_der1496 = - t241 *
296.802103844292 + t241 * 461.523 ; intermediate_der1539 = 1.0 / ( t215 ==
0.0 ? 1.0E-16 : t215 ) ; t248 = X [ 25ULL ] * X [ 25ULL ] * intrm_sf_mf_220 *
intrm_sf_mf_220 ; t215 = - X [ 26ULL ] / ( t248 == 0.0 ? 1.0E-16 : t248 ) * X
[ 25ULL ] * intermediate_der1496 ; intermediate_der1541 = - X [ 26ULL ] / (
t248 == 0.0 ? 1.0E-16 : t248 ) * intrm_sf_mf_220 ; intermediate_der1542 = - X
[ 26ULL ] / ( t248 == 0.0 ? 1.0E-16 : t248 ) * X [ 25ULL ] *
intermediate_der1495 ; if ( X [ 25ULL ] <= 216.59999999999997 ) { t247 = 0.0
; } else { t247 = ( real_T ) ! ( X [ 25ULL ] >= 623.15 ) ; } t185 =
intermediate_der7008 * t247 * 2.0 ; if ( X [ 32ULL ] <= 0.0 ) { t248 = 0.0 ;
} else { t248 = ( real_T ) ! ( X [ 32ULL ] >= 1.0 ) ; } if ( X [ 31ULL ] <=
0.0 ) { intermediate_der2254 = 0.0 ; } else { intermediate_der2254 = ( real_T
) ! ( X [ 31ULL ] >= 1.0 ) ; } intermediate_der2255 = - intermediate_der2254
* 296.802103844292 + intermediate_der2254 * 259.836612622973 ;
intermediate_der2256 = - t248 * 296.802103844292 + t248 * 461.523 ;
intermediate_der2257 = 1.0 / ( t217 == 0.0 ? 1.0E-16 : t217 ) ; t255 = X [
30ULL ] * X [ 30ULL ] * intrm_sf_mf_452 * intrm_sf_mf_452 ; t217 = - X [
29ULL ] / ( t255 == 0.0 ? 1.0E-16 : t255 ) * X [ 30ULL ] *
intermediate_der2256 ; intermediate_der2259 = - X [ 29ULL ] / ( t255 == 0.0 ?
1.0E-16 : t255 ) * X [ 30ULL ] * intermediate_der2255 ; intermediate_der2260
= - X [ 29ULL ] / ( t255 == 0.0 ? 1.0E-16 : t255 ) * intrm_sf_mf_452 ; if ( X
[ 30ULL ] <= 216.59999999999997 ) { t254 = 0.0 ; } else { t254 = ( real_T ) !
( X [ 30ULL ] >= 623.15 ) ; } t188 = intermediate_der7156 * t254 * 2.0 ; if (
X [ 35ULL ] <= 0.0 ) { t255 = 0.0 ; } else { t255 = ( real_T ) ! ( X [ 35ULL
] >= 1.0 ) ; } if ( X [ 34ULL ] <= 0.0 ) { intermediate_der2392 = 0.0 ; }
else { intermediate_der2392 = ( real_T ) ! ( X [ 34ULL ] >= 1.0 ) ; }
intermediate_der2393 = - intermediate_der2392 * 296.802103844292 +
intermediate_der2392 * 4124.48151675695 ; intermediate_der2394 = - t255 *
296.802103844292 + t255 * 461.523 ; intermediate_der2437 = 1.0 / ( t219 ==
0.0 ? 1.0E-16 : t219 ) ; t262 = X [ 33ULL ] * X [ 33ULL ] * intrm_sf_mf_478 *
intrm_sf_mf_478 ; t219 = - X [ 36ULL ] / ( t262 == 0.0 ? 1.0E-16 : t262 ) * X
[ 33ULL ] * intermediate_der2394 ; intermediate_der2439 = - X [ 36ULL ] / (
t262 == 0.0 ? 1.0E-16 : t262 ) * X [ 33ULL ] * intermediate_der2393 ;
intermediate_der2440 = - X [ 36ULL ] / ( t262 == 0.0 ? 1.0E-16 : t262 ) *
intrm_sf_mf_478 ; if ( X [ 33ULL ] <= 216.59999999999997 ) { t261 = 0.0 ; }
else { t261 = ( real_T ) ! ( X [ 33ULL ] >= 623.15 ) ; } t191 = t338 * t261 *
2.0 ; if ( X [ 6ULL ] <= 0.0 ) { t262 = 0.0 ; } else { t262 = ( real_T ) ! (
X [ 6ULL ] >= 1.0 ) ; } if ( X [ 5ULL ] <= 0.0 ) { intermediate_der2924 = 0.0
; } else { intermediate_der2924 = ( real_T ) ! ( X [ 5ULL ] >= 1.0 ) ; }
intermediate_der2925 = - intermediate_der2924 * 296.802103844292 +
intermediate_der2924 * 4124.48151675695 ; intermediate_der2926 = - t262 *
296.802103844292 + t262 * 461.523 ; intermediate_der2969 = 1.0 / ( t221 ==
0.0 ? 1.0E-16 : t221 ) ; t269 = X [ 4ULL ] * X [ 4ULL ] * intrm_sf_mf_610 *
intrm_sf_mf_610 ; t221 = - X [ 37ULL ] / ( t269 == 0.0 ? 1.0E-16 : t269 ) * X
[ 4ULL ] * intermediate_der2926 ; intermediate_der2971 = - X [ 37ULL ] / (
t269 == 0.0 ? 1.0E-16 : t269 ) * X [ 4ULL ] * intermediate_der2925 ;
intermediate_der2972 = - X [ 37ULL ] / ( t269 == 0.0 ? 1.0E-16 : t269 ) *
intrm_sf_mf_610 ; if ( X [ 4ULL ] <= 216.59999999999997 ) { t268 = 0.0 ; }
else { t268 = ( real_T ) ! ( X [ 4ULL ] >= 623.15 ) ; } t194 = t327 * t268 *
2.0 ; if ( X [ 9ULL ] <= 0.0 ) { t269 = 0.0 ; } else { t269 = ( real_T ) ! (
X [ 9ULL ] >= 1.0 ) ; } if ( X [ 8ULL ] <= 0.0 ) { intermediate_der3448 = 0.0
; } else { intermediate_der3448 = ( real_T ) ! ( X [ 8ULL ] >= 1.0 ) ; }
intermediate_der3449 = - intermediate_der3448 * 296.802103844292 +
intermediate_der3448 * 4124.48151675695 ; intermediate_der3450 = - t269 *
296.802103844292 + t269 * 461.523 ; intermediate_der3493 = 1.0 / ( t223 ==
0.0 ? 1.0E-16 : t223 ) ; t276 = X [ 7ULL ] * X [ 7ULL ] * intrm_sf_mf_742 *
intrm_sf_mf_742 ; t223 = - X [ 38ULL ] / ( t276 == 0.0 ? 1.0E-16 : t276 ) * X
[ 7ULL ] * intermediate_der3450 ; intermediate_der3495 = - X [ 38ULL ] / (
t276 == 0.0 ? 1.0E-16 : t276 ) * X [ 7ULL ] * intermediate_der3449 ;
intermediate_der3496 = - X [ 38ULL ] / ( t276 == 0.0 ? 1.0E-16 : t276 ) *
intrm_sf_mf_742 ; if ( X [ 7ULL ] <= 216.59999999999997 ) { t275 = 0.0 ; }
else { t275 = ( real_T ) ! ( X [ 7ULL ] >= 623.15 ) ; } t197 =
intermediate_der7387 * t275 * 2.0 ; if ( X [ 41ULL ] <= 0.0 ) { t276 = 0.0 ;
} else { t276 = ( real_T ) ! ( X [ 41ULL ] >= 1.0 ) ; } if ( X [ 40ULL ] <=
0.0 ) { intermediate_der3988 = 0.0 ; } else { intermediate_der3988 = ( real_T
) ! ( X [ 40ULL ] >= 1.0 ) ; } intermediate_der3989 = - intermediate_der3988
* 296.802103844292 + intermediate_der3988 * 259.836612622973 ;
intermediate_der3990 = - t276 * 296.802103844292 + t276 * 461.523 ;
intermediate_der4033 = 1.0 / ( t225 == 0.0 ? 1.0E-16 : t225 ) ; t283 = X [
39ULL ] * X [ 39ULL ] * intrm_sf_mf_875 * intrm_sf_mf_875 ; t225 = - X [
42ULL ] / ( t283 == 0.0 ? 1.0E-16 : t283 ) * X [ 39ULL ] *
intermediate_der3990 ; intermediate_der4035 = - X [ 42ULL ] / ( t283 == 0.0 ?
1.0E-16 : t283 ) * intrm_sf_mf_875 ; intermediate_der4036 = - X [ 42ULL ] / (
t283 == 0.0 ? 1.0E-16 : t283 ) * X [ 39ULL ] * intermediate_der3989 ; if ( X
[ 39ULL ] <= 216.59999999999997 ) { t282 = 0.0 ; } else { t282 = ( real_T ) !
( X [ 39ULL ] >= 623.15 ) ; } t200 = intermediate_der7515 * t282 * 2.0 ; if (
X [ 45ULL ] <= 0.0 ) { t283 = 0.0 ; } else { t283 = ( real_T ) ! ( X [ 45ULL
] >= 1.0 ) ; } if ( X [ 46ULL ] <= 0.0 ) { intermediate_der6334 = 0.0 ; }
else { intermediate_der6334 = ( real_T ) ! ( X [ 46ULL ] >= 1.0 ) ; }
intermediate_der4556 = - intermediate_der6334 * 296.802103844292 +
intermediate_der6334 * 259.836612622973 ; intermediate_der4557 = - t283 *
296.802103844292 + t283 * 461.523 ; intermediate_der4600 = 1.0 / ( t227 ==
0.0 ? 1.0E-16 : t227 ) ; t290 = X [ 43ULL ] * X [ 43ULL ] * intrm_sf_mf_1021
* intrm_sf_mf_1021 ; t227 = - X [ 44ULL ] / ( t290 == 0.0 ? 1.0E-16 : t290 )
* X [ 43ULL ] * intermediate_der4557 ; intermediate_der4602 = - X [ 44ULL ] /
( t290 == 0.0 ? 1.0E-16 : t290 ) * X [ 43ULL ] * intermediate_der4556 ;
intermediate_der4603 = - X [ 44ULL ] / ( t290 == 0.0 ? 1.0E-16 : t290 ) *
intrm_sf_mf_1021 ; if ( X [ 43ULL ] <= 216.59999999999997 ) { t289 = 0.0 ; }
else { t289 = ( real_T ) ! ( X [ 43ULL ] >= 623.15 ) ; } t203 =
intermediate_der6335 * t289 * 2.0 ; if ( X [ 12ULL ] <= 0.0 ) { t290 = 0.0 ;
} else { t290 = ( real_T ) ! ( X [ 12ULL ] >= 1.0 ) ; } if ( X [ 11ULL ] <=
0.0 ) { intermediate_der5232 = 0.0 ; } else { intermediate_der5232 = ( real_T
) ! ( X [ 11ULL ] >= 1.0 ) ; } intermediate_der5233 = - intermediate_der5232
* 296.802103844292 + intermediate_der5232 * 259.836612622973 ;
intermediate_der5234 = - t290 * 296.802103844292 + t290 * 461.523 ;
intermediate_der5277 = 1.0 / ( t229 == 0.0 ? 1.0E-16 : t229 ) ; t297 = X [
10ULL ] * X [ 10ULL ] * intrm_sf_mf_1191 * intrm_sf_mf_1191 ; t229 = - X [
47ULL ] / ( t297 == 0.0 ? 1.0E-16 : t297 ) * X [ 10ULL ] *
intermediate_der5234 ; intermediate_der5279 = - X [ 47ULL ] / ( t297 == 0.0 ?
1.0E-16 : t297 ) * X [ 10ULL ] * intermediate_der5233 ; intermediate_der5280
= - X [ 47ULL ] / ( t297 == 0.0 ? 1.0E-16 : t297 ) * intrm_sf_mf_1191 ; if (
X [ 10ULL ] <= 216.59999999999997 ) { t296 = 0.0 ; } else { t296 = ( real_T )
! ( X [ 10ULL ] >= 623.15 ) ; } t206 = intermediate_der6452 * t296 * 2.0 ; if
( X [ 15ULL ] <= 0.0 ) { t297 = 0.0 ; } else { t297 = ( real_T ) ! ( X [
15ULL ] >= 1.0 ) ; } if ( X [ 14ULL ] <= 0.0 ) { intermediate_der5756 = 0.0 ;
} else { intermediate_der5756 = ( real_T ) ! ( X [ 14ULL ] >= 1.0 ) ; }
intermediate_der5757 = - intermediate_der5756 * 296.802103844292 +
intermediate_der5756 * 259.836612622973 ; intermediate_der5758 = - t297 *
296.802103844292 + t297 * 461.523 ; intermediate_der5801 = 1.0 / ( t231 ==
0.0 ? 1.0E-16 : t231 ) ; t304 = X [ 13ULL ] * X [ 13ULL ] * intrm_sf_mf_1323
* intrm_sf_mf_1323 ; t231 = - X [ 48ULL ] / ( t304 == 0.0 ? 1.0E-16 : t304 )
* intrm_sf_mf_1323 ; intermediate_der5803 = - X [ 48ULL ] / ( t304 == 0.0 ?
1.0E-16 : t304 ) * X [ 13ULL ] * intermediate_der5758 ; intermediate_der5804
= - X [ 48ULL ] / ( t304 == 0.0 ? 1.0E-16 : t304 ) * X [ 13ULL ] *
intermediate_der5757 ; if ( X [ 13ULL ] <= 216.59999999999997 ) { t303 = 0.0
; } else { t303 = ( real_T ) ! ( X [ 13ULL ] >= 623.15 ) ; } t209 =
intermediate_der6557 * t303 * 2.0 ; t304 = - intermediate_der6334 * ( (
1074.1165326382641 + intermediate_der6335 * - 0.2214565261064495 ) + t137 *
0.00037212980109014541 ) + ( ( 900.63941224838356 + intermediate_der6335 * -
0.044484923911382625 ) + t137 * 0.00036936011832044979 ) *
intermediate_der6334 ; intermediate_der6334 = - t283 * ( ( 1074.1165326382641
+ intermediate_der6335 * - 0.2214565261064495 ) + t137 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + intermediate_der6335 *
1.2002114337048222 ) + t137 * - 0.00038614513167823636 ) * t283 ;
intermediate_der6335 = ( ( t289 * - 0.2214565261064495 + t203 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der6450 ) -
intermediate_der6451 ) + ( t289 * 1.2002114337048222 + t203 * -
0.00038614513167823636 ) * intermediate_der6450 ) + ( t289 * -
0.044484923911382625 + t203 * 0.00036936011832044979 ) * intermediate_der6451
; intermediate_der6450 = - intermediate_der5232 * ( ( 1074.1165326382641 +
intermediate_der6452 * - 0.2214565261064495 ) + t140 * 0.00037212980109014541
) + ( ( 900.63941224838356 + intermediate_der6452 * - 0.044484923911382625 )
+ t140 * 0.00036936011832044979 ) * intermediate_der5232 ;
intermediate_der6451 = - t290 * ( ( 1074.1165326382641 + intermediate_der6452
* - 0.2214565261064495 ) + t140 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der6452 * 1.2002114337048222 ) + t140 * -
0.00038614513167823636 ) * t290 ; intermediate_der6452 = ( ( t296 * -
0.2214565261064495 + t206 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der6546 ) - intermediate_der6547 ) + ( t296 * 1.2002114337048222
+ t206 * - 0.00038614513167823636 ) * intermediate_der6546 ) + ( t296 * -
0.044484923911382625 + t206 * 0.00036936011832044979 ) * intermediate_der6547
; intermediate_der6546 = - intermediate_der742 * ( ( 1074.1165326382641 +
t378 * - 0.2214565261064495 ) + t113 * 0.00037212980109014541 ) + ( (
12825.281119789837 + t378 * 6.9647057412840034 ) + t113 * -
0.0070524868246844051 ) * intermediate_der742 ; intermediate_der6547 = - t311
* ( ( 1074.1165326382641 + t378 * - 0.2214565261064495 ) + t113 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + t378 * 1.2002114337048222
) + t113 * - 0.00038614513167823636 ) * t311 ; t378 = ( ( t233 * -
0.2214565261064495 + t179 * 0.00037212980109014541 ) * ( ( 1.0 - t515 ) -
t518 ) + ( t233 * 1.2002114337048222 + t179 * - 0.00038614513167823636 ) *
t515 ) + ( t233 * 6.9647057412840034 + t179 * - 0.0070524868246844051 ) *
t518 ; t515 = - intermediate_der5756 * ( ( 1074.1165326382641 +
intermediate_der6557 * - 0.2214565261064495 ) + t143 * 0.00037212980109014541
) + ( ( 900.63941224838356 + intermediate_der6557 * - 0.044484923911382625 )
+ t143 * 0.00036936011832044979 ) * intermediate_der5756 ; t518 = - t297 * (
( 1074.1165326382641 + intermediate_der6557 * - 0.2214565261064495 ) + t143 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + intermediate_der6557 *
1.2002114337048222 ) + t143 * - 0.00038614513167823636 ) * t297 ;
intermediate_der6557 = ( ( t303 * - 0.2214565261064495 + t209 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der6994 ) -
intermediate_der6995 ) + ( t303 * 1.2002114337048222 + t209 * -
0.00038614513167823636 ) * intermediate_der6994 ) + ( t303 * -
0.044484923911382625 + t209 * 0.00036936011832044979 ) * intermediate_der6995
; intermediate_der6994 = - intermediate_der1419 * ( ( 1074.1165326382641 +
intermediate_der6996 * - 0.2214565261064495 ) + t116 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der6996 * 6.9647057412840034 ) +
t116 * - 0.0070524868246844051 ) * intermediate_der1419 ;
intermediate_der6995 = - t234 * ( ( 1074.1165326382641 + intermediate_der6996
* - 0.2214565261064495 ) + t116 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der6996 * 1.2002114337048222 ) + t116 * -
0.00038614513167823636 ) * t234 ; intermediate_der6996 = ( ( t240 * -
0.2214565261064495 + t182 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der7006 ) - intermediate_der7007 ) + ( t240 * 1.2002114337048222
+ t182 * - 0.00038614513167823636 ) * intermediate_der7006 ) + ( t240 *
6.9647057412840034 + t182 * - 0.0070524868246844051 ) * intermediate_der7007
; intermediate_der7006 = - intermediate_der1494 * ( ( 1074.1165326382641 +
intermediate_der7008 * - 0.2214565261064495 ) + t119 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der7008 * 6.9647057412840034 ) +
t119 * - 0.0070524868246844051 ) * intermediate_der1494 ;
intermediate_der7007 = - t241 * ( ( 1074.1165326382641 + intermediate_der7008
* - 0.2214565261064495 ) + t119 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der7008 * 1.2002114337048222 ) + t119 * -
0.00038614513167823636 ) * t241 ; intermediate_der7008 = ( ( t247 * -
0.2214565261064495 + t185 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der7154 ) - intermediate_der7155 ) + ( t247 * 1.2002114337048222
+ t185 * - 0.00038614513167823636 ) * intermediate_der7154 ) + ( t247 *
6.9647057412840034 + t185 * - 0.0070524868246844051 ) * intermediate_der7155
; intermediate_der7154 = - intermediate_der2254 * ( ( 1074.1165326382641 +
intermediate_der7156 * - 0.2214565261064495 ) + t122 * 0.00037212980109014541
) + ( ( 900.63941224838356 + intermediate_der7156 * - 0.044484923911382625 )
+ t122 * 0.00036936011832044979 ) * intermediate_der2254 ;
intermediate_der7155 = - t248 * ( ( 1074.1165326382641 + intermediate_der7156
* - 0.2214565261064495 ) + t122 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der7156 * 1.2002114337048222 ) + t122 * -
0.00038614513167823636 ) * t248 ; intermediate_der7156 = ( ( t254 * -
0.2214565261064495 + t188 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der7161 ) - intermediate_der7162 ) + ( t254 * 1.2002114337048222
+ t188 * - 0.00038614513167823636 ) * intermediate_der7161 ) + ( t254 * -
0.044484923911382625 + t188 * 0.00036936011832044979 ) * intermediate_der7162
; intermediate_der7161 = - intermediate_der2392 * ( ( 1074.1165326382641 +
t338 * - 0.2214565261064495 ) + t125 * 0.00037212980109014541 ) + ( (
12825.281119789837 + t338 * 6.9647057412840034 ) + t125 * -
0.0070524868246844051 ) * intermediate_der2392 ; intermediate_der7162 = ( (
t261 * - 0.2214565261064495 + t191 * 0.00037212980109014541 ) * ( ( 1.0 -
intermediate_der7163 ) - t325 ) + ( t261 * 1.2002114337048222 + t191 * -
0.00038614513167823636 ) * intermediate_der7163 ) + ( t261 *
6.9647057412840034 + t191 * - 0.0070524868246844051 ) * t325 ;
intermediate_der7163 = - t255 * ( ( 1074.1165326382641 + t338 * -
0.2214565261064495 ) + t125 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + t338 * 1.2002114337048222 ) + t125 * -
0.00038614513167823636 ) * t255 ; t325 = - intermediate_der2924 * ( (
1074.1165326382641 + t327 * - 0.2214565261064495 ) + t128 *
0.00037212980109014541 ) + ( ( 12825.281119789837 + t327 * 6.9647057412840034
) + t128 * - 0.0070524868246844051 ) * intermediate_der2924 ; t338 = - t262 *
( ( 1074.1165326382641 + t327 * - 0.2214565261064495 ) + t128 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + t327 * 1.2002114337048222
) + t128 * - 0.00038614513167823636 ) * t262 ; t327 = ( ( t268 * -
0.2214565261064495 + t194 * 0.00037212980109014541 ) * ( ( 1.0 - t351 ) -
t356 ) + ( t268 * 1.2002114337048222 + t194 * - 0.00038614513167823636 ) *
t351 ) + ( t268 * 6.9647057412840034 + t194 * - 0.0070524868246844051 ) *
t356 ; t351 = - intermediate_der3448 * ( ( 1074.1165326382641 +
intermediate_der7387 * - 0.2214565261064495 ) + t131 * 0.00037212980109014541
) + ( ( 12825.281119789837 + intermediate_der7387 * 6.9647057412840034 ) +
t131 * - 0.0070524868246844051 ) * intermediate_der3448 ; t356 = - t269 * ( (
1074.1165326382641 + intermediate_der7387 * - 0.2214565261064495 ) + t131 *
0.00037212980109014541 ) + ( ( 1479.6504774711011 + intermediate_der7387 *
1.2002114337048222 ) + t131 * - 0.00038614513167823636 ) * t269 ;
intermediate_der7387 = ( ( t275 * - 0.2214565261064495 + t197 *
0.00037212980109014541 ) * ( ( 1.0 - intermediate_der7513 ) -
intermediate_der7514 ) + ( t275 * 1.2002114337048222 + t197 * -
0.00038614513167823636 ) * intermediate_der7513 ) + ( t275 *
6.9647057412840034 + t197 * - 0.0070524868246844051 ) * intermediate_der7514
; intermediate_der7513 = - intermediate_der3988 * ( ( 1074.1165326382641 +
intermediate_der7515 * - 0.2214565261064495 ) + t134 * 0.00037212980109014541
) + ( ( 900.63941224838356 + intermediate_der7515 * - 0.044484923911382625 )
+ t134 * 0.00036936011832044979 ) * intermediate_der3988 ;
intermediate_der7514 = - t276 * ( ( 1074.1165326382641 + intermediate_der7515
* - 0.2214565261064495 ) + t134 * 0.00037212980109014541 ) + ( (
1479.6504774711011 + intermediate_der7515 * 1.2002114337048222 ) + t134 * -
0.00038614513167823636 ) * t276 ; intermediate_der7515 = ( ( t282 * -
0.2214565261064495 + t200 * 0.00037212980109014541 ) * ( ( 1.0 - t309 ) -
t312 ) + ( t282 * 1.2002114337048222 + t200 * - 0.00038614513167823636 ) *
t309 ) + ( t282 * - 0.044484923911382625 + t200 * 0.00036936011832044979 ) *
t312 ; t312 = X [ 4ULL ] * X [ 4ULL ] ; t12 [ 0ULL ] = ( - ( 1.0 / ( X [ 4ULL
] == 0.0 ? 1.0E-16 : X [ 4ULL ] ) ) * intermediate_der2972 + - ( - 1.0 / (
t312 == 0.0 ? 1.0E-16 : t312 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
2677.3120849090419 / 12.896402563644669 ; t12 [ 1ULL ] = ( ( intrm_sf_mf_712
- intrm_sf_mf_610 ) * intermediate_der2972 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * t327 ) *
2.6773120849090417 / 2246.65922904024 ; t12 [ 2ULL ] = intermediate_der2972 *
2677.3120849090419 ; t12 [ 3ULL ] = intermediate_der2972 * 2677.3120849090419
; t12 [ 4ULL ] = 1.0 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) *
intermediate_der2972 * 2677.3120849090419 / 12.896402563644669 ; t13 [ 0ULL ]
= - ( 1.0 / ( X [ 4ULL ] == 0.0 ? 1.0E-16 : X [ 4ULL ] ) ) *
intermediate_der2971 * 2677.3120849090419 / 12.896402563644669 ; t13 [ 1ULL ]
= ( ( intrm_sf_mf_712 - intrm_sf_mf_610 ) * intermediate_der2971 + ( t325 -
intermediate_der2925 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
2.6773120849090417 / 2246.65922904024 ; t13 [ 2ULL ] = intermediate_der2971 *
2677.3120849090419 ; t13 [ 3ULL ] = intermediate_der2971 * 2677.3120849090419
; t13 [ 4ULL ] = 1.0 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) *
intermediate_der2971 * 2677.3120849090419 / 12.896402563644669 ; t14 [ 0ULL ]
= - ( 1.0 / ( X [ 4ULL ] == 0.0 ? 1.0E-16 : X [ 4ULL ] ) ) * t221 *
2677.3120849090419 / 12.896402563644669 ; t14 [ 1ULL ] = ( ( intrm_sf_mf_712
- intrm_sf_mf_610 ) * t221 + ( t338 - intermediate_der2926 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
2.6773120849090417 / 2246.65922904024 ; t14 [ 2ULL ] = t221 *
2677.3120849090419 ; t14 [ 3ULL ] = t221 * 2677.3120849090419 ; t14 [ 4ULL ]
= 1.0 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) * t221 *
2677.3120849090419 / 12.896402563644669 ; t338 = X [ 7ULL ] * X [ 7ULL ] ;
t15 [ 0ULL ] = ( - ( 1.0 / ( X [ 7ULL ] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) ) *
intermediate_der3496 + - ( - 1.0 / ( t338 == 0.0 ? 1.0E-16 : t338 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ) *
2677.3120849090419 / 13.896402563644669 ; t15 [ 1ULL ] = ( ( intrm_sf_mf_844
- intrm_sf_mf_742 ) * intermediate_der3496 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I *
intermediate_der7387 ) * 2.6773120849090417 / 2448.8207083326588 ; t15 [ 2ULL
] = intermediate_der3496 * 2677.3120849090419 ; t15 [ 3ULL ] =
intermediate_der3496 * 2677.3120849090419 ; t15 [ 4ULL ] = 1.0 / ( X [ 38ULL
] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) * intermediate_der3496 *
2677.3120849090419 / 13.896402563644669 ; t16 [ 0ULL ] = - ( 1.0 / ( X [ 7ULL
] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) ) * intermediate_der3495 *
2677.3120849090419 / 13.896402563644669 ; t16 [ 1ULL ] = ( ( intrm_sf_mf_844
- intrm_sf_mf_742 ) * intermediate_der3495 + ( t351 - intermediate_der3449 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2448.8207083326588 ; t16 [ 2ULL ] = intermediate_der3495
* 2677.3120849090419 ; t16 [ 3ULL ] = intermediate_der3495 *
2677.3120849090419 ; t16 [ 4ULL ] = 1.0 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X
[ 38ULL ] ) * intermediate_der3495 * 2677.3120849090419 / 13.896402563644669
; t17 [ 0ULL ] = - ( 1.0 / ( X [ 7ULL ] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) ) *
t223 * 2677.3120849090419 / 13.896402563644669 ; t17 [ 1ULL ] = ( (
intrm_sf_mf_844 - intrm_sf_mf_742 ) * t223 + ( t356 - intermediate_der3450 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2448.8207083326588 ; t17 [ 2ULL ] = t223 *
2677.3120849090419 ; t17 [ 3ULL ] = t223 * 2677.3120849090419 ; t17 [ 4ULL ]
= 1.0 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) * t223 *
2677.3120849090419 / 13.896402563644669 ; t351 = X [ 10ULL ] * X [ 10ULL ] ;
t18 [ 0ULL ] = ( - ( 1.0 / ( X [ 10ULL ] == 0.0 ? 1.0E-16 : X [ 10ULL ] ) ) *
intermediate_der5280 + - ( - 1.0 / ( t351 == 0.0 ? 1.0E-16 : t351 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
2677.3120849090419 ; t18 [ 1ULL ] = ( ( intrm_sf_mf_1293 - intrm_sf_mf_1191 )
* intermediate_der5280 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
intermediate_der6452 ) * 2.6773120849090417 / 2172.7681408465714 ; t18 [ 2ULL
] = intermediate_der5280 * 2677.3120849090419 ; t18 [ 3ULL ] =
intermediate_der5280 * 2677.3120849090419 ; t18 [ 4ULL ] = 1.0 / ( X [ 47ULL
] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) * intermediate_der5280 *
2677.3120849090419 ; t19 [ 0ULL ] = - ( 1.0 / ( X [ 10ULL ] == 0.0 ? 1.0E-16
: X [ 10ULL ] ) ) * intermediate_der5279 * 2677.3120849090419 ; t19 [ 1ULL ]
= ( ( intrm_sf_mf_1293 - intrm_sf_mf_1191 ) * intermediate_der5279 + (
intermediate_der6450 - intermediate_der5233 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
2.6773120849090417 / 2172.7681408465714 ; t19 [ 2ULL ] = intermediate_der5279
* 2677.3120849090419 ; t19 [ 3ULL ] = intermediate_der5279 *
2677.3120849090419 ; t19 [ 4ULL ] = 1.0 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X
[ 47ULL ] ) * intermediate_der5279 * 2677.3120849090419 ; t20 [ 0ULL ] = - (
1.0 / ( X [ 10ULL ] == 0.0 ? 1.0E-16 : X [ 10ULL ] ) ) * t229 *
2677.3120849090419 ; t20 [ 1ULL ] = ( ( intrm_sf_mf_1293 - intrm_sf_mf_1191 )
* t229 + ( intermediate_der6451 - intermediate_der5234 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
2.6773120849090417 / 2172.7681408465714 ; t20 [ 2ULL ] = t229 *
2677.3120849090419 ; t20 [ 3ULL ] = t229 * 2677.3120849090419 ; t20 [ 4ULL ]
= 1.0 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) * t229 *
2677.3120849090419 ; t356 = X [ 13ULL ] * X [ 13ULL ] ; t21 [ 0ULL ] = ( - (
1.0 / ( X [ 13ULL ] == 0.0 ? 1.0E-16 : X [ 13ULL ] ) ) * t231 + - ( - 1.0 / (
t356 == 0.0 ? 1.0E-16 : t356 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I ) *
2677.3120849090419 / 1.5549856083302016 ; t21 [ 1ULL ] = ( ( intrm_sf_mf_1425
- intrm_sf_mf_1323 ) * t231 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I *
intermediate_der6557 ) * 2.6773120849090417 / 2374.9296201389902 ; t21 [ 2ULL
] = t231 * 2677.3120849090419 ; t21 [ 3ULL ] = t231 * 2677.3120849090419 ;
t21 [ 4ULL ] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * t231 *
2677.3120849090419 / 1.5549856083302016 ; t22 [ 0ULL ] = - ( 1.0 / ( X [
13ULL ] == 0.0 ? 1.0E-16 : X [ 13ULL ] ) ) * intermediate_der5804 *
2677.3120849090419 / 1.5549856083302016 ; t22 [ 1ULL ] = ( ( intrm_sf_mf_1425
- intrm_sf_mf_1323 ) * intermediate_der5804 + ( t515 - intermediate_der5757 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2374.9296201389902 ; t22 [ 2ULL ] = intermediate_der5804
* 2677.3120849090419 ; t22 [ 3ULL ] = intermediate_der5804 *
2677.3120849090419 ; t22 [ 4ULL ] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X
[ 48ULL ] ) * intermediate_der5804 * 2677.3120849090419 / 1.5549856083302016
; t23 [ 0ULL ] = - ( 1.0 / ( X [ 13ULL ] == 0.0 ? 1.0E-16 : X [ 13ULL ] ) ) *
intermediate_der5803 * 2677.3120849090419 / 1.5549856083302016 ; t23 [ 1ULL ]
= ( ( intrm_sf_mf_1425 - intrm_sf_mf_1323 ) * intermediate_der5803 + ( t518 -
intermediate_der5758 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2374.9296201389902 ; t23 [ 2ULL ] = intermediate_der5803
* 2677.3120849090419 ; t23 [ 3ULL ] = intermediate_der5803 *
2677.3120849090419 ; t23 [ 4ULL ] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X
[ 48ULL ] ) * intermediate_der5803 * 2677.3120849090419 / 1.5549856083302016
; t518 = X [ 17ULL ] * X [ 17ULL ] ; t24 [ 0ULL ] = ( - ( 1.0 / ( X [ 17ULL ]
== 0.0 ? 1.0E-16 : X [ 17ULL ] ) ) * intermediate_der790 + - ( - 1.0 / ( t518
== 0.0 ? 1.0E-16 : t518 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ) *
7.8539816339744828 / 12.896402563644669 ; t24 [ 1ULL ] = ( ( intrm_sf_mf_133
- t449 ) * intermediate_der790 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I * t378 ) *
0.0078539816339744835 / 2246.65922904024 ; t24 [ 2ULL ] = 1.0 / ( X [ 18ULL ]
== 0.0 ? 1.0E-16 : X [ 18ULL ] ) * intermediate_der790 * 7.8539816339744828 /
12.896402563644669 ; t24 [ 3ULL ] = intermediate_der790 * 7.8539816339744828
; t24 [ 4ULL ] = intermediate_der790 * 7.8539816339744828 ; t25 [ 0ULL ] = -
( 1.0 / ( X [ 17ULL ] == 0.0 ? 1.0E-16 : X [ 17ULL ] ) ) *
intermediate_der787 * 7.8539816339744828 / 12.896402563644669 ; t25 [ 1ULL ]
= ( intrm_sf_mf_133 - t449 ) * intermediate_der787 * 0.0078539816339744835 /
2246.65922904024 ; t518 = X [ 18ULL ] * X [ 18ULL ] ; t25 [ 2ULL ] = ( 1.0 /
( X [ 18ULL ] == 0.0 ? 1.0E-16 : X [ 18ULL ] ) * intermediate_der787 + - 1.0
/ ( t518 == 0.0 ? 1.0E-16 : t518 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ) *
7.8539816339744828 / 12.896402563644669 ; t25 [ 3ULL ] = intermediate_der787
* 7.8539816339744828 ; t25 [ 4ULL ] = intermediate_der787 *
7.8539816339744828 ; t26 [ 0ULL ] = - ( 1.0 / ( X [ 17ULL ] == 0.0 ? 1.0E-16
: X [ 17ULL ] ) ) * t211 * 7.8539816339744828 / 12.896402563644669 ; t26 [
1ULL ] = ( ( intrm_sf_mf_133 - t449 ) * t211 + ( intermediate_der6547 -
intermediate_der744 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ) *
0.0078539816339744835 / 2246.65922904024 ; t26 [ 2ULL ] = 1.0 / ( X [ 18ULL ]
== 0.0 ? 1.0E-16 : X [ 18ULL ] ) * t211 * 7.8539816339744828 /
12.896402563644669 ; t26 [ 3ULL ] = t211 * 7.8539816339744828 ; t26 [ 4ULL ]
= t211 * 7.8539816339744828 ; t27 [ 0ULL ] = - ( 1.0 / ( X [ 17ULL ] == 0.0 ?
1.0E-16 : X [ 17ULL ] ) ) * intermediate_der789 * 7.8539816339744828 /
12.896402563644669 ; t27 [ 1ULL ] = ( ( intrm_sf_mf_133 - t449 ) *
intermediate_der789 + ( intermediate_der6546 - intermediate_der743 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ) *
0.0078539816339744835 / 2246.65922904024 ; t27 [ 2ULL ] = 1.0 / ( X [ 18ULL ]
== 0.0 ? 1.0E-16 : X [ 18ULL ] ) * intermediate_der789 * 7.8539816339744828 /
12.896402563644669 ; t27 [ 3ULL ] = intermediate_der789 * 7.8539816339744828
; t27 [ 4ULL ] = intermediate_der789 * 7.8539816339744828 ; t518 = X [ 21ULL
] * X [ 21ULL ] ; t28 [ 0ULL ] = ( - ( 1.0 / ( X [ 21ULL ] == 0.0 ? 1.0E-16 :
X [ 21ULL ] ) ) * intermediate_der1425 + - ( - 1.0 / ( t518 == 0.0 ? 1.0E-16
: t518 ) ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) *
12000.0 / 12.896402563644669 ; t28 [ 1ULL ] = ( ( intrm_sf_mf_214 -
intrm_sf_mf_201 ) * intermediate_der1425 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I *
intermediate_der6996 ) * 12.0 / 2246.65922904024 ; t28 [ 2ULL ] = 1.0 / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) * intermediate_der1425 * 12000.0 /
12.896402563644669 ; t28 [ 3ULL ] = intermediate_der1425 * 12000.0 ; t28 [
4ULL ] = intermediate_der1425 * 12000.0 ; t29 [ 0ULL ] = - ( 1.0 / ( X [
21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) ) * intermediate_der1422 * 12000.0 /
12.896402563644669 ; t29 [ 1ULL ] = ( intrm_sf_mf_214 - intrm_sf_mf_201 ) *
intermediate_der1422 * 12.0 / 2246.65922904024 ; t518 = X [ 22ULL ] * X [
22ULL ] ; t29 [ 2ULL ] = ( 1.0 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ]
) * intermediate_der1422 + - 1.0 / ( t518 == 0.0 ? 1.0E-16 : t518 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) * 12000.0 /
12.896402563644669 ; t29 [ 3ULL ] = intermediate_der1422 * 12000.0 ; t29 [
4ULL ] = intermediate_der1422 * 12000.0 ; t30 [ 0ULL ] = - ( 1.0 / ( X [
21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) ) * t213 * 12000.0 /
12.896402563644669 ; t30 [ 1ULL ] = ( ( intrm_sf_mf_214 - intrm_sf_mf_201 ) *
t213 + ( intermediate_der6994 - intermediate_der1420 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) * 12.0 /
2246.65922904024 ; t30 [ 2ULL ] = 1.0 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [
22ULL ] ) * t213 * 12000.0 / 12.896402563644669 ; t30 [ 3ULL ] = t213 *
12000.0 ; t30 [ 4ULL ] = t213 * 12000.0 ; t31 [ 0ULL ] = - ( 1.0 / ( X [
21ULL ] == 0.0 ? 1.0E-16 : X [ 21ULL ] ) ) * intermediate_der1424 * 12000.0 /
12.896402563644669 ; t31 [ 1ULL ] = ( ( intrm_sf_mf_214 - intrm_sf_mf_201 ) *
intermediate_der1424 + ( intermediate_der6995 - intermediate_der1421 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I ) * 12.0 /
2246.65922904024 ; t31 [ 2ULL ] = 1.0 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [
22ULL ] ) * intermediate_der1424 * 12000.0 / 12.896402563644669 ; t31 [ 3ULL
] = intermediate_der1424 * 12000.0 ; t31 [ 4ULL ] = intermediate_der1424 *
12000.0 ; t518 = X [ 25ULL ] * X [ 25ULL ] ; t32 [ 0ULL ] = ( - ( 1.0 / ( X [
25ULL ] == 0.0 ? 1.0E-16 : X [ 25ULL ] ) ) * intermediate_der1541 + - ( - 1.0
/ ( t518 == 0.0 ? 1.0E-16 : t518 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I ) *
7.8539816339744828 / 12.896402563644669 ; t32 [ 1ULL ] = ( ( intrm_sf_mf_322
- intrm_sf_mf_220 ) * intermediate_der1541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I *
intermediate_der7008 ) * 0.0078539816339744835 / 2246.65922904024 ; t32 [
2ULL ] = 1.0 / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) *
intermediate_der1541 * 7.8539816339744828 / 12.896402563644669 ; t32 [ 3ULL ]
= intermediate_der1541 * 7.8539816339744828 ; t32 [ 4ULL ] =
intermediate_der1541 * 7.8539816339744828 ; t33 [ 0ULL ] = - ( 1.0 / ( X [
25ULL ] == 0.0 ? 1.0E-16 : X [ 25ULL ] ) ) * intermediate_der1539 *
7.8539816339744828 / 12.896402563644669 ; t33 [ 1ULL ] = ( intrm_sf_mf_322 -
intrm_sf_mf_220 ) * intermediate_der1539 * 0.0078539816339744835 /
2246.65922904024 ; t518 = X [ 26ULL ] * X [ 26ULL ] ; t33 [ 2ULL ] = ( 1.0 /
( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) * intermediate_der1539 + - 1.0
/ ( t518 == 0.0 ? 1.0E-16 : t518 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I ) *
7.8539816339744828 / 12.896402563644669 ; t33 [ 3ULL ] = intermediate_der1539
* 7.8539816339744828 ; t33 [ 4ULL ] = intermediate_der1539 *
7.8539816339744828 ; t34 [ 0ULL ] = - ( 1.0 / ( X [ 25ULL ] == 0.0 ? 1.0E-16
: X [ 25ULL ] ) ) * t215 * 7.8539816339744828 / 12.896402563644669 ; t34 [
1ULL ] = ( ( intrm_sf_mf_322 - intrm_sf_mf_220 ) * t215 + (
intermediate_der7007 - intermediate_der1496 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I ) *
0.0078539816339744835 / 2246.65922904024 ; t34 [ 2ULL ] = 1.0 / ( X [ 26ULL ]
== 0.0 ? 1.0E-16 : X [ 26ULL ] ) * t215 * 7.8539816339744828 /
12.896402563644669 ; t34 [ 3ULL ] = t215 * 7.8539816339744828 ; t34 [ 4ULL ]
= t215 * 7.8539816339744828 ; t35 [ 0ULL ] = - ( 1.0 / ( X [ 25ULL ] == 0.0 ?
1.0E-16 : X [ 25ULL ] ) ) * intermediate_der1542 * 7.8539816339744828 /
12.896402563644669 ; t35 [ 1ULL ] = ( ( intrm_sf_mf_322 - intrm_sf_mf_220 ) *
intermediate_der1542 + ( intermediate_der7006 - intermediate_der1495 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I ) *
0.0078539816339744835 / 2246.65922904024 ; t35 [ 2ULL ] = 1.0 / ( X [ 26ULL ]
== 0.0 ? 1.0E-16 : X [ 26ULL ] ) * intermediate_der1542 * 7.8539816339744828
/ 12.896402563644669 ; t35 [ 3ULL ] = intermediate_der1542 *
7.8539816339744828 ; t35 [ 4ULL ] = intermediate_der1542 * 7.8539816339744828
; t515 = X [ 29ULL ] * X [ 29ULL ] ; t36 [ 0ULL ] = ( 1.0 / ( X [ 29ULL ] ==
0.0 ? 1.0E-16 : X [ 29ULL ] ) * intermediate_der2257 + - 1.0 / ( t515 == 0.0
? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ) *
29.999999999999996 ; t36 [ 1ULL ] = - ( 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16
: X [ 30ULL ] ) ) * intermediate_der2257 * 29.999999999999996 ; t36 [ 2ULL ]
= ( intrm_sf_mf_471 - intrm_sf_mf_452 ) * intermediate_der2257 * 0.03 /
2172.7681408465714 ; t36 [ 3ULL ] = intermediate_der2257 * 29.999999999999996
; t36 [ 4ULL ] = intermediate_der2257 * 29.999999999999996 ; t37 [ 0ULL ] =
1.0 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) * intermediate_der2260 *
29.999999999999996 ; t518 = X [ 30ULL ] * X [ 30ULL ] ; t37 [ 1ULL ] = ( - (
1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16 : X [ 30ULL ] ) ) * intermediate_der2260
+ - ( - 1.0 / ( t518 == 0.0 ? 1.0E-16 : t518 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ) *
29.999999999999996 ; t37 [ 2ULL ] = ( ( intrm_sf_mf_471 - intrm_sf_mf_452 ) *
intermediate_der2260 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho *
intermediate_der7156 ) * 0.03 / 2172.7681408465714 ; t37 [ 3ULL ] =
intermediate_der2260 * 29.999999999999996 ; t37 [ 4ULL ] =
intermediate_der2260 * 29.999999999999996 ; t38 [ 0ULL ] = 1.0 / ( X [ 29ULL
] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) * intermediate_der2259 *
29.999999999999996 ; t38 [ 1ULL ] = - ( 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16
: X [ 30ULL ] ) ) * intermediate_der2259 * 29.999999999999996 ; t38 [ 2ULL ]
= ( ( intrm_sf_mf_471 - intrm_sf_mf_452 ) * intermediate_der2259 + (
intermediate_der7154 - intermediate_der2255 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ) * 0.03 /
2172.7681408465714 ; t38 [ 3ULL ] = intermediate_der2259 * 29.999999999999996
; t38 [ 4ULL ] = intermediate_der2259 * 29.999999999999996 ; t39 [ 0ULL ] =
1.0 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) * t217 *
29.999999999999996 ; t39 [ 1ULL ] = - ( 1.0 / ( X [ 30ULL ] == 0.0 ? 1.0E-16
: X [ 30ULL ] ) ) * t217 * 29.999999999999996 ; t39 [ 2ULL ] = ( (
intrm_sf_mf_471 - intrm_sf_mf_452 ) * t217 + ( intermediate_der7155 -
intermediate_der2256 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ) * 0.03 /
2172.7681408465714 ; t39 [ 3ULL ] = t217 * 29.999999999999996 ; t39 [ 4ULL ]
= t217 * 29.999999999999996 ; t518 = X [ 33ULL ] * X [ 33ULL ] ; t40 [ 0ULL ]
= ( - ( 1.0 / ( X [ 33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) *
intermediate_der2440 + - ( - 1.0 / ( t518 == 0.0 ? 1.0E-16 : t518 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I ) *
49.087385212340521 / 12.896402563644669 ; t40 [ 1ULL ] = ( ( intrm_sf_mf_580
- intrm_sf_mf_478 ) * intermediate_der2440 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
intermediate_der7162 ) * 0.049087385212340524 / 2246.65922904024 ; t40 [ 2ULL
] = intermediate_der2440 * 49.087385212340521 ; t40 [ 3ULL ] =
intermediate_der2440 * 49.087385212340521 ; t40 [ 4ULL ] = 1.0 / ( X [ 36ULL
] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) * intermediate_der2440 *
49.087385212340521 / 12.896402563644669 ; t41 [ 0ULL ] = - ( 1.0 / ( X [
33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) * intermediate_der2439 *
49.087385212340521 / 12.896402563644669 ; t41 [ 1ULL ] = ( ( intrm_sf_mf_580
- intrm_sf_mf_478 ) * intermediate_der2439 + ( intermediate_der7161 -
intermediate_der2393 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I ) *
0.049087385212340524 / 2246.65922904024 ; t41 [ 2ULL ] = intermediate_der2439
* 49.087385212340521 ; t41 [ 3ULL ] = intermediate_der2439 *
49.087385212340521 ; t41 [ 4ULL ] = 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X
[ 36ULL ] ) * intermediate_der2439 * 49.087385212340521 / 12.896402563644669
; t42 [ 0ULL ] = - ( 1.0 / ( X [ 33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) *
t219 * 49.087385212340521 / 12.896402563644669 ; t42 [ 1ULL ] = ( (
intrm_sf_mf_580 - intrm_sf_mf_478 ) * t219 + ( intermediate_der7163 -
intermediate_der2394 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I ) *
0.049087385212340524 / 2246.65922904024 ; t42 [ 2ULL ] = t219 *
49.087385212340521 ; t42 [ 3ULL ] = t219 * 49.087385212340521 ; t42 [ 4ULL ]
= 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) * t219 *
49.087385212340521 / 12.896402563644669 ; t43 [ 0ULL ] = - ( 1.0 / ( X [
33ULL ] == 0.0 ? 1.0E-16 : X [ 33ULL ] ) ) * intermediate_der2437 *
49.087385212340521 / 12.896402563644669 ; t43 [ 1ULL ] = ( intrm_sf_mf_580 -
intrm_sf_mf_478 ) * intermediate_der2437 * 0.049087385212340524 /
2246.65922904024 ; t43 [ 2ULL ] = intermediate_der2437 * 49.087385212340521 ;
t43 [ 3ULL ] = intermediate_der2437 * 49.087385212340521 ; t515 = X [ 36ULL ]
* X [ 36ULL ] ; t43 [ 4ULL ] = ( 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [
36ULL ] ) * intermediate_der2437 + - 1.0 / ( t515 == 0.0 ? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I ) *
49.087385212340521 / 12.896402563644669 ; t44 [ 0ULL ] = - ( 1.0 / ( X [ 4ULL
] == 0.0 ? 1.0E-16 : X [ 4ULL ] ) ) * intermediate_der2969 *
2677.3120849090419 / 12.896402563644669 ; t44 [ 1ULL ] = ( intrm_sf_mf_712 -
intrm_sf_mf_610 ) * intermediate_der2969 * 2.6773120849090417 /
2246.65922904024 ; t44 [ 2ULL ] = intermediate_der2969 * 2677.3120849090419 ;
t44 [ 3ULL ] = intermediate_der2969 * 2677.3120849090419 ; t515 = X [ 37ULL ]
* X [ 37ULL ] ; t44 [ 4ULL ] = ( 1.0 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) * intermediate_der2969 + - 1.0 / ( t515 == 0.0 ? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
2677.3120849090419 / 12.896402563644669 ; t45 [ 0ULL ] = - ( 1.0 / ( X [ 7ULL
] == 0.0 ? 1.0E-16 : X [ 7ULL ] ) ) * intermediate_der3493 *
2677.3120849090419 / 13.896402563644669 ; t45 [ 1ULL ] = ( intrm_sf_mf_844 -
intrm_sf_mf_742 ) * intermediate_der3493 * 2.6773120849090417 /
2448.8207083326588 ; t45 [ 2ULL ] = intermediate_der3493 * 2677.3120849090419
; t45 [ 3ULL ] = intermediate_der3493 * 2677.3120849090419 ; t515 = X [ 38ULL
] * X [ 38ULL ] ; t45 [ 4ULL ] = ( 1.0 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [
38ULL ] ) * intermediate_der3493 + - 1.0 / ( t515 == 0.0 ? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ) *
2677.3120849090419 / 13.896402563644669 ; t518 = X [ 39ULL ] * X [ 39ULL ] ;
t46 [ 0ULL ] = ( - ( 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) *
intermediate_der4035 + - ( - 1.0 / ( t518 == 0.0 ? 1.0E-16 : t518 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
49.087385212340521 ; t46 [ 1ULL ] = ( ( intrm_sf_mf_977 - intrm_sf_mf_875 ) *
intermediate_der4035 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
intermediate_der7515 ) * 0.049087385212340524 / 2172.7681408465714 ; t46 [
2ULL ] = intermediate_der4035 * 49.087385212340521 ; t46 [ 3ULL ] =
intermediate_der4035 * 49.087385212340521 ; t46 [ 4ULL ] = 1.0 / ( X [ 42ULL
] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) * intermediate_der4035 *
49.087385212340521 ; t47 [ 0ULL ] = - ( 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16
: X [ 39ULL ] ) ) * intermediate_der4036 * 49.087385212340521 ; t47 [ 1ULL ]
= ( ( intrm_sf_mf_977 - intrm_sf_mf_875 ) * intermediate_der4036 + (
intermediate_der7513 - intermediate_der3989 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
0.049087385212340524 / 2172.7681408465714 ; t47 [ 2ULL ] =
intermediate_der4036 * 49.087385212340521 ; t47 [ 3ULL ] =
intermediate_der4036 * 49.087385212340521 ; t47 [ 4ULL ] = 1.0 / ( X [ 42ULL
] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) * intermediate_der4036 *
49.087385212340521 ; t48 [ 0ULL ] = - ( 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16
: X [ 39ULL ] ) ) * t225 * 49.087385212340521 ; t48 [ 1ULL ] = ( (
intrm_sf_mf_977 - intrm_sf_mf_875 ) * t225 + ( intermediate_der7514 -
intermediate_der3990 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
0.049087385212340524 / 2172.7681408465714 ; t48 [ 2ULL ] = t225 *
49.087385212340521 ; t48 [ 3ULL ] = t225 * 49.087385212340521 ; t48 [ 4ULL ]
= 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) * t225 *
49.087385212340521 ; t49 [ 0ULL ] = - ( 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16
: X [ 39ULL ] ) ) * intermediate_der4033 * 49.087385212340521 ; t49 [ 1ULL ]
= ( intrm_sf_mf_977 - intrm_sf_mf_875 ) * intermediate_der4033 *
0.049087385212340524 / 2172.7681408465714 ; t49 [ 2ULL ] =
intermediate_der4033 * 49.087385212340521 ; t49 [ 3ULL ] =
intermediate_der4033 * 49.087385212340521 ; t515 = X [ 42ULL ] * X [ 42ULL ]
; t49 [ 4ULL ] = ( 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) *
intermediate_der4033 + - 1.0 / ( t515 == 0.0 ? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
49.087385212340521 ; t518 = X [ 43ULL ] * X [ 43ULL ] ; t50 [ 0ULL ] = ( - (
1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ) * intermediate_der4603
+ - ( - 1.0 / ( t518 == 0.0 ? 1.0E-16 : t518 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
196.34954084936209 ; t50 [ 1ULL ] = ( ( intrm_sf_mf_1123 - intrm_sf_mf_1021 )
* intermediate_der4603 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
intermediate_der6335 ) * 0.1963495408493621 / 2172.7681408465714 ; t50 [ 2ULL
] = 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) *
intermediate_der4603 * 196.34954084936209 ; t50 [ 3ULL ] =
intermediate_der4603 * 196.34954084936209 ; t50 [ 4ULL ] =
intermediate_der4603 * 196.34954084936209 ; t51 [ 0ULL ] = - ( 1.0 / ( X [
43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ) * intermediate_der4600 *
196.34954084936209 ; t51 [ 1ULL ] = ( intrm_sf_mf_1123 - intrm_sf_mf_1021 ) *
intermediate_der4600 * 0.1963495408493621 / 2172.7681408465714 ; t518 = X [
44ULL ] * X [ 44ULL ] ; t51 [ 2ULL ] = ( 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16
: X [ 44ULL ] ) * intermediate_der4600 + - 1.0 / ( t518 == 0.0 ? 1.0E-16 :
t518 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
196.34954084936209 ; t51 [ 3ULL ] = intermediate_der4600 * 196.34954084936209
; t51 [ 4ULL ] = intermediate_der4600 * 196.34954084936209 ; t52 [ 0ULL ] = -
( 1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ) * t227 *
196.34954084936209 ; t52 [ 1ULL ] = ( ( intrm_sf_mf_1123 - intrm_sf_mf_1021 )
* t227 + ( intermediate_der6334 - intermediate_der4557 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
0.1963495408493621 / 2172.7681408465714 ; t52 [ 2ULL ] = 1.0 / ( X [ 44ULL ]
== 0.0 ? 1.0E-16 : X [ 44ULL ] ) * t227 * 196.34954084936209 ; t52 [ 3ULL ] =
t227 * 196.34954084936209 ; t52 [ 4ULL ] = t227 * 196.34954084936209 ; t53 [
0ULL ] = - ( 1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ) *
intermediate_der4602 * 196.34954084936209 ; t53 [ 1ULL ] = ( (
intrm_sf_mf_1123 - intrm_sf_mf_1021 ) * intermediate_der4602 + ( t304 -
intermediate_der4556 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
0.1963495408493621 / 2172.7681408465714 ; t53 [ 2ULL ] = 1.0 / ( X [ 44ULL ]
== 0.0 ? 1.0E-16 : X [ 44ULL ] ) * intermediate_der4602 * 196.34954084936209
; t53 [ 3ULL ] = intermediate_der4602 * 196.34954084936209 ; t53 [ 4ULL ] =
intermediate_der4602 * 196.34954084936209 ; t54 [ 0ULL ] = - ( 1.0 / ( X [
10ULL ] == 0.0 ? 1.0E-16 : X [ 10ULL ] ) ) * intermediate_der5277 *
2677.3120849090419 ; t54 [ 1ULL ] = ( intrm_sf_mf_1293 - intrm_sf_mf_1191 ) *
intermediate_der5277 * 2.6773120849090417 / 2172.7681408465714 ; t54 [ 2ULL ]
= intermediate_der5277 * 2677.3120849090419 ; t54 [ 3ULL ] =
intermediate_der5277 * 2677.3120849090419 ; t515 = X [ 47ULL ] * X [ 47ULL ]
; t54 [ 4ULL ] = ( 1.0 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) *
intermediate_der5277 + - 1.0 / ( t515 == 0.0 ? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
2677.3120849090419 ; t55 [ 0ULL ] = - ( 1.0 / ( X [ 13ULL ] == 0.0 ? 1.0E-16
: X [ 13ULL ] ) ) * intermediate_der5801 * 2677.3120849090419 /
1.5549856083302016 ; t55 [ 1ULL ] = ( intrm_sf_mf_1425 - intrm_sf_mf_1323 ) *
intermediate_der5801 * 2.6773120849090417 / 2374.9296201389902 ; t55 [ 2ULL ]
= intermediate_der5801 * 2677.3120849090419 ; t55 [ 3ULL ] =
intermediate_der5801 * 2677.3120849090419 ; t515 = X [ 48ULL ] * X [ 48ULL ]
; t55 [ 4ULL ] = ( 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) *
intermediate_der5801 + - 1.0 / ( t515 == 0.0 ? 1.0E-16 : t515 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I ) *
2677.3120849090419 / 1.5549856083302016 ; for ( t97 = 0ULL ; t97 < 5ULL ; t97
++ ) { t0 [ t97 ] = t12 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ )
{ t0 [ t97 + 5ULL ] = t13 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++
) { t0 [ t97 + 10ULL ] = t14 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97
++ ) { t0 [ t97 + 15ULL ] = t15 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ;
t97 ++ ) { t0 [ t97 + 20ULL ] = t16 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL
; t97 ++ ) { t0 [ t97 + 25ULL ] = t17 [ t97 ] ; } for ( t97 = 0ULL ; t97 <
5ULL ; t97 ++ ) { t0 [ t97 + 30ULL ] = t18 [ t97 ] ; } for ( t97 = 0ULL ; t97
< 5ULL ; t97 ++ ) { t0 [ t97 + 35ULL ] = t19 [ t97 ] ; } for ( t97 = 0ULL ;
t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 40ULL ] = t20 [ t97 ] ; } for ( t97 = 0ULL
; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 45ULL ] = t21 [ t97 ] ; } for ( t97 =
0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 50ULL ] = t22 [ t97 ] ; } for ( t97
= 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 55ULL ] = t23 [ t97 ] ; } for (
t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 60ULL ] = t24 [ t97 ] ; } for
( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 65ULL ] = t25 [ t97 ] ; }
for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 70ULL ] = t26 [ t97 ] ;
} for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 75ULL ] = t27 [ t97 ]
; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 80ULL ] = t28 [ t97
] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 85ULL ] = t29 [
t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 90ULL ] = t30
[ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 95ULL ] =
t31 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 100ULL
] = t32 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 +
105ULL ] = t33 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [
t97 + 110ULL ] = t34 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) {
t0 [ t97 + 115ULL ] = t35 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++
) { t0 [ t97 + 120ULL ] = t36 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97
++ ) { t0 [ t97 + 125ULL ] = t37 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ;
t97 ++ ) { t0 [ t97 + 130ULL ] = t38 [ t97 ] ; } for ( t97 = 0ULL ; t97 <
5ULL ; t97 ++ ) { t0 [ t97 + 135ULL ] = t39 [ t97 ] ; } for ( t97 = 0ULL ;
t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 140ULL ] = t40 [ t97 ] ; } for ( t97 =
0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 145ULL ] = t41 [ t97 ] ; } for (
t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 150ULL ] = t42 [ t97 ] ; }
for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 155ULL ] = t43 [ t97 ]
; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 160ULL ] = t44 [
t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 165ULL ] =
t45 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 170ULL
] = t46 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 +
175ULL ] = t47 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [
t97 + 180ULL ] = t48 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) {
t0 [ t97 + 185ULL ] = t49 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++
) { t0 [ t97 + 190ULL ] = t50 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97
++ ) { t0 [ t97 + 195ULL ] = t51 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ;
t97 ++ ) { t0 [ t97 + 200ULL ] = t52 [ t97 ] ; } for ( t97 = 0ULL ; t97 <
5ULL ; t97 ++ ) { t0 [ t97 + 205ULL ] = t53 [ t97 ] ; } for ( t97 = 0ULL ;
t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 210ULL ] = t54 [ t97 ] ; } for ( t97 =
0ULL ; t97 < 5ULL ; t97 ++ ) { t0 [ t97 + 215ULL ] = t55 [ t97 ] ; } for ( b
= 0 ; b < 220 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void )
t520 ; return 0 ; }
