#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_m.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_m ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t156 , NeDsMethodOutput * t157 ) { PmRealVector out ;
real_T X [ 440 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ; real_T
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
intrm_sf_mf_1122 ; real_T intrm_sf_mf_1123 ; real_T intrm_sf_mf_1124 ; real_T
intrm_sf_mf_1231 ; real_T intrm_sf_mf_1297 ; real_T intrm_sf_mf_1298 ; real_T
intrm_sf_mf_1299 ; real_T intrm_sf_mf_136 ; real_T intrm_sf_mf_1434 ; real_T
intrm_sf_mf_1435 ; real_T intrm_sf_mf_1436 ; real_T intrm_sf_mf_409 ; real_T
intrm_sf_mf_700 ; real_T intrm_sf_mf_835 ; real_T intrm_sf_mf_836 ; real_T
intrm_sf_mf_837 ; real_T intrm_sf_mf_975 ; real_T t100 ; real_T t102 ; real_T
t104 ; real_T t106 ; real_T t108 ; real_T t135 ; real_T t140 ; real_T t155 ;
real_T t27 ; real_T t30 ; real_T t33 ; real_T t36 ; real_T t39 ; real_T t42 ;
real_T t45 ; real_T t48 ; real_T t51 ; real_T t54 ; real_T t57 ; real_T t60 ;
real_T t61 ; real_T t62 ; real_T t63 ; real_T t67 ; real_T t68 ; real_T t69 ;
real_T t70 ; real_T t72 ; real_T t73 ; real_T t74 ; real_T t75 ; real_T t77 ;
real_T t78 ; real_T t79 ; real_T t80 ; real_T t81 ; real_T t82 ; real_T t83 ;
real_T t84 ; real_T t90 ; real_T t92 ; real_T t94 ; real_T t98 ; int32_T b ;
( void ) LC ; for ( b = 0 ; b < 440 ; b ++ ) { X [ b ] = t156 -> mX . mX [ b
] ; } out = t157 -> mM ; if ( X [ 21ULL ] <= 0.0 ) { t155 = 0.0 ; } else {
t155 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
t68 = 0.0 ; } else { t68 = X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } t70 = (
( ( 1.0 - t155 ) - t68 ) * 296.802103844292 + t155 * 461.523 ) + t68 *
4124.48151675695 ; t72 = X [ 19ULL ] * t70 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I = X [ 20ULL ] / (
t72 == 0.0 ? 1.0E-16 : t72 ) ; if ( X [ 19ULL ] <= 216.59999999999997 ) { t72
= 216.59999999999997 ; } else { t72 = X [ 19ULL ] >= 623.15 ? 623.15 : X [
19ULL ] ; } t27 = t72 * t72 ; if ( X [ 26ULL ] <= 0.0 ) { t74 = 0.0 ; } else
{ t74 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 )
{ intrm_sf_mf_409 = 0.0 ; } else { intrm_sf_mf_409 = X [ 25ULL ] >= 1.0 ? 1.0
: X [ 25ULL ] ; } t73 = ( ( ( 1.0 - t74 ) - intrm_sf_mf_409 ) *
296.802103844292 + t74 * 461.523 ) + intrm_sf_mf_409 * 4124.48151675695 ; t78
= X [ 23ULL ] * t73 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 = X [ 24ULL ]
/ ( t78 == 0.0 ? 1.0E-16 : t78 ) ; if ( X [ 23ULL ] <= 216.59999999999997 ) {
t78 = 216.59999999999997 ; } else { t78 = X [ 23ULL ] >= 623.15 ? 623.15 : X
[ 23ULL ] ; } t30 = t78 * t78 ; if ( X [ 30ULL ] <= 0.0 ) { t80 = 0.0 ; }
else { t80 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } if ( X [ 29ULL ] <=
0.0 ) { t62 = 0.0 ; } else { t62 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; }
t75 = ( ( ( 1.0 - t80 ) - t62 ) * 296.802103844292 + t80 * 461.523 ) + t62 *
4124.48151675695 ; t90 = X [ 27ULL ] * t75 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I = X [ 28ULL ] / (
t90 == 0.0 ? 1.0E-16 : t90 ) ; if ( X [ 27ULL ] <= 216.59999999999997 ) { t90
= 216.59999999999997 ; } else { t90 = X [ 27ULL ] >= 623.15 ? 623.15 : X [
27ULL ] ; } t33 = t90 * t90 ; if ( X [ 33ULL ] <= 0.0 ) { t61 = 0.0 ; } else
{ t61 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } if ( X [ 34ULL ] <= 0.0 )
{ t63 = 0.0 ; } else { t63 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t77 =
( ( ( 1.0 - t61 ) - t63 ) * 296.802103844292 + t61 * 461.523 ) + t63 *
4124.48151675695 ; t92 = X [ 31ULL ] * t77 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I = X [ 32ULL ] / ( t92
== 0.0 ? 1.0E-16 : t92 ) ; if ( X [ 31ULL ] <= 216.59999999999997 ) { t92 =
216.59999999999997 ; } else { t92 = X [ 31ULL ] >= 623.15 ? 623.15 : X [
31ULL ] ; } t36 = t92 * t92 ; if ( X [ 38ULL ] <= 0.0 ) { t67 = 0.0 ; } else
{ t67 = X [ 38ULL ] >= 1.0 ? 1.0 : X [ 38ULL ] ; } if ( X [ 37ULL ] <= 0.0 )
{ t69 = 0.0 ; } else { t69 = X [ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } t79 =
( ( ( 1.0 - t67 ) - t69 ) * 296.802103844292 + t67 * 461.523 ) + t69 *
259.836612622973 ; t94 = X [ 36ULL ] * t79 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho = X [ 35ULL ]
/ ( t94 == 0.0 ? 1.0E-16 : t94 ) ; if ( X [ 36ULL ] <= 216.59999999999997 ) {
t94 = 216.59999999999997 ; } else { t94 = X [ 36ULL ] >= 623.15 ? 623.15 : X
[ 36ULL ] ; } t39 = t94 * t94 ; if ( X [ 41ULL ] <= 0.0 ) { t81 = 0.0 ; }
else { t81 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <=
0.0 ) { t82 = 0.0 ; } else { t82 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; }
t83 = ( ( ( 1.0 - t81 ) - t82 ) * 296.802103844292 + t81 * 461.523 ) + t82 *
4124.48151675695 ; t84 = X [ 39ULL ] * t83 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = X [ 42ULL ] / ( t84
== 0.0 ? 1.0E-16 : t84 ) ; if ( X [ 39ULL ] <= 216.59999999999997 ) { t84 =
216.59999999999997 ; } else { t84 = X [ 39ULL ] >= 623.15 ? 623.15 : X [
39ULL ] ; } t42 = t84 * t84 ; if ( X [ 8ULL ] <= 0.0 ) { t140 = 0.0 ; } else
{ t140 = X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) {
t135 = 0.0 ; } else { t135 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; }
intrm_sf_mf_700 = ( ( ( 1.0 - t140 ) - t135 ) * 296.802103844292 + t140 *
461.523 ) + t135 * 4124.48151675695 ; t98 = X [ 6ULL ] * intrm_sf_mf_700 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X [ 43ULL ] / ( t98
== 0.0 ? 1.0E-16 : t98 ) ; if ( X [ 6ULL ] <= 216.59999999999997 ) { t98 =
216.59999999999997 ; } else { t98 = X [ 6ULL ] >= 623.15 ? 623.15 : X [ 6ULL
] ; } t45 = t98 * t98 ; if ( X [ 11ULL ] <= 0.0 ) { intrm_sf_mf_835 = 0.0 ; }
else { intrm_sf_mf_835 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if ( X [
10ULL ] <= 0.0 ) { intrm_sf_mf_836 = 0.0 ; } else { intrm_sf_mf_836 = X [
10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ; } intrm_sf_mf_837 = ( ( ( 1.0 -
intrm_sf_mf_835 ) - intrm_sf_mf_836 ) * 296.802103844292 + intrm_sf_mf_835 *
461.523 ) + intrm_sf_mf_836 * 4124.48151675695 ; t100 = X [ 9ULL ] *
intrm_sf_mf_837 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I =
X [ 44ULL ] / ( t100 == 0.0 ? 1.0E-16 : t100 ) ; if ( X [ 9ULL ] <=
216.59999999999997 ) { t100 = 216.59999999999997 ; } else { t100 = X [ 9ULL ]
>= 623.15 ? 623.15 : X [ 9ULL ] ; } t48 = t100 * t100 ; if ( X [ 47ULL ] <=
0.0 ) { intrm_sf_mf_1231 = 0.0 ; } else { intrm_sf_mf_1231 = X [ 47ULL ] >=
1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { intrm_sf_mf_136 = 0.0
; } else { intrm_sf_mf_136 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
intrm_sf_mf_975 = ( ( ( 1.0 - intrm_sf_mf_1231 ) - intrm_sf_mf_136 ) *
296.802103844292 + intrm_sf_mf_1231 * 461.523 ) + intrm_sf_mf_136 *
259.836612622973 ; t102 = X [ 45ULL ] * intrm_sf_mf_975 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X [ 48ULL ] / (
t102 == 0.0 ? 1.0E-16 : t102 ) ; if ( X [ 45ULL ] <= 216.59999999999997 ) {
t102 = 216.59999999999997 ; } else { t102 = X [ 45ULL ] >= 623.15 ? 623.15 :
X [ 45ULL ] ; } t51 = t102 * t102 ; if ( X [ 51ULL ] <= 0.0 ) {
intrm_sf_mf_1122 = 0.0 ; } else { intrm_sf_mf_1122 = X [ 51ULL ] >= 1.0 ? 1.0
: X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) { intrm_sf_mf_1123 = 0.0 ; } else
{ intrm_sf_mf_1123 = X [ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; }
intrm_sf_mf_1124 = ( ( ( 1.0 - intrm_sf_mf_1122 ) - intrm_sf_mf_1123 ) *
296.802103844292 + intrm_sf_mf_1122 * 461.523 ) + intrm_sf_mf_1123 *
259.836612622973 ; t104 = X [ 49ULL ] * intrm_sf_mf_1124 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = X [ 50ULL ] / (
t104 == 0.0 ? 1.0E-16 : t104 ) ; if ( X [ 49ULL ] <= 216.59999999999997 ) {
t104 = 216.59999999999997 ; } else { t104 = X [ 49ULL ] >= 623.15 ? 623.15 :
X [ 49ULL ] ; } t54 = t104 * t104 ; if ( X [ 14ULL ] <= 0.0 ) {
intrm_sf_mf_1297 = 0.0 ; } else { intrm_sf_mf_1297 = X [ 14ULL ] >= 1.0 ? 1.0
: X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { intrm_sf_mf_1298 = 0.0 ; } else
{ intrm_sf_mf_1298 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; }
intrm_sf_mf_1299 = ( ( ( 1.0 - intrm_sf_mf_1297 ) - intrm_sf_mf_1298 ) *
296.802103844292 + intrm_sf_mf_1297 * 461.523 ) + intrm_sf_mf_1298 *
259.836612622973 ; t106 = X [ 12ULL ] * intrm_sf_mf_1299 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I = X [ 53ULL ] / (
t106 == 0.0 ? 1.0E-16 : t106 ) ; if ( X [ 12ULL ] <= 216.59999999999997 ) {
t106 = 216.59999999999997 ; } else { t106 = X [ 12ULL ] >= 623.15 ? 623.15 :
X [ 12ULL ] ; } t57 = t106 * t106 ; if ( X [ 17ULL ] <= 0.0 ) {
intrm_sf_mf_1434 = 0.0 ; } else { intrm_sf_mf_1434 = X [ 17ULL ] >= 1.0 ? 1.0
: X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) { intrm_sf_mf_1435 = 0.0 ; } else
{ intrm_sf_mf_1435 = X [ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; }
intrm_sf_mf_1436 = ( ( ( 1.0 - intrm_sf_mf_1434 ) - intrm_sf_mf_1435 ) *
296.802103844292 + intrm_sf_mf_1434 * 461.523 ) + intrm_sf_mf_1435 *
259.836612622973 ; t108 = X [ 15ULL ] * intrm_sf_mf_1436 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I = X [ 54ULL ] / (
t108 == 0.0 ? 1.0E-16 : t108 ) ; if ( X [ 15ULL ] <= 216.59999999999997 ) {
t108 = 216.59999999999997 ; } else { t108 = X [ 15ULL ] >= 623.15 ? 623.15 :
X [ 15ULL ] ; } t60 = t108 * t108 ; intrm_sf_mf_1231 = ( ( (
1074.1165326382541 + t102 * - 0.2214565261064077 ) + t51 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_1231 ) - intrm_sf_mf_136 ) +
( ( 1479.6504774710445 + t102 * 1.200211433705052 ) + t51 * -
0.00038614513167842338 ) * intrm_sf_mf_1231 ) + ( ( 900.63941224837913 + t102
* - 0.044484923911364271 ) + t51 * 0.00036936011832043369 ) * intrm_sf_mf_136
; intrm_sf_mf_136 = ( ( ( 1074.1165326382541 + t72 * - 0.2214565261064077 ) +
t27 * 0.00037212980109010952 ) * ( ( 1.0 - t155 ) - t68 ) + ( (
1479.6504774710445 + t72 * 1.200211433705052 ) + t27 * -
0.00038614513167842338 ) * t155 ) + ( ( 12825.281119790017 + t72 *
6.9647057412830984 ) + t27 * - 0.007052486824683288 ) * t68 ; t72 = ( ( (
1074.1165326382541 + t78 * - 0.2214565261064077 ) + t30 *
0.00037212980109010952 ) * ( ( 1.0 - t74 ) - intrm_sf_mf_409 ) + ( (
1479.6504774710445 + t78 * 1.200211433705052 ) + t30 * -
0.00038614513167842338 ) * t74 ) + ( ( 12825.281119790017 + t78 *
6.9647057412830984 ) + t30 * - 0.007052486824683288 ) * intrm_sf_mf_409 ; t70
= ( intrm_sf_mf_136 - t70 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
0.0078539816339744835 / 2246.65922904024 ; t72 = ( t72 - t73 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
0.012500000000000002 / 2246.65922904024 ; t74 = ( ( ( ( ( 1074.1165326382541
+ t90 * - 0.2214565261064077 ) + t33 * 0.00037212980109010952 ) * ( ( 1.0 -
t80 ) - t62 ) + ( ( 1479.6504774710445 + t90 * 1.200211433705052 ) + t33 * -
0.00038614513167842338 ) * t80 ) + ( ( 12825.281119790017 + t90 *
6.9647057412830984 ) + t33 * - 0.007052486824683288 ) * t62 ) - t75 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I * 12.0 /
2246.65922904024 ; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2
] = 1.0 ; out . mX [ 3 ] = - 0.001 ; out . mX [ 4 ] = - 0.005 ; out . mX [ 5
] = - 1.0E-6 ; out . mX [ 6 ] = - ( 1.0 / ( X [ 6ULL ] == 0.0 ? 1.0E-16 : X [
6ULL ] ) ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
2677.3120849090419 / 12.896402563644669 ; out . mX [ 7 ] = ( ( ( ( (
1074.1165326382541 + t98 * - 0.2214565261064077 ) + t45 *
0.00037212980109010952 ) * ( ( 1.0 - t140 ) - t135 ) + ( ( 1479.6504774710445
+ t98 * 1.200211433705052 ) + t45 * - 0.00038614513167842338 ) * t140 ) + ( (
12825.281119790017 + t98 * 6.9647057412830984 ) + t45 * -
0.007052486824683288 ) * t135 ) - intrm_sf_mf_700 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 2.6773120849090417
/ 2246.65922904024 ; out . mX [ 8 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 2677.3120849090419
; out . mX [ 9 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
2677.3120849090419 ; out . mX [ 10 ] = - ( 1.0 / ( X [ 9ULL ] == 0.0 ?
1.0E-16 : X [ 9ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I * 2677.3120849090419
/ 13.896402563644669 ; out . mX [ 11 ] = ( ( ( ( ( 1074.1165326382541 + t100
* - 0.2214565261064077 ) + t48 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_835 ) - intrm_sf_mf_836 ) + ( ( 1479.6504774710445 + t100 *
1.200211433705052 ) + t48 * - 0.00038614513167842338 ) * intrm_sf_mf_835 ) +
( ( 12825.281119790017 + t100 * 6.9647057412830984 ) + t48 * -
0.007052486824683288 ) * intrm_sf_mf_836 ) - intrm_sf_mf_837 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I * 2.6773120849090417
/ 2448.8207083326588 ; out . mX [ 12 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I * 2677.3120849090419
; out . mX [ 13 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I
* 2677.3120849090419 ; out . mX [ 14 ] = - ( 1.0 / ( X [ 12ULL ] == 0.0 ?
1.0E-16 : X [ 12ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I * 2677.3120849090419
; out . mX [ 15 ] = ( ( ( ( ( 1074.1165326382541 + t106 * -
0.2214565261064077 ) + t57 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1297 ) - intrm_sf_mf_1298 ) + ( ( 1479.6504774710445 + t106 *
1.200211433705052 ) + t57 * - 0.00038614513167842338 ) * intrm_sf_mf_1297 ) +
( ( 900.63941224837913 + t106 * - 0.044484923911364271 ) + t57 *
0.00036936011832043369 ) * intrm_sf_mf_1298 ) - intrm_sf_mf_1299 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I * 2.6773120849090417
/ 2172.7681408465714 ; out . mX [ 16 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I * 2677.3120849090419
; out . mX [ 17 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I *
2677.3120849090419 ; out . mX [ 18 ] = - ( 1.0 / ( X [ 15ULL ] == 0.0 ?
1.0E-16 : X [ 15ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I * 2677.3120849090419
/ 1.5549856083302016 ; out . mX [ 19 ] = ( ( ( ( ( 1074.1165326382541 + t108
* - 0.2214565261064077 ) + t60 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1434 ) - intrm_sf_mf_1435 ) + ( ( 1479.6504774710445 + t108 *
1.200211433705052 ) + t60 * - 0.00038614513167842338 ) * intrm_sf_mf_1434 ) +
( ( 900.63941224837913 + t108 * - 0.044484923911364271 ) + t60 *
0.00036936011832043369 ) * intrm_sf_mf_1435 ) - intrm_sf_mf_1436 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I * 2.6773120849090417
/ 2374.9296201389902 ; out . mX [ 20 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I * 2677.3120849090419
; out . mX [ 21 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I
* 2677.3120849090419 ; out . mX [ 22 ] = - 1.0 ; out . mX [ 23 ] = - ( 1.0 /
( X [ 19ULL ] == 0.0 ? 1.0E-16 : X [ 19ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 24 ] = t70 ; out . mX [
25 ] = 1.0 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 26 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 ; out . mX [ 27 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 ; out . mX [ 28 ] = - ( 1.0 / ( X [ 23ULL ] == 0.0 ?
1.0E-16 : X [ 23ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
12.500000000000004 / 12.896402563644669 ; out . mX [ 29 ] = t72 ; out . mX [
30 ] = 1.0 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
12.500000000000004 / 12.896402563644669 ; out . mX [ 31 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
12.500000000000004 ; out . mX [ 32 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
12.500000000000004 ; out . mX [ 33 ] = - ( 1.0 / ( X [ 27ULL ] == 0.0 ?
1.0E-16 : X [ 27ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I * 12000.0 /
12.896402563644669 ; out . mX [ 34 ] = t74 ; out . mX [ 35 ] = 1.0 / ( X [
28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I * 12000.0 /
12.896402563644669 ; out . mX [ 36 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I * 12000.0 ; out .
mX [ 37 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_rho_I *
12000.0 ; out . mX [ 38 ] = - ( 1.0 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [
31ULL ] ) ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 39 ] = ( ( ( ( (
1074.1165326382541 + t92 * - 0.2214565261064077 ) + t36 *
0.00037212980109010952 ) * ( ( 1.0 - t61 ) - t63 ) + ( ( 1479.6504774710445 +
t92 * 1.200211433705052 ) + t36 * - 0.00038614513167842338 ) * t61 ) + ( (
12825.281119790017 + t92 * 6.9647057412830984 ) + t36 * -
0.007052486824683288 ) * t63 ) - t77 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I *
0.0078539816339744835 / 2246.65922904024 ; out . mX [ 40 ] = 1.0 / ( X [
32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I * 7.8539816339744828
/ 12.896402563644669 ; out . mX [ 41 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I * 7.8539816339744828
; out . mX [ 42 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_rho_I *
7.8539816339744828 ; out . mX [ 43 ] = 1.0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 :
X [ 35ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 44 ] = - ( 1.0 / ( X [ 36ULL ] == 0.0 ?
1.0E-16 : X [ 36ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 45 ] = ( ( ( ( ( 1074.1165326382541 + t94 * -
0.2214565261064077 ) + t39 * 0.00037212980109010952 ) * ( ( 1.0 - t67 ) - t69
) + ( ( 1479.6504774710445 + t94 * 1.200211433705052 ) + t39 * -
0.00038614513167842338 ) * t67 ) + ( ( 900.63941224837913 + t94 * -
0.044484923911364271 ) + t39 * 0.00036936011832043369 ) * t69 ) - t79 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho * 0.03 /
2172.7681408465714 ; out . mX [ 46 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 47 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 48 ] = - ( 1.0 / ( X [ 39ULL ] == 0.0 ?
1.0E-16 : X [ 39ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 49.087385212340521
/ 12.896402563644669 ; out . mX [ 49 ] = ( ( ( ( ( 1074.1165326382541 + t84 *
- 0.2214565261064077 ) + t42 * 0.00037212980109010952 ) * ( ( 1.0 - t81 ) -
t82 ) + ( ( 1479.6504774710445 + t84 * 1.200211433705052 ) + t42 * -
0.00038614513167842338 ) * t81 ) + ( ( 12825.281119790017 + t84 *
6.9647057412830984 ) + t42 * - 0.007052486824683288 ) * t82 ) - t83 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
0.049087385212340524 / 2246.65922904024 ; out . mX [ 50 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 49.087385212340521
; out . mX [ 51 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
49.087385212340521 ; out . mX [ 52 ] = 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 :
X [ 42ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
49.087385212340521 / 12.896402563644669 ; out . mX [ 53 ] = 1.0 / ( X [ 43ULL
] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 2677.3120849090419
/ 12.896402563644669 ; out . mX [ 54 ] = 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16
: X [ 44ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_rho_I *
2677.3120849090419 / 13.896402563644669 ; out . mX [ 55 ] = - ( 1.0 / ( X [
45ULL ] == 0.0 ? 1.0E-16 : X [ 45ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 49.087385212340521
; out . mX [ 56 ] = ( intrm_sf_mf_1231 - intrm_sf_mf_975 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
0.049087385212340524 / 2172.7681408465714 ; out . mX [ 57 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 49.087385212340521
; out . mX [ 58 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
49.087385212340521 ; out . mX [ 59 ] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 :
X [ 48ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
49.087385212340521 ; out . mX [ 60 ] = - ( 1.0 / ( X [ 49ULL ] == 0.0 ?
1.0E-16 : X [ 49ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 196.34954084936209
; out . mX [ 61 ] = ( ( ( ( ( 1074.1165326382541 + t104 * -
0.2214565261064077 ) + t54 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_1122 ) - intrm_sf_mf_1123 ) + ( ( 1479.6504774710445 + t104 *
1.200211433705052 ) + t54 * - 0.00038614513167842338 ) * intrm_sf_mf_1122 ) +
( ( 900.63941224837913 + t104 * - 0.044484923911364271 ) + t54 *
0.00036936011832043369 ) * intrm_sf_mf_1123 ) - intrm_sf_mf_1124 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 0.1963495408493621
/ 2172.7681408465714 ; out . mX [ 62 ] = 1.0 / ( X [ 50ULL ] == 0.0 ? 1.0E-16
: X [ 50ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
196.34954084936209 ; out . mX [ 63 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 196.34954084936209
; out . mX [ 64 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
196.34954084936209 ; out . mX [ 65 ] = 1.0 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 :
X [ 53ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I *
2677.3120849090419 ; out . mX [ 66 ] = 1.0 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 :
X [ 54ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_rho_I *
2677.3120849090419 / 1.5549856083302016 ; out . mX [ 67 ] = 5.0E-6 ; out . mX
[ 68 ] = 0.02 ; ( void ) LC ; ( void ) t157 ; return 0 ; }
