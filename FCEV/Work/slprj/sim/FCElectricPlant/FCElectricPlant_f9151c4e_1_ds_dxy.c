#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_dxy.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_dxy ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t131 , NeDsMethodOutput * t132 ) { PmRealVector
out ; real_T X [ 394 ] ; real_T t0 [ 46 ] ; real_T t4 [ 5 ] ; real_T t2 [ 4 ]
; real_T t5 [ 4 ] ; real_T intermediate_der2348 ; real_T intermediate_der2350
; real_T intermediate_der2351 ; real_T intermediate_der2383 ; real_T
intermediate_der2384 ; real_T t83 ; real_T t84 ; real_T t95 ; size_t t11 ;
int32_T b ; ( void ) LC ; for ( b = 0 ; b < 394 ; b ++ ) { X [ b ] = t131 ->
mX . mX [ b ] ; } out = t132 -> mDXY ; if ( X [ 218ULL ] <= 0.0 ) { t83 = 0.0
; } else { t83 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if ( X [ 217ULL
] <= 0.0 ) { intermediate_der2350 = 0.0 ; } else { intermediate_der2350 = X [
217ULL ] >= 1.0 ? 1.0 : X [ 217ULL ] ; } intermediate_der2383 = ( ( ( 1.0 -
t83 ) - intermediate_der2350 ) * 296.802103844292 + t83 * 461.523 ) +
intermediate_der2350 * 259.836612622973 ; t83 = X [ 29ULL ] / (
intermediate_der2383 == 0.0 ? 1.0E-16 : intermediate_der2383 ) / ( X [ 216ULL
] == 0.0 ? 1.0E-16 : X [ 216ULL ] ) ; intermediate_der2350 = - X [ 208ULL ] /
( t83 == 0.0 ? 1.0E-16 : t83 ) * 10.0 ; if ( X [ 218ULL ] <= 0.0 ) {
intermediate_der2348 = 0.0 ; } else { intermediate_der2348 = ( real_T ) ! ( X
[ 218ULL ] >= 1.0 ) ; } if ( X [ 217ULL ] <= 0.0 ) { intermediate_der2351 =
0.0 ; } else { intermediate_der2351 = ( real_T ) ! ( X [ 217ULL ] >= 1.0 ) ;
} intermediate_der2384 = - intermediate_der2351 * 296.802103844292 +
intermediate_der2351 * 259.836612622973 ; intermediate_der2351 = -
intermediate_der2348 * 296.802103844292 + intermediate_der2348 * 461.523 ;
intermediate_der2348 = 1.0 / ( intermediate_der2383 == 0.0 ? 1.0E-16 :
intermediate_der2383 ) / ( X [ 216ULL ] == 0.0 ? 1.0E-16 : X [ 216ULL ] ) ;
t95 = intermediate_der2383 * intermediate_der2383 ; intermediate_der2384 = -
X [ 29ULL ] / ( t95 == 0.0 ? 1.0E-16 : t95 ) * intermediate_der2384 / ( X [
216ULL ] == 0.0 ? 1.0E-16 : X [ 216ULL ] ) ; intermediate_der2351 = - X [
29ULL ] / ( t95 == 0.0 ? 1.0E-16 : t95 ) * intermediate_der2351 / ( X [
216ULL ] == 0.0 ? 1.0E-16 : X [ 216ULL ] ) ; t95 = X [ 216ULL ] * X [ 216ULL
] ; intermediate_der2383 = - ( X [ 29ULL ] / ( intermediate_der2383 == 0.0 ?
1.0E-16 : intermediate_der2383 ) ) / ( t95 == 0.0 ? 1.0E-16 : t95 ) ; t84 = -
1.0 / ( t83 == 0.0 ? 1.0E-16 : t83 ) * 10.0 ; t95 = t83 * t83 ;
intermediate_der2351 = X [ 208ULL ] / ( t95 == 0.0 ? 1.0E-16 : t95 ) *
intermediate_der2351 * 10.0 ; intermediate_der2383 = X [ 208ULL ] / ( t95 ==
0.0 ? 1.0E-16 : t95 ) * intermediate_der2383 * 10.0 ; intermediate_der2351 =
- ( X [ 29ULL ] - 1.01325 ) * intermediate_der2351 * 0.0001 ; t2 [ 0ULL ] =
1.0 ; t2 [ 1ULL ] = 1.0 ; t2 [ 2ULL ] = - 1.0E-6 ; t2 [ 3ULL ] = 1.0 ; t4 [
0ULL ] = 1.0 ; t4 [ 1ULL ] = - 0.1 ; t4 [ 2ULL ] = 1.0 ; t4 [ 3ULL ] = - 0.1
; t4 [ 4ULL ] = 1.0 ; t5 [ 0ULL ] = 1.0E-9 ; t5 [ 1ULL ] = 1.0E-9 ; t5 [ 2ULL
] = - 1.0E-15 ; t5 [ 3ULL ] = 1.0E-9 ; t0 [ 0ULL ] = 0.1 ; t0 [ 1ULL ] = 0.1
; for ( t11 = 0ULL ; t11 < 4ULL ; t11 ++ ) { t0 [ t11 + 2ULL ] = t2 [ t11 ] ;
} t0 [ 6ULL ] = 1.0 ; t0 [ 7ULL ] = ( - intermediate_der2350 + - ( X [ 29ULL
] - 1.01325 ) * ( X [ 208ULL ] / ( t95 == 0.0 ? 1.0E-16 : t95 ) *
intermediate_der2348 * 10.0 ) ) * 0.0001 * 1111.1111111111111 ; t0 [ 8ULL ] =
0.0 ; t0 [ 9ULL ] = 0.0 ; t0 [ 10ULL ] = 0.0 ; t0 [ 11ULL ] = 0.0 ; t0 [
12ULL ] = 0.0 ; t0 [ 13ULL ] = 0.0 ; t0 [ 14ULL ] = - 1.0 ; t0 [ 15ULL ] = -
1.0 ; for ( t11 = 0ULL ; t11 < 5ULL ; t11 ++ ) { t0 [ t11 + 16ULL ] = t4 [
t11 ] ; } for ( t11 = 0ULL ; t11 < 4ULL ; t11 ++ ) { t0 [ t11 + 21ULL ] = t5
[ t11 ] ; } out . mX [ 0 ] = t0 [ 0 ] ; out . mX [ 1 ] = t0 [ 1 ] ; out . mX
[ 2 ] = t0 [ 2 ] ; out . mX [ 3 ] = t0 [ 3 ] ; out . mX [ 4 ] = t0 [ 4 ] ;
out . mX [ 5 ] = t0 [ 5 ] ; out . mX [ 6 ] = t0 [ 6 ] ; out . mX [ 7 ] = t0 [
7 ] ; out . mX [ 8 ] = t0 [ 8 ] ; out . mX [ 9 ] = t0 [ 9 ] ; out . mX [ 10 ]
= t0 [ 10 ] ; out . mX [ 11 ] = t0 [ 11 ] ; out . mX [ 12 ] = t0 [ 12 ] ; out
. mX [ 13 ] = t0 [ 13 ] ; out . mX [ 14 ] = t0 [ 14 ] ; out . mX [ 15 ] = t0
[ 15 ] ; out . mX [ 16 ] = t0 [ 16 ] ; out . mX [ 17 ] = t0 [ 17 ] ; out . mX
[ 18 ] = t0 [ 18 ] ; out . mX [ 19 ] = t0 [ 19 ] ; out . mX [ 20 ] = t0 [ 20
] ; out . mX [ 21 ] = t0 [ 21 ] ; out . mX [ 22 ] = t0 [ 22 ] ; out . mX [ 23
] = t0 [ 23 ] ; out . mX [ 24 ] = t0 [ 24 ] ; out . mX [ 25 ] = - 1.0E-6 ;
out . mX [ 26 ] = - 1.0 ; out . mX [ 27 ] = - 1.0 ; out . mX [ 28 ] = - 1.0 ;
out . mX [ 29 ] = - 1.0 ; out . mX [ 30 ] = - ( X [ 29ULL ] - 1.01325 ) * t84
* 0.0001 * 1111.1111111111111 ; out . mX [ 31 ] = - ( X [ 29ULL ] - 1.01325 )
* intermediate_der2383 * 0.0001 * 1111.1111111111111 ; out . mX [ 32 ] = - (
X [ 29ULL ] - 1.01325 ) * ( X [ 208ULL ] / ( t95 == 0.0 ? 1.0E-16 : t95 ) *
intermediate_der2384 * 10.0 ) * 0.0001 * 1111.1111111111111 ; out . mX [ 33 ]
= intermediate_der2351 * 1111.1111111111111 ; out . mX [ 34 ] = - 1.0 ; out .
mX [ 35 ] = 0.0 ; out . mX [ 36 ] = 0.0 ; out . mX [ 37 ] = 1.0 ; out . mX [
38 ] = 0.0 ; out . mX [ 39 ] = 0.0 ; out . mX [ 40 ] = 0.0 ; out . mX [ 41 ]
= 0.0 ; out . mX [ 42 ] = 1.0 ; out . mX [ 43 ] = 0.0 ; out . mX [ 44 ] = 0.0
; out . mX [ 45 ] = - 1.0 ; ( void ) LC ; ( void ) t132 ; return 0 ; }
