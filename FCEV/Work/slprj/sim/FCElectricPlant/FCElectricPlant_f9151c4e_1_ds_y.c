#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_y.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t24 , NeDsMethodOutput * t25 ) { PmRealVector out ;
real_T X [ 440 ] ; int32_T b ; ( void ) LC ; for ( b = 0 ; b < 440 ; b ++ ) {
X [ b ] = t24 -> mX . mX [ b ] ; } out = t25 -> mY ; out . mX [ 0 ] = X [
0ULL ] * 9.2592592592592591E-6 ; out . mX [ 1 ] = - X [ 57ULL ] ; out . mX [
2 ] = X [ 59ULL ] ; out . mX [ 3 ] = X [ 62ULL ] ; out . mX [ 4 ] = - X [
61ULL ] ; out . mX [ 5 ] = ( ( ( X [ 3ULL ] * 0.1 + X [ 62ULL ] * - 0.1 ) + X
[ 65ULL ] * 1.0E-9 ) - X [ 67ULL ] ) + X [ 4ULL ] ; out . mX [ 6 ] = - X [
98ULL ] ; out . mX [ 7 ] = X [ 65ULL ] * 1.0E-9 + X [ 4ULL ] ; out . mX [ 8 ]
= ( ( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * - 1.0E-15 ) + X [ 66ULL ] * -
1.0E-6 ) + X [ 5ULL ] ; out . mX [ 9 ] = - X [ 213ULL ] ; out . mX [ 10 ] = -
X [ 281ULL ] ; out . mX [ 11 ] = - ( X [ 35ULL ] - 1.01325 ) * X [ 286ULL ] *
0.0001 * 1111.1111111111111 ; out . mX [ 12 ] = X [ 297ULL ] ; out . mX [ 13
] = X [ 346ULL ] ; out . mX [ 14 ] = X [ 62ULL ] ; out . mX [ 15 ] = ( ( ( (
X [ 3ULL ] * 0.1 - X [ 61ULL ] ) + X [ 62ULL ] * - 0.1 ) + X [ 65ULL ] *
1.0E-9 ) - X [ 67ULL ] ) + X [ 4ULL ] ; out . mX [ 16 ] = X [ 62ULL ] ; out .
mX [ 17 ] = - X [ 438ULL ] ; ( void ) LC ; ( void ) t25 ; return 0 ; }
