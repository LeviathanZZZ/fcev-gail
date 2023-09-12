#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_m.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_m ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t147 , NeDsMethodOutput * t148 ) { PmRealVector out ;
real_T X [ 394 ] ; real_T
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
intrm_sf_mf_1021 ; real_T intrm_sf_mf_1189 ; real_T intrm_sf_mf_1190 ; real_T
intrm_sf_mf_1191 ; real_T intrm_sf_mf_1293 ; real_T intrm_sf_mf_1321 ; real_T
intrm_sf_mf_1322 ; real_T intrm_sf_mf_1323 ; real_T intrm_sf_mf_133 ; real_T
intrm_sf_mf_322 ; real_T intrm_sf_mf_580 ; real_T intrm_sf_mf_741 ; real_T
intrm_sf_mf_742 ; real_T intrm_sf_mf_873 ; real_T intrm_sf_mf_874 ; real_T
intrm_sf_mf_875 ; real_T intrm_sf_mf_977 ; real_T t101 ; real_T t118 ; real_T
t126 ; real_T t146 ; real_T t25 ; real_T t28 ; real_T t31 ; real_T t34 ;
real_T t37 ; real_T t40 ; real_T t43 ; real_T t46 ; real_T t49 ; real_T t52 ;
real_T t55 ; real_T t58 ; real_T t59 ; real_T t60 ; real_T t62 ; real_T t64 ;
real_T t65 ; real_T t67 ; real_T t68 ; real_T t70 ; real_T t71 ; real_T t72 ;
real_T t74 ; real_T t76 ; real_T t77 ; real_T t81 ; real_T t83 ; real_T t85 ;
real_T t87 ; real_T t91 ; real_T t93 ; real_T t95 ; real_T t97 ; real_T t99 ;
int32_T b ; ( void ) LC ; for ( b = 0 ; b < 394 ; b ++ ) { X [ b ] = t147 ->
mX . mX [ b ] ; } out = t148 -> mM ; if ( X [ 19ULL ] <= 0.0 ) { t146 = 0.0 ;
} else { t146 = X [ 19ULL ] >= 1.0 ? 1.0 : X [ 19ULL ] ; } if ( X [ 20ULL ]
<= 0.0 ) { t67 = 0.0 ; } else { t67 = X [ 20ULL ] >= 1.0 ? 1.0 : X [ 20ULL ]
; } t65 = ( ( ( 1.0 - t146 ) - t67 ) * 296.802103844292 + t146 * 461.523 ) +
t67 * 4124.48151675695 ; intrm_sf_mf_322 = X [ 17ULL ] * t65 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I = X [ 18ULL ] / (
intrm_sf_mf_322 == 0.0 ? 1.0E-16 : intrm_sf_mf_322 ) ; if ( X [ 17ULL ] <=
216.59999999999997 ) { intrm_sf_mf_322 = 216.59999999999997 ; } else {
intrm_sf_mf_322 = X [ 17ULL ] >= 623.15 ? 623.15 : X [ 17ULL ] ; } t25 =
intrm_sf_mf_322 * intrm_sf_mf_322 ; if ( X [ 24ULL ] <= 0.0 ) { t71 = 0.0 ; }
else { t71 = X [ 24ULL ] >= 1.0 ? 1.0 : X [ 24ULL ] ; } if ( X [ 23ULL ] <=
0.0 ) { intrm_sf_mf_580 = 0.0 ; } else { intrm_sf_mf_580 = X [ 23ULL ] >= 1.0
? 1.0 : X [ 23ULL ] ; } t68 = ( ( ( 1.0 - t71 ) - intrm_sf_mf_580 ) *
296.802103844292 + t71 * 461.523 ) + intrm_sf_mf_580 * 4124.48151675695 ; t81
= X [ 21ULL ] * t68 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I = X [ 22ULL ] / (
t81 == 0.0 ? 1.0E-16 : t81 ) ; if ( X [ 21ULL ] <= 216.59999999999997 ) { t81
= 216.59999999999997 ; } else { t81 = X [ 21ULL ] >= 623.15 ? 623.15 : X [
21ULL ] ; } t28 = t81 * t81 ; if ( X [ 27ULL ] <= 0.0 ) { t59 = 0.0 ; } else
{ t59 = X [ 27ULL ] >= 1.0 ? 1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 )
{ intrm_sf_mf_977 = 0.0 ; } else { intrm_sf_mf_977 = X [ 28ULL ] >= 1.0 ? 1.0
: X [ 28ULL ] ; } t70 = ( ( ( 1.0 - t59 ) - intrm_sf_mf_977 ) *
296.802103844292 + t59 * 461.523 ) + intrm_sf_mf_977 * 4124.48151675695 ; t83
= X [ 25ULL ] * t70 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I
= X [ 26ULL ] / ( t83 == 0.0 ? 1.0E-16 : t83 ) ; if ( X [ 25ULL ] <=
216.59999999999997 ) { t83 = 216.59999999999997 ; } else { t83 = X [ 25ULL ]
>= 623.15 ? 623.15 : X [ 25ULL ] ; } t31 = t83 * t83 ; if ( X [ 32ULL ] <=
0.0 ) { t58 = 0.0 ; } else { t58 = X [ 32ULL ] >= 1.0 ? 1.0 : X [ 32ULL ] ; }
if ( X [ 31ULL ] <= 0.0 ) { t60 = 0.0 ; } else { t60 = X [ 31ULL ] >= 1.0 ?
1.0 : X [ 31ULL ] ; } t72 = ( ( ( 1.0 - t58 ) - t60 ) * 296.802103844292 +
t58 * 461.523 ) + t60 * 259.836612622973 ; t85 = X [ 30ULL ] * t72 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho = X [ 29ULL ]
/ ( t85 == 0.0 ? 1.0E-16 : t85 ) ; if ( X [ 30ULL ] <= 216.59999999999997 ) {
t85 = 216.59999999999997 ; } else { t85 = X [ 30ULL ] >= 623.15 ? 623.15 : X
[ 30ULL ] ; } t34 = t85 * t85 ; if ( X [ 35ULL ] <= 0.0 ) { t62 = 0.0 ; }
else { t62 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <=
0.0 ) { t64 = 0.0 ; } else { t64 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; }
t74 = ( ( ( 1.0 - t62 ) - t64 ) * 296.802103844292 + t62 * 461.523 ) + t64 *
4124.48151675695 ; t87 = X [ 33ULL ] * t74 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I = X [ 36ULL ] / ( t87
== 0.0 ? 1.0E-16 : t87 ) ; if ( X [ 33ULL ] <= 216.59999999999997 ) { t87 =
216.59999999999997 ; } else { t87 = X [ 33ULL ] >= 623.15 ? 623.15 : X [
33ULL ] ; } t37 = t87 * t87 ; if ( X [ 6ULL ] <= 0.0 ) { t76 = 0.0 ; } else {
t76 = X [ 6ULL ] >= 1.0 ? 1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) { t77
= 0.0 ; } else { t77 = X [ 5ULL ] >= 1.0 ? 1.0 : X [ 5ULL ] ; } t126 = ( ( (
1.0 - t76 ) - t77 ) * 296.802103844292 + t76 * 461.523 ) + t77 *
4124.48151675695 ; t118 = X [ 4ULL ] * t126 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = X [ 37ULL ] / (
t118 == 0.0 ? 1.0E-16 : t118 ) ; if ( X [ 4ULL ] <= 216.59999999999997 ) {
t118 = 216.59999999999997 ; } else { t118 = X [ 4ULL ] >= 623.15 ? 623.15 : X
[ 4ULL ] ; } t40 = t118 * t118 ; if ( X [ 9ULL ] <= 0.0 ) { t101 = 0.0 ; }
else { t101 = X [ 9ULL ] >= 1.0 ? 1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0
) { intrm_sf_mf_741 = 0.0 ; } else { intrm_sf_mf_741 = X [ 8ULL ] >= 1.0 ?
1.0 : X [ 8ULL ] ; } intrm_sf_mf_742 = ( ( ( 1.0 - t101 ) - intrm_sf_mf_741 )
* 296.802103844292 + t101 * 461.523 ) + intrm_sf_mf_741 * 4124.48151675695 ;
t91 = X [ 7ULL ] * intrm_sf_mf_742 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I = X [ 38ULL ] / (
t91 == 0.0 ? 1.0E-16 : t91 ) ; if ( X [ 7ULL ] <= 216.59999999999997 ) { t91
= 216.59999999999997 ; } else { t91 = X [ 7ULL ] >= 623.15 ? 623.15 : X [
7ULL ] ; } t43 = t91 * t91 ; if ( X [ 41ULL ] <= 0.0 ) { intrm_sf_mf_873 =
0.0 ; } else { intrm_sf_mf_873 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; }
if ( X [ 40ULL ] <= 0.0 ) { intrm_sf_mf_874 = 0.0 ; } else { intrm_sf_mf_874
= X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } intrm_sf_mf_875 = ( ( ( 1.0 -
intrm_sf_mf_873 ) - intrm_sf_mf_874 ) * 296.802103844292 + intrm_sf_mf_873 *
461.523 ) + intrm_sf_mf_874 * 259.836612622973 ; t93 = X [ 39ULL ] *
intrm_sf_mf_875 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X
[ 42ULL ] / ( t93 == 0.0 ? 1.0E-16 : t93 ) ; if ( X [ 39ULL ] <=
216.59999999999997 ) { t93 = 216.59999999999997 ; } else { t93 = X [ 39ULL ]
>= 623.15 ? 623.15 : X [ 39ULL ] ; } t46 = t93 * t93 ; if ( X [ 45ULL ] <=
0.0 ) { intrm_sf_mf_1293 = 0.0 ; } else { intrm_sf_mf_1293 = X [ 45ULL ] >=
1.0 ? 1.0 : X [ 45ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { intrm_sf_mf_133 = 0.0
; } else { intrm_sf_mf_133 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
intrm_sf_mf_1021 = ( ( ( 1.0 - intrm_sf_mf_1293 ) - intrm_sf_mf_133 ) *
296.802103844292 + intrm_sf_mf_1293 * 461.523 ) + intrm_sf_mf_133 *
259.836612622973 ; t95 = X [ 43ULL ] * intrm_sf_mf_1021 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X [ 44ULL ] / ( t95
== 0.0 ? 1.0E-16 : t95 ) ; if ( X [ 43ULL ] <= 216.59999999999997 ) { t95 =
216.59999999999997 ; } else { t95 = X [ 43ULL ] >= 623.15 ? 623.15 : X [
43ULL ] ; } t49 = t95 * t95 ; if ( X [ 12ULL ] <= 0.0 ) { intrm_sf_mf_1189 =
0.0 ; } else { intrm_sf_mf_1189 = X [ 12ULL ] >= 1.0 ? 1.0 : X [ 12ULL ] ; }
if ( X [ 11ULL ] <= 0.0 ) { intrm_sf_mf_1190 = 0.0 ; } else {
intrm_sf_mf_1190 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; }
intrm_sf_mf_1191 = ( ( ( 1.0 - intrm_sf_mf_1189 ) - intrm_sf_mf_1190 ) *
296.802103844292 + intrm_sf_mf_1189 * 461.523 ) + intrm_sf_mf_1190 *
259.836612622973 ; t97 = X [ 10ULL ] * intrm_sf_mf_1191 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = X [ 47ULL ] / ( t97
== 0.0 ? 1.0E-16 : t97 ) ; if ( X [ 10ULL ] <= 216.59999999999997 ) { t97 =
216.59999999999997 ; } else { t97 = X [ 10ULL ] >= 623.15 ? 623.15 : X [
10ULL ] ; } t52 = t97 * t97 ; if ( X [ 15ULL ] <= 0.0 ) { intrm_sf_mf_1321 =
0.0 ; } else { intrm_sf_mf_1321 = X [ 15ULL ] >= 1.0 ? 1.0 : X [ 15ULL ] ; }
if ( X [ 14ULL ] <= 0.0 ) { intrm_sf_mf_1322 = 0.0 ; } else {
intrm_sf_mf_1322 = X [ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; }
intrm_sf_mf_1323 = ( ( ( 1.0 - intrm_sf_mf_1321 ) - intrm_sf_mf_1322 ) *
296.802103844292 + intrm_sf_mf_1321 * 461.523 ) + intrm_sf_mf_1322 *
259.836612622973 ; t99 = X [ 13ULL ] * intrm_sf_mf_1323 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I = X [ 48ULL ] / (
t99 == 0.0 ? 1.0E-16 : t99 ) ; if ( X [ 13ULL ] <= 216.59999999999997 ) { t99
= 216.59999999999997 ; } else { t99 = X [ 13ULL ] >= 623.15 ? 623.15 : X [
13ULL ] ; } t55 = t99 * t99 ; intrm_sf_mf_1293 = ( ( ( 1074.1165326382641 +
t95 * - 0.2214565261064495 ) + t49 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1293 ) - intrm_sf_mf_133 ) + ( ( 1479.6504774711011 + t95 *
1.2002114337048222 ) + t49 * - 0.00038614513167823636 ) * intrm_sf_mf_1293 )
+ ( ( 900.63941224838356 + t95 * - 0.044484923911382625 ) + t49 *
0.00036936011832044979 ) * intrm_sf_mf_133 ; intrm_sf_mf_133 = ( ( (
1074.1165326382641 + intrm_sf_mf_322 * - 0.2214565261064495 ) + t25 *
0.00037212980109014541 ) * ( ( 1.0 - t146 ) - t67 ) + ( ( 1479.6504774711011
+ intrm_sf_mf_322 * 1.2002114337048222 ) + t25 * - 0.00038614513167823636 ) *
t146 ) + ( ( 12825.281119789837 + intrm_sf_mf_322 * 6.9647057412840034 ) +
t25 * - 0.0070524868246844051 ) * t67 ; t67 = ( ( ( 1074.1165326382641 + t81
* - 0.2214565261064495 ) + t28 * 0.00037212980109014541 ) * ( ( 1.0 - t71 ) -
intrm_sf_mf_580 ) + ( ( 1479.6504774711011 + t81 * 1.2002114337048222 ) + t28
* - 0.00038614513167823636 ) * t71 ) + ( ( 12825.281119789837 + t81 *
6.9647057412840034 ) + t28 * - 0.0070524868246844051 ) * intrm_sf_mf_580 ;
t65 = ( intrm_sf_mf_133 - t65 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
0.0078539816339744835 / 2246.65922904024 ; t67 = ( t67 - t68 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I * 12.0 /
2246.65922904024 ; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = - 0.001 ; out . mX
[ 2 ] = - 0.005 ; out . mX [ 3 ] = - 1.0E-6 ; out . mX [ 4 ] = - ( 1.0 / ( X
[ 4ULL ] == 0.0 ? 1.0E-16 : X [ 4ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 2677.3120849090419
/ 12.896402563644669 ; out . mX [ 5 ] = ( ( ( ( ( 1074.1165326382641 + t118 *
- 0.2214565261064495 ) + t40 * 0.00037212980109014541 ) * ( ( 1.0 - t76 ) -
t77 ) + ( ( 1479.6504774711011 + t118 * 1.2002114337048222 ) + t40 * -
0.00038614513167823636 ) * t76 ) + ( ( 12825.281119789837 + t118 *
6.9647057412840034 ) + t40 * - 0.0070524868246844051 ) * t77 ) - t126 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 2.6773120849090417
/ 2246.65922904024 ; out . mX [ 6 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 2677.3120849090419
; out . mX [ 7 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
2677.3120849090419 ; out . mX [ 8 ] = - ( 1.0 / ( X [ 7ULL ] == 0.0 ? 1.0E-16
: X [ 7ULL ] ) ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I *
2677.3120849090419 / 13.896402563644669 ; out . mX [ 9 ] = ( ( ( ( (
1074.1165326382641 + t91 * - 0.2214565261064495 ) + t43 *
0.00037212980109014541 ) * ( ( 1.0 - t101 ) - intrm_sf_mf_741 ) + ( (
1479.6504774711011 + t91 * 1.2002114337048222 ) + t43 * -
0.00038614513167823636 ) * t101 ) + ( ( 12825.281119789837 + t91 *
6.9647057412840034 ) + t43 * - 0.0070524868246844051 ) * intrm_sf_mf_741 ) -
intrm_sf_mf_742 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I
* 2.6773120849090417 / 2448.8207083326588 ; out . mX [ 10 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I * 2677.3120849090419
; out . mX [ 11 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I
* 2677.3120849090419 ; out . mX [ 12 ] = - ( 1.0 / ( X [ 10ULL ] == 0.0 ?
1.0E-16 : X [ 10ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 2677.3120849090419
; out . mX [ 13 ] = ( ( ( ( ( 1074.1165326382641 + t97 * - 0.2214565261064495
) + t52 * 0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_1189 ) -
intrm_sf_mf_1190 ) + ( ( 1479.6504774711011 + t97 * 1.2002114337048222 ) +
t52 * - 0.00038614513167823636 ) * intrm_sf_mf_1189 ) + ( (
900.63941224838356 + t97 * - 0.044484923911382625 ) + t52 *
0.00036936011832044979 ) * intrm_sf_mf_1190 ) - intrm_sf_mf_1191 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 2.6773120849090417
/ 2172.7681408465714 ; out . mX [ 14 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 2677.3120849090419
; out . mX [ 15 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
2677.3120849090419 ; out . mX [ 16 ] = - ( 1.0 / ( X [ 13ULL ] == 0.0 ?
1.0E-16 : X [ 13ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I * 2677.3120849090419
/ 1.5549856083302016 ; out . mX [ 17 ] = ( ( ( ( ( 1074.1165326382641 + t99 *
- 0.2214565261064495 ) + t55 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_1321 ) - intrm_sf_mf_1322 ) + ( ( 1479.6504774711011 + t99 *
1.2002114337048222 ) + t55 * - 0.00038614513167823636 ) * intrm_sf_mf_1321 )
+ ( ( 900.63941224838356 + t99 * - 0.044484923911382625 ) + t55 *
0.00036936011832044979 ) * intrm_sf_mf_1322 ) - intrm_sf_mf_1323 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I * 2.6773120849090417
/ 2374.9296201389902 ; out . mX [ 18 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I * 2677.3120849090419
; out . mX [ 19 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I
* 2677.3120849090419 ; out . mX [ 20 ] = - 1.0 ; out . mX [ 21 ] = - ( 1.0 /
( X [ 17ULL ] == 0.0 ? 1.0E-16 : X [ 17ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 22 ] = t65 ; out . mX [
23 ] = 1.0 / ( X [ 18ULL ] == 0.0 ? 1.0E-16 : X [ 18ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 24 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 ; out . mX [ 25 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
7.8539816339744828 ; out . mX [ 26 ] = - ( 1.0 / ( X [ 21ULL ] == 0.0 ?
1.0E-16 : X [ 21ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I * 12000.0 /
12.896402563644669 ; out . mX [ 27 ] = t67 ; out . mX [ 28 ] = 1.0 / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I * 12000.0 /
12.896402563644669 ; out . mX [ 29 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I * 12000.0 ; out .
mX [ 30 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_rho_I *
12000.0 ; out . mX [ 31 ] = - ( 1.0 / ( X [ 25ULL ] == 0.0 ? 1.0E-16 : X [
25ULL ] ) ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I *
7.8539816339744828 / 12.896402563644669 ; out . mX [ 32 ] = ( ( ( ( (
1074.1165326382641 + t83 * - 0.2214565261064495 ) + t31 *
0.00037212980109014541 ) * ( ( 1.0 - t59 ) - intrm_sf_mf_977 ) + ( (
1479.6504774711011 + t83 * 1.2002114337048222 ) + t31 * -
0.00038614513167823636 ) * t59 ) + ( ( 12825.281119789837 + t83 *
6.9647057412840034 ) + t31 * - 0.0070524868246844051 ) * intrm_sf_mf_977 ) -
t70 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I *
0.0078539816339744835 / 2246.65922904024 ; out . mX [ 33 ] = 1.0 / ( X [
26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I * 7.8539816339744828
/ 12.896402563644669 ; out . mX [ 34 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I * 7.8539816339744828
; out . mX [ 35 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_rho_I *
7.8539816339744828 ; out . mX [ 36 ] = 1.0 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 :
X [ 29ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 37 ] = - ( 1.0 / ( X [ 30ULL ] == 0.0 ?
1.0E-16 : X [ 30ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 38 ] = ( ( ( ( ( 1074.1165326382641 + t85 * -
0.2214565261064495 ) + t34 * 0.00037212980109014541 ) * ( ( 1.0 - t58 ) - t60
) + ( ( 1479.6504774711011 + t85 * 1.2002114337048222 ) + t34 * -
0.00038614513167823636 ) * t58 ) + ( ( 900.63941224838356 + t85 * -
0.044484923911382625 ) + t34 * 0.00036936011832044979 ) * t60 ) - t72 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho * 0.03 /
2172.7681408465714 ; out . mX [ 39 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 40 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho *
29.999999999999996 ; out . mX [ 41 ] = - ( 1.0 / ( X [ 33ULL ] == 0.0 ?
1.0E-16 : X [ 33ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I * 49.087385212340521
/ 12.896402563644669 ; out . mX [ 42 ] = ( ( ( ( ( 1074.1165326382641 + t87 *
- 0.2214565261064495 ) + t37 * 0.00037212980109014541 ) * ( ( 1.0 - t62 ) -
t64 ) + ( ( 1479.6504774711011 + t87 * 1.2002114337048222 ) + t37 * -
0.00038614513167823636 ) * t62 ) + ( ( 12825.281119789837 + t87 *
6.9647057412840034 ) + t37 * - 0.0070524868246844051 ) * t64 ) - t74 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
0.049087385212340524 / 2246.65922904024 ; out . mX [ 43 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I * 49.087385212340521
; out . mX [ 44 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
49.087385212340521 ; out . mX [ 45 ] = 1.0 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 :
X [ 36ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
49.087385212340521 / 12.896402563644669 ; out . mX [ 46 ] = 1.0 / ( X [ 37ULL
] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 2677.3120849090419
/ 12.896402563644669 ; out . mX [ 47 ] = 1.0 / ( X [ 38ULL ] == 0.0 ? 1.0E-16
: X [ 38ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I *
2677.3120849090419 / 13.896402563644669 ; out . mX [ 48 ] = - ( 1.0 / ( X [
39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 49.087385212340521
; out . mX [ 49 ] = ( ( ( ( ( 1074.1165326382641 + t93 * - 0.2214565261064495
) + t46 * 0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_873 ) -
intrm_sf_mf_874 ) + ( ( 1479.6504774711011 + t93 * 1.2002114337048222 ) + t46
* - 0.00038614513167823636 ) * intrm_sf_mf_873 ) + ( ( 900.63941224838356 +
t93 * - 0.044484923911382625 ) + t46 * 0.00036936011832044979 ) *
intrm_sf_mf_874 ) - intrm_sf_mf_875 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
0.049087385212340524 / 2172.7681408465714 ; out . mX [ 50 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 49.087385212340521
; out . mX [ 51 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
49.087385212340521 ; out . mX [ 52 ] = 1.0 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 :
X [ 42ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
49.087385212340521 ; out . mX [ 53 ] = - ( 1.0 / ( X [ 43ULL ] == 0.0 ?
1.0E-16 : X [ 43ULL ] ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 196.34954084936209
; out . mX [ 54 ] = ( intrm_sf_mf_1293 - intrm_sf_mf_1021 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 0.1963495408493621
/ 2172.7681408465714 ; out . mX [ 55 ] = 1.0 / ( X [ 44ULL ] == 0.0 ? 1.0E-16
: X [ 44ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
196.34954084936209 ; out . mX [ 56 ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 196.34954084936209
; out . mX [ 57 ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
196.34954084936209 ; out . mX [ 58 ] = 1.0 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 :
X [ 47ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
2677.3120849090419 ; out . mX [ 59 ] = 1.0 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 :
X [ 48ULL ] ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_rho_I *
2677.3120849090419 / 1.5549856083302016 ; out . mX [ 60 ] = 5.0E-6 ; out . mX
[ 61 ] = 0.5 ; ( void ) LC ; ( void ) t148 ; return 0 ; }
