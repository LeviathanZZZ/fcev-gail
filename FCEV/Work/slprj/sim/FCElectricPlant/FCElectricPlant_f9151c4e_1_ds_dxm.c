#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_dxm.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_dxm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t569 , NeDsMethodOutput * t570 ) { PmRealVector
out ; real_T X [ 440 ] ; real_T t0 [ 240 ] ; real_T t13 [ 5 ] ; real_T t14 [
5 ] ; real_T t15 [ 5 ] ; real_T t16 [ 5 ] ; real_T t17 [ 5 ] ; real_T t18 [ 5
] ; real_T t19 [ 5 ] ; real_T t20 [ 5 ] ; real_T t21 [ 5 ] ; real_T t22 [ 5 ]
; real_T t23 [ 5 ] ; real_T t24 [ 5 ] ; real_T t25 [ 5 ] ; real_T t26 [ 5 ] ;
real_T t27 [ 5 ] ; real_T t28 [ 5 ] ; real_T t29 [ 5 ] ; real_T t30 [ 5 ] ;
real_T t31 [ 5 ] ; real_T t32 [ 5 ] ; real_T t33 [ 5 ] ; real_T t34 [ 5 ] ;
real_T t35 [ 5 ] ; real_T t36 [ 5 ] ; real_T t37 [ 5 ] ; real_T t38 [ 5 ] ;
real_T t39 [ 5 ] ; real_T t40 [ 5 ] ; real_T t41 [ 5 ] ; real_T t42 [ 5 ] ;
real_T t43 [ 5 ] ; real_T t44 [ 5 ] ; real_T t45 [ 5 ] ; real_T t46 [ 5 ] ;
real_T t47 [ 5 ] ; real_T t48 [ 5 ] ; real_T t49 [ 5 ] ; real_T t50 [ 5 ] ;
real_T t51 [ 5 ] ; real_T t52 [ 5 ] ; real_T t53 [ 5 ] ; real_T t54 [ 5 ] ;
real_T t55 [ 5 ] ; real_T t56 [ 5 ] ; real_T t57 [ 5 ] ; real_T t58 [ 5 ] ;
real_T t59 [ 5 ] ; real_T t60 [ 5 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I ; real_T
intermediate_der1426 ; real_T intermediate_der1427 ; real_T
intermediate_der1428 ; real_T intermediate_der1429 ; real_T
intermediate_der1431 ; real_T intermediate_der1432 ; real_T
intermediate_der1576 ; real_T intermediate_der1577 ; real_T
intermediate_der1578 ; real_T intermediate_der1579 ; real_T
intermediate_der1581 ; real_T intermediate_der1582 ; real_T
intermediate_der1651 ; real_T intermediate_der1652 ; real_T
intermediate_der1653 ; real_T intermediate_der1696 ; real_T
intermediate_der1698 ; real_T intermediate_der1699 ; real_T
intermediate_der2424 ; real_T intermediate_der2425 ; real_T
intermediate_der2426 ; real_T intermediate_der2427 ; real_T
intermediate_der2429 ; real_T intermediate_der2430 ; real_T
intermediate_der2545 ; real_T intermediate_der2546 ; real_T
intermediate_der2547 ; real_T intermediate_der2590 ; real_T
intermediate_der2592 ; real_T intermediate_der2593 ; real_T
intermediate_der3110 ; real_T intermediate_der3111 ; real_T
intermediate_der3112 ; real_T intermediate_der3155 ; real_T
intermediate_der3157 ; real_T intermediate_der3158 ; real_T
intermediate_der3646 ; real_T intermediate_der3647 ; real_T
intermediate_der3648 ; real_T intermediate_der3691 ; real_T
intermediate_der3693 ; real_T intermediate_der3694 ; real_T
intermediate_der4199 ; real_T intermediate_der4200 ; real_T
intermediate_der4243 ; real_T intermediate_der4245 ; real_T
intermediate_der4246 ; real_T intermediate_der4778 ; real_T
intermediate_der4779 ; real_T intermediate_der4780 ; real_T
intermediate_der4823 ; real_T intermediate_der4825 ; real_T
intermediate_der4826 ; real_T intermediate_der5467 ; real_T
intermediate_der5468 ; real_T intermediate_der5469 ; real_T
intermediate_der5512 ; real_T intermediate_der5514 ; real_T
intermediate_der5515 ; real_T intermediate_der6003 ; real_T
intermediate_der6004 ; real_T intermediate_der6005 ; real_T
intermediate_der6048 ; real_T intermediate_der6050 ; real_T
intermediate_der6051 ; real_T intermediate_der6564 ; real_T
intermediate_der6565 ; real_T intermediate_der6695 ; real_T
intermediate_der6696 ; real_T intermediate_der6697 ; real_T
intermediate_der6833 ; real_T intermediate_der6834 ; real_T
intermediate_der6844 ; real_T intermediate_der7013 ; real_T
intermediate_der7014 ; real_T intermediate_der7015 ; real_T
intermediate_der703 ; real_T intermediate_der704 ; real_T intermediate_der705
; real_T intermediate_der7423 ; real_T intermediate_der7424 ; real_T
intermediate_der7425 ; real_T intermediate_der7459 ; real_T
intermediate_der7460 ; real_T intermediate_der7461 ; real_T
intermediate_der7491 ; real_T intermediate_der7492 ; real_T
intermediate_der7493 ; real_T intermediate_der750 ; real_T
intermediate_der752 ; real_T intermediate_der753 ; real_T
intermediate_der7634 ; real_T intermediate_der7635 ; real_T
intermediate_der7636 ; real_T intermediate_der7691 ; real_T
intermediate_der7692 ; real_T intermediate_der7693 ; real_T
intermediate_der8000 ; real_T intrm_sf_mf_1082 ; real_T intrm_sf_mf_1124 ;
real_T intrm_sf_mf_1231 ; real_T intrm_sf_mf_1299 ; real_T intrm_sf_mf_136 ;
real_T intrm_sf_mf_1406 ; real_T intrm_sf_mf_1436 ; real_T intrm_sf_mf_1543 ;
real_T intrm_sf_mf_204 ; real_T intrm_sf_mf_229 ; real_T intrm_sf_mf_283 ;
real_T intrm_sf_mf_296 ; real_T intrm_sf_mf_302 ; real_T intrm_sf_mf_409 ;
real_T intrm_sf_mf_537 ; real_T intrm_sf_mf_556 ; real_T intrm_sf_mf_563 ;
real_T intrm_sf_mf_670 ; real_T intrm_sf_mf_700 ; real_T intrm_sf_mf_807 ;
real_T intrm_sf_mf_837 ; real_T intrm_sf_mf_944 ; real_T intrm_sf_mf_975 ;
real_T t123 ; real_T t126 ; real_T t129 ; real_T t132 ; real_T t135 ; real_T
t138 ; real_T t141 ; real_T t144 ; real_T t147 ; real_T t150 ; real_T t153 ;
real_T t156 ; real_T t195 ; real_T t198 ; real_T t201 ; real_T t204 ; real_T
t207 ; real_T t210 ; real_T t213 ; real_T t216 ; real_T t219 ; real_T t222 ;
real_T t225 ; real_T t228 ; real_T t230 ; real_T t232 ; real_T t234 ; real_T
t236 ; real_T t238 ; real_T t240 ; real_T t242 ; real_T t244 ; real_T t246 ;
real_T t248 ; real_T t250 ; real_T t252 ; real_T t254 ; real_T t255 ; real_T
t261 ; real_T t262 ; real_T t268 ; real_T t269 ; real_T t275 ; real_T t276 ;
real_T t282 ; real_T t283 ; real_T t289 ; real_T t290 ; real_T t296 ; real_T
t297 ; real_T t303 ; real_T t304 ; real_T t310 ; real_T t311 ; real_T t317 ;
real_T t318 ; real_T t324 ; real_T t325 ; real_T t331 ; real_T t332 ; real_T
t337 ; real_T t338 ; real_T t339 ; real_T t353 ; real_T t355 ; real_T t369 ;
real_T t397 ; real_T t405 ; real_T t406 ; real_T t499 ; real_T t547 ; real_T
t565 ; real_T t568 ; size_t t108 ; int32_T b ; ( void ) LC ; for ( b = 0 ; b
< 440 ; b ++ ) { X [ b ] = t569 -> mX . mX [ b ] ; } out = t570 -> mDXM ; if
( X [ 21ULL ] <= 0.0 ) { t565 = 0.0 ; } else { t565 = X [ 21ULL ] >= 1.0 ?
1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) { t568 = 0.0 ; } else { t568
= X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } t547 = ( ( ( 1.0 - t565 ) - t568
) * 296.802103844292 + t565 * 461.523 ) + t568 * 4124.48151675695 ; t230 = X
[ 19ULL ] * t547 ; t499 = X [ 20ULL ] / ( t230 == 0.0 ? 1.0E-16 : t230 ) ; if
( X [ 19ULL ] <= 216.59999999999997 ) { t405 = 216.59999999999997 ; } else {
t405 = X [ 19ULL ] >= 623.15 ? 623.15 : X [ 19ULL ] ; } t123 = t405 * t405 ;
if ( X [ 26ULL ] <= 0.0 ) { intermediate_der7425 = 0.0 ; } else {
intermediate_der7425 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [
25ULL ] <= 0.0 ) { intermediate_der7459 = 0.0 ; } else { intermediate_der7459
= X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } intrm_sf_mf_204 = ( ( ( 1.0 -
intermediate_der7425 ) - intermediate_der7459 ) * 296.802103844292 +
intermediate_der7425 * 461.523 ) + intermediate_der7459 * 4124.48151675695 ;
t232 = X [ 23ULL ] * intrm_sf_mf_204 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 = X [ 24ULL ]
/ ( t232 == 0.0 ? 1.0E-16 : t232 ) ; if ( X [ 23ULL ] <= 216.59999999999997 )
{ intermediate_der7460 = 216.59999999999997 ; } else { intermediate_der7460 =
X [ 23ULL ] >= 623.15 ? 623.15 : X [ 23ULL ] ; } t126 = intermediate_der7460
* intermediate_der7460 ; if ( X [ 30ULL ] <= 0.0 ) { intermediate_der7491 =
0.0 ; } else { intermediate_der7491 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ]
; } if ( X [ 29ULL ] <= 0.0 ) { intermediate_der7492 = 0.0 ; } else {
intermediate_der7492 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; }
intrm_sf_mf_283 = ( ( ( 1.0 - intermediate_der7491 ) - intermediate_der7492 )
* 296.802103844292 + intermediate_der7491 * 461.523 ) + intermediate_der7492
* 4124.48151675695 ; t234 = X [ 27ULL ] * intrm_sf_mf_283 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I = X [ 28ULL ] / (
t234 == 0.0 ? 1.0E-16 : t234 ) ; if ( X [ 27ULL ] <= 216.59999999999997 ) {
intermediate_der7461 = 216.59999999999997 ; } else { intermediate_der7461 = X
[ 27ULL ] >= 623.15 ? 623.15 : X [ 27ULL ] ; } t129 = intermediate_der7461 *
intermediate_der7461 ; if ( X [ 33ULL ] <= 0.0 ) { intermediate_der7634 = 0.0
; } else { intermediate_der7634 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; }
if ( X [ 34ULL ] <= 0.0 ) { intermediate_der7635 = 0.0 ; } else {
intermediate_der7635 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; }
intrm_sf_mf_302 = ( ( ( 1.0 - intermediate_der7634 ) - intermediate_der7635 )
* 296.802103844292 + intermediate_der7634 * 461.523 ) + intermediate_der7635
* 4124.48151675695 ; t236 = X [ 31ULL ] * intrm_sf_mf_302 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I = X [ 32ULL ] / (
t236 == 0.0 ? 1.0E-16 : t236 ) ; if ( X [ 31ULL ] <= 216.59999999999997 ) {
intermediate_der7493 = 216.59999999999997 ; } else { intermediate_der7493 = X
[ 31ULL ] >= 623.15 ? 623.15 : X [ 31ULL ] ; } t132 = intermediate_der7493 *
intermediate_der7493 ; if ( X [ 38ULL ] <= 0.0 ) { intermediate_der7691 = 0.0
; } else { intermediate_der7691 = X [ 38ULL ] >= 1.0 ? 1.0 : X [ 38ULL ] ; }
if ( X [ 37ULL ] <= 0.0 ) { intermediate_der7692 = 0.0 ; } else {
intermediate_der7692 = X [ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; }
intrm_sf_mf_537 = ( ( ( 1.0 - intermediate_der7691 ) - intermediate_der7692 )
* 296.802103844292 + intermediate_der7691 * 461.523 ) + intermediate_der7692
* 259.836612622973 ; t238 = X [ 36ULL ] * intrm_sf_mf_537 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho = X [ 35ULL ]
/ ( t238 == 0.0 ? 1.0E-16 : t238 ) ; if ( X [ 36ULL ] <= 216.59999999999997 )
{ intermediate_der7636 = 216.59999999999997 ; } else { intermediate_der7636 =
X [ 36ULL ] >= 623.15 ? 623.15 : X [ 36ULL ] ; } t135 = intermediate_der7636
* intermediate_der7636 ; if ( X [ 41ULL ] <= 0.0 ) { t353 = 0.0 ; } else {
t353 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) {
t369 = 0.0 ; } else { t369 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; }
intrm_sf_mf_563 = ( ( ( 1.0 - t353 ) - t369 ) * 296.802103844292 + t353 *
461.523 ) + t369 * 4124.48151675695 ; t240 = X [ 39ULL ] * intrm_sf_mf_563 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = X [ 42ULL ] / (
t240 == 0.0 ? 1.0E-16 : t240 ) ; if ( X [ 39ULL ] <= 216.59999999999997 ) {
intermediate_der7693 = 216.59999999999997 ; } else { intermediate_der7693 = X
[ 39ULL ] >= 623.15 ? 623.15 : X [ 39ULL ] ; } t138 = intermediate_der7693 *
intermediate_der7693 ; if ( X [ 8ULL ] <= 0.0 ) { t406 = 0.0 ; } else { t406
= X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t397 =
0.0 ; } else { t397 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; }
intrm_sf_mf_700 = ( ( ( 1.0 - t406 ) - t397 ) * 296.802103844292 + t406 *
461.523 ) + t397 * 4124.48151675695 ; t242 = X [ 6ULL ] * intrm_sf_mf_700 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X [ 43ULL ] / (
t242 == 0.0 ? 1.0E-16 : t242 ) ; if ( X [ 6ULL ] <= 216.59999999999997 ) {
t355 = 216.59999999999997 ; } else { t355 = X [ 6ULL ] >= 623.15 ? 623.15 : X
[ 6ULL ] ; } t141 = t355 * t355 ; if ( X [ 11ULL ] <= 0.0 ) { t337 = 0.0 ; }
else { t337 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <=
0.0 ) { t338 = 0.0 ; } else { t338 = X [ 10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ;
} intrm_sf_mf_837 = ( ( ( 1.0 - t337 ) - t338 ) * 296.802103844292 + t337 *
461.523 ) + t338 * 4124.48151675695 ; t244 = X [ 9ULL ] * intrm_sf_mf_837 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I = X [ 44ULL ] / (
t244 == 0.0 ? 1.0E-16 : t244 ) ; if ( X [ 9ULL ] <= 216.59999999999997 ) {
intermediate_der8000 = 216.59999999999997 ; } else { intermediate_der8000 = X
[ 9ULL ] >= 623.15 ? 623.15 : X [ 9ULL ] ; } t144 = intermediate_der8000 *
intermediate_der8000 ; if ( X [ 47ULL ] <= 0.0 ) { intermediate_der6695 = 0.0
; } else { intermediate_der6695 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; }
if ( X [ 46ULL ] <= 0.0 ) { intermediate_der6696 = 0.0 ; } else {
intermediate_der6696 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
intrm_sf_mf_975 = ( ( ( 1.0 - intermediate_der6695 ) - intermediate_der6696 )
* 296.802103844292 + intermediate_der6695 * 461.523 ) + intermediate_der6696
* 259.836612622973 ; t246 = X [ 45ULL ] * intrm_sf_mf_975 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X [ 48ULL ] / (
t246 == 0.0 ? 1.0E-16 : t246 ) ; if ( X [ 45ULL ] <= 216.59999999999997 ) {
intermediate_der6565 = 216.59999999999997 ; } else { intermediate_der6565 = X
[ 45ULL ] >= 623.15 ? 623.15 : X [ 45ULL ] ; } t147 = intermediate_der6565 *
intermediate_der6565 ; if ( X [ 51ULL ] <= 0.0 ) { intermediate_der6833 = 0.0
; } else { intermediate_der6833 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; }
if ( X [ 52ULL ] <= 0.0 ) { intermediate_der6834 = 0.0 ; } else {
intermediate_der6834 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; }
intrm_sf_mf_1124 = ( ( ( 1.0 - intermediate_der6833 ) - intermediate_der6834
) * 296.802103844292 + intermediate_der6833 * 461.523 ) +
intermediate_der6834 * 259.836612622973 ; t248 = X [ 49ULL ] *
intrm_sf_mf_1124 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I =
X [ 50ULL ] / ( t248 == 0.0 ? 1.0E-16 : t248 ) ; if ( X [ 49ULL ] <=
216.59999999999997 ) { intermediate_der6697 = 216.59999999999997 ; } else {
intermediate_der6697 = X [ 49ULL ] >= 623.15 ? 623.15 : X [ 49ULL ] ; } t150
= intermediate_der6697 * intermediate_der6697 ; if ( X [ 14ULL ] <= 0.0 ) {
intermediate_der7013 = 0.0 ; } else { intermediate_der7013 = X [ 14ULL ] >=
1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { intermediate_der7014
= 0.0 ; } else { intermediate_der7014 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL
] ; } intrm_sf_mf_1299 = ( ( ( 1.0 - intermediate_der7013 ) -
intermediate_der7014 ) * 296.802103844292 + intermediate_der7013 * 461.523 )
+ intermediate_der7014 * 259.836612622973 ; t250 = X [ 12ULL ] *
intrm_sf_mf_1299 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I =
X [ 53ULL ] / ( t250 == 0.0 ? 1.0E-16 : t250 ) ; if ( X [ 12ULL ] <=
216.59999999999997 ) { intermediate_der6844 = 216.59999999999997 ; } else {
intermediate_der6844 = X [ 12ULL ] >= 623.15 ? 623.15 : X [ 12ULL ] ; } t153
= intermediate_der6844 * intermediate_der6844 ; if ( X [ 17ULL ] <= 0.0 ) {
intermediate_der7015 = 0.0 ; } else { intermediate_der7015 = X [ 17ULL ] >=
1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) { intermediate_der7423
= 0.0 ; } else { intermediate_der7423 = X [ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL
] ; } intrm_sf_mf_1436 = ( ( ( 1.0 - intermediate_der7015 ) -
intermediate_der7423 ) * 296.802103844292 + intermediate_der7015 * 461.523 )
+ intermediate_der7423 * 259.836612622973 ; t252 = X [ 15ULL ] *
intrm_sf_mf_1436 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I =
X [ 54ULL ] / ( t252 == 0.0 ? 1.0E-16 : t252 ) ; if ( X [ 15ULL ] <=
216.59999999999997 ) { intermediate_der7424 = 216.59999999999997 ; } else {
intermediate_der7424 = X [ 15ULL ] >= 623.15 ? 623.15 : X [ 15ULL ] ; } t156
= intermediate_der7424 * intermediate_der7424 ; intrm_sf_mf_1082 = ( ( (
1074.1165326382541 + intermediate_der6565 * - 0.2214565261064077 ) + t147 *
0.00037212980109010952 ) * ( ( 1.0 - intermediate_der6695 ) -
intermediate_der6696 ) + ( ( 1479.6504774710445 + intermediate_der6565 *
1.200211433705052 ) + t147 * - 0.00038614513167842338 ) *
intermediate_der6695 ) + ( ( 900.63941224837913 + intermediate_der6565 * -
0.044484923911364271 ) + t147 * 0.00036936011832043369 ) *
intermediate_der6696 ; intrm_sf_mf_1231 = ( ( ( 1074.1165326382541 +
intermediate_der6697 * - 0.2214565261064077 ) + t150 * 0.00037212980109010952
) * ( ( 1.0 - intermediate_der6833 ) - intermediate_der6834 ) + ( (
1479.6504774710445 + intermediate_der6697 * 1.200211433705052 ) + t150 * -
0.00038614513167842338 ) * intermediate_der6833 ) + ( ( 900.63941224837913 +
intermediate_der6697 * - 0.044484923911364271 ) + t150 *
0.00036936011832043369 ) * intermediate_der6834 ; intrm_sf_mf_136 = ( ( (
1074.1165326382541 + t405 * - 0.2214565261064077 ) + t123 *
0.00037212980109010952 ) * ( ( 1.0 - t565 ) - t568 ) + ( ( 1479.6504774710445
+ t405 * 1.200211433705052 ) + t123 * - 0.00038614513167842338 ) * t565 ) + (
( 12825.281119790017 + t405 * 6.9647057412830984 ) + t123 * -
0.007052486824683288 ) * t568 ; intrm_sf_mf_1406 = ( ( ( 1074.1165326382541 +
intermediate_der6844 * - 0.2214565261064077 ) + t153 * 0.00037212980109010952
) * ( ( 1.0 - intermediate_der7013 ) - intermediate_der7014 ) + ( (
1479.6504774710445 + intermediate_der6844 * 1.200211433705052 ) + t153 * -
0.00038614513167842338 ) * intermediate_der7013 ) + ( ( 900.63941224837913 +
intermediate_der6844 * - 0.044484923911364271 ) + t153 *
0.00036936011832043369 ) * intermediate_der7014 ; intrm_sf_mf_1543 = ( ( (
1074.1165326382541 + intermediate_der7424 * - 0.2214565261064077 ) + t156 *
0.00037212980109010952 ) * ( ( 1.0 - intermediate_der7015 ) -
intermediate_der7423 ) + ( ( 1479.6504774710445 + intermediate_der7424 *
1.200211433705052 ) + t156 * - 0.00038614513167842338 ) *
intermediate_der7015 ) + ( ( 900.63941224837913 + intermediate_der7424 * -
0.044484923911364271 ) + t156 * 0.00036936011832043369 ) *
intermediate_der7423 ; intrm_sf_mf_229 = ( ( ( 1074.1165326382541 +
intermediate_der7460 * - 0.2214565261064077 ) + t126 * 0.00037212980109010952
) * ( ( 1.0 - intermediate_der7425 ) - intermediate_der7459 ) + ( (
1479.6504774710445 + intermediate_der7460 * 1.200211433705052 ) + t126 * -
0.00038614513167842338 ) * intermediate_der7425 ) + ( ( 12825.281119790017 +
intermediate_der7460 * 6.9647057412830984 ) + t126 * - 0.007052486824683288 )
* intermediate_der7459 ; intrm_sf_mf_296 = ( ( ( 1074.1165326382541 +
intermediate_der7461 * - 0.2214565261064077 ) + t129 * 0.00037212980109010952
) * ( ( 1.0 - intermediate_der7491 ) - intermediate_der7492 ) + ( (
1479.6504774710445 + intermediate_der7461 * 1.200211433705052 ) + t129 * -
0.00038614513167842338 ) * intermediate_der7491 ) + ( ( 12825.281119790017 +
intermediate_der7461 * 6.9647057412830984 ) + t129 * - 0.007052486824683288 )
* intermediate_der7492 ; intrm_sf_mf_409 = ( ( ( 1074.1165326382541 +
intermediate_der7493 * - 0.2214565261064077 ) + t132 * 0.00037212980109010952
) * ( ( 1.0 - intermediate_der7634 ) - intermediate_der7635 ) + ( (
1479.6504774710445 + intermediate_der7493 * 1.200211433705052 ) + t132 * -
0.00038614513167842338 ) * intermediate_der7634 ) + ( ( 12825.281119790017 +
intermediate_der7493 * 6.9647057412830984 ) + t132 * - 0.007052486824683288 )
* intermediate_der7635 ; intrm_sf_mf_556 = ( ( ( 1074.1165326382541 +
intermediate_der7636 * - 0.2214565261064077 ) + t135 * 0.00037212980109010952
) * ( ( 1.0 - intermediate_der7691 ) - intermediate_der7692 ) + ( (
1479.6504774710445 + intermediate_der7636 * 1.200211433705052 ) + t135 * -
0.00038614513167842338 ) * intermediate_der7691 ) + ( ( 900.63941224837913 +
intermediate_der7636 * - 0.044484923911364271 ) + t135 *
0.00036936011832043369 ) * intermediate_der7692 ; intrm_sf_mf_670 = ( ( (
1074.1165326382541 + intermediate_der7693 * - 0.2214565261064077 ) + t138 *
0.00037212980109010952 ) * ( ( 1.0 - t353 ) - t369 ) + ( ( 1479.6504774710445
+ intermediate_der7693 * 1.200211433705052 ) + t138 * -
0.00038614513167842338 ) * t353 ) + ( ( 12825.281119790017 +
intermediate_der7693 * 6.9647057412830984 ) + t138 * - 0.007052486824683288 )
* t369 ; intrm_sf_mf_807 = ( ( ( 1074.1165326382541 + t355 * -
0.2214565261064077 ) + t141 * 0.00037212980109010952 ) * ( ( 1.0 - t406 ) -
t397 ) + ( ( 1479.6504774710445 + t355 * 1.200211433705052 ) + t141 * -
0.00038614513167842338 ) * t406 ) + ( ( 12825.281119790017 + t355 *
6.9647057412830984 ) + t141 * - 0.007052486824683288 ) * t397 ;
intrm_sf_mf_944 = ( ( ( 1074.1165326382541 + intermediate_der8000 * -
0.2214565261064077 ) + t144 * 0.00037212980109010952 ) * ( ( 1.0 - t337 ) -
t338 ) + ( ( 1479.6504774710445 + intermediate_der8000 * 1.200211433705052 )
+ t144 * - 0.00038614513167842338 ) * t337 ) + ( ( 12825.281119790017 +
intermediate_der8000 * 6.9647057412830984 ) + t144 * - 0.007052486824683288 )
* t338 ; if ( X [ 21ULL ] <= 0.0 ) { t339 = 0.0 ; } else { t339 = ( real_T )
! ( X [ 21ULL ] >= 1.0 ) ; } if ( X [ 22ULL ] <= 0.0 ) { intermediate_der703
= 0.0 ; } else { intermediate_der703 = ( real_T ) ! ( X [ 22ULL ] >= 1.0 ) ;
} intermediate_der704 = - intermediate_der703 * 296.802103844292 +
intermediate_der703 * 4124.48151675695 ; intermediate_der705 = - t339 *
296.802103844292 + t339 * 461.523 ; intermediate_der750 = 1.0 / ( t230 == 0.0
? 1.0E-16 : t230 ) ; t255 = X [ 19ULL ] * X [ 19ULL ] * t547 * t547 ; t230 =
- X [ 20ULL ] / ( t255 == 0.0 ? 1.0E-16 : t255 ) * X [ 19ULL ] *
intermediate_der705 ; intermediate_der752 = - X [ 20ULL ] / ( t255 == 0.0 ?
1.0E-16 : t255 ) * X [ 19ULL ] * intermediate_der704 ; intermediate_der753 =
- X [ 20ULL ] / ( t255 == 0.0 ? 1.0E-16 : t255 ) * t547 ; if ( X [ 19ULL ] <=
216.59999999999997 ) { t254 = 0.0 ; } else { t254 = ( real_T ) ! ( X [ 19ULL
] >= 623.15 ) ; } t195 = t405 * t254 * 2.0 ; if ( X [ 26ULL ] <= 0.0 ) { t255
= 0.0 ; } else { t255 = ( real_T ) ! ( X [ 26ULL ] >= 1.0 ) ; } if ( X [
25ULL ] <= 0.0 ) { intermediate_der1426 = 0.0 ; } else { intermediate_der1426
= ( real_T ) ! ( X [ 25ULL ] >= 1.0 ) ; } intermediate_der1427 = -
intermediate_der1426 * 296.802103844292 + intermediate_der1426 *
4124.48151675695 ; intermediate_der1428 = - t255 * 296.802103844292 + t255 *
461.523 ; intermediate_der1429 = 1.0 / ( t232 == 0.0 ? 1.0E-16 : t232 ) ;
t262 = X [ 23ULL ] * X [ 23ULL ] * intrm_sf_mf_204 * intrm_sf_mf_204 ; t232 =
- X [ 24ULL ] / ( t262 == 0.0 ? 1.0E-16 : t262 ) * X [ 23ULL ] *
intermediate_der1428 ; intermediate_der1431 = - X [ 24ULL ] / ( t262 == 0.0 ?
1.0E-16 : t262 ) * X [ 23ULL ] * intermediate_der1427 ; intermediate_der1432
= - X [ 24ULL ] / ( t262 == 0.0 ? 1.0E-16 : t262 ) * intrm_sf_mf_204 ; if ( X
[ 23ULL ] <= 216.59999999999997 ) { t261 = 0.0 ; } else { t261 = ( real_T ) !
( X [ 23ULL ] >= 623.15 ) ; } t198 = intermediate_der7460 * t261 * 2.0 ; if (
X [ 30ULL ] <= 0.0 ) { t262 = 0.0 ; } else { t262 = ( real_T ) ! ( X [ 30ULL
] >= 1.0 ) ; } if ( X [ 29ULL ] <= 0.0 ) { intermediate_der1576 = 0.0 ; }
else { intermediate_der1576 = ( real_T ) ! ( X [ 29ULL ] >= 1.0 ) ; }
intermediate_der1577 = - intermediate_der1576 * 296.802103844292 +
intermediate_der1576 * 4124.48151675695 ; intermediate_der1578 = - t262 *
296.802103844292 + t262 * 461.523 ; intermediate_der1579 = 1.0 / ( t234 ==
0.0 ? 1.0E-16 : t234 ) ; t269 = X [ 27ULL ] * X [ 27ULL ] * intrm_sf_mf_283 *
intrm_sf_mf_283 ; t234 = - X [ 28ULL ] / ( t269 == 0.0 ? 1.0E-16 : t269 ) * X
[ 27ULL ] * intermediate_der1578 ; intermediate_der1581 = - X [ 28ULL ] / (
t269 == 0.0 ? 1.0E-16 : t269 ) * X [ 27ULL ] * intermediate_der1577 ;
intermediate_der1582 = - X [ 28ULL ] / ( t269 == 0.0 ? 1.0E-16 : t269 ) *
intrm_sf_mf_283 ; if ( X [ 27ULL ] <= 216.59999999999997 ) { t268 = 0.0 ; }
else { t268 = ( real_T ) ! ( X [ 27ULL ] >= 623.15 ) ; } t201 =
intermediate_der7461 * t268 * 2.0 ; if ( X [ 33ULL ] <= 0.0 ) { t269 = 0.0 ;
} else { t269 = ( real_T ) ! ( X [ 33ULL ] >= 1.0 ) ; } if ( X [ 34ULL ] <=
0.0 ) { intermediate_der1651 = 0.0 ; } else { intermediate_der1651 = ( real_T
) ! ( X [ 34ULL ] >= 1.0 ) ; } intermediate_der1652 = - intermediate_der1651
* 296.802103844292 + intermediate_der1651 * 4124.48151675695 ;
intermediate_der1653 = - t269 * 296.802103844292 + t269 * 461.523 ;
intermediate_der1696 = 1.0 / ( t236 == 0.0 ? 1.0E-16 : t236 ) ; t276 = X [
31ULL ] * X [ 31ULL ] * intrm_sf_mf_302 * intrm_sf_mf_302 ; t236 = - X [
32ULL ] / ( t276 == 0.0 ? 1.0E-16 : t276 ) * X [ 31ULL ] *
intermediate_der1653 ; intermediate_der1698 = - X [ 32ULL ] / ( t276 == 0.0 ?
1.0E-16 : t276 ) * X [ 31ULL ] * intermediate_der1652 ; intermediate_der1699
= - X [ 32ULL ] / ( t276 == 0.0 ? 1.0E-16 : t276 ) * intrm_sf_mf_302 ; if ( X
[ 31ULL ] <= 216.59999999999997 ) { t275 = 0.0 ; } else { t275 = ( real_T ) !
( X [ 31ULL ] >= 623.15 ) ; } t204 = intermediate_der7493 * t275 * 2.0 ; if (
X [ 38ULL ] <= 0.0 ) { t276 = 0.0 ; } else { t276 = ( real_T ) ! ( X [ 38ULL
] >= 1.0 ) ; } if ( X [ 37ULL ] <= 0.0 ) { intermediate_der2424 = 0.0 ; }
else { intermediate_der2424 = ( real_T ) ! ( X [ 37ULL ] >= 1.0 ) ; }
intermediate_der2425 = - intermediate_der2424 * 296.802103844292 +
intermediate_der2424 * 259.836612622973 ; intermediate_der2426 = - t276 *
296.802103844292 + t276 * 461.523 ; intermediate_der2427 = 1.0 / ( t238 ==
0.0 ? 1.0E-16 : t238 ) ; t283 = X [ 36ULL ] * X [ 36ULL ] * intrm_sf_mf_537 *
intrm_sf_mf_537 ; t238 = - X [ 35ULL ] / ( t283 == 0.0 ? 1.0E-16 : t283 ) * X
[ 36ULL ] * intermediate_der2426 ; intermediate_der2429 = - X [ 35ULL ] / (
t283 == 0.0 ? 1.0E-16 : t283 ) * X [ 36ULL ] * intermediate_der2425 ;
intermediate_der2430 = - X [ 35ULL ] / ( t283 == 0.0 ? 1.0E-16 : t283 ) *
intrm_sf_mf_537 ; if ( X [ 36ULL ] <= 216.59999999999997 ) { t282 = 0.0 ; }
else { t282 = ( real_T ) ! ( X [ 36ULL ] >= 623.15 ) ; } t207 =
intermediate_der7636 * t282 * 2.0 ; if ( X [ 41ULL ] <= 0.0 ) { t283 = 0.0 ;
} else { t283 = ( real_T ) ! ( X [ 41ULL ] >= 1.0 ) ; } if ( X [ 40ULL ] <=
0.0 ) { intermediate_der2545 = 0.0 ; } else { intermediate_der2545 = ( real_T
) ! ( X [ 40ULL ] >= 1.0 ) ; } intermediate_der2546 = - intermediate_der2545
* 296.802103844292 + intermediate_der2545 * 4124.48151675695 ;
intermediate_der2547 = - t283 * 296.802103844292 + t283 * 461.523 ;
intermediate_der2590 = 1.0 / ( t240 == 0.0 ? 1.0E-16 : t240 ) ; t290 = X [
39ULL ] * X [ 39ULL ] * intrm_sf_mf_563 * intrm_sf_mf_563 ; t240 = - X [
42ULL ] / ( t290 == 0.0 ? 1.0E-16 : t290 ) * X [ 39ULL ] *
intermediate_der2547 ; intermediate_der2592 = - X [ 42ULL ] / ( t290 == 0.0 ?
1.0E-16 : t290 ) * X [ 39ULL ] * intermediate_der2546 ; intermediate_der2593
= - X [ 42ULL ] / ( t290 == 0.0 ? 1.0E-16 : t290 ) * intrm_sf_mf_563 ; if ( X
[ 39ULL ] <= 216.59999999999997 ) { t289 = 0.0 ; } else { t289 = ( real_T ) !
( X [ 39ULL ] >= 623.15 ) ; } t210 = intermediate_der7693 * t289 * 2.0 ; if (
X [ 8ULL ] <= 0.0 ) { t290 = 0.0 ; } else { t290 = ( real_T ) ! ( X [ 8ULL ]
>= 1.0 ) ; } if ( X [ 7ULL ] <= 0.0 ) { intermediate_der3110 = 0.0 ; } else {
intermediate_der3110 = ( real_T ) ! ( X [ 7ULL ] >= 1.0 ) ; }
intermediate_der3111 = - intermediate_der3110 * 296.802103844292 +
intermediate_der3110 * 4124.48151675695 ; intermediate_der3112 = - t290 *
296.802103844292 + t290 * 461.523 ; intermediate_der3155 = 1.0 / ( t242 ==
0.0 ? 1.0E-16 : t242 ) ; t297 = X [ 6ULL ] * X [ 6ULL ] * intrm_sf_mf_700 *
intrm_sf_mf_700 ; t242 = - X [ 43ULL ] / ( t297 == 0.0 ? 1.0E-16 : t297 ) * X
[ 6ULL ] * intermediate_der3112 ; intermediate_der3157 = - X [ 43ULL ] / (
t297 == 0.0 ? 1.0E-16 : t297 ) * intrm_sf_mf_700 ; intermediate_der3158 = - X
[ 43ULL ] / ( t297 == 0.0 ? 1.0E-16 : t297 ) * X [ 6ULL ] *
intermediate_der3111 ; if ( X [ 6ULL ] <= 216.59999999999997 ) { t296 = 0.0 ;
} else { t296 = ( real_T ) ! ( X [ 6ULL ] >= 623.15 ) ; } t213 = t355 * t296
* 2.0 ; if ( X [ 11ULL ] <= 0.0 ) { t297 = 0.0 ; } else { t297 = ( real_T ) !
( X [ 11ULL ] >= 1.0 ) ; } if ( X [ 10ULL ] <= 0.0 ) { intermediate_der3646 =
0.0 ; } else { intermediate_der3646 = ( real_T ) ! ( X [ 10ULL ] >= 1.0 ) ; }
intermediate_der3647 = - intermediate_der3646 * 296.802103844292 +
intermediate_der3646 * 4124.48151675695 ; intermediate_der3648 = - t297 *
296.802103844292 + t297 * 461.523 ; intermediate_der3691 = 1.0 / ( t244 ==
0.0 ? 1.0E-16 : t244 ) ; t304 = X [ 9ULL ] * X [ 9ULL ] * intrm_sf_mf_837 *
intrm_sf_mf_837 ; t244 = - X [ 44ULL ] / ( t304 == 0.0 ? 1.0E-16 : t304 ) * X
[ 9ULL ] * intermediate_der3648 ; intermediate_der3693 = - X [ 44ULL ] / (
t304 == 0.0 ? 1.0E-16 : t304 ) * X [ 9ULL ] * intermediate_der3647 ;
intermediate_der3694 = - X [ 44ULL ] / ( t304 == 0.0 ? 1.0E-16 : t304 ) *
intrm_sf_mf_837 ; if ( X [ 9ULL ] <= 216.59999999999997 ) { t303 = 0.0 ; }
else { t303 = ( real_T ) ! ( X [ 9ULL ] >= 623.15 ) ; } t216 =
intermediate_der8000 * t303 * 2.0 ; if ( X [ 47ULL ] <= 0.0 ) { t304 = 0.0 ;
} else { t304 = ( real_T ) ! ( X [ 47ULL ] >= 1.0 ) ; } if ( X [ 46ULL ] <=
0.0 ) { intermediate_der6564 = 0.0 ; } else { intermediate_der6564 = ( real_T
) ! ( X [ 46ULL ] >= 1.0 ) ; } intermediate_der4199 = - intermediate_der6564
* 296.802103844292 + intermediate_der6564 * 259.836612622973 ;
intermediate_der4200 = - t304 * 296.802103844292 + t304 * 461.523 ;
intermediate_der4243 = 1.0 / ( t246 == 0.0 ? 1.0E-16 : t246 ) ; t311 = X [
45ULL ] * X [ 45ULL ] * intrm_sf_mf_975 * intrm_sf_mf_975 ; t246 = - X [
48ULL ] / ( t311 == 0.0 ? 1.0E-16 : t311 ) * X [ 45ULL ] *
intermediate_der4200 ; intermediate_der4245 = - X [ 48ULL ] / ( t311 == 0.0 ?
1.0E-16 : t311 ) * X [ 45ULL ] * intermediate_der4199 ; intermediate_der4246
= - X [ 48ULL ] / ( t311 == 0.0 ? 1.0E-16 : t311 ) * intrm_sf_mf_975 ; if ( X
[ 45ULL ] <= 216.59999999999997 ) { t310 = 0.0 ; } else { t310 = ( real_T ) !
( X [ 45ULL ] >= 623.15 ) ; } t219 = intermediate_der6565 * t310 * 2.0 ; if (
X [ 51ULL ] <= 0.0 ) { t311 = 0.0 ; } else { t311 = ( real_T ) ! ( X [ 51ULL
] >= 1.0 ) ; } if ( X [ 52ULL ] <= 0.0 ) { intermediate_der4778 = 0.0 ; }
else { intermediate_der4778 = ( real_T ) ! ( X [ 52ULL ] >= 1.0 ) ; }
intermediate_der4779 = - intermediate_der4778 * 296.802103844292 +
intermediate_der4778 * 259.836612622973 ; intermediate_der4780 = - t311 *
296.802103844292 + t311 * 461.523 ; intermediate_der4823 = 1.0 / ( t248 ==
0.0 ? 1.0E-16 : t248 ) ; t318 = X [ 49ULL ] * X [ 49ULL ] * intrm_sf_mf_1124
* intrm_sf_mf_1124 ; t248 = - X [ 50ULL ] / ( t318 == 0.0 ? 1.0E-16 : t318 )
* X [ 49ULL ] * intermediate_der4780 ; intermediate_der4825 = - X [ 50ULL ] /
( t318 == 0.0 ? 1.0E-16 : t318 ) * X [ 49ULL ] * intermediate_der4779 ;
intermediate_der4826 = - X [ 50ULL ] / ( t318 == 0.0 ? 1.0E-16 : t318 ) *
intrm_sf_mf_1124 ; if ( X [ 49ULL ] <= 216.59999999999997 ) { t317 = 0.0 ; }
else { t317 = ( real_T ) ! ( X [ 49ULL ] >= 623.15 ) ; } t222 =
intermediate_der6697 * t317 * 2.0 ; if ( X [ 14ULL ] <= 0.0 ) { t318 = 0.0 ;
} else { t318 = ( real_T ) ! ( X [ 14ULL ] >= 1.0 ) ; } if ( X [ 13ULL ] <=
0.0 ) { intermediate_der5467 = 0.0 ; } else { intermediate_der5467 = ( real_T
) ! ( X [ 13ULL ] >= 1.0 ) ; } intermediate_der5468 = - intermediate_der5467
* 296.802103844292 + intermediate_der5467 * 259.836612622973 ;
intermediate_der5469 = - t318 * 296.802103844292 + t318 * 461.523 ;
intermediate_der5512 = 1.0 / ( t250 == 0.0 ? 1.0E-16 : t250 ) ; t325 = X [
12ULL ] * X [ 12ULL ] * intrm_sf_mf_1299 * intrm_sf_mf_1299 ; t250 = - X [
53ULL ] / ( t325 == 0.0 ? 1.0E-16 : t325 ) * X [ 12ULL ] *
intermediate_der5469 ; intermediate_der5514 = - X [ 53ULL ] / ( t325 == 0.0 ?
1.0E-16 : t325 ) * X [ 12ULL ] * intermediate_der5468 ; intermediate_der5515
= - X [ 53ULL ] / ( t325 == 0.0 ? 1.0E-16 : t325 ) * intrm_sf_mf_1299 ; if (
X [ 12ULL ] <= 216.59999999999997 ) { t324 = 0.0 ; } else { t324 = ( real_T )
! ( X [ 12ULL ] >= 623.15 ) ; } t225 = intermediate_der6844 * t324 * 2.0 ; if
( X [ 17ULL ] <= 0.0 ) { t325 = 0.0 ; } else { t325 = ( real_T ) ! ( X [
17ULL ] >= 1.0 ) ; } if ( X [ 16ULL ] <= 0.0 ) { intermediate_der6003 = 0.0 ;
} else { intermediate_der6003 = ( real_T ) ! ( X [ 16ULL ] >= 1.0 ) ; }
intermediate_der6004 = - intermediate_der6003 * 296.802103844292 +
intermediate_der6003 * 259.836612622973 ; intermediate_der6005 = - t325 *
296.802103844292 + t325 * 461.523 ; intermediate_der6048 = 1.0 / ( t252 ==
0.0 ? 1.0E-16 : t252 ) ; t332 = X [ 15ULL ] * X [ 15ULL ] * intrm_sf_mf_1436
* intrm_sf_mf_1436 ; t252 = - X [ 54ULL ] / ( t332 == 0.0 ? 1.0E-16 : t332 )
* X [ 15ULL ] * intermediate_der6005 ; intermediate_der6050 = - X [ 54ULL ] /
( t332 == 0.0 ? 1.0E-16 : t332 ) * X [ 15ULL ] * intermediate_der6004 ;
intermediate_der6051 = - X [ 54ULL ] / ( t332 == 0.0 ? 1.0E-16 : t332 ) *
intrm_sf_mf_1436 ; if ( X [ 15ULL ] <= 216.59999999999997 ) { t331 = 0.0 ; }
else { t331 = ( real_T ) ! ( X [ 15ULL ] >= 623.15 ) ; } t228 =
intermediate_der7424 * t331 * 2.0 ; t332 = - intermediate_der6564 * ( (
1074.1165326382541 + intermediate_der6565 * - 0.2214565261064077 ) + t147 *
0.00037212980109010952 ) + ( ( 900.63941224837913 + intermediate_der6565 * -
0.044484923911364271 ) + t147 * 0.00036936011832043369 ) *
intermediate_der6564 ; intermediate_der6564 = - t304 * ( ( 1074.1165326382541
+ intermediate_der6565 * - 0.2214565261064077 ) + t147 *
0.00037212980109010952 ) + ( ( 1479.6504774710445 + intermediate_der6565 *
1.200211433705052 ) + t147 * - 0.00038614513167842338 ) * t304 ;
intermediate_der6565 = ( ( t310 * - 0.2214565261064077 + t219 *
0.00037212980109010952 ) * ( ( 1.0 - intermediate_der6695 ) -
intermediate_der6696 ) + ( t310 * 1.200211433705052 + t219 * -
0.00038614513167842338 ) * intermediate_der6695 ) + ( t310 * -
0.044484923911364271 + t219 * 0.00036936011832043369 ) * intermediate_der6696
; intermediate_der6695 = - intermediate_der4778 * ( ( 1074.1165326382541 +
intermediate_der6697 * - 0.2214565261064077 ) + t150 * 0.00037212980109010952
) + ( ( 900.63941224837913 + intermediate_der6697 * - 0.044484923911364271 )
+ t150 * 0.00036936011832043369 ) * intermediate_der4778 ;
intermediate_der6696 = - t311 * ( ( 1074.1165326382541 + intermediate_der6697
* - 0.2214565261064077 ) + t150 * 0.00037212980109010952 ) + ( (
1479.6504774710445 + intermediate_der6697 * 1.200211433705052 ) + t150 * -
0.00038614513167842338 ) * t311 ; intermediate_der6697 = ( ( t317 * -
0.2214565261064077 + t222 * 0.00037212980109010952 ) * ( ( 1.0 -
intermediate_der6833 ) - intermediate_der6834 ) + ( t317 * 1.200211433705052
+ t222 * - 0.00038614513167842338 ) * intermediate_der6833 ) + ( t317 * -
0.044484923911364271 + t222 * 0.00036936011832043369 ) * intermediate_der6834
; intermediate_der6833 = - intermediate_der703 * ( ( 1074.1165326382541 +
t405 * - 0.2214565261064077 ) + t123 * 0.00037212980109010952 ) + ( (
12825.281119790017 + t405 * 6.9647057412830984 ) + t123 * -
0.007052486824683288 ) * intermediate_der703 ; intermediate_der6834 = - t339
* ( ( 1074.1165326382541 + t405 * - 0.2214565261064077 ) + t123 *
0.00037212980109010952 ) + ( ( 1479.6504774710445 + t405 * 1.200211433705052
) + t123 * - 0.00038614513167842338 ) * t339 ; t405 = ( ( t254 * -
0.2214565261064077 + t195 * 0.00037212980109010952 ) * ( ( 1.0 - t565 ) -
t568 ) + ( t254 * 1.200211433705052 + t195 * - 0.00038614513167842338 ) *
t565 ) + ( t254 * 6.9647057412830984 + t195 * - 0.007052486824683288 ) * t568
; t565 = - intermediate_der5467 * ( ( 1074.1165326382541 +
intermediate_der6844 * - 0.2214565261064077 ) + t153 * 0.00037212980109010952
) + ( ( 900.63941224837913 + intermediate_der6844 * - 0.044484923911364271 )
+ t153 * 0.00036936011832043369 ) * intermediate_der5467 ; t568 = - t318 * (
( 1074.1165326382541 + intermediate_der6844 * - 0.2214565261064077 ) + t153 *
0.00037212980109010952 ) + ( ( 1479.6504774710445 + intermediate_der6844 *
1.200211433705052 ) + t153 * - 0.00038614513167842338 ) * t318 ;
intermediate_der6844 = ( ( t324 * - 0.2214565261064077 + t225 *
0.00037212980109010952 ) * ( ( 1.0 - intermediate_der7013 ) -
intermediate_der7014 ) + ( t324 * 1.200211433705052 + t225 * -
0.00038614513167842338 ) * intermediate_der7013 ) + ( t324 * -
0.044484923911364271 + t225 * 0.00036936011832043369 ) * intermediate_der7014
; intermediate_der7013 = - intermediate_der6003 * ( ( 1074.1165326382541 +
intermediate_der7424 * - 0.2214565261064077 ) + t156 * 0.00037212980109010952
) + ( ( 900.63941224837913 + intermediate_der7424 * - 0.044484923911364271 )
+ t156 * 0.00036936011832043369 ) * intermediate_der6003 ;
intermediate_der7014 = ( ( t331 * - 0.2214565261064077 + t228 *
0.00037212980109010952 ) * ( ( 1.0 - intermediate_der7015 ) -
intermediate_der7423 ) + ( t331 * 1.200211433705052 + t228 * -
0.00038614513167842338 ) * intermediate_der7015 ) + ( t331 * -
0.044484923911364271 + t228 * 0.00036936011832043369 ) * intermediate_der7423
; intermediate_der7015 = - t325 * ( ( 1074.1165326382541 +
intermediate_der7424 * - 0.2214565261064077 ) + t156 * 0.00037212980109010952
) + ( ( 1479.6504774710445 + intermediate_der7424 * 1.200211433705052 ) +
t156 * - 0.00038614513167842338 ) * t325 ; intermediate_der7423 = -
intermediate_der1426 * ( ( 1074.1165326382541 + intermediate_der7460 * -
0.2214565261064077 ) + t126 * 0.00037212980109010952 ) + ( (
12825.281119790017 + intermediate_der7460 * 6.9647057412830984 ) + t126 * -
0.007052486824683288 ) * intermediate_der1426 ; intermediate_der7424 = ( (
t261 * - 0.2214565261064077 + t198 * 0.00037212980109010952 ) * ( ( 1.0 -
intermediate_der7425 ) - intermediate_der7459 ) + ( t261 * 1.200211433705052
+ t198 * - 0.00038614513167842338 ) * intermediate_der7425 ) + ( t261 *
6.9647057412830984 + t198 * - 0.007052486824683288 ) * intermediate_der7459 ;
intermediate_der7425 = - t255 * ( ( 1074.1165326382541 + intermediate_der7460
* - 0.2214565261064077 ) + t126 * 0.00037212980109010952 ) + ( (
1479.6504774710445 + intermediate_der7460 * 1.200211433705052 ) + t126 * -
0.00038614513167842338 ) * t255 ; intermediate_der7459 = -
intermediate_der1576 * ( ( 1074.1165326382541 + intermediate_der7461 * -
0.2214565261064077 ) + t129 * 0.00037212980109010952 ) + ( (
12825.281119790017 + intermediate_der7461 * 6.9647057412830984 ) + t129 * -
0.007052486824683288 ) * intermediate_der1576 ; intermediate_der7460 = - t262
* ( ( 1074.1165326382541 + intermediate_der7461 * - 0.2214565261064077 ) +
t129 * 0.00037212980109010952 ) + ( ( 1479.6504774710445 +
intermediate_der7461 * 1.200211433705052 ) + t129 * - 0.00038614513167842338
) * t262 ; intermediate_der7461 = ( ( t268 * - 0.2214565261064077 + t201 *
0.00037212980109010952 ) * ( ( 1.0 - intermediate_der7491 ) -
intermediate_der7492 ) + ( t268 * 1.200211433705052 + t201 * -
0.00038614513167842338 ) * intermediate_der7491 ) + ( t268 *
6.9647057412830984 + t201 * - 0.007052486824683288 ) * intermediate_der7492 ;
intermediate_der7491 = - intermediate_der1651 * ( ( 1074.1165326382541 +
intermediate_der7493 * - 0.2214565261064077 ) + t132 * 0.00037212980109010952
) + ( ( 12825.281119790017 + intermediate_der7493 * 6.9647057412830984 ) +
t132 * - 0.007052486824683288 ) * intermediate_der1651 ; intermediate_der7492
= - t269 * ( ( 1074.1165326382541 + intermediate_der7493 * -
0.2214565261064077 ) + t132 * 0.00037212980109010952 ) + ( (
1479.6504774710445 + intermediate_der7493 * 1.200211433705052 ) + t132 * -
0.00038614513167842338 ) * t269 ; intermediate_der7493 = ( ( t275 * -
0.2214565261064077 + t204 * 0.00037212980109010952 ) * ( ( 1.0 -
intermediate_der7634 ) - intermediate_der7635 ) + ( t275 * 1.200211433705052
+ t204 * - 0.00038614513167842338 ) * intermediate_der7634 ) + ( t275 *
6.9647057412830984 + t204 * - 0.007052486824683288 ) * intermediate_der7635 ;
intermediate_der7634 = - intermediate_der2424 * ( ( 1074.1165326382541 +
intermediate_der7636 * - 0.2214565261064077 ) + t135 * 0.00037212980109010952
) + ( ( 900.63941224837913 + intermediate_der7636 * - 0.044484923911364271 )
+ t135 * 0.00036936011832043369 ) * intermediate_der2424 ;
intermediate_der7635 = - t276 * ( ( 1074.1165326382541 + intermediate_der7636
* - 0.2214565261064077 ) + t135 * 0.00037212980109010952 ) + ( (
1479.6504774710445 + intermediate_der7636 * 1.200211433705052 ) + t135 * -
0.00038614513167842338 ) * t276 ; intermediate_der7636 = ( ( t282 * -
0.2214565261064077 + t207 * 0.00037212980109010952 ) * ( ( 1.0 -
intermediate_der7691 ) - intermediate_der7692 ) + ( t282 * 1.200211433705052
+ t207 * - 0.00038614513167842338 ) * intermediate_der7691 ) + ( t282 * -
0.044484923911364271 + t207 * 0.00036936011832043369 ) * intermediate_der7692
; intermediate_der7691 = - intermediate_der2545 * ( ( 1074.1165326382541 +
intermediate_der7693 * - 0.2214565261064077 ) + t138 * 0.00037212980109010952
) + ( ( 12825.281119790017 + intermediate_der7693 * 6.9647057412830984 ) +
t138 * - 0.007052486824683288 ) * intermediate_der2545 ; intermediate_der7692
= - t283 * ( ( 1074.1165326382541 + intermediate_der7693 * -
0.2214565261064077 ) + t138 * 0.00037212980109010952 ) + ( (
1479.6504774710445 + intermediate_der7693 * 1.200211433705052 ) + t138 * -
0.00038614513167842338 ) * t283 ; intermediate_der7693 = ( ( t289 * -
0.2214565261064077 + t210 * 0.00037212980109010952 ) * ( ( 1.0 - t353 ) -
t369 ) + ( t289 * 1.200211433705052 + t210 * - 0.00038614513167842338 ) *
t353 ) + ( t289 * 6.9647057412830984 + t210 * - 0.007052486824683288 ) * t369
; t353 = - intermediate_der3110 * ( ( 1074.1165326382541 + t355 * -
0.2214565261064077 ) + t141 * 0.00037212980109010952 ) + ( (
12825.281119790017 + t355 * 6.9647057412830984 ) + t141 * -
0.007052486824683288 ) * intermediate_der3110 ; t369 = - t290 * ( (
1074.1165326382541 + t355 * - 0.2214565261064077 ) + t141 *
0.00037212980109010952 ) + ( ( 1479.6504774710445 + t355 * 1.200211433705052
) + t141 * - 0.00038614513167842338 ) * t290 ; t355 = ( ( t296 * -
0.2214565261064077 + t213 * 0.00037212980109010952 ) * ( ( 1.0 - t406 ) -
t397 ) + ( t296 * 1.200211433705052 + t213 * - 0.00038614513167842338 ) *
t406 ) + ( t296 * 6.9647057412830984 + t213 * - 0.007052486824683288 ) * t397
; t406 = - intermediate_der3646 * ( ( 1074.1165326382541 +
intermediate_der8000 * - 0.2214565261064077 ) + t144 * 0.00037212980109010952
) + ( ( 12825.281119790017 + intermediate_der8000 * 6.9647057412830984 ) +
t144 * - 0.007052486824683288 ) * intermediate_der3646 ; t397 = - t297 * ( (
1074.1165326382541 + intermediate_der8000 * - 0.2214565261064077 ) + t144 *
0.00037212980109010952 ) + ( ( 1479.6504774710445 + intermediate_der8000 *
1.200211433705052 ) + t144 * - 0.00038614513167842338 ) * t297 ;
intermediate_der8000 = ( ( t303 * - 0.2214565261064077 + t216 *
0.00037212980109010952 ) * ( ( 1.0 - t337 ) - t338 ) + ( t303 *
1.200211433705052 + t216 * - 0.00038614513167842338 ) * t337 ) + ( t303 *
6.9647057412830984 + t216 * - 0.007052486824683288 ) * t338 ; t338 = X [ 6ULL
] * X [ 6ULL ] ; t13 [ 0ULL ] = ( - ( 1.0 / ( X [ 6ULL ] == 0.0 ? 1.0E-16 : X
[ 6ULL ] ) ) * intermediate_der3157 + - ( - 1.0 / ( t338 == 0.0 ? 1.0E-16 :
t338 ) ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
2677.3120849090419 / 12.896402563644669 ; t13 [ 1ULL ] = ( ( intrm_sf_mf_807
- intrm_sf_mf_700 ) * intermediate_der3157 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * t355 ) *
2.6773120849090417 / 2246.65922904024 ; t13 [ 2ULL ] = intermediate_der3157 *
2677.3120849090419 ; t13 [ 3ULL ] = intermediate_der3157 * 2677.3120849090419
; t13 [ 4ULL ] = 1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) *
intermediate_der3157 * 2677.3120849090419 / 12.896402563644669 ; t14 [ 0ULL ]
= - ( 1.0 / ( X [ 6ULL ] == 0.0 ? 1.0E-16 : X [ 6ULL ] ) ) *
intermediate_der3158 * 2677.3120849090419 / 12.896402563644669 ; t14 [ 1ULL ]
= ( ( intrm_sf_mf_807 - intrm_sf_mf_700 ) * intermediate_der3158 + ( t353 -
intermediate_der3111 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
2.6773120849090417 / 2246.65922904024 ; t14 [ 2ULL ] = intermediate_der3158 *
2677.3120849090419 ; t14 [ 3ULL ] = intermediate_der3158 * 2677.3120849090419
; t14 [ 4ULL ] = 1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) *
intermediate_der3158 * 2677.3120849090419 / 12.896402563644669 ; t15 [ 0ULL ]
= - ( 1.0 / ( X [ 6ULL ] == 0.0 ? 1.0E-16 : X [ 6ULL ] ) ) * t242 *
2677.3120849090419 / 12.896402563644669 ; t15 [ 1ULL ] = ( ( intrm_sf_mf_807
- intrm_sf_mf_700 ) * t242 + ( t369 - intermediate_der3112 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
2.6773120849090417 / 2246.65922904024 ; t15 [ 2ULL ] = t242 *
2677.3120849090419 ; t15 [ 3ULL ] = t242 * 2677.3120849090419 ; t15 [ 4ULL ]
= 1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) * t242 *
2677.3120849090419 / 12.896402563644669 ; t369 = X [ 9ULL ] * X [ 9ULL ] ;
t16 [ 0ULL ] = ( - ( 1.0 / ( X [ 9ULL ] == 0.0 ? 1.0E-16 : X [ 9ULL ] ) ) *
intermediate_der3694 + - ( - 1.0 / ( t369 == 0.0 ? 1.0E-16 : t369 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I ) *
2677.3120849090419 / 13.896402563644669 ; t16 [ 1ULL ] = ( ( intrm_sf_mf_944
- intrm_sf_mf_837 ) * intermediate_der3694 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I *
intermediate_der8000 ) * 2.6773120849090417 / 2448.8207083326588 ; t16 [ 2ULL
] = intermediate_der3694 * 2677.3120849090419 ; t16 [ 3ULL ] =
intermediate_der3694 * 2677.3120849090419 ; t16 [ 4ULL ] = 1.0 / ( X [ 44ULL
] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) * intermediate_der3694 *
2677.3120849090419 / 13.896402563644669 ; t17 [ 0ULL ] = - ( 1.0 / ( X [ 9ULL
] == 0.0 ? 1.0E-16 : X [ 9ULL ] ) ) * intermediate_der3693 *
2677.3120849090419 / 13.896402563644669 ; t17 [ 1ULL ] = ( ( intrm_sf_mf_944
- intrm_sf_mf_837 ) * intermediate_der3693 + ( t406 - intermediate_der3647 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2448.8207083326588 ; t17 [ 2ULL ] = intermediate_der3693
* 2677.3120849090419 ; t17 [ 3ULL ] = intermediate_der3693 *
2677.3120849090419 ; t17 [ 4ULL ] = 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X
[ 44ULL ] ) * intermediate_der3693 * 2677.3120849090419 / 13.896402563644669
; t18 [ 0ULL ] = - ( 1.0 / ( X [ 9ULL ] == 0.0 ? 1.0E-16 : X [ 9ULL ] ) ) *
t244 * 2677.3120849090419 / 13.896402563644669 ; t18 [ 1ULL ] = ( (
intrm_sf_mf_944 - intrm_sf_mf_837 ) * t244 + ( t397 - intermediate_der3648 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2448.8207083326588 ; t18 [ 2ULL ] = t244 *
2677.3120849090419 ; t18 [ 3ULL ] = t244 * 2677.3120849090419 ; t18 [ 4ULL ]
= 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) * t244 *
2677.3120849090419 / 13.896402563644669 ; t406 = X [ 12ULL ] * X [ 12ULL ] ;
t19 [ 0ULL ] = ( - ( 1.0 / ( X [ 12ULL ] == 0.0 ? 1.0E-16 : X [ 12ULL ] ) ) *
intermediate_der5515 + - ( - 1.0 / ( t406 == 0.0 ? 1.0E-16 : t406 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I ) *
2677.3120849090419 ; t19 [ 1ULL ] = ( ( intrm_sf_mf_1406 - intrm_sf_mf_1299 )
* intermediate_der5515 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I *
intermediate_der6844 ) * 2.6773120849090417 / 2172.7681408465714 ; t19 [ 2ULL
] = intermediate_der5515 * 2677.3120849090419 ; t19 [ 3ULL ] =
intermediate_der5515 * 2677.3120849090419 ; t19 [ 4ULL ] = 1.0 / ( X [ 53ULL
] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) * intermediate_der5515 *
2677.3120849090419 ; t20 [ 0ULL ] = - ( 1.0 / ( X [ 12ULL ] == 0.0 ? 1.0E-16
: X [ 12ULL ] ) ) * intermediate_der5514 * 2677.3120849090419 ; t20 [ 1ULL ]
= ( ( intrm_sf_mf_1406 - intrm_sf_mf_1299 ) * intermediate_der5514 + ( t565 -
intermediate_der5468 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I ) *
2.6773120849090417 / 2172.7681408465714 ; t20 [ 2ULL ] = intermediate_der5514
* 2677.3120849090419 ; t20 [ 3ULL ] = intermediate_der5514 *
2677.3120849090419 ; t20 [ 4ULL ] = 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X
[ 53ULL ] ) * intermediate_der5514 * 2677.3120849090419 ; t21 [ 0ULL ] = - (
1.0 / ( X [ 12ULL ] == 0.0 ? 1.0E-16 : X [ 12ULL ] ) ) * t250 *
2677.3120849090419 ; t21 [ 1ULL ] = ( ( intrm_sf_mf_1406 - intrm_sf_mf_1299 )
* t250 + ( t568 - intermediate_der5469 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I ) *
2.6773120849090417 / 2172.7681408465714 ; t21 [ 2ULL ] = t250 *
2677.3120849090419 ; t21 [ 3ULL ] = t250 * 2677.3120849090419 ; t21 [ 4ULL ]
= 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) * t250 *
2677.3120849090419 ; t568 = X [ 15ULL ] * X [ 15ULL ] ; t22 [ 0ULL ] = ( - (
1.0 / ( X [ 15ULL ] == 0.0 ? 1.0E-16 : X [ 15ULL ] ) ) * intermediate_der6051
+ - ( - 1.0 / ( t568 == 0.0 ? 1.0E-16 : t568 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I ) *
2677.3120849090419 / 1.5549856083302016 ; t22 [ 1ULL ] = ( ( intrm_sf_mf_1543
- intrm_sf_mf_1436 ) * intermediate_der6051 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I *
intermediate_der7014 ) * 2.6773120849090417 / 2374.9296201389902 ; t22 [ 2ULL
] = intermediate_der6051 * 2677.3120849090419 ; t22 [ 3ULL ] =
intermediate_der6051 * 2677.3120849090419 ; t22 [ 4ULL ] = 1.0 / ( X [ 54ULL
] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) * intermediate_der6051 *
2677.3120849090419 / 1.5549856083302016 ; t23 [ 0ULL ] = - ( 1.0 / ( X [
15ULL ] == 0.0 ? 1.0E-16 : X [ 15ULL ] ) ) * intermediate_der6050 *
2677.3120849090419 / 1.5549856083302016 ; t23 [ 1ULL ] = ( ( intrm_sf_mf_1543
- intrm_sf_mf_1436 ) * intermediate_der6050 + ( intermediate_der7013 -
intermediate_der6004 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2374.9296201389902 ; t23 [ 2ULL ] = intermediate_der6050
* 2677.3120849090419 ; t23 [ 3ULL ] = intermediate_der6050 *
2677.3120849090419 ; t23 [ 4ULL ] = 1.0 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X
[ 54ULL ] ) * intermediate_der6050 * 2677.3120849090419 / 1.5549856083302016
; t24 [ 0ULL ] = - ( 1.0 / ( X [ 15ULL ] == 0.0 ? 1.0E-16 : X [ 15ULL ] ) ) *
t252 * 2677.3120849090419 / 1.5549856083302016 ; t24 [ 1ULL ] = ( (
intrm_sf_mf_1543 - intrm_sf_mf_1436 ) * t252 + ( intermediate_der7015 -
intermediate_der6005 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I ) *
2.6773120849090417 / 2374.9296201389902 ; t24 [ 2ULL ] = t252 *
2677.3120849090419 ; t24 [ 3ULL ] = t252 * 2677.3120849090419 ; t24 [ 4ULL ]
= 1.0 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) * t252 *
2677.3120849090419 / 1.5549856083302016 ; t406 = X [ 19ULL ] * X [ 19ULL ] ;
t25 [ 0ULL ] = ( - ( 1.0 / ( X [ 19ULL ] == 0.0 ? 1.0E-16 : X [ 19ULL ] ) ) *
intermediate_der753 + - ( - 1.0 / ( t406 == 0.0 ? 1.0E-16 : t406 ) ) * t499 )
* 7.8539816339744828 / 12.896402563644669 ; t25 [ 1ULL ] = ( (
intrm_sf_mf_136 - t547 ) * intermediate_der753 + t499 * t405 ) *
0.0078539816339744835 / 2246.65922904024 ; t25 [ 2ULL ] = 1.0 / ( X [ 20ULL ]
== 0.0 ? 1.0E-16 : X [ 20ULL ] ) * intermediate_der753 * 7.8539816339744828 /
12.896402563644669 ; t25 [ 3ULL ] = intermediate_der753 * 7.8539816339744828
; t25 [ 4ULL ] = intermediate_der753 * 7.8539816339744828 ; t26 [ 0ULL ] = -
( 1.0 / ( X [ 19ULL ] == 0.0 ? 1.0E-16 : X [ 19ULL ] ) ) *
intermediate_der750 * 7.8539816339744828 / 12.896402563644669 ; t26 [ 1ULL ]
= ( intrm_sf_mf_136 - t547 ) * intermediate_der750 * 0.0078539816339744835 /
2246.65922904024 ; t405 = X [ 20ULL ] * X [ 20ULL ] ; t26 [ 2ULL ] = ( 1.0 /
( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) * intermediate_der750 + - 1.0
/ ( t405 == 0.0 ? 1.0E-16 : t405 ) * t499 ) * 7.8539816339744828 /
12.896402563644669 ; t26 [ 3ULL ] = intermediate_der750 * 7.8539816339744828
; t26 [ 4ULL ] = intermediate_der750 * 7.8539816339744828 ; t27 [ 0ULL ] = -
( 1.0 / ( X [ 19ULL ] == 0.0 ? 1.0E-16 : X [ 19ULL ] ) ) * t230 *
7.8539816339744828 / 12.896402563644669 ; t27 [ 1ULL ] = ( ( intrm_sf_mf_136
- t547 ) * t230 + ( intermediate_der6834 - intermediate_der705 ) * t499 ) *
0.0078539816339744835 / 2246.65922904024 ; t27 [ 2ULL ] = 1.0 / ( X [ 20ULL ]
== 0.0 ? 1.0E-16 : X [ 20ULL ] ) * t230 * 7.8539816339744828 /
12.896402563644669 ; t27 [ 3ULL ] = t230 * 7.8539816339744828 ; t27 [ 4ULL ]
= t230 * 7.8539816339744828 ; t28 [ 0ULL ] = - ( 1.0 / ( X [ 19ULL ] == 0.0 ?
1.0E-16 : X [ 19ULL ] ) ) * intermediate_der752 * 7.8539816339744828 /
12.896402563644669 ; t28 [ 1ULL ] = ( ( intrm_sf_mf_136 - t547 ) *
intermediate_der752 + ( intermediate_der6833 - intermediate_der704 ) * t499 )
* 0.0078539816339744835 / 2246.65922904024 ; t28 [ 2ULL ] = 1.0 / ( X [ 20ULL
] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) * intermediate_der752 * 7.8539816339744828
/ 12.896402563644669 ; t28 [ 3ULL ] = intermediate_der752 *
7.8539816339744828 ; t28 [ 4ULL ] = intermediate_der752 * 7.8539816339744828
; t547 = X [ 23ULL ] * X [ 23ULL ] ; t29 [ 0ULL ] = ( - ( 1.0 / ( X [ 23ULL ]
== 0.0 ? 1.0E-16 : X [ 23ULL ] ) ) * intermediate_der1432 + - ( - 1.0 / (
t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ) *
12.500000000000004 / 12.896402563644669 ; t29 [ 1ULL ] = ( ( intrm_sf_mf_229
- intrm_sf_mf_204 ) * intermediate_der1432 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
intermediate_der7424 ) * 0.012500000000000002 / 2246.65922904024 ; t29 [ 2ULL
] = 1.0 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) *
intermediate_der1432 * 12.500000000000004 / 12.896402563644669 ; t29 [ 3ULL ]
= intermediate_der1432 * 12.500000000000004 ; t29 [ 4ULL ] =
intermediate_der1432 * 12.500000000000004 ; t30 [ 0ULL ] = - ( 1.0 / ( X [
23ULL ] == 0.0 ? 1.0E-16 : X [ 23ULL ] ) ) * intermediate_der1429 *
12.500000000000004 / 12.896402563644669 ; t30 [ 1ULL ] = ( intrm_sf_mf_229 -
intrm_sf_mf_204 ) * intermediate_der1429 * 0.012500000000000002 /
2246.65922904024 ; t547 = X [ 24ULL ] * X [ 24ULL ] ; t30 [ 2ULL ] = ( 1.0 /
( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * intermediate_der1429 + - 1.0
/ ( t547 == 0.0 ? 1.0E-16 : t547 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ) *
12.500000000000004 / 12.896402563644669 ; t30 [ 3ULL ] = intermediate_der1429
* 12.500000000000004 ; t30 [ 4ULL ] = intermediate_der1429 *
12.500000000000004 ; t31 [ 0ULL ] = - ( 1.0 / ( X [ 23ULL ] == 0.0 ? 1.0E-16
: X [ 23ULL ] ) ) * intermediate_der1431 * 12.500000000000004 /
12.896402563644669 ; t31 [ 1ULL ] = ( ( intrm_sf_mf_229 - intrm_sf_mf_204 ) *
intermediate_der1431 + ( intermediate_der7423 - intermediate_der1427 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ) *
0.012500000000000002 / 2246.65922904024 ; t31 [ 2ULL ] = 1.0 / ( X [ 24ULL ]
== 0.0 ? 1.0E-16 : X [ 24ULL ] ) * intermediate_der1431 * 12.500000000000004
/ 12.896402563644669 ; t31 [ 3ULL ] = intermediate_der1431 *
12.500000000000004 ; t31 [ 4ULL ] = intermediate_der1431 * 12.500000000000004
; t32 [ 0ULL ] = - ( 1.0 / ( X [ 23ULL ] == 0.0 ? 1.0E-16 : X [ 23ULL ] ) ) *
t232 * 12.500000000000004 / 12.896402563644669 ; t32 [ 1ULL ] = ( (
intrm_sf_mf_229 - intrm_sf_mf_204 ) * t232 + ( intermediate_der7425 -
intermediate_der1428 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ) *
0.012500000000000002 / 2246.65922904024 ; t32 [ 2ULL ] = 1.0 / ( X [ 24ULL ]
== 0.0 ? 1.0E-16 : X [ 24ULL ] ) * t232 * 12.500000000000004 /
12.896402563644669 ; t32 [ 3ULL ] = t232 * 12.500000000000004 ; t32 [ 4ULL ]
= t232 * 12.500000000000004 ; t547 = X [ 27ULL ] * X [ 27ULL ] ; t33 [ 0ULL ]
= ( - ( 1.0 / ( X [ 27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) ) *
intermediate_der1582 + - ( - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I ) * 12000.0 /
12.896402563644669 ; t33 [ 1ULL ] = ( ( intrm_sf_mf_296 - intrm_sf_mf_283 ) *
intermediate_der1582 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I *
intermediate_der7461 ) * 12.0 / 2246.65922904024 ; t33 [ 2ULL ] = 1.0 / ( X [
28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) * intermediate_der1582 * 12000.0 /
12.896402563644669 ; t33 [ 3ULL ] = intermediate_der1582 * 12000.0 ; t33 [
4ULL ] = intermediate_der1582 * 12000.0 ; t34 [ 0ULL ] = - ( 1.0 / ( X [
27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) ) * intermediate_der1579 * 12000.0 /
12.896402563644669 ; t34 [ 1ULL ] = ( intrm_sf_mf_296 - intrm_sf_mf_283 ) *
intermediate_der1579 * 12.0 / 2246.65922904024 ; t547 = X [ 28ULL ] * X [
28ULL ] ; t34 [ 2ULL ] = ( 1.0 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ]
) * intermediate_der1579 + - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I ) * 12000.0 /
12.896402563644669 ; t34 [ 3ULL ] = intermediate_der1579 * 12000.0 ; t34 [
4ULL ] = intermediate_der1579 * 12000.0 ; t35 [ 0ULL ] = - ( 1.0 / ( X [
27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL ] ) ) * intermediate_der1581 * 12000.0 /
12.896402563644669 ; t35 [ 1ULL ] = ( ( intrm_sf_mf_296 - intrm_sf_mf_283 ) *
intermediate_der1581 + ( intermediate_der7459 - intermediate_der1577 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I ) * 12.0 /
2246.65922904024 ; t35 [ 2ULL ] = 1.0 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [
28ULL ] ) * intermediate_der1581 * 12000.0 / 12.896402563644669 ; t35 [ 3ULL
] = intermediate_der1581 * 12000.0 ; t35 [ 4ULL ] = intermediate_der1581 *
12000.0 ; t36 [ 0ULL ] = - ( 1.0 / ( X [ 27ULL ] == 0.0 ? 1.0E-16 : X [ 27ULL
] ) ) * t234 * 12000.0 / 12.896402563644669 ; t36 [ 1ULL ] = ( (
intrm_sf_mf_296 - intrm_sf_mf_283 ) * t234 + ( intermediate_der7460 -
intermediate_der1578 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I ) * 12.0 /
2246.65922904024 ; t36 [ 2ULL ] = 1.0 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [
28ULL ] ) * t234 * 12000.0 / 12.896402563644669 ; t36 [ 3ULL ] = t234 *
12000.0 ; t36 [ 4ULL ] = t234 * 12000.0 ; t547 = X [ 31ULL ] * X [ 31ULL ] ;
t37 [ 0ULL ] = ( - ( 1.0 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) *
intermediate_der1699 + - ( - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I ) *
7.8539816339744828 / 12.896402563644669 ; t37 [ 1ULL ] = ( ( intrm_sf_mf_409
- intrm_sf_mf_302 ) * intermediate_der1699 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I *
intermediate_der7493 ) * 0.0078539816339744835 / 2246.65922904024 ; t37 [
2ULL ] = 1.0 / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) *
intermediate_der1699 * 7.8539816339744828 / 12.896402563644669 ; t37 [ 3ULL ]
= intermediate_der1699 * 7.8539816339744828 ; t37 [ 4ULL ] =
intermediate_der1699 * 7.8539816339744828 ; t38 [ 0ULL ] = - ( 1.0 / ( X [
31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * intermediate_der1696 *
7.8539816339744828 / 12.896402563644669 ; t38 [ 1ULL ] = ( intrm_sf_mf_409 -
intrm_sf_mf_302 ) * intermediate_der1696 * 0.0078539816339744835 /
2246.65922904024 ; t547 = X [ 32ULL ] * X [ 32ULL ] ; t38 [ 2ULL ] = ( 1.0 /
( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) * intermediate_der1696 + - 1.0
/ ( t547 == 0.0 ? 1.0E-16 : t547 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I ) *
7.8539816339744828 / 12.896402563644669 ; t38 [ 3ULL ] = intermediate_der1696
* 7.8539816339744828 ; t38 [ 4ULL ] = intermediate_der1696 *
7.8539816339744828 ; t39 [ 0ULL ] = - ( 1.0 / ( X [ 31ULL ] == 0.0 ? 1.0E-16
: X [ 31ULL ] ) ) * t236 * 7.8539816339744828 / 12.896402563644669 ; t39 [
1ULL ] = ( ( intrm_sf_mf_409 - intrm_sf_mf_302 ) * t236 + (
intermediate_der7492 - intermediate_der1653 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I ) *
0.0078539816339744835 / 2246.65922904024 ; t39 [ 2ULL ] = 1.0 / ( X [ 32ULL ]
== 0.0 ? 1.0E-16 : X [ 32ULL ] ) * t236 * 7.8539816339744828 /
12.896402563644669 ; t39 [ 3ULL ] = t236 * 7.8539816339744828 ; t39 [ 4ULL ]
= t236 * 7.8539816339744828 ; t40 [ 0ULL ] = - ( 1.0 / ( X [ 31ULL ] == 0.0 ?
1.0E-16 : X [ 31ULL ] ) ) * intermediate_der1698 * 7.8539816339744828 /
12.896402563644669 ; t40 [ 1ULL ] = ( ( intrm_sf_mf_409 - intrm_sf_mf_302 ) *
intermediate_der1698 + ( intermediate_der7491 - intermediate_der1652 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I ) *
0.0078539816339744835 / 2246.65922904024 ; t40 [ 2ULL ] = 1.0 / ( X [ 32ULL ]
== 0.0 ? 1.0E-16 : X [ 32ULL ] ) * intermediate_der1698 * 7.8539816339744828
/ 12.896402563644669 ; t40 [ 3ULL ] = intermediate_der1698 *
7.8539816339744828 ; t40 [ 4ULL ] = intermediate_der1698 * 7.8539816339744828
; t568 = X [ 35ULL ] * X [ 35ULL ] ; t41 [ 0ULL ] = ( 1.0 / ( X [ 35ULL ] ==
0.0 ? 1.0E-16 : X [ 35ULL ] ) * intermediate_der2427 + - 1.0 / ( t568 == 0.0
? 1.0E-16 : t568 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ) *
29.999999999999996 ; t41 [ 1ULL ] = - ( 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16
: X [ 36ULL ] ) ) * intermediate_der2427 * 29.999999999999996 ; t41 [ 2ULL ]
= ( intrm_sf_mf_556 - intrm_sf_mf_537 ) * intermediate_der2427 * 0.03 /
2172.7681408465714 ; t41 [ 3ULL ] = intermediate_der2427 * 29.999999999999996
; t41 [ 4ULL ] = intermediate_der2427 * 29.999999999999996 ; t42 [ 0ULL ] =
1.0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) * intermediate_der2430 *
29.999999999999996 ; t547 = X [ 36ULL ] * X [ 36ULL ] ; t42 [ 1ULL ] = ( - (
1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * intermediate_der2430
+ - ( - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ) *
29.999999999999996 ; t42 [ 2ULL ] = ( ( intrm_sf_mf_556 - intrm_sf_mf_537 ) *
intermediate_der2430 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho *
intermediate_der7636 ) * 0.03 / 2172.7681408465714 ; t42 [ 3ULL ] =
intermediate_der2430 * 29.999999999999996 ; t42 [ 4ULL ] =
intermediate_der2430 * 29.999999999999996 ; t43 [ 0ULL ] = 1.0 / ( X [ 35ULL
] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) * intermediate_der2429 *
29.999999999999996 ; t43 [ 1ULL ] = - ( 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16
: X [ 36ULL ] ) ) * intermediate_der2429 * 29.999999999999996 ; t43 [ 2ULL ]
= ( ( intrm_sf_mf_556 - intrm_sf_mf_537 ) * intermediate_der2429 + (
intermediate_der7634 - intermediate_der2425 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ) * 0.03 /
2172.7681408465714 ; t43 [ 3ULL ] = intermediate_der2429 * 29.999999999999996
; t43 [ 4ULL ] = intermediate_der2429 * 29.999999999999996 ; t44 [ 0ULL ] =
1.0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) * t238 *
29.999999999999996 ; t44 [ 1ULL ] = - ( 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16
: X [ 36ULL ] ) ) * t238 * 29.999999999999996 ; t44 [ 2ULL ] = ( (
intrm_sf_mf_556 - intrm_sf_mf_537 ) * t238 + ( intermediate_der7635 -
intermediate_der2426 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ) * 0.03 /
2172.7681408465714 ; t44 [ 3ULL ] = t238 * 29.999999999999996 ; t44 [ 4ULL ]
= t238 * 29.999999999999996 ; t547 = X [ 39ULL ] * X [ 39ULL ] ; t45 [ 0ULL ]
= ( - ( 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) *
intermediate_der2593 + - ( - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
49.087385212340521 / 12.896402563644669 ; t45 [ 1ULL ] = ( ( intrm_sf_mf_670
- intrm_sf_mf_563 ) * intermediate_der2593 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
intermediate_der7693 ) * 0.049087385212340524 / 2246.65922904024 ; t45 [ 2ULL
] = intermediate_der2593 * 49.087385212340521 ; t45 [ 3ULL ] =
intermediate_der2593 * 49.087385212340521 ; t45 [ 4ULL ] = 1.0 / ( X [ 42ULL
] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) * intermediate_der2593 *
49.087385212340521 / 12.896402563644669 ; t46 [ 0ULL ] = - ( 1.0 / ( X [
39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) * intermediate_der2592 *
49.087385212340521 / 12.896402563644669 ; t46 [ 1ULL ] = ( ( intrm_sf_mf_670
- intrm_sf_mf_563 ) * intermediate_der2592 + ( intermediate_der7691 -
intermediate_der2546 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
0.049087385212340524 / 2246.65922904024 ; t46 [ 2ULL ] = intermediate_der2592
* 49.087385212340521 ; t46 [ 3ULL ] = intermediate_der2592 *
49.087385212340521 ; t46 [ 4ULL ] = 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X
[ 42ULL ] ) * intermediate_der2592 * 49.087385212340521 / 12.896402563644669
; t47 [ 0ULL ] = - ( 1.0 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) *
t240 * 49.087385212340521 / 12.896402563644669 ; t47 [ 1ULL ] = ( (
intrm_sf_mf_670 - intrm_sf_mf_563 ) * t240 + ( intermediate_der7692 -
intermediate_der2547 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
0.049087385212340524 / 2246.65922904024 ; t47 [ 2ULL ] = t240 *
49.087385212340521 ; t47 [ 3ULL ] = t240 * 49.087385212340521 ; t47 [ 4ULL ]
= 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) * t240 *
49.087385212340521 / 12.896402563644669 ; t48 [ 0ULL ] = - ( 1.0 / ( X [
39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) * intermediate_der2590 *
49.087385212340521 / 12.896402563644669 ; t48 [ 1ULL ] = ( intrm_sf_mf_670 -
intrm_sf_mf_563 ) * intermediate_der2590 * 0.049087385212340524 /
2246.65922904024 ; t48 [ 2ULL ] = intermediate_der2590 * 49.087385212340521 ;
t48 [ 3ULL ] = intermediate_der2590 * 49.087385212340521 ; t568 = X [ 42ULL ]
* X [ 42ULL ] ; t48 [ 4ULL ] = ( 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [
42ULL ] ) * intermediate_der2590 + - 1.0 / ( t568 == 0.0 ? 1.0E-16 : t568 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) *
49.087385212340521 / 12.896402563644669 ; t49 [ 0ULL ] = - ( 1.0 / ( X [ 6ULL
] == 0.0 ? 1.0E-16 : X [ 6ULL ] ) ) * intermediate_der3155 *
2677.3120849090419 / 12.896402563644669 ; t49 [ 1ULL ] = ( intrm_sf_mf_807 -
intrm_sf_mf_700 ) * intermediate_der3155 * 2.6773120849090417 /
2246.65922904024 ; t49 [ 2ULL ] = intermediate_der3155 * 2677.3120849090419 ;
t49 [ 3ULL ] = intermediate_der3155 * 2677.3120849090419 ; t568 = X [ 43ULL ]
* X [ 43ULL ] ; t49 [ 4ULL ] = ( 1.0 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [
43ULL ] ) * intermediate_der3155 + - 1.0 / ( t568 == 0.0 ? 1.0E-16 : t568 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) *
2677.3120849090419 / 12.896402563644669 ; t50 [ 0ULL ] = - ( 1.0 / ( X [ 9ULL
] == 0.0 ? 1.0E-16 : X [ 9ULL ] ) ) * intermediate_der3691 *
2677.3120849090419 / 13.896402563644669 ; t50 [ 1ULL ] = ( intrm_sf_mf_944 -
intrm_sf_mf_837 ) * intermediate_der3691 * 2.6773120849090417 /
2448.8207083326588 ; t50 [ 2ULL ] = intermediate_der3691 * 2677.3120849090419
; t50 [ 3ULL ] = intermediate_der3691 * 2677.3120849090419 ; t568 = X [ 44ULL
] * X [ 44ULL ] ; t50 [ 4ULL ] = ( 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [
44ULL ] ) * intermediate_der3691 + - 1.0 / ( t568 == 0.0 ? 1.0E-16 : t568 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I ) *
2677.3120849090419 / 13.896402563644669 ; t547 = X [ 45ULL ] * X [ 45ULL ] ;
t51 [ 0ULL ] = ( - ( 1.0 / ( X [ 45ULL ] == 0.0 ? 1.0E-16 : X [ 45ULL ] ) ) *
intermediate_der4246 + - ( - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
49.087385212340521 ; t51 [ 1ULL ] = ( ( intrm_sf_mf_1082 - intrm_sf_mf_975 )
* intermediate_der4246 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
intermediate_der6565 ) * 0.049087385212340524 / 2172.7681408465714 ; t51 [
2ULL ] = intermediate_der4246 * 49.087385212340521 ; t51 [ 3ULL ] =
intermediate_der4246 * 49.087385212340521 ; t51 [ 4ULL ] = 1.0 / ( X [ 48ULL
] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * intermediate_der4246 *
49.087385212340521 ; t52 [ 0ULL ] = - ( 1.0 / ( X [ 45ULL ] == 0.0 ? 1.0E-16
: X [ 45ULL ] ) ) * intermediate_der4245 * 49.087385212340521 ; t52 [ 1ULL ]
= ( ( intrm_sf_mf_1082 - intrm_sf_mf_975 ) * intermediate_der4245 + ( t332 -
intermediate_der4199 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
0.049087385212340524 / 2172.7681408465714 ; t52 [ 2ULL ] =
intermediate_der4245 * 49.087385212340521 ; t52 [ 3ULL ] =
intermediate_der4245 * 49.087385212340521 ; t52 [ 4ULL ] = 1.0 / ( X [ 48ULL
] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * intermediate_der4245 *
49.087385212340521 ; t53 [ 0ULL ] = - ( 1.0 / ( X [ 45ULL ] == 0.0 ? 1.0E-16
: X [ 45ULL ] ) ) * t246 * 49.087385212340521 ; t53 [ 1ULL ] = ( (
intrm_sf_mf_1082 - intrm_sf_mf_975 ) * t246 + ( intermediate_der6564 -
intermediate_der4200 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
0.049087385212340524 / 2172.7681408465714 ; t53 [ 2ULL ] = t246 *
49.087385212340521 ; t53 [ 3ULL ] = t246 * 49.087385212340521 ; t53 [ 4ULL ]
= 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) * t246 *
49.087385212340521 ; t54 [ 0ULL ] = - ( 1.0 / ( X [ 45ULL ] == 0.0 ? 1.0E-16
: X [ 45ULL ] ) ) * intermediate_der4243 * 49.087385212340521 ; t54 [ 1ULL ]
= ( intrm_sf_mf_1082 - intrm_sf_mf_975 ) * intermediate_der4243 *
0.049087385212340524 / 2172.7681408465714 ; t54 [ 2ULL ] =
intermediate_der4243 * 49.087385212340521 ; t54 [ 3ULL ] =
intermediate_der4243 * 49.087385212340521 ; t568 = X [ 48ULL ] * X [ 48ULL ]
; t54 [ 4ULL ] = ( 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) *
intermediate_der4243 + - 1.0 / ( t568 == 0.0 ? 1.0E-16 : t568 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ) *
49.087385212340521 ; t547 = X [ 49ULL ] * X [ 49ULL ] ; t55 [ 0ULL ] = ( - (
1.0 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ) * intermediate_der4826
+ - ( - 1.0 / ( t547 == 0.0 ? 1.0E-16 : t547 ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
196.34954084936209 ; t55 [ 1ULL ] = ( ( intrm_sf_mf_1231 - intrm_sf_mf_1124 )
* intermediate_der4826 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
intermediate_der6697 ) * 0.1963495408493621 / 2172.7681408465714 ; t55 [ 2ULL
] = 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) *
intermediate_der4826 * 196.34954084936209 ; t55 [ 3ULL ] =
intermediate_der4826 * 196.34954084936209 ; t55 [ 4ULL ] =
intermediate_der4826 * 196.34954084936209 ; t56 [ 0ULL ] = - ( 1.0 / ( X [
49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ) * intermediate_der4823 *
196.34954084936209 ; t56 [ 1ULL ] = ( intrm_sf_mf_1231 - intrm_sf_mf_1124 ) *
intermediate_der4823 * 0.1963495408493621 / 2172.7681408465714 ; t547 = X [
50ULL ] * X [ 50ULL ] ; t56 [ 2ULL ] = ( 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16
: X [ 50ULL ] ) * intermediate_der4823 + - 1.0 / ( t547 == 0.0 ? 1.0E-16 :
t547 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
196.34954084936209 ; t56 [ 3ULL ] = intermediate_der4823 * 196.34954084936209
; t56 [ 4ULL ] = intermediate_der4823 * 196.34954084936209 ; t57 [ 0ULL ] = -
( 1.0 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ) * t248 *
196.34954084936209 ; t57 [ 1ULL ] = ( ( intrm_sf_mf_1231 - intrm_sf_mf_1124 )
* t248 + ( intermediate_der6696 - intermediate_der4780 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
0.1963495408493621 / 2172.7681408465714 ; t57 [ 2ULL ] = 1.0 / ( X [ 50ULL ]
== 0.0 ? 1.0E-16 : X [ 50ULL ] ) * t248 * 196.34954084936209 ; t57 [ 3ULL ] =
t248 * 196.34954084936209 ; t57 [ 4ULL ] = t248 * 196.34954084936209 ; t58 [
0ULL ] = - ( 1.0 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ) *
intermediate_der4825 * 196.34954084936209 ; t58 [ 1ULL ] = ( (
intrm_sf_mf_1231 - intrm_sf_mf_1124 ) * intermediate_der4825 + (
intermediate_der6695 - intermediate_der4779 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) *
0.1963495408493621 / 2172.7681408465714 ; t58 [ 2ULL ] = 1.0 / ( X [ 50ULL ]
== 0.0 ? 1.0E-16 : X [ 50ULL ] ) * intermediate_der4825 * 196.34954084936209
; t58 [ 3ULL ] = intermediate_der4825 * 196.34954084936209 ; t58 [ 4ULL ] =
intermediate_der4825 * 196.34954084936209 ; t59 [ 0ULL ] = - ( 1.0 / ( X [
12ULL ] == 0.0 ? 1.0E-16 : X [ 12ULL ] ) ) * intermediate_der5512 *
2677.3120849090419 ; t59 [ 1ULL ] = ( intrm_sf_mf_1406 - intrm_sf_mf_1299 ) *
intermediate_der5512 * 2.6773120849090417 / 2172.7681408465714 ; t59 [ 2ULL ]
= intermediate_der5512 * 2677.3120849090419 ; t59 [ 3ULL ] =
intermediate_der5512 * 2677.3120849090419 ; t568 = X [ 53ULL ] * X [ 53ULL ]
; t59 [ 4ULL ] = ( 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) *
intermediate_der5512 + - 1.0 / ( t568 == 0.0 ? 1.0E-16 : t568 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I ) *
2677.3120849090419 ; t60 [ 0ULL ] = - ( 1.0 / ( X [ 15ULL ] == 0.0 ? 1.0E-16
: X [ 15ULL ] ) ) * intermediate_der6048 * 2677.3120849090419 /
1.5549856083302016 ; t60 [ 1ULL ] = ( intrm_sf_mf_1543 - intrm_sf_mf_1436 ) *
intermediate_der6048 * 2.6773120849090417 / 2374.9296201389902 ; t60 [ 2ULL ]
= intermediate_der6048 * 2677.3120849090419 ; t60 [ 3ULL ] =
intermediate_der6048 * 2677.3120849090419 ; t565 = X [ 54ULL ] * X [ 54ULL ]
; t60 [ 4ULL ] = ( 1.0 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) *
intermediate_der6048 + - 1.0 / ( t565 == 0.0 ? 1.0E-16 : t565 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I ) *
2677.3120849090419 / 1.5549856083302016 ; for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 ] = t13 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 + 5ULL ] = t14 [ t108 ] ; } for ( t108 = 0ULL ; t108 <
5ULL ; t108 ++ ) { t0 [ t108 + 10ULL ] = t15 [ t108 ] ; } for ( t108 = 0ULL ;
t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 15ULL ] = t16 [ t108 ] ; } for ( t108 =
0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 20ULL ] = t17 [ t108 ] ; } for (
t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 25ULL ] = t18 [ t108 ] ;
} for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 30ULL ] = t19 [
t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 35ULL ]
= t20 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 +
40ULL ] = t21 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [
t108 + 45ULL ] = t22 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ )
{ t0 [ t108 + 50ULL ] = t23 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 + 55ULL ] = t24 [ t108 ] ; } for ( t108 = 0ULL ; t108 <
5ULL ; t108 ++ ) { t0 [ t108 + 60ULL ] = t25 [ t108 ] ; } for ( t108 = 0ULL ;
t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 65ULL ] = t26 [ t108 ] ; } for ( t108 =
0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 70ULL ] = t27 [ t108 ] ; } for (
t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 75ULL ] = t28 [ t108 ] ;
} for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 80ULL ] = t29 [
t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 85ULL ]
= t30 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 +
90ULL ] = t31 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [
t108 + 95ULL ] = t32 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ )
{ t0 [ t108 + 100ULL ] = t33 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 + 105ULL ] = t34 [ t108 ] ; } for ( t108 = 0ULL ; t108
< 5ULL ; t108 ++ ) { t0 [ t108 + 110ULL ] = t35 [ t108 ] ; } for ( t108 =
0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 115ULL ] = t36 [ t108 ] ; } for
( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 120ULL ] = t37 [ t108 ]
; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 125ULL ] = t38
[ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 130ULL
] = t39 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108
+ 135ULL ] = t40 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) {
t0 [ t108 + 140ULL ] = t41 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 + 145ULL ] = t42 [ t108 ] ; } for ( t108 = 0ULL ; t108
< 5ULL ; t108 ++ ) { t0 [ t108 + 150ULL ] = t43 [ t108 ] ; } for ( t108 =
0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 155ULL ] = t44 [ t108 ] ; } for
( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 160ULL ] = t45 [ t108 ]
; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 165ULL ] = t46
[ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 170ULL
] = t47 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108
+ 175ULL ] = t48 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) {
t0 [ t108 + 180ULL ] = t49 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 + 185ULL ] = t50 [ t108 ] ; } for ( t108 = 0ULL ; t108
< 5ULL ; t108 ++ ) { t0 [ t108 + 190ULL ] = t51 [ t108 ] ; } for ( t108 =
0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 195ULL ] = t52 [ t108 ] ; } for
( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 200ULL ] = t53 [ t108 ]
; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 205ULL ] = t54
[ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 210ULL
] = t55 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108
+ 215ULL ] = t56 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ; t108 ++ ) {
t0 [ t108 + 220ULL ] = t57 [ t108 ] ; } for ( t108 = 0ULL ; t108 < 5ULL ;
t108 ++ ) { t0 [ t108 + 225ULL ] = t58 [ t108 ] ; } for ( t108 = 0ULL ; t108
< 5ULL ; t108 ++ ) { t0 [ t108 + 230ULL ] = t59 [ t108 ] ; } for ( t108 =
0ULL ; t108 < 5ULL ; t108 ++ ) { t0 [ t108 + 235ULL ] = t60 [ t108 ] ; } for
( b = 0 ; b < 240 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; (
void ) t570 ; return 0 ; }
