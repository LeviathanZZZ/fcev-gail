#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_a.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_a ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t36 , NeDsMethodOutput * t37 ) { PmRealVector out ;
real_T t0 [ 32 ] ; real_T t2 [ 4 ] ; real_T t7 [ 4 ] ; size_t t16 ; ( void )
t36 ; ( void ) LC ; out = t37 -> mA ; t2 [ 0ULL ] = - 0.0 ; t2 [ 1ULL ] = 1.0
; t2 [ 2ULL ] = 1.0 ; t2 [ 3ULL ] = 1.0 ; t7 [ 0ULL ] = - 1.0 ; t7 [ 1ULL ] =
1.0E-9 ; t7 [ 2ULL ] = 1.0E-9 ; t7 [ 3ULL ] = 1.0E-9 ; t0 [ 0ULL ] = 0.1 ; t0
[ 1ULL ] = 0.1 ; for ( t16 = 0ULL ; t16 < 4ULL ; t16 ++ ) { t0 [ t16 + 2ULL ]
= t2 [ t16 ] ; } t0 [ 6ULL ] = - 0.0 ; t0 [ 7ULL ] = - 0.0 ; t0 [ 8ULL ] = -
1.0 ; t0 [ 9ULL ] = - 1.0 ; t0 [ 10ULL ] = 1.0 ; t0 [ 11ULL ] = - 1.0 ; t0 [
12ULL ] = 0.003498460677301988 ; t0 [ 13ULL ] = 1.0 ; t0 [ 14ULL ] = 1.0 ; t0
[ 15ULL ] = 0.0 ; t0 [ 16ULL ] = - 1.0 ; t0 [ 17ULL ] = - 0.1 ; t0 [ 18ULL ]
= 0.001 ; t0 [ 19ULL ] = - 0.1 ; t0 [ 20ULL ] = 1.0 ; for ( t16 = 0ULL ; t16
< 4ULL ; t16 ++ ) { t0 [ t16 + 21ULL ] = t7 [ t16 ] ; } out . mX [ 0 ] = t0 [
0 ] ; out . mX [ 1 ] = t0 [ 1 ] ; out . mX [ 2 ] = t0 [ 2 ] ; out . mX [ 3 ]
= t0 [ 3 ] ; out . mX [ 4 ] = t0 [ 4 ] ; out . mX [ 5 ] = t0 [ 5 ] ; out . mX
[ 6 ] = t0 [ 6 ] ; out . mX [ 7 ] = t0 [ 7 ] ; out . mX [ 8 ] = t0 [ 8 ] ;
out . mX [ 9 ] = t0 [ 9 ] ; out . mX [ 10 ] = t0 [ 10 ] ; out . mX [ 11 ] =
t0 [ 11 ] ; out . mX [ 12 ] = t0 [ 12 ] ; out . mX [ 13 ] = t0 [ 13 ] ; out .
mX [ 14 ] = t0 [ 14 ] ; out . mX [ 15 ] = t0 [ 15 ] ; out . mX [ 16 ] = t0 [
16 ] ; out . mX [ 17 ] = t0 [ 17 ] ; out . mX [ 18 ] = t0 [ 18 ] ; out . mX [
19 ] = t0 [ 19 ] ; out . mX [ 20 ] = t0 [ 20 ] ; out . mX [ 21 ] = t0 [ 21 ]
; out . mX [ 22 ] = t0 [ 22 ] ; out . mX [ 23 ] = t0 [ 23 ] ; out . mX [ 24 ]
= t0 [ 24 ] ; out . mX [ 25 ] = 1.0 ; out . mX [ 26 ] = 1.0 ; out . mX [ 27 ]
= - 1.0 ; out . mX [ 28 ] = 1.0 ; out . mX [ 29 ] = - 0.0 ; out . mX [ 30 ] =
1.0 ; out . mX [ 31 ] = 1.0 ; ( void ) LC ; ( void ) t37 ; return 0 ; }
