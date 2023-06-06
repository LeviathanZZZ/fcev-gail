#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxy.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_dxy ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t23 , NeDsMethodOutput * t24 ) { PmRealVector
out ; real_T t0 [ 25 ] ; real_T t4 [ 5 ] ; real_T t2 [ 4 ] ; real_T t5 [ 4 ]
; size_t t11 ; ( void ) t23 ; ( void ) LC ; out = t24 -> mDXY ; t2 [ 0ULL ] =
1.0 ; t2 [ 1ULL ] = 1.0 ; t2 [ 2ULL ] = - 1.0E-6 ; t2 [ 3ULL ] = 1.0 ; t4 [
0ULL ] = 1.0 ; t4 [ 1ULL ] = - 0.1 ; t4 [ 2ULL ] = 1.0 ; t4 [ 3ULL ] = - 0.1
; t4 [ 4ULL ] = 1.0 ; t5 [ 0ULL ] = 1.0E-9 ; t5 [ 1ULL ] = 1.0E-9 ; t5 [ 2ULL
] = - 1.0E-15 ; t5 [ 3ULL ] = 1.0E-9 ; t0 [ 0ULL ] = 5.2410901467505238E-5 ;
t0 [ 1ULL ] = 0.1 ; t0 [ 2ULL ] = 0.1 ; for ( t11 = 0ULL ; t11 < 4ULL ; t11
++ ) { t0 [ t11 + 3ULL ] = t2 [ t11 ] ; } t0 [ 7ULL ] = 1.0 ; t0 [ 8ULL ] = -
1.0 ; t0 [ 9ULL ] = 1.0 ; t0 [ 10ULL ] = - 1.0 ; t0 [ 11ULL ] = - 1.0 ; for (
t11 = 0ULL ; t11 < 5ULL ; t11 ++ ) { t0 [ t11 + 12ULL ] = t4 [ t11 ] ; } for
( t11 = 0ULL ; t11 < 4ULL ; t11 ++ ) { t0 [ t11 + 17ULL ] = t5 [ t11 ] ; }
out . mX [ 0 ] = t0 [ 0 ] ; out . mX [ 1 ] = t0 [ 1 ] ; out . mX [ 2 ] = t0 [
2 ] ; out . mX [ 3 ] = t0 [ 3 ] ; out . mX [ 4 ] = t0 [ 4 ] ; out . mX [ 5 ]
= t0 [ 5 ] ; out . mX [ 6 ] = t0 [ 6 ] ; out . mX [ 7 ] = t0 [ 7 ] ; out . mX
[ 8 ] = t0 [ 8 ] ; out . mX [ 9 ] = t0 [ 9 ] ; out . mX [ 10 ] = t0 [ 10 ] ;
out . mX [ 11 ] = t0 [ 11 ] ; out . mX [ 12 ] = t0 [ 12 ] ; out . mX [ 13 ] =
t0 [ 13 ] ; out . mX [ 14 ] = t0 [ 14 ] ; out . mX [ 15 ] = t0 [ 15 ] ; out .
mX [ 16 ] = t0 [ 16 ] ; out . mX [ 17 ] = t0 [ 17 ] ; out . mX [ 18 ] = t0 [
18 ] ; out . mX [ 19 ] = t0 [ 19 ] ; out . mX [ 20 ] = t0 [ 20 ] ; out . mX [
21 ] = - 1.0E-6 ; out . mX [ 22 ] = - 1.0 ; out . mX [ 23 ] = - 1.0 ; out .
mX [ 24 ] = - 1.0 ; ( void ) LC ; ( void ) t24 ; return 0 ; }
