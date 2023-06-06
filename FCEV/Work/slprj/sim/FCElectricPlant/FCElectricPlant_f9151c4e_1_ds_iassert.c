#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_iassert.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_iassert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t83 , NeDsMethodOutput * t84 ) { ETTS0 c_efOut ;
ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 i_efOut ; ETTS0 k_efOut ;
ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut ; ETTS0 s_efOut ; ETTS0 t1 ;
ETTS0 t8 ; ETTS0 u_efOut ; ETTS0 w_efOut ; PmIntVector out ; real_T X [ 440 ]
; real_T b_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T n_efOut
[ 1 ] ; real_T p_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T t57 [ 1 ] ;
real_T t_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha24 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_p_ws_ratio_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_p_w ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_p_ws_ratio_I ; real_T
t82_idx_0 ; size_t t13 [ 1 ] ; size_t t14 [ 1 ] ; int32_T b ; for ( b = 0 ; b
< 440 ; b ++ ) { X [ b ] = t83 -> mX . mX [ b ] ; } out = t84 -> mIASSERT ;
t57 [ 0ULL ] = X [ 19ULL ] ; t13 [ 0 ] = 52ULL ; t14 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t8 . mField0 [ 0ULL ] ,
& t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio = pmf_exp (
pmf_log ( X [ 20ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 23ULL ]
; tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha24 = pmf_exp (
pmf_log ( X [ 24ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 27ULL ]
; tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_p_ws_ratio_ = pmf_exp (
pmf_log ( X [ 28ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 31ULL ]
; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 32ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 36ULL ]
; tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_p_w = pmf_exp (
pmf_log ( X [ 35ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 39ULL ]
; tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
k_efOut ; tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = l_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 42ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 6ULL ]
; tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = n_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 43ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 9ULL ]
; tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t1 =
o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = p_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 44ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 45ULL ]
; tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = r_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 48ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 49ULL ]
; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t8 =
s_efOut ; tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = t_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 50ULL ] * 100000.0 ) - t82_idx_0 ) ; t57 [ 0ULL ] = X [ 12ULL ]
; tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t1 =
u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] ) ; t82_idx_0 = v_efOut [ 0 ] ;
t82_idx_0 = pmf_exp ( pmf_log ( X [ 53ULL ] * 100000.0 ) - t82_idx_0 ) ; t57
[ 0ULL ] = X [ 15ULL ] ; tlu2_linear_linear_prelookup ( & w_efOut . mField0 [
0ULL ] , & w_efOut . mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t57 [ 0ULL ] , & t13 [ 0ULL ] ,
& t14 [ 0ULL ] ) ; t8 = w_efOut ; tlu2_1d_linear_linear_value ( & x_efOut [
0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t13 [ 0ULL ] , & t14 [ 0ULL ] )
; t57 [ 0 ] = x_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 54ULL ] * 100000.0 ) - t57 [ 0ULL ] ) ; out . mX [ 0 ] = (
int32_T ) ( X [ 22ULL ] <= 1.0 ) ; out . mX [ 1 ] = ( int32_T ) ( X [ 146ULL
] <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio ) ; out
. mX [ 2 ] = ( int32_T ) ( X [ 146ULL ] <= 1.0 ) ; out . mX [ 3 ] = ( int32_T
) ( X [ 21ULL ] <= 1.0 ) ; out . mX [ 4 ] = ( int32_T ) ( ( 1.0 - X [ 21ULL ]
) - X [ 22ULL ] >= 0.0 ) ; out . mX [ 5 ] = ( int32_T ) ( X [ 25ULL ] <= 1.0
) ; out . mX [ 6 ] = ( int32_T ) ( X [ 176ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha24 ) ; out . mX
[ 7 ] = ( int32_T ) ( X [ 176ULL ] <= 1.0 ) ; out . mX [ 8 ] = ( int32_T ) (
X [ 26ULL ] <= 1.0 ) ; out . mX [ 9 ] = ( int32_T ) ( ( 1.0 - X [ 26ULL ] ) -
X [ 25ULL ] >= 0.0 ) ; out . mX [ 10 ] = ( int32_T ) ( X [ 29ULL ] <= 1.0 ) ;
out . mX [ 11 ] = ( int32_T ) ( X [ 208ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_p_ws_ratio_ ) ; out . mX
[ 12 ] = ( int32_T ) ( X [ 208ULL ] <= 1.0 ) ; out . mX [ 13 ] = ( int32_T )
( X [ 30ULL ] <= 1.0 ) ; out . mX [ 14 ] = ( int32_T ) ( ( 1.0 - X [ 30ULL ]
) - X [ 29ULL ] >= 0.0 ) ; out . mX [ 15 ] = ( int32_T ) ( X [ 34ULL ] <= 1.0
) ; out . mX [ 16 ] = ( int32_T ) ( X [ 230ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_p_ws_ratio_I ) ; out . mX [
17 ] = ( int32_T ) ( X [ 230ULL ] <= 1.0 ) ; out . mX [ 18 ] = ( int32_T ) (
X [ 33ULL ] <= 1.0 ) ; out . mX [ 19 ] = ( int32_T ) ( ( 1.0 - X [ 33ULL ] )
- X [ 34ULL ] >= 0.0 ) ; out . mX [ 20 ] = ( int32_T ) ( X [ 37ULL ] <= 1.0 )
; out . mX [ 21 ] = ( int32_T ) ( X [ 273ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_p_w ) ; out . mX
[ 22 ] = ( int32_T ) ( X [ 273ULL ] <= 1.0 ) ; out . mX [ 23 ] = ( int32_T )
( X [ 38ULL ] <= 1.0 ) ; out . mX [ 24 ] = ( int32_T ) ( ( 1.0 - X [ 38ULL ]
) - X [ 37ULL ] >= 0.0 ) ; out . mX [ 25 ] = ( int32_T ) ( X [ 40ULL ] <= 1.0
) ; out . mX [ 26 ] = ( int32_T ) ( X [ 297ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I ) ; out . mX [
27 ] = ( int32_T ) ( X [ 297ULL ] <= 1.0 ) ; out . mX [ 28 ] = ( int32_T ) (
X [ 41ULL ] <= 1.0 ) ; out . mX [ 29 ] = ( int32_T ) ( ( 1.0 - X [ 41ULL ] )
- X [ 40ULL ] >= 0.0 ) ; out . mX [ 30 ] = ( int32_T ) ( X [ 7ULL ] <= 1.0 )
; out . mX [ 31 ] = ( int32_T ) ( X [ 79ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I ) ; out . mX [
32 ] = ( int32_T ) ( X [ 79ULL ] <= 1.0 ) ; out . mX [ 33 ] = ( int32_T ) ( X
[ 8ULL ] <= 1.0 ) ; out . mX [ 34 ] = ( int32_T ) ( ( 1.0 - X [ 8ULL ] ) - X
[ 7ULL ] >= 0.0 ) ; out . mX [ 35 ] = ( int32_T ) ( X [ 10ULL ] <= 1.0 ) ;
out . mX [ 36 ] = ( int32_T ) ( X [ 84ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_p_ws_ratio_I ) ; out . mX
[ 37 ] = ( int32_T ) ( X [ 84ULL ] <= 1.0 ) ; out . mX [ 38 ] = ( int32_T ) (
X [ 11ULL ] <= 1.0 ) ; out . mX [ 39 ] = ( int32_T ) ( ( 1.0 - X [ 11ULL ] )
- X [ 10ULL ] >= 0.0 ) ; out . mX [ 40 ] = ( int32_T ) ( X [ 46ULL ] <= 1.0 )
; out . mX [ 41 ] = ( int32_T ) ( X [ 346ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I ) ; out . mX [
42 ] = ( int32_T ) ( X [ 346ULL ] <= 1.0 ) ; out . mX [ 43 ] = ( int32_T ) (
X [ 47ULL ] <= 1.0 ) ; out . mX [ 44 ] = ( int32_T ) ( ( 1.0 - X [ 47ULL ] )
- X [ 46ULL ] >= 0.0 ) ; out . mX [ 45 ] = ( int32_T ) ( X [ 52ULL ] <= 1.0 )
; out . mX [ 46 ] = ( int32_T ) ( X [ 396ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_p_ws_ratio_I ) ; out . mX [
47 ] = ( int32_T ) ( X [ 396ULL ] <= 1.0 ) ; out . mX [ 48 ] = ( int32_T ) (
X [ 51ULL ] <= 1.0 ) ; out . mX [ 49 ] = ( int32_T ) ( ( 1.0 - X [ 51ULL ] )
- X [ 52ULL ] >= 0.0 ) ; out . mX [ 50 ] = ( int32_T ) ( X [ 13ULL ] <= 1.0 )
; out . mX [ 51 ] = ( int32_T ) ( X [ 89ULL ] <= t82_idx_0 ) ; out . mX [ 52
] = ( int32_T ) ( X [ 89ULL ] <= 1.0 ) ; out . mX [ 53 ] = ( int32_T ) ( X [
14ULL ] <= 1.0 ) ; out . mX [ 54 ] = ( int32_T ) ( ( 1.0 - X [ 14ULL ] ) - X
[ 13ULL ] >= 0.0 ) ; out . mX [ 55 ] = ( int32_T ) ( X [ 16ULL ] <= 1.0 ) ;
out . mX [ 56 ] = ( int32_T ) ( X [ 94ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_p_ws_ratio_I ) ; out . mX
[ 57 ] = ( int32_T ) ( X [ 94ULL ] <= 1.0 ) ; out . mX [ 58 ] = ( int32_T ) (
X [ 17ULL ] <= 1.0 ) ; out . mX [ 59 ] = ( int32_T ) ( ( 1.0 - X [ 17ULL ] )
- X [ 16ULL ] >= 0.0 ) ; ( void ) LC ; ( void ) t84 ; return 0 ; }
