#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_y.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out ;
real_T X_idx_0 ; real_T X_idx_10 ; real_T X_idx_12 ; real_T X_idx_13 ; real_T
X_idx_16 ; real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_20 ; real_T
X_idx_3 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_8 ; ( void ) LC ;
X_idx_0 = t4 -> mX . mX [ 0 ] ; X_idx_3 = t4 -> mX . mX [ 3 ] ; X_idx_4 = t4
-> mX . mX [ 4 ] ; X_idx_5 = t4 -> mX . mX [ 5 ] ; X_idx_8 = t4 -> mX . mX [
8 ] ; X_idx_10 = t4 -> mX . mX [ 10 ] ; X_idx_12 = t4 -> mX . mX [ 12 ] ;
X_idx_13 = t4 -> mX . mX [ 13 ] ; X_idx_16 = t4 -> mX . mX [ 16 ] ; X_idx_17
= t4 -> mX . mX [ 17 ] ; X_idx_18 = t4 -> mX . mX [ 18 ] ; X_idx_20 = t4 ->
mX . mX [ 20 ] ; out = t5 -> mY ; out . mX [ 0 ] = X_idx_0 *
5.2410901467505238E-5 ; out . mX [ 1 ] = - X_idx_8 ; out . mX [ 2 ] =
X_idx_10 ; out . mX [ 3 ] = X_idx_13 ; out . mX [ 4 ] = - X_idx_12 ; out . mX
[ 5 ] = ( ( ( X_idx_3 * 0.1 + X_idx_13 * - 0.1 ) + X_idx_16 * 1.0E-9 ) -
X_idx_18 ) + X_idx_4 ; out . mX [ 6 ] = X_idx_16 * 1.0E-9 + X_idx_4 ; out .
mX [ 7 ] = ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * - 1.0E-15 ) + X_idx_17 * -
1.0E-6 ) + X_idx_5 ; out . mX [ 8 ] = X_idx_13 ; out . mX [ 9 ] = ( ( ( (
X_idx_3 * 0.1 - X_idx_12 ) + X_idx_13 * - 0.1 ) + X_idx_16 * 1.0E-9 ) -
X_idx_18 ) + X_idx_4 ; out . mX [ 10 ] = X_idx_13 ; out . mX [ 11 ] = -
X_idx_20 ; ( void ) LC ; ( void ) t5 ; return 0 ; }
