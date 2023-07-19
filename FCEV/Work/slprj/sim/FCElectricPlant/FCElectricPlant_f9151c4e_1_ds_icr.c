#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_icr.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_icr ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; real_T X [ 399 ] ; real_T P_R_idx_49 ; real_T P_R_idx_50 ; real_T
P_R_idx_51 ; real_T P_R_idx_52 ; real_T P_R_idx_53 ; int32_T b ; ( void ) LC
; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t1 -> mX . mX [ b ] ; }
P_R_idx_49 = t1 -> mP_R . mX [ 49 ] ; P_R_idx_50 = t1 -> mP_R . mX [ 50 ] ;
P_R_idx_51 = t1 -> mP_R . mX [ 51 ] ; P_R_idx_52 = t1 -> mP_R . mX [ 52 ] ;
P_R_idx_53 = t1 -> mP_R . mX [ 53 ] ; out = t2 -> mICR ; out . mX [ 0 ] = 0.0
; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out .
mX [ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0 ; out . mX [ 6 ] = X [ 0ULL ] *
9.2592592592592591E-6 - P_R_idx_49 ; out . mX [ 7 ] = X [ 4ULL ] - P_R_idx_52
; out . mX [ 8 ] = X [ 3ULL ] - P_R_idx_53 ; out . mX [ 9 ] = 0.0 ; out . mX
[ 10 ] = X [ 73ULL ] ; out . mX [ 11 ] = X [ 79ULL ] ; out . mX [ 12 ] = X [
83ULL ] - P_R_idx_50 ; out . mX [ 13 ] = X [ 88ULL ] - P_R_idx_51 ; ( void )
LC ; ( void ) t2 ; return 0 ; }
