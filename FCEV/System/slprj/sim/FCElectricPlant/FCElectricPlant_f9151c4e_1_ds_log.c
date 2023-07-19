#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_log.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t917 , NeDsMethodOutput * t918 ) { ETTS0
ab_efOut ; ETTS0 ac_efOut ; ETTS0 ae_efOut ; ETTS0 c_efOut ; ETTS0 cd_efOut ;
ETTS0 eb_efOut ; ETTS0 ee_efOut ; ETTS0 efOut ; ETTS0 fc_efOut ; ETTS0
g_efOut ; ETTS0 hd_efOut ; ETTS0 ib_efOut ; ETTS0 jc_efOut ; ETTS0 je_efOut ;
ETTS0 ke_efOut ; ETTS0 l_efOut ; ETTS0 ld_efOut ; ETTS0 mb_efOut ; ETTS0
oc_efOut ; ETTS0 q_efOut ; ETTS0 qb_efOut ; ETTS0 qd_efOut ; ETTS0 sc_efOut ;
ETTS0 t12 ; ETTS0 t19 ; ETTS0 t22 ; ETTS0 t25 ; ETTS0 u_efOut ; ETTS0
ud_efOut ; ETTS0 vb_efOut ; ETTS0 xc_efOut ; PmRealVector out ; real_T t283 [
1639 ] ; real_T X [ 399 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ 8 ] ; real_T
t288 [ 8 ] ; real_T t293 [ 8 ] ; real_T t301 [ 8 ] ; real_T t318 [ 8 ] ;
real_T t354 [ 8 ] ; real_T ad_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T
bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T
be_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ; real_T
ce_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T
dc_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T
e_efOut [ 1 ] ; real_T ec_efOut [ 1 ] ; real_T ed_efOut [ 1 ] ; real_T
f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T
fe_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T gc_efOut [ 1 ] ; real_T
gd_efOut [ 1 ] ; real_T ge_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T
hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T he_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T ic_efOut [ 1 ] ; real_T id_efOut [ 1 ] ; real_T
ie_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
jd_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T
kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T
lc_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T
mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T
nb_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T nd_efOut [ 1 ] ; real_T
o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T
pd_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T
s_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T t284 [
1 ] ; real_T t_efOut [ 1 ] ; real_T tb_efOut [ 1 ] ; real_T tc_efOut [ 1 ] ;
real_T td_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ; real_T uc_efOut [ 1 ] ;
real_T v_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T
w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T wc_efOut [ 1 ] ; real_T
wd_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T
xd_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T
yc_efOut [ 1 ] ; real_T yd_efOut [ 1 ] ; real_T Fuel_Cell_Boost_Converter_L_i
; real_T Fuel_Cell_Boost_Converter_L_n_v ; real_T
Fuel_Cell_Boost_Converter_L_p_v ; real_T Fuel_Cell_Current_Sensor1_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden ; real_T
U_idx_0 ; real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_2
; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ; real_T
U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1018 ; real_T
intrm_sf_mf_1107 ; real_T intrm_sf_mf_1150 ; real_T intrm_sf_mf_1311 ; real_T
intrm_sf_mf_1318 ; real_T intrm_sf_mf_2 ; real_T intrm_sf_mf_401 ; real_T
intrm_sf_mf_5 ; real_T intrm_sf_mf_8 ; real_T intrm_sf_mf_9 ; real_T piece17
; real_T t30 ; real_T t360_idx_0 ; real_T t368_idx_0 ; real_T t372_idx_0 ;
real_T t406 ; real_T t408 ; real_T t410 ; real_T t419 ; real_T t422 ; real_T
t434 ; real_T t440 ; real_T t452 ; real_T t464 ; real_T t476 ; real_T t478 ;
real_T t480 ; real_T t481 ; real_T t488 ; real_T t496 ; real_T t497 ; real_T
t499 ; real_T t500 ; real_T t501 ; real_T t504 ; real_T t505 ; real_T t506 ;
real_T t507 ; real_T t508 ; real_T t510 ; real_T t511 ; real_T t512 ; real_T
t515 ; real_T t517 ; real_T t518 ; real_T t520 ; real_T t522 ; real_T t523 ;
real_T t528 ; real_T t529 ; real_T t530 ; real_T t532 ; real_T t533 ; real_T
t534 ; real_T t536 ; real_T t546 ; real_T t548 ; real_T t549 ; real_T t550 ;
real_T t551 ; real_T t554 ; real_T t555 ; real_T t557 ; real_T t558 ; real_T
t563 ; real_T t567 ; real_T t571 ; real_T t581 ; real_T t590 ; real_T t592 ;
real_T t593 ; real_T t595 ; real_T t598 ; real_T t599 ; real_T t602 ; real_T
t606 ; real_T t608 ; real_T t613 ; real_T t614 ; real_T t616 ; real_T t617 ;
real_T t619 ; real_T t627 ; real_T t628 ; real_T t630 ; real_T t631 ; real_T
t632 ; real_T t635 ; real_T t636 ; real_T t639 ; real_T t641 ; real_T t643 ;
real_T t644 ; real_T t645 ; real_T t646 ; real_T t777 ; real_T t916 ; size_t
t275 [ 1 ] ; size_t t278 [ 1 ] ; size_t t33 [ 1 ] ; size_t t398 ; size_t t405
; int32_T b ; U_idx_0 = t917 -> mU . mX [ 0 ] ; U_idx_1 = t917 -> mU . mX [ 1
] ; U_idx_2 = t917 -> mU . mX [ 2 ] ; U_idx_3 = t917 -> mU . mX [ 3 ] ;
U_idx_4 = t917 -> mU . mX [ 4 ] ; U_idx_5 = t917 -> mU . mX [ 5 ] ; U_idx_6 =
t917 -> mU . mX [ 6 ] ; U_idx_7 = t917 -> mU . mX [ 7 ] ; U_idx_8 = t917 ->
mU . mX [ 8 ] ; U_idx_9 = t917 -> mU . mX [ 9 ] ; U_idx_10 = t917 -> mU . mX
[ 10 ] ; U_idx_11 = t917 -> mU . mX [ 11 ] ; for ( b = 0 ; b < 399 ; b ++ ) {
X [ b ] = t917 -> mX . mX [ b ] ; } out = t918 -> mLOG ; t284 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t398 = 0ULL ; t398 < 42ULL ; t398 ++ ) { t405 = t398
/ 42ULL ; t406 = t284 [ t405 > 0ULL ? 0ULL : t405 ] ; t488 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t398 ] * 1.0E-5 ; t284 [ t405 >
0ULL ? 0ULL : t405 ] = t406 > t488 ? t488 : t406 ; } t408 = t284 [ 0ULL ] ;
t406 = t408 > X [ 54ULL ] ? t408 : X [ 54ULL ] ; t408 = X [ 0ULL ] *
9.2592592592592591E-6 ; t410 = - X [ 53ULL ] - U_idx_0 ; intrm_sf_mf_2 = ( (
( real_T ) ( t410 >= 0.0 ) * t410 * 1000.0 + ( real_T ) ( t410 < 0.0 ) * X [
55ULL ] ) - 0.9 ) / 0.099999999999999978 ; if ( ( real_T ) ( t410 >= 0.0 ) *
t410 * 1000.0 + ( real_T ) ( t410 < 0.0 ) * X [ 55ULL ] <= 0.9 ) {
intrm_sf_mf_2 = 0.0 ; } else { intrm_sf_mf_2 = ( real_T ) ( t410 >= 0.0 ) *
t410 * 1000.0 + ( real_T ) ( t410 < 0.0 ) * X [ 55ULL ] >= 1.0 ? 1.0 :
intrm_sf_mf_2 * intrm_sf_mf_2 * 3.0 - intrm_sf_mf_2 * intrm_sf_mf_2 *
intrm_sf_mf_2 * 2.0 ; } t476 = X [ 3ULL ] * - 0.1 + X [ 58ULL ] * 0.1 ;
Fuel_Cell_Boost_Converter_L_i = X [ 61ULL ] * 1.0E-9 + X [ 4ULL ] ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0000000000000011 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0E-15 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ;
Fuel_Cell_Current_Sensor1_I = ( ( ( X [ 3ULL ] * 0.1 + X [ 58ULL ] * - 0.1 )
+ X [ 61ULL ] * 1.0E-9 ) - X [ 63ULL ] ) + X [ 4ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 0ULL ] = X [
72ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 1ULL ]
= X [ 6ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
2ULL ] = X [ 73ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 3ULL ] = X [
8ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 4ULL ]
= X [ 76ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
5ULL ] = X [ 74ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 6ULL ] = X [
7ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 7ULL ]
= X [ 75ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
0ULL ] = X [ 78ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 1ULL ] = X [
9ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 2ULL ]
= X [ 79ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
3ULL ] = X [ 11ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 4ULL ] = X [
81ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 5ULL ]
= X [ 77ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
6ULL ] = X [ 10ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 7ULL ] = X [
80ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 0ULL ]
= X [ 82ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
1ULL ] = X [ 12ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 2ULL ] = X [
83ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 3ULL ]
= X [ 14ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
4ULL ] = X [ 86ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 5ULL ] = X [
84ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 6ULL ]
= X [ 13ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
7ULL ] = X [ 85ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 0ULL ] = X [
87ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 1ULL ]
= X [ 15ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
2ULL ] = X [ 88ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 3ULL ] = X [
17ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 4ULL ]
= X [ 91ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
5ULL ] = X [ 89ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 6ULL ] = X [
16ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 7ULL ]
= X [ 90ULL ] ; if ( X [ 92ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [ 92ULL ]
* 17.81 + 0.043 ; } else if ( X [ 92ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( ( X [
92ULL ] * 17.81 + 0.043 ) - X [ 92ULL ] * X [ 92ULL ] * 39.85 ) + X [ 92ULL ]
* X [ 92ULL ] * X [ 92ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( X [ 92ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 93ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = X [ 93ULL ]
* 17.81 + 0.043 ; } else if ( X [ 93ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( ( X [
93ULL ] * 17.81 + 0.043 ) - X [ 93ULL ] * X [ 93ULL ] * 39.85 ) + X [ 93ULL ]
* X [ 93ULL ] * X [ 93ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( X [ 93ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 62ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = - X [ 62ULL
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
72ULL ] + X [ 78ULL ] ) / 2.0 ; t478 = ( X [ 82ULL ] + X [ 87ULL ] ) / 2.0 ;
t284 [ 0 ] = 343.15 ; t275 [ 0 ] = 52ULL ; t33 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t22 = efOut
; tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t284 [ 0 ] = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = pmf_exp (
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ) -
t284 [ 0ULL ] ) ; t480 = X [ 92ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = pmf_exp (
pmf_log ( t478 ) - t284 [ 0ULL ] ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 > t478 ) {
t488 = 4.0566516249873756E-6 ; t488 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 - t478 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * t480 *
1.58E-18 / ( t488 == 0.0 ? 1.0E-16 : t488 ) ; } else { t488 =
4.0566516249873756E-6 ; t488 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 - t478 ) *
t478 * ( X [ 93ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ) )
* 1.58E-18 / ( t488 == 0.0 ? 1.0E-16 : t488 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
1818.181818181818 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
1818.181818181818 ) * 3.1649674241803613E-10 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + t488 ) *
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
1.6283557743720771 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = 0.000125 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) ;
t480 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 * ( (
X [ 86ULL ] + X [ 91ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = t480 >=
1.0E-9 ? t480 : 1.0E-6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * ( ( X [
75ULL ] + X [ 80ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 >=
1.0E-9 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 =
1.0E-6 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
t478 * ( ( X [ 85ULL ] + X [ 90ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 >=
1.0E-9 ) { t478 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 ; }
else { t478 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 = ( ( ( X [
4ULL ] * - 1.0E-6 + X [ 61ULL ] * - 1.0E-15 ) + X [ 62ULL ] * - 0.001001 ) +
X [ 5ULL ] ) + X [ 95ULL ] ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 >= 1.0 ) {
t481 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ) *
0.021121699350046864 ; } else { t481 = 0.0 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 <= 13986.0 )
{ t30 = pmf_log ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 / 14000.0 ) ;
} else { t30 = - 6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = pmf_sqrt ( t478
) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; t478 =
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) )
* 0.014785189545032806 + 1.228891453185164 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = ( ( t478 -
t481 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * 0.01 ) -
t30 * - 0.014785189545032806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 *
11.200000000000001 ; t481 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 *
241812.2160511087 / 0.0020158806832745466 * 0.001 + ( ( ( X [ 99ULL ] - X [
98ULL ] * - 3931.85243448965 ) + ( X [ 101ULL ] - X [ 100ULL ] * -
271.011680699068 ) ) + ( X [ 97ULL ] - X [ 96ULL ] * - 2546.6190535198302 ) )
) + ( X [ 102ULL ] + X [ 103ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = t481 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 * 0.001 ;
t478 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 / (
t481 == 0.0 ? 1.0E-16 : t481 ) ; t480 = - X [ 96ULL ] + X [ 105ULL ] ; t481 =
( - X [ 4ULL ] + X [ 61ULL ] * - 1.0E-9 ) - X [ 62ULL ] ; t30 = ( ( ( X [
4ULL ] * - 1.0E-6 + X [ 61ULL ] * - 1.0E-15 ) + X [ 62ULL ] * - 1.0E-6 ) + X
[ 5ULL ] ) + X [ 95ULL ] ; if ( X [ 127ULL ] <= 0.0 ) { intrm_sf_mf_401 = 0.0
; } else { intrm_sf_mf_401 = X [ 127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ; } if
( X [ 128ULL ] <= 0.0 ) { intrm_sf_mf_8 = 0.0 ; } else { intrm_sf_mf_8 = X [
128ULL ] >= 1.0 ? 1.0 : X [ 128ULL ] ; } t501 = ( ( ( ( 1.0 - intrm_sf_mf_401
) - intrm_sf_mf_8 ) * 296.802103844292 + intrm_sf_mf_401 * 461.523 ) +
intrm_sf_mf_8 * 4124.48151675695 ) * 293.15 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_rho_I = 1.01325 / (
t501 == 0.0 ? 1.0E-16 : t501 ) ; if ( X [ 21ULL ] <= 0.0 ) { t488 = 0.0 ; }
else { t488 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <=
0.0 ) { t496 = 0.0 ; } else { t496 = X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ;
} t497 = ( ( ( 1.0 - t488 ) - t496 ) * 296.802103844292 + t488 * 461.523 ) +
t496 * 4124.48151675695 ; if ( X [ 135ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = X [ 135ULL ] >=
623.15 ? 623.15 : X [ 135ULL ] ; } t500 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ; t499 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B * -
0.2214565261064495 ) + t500 * 0.00037212980109014541 ) * ( ( 1.0 - t488 ) -
t496 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B *
1.2002114337048222 ) + t500 * - 0.00038614513167823636 ) * t488 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B *
6.9647057412840034 ) + t500 * - 0.0070524868246844051 ) * t496 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = t499 - t497 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = t499 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ) ; if ( X [ 137ULL ]
<= 0.0 ) { t499 = 0.0 ; } else { t499 = X [ 137ULL ] >= 1.0 ? 1.0 : X [
137ULL ] ; } if ( X [ 138ULL ] <= 0.0 ) { t500 = 0.0 ; } else { t500 = X [
138ULL ] >= 1.0 ? 1.0 : X [ 138ULL ] ; } t284 [ 0ULL ] = X [ 19ULL ] ;
tlu2_linear_nearest_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = c_efOut ; tlu2_1d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = d_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t22 . mField0 [
0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = e_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = f_efOut [ 0 ] ; t501 = ( ( (
1.0 - t499 ) - t500 ) * t372_idx_0 + t360_idx_0 * t499 ) + t368_idx_0 * t500
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = - pmf_sqrt (
fabs ( X [ 136ULL ] * X [ 136ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B / ( t497 == 0.0 ?
1.0E-16 : t497 ) / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) ) *
7.8539816339744827E-5 ; t507 = X [ 19ULL ] * t497 ; t499 = X [ 20ULL ] / (
t507 == 0.0 ? 1.0E-16 : t507 ) ; if ( X [ 139ULL ] <= 216.59999999999997 ) {
t500 = 216.59999999999997 ; } else { t500 = X [ 139ULL ] >= 623.15 ? 623.15 :
X [ 139ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t500 * t500
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = ( ( (
1074.1165326382641 + t500 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
0.00037212980109014541 ) * ( ( 1.0 - t488 ) - t496 ) + ( ( 1479.6504774711011
+ t500 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.00038614513167823636 ) * t488 ) + ( ( 12825.281119789837 + t500 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.0070524868246844051 ) * t496 ; t508 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W - t497 ; t497 = -
pmf_sqrt ( fabs ( X [ 140ULL ] * X [ 140ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W / ( t508 == 0.0 ?
1.0E-16 : t508 ) ) / ( t497 == 0.0 ? 1.0E-16 : t497 ) / ( X [ 139ULL ] == 0.0
? 1.0E-16 : X [ 139ULL ] ) ) ) * 7.8539816339744827E-5 ; t288 [ 0ULL ] = X [
20ULL ] * 100000.0 ; t288 [ 1ULL ] = X [ 19ULL ] ; t288 [ 2ULL ] = X [ 142ULL
] ; t288 [ 3ULL ] = X [ 21ULL ] ; t288 [ 4ULL ] = X [ 137ULL ] ; t288 [ 5ULL
] = X [ 141ULL ] ; t288 [ 6ULL ] = X [ 22ULL ] ; t288 [ 7ULL ] = X [ 138ULL ]
; for ( t405 = 0ULL ; t405 < 8ULL ; t405 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t405 ] = t288 [ t405
] ; } if ( X [ 134ULL ] >= 0.0 ) { t500 = - X [ 134ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ) * 1.0E-5 ; }
else { t500 = X [ 134ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ) * 1.0E-5 ; }
if ( - X [ 122ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = X [ 122ULL ] /
( t497 == 0.0 ? 1.0E-16 : t497 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = - X [ 122ULL ]
/ ( t497 == 0.0 ? 1.0E-16 : t497 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 19ULL ] ;
tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = h_efOut [ 0
] ; t497 = t372_idx_0 ; if ( 1.0 - X [ 21ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0 - X [
21ULL ] ; } else if ( 1.0 - X [ 21ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_exp ( (
( 1.0 - X [ 21ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X [ 22ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
i_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t372_idx_0 = i_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_exp (
pmf_log ( X [ 20ULL ] * 100000.0 ) - t372_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >= 1.0 ) {
t518 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 - 1.0
) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; t504 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W / ( t518 == 0.0 ?
1.0E-16 : t518 ) ; } else { t504 = 1.0 ; } t520 = t504 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = ( X [ 21ULL ] - t504
) / ( t520 == 0.0 ? 1.0E-16 : t520 ) ; if ( X [ 21ULL ] - t504 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = 0.0 ; } else if ( X
[ 21ULL ] - t504 >= t504 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X [ 21ULL ] - t504 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = ( X [ 21ULL
] - t504 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = t499 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
7.8539816339744827E-5 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] ,
& t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t372_idx_0 ;
tlu2_1d_linear_linear_value ( & k_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] ,
& t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = k_efOut [ 0 ] ; t505 = ( ( (
1.0 - t488 ) - t496 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 + t497 * t488
) + t372_idx_0 * t496 ; t496 = U_idx_1 * 0.031415926535897927 ; if ( t496 *
0.0001 <= 7.8539816339744857E-13 ) { t497 = 7.8539816339744857E-13 ; } else
if ( t496 * 0.0001 >= 3.1415926535897929E-6 ) { t497 = 3.1415926535897929E-6
; } else { t497 = t496 * 0.0001 ; } if ( X [ 154ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 154ULL
] >= 1.0 ? 1.0 : X [ 154ULL ] ; } if ( X [ 155ULL ] <= 0.0 ) { t504 = 0.0 ; }
else { t504 = X [ 155ULL ] >= 1.0 ? 1.0 : X [ 155ULL ] ; } t506 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t504 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t504 * 4124.48151675695 ; if ( X [ 152ULL ] <= 216.59999999999997 ) { t507 =
216.59999999999997 ; } else { t507 = X [ 152ULL ] >= 623.15 ? 623.15 : X [
152ULL ] ; } t419 = t507 * t507 ; t508 = ( ( ( 1074.1165326382641 + t507 * -
0.2214565261064495 ) + t419 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t504 ) + (
( 1479.6504774711011 + t507 * 1.2002114337048222 ) + t419 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
12825.281119789837 + t507 * 6.9647057412840034 ) + t419 * -
0.0070524868246844051 ) * t504 ; t523 = t508 - t506 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_sqrt (
fabs ( X [ 153ULL ] * X [ 153ULL ] * ( t508 / ( t523 == 0.0 ? 1.0E-16 : t523
) ) / ( t506 == 0.0 ? 1.0E-16 : t506 ) / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X
[ 152ULL ] ) ) ) * t497 * 0.64 ; if ( X [ 122ULL ] >= 0.0 ) { t497 = X [
122ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * 1.0E-5 ; }
else { t497 = - X [ 122ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } t293 [ 0ULL ] = X [ 24ULL ] * 100000.0 ; t293 [ 1ULL ] = X [ 23ULL
] ; t293 [ 2ULL ] = X [ 167ULL ] ; t293 [ 3ULL ] = X [ 26ULL ] ; t293 [ 4ULL
] = X [ 169ULL ] ; t293 [ 5ULL ] = X [ 166ULL ] ; t293 [ 6ULL ] = X [ 25ULL ]
; t293 [ 7ULL ] = X [ 168ULL ] ; for ( t405 = 0ULL ; t405 < 8ULL ; t405 ++ )
{ t288 [ t405 ] = t293 [ t405 ] ; } t284 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & l_efOut . mField0 [ 0ULL ] , & l_efOut .
mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t25 = l_efOut ; tlu2_1d_linear_linear_value ( & m_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = m_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
t372_idx_0 ; if ( X [ 26ULL ] <= 0.0 ) { t504 = 0.0 ; } else { t504 = X [
26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) { t506 = 0.0
; } else { t506 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t530 = X [ 23ULL
] * ( ( ( ( 1.0 - t504 ) - t506 ) * 296.802103844292 + t504 * 461.523 ) +
t506 * 4124.48151675695 ) ; t507 = X [ 24ULL ] / ( t530 == 0.0 ? 1.0E-16 :
t530 ) ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) { t508 = 1.0 - X [ 26ULL ] ; } else
if ( 1.0 - X [ 26ULL ] >= - 0.1 ) { t508 = pmf_exp ( ( ( 1.0 - X [ 26ULL ] )
- 0.01 ) / 0.01 ) * 0.01 ; } else { t508 = 1.6701700790245661E-7 ; } t419 = X
[ 25ULL ] / ( t508 == 0.0 ? 1.0E-16 : t508 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = n_efOut [ 0
] ; t508 = pmf_exp ( pmf_log ( X [ 24ULL ] * 100000.0 ) - t372_idx_0 ) ; if (
t508 >= 1.0 ) { t533 = ( t508 - 1.0 ) * 461.523 + t419 ; t510 = t419 / ( t533
== 0.0 ? 1.0E-16 : t533 ) ; } else { t510 = 1.0 ; } t488 = t510 * 0.01 ; t508
= ( X [ 26ULL ] - t510 ) / ( t488 == 0.0 ? 1.0E-16 : t488 ) ; if ( X [ 26ULL
] - t510 <= 0.0 ) { t508 = 0.0 ; } else if ( X [ 26ULL ] - t510 >= t510 *
0.01 ) { t508 = X [ 26ULL ] - t510 ; } else { t508 = ( X [ 26ULL ] - t510 ) *
( t508 * t508 * 3.0 - t508 * t508 * t508 * 2.0 ) ; } t508 = t507 * t508 *
0.12 / 0.001 ; t508 *= 100000.0 ; tlu2_1d_linear_linear_value ( & o_efOut [
0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ]
) ; t372_idx_0 = o_efOut [ 0 ] ; t419 = t372_idx_0 ;
tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ] ,
& t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = p_efOut [ 0 ] ; t511 = ( ( (
1.0 - t504 ) - t506 ) * t419 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * t504 ) +
t372_idx_0 * t506 ; if ( X [ 29ULL ] <= 0.0 ) { t504 = 0.0 ; } else { t504 =
X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if ( X [ 30ULL ] <= 0.0 ) { t506 =
0.0 ; } else { t506 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } t419 = ( ( (
1.0 - t504 ) - t506 ) * 296.802103844292 + t504 * 461.523 ) + t506 *
4124.48151675695 ; if ( X [ 182ULL ] <= 216.59999999999997 ) { t510 =
216.59999999999997 ; } else { t510 = X [ 182ULL ] >= 623.15 ? 623.15 : X [
182ULL ] ; } t422 = t510 * t510 ; t512 = ( ( ( 1074.1165326382641 + t510 * -
0.2214565261064495 ) + t422 * 0.00037212980109014541 ) * ( ( 1.0 - t504 ) -
t506 ) + ( ( 1479.6504774711011 + t510 * 1.2002114337048222 ) + t422 * -
0.00038614513167823636 ) * t504 ) + ( ( 12825.281119789837 + t510 *
6.9647057412840034 ) + t422 * - 0.0070524868246844051 ) * t506 ; t488 = t512
- t419 ; t510 = t512 / ( t488 == 0.0 ? 1.0E-16 : t488 ) ; if ( X [ 184ULL ]
<= 0.0 ) { t512 = 0.0 ; } else { t512 = X [ 184ULL ] >= 1.0 ? 1.0 : X [
184ULL ] ; } if ( X [ 185ULL ] <= 0.0 ) { t422 = 0.0 ; } else { t422 = X [
185ULL ] >= 1.0 ? 1.0 : X [ 185ULL ] ; } t284 [ 0ULL ] = X [ 27ULL ] ;
tlu2_linear_nearest_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t25 = q_efOut ; tlu2_1d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = r_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & s_efOut [ 0ULL ] , & t25 . mField0 [
0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = s_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = t_efOut [ 0 ] ; intrm_sf_mf_5
= ( ( ( 1.0 - t512 ) - t422 ) * t372_idx_0 + t360_idx_0 * t512 ) + t368_idx_0
* t422 ; t510 = - pmf_sqrt ( fabs ( X [ 183ULL ] * X [ 183ULL ] * t510 / (
t419 == 0.0 ? 1.0E-16 : t419 ) / ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL
] ) ) ) * 7.8539816339744827E-5 ; t488 = X [ 27ULL ] * t419 ; t512 = X [
28ULL ] / ( t488 == 0.0 ? 1.0E-16 : t488 ) ; if ( X [ 187ULL ] <=
216.59999999999997 ) { t422 = 216.59999999999997 ; } else { t422 = X [ 187ULL
] >= 623.15 ? 623.15 : X [ 187ULL ] ; } t488 = t422 * t422 ; t515 = ( ( (
1074.1165326382641 + t422 * - 0.2214565261064495 ) + t488 *
0.00037212980109014541 ) * ( ( 1.0 - t504 ) - t506 ) + ( ( 1479.6504774711011
+ t422 * 1.2002114337048222 ) + t488 * - 0.00038614513167823636 ) * t504 ) +
( ( 12825.281119789837 + t422 * 6.9647057412840034 ) + t488 * -
0.0070524868246844051 ) * t506 ; t488 = t515 - t419 ; t419 = - pmf_sqrt (
fabs ( X [ 188ULL ] * X [ 188ULL ] * ( t515 / ( t488 == 0.0 ? 1.0E-16 : t488
) ) / ( t419 == 0.0 ? 1.0E-16 : t419 ) / ( X [ 187ULL ] == 0.0 ? 1.0E-16 : X
[ 187ULL ] ) ) ) * 7.8539816339744827E-5 ; t301 [ 0ULL ] = X [ 28ULL ] *
100000.0 ; t301 [ 1ULL ] = X [ 27ULL ] ; t301 [ 2ULL ] = X [ 190ULL ] ; t301
[ 3ULL ] = X [ 29ULL ] ; t301 [ 4ULL ] = X [ 184ULL ] ; t301 [ 5ULL ] = X [
189ULL ] ; t301 [ 6ULL ] = X [ 30ULL ] ; t301 [ 7ULL ] = X [ 185ULL ] ; for (
t405 = 0ULL ; t405 < 8ULL ; t405 ++ ) { t293 [ t405 ] = t301 [ t405 ] ; } if
( - X [ 172ULL ] >= 0.0 ) { t422 = X [ 172ULL ] / ( t510 == 0.0 ? 1.0E-16 :
t510 ) * 1.0E-5 ; } else { t422 = - X [ 172ULL ] / ( t510 == 0.0 ? 1.0E-16 :
t510 ) * 1.0E-5 ; } if ( X [ 186ULL ] >= 0.0 ) { t510 = - X [ 186ULL ] / (
t419 == 0.0 ? 1.0E-16 : t419 ) * 1.0E-5 ; } else { t510 = X [ 186ULL ] / (
t419 == 0.0 ? 1.0E-16 : t419 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 27ULL ] ;
tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = v_efOut [ 0
] ; t419 = t372_idx_0 ; if ( 1.0 - X [ 29ULL ] >= 0.01 ) { t488 = 1.0 - X [
29ULL ] ; } else if ( 1.0 - X [ 29ULL ] >= - 0.1 ) { t488 = pmf_exp ( ( ( 1.0
- X [ 29ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t488 =
1.6701700790245661E-7 ; } t515 = X [ 30ULL ] / ( t488 == 0.0 ? 1.0E-16 : t488
) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
w_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t372_idx_0 = w_efOut [ 0 ] ; t488 = pmf_exp ( pmf_log ( X [ 28ULL ] *
100000.0 ) - t372_idx_0 ) ; if ( t488 >= 1.0 ) { t554 = ( t488 - 1.0 ) *
461.523 + t515 ; t517 = t515 / ( t554 == 0.0 ? 1.0E-16 : t554 ) ; } else {
t517 = 1.0 ; } t488 = t517 * 0.01 ; t515 = ( X [ 29ULL ] - t517 ) / ( t488 ==
0.0 ? 1.0E-16 : t488 ) ; if ( X [ 29ULL ] - t517 <= 0.0 ) { t515 = 0.0 ; }
else if ( X [ 29ULL ] - t517 >= t517 * 0.01 ) { t515 = X [ 29ULL ] - t517 ; }
else { t515 = ( X [ 29ULL ] - t517 ) * ( t515 * t515 * 3.0 - t515 * t515 *
t515 * 2.0 ) ; } t515 = t512 * t515 * 7.8539816339744827E-5 / 0.001 ; t515 *=
100000.0 ; tlu2_1d_linear_linear_value ( & x_efOut [ 0ULL ] , & t22 . mField0
[ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = x_efOut [ 0 ] ;
t488 = t372_idx_0 ; tlu2_1d_linear_linear_value ( & y_efOut [ 0ULL ] , & t22
. mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField5 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = y_efOut [
0 ] ; t518 = ( ( ( 1.0 - t504 ) - t506 ) * t488 + t419 * t504 ) + t372_idx_0
* t506 ; t506 = ( X [ 179ULL ] * - 0.7999998 + U_idx_2 * 7.9999980000000006 )
- 0.039999990000000013 ; t419 = ( X [ 179ULL ] * - 0.7999998 + U_idx_2 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; t517 = U_idx_2 * 10.0 ; if (
t419 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t520 =
7.8539816339744857E-13 ; } else if ( t419 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t520 = 3.1415926535897929E-6 ; } else { t520 = t419
* 7.8539816339744827E-5 ; } if ( X [ 202ULL ] <= 0.0 ) { intrm_sf_mf_9 = 0.0
; } else { intrm_sf_mf_9 = X [ 202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } if (
X [ 203ULL ] <= 0.0 ) { t522 = 0.0 ; } else { t522 = X [ 203ULL ] >= 1.0 ?
1.0 : X [ 203ULL ] ; } t523 = ( ( ( 1.0 - intrm_sf_mf_9 ) - t522 ) *
296.802103844292 + intrm_sf_mf_9 * 461.523 ) + t522 * 4124.48151675695 ; if (
X [ 200ULL ] <= 216.59999999999997 ) { t488 = 216.59999999999997 ; } else {
t488 = X [ 200ULL ] >= 623.15 ? 623.15 : X [ 200ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power = t488 * t488 ;
t504 = ( ( ( 1074.1165326382641 + t488 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_9 ) - t522 ) + ( (
1479.6504774711011 + t488 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power * -
0.00038614513167823636 ) * intrm_sf_mf_9 ) + ( ( 12825.281119789837 + t488 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power * -
0.0070524868246844051 ) * t522 ; t488 = t504 - t523 ; intrm_sf_mf_9 =
pmf_sqrt ( fabs ( X [ 201ULL ] * X [ 201ULL ] * ( t504 / ( t488 == 0.0 ?
1.0E-16 : t488 ) ) / ( t523 == 0.0 ? 1.0E-16 : t523 ) / ( X [ 200ULL ] == 0.0
? 1.0E-16 : X [ 200ULL ] ) ) ) * t520 * 0.64 ; if ( - X [ 172ULL ] >= 0.0 ) {
t520 = - X [ 172ULL ] / ( intrm_sf_mf_9 == 0.0 ? 1.0E-16 : intrm_sf_mf_9 ) *
1.0E-5 ; } else { t520 = X [ 172ULL ] / ( intrm_sf_mf_9 == 0.0 ? 1.0E-16 :
intrm_sf_mf_9 ) * 1.0E-5 ; } if ( X [ 218ULL ] <= 0.0 ) { intrm_sf_mf_9 = 0.0
; } else { intrm_sf_mf_9 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if (
X [ 219ULL ] <= 0.0 ) { t522 = 0.0 ; } else { t522 = X [ 219ULL ] >= 1.0 ?
1.0 : X [ 219ULL ] ; } piece17 = ( ( ( ( 1.0 - intrm_sf_mf_9 ) - t522 ) *
296.802103844292 + intrm_sf_mf_9 * 461.523 ) + t522 * 259.836612622973 ) *
293.15 ; t523 = 1.01325 / ( piece17 == 0.0 ? 1.0E-16 : piece17 ) ; if ( X [
231ULL ] <= 0.0 ) { t504 = 0.0 ; } else { t504 = X [ 231ULL ] >= 1.0 ? 1.0 :
X [ 231ULL ] ; } if ( X [ 230ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power = X [ 230ULL ] >=
1.0 ? 1.0 : X [ 230ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( ( 1.0 -
t504 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) *
296.802103844292 + t504 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power * 259.836612622973
; t284 [ 0ULL ] = X [ 225ULL ] ; tlu2_linear_linear_prelookup ( & ab_efOut .
mField0 [ 0ULL ] , & ab_efOut . mField1 [ 0ULL ] , & ab_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t22 = ab_efOut ;
tlu2_1d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = bb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = cb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & db_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = db_efOut [ 0 ] ; t567 = X [
225ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
t571 = t567 / 1.01325 * ( - X [ 213ULL ] / 0.0019634954084936209 ) * ( - X [
213ULL ] / 0.0019634954084936209 ) * fabs ( t567 / 1.01325 ) ; t529 = t571 /
2.0 * 9.999999999999999E-14 + ( ( ( ( 1.0 - t504 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) * t372_idx_0 +
t360_idx_0 * t504 ) + t368_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) ; t284 [ 0ULL ]
= X [ 228ULL ] ; tlu2_linear_linear_prelookup ( & eb_efOut . mField0 [ 0ULL ]
, & eb_efOut . mField1 [ 0ULL ] , & eb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ]
, & t33 [ 0ULL ] ) ; t25 = eb_efOut ; tlu2_1d_linear_linear_value ( &
fb_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ]
) ; t372_idx_0 = fb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & gb_efOut [
0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t360_idx_0 = gb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & hb_efOut [
0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t368_idx_0 = hb_efOut [ 0 ] ; t488 = X [ 228ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t488 = t488
/ ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) * ( - X [ 213ULL ] /
0.0019634954084936209 ) * ( - X [ 213ULL ] / 0.0019634954084936209 ) * fabs (
t488 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) ; t530 = t488 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 - t504 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) * t372_idx_0 +
t360_idx_0 * t504 ) + t368_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) ; t284 [ 0ULL ]
= X [ 226ULL ] ; tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [ 0ULL ]
, & ib_efOut . mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ]
, & t33 [ 0ULL ] ) ; t12 = ib_efOut ; tlu2_1d_linear_linear_value ( &
jb_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ]
) ; t372_idx_0 = jb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & kb_efOut [
0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t360_idx_0 = kb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & lb_efOut [
0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t368_idx_0 = lb_efOut [ 0 ] ; t488 = X [ 226ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t488 = t488
/ ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) * ( X [ 213ULL ] /
0.0019634954084936209 ) * ( X [ 213ULL ] / 0.0019634954084936209 ) * fabs (
t488 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) ; t488 = t488 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 - t504 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) * t372_idx_0 +
t360_idx_0 * t504 ) + t368_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) ; t284 [ 0ULL ]
= X [ 227ULL ] ; tlu2_linear_linear_prelookup ( & mb_efOut . mField0 [ 0ULL ]
, & mb_efOut . mField1 [ 0ULL ] , & mb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ]
, & t33 [ 0ULL ] ) ; t22 = mb_efOut ; tlu2_1d_linear_linear_value ( &
nb_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ]
) ; t372_idx_0 = nb_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ob_efOut [
0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t360_idx_0 = ob_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pb_efOut [
0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t368_idx_0 = pb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *= X [ 227ULL
] ; t590 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 /
1.01325 * ( X [ 213ULL ] / 0.0019634954084936209 ) * ( X [ 213ULL ] /
0.0019634954084936209 ) * fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / 1.01325 ) ;
if ( - X [ 213ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power = - ( ( t530 -
t529 ) * X [ 213ULL ] ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power = ( ( t590 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 - t504 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) * t372_idx_0 +
t360_idx_0 * t504 ) + t368_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ) ) - t488 ) * X [
213ULL ] ; } t318 [ 0ULL ] = X [ 31ULL ] * 100000.0 ; t318 [ 1ULL ] = X [
32ULL ] ; t318 [ 2ULL ] = X [ 236ULL ] ; t318 [ 3ULL ] = X [ 34ULL ] ; t318 [
4ULL ] = X [ 238ULL ] ; t318 [ 5ULL ] = X [ 235ULL ] ; t318 [ 6ULL ] = X [
33ULL ] ; t318 [ 7ULL ] = X [ 237ULL ] ; for ( t405 = 0ULL ; t405 < 8ULL ;
t405 ++ ) { t301 [ t405 ] = t318 [ t405 ] ; } t284 [ 0ULL ] = X [ 32ULL ] ;
tlu2_linear_linear_prelookup ( & qb_efOut . mField0 [ 0ULL ] , & qb_efOut .
mField1 [ 0ULL ] , & qb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t25 = qb_efOut ; tlu2_1d_linear_linear_value ( & rb_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = rb_efOut [ 0
] ; t504 = t372_idx_0 ; if ( X [ 34ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 34ULL
] >= 1.0 ? 1.0 : X [ 34ULL ] ; } if ( X [ 33ULL ] <= 0.0 ) { t528 = 0.0 ; }
else { t528 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } t592 = X [ 32ULL ] *
( ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
) - t528 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t528 * 259.836612622973 ) ; t529 = X [ 31ULL ] / ( t592 == 0.0 ? 1.0E-16 :
t592 ) ; if ( 1.0 - X [ 34ULL ] >= 0.01 ) { t530 = 1.0 - X [ 34ULL ] ; } else
if ( 1.0 - X [ 34ULL ] >= - 0.1 ) { t530 = pmf_exp ( ( ( 1.0 - X [ 34ULL ] )
- 0.01 ) / 0.01 ) * 0.01 ; } else { t530 = 1.6701700790245661E-7 ; } t488 = X
[ 33ULL ] / ( t530 == 0.0 ? 1.0E-16 : t530 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t25
. mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = sb_efOut [
0 ] ; t530 = pmf_exp ( pmf_log ( X [ 31ULL ] * 100000.0 ) - t372_idx_0 ) ; if
( t530 >= 1.0 ) { t595 = ( t530 - 1.0 ) * 461.523 + t488 ; t532 = t488 / (
t595 == 0.0 ? 1.0E-16 : t595 ) ; } else { t532 = 1.0 ; } t452 = t532 * 0.01 ;
t530 = ( X [ 34ULL ] - t532 ) / ( t452 == 0.0 ? 1.0E-16 : t452 ) ; if ( X [
34ULL ] - t532 <= 0.0 ) { t530 = 0.0 ; } else if ( X [ 34ULL ] - t532 >= t532
* 0.01 ) { t530 = X [ 34ULL ] - t532 ; } else { t530 = ( X [ 34ULL ] - t532 )
* ( t530 * t530 * 3.0 - t530 * t530 * t530 * 2.0 ) ; } t530 = t529 * t530 *
0.0003 / 0.001 ; t530 *= 100000.0 ; tlu2_1d_linear_linear_value ( & tb_efOut
[ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ]
) ; t372_idx_0 = tb_efOut [ 0 ] ; t488 = t372_idx_0 ;
tlu2_1d_linear_linear_value ( & ub_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = ub_efOut [ 0 ] ; t533 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t528
) * t488 + t504 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + t372_idx_0
* t528 ; t528 = U_idx_3 * 376.99111843077515 ; if ( X [ 223ULL ] <= 0.0 ) {
t532 = 0.0 ; } else { t532 = X [ 223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if
( X [ 222ULL ] <= 0.0 ) { t534 = 0.0 ; } else { t534 = X [ 222ULL ] >= 1.0 ?
1.0 : X [ 222ULL ] ; } t488 = ( ( ( 1.0 - t532 ) - t534 ) * 296.802103844292
+ t532 * 461.523 ) + t534 * 259.836612622973 ; t532 = X [ 31ULL ] / ( t488 ==
0.0 ? 1.0E-16 : t488 ) / ( X [ 221ULL ] == 0.0 ? 1.0E-16 : X [ 221ULL ] ) ;
t532 = - X [ 213ULL ] / ( t532 == 0.0 ? 1.0E-16 : t532 ) * 10.0 ; t534 = - (
X [ 31ULL ] - 1.01325 ) * t532 * 0.0001 ; t536 = t528 * 0.99999999999999978 /
0.99999999999999978 ; t318 [ 0ULL ] = X [ 255ULL ] ; t318 [ 1ULL ] = X [
35ULL ] ; t318 [ 2ULL ] = X [ 257ULL ] ; t318 [ 3ULL ] = X [ 37ULL ] ; t318 [
4ULL ] = X [ 259ULL ] ; t318 [ 5ULL ] = X [ 256ULL ] ; t318 [ 6ULL ] = X [
36ULL ] ; t318 [ 7ULL ] = X [ 258ULL ] ; if ( X [ 37ULL ] <= 0.0 ) { t488 =
0.0 ; } else { t488 = X [ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } if ( X [
36ULL ] <= 0.0 ) { t504 = 0.0 ; } else { t504 = X [ 36ULL ] >= 1.0 ? 1.0 : X
[ 36ULL ] ; } t546 = ( ( ( 1.0 - t488 ) - t504 ) * 296.802103844292 + t488 *
461.523 ) + t504 * 4124.48151675695 ; if ( X [ 261ULL ] <= 216.59999999999997
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = X [ 261ULL ] >=
623.15 ? 623.15 : X [ 261ULL ] ; } t549 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ; t548 = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B
* - 0.2214565261064495 ) + t549 * 0.00037212980109014541 ) * ( ( 1.0 - t488 )
- t504 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B * 1.2002114337048222
) + t549 * - 0.00038614513167823636 ) * t488 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B * 6.9647057412840034
) + t549 * - 0.0070524868246844051 ) * t504 ; t616 = t548 - t546 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = t548 / ( t616 ==
0.0 ? 1.0E-16 : t616 ) ; if ( X [ 259ULL ] <= 0.0 ) { t548 = 0.0 ; } else {
t548 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; } if ( X [ 258ULL ] <= 0.0
) { t549 = 0.0 ; } else { t549 = X [ 258ULL ] >= 1.0 ? 1.0 : X [ 258ULL ] ; }
t284 [ 0ULL ] = X [ 35ULL ] ; tlu2_linear_nearest_prelookup ( & vb_efOut .
mField0 [ 0ULL ] , & vb_efOut . mField1 [ 0ULL ] , & vb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t25 = vb_efOut ;
tlu2_1d_linear_nearest_value ( & wb_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = wb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xb_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = xb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yb_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = yb_efOut [ 0 ] ; t550 = ( ( (
1.0 - t548 ) - t549 ) * t372_idx_0 + t360_idx_0 * t548 ) + t368_idx_0 * t549
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = - pmf_sqrt (
fabs ( X [ 262ULL ] * X [ 262ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B / ( t546 == 0.0 ?
1.0E-16 : t546 ) / ( X [ 261ULL ] == 0.0 ? 1.0E-16 : X [ 261ULL ] ) ) ) *
0.0019634954084936209 ; t464 = X [ 35ULL ] * t546 ; t548 = X [ 38ULL ] / (
t464 == 0.0 ? 1.0E-16 : t464 ) ; if ( X [ 264ULL ] <= 216.59999999999997 ) {
t549 = 216.59999999999997 ; } else { t549 = X [ 264ULL ] >= 623.15 ? 623.15 :
X [ 264ULL ] ; } t434 = t549 * t549 ; t551 = ( ( ( 1074.1165326382641 + t549
* - 0.2214565261064495 ) + t434 * 0.00037212980109014541 ) * ( ( 1.0 - t488 )
- t504 ) + ( ( 1479.6504774711011 + t549 * 1.2002114337048222 ) + t434 * -
0.00038614513167823636 ) * t488 ) + ( ( 12825.281119789837 + t549 *
6.9647057412840034 ) + t434 * - 0.0070524868246844051 ) * t504 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A = t551 - t546 ; t546
= - pmf_sqrt ( fabs ( X [ 265ULL ] * X [ 265ULL ] * ( t551 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A ) ) / ( t546 == 0.0
? 1.0E-16 : t546 ) / ( X [ 264ULL ] == 0.0 ? 1.0E-16 : X [ 264ULL ] ) ) ) *
0.0019634954084936209 ; if ( - X [ 186ULL ] >= 0.0 ) { t549 = X [ 186ULL ] /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ) * 1.0E-5 ; } else
{ t549 = - X [ 186ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ) * 1.0E-5 ; } if (
X [ 263ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = - X [ 263ULL ] / (
t546 == 0.0 ? 1.0E-16 : t546 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = X [ 263ULL ] / (
t546 == 0.0 ? 1.0E-16 : t546 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & ac_efOut . mField0 [ 0ULL ] , & ac_efOut .
mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t12 = ac_efOut ; tlu2_1d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = bc_efOut [ 0
] ; t546 = t372_idx_0 ; if ( 1.0 - X [ 37ULL ] >= 0.01 ) { t434 = 1.0 - X [
37ULL ] ; } else if ( 1.0 - X [ 37ULL ] >= - 0.1 ) { t434 = pmf_exp ( ( ( 1.0
- X [ 37ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t434 =
1.6701700790245661E-7 ; } t551 = X [ 36ULL ] / ( t434 == 0.0 ? 1.0E-16 : t434
) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
cc_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t372_idx_0 = cc_efOut [ 0 ] ; t434 = pmf_exp ( pmf_log ( X [ 38ULL ] *
100000.0 ) - t372_idx_0 ) ; if ( t434 >= 1.0 ) { t632 = ( t434 - 1.0 ) *
461.523 + t551 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B =
t551 / ( t632 == 0.0 ? 1.0E-16 : t632 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = 1.0 ; } t434 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B * 0.01 ; t551 = ( X
[ 37ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ) / (
t434 == 0.0 ? 1.0E-16 : t434 ) ; if ( X [ 37ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B <= 0.0 ) { t551 =
0.0 ; } else if ( X [ 37ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B * 0.01 ) { t551 = X
[ 37ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ; } else
{ t551 = ( X [ 37ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ) * ( t551 * t551 *
3.0 - t551 * t551 * t551 * 2.0 ) ; } t551 = t548 * t551 *
0.00049087385212340522 / 0.001 ; t551 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = dc_efOut [ 0 ] ; t434 =
t372_idx_0 ; tlu2_1d_linear_linear_value ( & ec_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = ec_efOut [ 0
] ; t554 = ( ( ( 1.0 - t488 ) - t504 ) * t434 + t546 * t488 ) + t372_idx_0 *
t504 ; if ( X [ 8ULL ] <= 0.0 ) { t504 = 0.0 ; } else { t504 = X [ 8ULL ] >=
1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t546 = 0.0 ; } else {
t546 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t434 = ( ( ( 1.0 - t504 ) -
t546 ) * 296.802103844292 + t504 * 461.523 ) + t546 * 4124.48151675695 ; if (
X [ 275ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = X [
275ULL ] >= 623.15 ? 623.15 : X [ 275ULL ] ; } t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ; t555 = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B
* - 0.2214565261064495 ) + t488 * 0.00037212980109014541 ) * ( ( 1.0 - t504 )
- t546 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B * 1.2002114337048222
) + t488 * - 0.00038614513167823636 ) * t504 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B * 6.9647057412840034
) + t488 * - 0.0070524868246844051 ) * t546 ; t488 = t555 - t434 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = t555 / ( t488 ==
0.0 ? 1.0E-16 : t488 ) ; if ( X [ 76ULL ] <= 0.0 ) { t555 = 0.0 ; } else {
t555 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; } if ( X [ 75ULL ] <= 0.0 ) {
t488 = 0.0 ; } else { t488 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } t284
[ 0ULL ] = X [ 6ULL ] ; tlu2_linear_nearest_prelookup ( & fc_efOut . mField0
[ 0ULL ] , & fc_efOut . mField1 [ 0ULL ] , & fc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL
] , & t33 [ 0ULL ] ) ; t22 = fc_efOut ; tlu2_1d_linear_nearest_value ( &
gc_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t372_idx_0 = gc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hc_efOut [
0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t360_idx_0 = hc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ic_efOut [
0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t368_idx_0 = ic_efOut [ 0 ] ; t557 = ( ( ( 1.0 - t555 ) - t488 ) *
t372_idx_0 + t360_idx_0 * t555 ) + t368_idx_0 * t488 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = - pmf_sqrt ( fabs
( X [ 276ULL ] * X [ 276ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B / ( t434 == 0.0 ?
1.0E-16 : t434 ) / ( X [ 275ULL ] == 0.0 ? 1.0E-16 : X [ 275ULL ] ) ) ) *
0.32 ; intrm_sf_mf_1318 = X [ 6ULL ] * t434 ; t555 = X [ 39ULL ] / (
intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) ; if ( X [ 278ULL ] <=
216.59999999999997 ) { t488 = 216.59999999999997 ; } else { t488 = X [ 278ULL
] >= 623.15 ? 623.15 : X [ 278ULL ] ; } t440 = t488 * t488 ; t558 = ( ( (
1074.1165326382641 + t488 * - 0.2214565261064495 ) + t440 *
0.00037212980109014541 ) * ( ( 1.0 - t504 ) - t546 ) + ( ( 1479.6504774711011
+ t488 * 1.2002114337048222 ) + t440 * - 0.00038614513167823636 ) * t504 ) +
( ( 12825.281119789837 + t488 * 6.9647057412840034 ) + t440 * -
0.0070524868246844051 ) * t546 ; t643 = t558 - t434 ; t434 = - pmf_sqrt (
fabs ( X [ 279ULL ] * X [ 279ULL ] * ( t558 / ( t643 == 0.0 ? 1.0E-16 : t643
) ) / ( t434 == 0.0 ? 1.0E-16 : t434 ) / ( X [ 278ULL ] == 0.0 ? 1.0E-16 : X
[ 278ULL ] ) ) ) * 0.32 ; if ( - X [ 263ULL ] >= 0.0 ) { t558 = X [ 263ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ) * 1.0E-5 ; }
else { t558 = - X [ 263ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ) * 1.0E-5 ; } if (
X [ 277ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = - X [ 277ULL ] / (
t434 == 0.0 ? 1.0E-16 : t434 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B = X [ 277ULL ] / (
t434 == 0.0 ? 1.0E-16 : t434 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 6ULL ] ;
tlu2_linear_linear_prelookup ( & jc_efOut . mField0 [ 0ULL ] , & jc_efOut .
mField1 [ 0ULL ] , & jc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t12 = jc_efOut ; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = kc_efOut [ 0
] ; t434 = t372_idx_0 ; if ( 1.0 - X [ 8ULL ] >= 0.01 ) { t488 = 1.0 - X [
8ULL ] ; } else if ( 1.0 - X [ 8ULL ] >= - 0.1 ) { t488 = pmf_exp ( ( ( 1.0 -
X [ 8ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t488 = 1.6701700790245661E-7
; } t440 = X [ 7ULL ] / ( t488 == 0.0 ? 1.0E-16 : t488 ) * 3827.6794129126583
+ 296.802103844292 ; tlu2_1d_linear_linear_value ( & lc_efOut [ 0ULL ] , &
t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 =
lc_efOut [ 0 ] ; t488 = pmf_exp ( pmf_log ( X [ 39ULL ] * 100000.0 ) -
t372_idx_0 ) ; if ( t488 >= 1.0 ) { t916 = ( t488 - 1.0 ) * 461.523 + t440 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t440 / (
t916 == 0.0 ? 1.0E-16 : t916 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0 ; } t777
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01 ;
t440 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) / ( t777 ==
0.0 ? 1.0E-16 : t777 ) ; if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 <= 0.0 ) {
t440 = 0.0 ; } else if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01 ) {
t440 = X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; } else {
t440 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * ( t440 *
t440 * 3.0 - t440 * t440 * t440 * 2.0 ) ; } t440 = t555 * t440 *
0.026773120849090417 / 0.001 ; t440 *= 100000.0 ; tlu2_1d_linear_linear_value
( & mc_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [
0ULL ] ) ; t372_idx_0 = mc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t372_idx_0 ;
tlu2_1d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = nc_efOut [ 0 ] ; t563 = ( ( (
1.0 - t504 ) - t546 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 + t434 * t504
) + t372_idx_0 * t546 ; if ( X [ 11ULL ] <= 0.0 ) { t546 = 0.0 ; } else {
t546 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) {
t434 = 0.0 ; } else { t434 = X [ 10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( ( 1.0 -
t546 ) - t434 ) * 296.802103844292 + t546 * 461.523 ) + t434 *
4124.48151675695 ; if ( X [ 289ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke = X [ 289ULL
] >= 623.15 ? 623.15 : X [ 289ULL ] ; } t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke * -
0.2214565261064495 ) + t488 * 0.00037212980109014541 ) * ( ( 1.0 - t546 ) -
t434 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke *
1.2002114337048222 ) + t488 * - 0.00038614513167823636 ) * t546 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke *
6.9647057412840034 ) + t488 * - 0.0070524868246844051 ) * t434 ; t916 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I / ( t916 == 0.0 ?
1.0E-16 : t916 ) ; if ( X [ 81ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I = X [ 81ULL ] >= 1.0
? 1.0 : X [ 81ULL ] ; } if ( X [ 80ULL ] <= 0.0 ) { t488 = 0.0 ; } else {
t488 = X [ 80ULL ] >= 1.0 ? 1.0 : X [ 80ULL ] ; } t284 [ 0ULL ] = X [ 9ULL ]
; tlu2_linear_nearest_prelookup ( & oc_efOut . mField0 [ 0ULL ] , & oc_efOut
. mField1 [ 0ULL ] , & oc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = oc_efOut ; tlu2_1d_linear_nearest_value ( & pc_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = pc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & qc_efOut [ 0ULL ] , & t22 . mField0 [
0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = qc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rc_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = rc_efOut [ 0 ] ; piece17 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ) - t488 )
* t372_idx_0 + t360_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I ) + t368_idx_0 *
t488 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke = -
pmf_sqrt ( fabs ( X [ 290ULL ] * X [ 290ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) /
( X [ 289ULL ] == 0.0 ? 1.0E-16 : X [ 289ULL ] ) ) ) * 0.32 ; t777 = X [ 9ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I = X [ 40ULL ] / (
t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [ 291ULL ] <= 216.59999999999997 ) {
t488 = 216.59999999999997 ; } else { t488 = X [ 291ULL ] >= 623.15 ? 623.15 :
X [ 291ULL ] ; } t504 = t488 * t488 ; t567 = ( ( ( 1074.1165326382641 + t488
* - 0.2214565261064495 ) + t504 * 0.00037212980109014541 ) * ( ( 1.0 - t546 )
- t434 ) + ( ( 1479.6504774711011 + t488 * 1.2002114337048222 ) + t504 * -
0.00038614513167823636 ) * t546 ) + ( ( 12825.281119789837 + t488 *
6.9647057412840034 ) + t504 * - 0.0070524868246844051 ) * t434 ; t916 = t567
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = - pmf_sqrt (
fabs ( X [ 292ULL ] * X [ 292ULL ] * ( t567 / ( t916 == 0.0 ? 1.0E-16 : t916
) ) / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0
? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 )
/ ( X [ 291ULL ] == 0.0 ? 1.0E-16 : X [ 291ULL ] ) ) ) * 0.32 ; if ( - X [
277ULL ] >= 0.0 ) { t567 = X [ 277ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke ) *
1.0E-5 ; } else { t567 = - X [ 277ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke ) *
1.0E-5 ; } if ( - X [ 134ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke = X [ 134ULL
] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke = - X [
134ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * 1.0E-5 ; }
t284 [ 0ULL ] = X [ 9ULL ] ; tlu2_linear_linear_prelookup ( & sc_efOut .
mField0 [ 0ULL ] , & sc_efOut . mField1 [ 0ULL ] , & sc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t22 = sc_efOut ;
tlu2_1d_linear_linear_value ( & tc_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = tc_efOut [ 0 ] ; t504 =
t372_idx_0 ; if ( 1.0 - X [ 11ULL ] >= 0.01 ) { t488 = 1.0 - X [ 11ULL ] ; }
else if ( 1.0 - X [ 11ULL ] >= - 0.1 ) { t488 = pmf_exp ( ( ( 1.0 - X [ 11ULL
] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t488 = 1.6701700790245661E-7 ; } t571
= X [ 10ULL ] / ( t488 == 0.0 ? 1.0E-16 : t488 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & uc_efOut [ 0ULL ] , & t22
. mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = uc_efOut [
0 ] ; t488 = pmf_exp ( pmf_log ( X [ 40ULL ] * 100000.0 ) - t372_idx_0 ) ; if
( t488 >= 1.0 ) { t916 = ( t488 - 1.0 ) * 461.523 + t571 ; t488 = t571 / (
t916 == 0.0 ? 1.0E-16 : t916 ) ; } else { t488 = 1.0 ; } t777 = t488 * 0.01 ;
t571 = ( X [ 11ULL ] - t488 ) / ( t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [
11ULL ] - t488 <= 0.0 ) { t571 = 0.0 ; } else if ( X [ 11ULL ] - t488 >= t488
* 0.01 ) { t571 = X [ 11ULL ] - t488 ; } else { t571 = ( X [ 11ULL ] - t488 )
* ( t571 * t571 * 3.0 - t571 * t571 * t571 * 2.0 ) ; } t571 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I * t571 *
0.026773120849090417 / 0.001 ; t571 *= 100000.0 ; tlu2_1d_linear_linear_value
( & vc_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [
0ULL ] ) ; t372_idx_0 = vc_efOut [ 0 ] ; t488 = t372_idx_0 ;
tlu2_1d_linear_linear_value ( & wc_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = wc_efOut [ 0 ] ; t581 = ( ( (
1.0 - t546 ) - t434 ) * t488 + t504 * t546 ) + t372_idx_0 * t434 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 0ULL ] = X
[ 304ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 1ULL ] = X [ 41ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 2ULL ] = X
[ 306ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 3ULL ] = X [ 43ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 4ULL ] = X
[ 308ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 5ULL ] = X [ 305ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 6ULL ] = X
[ 42ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [
7ULL ] = X [ 307ULL ] ; if ( X [ 43ULL ] <= 0.0 ) { t488 = 0.0 ; } else {
t488 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 42ULL
] >= 1.0 ? 1.0 : X [ 42ULL ] ; } t590 = ( ( ( 1.0 - t488 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
296.802103844292 + t488 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
259.836612622973 ; if ( X [ 310ULL ] <= 216.59999999999997 ) { t592 =
216.59999999999997 ; } else { t592 = X [ 310ULL ] >= 623.15 ? 623.15 : X [
310ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = t592
* t592 ; t593 = ( ( ( 1074.1165326382641 + t592 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A *
0.00037212980109014541 ) * ( ( 1.0 - t488 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
1479.6504774711011 + t592 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A * -
0.00038614513167823636 ) * t488 ) + ( ( 900.63941224838356 + t592 * -
0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t916 = t593
- t590 ; t592 = t593 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ; if ( X [ 308ULL ]
<= 0.0 ) { t593 = 0.0 ; } else { t593 = X [ 308ULL ] >= 1.0 ? 1.0 : X [
308ULL ] ; } if ( X [ 307ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = X [ 307ULL ] >=
1.0 ? 1.0 : X [ 307ULL ] ; } t284 [ 0ULL ] = X [ 41ULL ] ;
tlu2_linear_nearest_prelookup ( & xc_efOut . mField0 [ 0ULL ] , & xc_efOut .
mField1 [ 0ULL ] , & xc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t19 = xc_efOut ; tlu2_1d_linear_nearest_value ( & yc_efOut [ 0ULL ] , & t19 .
mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = yc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ad_efOut [ 0ULL ] , & t19 . mField0 [
0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = ad_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bd_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL ]
, & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = bd_efOut [ 0 ] ; t595 = ( (
( 1.0 - t593 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A ) *
t372_idx_0 + t360_idx_0 * t593 ) + t368_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A ; t592 = - pmf_sqrt
( fabs ( X [ 311ULL ] * X [ 311ULL ] * t592 / ( t590 == 0.0 ? 1.0E-16 : t590
) / ( X [ 310ULL ] == 0.0 ? 1.0E-16 : X [ 310ULL ] ) ) ) *
0.0019634954084936209 ; t777 = X [ 41ULL ] * t590 ; t593 = X [ 44ULL ] / (
t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [ 313ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = X [
313ULL ] >= 623.15 ? 623.15 : X [ 313ULL ] ; } t452 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A
* - 0.2214565261064495 ) + t452 * 0.00037212980109014541 ) * ( ( 1.0 - t488 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
1479.6504774711011 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A
* 1.2002114337048222 ) + t452 * - 0.00038614513167823636 ) * t488 ) + ( (
900.63941224838356 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A
* - 0.044484923911382625 ) + t452 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t916 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W - t590 ; t590 = -
pmf_sqrt ( fabs ( X [ 314ULL ] * X [ 314ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W / ( t916 == 0.0 ? 1.0E-16
: t916 ) ) / ( t590 == 0.0 ? 1.0E-16 : t590 ) / ( X [ 313ULL ] == 0.0 ?
1.0E-16 : X [ 313ULL ] ) ) ) * 0.0019634954084936209 ; if ( - X [ 244ULL ] >=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = X [ 244ULL
] / ( t592 == 0.0 ? 1.0E-16 : t592 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A = - X [ 244ULL ] / (
t592 == 0.0 ? 1.0E-16 : t592 ) * 1.0E-5 ; } if ( X [ 312ULL ] >= 0.0 ) { t592
= - X [ 312ULL ] / ( t590 == 0.0 ? 1.0E-16 : t590 ) * 1.0E-5 ; } else { t592
= X [ 312ULL ] / ( t590 == 0.0 ? 1.0E-16 : t590 ) * 1.0E-5 ; } t284 [ 0ULL ]
= X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & cd_efOut . mField0 [ 0ULL ]
, & cd_efOut . mField1 [ 0ULL ] , & cd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ]
, & t33 [ 0ULL ] ) ; t19 = cd_efOut ; tlu2_1d_linear_linear_value ( &
dd_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] )
; t372_idx_0 = dd_efOut [ 0 ] ; t590 = t372_idx_0 ; if ( 1.0 - X [ 43ULL ] >=
0.01 ) { t452 = 1.0 - X [ 43ULL ] ; } else if ( 1.0 - X [ 43ULL ] >= - 0.1 )
{ t452 = pmf_exp ( ( ( 1.0 - X [ 43ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else
{ t452 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = X [ 42ULL ] / ( t452 ==
0.0 ? 1.0E-16 : t452 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & ed_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL ]
, & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = ed_efOut [ 0 ] ; t452 =
pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t372_idx_0 ) ; if ( t452 >=
1.0 ) { t916 = ( t452 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W ; t598 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W / ( t916 == 0.0 ? 1.0E-16
: t916 ) ; } else { t598 = 1.0 ; } t777 = t598 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = ( X [ 43ULL ] - t598 )
/ ( t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [ 43ULL ] - t598 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = 0.0 ; } else if ( X [
43ULL ] - t598 >= t598 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = X [ 43ULL ] - t598 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = ( X [ 43ULL ] -
t598 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W = t593 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W * 0.00049087385212340522
/ 0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & fd_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL ]
, & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = fd_efOut [ 0 ] ; t452 =
t372_idx_0 ; tlu2_1d_linear_linear_value ( & gd_efOut [ 0ULL ] , & t19 .
mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = gd_efOut [ 0
] ; t599 = ( ( ( 1.0 - t488 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * t452 +
t590 * t488 ) + t372_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; if ( X [
340ULL ] <= 0.0 ) { t590 = 0.0 ; } else { t590 = X [ 340ULL ] >= 1.0 ? 1.0 :
X [ 340ULL ] ; } if ( X [ 341ULL ] <= 0.0 ) { t452 = 0.0 ; } else { t452 = X
[ 341ULL ] >= 1.0 ? 1.0 : X [ 341ULL ] ; } t916 = ( ( ( ( 1.0 - t590 ) - t452
) * 296.802103844292 + t590 * 461.523 ) + t452 * 259.836612622973 ) * 293.15
; t598 = 1.01325 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ; t602 = ( X [ 344ULL ] *
0.07812500122070315 + U_idx_8 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
47ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 47ULL
] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) { t504 = 0.0 ; }
else { t504 = X [ 48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } t606 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t504 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t504 * 259.836612622973 ; if ( X [ 348ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B = X [
348ULL ] >= 623.15 ? 623.15 : X [ 348ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B ; t608 = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B
* - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t504 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B * 1.2002114337048222
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B
* - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A *
0.00036936011832044979 ) * t504 ; t916 = t608 - t606 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B = t608 / ( t916 ==
0.0 ? 1.0E-16 : t916 ) ; if ( X [ 350ULL ] <= 0.0 ) { t608 = 0.0 ; } else {
t608 = X [ 350ULL ] >= 1.0 ? 1.0 : X [ 350ULL ] ; } if ( X [ 351ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A = X [ 351ULL ] >=
1.0 ? 1.0 : X [ 351ULL ] ; } t284 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_nearest_prelookup ( & hd_efOut . mField0 [ 0ULL ] , & hd_efOut .
mField1 [ 0ULL ] , & hd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = hd_efOut ; tlu2_1d_linear_nearest_value ( & id_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = id_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & jd_efOut [ 0ULL ] , & t22 . mField0 [
0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = jd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = kd_efOut [ 0 ] ;
intrm_sf_mf_1311 = ( ( ( 1.0 - t608 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A ) * t372_idx_0 +
t360_idx_0 * t608 ) + t368_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B = - pmf_sqrt ( fabs
( X [ 349ULL ] * X [ 349ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B / ( t606 == 0.0 ?
1.0E-16 : t606 ) / ( X [ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) ) *
0.0019634954084936209 ; t777 = X [ 45ULL ] * t606 ; t608 = X [ 46ULL ] / (
t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [ 352ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A = X [
352ULL ] >= 623.15 ? 623.15 : X [ 352ULL ] ; } t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A ; intrm_sf_mf_1107 =
( ( ( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A * -
0.2214565261064495 ) + t488 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t504 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A * 1.2002114337048222
) + t488 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A
* - 0.044484923911382625 ) + t488 * 0.00036936011832044979 ) * t504 ; t916 =
intrm_sf_mf_1107 - t606 ; t606 = - pmf_sqrt ( fabs ( X [ 353ULL ] * X [
353ULL ] * ( intrm_sf_mf_1107 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) / ( t606
== 0.0 ? 1.0E-16 : t606 ) / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] )
) ) * 0.0019634954084936209 ; t354 [ 0ULL ] = X [ 46ULL ] * 100000.0 ; t354 [
1ULL ] = X [ 45ULL ] ; t354 [ 2ULL ] = X [ 355ULL ] ; t354 [ 3ULL ] = X [
47ULL ] ; t354 [ 4ULL ] = X [ 350ULL ] ; t354 [ 5ULL ] = X [ 354ULL ] ; t354
[ 6ULL ] = X [ 48ULL ] ; t354 [ 7ULL ] = X [ 351ULL ] ; for ( t405 = 0ULL ;
t405 < 8ULL ; t405 ++ ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F
[ t405 ] = t354 [ t405 ] ; } if ( X [ 347ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A = - X [ 347ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B ) * 1.0E-5 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A = X [ 347ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B ) * 1.0E-5 ; } if (
- X [ 335ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B = X [ 335ULL ] / (
t606 == 0.0 ? 1.0E-16 : t606 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B = - X [ 335ULL ] / (
t606 == 0.0 ? 1.0E-16 : t606 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & ld_efOut . mField0 [ 0ULL ] , & ld_efOut .
mField1 [ 0ULL ] , & ld_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t12 = ld_efOut ; tlu2_1d_linear_linear_value ( & md_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = md_efOut [ 0
] ; t606 = t372_idx_0 ; if ( 1.0 - X [ 47ULL ] >= 0.01 ) { t488 = 1.0 - X [
47ULL ] ; } else if ( 1.0 - X [ 47ULL ] >= - 0.1 ) { t488 = pmf_exp ( ( ( 1.0
- X [ 47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t488 =
1.6701700790245661E-7 ; } intrm_sf_mf_1107 = X [ 48ULL ] / ( t488 == 0.0 ?
1.0E-16 : t488 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & nd_efOut [ 0ULL ] , & t12 . mField0 [ 0ULL ]
, & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = nd_efOut [ 0 ] ; t488 =
pmf_exp ( pmf_log ( X [ 46ULL ] * 100000.0 ) - t372_idx_0 ) ; if ( t488 >=
1.0 ) { t916 = ( t488 - 1.0 ) * 461.523 + intrm_sf_mf_1107 ; t613 =
intrm_sf_mf_1107 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ; } else { t613 = 1.0 ; }
t777 = t613 * 0.01 ; intrm_sf_mf_1107 = ( X [ 47ULL ] - t613 ) / ( t777 ==
0.0 ? 1.0E-16 : t777 ) ; if ( X [ 47ULL ] - t613 <= 0.0 ) { intrm_sf_mf_1107
= 0.0 ; } else if ( X [ 47ULL ] - t613 >= t613 * 0.01 ) { intrm_sf_mf_1107 =
X [ 47ULL ] - t613 ; } else { intrm_sf_mf_1107 = ( X [ 47ULL ] - t613 ) * (
intrm_sf_mf_1107 * intrm_sf_mf_1107 * 3.0 - intrm_sf_mf_1107 *
intrm_sf_mf_1107 * intrm_sf_mf_1107 * 2.0 ) ; } intrm_sf_mf_1107 = t608 *
intrm_sf_mf_1107 * 0.0019634954084936209 / 0.001 ; intrm_sf_mf_1107 *=
100000.0 ; tlu2_1d_linear_linear_value ( & od_efOut [ 0ULL ] , & t12 .
mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = od_efOut [
0 ] ; t488 = t372_idx_0 ; tlu2_1d_linear_linear_value ( & pd_efOut [ 0ULL ] ,
& t12 . mField0 [ 0ULL ] , & t12 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField6 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 =
pd_efOut [ 0 ] ; t614 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t504 ) *
t488 + t606 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
) + t372_idx_0 * t504 ; t606 = U_idx_8 * 10.0 ; if ( X [ 344ULL ] *
0.0019634954084936209 <= 1.9634954084936209E-11 ) { t613 =
1.9634954084936209E-11 ; } else if ( X [ 344ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) { t613 = 0.0012566370614359179 ; } else { t613 = X [
344ULL ] * 0.0019634954084936209 ; } if ( X [ 367ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 367ULL
] >= 1.0 ? 1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0 ) { t616 = 0.0 ; }
else { t616 = X [ 368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ; } t617 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t616 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t616 * 259.836612622973 ; if ( X [ 365ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked = X [ 365ULL
] >= 623.15 ? 623.15 : X [ 365ULL ] ; } t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked ; t619 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked * -
0.2214565261064495 ) + t488 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t616 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked *
1.2002114337048222 ) + t488 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked * -
0.044484923911382625 ) + t488 * 0.00036936011832044979 ) * t616 ; t916 = t619
- t617 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
pmf_sqrt ( fabs ( X [ 366ULL ] * X [ 366ULL ] * ( t619 / ( t916 == 0.0 ?
1.0E-16 : t916 ) ) / ( t617 == 0.0 ? 1.0E-16 : t617 ) / ( X [ 365ULL ] == 0.0
? 1.0E-16 : X [ 365ULL ] ) ) ) * t613 * 0.64 ; if ( X [ 335ULL ] >= 0.0 ) {
t613 = X [ 335ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } else { t613 = - X [ 335ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } if ( X [ 14ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 14ULL
] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { t616 = 0.0 ; }
else { t616 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; } t617 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t616 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t616 * 259.836612622973 ; if ( X [ 372ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked = X [ 372ULL
] >= 623.15 ? 623.15 : X [ 372ULL ] ; } t464 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked ; t619 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked * -
0.2214565261064495 ) + t464 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t616 ) + (
( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked *
1.2002114337048222 ) + t464 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked * -
0.044484923911382625 ) + t464 * 0.00036936011832044979 ) * t616 ; t916 = t619
- t617 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked =
t619 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ; if ( X [ 86ULL ] <= 0.0 ) { t619 =
0.0 ; } else { t619 = X [ 86ULL ] >= 1.0 ? 1.0 : X [ 86ULL ] ; } if ( X [
85ULL ] <= 0.0 ) { t488 = 0.0 ; } else { t488 = X [ 85ULL ] >= 1.0 ? 1.0 : X
[ 85ULL ] ; } t284 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_nearest_prelookup ( &
qd_efOut . mField0 [ 0ULL ] , & qd_efOut . mField1 [ 0ULL ] , & qd_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [
0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t22 = qd_efOut ;
tlu2_1d_linear_nearest_value ( & rd_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = rd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sd_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = sd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & td_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = td_efOut [ 0 ] ; t464 = ( (
( 1.0 - t619 ) - t488 ) * t372_idx_0 + t360_idx_0 * t619 ) + t368_idx_0 *
t488 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked = -
pmf_sqrt ( fabs ( X [ 373ULL ] * X [ 373ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked / ( t617 ==
0.0 ? 1.0E-16 : t617 ) / ( X [ 372ULL ] == 0.0 ? 1.0E-16 : X [ 372ULL ] ) ) )
* 0.32 ; t777 = X [ 12ULL ] * t617 ; t619 = X [ 49ULL ] / ( t777 == 0.0 ?
1.0E-16 : t777 ) ; if ( X [ 375ULL ] <= 216.59999999999997 ) { t488 =
216.59999999999997 ; } else { t488 = X [ 375ULL ] >= 623.15 ? 623.15 : X [
375ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden
= t488 * t488 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A = (
( ( 1074.1165326382641 + t488 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t616 ) + (
( 1479.6504774711011 + t488 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + t488 * - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
0.00036936011832044979 ) * t616 ; t916 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A - t617 ; t617 = -
pmf_sqrt ( fabs ( X [ 376ULL ] * X [ 376ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A / ( t916 == 0.0 ?
1.0E-16 : t916 ) ) / ( t617 == 0.0 ? 1.0E-16 : t617 ) / ( X [ 375ULL ] == 0.0
? 1.0E-16 : X [ 375ULL ] ) ) ) * 0.32 ; if ( - X [ 312ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A = X [ 312ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked ) *
1.0E-5 ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A =
- X [ 312ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked ) *
1.0E-5 ; } if ( X [ 374ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked = - X [
374ULL ] / ( t617 == 0.0 ? 1.0E-16 : t617 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked = X [ 374ULL
] / ( t617 == 0.0 ? 1.0E-16 : t617 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 12ULL ]
; tlu2_linear_linear_prelookup ( & ud_efOut . mField0 [ 0ULL ] , & ud_efOut .
mField1 [ 0ULL ] , & ud_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = ud_efOut ; tlu2_1d_linear_linear_value ( & vd_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = vd_efOut [ 0
] ; t617 = t372_idx_0 ; if ( 1.0 - X [ 14ULL ] >= 0.01 ) { t488 = 1.0 - X [
14ULL ] ; } else if ( 1.0 - X [ 14ULL ] >= - 0.1 ) { t488 = pmf_exp ( ( ( 1.0
- X [ 14ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t488 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = X [ 13ULL ]
/ ( t488 == 0.0 ? 1.0E-16 : t488 ) * - 36.965491221318985 + 296.802103844292
; tlu2_1d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL
] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = wd_efOut [ 0 ] ; t488 =
pmf_exp ( pmf_log ( X [ 49ULL ] * 100000.0 ) - t372_idx_0 ) ; if ( t488 >=
1.0 ) { t916 = ( t488 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden ; t504 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden / ( t916 ==
0.0 ? 1.0E-16 : t916 ) ; } else { t504 = 1.0 ; } t777 = t504 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = ( X [ 14ULL
] - t504 ) / ( t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [ 14ULL ] - t504 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = 0.0
; } else if ( X [ 14ULL ] - t504 >= t504 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = X [ 14ULL ]
- t504 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = ( X [ 14ULL
] - t504 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = t619 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *= 100000.0 ;
tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = xd_efOut [ 0 ] ; t504 =
t372_idx_0 ; tlu2_1d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t22 .
mField0 [ 0ULL ] , & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = yd_efOut [ 0
] ; t627 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t616 ) *
t504 + t617 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
) + t372_idx_0 * t616 ; if ( X [ 17ULL ] <= 0.0 ) { t616 = 0.0 ; } else {
t616 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) {
t617 = 0.0 ; } else { t617 = X [ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } t504
= ( ( ( 1.0 - t616 ) - t617 ) * 296.802103844292 + t616 * 461.523 ) + t617 *
259.836612622973 ; if ( X [ 386ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B = X [ 386ULL ] >=
623.15 ? 623.15 : X [ 386ULL ] ; } t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B ; t628 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B * -
0.2214565261064495 ) + t488 * 0.00037212980109014541 ) * ( ( 1.0 - t616 ) -
t617 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B *
1.2002114337048222 ) + t488 * - 0.00038614513167823636 ) * t616 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B * -
0.044484923911382625 ) + t488 * 0.00036936011832044979 ) * t617 ; t916 = t628
- t504 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B = t628 / (
t916 == 0.0 ? 1.0E-16 : t916 ) ; if ( X [ 91ULL ] <= 0.0 ) { t628 = 0.0 ; }
else { t628 = X [ 91ULL ] >= 1.0 ? 1.0 : X [ 91ULL ] ; } if ( X [ 90ULL ] <=
0.0 ) { t488 = 0.0 ; } else { t488 = X [ 90ULL ] >= 1.0 ? 1.0 : X [ 90ULL ] ;
} t284 [ 0ULL ] = X [ 15ULL ] ; tlu2_linear_nearest_prelookup ( & ae_efOut .
mField0 [ 0ULL ] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t284 [ 0ULL ] , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t22 = ae_efOut ;
tlu2_1d_linear_nearest_value ( & be_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = be_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ce_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t360_idx_0 = ce_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & de_efOut [ 0ULL ] , & t22 . mField0 [ 0ULL ]
, & t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t368_idx_0 = de_efOut [ 0 ] ; t630 = ( (
( 1.0 - t628 ) - t488 ) * t372_idx_0 + t360_idx_0 * t628 ) + t368_idx_0 *
t488 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B = - pmf_sqrt
( fabs ( X [ 387ULL ] * X [ 387ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B / ( t504 == 0.0 ?
1.0E-16 : t504 ) / ( X [ 386ULL ] == 0.0 ? 1.0E-16 : X [ 386ULL ] ) ) ) *
0.32 ; t777 = X [ 15ULL ] * t504 ; t628 = X [ 50ULL ] / ( t777 == 0.0 ?
1.0E-16 : t777 ) ; if ( X [ 388ULL ] <= 216.59999999999997 ) { t488 =
216.59999999999997 ; } else { t488 = X [ 388ULL ] >= 623.15 ? 623.15 : X [
388ULL ] ; } t632 = t488 * t488 ; t631 = ( ( ( 1074.1165326382641 + t488 * -
0.2214565261064495 ) + t632 * 0.00037212980109014541 ) * ( ( 1.0 - t616 ) -
t617 ) + ( ( 1479.6504774711011 + t488 * 1.2002114337048222 ) + t632 * -
0.00038614513167823636 ) * t616 ) + ( ( 900.63941224838356 + t488 * -
0.044484923911382625 ) + t632 * 0.00036936011832044979 ) * t617 ; t916 = t631
- t504 ; t504 = - pmf_sqrt ( fabs ( X [ 389ULL ] * X [ 389ULL ] * ( t631 / (
t916 == 0.0 ? 1.0E-16 : t916 ) ) / ( t504 == 0.0 ? 1.0E-16 : t504 ) / ( X [
388ULL ] == 0.0 ? 1.0E-16 : X [ 388ULL ] ) ) ) * 0.32 ; if ( - X [ 374ULL ]
>= 0.0 ) { t631 = X [ 374ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B ) * 1.0E-5 ; } else
{ t631 = - X [ 374ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B ) * 1.0E-5 ; } if (
- X [ 347ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B = X [ 347ULL ] / (
t504 == 0.0 ? 1.0E-16 : t504 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B = - X [ 347ULL ] /
( t504 == 0.0 ? 1.0E-16 : t504 ) * 1.0E-5 ; } t284 [ 0ULL ] = X [ 15ULL ] ;
tlu2_linear_linear_prelookup ( & ee_efOut . mField0 [ 0ULL ] , & ee_efOut .
mField1 [ 0ULL ] , & ee_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t25 = ee_efOut ; tlu2_1d_linear_linear_value ( & fe_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = fe_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
t372_idx_0 ; if ( 1.0 - X [ 17ULL ] >= 0.01 ) { t488 = 1.0 - X [ 17ULL ] ; }
else if ( 1.0 - X [ 17ULL ] >= - 0.1 ) { t488 = pmf_exp ( ( ( 1.0 - X [ 17ULL
] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t488 = 1.6701700790245661E-7 ; } t632
= X [ 16ULL ] / ( t488 == 0.0 ? 1.0E-16 : t488 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & ge_efOut [ 0ULL ] , & t25
. mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = ge_efOut [
0 ] ; t488 = pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t372_idx_0 ) ; if
( t488 >= 1.0 ) { t916 = ( t488 - 1.0 ) * 461.523 + t632 ; t434 = t632 / (
t916 == 0.0 ? 1.0E-16 : t916 ) ; } else { t434 = 1.0 ; } t777 = t434 * 0.01 ;
t632 = ( X [ 17ULL ] - t434 ) / ( t777 == 0.0 ? 1.0E-16 : t777 ) ; if ( X [
17ULL ] - t434 <= 0.0 ) { t632 = 0.0 ; } else if ( X [ 17ULL ] - t434 >= t434
* 0.01 ) { t632 = X [ 17ULL ] - t434 ; } else { t632 = ( X [ 17ULL ] - t434 )
* ( t632 * t632 * 3.0 - t632 * t632 * t632 * 2.0 ) ; } t632 = t628 * t632 *
0.026773120849090417 / 0.001 ; t632 *= 100000.0 ; tlu2_1d_linear_linear_value
( & he_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t275 [ 0ULL ] , & t33 [
0ULL ] ) ; t372_idx_0 = he_efOut [ 0 ] ; t434 = t372_idx_0 ;
tlu2_1d_linear_linear_value ( & ie_efOut [ 0ULL ] , & t25 . mField0 [ 0ULL ]
, & t25 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t275 [ 0ULL ] , & t33 [ 0ULL ] ) ; t372_idx_0 = ie_efOut [ 0 ] ; t636 = ( ( (
1.0 - t616 ) - t617 ) * t434 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * t616 ) +
t372_idx_0 * t617 ; t617 = ( ( ( ( X [ 3ULL ] * 0.1 - X [ 57ULL ] ) + X [
58ULL ] * - 0.1 ) + X [ 61ULL ] * 1.0E-9 ) - X [ 63ULL ] ) + X [ 4ULL ] ;
t284 [ 0ULL ] = X [ 51ULL ] ; t275 [ 0 ] = 23ULL ;
tlu2_linear_nearest_prelookup ( & je_efOut . mField0 [ 0ULL ] , & je_efOut .
mField1 [ 0ULL ] , & je_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t284 [ 0ULL ] , & t275 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t25 = je_efOut ; t284 [ 0ULL ] = X [ 396ULL ] ; t278 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & ke_efOut . mField0 [ 0ULL ] , & ke_efOut .
mField1 [ 0ULL ] , & ke_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField22 , & t284 [ 0ULL ] , & t278 [ 0ULL ] , & t33 [ 0ULL ] ) ;
t22 = ke_efOut ; tlu2_2d_linear_nearest_value ( & le_efOut [ 0ULL ] , & t25 .
mField0 [ 0ULL ] , & t25 . mField2 [ 0ULL ] , & t22 . mField0 [ 0ULL ] , &
t22 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t275 [ 0ULL ] , & t278 [ 0ULL ] , & t33 [ 0ULL ] ) ; t284 [ 0 ] = le_efOut [
0 ] ; t635 = t284 [ 0ULL ] ; t777 = t593 * 9.8174770424681068E-6 ;
intrm_sf_mf_1018 = X [ 312ULL ] * t595 * 11.2 / ( t777 == 0.0 ? 1.0E-16 :
t777 ) ; t639 = X [ 312ULL ] >= 0.0 ? X [ 312ULL ] : - X [ 312ULL ] ; t504 =
t595 * 0.0019634954084936209 ; intrm_sf_mf_1150 = t639 * 0.05 / ( t504 == 0.0
? 1.0E-16 : t504 ) ; t641 = intrm_sf_mf_1150 >= 1.0 ? intrm_sf_mf_1150 : 1.0
; t916 = pmf_log10 ( 6.9 / ( t641 == 0.0 ? 1.0E-16 : t641 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t641 == 0.0 ? 1.0E-16 : t641 )
+ 2.8767404433520813E-5 ) * 3.24 ; t434 = t593 * 3.855314219175531E-7 ; t639
= X [ 312ULL ] * t639 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * 0.175 /
( t434 == 0.0 ? 1.0E-16 : t434 ) ; t641 = ( intrm_sf_mf_1150 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1318 = t641 * t641 * 3.0 - t641 * t641 * t641 * 2.0 ; if
( intrm_sf_mf_1150 <= 2000.0 ) { t641 = intrm_sf_mf_1018 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_1150 >= 4000.0 ) { t641 =
t639 * 9.9999999999999991E-11 ; } else { t641 = ( ( 1.0 - intrm_sf_mf_1318 )
* intrm_sf_mf_1018 + t639 * intrm_sf_mf_1318 ) * 9.9999999999999991E-11 ; }
intrm_sf_mf_1018 = ( ( ( 1.0 - t590 ) - t452 ) * 304.06022922571 + t590 *
2537.56068088674 ) + t452 * 266.413508632715 ; t590 = X [ 347ULL ] >= 0.0 ? X
[ 347ULL ] : - X [ 347ULL ] ; t546 = intrm_sf_mf_1311 * 0.0019634954084936209
; t452 = t590 * 0.05 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t639 = t452 >= 1.0
? t452 : 1.0 ; t916 = pmf_log10 ( 6.9 / ( t639 == 0.0 ? 1.0E-16 : t639 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t639 == 0.0 ? 1.0E-16 : t639 )
+ 2.8767404433520813E-5 ) * 3.24 ; t616 = t608 * 9.8174770424681068E-6 ;
intrm_sf_mf_1150 = X [ 347ULL ] * intrm_sf_mf_1311 * 35.2 / ( t616 == 0.0 ?
1.0E-16 : t616 ) ; t360_idx_0 = t608 * 3.855314219175531E-7 ; t590 = X [
347ULL ] * t590 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * 0.55 / (
t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t639 = ( t452 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1318 = t639 * t639 * 3.0 - t639 * t639 * t639 * 2.0 ; if
( t452 <= 2000.0 ) { t639 = intrm_sf_mf_1150 * 9.9999999999999991E-11 ; }
else if ( t452 >= 4000.0 ) { t639 = t590 * 9.9999999999999991E-11 ; } else {
t639 = ( ( 1.0 - intrm_sf_mf_1318 ) * intrm_sf_mf_1150 + t590 *
intrm_sf_mf_1318 ) * 9.9999999999999991E-11 ; } if ( - X [ 335ULL ] >= 0.0 )
{ t590 = - X [ 335ULL ] ; } else { t590 = X [ 335ULL ] ; } t452 = t590 * 0.05
/ ( t546 == 0.0 ? 1.0E-16 : t546 ) ; intrm_sf_mf_1150 = t452 >= 1.0 ? t452 :
1.0 ; t916 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1150 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1150 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1150 == 0.0 ? 1.0E-16 : intrm_sf_mf_1150 ) +
2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_1311 = X [ 335ULL ] *
intrm_sf_mf_1311 * - 35.2 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ; t590 = X [
335ULL ] * t590 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * - 0.55 / (
t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; intrm_sf_mf_1150 = ( t452 -
2000.0 ) / 2000.0 ; intrm_sf_mf_1318 = intrm_sf_mf_1150 * intrm_sf_mf_1150 *
3.0 - intrm_sf_mf_1150 * intrm_sf_mf_1150 * intrm_sf_mf_1150 * 2.0 ; if (
t452 <= 2000.0 ) { intrm_sf_mf_1150 = intrm_sf_mf_1311 *
9.9999999999999991E-11 ; } else if ( t452 >= 4000.0 ) { intrm_sf_mf_1150 =
t590 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1150 = ( ( 1.0 -
intrm_sf_mf_1318 ) * intrm_sf_mf_1311 + t590 * intrm_sf_mf_1318 ) *
9.9999999999999991E-11 ; } if ( - X [ 312ULL ] >= 0.0 ) { t590 = - X [ 312ULL
] ; } else { t590 = X [ 312ULL ] ; } t546 = t464 * 0.32 ; t452 = t590 * 0.01
/ ( t546 == 0.0 ? 1.0E-16 : t546 ) ; intrm_sf_mf_1311 = t452 >= 1.0 ? t452 :
1.0 ; t916 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1311 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1311 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1311 == 0.0 ? 1.0E-16 : intrm_sf_mf_1311 ) +
0.00017169489553429715 ) * 3.24 ; t616 = t619 * 6.4000000000000011E-5 ;
intrm_sf_mf_1318 = X [ 312ULL ] * t464 * - 2.9973120849090416 / ( t616 == 0.0
? 1.0E-16 : t616 ) ; t360_idx_0 = t619 * 0.0020480000000000003 ; t590 = X [
312ULL ] * t590 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * -
0.046833001326703774 / ( t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ;
intrm_sf_mf_1311 = ( t452 - 2000.0 ) / 2000.0 ; t643 = intrm_sf_mf_1311 *
intrm_sf_mf_1311 * 3.0 - intrm_sf_mf_1311 * intrm_sf_mf_1311 *
intrm_sf_mf_1311 * 2.0 ; if ( t452 <= 2000.0 ) { intrm_sf_mf_1311 =
intrm_sf_mf_1318 * 9.9999999999999991E-11 ; } else if ( t452 >= 4000.0 ) {
intrm_sf_mf_1311 = t590 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1311
= ( ( 1.0 - t643 ) * intrm_sf_mf_1318 + t590 * t643 ) *
9.9999999999999991E-11 ; } t590 = X [ 374ULL ] >= 0.0 ? X [ 374ULL ] : - X [
374ULL ] ; t452 = t590 * 0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ;
intrm_sf_mf_1318 = t452 >= 1.0 ? t452 : 1.0 ; t916 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1318 == 0.0 ?
1.0E-16 : intrm_sf_mf_1318 ) + 0.00017169489553429715 ) * 3.24 ; t464 = X [
374ULL ] * t464 * 2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ;
t590 = X [ 374ULL ] * t590 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) *
0.046833001326703774 / ( t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ;
intrm_sf_mf_1318 = ( t452 - 2000.0 ) / 2000.0 ; t643 = intrm_sf_mf_1318 *
intrm_sf_mf_1318 * 3.0 - intrm_sf_mf_1318 * intrm_sf_mf_1318 *
intrm_sf_mf_1318 * 2.0 ; if ( t452 <= 2000.0 ) { intrm_sf_mf_1318 = t464 *
9.9999999999999991E-11 ; } else if ( t452 >= 4000.0 ) { intrm_sf_mf_1318 =
t590 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1318 = ( ( 1.0 - t643 )
* t464 + t590 * t643 ) * 9.9999999999999991E-11 ; } t590 = X [ 134ULL ] >=
0.0 ? X [ 134ULL ] : - X [ 134ULL ] ; if ( - X [ 374ULL ] >= 0.0 ) { t452 = -
X [ 374ULL ] ; } else { t452 = X [ 374ULL ] ; } t546 = t630 * 0.32 ; t464 =
t452 * 0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t643 = t464 >= 1.0 ? t464 :
1.0 ; t916 = pmf_log10 ( 6.9 / ( t643 == 0.0 ? 1.0E-16 : t643 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t643 == 0.0 ? 1.0E-16 : t643 )
+ 0.00017169489553429715 ) * 3.24 ; t616 = t628 * 6.4000000000000011E-5 ;
t644 = X [ 374ULL ] * t630 * - 2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 :
t616 ) ; t360_idx_0 = t501 * 7.8539816339744827E-5 ; t645 = t590 * 0.01 / (
t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t488 = t628 *
0.0020480000000000003 ; t452 = X [ 374ULL ] * t452 * ( 1.0 / ( t916 == 0.0 ?
1.0E-16 : t916 ) ) * - 0.046833001326703774 / ( t488 == 0.0 ? 1.0E-16 : t488
) ; t643 = ( t464 - 2000.0 ) / 2000.0 ; t646 = t643 * t643 * 3.0 - t643 *
t643 * t643 * 2.0 ; if ( t464 <= 2000.0 ) { t643 = t644 *
9.9999999999999991E-11 ; } else if ( t464 >= 4000.0 ) { t643 = t452 *
9.9999999999999991E-11 ; } else { t643 = ( ( 1.0 - t646 ) * t644 + t452 *
t646 ) * 9.9999999999999991E-11 ; } if ( - X [ 347ULL ] >= 0.0 ) { t452 = - X
[ 347ULL ] ; } else { t452 = X [ 347ULL ] ; } t464 = t452 * 0.01 / ( t546 ==
0.0 ? 1.0E-16 : t546 ) ; t644 = t464 >= 1.0 ? t464 : 1.0 ; t916 = pmf_log10 (
6.9 / ( t644 == 0.0 ? 1.0E-16 : t644 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( t644 == 0.0 ? 1.0E-16 : t644 ) + 0.00017169489553429715 ) * 3.24 ;
t630 = X [ 347ULL ] * t630 * - 2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 :
t616 ) ; t452 = X [ 347ULL ] * t452 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916
) ) * - 0.046833001326703774 / ( t488 == 0.0 ? 1.0E-16 : t488 ) ; t644 = t645
>= 1.0 ? t645 : 1.0 ; t646 = ( t464 - 2000.0 ) / 2000.0 ; t368_idx_0 = t646 *
t646 * 3.0 - t646 * t646 * t646 * 2.0 ; if ( t464 <= 2000.0 ) { t646 = t630 *
9.9999999999999991E-11 ; } else if ( t464 >= 4000.0 ) { t646 = t452 *
9.9999999999999991E-11 ; } else { t646 = ( ( 1.0 - t368_idx_0 ) * t630 + t452
* t368_idx_0 ) * 9.9999999999999991E-11 ; } t916 = pmf_log10 ( 6.9 / ( t644
== 0.0 ? 1.0E-16 : t644 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t644 == 0.0 ? 1.0E-16 : t644 ) + 0.00017169489553429715 ) * 3.24 ; t546 =
t499 * 1.5707963267948965E-8 ; t464 = X [ 134ULL ] * t501 * 35.2 / ( t546 ==
0.0 ? 1.0E-16 : t546 ) ; t616 = t499 * 1.2337005501361697E-10 ; t590 = X [
134ULL ] * t590 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * 0.55 / ( t616
== 0.0 ? 1.0E-16 : t616 ) ; t452 = ( t645 - 2000.0 ) / 2000.0 ; t630 = t452 *
t452 * 3.0 - t452 * t452 * t452 * 2.0 ; if ( t645 <= 2000.0 ) { t452 = t464 *
9.9999999999999991E-11 ; } else if ( t645 >= 4000.0 ) { t452 = t590 *
9.9999999999999991E-11 ; } else { t452 = ( ( 1.0 - t630 ) * t464 + t590 *
t630 ) * 9.9999999999999991E-11 ; } if ( - X [ 122ULL ] >= 0.0 ) { t590 = - X
[ 122ULL ] ; } else { t590 = X [ 122ULL ] ; } t464 = t590 * 0.01 / (
t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t630 = t464 >= 1.0 ? t464 : 1.0
; t916 = pmf_log10 ( 6.9 / ( t630 == 0.0 ? 1.0E-16 : t630 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t630 == 0.0 ? 1.0E-16 : t630 )
+ 0.00017169489553429715 ) * 3.24 ; t501 = X [ 122ULL ] * t501 * - 35.2 / (
t546 == 0.0 ? 1.0E-16 : t546 ) ; t590 = X [ 122ULL ] * t590 * ( 1.0 / ( t916
== 0.0 ? 1.0E-16 : t916 ) ) * - 0.55 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ;
t630 = ( t464 - 2000.0 ) / 2000.0 ; t644 = t630 * t630 * 3.0 - t630 * t630 *
t630 * 2.0 ; if ( t464 <= 2000.0 ) { t630 = t501 * 9.9999999999999991E-11 ; }
else if ( t464 >= 4000.0 ) { t630 = t590 * 9.9999999999999991E-11 ; } else {
t630 = ( ( 1.0 - t644 ) * t501 + t590 * t644 ) * 9.9999999999999991E-11 ; }
t501 = ( ( ( 1.0 - intrm_sf_mf_401 ) - intrm_sf_mf_8 ) * 304.06022922571 +
intrm_sf_mf_401 * 2537.56068088674 ) + intrm_sf_mf_8 * 3860.3219873489 ;
intrm_sf_mf_401 = ( X [ 55ULL ] - 0.9 ) / 0.099999999999999978 ; if ( - X [
172ULL ] >= 0.0 ) { intrm_sf_mf_8 = - X [ 172ULL ] ; } else { intrm_sf_mf_8 =
X [ 172ULL ] ; } t546 = intrm_sf_mf_5 * 7.8539816339744827E-5 ; t590 =
intrm_sf_mf_8 * 0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t464 = t590 >= 1.0
? t590 : 1.0 ; t916 = pmf_log10 ( 6.9 / ( t464 == 0.0 ? 1.0E-16 : t464 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t464 == 0.0 ? 1.0E-16 : t464 )
+ 0.00017169489553429715 ) * 3.24 ; t616 = t512 * 1.5707963267948965E-8 ;
t644 = X [ 172ULL ] * intrm_sf_mf_5 * - 35.2 / ( t616 == 0.0 ? 1.0E-16 : t616
) ; t360_idx_0 = t512 * 1.2337005501361697E-10 ; intrm_sf_mf_8 = X [ 172ULL ]
* intrm_sf_mf_8 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * - 0.55 / (
t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t464 = ( t590 - 2000.0 ) /
2000.0 ; t645 = t464 * t464 * 3.0 - t464 * t464 * t464 * 2.0 ; if ( t590 <=
2000.0 ) { t464 = t644 * 9.9999999999999991E-11 ; } else if ( t590 >= 4000.0
) { t464 = intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t464 = ( ( 1.0 -
t645 ) * t644 + intrm_sf_mf_8 * t645 ) * 9.9999999999999991E-11 ; }
intrm_sf_mf_8 = X [ 186ULL ] >= 0.0 ? X [ 186ULL ] : - X [ 186ULL ] ; t590 =
intrm_sf_mf_8 * 0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t644 = t590 >= 1.0
? t590 : 1.0 ; t916 = pmf_log10 ( 6.9 / ( t644 == 0.0 ? 1.0E-16 : t644 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t644 == 0.0 ? 1.0E-16 : t644 )
+ 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_5 = X [ 186ULL ] *
intrm_sf_mf_5 * 35.2 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ; intrm_sf_mf_8 = X [
186ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * 0.55
/ ( t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t644 = ( t590 - 2000.0 ) /
2000.0 ; t645 = t644 * t644 * 3.0 - t644 * t644 * t644 * 2.0 ; if ( t590 <=
2000.0 ) { t644 = intrm_sf_mf_5 * 9.9999999999999991E-11 ; } else if ( t590
>= 4000.0 ) { t644 = intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t644 =
( ( 1.0 - t645 ) * intrm_sf_mf_5 + intrm_sf_mf_8 * t645 ) *
9.9999999999999991E-11 ; } intrm_sf_mf_8 = intrm_sf_mf_401 * intrm_sf_mf_401
* 3.0 - intrm_sf_mf_401 * intrm_sf_mf_401 * intrm_sf_mf_401 * 2.0 ;
intrm_sf_mf_401 = ( ( ( 1.0 - intrm_sf_mf_9 ) - t522 ) * 304.06022922571 +
intrm_sf_mf_9 * 2537.56068088674 ) + t522 * 266.413508632715 ; if ( X [ 55ULL
] <= 0.9 ) { intrm_sf_mf_5 = 0.0 ; } else { intrm_sf_mf_5 = X [ 55ULL ] >=
1.0 ? 1.0 : intrm_sf_mf_8 ; } if ( - X [ 186ULL ] >= 0.0 ) { intrm_sf_mf_8 =
- X [ 186ULL ] ; } else { intrm_sf_mf_8 = X [ 186ULL ] ; } t546 = t550 *
0.0019634954084936209 ; intrm_sf_mf_9 = intrm_sf_mf_8 * 0.05 / ( t546 == 0.0
? 1.0E-16 : t546 ) ; t522 = intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t916
= pmf_log10 ( 6.9 / ( t522 == 0.0 ? 1.0E-16 : t522 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t522 == 0.0 ? 1.0E-16 : t522 ) +
2.8767404433520813E-5 ) * 3.24 ; t616 = t548 * 9.8174770424681068E-6 ; t590 =
X [ 186ULL ] * t550 * - 11.2 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ; t360_idx_0
= t548 * 3.855314219175531E-7 ; intrm_sf_mf_8 = X [ 186ULL ] * intrm_sf_mf_8
* ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * - 0.175 / ( t360_idx_0 == 0.0
? 1.0E-16 : t360_idx_0 ) ; t522 = ( intrm_sf_mf_9 - 2000.0 ) / 2000.0 ; t645
= t522 * t522 * 3.0 - t522 * t522 * t522 * 2.0 ; if ( intrm_sf_mf_9 <= 2000.0
) { t522 = t590 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_9 >=
4000.0 ) { t522 = intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t522 = (
( 1.0 - t645 ) * t590 + intrm_sf_mf_8 * t645 ) * 9.9999999999999991E-11 ; }
intrm_sf_mf_8 = X [ 263ULL ] >= 0.0 ? X [ 263ULL ] : - X [ 263ULL ] ;
intrm_sf_mf_9 = intrm_sf_mf_8 * 0.05 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ;
t590 = intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t916 = pmf_log10 ( 6.9 /
( t590 == 0.0 ? 1.0E-16 : t590 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t590 == 0.0 ? 1.0E-16 : t590 ) + 2.8767404433520813E-5 ) * 3.24 ; t550 =
X [ 263ULL ] * t550 * 11.2 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ; intrm_sf_mf_8
= X [ 263ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) *
0.175 / ( t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t590 = ( intrm_sf_mf_9
- 2000.0 ) / 2000.0 ; t645 = t590 * t590 * 3.0 - t590 * t590 * t590 * 2.0 ;
if ( intrm_sf_mf_9 <= 2000.0 ) { t590 = t550 * 9.9999999999999991E-11 ; }
else if ( intrm_sf_mf_9 >= 4000.0 ) { t590 = intrm_sf_mf_8 *
9.9999999999999991E-11 ; } else { t590 = ( ( 1.0 - t645 ) * t550 +
intrm_sf_mf_8 * t645 ) * 9.9999999999999991E-11 ; } if ( - X [ 263ULL ] >=
0.0 ) { intrm_sf_mf_8 = - X [ 263ULL ] ; } else { intrm_sf_mf_8 = X [ 263ULL
] ; } t546 = t557 * 0.32 ; intrm_sf_mf_9 = intrm_sf_mf_8 * 0.01 / ( t546 ==
0.0 ? 1.0E-16 : t546 ) ; t550 = intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ;
t916 = pmf_log10 ( 6.9 / ( t550 == 0.0 ? 1.0E-16 : t550 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t550 == 0.0 ? 1.0E-16 : t550 )
+ 0.00017169489553429715 ) * 3.24 ; t616 = t555 * 6.4000000000000011E-5 ;
t645 = X [ 263ULL ] * t557 * - 2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 :
t616 ) ; t360_idx_0 = t555 * 0.0020480000000000003 ; intrm_sf_mf_8 = X [
263ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * -
0.046833001326703774 / ( t360_idx_0 == 0.0 ? 1.0E-16 : t360_idx_0 ) ; t550 =
( intrm_sf_mf_9 - 2000.0 ) / 2000.0 ; t368_idx_0 = t550 * t550 * 3.0 - t550 *
t550 * t550 * 2.0 ; if ( intrm_sf_mf_9 <= 2000.0 ) { t550 = t645 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_9 >= 4000.0 ) { t550 =
intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t550 = ( ( 1.0 - t368_idx_0
) * t645 + intrm_sf_mf_8 * t368_idx_0 ) * 9.9999999999999991E-11 ; }
intrm_sf_mf_8 = X [ 277ULL ] >= 0.0 ? X [ 277ULL ] : - X [ 277ULL ] ;
intrm_sf_mf_9 = intrm_sf_mf_8 * 0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ;
t645 = intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t916 = pmf_log10 ( 6.9 /
( t645 == 0.0 ? 1.0E-16 : t645 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t645 == 0.0 ? 1.0E-16 : t645 ) + 0.00017169489553429715 ) * 3.24 ; t557 =
X [ 277ULL ] * t557 * 2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ;
intrm_sf_mf_8 = X [ 277ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t916 == 0.0 ?
1.0E-16 : t916 ) ) * 0.046833001326703774 / ( t360_idx_0 == 0.0 ? 1.0E-16 :
t360_idx_0 ) ; t645 = ( intrm_sf_mf_9 - 2000.0 ) / 2000.0 ; t368_idx_0 = t645
* t645 * 3.0 - t645 * t645 * t645 * 2.0 ; if ( intrm_sf_mf_9 <= 2000.0 ) {
t645 = t557 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_9 >= 4000.0 )
{ t645 = intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t645 = ( ( 1.0 -
t368_idx_0 ) * t557 + intrm_sf_mf_8 * t368_idx_0 ) * 9.9999999999999991E-11 ;
} if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 <= 0.0 ) { intrm_sf_mf_8 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 >= 1.0 ) { intrm_sf_mf_8 = 1.0 ; } else { intrm_sf_mf_8 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 ; } if ( - X [ 277ULL ] >= 0.0 ) { intrm_sf_mf_9 = - X [
277ULL ] ; } else { intrm_sf_mf_9 = X [ 277ULL ] ; } t546 = piece17 * 0.32 ;
t557 = intrm_sf_mf_9 * 0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t368_idx_0 =
t557 >= 1.0 ? t557 : 1.0 ; t916 = pmf_log10 ( 6.9 / ( t368_idx_0 == 0.0 ?
1.0E-16 : t368_idx_0 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t368_idx_0 == 0.0 ? 1.0E-16 : t368_idx_0 ) + 0.00017169489553429715 ) * 3.24
; t616 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I *
6.4000000000000011E-5 ; t372_idx_0 = X [ 277ULL ] * piece17 * -
2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ; t360_idx_0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I *
0.0020480000000000003 ; intrm_sf_mf_9 = X [ 277ULL ] * intrm_sf_mf_9 * ( 1.0
/ ( t916 == 0.0 ? 1.0E-16 : t916 ) ) * - 0.046833001326703774 / ( t360_idx_0
== 0.0 ? 1.0E-16 : t360_idx_0 ) ; t368_idx_0 = ( t557 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t368_idx_0 *
t368_idx_0 * 3.0 - t368_idx_0 * t368_idx_0 * t368_idx_0 * 2.0 ; if ( t557 <=
2000.0 ) { t368_idx_0 = t372_idx_0 * 9.9999999999999991E-11 ; } else if (
t557 >= 4000.0 ) { t368_idx_0 = intrm_sf_mf_9 * 9.9999999999999991E-11 ; }
else { t368_idx_0 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * t372_idx_0
+ intrm_sf_mf_9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
9.9999999999999991E-11 ; } if ( - X [ 134ULL ] >= 0.0 ) { intrm_sf_mf_9 = - X
[ 134ULL ] ; } else { intrm_sf_mf_9 = X [ 134ULL ] ; } t557 = intrm_sf_mf_9 *
0.01 / ( t546 == 0.0 ? 1.0E-16 : t546 ) ; t372_idx_0 = t557 >= 1.0 ? t557 :
1.0 ; t916 = pmf_log10 ( 6.9 / ( t372_idx_0 == 0.0 ? 1.0E-16 : t372_idx_0 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t372_idx_0 == 0.0 ? 1.0E-16 :
t372_idx_0 ) + 0.00017169489553429715 ) * 3.24 ; piece17 = X [ 134ULL ] *
piece17 * - 2.9973120849090416 / ( t616 == 0.0 ? 1.0E-16 : t616 ) ;
intrm_sf_mf_9 = X [ 134ULL ] * intrm_sf_mf_9 * ( 1.0 / ( t916 == 0.0 ?
1.0E-16 : t916 ) ) * - 0.046833001326703774 / ( t360_idx_0 == 0.0 ? 1.0E-16 :
t360_idx_0 ) ; t372_idx_0 = ( t557 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t372_idx_0 *
t372_idx_0 * 3.0 - t372_idx_0 * t372_idx_0 * t372_idx_0 * 2.0 ; if ( t557 <=
2000.0 ) { t372_idx_0 = piece17 * 9.9999999999999991E-11 ; } else if ( t557
>= 4000.0 ) { t372_idx_0 = intrm_sf_mf_9 * 9.9999999999999991E-11 ; } else {
t372_idx_0 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * piece17 +
intrm_sf_mf_9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
9.9999999999999991E-11 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 <= 0.0 ) { intrm_sf_mf_9 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 >= 1.0 ) { intrm_sf_mf_9 = 1.0 ; } else { intrm_sf_mf_9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 ; } if ( - X [ 244ULL ] >= 0.0 ) { t557 = - X [ 244ULL ] ;
} else { t557 = X [ 244ULL ] ; } piece17 = t557 * 0.05 / ( t504 == 0.0 ?
1.0E-16 : t504 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = piece17 >=
1.0 ? piece17 : 1.0 ; t916 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) +
2.8767404433520813E-5 ) * 3.24 ; t595 = X [ 244ULL ] * t595 * - 11.2 / ( t777
== 0.0 ? 1.0E-16 : t777 ) ; t557 = X [ 244ULL ] * t557 * ( 1.0 / ( t916 ==
0.0 ? 1.0E-16 : t916 ) ) * - 0.175 / ( t434 == 0.0 ? 1.0E-16 : t434 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( piece17 -
2000.0 ) / 2000.0 ; t488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 2.0 ; if (
piece17 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t595 *
9.9999999999999991E-11 ; } else if ( piece17 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t557 *
9.9999999999999991E-11 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( 1.0 -
t488 ) * t595 + t557 * t488 ) * 9.9999999999999991E-11 ; } piece17 = X [
115ULL ] * 0.00062831853071795862 ; t488 = X [ 328ULL ] *
0.0031415926535897937 ; t283 [ 0ULL ] = X [ 0ULL ] * 0.00027777777777777778 ;
t283 [ 1ULL ] = X [ 53ULL ] ; t283 [ 2ULL ] = X [ 1ULL ] ; t283 [ 3ULL ] = X
[ 54ULL ] ; t283 [ 4ULL ] = t406 ; t283 [ 5ULL ] = X [ 55ULL ] ; t283 [ 6ULL
] = X [ 56ULL ] ; t283 [ 7ULL ] = X [ 53ULL ] * X [ 53ULL ] * ( X [ 56ULL ] >
4.03416E-7 ? X [ 56ULL ] : 4.03416E-7 ) * 0.001 ; t283 [ 8ULL ] = t408 ; t283
[ 9ULL ] = t408 ; t283 [ 10ULL ] = X [ 55ULL ] ; t283 [ 11ULL ] = t408 ; t283
[ 12ULL ] = t410 ; t283 [ 13ULL ] = X [ 55ULL ] ; t283 [ 14ULL ] =
intrm_sf_mf_2 ; t283 [ 15ULL ] = intrm_sf_mf_5 ; t283 [ 16ULL ] = X [ 57ULL ]
; t283 [ 17ULL ] = X [ 55ULL ] ; t283 [ 18ULL ] = X [ 58ULL ] ; t283 [ 19ULL
] = ( X [ 59ULL ] * intrm_sf_mf_2 + ( 1.0 - intrm_sf_mf_2 ) * t410 * t410 ) *
1000.0 ; t283 [ 20ULL ] = X [ 59ULL ] * 1000.0 ; t283 [ 21ULL ] = X [ 2ULL ]
; t283 [ 22ULL ] = X [ 58ULL ] ; t283 [ 23ULL ] = U_idx_0 ; t283 [ 24ULL ] =
U_idx_0 ; t283 [ 25ULL ] = X [ 55ULL ] ; t283 [ 26ULL ] = X [ 55ULL ] ; t283
[ 27ULL ] = U_idx_0 ; t283 [ 28ULL ] = X [ 55ULL ] ; t283 [ 29ULL ] = - X [
53ULL ] ; t283 [ 30ULL ] = - X [ 53ULL ] ; t283 [ 31ULL ] = X [ 55ULL ] ;
t283 [ 32ULL ] = X [ 55ULL ] ; t283 [ 33ULL ] = - X [ 53ULL ] ; t283 [ 34ULL
] = X [ 55ULL ] ; t283 [ 35ULL ] = X [ 55ULL ] ; t283 [ 36ULL ] = X [ 55ULL ]
; t283 [ 37ULL ] = X [ 55ULL ] ; t283 [ 38ULL ] = X [ 55ULL ] ; t283 [ 39ULL
] = - X [ 57ULL ] ; t283 [ 40ULL ] = - X [ 57ULL ] ; t283 [ 41ULL ] = X [
58ULL ] ; t283 [ 42ULL ] = X [ 58ULL ] ; t283 [ 43ULL ] = - X [ 57ULL ] ;
t283 [ 44ULL ] = X [ 58ULL ] ; t283 [ 45ULL ] = X [ 58ULL ] ; t283 [ 46ULL ]
= X [ 58ULL ] ; t283 [ 47ULL ] = X [ 58ULL ] ; t283 [ 48ULL ] = X [ 58ULL ] ;
t283 [ 49ULL ] = - X [ 57ULL ] ; t283 [ 50ULL ] = - X [ 57ULL ] ; t283 [
51ULL ] = X [ 58ULL ] ; t283 [ 52ULL ] = t476 ; t283 [ 53ULL ] = X [ 58ULL ]
; t283 [ 54ULL ] = X [ 58ULL ] ; t283 [ 55ULL ] = X [ 3ULL ] ; t283 [ 56ULL ]
= t476 * t476 * 0.01 ; t283 [ 57ULL ] = X [ 60ULL ] ; t283 [ 58ULL ] =
U_idx_9 ; t283 [ 59ULL ] = Fuel_Cell_Boost_Converter_L_i ; t283 [ 60ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t283 [ 61ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 62ULL ] = X [ 61ULL ] ; t283 [ 63ULL
] = X [ 4ULL ] ; t283 [ 64ULL ] = X [ 61ULL ] * X [ 61ULL ] *
1.0000000000000002E-12 ; t283 [ 65ULL ] = Fuel_Cell_Boost_Converter_L_n_v ;
t283 [ 66ULL ] = X [ 63ULL ] ; t283 [ 67ULL ] = X [ 4ULL ] ; t283 [ 68ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t283 [ 69ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t283 [ 70ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 71ULL ] = X [ 58ULL ] ; t283 [ 72ULL
] = Fuel_Cell_Boost_Converter_L_n_v * X [ 63ULL ] + (
Fuel_Cell_Boost_Converter_L_n_v - X [ 60ULL ] ) * (
Fuel_Cell_Boost_Converter_L_i - X [ 63ULL ] ) ; t283 [ 73ULL ] = X [ 3ULL ] ;
t283 [ 74ULL ] = Fuel_Cell_Current_Sensor1_I ; t283 [ 75ULL ] =
Fuel_Cell_Current_Sensor1_I ; t283 [ 76ULL ] = X [ 58ULL ] ; t283 [ 77ULL ] =
X [ 58ULL ] ; t283 [ 78ULL ] = Fuel_Cell_Current_Sensor1_I ; t283 [ 79ULL ] =
X [ 64ULL ] ; t283 [ 80ULL ] = X [ 65ULL ] * 0.1 ; t283 [ 81ULL ] = X [ 66ULL
] ; t283 [ 82ULL ] = X [ 67ULL ] ; t283 [ 83ULL ] = X [ 68ULL ] ; t283 [
84ULL ] = X [ 69ULL ] * 0.1 ; t283 [ 85ULL ] = X [ 70ULL ] ; t283 [ 86ULL ] =
X [ 71ULL ] ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 +
87ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t398 ]
; } for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 95ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t398 ] ; } for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 103ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t398 ] ; } for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 111ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t398 ] ; } t283
[ 119ULL ] = X [ 64ULL ] ; t283 [ 120ULL ] = X [ 65ULL ] * 0.1 ; t283 [
121ULL ] = X [ 66ULL ] ; t283 [ 122ULL ] = X [ 67ULL ] ; t283 [ 123ULL ] = X
[ 68ULL ] ; t283 [ 124ULL ] = X [ 69ULL ] * 0.1 ; t283 [ 125ULL ] = X [ 70ULL
] ; t283 [ 126ULL ] = X [ 71ULL ] ; t283 [ 127ULL ] = X [ 92ULL ] ; t283 [
128ULL ] = X [ 93ULL ] ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [
t398 + 129ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi
[ t398 ] ; } for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 +
137ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t398
] ; } for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 145ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t398 ] ; } for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 153ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t398 ] ; } t283
[ 161ULL ] = X [ 62ULL ] ; t283 [ 162ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * 0.0001 ;
t283 [ 163ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.20177105219743391 / 192970.66424 * 1000.0 ; t283 [ 164ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 * 1000.0 ;
t283 [ 165ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 * 1000.0 ;
t283 [ 166ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.3583866814737065 / 385941.32848 * 1000.0 ; t283 [ 167ULL ] = X [ 94ULL ] ;
t283 [ 168ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * 100.0 ; t283
[ 169ULL ] = X [ 9ULL ] ; t283 [ 170ULL ] = X [ 10ULL ] ; t283 [ 171ULL ] = X
[ 11ULL ] ; t283 [ 172ULL ] = X [ 15ULL ] ; t283 [ 173ULL ] = X [ 16ULL ] ;
t283 [ 174ULL ] = X [ 17ULL ] ; t283 [ 175ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; t283 [
176ULL ] = intrm_sf_mf_8 ; t283 [ 177ULL ] = intrm_sf_mf_9 ; t283 [ 178ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t283 [
179ULL ] = X [ 96ULL ] ; t283 [ 180ULL ] = X [ 97ULL ] ; t283 [ 181ULL ] = X
[ 15ULL ] ; t283 [ 182ULL ] = X [ 16ULL ] ; t283 [ 183ULL ] = X [ 17ULL ] ;
t283 [ 184ULL ] = - X [ 96ULL ] ; t283 [ 185ULL ] = X [ 98ULL ] ; t283 [
186ULL ] = X [ 99ULL ] ; t283 [ 187ULL ] = X [ 9ULL ] ; t283 [ 188ULL ] = X [
10ULL ] ; t283 [ 189ULL ] = X [ 11ULL ] ; t283 [ 190ULL ] = - X [ 98ULL ] ;
t283 [ 191ULL ] = X [ 100ULL ] ; t283 [ 192ULL ] = X [ 101ULL ] ; t283 [
193ULL ] = X [ 15ULL ] ; t283 [ 194ULL ] = X [ 16ULL ] ; t283 [ 195ULL ] = X
[ 17ULL ] ; t283 [ 196ULL ] = - X [ 100ULL ] ; t283 [ 197ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 * 0.001 ;
t283 [ 198ULL ] = X [ 104ULL ] ; t283 [ 199ULL ] = X [ 102ULL ] ; t283 [
200ULL ] = X [ 9ULL ] ; t283 [ 201ULL ] = X [ 10ULL ] ; t283 [ 202ULL ] = X [
11ULL ] ; t283 [ 203ULL ] = - X [ 104ULL ] ; t283 [ 204ULL ] = t480 ; t283 [
205ULL ] = X [ 103ULL ] ; t283 [ 206ULL ] = X [ 15ULL ] ; t283 [ 207ULL ] = X
[ 16ULL ] ; t283 [ 208ULL ] = X [ 17ULL ] ; t283 [ 209ULL ] = - t480 ; t283 [
210ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ;
t283 [ 211ULL ] = t478 * 0.001 ; t283 [ 212ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t283 [
213ULL ] = X [ 9ULL ] ; t283 [ 214ULL ] = X [ 10ULL ] ; t283 [ 215ULL ] = X [
11ULL ] ; t283 [ 216ULL ] = X [ 15ULL ] ; t283 [ 217ULL ] = X [ 16ULL ] ;
t283 [ 218ULL ] = X [ 17ULL ] ; t283 [ 219ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t283 [
220ULL ] = X [ 94ULL ] * - 1000.0 ; t283 [ 221ULL ] = X [ 94ULL ] * - 1000.0
; t283 [ 222ULL ] = - X [ 94ULL ] ; t283 [ 223ULL ] = X [ 106ULL ] * 1000.0 ;
t283 [ 224ULL ] = X [ 18ULL ] - 273.15 ; t283 [ 225ULL ] = t481 ; t283 [
226ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 227ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 228ULL ] = X [ 5ULL ] ; t283 [
229ULL ] = t481 * t481 * 1.0E-9 ; t283 [ 230ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t283 [ 231ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t283 [ 232ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 233ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 234ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t283 [ 235ULL ] = - X [ 62ULL ] ; t283 [
236ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 237ULL ] = t30 ; t283 [
238ULL ] = X [ 95ULL ] ; t283 [ 239ULL ] = - ( X [ 62ULL ] * X [ 95ULL ] ) ;
t283 [ 240ULL ] = - X [ 62ULL ] ; t283 [ 241ULL ] = t30 ; t283 [ 242ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t283 [
243ULL ] = X [ 62ULL ] * - 0.001 ; t283 [ 244ULL ] = X [ 62ULL ] * X [ 62ULL
] * 0.001 ; t283 [ 245ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 246ULL
] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 247ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 248ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t283 [
249ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 250ULL ] = ( ( ( ( ( - X
[ 94ULL ] - X [ 106ULL ] ) - X [ 107ULL ] ) - X [ 108ULL ] ) - X [ 109ULL ] )
- X [ 110ULL ] ) * 1000.0 ; t283 [ 251ULL ] = X [ 111ULL ] ; t283 [ 252ULL ]
= X [ 112ULL ] * 0.1 ; t283 [ 253ULL ] = X [ 113ULL ] ; t283 [ 254ULL ] = X [
114ULL ] ; t283 [ 255ULL ] = X [ 115ULL ] ; t283 [ 256ULL ] = -
184.19157727996955 + piece17 * 1000.0 ; t283 [ 257ULL ] = ( X [ 115ULL ] *
0.00062831853071795862 - 0.18419157727996954 ) * 1591.5494309189535 ; t283 [
258ULL ] = X [ 116ULL ] ; t283 [ 259ULL ] = X [ 117ULL ] ; t283 [ 260ULL ] =
X [ 118ULL ] ; t283 [ 261ULL ] = X [ 119ULL ] ; t283 [ 262ULL ] = X [ 120ULL
] ; t283 [ 263ULL ] = X [ 128ULL ] ; t283 [ 264ULL ] = X [ 127ULL ] ; t283 [
265ULL ] = X [ 116ULL ] ; t283 [ 266ULL ] = X [ 117ULL ] ; t283 [ 267ULL ] =
X [ 118ULL ] ; t283 [ 268ULL ] = X [ 120ULL ] ; t283 [ 269ULL ] = X [ 121ULL
] ; t283 [ 270ULL ] = X [ 122ULL ] ; t283 [ 271ULL ] = X [ 123ULL ] ; t283 [
272ULL ] = X [ 124ULL ] ; t283 [ 273ULL ] = X [ 125ULL ] ; t283 [ 274ULL ] =
X [ 126ULL ] ; t283 [ 275ULL ] = t501 ; t283 [ 276ULL ] = X [ 122ULL ] ; t283
[ 277ULL ] = X [ 123ULL ] ; t283 [ 278ULL ] = X [ 124ULL ] ; t283 [ 279ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_rho_I * 100000.0 ;
t283 [ 280ULL ] = ( 1.0 - X [ 127ULL ] ) - X [ 128ULL ] ; t283 [ 281ULL ] = X
[ 129ULL ] ; t283 [ 282ULL ] = - 184.19157727996955 + piece17 * 1000.0 ; t283
[ 283ULL ] = U_idx_1 ; t283 [ 284ULL ] = U_idx_1 * 3.1415926535897929E-6 ;
t283 [ 285ULL ] = X [ 111ULL ] ; t283 [ 286ULL ] = X [ 112ULL ] * 0.1 ; t283
[ 287ULL ] = X [ 113ULL ] ; t283 [ 288ULL ] = X [ 114ULL ] ; t283 [ 289ULL ]
= X [ 130ULL ] ; t283 [ 290ULL ] = X [ 131ULL ] * 0.1 ; t283 [ 291ULL ] = X [
132ULL ] ; t283 [ 292ULL ] = X [ 133ULL ] ; t283 [ 293ULL ] = X [ 22ULL ] ;
t283 [ 294ULL ] = X [ 138ULL ] ; t283 [ 295ULL ] = X [ 21ULL ] ; t283 [
296ULL ] = X [ 135ULL ] ; t283 [ 297ULL ] = X [ 19ULL ] - 273.15 ; t283 [
298ULL ] = X [ 134ULL ] ; t283 [ 299ULL ] = X [ 136ULL ] * 0.1 ; t283 [
300ULL ] = X [ 20ULL ] * 0.1 ; t283 [ 301ULL ] = X [ 137ULL ] ; t283 [ 302ULL
] = t499 * 100000.0 ; t283 [ 303ULL ] = X [ 139ULL ] ; t283 [ 304ULL ] = - X
[ 122ULL ] ; t283 [ 305ULL ] = X [ 140ULL ] * 0.1 ; for ( t398 = 0ULL ; t398
< 8ULL ; t398 ++ ) { t283 [ t398 + 306ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t398 ] ; } t283 [
314ULL ] = X [ 115ULL ] ; t283 [ 315ULL ] = X [ 141ULL ] ; t283 [ 316ULL ] =
t500 ; t283 [ 317ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ; t283 [ 318ULL ]
= X [ 143ULL ] ; t283 [ 319ULL ] = - X [ 120ULL ] ; t283 [ 320ULL ] =
0.18419157727996954 - piece17 ; t283 [ 321ULL ] = X [ 142ULL ] ; t283 [
322ULL ] = X [ 19ULL ] ; t283 [ 323ULL ] = X [ 22ULL ] ; t283 [ 324ULL ] = X
[ 21ULL ] ; t283 [ 325ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; t283 [ 326ULL ] = X
[ 111ULL ] ; t283 [ 327ULL ] = X [ 112ULL ] * 0.1 ; t283 [ 328ULL ] = X [
113ULL ] ; t283 [ 329ULL ] = X [ 114ULL ] ; t283 [ 330ULL ] = X [ 143ULL ] ;
t283 [ 331ULL ] = X [ 144ULL ] ; t283 [ 332ULL ] = X [ 134ULL ] ; t283 [
333ULL ] = X [ 145ULL ] ; t283 [ 334ULL ] = X [ 146ULL ] ; t283 [ 335ULL ] =
X [ 147ULL ] ; t283 [ 336ULL ] = X [ 148ULL ] ; t283 [ 337ULL ] = X [ 130ULL
] ; t283 [ 338ULL ] = X [ 131ULL ] * 0.1 ; t283 [ 339ULL ] = X [ 132ULL ] ;
t283 [ 340ULL ] = X [ 133ULL ] ; t283 [ 341ULL ] = - X [ 120ULL ] ; t283 [
342ULL ] = X [ 149ULL ] ; t283 [ 343ULL ] = - X [ 122ULL ] ; t283 [ 344ULL ]
= - X [ 123ULL ] ; t283 [ 345ULL ] = - X [ 124ULL ] ; t283 [ 346ULL ] = X [
150ULL ] ; t283 [ 347ULL ] = X [ 151ULL ] ; t283 [ 348ULL ] = t505 ; t283 [
349ULL ] = X [ 145ULL ] ; t283 [ 350ULL ] = - X [ 123ULL ] ; t283 [ 351ULL ]
= X [ 146ULL ] ; t283 [ 352ULL ] = - X [ 124ULL ] ; t283 [ 353ULL ] = t452 *
0.1 ; t283 [ 354ULL ] = t630 * 0.1 ; t283 [ 355ULL ] = ( 1.0 - X [ 21ULL ] )
- X [ 22ULL ] ; t283 [ 356ULL ] = X [ 130ULL ] ; t283 [ 357ULL ] = X [ 131ULL
] * 0.1 ; t283 [ 358ULL ] = X [ 132ULL ] ; t283 [ 359ULL ] = X [ 133ULL ] ;
t283 [ 360ULL ] = t496 * 0.0001 ; t283 [ 361ULL ] = X [ 116ULL ] ; t283 [
362ULL ] = X [ 117ULL ] ; t283 [ 363ULL ] = X [ 118ULL ] ; t283 [ 364ULL ] =
X [ 122ULL ] ; t283 [ 365ULL ] = X [ 130ULL ] ; t283 [ 366ULL ] = X [ 131ULL
] * 0.1 ; t283 [ 367ULL ] = X [ 132ULL ] ; t283 [ 368ULL ] = X [ 133ULL ] ;
t283 [ 369ULL ] = X [ 120ULL ] ; t283 [ 370ULL ] = X [ 158ULL ] ; t283 [
371ULL ] = X [ 122ULL ] ; t283 [ 372ULL ] = X [ 123ULL ] ; t283 [ 373ULL ] =
X [ 124ULL ] ; t283 [ 374ULL ] = X [ 155ULL ] ; t283 [ 375ULL ] = X [ 154ULL
] ; t283 [ 376ULL ] = X [ 152ULL ] ; t283 [ 377ULL ] = X [ 153ULL ] * 0.1 ;
t283 [ 378ULL ] = X [ 156ULL ] ; t283 [ 379ULL ] = X [ 157ULL ] ; t283 [
380ULL ] = t497 ; t283 [ 381ULL ] = X [ 120ULL ] ; t283 [ 382ULL ] = - X [
120ULL ] ; t283 [ 383ULL ] = X [ 116ULL ] ; t283 [ 384ULL ] = X [ 117ULL ] ;
t283 [ 385ULL ] = X [ 118ULL ] ; t283 [ 386ULL ] = - X [ 120ULL ] ; t283 [
387ULL ] = X [ 158ULL ] ; t283 [ 388ULL ] = - X [ 122ULL ] ; t283 [ 389ULL ]
= - X [ 123ULL ] ; t283 [ 390ULL ] = - X [ 124ULL ] ; t283 [ 391ULL ] = X [
155ULL ] ; t283 [ 392ULL ] = X [ 154ULL ] ; t283 [ 393ULL ] = - X [ 122ULL ]
; t283 [ 394ULL ] = X [ 123ULL ] ; t283 [ 395ULL ] = - X [ 123ULL ] ; t283 [
396ULL ] = X [ 124ULL ] ; t283 [ 397ULL ] = - X [ 124ULL ] ; t283 [ 398ULL ]
= U_idx_1 ; t283 [ 399ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 400ULL
] = X [ 159ULL ] ; t283 [ 401ULL ] = X [ 160ULL ] * 0.1 ; t283 [ 402ULL ] = X
[ 161ULL ] ; t283 [ 403ULL ] = X [ 162ULL ] ; t283 [ 404ULL ] = X [ 163ULL ]
; t283 [ 405ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 406ULL ] = X [ 164ULL ] ; t283
[ 407ULL ] = X [ 165ULL ] ; t283 [ 408ULL ] = X [ 23ULL ] ; t283 [ 409ULL ] =
X [ 24ULL ] * 0.1 ; t283 [ 410ULL ] = X [ 25ULL ] ; t283 [ 411ULL ] = X [
26ULL ] ; t283 [ 412ULL ] = X [ 23ULL ] ; t283 [ 413ULL ] = X [ 24ULL ] * 0.1
; t283 [ 414ULL ] = X [ 25ULL ] ; t283 [ 415ULL ] = X [ 26ULL ] ; t283 [
416ULL ] = X [ 23ULL ] ; t283 [ 417ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 418ULL
] = X [ 25ULL ] ; t283 [ 419ULL ] = X [ 26ULL ] ; for ( t398 = 0ULL ; t398 <
8ULL ; t398 ++ ) { t283 [ t398 + 420ULL ] = t288 [ t398 ] ; } t283 [ 428ULL ]
= X [ 23ULL ] ; t283 [ 429ULL ] = X [ 166ULL ] ; t283 [ 430ULL ] = X [ 170ULL
] ; t283 [ 431ULL ] = X [ 23ULL ] - 273.15 ; t283 [ 432ULL ] = X [ 25ULL ] ;
t283 [ 433ULL ] = X [ 168ULL ] ; t283 [ 434ULL ] = X [ 26ULL ] ; t283 [
435ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 436ULL ] = t507 * 100000.0 ; t283 [
437ULL ] = X [ 167ULL ] ; t283 [ 438ULL ] = X [ 23ULL ] ; t283 [ 439ULL ] = X
[ 25ULL ] ; t283 [ 440ULL ] = X [ 26ULL ] ; t283 [ 441ULL ] = t508 ; t283 [
442ULL ] = X [ 163ULL ] ; t283 [ 443ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 444ULL
] = X [ 164ULL ] ; t283 [ 445ULL ] = X [ 165ULL ] ; t283 [ 446ULL ] = X [
170ULL ] ; t283 [ 447ULL ] = X [ 171ULL ] ; t283 [ 448ULL ] = X [ 172ULL ] ;
t283 [ 449ULL ] = X [ 173ULL ] ; t283 [ 450ULL ] = X [ 174ULL ] ; t283 [
451ULL ] = X [ 175ULL ] ; t283 [ 452ULL ] = X [ 176ULL ] ; t283 [ 453ULL ] =
t511 ; t283 [ 454ULL ] = X [ 172ULL ] ; t283 [ 455ULL ] = X [ 173ULL ] ; t283
[ 456ULL ] = X [ 174ULL ] ; t283 [ 457ULL ] = ( 1.0 - X [ 26ULL ] ) - X [
25ULL ] ; t283 [ 458ULL ] = X [ 169ULL ] ; t283 [ 459ULL ] = X [ 159ULL ] ;
t283 [ 460ULL ] = X [ 160ULL ] * 0.1 ; t283 [ 461ULL ] = X [ 161ULL ] ; t283
[ 462ULL ] = X [ 162ULL ] ; t283 [ 463ULL ] = X [ 163ULL ] ; t283 [ 464ULL ]
= X [ 24ULL ] * 0.1 ; t283 [ 465ULL ] = X [ 164ULL ] ; t283 [ 466ULL ] = X [
165ULL ] ; t283 [ 467ULL ] = X [ 163ULL ] ; t283 [ 468ULL ] = X [ 24ULL ] *
0.1 ; t283 [ 469ULL ] = X [ 164ULL ] ; t283 [ 470ULL ] = X [ 165ULL ] ; t283
[ 471ULL ] = - X [ 172ULL ] ; t283 [ 472ULL ] = - X [ 173ULL ] ; t283 [
473ULL ] = - X [ 174ULL ] ; t283 [ 474ULL ] = X [ 170ULL ] * - 1000.0 ; t283
[ 475ULL ] = - X [ 170ULL ] ; t283 [ 476ULL ] = - X [ 172ULL ] ; t283 [
477ULL ] = - X [ 173ULL ] ; t283 [ 478ULL ] = - X [ 174ULL ] ; t283 [ 479ULL
] = - X [ 172ULL ] ; t283 [ 480ULL ] = X [ 23ULL ] ; t283 [ 481ULL ] = X [
23ULL ] ; t283 [ 482ULL ] = X [ 177ULL ] ; t283 [ 483ULL ] = X [ 177ULL ] ;
t283 [ 484ULL ] = X [ 178ULL ] ; t283 [ 485ULL ] = X [ 179ULL ] * 0.1 ; t283
[ 486ULL ] = X [ 180ULL ] ; t283 [ 487ULL ] = X [ 181ULL ] ; t283 [ 488ULL ]
= X [ 159ULL ] ; t283 [ 489ULL ] = X [ 160ULL ] * 0.1 ; t283 [ 490ULL ] = X [
161ULL ] ; t283 [ 491ULL ] = X [ 162ULL ] ; t283 [ 492ULL ] = X [ 30ULL ] ;
t283 [ 493ULL ] = X [ 185ULL ] ; t283 [ 494ULL ] = X [ 29ULL ] ; t283 [
495ULL ] = X [ 182ULL ] ; t283 [ 496ULL ] = X [ 27ULL ] - 273.15 ; t283 [
497ULL ] = - X [ 172ULL ] ; t283 [ 498ULL ] = X [ 183ULL ] * 0.1 ; t283 [
499ULL ] = X [ 28ULL ] * 0.1 ; t283 [ 500ULL ] = X [ 184ULL ] ; t283 [ 501ULL
] = t512 * 100000.0 ; t283 [ 502ULL ] = X [ 187ULL ] ; t283 [ 503ULL ] = X [
186ULL ] ; t283 [ 504ULL ] = X [ 188ULL ] * 0.1 ; for ( t398 = 0ULL ; t398 <
8ULL ; t398 ++ ) { t283 [ t398 + 505ULL ] = t293 [ t398 ] ; } t283 [ 513ULL ]
= X [ 177ULL ] ; t283 [ 514ULL ] = X [ 189ULL ] ; t283 [ 515ULL ] = t422 ;
t283 [ 516ULL ] = t510 ; t283 [ 517ULL ] = - X [ 170ULL ] ; t283 [ 518ULL ] =
X [ 191ULL ] ; t283 [ 519ULL ] = X [ 190ULL ] ; t283 [ 520ULL ] = X [ 27ULL ]
; t283 [ 521ULL ] = X [ 30ULL ] ; t283 [ 522ULL ] = X [ 29ULL ] ; t283 [
523ULL ] = t515 ; t283 [ 524ULL ] = X [ 178ULL ] ; t283 [ 525ULL ] = X [
179ULL ] * 0.1 ; t283 [ 526ULL ] = X [ 180ULL ] ; t283 [ 527ULL ] = X [
181ULL ] ; t283 [ 528ULL ] = - X [ 170ULL ] ; t283 [ 529ULL ] = X [ 192ULL ]
; t283 [ 530ULL ] = - X [ 172ULL ] ; t283 [ 531ULL ] = - X [ 173ULL ] ; t283
[ 532ULL ] = - X [ 174ULL ] ; t283 [ 533ULL ] = X [ 193ULL ] ; t283 [ 534ULL
] = X [ 194ULL ] ; t283 [ 535ULL ] = X [ 159ULL ] ; t283 [ 536ULL ] = X [
160ULL ] * 0.1 ; t283 [ 537ULL ] = X [ 161ULL ] ; t283 [ 538ULL ] = X [
162ULL ] ; t283 [ 539ULL ] = X [ 191ULL ] ; t283 [ 540ULL ] = X [ 195ULL ] ;
t283 [ 541ULL ] = X [ 186ULL ] ; t283 [ 542ULL ] = X [ 196ULL ] ; t283 [
543ULL ] = X [ 197ULL ] ; t283 [ 544ULL ] = X [ 198ULL ] ; t283 [ 545ULL ] =
X [ 199ULL ] ; t283 [ 546ULL ] = t518 ; t283 [ 547ULL ] = - X [ 173ULL ] ;
t283 [ 548ULL ] = X [ 196ULL ] ; t283 [ 549ULL ] = - X [ 174ULL ] ; t283 [
550ULL ] = X [ 197ULL ] ; t283 [ 551ULL ] = t464 * 0.1 ; t283 [ 552ULL ] =
t644 * 0.1 ; t283 [ 553ULL ] = ( 1.0 - X [ 29ULL ] ) - X [ 30ULL ] ; t283 [
554ULL ] = X [ 163ULL ] ; t283 [ 555ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 556ULL
] = X [ 164ULL ] ; t283 [ 557ULL ] = X [ 165ULL ] ; t283 [ 558ULL ] = X [
178ULL ] ; t283 [ 559ULL ] = X [ 179ULL ] * 0.1 ; t283 [ 560ULL ] = X [
180ULL ] ; t283 [ 561ULL ] = X [ 181ULL ] ; t283 [ 562ULL ] = t506 * 1.0E+6 ;
t283 [ 563ULL ] = t419 ; t283 [ 564ULL ] = t506 * - 125000.03125000779 ; t283
[ 565ULL ] = t506 * 1.0E+6 ; t283 [ 566ULL ] = t419 ; t283 [ 567ULL ] = t419
* 7.8539816339744827E-5 ; t283 [ 568ULL ] = X [ 179ULL ] * 99999.999999999985
; t283 [ 569ULL ] = ( t517 - 0.05000000000000001 ) * 0.1 ; t283 [ 570ULL ] =
t506 * - 125000.03125000779 ; t283 [ 571ULL ] = t517 * 0.1 ; t283 [ 572ULL ]
= ( t517 - 0.05000000000000001 ) * 0.1 ; t283 [ 573ULL ] = X [ 178ULL ] ;
t283 [ 574ULL ] = X [ 179ULL ] * 0.1 ; t283 [ 575ULL ] = X [ 180ULL ] ; t283
[ 576ULL ] = X [ 181ULL ] ; t283 [ 577ULL ] = X [ 179ULL ] *
99999.999999999985 ; t283 [ 578ULL ] = X [ 178ULL ] ; t283 [ 579ULL ] = X [
163ULL ] ; t283 [ 580ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 581ULL ] = X [ 164ULL
] ; t283 [ 582ULL ] = X [ 165ULL ] ; t283 [ 583ULL ] = t419 *
7.8539816339744827E-5 ; t283 [ 584ULL ] = X [ 178ULL ] ; t283 [ 585ULL ] = X
[ 179ULL ] * 0.1 ; t283 [ 586ULL ] = X [ 180ULL ] ; t283 [ 587ULL ] = X [
181ULL ] ; t283 [ 588ULL ] = - X [ 172ULL ] ; t283 [ 589ULL ] = X [ 163ULL ]
; t283 [ 590ULL ] = X [ 24ULL ] * 0.1 ; t283 [ 591ULL ] = X [ 164ULL ] ; t283
[ 592ULL ] = X [ 165ULL ] ; t283 [ 593ULL ] = - X [ 170ULL ] ; t283 [ 594ULL
] = X [ 206ULL ] ; t283 [ 595ULL ] = - X [ 172ULL ] ; t283 [ 596ULL ] = - X [
173ULL ] ; t283 [ 597ULL ] = - X [ 174ULL ] ; t283 [ 598ULL ] = X [ 203ULL ]
; t283 [ 599ULL ] = X [ 202ULL ] ; t283 [ 600ULL ] = X [ 200ULL ] ; t283 [
601ULL ] = X [ 201ULL ] * 0.1 ; t283 [ 602ULL ] = X [ 204ULL ] ; t283 [
603ULL ] = X [ 205ULL ] ; t283 [ 604ULL ] = t520 ; t283 [ 605ULL ] = - X [
170ULL ] ; t283 [ 606ULL ] = X [ 170ULL ] ; t283 [ 607ULL ] = X [ 178ULL ] ;
t283 [ 608ULL ] = X [ 179ULL ] * 0.1 ; t283 [ 609ULL ] = X [ 180ULL ] ; t283
[ 610ULL ] = X [ 181ULL ] ; t283 [ 611ULL ] = X [ 170ULL ] ; t283 [ 612ULL ]
= X [ 206ULL ] ; t283 [ 613ULL ] = X [ 172ULL ] ; t283 [ 614ULL ] = X [
173ULL ] ; t283 [ 615ULL ] = X [ 174ULL ] ; t283 [ 616ULL ] = X [ 203ULL ] ;
t283 [ 617ULL ] = X [ 202ULL ] ; t283 [ 618ULL ] = X [ 172ULL ] ; t283 [
619ULL ] = - X [ 173ULL ] ; t283 [ 620ULL ] = X [ 173ULL ] ; t283 [ 621ULL ]
= - X [ 174ULL ] ; t283 [ 622ULL ] = X [ 174ULL ] ; t283 [ 623ULL ] = t517 *
0.1 ; t283 [ 624ULL ] = U_idx_2 ; t283 [ 625ULL ] = X [ 207ULL ] ; t283 [
626ULL ] = X [ 208ULL ] ; t283 [ 627ULL ] = X [ 209ULL ] ; t283 [ 628ULL ] =
X [ 210ULL ] ; t283 [ 629ULL ] = X [ 211ULL ] ; t283 [ 630ULL ] = X [ 219ULL
] ; t283 [ 631ULL ] = X [ 218ULL ] ; t283 [ 632ULL ] = X [ 207ULL ] ; t283 [
633ULL ] = X [ 208ULL ] ; t283 [ 634ULL ] = X [ 209ULL ] ; t283 [ 635ULL ] =
X [ 211ULL ] ; t283 [ 636ULL ] = X [ 212ULL ] ; t283 [ 637ULL ] = X [ 213ULL
] ; t283 [ 638ULL ] = X [ 214ULL ] ; t283 [ 639ULL ] = X [ 215ULL ] ; t283 [
640ULL ] = X [ 216ULL ] ; t283 [ 641ULL ] = X [ 217ULL ] ; t283 [ 642ULL ] =
intrm_sf_mf_401 ; t283 [ 643ULL ] = X [ 213ULL ] ; t283 [ 644ULL ] = X [
214ULL ] ; t283 [ 645ULL ] = X [ 215ULL ] ; t283 [ 646ULL ] = t523 * 100000.0
; t283 [ 647ULL ] = ( 1.0 - X [ 218ULL ] ) - X [ 219ULL ] ; t283 [ 648ULL ] =
X [ 220ULL ] ; t283 [ 649ULL ] = X [ 221ULL ] ; t283 [ 650ULL ] = X [ 31ULL ]
* 0.1 ; t283 [ 651ULL ] = X [ 222ULL ] ; t283 [ 652ULL ] = X [ 223ULL ] ;
t283 [ 653ULL ] = X [ 207ULL ] ; t283 [ 654ULL ] = X [ 208ULL ] ; t283 [
655ULL ] = X [ 209ULL ] ; t283 [ 656ULL ] = X [ 221ULL ] ; t283 [ 657ULL ] =
X [ 31ULL ] * 0.1 ; t283 [ 658ULL ] = X [ 222ULL ] ; t283 [ 659ULL ] = X [
223ULL ] ; t283 [ 660ULL ] = X [ 225ULL ] ; t283 [ 661ULL ] = X [ 228ULL ] ;
t283 [ 662ULL ] = X [ 207ULL ] ; t283 [ 663ULL ] = X [ 208ULL ] ; t283 [
664ULL ] = X [ 209ULL ] ; t283 [ 665ULL ] = - X [ 211ULL ] ; t283 [ 666ULL ]
= X [ 229ULL ] ; t283 [ 667ULL ] = - X [ 213ULL ] ; t283 [ 668ULL ] = - X [
214ULL ] ; t283 [ 669ULL ] = - X [ 215ULL ] ; t283 [ 670ULL ] = X [ 230ULL ]
; t283 [ 671ULL ] = X [ 231ULL ] ; t283 [ 672ULL ] = - X [ 213ULL ] ; t283 [
673ULL ] = X [ 226ULL ] ; t283 [ 674ULL ] = X [ 227ULL ] ; t283 [ 675ULL ] =
X [ 221ULL ] ; t283 [ 676ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 677ULL ] = X [
222ULL ] ; t283 [ 678ULL ] = X [ 223ULL ] ; t283 [ 679ULL ] = X [ 224ULL ] ;
t283 [ 680ULL ] = X [ 229ULL ] ; t283 [ 681ULL ] = X [ 213ULL ] ; t283 [
682ULL ] = X [ 214ULL ] ; t283 [ 683ULL ] = X [ 215ULL ] ; t283 [ 684ULL ] =
X [ 230ULL ] ; t283 [ 685ULL ] = X [ 231ULL ] ; t283 [ 686ULL ] = X [ 213ULL
] ; t283 [ 687ULL ] = - X [ 213ULL ] ; t283 [ 688ULL ] = - X [ 211ULL ] ;
t283 [ 689ULL ] = X [ 224ULL ] ; t283 [ 690ULL ] = - X [ 214ULL ] ; t283 [
691ULL ] = X [ 214ULL ] ; t283 [ 692ULL ] = - X [ 215ULL ] ; t283 [ 693ULL ]
= X [ 215ULL ] ; t283 [ 694ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_power ; t283 [ 695ULL ]
= X [ 221ULL ] ; t283 [ 696ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 697ULL ] = X [
222ULL ] ; t283 [ 698ULL ] = X [ 223ULL ] ; t283 [ 699ULL ] = X [ 232ULL ] ;
t283 [ 700ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 701ULL ] = X [ 233ULL ] ; t283 [
702ULL ] = X [ 234ULL ] ; t283 [ 703ULL ] = X [ 32ULL ] ; t283 [ 704ULL ] = X
[ 31ULL ] * 0.1 ; t283 [ 705ULL ] = X [ 33ULL ] ; t283 [ 706ULL ] = X [ 34ULL
] ; t283 [ 707ULL ] = X [ 32ULL ] ; t283 [ 708ULL ] = X [ 31ULL ] * 0.1 ;
t283 [ 709ULL ] = X [ 33ULL ] ; t283 [ 710ULL ] = X [ 34ULL ] ; for ( t398 =
0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 711ULL ] = t301 [ t398 ] ; }
t283 [ 719ULL ] = X [ 32ULL ] ; t283 [ 720ULL ] = X [ 235ULL ] ; t283 [
721ULL ] = - X [ 224ULL ] ; t283 [ 722ULL ] = X [ 239ULL ] ; t283 [ 723ULL ]
= X [ 32ULL ] - 273.15 ; t283 [ 724ULL ] = X [ 33ULL ] ; t283 [ 725ULL ] = X
[ 237ULL ] ; t283 [ 726ULL ] = X [ 34ULL ] ; t283 [ 727ULL ] = X [ 31ULL ] *
0.1 ; t283 [ 728ULL ] = t529 * 100000.0 ; t283 [ 729ULL ] = X [ 236ULL ] ;
t283 [ 730ULL ] = X [ 32ULL ] ; t283 [ 731ULL ] = X [ 33ULL ] ; t283 [ 732ULL
] = X [ 34ULL ] ; t283 [ 733ULL ] = t530 ; t283 [ 734ULL ] = X [ 221ULL ] ;
t283 [ 735ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 736ULL ] = X [ 222ULL ] ; t283 [
737ULL ] = X [ 223ULL ] ; t283 [ 738ULL ] = - X [ 224ULL ] ; t283 [ 739ULL ]
= X [ 240ULL ] ; t283 [ 740ULL ] = - X [ 213ULL ] ; t283 [ 741ULL ] = - X [
214ULL ] ; t283 [ 742ULL ] = - X [ 215ULL ] ; t283 [ 743ULL ] = X [ 241ULL ]
; t283 [ 744ULL ] = X [ 242ULL ] ; t283 [ 745ULL ] = X [ 232ULL ] ; t283 [
746ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 747ULL ] = X [ 233ULL ] ; t283 [ 748ULL
] = X [ 234ULL ] ; t283 [ 749ULL ] = X [ 239ULL ] ; t283 [ 750ULL ] = X [
243ULL ] ; t283 [ 751ULL ] = X [ 244ULL ] ; t283 [ 752ULL ] = X [ 245ULL ] ;
t283 [ 753ULL ] = X [ 246ULL ] ; t283 [ 754ULL ] = X [ 247ULL ] ; t283 [
755ULL ] = X [ 248ULL ] ; t283 [ 756ULL ] = t533 ; t283 [ 757ULL ] = - X [
213ULL ] ; t283 [ 758ULL ] = X [ 244ULL ] ; t283 [ 759ULL ] = - X [ 214ULL ]
; t283 [ 760ULL ] = X [ 245ULL ] ; t283 [ 761ULL ] = - X [ 215ULL ] ; t283 [
762ULL ] = X [ 246ULL ] ; t283 [ 763ULL ] = ( 1.0 - X [ 34ULL ] ) - X [ 33ULL
] ; t283 [ 764ULL ] = X [ 238ULL ] ; t283 [ 765ULL ] = X [ 232ULL ] ; t283 [
766ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 767ULL ] = X [ 233ULL ] ; t283 [ 768ULL
] = X [ 234ULL ] ; t283 [ 769ULL ] = X [ 232ULL ] ; t283 [ 770ULL ] = X [
31ULL ] * 0.1 ; t283 [ 771ULL ] = X [ 233ULL ] ; t283 [ 772ULL ] = X [ 234ULL
] ; t283 [ 773ULL ] = - X [ 244ULL ] ; t283 [ 774ULL ] = - X [ 245ULL ] ;
t283 [ 775ULL ] = - X [ 246ULL ] ; t283 [ 776ULL ] = X [ 239ULL ] * - 1000.0
; t283 [ 777ULL ] = - X [ 239ULL ] ; t283 [ 778ULL ] = - X [ 244ULL ] ; t283
[ 779ULL ] = - X [ 245ULL ] ; t283 [ 780ULL ] = - X [ 246ULL ] ; t283 [
781ULL ] = - X [ 244ULL ] ; t283 [ 782ULL ] = U_idx_3 ; t283 [ 783ULL ] =
t528 * 9.5492965855137211 ; t283 [ 784ULL ] = X [ 232ULL ] ; t283 [ 785ULL ]
= X [ 31ULL ] * 0.1 ; t283 [ 786ULL ] = X [ 233ULL ] ; t283 [ 787ULL ] = X [
234ULL ] ; t283 [ 788ULL ] = X [ 32ULL ] ; t283 [ 789ULL ] = X [ 32ULL ] ;
t283 [ 790ULL ] = X [ 221ULL ] ; t283 [ 791ULL ] = X [ 31ULL ] * 0.1 ; t283 [
792ULL ] = X [ 222ULL ] ; t283 [ 793ULL ] = X [ 223ULL ] ; t283 [ 794ULL ] =
X [ 207ULL ] ; t283 [ 795ULL ] = X [ 208ULL ] ; t283 [ 796ULL ] = X [ 209ULL
] ; t283 [ 797ULL ] = X [ 221ULL ] ; t283 [ 798ULL ] = X [ 31ULL ] * 0.1 ;
t283 [ 799ULL ] = X [ 222ULL ] ; t283 [ 800ULL ] = X [ 223ULL ] ; t283 [
801ULL ] = t534 * 1000.0 ; t283 [ 802ULL ] = t534 * 1111.1111111111111 ; t283
[ 803ULL ] = t534 * 1111.1111111111111 ; t283 [ 804ULL ] = - ( X [ 31ULL ] -
1.01325 ) * 99999.999999999985 ; t283 [ 805ULL ] = t532 * 1.0E-6 ; t283 [
806ULL ] = t534 * 1000.0 ; t283 [ 807ULL ] = X [ 207ULL ] ; t283 [ 808ULL ] =
X [ 208ULL ] ; t283 [ 809ULL ] = X [ 209ULL ] ; t283 [ 810ULL ] = X [ 221ULL
] ; t283 [ 811ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 812ULL ] = X [ 222ULL ] ;
t283 [ 813ULL ] = X [ 223ULL ] ; t283 [ 814ULL ] = - ( X [ 31ULL ] - 1.01325
) * 99999.999999999985 ; t283 [ 815ULL ] = X [ 207ULL ] - X [ 221ULL ] ; t283
[ 816ULL ] = X [ 221ULL ] ; t283 [ 817ULL ] = X [ 31ULL ] * 0.1 ; t283 [
818ULL ] = X [ 222ULL ] ; t283 [ 819ULL ] = X [ 223ULL ] ; t283 [ 820ULL ] =
X [ 221ULL ] ; t283 [ 821ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 822ULL ] = X [
222ULL ] ; t283 [ 823ULL ] = X [ 223ULL ] ; t283 [ 824ULL ] = - X [ 224ULL ]
; t283 [ 825ULL ] = t532 * 1.0E-6 ; t283 [ 826ULL ] = - X [ 213ULL ] ; t283 [
827ULL ] = - X [ 214ULL ] ; t283 [ 828ULL ] = - X [ 215ULL ] ; t283 [ 829ULL
] = U_idx_3 ; t283 [ 830ULL ] = X [ 249ULL ] ; t283 [ 831ULL ] = t536 *
0.99999999999999978 / 0.99999999999999978 * 9.5492965855137211 ; t283 [
832ULL ] = - X [ 213ULL ] ; t283 [ 833ULL ] = X [ 31ULL ] *
99999.999999999985 ; t283 [ 834ULL ] = X [ 249ULL ] ; t283 [ 835ULL ] = X [
207ULL ] ; t283 [ 836ULL ] = X [ 208ULL ] ; t283 [ 837ULL ] = X [ 209ULL ] ;
t283 [ 838ULL ] = X [ 207ULL ] ; t283 [ 839ULL ] = X [ 221ULL ] ; t283 [
840ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 841ULL ] = X [ 222ULL ] ; t283 [ 842ULL
] = X [ 223ULL ] ; t283 [ 843ULL ] = X [ 31ULL ] * 99999.999999999985 ; t283
[ 844ULL ] = X [ 221ULL ] ; t283 [ 845ULL ] = X [ 207ULL ] ; t283 [ 846ULL ]
= X [ 208ULL ] ; t283 [ 847ULL ] = X [ 209ULL ] ; t283 [ 848ULL ] = - X [
213ULL ] ; t283 [ 849ULL ] = X [ 221ULL ] ; t283 [ 850ULL ] = X [ 31ULL ] *
0.1 ; t283 [ 851ULL ] = X [ 222ULL ] ; t283 [ 852ULL ] = X [ 223ULL ] ; t283
[ 853ULL ] = t536 * 9.5492965855137211 ; t283 [ 854ULL ] = X [ 159ULL ] ;
t283 [ 855ULL ] = X [ 160ULL ] * 0.1 ; t283 [ 856ULL ] = X [ 161ULL ] ; t283
[ 857ULL ] = X [ 162ULL ] ; t283 [ 858ULL ] = X [ 250ULL ] ; t283 [ 859ULL ]
= X [ 251ULL ] * 0.1 ; t283 [ 860ULL ] = X [ 252ULL ] ; t283 [ 861ULL ] = X [
253ULL ] ; t283 [ 862ULL ] = U_idx_4 ; t283 [ 863ULL ] = X [ 254ULL ] ; t283
[ 864ULL ] = X [ 35ULL ] ; t283 [ 865ULL ] = X [ 36ULL ] ; t283 [ 866ULL ] =
X [ 37ULL ] ; t283 [ 867ULL ] = U_idx_5 ; t283 [ 868ULL ] = - U_idx_4 ; for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 869ULL ] = t318 [ t398
] ; } t283 [ 877ULL ] = X [ 258ULL ] ; t283 [ 878ULL ] = X [ 255ULL ] *
1.0E-5 * 99999.999999999985 ; t283 [ 879ULL ] = X [ 35ULL ] ; t283 [ 880ULL ]
= X [ 257ULL ] ; t283 [ 881ULL ] = X [ 257ULL ] ; t283 [ 882ULL ] = X [
260ULL ] ; t283 [ 883ULL ] = X [ 260ULL ] ; t283 [ 884ULL ] = X [ 159ULL ] ;
t283 [ 885ULL ] = X [ 160ULL ] * 0.1 ; t283 [ 886ULL ] = X [ 161ULL ] ; t283
[ 887ULL ] = X [ 162ULL ] ; t283 [ 888ULL ] = X [ 250ULL ] ; t283 [ 889ULL ]
= X [ 251ULL ] * 0.1 ; t283 [ 890ULL ] = X [ 252ULL ] ; t283 [ 891ULL ] = X [
253ULL ] ; t283 [ 892ULL ] = X [ 36ULL ] ; t283 [ 893ULL ] = X [ 258ULL ] ;
t283 [ 894ULL ] = X [ 37ULL ] ; t283 [ 895ULL ] = X [ 261ULL ] ; t283 [
896ULL ] = X [ 35ULL ] - 273.15 ; t283 [ 897ULL ] = - X [ 186ULL ] ; t283 [
898ULL ] = X [ 262ULL ] * 0.1 ; t283 [ 899ULL ] = X [ 38ULL ] * 0.1 ; t283 [
900ULL ] = X [ 259ULL ] ; t283 [ 901ULL ] = t548 * 100000.0 ; t283 [ 902ULL ]
= X [ 264ULL ] ; t283 [ 903ULL ] = X [ 263ULL ] ; t283 [ 904ULL ] = X [
265ULL ] * 0.1 ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 +
905ULL ] = t318 [ t398 ] ; } t283 [ 913ULL ] = X [ 260ULL ] ; t283 [ 914ULL ]
= X [ 256ULL ] ; t283 [ 915ULL ] = t549 ; t283 [ 916ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ; t283 [ 917ULL ] =
- X [ 191ULL ] ; t283 [ 918ULL ] = X [ 266ULL ] ; t283 [ 919ULL ] = - X [
254ULL ] ; t283 [ 920ULL ] = X [ 257ULL ] ; t283 [ 921ULL ] = X [ 35ULL ] ;
t283 [ 922ULL ] = X [ 36ULL ] ; t283 [ 923ULL ] = X [ 37ULL ] ; t283 [ 924ULL
] = t551 ; t283 [ 925ULL ] = X [ 159ULL ] ; t283 [ 926ULL ] = X [ 160ULL ] *
0.1 ; t283 [ 927ULL ] = X [ 161ULL ] ; t283 [ 928ULL ] = X [ 162ULL ] ; t283
[ 929ULL ] = - X [ 191ULL ] ; t283 [ 930ULL ] = X [ 267ULL ] ; t283 [ 931ULL
] = - X [ 186ULL ] ; t283 [ 932ULL ] = - X [ 196ULL ] ; t283 [ 933ULL ] = - X
[ 197ULL ] ; t283 [ 934ULL ] = X [ 268ULL ] ; t283 [ 935ULL ] = X [ 269ULL ]
; t283 [ 936ULL ] = X [ 250ULL ] ; t283 [ 937ULL ] = X [ 251ULL ] * 0.1 ;
t283 [ 938ULL ] = X [ 252ULL ] ; t283 [ 939ULL ] = X [ 253ULL ] ; t283 [
940ULL ] = X [ 266ULL ] ; t283 [ 941ULL ] = X [ 270ULL ] ; t283 [ 942ULL ] =
X [ 263ULL ] ; t283 [ 943ULL ] = X [ 271ULL ] ; t283 [ 944ULL ] = X [ 272ULL
] ; t283 [ 945ULL ] = X [ 273ULL ] ; t283 [ 946ULL ] = X [ 274ULL ] ; t283 [
947ULL ] = t554 ; t283 [ 948ULL ] = - X [ 196ULL ] ; t283 [ 949ULL ] = X [
271ULL ] ; t283 [ 950ULL ] = U_idx_4 ; t283 [ 951ULL ] = - X [ 197ULL ] ;
t283 [ 952ULL ] = X [ 272ULL ] ; t283 [ 953ULL ] = t522 * 0.1 ; t283 [ 954ULL
] = t590 * 0.1 ; t283 [ 955ULL ] = ( 1.0 - X [ 37ULL ] ) - X [ 36ULL ] ; t283
[ 956ULL ] = U_idx_5 ; t283 [ 957ULL ] = U_idx_4 ; t283 [ 958ULL ] = X [
64ULL ] ; t283 [ 959ULL ] = X [ 65ULL ] * 0.1 ; t283 [ 960ULL ] = X [ 66ULL ]
; t283 [ 961ULL ] = X [ 67ULL ] ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ )
{ t283 [ t398 + 962ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t398 ] ; } for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 970ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t398 ] ; } t283
[ 978ULL ] = X [ 250ULL ] ; t283 [ 979ULL ] = X [ 251ULL ] * 0.1 ; t283 [
980ULL ] = X [ 252ULL ] ; t283 [ 981ULL ] = X [ 253ULL ] ; t283 [ 982ULL ] =
X [ 64ULL ] ; t283 [ 983ULL ] = X [ 65ULL ] * 0.1 ; t283 [ 984ULL ] = X [
66ULL ] ; t283 [ 985ULL ] = X [ 67ULL ] ; t283 [ 986ULL ] = X [ 7ULL ] ; t283
[ 987ULL ] = X [ 75ULL ] ; t283 [ 988ULL ] = X [ 8ULL ] ; t283 [ 989ULL ] = X
[ 275ULL ] ; t283 [ 990ULL ] = X [ 6ULL ] - 273.15 ; t283 [ 991ULL ] = - X [
263ULL ] ; t283 [ 992ULL ] = X [ 276ULL ] * 0.1 ; t283 [ 993ULL ] = X [ 39ULL
] * 0.1 ; t283 [ 994ULL ] = X [ 76ULL ] ; t283 [ 995ULL ] = t555 * 100000.0 ;
t283 [ 996ULL ] = X [ 278ULL ] ; t283 [ 997ULL ] = X [ 277ULL ] ; t283 [
998ULL ] = X [ 279ULL ] * 0.1 ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) {
t283 [ t398 + 999ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t398 ] ; } t283
[ 1007ULL ] = X [ 74ULL ] ; t283 [ 1008ULL ] = t558 ; t283 [ 1009ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Mach_B ; t283 [ 1010ULL ] =
- X [ 266ULL ] ; t283 [ 1011ULL ] = X [ 280ULL ] ; t283 [ 1012ULL ] = X [
107ULL ] ; t283 [ 1013ULL ] = X [ 73ULL ] ; t283 [ 1014ULL ] = X [ 6ULL ] ;
t283 [ 1015ULL ] = X [ 7ULL ] ; t283 [ 1016ULL ] = X [ 8ULL ] ; t283 [
1017ULL ] = t440 ; t283 [ 1018ULL ] = X [ 250ULL ] ; t283 [ 1019ULL ] = X [
251ULL ] * 0.1 ; t283 [ 1020ULL ] = X [ 252ULL ] ; t283 [ 1021ULL ] = X [
253ULL ] ; t283 [ 1022ULL ] = - X [ 266ULL ] ; t283 [ 1023ULL ] = X [ 281ULL
] ; t283 [ 1024ULL ] = - X [ 263ULL ] ; t283 [ 1025ULL ] = - X [ 271ULL ] ;
t283 [ 1026ULL ] = - X [ 272ULL ] ; t283 [ 1027ULL ] = X [ 282ULL ] ; t283 [
1028ULL ] = X [ 283ULL ] ; t283 [ 1029ULL ] = X [ 64ULL ] ; t283 [ 1030ULL ]
= X [ 65ULL ] * 0.1 ; t283 [ 1031ULL ] = X [ 66ULL ] ; t283 [ 1032ULL ] = X [
67ULL ] ; t283 [ 1033ULL ] = X [ 280ULL ] ; t283 [ 1034ULL ] = X [ 284ULL ] ;
t283 [ 1035ULL ] = X [ 277ULL ] ; t283 [ 1036ULL ] = X [ 285ULL ] ; t283 [
1037ULL ] = X [ 286ULL ] ; t283 [ 1038ULL ] = X [ 287ULL ] ; t283 [ 1039ULL ]
= X [ 288ULL ] ; t283 [ 1040ULL ] = t563 ; t283 [ 1041ULL ] = - X [ 271ULL ]
; t283 [ 1042ULL ] = X [ 285ULL ] ; t283 [ 1043ULL ] = - X [ 272ULL ] ; t283
[ 1044ULL ] = X [ 286ULL ] ; t283 [ 1045ULL ] = t550 * 0.1 ; t283 [ 1046ULL ]
= t645 * 0.1 ; t283 [ 1047ULL ] = ( 1.0 - X [ 8ULL ] ) - X [ 7ULL ] ; t283 [
1048ULL ] = X [ 64ULL ] ; t283 [ 1049ULL ] = X [ 65ULL ] * 0.1 ; t283 [
1050ULL ] = X [ 66ULL ] ; t283 [ 1051ULL ] = X [ 67ULL ] ; t283 [ 1052ULL ] =
X [ 111ULL ] ; t283 [ 1053ULL ] = X [ 112ULL ] * 0.1 ; t283 [ 1054ULL ] = X [
113ULL ] ; t283 [ 1055ULL ] = X [ 114ULL ] ; t283 [ 1056ULL ] = X [ 10ULL ] ;
t283 [ 1057ULL ] = X [ 80ULL ] ; t283 [ 1058ULL ] = X [ 11ULL ] ; t283 [
1059ULL ] = X [ 289ULL ] ; t283 [ 1060ULL ] = X [ 9ULL ] - 273.15 ; t283 [
1061ULL ] = - X [ 277ULL ] ; t283 [ 1062ULL ] = X [ 290ULL ] * 0.1 ; t283 [
1063ULL ] = X [ 40ULL ] * 0.1 ; t283 [ 1064ULL ] = X [ 81ULL ] ; t283 [
1065ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_rho_I *
100000.0 ; t283 [ 1066ULL ] = X [ 291ULL ] ; t283 [ 1067ULL ] = - X [ 134ULL
] ; t283 [ 1068ULL ] = X [ 292ULL ] * 0.1 ; for ( t398 = 0ULL ; t398 < 8ULL ;
t398 ++ ) { t283 [ t398 + 1069ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t398 ] ; } t283
[ 1077ULL ] = X [ 77ULL ] ; t283 [ 1078ULL ] = t567 ; t283 [ 1079ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_A_choke ; t283 [
1080ULL ] = - X [ 280ULL ] ; t283 [ 1081ULL ] = - X [ 143ULL ] ; t283 [
1082ULL ] = - X [ 99ULL ] - X [ 102ULL ] ; t283 [ 1083ULL ] = X [ 108ULL ] ;
t283 [ 1084ULL ] = X [ 79ULL ] ; t283 [ 1085ULL ] = X [ 9ULL ] ; t283 [
1086ULL ] = X [ 10ULL ] ; t283 [ 1087ULL ] = X [ 11ULL ] ; t283 [ 1088ULL ] =
t571 ; t283 [ 1089ULL ] = X [ 64ULL ] ; t283 [ 1090ULL ] = X [ 65ULL ] * 0.1
; t283 [ 1091ULL ] = X [ 66ULL ] ; t283 [ 1092ULL ] = X [ 67ULL ] ; t283 [
1093ULL ] = - X [ 280ULL ] ; t283 [ 1094ULL ] = X [ 293ULL ] ; t283 [ 1095ULL
] = - X [ 277ULL ] ; t283 [ 1096ULL ] = - X [ 285ULL ] ; t283 [ 1097ULL ] = -
X [ 286ULL ] ; t283 [ 1098ULL ] = X [ 294ULL ] ; t283 [ 1099ULL ] = X [
295ULL ] ; t283 [ 1100ULL ] = X [ 111ULL ] ; t283 [ 1101ULL ] = X [ 112ULL ]
* 0.1 ; t283 [ 1102ULL ] = X [ 113ULL ] ; t283 [ 1103ULL ] = X [ 114ULL ] ;
t283 [ 1104ULL ] = - X [ 143ULL ] ; t283 [ 1105ULL ] = X [ 296ULL ] ; t283 [
1106ULL ] = - X [ 134ULL ] ; t283 [ 1107ULL ] = - X [ 145ULL ] ; t283 [
1108ULL ] = - X [ 146ULL ] ; t283 [ 1109ULL ] = X [ 297ULL ] ; t283 [ 1110ULL
] = X [ 298ULL ] ; t283 [ 1111ULL ] = t581 ; t283 [ 1112ULL ] = - X [ 285ULL
] ; t283 [ 1113ULL ] = - X [ 145ULL ] ; t283 [ 1114ULL ] = X [ 98ULL ] ; t283
[ 1115ULL ] = X [ 104ULL ] ; t283 [ 1116ULL ] = - X [ 286ULL ] ; t283 [
1117ULL ] = - X [ 146ULL ] ; t283 [ 1118ULL ] = t368_idx_0 * 0.1 ; t283 [
1119ULL ] = t372_idx_0 * 0.1 ; t283 [ 1120ULL ] = ( 1.0 - X [ 11ULL ] ) - X [
10ULL ] ; t283 [ 1121ULL ] = X [ 9ULL ] ; t283 [ 1122ULL ] = X [ 10ULL ] ;
t283 [ 1123ULL ] = X [ 11ULL ] ; t283 [ 1124ULL ] = X [ 250ULL ] ; t283 [
1125ULL ] = X [ 251ULL ] * 0.1 ; t283 [ 1126ULL ] = X [ 252ULL ] ; t283 [
1127ULL ] = X [ 253ULL ] ; t283 [ 1128ULL ] = X [ 111ULL ] ; t283 [ 1129ULL ]
= X [ 112ULL ] * 0.1 ; t283 [ 1130ULL ] = X [ 113ULL ] ; t283 [ 1131ULL ] = X
[ 114ULL ] ; t283 [ 1132ULL ] = X [ 232ULL ] ; t283 [ 1133ULL ] = X [ 31ULL ]
* 0.1 ; t283 [ 1134ULL ] = X [ 233ULL ] ; t283 [ 1135ULL ] = X [ 234ULL ] ;
t283 [ 1136ULL ] = X [ 299ULL ] ; t283 [ 1137ULL ] = X [ 300ULL ] * 0.1 ;
t283 [ 1138ULL ] = X [ 301ULL ] ; t283 [ 1139ULL ] = X [ 302ULL ] ; t283 [
1140ULL ] = U_idx_6 ; t283 [ 1141ULL ] = X [ 303ULL ] ; t283 [ 1142ULL ] = X
[ 41ULL ] ; t283 [ 1143ULL ] = X [ 42ULL ] ; t283 [ 1144ULL ] = X [ 43ULL ] ;
t283 [ 1145ULL ] = U_idx_7 ; t283 [ 1146ULL ] = - U_idx_6 ; for ( t398 = 0ULL
; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 1147ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t398 ] ; }
t283 [ 1155ULL ] = X [ 307ULL ] ; t283 [ 1156ULL ] = X [ 304ULL ] * 1.0E-5 *
99999.999999999985 ; t283 [ 1157ULL ] = X [ 41ULL ] ; t283 [ 1158ULL ] = X [
306ULL ] ; t283 [ 1159ULL ] = X [ 306ULL ] ; t283 [ 1160ULL ] = X [ 309ULL ]
; t283 [ 1161ULL ] = X [ 309ULL ] ; t283 [ 1162ULL ] = X [ 232ULL ] ; t283 [
1163ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 1164ULL ] = X [ 233ULL ] ; t283 [
1165ULL ] = X [ 234ULL ] ; t283 [ 1166ULL ] = X [ 299ULL ] ; t283 [ 1167ULL ]
= X [ 300ULL ] * 0.1 ; t283 [ 1168ULL ] = X [ 301ULL ] ; t283 [ 1169ULL ] = X
[ 302ULL ] ; t283 [ 1170ULL ] = X [ 42ULL ] ; t283 [ 1171ULL ] = X [ 307ULL ]
; t283 [ 1172ULL ] = X [ 43ULL ] ; t283 [ 1173ULL ] = X [ 310ULL ] ; t283 [
1174ULL ] = X [ 41ULL ] - 273.15 ; t283 [ 1175ULL ] = - X [ 244ULL ] ; t283 [
1176ULL ] = X [ 311ULL ] * 0.1 ; t283 [ 1177ULL ] = X [ 44ULL ] * 0.1 ; t283
[ 1178ULL ] = X [ 308ULL ] ; t283 [ 1179ULL ] = t593 * 100000.0 ; t283 [
1180ULL ] = X [ 313ULL ] ; t283 [ 1181ULL ] = X [ 312ULL ] ; t283 [ 1182ULL ]
= X [ 314ULL ] * 0.1 ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [
t398 + 1183ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t398 ] ; }
t283 [ 1191ULL ] = X [ 309ULL ] ; t283 [ 1192ULL ] = X [ 305ULL ] ; t283 [
1193ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Mach_A ; t283 [
1194ULL ] = t592 ; t283 [ 1195ULL ] = - X [ 239ULL ] ; t283 [ 1196ULL ] = X [
315ULL ] ; t283 [ 1197ULL ] = - X [ 303ULL ] ; t283 [ 1198ULL ] = X [ 306ULL
] ; t283 [ 1199ULL ] = X [ 41ULL ] ; t283 [ 1200ULL ] = X [ 42ULL ] ; t283 [
1201ULL ] = X [ 43ULL ] ; t283 [ 1202ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_W ; t283 [ 1203ULL ] = X [
232ULL ] ; t283 [ 1204ULL ] = X [ 31ULL ] * 0.1 ; t283 [ 1205ULL ] = X [
233ULL ] ; t283 [ 1206ULL ] = X [ 234ULL ] ; t283 [ 1207ULL ] = - X [ 239ULL
] ; t283 [ 1208ULL ] = X [ 316ULL ] ; t283 [ 1209ULL ] = - X [ 244ULL ] ;
t283 [ 1210ULL ] = - X [ 245ULL ] ; t283 [ 1211ULL ] = - X [ 246ULL ] ; t283
[ 1212ULL ] = X [ 317ULL ] ; t283 [ 1213ULL ] = X [ 318ULL ] ; t283 [ 1214ULL
] = X [ 299ULL ] ; t283 [ 1215ULL ] = X [ 300ULL ] * 0.1 ; t283 [ 1216ULL ] =
X [ 301ULL ] ; t283 [ 1217ULL ] = X [ 302ULL ] ; t283 [ 1218ULL ] = X [
315ULL ] ; t283 [ 1219ULL ] = X [ 319ULL ] ; t283 [ 1220ULL ] = X [ 312ULL ]
; t283 [ 1221ULL ] = X [ 320ULL ] ; t283 [ 1222ULL ] = X [ 321ULL ] ; t283 [
1223ULL ] = X [ 322ULL ] ; t283 [ 1224ULL ] = X [ 323ULL ] ; t283 [ 1225ULL ]
= t599 ; t283 [ 1226ULL ] = - X [ 245ULL ] ; t283 [ 1227ULL ] = X [ 320ULL ]
; t283 [ 1228ULL ] = U_idx_6 ; t283 [ 1229ULL ] = - X [ 246ULL ] ; t283 [
1230ULL ] = X [ 321ULL ] ; t283 [ 1231ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.1 ; t283 [
1232ULL ] = t641 * 0.1 ; t283 [ 1233ULL ] = ( 1.0 - X [ 43ULL ] ) - X [ 42ULL
] ; t283 [ 1234ULL ] = U_idx_7 ; t283 [ 1235ULL ] = U_idx_6 ; t283 [ 1236ULL
] = X [ 324ULL ] ; t283 [ 1237ULL ] = X [ 325ULL ] * 0.1 ; t283 [ 1238ULL ] =
X [ 326ULL ] ; t283 [ 1239ULL ] = X [ 327ULL ] ; t283 [ 1240ULL ] = X [
328ULL ] ; t283 [ 1241ULL ] = - 920.95788639984789 + t488 * 1000.0 ; t283 [
1242ULL ] = ( X [ 328ULL ] * 0.0031415926535897937 - 0.92095788639984788 ) *
318.30988618379064 ; t283 [ 1243ULL ] = X [ 329ULL ] ; t283 [ 1244ULL ] = X [
330ULL ] ; t283 [ 1245ULL ] = X [ 331ULL ] ; t283 [ 1246ULL ] = X [ 332ULL ]
; t283 [ 1247ULL ] = X [ 333ULL ] ; t283 [ 1248ULL ] = X [ 341ULL ] ; t283 [
1249ULL ] = X [ 340ULL ] ; t283 [ 1250ULL ] = X [ 329ULL ] ; t283 [ 1251ULL ]
= X [ 330ULL ] ; t283 [ 1252ULL ] = X [ 331ULL ] ; t283 [ 1253ULL ] = X [
333ULL ] ; t283 [ 1254ULL ] = X [ 334ULL ] ; t283 [ 1255ULL ] = X [ 335ULL ]
; t283 [ 1256ULL ] = X [ 336ULL ] ; t283 [ 1257ULL ] = X [ 337ULL ] ; t283 [
1258ULL ] = X [ 338ULL ] ; t283 [ 1259ULL ] = X [ 339ULL ] ; t283 [ 1260ULL ]
= intrm_sf_mf_1018 ; t283 [ 1261ULL ] = X [ 335ULL ] ; t283 [ 1262ULL ] = X [
336ULL ] ; t283 [ 1263ULL ] = X [ 337ULL ] ; t283 [ 1264ULL ] = t598 *
100000.0 ; t283 [ 1265ULL ] = ( 1.0 - X [ 340ULL ] ) - X [ 341ULL ] ; t283 [
1266ULL ] = X [ 342ULL ] ; t283 [ 1267ULL ] = - 920.95788639984789 + t488 *
1000.0 ; t283 [ 1268ULL ] = X [ 324ULL ] ; t283 [ 1269ULL ] = X [ 325ULL ] *
0.1 ; t283 [ 1270ULL ] = X [ 326ULL ] ; t283 [ 1271ULL ] = X [ 327ULL ] ;
t283 [ 1272ULL ] = X [ 343ULL ] ; t283 [ 1273ULL ] = t602 * 0.1 ; t283 [
1274ULL ] = X [ 345ULL ] ; t283 [ 1275ULL ] = X [ 346ULL ] ; t283 [ 1276ULL ]
= X [ 48ULL ] ; t283 [ 1277ULL ] = X [ 351ULL ] ; t283 [ 1278ULL ] = X [
47ULL ] ; t283 [ 1279ULL ] = X [ 348ULL ] ; t283 [ 1280ULL ] = X [ 45ULL ] -
273.15 ; t283 [ 1281ULL ] = X [ 347ULL ] ; t283 [ 1282ULL ] = X [ 349ULL ] *
0.1 ; t283 [ 1283ULL ] = X [ 46ULL ] * 0.1 ; t283 [ 1284ULL ] = X [ 350ULL ]
; t283 [ 1285ULL ] = t608 * 100000.0 ; t283 [ 1286ULL ] = X [ 352ULL ] ; t283
[ 1287ULL ] = - X [ 335ULL ] ; t283 [ 1288ULL ] = X [ 353ULL ] * 0.1 ; for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 1289ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t398 ] ; } t283 [
1297ULL ] = X [ 328ULL ] ; t283 [ 1298ULL ] = X [ 354ULL ] ; t283 [ 1299ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_A ; t283 [ 1300ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Mach_B ; t283 [ 1301ULL ]
= X [ 356ULL ] ; t283 [ 1302ULL ] = - X [ 333ULL ] ; t283 [ 1303ULL ] =
0.92095788639984788 - t488 ; t283 [ 1304ULL ] = X [ 355ULL ] ; t283 [ 1305ULL
] = X [ 45ULL ] ; t283 [ 1306ULL ] = X [ 48ULL ] ; t283 [ 1307ULL ] = X [
47ULL ] ; t283 [ 1308ULL ] = intrm_sf_mf_1107 ; t283 [ 1309ULL ] = X [ 324ULL
] ; t283 [ 1310ULL ] = X [ 325ULL ] * 0.1 ; t283 [ 1311ULL ] = X [ 326ULL ] ;
t283 [ 1312ULL ] = X [ 327ULL ] ; t283 [ 1313ULL ] = X [ 356ULL ] ; t283 [
1314ULL ] = X [ 357ULL ] ; t283 [ 1315ULL ] = X [ 347ULL ] ; t283 [ 1316ULL ]
= X [ 358ULL ] ; t283 [ 1317ULL ] = X [ 359ULL ] ; t283 [ 1318ULL ] = X [
360ULL ] ; t283 [ 1319ULL ] = X [ 361ULL ] ; t283 [ 1320ULL ] = X [ 343ULL ]
; t283 [ 1321ULL ] = t602 * 0.1 ; t283 [ 1322ULL ] = X [ 345ULL ] ; t283 [
1323ULL ] = X [ 346ULL ] ; t283 [ 1324ULL ] = - X [ 333ULL ] ; t283 [ 1325ULL
] = X [ 362ULL ] ; t283 [ 1326ULL ] = - X [ 335ULL ] ; t283 [ 1327ULL ] = - X
[ 336ULL ] ; t283 [ 1328ULL ] = - X [ 337ULL ] ; t283 [ 1329ULL ] = X [
363ULL ] ; t283 [ 1330ULL ] = X [ 364ULL ] ; t283 [ 1331ULL ] = t614 ; t283 [
1332ULL ] = X [ 358ULL ] ; t283 [ 1333ULL ] = - X [ 336ULL ] ; t283 [ 1334ULL
] = X [ 359ULL ] ; t283 [ 1335ULL ] = - X [ 337ULL ] ; t283 [ 1336ULL ] =
t639 * 0.1 ; t283 [ 1337ULL ] = intrm_sf_mf_1150 * 0.1 ; t283 [ 1338ULL ] = (
1.0 - X [ 47ULL ] ) - X [ 48ULL ] ; t283 [ 1339ULL ] = X [ 343ULL ] ; t283 [
1340ULL ] = t602 * 0.1 ; t283 [ 1341ULL ] = X [ 345ULL ] ; t283 [ 1342ULL ] =
X [ 346ULL ] ; t283 [ 1343ULL ] = X [ 329ULL ] ; t283 [ 1344ULL ] = X [
330ULL ] ; t283 [ 1345ULL ] = X [ 331ULL ] ; t283 [ 1346ULL ] = ( X [ 344ULL
] - 1.0E-8 ) * 1.0E+6 ; t283 [ 1347ULL ] = X [ 344ULL ] ; t283 [ 1348ULL ] =
( X [ 344ULL ] - 1.0E-8 ) * 7812.5001220703134 ; t283 [ 1349ULL ] = ( X [
344ULL ] - 1.0E-8 ) * 1.0E+6 ; t283 [ 1350ULL ] = X [ 344ULL ] ; t283 [
1351ULL ] = X [ 344ULL ] * 0.0019634954084936209 ; t283 [ 1352ULL ] = t602 *
99999.999999999985 ; t283 [ 1353ULL ] = t606 * 0.1 ; t283 [ 1354ULL ] = ( X [
344ULL ] - 1.0E-8 ) * 7812.5001220703134 ; t283 [ 1355ULL ] = X [ 343ULL ] ;
t283 [ 1356ULL ] = t602 * 0.1 ; t283 [ 1357ULL ] = X [ 345ULL ] ; t283 [
1358ULL ] = X [ 346ULL ] ; t283 [ 1359ULL ] = t602 * 99999.999999999985 ;
t283 [ 1360ULL ] = X [ 343ULL ] ; t283 [ 1361ULL ] = X [ 343ULL ] ; t283 [
1362ULL ] = t602 * 0.1 ; t283 [ 1363ULL ] = X [ 345ULL ] ; t283 [ 1364ULL ] =
X [ 346ULL ] ; t283 [ 1365ULL ] = X [ 344ULL ] * 0.0019634954084936209 ; t283
[ 1366ULL ] = X [ 329ULL ] ; t283 [ 1367ULL ] = X [ 330ULL ] ; t283 [ 1368ULL
] = X [ 331ULL ] ; t283 [ 1369ULL ] = X [ 335ULL ] ; t283 [ 1370ULL ] = X [
343ULL ] ; t283 [ 1371ULL ] = t602 * 0.1 ; t283 [ 1372ULL ] = X [ 345ULL ] ;
t283 [ 1373ULL ] = X [ 346ULL ] ; t283 [ 1374ULL ] = X [ 333ULL ] ; t283 [
1375ULL ] = X [ 371ULL ] ; t283 [ 1376ULL ] = X [ 335ULL ] ; t283 [ 1377ULL ]
= X [ 336ULL ] ; t283 [ 1378ULL ] = X [ 337ULL ] ; t283 [ 1379ULL ] = X [
368ULL ] ; t283 [ 1380ULL ] = X [ 367ULL ] ; t283 [ 1381ULL ] = X [ 365ULL ]
; t283 [ 1382ULL ] = X [ 366ULL ] * 0.1 ; t283 [ 1383ULL ] = X [ 369ULL ] ;
t283 [ 1384ULL ] = X [ 370ULL ] ; t283 [ 1385ULL ] = t613 ; t283 [ 1386ULL ]
= X [ 333ULL ] ; t283 [ 1387ULL ] = - X [ 333ULL ] ; t283 [ 1388ULL ] = X [
329ULL ] ; t283 [ 1389ULL ] = X [ 330ULL ] ; t283 [ 1390ULL ] = X [ 331ULL ]
; t283 [ 1391ULL ] = - X [ 333ULL ] ; t283 [ 1392ULL ] = X [ 371ULL ] ; t283
[ 1393ULL ] = - X [ 335ULL ] ; t283 [ 1394ULL ] = - X [ 336ULL ] ; t283 [
1395ULL ] = - X [ 337ULL ] ; t283 [ 1396ULL ] = X [ 368ULL ] ; t283 [ 1397ULL
] = X [ 367ULL ] ; t283 [ 1398ULL ] = - X [ 335ULL ] ; t283 [ 1399ULL ] = X [
336ULL ] ; t283 [ 1400ULL ] = - X [ 336ULL ] ; t283 [ 1401ULL ] = X [ 337ULL
] ; t283 [ 1402ULL ] = - X [ 337ULL ] ; t283 [ 1403ULL ] = t606 * 0.1 ; t283
[ 1404ULL ] = U_idx_8 ; t283 [ 1405ULL ] = X [ 68ULL ] ; t283 [ 1406ULL ] = X
[ 69ULL ] * 0.1 ; t283 [ 1407ULL ] = X [ 70ULL ] ; t283 [ 1408ULL ] = X [
71ULL ] ; for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 1409ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t398 ] ; }
for ( t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 1417ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t398 ] ; } t283
[ 1425ULL ] = X [ 299ULL ] ; t283 [ 1426ULL ] = X [ 300ULL ] * 0.1 ; t283 [
1427ULL ] = X [ 301ULL ] ; t283 [ 1428ULL ] = X [ 302ULL ] ; t283 [ 1429ULL ]
= X [ 68ULL ] ; t283 [ 1430ULL ] = X [ 69ULL ] * 0.1 ; t283 [ 1431ULL ] = X [
70ULL ] ; t283 [ 1432ULL ] = X [ 71ULL ] ; t283 [ 1433ULL ] = X [ 13ULL ] ;
t283 [ 1434ULL ] = X [ 85ULL ] ; t283 [ 1435ULL ] = X [ 14ULL ] ; t283 [
1436ULL ] = X [ 372ULL ] ; t283 [ 1437ULL ] = X [ 12ULL ] - 273.15 ; t283 [
1438ULL ] = - X [ 312ULL ] ; t283 [ 1439ULL ] = X [ 373ULL ] * 0.1 ; t283 [
1440ULL ] = X [ 49ULL ] * 0.1 ; t283 [ 1441ULL ] = X [ 86ULL ] ; t283 [
1442ULL ] = t619 * 100000.0 ; t283 [ 1443ULL ] = X [ 375ULL ] ; t283 [
1444ULL ] = X [ 374ULL ] ; t283 [ 1445ULL ] = X [ 376ULL ] * 0.1 ; for ( t398
= 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 1446ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t398 ] ; } t283
[ 1454ULL ] = X [ 84ULL ] ; t283 [ 1455ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Mach_A ; t283 [ 1456ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_A_choked ; t283 [
1457ULL ] = - X [ 315ULL ] ; t283 [ 1458ULL ] = X [ 377ULL ] ; t283 [ 1459ULL
] = X [ 109ULL ] ; t283 [ 1460ULL ] = X [ 83ULL ] ; t283 [ 1461ULL ] = X [
12ULL ] ; t283 [ 1462ULL ] = X [ 13ULL ] ; t283 [ 1463ULL ] = X [ 14ULL ] ;
t283 [ 1464ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden ; t283 [
1465ULL ] = X [ 299ULL ] ; t283 [ 1466ULL ] = X [ 300ULL ] * 0.1 ; t283 [
1467ULL ] = X [ 301ULL ] ; t283 [ 1468ULL ] = X [ 302ULL ] ; t283 [ 1469ULL ]
= - X [ 315ULL ] ; t283 [ 1470ULL ] = X [ 378ULL ] ; t283 [ 1471ULL ] = - X [
312ULL ] ; t283 [ 1472ULL ] = - X [ 320ULL ] ; t283 [ 1473ULL ] = - X [
321ULL ] ; t283 [ 1474ULL ] = X [ 379ULL ] ; t283 [ 1475ULL ] = X [ 380ULL ]
; t283 [ 1476ULL ] = X [ 68ULL ] ; t283 [ 1477ULL ] = X [ 69ULL ] * 0.1 ;
t283 [ 1478ULL ] = X [ 70ULL ] ; t283 [ 1479ULL ] = X [ 71ULL ] ; t283 [
1480ULL ] = X [ 377ULL ] ; t283 [ 1481ULL ] = X [ 381ULL ] ; t283 [ 1482ULL ]
= X [ 374ULL ] ; t283 [ 1483ULL ] = X [ 382ULL ] ; t283 [ 1484ULL ] = X [
383ULL ] ; t283 [ 1485ULL ] = X [ 384ULL ] ; t283 [ 1486ULL ] = X [ 385ULL ]
; t283 [ 1487ULL ] = t627 ; t283 [ 1488ULL ] = - X [ 320ULL ] ; t283 [
1489ULL ] = X [ 382ULL ] ; t283 [ 1490ULL ] = - X [ 321ULL ] ; t283 [ 1491ULL
] = X [ 383ULL ] ; t283 [ 1492ULL ] = intrm_sf_mf_1311 * 0.1 ; t283 [ 1493ULL
] = intrm_sf_mf_1318 * 0.1 ; t283 [ 1494ULL ] = ( 1.0 - X [ 14ULL ] ) - X [
13ULL ] ; t283 [ 1495ULL ] = X [ 68ULL ] ; t283 [ 1496ULL ] = X [ 69ULL ] *
0.1 ; t283 [ 1497ULL ] = X [ 70ULL ] ; t283 [ 1498ULL ] = X [ 71ULL ] ; t283
[ 1499ULL ] = X [ 324ULL ] ; t283 [ 1500ULL ] = X [ 325ULL ] * 0.1 ; t283 [
1501ULL ] = X [ 326ULL ] ; t283 [ 1502ULL ] = X [ 327ULL ] ; t283 [ 1503ULL ]
= X [ 16ULL ] ; t283 [ 1504ULL ] = X [ 90ULL ] ; t283 [ 1505ULL ] = X [ 17ULL
] ; t283 [ 1506ULL ] = X [ 386ULL ] ; t283 [ 1507ULL ] = X [ 15ULL ] - 273.15
; t283 [ 1508ULL ] = - X [ 374ULL ] ; t283 [ 1509ULL ] = X [ 387ULL ] * 0.1 ;
t283 [ 1510ULL ] = X [ 50ULL ] * 0.1 ; t283 [ 1511ULL ] = X [ 91ULL ] ; t283
[ 1512ULL ] = t628 * 100000.0 ; t283 [ 1513ULL ] = X [ 388ULL ] ; t283 [
1514ULL ] = - X [ 347ULL ] ; t283 [ 1515ULL ] = X [ 389ULL ] * 0.1 ; for (
t398 = 0ULL ; t398 < 8ULL ; t398 ++ ) { t283 [ t398 + 1516ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t398 ] ; } t283
[ 1524ULL ] = X [ 89ULL ] ; t283 [ 1525ULL ] = t631 ; t283 [ 1526ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Mach_B ; t283 [ 1527ULL ]
= - X [ 377ULL ] ; t283 [ 1528ULL ] = - X [ 356ULL ] ; t283 [ 1529ULL ] = ( -
X [ 97ULL ] - X [ 101ULL ] ) - X [ 103ULL ] ; t283 [ 1530ULL ] = X [ 110ULL ]
; t283 [ 1531ULL ] = X [ 88ULL ] ; t283 [ 1532ULL ] = X [ 15ULL ] ; t283 [
1533ULL ] = X [ 16ULL ] ; t283 [ 1534ULL ] = X [ 17ULL ] ; t283 [ 1535ULL ] =
t632 ; t283 [ 1536ULL ] = X [ 68ULL ] ; t283 [ 1537ULL ] = X [ 69ULL ] * 0.1
; t283 [ 1538ULL ] = X [ 70ULL ] ; t283 [ 1539ULL ] = X [ 71ULL ] ; t283 [
1540ULL ] = - X [ 377ULL ] ; t283 [ 1541ULL ] = X [ 390ULL ] ; t283 [ 1542ULL
] = - X [ 374ULL ] ; t283 [ 1543ULL ] = - X [ 382ULL ] ; t283 [ 1544ULL ] = -
X [ 383ULL ] ; t283 [ 1545ULL ] = X [ 391ULL ] ; t283 [ 1546ULL ] = X [
392ULL ] ; t283 [ 1547ULL ] = X [ 324ULL ] ; t283 [ 1548ULL ] = X [ 325ULL ]
* 0.1 ; t283 [ 1549ULL ] = X [ 326ULL ] ; t283 [ 1550ULL ] = X [ 327ULL ] ;
t283 [ 1551ULL ] = - X [ 356ULL ] ; t283 [ 1552ULL ] = X [ 393ULL ] ; t283 [
1553ULL ] = - X [ 347ULL ] ; t283 [ 1554ULL ] = - X [ 358ULL ] ; t283 [
1555ULL ] = - X [ 359ULL ] ; t283 [ 1556ULL ] = X [ 394ULL ] ; t283 [ 1557ULL
] = X [ 395ULL ] ; t283 [ 1558ULL ] = t636 ; t283 [ 1559ULL ] = - X [ 382ULL
] ; t283 [ 1560ULL ] = - X [ 358ULL ] ; t283 [ 1561ULL ] = X [ 100ULL ] ;
t283 [ 1562ULL ] = X [ 105ULL ] ; t283 [ 1563ULL ] = - X [ 383ULL ] ; t283 [
1564ULL ] = - X [ 359ULL ] ; t283 [ 1565ULL ] = t643 * 0.1 ; t283 [ 1566ULL ]
= t646 * 0.1 ; t283 [ 1567ULL ] = ( 1.0 - X [ 17ULL ] ) - X [ 16ULL ] ; t283
[ 1568ULL ] = X [ 15ULL ] ; t283 [ 1569ULL ] = X [ 16ULL ] ; t283 [ 1570ULL ]
= X [ 17ULL ] ; t283 [ 1571ULL ] = X [ 299ULL ] ; t283 [ 1572ULL ] = X [
300ULL ] * 0.1 ; t283 [ 1573ULL ] = X [ 301ULL ] ; t283 [ 1574ULL ] = X [
302ULL ] ; t283 [ 1575ULL ] = X [ 324ULL ] ; t283 [ 1576ULL ] = X [ 325ULL ]
* 0.1 ; t283 [ 1577ULL ] = X [ 326ULL ] ; t283 [ 1578ULL ] = X [ 327ULL ] ;
t283 [ 1579ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t283 [ 1580ULL ] =
U_idx_9 ; t283 [ 1581ULL ] = X [ 58ULL ] ; t283 [ 1582ULL ] = X [ 58ULL ] ;
t283 [ 1583ULL ] = X [ 58ULL ] ; t283 [ 1584ULL ] = X [ 58ULL ] ; t283 [
1585ULL ] = t617 ; t283 [ 1586ULL ] = t617 ; t283 [ 1587ULL ] = X [ 58ULL ] ;
t283 [ 1588ULL ] = X [ 58ULL ] ; t283 [ 1589ULL ] = t617 ; t283 [ 1590ULL ] =
X [ 58ULL ] ; t283 [ 1591ULL ] = X [ 58ULL ] ; t283 [ 1592ULL ] = X [ 58ULL ]
; t283 [ 1593ULL ] = X [ 58ULL ] ; t283 [ 1594ULL ] = X [ 58ULL ] ; t283 [
1595ULL ] = X [ 51ULL ] ; t283 [ 1596ULL ] = X [ 51ULL ] ; t283 [ 1597ULL ] =
U_idx_10 ; t283 [ 1598ULL ] = X [ 58ULL ] ; t283 [ 1599ULL ] = t617 ; t283 [
1600ULL ] = t635 * 1000.0 ; t283 [ 1601ULL ] = X [ 397ULL ] ; t283 [ 1602ULL
] = X [ 398ULL ] ; t283 [ 1603ULL ] = X [ 398ULL ] ; t283 [ 1604ULL ] = X [
396ULL ] ; t283 [ 1605ULL ] = X [ 52ULL ] ; t283 [ 1606ULL ] = X [ 58ULL ] ;
t283 [ 1607ULL ] = X [ 51ULL ] * 9.5492965855137211 ; t283 [ 1608ULL ] = X [
51ULL ] ; t283 [ 1609ULL ] = U_idx_11 ; t283 [ 1610ULL ] = - X [ 397ULL ] ;
t283 [ 1611ULL ] = U_idx_11 ; t283 [ 1612ULL ] = X [ 51ULL ] ; t283 [ 1613ULL
] = X [ 51ULL ] ; t283 [ 1614ULL ] = - X [ 397ULL ] ; t283 [ 1615ULL ] = - X
[ 397ULL ] ; t283 [ 1616ULL ] = X [ 51ULL ] ; t283 [ 1617ULL ] = X [ 51ULL ]
; t283 [ 1618ULL ] = - X [ 397ULL ] ; t283 [ 1619ULL ] = - X [ 397ULL ] ;
t283 [ 1620ULL ] = - X [ 397ULL ] ; t283 [ 1621ULL ] = X [ 51ULL ] ; t283 [
1622ULL ] = U_idx_11 ; t283 [ 1623ULL ] = U_idx_10 ; t283 [ 1624ULL ] = X [
58ULL ] ; t283 [ 1625ULL ] = X [ 304ULL ] ; t283 [ 1626ULL ] = X [ 255ULL ] ;
t283 [ 1627ULL ] = X [ 87ULL ] ; t283 [ 1628ULL ] = X [ 88ULL ] ; t283 [
1629ULL ] = X [ 89ULL ] ; t283 [ 1630ULL ] = X [ 82ULL ] ; t283 [ 1631ULL ] =
X [ 83ULL ] ; t283 [ 1632ULL ] = X [ 84ULL ] ; t283 [ 1633ULL ] = X [ 78ULL ]
; t283 [ 1634ULL ] = X [ 79ULL ] ; t283 [ 1635ULL ] = X [ 77ULL ] ; t283 [
1636ULL ] = X [ 72ULL ] ; t283 [ 1637ULL ] = X [ 73ULL ] ; t283 [ 1638ULL ] =
X [ 74ULL ] ; for ( b = 0 ; b < 1639 ; b ++ ) { out . mX [ b ] = t283 [ b ] ;
} ( void ) LC ; ( void ) t918 ; return 0 ; }
