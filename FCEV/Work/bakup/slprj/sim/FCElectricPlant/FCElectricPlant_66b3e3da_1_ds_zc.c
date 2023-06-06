#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_zc.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t10 , NeDsMethodOutput * t11 ) { PmRealVector out ;
real_T t3 [ 1 ] ; real_T U_idx_1 ; real_T U_idx_2 ; real_T X_idx_10 ; real_T
X_idx_11 ; real_T X_idx_13 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T
X_idx_17 ; real_T X_idx_21 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_7
; real_T X_idx_9 ; real_T t1 ; real_T t6 ; real_T t7 ; size_t t4 ; size_t t5
; int32_T M_idx_7 ; M_idx_7 = t10 -> mM . mX [ 7 ] ; U_idx_1 = t10 -> mU . mX
[ 1 ] ; U_idx_2 = t10 -> mU . mX [ 2 ] ; X_idx_4 = t10 -> mX . mX [ 4 ] ;
X_idx_5 = t10 -> mX . mX [ 5 ] ; X_idx_7 = t10 -> mX . mX [ 7 ] ; X_idx_9 =
t10 -> mX . mX [ 9 ] ; X_idx_10 = t10 -> mX . mX [ 10 ] ; X_idx_11 = t10 ->
mX . mX [ 11 ] ; X_idx_13 = t10 -> mX . mX [ 13 ] ; X_idx_15 = t10 -> mX . mX
[ 15 ] ; X_idx_16 = t10 -> mX . mX [ 16 ] ; X_idx_17 = t10 -> mX . mX [ 17 ]
; X_idx_21 = t10 -> mX . mX [ 21 ] ; out = t11 -> mZC ; if ( U_idx_2 >= 1.0 )
{ U_idx_2 = 1.0 ; } else { U_idx_2 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2 ; } if (
M_idx_7 == 0 ) { t1 = - X_idx_21 - X_idx_7 ; } else { t1 = 0.0 ; } t3 [ 0ULL
] = pmf_get_inf ( ) ; for ( t4 = 0ULL ; t4 < 42ULL ; t4 ++ ) { t5 = t4 /
42ULL ; t6 = t3 [ t5 > 0ULL ? 0ULL : t5 ] ; t7 = ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 [ t4 ] * 1.0E-5 ; t3 [ t5 > 0ULL ? 0ULL : t5 ] = t6 > t7 ?
t7 : t6 ; } out . mX [ 0 ] = t3 [ 0ULL ] - X_idx_9 ; out . mX [ 1 ] =
4.03416E-7 - X_idx_11 ; out . mX [ 2 ] = X_idx_11 ; out . mX [ 3 ] = X_idx_9
; out . mX [ 4 ] = X_idx_10 - 0.9 ; out . mX [ 5 ] = ( ( ( X_idx_4 * - 1.0E-6
+ X_idx_16 * - 1.0000000000000011 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 ) - (
X_idx_15 + 0.8 ) ; out . mX [ 6 ] = U_idx_2 - 1.0 > 1.0 - U_idx_2 ? 1.0 -
U_idx_2 : U_idx_2 - 1.0 ; out . mX [ 7 ] = ( real_T ) ( X_idx_13 > 0.0 ) ;
out . mX [ 8 ] = X_idx_7 - X_idx_21 ; out . mX [ 9 ] = t1 ; out . mX [ 10 ] =
( ( ( ( X_idx_4 * 1.0E-6 - X_idx_5 ) + X_idx_16 * 1.0E-15 ) + X_idx_17 *
0.001001 ) + U_idx_1 ) - 0.6 ; ( void ) LC ; ( void ) t11 ; return 0 ; }
