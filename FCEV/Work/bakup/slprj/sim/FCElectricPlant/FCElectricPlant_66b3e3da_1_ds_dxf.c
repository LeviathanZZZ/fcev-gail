#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxf.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_dxf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t146 , NeDsMethodOutput * t147 ) { ETTS0 b_efOut
; ETTS0 efOut ; ETTS0 f_efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ; ETTS0 t2 ;
ETTS0 t3 ; ETTS0 t4 ; PmRealVector out ; real_T t61 [ 40 ] ; real_T
nonscalar7 [ 7 ] ; real_T nonscalar6 [ 6 ] ; real_T t68 [ 4 ] ; real_T t78 [
4 ] ; real_T c_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T e_efOut [ 1 ] ;
real_T i_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T
t70 [ 1 ] ; real_T U_idx_0 ; real_T U_idx_2 ; real_T X_idx_0 ; real_T
X_idx_10 ; real_T X_idx_11 ; real_T X_idx_12 ; real_T X_idx_13 ; real_T
X_idx_14 ; real_T X_idx_19 ; real_T X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8
; real_T intermediate_der61 ; real_T intermediate_der64 ; real_T
intrm_sf_mf_8 ; real_T t107 ; real_T t11 ; real_T t110 ; real_T t112 ; real_T
t118 ; real_T t12 ; real_T t126 ; real_T t127 ; real_T t128 ; real_T t129 ;
real_T t131 ; real_T t144 ; real_T t145 ; real_T t16 ; real_T t20 ; real_T
t21 ; real_T t66_idx_0 ; real_T t8 ; real_T t9 ; real_T t98 ; size_t t30 [ 1
] ; size_t t31 [ 1 ] ; size_t t45 [ 1 ] ; size_t t48 [ 1 ] ; size_t t91 ;
int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_3 ; int32_T M_idx_4 ;
int32_T M_idx_5 ; int32_T M_idx_6 ; int32_T M_idx_7 ; int32_T M_idx_8 ;
M_idx_0 = t146 -> mM . mX [ 0 ] ; M_idx_1 = t146 -> mM . mX [ 1 ] ; M_idx_3 =
t146 -> mM . mX [ 3 ] ; M_idx_4 = t146 -> mM . mX [ 4 ] ; M_idx_5 = t146 ->
mM . mX [ 5 ] ; M_idx_6 = t146 -> mM . mX [ 6 ] ; M_idx_7 = t146 -> mM . mX [
7 ] ; M_idx_8 = t146 -> mM . mX [ 8 ] ; U_idx_0 = t146 -> mU . mX [ 0 ] ;
U_idx_2 = t146 -> mU . mX [ 2 ] ; X_idx_0 = t146 -> mX . mX [ 0 ] ; X_idx_6 =
t146 -> mX . mX [ 6 ] ; X_idx_7 = t146 -> mX . mX [ 7 ] ; X_idx_8 = t146 ->
mX . mX [ 8 ] ; X_idx_10 = t146 -> mX . mX [ 10 ] ; X_idx_11 = t146 -> mX .
mX [ 11 ] ; X_idx_12 = t146 -> mX . mX [ 12 ] ; X_idx_13 = t146 -> mX . mX [
13 ] ; X_idx_14 = t146 -> mX . mX [ 14 ] ; X_idx_19 = t146 -> mX . mX [ 19 ]
; out = t147 -> mDXF ; nonscalar6 [ 0 ] = 0.0 ; nonscalar6 [ 1 ] = 0.2 ;
nonscalar6 [ 2 ] = 0.4 ; nonscalar6 [ 3 ] = 0.6 ; nonscalar6 [ 4 ] = 0.8 ;
nonscalar6 [ 5 ] = 1.0 ; nonscalar7 [ 0 ] = 243.1 ; nonscalar7 [ 1 ] = 253.1
; nonscalar7 [ 2 ] = 263.1 ; nonscalar7 [ 3 ] = 273.1 ; nonscalar7 [ 4 ] =
283.1 ; nonscalar7 [ 5 ] = 298.1 ; nonscalar7 [ 6 ] = 313.1 ; t118 = -
X_idx_8 - U_idx_0 ; t110 = ( ( ( real_T ) ( t118 >= 0.0 ) * t118 * 1000.0 + (
real_T ) ( t118 < 0.0 ) * X_idx_10 ) - 0.9 ) / 0.099999999999999978 ; if ( (
real_T ) ( t118 >= 0.0 ) * t118 * 1000.0 + ( real_T ) ( t118 < 0.0 ) *
X_idx_10 <= 0.9 ) { t21 = 0.0 ; } else { t21 = ( real_T ) ( t118 >= 0.0 ) *
t118 * 1000.0 + ( real_T ) ( t118 < 0.0 ) * X_idx_10 >= 1.0 ? 1.0 : t110 *
t110 * 3.0 - t110 * t110 * t110 * 2.0 ; } t70 [ 0ULL ] = X_idx_6 ; t30 [ 0 ]
= 23ULL ; t31 [ 0 ] = 1ULL ; tlu2_linear_nearest_prelookup ( & efOut .
mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t30 [ 0ULL
] , & t31 [ 0ULL ] ) ; t4 = efOut ; t70 [ 0ULL ] = X_idx_19 ; t45 [ 0 ] =
29ULL ; tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , &
b_efOut . mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t70 [ 0ULL ] , & t45 [ 0ULL ] ,
& t31 [ 0ULL ] ) ; t3 = b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [
0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [
0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t30 [ 0ULL ] , & t45 [ 0ULL ] , & t31 [ 0ULL ] ) ; t66_idx_0 =
c_efOut [ 0 ] ; if ( U_idx_2 >= 1.0 ) { intrm_sf_mf_8 = 1.0 ; } else {
intrm_sf_mf_8 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2 ; } t20 = X_idx_6 * X_idx_19 *
0.001 + t66_idx_0 ; intermediate_der64 = ( X_idx_10 - 0.9 ) /
0.099999999999999978 ; if ( X_idx_10 <= 0.9 ) { t16 = 0.0 ; } else { t16 =
X_idx_10 >= 1.0 ? 1.0 : intermediate_der64 * intermediate_der64 * 3.0 -
intermediate_der64 * intermediate_der64 * intermediate_der64 * 2.0 ; } t112 =
( real_T ) ( t118 < 0.0 ) / 0.099999999999999978 ; U_idx_0 = - ( real_T ) (
t118 >= 0.0 ) * 1000.0 / 0.099999999999999978 ; t126 = t112 * t110 * 6.0 -
t110 * t110 * t112 * 6.0 ; if ( ( real_T ) ( t118 >= 0.0 ) * t118 * 1000.0 +
( real_T ) ( t118 < 0.0 ) * X_idx_10 <= 0.9 ) { t110 = 0.0 ; } else { t110 =
( real_T ) ( t118 >= 0.0 ) * t118 * 1000.0 + ( real_T ) ( t118 < 0.0 ) *
X_idx_10 >= 1.0 ? 0.0 : U_idx_0 * t110 * 6.0 - t110 * t110 * U_idx_0 * 6.0 ;
} if ( ( real_T ) ( t118 >= 0.0 ) * t118 * 1000.0 + ( real_T ) ( t118 < 0.0 )
* X_idx_10 <= 0.9 ) { t112 = 0.0 ; } else { t112 = ( real_T ) ( t118 >= 0.0 )
* t118 * 1000.0 + ( real_T ) ( t118 < 0.0 ) * X_idx_10 >= 1.0 ? 0.0 : t126 ;
} tlu2_2d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t4 . mField1 [ 0ULL ]
, & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t30 [ 0ULL ] , & t45 [
0ULL ] , & t31 [ 0ULL ] ) ; t66_idx_0 = d_efOut [ 0 ] ; intermediate_der61 =
t66_idx_0 ; tlu2_2d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t4 .
mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t30 [
0ULL ] , & t45 [ 0ULL ] , & t31 [ 0ULL ] ) ; t66_idx_0 = e_efOut [ 0 ] ; if (
X_idx_10 <= 0.9 ) { intermediate_der64 = 0.0 ; } else { intermediate_der64 =
X_idx_10 >= 1.0 ? 0.0 : 10.000000000000002 * intermediate_der64 * 6.0 -
intermediate_der64 * intermediate_der64 * 10.000000000000002 * 6.0 ; } t70 [
0ULL ] = X_idx_0 * 5.2410901467505238E-5 ; t45 [ 0 ] = 6ULL ;
tlu2_linear_linear_prelookup ( & f_efOut . mField0 [ 0ULL ] , & f_efOut .
mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL ] , & nonscalar6 [ 0ULL ] , &
t70 [ 0ULL ] , & t45 [ 0ULL ] , & t31 [ 0ULL ] ) ; t2 = f_efOut ; t70 [ 0 ] =
298.15 ; t48 [ 0 ] = 7ULL ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL
] , & nonscalar7 [ 0ULL ] , & t70 [ 0ULL ] , & t48 [ 0ULL ] , & t31 [ 0ULL ]
) ; t4 = g_efOut ; if ( X_idx_7 != X_idx_7 ) { t144 = X_idx_7 ; } else if (
X_idx_7 > 0.0 ) { t144 = 1.0 ; } else { t144 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ;
} t70 [ 0ULL ] = t144 * X_idx_6 ; tlu2_linear_nearest_prelookup ( & h_efOut .
mField0 [ 0ULL ] , & h_efOut . mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t70 [ 0ULL ] , & t30 [
0ULL ] , & t31 [ 0ULL ] ) ; t3 = h_efOut ; if ( M_idx_4 != 0 ) { t98 = -
0.001 ; } else { t98 = - 1.0000000000000001E-11 ; } if ( M_idx_5 != 0 ) {
t144 = - 1.0E-6 - - intrm_sf_mf_8 * 0.001 ; } else { t144 = - ( intrm_sf_mf_8
* 0.001 ) ; } if ( M_idx_6 != 0 ) { t107 = - 3.3333333333333333E-6 ; } else {
t107 = - 1.0E-14 ; } if ( M_idx_4 != 0 ) { t8 = 1000.0 ; } else { t8 = 1.0E-5
; } if ( M_idx_6 != 0 ) { t9 = 3.3333333333333335 ; } else { t9 = 1.0E-8 ; }
if ( M_idx_7 != 0 ) { t11 = 0.0 ; } else { t11 = M_idx_8 != 0 ? 0.0 : - 1.0 ;
} t128 = M_idx_3 != 0 ? X_idx_10 : 0.9 ; t12 = - ( ( X_idx_14 - X_idx_12 *
X_idx_13 * 0.001 ) * t110 / ( t128 == 0.0 ? 1.0E-16 : t128 ) * 1000.0 + -
t110 * X_idx_10 / 1000.0 ) ; t110 = - ( ( X_idx_12 * 0.1 + 650.0 ) *
intermediate_der64 + - intermediate_der64 * X_idx_12 * 1000.0 ) ; t131 = (
M_idx_3 != 0 ? X_idx_10 : 0.9 ) * ( M_idx_3 != 0 ? X_idx_10 : 0.9 ) ; U_idx_0
= M_idx_3 != 0 ? X_idx_10 : 0.9 ; intermediate_der64 = - ( ( - ( ( X_idx_14 -
X_idx_12 * X_idx_13 * 0.001 ) * t21 ) / ( t131 == 0.0 ? 1.0E-16 : t131 ) * (
real_T ) ( M_idx_3 != 0 ) + ( X_idx_14 - X_idx_12 * X_idx_13 * 0.001 ) * t112
/ ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * 1000.0 + ( ( 1.0 - t21 ) + -
t112 * X_idx_10 ) / 1000.0 ) ; t112 = - ( t16 * 0.1 + ( 1.0 - t16 ) * 1000.0
) ; t145 = M_idx_3 != 0 ? X_idx_10 : 0.9 ; t16 = - ( - ( X_idx_13 * 0.001 ) *
t21 / ( t145 == 0.0 ? 1.0E-16 : t145 ) * 1000.0 ) ; t145 = M_idx_3 != 0 ?
X_idx_10 : 0.9 ; t127 = - ( - ( X_idx_12 * 0.001 ) * t21 / ( t145 == 0.0 ?
1.0E-16 : t145 ) * 1000.0 ) ; if ( M_idx_5 != 0 ) { t128 = 0.0 ; } else {
t128 = 1.0 - intrm_sf_mf_8 ; } t145 = X_idx_13 * X_idx_13 ; t129 = - ( - t20
/ ( t145 == 0.0 ? 1.0E-16 : t145 ) * 1000.0 ) ; t118 = M_idx_3 != 0 ?
X_idx_10 : 0.9 ; t20 = - ( t21 / ( t118 == 0.0 ? 1.0E-16 : t118 ) * 1000.0 )
; if ( M_idx_4 != 0 ) { t21 = - 1000.0000000000011 ; } else { t21 = -
1.0000000000000013E-5 ; } if ( M_idx_5 != 0 ) { X_idx_0 = -
1.0000000000000011 - - 1.0E-9 * intrm_sf_mf_8 * 0.001 ; } else { X_idx_0 = -
( 1.0E-9 * intrm_sf_mf_8 * 0.001 ) ; } if ( M_idx_6 != 0 ) { t126 = -
3.3333333333333336E-15 ; } else { t126 = - 1.0000000000000001E-23 ; } if (
M_idx_4 != 0 ) { X_idx_14 = - 0.001 ; } else { X_idx_14 = -
1.0000000000000001E-11 ; } if ( M_idx_6 != 0 ) { t131 = - 1.0033366666666668
; } else { t131 = - 1.00000000001001 ; } if ( M_idx_5 != 0 ) { X_idx_10 = - (
intrm_sf_mf_8 * 0.001 ) ; } else { X_idx_10 = 0.0 ; } U_idx_0 = - ( ( X_idx_6
* 0.001 + t66_idx_0 ) / ( X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13 ) * 1000.0 ) ;
if ( M_idx_7 != 0 ) { U_idx_2 = - 1.0 ; } else { U_idx_2 = ( real_T ) (
M_idx_8 != 0 ) ; } tlu2_2d_linear_linear_value ( & i_efOut [ 0ULL ] , & t2 .
mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t45 [
0ULL ] , & t48 [ 0ULL ] , & t31 [ 0ULL ] ) ; t70 [ 0 ] = i_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & j_efOut [ 0ULL ] , & t2 . mField1 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t45 [ 0ULL ] , & t48 [ 0ULL
] , & t31 [ 0ULL ] ) ; t66_idx_0 = j_efOut [ 0 ] ; t118 = - ( t70 [ 0ULL ] *
5.2410901467505238E-5 ) ; t68 [ 0ULL ] = - t98 ; t68 [ 1ULL ] = t144 ; t68 [
2ULL ] = - intrm_sf_mf_8 ; t68 [ 3ULL ] = t107 ; t98 = - t8 ;
tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL ] , & t3 . mField1 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t30 [ 0ULL ] , & t31 [ 0ULL ] ) ; t70 [ 0 ] = k_efOut [ 0 ] ; if ( X_idx_7 !=
X_idx_7 ) { t145 = X_idx_7 ; } else if ( X_idx_7 > 0.0 ) { t145 = 1.0 ; }
else { t145 = X_idx_7 < 0.0 ? - 1.0 : 0.0 ; } t8 = - ( t70 [ 0ULL ] * t145 )
; t78 [ 0ULL ] = - t21 ; t78 [ 1ULL ] = X_idx_0 ; t78 [ 2ULL ] = - ( 1.0E-9 *
intrm_sf_mf_8 ) ; t78 [ 3ULL ] = t126 ; t61 [ 0ULL ] = t118 /
285.83999999999992 ; t61 [ 1ULL ] = - ( t66_idx_0 * 5.2410901467505238E-5 ) ;
for ( t91 = 0ULL ; t91 < 4ULL ; t91 ++ ) { t61 [ t91 + 2ULL ] = t68 [ t91 ] ;
} t61 [ 6ULL ] = t98 ; t61 [ 7ULL ] = ( real_T ) ( M_idx_5 != 0 ) ; t61 [
8ULL ] = t9 ; t61 [ 9ULL ] = - ( ( X_idx_19 * 0.001 + intermediate_der61 ) /
( X_idx_13 == 0.0 ? 1.0E-16 : X_idx_13 ) * 1000.0 ) ; t61 [ 10ULL ] = t8 ;
t61 [ 11ULL ] = t11 ; t61 [ 12ULL ] = - ( real_T ) ( X_idx_8 < 0.0 ) /
19080.0 ; t61 [ 13ULL ] = - ( M_idx_0 != 0 ? 4.03416E-7 : X_idx_11 ) ; t61 [
14ULL ] = t12 ; t61 [ 15ULL ] = - 0.0 ; t61 [ 16ULL ] = - ( real_T ) (
M_idx_1 == 0 ) ; t61 [ 17ULL ] = t110 / 1000.0 ; t61 [ 18ULL ] =
intermediate_der64 ; t61 [ 19ULL ] = - ( X_idx_8 * ( real_T ) ( M_idx_0 == 0
) ) ; t61 [ 20ULL ] = t112 / 1000.0 ; t61 [ 21ULL ] = t16 ; t61 [ 22ULL ] = -
( X_idx_12 * 0.00020074480824668772 ) ; t61 [ 23ULL ] = t127 ; t61 [ 24ULL ]
= t128 ; t61 [ 25ULL ] = t129 ; t61 [ 26ULL ] = t20 ; t61 [ 27ULL ] = - (
M_idx_4 != 0 ? - 1000.0 : - 1.0E-5 ) ; t61 [ 28ULL ] = M_idx_5 != 0 ? 0.0 : -
1.0 ; for ( t91 = 0ULL ; t91 < 4ULL ; t91 ++ ) { t61 [ t91 + 29ULL ] = t78 [
t91 ] ; } out . mX [ 0 ] = t61 [ 0 ] ; out . mX [ 1 ] = t61 [ 1 ] ; out . mX
[ 2 ] = t61 [ 2 ] ; out . mX [ 3 ] = t61 [ 3 ] ; out . mX [ 4 ] = t61 [ 4 ] ;
out . mX [ 5 ] = t61 [ 5 ] ; out . mX [ 6 ] = t61 [ 6 ] ; out . mX [ 7 ] =
t61 [ 7 ] ; out . mX [ 8 ] = t61 [ 8 ] ; out . mX [ 9 ] = t61 [ 9 ] ; out .
mX [ 10 ] = t61 [ 10 ] ; out . mX [ 11 ] = t61 [ 11 ] ; out . mX [ 12 ] = t61
[ 12 ] ; out . mX [ 13 ] = t61 [ 13 ] ; out . mX [ 14 ] = t61 [ 14 ] ; out .
mX [ 15 ] = t61 [ 15 ] ; out . mX [ 16 ] = t61 [ 16 ] ; out . mX [ 17 ] = t61
[ 17 ] ; out . mX [ 18 ] = t61 [ 18 ] ; out . mX [ 19 ] = t61 [ 19 ] ; out .
mX [ 20 ] = t61 [ 20 ] ; out . mX [ 21 ] = t61 [ 21 ] ; out . mX [ 22 ] = t61
[ 22 ] ; out . mX [ 23 ] = t61 [ 23 ] ; out . mX [ 24 ] = t61 [ 24 ] ; out .
mX [ 25 ] = t61 [ 25 ] ; out . mX [ 26 ] = t61 [ 26 ] ; out . mX [ 27 ] = t61
[ 27 ] ; out . mX [ 28 ] = t61 [ 28 ] ; out . mX [ 29 ] = t61 [ 29 ] ; out .
mX [ 30 ] = t61 [ 30 ] ; out . mX [ 31 ] = t61 [ 31 ] ; out . mX [ 32 ] = t61
[ 32 ] ; out . mX [ 33 ] = - X_idx_14 ; out . mX [ 34 ] = M_idx_5 != 0 ? -
1.0E-6 : 0.0 ; out . mX [ 35 ] = t131 ; out . mX [ 36 ] = X_idx_10 ; out . mX
[ 37 ] = 1.0 ; out . mX [ 38 ] = U_idx_0 ; out . mX [ 39 ] = U_idx_2 ; ( void
) LC ; ( void ) t147 ; return 0 ; }
