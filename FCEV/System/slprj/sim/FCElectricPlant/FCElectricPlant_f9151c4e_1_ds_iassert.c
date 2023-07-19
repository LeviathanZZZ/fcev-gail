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
ETTS0 m_efOut ; ETTS0 o_efOut ; ETTS0 q_efOut ; ETTS0 s_efOut ; ETTS0 t4 ;
ETTS0 t9 ; ETTS0 u_efOut ; PmIntVector out ; real_T X [ 399 ] ; real_T
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
< 399 ; b ++ ) { X [ b ] = t78 -> mX . mX [ b ] ; } out = t79 -> mIASSERT ;
t77 [ 0ULL ] = X [ 19ULL ] ; t12 [ 0 ] = 52ULL ; t13 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio = pmf_exp (
pmf_log ( X [ 20ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 23ULL ]
; tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 =
c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_p_ws_ratio_ = pmf_exp (
pmf_log ( X [ 24ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 27ULL ]
; tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 =
e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 28ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 32ULL ]
; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 =
g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_p_w = pmf_exp (
pmf_log ( X [ 31ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 35ULL ]
; tlu2_linear_linear_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t9 =
i_efOut ; tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t9 . mField0 [
0ULL ] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 38ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 6ULL ]
; tlu2_linear_linear_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 =
k_efOut ; tlu2_1d_linear_linear_value ( & l_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = l_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 39ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 9ULL ]
; tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 =
m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = n_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 40ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 41ULL ]
; tlu2_linear_linear_prelookup ( & o_efOut . mField0 [ 0ULL ] , & o_efOut .
mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t9 =
o_efOut ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t9 . mField0 [
0ULL ] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = p_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 44ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 45ULL ]
; tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t9 =
q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t9 . mField0 [
0ULL ] , & t9 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = r_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 46ULL ] * 100000.0 ) - t76_idx_0 ) ; t77 [ 0ULL ] = X [ 12ULL ]
; tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t4 =
s_efOut ; tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] ) ; t76_idx_0 = t_efOut [ 0 ] ;
t76_idx_0 = pmf_exp ( pmf_log ( X [ 49ULL ] * 100000.0 ) - t76_idx_0 ) ; t77
[ 0ULL ] = X [ 15ULL ] ; tlu2_linear_linear_prelookup ( & u_efOut . mField0 [
0ULL ] , & u_efOut . mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t77 [ 0ULL ] , & t12 [ 0ULL ] ,
& t13 [ 0ULL ] ) ; t4 = u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [
0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t12 [ 0ULL ] , & t13 [ 0ULL ] )
; t77 [ 0 ] = v_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_p_ws_ratio_I = pmf_exp (
pmf_log ( X [ 50ULL ] * 100000.0 ) - t77 [ 0ULL ] ) ; out . mX [ 0 ] = (
int32_T ) ( X [ 22ULL ] <= 1.0 ) ; out . mX [ 1 ] = ( int32_T ) ( X [ 142ULL
] <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_p_ws_ratio ) ; out
. mX [ 2 ] = ( int32_T ) ( X [ 142ULL ] <= 1.0 ) ; out . mX [ 3 ] = ( int32_T
) ( X [ 21ULL ] <= 1.0 ) ; out . mX [ 4 ] = ( int32_T ) ( ( 1.0 - X [ 21ULL ]
) - X [ 22ULL ] >= 0.0 ) ; out . mX [ 5 ] = ( int32_T ) ( X [ 25ULL ] <= 1.0
) ; out . mX [ 6 ] = ( int32_T ) ( X [ 167ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_p_ws_ratio_ ) ; out . mX
[ 7 ] = ( int32_T ) ( X [ 167ULL ] <= 1.0 ) ; out . mX [ 8 ] = ( int32_T ) (
X [ 26ULL ] <= 1.0 ) ; out . mX [ 9 ] = ( int32_T ) ( ( 1.0 - X [ 26ULL ] ) -
X [ 25ULL ] >= 0.0 ) ; out . mX [ 10 ] = ( int32_T ) ( X [ 30ULL ] <= 1.0 ) ;
out . mX [ 11 ] = ( int32_T ) ( X [ 190ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_p_ws_ratio_I ) ; out . mX [
12 ] = ( int32_T ) ( X [ 190ULL ] <= 1.0 ) ; out . mX [ 13 ] = ( int32_T ) (
X [ 29ULL ] <= 1.0 ) ; out . mX [ 14 ] = ( int32_T ) ( ( 1.0 - X [ 29ULL ] )
- X [ 30ULL ] >= 0.0 ) ; out . mX [ 15 ] = ( int32_T ) ( X [ 33ULL ] <= 1.0 )
; out . mX [ 16 ] = ( int32_T ) ( X [ 236ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_p_w ) ; out . mX
[ 17 ] = ( int32_T ) ( X [ 236ULL ] <= 1.0 ) ; out . mX [ 18 ] = ( int32_T )
( X [ 34ULL ] <= 1.0 ) ; out . mX [ 19 ] = ( int32_T ) ( ( 1.0 - X [ 34ULL ]
) - X [ 33ULL ] >= 0.0 ) ; out . mX [ 20 ] = ( int32_T ) ( X [ 36ULL ] <= 1.0
) ; out . mX [ 21 ] = ( int32_T ) ( X [ 257ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_p_ws_ratio_I ) ; out . mX [
22 ] = ( int32_T ) ( X [ 257ULL ] <= 1.0 ) ; out . mX [ 23 ] = ( int32_T ) (
X [ 37ULL ] <= 1.0 ) ; out . mX [ 24 ] = ( int32_T ) ( ( 1.0 - X [ 37ULL ] )
- X [ 36ULL ] >= 0.0 ) ; out . mX [ 25 ] = ( int32_T ) ( X [ 7ULL ] <= 1.0 )
; out . mX [ 26 ] = ( int32_T ) ( X [ 73ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_p_ws_ratio_I ) ; out . mX [
27 ] = ( int32_T ) ( X [ 73ULL ] <= 1.0 ) ; out . mX [ 28 ] = ( int32_T ) ( X
[ 8ULL ] <= 1.0 ) ; out . mX [ 29 ] = ( int32_T ) ( ( 1.0 - X [ 8ULL ] ) - X
[ 7ULL ] >= 0.0 ) ; out . mX [ 30 ] = ( int32_T ) ( X [ 10ULL ] <= 1.0 ) ;
out . mX [ 31 ] = ( int32_T ) ( X [ 79ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_p_ws_ratio_I ) ; out . mX
[ 32 ] = ( int32_T ) ( X [ 79ULL ] <= 1.0 ) ; out . mX [ 33 ] = ( int32_T ) (
X [ 11ULL ] <= 1.0 ) ; out . mX [ 34 ] = ( int32_T ) ( ( 1.0 - X [ 11ULL ] )
- X [ 10ULL ] >= 0.0 ) ; out . mX [ 35 ] = ( int32_T ) ( X [ 42ULL ] <= 1.0 )
; out . mX [ 36 ] = ( int32_T ) ( X [ 306ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_p_ws_ratio_I ) ; out . mX [
37 ] = ( int32_T ) ( X [ 306ULL ] <= 1.0 ) ; out . mX [ 38 ] = ( int32_T ) (
X [ 43ULL ] <= 1.0 ) ; out . mX [ 39 ] = ( int32_T ) ( ( 1.0 - X [ 43ULL ] )
- X [ 42ULL ] >= 0.0 ) ; out . mX [ 40 ] = ( int32_T ) ( X [ 48ULL ] <= 1.0 )
; out . mX [ 41 ] = ( int32_T ) ( X [ 355ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_p_ws_ratio_I ) ; out . mX [
42 ] = ( int32_T ) ( X [ 355ULL ] <= 1.0 ) ; out . mX [ 43 ] = ( int32_T ) (
X [ 47ULL ] <= 1.0 ) ; out . mX [ 44 ] = ( int32_T ) ( ( 1.0 - X [ 47ULL ] )
- X [ 48ULL ] >= 0.0 ) ; out . mX [ 45 ] = ( int32_T ) ( X [ 13ULL ] <= 1.0 )
; out . mX [ 46 ] = ( int32_T ) ( X [ 83ULL ] <= t76_idx_0 ) ; out . mX [ 47
] = ( int32_T ) ( X [ 83ULL ] <= 1.0 ) ; out . mX [ 48 ] = ( int32_T ) ( X [
14ULL ] <= 1.0 ) ; out . mX [ 49 ] = ( int32_T ) ( ( 1.0 - X [ 14ULL ] ) - X
[ 13ULL ] >= 0.0 ) ; out . mX [ 50 ] = ( int32_T ) ( X [ 16ULL ] <= 1.0 ) ;
out . mX [ 51 ] = ( int32_T ) ( X [ 88ULL ] <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_p_ws_ratio_I ) ; out . mX
[ 52 ] = ( int32_T ) ( X [ 88ULL ] <= 1.0 ) ; out . mX [ 53 ] = ( int32_T ) (
X [ 17ULL ] <= 1.0 ) ; out . mX [ 54 ] = ( int32_T ) ( ( 1.0 - X [ 17ULL ] )
- X [ 16ULL ] >= 0.0 ) ; ( void ) LC ; ( void ) t79 ; return 0 ; }
