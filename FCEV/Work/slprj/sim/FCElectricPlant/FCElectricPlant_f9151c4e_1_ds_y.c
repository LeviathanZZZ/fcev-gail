#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_y.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t28 , NeDsMethodOutput * t29 ) { PmRealVector out ;
real_T X [ 399 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 ; real_T
U_idx_0 ; int32_T b ; ( void ) LC ; U_idx_0 = t28 -> mU . mX [ 0 ] ; for ( b
= 0 ; b < 399 ; b ++ ) { X [ b ] = t28 -> mX . mX [ b ] ; } out = t29 -> mY ;
if ( X [ 223ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 = X [
223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 = X [
222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 *
259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 = X [ 31ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 ) /
( X [ 221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 = - X [
213ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 ) * 10.0 ;
out . mX [ 0 ] = X [ 0ULL ] * 9.2592592592592591E-6 ; out . mX [ 1 ] = - X [
53ULL ] ; out . mX [ 2 ] = X [ 55ULL ] ; out . mX [ 3 ] = X [ 58ULL ] ; out .
mX [ 4 ] = - X [ 57ULL ] - U_idx_0 ; out . mX [ 5 ] = ( ( ( X [ 3ULL ] * 0.1
+ X [ 58ULL ] * - 0.1 ) + X [ 61ULL ] * 1.0E-9 ) - X [ 63ULL ] ) + X [ 4ULL ]
; out . mX [ 6 ] = - X [ 94ULL ] ; out . mX [ 7 ] = X [ 61ULL ] * 1.0E-9 + X
[ 4ULL ] ; out . mX [ 8 ] = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0E-15 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ; out . mX [ 9 ] = 70.0 ;
out . mX [ 10 ] = - X [ 172ULL ] ; out . mX [ 11 ] = - X [ 244ULL ] ; out .
mX [ 12 ] = - ( X [ 31ULL ] - 1.01325 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Measurement_Selector4 * 0.0001 *
1111.1111111111111 ; out . mX [ 13 ] = X [ 257ULL ] ; out . mX [ 14 ] = X [
306ULL ] ; out . mX [ 15 ] = X [ 58ULL ] ; out . mX [ 16 ] = ( ( ( ( ( X [
3ULL ] * 0.1 - X [ 57ULL ] ) + X [ 58ULL ] * - 0.1 ) + X [ 61ULL ] * 1.0E-9 )
- X [ 63ULL ] ) - U_idx_0 ) + X [ 4ULL ] ; out . mX [ 17 ] = X [ 58ULL ] ;
out . mX [ 18 ] = - X [ 397ULL ] ; ( void ) LC ; ( void ) t29 ; return 0 ; }
