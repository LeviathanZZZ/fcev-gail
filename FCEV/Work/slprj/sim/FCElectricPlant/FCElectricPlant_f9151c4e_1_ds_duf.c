#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_duf.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t931 , NeDsMethodOutput * t932 ) { ETTS0
ac_efOut ; ETTS0 bd_efOut ; ETTS0 e_efOut ; ETTS0 ec_efOut ; ETTS0 efOut ;
ETTS0 fd_efOut ; ETTS0 gd_efOut ; ETTS0 ic_efOut ; ETTS0 j_efOut ; ETTS0
jb_efOut ; ETTS0 mc_efOut ; ETTS0 nb_efOut ; ETTS0 qc_efOut ; ETTS0 rb_efOut
; ETTS0 t1 ; ETTS0 t10 ; ETTS0 t6 ; ETTS0 uc_efOut ; ETTS0 vb_efOut ; ETTS0
w_efOut ; ETTS0 yc_efOut ; PmRealVector out ; real_T X [ 440 ] ; real_T t205
[ 57 ] ; real_T t271 [ 29 ] ; real_T t276 [ 6 ] ; real_T t274 [ 5 ] ; real_T
t275 [ 5 ] ; real_T nonscalar39 [ 3 ] ; real_T ab_efOut [ 1 ] ; real_T
ad_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T
bc_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T
cc_efOut [ 1 ] ; real_T cd_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T
db_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T
eb_efOut [ 1 ] ; real_T ed_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T
gb_efOut [ 1 ] ; real_T gc_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T
hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T
k_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
m_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T
oc_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T
pc_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T
sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T t273 [ 1 ] ; real_T t_efOut [
1 ] ; real_T tb_efOut [ 1 ] ; real_T tc_efOut [ 1 ] ; real_T u_efOut [ 1 ] ;
real_T ub_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ; real_T
wb_efOut [ 1 ] ; real_T wc_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
xb_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
yb_efOut [ 1 ] ; real_T Fuel_Cell_Boost_Converter_L_i ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha29 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Environment_convecti2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ; real_T
U_idx_0 ; real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3
; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T
U_idx_8 ; real_T U_idx_9 ; real_T intermediate_der10126 ; real_T
intermediate_der10174 ; real_T intermediate_der10216 ; real_T
intermediate_der10221 ; real_T intermediate_der1251 ; real_T
intermediate_der1480 ; real_T intermediate_der1515 ; real_T
intermediate_der1516 ; real_T intermediate_der2265 ; real_T
intermediate_der6972 ; real_T intermediate_der7115 ; real_T
intermediate_der8954 ; real_T intermediate_der9495 ; real_T
intermediate_der9568 ; real_T intrm_sf_mf_1269 ; real_T intrm_sf_mf_146 ;
real_T intrm_sf_mf_203 ; real_T intrm_sf_mf_437 ; real_T intrm_sf_mf_446 ;
real_T intrm_sf_mf_452 ; real_T intrm_sf_mf_456 ; real_T intrm_sf_mf_975 ;
real_T t18 ; real_T t19 ; real_T t265_idx_0 ; real_T t267_idx_0 ; real_T t308
; real_T t311 ; real_T t317 ; real_T t320 ; real_T t321 ; real_T t323 ;
real_T t325 ; real_T t336 ; real_T t337 ; real_T t339 ; real_T t341 ; real_T
t342 ; real_T t344 ; real_T t345 ; real_T t346 ; real_T t348 ; real_T t352 ;
real_T t355 ; real_T t356 ; real_T t358 ; real_T t361 ; real_T t362 ; real_T
t363 ; real_T t365 ; real_T t366 ; real_T t376 ; real_T t379 ; real_T t382 ;
real_T t383 ; real_T t384 ; real_T t385 ; real_T t386 ; real_T t387 ; real_T
t388 ; real_T t389 ; real_T t391 ; real_T t402 ; real_T t403 ; real_T t404 ;
real_T t406 ; real_T t408 ; real_T t410 ; real_T t411 ; real_T t414 ; real_T
t417 ; real_T t418 ; real_T t419 ; real_T t420 ; real_T t421 ; real_T t422 ;
real_T t424 ; real_T t425 ; real_T t426 ; real_T t427 ; real_T t429 ; real_T
t431 ; real_T t432 ; real_T t433 ; real_T t434 ; real_T t436 ; real_T t438 ;
real_T t439 ; real_T t440 ; real_T t441 ; real_T t442 ; real_T t443 ; real_T
t444 ; real_T t445 ; real_T t446 ; real_T t447 ; real_T t448 ; real_T t453 ;
real_T t455 ; real_T t456 ; real_T t457 ; real_T t458 ; real_T t459 ; real_T
t460 ; real_T t462 ; real_T t463 ; real_T t467 ; real_T t468 ; real_T t472 ;
real_T t478 ; real_T t480 ; real_T t481 ; real_T t483 ; real_T t484 ; real_T
t485 ; real_T t486 ; real_T t488 ; real_T t506 ; real_T t514 ; real_T t515 ;
real_T t522 ; real_T t539 ; real_T t544 ; real_T t549 ; real_T t556 ; real_T
t568 ; real_T t638 ; real_T t642 ; real_T t675 ; real_T t679 ; real_T t682 ;
real_T t684 ; real_T t685 ; real_T t686 ; real_T t688 ; real_T t712 ; real_T
t736 ; real_T t758 ; real_T t781 ; real_T t837 ; real_T t842 ; real_T t845 ;
real_T t846 ; real_T t854 ; real_T t858 ; real_T t865 ; real_T t883 ; real_T
t904 ; real_T t912 ; real_T t914 ; real_T t919 ; real_T t927 ; real_T t930 ;
real_T zc_int112 ; real_T zc_int19 ; real_T zc_int211 ; real_T zc_int271 ;
real_T zc_int273 ; real_T zc_int274 ; real_T zc_int48 ; real_T zc_int51 ;
real_T zc_int52 ; real_T zc_int53 ; real_T zc_int54 ; real_T zc_int55 ;
real_T zc_int92 ; real_T zc_int93 ; size_t t197 [ 1 ] ; size_t t200 [ 1 ] ;
size_t t22 [ 1 ] ; size_t t281 ; int32_T M [ 231 ] ; int32_T b ; for ( b = 0
; b < 231 ; b ++ ) { M [ b ] = t931 -> mM . mX [ b ] ; } U_idx_0 = t931 -> mU
. mX [ 0 ] ; U_idx_1 = t931 -> mU . mX [ 1 ] ; U_idx_2 = t931 -> mU . mX [ 2
] ; U_idx_3 = t931 -> mU . mX [ 3 ] ; U_idx_4 = t931 -> mU . mX [ 4 ] ;
U_idx_5 = t931 -> mU . mX [ 5 ] ; U_idx_6 = t931 -> mU . mX [ 6 ] ; U_idx_7 =
t931 -> mU . mX [ 7 ] ; U_idx_8 = t931 -> mU . mX [ 8 ] ; U_idx_9 = t931 ->
mU . mX [ 9 ] ; U_idx_10 = t931 -> mU . mX [ 10 ] ; for ( b = 0 ; b < 440 ; b
++ ) { X [ b ] = t931 -> mX . mX [ b ] ; } out = t932 -> mDUF ; t274 [ 0 ] =
1.0 ; t274 [ 1 ] = 1.25 ; t274 [ 2 ] = 1.5 ; t274 [ 3 ] = 1.75 ; t274 [ 4 ] =
2.0 ; nonscalar39 [ 0 ] = 0.0 ; nonscalar39 [ 1 ] = 188.49555921538757 ;
nonscalar39 [ 2 ] = 376.99111843077515 ; t321 = - X [ 57ULL ] - U_idx_0 ; t19
= ( ( ( real_T ) ( t321 >= 0.0 ) * t321 * 1000.0 + ( real_T ) ( t321 < 0.0 )
* X [ 59ULL ] ) - 0.9 ) / 0.099999999999999978 ;
Fuel_Cell_Boost_Converter_L_i = X [ 65ULL ] * 1.0E-9 + X [ 4ULL ] ; t323 = -
X [ 138ULL ] + U_idx_2 * - 0.01 ; if ( X [ 21ULL ] <= 0.0 ) { t325 = 0.0 ; }
else { t325 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <=
0.0 ) { t919 = 0.0 ; } else { t919 = X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ;
} t904 = ( ( ( 1.0 - t325 ) - t919 ) * 296.802103844292 + t325 * 461.523 ) +
t919 * 4124.48151675695 ; t927 = ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0 ?
1.0E-16 : X [ 20ULL ] ) - X [ 139ULL ] / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X
[ 140ULL ] ) ) * t323 * t904 / 7.8539816339744827E-5 ; if ( X [ 139ULL ] <=
216.59999999999997 ) { t912 = 216.59999999999997 ; } else { t912 = X [ 139ULL
] >= 623.15 ? 623.15 : X [ 139ULL ] ; } t914 = t912 * t912 ; t930 = ( ( (
1074.1165326382541 + t912 * - 0.2214565261064077 ) + t914 *
0.00037212980109010952 ) * ( ( 1.0 - t325 ) - t919 ) + ( ( 1479.6504774710445
+ t912 * 1.200211433705052 ) + t914 * - 0.00038614513167842338 ) * t325 ) + (
( 12825.281119790017 + t912 * 6.9647057412830984 ) + t914 * -
0.007052486824683288 ) * t919 ; t883 = t930 - t904 ; t912 = t930 / ( t883 ==
0.0 ? 1.0E-16 : t883 ) ; t930 = pmf_sqrt ( t927 * t927 *
9.999999999999999E-14 + fabs ( X [ 139ULL ] * t912 * t904 ) * 1.0E-9 ) ; if (
X [ 141ULL ] <= 0.0 ) { t914 = 0.0 ; } else { t914 = X [ 141ULL ] >= 1.0 ?
1.0 : X [ 141ULL ] ; } if ( X [ 142ULL ] <= 0.0 ) { t883 = 0.0 ; } else {
t883 = X [ 142ULL ] >= 1.0 ? 1.0 : X [ 142ULL ] ; } t273 [ 0ULL ] = X [ 19ULL
] ; t197 [ 0 ] = 52ULL ; t22 [ 0 ] = 1ULL ; tlu2_linear_nearest_prelookup ( &
efOut . mField0 [ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t1 = efOut ; tlu2_1d_linear_nearest_value
( & b_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t267_idx_0 = b_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & c_efOut [
0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; U_idx_0 = c_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & d_efOut [ 0ULL ]
, & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField8 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 =
d_efOut [ 0 ] ; intermediate_der7115 = ( ( ( 1.0 - t914 ) - t883 ) *
t267_idx_0 + U_idx_0 * t914 ) + t265_idx_0 * t883 ; zc_int211 = X [ 140ULL ]
* X [ 140ULL ] * t912 ; zc_int112 = - pmf_sqrt ( fabs ( zc_int211 / ( t904 ==
0.0 ? 1.0E-16 : t904 ) / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) )
* 7.8539816339744827E-5 ; if ( zc_int112 >= 0.0 ) { intermediate_der9495 =
zc_int112 * 100000.0 ; } else { intermediate_der9495 = - zc_int112 * 100000.0
; } t337 = intermediate_der7115 * 7.8539816339744827E-5 ;
intermediate_der8954 = intermediate_der9495 * 0.01 / ( t337 == 0.0 ? 1.0E-16
: t337 ) ; t339 = X [ 19ULL ] * t904 ; t336 = X [ 20ULL ] / ( t339 == 0.0 ?
1.0E-16 : t339 ) ; t341 = t336 * 1.5707963267948965E-8 ; intermediate_der1251
= zc_int112 * intermediate_der7115 * 35.2 / ( t341 == 0.0 ? 1.0E-16 : t341 )
; t865 = intermediate_der8954 >= 1.0 ? intermediate_der8954 : 1.0 ; t342 =
pmf_log10 ( 6.9 / ( t865 == 0.0 ? 1.0E-16 : t865 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t865 == 0.0 ? 1.0E-16 : t865 ) + 0.00017169489553429715
) * 3.24 ; t344 = t336 * 1.2337005501361697E-10 ; intermediate_der9495 =
zc_int112 * intermediate_der9495 * ( 1.0 / ( t342 == 0.0 ? 1.0E-16 : t342 ) )
* 0.55 / ( t344 == 0.0 ? 1.0E-16 : t344 ) ; t336 = ( intermediate_der8954 -
2000.0 ) / 2000.0 ; t865 = t336 * t336 * 3.0 - t336 * t336 * t336 * 2.0 ; if
( intermediate_der8954 <= 2000.0 ) { t336 = intermediate_der1251 * 1.0E-5 ; }
else if ( intermediate_der8954 >= 4000.0 ) { t336 = intermediate_der9495 *
1.0E-5 ; } else { t336 = ( ( 1.0 - t865 ) * intermediate_der1251 +
intermediate_der9495 * t865 ) * 1.0E-5 ; } t930 = t323 * t930 /
7.8539816339744827E-5 * 0.00031622776601683789 + t336 ; intermediate_der9495
= X [ 116ULL ] - X [ 20ULL ] ; t273 [ 0ULL ] = X [ 19ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t6
= e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t6 . mField0
[ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = f_efOut [ 0 ] ;
t336 = t267_idx_0 ; tlu2_1d_linear_nearest_value ( & g_efOut [ 0ULL ] , & t1
. mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField10 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = g_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & h_efOut [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = h_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & i_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = i_efOut [ 0 ] ;
intermediate_der1251 = ( ( ( 1.0 - t914 ) - t883 ) * t267_idx_0 + U_idx_0 *
t914 ) + t265_idx_0 * t883 ; if ( X [ 137ULL ] <= 0.0 ) { t865 = 0.0 ; } else
{ t865 = X [ 137ULL ] >= 1.0 ? 1.0 : X [ 137ULL ] ; } if ( X [ 136ULL ] <=
0.0 ) { t342 = 0.0 ; } else { t342 = X [ 136ULL ] >= 1.0 ? 1.0 : X [ 136ULL ]
; } t320 = ( ( ( 1.0 - t865 ) - t342 ) * 296.802103844292 + t865 * 461.523 )
+ t342 * 4124.48151675695 ; t865 = X [ 137ULL ] * 461.523 / ( t320 == 0.0 ?
1.0E-16 : t320 ) ; if ( t865 <= 0.0 ) { t342 = 0.0 ; } else { t342 = t865 >=
1.0 ? 1.0 : t865 ; } t865 = X [ 136ULL ] * 4124.48151675695 / ( t320 == 0.0 ?
1.0E-16 : t320 ) ; if ( t865 <= 0.0 ) { t320 = 0.0 ; } else { t320 = t865 >=
1.0 ? 1.0 : t865 ; } t273 [ 0ULL ] = X [ 134ULL ] ;
tlu2_linear_nearest_prelookup ( & j_efOut . mField0 [ 0ULL ] , & j_efOut .
mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ;
t10 = j_efOut ; tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = k_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t10 . mField0 [
0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = l_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = m_efOut [ 0 ] ; t865 = ( (
( 1.0 - t342 ) - t320 ) * t267_idx_0 + U_idx_0 * t342 ) + t265_idx_0 * t320 ;
t345 = ( t323 - ( - X [ 126ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( &
n_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t267_idx_0 = n_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & o_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; U_idx_0 = o_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ]
, & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField8 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 =
p_efOut [ 0 ] ; t679 = ( ( ( ( 1.0 - t342 ) - t320 ) * t267_idx_0 + U_idx_0 *
t342 ) + t265_idx_0 * t320 ) + intermediate_der7115 ; t352 = t679 / 2.0 *
7.8539816339744827E-5 ; t346 = - ( t345 <= 0.0 ? t345 : 0.0 ) * 0.01 / ( t352
== 0.0 ? 1.0E-16 : t352 ) ; intermediate_der1480 = t346 >= 0.0 ? t346 : -
t346 ; t348 = intermediate_der1480 > 1000.0 ? intermediate_der1480 : 1000.0 ;
tlu2_1d_linear_nearest_value ( & q_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = q_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = r_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & s_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = s_efOut [ 0 ] ;
intermediate_der1515 = ( ( ( 1.0 - t914 ) - t883 ) * t267_idx_0 + U_idx_0 *
t914 ) + t265_idx_0 * t883 ; tlu2_1d_linear_nearest_value ( & t_efOut [ 0ULL
] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t267_idx_0 = t_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & u_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; U_idx_0 = u_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL
] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t265_idx_0 = v_efOut [ 0 ] ; t914 = ( ( ( 1.0 - t342 ) - t320 ) *
t267_idx_0 + U_idx_0 * t342 ) + t265_idx_0 * t320 ; t682 =
intermediate_der1515 + t914 ; if ( t682 / 2.0 > 0.5 ) { t883 = (
intermediate_der1515 + t914 ) / 2.0 ; } else { t883 = 0.5 ; } t355 =
pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 : t348 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 : t348 ) + 0.00017169489553429715
) * 3.24 ; t342 = 1.0 / ( t355 == 0.0 ? 1.0E-16 : t355 ) ; t638 = ( pmf_pow (
t883 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t342 / 8.0 ) * 12.7 + 1.0 ;
t320 = ( t348 - 1000.0 ) * ( t342 / 8.0 ) * t883 / ( t638 == 0.0 ? 1.0E-16 :
t638 ) ; intermediate_der1516 = ( intermediate_der1480 - 2000.0 ) / 2000.0 ;
t352 = intermediate_der1516 * intermediate_der1516 * 3.0 -
intermediate_der1516 * intermediate_der1516 * intermediate_der1516 * 2.0 ; if
( intermediate_der1480 <= 2000.0 ) { t18 = 3.66 ; } else if (
intermediate_der1480 >= 4000.0 ) { t18 = t320 ; } else { t18 = ( 1.0 - t352 )
* 3.66 + t320 * t352 ; } t684 = t18 * 0.031415926535897927 ; t362 = t682 /
2.0 ; if ( intermediate_der1480 > t684 / 7.8539816339744827E-5 / ( t362 ==
0.0 ? 1.0E-16 : t362 ) / 30.0 ) { intermediate_der6972 = (
intermediate_der1515 + t914 ) / 2.0 ; t355 = t18 * 0.031415926535897927 / (
intermediate_der1480 == 0.0 ? 1.0E-16 : intermediate_der1480 ) /
7.8539816339744827E-5 / ( intermediate_der6972 == 0.0 ? 1.0E-16 :
intermediate_der6972 ) ; } else { t355 = 30.0 ; } t356 = ( X [ 119ULL ] - X [
134ULL ] ) * ( 1.0 - pmf_exp ( - t355 ) ) ; if ( X [ 118ULL ] <= 0.0 ) { t358
= 0.0 ; } else { t358 = X [ 118ULL ] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [
117ULL ] <= 0.0 ) { t361 = 0.0 ; } else { t361 = X [ 117ULL ] >= 1.0 ? 1.0 :
X [ 117ULL ] ; } t362 = ( ( ( 1.0 - t358 ) - t361 ) * 296.802103844292 + t358
* 461.523 ) + t361 * 4124.48151675695 ; t363 = X [ 118ULL ] * 461.523 / (
t362 == 0.0 ? 1.0E-16 : t362 ) ; if ( t363 <= 0.0 ) { intermediate_der2265 =
0.0 ; } else { intermediate_der2265 = t363 >= 1.0 ? 1.0 : t363 ; } t363 = X [
117ULL ] * 4124.48151675695 / ( t362 == 0.0 ? 1.0E-16 : t362 ) ; if ( t363 <=
0.0 ) { t365 = 0.0 ; } else { t365 = t363 >= 1.0 ? 1.0 : t363 ; } t273 [ 0ULL
] = X [ 115ULL ] ; tlu2_linear_nearest_prelookup ( & w_efOut . mField0 [ 0ULL
] , & w_efOut . mField1 [ 0ULL ] , & w_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ]
, & t22 [ 0ULL ] ) ; t10 = w_efOut ; tlu2_1d_linear_nearest_value ( & x_efOut
[ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t267_idx_0 = x_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & y_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; U_idx_0 = y_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ab_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t265_idx_0 = ab_efOut [ 0 ] ; t363 = ( ( ( 1.0 - intermediate_der2265 ) -
t365 ) * t267_idx_0 + U_idx_0 * intermediate_der2265 ) + t265_idx_0 * t365 ;
tlu2_1d_linear_nearest_value ( & bb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = bb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = cb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & db_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = db_efOut [ 0 ] ; t366 = ( (
( 1.0 - intermediate_der2265 ) - t365 ) * t267_idx_0 + U_idx_0 *
intermediate_der2265 ) + t265_idx_0 * t365 ; tlu2_1d_linear_nearest_value ( &
eb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t267_idx_0 = eb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & fb_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; U_idx_0 = fb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & gb_efOut [ 0ULL
] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t265_idx_0 = gb_efOut [ 0 ] ; t685 = intermediate_der7115 + ( ( ( ( 1.0 -
intermediate_der2265 ) - t365 ) * t267_idx_0 + U_idx_0 * intermediate_der2265
) + t265_idx_0 * t365 ) ; intermediate_der10216 = t685 / 2.0 *
7.8539816339744827E-5 ; intermediate_der2265 = ( t345 >= 0.0 ? t345 : 0.0 ) *
0.01 / ( intermediate_der10216 == 0.0 ? 1.0E-16 : intermediate_der10216 ) ;
t365 = intermediate_der2265 >= 0.0 ? intermediate_der2265 : -
intermediate_der2265 ; intermediate_der10126 = t365 > 1000.0 ? t365 : 1000.0
; t686 = t363 + intermediate_der1515 ; if ( t686 / 2.0 > 0.5 ) {
intermediate_der6972 = ( t363 + intermediate_der1515 ) / 2.0 ; } else {
intermediate_der6972 = 0.5 ; } t376 = pmf_log10 ( 6.9 / (
intermediate_der10126 == 0.0 ? 1.0E-16 : intermediate_der10126 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intermediate_der10126 == 0.0 ?
1.0E-16 : intermediate_der10126 ) + 0.00017169489553429715 ) * 3.24 ;
intermediate_der9568 = 1.0 / ( t376 == 0.0 ? 1.0E-16 : t376 ) ; t642 = (
pmf_pow ( intermediate_der6972 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intermediate_der9568 / 8.0 ) * 12.7 + 1.0 ; t858 = ( intermediate_der10126 -
1000.0 ) * ( intermediate_der9568 / 8.0 ) * intermediate_der6972 / ( t642 ==
0.0 ? 1.0E-16 : t642 ) ; intermediate_der10174 = ( t365 - 2000.0 ) / 2000.0 ;
intermediate_der10216 = intermediate_der10174 * intermediate_der10174 * 3.0 -
intermediate_der10174 * intermediate_der10174 * intermediate_der10174 * 2.0 ;
if ( t365 <= 2000.0 ) { intermediate_der10221 = 3.66 ; } else if ( t365 >=
4000.0 ) { intermediate_der10221 = t858 ; } else { intermediate_der10221 = (
1.0 - intermediate_der10216 ) * 3.66 + t858 * intermediate_der10216 ; } t688
= intermediate_der10221 * 0.031415926535897927 ; t383 = t686 / 2.0 ; if (
t365 > t688 / 7.8539816339744827E-5 / ( t383 == 0.0 ? 1.0E-16 : t383 ) / 30.0
) { t389 = ( t363 + intermediate_der1515 ) / 2.0 ; t376 =
intermediate_der10221 * 0.031415926535897927 / ( t365 == 0.0 ? 1.0E-16 : t365
) / 7.8539816339744827E-5 / ( t389 == 0.0 ? 1.0E-16 : t389 ) ; } else { t376
= 30.0 ; } t854 = ( X [ 119ULL ] - X [ 115ULL ] ) * ( 1.0 - pmf_exp ( - t376
) ) ; t379 = pmf_sqrt ( t323 * t323 + 1.6409606283812424E-14 ) ;
tlu2_1d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = hb_efOut [ 0 ] ; t382 =
t267_idx_0 ; tlu2_1d_linear_linear_value ( & ib_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = ib_efOut [ 0
] ; t325 = ( ( ( ( 1.0 - t325 ) - t919 ) * t382 + t336 * t325 ) + t267_idx_0
* t919 ) - X [ 19ULL ] * t904 * 0.001 ; t919 = t382 - X [ 19ULL ] *
0.296802103844292 ; t382 = t267_idx_0 - X [ 19ULL ] * 4.12448151675695 ; t383
= t336 - X [ 19ULL ] * 0.461523 ; t336 = U_idx_1 * 0.031415926535897927 ; if
( t336 * 0.0001 <= 7.8539816339744857E-13 ) { t384 = 7.8539816339744857E-13 ;
} else if ( t336 * 0.0001 >= 3.1415926535897929E-6 ) { t384 =
3.1415926535897929E-6 ; } else { t384 = t336 * 0.0001 ; } t385 = t384 /
7.8539816339744827E-5 ; if ( X [ 161ULL ] <= 0.0 ) { t386 = 0.0 ; } else {
t386 = X [ 161ULL ] >= 1.0 ? 1.0 : X [ 161ULL ] ; } if ( X [ 162ULL ] <= 0.0
) { t387 = 0.0 ; } else { t387 = X [ 162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; }
t388 = ( ( ( 1.0 - t386 ) - t387 ) * 296.802103844292 + t386 * 461.523 ) +
t387 * 4124.48151675695 ; t391 = X [ 159ULL ] * t388 ; t389 = X [ 160ULL ] /
( t391 == 0.0 ? 1.0E-16 : t391 ) ; t845 = X [ 160ULL ] / ( X [ 135ULL ] ==
0.0 ? 1.0E-16 : X [ 135ULL ] ) * ( X [ 163ULL ] / ( X [ 159ULL ] == 0.0 ?
1.0E-16 : X [ 159ULL ] ) ) ; t846 = X [ 160ULL ] / 1.01325 * ( X [ 164ULL ] /
( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ; t712 = ( X [ 135ULL ] +
1.01325 ) / 2.0 * 0.0010000000000000009 ; t736 = ( 1.0 - t385 ) * ( 1.0 -
t385 ) ; t837 = t712 * t736 ; t842 = ( t385 + 1.0 ) * ( 1.0 - t385 * t845 ) -
( 1.0 - t385 * t846 ) * t385 * 2.0 ; t758 = ( X [ 135ULL ] - 1.01325 ) * (
t842 >= t736 ? t842 : t736 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = ( X [
135ULL ] - 1.01325 ) / ( t712 == 0.0 ? 1.0E-16 : t712 ) ; t781 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 * 2.0 ; if (
X [ 135ULL ] - 1.01325 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = t837 ; }
else if ( X [ 135ULL ] - 1.01325 >= t712 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = t758 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = (
1.0 - t781 ) * t837 + t758 * t781 ; } t758 = ( t385 + 1.0 ) * ( 1.0 - t385 *
t846 ) - ( 1.0 - t385 * t845 ) * t385 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = ( 1.01325 - X
[ 135ULL ] ) * ( t758 >= t736 ? t758 : t736 ) ; intrm_sf_mf_203 = ( 1.01325 -
X [ 135ULL ] ) / ( t712 == 0.0 ? 1.0E-16 : t712 ) ; t675 = intrm_sf_mf_203 *
intrm_sf_mf_203 * 3.0 - intrm_sf_mf_203 * intrm_sf_mf_203 * intrm_sf_mf_203 *
2.0 ; if ( 1.01325 - X [ 135ULL ] <= 0.0 ) { intrm_sf_mf_203 = t837 ; } else
if ( 1.01325 - X [ 135ULL ] >= t712 ) { intrm_sf_mf_203 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ; } else {
intrm_sf_mf_203 = ( 1.0 - t675 ) * t837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t675 ; } if (
X [ 135ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X [ 135ULL ]
< 1.01325 ? intrm_sf_mf_203 : t837 ; } if ( X [ 159ULL ] <=
216.59999999999997 ) { t837 = 216.59999999999997 ; } else { t837 = X [ 159ULL
] >= 623.15 ? 623.15 : X [ 159ULL ] ; } t308 = t837 * t837 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = ( ( (
1074.1165326382541 + t837 * - 0.2214565261064077 ) + t308 *
0.00037212980109010952 ) * ( ( 1.0 - t386 ) - t387 ) + ( ( 1479.6504774710445
+ t837 * 1.200211433705052 ) + t308 * - 0.00038614513167842338 ) * t386 ) + (
( 12825.281119790017 + t837 * 6.9647057412830984 ) + t308 * -
0.007052486824683288 ) * t387 ; t402 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 - t388 ; t403
= X [ 160ULL ] * X [ 160ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 / ( t402 ==
0.0 ? 1.0E-16 : t402 ) ) ; t386 = pmf_sqrt ( fabs ( t403 / ( t388 == 0.0 ?
1.0E-16 : t388 ) / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ) *
t384 * 0.64 ; t406 = t389 * 2.0 ; t387 = ( X [ 135ULL ] - 1.01325 ) *
pmf_sqrt ( fabs ( t406 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ) )
* t384 * 0.64 ; t273 [ 0ULL ] = X [ 23ULL ] ; tlu2_linear_linear_prelookup (
& jb_efOut . mField0 [ 0ULL ] , & jb_efOut . mField1 [ 0ULL ] , & jb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [
0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t10 = jb_efOut ;
tlu2_1d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = kb_efOut [ 0 ] ; t837 =
t267_idx_0 ; if ( X [ 26ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = X [
26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) {
intrm_sf_mf_203 = 0.0 ; } else { intrm_sf_mf_203 = X [ 25ULL ] >= 1.0 ? 1.0 :
X [ 25ULL ] ; } t308 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 ) -
intrm_sf_mf_203 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 * 461.523 ) +
intrm_sf_mf_203 * 4124.48151675695 ; t402 = U_idx_2 * 0.01 ; t404 = pmf_sqrt
( t402 * t402 + 1.4768645655431184E-13 ) ; tlu2_1d_linear_linear_value ( &
lb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t267_idx_0 = lb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 = t267_idx_0
; tlu2_1d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL
] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = mb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 = ( ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 ) -
intrm_sf_mf_203 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 + t837 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 ) +
t267_idx_0 * intrm_sf_mf_203 ) - X [ 23ULL ] * t308 * 0.001 ; intrm_sf_mf_203
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 - X [ 23ULL
] * 0.296802103844292 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 = t267_idx_0
- X [ 23ULL ] * 4.12448151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha29 = t837 - X [
23ULL ] * 0.461523 ; if ( X [ 203ULL ] <= 0.0 ) { t837 = 0.0 ; } else { t837
= X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } if ( X [ 202ULL ] <= 0.0 ) {
intrm_sf_mf_437 = 0.0 ; } else { intrm_sf_mf_437 = X [ 202ULL ] >= 1.0 ? 1.0
: X [ 202ULL ] ; } zc_int55 = ( ( ( 1.0 - t837 ) - intrm_sf_mf_437 ) *
296.802103844292 + t837 * 461.523 ) + intrm_sf_mf_437 * 4124.48151675695 ;
t273 [ 0ULL ] = X [ 197ULL ] ; tlu2_linear_linear_prelookup ( & nb_efOut .
mField0 [ 0ULL ] , & nb_efOut . mField1 [ 0ULL ] , & nb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t10 = nb_efOut ;
tlu2_1d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = ob_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = pb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = qb_efOut [ 0 ] ; zc_int54 = (
( ( 1.0 - t837 ) - intrm_sf_mf_437 ) * t267_idx_0 + U_idx_0 * t837 ) +
t265_idx_0 * intrm_sf_mf_437 ; t273 [ 0ULL ] = X [ 200ULL ] ;
tlu2_linear_linear_prelookup ( & rb_efOut . mField0 [ 0ULL ] , & rb_efOut .
mField1 [ 0ULL ] , & rb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t6
= rb_efOut ; tlu2_1d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = sb_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = tb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ub_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = ub_efOut [ 0 ] ; zc_int53 = (
( ( 1.0 - t837 ) - intrm_sf_mf_437 ) * t267_idx_0 + U_idx_0 * t837 ) +
t265_idx_0 * intrm_sf_mf_437 ; t273 [ 0ULL ] = X [ 198ULL ] ;
tlu2_linear_linear_prelookup ( & vb_efOut . mField0 [ 0ULL ] , & vb_efOut .
mField1 [ 0ULL ] , & vb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t6
= vb_efOut ; tlu2_1d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = wb_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & xb_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = xb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = yb_efOut [ 0 ] ; zc_int92 = (
( ( 1.0 - t837 ) - intrm_sf_mf_437 ) * t267_idx_0 + U_idx_0 * t837 ) +
t265_idx_0 * intrm_sf_mf_437 ; t273 [ 0ULL ] = X [ 199ULL ] ;
tlu2_linear_linear_prelookup ( & ac_efOut . mField0 [ 0ULL ] , & ac_efOut .
mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ;
t10 = ac_efOut ; tlu2_1d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = bc_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t10 . mField0 [
0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = cc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = dc_efOut [ 0 ] ; zc_int93 = (
( ( 1.0 - t837 ) - intrm_sf_mf_437 ) * t267_idx_0 + U_idx_0 * t837 ) +
t265_idx_0 * intrm_sf_mf_437 ; t837 = ( X [ 220ULL ] * - 0.7999998 + U_idx_3
* 7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t837 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_437 =
7.8539816339744857E-13 ; } else if ( t837 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { intrm_sf_mf_437 = 3.1415926535897929E-6 ; } else {
intrm_sf_mf_437 = t837 * 7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 =
intrm_sf_mf_437 / 7.8539816339744827E-5 ; if ( X [ 239ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = X [
239ULL ] >= 1.0 ? 1.0 : X [ 239ULL ] ; } if ( X [ 240ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 = X [
240ULL ] >= 1.0 ? 1.0 : X [ 240ULL ] ; } intrm_sf_mf_446 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 *
4124.48151675695 ; t408 = X [ 237ULL ] * intrm_sf_mf_446 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 = X [ 238ULL
] / ( t408 == 0.0 ? 1.0E-16 : t408 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 = X [ 238ULL
] / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) * ( X [ 241ULL ] / ( X [
237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; t410 = X [ 238ULL ] / ( X [
220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) * ( X [ 242ULL ] / ( X [ 237ULL ]
== 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; t414 = ( X [ 28ULL ] + X [ 220ULL ] ) /
2.0 * 0.0010000000000000009 ; t411 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 ) ; U_idx_0 =
t414 * t411 ; t417 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * t410 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 = ( X [ 28ULL
] - X [ 220ULL ] ) * ( t417 >= t411 ? t417 : t411 ) ; intrm_sf_mf_456 = ( X [
28ULL ] - X [ 220ULL ] ) / ( t414 == 0.0 ? 1.0E-16 : t414 ) ; t418 =
intrm_sf_mf_456 * intrm_sf_mf_456 * 3.0 - intrm_sf_mf_456 * intrm_sf_mf_456 *
intrm_sf_mf_456 * 2.0 ; if ( X [ 28ULL ] - X [ 220ULL ] <= 0.0 ) {
intrm_sf_mf_456 = U_idx_0 ; } else if ( X [ 28ULL ] - X [ 220ULL ] >= t414 )
{ intrm_sf_mf_456 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 ; } else {
intrm_sf_mf_456 = ( 1.0 - t418 ) * U_idx_0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 * t418 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * t410
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( X [
220ULL ] - X [ 28ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 >= t411 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 : t411 ) ;
intrm_sf_mf_452 = ( X [ 220ULL ] - X [ 28ULL ] ) / ( t414 == 0.0 ? 1.0E-16 :
t414 ) ; t419 = intrm_sf_mf_452 * intrm_sf_mf_452 * 3.0 - intrm_sf_mf_452 *
intrm_sf_mf_452 * intrm_sf_mf_452 * 2.0 ; if ( X [ 220ULL ] - X [ 28ULL ] <=
0.0 ) { intrm_sf_mf_452 = U_idx_0 ; } else if ( X [ 220ULL ] - X [ 28ULL ] >=
t414 ) { intrm_sf_mf_452 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; } else {
intrm_sf_mf_452 = ( 1.0 - t419 ) * U_idx_0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * t419 ; } if
( X [ 28ULL ] > X [ 220ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
intrm_sf_mf_456 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 28ULL ]
< X [ 220ULL ] ? intrm_sf_mf_452 : U_idx_0 ; } if ( X [ 237ULL ] <=
216.59999999999997 ) { U_idx_0 = 216.59999999999997 ; } else { U_idx_0 = X [
237ULL ] >= 623.15 ? 623.15 : X [ 237ULL ] ; } t311 = U_idx_0 * U_idx_0 ;
intrm_sf_mf_456 = ( ( ( 1074.1165326382541 + U_idx_0 * - 0.2214565261064077 )
+ t311 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 ) + ( (
1479.6504774710445 + U_idx_0 * 1.200211433705052 ) + t311 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) + ( (
12825.281119790017 + U_idx_0 * 6.9647057412830984 ) + t311 * -
0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 ; t420 =
intrm_sf_mf_456 - intrm_sf_mf_446 ; t421 = X [ 238ULL ] * X [ 238ULL ] * (
intrm_sf_mf_456 / ( t420 == 0.0 ? 1.0E-16 : t420 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 = pmf_sqrt (
fabs ( t421 / ( intrm_sf_mf_446 == 0.0 ? 1.0E-16 : intrm_sf_mf_446 ) / ( X [
237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ) * intrm_sf_mf_437 * 0.64 ;
t424 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 * 2.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 = ( X [
28ULL ] - X [ 220ULL ] ) * pmf_sqrt ( fabs ( t424 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) )
) * intrm_sf_mf_437 * 0.64 ; if ( X [ 41ULL ] <= 0.0 ) { intrm_sf_mf_456 =
0.0 ; } else { intrm_sf_mf_456 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; }
if ( X [ 40ULL ] <= 0.0 ) { intrm_sf_mf_452 = 0.0 ; } else { intrm_sf_mf_452
= X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t311 = ( ( ( 1.0 -
intrm_sf_mf_456 ) - intrm_sf_mf_452 ) * 296.802103844292 + intrm_sf_mf_456 *
461.523 ) + intrm_sf_mf_452 * 4124.48151675695 ; t273 [ 0ULL ] = X [ 39ULL ]
; tlu2_linear_linear_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ;
t10 = ec_efOut ; tlu2_1d_linear_linear_value ( & fc_efOut [ 0ULL ] , & t10 .
mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = fc_efOut [ 0
] ; t420 = t267_idx_0 ; tlu2_1d_linear_linear_value ( & gc_efOut [ 0ULL ] , &
t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField16 , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 =
gc_efOut [ 0 ] ; t422 = t267_idx_0 ; tlu2_1d_linear_linear_value ( & hc_efOut
[ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t267_idx_0 = hc_efOut [ 0 ] ; intrm_sf_mf_456 = ( ( ( ( 1.0 -
intrm_sf_mf_456 ) - intrm_sf_mf_452 ) * t422 + t420 * intrm_sf_mf_456 ) +
t267_idx_0 * intrm_sf_mf_452 ) - X [ 39ULL ] * t311 * 0.001 ; intrm_sf_mf_452
= t422 - X [ 39ULL ] * 0.296802103844292 ; t422 = t267_idx_0 - X [ 39ULL ] *
4.12448151675695 ; t425 = t420 - X [ 39ULL ] * 0.461523 ; if ( X [ 47ULL ] <=
0.0 ) { t420 = 0.0 ; } else { t420 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ;
} if ( X [ 46ULL ] <= 0.0 ) { t426 = 0.0 ; } else { t426 = X [ 46ULL ] >= 1.0
? 1.0 : X [ 46ULL ] ; } intrm_sf_mf_975 = ( ( ( 1.0 - t420 ) - t426 ) *
296.802103844292 + t420 * 461.523 ) + t426 * 259.836612622973 ; t273 [ 0ULL ]
= X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & ic_efOut . mField0 [ 0ULL ]
, & ic_efOut . mField1 [ 0ULL ] , & ic_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ]
, & t22 [ 0ULL ] ) ; t10 = ic_efOut ; tlu2_1d_linear_linear_value ( &
jc_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t267_idx_0 = jc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Environment_convecti2 = t267_idx_0
; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL
] , & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = kc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I = t267_idx_0 ;
tlu2_1d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = lc_efOut [ 0 ] ; t420 = ( ( (
( 1.0 - t420 ) - t426 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Environment_convecti2 * t420 ) +
t267_idx_0 * t426 ) - X [ 45ULL ] * intrm_sf_mf_975 * 0.001 ; t426 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I - X [ 45ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I =
t267_idx_0 - X [ 45ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Environment_convecti2 - X [ 45ULL ]
* 0.461523 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Environment_convecti2
= pmf_sqrt ( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p = ( X [ 385ULL ] *
0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
51ULL ] <= 0.0 ) { zc_int273 = 0.0 ; } else { zc_int273 = X [ 51ULL ] >= 1.0
? 1.0 : X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = X [ 52ULL
] >= 1.0 ? 1.0 : X [ 52ULL ] ; } zc_int274 = ( ( ( 1.0 - zc_int273 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) *
296.802103844292 + zc_int273 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked *
259.836612622973 ; if ( X [ 391ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke = X [
391ULL ] >= 1.0 ? 1.0 : X [ 391ULL ] ; } if ( X [ 392ULL ] <= 0.0 ) { U_idx_3
= 0.0 ; } else { U_idx_3 = X [ 392ULL ] >= 1.0 ? 1.0 : X [ 392ULL ] ; } t273
[ 0ULL ] = X [ 49ULL ] ; tlu2_linear_nearest_prelookup ( & mc_efOut . mField0
[ 0ULL ] , & mc_efOut . mField1 [ 0ULL ] , & mc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL
] , & t22 [ 0ULL ] ) ; t10 = mc_efOut ; tlu2_1d_linear_nearest_value ( &
nc_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t267_idx_0 = nc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & oc_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; U_idx_0 = oc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & pc_efOut [ 0ULL
] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t265_idx_0 = pc_efOut [ 0 ] ; zc_int271 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke ) - U_idx_3 )
* t267_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke ) +
t265_idx_0 * U_idx_3 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = X [ 49ULL ]
* zc_int274 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke
= X [ 50ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) ;
U_idx_3 = - ( ( X [ 49ULL ] / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] )
- X [ 393ULL ] / ( X [ 394ULL ] == 0.0 ? 1.0E-16 : X [ 394ULL ] ) ) * X [
376ULL ] * zc_int274 ) / 0.0019634954084936209 ; if ( X [ 393ULL ] <=
216.59999999999997 ) { t427 = 216.59999999999997 ; } else { t427 = X [ 393ULL
] >= 623.15 ? 623.15 : X [ 393ULL ] ; } t429 = t427 * t427 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = ( ( (
1074.1165326382541 + t427 * - 0.2214565261064077 ) + t429 *
0.00037212980109010952 ) * ( ( 1.0 - zc_int273 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774710445 + t427 * 1.200211433705052 ) + t429 * -
0.00038614513167842338 ) * zc_int273 ) + ( ( 900.63941224837913 + t427 * -
0.044484923911364271 ) + t429 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ; t434 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 - zc_int274 ;
zc_int273 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 /
( t434 == 0.0 ? 1.0E-16 : t434 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = pmf_sqrt (
U_idx_3 * U_idx_3 * 9.999999999999999E-14 + fabs ( X [ 393ULL ] * zc_int273 *
zc_int274 ) * 1.0E-9 ) ; U_idx_2 = X [ 394ULL ] * X [ 394ULL ] * zc_int273 ;
t427 = - pmf_sqrt ( fabs ( U_idx_2 / ( zc_int274 == 0.0 ? 1.0E-16 : zc_int274
) / ( X [ 393ULL ] == 0.0 ? 1.0E-16 : X [ 393ULL ] ) ) ) *
0.0019634954084936209 ; if ( t427 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = t427 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = - t427 *
100000.0 ; } t439 = zc_int271 * 0.0019634954084936209 ; t429 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 * 0.05 / (
t439 == 0.0 ? 1.0E-16 : t439 ) ; t441 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke *
9.8174770424681068E-6 ; t432 = t427 * zc_int271 * 35.2 / ( t441 == 0.0 ?
1.0E-16 : t441 ) ; t433 = t429 >= 1.0 ? t429 : 1.0 ; t442 = pmf_log10 ( 6.9 /
( t433 == 0.0 ? 1.0E-16 : t433 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t433 == 0.0 ? 1.0E-16 : t433 ) + 2.8767404433520813E-5 ) * 3.24 ; t444 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke *
3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke = t427 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 * ( 1.0 / (
t442 == 0.0 ? 1.0E-16 : t442 ) ) * 0.55 / ( t444 == 0.0 ? 1.0E-16 : t444 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = ( t429 -
2000.0 ) / 2000.0 ; t433 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 * 2.0 ; if (
t429 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = t432 *
1.0E-5 ; } else if ( t429 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = ( (
1.0 - t433 ) * t432 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke * t433 ) *
1.0E-5 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = -
( X [ 376ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) /
0.0019634954084936209 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - X [ 50ULL ] ; if ( X
[ 387ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = X [
387ULL ] >= 1.0 ? 1.0 : X [ 387ULL ] ; } if ( X [ 386ULL ] <= 0.0 ) { t432 =
0.0 ; } else { t432 = X [ 386ULL ] >= 1.0 ? 1.0 : X [ 386ULL ] ; } t433 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) -
t432 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 * 461.523 ) +
t432 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = pmf_sqrt (
X [ 376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 ) ; if ( X [ 385ULL ] *
0.0019634954084936209 <= 1.9634954084936209E-11 ) { t432 =
1.9634954084936209E-11 ; } else if ( X [ 385ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t432 = 0.0012566370614359179 ; } else { t432 = X [
385ULL ] * 0.0019634954084936209 ; } t434 = t432 / 0.0019634954084936209 ; if
( X [ 408ULL ] <= 0.0 ) { t436 = 0.0 ; } else { t436 = X [ 408ULL ] >= 1.0 ?
1.0 : X [ 408ULL ] ; } if ( X [ 409ULL ] <= 0.0 ) { t438 = 0.0 ; } else {
t438 = X [ 409ULL ] >= 1.0 ? 1.0 : X [ 409ULL ] ; } t440 = ( ( ( 1.0 - t436 )
- t438 ) * 296.802103844292 + t436 * 461.523 ) + t438 * 259.836612622973 ;
t448 = X [ 406ULL ] * t440 ; t442 = X [ 407ULL ] / ( t448 == 0.0 ? 1.0E-16 :
t448 ) ; t443 = X [ 407ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * ( X [ 410ULL ] / (
X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ; t445 = X [ 407ULL ] /
1.01325 * ( X [ 411ULL ] / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) )
; t447 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p + 1.01325 )
/ 2.0 * 0.0010000000000000009 ; t446 = ( 1.0 - t434 ) * ( 1.0 - t434 ) ; t448
= t447 * t446 ; t453 = ( t434 + 1.0 ) * ( 1.0 - t434 * t443 ) - ( 1.0 - t434
* t445 ) * t434 * 2.0 ; t455 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) * ( t453 >=
t446 ? t453 : t446 ) ; intrm_sf_mf_1269 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) / ( t447 ==
0.0 ? 1.0E-16 : t447 ) ; t456 = intrm_sf_mf_1269 * intrm_sf_mf_1269 * 3.0 -
intrm_sf_mf_1269 * intrm_sf_mf_1269 * intrm_sf_mf_1269 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
zc_int51 = t448 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 >= t447 ) {
zc_int51 = t455 ; } else { zc_int51 = ( 1.0 - t456 ) * t448 + t455 * t456 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 = ( t434 +
1.0 ) * ( 1.0 - t434 * t445 ) - ( 1.0 - t434 * t443 ) * t434 * 2.0 ; t443 = (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 >= t446 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 : t446 ) ;
t445 = ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) /
( t447 == 0.0 ? 1.0E-16 : t447 ) ; t457 = t445 * t445 * 3.0 - t445 * t445 *
t445 * 2.0 ; if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p <= 0.0 ) {
intrm_sf_mf_146 = t448 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p >= t447 ) {
intrm_sf_mf_146 = t443 ; } else { intrm_sf_mf_146 = ( 1.0 - t457 ) * t448 +
t443 * t457 ; } if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p >
1.01325 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 =
zc_int51 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p < 1.01325 ?
intrm_sf_mf_146 : t448 ; } if ( X [ 406ULL ] <= 216.59999999999997 ) {
zc_int51 = 216.59999999999997 ; } else { zc_int51 = X [ 406ULL ] >= 623.15 ?
623.15 : X [ 406ULL ] ; } t317 = zc_int51 * zc_int51 ; intrm_sf_mf_146 = ( (
( 1074.1165326382541 + zc_int51 * - 0.2214565261064077 ) + t317 *
0.00037212980109010952 ) * ( ( 1.0 - t436 ) - t438 ) + ( ( 1479.6504774710445
+ zc_int51 * 1.200211433705052 ) + t317 * - 0.00038614513167842338 ) * t436 )
+ ( ( 900.63941224837913 + zc_int51 * - 0.044484923911364271 ) + t317 *
0.00036936011832043369 ) * t438 ; t458 = intrm_sf_mf_146 - t440 ; t459 = X [
407ULL ] * X [ 407ULL ] * ( intrm_sf_mf_146 / ( t458 == 0.0 ? 1.0E-16 : t458
) ) ; t436 = pmf_sqrt ( fabs ( t459 / ( t440 == 0.0 ? 1.0E-16 : t440 ) / ( X
[ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ) * t432 * 0.64 ; t462 = t442
* 2.0 ; t438 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p -
1.01325 ) * pmf_sqrt ( fabs ( t462 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) )
) * t432 * 0.64 ; t273 [ 0ULL ] = X [ 115ULL ] ; tlu2_linear_linear_prelookup
( & qc_efOut . mField0 [ 0ULL ] , & qc_efOut . mField1 [ 0ULL ] , & qc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [
0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t1 = qc_efOut ;
tlu2_1d_linear_linear_value ( & rc_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = rc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & sc_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; U_idx_0 = sc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tc_efOut [ 0ULL ] , & t1 . mField0 [ 0ULL ] ,
& t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t265_idx_0 = tc_efOut [ 0 ] ; zc_int51 = (
( ( 1.0 - t358 ) - t361 ) * t267_idx_0 + U_idx_0 * t358 ) + t265_idx_0 * t361
; t361 = t447 - ( - t447 ) ; t358 = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) - ( - t447
) ) / ( t361 == 0.0 ? 1.0E-16 : t361 ) ; intrm_sf_mf_146 = t323 >= 0.0 ? t323
: - t323 ; t317 = intrm_sf_mf_146 * 0.01 / ( t337 == 0.0 ? 1.0E-16 : t337 ) ;
t458 = t317 >= 1.0 ? t317 : 1.0 ; t467 = pmf_log10 ( 6.9 / ( t458 == 0.0 ?
1.0E-16 : t458 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t458 == 0.0
? 1.0E-16 : t458 ) + 0.00017169489553429715 ) * 3.24 ; t460 = 1.0 / ( t467 ==
0.0 ? 1.0E-16 : t467 ) ; t463 = t323 * intermediate_der7115 * 35.2 / ( t341
== 0.0 ? 1.0E-16 : t341 ) ; t467 = ( t317 - 2000.0 ) / 2000.0 ; t468 = t467 *
t467 * 3.0 - t467 * t467 * t467 * 2.0 ; if ( X [ 174ULL ] <= 0.0 ) { zc_int19
= 0.0 ; } else { zc_int19 = X [ 174ULL ] >= 1.0 ? 1.0 : X [ 174ULL ] ; } if (
X [ 173ULL ] <= 0.0 ) { t472 = 0.0 ; } else { t472 = X [ 173ULL ] >= 1.0 ?
1.0 : X [ 173ULL ] ; } zc_int48 = ( ( ( 1.0 - zc_int19 ) - t472 ) *
296.802103844292 + zc_int19 * 461.523 ) + t472 * 4124.48151675695 ; t273 [
0ULL ] = X [ 172ULL ] ; tlu2_linear_linear_prelookup ( & uc_efOut . mField0 [
0ULL ] , & uc_efOut . mField1 [ 0ULL ] , & uc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL ]
, & t22 [ 0ULL ] ) ; t10 = uc_efOut ; tlu2_1d_linear_linear_value ( &
vc_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t267_idx_0 = vc_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wc_efOut [
0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; U_idx_0 = wc_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & xc_efOut [ 0ULL
] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t265_idx_0 = xc_efOut [ 0 ] ; zc_int52 = ( ( ( 1.0 - zc_int19 ) - t472 ) *
t267_idx_0 + U_idx_0 * zc_int19 ) + t265_idx_0 * t472 ; zc_int19 = - pmf_sqrt
( ( ( real_T ) ( M [ 22ULL ] != 0 ) * 2.0 - 1.0 ) * ( zc_int211 / ( t904 ==
0.0 ? 1.0E-16 : t904 ) / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) )
* 7.8539816339744827E-5 ; t472 = intermediate_der7115 * zc_int19 * 35.2 / (
t341 == 0.0 ? 1.0E-16 : t341 ) ; if ( zc_int112 >= 0.0 ) { zc_int211 =
zc_int19 * 100000.0 ; } else { zc_int211 = - zc_int19 * 100000.0 ; } if ( M [
199ULL ] != 0 ) { zc_int112 = 216.59999999999997 ; } else { zc_int112 = M [
200ULL ] != 0 ? 623.15 : U_idx_6 ; } t273 [ 0ULL ] = U_idx_5 >= 0.0 ?
zc_int112 : X [ 39ULL ] ; tlu2_linear_linear_prelookup ( & yc_efOut . mField0
[ 0ULL ] , & yc_efOut . mField1 [ 0ULL ] , & yc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [ 0ULL ] , & t197 [ 0ULL
] , & t22 [ 0ULL ] ) ; t10 = yc_efOut ; tlu2_1d_linear_linear_value ( &
ad_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ] , & t10 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t197 [ 0ULL ] , & t22 [ 0ULL ] )
; t267_idx_0 = ad_efOut [ 0 ] ; zc_int112 = t267_idx_0 ; U_idx_0 = zc_int211
* 0.01 / ( t337 == 0.0 ? 1.0E-16 : t337 ) ; U_idx_1 = intermediate_der8954 >=
1.0 ? U_idx_0 : 1.0 ; t480 = pmf_log10 ( 6.9 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_1 == 0.0 ?
1.0E-16 : U_idx_1 ) + 0.00017169489553429715 ) * 3.24 ; zc_int19 = zc_int211
* ( 1.0 / ( t480 == 0.0 ? 1.0E-16 : t480 ) ) * zc_int19 * 0.55 / ( t344 ==
0.0 ? 1.0E-16 : t344 ) ; zc_int211 = ( U_idx_0 - 2000.0 ) / 2000.0 ; U_idx_0
= zc_int211 * zc_int211 * 3.0 - zc_int211 * zc_int211 * zc_int211 * 2.0 ; if
( intermediate_der8954 <= 2000.0 ) { zc_int211 = t472 * 1.0E-5 ; } else if (
intermediate_der8954 >= 4000.0 ) { zc_int211 = zc_int19 * 1.0E-5 ; } else {
zc_int211 = ( ( 1.0 - U_idx_0 ) * t472 + zc_int19 * U_idx_0 ) * 1.0E-5 ; }
intermediate_der8954 = pmf_sqrt ( t927 * t927 * 9.999999999999999E-14 + ( (
real_T ) ( M [ 2ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 139ULL ] * t912 * t904 *
1.0E-9 ) ; zc_int19 = t323 * intermediate_der8954 / 7.8539816339744827E-5 *
0.00031622776601683789 + zc_int211 ; t486 = - zc_int19 - zc_int19 * - 0.95 ;
t472 = ( - intermediate_der9495 - zc_int19 * - 0.95 ) / ( t486 == 0.0 ?
1.0E-16 : t486 ) ; if ( M [ 225ULL ] != 0 ) { zc_int211 = 216.59999999999997
; } else { zc_int211 = M [ 226ULL ] != 0 ? 623.15 : U_idx_8 ; } t273 [ 0ULL ]
= U_idx_7 >= 0.0 ? zc_int211 : X [ 45ULL ] ; tlu2_linear_linear_prelookup ( &
bd_efOut . mField0 [ 0ULL ] , & bd_efOut . mField1 [ 0ULL ] , & bd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t273 [
0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t6 = bd_efOut ;
tlu2_1d_linear_linear_value ( & cd_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = cd_efOut [ 0 ] ; zc_int211 =
t267_idx_0 ; U_idx_1 = pmf_sqrt ( U_idx_3 * U_idx_3 * 9.999999999999999E-14 +
( ( real_T ) ( M [ 11ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 393ULL ] * zc_int273 *
zc_int274 * 1.0E-9 ) ; zc_int273 = - pmf_sqrt ( ( ( real_T ) ( M [ 14ULL ] !=
0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( zc_int274 == 0.0 ? 1.0E-16 : zc_int274 ) /
( X [ 393ULL ] == 0.0 ? 1.0E-16 : X [ 393ULL ] ) ) ) * 0.0019634954084936209
; zc_int274 = zc_int271 * zc_int273 * 35.2 / ( t441 == 0.0 ? 1.0E-16 : t441 )
; if ( t427 >= 0.0 ) { U_idx_3 = zc_int273 * 100000.0 ; } else { U_idx_3 = -
zc_int273 * 100000.0 ; } zc_int271 = U_idx_3 * 0.05 / ( t439 == 0.0 ? 1.0E-16
: t439 ) ; t427 = t429 >= 1.0 ? zc_int271 : 1.0 ; U_idx_6 = pmf_log10 ( 6.9 /
( t427 == 0.0 ? 1.0E-16 : t427 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t427 == 0.0 ? 1.0E-16 : t427 ) + 2.8767404433520813E-5 ) * 3.24 ;
zc_int273 = zc_int273 * U_idx_3 * ( 1.0 / ( U_idx_6 == 0.0 ? 1.0E-16 :
U_idx_6 ) ) * 0.55 / ( t444 == 0.0 ? 1.0E-16 : t444 ) ; U_idx_3 = ( zc_int271
- 2000.0 ) / 2000.0 ; zc_int271 = U_idx_3 * U_idx_3 * 3.0 - U_idx_3 * U_idx_3
* U_idx_3 * 2.0 ; if ( t429 <= 2000.0 ) { U_idx_3 = zc_int274 * 1.0E-5 ; }
else if ( t429 >= 4000.0 ) { U_idx_3 = zc_int273 * 1.0E-5 ; } else { U_idx_3
= ( ( 1.0 - zc_int271 ) * zc_int274 + zc_int273 * zc_int271 ) * 1.0E-5 ; }
zc_int273 = - ( X [ 376ULL ] * U_idx_1 ) / 0.0019634954084936209 *
0.00031622776601683789 + U_idx_3 ; U_idx_8 = - zc_int273 - zc_int273 * - 0.95
; zc_int274 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke - zc_int273 *
- 0.95 ) / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ; zc_int271 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) * pmf_sqrt
( ( ( real_T ) ( M [ 18ULL ] != 0 ) * 2.0 - 1.0 ) * ( t462 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) )
) * t432 * 0.64 ; t427 = pmf_sqrt ( ( ( real_T ) ( M [ 19ULL ] != 0 ) * 2.0 -
1.0 ) * ( t459 / ( t440 == 0.0 ? 1.0E-16 : t440 ) / ( X [ 406ULL ] == 0.0 ?
1.0E-16 : X [ 406ULL ] ) ) ) * t432 * 0.64 ; t506 = t427 - t427 * 0.95 ; t429
= ( zc_int271 - t427 * 0.95 ) / ( t506 == 0.0 ? 1.0E-16 : t506 ) ; t431 = ( -
zc_int271 - t427 * 0.95 ) / ( t506 == 0.0 ? 1.0E-16 : t506 ) ; t439 = ( X [
135ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 97ULL ] != 0 ) * 2.0 -
1.0 ) * ( t406 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ) )
* t384 * 0.64 ; t441 = pmf_sqrt ( ( ( real_T ) ( M [ 109ULL ] != 0 ) * 2.0 -
1.0 ) * ( t403 / ( t388 == 0.0 ? 1.0E-16 : t388 ) / ( X [ 159ULL ] == 0.0 ?
1.0E-16 : X [ 159ULL ] ) ) ) * t384 * 0.64 ; t514 = t441 - t441 * 0.95 ; t444
= ( t439 - t441 * 0.95 ) / ( t514 == 0.0 ? 1.0E-16 : t514 ) ; t459 = t444 *
t444 * 3.0 - t444 * t444 * t444 * 2.0 ; t478 = ( - t439 - t441 * 0.95 ) / (
t514 == 0.0 ? 1.0E-16 : t514 ) ; t480 = t478 * t478 * 3.0 - t478 * t478 *
t478 * 2.0 ; t515 = X [ 172ULL ] * zc_int48 ; zc_int48 = ( ( real_T ) ( M [
164ULL ] != 0 ) * 2.0 - 1.0 ) * ( t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) ) * ( t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * (
t402 / 7.8539816339744827E-5 ) * ( t402 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + zc_int52 ; t522 = X [ 115ULL ] * t362 ; t362 = ( (
real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t522 / ( X [ 116ULL ] == 0.0
? 1.0E-16 : X [ 116ULL ] ) ) * ( t522 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [
116ULL ] ) ) * ( t323 / 7.8539816339744827E-5 ) * ( t323 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int51 ; t481 = ( (
real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t522 / ( X [ 116ULL ] == 0.0
? 1.0E-16 : X [ 116ULL ] ) ) * ( t522 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [
116ULL ] ) ) * ( t402 / 7.8539816339744827E-5 ) * ( t402 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int51 ; zc_int51 =
( ( real_T ) ( M [ 164ULL ] != 0 ) * 2.0 - 1.0 ) * ( t515 / ( X [ 24ULL ] ==
0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X
[ 24ULL ] ) ) * ( - t402 / 7.8539816339744827E-5 ) * ( - t402 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int52 ; t539 = X [
200ULL ] * zc_int55 ; zc_int52 = ( ( real_T ) ( M [ 169ULL ] != 0 ) * 2.0 -
1.0 ) * ( t539 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t539 /
( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t402 /
7.8539816339744827E-5 ) * ( t402 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + zc_int53 ; t544 = X [ 197ULL ] * zc_int55 ; zc_int53
= ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 ) * ( t544 / ( X [ 116ULL ]
== 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t544 / ( X [ 116ULL ] == 0.0 ?
1.0E-16 : X [ 116ULL ] ) ) * ( t402 / 7.8539816339744827E-5 ) * ( t402 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int54 ; t549 = X [
199ULL ] * zc_int55 ; zc_int54 = ( ( real_T ) ( M [ 171ULL ] != 0 ) * 2.0 -
1.0 ) * ( t549 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t549
/ ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( - t402 /
7.8539816339744827E-5 ) * ( - t402 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + zc_int93 ; t556 = X [ 198ULL ] * zc_int55 ; zc_int55
= ( ( real_T ) ( M [ 172ULL ] != 0 ) * 2.0 - 1.0 ) * ( t556 / ( X [ 24ULL ]
== 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t556 / ( X [ 24ULL ] == 0.0 ? 1.0E-16
: X [ 24ULL ] ) ) * ( - t402 / 7.8539816339744827E-5 ) * ( - t402 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int92 ; zc_int92 =
( X [ 28ULL ] - X [ 220ULL ] ) * pmf_sqrt ( ( ( real_T ) ( M [ 184ULL ] != 0
) * 2.0 - 1.0 ) * ( t424 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) )
) * intrm_sf_mf_437 * 0.64 ; zc_int93 = pmf_sqrt ( ( ( real_T ) ( M [ 185ULL
] != 0 ) * 2.0 - 1.0 ) * ( t421 / ( intrm_sf_mf_446 == 0.0 ? 1.0E-16 :
intrm_sf_mf_446 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ) *
intrm_sf_mf_437 * 0.64 ; t568 = zc_int93 - zc_int93 * 0.95 ; t483 = (
zc_int92 - zc_int93 * 0.95 ) / ( t568 == 0.0 ? 1.0E-16 : t568 ) ; t484 = t483
* t483 * 3.0 - t483 * t483 * t483 * 2.0 ; t485 = ( - zc_int92 - zc_int93 *
0.95 ) / ( t568 == 0.0 ? 1.0E-16 : t568 ) ; t488 = t485 * t485 * 3.0 - t485 *
t485 * t485 * 2.0 ; U_idx_0 = - ( real_T ) ( t321 >= 0.0 ) * 1000.0 /
0.099999999999999978 ; if ( ( real_T ) ( t321 >= 0.0 ) * t321 * 1000.0 + (
real_T ) ( t321 < 0.0 ) * X [ 59ULL ] <= 0.9 ) { t19 = 0.0 ; } else { t19 = (
real_T ) ( t321 >= 0.0 ) * t321 * 1000.0 + ( real_T ) ( t321 < 0.0 ) * X [
59ULL ] >= 1.0 ? 0.0 : U_idx_0 * t19 * 6.0 - t19 * t19 * U_idx_0 * 6.0 ; }
U_idx_3 = - 0.005 ; U_idx_1 = t679 / 2.0 * 7.8539816339744827E-5 ; U_idx_9 =
- ( t345 <= 0.0 ? U_idx_3 : 0.0 ) * 0.01 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; t265_idx_0 = t346 >= 0.0 ? U_idx_9 : - U_idx_9 ; t679 =
intermediate_der1480 > 1000.0 ? t265_idx_0 : 0.0 ; U_idx_2 = ( 6.9 / ( t348
== 0.0 ? 1.0E-16 : t348 ) + 0.00017169489553429715 ) * 2.3025850929940459 ;
U_idx_0 = pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 : t348 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 : t348 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 : t348
) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 :
t348 ) + 0.00017169489553429715 ) * 10.497600000000002 ; U_idx_1 = t348 *
t348 ; U_idx_6 = - 1.0 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * ( - 6.9 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * ( 1.0 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ) * pmf_log10 ( 6.9 / ( t348 == 0.0 ? 1.0E-16 : t348 ) +
0.00017169489553429715 ) * t679 * 6.48 ; U_idx_2 = pmf_sqrt ( t342 / 8.0 ) *
2.0 ; U_idx_1 = ( ( pmf_pow ( t883 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( t342 / 8.0 ) * 12.7 + 1.0 ) * ( ( pmf_pow ( t883 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( t342 / 8.0 ) * 12.7 + 1.0 ) ; t342 = ( pmf_pow ( t883 ,
0.66666666666666663 ) - 1.0 ) * ( - ( ( t348 - 1000.0 ) * ( t342 / 8.0 ) *
t883 ) / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * ( U_idx_6 / 8.0 ) * ( 1.0
/ ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 12.7 + ( ( t348 - 1000.0 ) * (
U_idx_6 / 8.0 ) + t342 / 8.0 * t679 ) * t883 / ( t638 == 0.0 ? 1.0E-16 : t638
) ; t883 = t265_idx_0 / 2000.0 ; t348 = t883 * intermediate_der1516 * 6.0 -
intermediate_der1516 * intermediate_der1516 * t883 * 6.0 ; if (
intermediate_der1480 <= 2000.0 ) { t883 = 0.0 ; } else if (
intermediate_der1480 >= 4000.0 ) { t883 = t342 ; } else { t883 = ( - t348 *
3.66 + t348 * t320 ) + t342 * t352 ; } U_idx_6 = t682 / 2.0 ; if (
intermediate_der1480 > t684 / 7.8539816339744827E-5 / ( U_idx_6 == 0.0 ?
1.0E-16 : U_idx_6 ) / 30.0 ) { U_idx_6 = intermediate_der1480 *
intermediate_der1480 ; U_idx_0 = ( intermediate_der1515 + t914 ) / 2.0 ; t342
= ( - ( t18 * 0.031415926535897927 ) / ( U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6 )
* t265_idx_0 + t883 * 0.031415926535897927 / ( intermediate_der1480 == 0.0 ?
1.0E-16 : intermediate_der1480 ) ) / 7.8539816339744827E-5 / ( U_idx_0 == 0.0
? 1.0E-16 : U_idx_0 ) ; } else { t342 = 0.0 ; } t914 = - ( - t342 * pmf_exp (
- t355 ) ) * ( X [ 119ULL ] - X [ 134ULL ] ) ; t265_idx_0 = t865 +
intermediate_der1251 ; t883 = t265_idx_0 / 2.0 * ( t682 / 2.0 ) * ( U_idx_9 *
7.8539816339744827E-5 / 0.01 ) * t356 + t346 * 7.8539816339744827E-5 / 0.01 *
( t682 / 2.0 ) * ( t265_idx_0 / 2.0 ) * t914 ; t265_idx_0 = t685 / 2.0 *
7.8539816339744827E-5 ; t914 = ( t345 >= 0.0 ? U_idx_3 : 0.0 ) * 0.01 / (
t265_idx_0 == 0.0 ? 1.0E-16 : t265_idx_0 ) ; t865 = intermediate_der2265 >=
0.0 ? t914 : - t914 ; t342 = t365 > 1000.0 ? t865 : 0.0 ; U_idx_3 = ( 6.9 / (
intermediate_der10126 == 0.0 ? 1.0E-16 : intermediate_der10126 ) +
0.00017169489553429715 ) * 2.3025850929940459 ; U_idx_9 = pmf_log10 ( 6.9 / (
intermediate_der10126 == 0.0 ? 1.0E-16 : intermediate_der10126 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intermediate_der10126 == 0.0 ?
1.0E-16 : intermediate_der10126 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intermediate_der10126 == 0.0 ? 1.0E-16 : intermediate_der10126 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intermediate_der10126 == 0.0 ?
1.0E-16 : intermediate_der10126 ) + 0.00017169489553429715 ) *
10.497600000000002 ; t265_idx_0 = intermediate_der10126 *
intermediate_der10126 ; t320 = - 1.0 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 )
* ( - 6.9 / ( t265_idx_0 == 0.0 ? 1.0E-16 : t265_idx_0 ) ) * ( 1.0 / (
U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) * pmf_log10 ( 6.9 / (
intermediate_der10126 == 0.0 ? 1.0E-16 : intermediate_der10126 ) +
0.00017169489553429715 ) * t342 * 6.48 ; U_idx_3 = pmf_sqrt (
intermediate_der9568 / 8.0 ) * 2.0 ; t265_idx_0 = ( ( pmf_pow (
intermediate_der6972 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intermediate_der9568 / 8.0 ) * 12.7 + 1.0 ) * ( ( pmf_pow (
intermediate_der6972 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intermediate_der9568 / 8.0 ) * 12.7 + 1.0 ) ; t342 = ( pmf_pow (
intermediate_der6972 , 0.66666666666666663 ) - 1.0 ) * ( - ( (
intermediate_der10126 - 1000.0 ) * ( intermediate_der9568 / 8.0 ) *
intermediate_der6972 ) / ( t265_idx_0 == 0.0 ? 1.0E-16 : t265_idx_0 ) ) * (
t320 / 8.0 ) * ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) * 12.7 + ( (
intermediate_der10126 - 1000.0 ) * ( t320 / 8.0 ) + intermediate_der9568 /
8.0 * t342 ) * intermediate_der6972 / ( t642 == 0.0 ? 1.0E-16 : t642 ) ; t320
= t865 / 2000.0 ; t345 = t320 * intermediate_der10174 * 6.0 -
intermediate_der10174 * intermediate_der10174 * t320 * 6.0 ; if ( t365 <=
2000.0 ) { t320 = 0.0 ; } else if ( t365 >= 4000.0 ) { t320 = t342 ; } else {
t320 = ( - t345 * 3.66 + t345 * t858 ) + t342 * intermediate_der10216 ; }
t265_idx_0 = t686 / 2.0 ; if ( t365 > t688 / 7.8539816339744827E-5 / (
t265_idx_0 == 0.0 ? 1.0E-16 : t265_idx_0 ) / 30.0 ) { t265_idx_0 = t365 *
t365 ; t684 = ( t363 + intermediate_der1515 ) / 2.0 ; t342 = ( - (
intermediate_der10221 * 0.031415926535897927 ) / ( t265_idx_0 == 0.0 ?
1.0E-16 : t265_idx_0 ) * t865 + t320 * 0.031415926535897927 / ( t365 == 0.0 ?
1.0E-16 : t365 ) ) / 7.8539816339744827E-5 / ( t684 == 0.0 ? 1.0E-16 : t684 )
; } else { t342 = 0.0 ; } t865 = - ( - t342 * pmf_exp ( - t376 ) ) * ( X [
119ULL ] - X [ 115ULL ] ) ; U_idx_9 = t366 + intermediate_der1251 ;
intermediate_der1251 = t883 + ( U_idx_9 / 2.0 * ( t686 / 2.0 ) * ( t914 *
7.8539816339744827E-5 / 0.01 ) * t854 + intermediate_der2265 *
7.8539816339744827E-5 / 0.01 * ( t686 / 2.0 ) * ( U_idx_9 / 2.0 ) * t865 ) ;
U_idx_3 = pmf_sqrt ( t323 * t323 + 2.0360111955237585E-13 ) * 2.0 ; t914 =
1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) * t323 * - 0.01 * 2.0 ; U_idx_3
= pmf_sqrt ( t323 * t323 + 2.3237892571262758E-14 ) * 2.0 ; t883 = 1.0 / (
U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) * t323 * - 0.01 * 2.0 ; U_idx_3 =
pmf_sqrt ( t323 * t323 + 1.6409606283812424E-14 ) * 2.0 ; t865 = 1.0 / (
U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) * t323 * - 0.01 * 2.0 ; if ( t336 *
0.0001 <= 7.8539816339744857E-13 ) { t320 = 0.0 ; } else if ( t336 * 0.0001
>= 3.1415926535897929E-6 ) { t320 = 0.0 ; } else { t320 =
3.1415926535897929E-6 ; } t336 = t320 / 7.8539816339744827E-5 ; if ( X [
126ULL ] > 0.0 ) { U_idx_6 = t384 * t384 ; t342 = ( ( ( t385 + 1.0 ) * ( X [
126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) * ( - ( X [ 126ULL ] /
0.64 ) / ( U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6 ) ) * t320 * 2.0 / 2.0 / ( t389
== 0.0 ? 1.0E-16 : t389 ) ) + X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 :
t384 ) * ( X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) / 2.0 / (
t389 == 0.0 ? 1.0E-16 : t389 ) * t336 ) * ( 1.0 - t385 * t845 ) + - ( t845 *
t336 ) * ( t385 + 1.0 ) * ( X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 :
t384 ) * ( X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) / 2.0 / (
t389 == 0.0 ? 1.0E-16 : t389 ) ) ) * 9.9999999999999991E-11 ; } else if ( X [
126ULL ] < 0.0 ) { U_idx_0 = t384 * t384 ; t342 = ( ( ( t385 + 1.0 ) * ( X [
126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) * ( - ( X [ 126ULL ] /
0.64 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * t320 * 2.0 / 2.0 / ( t389
== 0.0 ? 1.0E-16 : t389 ) ) + X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 :
t384 ) * ( X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) / 2.0 / (
t389 == 0.0 ? 1.0E-16 : t389 ) * t336 ) * ( 1.0 - t385 * t846 ) + - ( t846 *
t336 ) * ( t385 + 1.0 ) * ( X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 :
t384 ) * ( X [ 126ULL ] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) / 2.0 / (
t389 == 0.0 ? 1.0E-16 : t389 ) ) ) * 9.9999999999999991E-11 ; } else { t342 =
0.0 ; } t345 = - t336 * ( 1.0 - t385 ) * 2.0 ; t346 = t712 * t345 ; t348 = (
X [ 135ULL ] - 1.01325 ) * ( t842 >= t736 ? ( ( 1.0 - t385 * t845 ) * t336 +
- ( t845 * t336 ) * ( t385 + 1.0 ) ) - ( ( 1.0 - t385 * t846 ) * t336 * 2.0 +
- ( t846 * t336 ) * t385 * 2.0 ) : t345 ) ; if ( X [ 135ULL ] - 1.01325 <=
0.0 ) { intermediate_der1480 = t346 ; } else if ( X [ 135ULL ] - 1.01325 >=
t712 ) { intermediate_der1480 = t348 ; } else { intermediate_der1480 = ( 1.0
- t781 ) * t346 + t348 * t781 ; } t336 = ( 1.01325 - X [ 135ULL ] ) * ( t758
>= t736 ? ( ( 1.0 - t385 * t846 ) * t336 + - ( t846 * t336 ) * ( t385 + 1.0 )
) - ( ( 1.0 - t385 * t845 ) * t336 * 2.0 + - ( t845 * t336 ) * t385 * 2.0 ) :
t345 ) ; if ( 1.01325 - X [ 135ULL ] <= 0.0 ) { t345 = t346 ; } else if (
1.01325 - X [ 135ULL ] >= t712 ) { t345 = t336 ; } else { t345 = ( 1.0 - t675
) * t346 + t336 * t675 ; } if ( X [ 135ULL ] > 1.01325 ) { t336 =
intermediate_der1480 ; } else { t336 = X [ 135ULL ] < 1.01325 ? t345 : t346 ;
} t846 = pmf_sqrt ( t402 * t402 + 1.8324100759713822E-12 ) * 2.0 ; t346 = 1.0
/ ( t846 == 0.0 ? 1.0E-16 : t846 ) * t402 * 0.01 * 2.0 ; t736 = pmf_sqrt (
t402 * t402 + 2.0914103314136477E-13 ) * 2.0 ; intermediate_der1480 = 1.0 / (
t736 == 0.0 ? 1.0E-16 : t736 ) * t402 * 0.01 * 2.0 ; t712 = pmf_sqrt ( t402 *
t402 + 1.4768645655431184E-13 ) * 2.0 ; t348 = 1.0 / ( t712 == 0.0 ? 1.0E-16
: t712 ) * t402 * 0.01 * 2.0 ; intermediate_der1515 = 1.0 / ( t846 == 0.0 ?
1.0E-16 : t846 ) * t402 * 0.01 * 2.0 ; intermediate_der1516 = 1.0 / ( t736 ==
0.0 ? 1.0E-16 : t736 ) * t402 * 0.01 * 2.0 ; t352 = 1.0 / ( t712 == 0.0 ?
1.0E-16 : t712 ) * t402 * 0.01 * 2.0 ; if ( t837 * 7.8539816339744827E-5 <=
7.8539816339744857E-13 ) { t355 = 0.0 ; } else if ( t837 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) { t355 = 0.0 ; } else { t355
= 0.000628318373638326 ; } t18 = t355 / 7.8539816339744827E-5 ; if ( - X [
213ULL ] > 0.0 ) { t758 = intrm_sf_mf_437 * intrm_sf_mf_437 ; t356 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) * ( -
X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437 )
* ( - ( - X [ 213ULL ] / 0.64 ) / ( t758 == 0.0 ? 1.0E-16 : t758 ) ) * t355 *
2.0 / 2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ) ) + - X [
213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437 ) * (
- X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437
) ) / 2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ) * t18 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 ) + - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 * t18 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) * ( -
X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437 )
* ( - X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 :
intrm_sf_mf_437 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ) )
) * 9.9999999999999991E-11 ; } else if ( - X [ 213ULL ] < 0.0 ) { U_idx_0 =
intrm_sf_mf_437 * intrm_sf_mf_437 ; t356 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) * ( -
X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437 )
* ( - ( - X [ 213ULL ] / 0.64 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) *
t355 * 2.0 / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ) )
+ - X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 :
intrm_sf_mf_437 ) * ( - X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ?
1.0E-16 : intrm_sf_mf_437 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ) *
t18 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * t410 ) + -
( t410 * t18 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) * ( -
X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437 )
* ( - X [ 213ULL ] / 0.64 / ( intrm_sf_mf_437 == 0.0 ? 1.0E-16 :
intrm_sf_mf_437 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 ) )
) * 9.9999999999999991E-11 ; } else { t356 = 0.0 ; } t363 = - t18 * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 ) * 2.0 ;
intermediate_der2265 = t414 * t363 ; t366 = ( X [ 28ULL ] - X [ 220ULL ] ) *
( t417 >= t411 ? ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 ) * t18 + - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 * t18 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) ) - (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 *
t410 ) * t18 * 2.0 + - ( t410 * t18 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * 2.0 ) :
t363 ) ; if ( X [ 28ULL ] - X [ 220ULL ] <= 0.0 ) { t365 =
intermediate_der2265 ; } else if ( X [ 28ULL ] - X [ 220ULL ] >= t414 ) {
t365 = t366 ; } else { t365 = ( 1.0 - t418 ) * intermediate_der2265 + t366 *
t418 ; } t18 = ( X [ 220ULL ] - X [ 28ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V18 >= t411 ? ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * t410
) * t18 + - ( t410 * t18 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 + 1.0 ) ) - (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 ) * t18 * 2.0
+ - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V30 * t18 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V21 * 2.0 ) :
t363 ) ; if ( X [ 220ULL ] - X [ 28ULL ] <= 0.0 ) { t363 =
intermediate_der2265 ; } else if ( X [ 220ULL ] - X [ 28ULL ] >= t414 ) {
t363 = t18 ; } else { t363 = ( 1.0 - t419 ) * intermediate_der2265 + t18 *
t419 ; } if ( X [ 28ULL ] > X [ 220ULL ] ) { t18 = t365 ; } else { t18 = X [
28ULL ] < X [ 220ULL ] ? t363 : intermediate_der2265 ; } t712 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ; t365 = X [ 410ULL ] /
( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) * ( - X [ 407ULL ] / ( t712
== 0.0 ? 1.0E-16 : t712 ) ) * 10.0 ; if ( X [ 376ULL ] > 0.0 ) { t366 = - (
t434 * t365 ) * ( t434 + 1.0 ) * ( X [ 376ULL ] / 0.64 / ( t432 == 0.0 ?
1.0E-16 : t432 ) * ( X [ 376ULL ] / 0.64 / ( t432 == 0.0 ? 1.0E-16 : t432 ) )
/ 2.0 / ( t442 == 0.0 ? 1.0E-16 : t442 ) ) * 9.9999999999999991E-11 ; } else
{ t366 = 0.0 ; } intermediate_der6972 = 0.0050000000000000044 ;
intermediate_der10126 = t446 * intermediate_der6972 ; t858 = ( t453 >= t446 ?
t453 : t446 ) * 10.0 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) * ( t453 >=
t446 ? - ( t434 * t365 ) * ( t434 + 1.0 ) : 0.0 ) ; t837 = t447 * t447 ;
intermediate_der9568 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) / ( t837 ==
0.0 ? 1.0E-16 : t837 ) * intermediate_der6972 + 10.0 / ( t447 == 0.0 ?
1.0E-16 : t447 ) ; intermediate_der10174 = intermediate_der9568 *
intrm_sf_mf_1269 * 6.0 - intrm_sf_mf_1269 * intrm_sf_mf_1269 *
intermediate_der9568 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 <= 0.0 ) {
intermediate_der9568 = intermediate_der10126 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 >= t447 ) {
intermediate_der9568 = t858 ; } else { intermediate_der9568 = ( ( -
intermediate_der10174 * t448 + ( 1.0 - t456 ) * intermediate_der10126 ) +
t455 * intermediate_der10174 ) + t858 * t456 ; } t365 = - 10.0 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 >= t446 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 : t446 ) + (
1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val12 >= t446 ? - (
- ( t434 * t365 ) * t434 * 2.0 ) : 0.0 ) ; t858 = - ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) / ( t837 == 0.0 ?
1.0E-16 : t837 ) * intermediate_der6972 + - 10.0 / ( t447 == 0.0 ? 1.0E-16 :
t447 ) ; intermediate_der10174 = t858 * t445 * 6.0 - t445 * t445 * t858 * 6.0
; if ( 1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p <= 0.0
) { t858 = intermediate_der10126 ; } else if ( 1.01325 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p >= t447 ) { t858 = t365
; } else { t858 = ( ( - intermediate_der10174 * t448 + ( 1.0 - t457 ) *
intermediate_der10126 ) + t443 * intermediate_der10174 ) + t365 * t457 ; } if
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p > 1.01325 ) { t365 =
intermediate_der9568 ; } else { t365 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p < 1.01325 ? t858 :
intermediate_der10126 ; } t837 = ( t447 - ( - t447 ) ) * ( t447 - ( - t447 )
) ; intermediate_der10126 = ( intermediate_der6972 - ( - intermediate_der6972
) ) * ( - ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325
) - ( - t447 ) ) / ( t837 == 0.0 ? 1.0E-16 : t837 ) ) + ( 10.0 - ( -
intermediate_der6972 ) ) / ( t361 == 0.0 ? 1.0E-16 : t361 ) ;
intermediate_der6972 = intermediate_der10126 * t358 * 6.0 - t358 * t358 *
intermediate_der10126 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 <= - t447 ) {
t358 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 >= t447 ) {
t358 = 10.0 ; } else { t358 = ( - intermediate_der6972 * 1.01325 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p * intermediate_der6972
) + 10.0 * ( t358 * t358 * 3.0 - t358 * t358 * t358 * 2.0 ) ; } t361 = t323
>= 0.0 ? - 0.01 : 0.01 ; intermediate_der10126 = t361 * 0.01 / ( t337 == 0.0
? 1.0E-16 : t337 ) ; t846 = ( 6.9 / ( t458 == 0.0 ? 1.0E-16 : t458 ) +
0.00017169489553429715 ) * 2.3025850929940459 ; t736 = pmf_log10 ( 6.9 / (
t458 == 0.0 ? 1.0E-16 : t458 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 /
( t458 == 0.0 ? 1.0E-16 : t458 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t458 == 0.0 ? 1.0E-16 : t458 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t458 == 0.0 ? 1.0E-16 : t458 ) + 0.00017169489553429715 ) *
10.497600000000002 ; t837 = t458 * t458 ; intermediate_der9568 = - 1.0 / (
t736 == 0.0 ? 1.0E-16 : t736 ) * ( - 6.9 / ( t837 == 0.0 ? 1.0E-16 : t837 ) )
* ( 1.0 / ( t846 == 0.0 ? 1.0E-16 : t846 ) ) * pmf_log10 ( 6.9 / ( t458 ==
0.0 ? 1.0E-16 : t458 ) + 0.00017169489553429715 ) * ( t317 >= 1.0 ?
intermediate_der10126 : 0.0 ) * 6.48 ; intermediate_der7115 = - 0.01 *
intermediate_der7115 * 35.2 / ( t341 == 0.0 ? 1.0E-16 : t341 ) ; t361 = ( ( -
0.01 * intrm_sf_mf_146 + t323 * t361 ) * t460 + t323 * intermediate_der9568 *
intrm_sf_mf_146 ) * 0.55 / ( t344 == 0.0 ? 1.0E-16 : t344 ) ;
intermediate_der6972 = intermediate_der10126 / 2000.0 ; intermediate_der10126
= intermediate_der6972 * t467 * 6.0 - t467 * t467 * intermediate_der6972 *
6.0 ; if ( t317 <= 2000.0 ) { intermediate_der6972 = intermediate_der7115 *
9.9999999999999991E-11 ; } else if ( t317 >= 4000.0 ) { intermediate_der6972
= t361 * 9.9999999999999991E-11 ; } else { intermediate_der6972 = ( ( ( -
intermediate_der10126 * t463 + ( 1.0 - t468 ) * intermediate_der7115 ) +
intermediate_der10126 * ( t323 * intrm_sf_mf_146 * t460 * 0.55 / ( t344 ==
0.0 ? 1.0E-16 : t344 ) ) ) + t361 * t468 ) * 9.9999999999999991E-11 ; } if (
U_idx_10 >= 1.0 ) { intermediate_der7115 = 0.0 ; } else {
intermediate_der7115 = ( real_T ) ! ( U_idx_10 <= 0.0 ) ; } if ( M [ 199ULL ]
!= 0 ) { t361 = 0.0 ; } else { t361 = ( real_T ) ( M [ 200ULL ] == 0 ) ; }
tlu2_1d_linear_linear_value ( & dd_efOut [ 0ULL ] , & t10 . mField1 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = dd_efOut [ 0 ] ; t361 =
t267_idx_0 * ( U_idx_5 >= 0.0 ? t361 : 0.0 ) ; t846 = pmf_sqrt ( t927 * t927
* 9.999999999999999E-14 + ( ( real_T ) ( M [ 2ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 139ULL ] * t912 * t904 * 1.0E-9 ) * 2.0 ; t736 = t323 * ( 1.0 / ( t846 ==
0.0 ? 1.0E-16 : t846 ) * t927 * ( ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0 ?
1.0E-16 : X [ 20ULL ] ) - X [ 139ULL ] / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X
[ 140ULL ] ) ) * - 0.01 * t904 / 7.8539816339744827E-5 ) *
1.9999999999999998E-13 ) + - 0.01 * intermediate_der8954 ; t927 = t736 /
7.8539816339744827E-5 * 0.00031622776601683789 ; t842 = ( - zc_int19 -
zc_int19 * - 0.95 ) * ( - zc_int19 - zc_int19 * - 0.95 ) ; t912 = ( - t927 -
t927 * - 0.95 ) * ( - ( - intermediate_der9495 - zc_int19 * - 0.95 ) / ( t842
== 0.0 ? 1.0E-16 : t842 ) ) + - ( t927 * - 0.95 ) / ( t486 == 0.0 ? 1.0E-16 :
t486 ) ; if ( M [ 225ULL ] != 0 ) { intermediate_der8954 = 0.0 ; } else {
intermediate_der8954 = ( real_T ) ( M [ 226ULL ] == 0 ) ; }
intermediate_der10126 = t912 * t472 * 6.0 - t472 * t472 * t912 * 6.0 ;
tlu2_1d_linear_linear_value ( & ed_efOut [ 0ULL ] , & t6 . mField1 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t197 [ 0ULL ] , & t22 [ 0ULL ] ) ; t267_idx_0 = ed_efOut [ 0 ] ;
intermediate_der8954 = t267_idx_0 * ( U_idx_7 >= 0.0 ? intermediate_der8954 :
0.0 ) ; if ( - intermediate_der9495 <= t930 * - 0.95 ) { t912 = 0.0 ; } else
if ( - intermediate_der9495 >= - t930 ) { t912 = t927 ; } else { t912 = ( -
intermediate_der10126 * intermediate_der9495 + intermediate_der10126 *
zc_int19 ) + t927 * ( t472 * t472 * 3.0 - t472 * t472 * t472 * 2.0 ) ; } t837
= X [ 384ULL ] * t433 ; t842 = - ( X [ 384ULL ] * t433 ) ; t927 = ( ( (
real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t837 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ) * ( t842 / ( t712
== 0.0 ? 1.0E-16 : t712 ) ) * 10.0 + ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 -
1.0 ) * ( t837 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ) * (
t842 / ( t712 == 0.0 ? 1.0E-16 : t712 ) ) * 10.0 ) * ( - X [ 376ULL ] /
0.0019634954084936209 ) * ( - X [ 376ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 ; t930 = - 10.0 / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8
) ; intermediate_der9495 = t930 * zc_int274 * 6.0 - zc_int274 * zc_int274 *
t930 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked * - 0.95 ) {
t930 = 10.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke >= -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) { t930 = 0.0
; } else { t930 = ( - intermediate_der9495 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_unchoke + ( 1.0 - (
zc_int274 * zc_int274 * 3.0 - zc_int274 * zc_int274 * zc_int274 * 2.0 ) ) *
10.0 ) + intermediate_der9495 * zc_int273 ; } intermediate_der9495 = ( ( (
real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 ) * ( t837 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ) * ( t842 / ( t712
== 0.0 ? 1.0E-16 : t712 ) ) * 10.0 + ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 -
1.0 ) * ( t837 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ) * (
t842 / ( t712 == 0.0 ? 1.0E-16 : t712 ) ) * 10.0 ) * ( X [ 376ULL ] /
0.0019634954084936209 ) * ( X [ 376ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 ; t846 = pmf_sqrt ( ( ( real_T ) ( M [ 18ULL ] != 0 ) *
2.0 - 1.0 ) * ( t462 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) )
) ; t842 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ;
intermediate_der10126 = pmf_sqrt ( ( ( real_T ) ( M [ 18ULL ] != 0 ) * 2.0 -
1.0 ) * ( t462 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) )
) * 10.0 * t432 * 0.64 + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p - 1.01325 ) * ( (
real_T ) ( M [ 18ULL ] != 0 ) * 2.0 - 1.0 ) * ( - ( t442 * 2.0 ) / ( t842 ==
0.0 ? 1.0E-16 : t842 ) ) * ( 1.0 / ( t846 == 0.0 ? 1.0E-16 : t846 ) ) * t365
* t432 * 0.32 ; t365 = intermediate_der10126 / ( t506 == 0.0 ? 1.0E-16 : t506
) ; intermediate_der9568 = t365 * t429 * 6.0 - t429 * t429 * t365 * 6.0 ; if
( t438 <= t436 * 0.95 ) { t365 = intermediate_der10126 * 100000.0 ; } else if
( t438 >= t436 ) { t365 = 0.0 ; } else { t365 = ( ( - intermediate_der9568 *
zc_int271 + ( 1.0 - ( t429 * t429 * 3.0 - t429 * t429 * t429 * 2.0 ) ) *
intermediate_der10126 ) + intermediate_der9568 * t427 ) * 100000.0 ; }
intermediate_der9568 = - intermediate_der10126 / ( t506 == 0.0 ? 1.0E-16 :
t506 ) ; t858 = intermediate_der9568 * t431 * 6.0 - t431 * t431 *
intermediate_der9568 * 6.0 ; if ( - t438 <= t436 * 0.95 ) {
intermediate_der9568 = intermediate_der10126 * 100000.0 ; } else if ( - t438
>= t436 ) { intermediate_der9568 = 0.0 ; } else { intermediate_der9568 = ( (
- t858 * zc_int271 + ( 1.0 - ( t431 * t431 * 3.0 - t431 * t431 * t431 * 2.0 )
) * intermediate_der10126 ) + - t427 * t858 ) * 100000.0 ; } t846 = pmf_sqrt
( ( ( real_T ) ( M [ 97ULL ] != 0 ) * 2.0 - 1.0 ) * ( t406 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ) )
; t842 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ;
intermediate_der10126 = ( X [ 135ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T )
( M [ 97ULL ] != 0 ) * 2.0 - 1.0 ) * ( t406 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ) ) )
* t320 * 0.64 + ( X [ 135ULL ] - 1.01325 ) * ( ( real_T ) ( M [ 97ULL ] != 0
) * 2.0 - 1.0 ) * ( - ( t389 * 2.0 ) / ( t842 == 0.0 ? 1.0E-16 : t842 ) ) * (
1.0 / ( t846 == 0.0 ? 1.0E-16 : t846 ) ) * t336 * t384 * 0.32 ; t336 =
pmf_sqrt ( ( ( real_T ) ( M [ 109ULL ] != 0 ) * 2.0 - 1.0 ) * ( t403 / ( t388
== 0.0 ? 1.0E-16 : t388 ) / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] )
) ) * t320 * 0.64 ; t842 = ( t441 - t441 * 0.95 ) * ( t441 - t441 * 0.95 ) ;
t858 = ( t336 - t336 * 0.95 ) * ( - ( t439 - t441 * 0.95 ) / ( t842 == 0.0 ?
1.0E-16 : t842 ) ) + ( intermediate_der10126 - t336 * 0.95 ) / ( t514 == 0.0
? 1.0E-16 : t514 ) ; intermediate_der10174 = t858 * t444 * 6.0 - t444 * t444
* t858 * 6.0 ; if ( t387 <= t386 * 0.95 ) { t858 = intermediate_der10126 *
100000.0 ; } else if ( t387 >= t386 ) { t858 = t336 * 100000.0 ; } else {
t858 = ( ( ( - intermediate_der10174 * t439 + ( 1.0 - t459 ) *
intermediate_der10126 ) + intermediate_der10174 * t441 ) + t336 * t459 ) *
100000.0 ; } intermediate_der10174 = ( t336 - t336 * 0.95 ) * ( - ( - t439 -
t441 * 0.95 ) / ( t842 == 0.0 ? 1.0E-16 : t842 ) ) + ( -
intermediate_der10126 - t336 * 0.95 ) / ( t514 == 0.0 ? 1.0E-16 : t514 ) ;
intermediate_der10216 = intermediate_der10174 * t478 * 6.0 - t478 * t478 *
intermediate_der10174 * 6.0 ; if ( - t387 <= t386 * 0.95 ) {
intermediate_der10174 = intermediate_der10126 * 100000.0 ; } else if ( - t387
>= t386 ) { intermediate_der10174 = - t336 * 100000.0 ; } else {
intermediate_der10174 = ( ( ( - intermediate_der10216 * t439 + ( 1.0 - t480 )
* intermediate_der10126 ) + - t441 * intermediate_der10216 ) + - t336 * t480
) * 100000.0 ; } t376 = ( ( real_T ) ( M [ 169ULL ] != 0 ) * 2.0 - 1.0 ) * (
t539 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t539 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t402 / 7.8539816339744827E-5 )
* 127.32395447351628 * 2.0 / 2.0 * 9.999999999999999E-14 ; t385 = ( ( real_T
) ( M [ 171ULL ] != 0 ) * 2.0 - 1.0 ) * ( t549 / ( X [ 116ULL ] == 0.0 ?
1.0E-16 : X [ 116ULL ] ) ) * ( t549 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [
116ULL ] ) ) * ( - t402 / 7.8539816339744827E-5 ) * - 127.32395447351628 *
2.0 / 2.0 * 9.999999999999999E-14 ; if ( t402 >= 0.0 ) { t388 = ( zc_int52 -
zc_int53 ) * 0.01 + ( t376 - ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 )
* ( t544 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t544 / ( X
[ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t402 /
7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) * t402 ; } else { t388 = - ( ( zc_int54 - zc_int55 )
* 0.01 ) - ( t385 - ( ( real_T ) ( M [ 172ULL ] != 0 ) * 2.0 - 1.0 ) * ( t556
/ ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t556 / ( X [ 24ULL ]
== 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( - t402 / 7.8539816339744827E-5 ) * -
127.32395447351628 * 2.0 / 2.0 * 9.999999999999999E-14 ) * t402 ; } t846 =
pmf_sqrt ( ( ( real_T ) ( M [ 184ULL ] != 0 ) * 2.0 - 1.0 ) * ( t424 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) )
) ; t842 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; t854 = ( X
[ 28ULL ] - X [ 220ULL ] ) * pmf_sqrt ( ( ( real_T ) ( M [ 184ULL ] != 0 ) *
2.0 - 1.0 ) * ( t424 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) )
) * t355 * 0.64 + ( X [ 28ULL ] - X [ 220ULL ] ) * ( ( real_T ) ( M [ 184ULL
] != 0 ) * 2.0 - 1.0 ) * ( - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V29 * 2.0 ) / (
t842 == 0.0 ? 1.0E-16 : t842 ) ) * ( 1.0 / ( t846 == 0.0 ? 1.0E-16 : t846 ) )
* t18 * intrm_sf_mf_437 * 0.32 ; t18 = pmf_sqrt ( ( ( real_T ) ( M [ 185ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t421 / ( intrm_sf_mf_446 == 0.0 ? 1.0E-16 :
intrm_sf_mf_446 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ) *
t355 * 0.64 ; t837 = ( zc_int93 - zc_int93 * 0.95 ) * ( zc_int93 - zc_int93 *
0.95 ) ; t386 = ( t18 - t18 * 0.95 ) * ( - ( zc_int92 - zc_int93 * 0.95 ) / (
t837 == 0.0 ? 1.0E-16 : t837 ) ) + ( t854 - t18 * 0.95 ) / ( t568 == 0.0 ?
1.0E-16 : t568 ) ; t389 = t386 * t483 * 6.0 - t483 * t483 * t386 * 6.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * 0.95 ) {
t386 = t854 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) { t386 =
t18 * 100000.0 ; } else { t386 = ( ( ( - t389 * zc_int92 + ( 1.0 - t484 ) *
t854 ) + t389 * zc_int93 ) + t18 * t484 ) * 100000.0 ; } t389 = ( t18 - t18 *
0.95 ) * ( - ( - zc_int92 - zc_int93 * 0.95 ) / ( t837 == 0.0 ? 1.0E-16 :
t837 ) ) + ( - t854 - t18 * 0.95 ) / ( t568 == 0.0 ? 1.0E-16 : t568 ) ; t845
= t389 * t485 * 6.0 - t485 * t485 * t389 * 6.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 * 0.95 ) {
t389 = t854 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V25 ) { t389 = -
t18 * 100000.0 ; } else { t389 = ( ( ( - t845 * zc_int92 + ( 1.0 - t488 ) *
t854 ) + - zc_int93 * t845 ) + - t18 * t488 ) * 100000.0 ; } t273 [ 0ULL ] =
X [ 287ULL ] ; t197 [ 0 ] = 5ULL ; tlu2_linear_nearest_prelookup ( & fd_efOut
. mField0 [ 0ULL ] , & fd_efOut . mField1 [ 0ULL ] , & fd_efOut . mField2 [
0ULL ] , & t274 [ 0ULL ] , & t273 [ 0ULL ] , & t197 [ 0ULL ] , & t22 [ 0ULL ]
) ; t10 = fd_efOut ; t273 [ 0ULL ] = U_idx_4 * 376.99111843077515 *
0.99999999999999978 / 0.99999999999999978 * 0.99999999999999978 /
0.99999999999999978 ; t200 [ 0 ] = 3ULL ; tlu2_linear_nearest_prelookup ( &
gd_efOut . mField0 [ 0ULL ] , & gd_efOut . mField1 [ 0ULL ] , & gd_efOut .
mField2 [ 0ULL ] , & nonscalar39 [ 0ULL ] , & t273 [ 0ULL ] , & t200 [ 0ULL ]
, & t22 [ 0ULL ] ) ; t6 = gd_efOut ; t845 = M [ 108ULL ] != 0 ? X [ 59ULL ] :
0.9 ; t18 = - ( ( X [ 63ULL ] - X [ 61ULL ] * X [ 62ULL ] * 0.001 ) * t19 / (
t845 == 0.0 ? 1.0E-16 : t845 ) * 1000.0 + - t19 * X [ 59ULL ] / 1000.0 ) ; if
( M [ 178ULL ] != 0 ) { t19 = - ( ( X [ 67ULL ] -
Fuel_Cell_Boost_Converter_L_i ) * intermediate_der7115 * 0.001 ) ; } else {
t19 = - ( ( Fuel_Cell_Boost_Converter_L_i * 0.001 + X [ 62ULL ] ) *
intermediate_der7115 ) ; } U_idx_0 = t387 >= 0.0 ? - t858 : -
intermediate_der10174 ; t858 = t384 * t384 ; t271 [ 0ULL ] = - ( ( - ( X [
21ULL ] * - 0.01 ) * ( - 164.72089615570803 / ( t904 == 0.0 ? 1.0E-16 : t904
) ) + - ( X [ 22ULL ] * - 0.01 ) * ( - 3827.6794129126583 / ( t904 == 0.0 ?
1.0E-16 : t904 ) ) ) / 12.896402563644669 ) ; t271 [ 1ULL ] = - ( ( ( - ( X [
21ULL ] * - 0.01 ) * ( t383 - t919 ) + - ( X [ 22ULL ] * - 0.01 ) * ( t382 -
t919 ) ) + t325 * - 0.01 ) / 2246.65922904024 ) ; t271 [ 2ULL ] = - ( X [
21ULL ] * - 0.01 ) ; t271 [ 3ULL ] = - ( X [ 22ULL ] * - 0.01 ) ; t271 [ 4ULL
] = - ( ( - ( X [ 26ULL ] * 0.01 ) * ( - 164.72089615570803 / ( t308 == 0.0 ?
1.0E-16 : t308 ) ) + - ( X [ 25ULL ] * 0.01 ) * ( - 3827.6794129126583 / (
t308 == 0.0 ? 1.0E-16 : t308 ) ) ) / 12.896402563644669 ) ; t271 [ 5ULL ] = -
( ( ( - ( X [ 26ULL ] * 0.01 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha29 -
intrm_sf_mf_203 ) + - ( X [ 25ULL ] * 0.01 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 -
intrm_sf_mf_203 ) ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha26 * 0.01 ) /
2246.65922904024 ) ; t271 [ 6ULL ] = - ( X [ 26ULL ] * 0.01 ) ; t271 [ 7ULL ]
= - ( X [ 25ULL ] * 0.01 ) ; t271 [ 8ULL ] = - ( ( ( t865 - 0.01 ) / 2.0 *
t362 + ( t323 + t379 ) / 2.0 * ( ( ( real_T ) ( M [ 167ULL ] != 0 ) * 2.0 -
1.0 ) * ( t522 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t522
/ ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t323 /
7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ) - ( t865 - - 0.01 ) / 2.0 * X [ 149ULL ] ) ; t271 [
9ULL ] = - ( ( t883 - 0.01 ) / 2.0 * X [ 118ULL ] - ( t883 - - 0.01 ) / 2.0 *
X [ 155ULL ] ) ; t271 [ 10ULL ] = - ( ( t914 - 0.01 ) / 2.0 * X [ 117ULL ] -
( t914 - - 0.01 ) / 2.0 * X [ 154ULL ] ) ; t271 [ 11ULL ] = - (
intermediate_der1251 * 0.001 ) ; t271 [ 12ULL ] = - ( t736 /
7.8539816339744827E-5 * 0.00031622776601683789 + intermediate_der6972 ) ;
t271 [ 13ULL ] = t323 >= 0.0 ? 0.0 : - t912 ; t919 = X [ 139ULL ] * t904 ;
t271 [ 14ULL ] = - ( ( ( real_T ) ( M [ 42ULL ] != 0 ) * 2.0 - 1.0 ) * ( t919
/ ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ] ) ) * ( t919 / ( X [ 140ULL
] == 0.0 ? 1.0E-16 : X [ 140ULL ] ) ) * ( t323 / 7.8539816339744827E-5 ) * -
127.32395447351628 * 2.0 / 2.0 * 9.999999999999999E-14 ) ; t271 [ 15ULL ] = -
( ( ( real_T ) ( M [ 64ULL ] != 0 ) * 2.0 - 1.0 ) * ( t339 / ( X [ 20ULL ] ==
0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( t339 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X
[ 20ULL ] ) ) * ( t323 / 7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0
/ 2.0 * 9.999999999999999E-14 ) ; t904 = t402 + t404 ; t271 [ 16ULL ] = - ( (
( 0.01 + t348 ) / 2.0 * zc_int48 + t904 / 2.0 * ( ( ( real_T ) ( M [ 164ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ]
) ) * ( t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t402 /
7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ) - ( t348 - 0.01 ) / 2.0 * X [ 188ULL ] ) ; t271 [
17ULL ] = - ( ( 0.01 + intermediate_der1480 ) / 2.0 * X [ 174ULL ] - (
intermediate_der1480 - 0.01 ) / 2.0 * X [ 190ULL ] ) ; t271 [ 18ULL ] = - ( (
0.01 + t346 ) / 2.0 * X [ 173ULL ] - ( t346 - 0.01 ) / 2.0 * X [ 189ULL ] ) ;
t865 = X [ 23ULL ] * t308 ; t271 [ 19ULL ] = - ( ( ( real_T ) ( M [ 166ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t865 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ]
) ) * ( t865 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t402 /
7.8539816339744827E-5 ) * 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ; t271 [ 20ULL ] = - ( ( ( 0.01 + t348 ) / 2.0 * t481
+ t904 / 2.0 * ( ( ( real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t522 /
( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t522 / ( X [ 116ULL ]
== 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t402 / 7.8539816339744827E-5 ) *
127.32395447351628 * 2.0 / 2.0 * 9.999999999999999E-14 ) ) - ( t348 - 0.01 )
/ 2.0 * X [ 201ULL ] ) ; t271 [ 21ULL ] = - ( ( 0.01 + intermediate_der1480 )
/ 2.0 * X [ 118ULL ] - ( intermediate_der1480 - 0.01 ) / 2.0 * X [ 203ULL ] )
; t271 [ 22ULL ] = - ( ( 0.01 + t346 ) / 2.0 * X [ 117ULL ] - ( t346 - 0.01 )
/ 2.0 * X [ 202ULL ] ) ; t271 [ 23ULL ] = - ( ( ( - 0.01 + t352 ) / 2.0 *
zc_int51 + ( - t402 + t404 ) / 2.0 * ( ( ( real_T ) ( M [ 164ULL ] != 0 ) *
2.0 - 1.0 ) * ( t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * (
t515 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( - t402 /
7.8539816339744827E-5 ) * - 127.32395447351628 * 2.0 / 2.0 *
9.999999999999999E-14 ) ) - ( t352 - - 0.01 ) / 2.0 * X [ 201ULL ] ) ; t271 [
24ULL ] = - ( ( - 0.01 + intermediate_der1516 ) / 2.0 * X [ 174ULL ] - (
intermediate_der1516 - - 0.01 ) / 2.0 * X [ 203ULL ] ) ; t271 [ 25ULL ] = - (
( - 0.01 + intermediate_der1515 ) / 2.0 * X [ 173ULL ] - (
intermediate_der1515 - - 0.01 ) / 2.0 * X [ 202ULL ] ) ; t271 [ 26ULL ] =
t388 ; t271 [ 27ULL ] = t385 ; t271 [ 28ULL ] = t376 ; t919 = intrm_sf_mf_437
* intrm_sf_mf_437 ; t914 = ( ( real_T ) ( M [ 189ULL ] != 0 ) * 2.0 - 1.0 ) *
( t408 / ( X [ 238ULL ] == 0.0 ? 1.0E-16 : X [ 238ULL ] ) ) * ( t408 / ( X [
238ULL ] == 0.0 ? 1.0E-16 : X [ 238ULL ] ) ) * ( - X [ 213ULL ] / 0.64 / (
intrm_sf_mf_437 == 0.0 ? 1.0E-16 : intrm_sf_mf_437 ) ) * ( - ( - X [ 213ULL ]
/ 0.64 ) / ( t919 == 0.0 ? 1.0E-16 : t919 ) ) * t355 * 2.0 ;
tlu2_2d_linear_nearest_value ( & hd_efOut [ 0ULL ] , & t10 . mField0 [ 0ULL ]
, & t10 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , & t197 [ 0ULL ] , & t200
[ 0ULL ] , & t22 [ 0ULL ] ) ; t273 [ 0 ] = hd_efOut [ 0 ] ; t274 [ 0ULL ] = -
( ( ( 1.0 - X [ 41ULL ] ) * ( - 164.72089615570803 / ( t311 == 0.0 ? 1.0E-16
: t311 ) ) + - X [ 40ULL ] * ( - 3827.6794129126583 / ( t311 == 0.0 ? 1.0E-16
: t311 ) ) ) / 12.896402563644669 ) ; t274 [ 1ULL ] = - ( ( ( ( t425 -
intrm_sf_mf_452 ) * ( 1.0 - X [ 41ULL ] ) + - X [ 40ULL ] * ( t422 -
intrm_sf_mf_452 ) ) + intrm_sf_mf_456 ) / 2246.65922904024 ) ; t274 [ 2ULL ]
= - X [ 41ULL ] ; t274 [ 3ULL ] = - X [ 40ULL ] ; t274 [ 4ULL ] = zc_int112 ;
t275 [ 0ULL ] = - ( ( 1.0 - X [ 47ULL ] ) * ( - 164.72089615570803 / (
intrm_sf_mf_975 == 0.0 ? 1.0E-16 : intrm_sf_mf_975 ) ) + - X [ 46ULL ] * (
36.965491221318985 / ( intrm_sf_mf_975 == 0.0 ? 1.0E-16 : intrm_sf_mf_975 ) )
) ; t275 [ 1ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I - t426 ) * ( 1.0 - X
[ 47ULL ] ) + - X [ 46ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I - t426 ) ) + t420 ) /
2172.7681408465714 ) ; t275 [ 2ULL ] = - X [ 47ULL ] ; t275 [ 3ULL ] = - X [
46ULL ] ; t275 [ 4ULL ] = zc_int211 ; t276 [ 0ULL ] = - ( ( - X [ 376ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) / 2.0 *
t927 ) ; t276 [ 1ULL ] = - X [ 376ULL ] >= 0.0 ? - 10.0 : - t930 ; t276 [
2ULL ] = - ( ( X [ 376ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Environment_convecti2 ) / 2.0 *
intermediate_der9495 ) ; t276 [ 3ULL ] = t438 >= 0.0 ? - t365 : -
intermediate_der9568 ; t276 [ 4ULL ] = - ( t358 - t366 ) ; t919 = X [ 410ULL
] * t440 ; t904 = - ( X [ 410ULL ] * t440 ) ; t276 [ 5ULL ] = - ( ( ( (
real_T ) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0 ) * ( t919 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ) * ( t904 / ( t712
== 0.0 ? 1.0E-16 : t712 ) ) * 10.0 + ( ( real_T ) ( M [ 20ULL ] != 0 ) * 2.0
- 1.0 ) * ( t919 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_B_p ) ) * (
t904 / ( t712 == 0.0 ? 1.0E-16 : t712 ) ) * 10.0 ) * ( X [ 376ULL ] / 0.64 /
0.0019634954084936209 ) * ( X [ 376ULL ] / 0.64 / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 ) ; t205 [ 0ULL ] = t18 ; t205 [ 1ULL ] = U_idx_0
; t205 [ 2ULL ] = t342 ; t205 [ 3ULL ] = - ( ( ( real_T ) ( M [ 142ULL ] != 0
) * 2.0 - 1.0 ) * ( t391 / ( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) )
* ( t391 / ( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ) * ( X [ 126ULL
] / 0.64 / ( t384 == 0.0 ? 1.0E-16 : t384 ) ) * ( - ( X [ 126ULL ] / 0.64 ) /
( t858 == 0.0 ? 1.0E-16 : t858 ) ) * t320 * 2.0 / 2.0 * 9.999999999999999E-14
) ; for ( t281 = 0ULL ; t281 < 29ULL ; t281 ++ ) { t205 [ t281 + 4ULL ] =
t271 [ t281 ] ; } t205 [ 33ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V27 >= 0.0 ? -
t386 : - t389 ; t205 [ 34ULL ] = t356 ; t205 [ 35ULL ] = - ( t914 / 2.0 *
9.999999999999999E-14 ) ; t205 [ 36ULL ] = - ( t273 [ 0ULL ] *
376.99111843077515 ) ; for ( t281 = 0ULL ; t281 < 5ULL ; t281 ++ ) { t205 [
t281 + 37ULL ] = t274 [ t281 ] ; } t205 [ 42ULL ] = U_idx_5 * t361 ; for (
t281 = 0ULL ; t281 < 5ULL ; t281 ++ ) { t205 [ t281 + 43ULL ] = t275 [ t281 ]
; } t205 [ 48ULL ] = U_idx_7 * intermediate_der8954 ; for ( t281 = 0ULL ;
t281 < 6ULL ; t281 ++ ) { t205 [ t281 + 49ULL ] = t276 [ t281 ] ; } out . mX
[ 0 ] = t205 [ 0 ] ; out . mX [ 1 ] = t205 [ 1 ] ; out . mX [ 2 ] = t205 [ 2
] ; out . mX [ 3 ] = t205 [ 3 ] ; out . mX [ 4 ] = t205 [ 4 ] ; out . mX [ 5
] = t205 [ 5 ] ; out . mX [ 6 ] = t205 [ 6 ] ; out . mX [ 7 ] = t205 [ 7 ] ;
out . mX [ 8 ] = t205 [ 8 ] ; out . mX [ 9 ] = t205 [ 9 ] ; out . mX [ 10 ] =
t205 [ 10 ] ; out . mX [ 11 ] = t205 [ 11 ] ; out . mX [ 12 ] = t205 [ 12 ] ;
out . mX [ 13 ] = t205 [ 13 ] ; out . mX [ 14 ] = t205 [ 14 ] ; out . mX [ 15
] = t205 [ 15 ] ; out . mX [ 16 ] = t205 [ 16 ] ; out . mX [ 17 ] = t205 [ 17
] ; out . mX [ 18 ] = t205 [ 18 ] ; out . mX [ 19 ] = t205 [ 19 ] ; out . mX
[ 20 ] = t205 [ 20 ] ; out . mX [ 21 ] = t205 [ 21 ] ; out . mX [ 22 ] = t205
[ 22 ] ; out . mX [ 23 ] = t205 [ 23 ] ; out . mX [ 24 ] = t205 [ 24 ] ; out
. mX [ 25 ] = t205 [ 25 ] ; out . mX [ 26 ] = t205 [ 26 ] ; out . mX [ 27 ] =
t205 [ 27 ] ; out . mX [ 28 ] = t205 [ 28 ] ; out . mX [ 29 ] = t205 [ 29 ] ;
out . mX [ 30 ] = t205 [ 30 ] ; out . mX [ 31 ] = t205 [ 31 ] ; out . mX [ 32
] = t205 [ 32 ] ; out . mX [ 33 ] = t205 [ 33 ] ; out . mX [ 34 ] = t205 [ 34
] ; out . mX [ 35 ] = t205 [ 35 ] ; out . mX [ 36 ] = t205 [ 36 ] ; out . mX
[ 37 ] = t205 [ 37 ] ; out . mX [ 38 ] = t205 [ 38 ] ; out . mX [ 39 ] = t205
[ 39 ] ; out . mX [ 40 ] = t205 [ 40 ] ; out . mX [ 41 ] = t205 [ 41 ] ; out
. mX [ 42 ] = t205 [ 42 ] ; out . mX [ 43 ] = t205 [ 43 ] ; out . mX [ 44 ] =
t205 [ 44 ] ; out . mX [ 45 ] = t205 [ 45 ] ; out . mX [ 46 ] = t205 [ 46 ] ;
out . mX [ 47 ] = t205 [ 47 ] ; out . mX [ 48 ] = t205 [ 48 ] ; out . mX [ 49
] = t205 [ 49 ] ; out . mX [ 50 ] = t205 [ 50 ] ; out . mX [ 51 ] = t205 [ 51
] ; out . mX [ 52 ] = t205 [ 52 ] ; out . mX [ 53 ] = t205 [ 53 ] ; out . mX
[ 54 ] = t205 [ 54 ] ; out . mX [ 55 ] = t19 ; out . mX [ 56 ] = - (
Fuel_Cell_Boost_Converter_L_i * intermediate_der7115 ) ; ( void ) LC ; ( void
) t932 ; return 0 ; }
