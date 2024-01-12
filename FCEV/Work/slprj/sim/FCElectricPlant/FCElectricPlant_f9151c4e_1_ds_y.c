#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_y.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t28 , NeDsMethodOutput * t29 ) { PmRealVector out ;
real_T X [ 394 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 ; real_T t19
; int32_T b ; ( void ) LC ; for ( b = 0 ; b < 394 ; b ++ ) { X [ b ] = t28 ->
mX . mX [ b ] ; } out = t29 -> mY ; if ( X [ 218ULL ] <= 0.0 ) { t19 = 0.0 ;
} else { t19 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if ( X [ 217ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 =
0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 = X [ 217ULL
] >= 1.0 ? 1.0 : X [ 217ULL ] ; } t19 = ( ( ( 1.0 - t19 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 ) *
296.802103844292 + t19 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector4 *
259.836612622973 ; t19 = X [ 29ULL ] / ( t19 == 0.0 ? 1.0E-16 : t19 ) / ( X [
216ULL ] == 0.0 ? 1.0E-16 : X [ 216ULL ] ) ; t19 = - X [ 208ULL ] / ( t19 ==
0.0 ? 1.0E-16 : t19 ) * 10.0 ; out . mX [ 0 ] = X [ 53ULL ] ; out . mX [ 1 ]
= - X [ 52ULL ] ; out . mX [ 2 ] = ( ( ( X [ 1ULL ] * 0.1 + X [ 53ULL ] * -
0.1 ) + X [ 56ULL ] * 1.0E-9 ) - X [ 58ULL ] ) + X [ 2ULL ] ; out . mX [ 3 ]
= - X [ 89ULL ] ; out . mX [ 4 ] = X [ 56ULL ] * 1.0E-9 + X [ 2ULL ] ; out .
mX [ 5 ] = ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * - 1.0E-15 ) + X [ 57ULL
] * - 1.0E-6 ) + X [ 3ULL ] ; out . mX [ 6 ] = 70.0 ; out . mX [ 7 ] = - X [
167ULL ] ; out . mX [ 8 ] = - X [ 239ULL ] ; out . mX [ 9 ] = - ( X [ 29ULL ]
- 1.01325 ) * t19 * 0.0001 * 1111.1111111111111 ; out . mX [ 10 ] = X [
252ULL ] ; out . mX [ 11 ] = X [ 301ULL ] ; out . mX [ 12 ] = X [ 53ULL ] ;
out . mX [ 13 ] = ( ( ( ( X [ 1ULL ] * 0.1 - X [ 52ULL ] ) + X [ 53ULL ] * -
0.1 ) + X [ 56ULL ] * 1.0E-9 ) - X [ 58ULL ] ) + X [ 2ULL ] ; out . mX [ 14 ]
= X [ 53ULL ] ; out . mX [ 15 ] = - X [ 392ULL ] ; ( void ) LC ; ( void ) t29
; return 0 ; }
