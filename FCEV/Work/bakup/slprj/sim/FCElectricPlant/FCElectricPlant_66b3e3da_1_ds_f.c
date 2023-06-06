#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_f.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t60 , NeDsMethodOutput * t61 ) { ETTS0 b_efOut ; ETTS0
d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 f_efOut ; ETTS0 t2 ; ETTS0 t3 ;
ETTS0 t4 ; PmRealVector out ; real_T nonscalar7 [ 7 ] ; real_T nonscalar6 [ 6
] ; real_T c_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T h_efOut [ 1 ] ;
real_T i_efOut [ 1 ] ; real_T t27 [ 1 ] ; real_T U_idx_0 ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T X_idx_0 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T
X_idx_12 ; real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ; real_T
X_idx_16 ; real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ; real_T
X_idx_21 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_6 ; real_T X_idx_7
; real_T X_idx_8 ; real_T X_idx_9 ; real_T t10 ; real_T t42_idx_0 ; real_T
t49 ; real_T t57 ; real_T t7 ; real_T t9 ; size_t t13 [ 1 ] ; size_t t14 [ 1
] ; size_t t22 [ 1 ] ; size_t t40 [ 1 ] ; size_t t44 ; size_t t45 ; size_t
t46 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_3 ; int32_T M_idx_4 ;
int32_T M_idx_5 ; int32_T M_idx_6 ; int32_T M_idx_7 ; int32_T M_idx_8 ;
M_idx_0 = t60 -> mM . mX [ 0 ] ; M_idx_1 = t60 -> mM . mX [ 1 ] ; M_idx_3 =
t60 -> mM . mX [ 3 ] ; M_idx_4 = t60 -> mM . mX [ 4 ] ; M_idx_5 = t60 -> mM .
mX [ 5 ] ; M_idx_6 = t60 -> mM . mX [ 6 ] ; M_idx_7 = t60 -> mM . mX [ 7 ] ;
M_idx_8 = t60 -> mM . mX [ 8 ] ; U_idx_0 = t60 -> mU . mX [ 0 ] ; U_idx_1 =
t60 -> mU . mX [ 1 ] ; U_idx_2 = t60 -> mU . mX [ 2 ] ; X_idx_0 = t60 -> mX .
mX [ 0 ] ; X_idx_4 = t60 -> mX . mX [ 4 ] ; X_idx_5 = t60 -> mX . mX [ 5 ] ;
X_idx_6 = t60 -> mX . mX [ 6 ] ; X_idx_7 = t60 -> mX . mX [ 7 ] ; X_idx_8 =
t60 -> mX . mX [ 8 ] ; X_idx_9 = t60 -> mX . mX [ 9 ] ; X_idx_10 = t60 -> mX
. mX [ 10 ] ; X_idx_11 = t60 -> mX . mX [ 11 ] ; X_idx_12 = t60 -> mX . mX [
12 ] ; X_idx_13 = t60 -> mX . mX [ 13 ] ; X_idx_14 = t60 -> mX . mX [ 14 ] ;
X_idx_15 = t60 -> mX . mX [ 15 ] ; X_idx_16 = t60 -> mX . mX [ 16 ] ;
X_idx_17 = t60 -> mX . mX [ 17 ] ; X_idx_18 = t60 -> mX . mX [ 18 ] ;
X_idx_19 = t60 -> mX . mX [ 19 ] ; X_idx_21 = t60 -> mX . mX [ 21 ] ; out =
t61 -> mF ; nonscalar6 [ 0 ] = 0.0 ; nonscalar6 [ 1 ] = 0.2 ; nonscalar6 [ 2
] = 0.4 ; nonscalar6 [ 3 ] = 0.6 ; nonscalar6 [ 4 ] = 0.8 ; nonscalar6 [ 5 ]
= 1.0 ; nonscalar7 [ 0 ] = 243.1 ; nonscalar7 [ 1 ] = 253.1 ; nonscalar7 [ 2
] = 263.1 ; nonscalar7 [ 3 ] = 273.1 ; nonscalar7 [ 4 ] = 283.1 ; nonscalar7
[ 5 ] = 298.1 ; nonscalar7 [ 6 ] = 313.1 ; t57 = - X_idx_8 - U_idx_0 ; t7 = (
( ( real_T ) ( t57 >= 0.0 ) * t57 * 1000.0 + ( real_T ) ( t57 < 0.0 ) *
X_idx_10 ) - 0.9 ) / 0.099999999999999978 ; if ( ( real_T ) ( t57 >= 0.0 ) *
t57 * 1000.0 + ( real_T ) ( t57 < 0.0 ) * X_idx_10 <= 0.9 ) { t7 = 0.0 ; }
else { t7 = ( real_T ) ( t57 >= 0.0 ) * t57 * 1000.0 + ( real_T ) ( t57 < 0.0
) * X_idx_10 >= 1.0 ? 1.0 : t7 * t7 * 3.0 - t7 * t7 * t7 * 2.0 ; } t49 =
X_idx_16 * 1.0E-9 + X_idx_4 ; t9 = ( ( X_idx_4 * - 1.0E-6 + X_idx_16 * -
1.0000000000000011 ) + X_idx_17 * - 1.0E-6 ) + X_idx_5 ; t10 = ( ( ( X_idx_4
* 1.0E-6 - X_idx_5 ) + X_idx_16 * 1.0E-15 ) + X_idx_17 * 0.001001 ) + U_idx_1
; t27 [ 0ULL ] = X_idx_6 ; t13 [ 0 ] = 23ULL ; t14 [ 0 ] = 1ULL ;
tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t27 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t4 =
efOut ; t27 [ 0ULL ] = X_idx_19 ; t22 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t27 [ 0ULL ] , & t22 [ 0ULL ] , & t14 [ 0ULL ] ) ; t3 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t13 [ 0ULL ] , &
t22 [ 0ULL ] , & t14 [ 0ULL ] ) ; t42_idx_0 = c_efOut [ 0 ] ; if ( U_idx_2 >=
1.0 ) { U_idx_2 = 1.0 ; } else { U_idx_2 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2 ; }
X_idx_5 = ( X_idx_10 - 0.9 ) / 0.099999999999999978 ; if ( X_idx_10 <= 0.9 )
{ X_idx_5 = 0.0 ; } else { X_idx_5 = X_idx_10 >= 1.0 ? 1.0 : X_idx_5 *
X_idx_5 * 3.0 - X_idx_5 * X_idx_5 * X_idx_5 * 2.0 ; } if ( M_idx_1 != 0 ) {
t40 [ 0ULL ] = 0ULL ; for ( t44 = 0ULL ; t44 < 42ULL ; t44 ++ ) { t45 = t44 /
42ULL ; t46 = ( t44 - t44 % 42ULL ) + t40 [ t45 > 0ULL ? 0ULL : t45 ] ; if (
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t44 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t46 > 41ULL ? 41ULL : t46 ] *
1.0E-5 ) { t40 [ t45 > 0ULL ? 0ULL : t45 ] = t44 % 42ULL ; } } t44 = t40 [
0ULL ] ; X_idx_9 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t44 > 41ULL
? 41ULL : t44 ] * 1.0E-5 ; } t27 [ 0ULL ] = X_idx_0 * 5.2410901467505238E-5 ;
t22 [ 0 ] = 6ULL ; tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL
] , & d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , &
nonscalar6 [ 0ULL ] , & t27 [ 0ULL ] , & t22 [ 0ULL ] , & t14 [ 0ULL ] ) ; t2
= d_efOut ; t27 [ 0 ] = 298.15 ; t40 [ 0 ] = 7ULL ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , & nonscalar7 [ 0ULL ] , &
t27 [ 0ULL ] , & t40 [ 0ULL ] , & t14 [ 0ULL ] ) ; t4 = e_efOut ; if (
X_idx_7 != X_idx_7 ) { X_idx_4 = X_idx_7 ; } else if ( X_idx_7 > 0.0 ) {
X_idx_4 = 1.0 ; } else { X_idx_4 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ; } t27 [ 0ULL
] = X_idx_4 * X_idx_6 ; tlu2_linear_nearest_prelookup ( & f_efOut . mField0 [
0ULL ] , & f_efOut . mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t27 [ 0ULL ] , & t13 [ 0ULL ] ,
& t14 [ 0ULL ] ) ; t3 = f_efOut ; X_idx_16 = - ( ( X_idx_12 * 0.1 + 650.0 ) *
X_idx_5 + ( 1.0 - X_idx_5 ) * X_idx_12 * 1000.0 ) ; U_idx_0 = M_idx_3 != 0 ?
X_idx_10 : 0.9 ; X_idx_5 = - ( ( X_idx_14 - X_idx_12 * X_idx_13 * 0.001 ) *
t7 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * 1000.0 + ( 1.0 - t7 ) *
X_idx_10 / 1000.0 ) ; if ( M_idx_4 != 0 ) { t7 = ( ( t9 - X_idx_15 ) -
0.799999992 ) * 1000.0 ; } else { t7 = ( t9 - X_idx_15 ) * 1.0E-5 ; } if (
M_idx_5 != 0 ) { U_idx_1 = t9 - ( X_idx_18 - t49 ) * U_idx_2 * 0.001 ; } else
{ U_idx_1 = ( X_idx_13 - X_idx_15 ) - ( t49 * 0.001 + X_idx_13 ) * U_idx_2 ;
} if ( M_idx_6 != 0 ) { t9 = - X_idx_17 - ( t10 - 0.59999999819999994 ) / 0.3
; } else { t9 = - X_idx_17 - t10 * 1.0E-8 ; } if ( M_idx_7 != 0 ) { t10 =
X_idx_19 - X_idx_21 ; } else if ( M_idx_8 != 0 ) { t10 = X_idx_19 - ( -
X_idx_21 ) ; } else { t10 = X_idx_19 - X_idx_7 ; } X_idx_4 = - ( ( X_idx_6 *
X_idx_19 * 0.001 + t42_idx_0 ) / ( X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13 ) *
1000.0 ) ; tlu2_2d_linear_linear_value ( & g_efOut [ 0ULL ] , & t2 . mField0
[ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t22 [ 0ULL ] , &
t40 [ 0ULL ] , & t14 [ 0ULL ] ) ; t27 [ 0 ] = g_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & h_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t22 [ 0ULL ] , & t40 [ 0ULL
] , & t14 [ 0ULL ] ) ; t42_idx_0 = h_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & i_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; U_idx_0 = i_efOut [ 0 ] ; t57 = - t27 [
0ULL ] ; out . mX [ 0 ] = - 0.0 ; out . mX [ 1 ] = - X_idx_8 * ( real_T ) (
X_idx_8 < 0.0 ) / 19080.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = - 0.0 ;
out . mX [ 4 ] = - 0.0 ; out . mX [ 5 ] = - 0.0 ; out . mX [ 6 ] = - 0.0 ;
out . mX [ 7 ] = - 0.0 ; out . mX [ 8 ] = t57 / 285.83999999999992 ; out . mX
[ 9 ] = - 0.0 - ( X_idx_8 * ( M_idx_0 != 0 ? 4.03416E-7 : X_idx_11 ) +
X_idx_9 ) ; out . mX [ 10 ] = - t42_idx_0 ; out . mX [ 11 ] = X_idx_16 /
1000.0 ; out . mX [ 12 ] = X_idx_5 ; out . mX [ 13 ] = - ( X_idx_12 *
X_idx_12 * 0.00010037240412334386 ) - 0.001 ; out . mX [ 14 ] = - t7 ; out .
mX [ 15 ] = U_idx_1 ; out . mX [ 16 ] = - ( t49 * U_idx_2 ) ; out . mX [ 17 ]
= t9 ; out . mX [ 18 ] = t10 ; out . mX [ 19 ] = X_idx_4 ; out . mX [ 20 ] =
- U_idx_0 ; out . mX [ 21 ] = 0.0 ; ( void ) LC ; ( void ) t61 ; return 0 ; }
