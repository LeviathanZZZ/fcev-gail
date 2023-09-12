#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_iassert.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_iassert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t78 , NeDsMethodOutput * t79 ) { ETTS0 c_efOut ;
ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 i_efOut ; ETTS0 k_efOut ;
ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut ; ETTS0 s_efOut ; ETTS0 t1 ;
ETTS0 t8 ; ETTS0 u_efOut ; PmIntVector out ; real_T X [ 394 ] ; real_T
b_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T h_efOut
[ 1 ] ; real_T j_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T n_efOut [ 1 ] ;
real_T p_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T t77 [ 1 ] ; real_T
t_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_p_ws_ratio_ ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_p_w ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_p_ws_ratio_I ; real_T
t76_idx_0 ; size_t t12 [ 1 ] ; size_t t13 [ 1 ] ; int32_T b ; for ( b = 0 ; b
< 394 ; b ++ ) { X [ b ] = t78 -> mX . mX [ b ] ; } out = t79 -> mIASSERT ;
t77 [ 0ULL ] = X [ 17ULL ] ; t12 [ 0 ] = 52ULL ; t13 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t8 . mField0 [ 0ULL ] ,
& t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio = pmf_exp (
pmf_log ( X [ 18ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 21ULL ]
; tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_p_ws_ratio_ = pmf_exp (
pmf_log ( X [ 22ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 25ULL ]
; tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 26ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 30ULL ]
; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_p_w = pmf_exp (
pmf_log ( X [ 29ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 33ULL ]
; tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 36ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 4ULL ]
; tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
k_efOut ; tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = l_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 37ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 7ULL ]
; tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = n_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 38ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 39ULL ]
; tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = p_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 42ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 43ULL ]
; tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t1 =
q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = r_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 44ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 10ULL ]
; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t8 =
s_efOut ; tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t8 . mField0 [
0ULL ] , & t8 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = t_efOut [ 0 ] ;
t76_idx_0 = pmf_exp ( pmf_log ( X [ 47ULL ] * 100000.0 ) - t76_idx_0 ) ; t77
[ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup ( & u_efOut . mField0 [
0ULL ] , & u_efOut . mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t77 [ 0ULL ] , & t12 [ 0ULL ] ,
& t13 [ 0ULL ] ) ; t8 = u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [
0ULL ] , & t8 . mField0 [ 0ULL ] , & t8 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t12 [ 0ULL ] , & t13 [ 0ULL ] )
; t77 [ 0 ] = v_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 48ULL ] * 100000.0 ) - t77 [ 0ULL ] ) ; out . mX [ 0 ] = (
int32_T ) ( X [ 20ULL ] <= 1.0 ) ; out . mX [ 1 ] = ( int32_T ) ( X [ 137ULL
] <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio ) ; out
. mX [ 2 ] = ( int32_T ) ( X [ 137ULL ] <= 1.0 ) ; out . mX [ 3 ] = ( int32_T
) ( X [ 19ULL ] <= 1.0 ) ; out . mX [ 4 ] = ( int32_T ) ( ( 1.0 - X [ 19ULL ]
) - X [ 20ULL ] >= 0.0 ) ; out . mX [ 5 ] = ( int32_T ) ( X [ 23ULL ] <= 1.0
) ; out . mX [ 6 ] = ( int32_T ) ( X [ 162ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_p_ws_ratio_ ) ; out . mX
[ 7 ] = ( int32_T ) ( X [ 162ULL ] <= 1.0 ) ; out . mX [ 8 ] = ( int32_T ) (
X [ 24ULL ] <= 1.0 ) ; out . mX [ 9 ] = ( int32_T ) ( ( 1.0 - X [ 24ULL ] ) -
X [ 23ULL ] >= 0.0 ) ; out . mX [ 10 ] = ( int32_T ) ( X [ 28ULL ] <= 1.0 ) ;
out . mX [ 11 ] = ( int32_T ) ( X [ 185ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_p_ws_ratio_I ) ; out . mX [
12 ] = ( int32_T ) ( X [ 185ULL ] <= 1.0 ) ; out . mX [ 13 ] = ( int32_T ) (
X [ 27ULL ] <= 1.0 ) ; out . mX [ 14 ] = ( int32_T ) ( ( 1.0 - X [ 27ULL ] )
- X [ 28ULL ] >= 0.0 ) ; out . mX [ 15 ] = ( int32_T ) ( X [ 31ULL ] <= 1.0 )
; out . mX [ 16 ] = ( int32_T ) ( X [ 231ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_p_w ) ; out . mX
[ 17 ] = ( int32_T ) ( X [ 231ULL ] <= 1.0 ) ; out . mX [ 18 ] = ( int32_T )
( X [ 32ULL ] <= 1.0 ) ; out . mX [ 19 ] = ( int32_T ) ( ( 1.0 - X [ 32ULL ]
) - X [ 31ULL ] >= 0.0 ) ; out . mX [ 20 ] = ( int32_T ) ( X [ 34ULL ] <= 1.0
) ; out . mX [ 21 ] = ( int32_T ) ( X [ 252ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_p_ws_ratio_I ) ; out . mX [
22 ] = ( int32_T ) ( X [ 252ULL ] <= 1.0 ) ; out . mX [ 23 ] = ( int32_T ) (
X [ 35ULL ] <= 1.0 ) ; out . mX [ 24 ] = ( int32_T ) ( ( 1.0 - X [ 35ULL ] )
- X [ 34ULL ] >= 0.0 ) ; out . mX [ 25 ] = ( int32_T ) ( X [ 5ULL ] <= 1.0 )
; out . mX [ 26 ] = ( int32_T ) ( X [ 68ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I ) ; out . mX [
27 ] = ( int32_T ) ( X [ 68ULL ] <= 1.0 ) ; out . mX [ 28 ] = ( int32_T ) ( X
[ 6ULL ] <= 1.0 ) ; out . mX [ 29 ] = ( int32_T ) ( ( 1.0 - X [ 6ULL ] ) - X
[ 5ULL ] >= 0.0 ) ; out . mX [ 30 ] = ( int32_T ) ( X [ 8ULL ] <= 1.0 ) ; out
. mX [ 31 ] = ( int32_T ) ( X [ 74ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_p_ws_ratio_I ) ; out . mX
[ 32 ] = ( int32_T ) ( X [ 74ULL ] <= 1.0 ) ; out . mX [ 33 ] = ( int32_T ) (
X [ 9ULL ] <= 1.0 ) ; out . mX [ 34 ] = ( int32_T ) ( ( 1.0 - X [ 9ULL ] ) -
X [ 8ULL ] >= 0.0 ) ; out . mX [ 35 ] = ( int32_T ) ( X [ 40ULL ] <= 1.0 ) ;
out . mX [ 36 ] = ( int32_T ) ( X [ 301ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I ) ; out . mX [
37 ] = ( int32_T ) ( X [ 301ULL ] <= 1.0 ) ; out . mX [ 38 ] = ( int32_T ) (
X [ 41ULL ] <= 1.0 ) ; out . mX [ 39 ] = ( int32_T ) ( ( 1.0 - X [ 41ULL ] )
- X [ 40ULL ] >= 0.0 ) ; out . mX [ 40 ] = ( int32_T ) ( X [ 46ULL ] <= 1.0 )
; out . mX [ 41 ] = ( int32_T ) ( X [ 350ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I ) ; out . mX [
42 ] = ( int32_T ) ( X [ 350ULL ] <= 1.0 ) ; out . mX [ 43 ] = ( int32_T ) (
X [ 45ULL ] <= 1.0 ) ; out . mX [ 44 ] = ( int32_T ) ( ( 1.0 - X [ 45ULL ] )
- X [ 46ULL ] >= 0.0 ) ; out . mX [ 45 ] = ( int32_T ) ( X [ 11ULL ] <= 1.0 )
; out . mX [ 46 ] = ( int32_T ) ( X [ 78ULL ] <= t76_idx_0 ) ; out . mX [ 47
] = ( int32_T ) ( X [ 78ULL ] <= 1.0 ) ; out . mX [ 48 ] = ( int32_T ) ( X [
12ULL ] <= 1.0 ) ; out . mX [ 49 ] = ( int32_T ) ( ( 1.0 - X [ 12ULL ] ) - X
[ 11ULL ] >= 0.0 ) ; out . mX [ 50 ] = ( int32_T ) ( X [ 14ULL ] <= 1.0 ) ;
out . mX [ 51 ] = ( int32_T ) ( X [ 83ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_p_ws_ratio_I ) ; out . mX
[ 52 ] = ( int32_T ) ( X [ 83ULL ] <= 1.0 ) ; out . mX [ 53 ] = ( int32_T ) (
X [ 15ULL ] <= 1.0 ) ; out . mX [ 54 ] = ( int32_T ) ( ( 1.0 - X [ 15ULL ] )
- X [ 14ULL ] >= 0.0 ) ; ( void ) LC ; ( void ) t79 ; return 0 ; }
