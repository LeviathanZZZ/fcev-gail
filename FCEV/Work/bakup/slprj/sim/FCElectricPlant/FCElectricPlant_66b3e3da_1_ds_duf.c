#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_duf.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t13 , NeDsMethodOutput * t14 ) { PmRealVector
out ; real_T U_idx_0 ; real_T U_idx_2 ; real_T X_idx_10 ; real_T X_idx_12 ;
real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_16 ; real_T X_idx_18 ;
real_T X_idx_4 ; real_T X_idx_8 ; real_T intermediate_der59 ; real_T t1 ;
int32_T M_idx_3 ; int32_T M_idx_5 ; int32_T M_idx_6 ; ( void ) LC ; M_idx_3 =
t13 -> mM . mX [ 3 ] ; M_idx_5 = t13 -> mM . mX [ 5 ] ; M_idx_6 = t13 -> mM .
mX [ 6 ] ; U_idx_0 = t13 -> mU . mX [ 0 ] ; U_idx_2 = t13 -> mU . mX [ 2 ] ;
X_idx_4 = t13 -> mX . mX [ 4 ] ; X_idx_8 = t13 -> mX . mX [ 8 ] ; X_idx_10 =
t13 -> mX . mX [ 10 ] ; X_idx_12 = t13 -> mX . mX [ 12 ] ; X_idx_13 = t13 ->
mX . mX [ 13 ] ; X_idx_14 = t13 -> mX . mX [ 14 ] ; X_idx_16 = t13 -> mX . mX
[ 16 ] ; X_idx_18 = t13 -> mX . mX [ 18 ] ; out = t14 -> mDUF ;
intermediate_der59 = - X_idx_8 - U_idx_0 ; t1 = ( ( ( real_T ) (
intermediate_der59 >= 0.0 ) * intermediate_der59 * 1000.0 + ( real_T ) (
intermediate_der59 < 0.0 ) * X_idx_10 ) - 0.9 ) / 0.099999999999999978 ;
X_idx_4 += X_idx_16 * 1.0E-9 ; X_idx_8 = - ( real_T ) ( intermediate_der59 >=
0.0 ) * 1000.0 / 0.099999999999999978 ; if ( ( real_T ) ( intermediate_der59
>= 0.0 ) * intermediate_der59 * 1000.0 + ( real_T ) ( intermediate_der59 <
0.0 ) * X_idx_10 <= 0.9 ) { t1 = 0.0 ; } else { t1 = ( real_T ) (
intermediate_der59 >= 0.0 ) * intermediate_der59 * 1000.0 + ( real_T ) (
intermediate_der59 < 0.0 ) * X_idx_10 >= 1.0 ? 0.0 : X_idx_8 * t1 * 6.0 - t1
* t1 * X_idx_8 * 6.0 ; } if ( U_idx_2 >= 1.0 ) { intermediate_der59 = 0.0 ; }
else { intermediate_der59 = ( real_T ) ! ( U_idx_2 <= 0.0 ) ; } U_idx_0 =
M_idx_3 != 0 ? X_idx_10 : 0.9 ; X_idx_8 = - ( ( X_idx_14 - X_idx_12 *
X_idx_13 * 0.001 ) * t1 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * 1000.0 + -
t1 * X_idx_10 / 1000.0 ) ; if ( M_idx_6 != 0 ) { t1 = - 3.3333333333333335 ;
} else { t1 = - 1.0E-8 ; } if ( M_idx_5 != 0 ) { U_idx_0 = - ( ( X_idx_18 -
X_idx_4 ) * intermediate_der59 * 0.001 ) ; } else { U_idx_0 = - ( ( X_idx_4 *
0.001 + X_idx_13 ) * intermediate_der59 ) ; } out . mX [ 0 ] = X_idx_8 ; out
. mX [ 1 ] = t1 ; out . mX [ 2 ] = U_idx_0 ; out . mX [ 3 ] = - ( X_idx_4 *
intermediate_der59 ) ; ( void ) LC ; ( void ) t14 ; return 0 ; }
