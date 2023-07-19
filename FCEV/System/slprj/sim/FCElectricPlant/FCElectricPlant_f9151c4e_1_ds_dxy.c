#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_dxy.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_dxy ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t132 , NeDsMethodOutput * t133 ) { PmRealVector
out ; real_T X [ 399 ] ; real_T t0 [ 49 ] ; real_T t4 [ 5 ] ; real_T t2 [ 4 ]
; real_T t5 [ 4 ] ; real_T intermediate_der2353 ; real_T intermediate_der2356
; real_T intermediate_der2357 ; real_T intermediate_der2390 ; real_T t83 ;
real_T t84 ; real_T t89 ; real_T t96 ; size_t t11 ; int32_T b ; ( void ) LC ;
for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t132 -> mX . mX [ b ] ; } out =
t133 -> mDXY ; if ( X [ 223ULL ] <= 0.0 ) { t83 = 0.0 ; } else { t83 = X [
223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) {
intermediate_der2356 = 0.0 ; } else { intermediate_der2356 = X [ 222ULL ] >=
1.0 ? 1.0 : X [ 222ULL ] ; } intermediate_der2353 = ( ( ( 1.0 - t83 ) -
intermediate_der2356 ) * 296.802103844292 + t83 * 461.523 ) +
intermediate_der2356 * 259.836612622973 ; t83 = X [ 31ULL ] / (
intermediate_der2353 == 0.0 ? 1.0E-16 : intermediate_der2353 ) / ( X [ 221ULL
] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ; intermediate_der2356 = - X [ 213ULL ] /
( t83 == 0.0 ? 1.0E-16 : t83 ) * 10.0 ; if ( X [ 223ULL ] <= 0.0 ) { t89 =
0.0 ; } else { t89 = ( real_T ) ! ( X [ 223ULL ] >= 1.0 ) ; } if ( X [ 222ULL
] <= 0.0 ) { intermediate_der2357 = 0.0 ; } else { intermediate_der2357 = (
real_T ) ! ( X [ 222ULL ] >= 1.0 ) ; } intermediate_der2390 = -
intermediate_der2357 * 296.802103844292 + intermediate_der2357 *
259.836612622973 ; intermediate_der2357 = - t89 * 296.802103844292 + t89 *
461.523 ; t89 = 1.0 / ( intermediate_der2353 == 0.0 ? 1.0E-16 :
intermediate_der2353 ) / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ;
t96 = intermediate_der2353 * intermediate_der2353 ; intermediate_der2390 = -
X [ 31ULL ] / ( t96 == 0.0 ? 1.0E-16 : t96 ) * intermediate_der2390 / ( X [
221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ; intermediate_der2357 = - X [
31ULL ] / ( t96 == 0.0 ? 1.0E-16 : t96 ) * intermediate_der2357 / ( X [
221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ; t96 = X [ 221ULL ] * X [ 221ULL
] ; intermediate_der2353 = - ( X [ 31ULL ] / ( intermediate_der2353 == 0.0 ?
1.0E-16 : intermediate_der2353 ) ) / ( t96 == 0.0 ? 1.0E-16 : t96 ) ; t84 = -
1.0 / ( t83 == 0.0 ? 1.0E-16 : t83 ) * 10.0 ; t96 = t83 * t83 ;
intermediate_der2357 = X [ 213ULL ] / ( t96 == 0.0 ? 1.0E-16 : t96 ) *
intermediate_der2357 * 10.0 ; intermediate_der2353 = X [ 213ULL ] / ( t96 ==
0.0 ? 1.0E-16 : t96 ) * intermediate_der2353 * 10.0 ; intermediate_der2357 =
- ( X [ 31ULL ] - 1.01325 ) * intermediate_der2357 * 0.0001 ; t2 [ 0ULL ] =
1.0 ; t2 [ 1ULL ] = 1.0 ; t2 [ 2ULL ] = - 1.0E-6 ; t2 [ 3ULL ] = 1.0 ; t4 [
0ULL ] = 1.0 ; t4 [ 1ULL ] = - 0.1 ; t4 [ 2ULL ] = 1.0 ; t4 [ 3ULL ] = - 0.1
; t4 [ 4ULL ] = 1.0 ; t5 [ 0ULL ] = 1.0E-9 ; t5 [ 1ULL ] = 1.0E-9 ; t5 [ 2ULL
] = - 1.0E-15 ; t5 [ 3ULL ] = 1.0E-9 ; t0 [ 0ULL ] = 9.2592592592592591E-6 ;
t0 [ 1ULL ] = 0.1 ; t0 [ 2ULL ] = 0.1 ; for ( t11 = 0ULL ; t11 < 4ULL ; t11
++ ) { t0 [ t11 + 3ULL ] = t2 [ t11 ] ; } t0 [ 7ULL ] = 1.0 ; t0 [ 8ULL ] = (
- intermediate_der2356 + - ( X [ 31ULL ] - 1.01325 ) * ( X [ 213ULL ] / ( t96
== 0.0 ? 1.0E-16 : t96 ) * t89 * 10.0 ) ) * 0.0001 * 1111.1111111111111 ; t0
[ 9ULL ] = 0.0 ; t0 [ 10ULL ] = 0.0 ; t0 [ 11ULL ] = 0.0 ; t0 [ 12ULL ] = 0.0
; t0 [ 13ULL ] = 0.0 ; t0 [ 14ULL ] = 0.0 ; t0 [ 15ULL ] = - 1.0 ; t0 [ 16ULL
] = 1.0 ; t0 [ 17ULL ] = - 1.0 ; t0 [ 18ULL ] = - 1.0 ; for ( t11 = 0ULL ;
t11 < 5ULL ; t11 ++ ) { t0 [ t11 + 19ULL ] = t4 [ t11 ] ; } for ( t11 = 0ULL
; t11 < 4ULL ; t11 ++ ) { t0 [ t11 + 24ULL ] = t5 [ t11 ] ; } out . mX [ 0 ]
= t0 [ 0 ] ; out . mX [ 1 ] = t0 [ 1 ] ; out . mX [ 2 ] = t0 [ 2 ] ; out . mX
[ 3 ] = t0 [ 3 ] ; out . mX [ 4 ] = t0 [ 4 ] ; out . mX [ 5 ] = t0 [ 5 ] ;
out . mX [ 6 ] = t0 [ 6 ] ; out . mX [ 7 ] = t0 [ 7 ] ; out . mX [ 8 ] = t0 [
8 ] ; out . mX [ 9 ] = t0 [ 9 ] ; out . mX [ 10 ] = t0 [ 10 ] ; out . mX [ 11
] = t0 [ 11 ] ; out . mX [ 12 ] = t0 [ 12 ] ; out . mX [ 13 ] = t0 [ 13 ] ;
out . mX [ 14 ] = t0 [ 14 ] ; out . mX [ 15 ] = t0 [ 15 ] ; out . mX [ 16 ] =
t0 [ 16 ] ; out . mX [ 17 ] = t0 [ 17 ] ; out . mX [ 18 ] = t0 [ 18 ] ; out .
mX [ 19 ] = t0 [ 19 ] ; out . mX [ 20 ] = t0 [ 20 ] ; out . mX [ 21 ] = t0 [
21 ] ; out . mX [ 22 ] = t0 [ 22 ] ; out . mX [ 23 ] = t0 [ 23 ] ; out . mX [
24 ] = t0 [ 24 ] ; out . mX [ 25 ] = t0 [ 25 ] ; out . mX [ 26 ] = t0 [ 26 ]
; out . mX [ 27 ] = t0 [ 27 ] ; out . mX [ 28 ] = - 1.0E-6 ; out . mX [ 29 ]
= - 1.0 ; out . mX [ 30 ] = - 1.0 ; out . mX [ 31 ] = - 1.0 ; out . mX [ 32 ]
= - 1.0 ; out . mX [ 33 ] = - ( X [ 31ULL ] - 1.01325 ) * t84 * 0.0001 *
1111.1111111111111 ; out . mX [ 34 ] = - ( X [ 31ULL ] - 1.01325 ) *
intermediate_der2353 * 0.0001 * 1111.1111111111111 ; out . mX [ 35 ] = - ( X
[ 31ULL ] - 1.01325 ) * ( X [ 213ULL ] / ( t96 == 0.0 ? 1.0E-16 : t96 ) *
intermediate_der2390 * 10.0 ) * 0.0001 * 1111.1111111111111 ; out . mX [ 36 ]
= intermediate_der2357 * 1111.1111111111111 ; out . mX [ 37 ] = - 1.0 ; out .
mX [ 38 ] = 0.0 ; out . mX [ 39 ] = 0.0 ; out . mX [ 40 ] = 1.0 ; out . mX [
41 ] = 0.0 ; out . mX [ 42 ] = 0.0 ; out . mX [ 43 ] = 0.0 ; out . mX [ 44 ]
= 0.0 ; out . mX [ 45 ] = 1.0 ; out . mX [ 46 ] = 0.0 ; out . mX [ 47 ] = 0.0
; out . mX [ 48 ] = - 1.0 ; ( void ) LC ; ( void ) t133 ; return 0 ; }
