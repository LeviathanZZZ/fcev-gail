#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_log.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t799 , NeDsMethodOutput * t800 ) { ETTS0
ac_efOut ; ETTS0 c_efOut ; ETTS0 db_efOut ; ETTS0 ec_efOut ; ETTS0 ed_efOut ;
ETTS0 efOut ; ETTS0 h_efOut ; ETTS0 ib_efOut ; ETTS0 jc_efOut ; ETTS0
jd_efOut ; ETTS0 m_efOut ; ETTS0 nb_efOut ; ETTS0 oc_efOut ; ETTS0 od_efOut ;
ETTS0 q_efOut ; ETTS0 rb_efOut ; ETTS0 t23 ; ETTS0 t24 ; ETTS0 t29 ; ETTS0
tc_efOut ; ETTS0 td_efOut ; ETTS0 u_efOut ; ETTS0 ud_efOut ; ETTS0 vb_efOut ;
ETTS0 wd_efOut ; ETTS0 y_efOut ; ETTS0 yc_efOut ; PmRealVector out ; real_T
t261 [ 1752 ] ; real_T X [ 440 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_F [ 8 ] ; real_T
t263 [ 8 ] ; real_T t268 [ 8 ] ; real_T t285 [ 8 ] ; real_T t290 [ 8 ] ;
real_T t307 [ 8 ] ; real_T t328 [ 8 ] ; real_T t383 [ 2 ] ; real_T ab_efOut [
1 ] ; real_T ad_efOut [ 1 ] ; real_T ae_efOut [ 1 ] ; real_T b_efOut [ 1 ] ;
real_T bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ;
real_T be_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ;
real_T cd_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T
dd_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T
fd_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T
gc_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T
hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T
ic_efOut [ 1 ] ; real_T id_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T
jb_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T
kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
lb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T ld_efOut [ 1 ] ; real_T
mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T nd_efOut [ 1 ] ; real_T
o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T
pb_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T
qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T
s_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T
sd_efOut [ 1 ] ; real_T t262 [ 1 ] ; real_T t264 [ 1 ] ; real_T t342 [ 1 ] ;
real_T t37 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T tb_efOut [ 1 ] ; real_T
ub_efOut [ 1 ] ; real_T uc_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T
vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T
wb_efOut [ 1 ] ; real_T wc_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T
xb_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T xd_efOut [ 1 ] ; real_T
yb_efOut [ 1 ] ; real_T yd_efOut [ 1 ] ; real_T Fuel_Cell_Boost_Converter_L_i
; real_T Fuel_Cell_Boost_Converter_L_n_v ; real_T
Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_2 ;
real_T intrm_sf_mf_540 ; real_T intrm_sf_mf_595 ; real_T piece16 ; real_T
t302_idx_0 ; real_T t303_idx_0 ; real_T t341_idx_0 ; real_T t379 ; real_T
t381 ; real_T t382 ; real_T t391 ; real_T t442 ; real_T t453 ; real_T t456 ;
real_T t459 ; real_T t463 ; real_T t465 ; real_T t466 ; real_T t467 ; real_T
t471 ; real_T t473 ; real_T t474 ; real_T t475 ; real_T t477 ; real_T t480 ;
real_T t481 ; real_T t484 ; real_T t485 ; real_T t488 ; real_T t491 ; real_T
t492 ; real_T t493 ; real_T t494 ; real_T t496 ; real_T t497 ; real_T t498 ;
real_T t499 ; real_T t503 ; real_T t504 ; real_T t506 ; real_T t508 ; real_T
t509 ; real_T t516 ; real_T t524 ; real_T t528 ; real_T t535 ; real_T t546 ;
real_T t547 ; real_T t552 ; real_T t553 ; real_T t555 ; real_T t556 ; real_T
t559 ; real_T t560 ; real_T t561 ; real_T t569 ; real_T t572 ; real_T t573 ;
real_T t577 ; real_T t583 ; real_T t584 ; real_T t586 ; real_T t590 ; real_T
t595 ; real_T t599 ; real_T t600 ; real_T t601 ; real_T t605 ; real_T t606 ;
real_T t609 ; real_T t611 ; real_T t619 ; real_T t621 ; real_T t764 ; real_T
t787 ; real_T t797 ; real_T t798 ; real_T zc_int2 ; size_t t242 [ 1 ] ;
size_t t245 [ 1 ] ; size_t t33 [ 1 ] ; size_t t34 [ 1 ] ; size_t t368 ;
size_t t376 ; int32_T M [ 231 ] ; int32_T b ; for ( b = 0 ; b < 231 ; b ++ )
{ M [ b ] = t799 -> mM . mX [ b ] ; } U_idx_0 = t799 -> mU . mX [ 0 ] ;
U_idx_1 = t799 -> mU . mX [ 1 ] ; U_idx_2 = t799 -> mU . mX [ 2 ] ; U_idx_3 =
t799 -> mU . mX [ 3 ] ; U_idx_4 = t799 -> mU . mX [ 4 ] ; U_idx_5 = t799 ->
mU . mX [ 5 ] ; U_idx_6 = t799 -> mU . mX [ 6 ] ; U_idx_7 = t799 -> mU . mX [
7 ] ; U_idx_8 = t799 -> mU . mX [ 8 ] ; U_idx_9 = t799 -> mU . mX [ 9 ] ;
U_idx_10 = t799 -> mU . mX [ 10 ] ; U_idx_11 = t799 -> mU . mX [ 11 ] ;
U_idx_12 = t799 -> mU . mX [ 12 ] ; for ( b = 0 ; b < 440 ; b ++ ) { X [ b ]
= t799 -> mX . mX [ b ] ; } out = t800 -> mLOG ; t262 [ 0ULL ] = pmf_get_inf
( ) ; for ( t368 = 0ULL ; t368 < 42ULL ; t368 ++ ) { t376 = t368 / 42ULL ;
t379 = t262 [ t376 > 0ULL ? 0ULL : t376 ] ; t463 = ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 [ t368 ] * 1.0E-5 ; t262 [ t376 > 0ULL ? 0ULL : t376 ] =
t379 > t463 ? t463 : t379 ; } t381 = t262 [ 0ULL ] ; t379 = t381 > X [ 58ULL
] ? t381 : X [ 58ULL ] ; t381 = X [ 0ULL ] * 9.2592592592592591E-6 ; t382 = -
X [ 57ULL ] - U_idx_0 ; intrm_sf_mf_2 = ( ( ( real_T ) ( t382 >= 0.0 ) * t382
* 1000.0 + ( real_T ) ( t382 < 0.0 ) * X [ 59ULL ] ) - 0.9 ) /
0.099999999999999978 ; if ( ( real_T ) ( t382 >= 0.0 ) * t382 * 1000.0 + (
real_T ) ( t382 < 0.0 ) * X [ 59ULL ] <= 0.9 ) { intrm_sf_mf_2 = 0.0 ; } else
{ intrm_sf_mf_2 = ( real_T ) ( t382 >= 0.0 ) * t382 * 1000.0 + ( real_T ) (
t382 < 0.0 ) * X [ 59ULL ] >= 1.0 ? 1.0 : intrm_sf_mf_2 * intrm_sf_mf_2 * 3.0
- intrm_sf_mf_2 * intrm_sf_mf_2 * intrm_sf_mf_2 * 2.0 ; } t453 = X [ 3ULL ] *
- 0.1 + X [ 62ULL ] * 0.1 ; Fuel_Cell_Boost_Converter_L_i = X [ 65ULL ] *
1.0E-9 + X [ 4ULL ] ; Fuel_Cell_Boost_Converter_L_n_v = ( ( X [ 4ULL ] * -
1.0E-6 + X [ 65ULL ] * - 1.0000000000000011 ) + X [ 66ULL ] * - 1.0E-6 ) + X
[ 5ULL ] ; Fuel_Cell_Boost_Converter_L_p_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [
65ULL ] * - 1.0E-15 ) + X [ 66ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Current_Sensor1_I = ( ( ( X [ 3ULL ] * 0.1 + X [ 62ULL ] * - 0.1 )
+ X [ 65ULL ] * 1.0E-9 ) - X [ 67ULL ] ) + X [ 4ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 0ULL ] = X [
78ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 1ULL ]
= X [ 6ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
2ULL ] = X [ 79ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 3ULL ] = X [
8ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 4ULL ]
= X [ 77ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
5ULL ] = X [ 80ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 6ULL ] = X [
7ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 7ULL ]
= X [ 76ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
0ULL ] = X [ 83ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 1ULL ] = X [
9ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 2ULL ]
= X [ 84ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
3ULL ] = X [ 11ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 4ULL ] = X [
82ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 5ULL ]
= X [ 85ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
6ULL ] = X [ 10ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 7ULL ] = X [
81ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 0ULL ]
= X [ 88ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
1ULL ] = X [ 12ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 2ULL ] = X [
89ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 3ULL ]
= X [ 14ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
4ULL ] = X [ 87ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 5ULL ] = X [
90ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 6ULL ]
= X [ 13ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
7ULL ] = X [ 86ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 0ULL ] = X [
93ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 1ULL ]
= X [ 15ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
2ULL ] = X [ 94ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 3ULL ] = X [
17ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 4ULL ]
= X [ 92ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
5ULL ] = X [ 95ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 6ULL ] = X [
16ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 7ULL ]
= X [ 91ULL ] ; if ( X [ 96ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [ 96ULL ]
* 17.81 + 0.043 ; } else if ( X [ 96ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( ( X [
96ULL ] * 17.81 + 0.043 ) - X [ 96ULL ] * X [ 96ULL ] * 39.85 ) + X [ 96ULL ]
* X [ 96ULL ] * X [ 96ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( X [ 96ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 97ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = X [ 97ULL ]
* 17.81 + 0.043 ; } else if ( X [ 97ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( ( X [
97ULL ] * 17.81 + 0.043 ) - X [ 97ULL ] * X [ 97ULL ] * 39.85 ) + X [ 97ULL ]
* X [ 97ULL ] * X [ 97ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( X [ 97ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 66ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = - X [ 66ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = 0.0 ; } if
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 0.0029 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 0.05 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 0.05 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / 96485.33212
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 = ( X [
78ULL ] + X [ 83ULL ] ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 = ( X [ 88ULL
] + X [ 93ULL ] ) / 2.0 ; t262 [ 0 ] = 323.15 ; t33 [ 0 ] = 52ULL ; t34 [ 0 ]
= 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut
. mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t262 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= efOut ; tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t29 . mField0
[ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t262 [ 0 ] = b_efOut [ 0 ] ;
t456 = pmf_exp ( pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ) - t262 [
0ULL ] ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i = X [
96ULL ] / ( t456 == 0.0 ? 1.0E-16 : t456 ) ; t456 = pmf_exp ( pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) - t262 [
0ULL ] ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) { t463 =
3.577951275483784E-6 ; t459 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i * 1.58E-18 / (
t463 == 0.0 ? 1.0E-16 : t463 ) ; } else { t465 = 3.577951275483784E-6 ; t459
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 * ( X [ 97ULL
] / ( t456 == 0.0 ? 1.0E-16 : t456 ) ) * 1.58E-18 / ( t465 == 0.0 ? 1.0E-16 :
t465 ) ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = (
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
1818.181818181818 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
1818.181818181818 ) * 2.0470329271173142E-10 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + t459 ) *
0.20177105219743391 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.022577863652674921 / 192970.66424 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 ) / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 0.005139 -
0.00326 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 =
0.0018790000000000005 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
1.2954698564516058 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = 0.000125 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i = t456 * ( ( X [
87ULL ] + X [ 92ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i >= 1.0E-9 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i : 1.0E-6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * ( ( X [
76ULL ] + X [ 81ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 >=
1.0E-9 ) { t456 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 ; }
else { t456 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 * ( ( X [
86ULL ] + X [ 91ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 >=
1.0E-9 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 =
1.0E-6 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
( ( ( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * - 1.0E-15 ) + X [ 66ULL ] * -
0.001001 ) + X [ 5ULL ] ) + X [ 99ULL ] ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 >= 1.0 ) {
t463 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ) *
0.019890651741126749 ; } else { t463 = 0.0 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 <= 13986.0 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_log (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 /
14000.0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = -
6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; } t475 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ) * t456 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 = pmf_log (
t475 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) ) *
0.013923456218788726 + 1.228891453185164 ; t456 = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 - t463 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * 0.01 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.013923456218788726 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * t456 *
11.200000000000001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 = - X [
100ULL ] + X [ 109ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i = ( - X [ 4ULL ] +
X [ 65ULL ] * - 1.0E-9 ) - X [ 66ULL ] ; t459 = ( ( ( X [ 4ULL ] * - 1.0E-6 +
X [ 65ULL ] * - 1.0E-15 ) + X [ 66ULL ] * - 1.0E-6 ) + X [ 5ULL ] ) + X [
99ULL ] ; if ( X [ 131ULL ] <= 0.0 ) { t465 = 0.0 ; } else { t465 = X [
131ULL ] >= 1.0 ? 1.0 : X [ 131ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) { t466 =
0.0 ; } else { t466 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach = ( ( ( ( 1.0 -
t465 ) - t466 ) * 296.802103844292 + t465 * 461.523 ) + t466 *
4124.48151675695 ) * 293.15 ; t467 = 1.01325 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach ) ;
t471 = - X [ 138ULL ] + U_idx_2 * - 0.01 ; if ( X [ 21ULL ] <= 0.0 ) { t463 =
0.0 ; } else { t463 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [
22ULL ] <= 0.0 ) { t473 = 0.0 ; } else { t473 = X [ 22ULL ] >= 1.0 ? 1.0 : X
[ 22ULL ] ; } t474 = ( ( ( 1.0 - t463 ) - t473 ) * 296.802103844292 + t463 *
461.523 ) + t473 * 4124.48151675695 ; if ( X [ 139ULL ] <= 216.59999999999997
) { t475 = 216.59999999999997 ; } else { t475 = X [ 139ULL ] >= 623.15 ?
623.15 : X [ 139ULL ] ; } t477 = t475 * t475 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I = ( ( (
1074.1165326382541 + t475 * - 0.2214565261064077 ) + t477 *
0.00037212980109010952 ) * ( ( 1.0 - t463 ) - t473 ) + ( ( 1479.6504774710445
+ t475 * 1.200211433705052 ) + t477 * - 0.00038614513167842338 ) * t463 ) + (
( 12825.281119790017 + t475 * 6.9647057412830984 ) + t477 * -
0.007052486824683288 ) * t473 ; t391 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I - t474 ; t475 = -
pmf_sqrt ( fabs ( X [ 140ULL ] * X [ 140ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I / ( t391 == 0.0 ?
1.0E-16 : t391 ) ) / ( t474 == 0.0 ? 1.0E-16 : t474 ) / ( X [ 139ULL ] == 0.0
? 1.0E-16 : X [ 139ULL ] ) ) ) * 7.8539816339744827E-5 ; t484 = X [ 19ULL ] *
t474 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I = X [ 20ULL
] / ( t484 == 0.0 ? 1.0E-16 : t484 ) ; if ( X [ 143ULL ] <=
216.59999999999997 ) { t477 = 216.59999999999997 ; } else { t477 = X [ 143ULL
] >= 623.15 ? 623.15 : X [ 143ULL ] ; } t391 = t477 * t477 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach = ( ( (
1074.1165326382541 + t477 * - 0.2214565261064077 ) + t391 *
0.00037212980109010952 ) * ( ( 1.0 - t463 ) - t473 ) + ( ( 1479.6504774710445
+ t477 * 1.200211433705052 ) + t391 * - 0.00038614513167842338 ) * t463 ) + (
( 12825.281119790017 + t477 * 6.9647057412830984 ) + t391 * -
0.007052486824683288 ) * t473 ; t485 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach - t474 ; t474 =
- pmf_sqrt ( fabs ( X [ 144ULL ] * X [ 144ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach / ( t485 == 0.0
? 1.0E-16 : t485 ) ) / ( t474 == 0.0 ? 1.0E-16 : t474 ) / ( X [ 143ULL ] ==
0.0 ? 1.0E-16 : X [ 143ULL ] ) ) ) * 7.8539816339744827E-5 ; t263 [ 0ULL ] =
X [ 20ULL ] * 100000.0 ; t263 [ 1ULL ] = X [ 19ULL ] ; t263 [ 2ULL ] = X [
146ULL ] ; t263 [ 3ULL ] = X [ 21ULL ] ; t263 [ 4ULL ] = X [ 141ULL ] ; t263
[ 5ULL ] = X [ 145ULL ] ; t263 [ 6ULL ] = X [ 22ULL ] ; t263 [ 7ULL ] = X [
142ULL ] ; for ( t376 = 0ULL ; t376 < 8ULL ; t376 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t376 ] = t263 [ t376
] ; } t477 = t471 / ( t475 == 0.0 ? 1.0E-16 : t475 ) ; t475 = - X [ 126ULL ]
/ ( t474 == 0.0 ? 1.0E-16 : t474 ) ; t474 = - X [ 147ULL ] - X [ 148ULL ] ;
t37 [ 0ULL ] = X [ 19ULL ] ; tlu2_linear_linear_prelookup ( & c_efOut .
mField0 [ 0ULL ] , & c_efOut . mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t37 [ 0ULL ] , & t33 [
0ULL ] , & t34 [ 0ULL ] ) ; t29 = c_efOut ; tlu2_1d_linear_linear_value ( &
d_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t264 [ 0 ] = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach = t264 [ 0ULL ]
; if ( 1.0 - X [ 21ULL ] >= 0.01 ) { t480 = 1.0 - X [ 21ULL ] ; } else if (
1.0 - X [ 21ULL ] >= - 0.1 ) { t480 = pmf_exp ( ( ( 1.0 - X [ 21ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t480 = 1.6701700790245661E-7 ; } t391 = X [
22ULL ] / ( t480 == 0.0 ? 1.0E-16 : t480 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & e_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t342 [ 0 ] = e_efOut [ 0 ]
; t480 = pmf_exp ( pmf_log ( X [ 20ULL ] * 100000.0 ) - t342 [ 0ULL ] ) ; if
( t480 >= 1.0 ) { t492 = ( t480 - 1.0 ) * 461.523 + t391 ; t481 = t391 / (
t492 == 0.0 ? 1.0E-16 : t492 ) ; } else { t481 = 1.0 ; } t494 = t481 * 0.01 ;
t391 = ( X [ 21ULL ] - t481 ) / ( t494 == 0.0 ? 1.0E-16 : t494 ) ; if ( X [
21ULL ] - t481 <= 0.0 ) { t391 = 0.0 ; } else if ( X [ 21ULL ] - t481 >= t481
* 0.01 ) { t391 = X [ 21ULL ] - t481 ; } else { t391 = ( X [ 21ULL ] - t481 )
* ( t391 * t391 * 3.0 - t391 * t391 * t391 * 2.0 ) ; } t391 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I * t391 *
7.8539816339744827E-5 / 0.001 ; t391 *= 100000.0 ; t480 = - X [ 150ULL ] - X
[ 151ULL ] ; t481 = - X [ 152ULL ] - X [ 153ULL ] ;
tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = f_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t341_idx_0 ;
tlu2_1d_linear_linear_value ( & g_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = g_efOut [ 0 ] ; t484 = ( ( (
1.0 - t463 ) - t473 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach * t463 ) +
t341_idx_0 * t473 ; t473 = U_idx_1 * 0.031415926535897927 ; if ( t473 *
0.0001 <= 7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach =
7.8539816339744857E-13 ; } else if ( t473 * 0.0001 >= 3.1415926535897929E-6 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach = t473 * 0.0001
; } if ( X [ 161ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 161ULL
] >= 1.0 ? 1.0 : X [ 161ULL ] ; } if ( X [ 162ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; } t485 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
4124.48151675695 ; if ( X [ 159ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 = X [ 159ULL
] >= 623.15 ? 623.15 : X [ 159ULL ] ; } t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 * -
0.2214565261064077 ) + t488 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
1.200211433705052 ) + t488 * - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
6.9647057412830984 ) + t488 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; t497 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 - t485 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_sqrt (
fabs ( X [ 160ULL ] * X [ 160ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 / ( t497 ==
0.0 ? 1.0E-16 : t497 ) ) / ( t485 == 0.0 ? 1.0E-16 : t485 ) / ( X [ 159ULL ]
== 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach * 0.64 ; if ( X
[ 126ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach = X [ 126ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach = - X [ 126ULL
] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } t268 [ 0ULL ] = X [ 24ULL ] * 100000.0 ; t268 [ 1ULL ] = X [ 23ULL
] ; t268 [ 2ULL ] = X [ 176ULL ] ; t268 [ 3ULL ] = X [ 26ULL ] ; t268 [ 4ULL
] = X [ 178ULL ] ; t268 [ 5ULL ] = X [ 175ULL ] ; t268 [ 6ULL ] = X [ 25ULL ]
; t268 [ 7ULL ] = X [ 177ULL ] ; for ( t376 = 0ULL ; t376 < 8ULL ; t376 ++ )
{ t263 [ t376 ] = t268 [ t376 ] ; } t264 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t264 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= h_efOut ; tlu2_1d_linear_linear_value ( & i_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = i_efOut [ 0 ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t341_idx_0
; if ( X [ 26ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) { t485 = 0.0
; } else { t485 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t504 = X [ 23ULL
] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t485 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 461.523 ) +
t485 * 4124.48151675695 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 = X [ 24ULL ]
/ ( t504 == 0.0 ? 1.0E-16 : t504 ) ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = 1.0 - X [
26ULL ] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = pmf_exp ( (
( 1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 =
1.6701700790245661E-7 ; } t488 = X [ 25ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
j_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t341_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = pmf_exp (
pmf_log ( X [ 24ULL ] * 100000.0 ) - t341_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 >= 1.0 ) {
intrm_sf_mf_595 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 - 1.0 ) *
461.523 + t488 ; t463 = t488 / ( intrm_sf_mf_595 == 0.0 ? 1.0E-16 :
intrm_sf_mf_595 ) ; } else { t463 = 1.0 ; } t509 = t463 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = ( X [ 26ULL
] - t463 ) / ( t509 == 0.0 ? 1.0E-16 : t509 ) ; if ( X [ 26ULL ] - t463 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = 0.0
; } else if ( X [ 26ULL ] - t463 >= t463 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = X [ 26ULL ]
- t463 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 = ( X [ 26ULL
] - t463 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 *
0.00012500000000000003 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 *= 100000.0 ;
t488 = U_idx_2 * 0.01 ; tlu2_1d_linear_linear_value ( & k_efOut [ 0ULL ] , &
t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 =
k_efOut [ 0 ] ; t463 = t341_idx_0 ; tlu2_1d_linear_linear_value ( & l_efOut [
0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t341_idx_0 = l_efOut [ 0 ] ; t491 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t485 ) *
t463 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) +
t341_idx_0 * t485 ; if ( X [ 203ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } if ( X [ 202ULL ] <= 0.0 ) { t485 =
0.0 ; } else { t485 = X [ 202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } t463 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
t485 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 461.523 ) +
t485 * 4124.48151675695 ; t342 [ 0ULL ] = X [ 197ULL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= m_efOut ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = n_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & o_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL
] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = o_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = p_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power = X [ 197ULL ] *
t463 ; t516 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power / (
X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) * ( t488 /
7.8539816339744827E-5 ) * ( t488 / 7.8539816339744827E-5 ) * fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power / ( X [ 116ULL ]
== 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) ; t492 = t516 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t485 ) *
t341_idx_0 + t302_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) +
t303_idx_0 * t485 ) ; t342 [ 0ULL ] = X [ 200ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = r_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & s_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL
] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = s_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & t_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] ,
& t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = t_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho = X [ 200ULL
] * t463 ; intrm_sf_mf_540 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho / ( X [ 24ULL
] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( t488 / 7.8539816339744827E-5 ) * (
t488 / 7.8539816339744827E-5 ) * fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho / ( X [ 24ULL
] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) ; t493 = intrm_sf_mf_540 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t485 ) *
t341_idx_0 + t302_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) +
t303_idx_0 * t485 ) ; t342 [ 0ULL ] = X [ 198ULL ] ;
tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t24
= u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = v_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & w_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL
] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = w_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & x_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ] ,
& t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = x_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 198ULL ]
* t463 ; t528 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / ( X [ 24ULL
] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( - t488 / 7.8539816339744827E-5 ) * ( -
t488 / 7.8539816339744827E-5 ) * fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / ( X [ 24ULL
] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) ; t494 = t528 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t485 ) *
t341_idx_0 + t302_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) +
t303_idx_0 * t485 ) ; t342 [ 0ULL ] = X [ 199ULL ] ;
tlu2_linear_linear_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= y_efOut ; tlu2_1d_linear_linear_value ( & ab_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = ab_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t29 . mField0 [
0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = bb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = cb_efOut [ 0 ] ; t463 *= X [
199ULL ] ; t535 = t463 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) * (
- t488 / 7.8539816339744827E-5 ) * ( - t488 / 7.8539816339744827E-5 ) * fabs
( t463 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) ; if ( t488 >=
0.0 ) { t485 = ( t493 - t492 ) * t488 ; } else { t485 = - ( ( ( t535 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t485 ) *
t341_idx_0 + t302_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) +
t303_idx_0 * t485 ) ) - t494 ) * t488 ) ; } t285 [ 0ULL ] = X [ 28ULL ] *
100000.0 ; t285 [ 1ULL ] = X [ 27ULL ] ; t285 [ 2ULL ] = X [ 208ULL ] ; t285
[ 3ULL ] = X [ 30ULL ] ; t285 [ 4ULL ] = X [ 210ULL ] ; t285 [ 5ULL ] = X [
207ULL ] ; t285 [ 6ULL ] = X [ 29ULL ] ; t285 [ 7ULL ] = X [ 209ULL ] ; for (
t376 = 0ULL ; t376 < 8ULL ; t376 ++ ) { t268 [ t376 ] = t285 [ t376 ] ; }
t342 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup ( & db_efOut .
mField0 [ 0ULL ] , & db_efOut . mField1 [ 0ULL ] , & db_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29 = db_efOut ;
tlu2_1d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = eb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t341_idx_0 ;
if ( X [ 30ULL ] <= 0.0 ) { t492 = 0.0 ; } else { t492 = X [ 30ULL ] >= 1.0 ?
1.0 : X [ 30ULL ] ; } if ( X [ 29ULL ] <= 0.0 ) { t493 = 0.0 ; } else { t493
= X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } t463 = X [ 27ULL ] * ( ( ( ( 1.0
- t492 ) - t493 ) * 296.802103844292 + t492 * 461.523 ) + t493 *
4124.48151675695 ) ; t494 = X [ 28ULL ] / ( t463 == 0.0 ? 1.0E-16 : t463 ) ;
if ( 1.0 - X [ 30ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W = 1.0 - X [ 30ULL ] ; }
else if ( 1.0 - X [ 30ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W = pmf_exp ( ( ( 1.0 - X
[ 30ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W = 1.6701700790245661E-7
; } t496 = X [ 29ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W ) * 3827.6794129126583
+ 296.802103844292 ; tlu2_1d_linear_linear_value ( & fb_efOut [ 0ULL ] , &
t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 =
fb_efOut [ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W =
pmf_exp ( pmf_log ( X [ 28ULL ] * 100000.0 ) - t341_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W >= 1.0 ) { t463 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W - 1.0 ) * 461.523 +
t496 ; t497 = t496 / ( t463 == 0.0 ? 1.0E-16 : t463 ) ; } else { t497 = 1.0 ;
} t463 = t497 * 0.01 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W
= ( X [ 30ULL ] - t497 ) / ( t463 == 0.0 ? 1.0E-16 : t463 ) ; if ( X [ 30ULL
] - t497 <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W =
0.0 ; } else if ( X [ 30ULL ] - t497 >= t497 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W = X [ 30ULL ] - t497 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W = ( X [ 30ULL
] - t497 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W = t494 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W * 0.12 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = gb_efOut [ 0 ] ; t496 =
t341_idx_0 ; tlu2_1d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = hb_efOut [ 0
] ; t498 = ( ( ( 1.0 - t492 ) - t493 ) * t496 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * t492 ) +
t341_idx_0 * t493 ; if ( X [ 33ULL ] <= 0.0 ) { t492 = 0.0 ; } else { t492 =
X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { t493 =
0.0 ; } else { t493 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t496 = ( ( (
1.0 - t492 ) - t493 ) * 296.802103844292 + t492 * 461.523 ) + t493 *
4124.48151675695 ; if ( X [ 223ULL ] <= 216.59999999999997 ) { t497 =
216.59999999999997 ; } else { t497 = X [ 223ULL ] >= 623.15 ? 623.15 : X [
223ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A = t497
* t497 ; t499 = ( ( ( 1074.1165326382541 + t497 * - 0.2214565261064077 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A *
0.00037212980109010952 ) * ( ( 1.0 - t492 ) - t493 ) + ( ( 1479.6504774710445
+ t497 * 1.200211433705052 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A * -
0.00038614513167842338 ) * t492 ) + ( ( 12825.281119790017 + t497 *
6.9647057412830984 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A * -
0.007052486824683288 ) * t493 ; t303_idx_0 = t499 - t496 ; t497 = - pmf_sqrt
( fabs ( X [ 224ULL ] * X [ 224ULL ] * ( t499 / ( t303_idx_0 == 0.0 ? 1.0E-16
: t303_idx_0 ) ) / ( t496 == 0.0 ? 1.0E-16 : t496 ) / ( X [ 223ULL ] == 0.0 ?
1.0E-16 : X [ 223ULL ] ) ) ) * 7.8539816339744827E-5 ; t302_idx_0 = X [ 31ULL
] * t496 ; t499 = X [ 32ULL ] / ( t302_idx_0 == 0.0 ? 1.0E-16 : t302_idx_0 )
; if ( X [ 227ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A = X [
227ULL ] >= 623.15 ? 623.15 : X [ 227ULL ] ; } t463 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = ( ( (
1074.1165326382541 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A
* - 0.2214565261064077 ) + t463 * 0.00037212980109010952 ) * ( ( 1.0 - t492 )
- t493 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A * 1.200211433705052
) + t463 * - 0.00038614513167842338 ) * t492 ) + ( ( 12825.281119790017 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A * 6.9647057412830984
) + t463 * - 0.007052486824683288 ) * t493 ; piece16 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden - t496 ; t496
= - pmf_sqrt ( fabs ( X [ 228ULL ] * X [ 228ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden / ( piece16
== 0.0 ? 1.0E-16 : piece16 ) ) / ( t496 == 0.0 ? 1.0E-16 : t496 ) / ( X [
227ULL ] == 0.0 ? 1.0E-16 : X [ 227ULL ] ) ) ) * 7.8539816339744827E-5 ; t290
[ 0ULL ] = X [ 32ULL ] * 100000.0 ; t290 [ 1ULL ] = X [ 31ULL ] ; t290 [ 2ULL
] = X [ 230ULL ] ; t290 [ 3ULL ] = X [ 33ULL ] ; t290 [ 4ULL ] = X [ 225ULL ]
; t290 [ 5ULL ] = X [ 229ULL ] ; t290 [ 6ULL ] = X [ 34ULL ] ; t290 [ 7ULL ]
= X [ 226ULL ] ; for ( t376 = 0ULL ; t376 < 8ULL ; t376 ++ ) { t285 [ t376 ]
= t290 [ t376 ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A
= - X [ 213ULL ] / ( t497 == 0.0 ? 1.0E-16 : t497 ) ; t497 = - X [ 183ULL ] /
( t496 == 0.0 ? 1.0E-16 : t496 ) ; t342 [ 0ULL ] = X [ 31ULL ] ;
tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [ 0ULL ] , & ib_efOut .
mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t24
= ib_efOut ; tlu2_1d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = jb_efOut [ 0
] ; t496 = t341_idx_0 ; if ( 1.0 - X [ 33ULL ] >= 0.01 ) { t463 = 1.0 - X [
33ULL ] ; } else if ( 1.0 - X [ 33ULL ] >= - 0.1 ) { t463 = pmf_exp ( ( ( 1.0
- X [ 33ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t463 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = X [ 34ULL ]
/ ( t463 == 0.0 ? 1.0E-16 : t463 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = kb_efOut [ 0 ] ; t463 =
pmf_exp ( pmf_log ( X [ 32ULL ] * 100000.0 ) - t341_idx_0 ) ; if ( t463 >=
1.0 ) { t559 = ( t463 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden ; t503 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden / ( t559 ==
0.0 ? 1.0E-16 : t559 ) ; } else { t503 = 1.0 ; } t561 = t503 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = ( X [ 33ULL
] - t503 ) / ( t561 == 0.0 ? 1.0E-16 : t561 ) ; if ( X [ 33ULL ] - t503 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = 0.0
; } else if ( X [ 33ULL ] - t503 >= t503 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = X [ 33ULL ]
- t503 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = ( X [ 33ULL
] - t503 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden = t499 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden *
7.8539816339744827E-5 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden *= 100000.0 ;
tlu2_1d_linear_linear_value ( & lb_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = lb_efOut [ 0 ] ; t463 =
t341_idx_0 ; tlu2_1d_linear_linear_value ( & mb_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = mb_efOut [ 0
] ; t504 = ( ( ( 1.0 - t492 ) - t493 ) * t463 + t496 * t492 ) + t341_idx_0 *
t493 ; t493 = ( X [ 220ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) -
0.039999990000000013 ; t496 = ( X [ 220ULL ] * - 0.7999998 + U_idx_3 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; t503 = U_idx_3 * 10.0 ; if (
t496 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t506 =
7.8539816339744857E-13 ; } else if ( t496 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t506 = 3.1415926535897929E-6 ; } else { t506 = t496
* 7.8539816339744827E-5 ; } if ( X [ 239ULL ] <= 0.0 ) { intrm_sf_mf_595 =
0.0 ; } else { intrm_sf_mf_595 = X [ 239ULL ] >= 1.0 ? 1.0 : X [ 239ULL ] ; }
if ( X [ 240ULL ] <= 0.0 ) { t508 = 0.0 ; } else { t508 = X [ 240ULL ] >= 1.0
? 1.0 : X [ 240ULL ] ; } t509 = ( ( ( 1.0 - intrm_sf_mf_595 ) - t508 ) *
296.802103844292 + intrm_sf_mf_595 * 461.523 ) + t508 * 4124.48151675695 ; if
( X [ 237ULL ] <= 216.59999999999997 ) { t463 = 216.59999999999997 ; } else {
t463 = X [ 237ULL ] >= 623.15 ? 623.15 : X [ 237ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power = t463 * t463 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( ( (
1074.1165326382541 + t463 * - 0.2214565261064077 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_595 ) - t508 ) + ( (
1479.6504774710445 + t463 * 1.200211433705052 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power * -
0.00038614513167842338 ) * intrm_sf_mf_595 ) + ( ( 12825.281119790017 + t463
* 6.9647057412830984 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power * -
0.007052486824683288 ) * t508 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 - t509 ;
intrm_sf_mf_595 = pmf_sqrt ( fabs ( X [ 238ULL ] * X [ 238ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W ) ) / ( t509 == 0.0 ?
1.0E-16 : t509 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ) *
t506 * 0.64 ; if ( - X [ 213ULL ] >= 0.0 ) { t506 = - X [ 213ULL ] / (
intrm_sf_mf_595 == 0.0 ? 1.0E-16 : intrm_sf_mf_595 ) * 1.0E-5 ; } else { t506
= X [ 213ULL ] / ( intrm_sf_mf_595 == 0.0 ? 1.0E-16 : intrm_sf_mf_595 ) *
1.0E-5 ; } if ( X [ 255ULL ] <= 0.0 ) { intrm_sf_mf_595 = 0.0 ; } else {
intrm_sf_mf_595 = X [ 255ULL ] >= 1.0 ? 1.0 : X [ 255ULL ] ; } if ( X [
256ULL ] <= 0.0 ) { t508 = 0.0 ; } else { t508 = X [ 256ULL ] >= 1.0 ? 1.0 :
X [ 256ULL ] ; } t463 = ( ( ( ( 1.0 - intrm_sf_mf_595 ) - t508 ) *
296.802103844292 + intrm_sf_mf_595 * 461.523 ) + t508 * 259.836612622973 ) *
293.15 ; t509 = 1.01325 / ( t463 == 0.0 ? 1.0E-16 : t463 ) ; if ( X [ 268ULL
] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
= 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [ 268ULL
] >= 1.0 ? 1.0 : X [ 268ULL ] ; } if ( X [ 267ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power = X [ 267ULL ] >=
1.0 ? 1.0 : X [ 267ULL ] ; } t463 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power * 259.836612622973
; t342 [ 0ULL ] = X [ 262ULL ] ; tlu2_linear_linear_prelookup ( & nb_efOut .
mField0 [ 0ULL ] , & nb_efOut . mField1 [ 0ULL ] , & nb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29 = nb_efOut ;
tlu2_1d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = ob_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = pb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = qb_efOut [ 0 ] ; t572 = X [
262ULL ] * t463 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I =
t572 / 1.01325 * ( - X [ 250ULL ] / 0.0019634954084936209 ) * ( - X [ 250ULL
] / 0.0019634954084936209 ) * fabs ( t572 / 1.01325 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ) * t341_idx_0 +
t302_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
) + t303_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power )
; t342 [ 0ULL ] = X [ 265ULL ] ; tlu2_linear_linear_prelookup ( & rb_efOut .
mField0 [ 0ULL ] , & rb_efOut . mField1 [ 0ULL ] , & rb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t23 = rb_efOut ;
tlu2_1d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = sb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = tb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ub_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = ub_efOut [ 0 ] ; t577 = X [
265ULL ] * t463 ; t583 = t577 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ]
) * ( - X [ 250ULL ] / 0.0019634954084936209 ) * ( - X [ 250ULL ] /
0.0019634954084936209 ) * fabs ( t577 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [
35ULL ] ) ) ; intrm_sf_mf_540 = t583 / 2.0 * 9.999999999999999E-14 + ( ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ) * t341_idx_0 +
t302_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
) + t303_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power )
; t342 [ 0ULL ] = X [ 263ULL ] ; tlu2_linear_linear_prelookup ( & vb_efOut .
mField0 [ 0ULL ] , & vb_efOut . mField1 [ 0ULL ] , & vb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29 = vb_efOut ;
tlu2_1d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = wb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & xb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = xb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = yb_efOut [ 0 ] ; t584 = X [
263ULL ] * t463 ; t590 = t584 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ]
) * ( X [ 250ULL ] / 0.0019634954084936209 ) * ( X [ 250ULL ] /
0.0019634954084936209 ) * fabs ( t584 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [
35ULL ] ) ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
= t590 / 2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ) * t341_idx_0 +
t302_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
) + t303_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power )
; t342 [ 0ULL ] = X [ 264ULL ] ; tlu2_linear_linear_prelookup ( & ac_efOut .
mField0 [ 0ULL ] , & ac_efOut . mField1 [ 0ULL ] , & ac_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t24 = ac_efOut ;
tlu2_1d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = bc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t302_idx_0 = cc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t303_idx_0 = dc_efOut [ 0 ] ; t463 *= X [
264ULL ] ; t595 = t463 / 1.01325 * ( X [ 250ULL ] / 0.0019634954084936209 ) *
( X [ 250ULL ] / 0.0019634954084936209 ) * fabs ( t463 / 1.01325 ) ; if ( - X
[ 250ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power = - ( (
intrm_sf_mf_540 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ) * X [
250ULL ] ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power = ( ( t595 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ) * t341_idx_0 +
t302_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
) + t303_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power )
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * X [
250ULL ] ; } t307 [ 0ULL ] = X [ 35ULL ] * 100000.0 ; t307 [ 1ULL ] = X [
36ULL ] ; t307 [ 2ULL ] = X [ 273ULL ] ; t307 [ 3ULL ] = X [ 38ULL ] ; t307 [
4ULL ] = X [ 275ULL ] ; t307 [ 5ULL ] = X [ 272ULL ] ; t307 [ 6ULL ] = X [
37ULL ] ; t307 [ 7ULL ] = X [ 274ULL ] ; for ( t376 = 0ULL ; t376 < 8ULL ;
t376 ++ ) { t290 [ t376 ] = t307 [ t376 ] ; } t342 [ 0ULL ] = X [ 36ULL ] ;
tlu2_linear_linear_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= ec_efOut ; tlu2_1d_linear_linear_value ( & fc_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = fc_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
t341_idx_0 ; if ( X [ 38ULL ] <= 0.0 ) { t463 = 0.0 ; } else { t463 = X [
38ULL ] >= 1.0 ? 1.0 : X [ 38ULL ] ; } if ( X [ 37ULL ] <= 0.0 ) { t516 = 0.0
; } else { t516 = X [ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } t492 = X [ 36ULL
] * ( ( ( ( 1.0 - t463 ) - t516 ) * 296.802103844292 + t463 * 461.523 ) +
t516 * 259.836612622973 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho = X [ 35ULL ]
/ ( t492 == 0.0 ? 1.0E-16 : t492 ) ; if ( 1.0 - X [ 38ULL ] >= 0.01 ) {
intrm_sf_mf_540 = 1.0 - X [ 38ULL ] ; } else if ( 1.0 - X [ 38ULL ] >= - 0.1
) { intrm_sf_mf_540 = pmf_exp ( ( ( 1.0 - X [ 38ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { intrm_sf_mf_540 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 37ULL ]
/ ( intrm_sf_mf_540 == 0.0 ? 1.0E-16 : intrm_sf_mf_540 ) * -
36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
gc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t341_idx_0 = gc_efOut [ 0 ] ; intrm_sf_mf_540 = pmf_exp ( pmf_log ( X [
35ULL ] * 100000.0 ) - t341_idx_0 ) ; if ( intrm_sf_mf_540 >= 1.0 ) { t600 =
( intrm_sf_mf_540 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t524 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / ( t600 ==
0.0 ? 1.0E-16 : t600 ) ; } else { t524 = 1.0 ; } t798 = t524 * 0.01 ;
intrm_sf_mf_540 = ( X [ 38ULL ] - t524 ) / ( t798 == 0.0 ? 1.0E-16 : t798 ) ;
if ( X [ 38ULL ] - t524 <= 0.0 ) { intrm_sf_mf_540 = 0.0 ; } else if ( X [
38ULL ] - t524 >= t524 * 0.01 ) { intrm_sf_mf_540 = X [ 38ULL ] - t524 ; }
else { intrm_sf_mf_540 = ( X [ 38ULL ] - t524 ) * ( intrm_sf_mf_540 *
intrm_sf_mf_540 * 3.0 - intrm_sf_mf_540 * intrm_sf_mf_540 * intrm_sf_mf_540 *
2.0 ) ; } intrm_sf_mf_540 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho *
intrm_sf_mf_540 * 0.0003 / 0.001 ; intrm_sf_mf_540 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = hc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t341_idx_0 ;
tlu2_1d_linear_linear_value ( & ic_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = ic_efOut [ 0 ] ; t528 = ( ( (
1.0 - t463 ) - t516 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * t463 ) +
t341_idx_0 * t516 ; t516 = U_idx_4 * 376.99111843077515 ; t524 = - ( X [
35ULL ] - 1.01325 ) * X [ 286ULL ] * 0.0001 ; t535 = t516 *
0.99999999999999978 / 0.99999999999999978 ; t307 [ 0ULL ] = X [ 300ULL ] ;
t307 [ 1ULL ] = X [ 39ULL ] ; t307 [ 2ULL ] = X [ 297ULL ] ; t307 [ 3ULL ] =
X [ 41ULL ] ; t307 [ 4ULL ] = X [ 299ULL ] ; t307 [ 5ULL ] = X [ 296ULL ] ;
t307 [ 6ULL ] = X [ 40ULL ] ; t307 [ 7ULL ] = X [ 298ULL ] ; if ( X [ 41ULL ]
<= 0.0 ) { t463 = 0.0 ; } else { t463 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL
] ; } if ( X [ 40ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t303_idx_0 = ( ( ( 1.0 - t463 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) *
296.802103844292 + t463 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
4124.48151675695 ; if ( X [ 302ULL ] <= 216.59999999999997 ) { t546 =
216.59999999999997 ; } else { t546 = X [ 302ULL ] >= 623.15 ? 623.15 : X [
302ULL ] ; } zc_int2 = t546 * t546 ; t547 = ( ( ( 1074.1165326382541 + t546 *
- 0.2214565261064077 ) + zc_int2 * 0.00037212980109010952 ) * ( ( 1.0 - t463
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
1479.6504774710445 + t546 * 1.200211433705052 ) + zc_int2 * -
0.00038614513167842338 ) * t463 ) + ( ( 12825.281119790017 + t546 *
6.9647057412830984 ) + zc_int2 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t547 -
t303_idx_0 ; t546 = - pmf_sqrt ( fabs ( X [ 303ULL ] * X [ 303ULL ] * ( t547
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) )
/ ( t303_idx_0 == 0.0 ? 1.0E-16 : t303_idx_0 ) / ( X [ 302ULL ] == 0.0 ?
1.0E-16 : X [ 302ULL ] ) ) ) * 0.0019634954084936209 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 39ULL ]
* t303_idx_0 ; t547 = X [ 42ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) ;
if ( X [ 305ULL ] <= 216.59999999999997 ) { zc_int2 = 216.59999999999997 ; }
else { zc_int2 = X [ 305ULL ] >= 623.15 ? 623.15 : X [ 305ULL ] ; }
t302_idx_0 = zc_int2 * zc_int2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = ( ( (
1074.1165326382541 + zc_int2 * - 0.2214565261064077 ) + t302_idx_0 *
0.00037212980109010952 ) * ( ( 1.0 - t463 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
1479.6504774710445 + zc_int2 * 1.200211433705052 ) + t302_idx_0 * -
0.00038614513167842338 ) * t463 ) + ( ( 12825.281119790017 + zc_int2 *
6.9647057412830984 ) + t302_idx_0 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; t621 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W - t303_idx_0 ; t303_idx_0
= - pmf_sqrt ( fabs ( X [ 306ULL ] * X [ 306ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W / ( t621 == 0.0 ? 1.0E-16
: t621 ) ) / ( t303_idx_0 == 0.0 ? 1.0E-16 : t303_idx_0 ) / ( X [ 305ULL ] ==
0.0 ? 1.0E-16 : X [ 305ULL ] ) ) ) * 0.0019634954084936209 ; zc_int2 = - X [
192ULL ] / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t546 = X [ 304ULL ] / (
t303_idx_0 == 0.0 ? 1.0E-16 : t303_idx_0 ) ; t342 [ 0ULL ] = X [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & jc_efOut . mField0 [ 0ULL ] , & jc_efOut .
mField1 [ 0ULL ] , & jc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t24
= jc_efOut ; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = kc_efOut [ 0
] ; t303_idx_0 = t341_idx_0 ; if ( 1.0 - X [ 41ULL ] >= 0.01 ) { t302_idx_0 =
1.0 - X [ 41ULL ] ; } else if ( 1.0 - X [ 41ULL ] >= - 0.1 ) { t302_idx_0 =
pmf_exp ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
t302_idx_0 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = X [ 40ULL ] / (
t302_idx_0 == 0.0 ? 1.0E-16 : t302_idx_0 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t24
. mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = lc_efOut [
0 ] ; t302_idx_0 = pmf_exp ( pmf_log ( X [ 42ULL ] * 100000.0 ) - t341_idx_0
) ; if ( t302_idx_0 >= 1.0 ) { t492 = ( t302_idx_0 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ; piece16 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W / ( t492 == 0.0 ? 1.0E-16
: t492 ) ; } else { piece16 = 1.0 ; } t764 = piece16 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = ( X [ 41ULL ] - piece16
) / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 41ULL ] - piece16 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = 0.0 ; } else if ( X [
41ULL ] - piece16 >= piece16 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = X [ 41ULL ] - piece16 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = ( X [ 41ULL ]
- piece16 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W = t547 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W * 0.00049087385212340522
/ 0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & mc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = mc_efOut [ 0 ] ; t302_idx_0
= t341_idx_0 ; tlu2_1d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = nc_efOut [ 0
] ; t552 = ( ( ( 1.0 - t463 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) *
t302_idx_0 + t303_idx_0 * t463 ) + t341_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; if ( X [
8ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t303_idx_0 =
0.0 ; } else { t303_idx_0 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; }
t302_idx_0 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
t303_idx_0 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 461.523 ) +
t303_idx_0 * 4124.48151675695 ; if ( X [ 316ULL ] <= 216.59999999999997 ) {
piece16 = 216.59999999999997 ; } else { piece16 = X [ 316ULL ] >= 623.15 ?
623.15 : X [ 316ULL ] ; } t463 = piece16 * piece16 ; t553 = ( ( (
1074.1165326382541 + piece16 * - 0.2214565261064077 ) + t463 *
0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
t303_idx_0 ) + ( ( 1479.6504774710445 + piece16 * 1.200211433705052 ) + t463
* - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
12825.281119790017 + piece16 * 6.9647057412830984 ) + t463 * -
0.007052486824683288 ) * t303_idx_0 ; t764 = t553 - t302_idx_0 ; piece16 = -
pmf_sqrt ( fabs ( X [ 317ULL ] * X [ 317ULL ] * ( t553 / ( t764 == 0.0 ?
1.0E-16 : t764 ) ) / ( t302_idx_0 == 0.0 ? 1.0E-16 : t302_idx_0 ) / ( X [
316ULL ] == 0.0 ? 1.0E-16 : X [ 316ULL ] ) ) ) * 0.32 ; t764 = X [ 6ULL ] *
t302_idx_0 ; t553 = X [ 43ULL ] / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [
319ULL ] <= 216.59999999999997 ) { t463 = 216.59999999999997 ; } else { t463
= X [ 319ULL ] >= 623.15 ? 623.15 : X [ 319ULL ] ; } t556 = t463 * t463 ;
t555 = ( ( ( 1074.1165326382541 + t463 * - 0.2214565261064077 ) + t556 *
0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
t303_idx_0 ) + ( ( 1479.6504774710445 + t463 * 1.200211433705052 ) + t556 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
12825.281119790017 + t463 * 6.9647057412830984 ) + t556 * -
0.007052486824683288 ) * t303_idx_0 ; t764 = t555 - t302_idx_0 ; t302_idx_0 =
- pmf_sqrt ( fabs ( X [ 320ULL ] * X [ 320ULL ] * ( t555 / ( t764 == 0.0 ?
1.0E-16 : t764 ) ) / ( t302_idx_0 == 0.0 ? 1.0E-16 : t302_idx_0 ) / ( X [
319ULL ] == 0.0 ? 1.0E-16 : X [ 319ULL ] ) ) ) * 0.32 ; t555 = - X [ 304ULL ]
/ ( piece16 == 0.0 ? 1.0E-16 : piece16 ) ; piece16 = X [ 318ULL ] / (
t302_idx_0 == 0.0 ? 1.0E-16 : t302_idx_0 ) ; t342 [ 0ULL ] = X [ 6ULL ] ;
tlu2_linear_linear_prelookup ( & oc_efOut . mField0 [ 0ULL ] , & oc_efOut .
mField1 [ 0ULL ] , & oc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= oc_efOut ; tlu2_1d_linear_linear_value ( & pc_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = pc_efOut [ 0
] ; t302_idx_0 = t341_idx_0 ; if ( 1.0 - X [ 8ULL ] >= 0.01 ) { t463 = 1.0 -
X [ 8ULL ] ; } else if ( 1.0 - X [ 8ULL ] >= - 0.1 ) { t463 = pmf_exp ( ( (
1.0 - X [ 8ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t463 =
1.6701700790245661E-7 ; } t556 = X [ 7ULL ] / ( t463 == 0.0 ? 1.0E-16 : t463
) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
qc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t341_idx_0 = qc_efOut [ 0 ] ; t463 = pmf_exp ( pmf_log ( X [ 43ULL ] *
100000.0 ) - t341_idx_0 ) ; if ( t463 >= 1.0 ) { t764 = ( t463 - 1.0 ) *
461.523 + t556 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t556 / (
t764 == 0.0 ? 1.0E-16 : t764 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0 ; } t764
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01 ;
t556 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) / ( t764 ==
0.0 ? 1.0E-16 : t764 ) ; if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 <= 0.0 ) {
t556 = 0.0 ; } else if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01 ) {
t556 = X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; } else {
t556 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * ( t556 *
t556 * 3.0 - t556 * t556 * t556 * 2.0 ) ; } t556 = t553 * t556 *
0.026773120849090417 / 0.001 ; t556 *= 100000.0 ; tlu2_1d_linear_linear_value
( & rc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL
] ) ; t341_idx_0 = rc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t341_idx_0 ;
tlu2_1d_linear_linear_value ( & sc_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = sc_efOut [ 0 ] ; t560 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
t303_idx_0 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
+ t302_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) +
t341_idx_0 * t303_idx_0 ; if ( X [ 11ULL ] <= 0.0 ) { t303_idx_0 = 0.0 ; }
else { t303_idx_0 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL
] <= 0.0 ) { t302_idx_0 = 0.0 ; } else { t302_idx_0 = X [ 10ULL ] >= 1.0 ?
1.0 : X [ 10ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( ( 1.0 -
t303_idx_0 ) - t302_idx_0 ) * 296.802103844292 + t303_idx_0 * 461.523 ) +
t302_idx_0 * 4124.48151675695 ; if ( X [ 330ULL ] <= 216.59999999999997 ) {
t559 = 216.59999999999997 ; } else { t559 = X [ 330ULL ] >= 623.15 ? 623.15 :
X [ 330ULL ] ; } t463 = t559 * t559 ; t561 = ( ( ( 1074.1165326382541 + t559
* - 0.2214565261064077 ) + t463 * 0.00037212980109010952 ) * ( ( 1.0 -
t303_idx_0 ) - t302_idx_0 ) + ( ( 1479.6504774710445 + t559 *
1.200211433705052 ) + t463 * - 0.00038614513167842338 ) * t303_idx_0 ) + ( (
12825.281119790017 + t559 * 6.9647057412830984 ) + t463 * -
0.007052486824683288 ) * t302_idx_0 ; t764 = t561 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t559 = -
pmf_sqrt ( fabs ( X [ 331ULL ] * X [ 331ULL ] * ( t561 / ( t764 == 0.0 ?
1.0E-16 : t764 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) /
( X [ 330ULL ] == 0.0 ? 1.0E-16 : X [ 330ULL ] ) ) ) * 0.32 ; t764 = X [ 9ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t561 = X
[ 44ULL ] / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 332ULL ] <=
216.59999999999997 ) { t463 = 216.59999999999997 ; } else { t463 = X [ 332ULL
] >= 623.15 ? 623.15 : X [ 332ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = t463 * t463
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A = ( ( (
1074.1165326382541 + t463 * - 0.2214565261064077 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
0.00037212980109010952 ) * ( ( 1.0 - t303_idx_0 ) - t302_idx_0 ) + ( (
1479.6504774710445 + t463 * 1.200211433705052 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * -
0.00038614513167842338 ) * t303_idx_0 ) + ( ( 12825.281119790017 + t463 *
6.9647057412830984 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * -
0.007052486824683288 ) * t302_idx_0 ; t764 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = - pmf_sqrt (
fabs ( X [ 333ULL ] * X [ 333ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A / ( t764 == 0.0 ?
1.0E-16 : t764 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) /
( X [ 332ULL ] == 0.0 ? 1.0E-16 : X [ 332ULL ] ) ) ) * 0.32 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A = - X [ 318ULL ] /
( t559 == 0.0 ? 1.0E-16 : t559 ) ; t559 = X [ 138ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) ;
t342 [ 0ULL ] = X [ 9ULL ] ; tlu2_linear_linear_prelookup ( & tc_efOut .
mField0 [ 0ULL ] , & tc_efOut . mField1 [ 0ULL ] , & tc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t24 = tc_efOut ;
tlu2_1d_linear_linear_value ( & uc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = uc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = t341_idx_0
; if ( 1.0 - X [ 11ULL ] >= 0.01 ) { t463 = 1.0 - X [ 11ULL ] ; } else if (
1.0 - X [ 11ULL ] >= - 0.1 ) { t463 = pmf_exp ( ( ( 1.0 - X [ 11ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t463 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W = X [ 10ULL ] / ( t463
== 0.0 ? 1.0E-16 : t463 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & vc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = vc_efOut [ 0 ] ; t463 =
pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t341_idx_0 ) ; if ( t463 >=
1.0 ) { t764 = ( t463 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W ; t463 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W / ( t764 == 0.0 ?
1.0E-16 : t764 ) ; } else { t463 = 1.0 ; } t764 = t463 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W = ( X [ 11ULL ] - t463 )
/ ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 11ULL ] - t463 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W = 0.0 ; } else if ( X [
11ULL ] - t463 >= t463 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W = X [ 11ULL ] - t463 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W = ( X [ 11ULL ] -
t463 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W = t561 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W * 0.026773120849090417 /
0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & wc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = wc_efOut [ 0 ] ; t463 =
t341_idx_0 ; tlu2_1d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = xc_efOut [ 0
] ; t569 = ( ( ( 1.0 - t303_idx_0 ) - t302_idx_0 ) * t463 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * t303_idx_0
) + t341_idx_0 * t302_idx_0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 0ULL ] = X
[ 349ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0
[ 1ULL ] = X [ 45ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 2ULL ] = X
[ 346ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0
[ 3ULL ] = X [ 47ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 4ULL ] = X
[ 348ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0
[ 5ULL ] = X [ 345ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ 6ULL ] = X
[ 46ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [
7ULL ] = X [ 347ULL ] ; if ( X [ 47ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 47ULL
] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t463 = 0.0 ; }
else { t463 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } t572 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t463 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t463 * 259.836612622973 ; if ( X [ 351ULL ] <= 216.59999999999997 ) { t573 =
216.59999999999997 ; } else { t573 = X [ 351ULL ] >= 623.15 ? 623.15 : X [
351ULL ] ; } t577 = t573 * t573 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = ( ( (
1074.1165326382541 + t573 * - 0.2214565261064077 ) + t577 *
0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t463 ) + (
( 1479.6504774710445 + t573 * 1.200211433705052 ) + t577 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224837913 + t573 * - 0.044484923911364271 ) + t577 *
0.00036936011832043369 ) * t463 ; t764 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I - t572 ; t573 = -
pmf_sqrt ( fabs ( X [ 352ULL ] * X [ 352ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I / ( t764 == 0.0 ?
1.0E-16 : t764 ) ) / ( t572 == 0.0 ? 1.0E-16 : t572 ) / ( X [ 351ULL ] == 0.0
? 1.0E-16 : X [ 351ULL ] ) ) ) * 0.0019634954084936209 ; t764 = X [ 45ULL ] *
t572 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X [ 48ULL ]
/ ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 354ULL ] <= 216.59999999999997
) { t577 = 216.59999999999997 ; } else { t577 = X [ 354ULL ] >= 623.15 ?
623.15 : X [ 354ULL ] ; } t584 = t577 * t577 ; t583 = ( ( (
1074.1165326382541 + t577 * - 0.2214565261064077 ) + t584 *
0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t463 ) + (
( 1479.6504774710445 + t577 * 1.200211433705052 ) + t584 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224837913 + t577 * - 0.044484923911364271 ) + t584 *
0.00036936011832043369 ) * t463 ; t764 = t583 - t572 ; t572 = - pmf_sqrt (
fabs ( X [ 355ULL ] * X [ 355ULL ] * ( t583 / ( t764 == 0.0 ? 1.0E-16 : t764
) ) / ( t572 == 0.0 ? 1.0E-16 : t572 ) / ( X [ 354ULL ] == 0.0 ? 1.0E-16 : X
[ 354ULL ] ) ) ) * 0.0019634954084936209 ; t577 = - X [ 281ULL ] / ( t573 ==
0.0 ? 1.0E-16 : t573 ) ; t573 = X [ 353ULL ] / ( t572 == 0.0 ? 1.0E-16 : t572
) ; t342 [ 0ULL ] = X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & yc_efOut .
mField0 [ 0ULL ] , & yc_efOut . mField1 [ 0ULL ] , & yc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29 = yc_efOut ;
tlu2_1d_linear_linear_value ( & ad_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = ad_efOut [ 0 ] ; t572 =
t341_idx_0 ; if ( 1.0 - X [ 47ULL ] >= 0.01 ) { t584 = 1.0 - X [ 47ULL ] ; }
else if ( 1.0 - X [ 47ULL ] >= - 0.1 ) { t584 = pmf_exp ( ( ( 1.0 - X [ 47ULL
] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t584 = 1.6701700790245661E-7 ; } t583
= X [ 46ULL ] / ( t584 == 0.0 ? 1.0E-16 : t584 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & bd_efOut [ 0ULL ] , & t29
. mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = bd_efOut [
0 ] ; t584 = pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t341_idx_0 ) ; if
( t584 >= 1.0 ) { t764 = ( t584 - 1.0 ) * 461.523 + t583 ; t586 = t583 / (
t764 == 0.0 ? 1.0E-16 : t764 ) ; } else { t586 = 1.0 ; } t764 = t586 * 0.01 ;
t583 = ( X [ 47ULL ] - t586 ) / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [
47ULL ] - t586 <= 0.0 ) { t583 = 0.0 ; } else if ( X [ 47ULL ] - t586 >= t586
* 0.01 ) { t583 = X [ 47ULL ] - t586 ; } else { t583 = ( X [ 47ULL ] - t586 )
* ( t583 * t583 * 3.0 - t583 * t583 * t583 * 2.0 ) ; } t583 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * t583 *
0.00049087385212340522 / 0.001 ; t583 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & cd_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = cd_efOut [ 0 ] ; t584 =
t341_idx_0 ; tlu2_1d_linear_linear_value ( & dd_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = dd_efOut [ 0
] ; t590 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t463 ) *
t584 + t572 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
) + t341_idx_0 * t463 ; if ( X [ 381ULL ] <= 0.0 ) { t572 = 0.0 ; } else {
t572 = X [ 381ULL ] >= 1.0 ? 1.0 : X [ 381ULL ] ; } if ( X [ 382ULL ] <= 0.0
) { t584 = 0.0 ; } else { t584 = X [ 382ULL ] >= 1.0 ? 1.0 : X [ 382ULL ] ; }
t764 = ( ( ( ( 1.0 - t572 ) - t584 ) * 296.802103844292 + t572 * 461.523 ) +
t584 * 259.836612622973 ) * 293.15 ; t586 = 1.01325 / ( t764 == 0.0 ? 1.0E-16
: t764 ) ; t595 = ( X [ 385ULL ] * 0.07812500122070315 + U_idx_9 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 51ULL ] <= 0.0 ) { t492 = 0.0 ; } else {
t492 = X [ 51ULL ] >= 1.0 ? 1.0 : X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 52ULL
] >= 1.0 ? 1.0 : X [ 52ULL ] ; } t599 = ( ( ( 1.0 - t492 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
296.802103844292 + t492 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
259.836612622973 ; if ( X [ 389ULL ] <= 216.59999999999997 ) { t600 =
216.59999999999997 ; } else { t600 = X [ 389ULL ] >= 623.15 ? 623.15 : X [
389ULL ] ; } t798 = t600 * t600 ; t601 = ( ( ( 1074.1165326382541 + t600 * -
0.2214565261064077 ) + t798 * 0.00037212980109010952 ) * ( ( 1.0 - t492 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
1479.6504774710445 + t600 * 1.200211433705052 ) + t798 * -
0.00038614513167842338 ) * t492 ) + ( ( 900.63941224837913 + t600 * -
0.044484923911364271 ) + t798 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t764 = t601
- t599 ; t600 = - pmf_sqrt ( fabs ( X [ 390ULL ] * X [ 390ULL ] * ( t601 / (
t764 == 0.0 ? 1.0E-16 : t764 ) ) / ( t599 == 0.0 ? 1.0E-16 : t599 ) / ( X [
389ULL ] == 0.0 ? 1.0E-16 : X [ 389ULL ] ) ) ) * 0.0019634954084936209 ; t764
= X [ 49ULL ] * t599 ; t601 = X [ 50ULL ] / ( t764 == 0.0 ? 1.0E-16 : t764 )
; if ( X [ 393ULL ] <= 216.59999999999997 ) { t798 = 216.59999999999997 ; }
else { t798 = X [ 393ULL ] >= 623.15 ? 623.15 : X [ 393ULL ] ; } t463 = t798
* t798 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W = ( ( (
1074.1165326382541 + t798 * - 0.2214565261064077 ) + t463 *
0.00037212980109010952 ) * ( ( 1.0 - t492 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
1479.6504774710445 + t798 * 1.200211433705052 ) + t463 * -
0.00038614513167842338 ) * t492 ) + ( ( 900.63941224837913 + t798 * -
0.044484923911364271 ) + t463 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t764 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W - t599 ; t599 = -
pmf_sqrt ( fabs ( X [ 394ULL ] * X [ 394ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W / ( t764 == 0.0 ? 1.0E-16
: t764 ) ) / ( t599 == 0.0 ? 1.0E-16 : t599 ) / ( X [ 393ULL ] == 0.0 ?
1.0E-16 : X [ 393ULL ] ) ) ) * 0.0019634954084936209 ; t328 [ 0ULL ] = X [
50ULL ] * 100000.0 ; t328 [ 1ULL ] = X [ 49ULL ] ; t328 [ 2ULL ] = X [ 396ULL
] ; t328 [ 3ULL ] = X [ 51ULL ] ; t328 [ 4ULL ] = X [ 391ULL ] ; t328 [ 5ULL
] = X [ 395ULL ] ; t328 [ 6ULL ] = X [ 52ULL ] ; t328 [ 7ULL ] = X [ 392ULL ]
; for ( t376 = 0ULL ; t376 < 8ULL ; t376 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_F [ t376 ] = t328 [ t376 ]
; } t798 = X [ 388ULL ] / ( t600 == 0.0 ? 1.0E-16 : t600 ) ; t600 = - X [
376ULL ] / ( t599 == 0.0 ? 1.0E-16 : t599 ) ; t342 [ 0ULL ] = X [ 49ULL ] ;
tlu2_linear_linear_prelookup ( & ed_efOut . mField0 [ 0ULL ] , & ed_efOut .
mField1 [ 0ULL ] , & ed_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= ed_efOut ; tlu2_1d_linear_linear_value ( & fd_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = fd_efOut [ 0
] ; t599 = t341_idx_0 ; if ( 1.0 - X [ 51ULL ] >= 0.01 ) { t463 = 1.0 - X [
51ULL ] ; } else if ( 1.0 - X [ 51ULL ] >= - 0.1 ) { t463 = pmf_exp ( ( ( 1.0
- X [ 51ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t463 =
1.6701700790245661E-7 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W
= X [ 52ULL ] / ( t463 == 0.0 ? 1.0E-16 : t463 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & gd_efOut [ 0ULL ] , & t29
. mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = gd_efOut [
0 ] ; t463 = pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t341_idx_0 ) ; if
( t463 >= 1.0 ) { t764 = ( t463 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W ; t605 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W / ( t764 == 0.0 ? 1.0E-16
: t764 ) ; } else { t605 = 1.0 ; } t764 = t605 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W = ( X [ 51ULL ] - t605 )
/ ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 51ULL ] - t605 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W = 0.0 ; } else if ( X [
51ULL ] - t605 >= t605 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W = X [ 51ULL ] - t605 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W = ( X [ 51ULL ] -
t605 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W = t601 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W * 0.0019634954084936209 /
0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & hd_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = hd_efOut [ 0 ] ; t463 =
t341_idx_0 ; tlu2_1d_linear_linear_value ( & id_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = id_efOut [ 0
] ; t606 = ( ( ( 1.0 - t492 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * t463 +
t599 * t492 ) + t341_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t599 =
U_idx_9 * 10.0 ; if ( X [ 385ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { t605 = 1.9634954084936209E-11 ; } else if ( X [
385ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) { t605 =
0.0012566370614359179 ; } else { t605 = X [ 385ULL ] * 0.0019634954084936209
; } if ( X [ 408ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
408ULL ] >= 1.0 ? 1.0 : X [ 408ULL ] ; } if ( X [ 409ULL ] <= 0.0 ) { t492 =
0.0 ; } else { t492 = X [ 409ULL ] >= 1.0 ? 1.0 : X [ 409ULL ] ; } t609 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) -
t492 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 461.523 ) +
t492 * 259.836612622973 ; if ( X [ 406ULL ] <= 216.59999999999997 ) { t797 =
216.59999999999997 ; } else { t797 = X [ 406ULL ] >= 623.15 ? 623.15 : X [
406ULL ] ; } t463 = t797 * t797 ; t611 = ( ( ( 1074.1165326382541 + t797 * -
0.2214565261064077 ) + t463 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t492 ) +
( ( 1479.6504774710445 + t797 * 1.200211433705052 ) + t463 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
900.63941224837913 + t797 * - 0.044484923911364271 ) + t463 *
0.00036936011832043369 ) * t492 ; t764 = t611 - t609 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = pmf_sqrt (
fabs ( X [ 407ULL ] * X [ 407ULL ] * ( t611 / ( t764 == 0.0 ? 1.0E-16 : t764
) ) / ( t609 == 0.0 ? 1.0E-16 : t609 ) / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X
[ 406ULL ] ) ) ) * t605 * 0.64 ; if ( X [ 376ULL ] >= 0.0 ) { t605 = X [
376ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) * 1.0E-5 ;
} else { t605 = - X [ 376ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) *
1.0E-5 ; } if ( X [ 14ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [
14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { t492 = 0.0
; } else { t492 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; } t609 = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t492 )
* 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 461.523 ) +
t492 * 259.836612622973 ; if ( X [ 413ULL ] <= 216.59999999999997 ) { t797 =
216.59999999999997 ; } else { t797 = X [ 413ULL ] >= 623.15 ? 623.15 : X [
413ULL ] ; } t787 = t797 * t797 ; t611 = ( ( ( 1074.1165326382541 + t797 * -
0.2214565261064077 ) + t787 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t492 ) +
( ( 1479.6504774710445 + t797 * 1.200211433705052 ) + t787 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
900.63941224837913 + t797 * - 0.044484923911364271 ) + t787 *
0.00036936011832043369 ) * t492 ; t764 = t611 - t609 ; t797 = - pmf_sqrt (
fabs ( X [ 414ULL ] * X [ 414ULL ] * ( t611 / ( t764 == 0.0 ? 1.0E-16 : t764
) ) / ( t609 == 0.0 ? 1.0E-16 : t609 ) / ( X [ 413ULL ] == 0.0 ? 1.0E-16 : X
[ 413ULL ] ) ) ) * 0.32 ; t764 = X [ 12ULL ] * t609 ; t611 = X [ 53ULL ] / (
t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 416ULL ] <= 216.59999999999997 ) {
t463 = 216.59999999999997 ; } else { t463 = X [ 416ULL ] >= 623.15 ? 623.15 :
X [ 416ULL ] ; } t442 = t463 * t463 ; t787 = ( ( ( 1074.1165326382541 + t463
* - 0.2214565261064077 ) + t442 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t492 ) +
( ( 1479.6504774710445 + t463 * 1.200211433705052 ) + t442 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) + ( (
900.63941224837913 + t463 * - 0.044484923911364271 ) + t442 *
0.00036936011832043369 ) * t492 ; t764 = t787 - t609 ; t609 = - pmf_sqrt (
fabs ( X [ 417ULL ] * X [ 417ULL ] * ( t787 / ( t764 == 0.0 ? 1.0E-16 : t764
) ) / ( t609 == 0.0 ? 1.0E-16 : t609 ) / ( X [ 416ULL ] == 0.0 ? 1.0E-16 : X
[ 416ULL ] ) ) ) * 0.32 ; t787 = - X [ 353ULL ] / ( t797 == 0.0 ? 1.0E-16 :
t797 ) ; t797 = X [ 415ULL ] / ( t609 == 0.0 ? 1.0E-16 : t609 ) ; t342 [ 0ULL
] = X [ 12ULL ] ; tlu2_linear_linear_prelookup ( & jd_efOut . mField0 [ 0ULL
] , & jd_efOut . mField1 [ 0ULL ] , & jd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] ,
& t34 [ 0ULL ] ) ; t29 = jd_efOut ; tlu2_1d_linear_linear_value ( & kd_efOut
[ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t341_idx_0 = kd_efOut [ 0 ] ; t609 = t341_idx_0 ; if ( 1.0 - X [ 14ULL ] >=
0.01 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0
- X [ 14ULL ] ; } else if ( 1.0 - X [ 14ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_exp ( (
( 1.0 - X [ 14ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
1.6701700790245661E-7 ; } t442 = X [ 13ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
ld_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t33 [ 0ULL ] , & t34 [ 0ULL ] )
; t341_idx_0 = ld_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_exp (
pmf_log ( X [ 53ULL ] * 100000.0 ) - t341_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >= 1.0 ) {
t764 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 - 1.0
) * 461.523 + t442 ; t463 = t442 / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; } else
{ t463 = 1.0 ; } t764 = t463 * 0.01 ; t442 = ( X [ 14ULL ] - t463 ) / ( t764
== 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 14ULL ] - t463 <= 0.0 ) { t442 = 0.0 ; }
else if ( X [ 14ULL ] - t463 >= t463 * 0.01 ) { t442 = X [ 14ULL ] - t463 ; }
else { t442 = ( X [ 14ULL ] - t463 ) * ( t442 * t442 * 3.0 - t442 * t442 *
t442 * 2.0 ) ; } t442 = t611 * t442 * 0.026773120849090417 / 0.001 ; t442 *=
100000.0 ; tlu2_1d_linear_linear_value ( & md_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = md_efOut [ 0
] ; t463 = t341_idx_0 ; tlu2_1d_linear_linear_value ( & nd_efOut [ 0ULL ] , &
t29 . mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField6 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 =
nd_efOut [ 0 ] ; t302_idx_0 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) - t492 ) *
t463 + t609 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
) + t341_idx_0 * t492 ; if ( X [ 17ULL ] <= 0.0 ) { t492 = 0.0 ; } else {
t492 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) {
t609 = 0.0 ; } else { t609 = X [ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } t463
= ( ( ( 1.0 - t492 ) - t609 ) * 296.802103844292 + t492 * 461.523 ) + t609 *
259.836612622973 ; if ( X [ 427ULL ] <= 216.59999999999997 ) { t303_idx_0 =
216.59999999999997 ; } else { t303_idx_0 = X [ 427ULL ] >= 623.15 ? 623.15 :
X [ 427ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t303_idx_0 *
t303_idx_0 ; t619 = ( ( ( 1074.1165326382541 + t303_idx_0 * -
0.2214565261064077 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
0.00037212980109010952 ) * ( ( 1.0 - t492 ) - t609 ) + ( ( 1479.6504774710445
+ t303_idx_0 * 1.200211433705052 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.00038614513167842338 ) * t492 ) + ( ( 900.63941224837913 + t303_idx_0 * -
0.044484923911364271 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
0.00036936011832043369 ) * t609 ; t764 = t619 - t463 ; t303_idx_0 = -
pmf_sqrt ( fabs ( X [ 428ULL ] * X [ 428ULL ] * ( t619 / ( t764 == 0.0 ?
1.0E-16 : t764 ) ) / ( t463 == 0.0 ? 1.0E-16 : t463 ) / ( X [ 427ULL ] == 0.0
? 1.0E-16 : X [ 427ULL ] ) ) ) * 0.32 ; t764 = X [ 15ULL ] * t463 ; t619 = X
[ 54ULL ] / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 429ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 429ULL ]
>= 623.15 ? 623.15 : X [ 429ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t621 = ( ( (
1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.2214565261064077 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
0.00037212980109010952 ) * ( ( 1.0 - t492 ) - t609 ) + ( ( 1479.6504774710445
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
1.200211433705052 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * -
0.00038614513167842338 ) * t492 ) + ( ( 900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.044484923911364271 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
0.00036936011832043369 ) * t609 ; t764 = t621 - t463 ; t463 = - pmf_sqrt (
fabs ( X [ 430ULL ] * X [ 430ULL ] * ( t621 / ( t764 == 0.0 ? 1.0E-16 : t764
) ) / ( t463 == 0.0 ? 1.0E-16 : t463 ) / ( X [ 429ULL ] == 0.0 ? 1.0E-16 : X
[ 429ULL ] ) ) ) * 0.32 ; t621 = - X [ 415ULL ] / ( t303_idx_0 == 0.0 ?
1.0E-16 : t303_idx_0 ) ; t303_idx_0 = - X [ 388ULL ] / ( t463 == 0.0 ?
1.0E-16 : t463 ) ; t342 [ 0ULL ] = X [ 15ULL ] ; tlu2_linear_linear_prelookup
( & od_efOut . mField0 [ 0ULL ] , & od_efOut . mField1 [ 0ULL ] , & od_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t342 [
0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29 = od_efOut ;
tlu2_1d_linear_linear_value ( & pd_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = pd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t341_idx_0 ;
if ( 1.0 - X [ 17ULL ] >= 0.01 ) { t463 = 1.0 - X [ 17ULL ] ; } else if ( 1.0
- X [ 17ULL ] >= - 0.1 ) { t463 = pmf_exp ( ( ( 1.0 - X [ 17ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t463 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [ 16ULL ]
/ ( t463 == 0.0 ? 1.0E-16 : t463 ) * - 36.965491221318985 + 296.802103844292
; tlu2_1d_linear_linear_value ( & qd_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL
] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = qd_efOut [ 0 ] ; t463 =
pmf_exp ( pmf_log ( X [ 54ULL ] * 100000.0 ) - t341_idx_0 ) ; if ( t463 >=
1.0 ) { t764 = ( t463 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; t463 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 / ( t764 ==
0.0 ? 1.0E-16 : t764 ) ; } else { t463 = 1.0 ; } t764 = t463 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( X [ 17ULL
] - t463 ) / ( t764 == 0.0 ? 1.0E-16 : t764 ) ; if ( X [ 17ULL ] - t463 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = 0.0
; } else if ( X [ 17ULL ] - t463 >= t463 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [ 17ULL ]
- t463 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( X [ 17ULL
] - t463 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = t619 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & rd_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = rd_efOut [ 0 ] ; t463 =
t341_idx_0 ; tlu2_1d_linear_linear_value ( & sd_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = sd_efOut [ 0
] ; t463 = ( ( ( 1.0 - t492 ) - t609 ) * t463 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * t492 ) +
t341_idx_0 * t609 ; t609 = ( ( ( ( X [ 3ULL ] * 0.1 - X [ 61ULL ] ) + X [
62ULL ] * - 0.1 ) + X [ 65ULL ] * 1.0E-9 ) - X [ 67ULL ] ) + X [ 4ULL ] ;
t342 [ 0ULL ] = X [ 55ULL ] ; t242 [ 0 ] = 23ULL ;
tlu2_linear_nearest_prelookup ( & td_efOut . mField0 [ 0ULL ] , & td_efOut .
mField1 [ 0ULL ] , & td_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t342 [ 0ULL ] , & t242 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t24 = td_efOut ; t342 [ 0ULL ] = X [ 437ULL ] ; t245 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & ud_efOut . mField0 [ 0ULL ] , & ud_efOut .
mField1 [ 0ULL ] , & ud_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField22 , & t342 [ 0ULL ] , & t245 [ 0ULL ] , & t34 [ 0ULL ] ) ;
t29 = ud_efOut ; tlu2_2d_linear_nearest_value ( & vd_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , & t29 . mField0 [ 0ULL ] , &
t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t242 [ 0ULL ] , & t245 [ 0ULL ] , & t34 [ 0ULL ] ) ; t341_idx_0 = vd_efOut [
0 ] ; t764 = t573 - t577 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( t764 / 2.0
* 1.0E-5 - - 0.01 ) / 0.02 ; t492 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 2.0 ; if (
t764 / 2.0 * 1.0E-5 <= - 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t577 *
1.0E-5 ; } else if ( ( t573 - t577 ) / 2.0 * 1.0E-5 >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t573 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( 1.0 -
t492 ) * t577 + t573 * t492 ) * 1.0E-5 ; } t342 [ 0 ] = 293.15 ;
tlu2_linear_linear_prelookup ( & wd_efOut . mField0 [ 0ULL ] , & wd_efOut .
mField1 [ 0ULL ] , & wd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t342 [ 0ULL ] , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t29
= wd_efOut ; tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t29 .
mField0 [ 0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t264 [ 0 ] = xd_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t29 . mField0 [
0ULL ] , & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t37 [ 0 ] = yd_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ae_efOut [ 0ULL ] , & t29 . mField0 [ 0ULL ]
, & t29 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t33 [ 0ULL ] , & t34 [ 0ULL ] ) ; t262 [ 0 ] = ae_efOut [ 0 ] ; t573 = ( ( (
1.0 - t572 ) - t584 ) * t264 [ 0ULL ] + t37 [ 0ULL ] * t572 ) + t262 [ 0ULL ]
* t584 ; t492 = t600 - t798 ; t572 = ( t492 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02
; t577 = t572 * t572 * 3.0 - t572 * t572 * t572 * 2.0 ; if ( t492 / 2.0 *
1.0E-5 <= - 0.01 ) { t572 = t798 * 1.0E-5 ; } else if ( ( t600 - t798 ) / 2.0
* 1.0E-5 >= 0.01 ) { t572 = t600 * 1.0E-5 ; } else { t572 = ( ( 1.0 - t577 )
* t798 + t600 * t577 ) * 1.0E-5 ; } t492 = t797 - t787 ; t577 = ( t492 / 2.0
* 1.0E-5 - - 0.01 ) / 0.02 ; t584 = t577 * t577 * 3.0 - t577 * t577 * t577 *
2.0 ; if ( t492 / 2.0 * 1.0E-5 <= - 0.01 ) { t577 = t787 * 1.0E-5 ; } else if
( ( t797 - t787 ) / 2.0 * 1.0E-5 >= 0.01 ) { t577 = t797 * 1.0E-5 ; } else {
t577 = ( ( 1.0 - t584 ) * t787 + t797 * t584 ) * 1.0E-5 ; } t797 = t303_idx_0
- t621 ; t584 = ( t797 / 2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; t600 = t584 * t584
* 3.0 - t584 * t584 * t584 * 2.0 ; if ( t797 / 2.0 * 1.0E-5 <= - 0.01 ) {
t584 = t621 * 1.0E-5 ; } else if ( ( t303_idx_0 - t621 ) / 2.0 * 1.0E-5 >=
0.01 ) { t584 = t303_idx_0 * 1.0E-5 ; } else { t584 = ( ( 1.0 - t600 ) * t621
+ t303_idx_0 * t600 ) * 1.0E-5 ; } t383 [ 0ULL ] = t29 . mField0 [ 0ULL ] ;
t383 [ 1ULL ] = t29 . mField0 [ 1ULL ] ; t242 [ 0ULL ] = t29 . mField2 [ 0ULL
] ; tlu2_1d_linear_linear_value ( & be_efOut [ 0ULL ] , & t383 [ 0ULL ] , &
t242 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t33 [ 0ULL ]
, & t34 [ 0ULL ] ) ; t342 [ 0 ] = be_efOut [ 0 ] ; t600 = ( ( ( 1.0 - t465 )
- t466 ) * t264 [ 0ULL ] + t37 [ 0ULL ] * t465 ) + t342 [ 0ULL ] * t466 ;
t465 = ( X [ 59ULL ] - 0.9 ) / 0.099999999999999978 ; t797 = t497 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A ; t466 = ( t797 /
2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; t798 = t466 * t466 * 3.0 - t466 * t466 *
t466 * 2.0 ; if ( t797 / 2.0 * 1.0E-5 <= - 0.01 ) { t466 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A * 1.0E-5 ; } else if
( ( t497 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A ) / 2.0 *
1.0E-5 >= 0.01 ) { t466 = t497 * 1.0E-5 ; } else { t466 = ( ( 1.0 - t798 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A + t497 * t798 ) *
1.0E-5 ; } t497 = t465 * t465 * 3.0 - t465 * t465 * t465 * 2.0 ; t465 = ( ( (
1.0 - intrm_sf_mf_595 ) - t508 ) * t264 [ 0ULL ] + t37 [ 0ULL ] *
intrm_sf_mf_595 ) + t262 [ 0ULL ] * t508 ; if ( X [ 59ULL ] <= 0.9 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A = X [ 59ULL ] >= 1.0
? 1.0 : t497 ; } t798 = t475 - t477 ; t497 = ( t798 / 2.0 * 1.0E-5 - - 0.01 )
/ 0.02 ; t797 = t546 - zc_int2 ; intrm_sf_mf_595 = ( t797 / 2.0 * 1.0E-5 - -
0.01 ) / 0.02 ; t508 = intrm_sf_mf_595 * intrm_sf_mf_595 * 3.0 -
intrm_sf_mf_595 * intrm_sf_mf_595 * intrm_sf_mf_595 * 2.0 ; if ( t797 / 2.0 *
1.0E-5 <= - 0.01 ) { intrm_sf_mf_595 = zc_int2 * 1.0E-5 ; } else if ( ( t546
- zc_int2 ) / 2.0 * 1.0E-5 >= 0.01 ) { intrm_sf_mf_595 = t546 * 1.0E-5 ; }
else { intrm_sf_mf_595 = ( ( 1.0 - t508 ) * zc_int2 + t546 * t508 ) * 1.0E-5
; } t508 = t497 * t497 * 3.0 - t497 * t497 * t497 * 2.0 ; if ( t798 / 2.0 *
1.0E-5 <= - 0.01 ) { t497 = t477 * 1.0E-5 ; } else if ( ( t475 - t477 ) / 2.0
* 1.0E-5 >= 0.01 ) { t497 = t475 * 1.0E-5 ; } else { t497 = ( ( 1.0 - t508 )
* t477 + t475 * t508 ) * 1.0E-5 ; } t798 = piece16 - t555 ; t475 = ( t798 /
2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; t477 = t475 * t475 * 3.0 - t475 * t475 *
t475 * 2.0 ; if ( t798 / 2.0 * 1.0E-5 <= - 0.01 ) { t475 = t555 * 1.0E-5 ; }
else if ( ( piece16 - t555 ) / 2.0 * 1.0E-5 >= 0.01 ) { t475 = piece16 *
1.0E-5 ; } else { t475 = ( ( 1.0 - t477 ) * t555 + piece16 * t477 ) * 1.0E-5
; } if ( t456 / 1.4810541339306735 <= 0.0 ) { t477 = 0.0 ; } else if ( t456 /
1.4810541339306735 >= 1.0 ) { t477 = 1.0 ; } else { t477 = t456 /
1.4810541339306735 ; } t798 = t559 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A ; t508 = ( t798 /
2.0 * 1.0E-5 - - 0.01 ) / 0.02 ; t546 = t508 * t508 * 3.0 - t508 * t508 *
t508 * 2.0 ; if ( t798 / 2.0 * 1.0E-5 <= - 0.01 ) { t508 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A * 1.0E-5 ; } else
if ( ( t559 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A ) /
2.0 * 1.0E-5 >= 0.01 ) { t508 = t559 * 1.0E-5 ; } else { t508 = ( ( 1.0 -
t546 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A + t559 *
t546 ) * 1.0E-5 ; } if ( t456 / 1.2531035067089982 <= 0.0 ) { t546 = 0.0 ; }
else if ( t456 / 1.2531035067089982 >= 1.0 ) { t546 = 1.0 ; } else { t546 =
t456 / 1.2531035067089982 ; } t555 = X [ 119ULL ] * 0.00062831853071795862 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A = X [ 369ULL ] *
0.0031415926535897937 ; t261 [ 0ULL ] = X [ 0ULL ] * 0.00027777777777777778 ;
t261 [ 1ULL ] = X [ 57ULL ] ; t261 [ 2ULL ] = X [ 1ULL ] ; t261 [ 3ULL ] = X
[ 58ULL ] ; t261 [ 4ULL ] = t379 ; t261 [ 5ULL ] = X [ 59ULL ] ; t261 [ 6ULL
] = X [ 57ULL ] * X [ 57ULL ] * ( M [ 0ULL ] != 0 ? 4.03416E-7 : X [ 60ULL ]
) * 0.001 * 1000.0 ; t261 [ 7ULL ] = t381 ; t261 [ 8ULL ] = t381 ; t261 [
9ULL ] = X [ 59ULL ] ; t261 [ 10ULL ] = X [ 60ULL ] ; t261 [ 11ULL ] = t381 ;
t261 [ 12ULL ] = t382 ; t261 [ 13ULL ] = X [ 59ULL ] ; t261 [ 14ULL ] =
intrm_sf_mf_2 ; t261 [ 15ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Mach_A ; t261 [ 16ULL ] = X
[ 61ULL ] ; t261 [ 17ULL ] = X [ 59ULL ] ; t261 [ 18ULL ] = X [ 62ULL ] ;
t261 [ 19ULL ] = ( X [ 63ULL ] * intrm_sf_mf_2 + ( 1.0 - intrm_sf_mf_2 ) *
t382 * t382 ) * 1000.0 ; t261 [ 20ULL ] = X [ 63ULL ] * 1000.0 ; t261 [ 21ULL
] = X [ 2ULL ] ; t261 [ 22ULL ] = X [ 62ULL ] ; t261 [ 23ULL ] = U_idx_0 ;
t261 [ 24ULL ] = U_idx_0 ; t261 [ 25ULL ] = X [ 59ULL ] ; t261 [ 26ULL ] = X
[ 59ULL ] ; t261 [ 27ULL ] = U_idx_0 ; t261 [ 28ULL ] = X [ 59ULL ] ; t261 [
29ULL ] = - X [ 57ULL ] ; t261 [ 30ULL ] = - X [ 57ULL ] ; t261 [ 31ULL ] = X
[ 59ULL ] ; t261 [ 32ULL ] = X [ 59ULL ] ; t261 [ 33ULL ] = - X [ 57ULL ] ;
t261 [ 34ULL ] = X [ 59ULL ] ; t261 [ 35ULL ] = X [ 59ULL ] ; t261 [ 36ULL ]
= X [ 59ULL ] ; t261 [ 37ULL ] = X [ 59ULL ] ; t261 [ 38ULL ] = X [ 59ULL ] ;
t261 [ 39ULL ] = - X [ 61ULL ] ; t261 [ 40ULL ] = - X [ 61ULL ] ; t261 [
41ULL ] = X [ 62ULL ] ; t261 [ 42ULL ] = X [ 62ULL ] ; t261 [ 43ULL ] = - X [
61ULL ] ; t261 [ 44ULL ] = X [ 62ULL ] ; t261 [ 45ULL ] = X [ 62ULL ] ; t261
[ 46ULL ] = X [ 62ULL ] ; t261 [ 47ULL ] = X [ 62ULL ] ; t261 [ 48ULL ] = X [
62ULL ] ; t261 [ 49ULL ] = - X [ 61ULL ] ; t261 [ 50ULL ] = - X [ 61ULL ] ;
t261 [ 51ULL ] = X [ 62ULL ] ; t261 [ 52ULL ] = t453 ; t261 [ 53ULL ] = X [
62ULL ] ; t261 [ 54ULL ] = X [ 62ULL ] ; t261 [ 55ULL ] = X [ 3ULL ] ; t261 [
56ULL ] = t453 * t453 * 0.01 ; t261 [ 57ULL ] = X [ 64ULL ] ; t261 [ 58ULL ]
= U_idx_10 ; t261 [ 59ULL ] = Fuel_Cell_Boost_Converter_L_i ; t261 [ 60ULL ]
= Fuel_Cell_Boost_Converter_L_n_v ; t261 [ 61ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 62ULL ] = X [ 65ULL ] ; t261 [ 63ULL
] = X [ 4ULL ] ; t261 [ 64ULL ] = X [ 65ULL ] * X [ 65ULL ] *
1.0000000000000002E-12 ; t261 [ 65ULL ] = Fuel_Cell_Boost_Converter_L_n_v ;
t261 [ 66ULL ] = X [ 67ULL ] ; t261 [ 67ULL ] = X [ 4ULL ] ; t261 [ 68ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t261 [ 69ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t261 [ 70ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 71ULL ] = X [ 62ULL ] ; t261 [ 72ULL
] = Fuel_Cell_Boost_Converter_L_n_v * X [ 67ULL ] + (
Fuel_Cell_Boost_Converter_L_n_v - X [ 64ULL ] ) * (
Fuel_Cell_Boost_Converter_L_i - X [ 67ULL ] ) ; t261 [ 73ULL ] = X [ 3ULL ] ;
t261 [ 74ULL ] = Fuel_Cell_Current_Sensor1_I ; t261 [ 75ULL ] =
Fuel_Cell_Current_Sensor1_I ; t261 [ 76ULL ] = X [ 62ULL ] ; t261 [ 77ULL ] =
X [ 62ULL ] ; t261 [ 78ULL ] = Fuel_Cell_Current_Sensor1_I ; t261 [ 79ULL ] =
X [ 68ULL ] ; t261 [ 80ULL ] = X [ 69ULL ] * 0.1 ; t261 [ 81ULL ] = X [ 70ULL
] ; t261 [ 82ULL ] = X [ 71ULL ] ; t261 [ 83ULL ] = X [ 72ULL ] ; t261 [
84ULL ] = X [ 73ULL ] * 0.1 ; t261 [ 85ULL ] = X [ 74ULL ] ; t261 [ 86ULL ] =
X [ 75ULL ] ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 +
87ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t368 ]
; } for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 95ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t368 ] ; } for (
t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 103ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t368 ] ; } for (
t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 111ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t368 ] ; } t261
[ 119ULL ] = X [ 68ULL ] ; t261 [ 120ULL ] = X [ 69ULL ] * 0.1 ; t261 [
121ULL ] = X [ 70ULL ] ; t261 [ 122ULL ] = X [ 71ULL ] ; t261 [ 123ULL ] = X
[ 72ULL ] ; t261 [ 124ULL ] = X [ 73ULL ] * 0.1 ; t261 [ 125ULL ] = X [ 74ULL
] ; t261 [ 126ULL ] = X [ 75ULL ] ; t261 [ 127ULL ] = X [ 96ULL ] ; t261 [
128ULL ] = X [ 97ULL ] ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [
t368 + 129ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi
[ t368 ] ; } for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 +
137ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t368
] ; } for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 145ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t368 ] ; } for (
t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 153ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t368 ] ; } t261
[ 161ULL ] = X [ 66ULL ] ; t261 [ 162ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * 0.0001 ;
t261 [ 163ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.20177105219743391 / 192970.66424 * 1000.0 ; t261 [ 164ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 * 1000.0 ;
t261 [ 165ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 * 1000.0 ;
t261 [ 166ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.3583866814737065 / 385941.32848 * 1000.0 ; t261 [ 167ULL ] = X [ 98ULL ] ;
t261 [ 168ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * 100.0 ; t261
[ 169ULL ] = X [ 9ULL ] ; t261 [ 170ULL ] = X [ 10ULL ] ; t261 [ 171ULL ] = X
[ 11ULL ] ; t261 [ 172ULL ] = X [ 15ULL ] ; t261 [ 173ULL ] = X [ 16ULL ] ;
t261 [ 174ULL ] = X [ 17ULL ] ; t261 [ 175ULL ] = t456 ; t261 [ 176ULL ] =
t477 ; t261 [ 177ULL ] = t546 ; t261 [ 178ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t261 [
179ULL ] = X [ 100ULL ] ; t261 [ 180ULL ] = X [ 101ULL ] ; t261 [ 181ULL ] =
X [ 15ULL ] ; t261 [ 182ULL ] = X [ 16ULL ] ; t261 [ 183ULL ] = X [ 17ULL ] ;
t261 [ 184ULL ] = - X [ 100ULL ] ; t261 [ 185ULL ] = X [ 102ULL ] ; t261 [
186ULL ] = X [ 103ULL ] ; t261 [ 187ULL ] = X [ 9ULL ] ; t261 [ 188ULL ] = X
[ 10ULL ] ; t261 [ 189ULL ] = X [ 11ULL ] ; t261 [ 190ULL ] = - X [ 102ULL ]
; t261 [ 191ULL ] = X [ 104ULL ] ; t261 [ 192ULL ] = X [ 105ULL ] ; t261 [
193ULL ] = X [ 15ULL ] ; t261 [ 194ULL ] = X [ 16ULL ] ; t261 [ 195ULL ] = X
[ 17ULL ] ; t261 [ 196ULL ] = - X [ 104ULL ] ; t261 [ 197ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.001 ;
t261 [ 198ULL ] = X [ 108ULL ] ; t261 [ 199ULL ] = X [ 106ULL ] ; t261 [
200ULL ] = X [ 9ULL ] ; t261 [ 201ULL ] = X [ 10ULL ] ; t261 [ 202ULL ] = X [
11ULL ] ; t261 [ 203ULL ] = - X [ 108ULL ] ; t261 [ 204ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ; t261 [
205ULL ] = X [ 107ULL ] ; t261 [ 206ULL ] = X [ 15ULL ] ; t261 [ 207ULL ] = X
[ 16ULL ] ; t261 [ 208ULL ] = X [ 17ULL ] ; t261 [ 209ULL ] = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra38 ; t261 [
210ULL ] = ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 *
241812.2160511087 / 0.0020158806832745466 * 0.001 + ( ( ( X [ 103ULL ] - X [
102ULL ] * - 3931.85243448965 ) + ( X [ 105ULL ] - X [ 104ULL ] * -
271.011680699068 ) ) + ( X [ 101ULL ] - X [ 100ULL ] * - 2546.6190535198302 )
) ) + ( X [ 106ULL ] + X [ 107ULL ] ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.001 ;
t261 [ 211ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t261 [
212ULL ] = X [ 9ULL ] ; t261 [ 213ULL ] = X [ 10ULL ] ; t261 [ 214ULL ] = X [
11ULL ] ; t261 [ 215ULL ] = X [ 15ULL ] ; t261 [ 216ULL ] = X [ 16ULL ] ;
t261 [ 217ULL ] = X [ 17ULL ] ; t261 [ 218ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t261 [
219ULL ] = X [ 98ULL ] * - 1000.0 ; t261 [ 220ULL ] = X [ 98ULL ] * - 1000.0
; t261 [ 221ULL ] = - X [ 98ULL ] ; t261 [ 222ULL ] = X [ 110ULL ] * 1000.0 ;
t261 [ 223ULL ] = X [ 18ULL ] - 273.15 ; t261 [ 224ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i ; t261 [ 225ULL ]
= Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 226ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 227ULL ] = X [ 5ULL ] ; t261 [
228ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Capacitor_i * 1.0E-9 ; t261 [
229ULL ] = Fuel_Cell_Boost_Converter_L_i ; t261 [ 230ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t261 [ 231ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 232ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 233ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t261 [ 234ULL ] = - X [ 66ULL ] ; t261 [
235ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 236ULL ] = t459 ; t261 [
237ULL ] = X [ 99ULL ] ; t261 [ 238ULL ] = - ( X [ 66ULL ] * X [ 99ULL ] ) ;
t261 [ 239ULL ] = - X [ 66ULL ] ; t261 [ 240ULL ] = t459 ; t261 [ 241ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t261 [
242ULL ] = X [ 66ULL ] * - 0.001 ; t261 [ 243ULL ] = X [ 66ULL ] * X [ 66ULL
] * 0.001 ; t261 [ 244ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 245ULL
] = Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 246ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 247ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t261 [
248ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 249ULL ] = ( ( ( ( ( - X
[ 98ULL ] - X [ 110ULL ] ) - X [ 111ULL ] ) - X [ 112ULL ] ) - X [ 113ULL ] )
- X [ 114ULL ] ) * 1000.0 ; t261 [ 250ULL ] = X [ 115ULL ] ; t261 [ 251ULL ]
= X [ 116ULL ] * 0.1 ; t261 [ 252ULL ] = X [ 117ULL ] ; t261 [ 253ULL ] = X [
118ULL ] ; t261 [ 254ULL ] = X [ 119ULL ] ; t261 [ 255ULL ] = -
184.19157727996955 + t555 * 1000.0 ; t261 [ 256ULL ] = ( X [ 119ULL ] *
0.00062831853071795862 - 0.18419157727996954 ) * 1591.5494309189535 ; t261 [
257ULL ] = X [ 120ULL ] ; t261 [ 258ULL ] = X [ 121ULL ] ; t261 [ 259ULL ] =
X [ 122ULL ] ; t261 [ 260ULL ] = X [ 123ULL ] ; t261 [ 261ULL ] = X [ 124ULL
] ; t261 [ 262ULL ] = X [ 132ULL ] ; t261 [ 263ULL ] = X [ 131ULL ] ; t261 [
264ULL ] = X [ 120ULL ] ; t261 [ 265ULL ] = X [ 121ULL ] ; t261 [ 266ULL ] =
X [ 122ULL ] ; t261 [ 267ULL ] = X [ 124ULL ] ; t261 [ 268ULL ] = X [ 125ULL
] ; t261 [ 269ULL ] = X [ 126ULL ] ; t261 [ 270ULL ] = X [ 127ULL ] ; t261 [
271ULL ] = X [ 128ULL ] ; t261 [ 272ULL ] = X [ 129ULL ] ; t261 [ 273ULL ] =
X [ 130ULL ] ; t261 [ 274ULL ] = t600 ; t261 [ 275ULL ] = X [ 126ULL ] ; t261
[ 276ULL ] = X [ 127ULL ] ; t261 [ 277ULL ] = X [ 128ULL ] ; t261 [ 278ULL ]
= t467 ; t261 [ 279ULL ] = ( 1.0 - X [ 131ULL ] ) - X [ 132ULL ] ; t261 [
280ULL ] = X [ 133ULL ] ; t261 [ 281ULL ] = - 184.19157727996955 + t555 *
1000.0 ; t261 [ 282ULL ] = U_idx_1 ; t261 [ 283ULL ] = U_idx_1 *
3.1415926535897929E-6 ; t261 [ 284ULL ] = X [ 115ULL ] ; t261 [ 285ULL ] = X
[ 116ULL ] * 0.1 ; t261 [ 286ULL ] = X [ 117ULL ] ; t261 [ 287ULL ] = X [
118ULL ] ; t261 [ 288ULL ] = X [ 134ULL ] ; t261 [ 289ULL ] = X [ 135ULL ] *
0.1 ; t261 [ 290ULL ] = X [ 136ULL ] ; t261 [ 291ULL ] = X [ 137ULL ] ; t261
[ 292ULL ] = X [ 22ULL ] ; t261 [ 293ULL ] = X [ 142ULL ] ; t261 [ 294ULL ] =
X [ 21ULL ] ; t261 [ 295ULL ] = X [ 139ULL ] ; t261 [ 296ULL ] = X [ 19ULL ]
- 273.15 ; t261 [ 297ULL ] = t471 ; t261 [ 298ULL ] = X [ 140ULL ] * 0.1 ;
t261 [ 299ULL ] = X [ 20ULL ] * 0.1 ; t261 [ 300ULL ] = X [ 141ULL ] ; t261 [
301ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
100000.0 ; t261 [ 302ULL ] = X [ 143ULL ] ; t261 [ 303ULL ] = - X [ 126ULL ]
; t261 [ 304ULL ] = X [ 144ULL ] * 0.1 ; for ( t368 = 0ULL ; t368 < 8ULL ;
t368 ++ ) { t261 [ t368 + 305ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t368 ] ; } t261 [
313ULL ] = X [ 119ULL ] ; t261 [ 314ULL ] = X [ 145ULL ] ; t261 [ 315ULL ] =
t497 ; t261 [ 316ULL ] = t474 ; t261 [ 317ULL ] = - X [ 124ULL ] ; t261 [
318ULL ] = 0.18419157727996954 - t555 ; t261 [ 319ULL ] = X [ 146ULL ] ; t261
[ 320ULL ] = X [ 19ULL ] ; t261 [ 321ULL ] = X [ 22ULL ] ; t261 [ 322ULL ] =
X [ 21ULL ] ; t261 [ 323ULL ] = t391 ; t261 [ 324ULL ] = X [ 115ULL ] ; t261
[ 325ULL ] = X [ 116ULL ] * 0.1 ; t261 [ 326ULL ] = X [ 117ULL ] ; t261 [
327ULL ] = X [ 118ULL ] ; t261 [ 328ULL ] = t474 ; t261 [ 329ULL ] = X [
149ULL ] ; t261 [ 330ULL ] = t471 ; t261 [ 331ULL ] = t480 ; t261 [ 332ULL ]
= t481 ; t261 [ 333ULL ] = X [ 154ULL ] ; t261 [ 334ULL ] = X [ 155ULL ] ;
t261 [ 335ULL ] = X [ 134ULL ] ; t261 [ 336ULL ] = X [ 135ULL ] * 0.1 ; t261
[ 337ULL ] = X [ 136ULL ] ; t261 [ 338ULL ] = X [ 137ULL ] ; t261 [ 339ULL ]
= - X [ 124ULL ] ; t261 [ 340ULL ] = X [ 156ULL ] ; t261 [ 341ULL ] = - X [
126ULL ] ; t261 [ 342ULL ] = - X [ 127ULL ] ; t261 [ 343ULL ] = - X [ 128ULL
] ; t261 [ 344ULL ] = X [ 157ULL ] ; t261 [ 345ULL ] = X [ 158ULL ] ; t261 [
346ULL ] = t484 ; t261 [ 347ULL ] = t480 ; t261 [ 348ULL ] = - X [ 127ULL ] ;
t261 [ 349ULL ] = t481 ; t261 [ 350ULL ] = - X [ 128ULL ] ; t261 [ 351ULL ] =
( 1.0 - X [ 21ULL ] ) - X [ 22ULL ] ; t261 [ 352ULL ] = X [ 134ULL ] ; t261 [
353ULL ] = X [ 135ULL ] * 0.1 ; t261 [ 354ULL ] = X [ 136ULL ] ; t261 [
355ULL ] = X [ 137ULL ] ; t261 [ 356ULL ] = t473 * 0.0001 ; t261 [ 357ULL ] =
X [ 120ULL ] ; t261 [ 358ULL ] = X [ 121ULL ] ; t261 [ 359ULL ] = X [ 122ULL
] ; t261 [ 360ULL ] = X [ 126ULL ] ; t261 [ 361ULL ] = X [ 134ULL ] ; t261 [
362ULL ] = X [ 135ULL ] * 0.1 ; t261 [ 363ULL ] = X [ 136ULL ] ; t261 [
364ULL ] = X [ 137ULL ] ; t261 [ 365ULL ] = X [ 124ULL ] ; t261 [ 366ULL ] =
X [ 165ULL ] ; t261 [ 367ULL ] = X [ 126ULL ] ; t261 [ 368ULL ] = X [ 127ULL
] ; t261 [ 369ULL ] = X [ 128ULL ] ; t261 [ 370ULL ] = X [ 162ULL ] ; t261 [
371ULL ] = X [ 161ULL ] ; t261 [ 372ULL ] = X [ 159ULL ] ; t261 [ 373ULL ] =
X [ 160ULL ] * 0.1 ; t261 [ 374ULL ] = X [ 163ULL ] ; t261 [ 375ULL ] = X [
164ULL ] ; t261 [ 376ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach ; t261 [ 377ULL
] = X [ 124ULL ] ; t261 [ 378ULL ] = - X [ 124ULL ] ; t261 [ 379ULL ] = X [
120ULL ] ; t261 [ 380ULL ] = X [ 121ULL ] ; t261 [ 381ULL ] = X [ 122ULL ] ;
t261 [ 382ULL ] = - X [ 124ULL ] ; t261 [ 383ULL ] = X [ 165ULL ] ; t261 [
384ULL ] = - X [ 126ULL ] ; t261 [ 385ULL ] = - X [ 127ULL ] ; t261 [ 386ULL
] = - X [ 128ULL ] ; t261 [ 387ULL ] = X [ 162ULL ] ; t261 [ 388ULL ] = X [
161ULL ] ; t261 [ 389ULL ] = - X [ 126ULL ] ; t261 [ 390ULL ] = X [ 127ULL ]
; t261 [ 391ULL ] = - X [ 127ULL ] ; t261 [ 392ULL ] = X [ 128ULL ] ; t261 [
393ULL ] = - X [ 128ULL ] ; t261 [ 394ULL ] = U_idx_1 ; t261 [ 395ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 396ULL ] = X [ 166ULL ] ; t261 [
397ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 398ULL ] = X [ 167ULL ] ; t261 [ 399ULL
] = X [ 168ULL ] ; t261 [ 400ULL ] = X [ 169ULL ] ; t261 [ 401ULL ] = X [
24ULL ] * 0.1 ; t261 [ 402ULL ] = X [ 170ULL ] ; t261 [ 403ULL ] = X [ 171ULL
] ; t261 [ 404ULL ] = X [ 166ULL ] ; t261 [ 405ULL ] = X [ 24ULL ] * 0.1 ;
t261 [ 406ULL ] = X [ 167ULL ] ; t261 [ 407ULL ] = X [ 168ULL ] ; t261 [
408ULL ] = X [ 172ULL ] ; t261 [ 409ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 410ULL
] = X [ 173ULL ] ; t261 [ 411ULL ] = X [ 174ULL ] ; t261 [ 412ULL ] = X [
169ULL ] ; t261 [ 413ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 414ULL ] = X [ 170ULL
] ; t261 [ 415ULL ] = X [ 171ULL ] ; t261 [ 416ULL ] = X [ 23ULL ] ; t261 [
417ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 418ULL ] = X [ 25ULL ] ; t261 [ 419ULL
] = X [ 26ULL ] ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 +
420ULL ] = t263 [ t368 ] ; } t261 [ 428ULL ] = X [ 23ULL ] ; t261 [ 429ULL ]
= X [ 175ULL ] ; t261 [ 430ULL ] = X [ 179ULL ] ; t261 [ 431ULL ] = X [
180ULL ] ; t261 [ 432ULL ] = X [ 181ULL ] ; t261 [ 433ULL ] = X [ 23ULL ] -
273.15 ; t261 [ 434ULL ] = X [ 25ULL ] ; t261 [ 435ULL ] = X [ 177ULL ] ;
t261 [ 436ULL ] = X [ 26ULL ] ; t261 [ 437ULL ] = X [ 24ULL ] * 0.1 ; t261 [
438ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha25 ;
t261 [ 439ULL ] = X [ 176ULL ] ; t261 [ 440ULL ] = X [ 23ULL ] ; t261 [
441ULL ] = X [ 25ULL ] ; t261 [ 442ULL ] = X [ 26ULL ] ; t261 [ 443ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha22 ; t261 [
444ULL ] = X [ 166ULL ] ; t261 [ 445ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 446ULL
] = X [ 167ULL ] ; t261 [ 447ULL ] = X [ 168ULL ] ; t261 [ 448ULL ] = X [
179ULL ] ; t261 [ 449ULL ] = X [ 182ULL ] ; t261 [ 450ULL ] = X [ 183ULL ] ;
t261 [ 451ULL ] = X [ 184ULL ] ; t261 [ 452ULL ] = X [ 185ULL ] ; t261 [
453ULL ] = X [ 186ULL ] ; t261 [ 454ULL ] = X [ 187ULL ] ; t261 [ 455ULL ] =
X [ 172ULL ] ; t261 [ 456ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 457ULL ] = X [
173ULL ] ; t261 [ 458ULL ] = X [ 174ULL ] ; t261 [ 459ULL ] = X [ 180ULL ] ;
t261 [ 460ULL ] = X [ 188ULL ] ; t261 [ 461ULL ] = t488 ; t261 [ 462ULL ] = X
[ 150ULL ] ; t261 [ 463ULL ] = X [ 152ULL ] ; t261 [ 464ULL ] = X [ 189ULL ]
; t261 [ 465ULL ] = X [ 190ULL ] ; t261 [ 466ULL ] = X [ 169ULL ] ; t261 [
467ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 468ULL ] = X [ 170ULL ] ; t261 [ 469ULL
] = X [ 171ULL ] ; t261 [ 470ULL ] = X [ 181ULL ] ; t261 [ 471ULL ] = X [
191ULL ] ; t261 [ 472ULL ] = X [ 192ULL ] ; t261 [ 473ULL ] = X [ 193ULL ] ;
t261 [ 474ULL ] = X [ 194ULL ] ; t261 [ 475ULL ] = X [ 195ULL ] ; t261 [
476ULL ] = X [ 196ULL ] ; t261 [ 477ULL ] = t491 ; t261 [ 478ULL ] = X [
183ULL ] ; t261 [ 479ULL ] = t488 ; t261 [ 480ULL ] = X [ 192ULL ] ; t261 [
481ULL ] = X [ 184ULL ] ; t261 [ 482ULL ] = X [ 150ULL ] ; t261 [ 483ULL ] =
X [ 193ULL ] ; t261 [ 484ULL ] = X [ 185ULL ] ; t261 [ 485ULL ] = X [ 152ULL
] ; t261 [ 486ULL ] = X [ 194ULL ] ; t261 [ 487ULL ] = ( 1.0 - X [ 26ULL ] )
- X [ 25ULL ] ; t261 [ 488ULL ] = X [ 178ULL ] ; t261 [ 489ULL ] = X [ 115ULL
] ; t261 [ 490ULL ] = X [ 116ULL ] * 0.1 ; t261 [ 491ULL ] = X [ 117ULL ] ;
t261 [ 492ULL ] = X [ 118ULL ] ; t261 [ 493ULL ] = X [ 172ULL ] ; t261 [
494ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 495ULL ] = X [ 173ULL ] ; t261 [ 496ULL
] = X [ 174ULL ] ; t261 [ 497ULL ] = X [ 197ULL ] ; t261 [ 498ULL ] = X [
200ULL ] ; t261 [ 499ULL ] = X [ 115ULL ] ; t261 [ 500ULL ] = X [ 116ULL ] *
0.1 ; t261 [ 501ULL ] = X [ 117ULL ] ; t261 [ 502ULL ] = X [ 118ULL ] ; t261
[ 503ULL ] = X [ 147ULL ] ; t261 [ 504ULL ] = X [ 201ULL ] ; t261 [ 505ULL ]
= t488 ; t261 [ 506ULL ] = X [ 150ULL ] ; t261 [ 507ULL ] = X [ 152ULL ] ;
t261 [ 508ULL ] = X [ 202ULL ] ; t261 [ 509ULL ] = X [ 203ULL ] ; t261 [
510ULL ] = t488 ; t261 [ 511ULL ] = X [ 198ULL ] ; t261 [ 512ULL ] = X [
199ULL ] ; t261 [ 513ULL ] = X [ 172ULL ] ; t261 [ 514ULL ] = X [ 24ULL ] *
0.1 ; t261 [ 515ULL ] = X [ 173ULL ] ; t261 [ 516ULL ] = X [ 174ULL ] ; t261
[ 517ULL ] = - X [ 180ULL ] ; t261 [ 518ULL ] = X [ 201ULL ] ; t261 [ 519ULL
] = - t488 ; t261 [ 520ULL ] = - X [ 150ULL ] ; t261 [ 521ULL ] = - X [
152ULL ] ; t261 [ 522ULL ] = X [ 202ULL ] ; t261 [ 523ULL ] = X [ 203ULL ] ;
t261 [ 524ULL ] = - t488 ; t261 [ 525ULL ] = t488 ; t261 [ 526ULL ] = X [
147ULL ] ; t261 [ 527ULL ] = - X [ 180ULL ] ; t261 [ 528ULL ] = X [ 150ULL ]
; t261 [ 529ULL ] = - X [ 150ULL ] ; t261 [ 530ULL ] = X [ 152ULL ] ; t261 [
531ULL ] = - X [ 152ULL ] ; t261 [ 532ULL ] = t485 ; t261 [ 533ULL ] =
U_idx_2 ; t261 [ 534ULL ] = U_idx_2 * 0.01 ; t261 [ 535ULL ] = X [ 23ULL ] ;
t261 [ 536ULL ] = X [ 23ULL ] ; t261 [ 537ULL ] = X [ 115ULL ] ; t261 [
538ULL ] = X [ 116ULL ] * 0.1 ; t261 [ 539ULL ] = X [ 117ULL ] ; t261 [
540ULL ] = X [ 118ULL ] ; t261 [ 541ULL ] = U_idx_2 ; t261 [ 542ULL ] = X [
166ULL ] ; t261 [ 543ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 544ULL ] = X [ 167ULL
] ; t261 [ 545ULL ] = X [ 168ULL ] ; t261 [ 546ULL ] = X [ 204ULL ] ; t261 [
547ULL ] = X [ 28ULL ] * 0.1 ; t261 [ 548ULL ] = X [ 205ULL ] ; t261 [ 549ULL
] = X [ 206ULL ] ; t261 [ 550ULL ] = X [ 27ULL ] ; t261 [ 551ULL ] = X [
28ULL ] * 0.1 ; t261 [ 552ULL ] = X [ 29ULL ] ; t261 [ 553ULL ] = X [ 30ULL ]
; t261 [ 554ULL ] = X [ 27ULL ] ; t261 [ 555ULL ] = X [ 28ULL ] * 0.1 ; t261
[ 556ULL ] = X [ 29ULL ] ; t261 [ 557ULL ] = X [ 30ULL ] ; t261 [ 558ULL ] =
X [ 27ULL ] ; t261 [ 559ULL ] = X [ 28ULL ] * 0.1 ; t261 [ 560ULL ] = X [
29ULL ] ; t261 [ 561ULL ] = X [ 30ULL ] ; for ( t368 = 0ULL ; t368 < 8ULL ;
t368 ++ ) { t261 [ t368 + 562ULL ] = t268 [ t368 ] ; } t261 [ 570ULL ] = X [
27ULL ] ; t261 [ 571ULL ] = X [ 207ULL ] ; t261 [ 572ULL ] = X [ 211ULL ] ;
t261 [ 573ULL ] = X [ 27ULL ] - 273.15 ; t261 [ 574ULL ] = X [ 29ULL ] ; t261
[ 575ULL ] = X [ 209ULL ] ; t261 [ 576ULL ] = X [ 30ULL ] ; t261 [ 577ULL ] =
X [ 28ULL ] * 0.1 ; t261 [ 578ULL ] = t494 ; t261 [ 579ULL ] = X [ 208ULL ] ;
t261 [ 580ULL ] = X [ 27ULL ] ; t261 [ 581ULL ] = X [ 29ULL ] ; t261 [ 582ULL
] = X [ 30ULL ] ; t261 [ 583ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Fuel_Tank_W ; t261 [ 584ULL ] = X [
204ULL ] ; t261 [ 585ULL ] = X [ 28ULL ] * 0.1 ; t261 [ 586ULL ] = X [ 205ULL
] ; t261 [ 587ULL ] = X [ 206ULL ] ; t261 [ 588ULL ] = X [ 211ULL ] ; t261 [
589ULL ] = X [ 212ULL ] ; t261 [ 590ULL ] = X [ 213ULL ] ; t261 [ 591ULL ] =
X [ 214ULL ] ; t261 [ 592ULL ] = X [ 215ULL ] ; t261 [ 593ULL ] = X [ 216ULL
] ; t261 [ 594ULL ] = X [ 217ULL ] ; t261 [ 595ULL ] = t498 ; t261 [ 596ULL ]
= X [ 213ULL ] ; t261 [ 597ULL ] = X [ 214ULL ] ; t261 [ 598ULL ] = X [
215ULL ] ; t261 [ 599ULL ] = ( 1.0 - X [ 30ULL ] ) - X [ 29ULL ] ; t261 [
600ULL ] = X [ 210ULL ] ; t261 [ 601ULL ] = X [ 166ULL ] ; t261 [ 602ULL ] =
X [ 24ULL ] * 0.1 ; t261 [ 603ULL ] = X [ 167ULL ] ; t261 [ 604ULL ] = X [
168ULL ] ; t261 [ 605ULL ] = X [ 204ULL ] ; t261 [ 606ULL ] = X [ 28ULL ] *
0.1 ; t261 [ 607ULL ] = X [ 205ULL ] ; t261 [ 608ULL ] = X [ 206ULL ] ; t261
[ 609ULL ] = X [ 204ULL ] ; t261 [ 610ULL ] = X [ 28ULL ] * 0.1 ; t261 [
611ULL ] = X [ 205ULL ] ; t261 [ 612ULL ] = X [ 206ULL ] ; t261 [ 613ULL ] =
- X [ 213ULL ] ; t261 [ 614ULL ] = - X [ 214ULL ] ; t261 [ 615ULL ] = - X [
215ULL ] ; t261 [ 616ULL ] = X [ 211ULL ] * - 1000.0 ; t261 [ 617ULL ] = - X
[ 211ULL ] ; t261 [ 618ULL ] = - X [ 213ULL ] ; t261 [ 619ULL ] = - X [
214ULL ] ; t261 [ 620ULL ] = - X [ 215ULL ] ; t261 [ 621ULL ] = - X [ 213ULL
] ; t261 [ 622ULL ] = X [ 27ULL ] ; t261 [ 623ULL ] = X [ 27ULL ] ; t261 [
624ULL ] = X [ 218ULL ] ; t261 [ 625ULL ] = X [ 218ULL ] ; t261 [ 626ULL ] =
X [ 219ULL ] ; t261 [ 627ULL ] = X [ 220ULL ] * 0.1 ; t261 [ 628ULL ] = X [
221ULL ] ; t261 [ 629ULL ] = X [ 222ULL ] ; t261 [ 630ULL ] = X [ 166ULL ] ;
t261 [ 631ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 632ULL ] = X [ 167ULL ] ; t261 [
633ULL ] = X [ 168ULL ] ; t261 [ 634ULL ] = X [ 34ULL ] ; t261 [ 635ULL ] = X
[ 226ULL ] ; t261 [ 636ULL ] = X [ 33ULL ] ; t261 [ 637ULL ] = X [ 223ULL ] ;
t261 [ 638ULL ] = X [ 31ULL ] - 273.15 ; t261 [ 639ULL ] = - X [ 213ULL ] ;
t261 [ 640ULL ] = X [ 224ULL ] * 0.1 ; t261 [ 641ULL ] = X [ 32ULL ] * 0.1 ;
t261 [ 642ULL ] = X [ 225ULL ] ; t261 [ 643ULL ] = t499 * 100000.0 ; t261 [
644ULL ] = X [ 227ULL ] ; t261 [ 645ULL ] = - X [ 183ULL ] ; t261 [ 646ULL ]
= X [ 228ULL ] * 0.1 ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [
t368 + 647ULL ] = t285 [ t368 ] ; } t261 [ 655ULL ] = X [ 218ULL ] ; t261 [
656ULL ] = X [ 229ULL ] ; t261 [ 657ULL ] = t466 ; t261 [ 658ULL ] = - X [
211ULL ] ; t261 [ 659ULL ] = - X [ 179ULL ] ; t261 [ 660ULL ] = X [ 230ULL ]
; t261 [ 661ULL ] = X [ 31ULL ] ; t261 [ 662ULL ] = X [ 34ULL ] ; t261 [
663ULL ] = X [ 33ULL ] ; t261 [ 664ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_mdot_w_conden ; t261 [
665ULL ] = X [ 219ULL ] ; t261 [ 666ULL ] = X [ 220ULL ] * 0.1 ; t261 [
667ULL ] = X [ 221ULL ] ; t261 [ 668ULL ] = X [ 222ULL ] ; t261 [ 669ULL ] =
- X [ 211ULL ] ; t261 [ 670ULL ] = X [ 231ULL ] ; t261 [ 671ULL ] = - X [
213ULL ] ; t261 [ 672ULL ] = - X [ 214ULL ] ; t261 [ 673ULL ] = - X [ 215ULL
] ; t261 [ 674ULL ] = X [ 232ULL ] ; t261 [ 675ULL ] = X [ 233ULL ] ; t261 [
676ULL ] = X [ 166ULL ] ; t261 [ 677ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 678ULL
] = X [ 167ULL ] ; t261 [ 679ULL ] = X [ 168ULL ] ; t261 [ 680ULL ] = - X [
179ULL ] ; t261 [ 681ULL ] = X [ 234ULL ] ; t261 [ 682ULL ] = - X [ 183ULL ]
; t261 [ 683ULL ] = - X [ 184ULL ] ; t261 [ 684ULL ] = - X [ 185ULL ] ; t261
[ 685ULL ] = X [ 235ULL ] ; t261 [ 686ULL ] = X [ 236ULL ] ; t261 [ 687ULL ]
= t504 ; t261 [ 688ULL ] = - X [ 214ULL ] ; t261 [ 689ULL ] = - X [ 184ULL ]
; t261 [ 690ULL ] = - X [ 215ULL ] ; t261 [ 691ULL ] = - X [ 185ULL ] ; t261
[ 692ULL ] = ( 1.0 - X [ 33ULL ] ) - X [ 34ULL ] ; t261 [ 693ULL ] = X [
204ULL ] ; t261 [ 694ULL ] = X [ 28ULL ] * 0.1 ; t261 [ 695ULL ] = X [ 205ULL
] ; t261 [ 696ULL ] = X [ 206ULL ] ; t261 [ 697ULL ] = X [ 219ULL ] ; t261 [
698ULL ] = X [ 220ULL ] * 0.1 ; t261 [ 699ULL ] = X [ 221ULL ] ; t261 [
700ULL ] = X [ 222ULL ] ; t261 [ 701ULL ] = t493 * 1.0E+6 ; t261 [ 702ULL ] =
t496 ; t261 [ 703ULL ] = t493 * - 125000.03125000779 ; t261 [ 704ULL ] = t493
* 1.0E+6 ; t261 [ 705ULL ] = t496 ; t261 [ 706ULL ] = t496 *
7.8539816339744827E-5 ; t261 [ 707ULL ] = X [ 220ULL ] * 99999.999999999985 ;
t261 [ 708ULL ] = ( t503 - 0.05000000000000001 ) * 0.1 ; t261 [ 709ULL ] =
t493 * - 125000.03125000779 ; t261 [ 710ULL ] = t503 * 0.1 ; t261 [ 711ULL ]
= ( t503 - 0.05000000000000001 ) * 0.1 ; t261 [ 712ULL ] = X [ 219ULL ] ;
t261 [ 713ULL ] = X [ 220ULL ] * 0.1 ; t261 [ 714ULL ] = X [ 221ULL ] ; t261
[ 715ULL ] = X [ 222ULL ] ; t261 [ 716ULL ] = X [ 220ULL ] *
99999.999999999985 ; t261 [ 717ULL ] = X [ 219ULL ] ; t261 [ 718ULL ] = X [
204ULL ] ; t261 [ 719ULL ] = X [ 28ULL ] * 0.1 ; t261 [ 720ULL ] = X [ 205ULL
] ; t261 [ 721ULL ] = X [ 206ULL ] ; t261 [ 722ULL ] = t496 *
7.8539816339744827E-5 ; t261 [ 723ULL ] = X [ 219ULL ] ; t261 [ 724ULL ] = X
[ 220ULL ] * 0.1 ; t261 [ 725ULL ] = X [ 221ULL ] ; t261 [ 726ULL ] = X [
222ULL ] ; t261 [ 727ULL ] = - X [ 213ULL ] ; t261 [ 728ULL ] = X [ 204ULL ]
; t261 [ 729ULL ] = X [ 28ULL ] * 0.1 ; t261 [ 730ULL ] = X [ 205ULL ] ; t261
[ 731ULL ] = X [ 206ULL ] ; t261 [ 732ULL ] = - X [ 211ULL ] ; t261 [ 733ULL
] = X [ 243ULL ] ; t261 [ 734ULL ] = - X [ 213ULL ] ; t261 [ 735ULL ] = - X [
214ULL ] ; t261 [ 736ULL ] = - X [ 215ULL ] ; t261 [ 737ULL ] = X [ 240ULL ]
; t261 [ 738ULL ] = X [ 239ULL ] ; t261 [ 739ULL ] = X [ 237ULL ] ; t261 [
740ULL ] = X [ 238ULL ] * 0.1 ; t261 [ 741ULL ] = X [ 241ULL ] ; t261 [
742ULL ] = X [ 242ULL ] ; t261 [ 743ULL ] = t506 ; t261 [ 744ULL ] = - X [
211ULL ] ; t261 [ 745ULL ] = X [ 211ULL ] ; t261 [ 746ULL ] = X [ 219ULL ] ;
t261 [ 747ULL ] = X [ 220ULL ] * 0.1 ; t261 [ 748ULL ] = X [ 221ULL ] ; t261
[ 749ULL ] = X [ 222ULL ] ; t261 [ 750ULL ] = X [ 211ULL ] ; t261 [ 751ULL ]
= X [ 243ULL ] ; t261 [ 752ULL ] = X [ 213ULL ] ; t261 [ 753ULL ] = X [
214ULL ] ; t261 [ 754ULL ] = X [ 215ULL ] ; t261 [ 755ULL ] = X [ 240ULL ] ;
t261 [ 756ULL ] = X [ 239ULL ] ; t261 [ 757ULL ] = X [ 213ULL ] ; t261 [
758ULL ] = - X [ 214ULL ] ; t261 [ 759ULL ] = X [ 214ULL ] ; t261 [ 760ULL ]
= - X [ 215ULL ] ; t261 [ 761ULL ] = X [ 215ULL ] ; t261 [ 762ULL ] = t503 *
0.1 ; t261 [ 763ULL ] = U_idx_3 ; t261 [ 764ULL ] = X [ 244ULL ] ; t261 [
765ULL ] = X [ 245ULL ] ; t261 [ 766ULL ] = X [ 246ULL ] ; t261 [ 767ULL ] =
X [ 247ULL ] ; t261 [ 768ULL ] = X [ 248ULL ] ; t261 [ 769ULL ] = X [ 256ULL
] ; t261 [ 770ULL ] = X [ 255ULL ] ; t261 [ 771ULL ] = X [ 244ULL ] ; t261 [
772ULL ] = X [ 245ULL ] ; t261 [ 773ULL ] = X [ 246ULL ] ; t261 [ 774ULL ] =
X [ 248ULL ] ; t261 [ 775ULL ] = X [ 249ULL ] ; t261 [ 776ULL ] = X [ 250ULL
] ; t261 [ 777ULL ] = X [ 251ULL ] ; t261 [ 778ULL ] = X [ 252ULL ] ; t261 [
779ULL ] = X [ 253ULL ] ; t261 [ 780ULL ] = X [ 254ULL ] ; t261 [ 781ULL ] =
t465 ; t261 [ 782ULL ] = X [ 250ULL ] ; t261 [ 783ULL ] = X [ 251ULL ] ; t261
[ 784ULL ] = X [ 252ULL ] ; t261 [ 785ULL ] = t509 ; t261 [ 786ULL ] = ( 1.0
- X [ 255ULL ] ) - X [ 256ULL ] ; t261 [ 787ULL ] = X [ 257ULL ] ; t261 [
788ULL ] = X [ 258ULL ] ; t261 [ 789ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 790ULL
] = X [ 259ULL ] ; t261 [ 791ULL ] = X [ 260ULL ] ; t261 [ 792ULL ] = X [
244ULL ] ; t261 [ 793ULL ] = X [ 245ULL ] ; t261 [ 794ULL ] = X [ 246ULL ] ;
t261 [ 795ULL ] = X [ 258ULL ] ; t261 [ 796ULL ] = X [ 35ULL ] * 0.1 ; t261 [
797ULL ] = X [ 259ULL ] ; t261 [ 798ULL ] = X [ 260ULL ] ; t261 [ 799ULL ] =
X [ 262ULL ] ; t261 [ 800ULL ] = X [ 265ULL ] ; t261 [ 801ULL ] = X [ 244ULL
] ; t261 [ 802ULL ] = X [ 245ULL ] ; t261 [ 803ULL ] = X [ 246ULL ] ; t261 [
804ULL ] = - X [ 248ULL ] ; t261 [ 805ULL ] = X [ 266ULL ] ; t261 [ 806ULL ]
= - X [ 250ULL ] ; t261 [ 807ULL ] = - X [ 251ULL ] ; t261 [ 808ULL ] = - X [
252ULL ] ; t261 [ 809ULL ] = X [ 267ULL ] ; t261 [ 810ULL ] = X [ 268ULL ] ;
t261 [ 811ULL ] = - X [ 250ULL ] ; t261 [ 812ULL ] = X [ 263ULL ] ; t261 [
813ULL ] = X [ 264ULL ] ; t261 [ 814ULL ] = X [ 258ULL ] ; t261 [ 815ULL ] =
X [ 35ULL ] * 0.1 ; t261 [ 816ULL ] = X [ 259ULL ] ; t261 [ 817ULL ] = X [
260ULL ] ; t261 [ 818ULL ] = X [ 261ULL ] ; t261 [ 819ULL ] = X [ 266ULL ] ;
t261 [ 820ULL ] = X [ 250ULL ] ; t261 [ 821ULL ] = X [ 251ULL ] ; t261 [
822ULL ] = X [ 252ULL ] ; t261 [ 823ULL ] = X [ 267ULL ] ; t261 [ 824ULL ] =
X [ 268ULL ] ; t261 [ 825ULL ] = X [ 250ULL ] ; t261 [ 826ULL ] = - X [
250ULL ] ; t261 [ 827ULL ] = - X [ 248ULL ] ; t261 [ 828ULL ] = X [ 261ULL ]
; t261 [ 829ULL ] = - X [ 251ULL ] ; t261 [ 830ULL ] = X [ 251ULL ] ; t261 [
831ULL ] = - X [ 252ULL ] ; t261 [ 832ULL ] = X [ 252ULL ] ; t261 [ 833ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_power ; t261 [ 834ULL
] = X [ 258ULL ] ; t261 [ 835ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 836ULL ] = X
[ 259ULL ] ; t261 [ 837ULL ] = X [ 260ULL ] ; t261 [ 838ULL ] = X [ 269ULL ]
; t261 [ 839ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 840ULL ] = X [ 270ULL ] ; t261
[ 841ULL ] = X [ 271ULL ] ; t261 [ 842ULL ] = X [ 36ULL ] ; t261 [ 843ULL ] =
X [ 35ULL ] * 0.1 ; t261 [ 844ULL ] = X [ 37ULL ] ; t261 [ 845ULL ] = X [
38ULL ] ; t261 [ 846ULL ] = X [ 36ULL ] ; t261 [ 847ULL ] = X [ 35ULL ] * 0.1
; t261 [ 848ULL ] = X [ 37ULL ] ; t261 [ 849ULL ] = X [ 38ULL ] ; for ( t368
= 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 850ULL ] = t290 [ t368 ] ; }
t261 [ 858ULL ] = X [ 36ULL ] ; t261 [ 859ULL ] = X [ 272ULL ] ; t261 [
860ULL ] = - X [ 261ULL ] ; t261 [ 861ULL ] = X [ 276ULL ] ; t261 [ 862ULL ]
= X [ 36ULL ] - 273.15 ; t261 [ 863ULL ] = X [ 37ULL ] ; t261 [ 864ULL ] = X
[ 274ULL ] ; t261 [ 865ULL ] = X [ 38ULL ] ; t261 [ 866ULL ] = X [ 35ULL ] *
0.1 ; t261 [ 867ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_rho ; t261 [
868ULL ] = X [ 273ULL ] ; t261 [ 869ULL ] = X [ 36ULL ] ; t261 [ 870ULL ] = X
[ 37ULL ] ; t261 [ 871ULL ] = X [ 38ULL ] ; t261 [ 872ULL ] = intrm_sf_mf_540
; t261 [ 873ULL ] = X [ 258ULL ] ; t261 [ 874ULL ] = X [ 35ULL ] * 0.1 ; t261
[ 875ULL ] = X [ 259ULL ] ; t261 [ 876ULL ] = X [ 260ULL ] ; t261 [ 877ULL ]
= - X [ 261ULL ] ; t261 [ 878ULL ] = X [ 277ULL ] ; t261 [ 879ULL ] = - X [
250ULL ] ; t261 [ 880ULL ] = - X [ 251ULL ] ; t261 [ 881ULL ] = - X [ 252ULL
] ; t261 [ 882ULL ] = X [ 278ULL ] ; t261 [ 883ULL ] = X [ 279ULL ] ; t261 [
884ULL ] = X [ 269ULL ] ; t261 [ 885ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 886ULL
] = X [ 270ULL ] ; t261 [ 887ULL ] = X [ 271ULL ] ; t261 [ 888ULL ] = X [
276ULL ] ; t261 [ 889ULL ] = X [ 280ULL ] ; t261 [ 890ULL ] = X [ 281ULL ] ;
t261 [ 891ULL ] = X [ 282ULL ] ; t261 [ 892ULL ] = X [ 283ULL ] ; t261 [
893ULL ] = X [ 284ULL ] ; t261 [ 894ULL ] = X [ 285ULL ] ; t261 [ 895ULL ] =
t528 ; t261 [ 896ULL ] = - X [ 250ULL ] ; t261 [ 897ULL ] = X [ 281ULL ] ;
t261 [ 898ULL ] = - X [ 251ULL ] ; t261 [ 899ULL ] = X [ 282ULL ] ; t261 [
900ULL ] = - X [ 252ULL ] ; t261 [ 901ULL ] = X [ 283ULL ] ; t261 [ 902ULL ]
= ( 1.0 - X [ 38ULL ] ) - X [ 37ULL ] ; t261 [ 903ULL ] = X [ 275ULL ] ; t261
[ 904ULL ] = X [ 269ULL ] ; t261 [ 905ULL ] = X [ 35ULL ] * 0.1 ; t261 [
906ULL ] = X [ 270ULL ] ; t261 [ 907ULL ] = X [ 271ULL ] ; t261 [ 908ULL ] =
X [ 269ULL ] ; t261 [ 909ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 910ULL ] = X [
270ULL ] ; t261 [ 911ULL ] = X [ 271ULL ] ; t261 [ 912ULL ] = - X [ 281ULL ]
; t261 [ 913ULL ] = - X [ 282ULL ] ; t261 [ 914ULL ] = - X [ 283ULL ] ; t261
[ 915ULL ] = X [ 276ULL ] * - 1000.0 ; t261 [ 916ULL ] = - X [ 276ULL ] ;
t261 [ 917ULL ] = - X [ 281ULL ] ; t261 [ 918ULL ] = - X [ 282ULL ] ; t261 [
919ULL ] = - X [ 283ULL ] ; t261 [ 920ULL ] = - X [ 281ULL ] ; t261 [ 921ULL
] = U_idx_4 ; t261 [ 922ULL ] = t516 * 9.5492965855137211 ; t261 [ 923ULL ] =
X [ 269ULL ] ; t261 [ 924ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 925ULL ] = X [
270ULL ] ; t261 [ 926ULL ] = X [ 271ULL ] ; t261 [ 927ULL ] = X [ 36ULL ] ;
t261 [ 928ULL ] = X [ 36ULL ] ; t261 [ 929ULL ] = X [ 258ULL ] ; t261 [
930ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 931ULL ] = X [ 259ULL ] ; t261 [ 932ULL
] = X [ 260ULL ] ; t261 [ 933ULL ] = X [ 244ULL ] ; t261 [ 934ULL ] = X [
245ULL ] ; t261 [ 935ULL ] = X [ 246ULL ] ; t261 [ 936ULL ] = X [ 258ULL ] ;
t261 [ 937ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 938ULL ] = X [ 259ULL ] ; t261 [
939ULL ] = X [ 260ULL ] ; t261 [ 940ULL ] = t524 * 1000.0 ; t261 [ 941ULL ] =
t524 * 1111.1111111111111 ; t261 [ 942ULL ] = t524 * 1111.1111111111111 ;
t261 [ 943ULL ] = - ( X [ 35ULL ] - 1.01325 ) * 99999.999999999985 ; t261 [
944ULL ] = X [ 286ULL ] * 1.0E-6 ; t261 [ 945ULL ] = t524 * 1000.0 ; t261 [
946ULL ] = X [ 244ULL ] ; t261 [ 947ULL ] = X [ 245ULL ] ; t261 [ 948ULL ] =
X [ 246ULL ] ; t261 [ 949ULL ] = X [ 258ULL ] ; t261 [ 950ULL ] = X [ 35ULL ]
* 0.1 ; t261 [ 951ULL ] = X [ 259ULL ] ; t261 [ 952ULL ] = X [ 260ULL ] ;
t261 [ 953ULL ] = - ( X [ 35ULL ] - 1.01325 ) * 99999.999999999985 ; t261 [
954ULL ] = X [ 244ULL ] - X [ 258ULL ] ; t261 [ 955ULL ] = X [ 258ULL ] ;
t261 [ 956ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 957ULL ] = X [ 259ULL ] ; t261 [
958ULL ] = X [ 260ULL ] ; t261 [ 959ULL ] = X [ 258ULL ] ; t261 [ 960ULL ] =
X [ 35ULL ] * 0.1 ; t261 [ 961ULL ] = X [ 259ULL ] ; t261 [ 962ULL ] = X [
260ULL ] ; t261 [ 963ULL ] = - X [ 261ULL ] ; t261 [ 964ULL ] = X [ 286ULL ]
* 1.0E-6 ; t261 [ 965ULL ] = - X [ 250ULL ] ; t261 [ 966ULL ] = - X [ 251ULL
] ; t261 [ 967ULL ] = - X [ 252ULL ] ; t261 [ 968ULL ] = U_idx_4 ; t261 [
969ULL ] = X [ 287ULL ] ; t261 [ 970ULL ] = t535 * 0.99999999999999978 /
0.99999999999999978 * 9.5492965855137211 ; t261 [ 971ULL ] = X [ 288ULL ] ;
t261 [ 972ULL ] = X [ 35ULL ] * 99999.999999999985 ; t261 [ 973ULL ] = X [
287ULL ] ; t261 [ 974ULL ] = X [ 289ULL ] ; t261 [ 975ULL ] = X [ 290ULL ] ;
t261 [ 976ULL ] = - X [ 250ULL ] ; t261 [ 977ULL ] = X [ 288ULL ] ; t261 [
978ULL ] = X [ 289ULL ] ; t261 [ 979ULL ] = X [ 244ULL ] ; t261 [ 980ULL ] =
X [ 245ULL ] ; t261 [ 981ULL ] = X [ 246ULL ] ; t261 [ 982ULL ] = X [ 244ULL
] ; t261 [ 983ULL ] = X [ 258ULL ] ; t261 [ 984ULL ] = X [ 35ULL ] * 0.1 ;
t261 [ 985ULL ] = X [ 259ULL ] ; t261 [ 986ULL ] = X [ 260ULL ] ; t261 [
987ULL ] = X [ 35ULL ] * 99999.999999999985 ; t261 [ 988ULL ] = X [ 258ULL ]
; t261 [ 989ULL ] = X [ 244ULL ] ; t261 [ 990ULL ] = X [ 245ULL ] ; t261 [
991ULL ] = X [ 246ULL ] ; t261 [ 992ULL ] = - X [ 250ULL ] ; t261 [ 993ULL ]
= X [ 258ULL ] ; t261 [ 994ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 995ULL ] = X [
259ULL ] ; t261 [ 996ULL ] = X [ 260ULL ] ; t261 [ 997ULL ] = t535 *
9.5492965855137211 ; t261 [ 998ULL ] = X [ 244ULL ] * 0.00347041471455839 ;
t261 [ 999ULL ] = X [ 290ULL ] ; t261 [ 1000ULL ] = X [ 244ULL ] ; t261 [
1001ULL ] = X [ 244ULL ] * 0.00347041471455839 ; t261 [ 1002ULL ] = X [
169ULL ] ; t261 [ 1003ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 1004ULL ] = X [
170ULL ] ; t261 [ 1005ULL ] = X [ 171ULL ] ; t261 [ 1006ULL ] = X [ 291ULL ]
; t261 [ 1007ULL ] = X [ 292ULL ] * 0.1 ; t261 [ 1008ULL ] = X [ 293ULL ] ;
t261 [ 1009ULL ] = X [ 294ULL ] ; t261 [ 1010ULL ] = U_idx_5 ; t261 [ 1011ULL
] = X [ 295ULL ] ; t261 [ 1012ULL ] = X [ 39ULL ] ; t261 [ 1013ULL ] = X [
40ULL ] ; t261 [ 1014ULL ] = X [ 41ULL ] ; t261 [ 1015ULL ] = U_idx_6 ; t261
[ 1016ULL ] = - U_idx_5 ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261
[ t368 + 1017ULL ] = t307 [ t368 ] ; } t261 [ 1025ULL ] = X [ 298ULL ] ; t261
[ 1026ULL ] = X [ 300ULL ] * 1.0E-5 * 99999.999999999985 ; t261 [ 1027ULL ] =
X [ 39ULL ] ; t261 [ 1028ULL ] = X [ 297ULL ] ; t261 [ 1029ULL ] = X [ 297ULL
] ; t261 [ 1030ULL ] = X [ 301ULL ] ; t261 [ 1031ULL ] = X [ 301ULL ] ; t261
[ 1032ULL ] = X [ 169ULL ] ; t261 [ 1033ULL ] = X [ 24ULL ] * 0.1 ; t261 [
1034ULL ] = X [ 170ULL ] ; t261 [ 1035ULL ] = X [ 171ULL ] ; t261 [ 1036ULL ]
= X [ 291ULL ] ; t261 [ 1037ULL ] = X [ 292ULL ] * 0.1 ; t261 [ 1038ULL ] = X
[ 293ULL ] ; t261 [ 1039ULL ] = X [ 294ULL ] ; t261 [ 1040ULL ] = X [ 40ULL ]
; t261 [ 1041ULL ] = X [ 298ULL ] ; t261 [ 1042ULL ] = X [ 41ULL ] ; t261 [
1043ULL ] = X [ 302ULL ] ; t261 [ 1044ULL ] = X [ 39ULL ] - 273.15 ; t261 [
1045ULL ] = - X [ 192ULL ] ; t261 [ 1046ULL ] = X [ 303ULL ] * 0.1 ; t261 [
1047ULL ] = X [ 42ULL ] * 0.1 ; t261 [ 1048ULL ] = X [ 299ULL ] ; t261 [
1049ULL ] = t547 * 100000.0 ; t261 [ 1050ULL ] = X [ 305ULL ] ; t261 [
1051ULL ] = X [ 304ULL ] ; t261 [ 1052ULL ] = X [ 306ULL ] * 0.1 ; for ( t368
= 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1053ULL ] = t307 [ t368 ] ;
} t261 [ 1061ULL ] = X [ 301ULL ] ; t261 [ 1062ULL ] = X [ 296ULL ] ; t261 [
1063ULL ] = intrm_sf_mf_595 ; t261 [ 1064ULL ] = - X [ 181ULL ] ; t261 [
1065ULL ] = X [ 307ULL ] ; t261 [ 1066ULL ] = - X [ 295ULL ] ; t261 [ 1067ULL
] = X [ 297ULL ] ; t261 [ 1068ULL ] = X [ 39ULL ] ; t261 [ 1069ULL ] = X [
40ULL ] ; t261 [ 1070ULL ] = X [ 41ULL ] ; t261 [ 1071ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_W ; t261 [ 1072ULL ] = X [
169ULL ] ; t261 [ 1073ULL ] = X [ 24ULL ] * 0.1 ; t261 [ 1074ULL ] = X [
170ULL ] ; t261 [ 1075ULL ] = X [ 171ULL ] ; t261 [ 1076ULL ] = - X [ 181ULL
] ; t261 [ 1077ULL ] = X [ 308ULL ] ; t261 [ 1078ULL ] = - X [ 192ULL ] ;
t261 [ 1079ULL ] = - X [ 193ULL ] ; t261 [ 1080ULL ] = - X [ 194ULL ] ; t261
[ 1081ULL ] = X [ 309ULL ] ; t261 [ 1082ULL ] = X [ 310ULL ] ; t261 [ 1083ULL
] = X [ 291ULL ] ; t261 [ 1084ULL ] = X [ 292ULL ] * 0.1 ; t261 [ 1085ULL ] =
X [ 293ULL ] ; t261 [ 1086ULL ] = X [ 294ULL ] ; t261 [ 1087ULL ] = X [
307ULL ] ; t261 [ 1088ULL ] = X [ 311ULL ] ; t261 [ 1089ULL ] = X [ 304ULL ]
; t261 [ 1090ULL ] = X [ 312ULL ] ; t261 [ 1091ULL ] = X [ 313ULL ] ; t261 [
1092ULL ] = X [ 314ULL ] ; t261 [ 1093ULL ] = X [ 315ULL ] ; t261 [ 1094ULL ]
= t552 ; t261 [ 1095ULL ] = - X [ 193ULL ] ; t261 [ 1096ULL ] = X [ 312ULL ]
; t261 [ 1097ULL ] = U_idx_5 ; t261 [ 1098ULL ] = - X [ 194ULL ] ; t261 [
1099ULL ] = X [ 313ULL ] ; t261 [ 1100ULL ] = ( 1.0 - X [ 41ULL ] ) - X [
40ULL ] ; t261 [ 1101ULL ] = U_idx_6 ; t261 [ 1102ULL ] = U_idx_5 ; t261 [
1103ULL ] = X [ 68ULL ] ; t261 [ 1104ULL ] = X [ 69ULL ] * 0.1 ; t261 [
1105ULL ] = X [ 70ULL ] ; t261 [ 1106ULL ] = X [ 71ULL ] ; for ( t368 = 0ULL
; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1107ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t368 ] ; } for (
t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1115ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t368 ] ; } t261
[ 1123ULL ] = X [ 291ULL ] ; t261 [ 1124ULL ] = X [ 292ULL ] * 0.1 ; t261 [
1125ULL ] = X [ 293ULL ] ; t261 [ 1126ULL ] = X [ 294ULL ] ; t261 [ 1127ULL ]
= X [ 68ULL ] ; t261 [ 1128ULL ] = X [ 69ULL ] * 0.1 ; t261 [ 1129ULL ] = X [
70ULL ] ; t261 [ 1130ULL ] = X [ 71ULL ] ; t261 [ 1131ULL ] = X [ 7ULL ] ;
t261 [ 1132ULL ] = X [ 76ULL ] ; t261 [ 1133ULL ] = X [ 8ULL ] ; t261 [
1134ULL ] = X [ 316ULL ] ; t261 [ 1135ULL ] = X [ 6ULL ] - 273.15 ; t261 [
1136ULL ] = - X [ 304ULL ] ; t261 [ 1137ULL ] = X [ 317ULL ] * 0.1 ; t261 [
1138ULL ] = X [ 43ULL ] * 0.1 ; t261 [ 1139ULL ] = X [ 77ULL ] ; t261 [
1140ULL ] = t553 * 100000.0 ; t261 [ 1141ULL ] = X [ 319ULL ] ; t261 [
1142ULL ] = X [ 318ULL ] ; t261 [ 1143ULL ] = X [ 320ULL ] * 0.1 ; for ( t368
= 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1144ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t368 ] ; } t261
[ 1152ULL ] = X [ 80ULL ] ; t261 [ 1153ULL ] = t475 ; t261 [ 1154ULL ] = - X
[ 307ULL ] ; t261 [ 1155ULL ] = X [ 321ULL ] ; t261 [ 1156ULL ] = X [ 111ULL
] ; t261 [ 1157ULL ] = X [ 79ULL ] ; t261 [ 1158ULL ] = X [ 6ULL ] ; t261 [
1159ULL ] = X [ 7ULL ] ; t261 [ 1160ULL ] = X [ 8ULL ] ; t261 [ 1161ULL ] =
t556 ; t261 [ 1162ULL ] = X [ 291ULL ] ; t261 [ 1163ULL ] = X [ 292ULL ] *
0.1 ; t261 [ 1164ULL ] = X [ 293ULL ] ; t261 [ 1165ULL ] = X [ 294ULL ] ;
t261 [ 1166ULL ] = - X [ 307ULL ] ; t261 [ 1167ULL ] = X [ 322ULL ] ; t261 [
1168ULL ] = - X [ 304ULL ] ; t261 [ 1169ULL ] = - X [ 312ULL ] ; t261 [
1170ULL ] = - X [ 313ULL ] ; t261 [ 1171ULL ] = X [ 323ULL ] ; t261 [ 1172ULL
] = X [ 324ULL ] ; t261 [ 1173ULL ] = X [ 68ULL ] ; t261 [ 1174ULL ] = X [
69ULL ] * 0.1 ; t261 [ 1175ULL ] = X [ 70ULL ] ; t261 [ 1176ULL ] = X [ 71ULL
] ; t261 [ 1177ULL ] = X [ 321ULL ] ; t261 [ 1178ULL ] = X [ 325ULL ] ; t261
[ 1179ULL ] = X [ 318ULL ] ; t261 [ 1180ULL ] = X [ 326ULL ] ; t261 [ 1181ULL
] = X [ 327ULL ] ; t261 [ 1182ULL ] = X [ 328ULL ] ; t261 [ 1183ULL ] = X [
329ULL ] ; t261 [ 1184ULL ] = t560 ; t261 [ 1185ULL ] = - X [ 312ULL ] ; t261
[ 1186ULL ] = X [ 326ULL ] ; t261 [ 1187ULL ] = - X [ 313ULL ] ; t261 [
1188ULL ] = X [ 327ULL ] ; t261 [ 1189ULL ] = ( 1.0 - X [ 8ULL ] ) - X [ 7ULL
] ; t261 [ 1190ULL ] = X [ 68ULL ] ; t261 [ 1191ULL ] = X [ 69ULL ] * 0.1 ;
t261 [ 1192ULL ] = X [ 70ULL ] ; t261 [ 1193ULL ] = X [ 71ULL ] ; t261 [
1194ULL ] = X [ 115ULL ] ; t261 [ 1195ULL ] = X [ 116ULL ] * 0.1 ; t261 [
1196ULL ] = X [ 117ULL ] ; t261 [ 1197ULL ] = X [ 118ULL ] ; t261 [ 1198ULL ]
= X [ 10ULL ] ; t261 [ 1199ULL ] = X [ 81ULL ] ; t261 [ 1200ULL ] = X [ 11ULL
] ; t261 [ 1201ULL ] = X [ 330ULL ] ; t261 [ 1202ULL ] = X [ 9ULL ] - 273.15
; t261 [ 1203ULL ] = - X [ 318ULL ] ; t261 [ 1204ULL ] = X [ 331ULL ] * 0.1 ;
t261 [ 1205ULL ] = X [ 44ULL ] * 0.1 ; t261 [ 1206ULL ] = X [ 82ULL ] ; t261
[ 1207ULL ] = t561 * 100000.0 ; t261 [ 1208ULL ] = X [ 332ULL ] ; t261 [
1209ULL ] = X [ 138ULL ] ; t261 [ 1210ULL ] = X [ 333ULL ] * 0.1 ; for ( t368
= 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1211ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t368 ] ; } t261
[ 1219ULL ] = X [ 85ULL ] ; t261 [ 1220ULL ] = t508 ; t261 [ 1221ULL ] = - X
[ 321ULL ] ; t261 [ 1222ULL ] = X [ 148ULL ] ; t261 [ 1223ULL ] = - X [
103ULL ] - X [ 106ULL ] ; t261 [ 1224ULL ] = X [ 112ULL ] ; t261 [ 1225ULL ]
= X [ 84ULL ] ; t261 [ 1226ULL ] = X [ 9ULL ] ; t261 [ 1227ULL ] = X [ 10ULL
] ; t261 [ 1228ULL ] = X [ 11ULL ] ; t261 [ 1229ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_W ; t261 [ 1230ULL ] = X [
68ULL ] ; t261 [ 1231ULL ] = X [ 69ULL ] * 0.1 ; t261 [ 1232ULL ] = X [ 70ULL
] ; t261 [ 1233ULL ] = X [ 71ULL ] ; t261 [ 1234ULL ] = - X [ 321ULL ] ; t261
[ 1235ULL ] = X [ 334ULL ] ; t261 [ 1236ULL ] = - X [ 318ULL ] ; t261 [
1237ULL ] = - X [ 326ULL ] ; t261 [ 1238ULL ] = - X [ 327ULL ] ; t261 [
1239ULL ] = X [ 335ULL ] ; t261 [ 1240ULL ] = X [ 336ULL ] ; t261 [ 1241ULL ]
= X [ 115ULL ] ; t261 [ 1242ULL ] = X [ 116ULL ] * 0.1 ; t261 [ 1243ULL ] = X
[ 117ULL ] ; t261 [ 1244ULL ] = X [ 118ULL ] ; t261 [ 1245ULL ] = X [ 148ULL
] ; t261 [ 1246ULL ] = X [ 337ULL ] ; t261 [ 1247ULL ] = X [ 138ULL ] ; t261
[ 1248ULL ] = X [ 151ULL ] ; t261 [ 1249ULL ] = X [ 153ULL ] ; t261 [ 1250ULL
] = X [ 338ULL ] ; t261 [ 1251ULL ] = X [ 339ULL ] ; t261 [ 1252ULL ] = t569
; t261 [ 1253ULL ] = - X [ 326ULL ] ; t261 [ 1254ULL ] = X [ 151ULL ] ; t261
[ 1255ULL ] = X [ 102ULL ] ; t261 [ 1256ULL ] = X [ 108ULL ] ; t261 [ 1257ULL
] = - X [ 327ULL ] ; t261 [ 1258ULL ] = X [ 153ULL ] ; t261 [ 1259ULL ] = (
1.0 - X [ 11ULL ] ) - X [ 10ULL ] ; t261 [ 1260ULL ] = X [ 9ULL ] ; t261 [
1261ULL ] = X [ 10ULL ] ; t261 [ 1262ULL ] = X [ 11ULL ] ; t261 [ 1263ULL ] =
X [ 291ULL ] ; t261 [ 1264ULL ] = X [ 292ULL ] * 0.1 ; t261 [ 1265ULL ] = X [
293ULL ] ; t261 [ 1266ULL ] = X [ 294ULL ] ; t261 [ 1267ULL ] = X [ 115ULL ]
; t261 [ 1268ULL ] = X [ 116ULL ] * 0.1 ; t261 [ 1269ULL ] = X [ 117ULL ] ;
t261 [ 1270ULL ] = X [ 118ULL ] ; t261 [ 1271ULL ] = X [ 269ULL ] ; t261 [
1272ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 1273ULL ] = X [ 270ULL ] ; t261 [
1274ULL ] = X [ 271ULL ] ; t261 [ 1275ULL ] = X [ 340ULL ] ; t261 [ 1276ULL ]
= X [ 341ULL ] * 0.1 ; t261 [ 1277ULL ] = X [ 342ULL ] ; t261 [ 1278ULL ] = X
[ 343ULL ] ; t261 [ 1279ULL ] = U_idx_7 ; t261 [ 1280ULL ] = X [ 344ULL ] ;
t261 [ 1281ULL ] = X [ 45ULL ] ; t261 [ 1282ULL ] = X [ 46ULL ] ; t261 [
1283ULL ] = X [ 47ULL ] ; t261 [ 1284ULL ] = U_idx_8 ; t261 [ 1285ULL ] = -
U_idx_7 ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1286ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ t368 ]
; } t261 [ 1294ULL ] = X [ 347ULL ] ; t261 [ 1295ULL ] = X [ 349ULL ] *
1.0E-5 * 99999.999999999985 ; t261 [ 1296ULL ] = X [ 45ULL ] ; t261 [ 1297ULL
] = X [ 346ULL ] ; t261 [ 1298ULL ] = X [ 346ULL ] ; t261 [ 1299ULL ] = X [
350ULL ] ; t261 [ 1300ULL ] = X [ 350ULL ] ; t261 [ 1301ULL ] = X [ 269ULL ]
; t261 [ 1302ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 1303ULL ] = X [ 270ULL ] ;
t261 [ 1304ULL ] = X [ 271ULL ] ; t261 [ 1305ULL ] = X [ 340ULL ] ; t261 [
1306ULL ] = X [ 341ULL ] * 0.1 ; t261 [ 1307ULL ] = X [ 342ULL ] ; t261 [
1308ULL ] = X [ 343ULL ] ; t261 [ 1309ULL ] = X [ 46ULL ] ; t261 [ 1310ULL ]
= X [ 347ULL ] ; t261 [ 1311ULL ] = X [ 47ULL ] ; t261 [ 1312ULL ] = X [
351ULL ] ; t261 [ 1313ULL ] = X [ 45ULL ] - 273.15 ; t261 [ 1314ULL ] = - X [
281ULL ] ; t261 [ 1315ULL ] = X [ 352ULL ] * 0.1 ; t261 [ 1316ULL ] = X [
48ULL ] * 0.1 ; t261 [ 1317ULL ] = X [ 348ULL ] ; t261 [ 1318ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 100000.0 ; t261 [
1319ULL ] = X [ 354ULL ] ; t261 [ 1320ULL ] = X [ 353ULL ] ; t261 [ 1321ULL ]
= X [ 355ULL ] * 0.1 ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [
t368 + 1322ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Measurement_Selector0 [ t368 ] ; }
t261 [ 1330ULL ] = X [ 350ULL ] ; t261 [ 1331ULL ] = X [ 345ULL ] ; t261 [
1332ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
t261 [ 1333ULL ] = - X [ 276ULL ] ; t261 [ 1334ULL ] = X [ 356ULL ] ; t261 [
1335ULL ] = - X [ 344ULL ] ; t261 [ 1336ULL ] = X [ 346ULL ] ; t261 [ 1337ULL
] = X [ 45ULL ] ; t261 [ 1338ULL ] = X [ 46ULL ] ; t261 [ 1339ULL ] = X [
47ULL ] ; t261 [ 1340ULL ] = t583 ; t261 [ 1341ULL ] = X [ 269ULL ] ; t261 [
1342ULL ] = X [ 35ULL ] * 0.1 ; t261 [ 1343ULL ] = X [ 270ULL ] ; t261 [
1344ULL ] = X [ 271ULL ] ; t261 [ 1345ULL ] = - X [ 276ULL ] ; t261 [ 1346ULL
] = X [ 357ULL ] ; t261 [ 1347ULL ] = - X [ 281ULL ] ; t261 [ 1348ULL ] = - X
[ 282ULL ] ; t261 [ 1349ULL ] = - X [ 283ULL ] ; t261 [ 1350ULL ] = X [
358ULL ] ; t261 [ 1351ULL ] = X [ 359ULL ] ; t261 [ 1352ULL ] = X [ 340ULL ]
; t261 [ 1353ULL ] = X [ 341ULL ] * 0.1 ; t261 [ 1354ULL ] = X [ 342ULL ] ;
t261 [ 1355ULL ] = X [ 343ULL ] ; t261 [ 1356ULL ] = X [ 356ULL ] ; t261 [
1357ULL ] = X [ 360ULL ] ; t261 [ 1358ULL ] = X [ 353ULL ] ; t261 [ 1359ULL ]
= X [ 361ULL ] ; t261 [ 1360ULL ] = X [ 362ULL ] ; t261 [ 1361ULL ] = X [
363ULL ] ; t261 [ 1362ULL ] = X [ 364ULL ] ; t261 [ 1363ULL ] = t590 ; t261 [
1364ULL ] = - X [ 282ULL ] ; t261 [ 1365ULL ] = X [ 361ULL ] ; t261 [ 1366ULL
] = U_idx_7 ; t261 [ 1367ULL ] = - X [ 283ULL ] ; t261 [ 1368ULL ] = X [
362ULL ] ; t261 [ 1369ULL ] = ( 1.0 - X [ 47ULL ] ) - X [ 46ULL ] ; t261 [
1370ULL ] = U_idx_8 ; t261 [ 1371ULL ] = U_idx_7 ; t261 [ 1372ULL ] = X [
365ULL ] ; t261 [ 1373ULL ] = X [ 366ULL ] * 0.1 ; t261 [ 1374ULL ] = X [
367ULL ] ; t261 [ 1375ULL ] = X [ 368ULL ] ; t261 [ 1376ULL ] = X [ 369ULL ]
; t261 [ 1377ULL ] = - 920.95788639984789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A * 1000.0 ; t261 [
1378ULL ] = ( X [ 369ULL ] * 0.0031415926535897937 - 0.92095788639984788 ) *
318.30988618379064 ; t261 [ 1379ULL ] = X [ 370ULL ] ; t261 [ 1380ULL ] = X [
371ULL ] ; t261 [ 1381ULL ] = X [ 372ULL ] ; t261 [ 1382ULL ] = X [ 373ULL ]
; t261 [ 1383ULL ] = X [ 374ULL ] ; t261 [ 1384ULL ] = X [ 382ULL ] ; t261 [
1385ULL ] = X [ 381ULL ] ; t261 [ 1386ULL ] = X [ 370ULL ] ; t261 [ 1387ULL ]
= X [ 371ULL ] ; t261 [ 1388ULL ] = X [ 372ULL ] ; t261 [ 1389ULL ] = X [
374ULL ] ; t261 [ 1390ULL ] = X [ 375ULL ] ; t261 [ 1391ULL ] = X [ 376ULL ]
; t261 [ 1392ULL ] = X [ 377ULL ] ; t261 [ 1393ULL ] = X [ 378ULL ] ; t261 [
1394ULL ] = X [ 379ULL ] ; t261 [ 1395ULL ] = X [ 380ULL ] ; t261 [ 1396ULL ]
= t573 ; t261 [ 1397ULL ] = X [ 376ULL ] ; t261 [ 1398ULL ] = X [ 377ULL ] ;
t261 [ 1399ULL ] = X [ 378ULL ] ; t261 [ 1400ULL ] = t586 ; t261 [ 1401ULL ]
= ( 1.0 - X [ 381ULL ] ) - X [ 382ULL ] ; t261 [ 1402ULL ] = X [ 383ULL ] ;
t261 [ 1403ULL ] = - 920.95788639984789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A * 1000.0 ; t261 [
1404ULL ] = X [ 365ULL ] ; t261 [ 1405ULL ] = X [ 366ULL ] * 0.1 ; t261 [
1406ULL ] = X [ 367ULL ] ; t261 [ 1407ULL ] = X [ 368ULL ] ; t261 [ 1408ULL ]
= X [ 384ULL ] ; t261 [ 1409ULL ] = t595 * 0.1 ; t261 [ 1410ULL ] = X [
386ULL ] ; t261 [ 1411ULL ] = X [ 387ULL ] ; t261 [ 1412ULL ] = X [ 52ULL ] ;
t261 [ 1413ULL ] = X [ 392ULL ] ; t261 [ 1414ULL ] = X [ 51ULL ] ; t261 [
1415ULL ] = X [ 389ULL ] ; t261 [ 1416ULL ] = X [ 49ULL ] - 273.15 ; t261 [
1417ULL ] = X [ 388ULL ] ; t261 [ 1418ULL ] = X [ 390ULL ] * 0.1 ; t261 [
1419ULL ] = X [ 50ULL ] * 0.1 ; t261 [ 1420ULL ] = X [ 391ULL ] ; t261 [
1421ULL ] = t601 * 100000.0 ; t261 [ 1422ULL ] = X [ 393ULL ] ; t261 [
1423ULL ] = - X [ 376ULL ] ; t261 [ 1424ULL ] = X [ 394ULL ] * 0.1 ; for (
t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1425ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_F [ t368 ] ; } t261 [
1433ULL ] = X [ 369ULL ] ; t261 [ 1434ULL ] = X [ 395ULL ] ; t261 [ 1435ULL ]
= t572 ; t261 [ 1436ULL ] = X [ 397ULL ] ; t261 [ 1437ULL ] = - X [ 374ULL ]
; t261 [ 1438ULL ] = 0.92095788639984788 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Mach_A ; t261 [ 1439ULL ]
= X [ 396ULL ] ; t261 [ 1440ULL ] = X [ 49ULL ] ; t261 [ 1441ULL ] = X [
52ULL ] ; t261 [ 1442ULL ] = X [ 51ULL ] ; t261 [ 1443ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_W ; t261 [ 1444ULL ] = X [
365ULL ] ; t261 [ 1445ULL ] = X [ 366ULL ] * 0.1 ; t261 [ 1446ULL ] = X [
367ULL ] ; t261 [ 1447ULL ] = X [ 368ULL ] ; t261 [ 1448ULL ] = X [ 397ULL ]
; t261 [ 1449ULL ] = X [ 398ULL ] ; t261 [ 1450ULL ] = X [ 388ULL ] ; t261 [
1451ULL ] = X [ 399ULL ] ; t261 [ 1452ULL ] = X [ 400ULL ] ; t261 [ 1453ULL ]
= X [ 401ULL ] ; t261 [ 1454ULL ] = X [ 402ULL ] ; t261 [ 1455ULL ] = X [
384ULL ] ; t261 [ 1456ULL ] = t595 * 0.1 ; t261 [ 1457ULL ] = X [ 386ULL ] ;
t261 [ 1458ULL ] = X [ 387ULL ] ; t261 [ 1459ULL ] = - X [ 374ULL ] ; t261 [
1460ULL ] = X [ 403ULL ] ; t261 [ 1461ULL ] = - X [ 376ULL ] ; t261 [ 1462ULL
] = - X [ 377ULL ] ; t261 [ 1463ULL ] = - X [ 378ULL ] ; t261 [ 1464ULL ] = X
[ 404ULL ] ; t261 [ 1465ULL ] = X [ 405ULL ] ; t261 [ 1466ULL ] = t606 ; t261
[ 1467ULL ] = X [ 399ULL ] ; t261 [ 1468ULL ] = - X [ 377ULL ] ; t261 [
1469ULL ] = X [ 400ULL ] ; t261 [ 1470ULL ] = - X [ 378ULL ] ; t261 [ 1471ULL
] = ( 1.0 - X [ 51ULL ] ) - X [ 52ULL ] ; t261 [ 1472ULL ] = X [ 384ULL ] ;
t261 [ 1473ULL ] = t595 * 0.1 ; t261 [ 1474ULL ] = X [ 386ULL ] ; t261 [
1475ULL ] = X [ 387ULL ] ; t261 [ 1476ULL ] = X [ 370ULL ] ; t261 [ 1477ULL ]
= X [ 371ULL ] ; t261 [ 1478ULL ] = X [ 372ULL ] ; t261 [ 1479ULL ] = ( X [
385ULL ] - 1.0E-8 ) * 1.0E+6 ; t261 [ 1480ULL ] = X [ 385ULL ] ; t261 [
1481ULL ] = ( X [ 385ULL ] - 1.0E-8 ) * 7812.5001220703134 ; t261 [ 1482ULL ]
= ( X [ 385ULL ] - 1.0E-8 ) * 1.0E+6 ; t261 [ 1483ULL ] = X [ 385ULL ] ; t261
[ 1484ULL ] = X [ 385ULL ] * 0.0019634954084936209 ; t261 [ 1485ULL ] = t595
* 99999.999999999985 ; t261 [ 1486ULL ] = t599 * 0.1 ; t261 [ 1487ULL ] = ( X
[ 385ULL ] - 1.0E-8 ) * 7812.5001220703134 ; t261 [ 1488ULL ] = X [ 384ULL ]
; t261 [ 1489ULL ] = t595 * 0.1 ; t261 [ 1490ULL ] = X [ 386ULL ] ; t261 [
1491ULL ] = X [ 387ULL ] ; t261 [ 1492ULL ] = t595 * 99999.999999999985 ;
t261 [ 1493ULL ] = X [ 384ULL ] ; t261 [ 1494ULL ] = X [ 384ULL ] ; t261 [
1495ULL ] = t595 * 0.1 ; t261 [ 1496ULL ] = X [ 386ULL ] ; t261 [ 1497ULL ] =
X [ 387ULL ] ; t261 [ 1498ULL ] = X [ 385ULL ] * 0.0019634954084936209 ; t261
[ 1499ULL ] = X [ 370ULL ] ; t261 [ 1500ULL ] = X [ 371ULL ] ; t261 [ 1501ULL
] = X [ 372ULL ] ; t261 [ 1502ULL ] = X [ 376ULL ] ; t261 [ 1503ULL ] = X [
384ULL ] ; t261 [ 1504ULL ] = t595 * 0.1 ; t261 [ 1505ULL ] = X [ 386ULL ] ;
t261 [ 1506ULL ] = X [ 387ULL ] ; t261 [ 1507ULL ] = X [ 374ULL ] ; t261 [
1508ULL ] = X [ 412ULL ] ; t261 [ 1509ULL ] = X [ 376ULL ] ; t261 [ 1510ULL ]
= X [ 377ULL ] ; t261 [ 1511ULL ] = X [ 378ULL ] ; t261 [ 1512ULL ] = X [
409ULL ] ; t261 [ 1513ULL ] = X [ 408ULL ] ; t261 [ 1514ULL ] = X [ 406ULL ]
; t261 [ 1515ULL ] = X [ 407ULL ] * 0.1 ; t261 [ 1516ULL ] = X [ 410ULL ] ;
t261 [ 1517ULL ] = X [ 411ULL ] ; t261 [ 1518ULL ] = t605 ; t261 [ 1519ULL ]
= X [ 374ULL ] ; t261 [ 1520ULL ] = - X [ 374ULL ] ; t261 [ 1521ULL ] = X [
370ULL ] ; t261 [ 1522ULL ] = X [ 371ULL ] ; t261 [ 1523ULL ] = X [ 372ULL ]
; t261 [ 1524ULL ] = - X [ 374ULL ] ; t261 [ 1525ULL ] = X [ 412ULL ] ; t261
[ 1526ULL ] = - X [ 376ULL ] ; t261 [ 1527ULL ] = - X [ 377ULL ] ; t261 [
1528ULL ] = - X [ 378ULL ] ; t261 [ 1529ULL ] = X [ 409ULL ] ; t261 [ 1530ULL
] = X [ 408ULL ] ; t261 [ 1531ULL ] = - X [ 376ULL ] ; t261 [ 1532ULL ] = X [
377ULL ] ; t261 [ 1533ULL ] = - X [ 377ULL ] ; t261 [ 1534ULL ] = X [ 378ULL
] ; t261 [ 1535ULL ] = - X [ 378ULL ] ; t261 [ 1536ULL ] = t599 * 0.1 ; t261
[ 1537ULL ] = U_idx_9 ; t261 [ 1538ULL ] = X [ 72ULL ] ; t261 [ 1539ULL ] = X
[ 73ULL ] * 0.1 ; t261 [ 1540ULL ] = X [ 74ULL ] ; t261 [ 1541ULL ] = X [
75ULL ] ; for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1542ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t368 ] ; }
for ( t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1550ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t368 ] ; } t261
[ 1558ULL ] = X [ 340ULL ] ; t261 [ 1559ULL ] = X [ 341ULL ] * 0.1 ; t261 [
1560ULL ] = X [ 342ULL ] ; t261 [ 1561ULL ] = X [ 343ULL ] ; t261 [ 1562ULL ]
= X [ 72ULL ] ; t261 [ 1563ULL ] = X [ 73ULL ] * 0.1 ; t261 [ 1564ULL ] = X [
74ULL ] ; t261 [ 1565ULL ] = X [ 75ULL ] ; t261 [ 1566ULL ] = X [ 13ULL ] ;
t261 [ 1567ULL ] = X [ 86ULL ] ; t261 [ 1568ULL ] = X [ 14ULL ] ; t261 [
1569ULL ] = X [ 413ULL ] ; t261 [ 1570ULL ] = X [ 12ULL ] - 273.15 ; t261 [
1571ULL ] = - X [ 353ULL ] ; t261 [ 1572ULL ] = X [ 414ULL ] * 0.1 ; t261 [
1573ULL ] = X [ 53ULL ] * 0.1 ; t261 [ 1574ULL ] = X [ 87ULL ] ; t261 [
1575ULL ] = t611 * 100000.0 ; t261 [ 1576ULL ] = X [ 416ULL ] ; t261 [
1577ULL ] = X [ 415ULL ] ; t261 [ 1578ULL ] = X [ 417ULL ] * 0.1 ; for ( t368
= 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1579ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t368 ] ; } t261
[ 1587ULL ] = X [ 90ULL ] ; t261 [ 1588ULL ] = t577 ; t261 [ 1589ULL ] = - X
[ 356ULL ] ; t261 [ 1590ULL ] = X [ 418ULL ] ; t261 [ 1591ULL ] = X [ 113ULL
] ; t261 [ 1592ULL ] = X [ 89ULL ] ; t261 [ 1593ULL ] = X [ 12ULL ] ; t261 [
1594ULL ] = X [ 13ULL ] ; t261 [ 1595ULL ] = X [ 14ULL ] ; t261 [ 1596ULL ] =
t442 ; t261 [ 1597ULL ] = X [ 340ULL ] ; t261 [ 1598ULL ] = X [ 341ULL ] *
0.1 ; t261 [ 1599ULL ] = X [ 342ULL ] ; t261 [ 1600ULL ] = X [ 343ULL ] ;
t261 [ 1601ULL ] = - X [ 356ULL ] ; t261 [ 1602ULL ] = X [ 419ULL ] ; t261 [
1603ULL ] = - X [ 353ULL ] ; t261 [ 1604ULL ] = - X [ 361ULL ] ; t261 [
1605ULL ] = - X [ 362ULL ] ; t261 [ 1606ULL ] = X [ 420ULL ] ; t261 [ 1607ULL
] = X [ 421ULL ] ; t261 [ 1608ULL ] = X [ 72ULL ] ; t261 [ 1609ULL ] = X [
73ULL ] * 0.1 ; t261 [ 1610ULL ] = X [ 74ULL ] ; t261 [ 1611ULL ] = X [ 75ULL
] ; t261 [ 1612ULL ] = X [ 418ULL ] ; t261 [ 1613ULL ] = X [ 422ULL ] ; t261
[ 1614ULL ] = X [ 415ULL ] ; t261 [ 1615ULL ] = X [ 423ULL ] ; t261 [ 1616ULL
] = X [ 424ULL ] ; t261 [ 1617ULL ] = X [ 425ULL ] ; t261 [ 1618ULL ] = X [
426ULL ] ; t261 [ 1619ULL ] = t302_idx_0 ; t261 [ 1620ULL ] = - X [ 361ULL ]
; t261 [ 1621ULL ] = X [ 423ULL ] ; t261 [ 1622ULL ] = - X [ 362ULL ] ; t261
[ 1623ULL ] = X [ 424ULL ] ; t261 [ 1624ULL ] = ( 1.0 - X [ 14ULL ] ) - X [
13ULL ] ; t261 [ 1625ULL ] = X [ 72ULL ] ; t261 [ 1626ULL ] = X [ 73ULL ] *
0.1 ; t261 [ 1627ULL ] = X [ 74ULL ] ; t261 [ 1628ULL ] = X [ 75ULL ] ; t261
[ 1629ULL ] = X [ 365ULL ] ; t261 [ 1630ULL ] = X [ 366ULL ] * 0.1 ; t261 [
1631ULL ] = X [ 367ULL ] ; t261 [ 1632ULL ] = X [ 368ULL ] ; t261 [ 1633ULL ]
= X [ 16ULL ] ; t261 [ 1634ULL ] = X [ 91ULL ] ; t261 [ 1635ULL ] = X [ 17ULL
] ; t261 [ 1636ULL ] = X [ 427ULL ] ; t261 [ 1637ULL ] = X [ 15ULL ] - 273.15
; t261 [ 1638ULL ] = - X [ 415ULL ] ; t261 [ 1639ULL ] = X [ 428ULL ] * 0.1 ;
t261 [ 1640ULL ] = X [ 54ULL ] * 0.1 ; t261 [ 1641ULL ] = X [ 92ULL ] ; t261
[ 1642ULL ] = t619 * 100000.0 ; t261 [ 1643ULL ] = X [ 429ULL ] ; t261 [
1644ULL ] = - X [ 388ULL ] ; t261 [ 1645ULL ] = X [ 430ULL ] * 0.1 ; for (
t368 = 0ULL ; t368 < 8ULL ; t368 ++ ) { t261 [ t368 + 1646ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t368 ] ; } t261
[ 1654ULL ] = X [ 95ULL ] ; t261 [ 1655ULL ] = t584 ; t261 [ 1656ULL ] = - X
[ 418ULL ] ; t261 [ 1657ULL ] = - X [ 397ULL ] ; t261 [ 1658ULL ] = ( - X [
101ULL ] - X [ 105ULL ] ) - X [ 107ULL ] ; t261 [ 1659ULL ] = X [ 114ULL ] ;
t261 [ 1660ULL ] = X [ 94ULL ] ; t261 [ 1661ULL ] = X [ 15ULL ] ; t261 [
1662ULL ] = X [ 16ULL ] ; t261 [ 1663ULL ] = X [ 17ULL ] ; t261 [ 1664ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; t261 [
1665ULL ] = X [ 72ULL ] ; t261 [ 1666ULL ] = X [ 73ULL ] * 0.1 ; t261 [
1667ULL ] = X [ 74ULL ] ; t261 [ 1668ULL ] = X [ 75ULL ] ; t261 [ 1669ULL ] =
- X [ 418ULL ] ; t261 [ 1670ULL ] = X [ 431ULL ] ; t261 [ 1671ULL ] = - X [
415ULL ] ; t261 [ 1672ULL ] = - X [ 423ULL ] ; t261 [ 1673ULL ] = - X [
424ULL ] ; t261 [ 1674ULL ] = X [ 432ULL ] ; t261 [ 1675ULL ] = X [ 433ULL ]
; t261 [ 1676ULL ] = X [ 365ULL ] ; t261 [ 1677ULL ] = X [ 366ULL ] * 0.1 ;
t261 [ 1678ULL ] = X [ 367ULL ] ; t261 [ 1679ULL ] = X [ 368ULL ] ; t261 [
1680ULL ] = - X [ 397ULL ] ; t261 [ 1681ULL ] = X [ 434ULL ] ; t261 [ 1682ULL
] = - X [ 388ULL ] ; t261 [ 1683ULL ] = - X [ 399ULL ] ; t261 [ 1684ULL ] = -
X [ 400ULL ] ; t261 [ 1685ULL ] = X [ 435ULL ] ; t261 [ 1686ULL ] = X [
436ULL ] ; t261 [ 1687ULL ] = t463 ; t261 [ 1688ULL ] = - X [ 423ULL ] ; t261
[ 1689ULL ] = - X [ 399ULL ] ; t261 [ 1690ULL ] = X [ 104ULL ] ; t261 [
1691ULL ] = X [ 109ULL ] ; t261 [ 1692ULL ] = - X [ 424ULL ] ; t261 [ 1693ULL
] = - X [ 400ULL ] ; t261 [ 1694ULL ] = ( 1.0 - X [ 17ULL ] ) - X [ 16ULL ] ;
t261 [ 1695ULL ] = X [ 15ULL ] ; t261 [ 1696ULL ] = X [ 16ULL ] ; t261 [
1697ULL ] = X [ 17ULL ] ; t261 [ 1698ULL ] = X [ 340ULL ] ; t261 [ 1699ULL ]
= X [ 341ULL ] * 0.1 ; t261 [ 1700ULL ] = X [ 342ULL ] ; t261 [ 1701ULL ] = X
[ 343ULL ] ; t261 [ 1702ULL ] = X [ 365ULL ] ; t261 [ 1703ULL ] = X [ 366ULL
] * 0.1 ; t261 [ 1704ULL ] = X [ 367ULL ] ; t261 [ 1705ULL ] = X [ 368ULL ] ;
t261 [ 1706ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t261 [ 1707ULL ] =
U_idx_10 ; t261 [ 1708ULL ] = X [ 62ULL ] ; t261 [ 1709ULL ] = X [ 62ULL ] ;
t261 [ 1710ULL ] = X [ 62ULL ] ; t261 [ 1711ULL ] = X [ 62ULL ] ; t261 [
1712ULL ] = t609 ; t261 [ 1713ULL ] = t609 ; t261 [ 1714ULL ] = X [ 62ULL ] ;
t261 [ 1715ULL ] = X [ 62ULL ] ; t261 [ 1716ULL ] = t609 ; t261 [ 1717ULL ] =
X [ 62ULL ] ; t261 [ 1718ULL ] = X [ 62ULL ] ; t261 [ 1719ULL ] = X [ 62ULL ]
; t261 [ 1720ULL ] = X [ 62ULL ] ; t261 [ 1721ULL ] = X [ 62ULL ] ; t261 [
1722ULL ] = X [ 55ULL ] ; t261 [ 1723ULL ] = X [ 55ULL ] ; t261 [ 1724ULL ] =
U_idx_11 ; t261 [ 1725ULL ] = X [ 62ULL ] ; t261 [ 1726ULL ] = t609 ; t261 [
1727ULL ] = t341_idx_0 * 1000.0 ; t261 [ 1728ULL ] = X [ 438ULL ] ; t261 [
1729ULL ] = X [ 439ULL ] ; t261 [ 1730ULL ] = X [ 439ULL ] ; t261 [ 1731ULL ]
= X [ 437ULL ] ; t261 [ 1732ULL ] = X [ 56ULL ] ; t261 [ 1733ULL ] = X [
62ULL ] ; t261 [ 1734ULL ] = X [ 55ULL ] * 9.5492965855137211 ; t261 [
1735ULL ] = X [ 55ULL ] ; t261 [ 1736ULL ] = U_idx_12 ; t261 [ 1737ULL ] = -
X [ 438ULL ] ; t261 [ 1738ULL ] = U_idx_12 ; t261 [ 1739ULL ] = X [ 55ULL ] ;
t261 [ 1740ULL ] = X [ 55ULL ] ; t261 [ 1741ULL ] = - X [ 438ULL ] ; t261 [
1742ULL ] = - X [ 438ULL ] ; t261 [ 1743ULL ] = X [ 55ULL ] ; t261 [ 1744ULL
] = X [ 55ULL ] ; t261 [ 1745ULL ] = - X [ 438ULL ] ; t261 [ 1746ULL ] = - X
[ 438ULL ] ; t261 [ 1747ULL ] = - X [ 438ULL ] ; t261 [ 1748ULL ] = X [ 55ULL
] ; t261 [ 1749ULL ] = U_idx_12 ; t261 [ 1750ULL ] = U_idx_11 ; t261 [
1751ULL ] = X [ 62ULL ] ; for ( b = 0 ; b < 1752 ; b ++ ) { out . mX [ b ] =
t261 [ b ] ; } ( void ) LC ; ( void ) t800 ; return 0 ; }
