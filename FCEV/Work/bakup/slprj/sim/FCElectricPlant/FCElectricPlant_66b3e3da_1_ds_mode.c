#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_mode.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_mode ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t6 , NeDsMethodOutput * t7 ) { PmIntVector out ;
real_T t1 [ 1 ] ; real_T U_idx_1 ; real_T U_idx_2 ; real_T X_idx_10 ; real_T
X_idx_11 ; real_T X_idx_13 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T
X_idx_17 ; real_T X_idx_21 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_7
; real_T X_idx_9 ; real_T t4 ; real_T t5 ; size_t t2 ; size_t t3 ; U_idx_1 =
t6 -> mU . mX [ 1 ] ; U_idx_2 = t6 -> mU . mX [ 2 ] ; X_idx_4 = t6 -> mX . mX
[ 4 ] ; X_idx_5 = t6 -> mX . mX [ 5 ] ; X_idx_7 = t6 -> mX . mX [ 7 ] ;
X_idx_9 = t6 -> mX . mX [ 9 ] ; X_idx_10 = t6 -> mX . mX [ 10 ] ; X_idx_11 =
t6 -> mX . mX [ 11 ] ; X_idx_13 = t6 -> mX . mX [ 13 ] ; X_idx_15 = t6 -> mX
. mX [ 15 ] ; X_idx_16 = t6 -> mX . mX [ 16 ] ; X_idx_17 = t6 -> mX . mX [ 17
] ; X_idx_21 = t6 -> mX . mX [ 21 ] ; out = t7 -> mMODE ; if ( U_idx_2 >= 1.0
) { U_idx_2 = 1.0 ; } else { U_idx_2 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2 ; } t1
[ 0ULL ] = pmf_get_inf ( ) ; for ( t2 = 0ULL ; t2 < 42ULL ; t2 ++ ) { t3 = t2
/ 42ULL ; t4 = t1 [ t3 > 0ULL ? 0ULL : t3 ] ; t5 = ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 [ t2 ] * 1.0E-5 ; t1 [ t3 > 0ULL ? 0ULL : t3 ] = t4 > t5 ?
t5 : t4 ; } out . mX [ 0 ] = ( int32_T ) ( X_idx_11 <= 4.03416E-7 ) ; out .
mX [ 1 ] = ( int32_T ) ( t1 [ 0ULL ] >= X_idx_9 ) ; out . mX [ 2 ] = (
int32_T ) ( X_idx_13 > 0.0 ) ; out . mX [ 3 ] = ( int32_T ) ( X_idx_10 >= 0.9
) ; out . mX [ 4 ] = ( int32_T ) ( ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * -
1.0000000000000011 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 > X_idx_15 + 0.8 ) ;
out . mX [ 5 ] = ( int32_T ) ( U_idx_2 == 1.0 ) ; out . mX [ 6 ] = ( int32_T
) ( ( ( ( X_idx_4 * 1.0E-6 - X_idx_5 ) + X_idx_16 * 1.0E-15 ) + X_idx_17 *
0.001001 ) + U_idx_1 > 0.6 ) ; out . mX [ 7 ] = ( int32_T ) ( X_idx_7 >
X_idx_21 ) ; out . mX [ 8 ] = ( int32_T ) ( X_idx_7 < - X_idx_21 ) ; out . mX
[ 9 ] = ( int32_T ) ( X_idx_11 > 0.0 ) ; out . mX [ 10 ] = ( int32_T ) (
X_idx_9 >= 0.0 ) ; ( void ) LC ; ( void ) t7 ; return 0 ; }
