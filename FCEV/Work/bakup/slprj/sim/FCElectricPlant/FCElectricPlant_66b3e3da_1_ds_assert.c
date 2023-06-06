#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_assert.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_assert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmIntVector out ;
real_T U_idx_2 ; real_T X_idx_0 ; real_T X_idx_10 ; real_T X_idx_13 ; real_T
intrm_sf_mf_8 ; int32_T M_idx_10 ; int32_T M_idx_2 ; int32_T M_idx_9 ;
boolean_T intrm_sf_mf_10 ; ( void ) LC ; M_idx_2 = t1 -> mM . mX [ 2 ] ;
M_idx_9 = t1 -> mM . mX [ 9 ] ; M_idx_10 = t1 -> mM . mX [ 10 ] ; U_idx_2 =
t1 -> mU . mX [ 2 ] ; X_idx_0 = t1 -> mX . mX [ 0 ] ; X_idx_10 = t1 -> mX .
mX [ 10 ] ; X_idx_13 = t1 -> mX . mX [ 13 ] ; out = t2 -> mASSERT ; X_idx_0
*= 5.2410901467505238E-5 ; if ( U_idx_2 >= 1.0 ) { intrm_sf_mf_8 = 1.0 ; }
else { intrm_sf_mf_8 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2 ; } intrm_sf_mf_10 = (
fabs ( intrm_sf_mf_8 - U_idx_2 ) > 0.001 ) ; out . mX [ 0 ] = ( int32_T ) (
X_idx_0 >= 0.0 ) ; out . mX [ 1 ] = ( int32_T ) ( X_idx_0 <= 1.0 ) ; out . mX
[ 2 ] = ( int32_T ) ( X_idx_10 >= 100.8 ) ; out . mX [ 3 ] = ( int32_T ) (
X_idx_10 <= 607.824 ) ; out . mX [ 4 ] = ( int32_T ) ( M_idx_9 != 0 ) ; out .
mX [ 5 ] = ( int32_T ) ( M_idx_10 != 0 ) ; out . mX [ 6 ] = ( int32_T ) !
intrm_sf_mf_10 ; out . mX [ 7 ] = ( int32_T ) ( M_idx_2 != 0 ) ; out . mX [ 8
] = 1 ; out . mX [ 9 ] = 1 ; out . mX [ 10 ] = 1 ; out . mX [ 11 ] = 1 ; out
. mX [ 12 ] = 1 ; out . mX [ 13 ] = 1 ; out . mX [ 14 ] = 1 ; out . mX [ 15 ]
= 1 ; out . mX [ 16 ] = 1 ; out . mX [ 17 ] = 1 ; out . mX [ 18 ] = 1 ; out .
mX [ 19 ] = 1 ; out . mX [ 20 ] = 1 ; out . mX [ 21 ] = 1 ; out . mX [ 22 ] =
1 ; out . mX [ 23 ] = 1 ; out . mX [ 24 ] = 1 ; out . mX [ 25 ] = 1 ; out .
mX [ 26 ] = 1 ; out . mX [ 27 ] = 1 ; out . mX [ 28 ] = 1 ; out . mX [ 29 ] =
1 ; out . mX [ 30 ] = 1 ; out . mX [ 31 ] = 1 ; out . mX [ 32 ] = 1 ; out .
mX [ 33 ] = 1 ; out . mX [ 34 ] = 1 ; out . mX [ 35 ] = 1 ; out . mX [ 36 ] =
1 ; out . mX [ 37 ] = 1 ; out . mX [ 38 ] = ( int32_T ) ( ( X_idx_10 > 0.9 ?
X_idx_10 : 0.9 ) != 0.0 ) ; out . mX [ 39 ] = 1 ; out . mX [ 40 ] = 1 ; out .
mX [ 41 ] = 1 ; out . mX [ 42 ] = ( int32_T ) ( X_idx_13 != 0.0 ) ; ( void )
LC ; ( void ) t2 ; return 0 ; }
