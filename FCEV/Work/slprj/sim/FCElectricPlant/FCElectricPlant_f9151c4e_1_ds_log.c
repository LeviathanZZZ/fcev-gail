#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_log.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t908 , NeDsMethodOutput * t909 ) { ETTS0
ab_efOut ; ETTS0 ac_efOut ; ETTS0 ae_efOut ; ETTS0 c_efOut ; ETTS0 cd_efOut ;
ETTS0 eb_efOut ; ETTS0 ee_efOut ; ETTS0 efOut ; ETTS0 fc_efOut ; ETTS0
g_efOut ; ETTS0 hd_efOut ; ETTS0 ib_efOut ; ETTS0 jc_efOut ; ETTS0 je_efOut ;
ETTS0 ke_efOut ; ETTS0 l_efOut ; ETTS0 ld_efOut ; ETTS0 mb_efOut ; ETTS0
oc_efOut ; ETTS0 q_efOut ; ETTS0 qb_efOut ; ETTS0 qd_efOut ; ETTS0 sc_efOut ;
ETTS0 t14 ; ETTS0 t23 ; ETTS0 t24 ; ETTS0 u_efOut ; ETTS0 ud_efOut ; ETTS0
vb_efOut ; ETTS0 xc_efOut ; PmRealVector out ; real_T t282 [ 1621 ] ; real_T
X [ 394 ] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi
[ 8 ] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 8
] ; real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ 8 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 8 ] ;
real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ 8 ] ; real_T
t286 [ 8 ] ; real_T t291 [ 8 ] ; real_T t299 [ 8 ] ; real_T t316 [ 8 ] ;
real_T t352 [ 8 ] ; real_T ad_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T
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
s_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T t276 [
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
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_11 ; real_T U_idx_12 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T intrm_sf_mf_1004 ;
real_T intrm_sf_mf_1107 ; real_T intrm_sf_mf_1311 ; real_T intrm_sf_mf_1318 ;
real_T intrm_sf_mf_1322 ; real_T intrm_sf_mf_2 ; real_T intrm_sf_mf_5 ;
real_T intrm_sf_mf_739 ; real_T intrm_sf_mf_8 ; real_T intrm_sf_mf_9 ; real_T
intrm_sf_mf_992 ; real_T piece17 ; real_T t365_idx_0 ; real_T t366_idx_0 ;
real_T t367_idx_0 ; real_T t404 ; real_T t425 ; real_T t431 ; real_T t455 ;
real_T t467 ; real_T t469 ; real_T t472 ; real_T t474 ; real_T t479 ; real_T
t480 ; real_T t482 ; real_T t487 ; real_T t490 ; real_T t492 ; real_T t495 ;
real_T t496 ; real_T t498 ; real_T t499 ; real_T t500 ; real_T t502 ; real_T
t503 ; real_T t504 ; real_T t508 ; real_T t509 ; real_T t511 ; real_T t513 ;
real_T t514 ; real_T t517 ; real_T t519 ; real_T t523 ; real_T t524 ; real_T
t525 ; real_T t527 ; real_T t539 ; real_T t540 ; real_T t541 ; real_T t542 ;
real_T t544 ; real_T t545 ; real_T t549 ; real_T t553 ; real_T t554 ; real_T
t555 ; real_T t558 ; real_T t562 ; real_T t572 ; real_T t581 ; real_T t583 ;
real_T t585 ; real_T t586 ; real_T t587 ; real_T t588 ; real_T t589 ; real_T
t590 ; real_T t593 ; real_T t598 ; real_T t599 ; real_T t600 ; real_T t605 ;
real_T t609 ; real_T t613 ; real_T t617 ; real_T t618 ; real_T t619 ; real_T
t621 ; real_T t622 ; real_T t623 ; real_T t626 ; real_T t627 ; real_T t629 ;
real_T t630 ; real_T t631 ; real_T t634 ; real_T t635 ; real_T t637 ; real_T
t768 ; real_T t907 ; size_t t274 [ 1 ] ; size_t t277 [ 1 ] ; size_t t32 [ 1 ]
; size_t t396 ; int32_T b ; U_idx_0 = t908 -> mU . mX [ 0 ] ; U_idx_1 = t908
-> mU . mX [ 1 ] ; U_idx_2 = t908 -> mU . mX [ 2 ] ; U_idx_3 = t908 -> mU .
mX [ 3 ] ; U_idx_4 = t908 -> mU . mX [ 4 ] ; U_idx_5 = t908 -> mU . mX [ 5 ]
; U_idx_6 = t908 -> mU . mX [ 6 ] ; U_idx_7 = t908 -> mU . mX [ 7 ] ; U_idx_8
= t908 -> mU . mX [ 8 ] ; U_idx_9 = t908 -> mU . mX [ 9 ] ; U_idx_10 = t908
-> mU . mX [ 10 ] ; U_idx_11 = t908 -> mU . mX [ 11 ] ; U_idx_12 = t908 -> mU
. mX [ 12 ] ; for ( b = 0 ; b < 394 ; b ++ ) { X [ b ] = t908 -> mX . mX [ b
] ; } out = t909 -> mLOG ; intrm_sf_mf_2 = ( ( ( real_T ) ( X [ 51ULL ] >=
0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 ) -
0.9 ) / 0.099999999999999978 ; if ( ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X [
51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 <= 0.9 ) {
intrm_sf_mf_2 = 0.0 ; } else { intrm_sf_mf_2 = ( real_T ) ( X [ 51ULL ] >=
0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) * U_idx_1 >=
1.0 ? 1.0 : intrm_sf_mf_2 * intrm_sf_mf_2 * 3.0 - intrm_sf_mf_2 *
intrm_sf_mf_2 * intrm_sf_mf_2 * 2.0 ; } t467 = X [ 1ULL ] * - 0.1 + X [ 53ULL
] * 0.1 ; Fuel_Cell_Boost_Converter_L_i = X [ 56ULL ] * 1.0E-9 + X [ 2ULL ] ;
Fuel_Cell_Boost_Converter_L_n_v = ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * -
1.0000000000000011 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] ;
Fuel_Cell_Boost_Converter_L_p_v = ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * -
1.0E-15 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] ;
Fuel_Cell_Current_Sensor1_I = ( ( ( X [ 1ULL ] * 0.1 + X [ 53ULL ] * - 0.1 )
+ X [ 56ULL ] * 1.0E-9 ) - X [ 58ULL ] ) + X [ 2ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 0ULL ] = X [
67ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 1ULL ]
= X [ 4ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
2ULL ] = X [ 68ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 3ULL ] = X [
6ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 4ULL ]
= X [ 71ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [
5ULL ] = X [ 69ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 6ULL ] = X [
5ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ 7ULL ]
= X [ 70ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
0ULL ] = X [ 73ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 1ULL ] = X [
7ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 2ULL ]
= X [ 74ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
3ULL ] = X [ 9ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 4ULL ] = X [
76ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 5ULL ]
= X [ 72ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [
6ULL ] = X [ 8ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ 7ULL ] = X [
75ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 0ULL ]
= X [ 77ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
1ULL ] = X [ 10ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 2ULL ] = X [
78ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 3ULL ]
= X [ 12ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
4ULL ] = X [ 81ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 5ULL ] = X [
79ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ 6ULL ]
= X [ 11ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [
7ULL ] = X [ 80ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 0ULL ] = X [
82ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 1ULL ]
= X [ 13ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
2ULL ] = X [ 83ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 3ULL ] = X [
15ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 4ULL ]
= X [ 86ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [
5ULL ] = X [ 84ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 6ULL ] = X [
14ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ 7ULL ]
= X [ 85ULL ] ; if ( X [ 87ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = X [ 87ULL ]
* 17.81 + 0.043 ; } else if ( X [ 87ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( ( X [
87ULL ] * 17.81 + 0.043 ) - X [ 87ULL ] * X [ 87ULL ] * 39.85 ) + X [ 87ULL ]
* X [ 87ULL ] * X [ 87ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = ( X [ 87ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 88ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = X [ 88ULL ]
* 17.81 + 0.043 ; } else if ( X [ 88ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( ( X [
88ULL ] * 17.81 + 0.043 ) - X [ 88ULL ] * X [ 88ULL ] * 39.85 ) + X [ 88ULL ]
* X [ 88ULL ] * X [ 88ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ( X [ 88ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 57ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = - X [ 57ULL
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
67ULL ] + X [ 73ULL ] ) / 2.0 ; t469 = ( X [ 77ULL ] + X [ 82ULL ] ) / 2.0 ;
t276 [ 0 ] = 343.15 ; t274 [ 0 ] = 52ULL ; t32 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = efOut
; tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t276 [ 0 ] = b_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = pmf_exp (
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ) -
t276 [ 0ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 = X [ 87ULL ]
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = pmf_exp (
pmf_log ( t469 ) - t276 [ 0ULL ] ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 > t469 ) {
t479 = 4.0566516249873756E-6 ; t479 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 - t469 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 * 1.58E-18 /
( t479 == 0.0 ? 1.0E-16 : t479 ) ; } else { t479 = 4.0566516249873756E-6 ;
t479 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 -
t469 ) * t469 * ( X [ 88ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ) )
* 1.58E-18 / ( t479 == 0.0 ? 1.0E-16 : t479 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 *
1818.181818181818 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
1818.181818181818 ) * 3.1649674241803613E-10 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + t479 ) *
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
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 * ( ( X [
81ULL ] + X [ 86ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 >= 1.0E-9 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 : 1.0E-6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * ( ( X [
70ULL ] + X [ 75ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 >=
1.0E-9 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 =
1.0E-6 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 =
t469 * ( ( X [ 80ULL ] + X [ 85ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 >=
1.0E-9 ) { t469 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 * 1.0E-5 ; }
else { t469 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 = ( ( ( X [
2ULL ] * - 1.0E-6 + X [ 56ULL ] * - 1.0E-15 ) + X [ 57ULL ] * - 0.001001 ) +
X [ 3ULL ] ) + X [ 90ULL ] ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 >= 1.0 ) {
t472 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ) *
0.052804248375117158 ; } else { t472 = 0.0 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 <= 13986.0 )
{ t474 = pmf_log ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 / 14000.0 ) ;
} else { t474 = - 6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = pmf_sqrt ( t469
) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; t469 =
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ) )
* 0.014785189545032806 + 1.228891453185164 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 = ( ( t469 -
t472 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * 0.01 ) -
t474 * - 0.014785189545032806 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 *
11.200000000000001 ; t472 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 *
241812.2160511087 / 0.0020158806832745466 * 0.001 + ( ( ( X [ 94ULL ] - X [
93ULL ] * - 3931.85243448965 ) + ( X [ 96ULL ] - X [ 95ULL ] * -
271.011680699068 ) ) + ( X [ 92ULL ] - X [ 91ULL ] * - 2546.6190535198302 ) )
) + ( X [ 97ULL ] + X [ 98ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = t472 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 * 0.001 ;
t469 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 / (
t472 == 0.0 ? 1.0E-16 : t472 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 = - X [ 91ULL
] + X [ 100ULL ] ; t472 = ( - X [ 2ULL ] + X [ 56ULL ] * - 1.0E-9 ) - X [
57ULL ] ; t474 = ( ( ( X [ 2ULL ] * - 1.0E-6 + X [ 56ULL ] * - 1.0E-15 ) + X
[ 57ULL ] * - 1.0E-6 ) + X [ 3ULL ] ) + X [ 90ULL ] ; if ( X [ 122ULL ] <=
0.0 ) { t480 = 0.0 ; } else { t480 = X [ 122ULL ] >= 1.0 ? 1.0 : X [ 122ULL ]
; } if ( X [ 123ULL ] <= 0.0 ) { intrm_sf_mf_8 = 0.0 ; } else { intrm_sf_mf_8
= X [ 123ULL ] >= 1.0 ? 1.0 : X [ 123ULL ] ; } t492 = ( ( ( ( 1.0 - t480 ) -
intrm_sf_mf_8 ) * 296.802103844292 + t480 * 461.523 ) + intrm_sf_mf_8 *
4124.48151675695 ) * 293.15 ; t482 = 1.01325 / ( t492 == 0.0 ? 1.0E-16 : t492
) ; if ( X [ 19ULL ] <= 0.0 ) { t479 = 0.0 ; } else { t479 = X [ 19ULL ] >=
1.0 ? 1.0 : X [ 19ULL ] ; } if ( X [ 20ULL ] <= 0.0 ) { t487 = 0.0 ; } else {
t487 = X [ 20ULL ] >= 1.0 ? 1.0 : X [ 20ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R = ( ( ( 1.0 -
t479 ) - t487 ) * 296.802103844292 + t479 * 461.523 ) + t487 *
4124.48151675695 ; if ( X [ 130ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = X [ 130ULL ] >=
623.15 ? 623.15 : X [ 130ULL ] ; } t404 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ; t490 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B * -
0.2214565261064495 ) + t404 * 0.00037212980109014541 ) * ( ( 1.0 - t479 ) -
t487 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B *
1.2002114337048222 ) + t404 * - 0.00038614513167823636 ) * t479 ) + ( (
12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B *
6.9647057412840034 ) + t404 * - 0.0070524868246844051 ) * t487 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = t490 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = t490 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ) ; if ( X [ 132ULL ]
<= 0.0 ) { t490 = 0.0 ; } else { t490 = X [ 132ULL ] >= 1.0 ? 1.0 : X [
132ULL ] ; } if ( X [ 133ULL ] <= 0.0 ) { t404 = 0.0 ; } else { t404 = X [
133ULL ] >= 1.0 ? 1.0 : X [ 133ULL ] ; } t276 [ 0ULL ] = X [ 17ULL ] ;
tlu2_linear_nearest_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = c_efOut ; tlu2_1d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = d_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t23 . mField0 [
0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = e_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = f_efOut [ 0 ] ; t492 = ( ( (
1.0 - t490 ) - t404 ) * t367_idx_0 + t365_idx_0 * t490 ) + t366_idx_0 * t404
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = - pmf_sqrt (
fabs ( X [ 131ULL ] * X [ 131ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ) /
( X [ 130ULL ] == 0.0 ? 1.0E-16 : X [ 130ULL ] ) ) ) * 7.8539816339744827E-5
; t498 = X [ 17ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ; t490 = X [
18ULL ] / ( t498 == 0.0 ? 1.0E-16 : t498 ) ; if ( X [ 134ULL ] <=
216.59999999999997 ) { t404 = 216.59999999999997 ; } else { t404 = X [ 134ULL
] >= 623.15 ? 623.15 : X [ 134ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t404 * t404
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = ( ( (
1074.1165326382641 + t404 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
0.00037212980109014541 ) * ( ( 1.0 - t479 ) - t487 ) + ( ( 1479.6504774711011
+ t404 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.00038614513167823636 ) * t479 ) + ( ( 12825.281119789837 + t404 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * -
0.0070524868246844051 ) * t487 ; t499 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R = - pmf_sqrt
( fabs ( X [ 135ULL ] * X [ 135ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W / ( t499 == 0.0 ?
1.0E-16 : t499 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ) /
( X [ 134ULL ] == 0.0 ? 1.0E-16 : X [ 134ULL ] ) ) ) * 7.8539816339744827E-5
; t286 [ 0ULL ] = X [ 18ULL ] * 100000.0 ; t286 [ 1ULL ] = X [ 17ULL ] ; t286
[ 2ULL ] = X [ 137ULL ] ; t286 [ 3ULL ] = X [ 19ULL ] ; t286 [ 4ULL ] = X [
132ULL ] ; t286 [ 5ULL ] = X [ 136ULL ] ; t286 [ 6ULL ] = X [ 20ULL ] ; t286
[ 7ULL ] = X [ 133ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t396 ] = t286 [ t396
] ; } if ( X [ 129ULL ] >= 0.0 ) { t404 = - X [ 129ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ) * 1.0E-5 ; }
else { t404 = X [ 129ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ) * 1.0E-5 ; }
if ( - X [ 117ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B = X [ 117ULL ] /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ) *
1.0E-5 ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B
= - X [ 117ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ) *
1.0E-5 ; } t276 [ 0ULL ] = X [ 17ULL ] ; tlu2_linear_linear_prelookup ( &
g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = g_efOut ;
tlu2_1d_linear_linear_value ( & h_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] ,
& t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = h_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R = t367_idx_0
; if ( 1.0 - X [ 19ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0 - X [
19ULL ] ; } else if ( 1.0 - X [ 19ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_exp ( (
( 1.0 - X [ 19ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X [ 20ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
i_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = i_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_exp (
pmf_log ( X [ 18ULL ] * 100000.0 ) - t367_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >= 1.0 ) {
t509 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 - 1.0
) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; t495 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W / ( t509 == 0.0 ?
1.0E-16 : t509 ) ; } else { t495 = 1.0 ; } t511 = t495 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = ( X [ 19ULL ] - t495
) / ( t511 == 0.0 ? 1.0E-16 : t511 ) ; if ( X [ 19ULL ] - t495 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = 0.0 ; } else if ( X
[ 19ULL ] - t495 >= t495 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X [ 19ULL ] - t495 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = ( X [ 19ULL
] - t495 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = t490 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
7.8539816339744827E-5 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *= 100000.0 ;
tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] ,
& t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = j_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t367_idx_0 ;
tlu2_1d_linear_linear_value ( & k_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] ,
& t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = k_efOut [ 0 ] ; t496 = ( ( (
1.0 - t479 ) - t487 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R * t479 ) +
t367_idx_0 * t487 ; t487 = U_idx_2 * 0.031415926535897927 ; if ( t487 *
0.0001 <= 7.8539816339744857E-13 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R =
7.8539816339744857E-13 ; } else if ( t487 * 0.0001 >= 3.1415926535897929E-6 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R =
3.1415926535897929E-6 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R = t487 *
0.0001 ; } if ( X [ 149ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 149ULL
] >= 1.0 ? 1.0 : X [ 149ULL ] ; } if ( X [ 150ULL ] <= 0.0 ) { t495 = 0.0 ; }
else { t495 = X [ 150ULL ] >= 1.0 ? 1.0 : X [ 150ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t495 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t495 * 4124.48151675695 ; if ( X [ 147ULL ] <= 216.59999999999997 ) { t498 =
216.59999999999997 ; } else { t498 = X [ 147ULL ] >= 623.15 ? 623.15 : X [
147ULL ] ; } t500 = t498 * t498 ; t499 = ( ( ( 1074.1165326382641 + t498 * -
0.2214565261064495 ) + t500 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t495 ) + (
( 1479.6504774711011 + t498 * 1.2002114337048222 ) + t500 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
12825.281119789837 + t498 * 6.9647057412840034 ) + t500 * -
0.0070524868246844051 ) * t495 ; t514 = t499 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_sqrt (
fabs ( X [ 148ULL ] * X [ 148ULL ] * ( t499 / ( t514 == 0.0 ? 1.0E-16 : t514
) ) / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 == 0.0
? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 )
/ ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R * 0.64 ; if (
X [ 117ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R = X [ 117ULL
] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R = - X [
117ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * 1.0E-5 ; }
t291 [ 0ULL ] = X [ 22ULL ] * 100000.0 ; t291 [ 1ULL ] = X [ 21ULL ] ; t291 [
2ULL ] = X [ 162ULL ] ; t291 [ 3ULL ] = X [ 24ULL ] ; t291 [ 4ULL ] = X [
164ULL ] ; t291 [ 5ULL ] = X [ 161ULL ] ; t291 [ 6ULL ] = X [ 23ULL ] ; t291
[ 7ULL ] = X [ 163ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t286
[ t396 ] = t291 [ t396 ] ; } t276 [ 0ULL ] = X [ 21ULL ] ;
tlu2_linear_linear_prelookup ( & l_efOut . mField0 [ 0ULL ] , & l_efOut .
mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t24 = l_efOut ; tlu2_1d_linear_linear_value ( & m_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = m_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
t367_idx_0 ; if ( X [ 24ULL ] <= 0.0 ) { t495 = 0.0 ; } else { t495 = X [
24ULL ] >= 1.0 ? 1.0 : X [ 24ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 = X [ 23ULL
] >= 1.0 ? 1.0 : X [ 23ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = X [ 21ULL ]
* ( ( ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ) *
296.802103844292 + t495 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 *
4124.48151675695 ) ; t498 = X [ 22ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 ) ;
if ( 1.0 - X [ 24ULL ] >= 0.01 ) { t499 = 1.0 - X [ 24ULL ] ; } else if ( 1.0
- X [ 24ULL ] >= - 0.1 ) { t499 = pmf_exp ( ( ( 1.0 - X [ 24ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t499 = 1.6701700790245661E-7 ; } t500 = X [ 23ULL
] / ( t499 == 0.0 ? 1.0E-16 : t499 ) * 3827.6794129126583 + 296.802103844292
; tlu2_1d_linear_linear_value ( & n_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = n_efOut [ 0 ] ; t499 =
pmf_exp ( pmf_log ( X [ 22ULL ] * 100000.0 ) - t367_idx_0 ) ; if ( t499 >=
1.0 ) { t524 = ( t499 - 1.0 ) * 461.523 + t500 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = t500 / ( t524 ==
0.0 ? 1.0E-16 : t524 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = 1.0 ; } t479 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B * 0.01 ; t499 = ( X
[ 24ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ) / (
t479 == 0.0 ? 1.0E-16 : t479 ) ; if ( X [ 24ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B <= 0.0 ) { t499 =
0.0 ; } else if ( X [ 24ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B * 0.01 ) { t499 = X
[ 24ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ; } else
{ t499 = ( X [ 24ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ) * ( t499 * t499 *
3.0 - t499 * t499 * t499 * 2.0 ) ; } t499 = t498 * t499 * 0.12 / 0.001 ; t499
*= 100000.0 ; tlu2_1d_linear_linear_value ( & o_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = o_efOut [ 0
] ; t500 = t367_idx_0 ; tlu2_1d_linear_linear_value ( & p_efOut [ 0ULL ] , &
t24 . mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField4 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 =
p_efOut [ 0 ] ; t502 = ( ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ) * t500 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * t495 ) +
t367_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ;
if ( X [ 27ULL ] <= 0.0 ) { t495 = 0.0 ; } else { t495 = X [ 27ULL ] >= 1.0 ?
1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 = X [ 28ULL
] >= 1.0 ? 1.0 : X [ 28ULL ] ; } t500 = ( ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ) *
296.802103844292 + t495 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 *
4124.48151675695 ; if ( X [ 177ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = X [
177ULL ] >= 623.15 ? 623.15 : X [ 177ULL ] ; } t504 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ; t503 = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B
* - 0.2214565261064495 ) + t504 * 0.00037212980109014541 ) * ( ( 1.0 - t495 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ) + ( (
1479.6504774711011 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B
* 1.2002114337048222 ) + t504 * - 0.00038614513167823636 ) * t495 ) + ( (
12825.281119789837 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B
* 6.9647057412840034 ) + t504 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ; t479 = t503
- t500 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = t503 / (
t479 == 0.0 ? 1.0E-16 : t479 ) ; if ( X [ 179ULL ] <= 0.0 ) { t503 = 0.0 ; }
else { t503 = X [ 179ULL ] >= 1.0 ? 1.0 : X [ 179ULL ] ; } if ( X [ 180ULL ]
<= 0.0 ) { t504 = 0.0 ; } else { t504 = X [ 180ULL ] >= 1.0 ? 1.0 : X [
180ULL ] ; } t276 [ 0ULL ] = X [ 25ULL ] ; tlu2_linear_nearest_prelookup ( &
q_efOut . mField0 [ 0ULL ] , & q_efOut . mField1 [ 0ULL ] , & q_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = q_efOut ;
tlu2_1d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = r_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & s_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = s_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = t_efOut [ 0 ] ; intrm_sf_mf_5
= ( ( ( 1.0 - t503 ) - t504 ) * t367_idx_0 + t365_idx_0 * t503 ) + t366_idx_0
* t504 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = -
pmf_sqrt ( fabs ( X [ 178ULL ] * X [ 178ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B / ( t500 == 0.0 ?
1.0E-16 : t500 ) / ( X [ 177ULL ] == 0.0 ? 1.0E-16 : X [ 177ULL ] ) ) ) *
7.8539816339744827E-5 ; t479 = X [ 25ULL ] * t500 ; t503 = X [ 26ULL ] / (
t479 == 0.0 ? 1.0E-16 : t479 ) ; if ( X [ 182ULL ] <= 216.59999999999997 ) {
t504 = 216.59999999999997 ; } else { t504 = X [ 182ULL ] >= 623.15 ? 623.15 :
X [ 182ULL ] ; } t479 = t504 * t504 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = ( ( (
1074.1165326382641 + t504 * - 0.2214565261064495 ) + t479 *
0.00037212980109014541 ) * ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ) + ( (
1479.6504774711011 + t504 * 1.2002114337048222 ) + t479 * -
0.00038614513167823636 ) * t495 ) + ( ( 12825.281119789837 + t504 *
6.9647057412840034 ) + t479 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ; t479 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden - t500 ; t500
= - pmf_sqrt ( fabs ( X [ 183ULL ] * X [ 183ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden / ( t479 ==
0.0 ? 1.0E-16 : t479 ) ) / ( t500 == 0.0 ? 1.0E-16 : t500 ) / ( X [ 182ULL ]
== 0.0 ? 1.0E-16 : X [ 182ULL ] ) ) ) * 7.8539816339744827E-5 ; t299 [ 0ULL ]
= X [ 26ULL ] * 100000.0 ; t299 [ 1ULL ] = X [ 25ULL ] ; t299 [ 2ULL ] = X [
185ULL ] ; t299 [ 3ULL ] = X [ 27ULL ] ; t299 [ 4ULL ] = X [ 179ULL ] ; t299
[ 5ULL ] = X [ 184ULL ] ; t299 [ 6ULL ] = X [ 28ULL ] ; t299 [ 7ULL ] = X [
180ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t291 [ t396 ] = t299
[ t396 ] ; } if ( - X [ 167ULL ] >= 0.0 ) { t504 = X [ 167ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ) * 1.0E-5 ; } else
{ t504 = - X [ 167ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ) * 1.0E-5 ; } if (
X [ 181ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = - X [ 181ULL ] / (
t500 == 0.0 ? 1.0E-16 : t500 ) * 1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B = X [ 181ULL ] / (
t500 == 0.0 ? 1.0E-16 : t500 ) * 1.0E-5 ; } t276 [ 0ULL ] = X [ 25ULL ] ;
tlu2_linear_linear_prelookup ( & u_efOut . mField0 [ 0ULL ] , & u_efOut .
mField1 [ 0ULL ] , & u_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = u_efOut ; tlu2_1d_linear_linear_value ( & v_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = v_efOut [ 0
] ; t500 = t367_idx_0 ; if ( 1.0 - X [ 27ULL ] >= 0.01 ) { t479 = 1.0 - X [
27ULL ] ; } else if ( 1.0 - X [ 27ULL ] >= - 0.1 ) { t479 = pmf_exp ( ( ( 1.0
- X [ 27ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t479 =
1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = X [ 28ULL ]
/ ( t479 == 0.0 ? 1.0E-16 : t479 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & w_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] ,
& t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = w_efOut [ 0 ] ; t479 =
pmf_exp ( pmf_log ( X [ 26ULL ] * 100000.0 ) - t367_idx_0 ) ; if ( t479 >=
1.0 ) { t545 = ( t479 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ; t508 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden / ( t545 ==
0.0 ? 1.0E-16 : t545 ) ; } else { t508 = 1.0 ; } t479 = t508 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = ( X [ 27ULL
] - t508 ) / ( t479 == 0.0 ? 1.0E-16 : t479 ) ; if ( X [ 27ULL ] - t508 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = 0.0
; } else if ( X [ 27ULL ] - t508 >= t508 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = X [ 27ULL ]
- t508 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = ( X [ 27ULL
] - t508 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = t503 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *
7.8539816339744827E-5 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *= 100000.0 ;
tlu2_1d_linear_linear_value ( & x_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] ,
& t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = x_efOut [ 0 ] ; t479 =
t367_idx_0 ; tlu2_1d_linear_linear_value ( & y_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = y_efOut [ 0
] ; t509 = ( ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ) * t479 +
t500 * t495 ) + t367_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 = ( X [ 174ULL
] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) - 0.039999990000000013 ;
t500 = ( X [ 174ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; t508 = U_idx_3 * 10.0 ; if ( t500 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t511 =
7.8539816339744857E-13 ; } else if ( t500 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t511 = 3.1415926535897929E-6 ; } else { t511 = t500
* 7.8539816339744827E-5 ; } if ( X [ 197ULL ] <= 0.0 ) { intrm_sf_mf_9 = 0.0
; } else { intrm_sf_mf_9 = X [ 197ULL ] >= 1.0 ? 1.0 : X [ 197ULL ] ; } if (
X [ 198ULL ] <= 0.0 ) { t513 = 0.0 ; } else { t513 = X [ 198ULL ] >= 1.0 ?
1.0 : X [ 198ULL ] ; } t514 = ( ( ( 1.0 - intrm_sf_mf_9 ) - t513 ) *
296.802103844292 + intrm_sf_mf_9 * 461.523 ) + t513 * 4124.48151675695 ; if (
X [ 195ULL ] <= 216.59999999999997 ) { t479 = 216.59999999999997 ; } else {
t479 = X [ 195ULL ] >= 623.15 ? 623.15 : X [ 195ULL ] ; } t517 = t479 * t479
; t495 = ( ( ( 1074.1165326382641 + t479 * - 0.2214565261064495 ) + t517 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_9 ) - t513 ) + ( (
1479.6504774711011 + t479 * 1.2002114337048222 ) + t517 * -
0.00038614513167823636 ) * intrm_sf_mf_9 ) + ( ( 12825.281119789837 + t479 *
6.9647057412840034 ) + t517 * - 0.0070524868246844051 ) * t513 ; t479 = t495
- t514 ; intrm_sf_mf_9 = pmf_sqrt ( fabs ( X [ 196ULL ] * X [ 196ULL ] * (
t495 / ( t479 == 0.0 ? 1.0E-16 : t479 ) ) / ( t514 == 0.0 ? 1.0E-16 : t514 )
/ ( X [ 195ULL ] == 0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ) * t511 * 0.64 ; if ( -
X [ 167ULL ] >= 0.0 ) { t511 = - X [ 167ULL ] / ( intrm_sf_mf_9 == 0.0 ?
1.0E-16 : intrm_sf_mf_9 ) * 1.0E-5 ; } else { t511 = X [ 167ULL ] / (
intrm_sf_mf_9 == 0.0 ? 1.0E-16 : intrm_sf_mf_9 ) * 1.0E-5 ; } if ( X [ 213ULL
] <= 0.0 ) { intrm_sf_mf_9 = 0.0 ; } else { intrm_sf_mf_9 = X [ 213ULL ] >=
1.0 ? 1.0 : X [ 213ULL ] ; } if ( X [ 214ULL ] <= 0.0 ) { t513 = 0.0 ; } else
{ t513 = X [ 214ULL ] >= 1.0 ? 1.0 : X [ 214ULL ] ; } piece17 = ( ( ( ( 1.0 -
intrm_sf_mf_9 ) - t513 ) * 296.802103844292 + intrm_sf_mf_9 * 461.523 ) +
t513 * 259.836612622973 ) * 293.15 ; t514 = 1.01325 / ( piece17 == 0.0 ?
1.0E-16 : piece17 ) ; if ( X [ 226ULL ] <= 0.0 ) { t495 = 0.0 ; } else { t495
= X [ 226ULL ] >= 1.0 ? 1.0 : X [ 226ULL ] ; } if ( X [ 225ULL ] <= 0.0 ) {
t517 = 0.0 ; } else { t517 = X [ 225ULL ] >= 1.0 ? 1.0 : X [ 225ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( ( 1.0 -
t495 ) - t517 ) * 296.802103844292 + t495 * 461.523 ) + t517 *
259.836612622973 ; t276 [ 0ULL ] = X [ 220ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t24 = ab_efOut ; tlu2_1d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = bb_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & cb_efOut [ 0ULL ] , & t24 . mField0 [
0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = cb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & db_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = db_efOut [ 0 ] ; t558 = X [
220ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
t562 = t558 / 1.01325 * ( - X [ 208ULL ] / 0.0019634954084936209 ) * ( - X [
208ULL ] / 0.0019634954084936209 ) * fabs ( t558 / 1.01325 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho = t562 / 2.0
* 9.999999999999999E-14 + ( ( ( ( 1.0 - t495 ) - t517 ) * t367_idx_0 +
t365_idx_0 * t495 ) + t366_idx_0 * t517 ) ; t276 [ 0ULL ] = X [ 223ULL ] ;
tlu2_linear_linear_prelookup ( & eb_efOut . mField0 [ 0ULL ] , & eb_efOut .
mField1 [ 0ULL ] , & eb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = eb_efOut ; tlu2_1d_linear_linear_value ( & fb_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = fb_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & gb_efOut [ 0ULL ] , & t23 . mField0 [
0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = gb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = hb_efOut [ 0 ] ; t479 = X [
223ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
t479 = t479 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) * ( - X [ 208ULL
] / 0.0019634954084936209 ) * ( - X [ 208ULL ] / 0.0019634954084936209 ) *
fabs ( t479 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = t479 / 2.0
* 9.999999999999999E-14 + ( ( ( ( 1.0 - t495 ) - t517 ) * t367_idx_0 +
t365_idx_0 * t495 ) + t366_idx_0 * t517 ) ; t276 [ 0ULL ] = X [ 221ULL ] ;
tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [ 0ULL ] , & ib_efOut .
mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = ib_efOut ; tlu2_1d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = jb_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & kb_efOut [ 0ULL ] , & t23 . mField0 [
0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = kb_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = lb_efOut [ 0 ] ; t479 = X [
221ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
t479 = t479 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) * ( X [ 208ULL ]
/ 0.0019634954084936209 ) * ( X [ 208ULL ] / 0.0019634954084936209 ) * fabs (
t479 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) ; t479 = t479 / 2.0 *
9.999999999999999E-14 + ( ( ( ( 1.0 - t495 ) - t517 ) * t367_idx_0 +
t365_idx_0 * t495 ) + t366_idx_0 * t517 ) ; t276 [ 0ULL ] = X [ 222ULL ] ;
tlu2_linear_linear_prelookup ( & mb_efOut . mField0 [ 0ULL ] , & mb_efOut .
mField1 [ 0ULL ] , & mb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t24 = mb_efOut ; tlu2_1d_linear_linear_value ( & nb_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = nb_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & ob_efOut [ 0ULL ] , & t24 . mField0 [
0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = ob_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = pb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *= X [ 222ULL
] ; t581 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 /
1.01325 * ( X [ 208ULL ] / 0.0019634954084936209 ) * ( X [ 208ULL ] /
0.0019634954084936209 ) * fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / 1.01325 ) ;
if ( - X [ 208ULL ] >= 0.0 ) { t517 = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho ) * X [
208ULL ] ) ; } else { t517 = ( ( t581 / 2.0 * 9.999999999999999E-14 + ( ( ( (
1.0 - t495 ) - t517 ) * t367_idx_0 + t365_idx_0 * t495 ) + t366_idx_0 * t517
) ) - t479 ) * X [ 208ULL ] ; } t316 [ 0ULL ] = X [ 29ULL ] * 100000.0 ; t316
[ 1ULL ] = X [ 30ULL ] ; t316 [ 2ULL ] = X [ 231ULL ] ; t316 [ 3ULL ] = X [
32ULL ] ; t316 [ 4ULL ] = X [ 233ULL ] ; t316 [ 5ULL ] = X [ 230ULL ] ; t316
[ 6ULL ] = X [ 31ULL ] ; t316 [ 7ULL ] = X [ 232ULL ] ; for ( t396 = 0ULL ;
t396 < 8ULL ; t396 ++ ) { t299 [ t396 ] = t316 [ t396 ] ; } t276 [ 0ULL ] = X
[ 30ULL ] ; tlu2_linear_linear_prelookup ( & qb_efOut . mField0 [ 0ULL ] , &
qb_efOut . mField1 [ 0ULL ] , & qb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ]
, & t32 [ 0ULL ] ) ; t23 = qb_efOut ; tlu2_1d_linear_linear_value ( &
rb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = rb_efOut [ 0 ] ; t495 = t367_idx_0 ; if ( X [ 32ULL ] <= 0.0 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [
32ULL ] >= 1.0 ? 1.0 : X [ 32ULL ] ; } if ( X [ 31ULL ] <= 0.0 ) { t519 = 0.0
; } else { t519 = X [ 31ULL ] >= 1.0 ? 1.0 : X [ 31ULL ] ; } t583 = X [ 30ULL
] * ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t519 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t519 * 259.836612622973 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho = X [ 29ULL ]
/ ( t583 == 0.0 ? 1.0E-16 : t583 ) ; if ( 1.0 - X [ 32ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = 1.0 - X [
32ULL ] ; } else if ( 1.0 - X [ 32ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = pmf_exp ( (
( 1.0 - X [ 32ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 =
1.6701700790245661E-7 ; } t479 = X [ 31ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 ) *
- 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
sb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = sb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = pmf_exp (
pmf_log ( X [ 29ULL ] * 100000.0 ) - t367_idx_0 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 >= 1.0 ) {
t586 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 -
1.0 ) * 461.523 + t479 ; t523 = t479 / ( t586 == 0.0 ? 1.0E-16 : t586 ) ; }
else { t523 = 1.0 ; } t588 = t523 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = ( X [ 32ULL
] - t523 ) / ( t588 == 0.0 ? 1.0E-16 : t588 ) ; if ( X [ 32ULL ] - t523 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = 0.0
; } else if ( X [ 32ULL ] - t523 >= t523 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = X [ 32ULL ]
- t523 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 = ( X [ 32ULL
] - t523 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 * 0.0003 /
0.001 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 *=
100000.0 ; tlu2_1d_linear_linear_value ( & tb_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = tb_efOut [
0 ] ; t479 = t367_idx_0 ; tlu2_1d_linear_linear_value ( & ub_efOut [ 0ULL ] ,
& t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField5 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 =
ub_efOut [ 0 ] ; t524 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t519 ) *
t479 + t495 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
) + t367_idx_0 * t519 ; t519 = U_idx_4 * 837.75804095727813 ; if ( X [ 218ULL
] <= 0.0 ) { t523 = 0.0 ; } else { t523 = X [ 218ULL ] >= 1.0 ? 1.0 : X [
218ULL ] ; } if ( X [ 217ULL ] <= 0.0 ) { t525 = 0.0 ; } else { t525 = X [
217ULL ] >= 1.0 ? 1.0 : X [ 217ULL ] ; } t479 = ( ( ( 1.0 - t523 ) - t525 ) *
296.802103844292 + t523 * 461.523 ) + t525 * 259.836612622973 ; t523 = X [
29ULL ] / ( t479 == 0.0 ? 1.0E-16 : t479 ) / ( X [ 216ULL ] == 0.0 ? 1.0E-16
: X [ 216ULL ] ) ; t523 = - X [ 208ULL ] / ( t523 == 0.0 ? 1.0E-16 : t523 ) *
10.0 ; t525 = - ( X [ 29ULL ] - 1.01325 ) * t523 * 0.0001 ; t527 = t519 *
0.99999999999999978 / 0.99999999999999978 ; t316 [ 0ULL ] = X [ 250ULL ] ;
t316 [ 1ULL ] = X [ 33ULL ] ; t316 [ 2ULL ] = X [ 252ULL ] ; t316 [ 3ULL ] =
X [ 35ULL ] ; t316 [ 4ULL ] = X [ 254ULL ] ; t316 [ 5ULL ] = X [ 251ULL ] ;
t316 [ 6ULL ] = X [ 34ULL ] ; t316 [ 7ULL ] = X [ 253ULL ] ; if ( X [ 35ULL ]
<= 0.0 ) { t479 = 0.0 ; } else { t479 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL
] ; } if ( X [ 34ULL ] <= 0.0 ) { t495 = 0.0 ; } else { t495 = X [ 34ULL ] >=
1.0 ? 1.0 : X [ 34ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = ( ( ( 1.0 - t479 )
- t495 ) * 296.802103844292 + t479 * 461.523 ) + t495 * 4124.48151675695 ; if
( X [ 256ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = 216.59999999999997
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = X [
256ULL ] >= 623.15 ? 623.15 : X [ 256ULL ] ; } t540 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ; t539 = ( ( (
1074.1165326382641 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B
* - 0.2214565261064495 ) + t540 * 0.00037212980109014541 ) * ( ( 1.0 - t479 )
- t495 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B * 1.2002114337048222
) + t540 * - 0.00038614513167823636 ) * t479 ) + ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B * 6.9647057412840034
) + t540 * - 0.0070524868246844051 ) * t495 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t539 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = t539 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; if ( X [ 254ULL
] <= 0.0 ) { t539 = 0.0 ; } else { t539 = X [ 254ULL ] >= 1.0 ? 1.0 : X [
254ULL ] ; } if ( X [ 253ULL ] <= 0.0 ) { t540 = 0.0 ; } else { t540 = X [
253ULL ] >= 1.0 ? 1.0 : X [ 253ULL ] ; } t276 [ 0ULL ] = X [ 33ULL ] ;
tlu2_linear_nearest_prelookup ( & vb_efOut . mField0 [ 0ULL ] , & vb_efOut .
mField1 [ 0ULL ] , & vb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = vb_efOut ; tlu2_1d_linear_nearest_value ( & wb_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = wb_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & xb_efOut [ 0ULL ] , & t23 . mField0 [
0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = xb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yb_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = yb_efOut [ 0 ] ; t541 = ( ( (
1.0 - t539 ) - t540 ) * t367_idx_0 + t365_idx_0 * t539 ) + t366_idx_0 * t540
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = - pmf_sqrt (
fabs ( X [ 257ULL ] * X [ 257ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) / ( X [ 256ULL ]
== 0.0 ? 1.0E-16 : X [ 256ULL ] ) ) ) * 0.0019634954084936209 ; t455 = X [
33ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ; t539 = X
[ 36ULL ] / ( t455 == 0.0 ? 1.0E-16 : t455 ) ; if ( X [ 259ULL ] <=
216.59999999999997 ) { t540 = 216.59999999999997 ; } else { t540 = X [ 259ULL
] >= 623.15 ? 623.15 : X [ 259ULL ] ; } t425 = t540 * t540 ; t542 = ( ( (
1074.1165326382641 + t540 * - 0.2214565261064495 ) + t425 *
0.00037212980109014541 ) * ( ( 1.0 - t479 ) - t495 ) + ( ( 1479.6504774711011
+ t540 * 1.2002114337048222 ) + t425 * - 0.00038614513167823636 ) * t479 ) +
( ( 12825.281119789837 + t540 * 6.9647057412840034 ) + t425 * -
0.0070524868246844051 ) * t495 ; t613 = t542 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = - pmf_sqrt ( fabs
( X [ 260ULL ] * X [ 260ULL ] * ( t542 / ( t613 == 0.0 ? 1.0E-16 : t613 ) ) /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) / ( X [ 259ULL ]
== 0.0 ? 1.0E-16 : X [ 259ULL ] ) ) ) * 0.0019634954084936209 ; if ( - X [
181ULL ] >= 0.0 ) { t540 = X [ 181ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ) * 1.0E-5 ; } else
{ t540 = - X [ 181ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ) * 1.0E-5 ; } if (
X [ 258ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = - X [ 258ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) * 1.0E-5 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B = X [ 258ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) * 1.0E-5 ; } t276
[ 0ULL ] = X [ 33ULL ] ; tlu2_linear_linear_prelookup ( & ac_efOut . mField0
[ 0ULL ] , & ac_efOut . mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL
] , & t32 [ 0ULL ] ) ; t23 = ac_efOut ; tlu2_1d_linear_linear_value ( &
bc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = bc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = t367_idx_0 ; if (
1.0 - X [ 35ULL ] >= 0.01 ) { t425 = 1.0 - X [ 35ULL ] ; } else if ( 1.0 - X
[ 35ULL ] >= - 0.1 ) { t425 = pmf_exp ( ( ( 1.0 - X [ 35ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t425 = 1.6701700790245661E-7 ; } t542 = X [ 34ULL ]
/ ( t425 == 0.0 ? 1.0E-16 : t425 ) * 3827.6794129126583 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = cc_efOut [ 0 ] ; t425 =
pmf_exp ( pmf_log ( X [ 36ULL ] * 100000.0 ) - t367_idx_0 ) ; if ( t425 >=
1.0 ) { t623 = ( t425 - 1.0 ) * 461.523 + t542 ; t544 = t542 / ( t623 == 0.0
? 1.0E-16 : t623 ) ; } else { t544 = 1.0 ; } t425 = t544 * 0.01 ; t542 = ( X
[ 35ULL ] - t544 ) / ( t425 == 0.0 ? 1.0E-16 : t425 ) ; if ( X [ 35ULL ] -
t544 <= 0.0 ) { t542 = 0.0 ; } else if ( X [ 35ULL ] - t544 >= t544 * 0.01 )
{ t542 = X [ 35ULL ] - t544 ; } else { t542 = ( X [ 35ULL ] - t544 ) * ( t542
* t542 * 3.0 - t542 * t542 * t542 * 2.0 ) ; } t542 = t539 * t542 *
0.00049087385212340522 / 0.001 ; t542 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = dc_efOut [ 0 ] ; t425 =
t367_idx_0 ; tlu2_1d_linear_linear_value ( & ec_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = ec_efOut [ 0
] ; t545 = ( ( ( 1.0 - t479 ) - t495 ) * t425 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I * t479 ) +
t367_idx_0 * t495 ; if ( X [ 6ULL ] <= 0.0 ) { t495 = 0.0 ; } else { t495 = X
[ 6ULL ] >= 1.0 ? 1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = X [ 5ULL ] >= 1.0
? 1.0 : X [ 5ULL ] ; } t425 = ( ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) * 296.802103844292
+ t495 * 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I
* 4124.48151675695 ; if ( X [ 270ULL ] <= 216.59999999999997 ) { t544 =
216.59999999999997 ; } else { t544 = X [ 270ULL ] >= 623.15 ? 623.15 : X [
270ULL ] ; } t479 = t544 * t544 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = ( ( (
1074.1165326382641 + t544 * - 0.2214565261064495 ) + t479 *
0.00037212980109014541 ) * ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) + ( (
1479.6504774711011 + t544 * 1.2002114337048222 ) + t479 * -
0.00038614513167823636 ) * t495 ) + ( ( 12825.281119789837 + t544 *
6.9647057412840034 ) + t479 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ; t479 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I - t425 ; t544 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I / ( t479 == 0.0 ?
1.0E-16 : t479 ) ; if ( X [ 71ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = X [ 71ULL ] >= 1.0
? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 ) { t479 = 0.0 ; } else {
t479 = X [ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ] ; } t276 [ 0ULL ] = X [ 4ULL ]
; tlu2_linear_nearest_prelookup ( & fc_efOut . mField0 [ 0ULL ] , & fc_efOut
. mField1 [ 0ULL ] , & fc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = fc_efOut ; tlu2_1d_linear_nearest_value ( & gc_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = gc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & hc_efOut [ 0ULL ] , & t23 . mField0 [
0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = hc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ic_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = ic_efOut [ 0 ] ;
intrm_sf_mf_992 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) - t479 ) *
t367_idx_0 + t365_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I ) + t366_idx_0 * t479
; t544 = - pmf_sqrt ( fabs ( X [ 271ULL ] * X [ 271ULL ] * t544 / ( t425 ==
0.0 ? 1.0E-16 : t425 ) / ( X [ 270ULL ] == 0.0 ? 1.0E-16 : X [ 270ULL ] ) ) )
* 0.32 ; intrm_sf_mf_1318 = X [ 4ULL ] * t425 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I = X [ 37ULL ] / (
intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) ; if ( X [ 273ULL ] <=
216.59999999999997 ) { t479 = 216.59999999999997 ; } else { t479 = X [ 273ULL
] >= 623.15 ? 623.15 : X [ 273ULL ] ; } t431 = t479 * t479 ; t549 = ( ( (
1074.1165326382641 + t479 * - 0.2214565261064495 ) + t431 *
0.00037212980109014541 ) * ( ( 1.0 - t495 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) + ( (
1479.6504774711011 + t479 * 1.2002114337048222 ) + t431 * -
0.00038614513167823636 ) * t495 ) + ( ( 12825.281119789837 + t479 *
6.9647057412840034 ) + t431 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ; t634 = t549 - t425
; t425 = - pmf_sqrt ( fabs ( X [ 274ULL ] * X [ 274ULL ] * ( t549 / ( t634 ==
0.0 ? 1.0E-16 : t634 ) ) / ( t425 == 0.0 ? 1.0E-16 : t425 ) / ( X [ 273ULL ]
== 0.0 ? 1.0E-16 : X [ 273ULL ] ) ) ) * 0.32 ; if ( - X [ 258ULL ] >= 0.0 ) {
t549 = X [ 258ULL ] / ( t544 == 0.0 ? 1.0E-16 : t544 ) * 1.0E-5 ; } else {
t549 = - X [ 258ULL ] / ( t544 == 0.0 ? 1.0E-16 : t544 ) * 1.0E-5 ; } if ( X
[ 272ULL ] >= 0.0 ) { t544 = - X [ 272ULL ] / ( t425 == 0.0 ? 1.0E-16 : t425
) * 1.0E-5 ; } else { t544 = X [ 272ULL ] / ( t425 == 0.0 ? 1.0E-16 : t425 )
* 1.0E-5 ; } t276 [ 0ULL ] = X [ 4ULL ] ; tlu2_linear_linear_prelookup ( &
jc_efOut . mField0 [ 0ULL ] , & jc_efOut . mField1 [ 0ULL ] , & jc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t24 = jc_efOut ;
tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = kc_efOut [ 0 ] ; t425 =
t367_idx_0 ; if ( 1.0 - X [ 6ULL ] >= 0.01 ) { t479 = 1.0 - X [ 6ULL ] ; }
else if ( 1.0 - X [ 6ULL ] >= - 0.1 ) { t479 = pmf_exp ( ( ( 1.0 - X [ 6ULL ]
) - 0.01 ) / 0.01 ) * 0.01 ; } else { t479 = 1.6701700790245661E-7 ; } t431 =
X [ 5ULL ] / ( t479 == 0.0 ? 1.0E-16 : t479 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t24
. mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = lc_efOut [
0 ] ; t479 = pmf_exp ( pmf_log ( X [ 37ULL ] * 100000.0 ) - t367_idx_0 ) ; if
( t479 >= 1.0 ) { t907 = ( t479 - 1.0 ) * 461.523 + t431 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t431 / (
t907 == 0.0 ? 1.0E-16 : t907 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0 ; } t768
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01 ;
t431 = ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) / ( t768 ==
0.0 ? 1.0E-16 : t768 ) ; if ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 <= 0.0 ) {
t431 = 0.0 ; } else if ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01 ) {
t431 = X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; } else {
t431 = ( X [ 6ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * ( t431 *
t431 * 3.0 - t431 * t431 * t431 * 2.0 ) ; } t431 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * t431 *
0.026773120849090417 / 0.001 ; t431 *= 100000.0 ; tlu2_1d_linear_linear_value
( & mc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , & t274 [ 0ULL ] , & t32 [
0ULL ] ) ; t367_idx_0 = mc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t367_idx_0 ;
tlu2_1d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = nc_efOut [ 0 ] ; t554 = ( ( (
1.0 - t495 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 + t425 * t495
) + t367_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ;
if ( X [ 9ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = X [ 9ULL ] >= 1.0
? 1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0 ) { t425 = 0.0 ; } else { t425
= X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) - t425 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I *
461.523 ) + t425 * 4124.48151675695 ; if ( X [ 284ULL ] <= 216.59999999999997
) { t553 = 216.59999999999997 ; } else { t553 = X [ 284ULL ] >= 623.15 ?
623.15 : X [ 284ULL ] ; } t479 = t553 * t553 ; t555 = ( ( (
1074.1165326382641 + t553 * - 0.2214565261064495 ) + t479 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) - t425 ) + ( (
1479.6504774711011 + t553 * 1.2002114337048222 ) + t479 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) + ( (
12825.281119789837 + t553 * 6.9647057412840034 ) + t479 * -
0.0070524868246844051 ) * t425 ; t907 = t555 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t553 = t555
/ ( t907 == 0.0 ? 1.0E-16 : t907 ) ; if ( X [ 76ULL ] <= 0.0 ) { t555 = 0.0 ;
} else { t555 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; } if ( X [ 75ULL ]
<= 0.0 ) { t479 = 0.0 ; } else { t479 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL
] ; } t276 [ 0ULL ] = X [ 7ULL ] ; tlu2_linear_nearest_prelookup ( & oc_efOut
. mField0 [ 0ULL ] , & oc_efOut . mField1 [ 0ULL ] , & oc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [ 0ULL ] , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = oc_efOut ;
tlu2_1d_linear_nearest_value ( & pc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = pc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = qc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = rc_efOut [ 0 ] ; piece17 = (
( ( 1.0 - t555 ) - t479 ) * t367_idx_0 + t365_idx_0 * t555 ) + t366_idx_0 *
t479 ; t553 = - pmf_sqrt ( fabs ( X [ 285ULL ] * X [ 285ULL ] * t553 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) /
( X [ 284ULL ] == 0.0 ? 1.0E-16 : X [ 284ULL ] ) ) ) * 0.32 ; t768 = X [ 7ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t555 = X
[ 38ULL ] / ( t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [ 286ULL ] <=
216.59999999999997 ) { t479 = 216.59999999999997 ; } else { t479 = X [ 286ULL
] >= 623.15 ? 623.15 : X [ 286ULL ] ; } t495 = t479 * t479 ; t558 = ( ( (
1074.1165326382641 + t479 * - 0.2214565261064495 ) + t495 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) - t425 ) + ( (
1479.6504774711011 + t479 * 1.2002114337048222 ) + t495 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) + ( (
12825.281119789837 + t479 * 6.9647057412840034 ) + t495 * -
0.0070524868246844051 ) * t425 ; t907 = t558 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = - pmf_sqrt (
fabs ( X [ 287ULL ] * X [ 287ULL ] * ( t558 / ( t907 == 0.0 ? 1.0E-16 : t907
) ) / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0
? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 )
/ ( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) ) ) * 0.32 ; if ( - X [
272ULL ] >= 0.0 ) { t558 = X [ 272ULL ] / ( t553 == 0.0 ? 1.0E-16 : t553 ) *
1.0E-5 ; } else { t558 = - X [ 272ULL ] / ( t553 == 0.0 ? 1.0E-16 : t553 ) *
1.0E-5 ; } if ( - X [ 129ULL ] >= 0.0 ) { t553 = X [ 129ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } else { t553 = - X [ 129ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } t276 [ 0ULL ] = X [ 7ULL ] ; tlu2_linear_linear_prelookup ( &
sc_efOut . mField0 [ 0ULL ] , & sc_efOut . mField1 [ 0ULL ] , & sc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = sc_efOut ;
tlu2_1d_linear_linear_value ( & tc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = tc_efOut [ 0 ] ; t495 =
t367_idx_0 ; if ( 1.0 - X [ 9ULL ] >= 0.01 ) { t479 = 1.0 - X [ 9ULL ] ; }
else if ( 1.0 - X [ 9ULL ] >= - 0.1 ) { t479 = pmf_exp ( ( ( 1.0 - X [ 9ULL ]
) - 0.01 ) / 0.01 ) * 0.01 ; } else { t479 = 1.6701700790245661E-7 ; } t562 =
X [ 8ULL ] / ( t479 == 0.0 ? 1.0E-16 : t479 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & uc_efOut [ 0ULL ] , & t23
. mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = uc_efOut [
0 ] ; t479 = pmf_exp ( pmf_log ( X [ 38ULL ] * 100000.0 ) - t367_idx_0 ) ; if
( t479 >= 1.0 ) { t907 = ( t479 - 1.0 ) * 461.523 + t562 ; t479 = t562 / (
t907 == 0.0 ? 1.0E-16 : t907 ) ; } else { t479 = 1.0 ; } t768 = t479 * 0.01 ;
t562 = ( X [ 9ULL ] - t479 ) / ( t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [
9ULL ] - t479 <= 0.0 ) { t562 = 0.0 ; } else if ( X [ 9ULL ] - t479 >= t479 *
0.01 ) { t562 = X [ 9ULL ] - t479 ; } else { t562 = ( X [ 9ULL ] - t479 ) * (
t562 * t562 * 3.0 - t562 * t562 * t562 * 2.0 ) ; } t562 = t555 * t562 *
0.026773120849090417 / 0.001 ; t562 *= 100000.0 ; tlu2_1d_linear_linear_value
( & vc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , & t274 [ 0ULL ] , & t32 [
0ULL ] ) ; t367_idx_0 = vc_efOut [ 0 ] ; t479 = t367_idx_0 ;
tlu2_1d_linear_linear_value ( & wc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = wc_efOut [ 0 ] ; t572 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) - t425 ) *
t479 + t495 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) +
t367_idx_0 * t425 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 0ULL ] = X
[ 299ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 1ULL ] = X [ 39ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 2ULL ] = X
[ 301ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 3ULL ] = X [ 41ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 4ULL ] = X
[ 303ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0
[ 5ULL ] = X [ 300ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ 6ULL ] = X
[ 40ULL ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [
7ULL ] = X [ 302ULL ] ; if ( X [ 41ULL ] <= 0.0 ) { t479 = 0.0 ; } else {
t479 = X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 40ULL
] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t581 = ( ( ( 1.0 - t479 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
296.802103844292 + t479 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
259.836612622973 ; if ( X [ 305ULL ] <= 216.59999999999997 ) { t583 =
216.59999999999997 ; } else { t583 = X [ 305ULL ] >= 623.15 ? 623.15 : X [
305ULL ] ; } t585 = t583 * t583 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = ( ( (
1074.1165326382641 + t583 * - 0.2214565261064495 ) + t585 *
0.00037212980109014541 ) * ( ( 1.0 - t479 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
1479.6504774711011 + t583 * 1.2002114337048222 ) + t585 * -
0.00038614513167823636 ) * t479 ) + ( ( 900.63941224838356 + t583 * -
0.044484923911382625 ) + t585 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t907 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I - t581 ; t583 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I / ( t907 == 0.0 ?
1.0E-16 : t907 ) ; if ( X [ 303ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X [ 303ULL ] >= 1.0
? 1.0 : X [ 303ULL ] ; } if ( X [ 302ULL ] <= 0.0 ) { t585 = 0.0 ; } else {
t585 = X [ 302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } t276 [ 0ULL ] = X [ 39ULL
] ; tlu2_linear_nearest_prelookup ( & xc_efOut . mField0 [ 0ULL ] , &
xc_efOut . mField1 [ 0ULL ] , & xc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ]
, & t32 [ 0ULL ] ) ; t23 = xc_efOut ; tlu2_1d_linear_nearest_value ( &
yc_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = yc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ad_efOut [
0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t365_idx_0 = ad_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & bd_efOut [
0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t274 [ 0ULL ] , & t32 [ 0ULL ]
) ; t366_idx_0 = bd_efOut [ 0 ] ; t586 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) - t585 ) *
t367_idx_0 + t365_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I ) + t366_idx_0 * t585
; t583 = - pmf_sqrt ( fabs ( X [ 306ULL ] * X [ 306ULL ] * t583 / ( t581 ==
0.0 ? 1.0E-16 : t581 ) / ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) )
* 0.0019634954084936209 ; t768 = X [ 39ULL ] * t581 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X [ 42ULL ] / (
t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [ 308ULL ] <= 216.59999999999997 ) {
t585 = 216.59999999999997 ; } else { t585 = X [ 308ULL ] >= 623.15 ? 623.15 :
X [ 308ULL ] ; } t588 = t585 * t585 ; t587 = ( ( ( 1074.1165326382641 + t585
* - 0.2214565261064495 ) + t588 * 0.00037212980109014541 ) * ( ( 1.0 - t479 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
1479.6504774711011 + t585 * 1.2002114337048222 ) + t588 * -
0.00038614513167823636 ) * t479 ) + ( ( 900.63941224838356 + t585 * -
0.044484923911382625 ) + t588 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; t907 = t587
- t581 ; t581 = - pmf_sqrt ( fabs ( X [ 309ULL ] * X [ 309ULL ] * ( t587 / (
t907 == 0.0 ? 1.0E-16 : t907 ) ) / ( t581 == 0.0 ? 1.0E-16 : t581 ) / ( X [
308ULL ] == 0.0 ? 1.0E-16 : X [ 308ULL ] ) ) ) * 0.0019634954084936209 ; if (
- X [ 239ULL ] >= 0.0 ) { t585 = X [ 239ULL ] / ( t583 == 0.0 ? 1.0E-16 :
t583 ) * 1.0E-5 ; } else { t585 = - X [ 239ULL ] / ( t583 == 0.0 ? 1.0E-16 :
t583 ) * 1.0E-5 ; } if ( X [ 307ULL ] >= 0.0 ) { t583 = - X [ 307ULL ] / (
t581 == 0.0 ? 1.0E-16 : t581 ) * 1.0E-5 ; } else { t583 = X [ 307ULL ] / (
t581 == 0.0 ? 1.0E-16 : t581 ) * 1.0E-5 ; } t276 [ 0ULL ] = X [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & cd_efOut . mField0 [ 0ULL ] , & cd_efOut .
mField1 [ 0ULL ] , & cd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = cd_efOut ; tlu2_1d_linear_linear_value ( & dd_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = dd_efOut [ 0
] ; t581 = t367_idx_0 ; if ( 1.0 - X [ 41ULL ] >= 0.01 ) { t588 = 1.0 - X [
41ULL ] ; } else if ( 1.0 - X [ 41ULL ] >= - 0.1 ) { t588 = pmf_exp ( ( ( 1.0
- X [ 41ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t588 =
1.6701700790245661E-7 ; } t587 = X [ 40ULL ] / ( t588 == 0.0 ? 1.0E-16 : t588
) * - 36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
ed_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = ed_efOut [ 0 ] ; t588 = pmf_exp ( pmf_log ( X [ 42ULL ] *
100000.0 ) - t367_idx_0 ) ; if ( t588 >= 1.0 ) { t907 = ( t588 - 1.0 ) *
461.523 + t587 ; t589 = t587 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ; } else {
t589 = 1.0 ; } t768 = t589 * 0.01 ; t587 = ( X [ 41ULL ] - t589 ) / ( t768 ==
0.0 ? 1.0E-16 : t768 ) ; if ( X [ 41ULL ] - t589 <= 0.0 ) { t587 = 0.0 ; }
else if ( X [ 41ULL ] - t589 >= t589 * 0.01 ) { t587 = X [ 41ULL ] - t589 ; }
else { t587 = ( X [ 41ULL ] - t589 ) * ( t587 * t587 * 3.0 - t587 * t587 *
t587 * 2.0 ) ; } t587 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * t587 *
0.00049087385212340522 / 0.001 ; t587 *= 100000.0 ;
tlu2_1d_linear_linear_value ( & fd_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = fd_efOut [ 0 ] ; t588 =
t367_idx_0 ; tlu2_1d_linear_linear_value ( & gd_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = gd_efOut [ 0
] ; t590 = ( ( ( 1.0 - t479 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * t588 +
t581 * t479 ) + t367_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ; if ( X [
335ULL ] <= 0.0 ) { t581 = 0.0 ; } else { t581 = X [ 335ULL ] >= 1.0 ? 1.0 :
X [ 335ULL ] ; } if ( X [ 336ULL ] <= 0.0 ) { t588 = 0.0 ; } else { t588 = X
[ 336ULL ] >= 1.0 ? 1.0 : X [ 336ULL ] ; } t907 = ( ( ( ( 1.0 - t581 ) - t588
) * 296.802103844292 + t581 * 461.523 ) + t588 * 259.836612622973 ) * 293.15
; t589 = 1.01325 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ; t593 = ( X [ 339ULL ] *
0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
45ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 45ULL
] >= 1.0 ? 1.0 : X [ 45ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) { t495 = 0.0 ; }
else { t495 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t495 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 ) +
t495 * 259.836612622973 ; if ( X [ 343ULL ] <= 216.59999999999997 ) { t598 =
216.59999999999997 ; } else { t598 = X [ 343ULL ] >= 623.15 ? 623.15 : X [
343ULL ] ; } t600 = t598 * t598 ; t599 = ( ( ( 1074.1165326382641 + t598 * -
0.2214565261064495 ) + t600 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t495 ) + (
( 1479.6504774711011 + t598 * 1.2002114337048222 ) + t600 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + t598 * - 0.044484923911382625 ) + t600 *
0.00036936011832044979 ) * t495 ; t907 = t599 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ; t598 = t599
/ ( t907 == 0.0 ? 1.0E-16 : t907 ) ; if ( X [ 345ULL ] <= 0.0 ) { t599 = 0.0
; } else { t599 = X [ 345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ; } if ( X [
346ULL ] <= 0.0 ) { t600 = 0.0 ; } else { t600 = X [ 346ULL ] >= 1.0 ? 1.0 :
X [ 346ULL ] ; } t276 [ 0ULL ] = X [ 43ULL ] ; tlu2_linear_nearest_prelookup
( & hd_efOut . mField0 [ 0ULL ] , & hd_efOut . mField1 [ 0ULL ] , & hd_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = hd_efOut ;
tlu2_1d_linear_nearest_value ( & id_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = id_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jd_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = jd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = kd_efOut [ 0 ] ;
intrm_sf_mf_1311 = ( ( ( 1.0 - t599 ) - t600 ) * t367_idx_0 + t365_idx_0 *
t599 ) + t366_idx_0 * t600 ; t598 = - pmf_sqrt ( fabs ( X [ 344ULL ] * X [
344ULL ] * t598 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ) /
( X [ 343ULL ] == 0.0 ? 1.0E-16 : X [ 343ULL ] ) ) ) * 0.0019634954084936209
; t768 = X [ 43ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ; t599 = X [
44ULL ] / ( t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [ 347ULL ] <=
216.59999999999997 ) { t600 = 216.59999999999997 ; } else { t600 = X [ 347ULL
] >= 623.15 ? 623.15 : X [ 347ULL ] ; } t479 = t600 * t600 ; intrm_sf_mf_1107
= ( ( ( 1074.1165326382641 + t600 * - 0.2214565261064495 ) + t479 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t495 ) + (
( 1479.6504774711011 + t600 * 1.2002114337048222 ) + t479 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + t600 * - 0.044484923911382625 ) + t479 *
0.00036936011832044979 ) * t495 ; t907 = intrm_sf_mf_1107 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked = - pmf_sqrt
( fabs ( X [ 348ULL ] * X [ 348ULL ] * ( intrm_sf_mf_1107 / ( t907 == 0.0 ?
1.0E-16 : t907 ) ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ) /
( X [ 347ULL ] == 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) ) * 0.0019634954084936209
; t352 [ 0ULL ] = X [ 44ULL ] * 100000.0 ; t352 [ 1ULL ] = X [ 43ULL ] ; t352
[ 2ULL ] = X [ 350ULL ] ; t352 [ 3ULL ] = X [ 45ULL ] ; t352 [ 4ULL ] = X [
345ULL ] ; t352 [ 5ULL ] = X [ 349ULL ] ; t352 [ 6ULL ] = X [ 46ULL ] ; t352
[ 7ULL ] = X [ 346ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t396 ] = t352 [ t396 ]
; } if ( X [ 342ULL ] >= 0.0 ) { t600 = - X [ 342ULL ] / ( t598 == 0.0 ?
1.0E-16 : t598 ) * 1.0E-5 ; } else { t600 = X [ 342ULL ] / ( t598 == 0.0 ?
1.0E-16 : t598 ) * 1.0E-5 ; } if ( - X [ 330ULL ] >= 0.0 ) { t598 = X [
330ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ) * 1.0E-5 ;
} else { t598 = - X [ 330ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked ) *
1.0E-5 ; } t276 [ 0ULL ] = X [ 43ULL ] ; tlu2_linear_linear_prelookup ( &
ld_efOut . mField0 [ 0ULL ] , & ld_efOut . mField1 [ 0ULL ] , & ld_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t24 = ld_efOut ;
tlu2_1d_linear_linear_value ( & md_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ]
, & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = md_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked = t367_idx_0
; if ( 1.0 - X [ 45ULL ] >= 0.01 ) { t479 = 1.0 - X [ 45ULL ] ; } else if (
1.0 - X [ 45ULL ] >= - 0.1 ) { t479 = pmf_exp ( ( ( 1.0 - X [ 45ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t479 = 1.6701700790245661E-7 ; }
intrm_sf_mf_1107 = X [ 46ULL ] / ( t479 == 0.0 ? 1.0E-16 : t479 ) * -
36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
nd_efOut [ 0ULL ] , & t24 . mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = nd_efOut [ 0 ] ; t479 = pmf_exp ( pmf_log ( X [ 44ULL ] *
100000.0 ) - t367_idx_0 ) ; if ( t479 >= 1.0 ) { t907 = ( t479 - 1.0 ) *
461.523 + intrm_sf_mf_1107 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 =
intrm_sf_mf_1107 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 = 1.0 ; }
t768 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 * 0.01
; intrm_sf_mf_1107 = ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 ) / ( t768 ==
0.0 ? 1.0E-16 : t768 ) ; if ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 <= 0.0 ) {
intrm_sf_mf_1107 = 0.0 ; } else if ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 * 0.01 ) {
intrm_sf_mf_1107 = X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 ; } else {
intrm_sf_mf_1107 = ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 ) * (
intrm_sf_mf_1107 * intrm_sf_mf_1107 * 3.0 - intrm_sf_mf_1107 *
intrm_sf_mf_1107 * intrm_sf_mf_1107 * 2.0 ) ; } intrm_sf_mf_1107 = t599 *
intrm_sf_mf_1107 * 0.0019634954084936209 / 0.001 ; intrm_sf_mf_1107 *=
100000.0 ; tlu2_1d_linear_linear_value ( & od_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = od_efOut [
0 ] ; t479 = t367_idx_0 ; tlu2_1d_linear_linear_value ( & pd_efOut [ 0ULL ] ,
& t24 . mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField5 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 =
pd_efOut [ 0 ] ; t605 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) - t495 ) *
t479 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + t367_idx_0
* t495 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked =
U_idx_9 * 10.0 ; if ( X [ 339ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 =
1.9634954084936209E-11 ; } else if ( X [ 339ULL ] * 0.0019634954084936209 >=
0.0012566370614359179 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 =
0.0012566370614359179 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 = X [ 339ULL
] * 0.0019634954084936209 ; } if ( X [ 362ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 362ULL
] >= 1.0 ? 1.0 : X [ 362ULL ] ; } if ( X [ 363ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = X [ 363ULL ] >=
1.0 ? 1.0 : X [ 363ULL ] ; } intrm_sf_mf_1322 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) * 296.802103844292
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 )
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I * 259.836612622973
; if ( X [ 360ULL ] <= 216.59999999999997 ) { t609 = 216.59999999999997 ; }
else { t609 = X [ 360ULL ] >= 623.15 ? 623.15 : X [ 360ULL ] ; } t479 = t609
* t609 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = ( ( (
1074.1165326382641 + t609 * - 0.2214565261064495 ) + t479 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) + ( (
1479.6504774711011 + t609 * 1.2002114337048222 ) + t479 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + t609 * - 0.044484923911382625 ) + t479 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ; t907 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I - intrm_sf_mf_1322 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_sqrt (
fabs ( X [ 361ULL ] * X [ 361ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I / ( t907 == 0.0 ?
1.0E-16 : t907 ) ) / ( intrm_sf_mf_1322 == 0.0 ? 1.0E-16 : intrm_sf_mf_1322 )
/ ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 * 0.64 ; if (
X [ 330ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 = X [ 330ULL
] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 = - X [
330ULL ] / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * 1.0E-5 ; }
if ( X [ 12ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X [ 12ULL
] >= 1.0 ? 1.0 : X [ 12ULL ] ; } if ( X [ 11ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = X [ 11ULL ] >= 1.0
? 1.0 : X [ 11ULL ] ; } intrm_sf_mf_1322 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) * 296.802103844292
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 461.523 )
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I * 259.836612622973
; if ( X [ 367ULL ] <= 216.59999999999997 ) { t609 = 216.59999999999997 ; }
else { t609 = X [ 367ULL ] >= 623.15 ? 623.15 : X [ 367ULL ] ; } t455 = t609
* t609 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = ( ( (
1074.1165326382641 + t609 * - 0.2214565261064495 ) + t455 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) + ( (
1479.6504774711011 + t609 * 1.2002114337048222 ) + t455 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + t609 * - 0.044484923911382625 ) + t455 *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ; t907 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I - intrm_sf_mf_1322 ;
t609 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I / ( t907 ==
0.0 ? 1.0E-16 : t907 ) ; if ( X [ 81ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = X [ 81ULL ] >= 1.0
? 1.0 : X [ 81ULL ] ; } if ( X [ 80ULL ] <= 0.0 ) { t479 = 0.0 ; } else {
t479 = X [ 80ULL ] >= 1.0 ? 1.0 : X [ 80ULL ] ; } t276 [ 0ULL ] = X [ 10ULL ]
; tlu2_linear_nearest_prelookup ( & qd_efOut . mField0 [ 0ULL ] , & qd_efOut
. mField1 [ 0ULL ] , & qd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = qd_efOut ; tlu2_1d_linear_nearest_value ( & rd_efOut [ 0ULL ] , & t23 .
mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = rd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & sd_efOut [ 0ULL ] , & t23 . mField0 [
0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = sd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & td_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = td_efOut [ 0 ] ; t455 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) - t479 ) *
t367_idx_0 + t365_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I ) + t366_idx_0 * t479
; t609 = - pmf_sqrt ( fabs ( X [ 368ULL ] * X [ 368ULL ] * t609 / (
intrm_sf_mf_1322 == 0.0 ? 1.0E-16 : intrm_sf_mf_1322 ) / ( X [ 367ULL ] ==
0.0 ? 1.0E-16 : X [ 367ULL ] ) ) ) * 0.32 ; t768 = X [ 10ULL ] *
intrm_sf_mf_1322 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I =
X [ 47ULL ] / ( t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [ 370ULL ] <=
216.59999999999997 ) { t479 = 216.59999999999997 ; } else { t479 = X [ 370ULL
] >= 623.15 ? 623.15 : X [ 370ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = t479 * t479
; t613 = ( ( ( 1074.1165326382641 + t479 * - 0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) + ( (
1479.6504774711011 + t479 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + ( (
900.63941224838356 + t479 * - 0.044484923911382625 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ; t907 = t613 -
intrm_sf_mf_1322 ; intrm_sf_mf_1322 = - pmf_sqrt ( fabs ( X [ 371ULL ] * X [
371ULL ] * ( t613 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) / ( intrm_sf_mf_1322
== 0.0 ? 1.0E-16 : intrm_sf_mf_1322 ) / ( X [ 370ULL ] == 0.0 ? 1.0E-16 : X [
370ULL ] ) ) ) * 0.32 ; if ( - X [ 307ULL ] >= 0.0 ) { t613 = X [ 307ULL ] /
( t609 == 0.0 ? 1.0E-16 : t609 ) * 1.0E-5 ; } else { t613 = - X [ 307ULL ] /
( t609 == 0.0 ? 1.0E-16 : t609 ) * 1.0E-5 ; } if ( X [ 369ULL ] >= 0.0 ) {
t609 = - X [ 369ULL ] / ( intrm_sf_mf_1322 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1322 ) * 1.0E-5 ; } else { t609 = X [ 369ULL ] / (
intrm_sf_mf_1322 == 0.0 ? 1.0E-16 : intrm_sf_mf_1322 ) * 1.0E-5 ; } t276 [
0ULL ] = X [ 10ULL ] ; tlu2_linear_linear_prelookup ( & ud_efOut . mField0 [
0ULL ] , & ud_efOut . mField1 [ 0ULL ] , & ud_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [ 0ULL ] , & t274 [ 0ULL ]
, & t32 [ 0ULL ] ) ; t14 = ud_efOut ; tlu2_1d_linear_linear_value ( &
vd_efOut [ 0ULL ] , & t14 . mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t274 [ 0ULL ] , & t32 [ 0ULL ] )
; t367_idx_0 = vd_efOut [ 0 ] ; intrm_sf_mf_1322 = t367_idx_0 ; if ( 1.0 - X
[ 12ULL ] >= 0.01 ) { t479 = 1.0 - X [ 12ULL ] ; } else if ( 1.0 - X [ 12ULL
] >= - 0.1 ) { t479 = pmf_exp ( ( ( 1.0 - X [ 12ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { t479 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = X [ 11ULL ]
/ ( t479 == 0.0 ? 1.0E-16 : t479 ) * - 36.965491221318985 + 296.802103844292
; tlu2_1d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t14 . mField0 [ 0ULL
] , & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = wd_efOut [ 0 ] ; t479 =
pmf_exp ( pmf_log ( X [ 47ULL ] * 100000.0 ) - t367_idx_0 ) ; if ( t479 >=
1.0 ) { t907 = ( t479 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden ; t495 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden / ( t907 ==
0.0 ? 1.0E-16 : t907 ) ; } else { t495 = 1.0 ; } t768 = t495 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = ( X [ 12ULL
] - t495 ) / ( t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [ 12ULL ] - t495 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = 0.0
; } else if ( X [ 12ULL ] - t495 >= t495 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = X [ 12ULL ]
- t495 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = ( X [ 12ULL
] - t495 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *= 100000.0 ;
tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t14 . mField0 [ 0ULL ]
, & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = xd_efOut [ 0 ] ; t495 =
t367_idx_0 ; tlu2_1d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t14 .
mField0 [ 0ULL ] , & t14 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = yd_efOut [ 0
] ; t618 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) * t495 +
intrm_sf_mf_1322 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) + t367_idx_0
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ; if ( X [ 15ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = X [ 15ULL ]
>= 1.0 ? 1.0 : X [ 15ULL ] ; } if ( X [ 14ULL ] <= 0.0 ) { intrm_sf_mf_1322 =
0.0 ; } else { intrm_sf_mf_1322 = X [ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; }
t495 = ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I )
- intrm_sf_mf_1322 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I * 461.523 ) +
intrm_sf_mf_1322 * 259.836612622973 ; if ( X [ 381ULL ] <= 216.59999999999997
) { t617 = 216.59999999999997 ; } else { t617 = X [ 381ULL ] >= 623.15 ?
623.15 : X [ 381ULL ] ; } t479 = t617 * t617 ; t619 = ( ( (
1074.1165326382641 + t617 * - 0.2214565261064495 ) + t479 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) - intrm_sf_mf_1322
) + ( ( 1479.6504774711011 + t617 * 1.2002114337048222 ) + t479 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) + ( (
900.63941224838356 + t617 * - 0.044484923911382625 ) + t479 *
0.00036936011832044979 ) * intrm_sf_mf_1322 ; t907 = t619 - t495 ; t617 =
t619 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ; if ( X [ 86ULL ] <= 0.0 ) { t619 =
0.0 ; } else { t619 = X [ 86ULL ] >= 1.0 ? 1.0 : X [ 86ULL ] ; } if ( X [
85ULL ] <= 0.0 ) { t479 = 0.0 ; } else { t479 = X [ 85ULL ] >= 1.0 ? 1.0 : X
[ 85ULL ] ; } t276 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_nearest_prelookup ( &
ae_efOut . mField0 [ 0ULL ] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = ae_efOut ;
tlu2_1d_linear_nearest_value ( & be_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = be_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ce_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t365_idx_0 = ce_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & de_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t366_idx_0 = de_efOut [ 0 ] ; t621 = ( (
( 1.0 - t619 ) - t479 ) * t367_idx_0 + t365_idx_0 * t619 ) + t366_idx_0 *
t479 ; t617 = - pmf_sqrt ( fabs ( X [ 382ULL ] * X [ 382ULL ] * t617 / ( t495
== 0.0 ? 1.0E-16 : t495 ) / ( X [ 381ULL ] == 0.0 ? 1.0E-16 : X [ 381ULL ] )
) ) * 0.32 ; t768 = X [ 13ULL ] * t495 ; t619 = X [ 48ULL ] / ( t768 == 0.0 ?
1.0E-16 : t768 ) ; if ( X [ 383ULL ] <= 216.59999999999997 ) { t479 =
216.59999999999997 ; } else { t479 = X [ 383ULL ] >= 623.15 ? 623.15 : X [
383ULL ] ; } t623 = t479 * t479 ; t622 = ( ( ( 1074.1165326382641 + t479 * -
0.2214565261064495 ) + t623 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) - intrm_sf_mf_1322
) + ( ( 1479.6504774711011 + t479 * 1.2002114337048222 ) + t623 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) + ( (
900.63941224838356 + t479 * - 0.044484923911382625 ) + t623 *
0.00036936011832044979 ) * intrm_sf_mf_1322 ; t907 = t622 - t495 ; t495 = -
pmf_sqrt ( fabs ( X [ 384ULL ] * X [ 384ULL ] * ( t622 / ( t907 == 0.0 ?
1.0E-16 : t907 ) ) / ( t495 == 0.0 ? 1.0E-16 : t495 ) / ( X [ 383ULL ] == 0.0
? 1.0E-16 : X [ 383ULL ] ) ) ) * 0.32 ; if ( - X [ 369ULL ] >= 0.0 ) { t622 =
X [ 369ULL ] / ( t617 == 0.0 ? 1.0E-16 : t617 ) * 1.0E-5 ; } else { t622 = -
X [ 369ULL ] / ( t617 == 0.0 ? 1.0E-16 : t617 ) * 1.0E-5 ; } if ( - X [
342ULL ] >= 0.0 ) { t617 = X [ 342ULL ] / ( t495 == 0.0 ? 1.0E-16 : t495 ) *
1.0E-5 ; } else { t617 = - X [ 342ULL ] / ( t495 == 0.0 ? 1.0E-16 : t495 ) *
1.0E-5 ; } t276 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup ( &
ee_efOut . mField0 [ 0ULL ] , & ee_efOut . mField1 [ 0ULL ] , & ee_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t276 [
0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t23 = ee_efOut ;
tlu2_1d_linear_linear_value ( & fe_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = fe_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t367_idx_0 ;
if ( 1.0 - X [ 15ULL ] >= 0.01 ) { t479 = 1.0 - X [ 15ULL ] ; } else if ( 1.0
- X [ 15ULL ] >= - 0.1 ) { t479 = pmf_exp ( ( ( 1.0 - X [ 15ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t479 = 1.6701700790245661E-7 ; } t623 = X [ 14ULL
] / ( t479 == 0.0 ? 1.0E-16 : t479 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & ge_efOut [ 0ULL ] , & t23
. mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = ge_efOut [
0 ] ; t479 = pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t367_idx_0 ) ; if
( t479 >= 1.0 ) { t907 = ( t479 - 1.0 ) * 461.523 + t623 ; t425 = t623 / (
t907 == 0.0 ? 1.0E-16 : t907 ) ; } else { t425 = 1.0 ; } t768 = t425 * 0.01 ;
t623 = ( X [ 15ULL ] - t425 ) / ( t768 == 0.0 ? 1.0E-16 : t768 ) ; if ( X [
15ULL ] - t425 <= 0.0 ) { t623 = 0.0 ; } else if ( X [ 15ULL ] - t425 >= t425
* 0.01 ) { t623 = X [ 15ULL ] - t425 ; } else { t623 = ( X [ 15ULL ] - t425 )
* ( t623 * t623 * 3.0 - t623 * t623 * t623 * 2.0 ) ; } t623 = t619 * t623 *
0.026773120849090417 / 0.001 ; t623 *= 100000.0 ; tlu2_1d_linear_linear_value
( & he_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ] , & t23 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 , & t274 [ 0ULL ] , & t32 [
0ULL ] ) ; t367_idx_0 = he_efOut [ 0 ] ; t425 = t367_idx_0 ;
tlu2_1d_linear_linear_value ( & ie_efOut [ 0ULL ] , & t23 . mField0 [ 0ULL ]
, & t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t274 [ 0ULL ] , & t32 [ 0ULL ] ) ; t367_idx_0 = ie_efOut [ 0 ] ; t627 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) -
intrm_sf_mf_1322 ) * t425 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) + t367_idx_0 *
intrm_sf_mf_1322 ; intrm_sf_mf_1322 = ( ( ( ( X [ 1ULL ] * 0.1 - X [ 52ULL ]
) + X [ 53ULL ] * - 0.1 ) + X [ 56ULL ] * 1.0E-9 ) - X [ 58ULL ] ) + X [ 2ULL
] ; t276 [ 0ULL ] = X [ 49ULL ] ; t274 [ 0 ] = 23ULL ;
tlu2_linear_nearest_prelookup ( & je_efOut . mField0 [ 0ULL ] , & je_efOut .
mField1 [ 0ULL ] , & je_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField20 , & t276 [ 0ULL ] , & t274 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t24 = je_efOut ; t276 [ 0ULL ] = X [ 391ULL ] ; t277 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & ke_efOut . mField0 [ 0ULL ] , & ke_efOut .
mField1 [ 0ULL ] , & ke_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t276 [ 0ULL ] , & t277 [ 0ULL ] , & t32 [ 0ULL ] ) ;
t23 = ke_efOut ; tlu2_2d_linear_nearest_value ( & le_efOut [ 0ULL ] , & t24 .
mField0 [ 0ULL ] , & t24 . mField2 [ 0ULL ] , & t23 . mField0 [ 0ULL ] , &
t23 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 , &
t274 [ 0ULL ] , & t277 [ 0ULL ] , & t32 [ 0ULL ] ) ; t276 [ 0 ] = le_efOut [
0 ] ; t626 = t276 [ 0ULL ] ; t768 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
9.8174770424681068E-6 ; t629 = X [ 307ULL ] * t586 * 11.2 / ( t768 == 0.0 ?
1.0E-16 : t768 ) ; t630 = X [ 307ULL ] >= 0.0 ? X [ 307ULL ] : - X [ 307ULL ]
; t495 = t586 * 0.0019634954084936209 ; t631 = t630 * 0.05 / ( t495 == 0.0 ?
1.0E-16 : t495 ) ; intrm_sf_mf_1004 = t631 >= 1.0 ? t631 : 1.0 ; t907 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_1004 == 0.0 ? 1.0E-16 : intrm_sf_mf_1004 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1004 == 0.0 ?
1.0E-16 : intrm_sf_mf_1004 ) + 2.8767404433520813E-5 ) * 3.24 ; t425 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
3.855314219175531E-7 ; t630 = X [ 307ULL ] * t630 * ( 1.0 / ( t907 == 0.0 ?
1.0E-16 : t907 ) ) * 0.175 / ( t425 == 0.0 ? 1.0E-16 : t425 ) ;
intrm_sf_mf_1004 = ( t631 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1318 =
intrm_sf_mf_1004 * intrm_sf_mf_1004 * 3.0 - intrm_sf_mf_1004 *
intrm_sf_mf_1004 * intrm_sf_mf_1004 * 2.0 ; if ( t631 <= 2000.0 ) {
intrm_sf_mf_1004 = t629 * 9.9999999999999991E-11 ; } else if ( t631 >= 4000.0
) { intrm_sf_mf_1004 = t630 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_1004 = ( ( 1.0 - intrm_sf_mf_1318 ) * t629 + t630 *
intrm_sf_mf_1318 ) * 9.9999999999999991E-11 ; } t629 = ( ( ( 1.0 - t581 ) -
t588 ) * 304.06022922571 + t581 * 2537.56068088674 ) + t588 *
266.413508632715 ; t581 = X [ 342ULL ] >= 0.0 ? X [ 342ULL ] : - X [ 342ULL ]
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = intrm_sf_mf_1311
* 0.0019634954084936209 ; t588 = t581 * 0.05 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t630 = t588 >=
1.0 ? t588 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t630 == 0.0 ? 1.0E-16 : t630 )
+ 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t630 == 0.0 ? 1.0E-16 : t630
) + 2.8767404433520813E-5 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t599 *
9.8174770424681068E-6 ; t631 = X [ 342ULL ] * intrm_sf_mf_1311 * 35.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
t599 * 3.855314219175531E-7 ; t581 = X [ 342ULL ] * t581 * ( 1.0 / ( t907 ==
0.0 ? 1.0E-16 : t907 ) ) * 0.55 / ( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0
) ; t630 = ( t588 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1318 = t630 * t630 * 3.0
- t630 * t630 * t630 * 2.0 ; if ( t588 <= 2000.0 ) { t630 = t631 *
9.9999999999999991E-11 ; } else if ( t588 >= 4000.0 ) { t630 = t581 *
9.9999999999999991E-11 ; } else { t630 = ( ( 1.0 - intrm_sf_mf_1318 ) * t631
+ t581 * intrm_sf_mf_1318 ) * 9.9999999999999991E-11 ; } if ( - X [ 330ULL ]
>= 0.0 ) { t581 = - X [ 330ULL ] ; } else { t581 = X [ 330ULL ] ; } t588 =
t581 * 0.05 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ;
t631 = t588 >= 1.0 ? t588 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t631 == 0.0 ?
1.0E-16 : t631 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t631 == 0.0
? 1.0E-16 : t631 ) + 2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_1311 = X [
330ULL ] * intrm_sf_mf_1311 * - 35.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t581 = X [
330ULL ] * t581 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.55 / (
t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ; t631 = ( t588 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1318 = t631 * t631 * 3.0 - t631 * t631 * t631 * 2.0 ; if
( t588 <= 2000.0 ) { t631 = intrm_sf_mf_1311 * 9.9999999999999991E-11 ; }
else if ( t588 >= 4000.0 ) { t631 = t581 * 9.9999999999999991E-11 ; } else {
t631 = ( ( 1.0 - intrm_sf_mf_1318 ) * intrm_sf_mf_1311 + t581 *
intrm_sf_mf_1318 ) * 9.9999999999999991E-11 ; } if ( - X [ 307ULL ] >= 0.0 )
{ t581 = - X [ 307ULL ] ; } else { t581 = X [ 307ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = t455 * 0.32 ; t588
= t581 * 0.01 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ;
intrm_sf_mf_1311 = t588 >= 1.0 ? t588 : 1.0 ; t907 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1311 == 0.0 ? 1.0E-16 : intrm_sf_mf_1311 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1311 == 0.0 ?
1.0E-16 : intrm_sf_mf_1311 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
6.4000000000000011E-5 ; intrm_sf_mf_1318 = X [ 307ULL ] * t455 * -
2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
0.0020480000000000003 ; t581 = X [ 307ULL ] * t581 * ( 1.0 / ( t907 == 0.0 ?
1.0E-16 : t907 ) ) * - 0.046833001326703774 / ( t365_idx_0 == 0.0 ? 1.0E-16 :
t365_idx_0 ) ; intrm_sf_mf_1311 = ( t588 - 2000.0 ) / 2000.0 ; t634 =
intrm_sf_mf_1311 * intrm_sf_mf_1311 * 3.0 - intrm_sf_mf_1311 *
intrm_sf_mf_1311 * intrm_sf_mf_1311 * 2.0 ; if ( t588 <= 2000.0 ) {
intrm_sf_mf_1311 = intrm_sf_mf_1318 * 9.9999999999999991E-11 ; } else if (
t588 >= 4000.0 ) { intrm_sf_mf_1311 = t581 * 9.9999999999999991E-11 ; } else
{ intrm_sf_mf_1311 = ( ( 1.0 - t634 ) * intrm_sf_mf_1318 + t581 * t634 ) *
9.9999999999999991E-11 ; } t581 = X [ 369ULL ] >= 0.0 ? X [ 369ULL ] : - X [
369ULL ] ; t588 = t581 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; intrm_sf_mf_1318
= t588 >= 1.0 ? t588 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1318 ==
0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) +
0.00017169489553429715 ) * 3.24 ; t455 = X [ 369ULL ] * t455 *
2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t581 = X [
369ULL ] * t581 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) *
0.046833001326703774 / ( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ;
intrm_sf_mf_1318 = ( t588 - 2000.0 ) / 2000.0 ; t634 = intrm_sf_mf_1318 *
intrm_sf_mf_1318 * 3.0 - intrm_sf_mf_1318 * intrm_sf_mf_1318 *
intrm_sf_mf_1318 * 2.0 ; if ( t588 <= 2000.0 ) { intrm_sf_mf_1318 = t455 *
9.9999999999999991E-11 ; } else if ( t588 >= 4000.0 ) { intrm_sf_mf_1318 =
t581 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1318 = ( ( 1.0 - t634 )
* t455 + t581 * t634 ) * 9.9999999999999991E-11 ; } t581 = X [ 129ULL ] >=
0.0 ? X [ 129ULL ] : - X [ 129ULL ] ; if ( - X [ 369ULL ] >= 0.0 ) { t588 = -
X [ 369ULL ] ; } else { t588 = X [ 369ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = t621 * 0.32 ; t455
= t588 * 0.01 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ;
t634 = t455 >= 1.0 ? t455 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t634 == 0.0 ?
1.0E-16 : t634 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t634 == 0.0
? 1.0E-16 : t634 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t619 *
6.4000000000000011E-5 ; t635 = X [ 369ULL ] * t621 * - 2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
t492 * 7.8539816339744827E-5 ; intrm_sf_mf_739 = t581 * 0.01 / ( t365_idx_0
== 0.0 ? 1.0E-16 : t365_idx_0 ) ; t479 = t619 * 0.0020480000000000003 ; t588
= X [ 369ULL ] * t588 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * -
0.046833001326703774 / ( t479 == 0.0 ? 1.0E-16 : t479 ) ; t634 = ( t455 -
2000.0 ) / 2000.0 ; t637 = t634 * t634 * 3.0 - t634 * t634 * t634 * 2.0 ; if
( t455 <= 2000.0 ) { t634 = t635 * 9.9999999999999991E-11 ; } else if ( t455
>= 4000.0 ) { t634 = t588 * 9.9999999999999991E-11 ; } else { t634 = ( ( 1.0
- t637 ) * t635 + t588 * t637 ) * 9.9999999999999991E-11 ; } if ( - X [
342ULL ] >= 0.0 ) { t588 = - X [ 342ULL ] ; } else { t588 = X [ 342ULL ] ; }
t455 = t588 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t635 = t455 >=
1.0 ? t455 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t635 == 0.0 ? 1.0E-16 : t635 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t635 == 0.0 ? 1.0E-16 : t635
) + 0.00017169489553429715 ) * 3.24 ; t621 = X [ 342ULL ] * t621 * -
2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t588 = X [
342ULL ] * t588 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * -
0.046833001326703774 / ( t479 == 0.0 ? 1.0E-16 : t479 ) ; t635 =
intrm_sf_mf_739 >= 1.0 ? intrm_sf_mf_739 : 1.0 ; t637 = ( t455 - 2000.0 ) /
2000.0 ; t366_idx_0 = t637 * t637 * 3.0 - t637 * t637 * t637 * 2.0 ; if (
t455 <= 2000.0 ) { t637 = t621 * 9.9999999999999991E-11 ; } else if ( t455 >=
4000.0 ) { t637 = t588 * 9.9999999999999991E-11 ; } else { t637 = ( ( 1.0 -
t366_idx_0 ) * t621 + t588 * t366_idx_0 ) * 9.9999999999999991E-11 ; } t907 =
pmf_log10 ( 6.9 / ( t635 == 0.0 ? 1.0E-16 : t635 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t635 == 0.0 ? 1.0E-16 : t635 ) + 0.00017169489553429715
) * 3.24 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = t490 *
1.5707963267948965E-8 ; t455 = X [ 129ULL ] * t492 * 35.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t490 *
1.2337005501361697E-10 ; t581 = X [ 129ULL ] * t581 * ( 1.0 / ( t907 == 0.0 ?
1.0E-16 : t907 ) ) * 0.55 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t588 = (
intrm_sf_mf_739 - 2000.0 ) / 2000.0 ; t621 = t588 * t588 * 3.0 - t588 * t588
* t588 * 2.0 ; if ( intrm_sf_mf_739 <= 2000.0 ) { t588 = t455 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_739 >= 4000.0 ) { t588 =
t581 * 9.9999999999999991E-11 ; } else { t588 = ( ( 1.0 - t621 ) * t455 +
t581 * t621 ) * 9.9999999999999991E-11 ; } if ( - X [ 117ULL ] >= 0.0 ) {
t581 = - X [ 117ULL ] ; } else { t581 = X [ 117ULL ] ; } t455 = t581 * 0.01 /
( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ; t621 = t455 >= 1.0 ? t455 :
1.0 ; t907 = pmf_log10 ( 6.9 / ( t621 == 0.0 ? 1.0E-16 : t621 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t621 == 0.0 ? 1.0E-16 : t621 )
+ 0.00017169489553429715 ) * 3.24 ; t492 = X [ 117ULL ] * t492 * - 35.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t581 = X [
117ULL ] * t581 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.55 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t621 = ( t455 -
2000.0 ) / 2000.0 ; t635 = t621 * t621 * 3.0 - t621 * t621 * t621 * 2.0 ; if
( t455 <= 2000.0 ) { t621 = t492 * 9.9999999999999991E-11 ; } else if ( t455
>= 4000.0 ) { t621 = t581 * 9.9999999999999991E-11 ; } else { t621 = ( ( 1.0
- t635 ) * t492 + t581 * t635 ) * 9.9999999999999991E-11 ; } t492 = ( ( ( 1.0
- t480 ) - intrm_sf_mf_8 ) * 304.06022922571 + t480 * 2537.56068088674 ) +
intrm_sf_mf_8 * 3860.3219873489 ; t480 = ( U_idx_1 - 0.9 ) /
0.099999999999999978 ; if ( - X [ 167ULL ] >= 0.0 ) { intrm_sf_mf_8 = - X [
167ULL ] ; } else { intrm_sf_mf_8 = X [ 167ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = intrm_sf_mf_5 *
7.8539816339744827E-5 ; t581 = intrm_sf_mf_8 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t455 = t581 >=
1.0 ? t581 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t455 == 0.0 ? 1.0E-16 : t455 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t455 == 0.0 ? 1.0E-16 : t455
) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t503 *
1.5707963267948965E-8 ; t635 = X [ 167ULL ] * intrm_sf_mf_5 * - 35.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
t503 * 1.2337005501361697E-10 ; intrm_sf_mf_8 = X [ 167ULL ] * intrm_sf_mf_8
* ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.55 / ( t365_idx_0 == 0.0 ?
1.0E-16 : t365_idx_0 ) ; t455 = ( t581 - 2000.0 ) / 2000.0 ; intrm_sf_mf_739
= t455 * t455 * 3.0 - t455 * t455 * t455 * 2.0 ; if ( t581 <= 2000.0 ) { t455
= t635 * 9.9999999999999991E-11 ; } else if ( t581 >= 4000.0 ) { t455 =
intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t455 = ( ( 1.0 -
intrm_sf_mf_739 ) * t635 + intrm_sf_mf_8 * intrm_sf_mf_739 ) *
9.9999999999999991E-11 ; } intrm_sf_mf_8 = X [ 181ULL ] >= 0.0 ? X [ 181ULL ]
: - X [ 181ULL ] ; t581 = intrm_sf_mf_8 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t635 = t581 >=
1.0 ? t581 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t635 == 0.0 ? 1.0E-16 : t635 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t635 == 0.0 ? 1.0E-16 : t635
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_5 = X [ 181ULL ] *
intrm_sf_mf_5 * 35.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; intrm_sf_mf_8 =
X [ 181ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) *
0.55 / ( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ; t635 = ( t581 - 2000.0
) / 2000.0 ; intrm_sf_mf_739 = t635 * t635 * 3.0 - t635 * t635 * t635 * 2.0 ;
if ( t581 <= 2000.0 ) { t635 = intrm_sf_mf_5 * 9.9999999999999991E-11 ; }
else if ( t581 >= 4000.0 ) { t635 = intrm_sf_mf_8 * 9.9999999999999991E-11 ;
} else { t635 = ( ( 1.0 - intrm_sf_mf_739 ) * intrm_sf_mf_5 + intrm_sf_mf_8 *
intrm_sf_mf_739 ) * 9.9999999999999991E-11 ; } intrm_sf_mf_8 = t480 * t480 *
3.0 - t480 * t480 * t480 * 2.0 ; t480 = ( ( ( 1.0 - intrm_sf_mf_9 ) - t513 )
* 304.06022922571 + intrm_sf_mf_9 * 2537.56068088674 ) + t513 *
266.413508632715 ; if ( U_idx_1 <= 0.9 ) { intrm_sf_mf_5 = 0.0 ; } else {
intrm_sf_mf_5 = U_idx_1 >= 1.0 ? 1.0 : intrm_sf_mf_8 ; } if ( - X [ 181ULL ]
>= 0.0 ) { intrm_sf_mf_8 = - X [ 181ULL ] ; } else { intrm_sf_mf_8 = X [
181ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = t541
* 0.0019634954084936209 ; intrm_sf_mf_9 = intrm_sf_mf_8 * 0.05 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t513 =
intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t513
== 0.0 ? 1.0E-16 : t513 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t513 == 0.0 ? 1.0E-16 : t513 ) + 2.8767404433520813E-5 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t539 *
9.8174770424681068E-6 ; t581 = X [ 181ULL ] * t541 * - 11.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
t539 * 3.855314219175531E-7 ; intrm_sf_mf_8 = X [ 181ULL ] * intrm_sf_mf_8 *
( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.175 / ( t365_idx_0 == 0.0 ?
1.0E-16 : t365_idx_0 ) ; t513 = ( intrm_sf_mf_9 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_739 = t513 * t513 * 3.0 - t513 * t513 * t513 * 2.0 ; if (
intrm_sf_mf_9 <= 2000.0 ) { t513 = t581 * 9.9999999999999991E-11 ; } else if
( intrm_sf_mf_9 >= 4000.0 ) { t513 = intrm_sf_mf_8 * 9.9999999999999991E-11 ;
} else { t513 = ( ( 1.0 - intrm_sf_mf_739 ) * t581 + intrm_sf_mf_8 *
intrm_sf_mf_739 ) * 9.9999999999999991E-11 ; } intrm_sf_mf_8 = X [ 258ULL ]
>= 0.0 ? X [ 258ULL ] : - X [ 258ULL ] ; intrm_sf_mf_9 = intrm_sf_mf_8 * 0.05
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t581 =
intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t581
== 0.0 ? 1.0E-16 : t581 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t581 == 0.0 ? 1.0E-16 : t581 ) + 2.8767404433520813E-5 ) * 3.24 ; t541 = X [
258ULL ] * t541 * 11.2 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; intrm_sf_mf_8 =
X [ 258ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) *
0.175 / ( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ; t581 = ( intrm_sf_mf_9
- 2000.0 ) / 2000.0 ; intrm_sf_mf_739 = t581 * t581 * 3.0 - t581 * t581 *
t581 * 2.0 ; if ( intrm_sf_mf_9 <= 2000.0 ) { t581 = t541 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_9 >= 4000.0 ) { t581 =
intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else { t581 = ( ( 1.0 -
intrm_sf_mf_739 ) * t541 + intrm_sf_mf_8 * intrm_sf_mf_739 ) *
9.9999999999999991E-11 ; } if ( - X [ 258ULL ] >= 0.0 ) { intrm_sf_mf_8 = - X
[ 258ULL ] ; } else { intrm_sf_mf_8 = X [ 258ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = intrm_sf_mf_992 *
0.32 ; intrm_sf_mf_9 = intrm_sf_mf_8 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t541 =
intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t907 = pmf_log10 ( 6.9 / ( t541
== 0.0 ? 1.0E-16 : t541 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t541 == 0.0 ? 1.0E-16 : t541 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
6.4000000000000011E-5 ; intrm_sf_mf_739 = X [ 258ULL ] * intrm_sf_mf_992 * -
2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I *
0.0020480000000000003 ; intrm_sf_mf_8 = X [ 258ULL ] * intrm_sf_mf_8 * ( 1.0
/ ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.046833001326703774 / ( t365_idx_0
== 0.0 ? 1.0E-16 : t365_idx_0 ) ; t541 = ( intrm_sf_mf_9 - 2000.0 ) / 2000.0
; t366_idx_0 = t541 * t541 * 3.0 - t541 * t541 * t541 * 2.0 ; if (
intrm_sf_mf_9 <= 2000.0 ) { t541 = intrm_sf_mf_739 * 9.9999999999999991E-11 ;
} else if ( intrm_sf_mf_9 >= 4000.0 ) { t541 = intrm_sf_mf_8 *
9.9999999999999991E-11 ; } else { t541 = ( ( 1.0 - t366_idx_0 ) *
intrm_sf_mf_739 + intrm_sf_mf_8 * t366_idx_0 ) * 9.9999999999999991E-11 ; }
intrm_sf_mf_8 = X [ 272ULL ] >= 0.0 ? X [ 272ULL ] : - X [ 272ULL ] ;
intrm_sf_mf_9 = intrm_sf_mf_8 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; intrm_sf_mf_739
= intrm_sf_mf_9 >= 1.0 ? intrm_sf_mf_9 : 1.0 ; t907 = pmf_log10 ( 6.9 / (
intrm_sf_mf_739 == 0.0 ? 1.0E-16 : intrm_sf_mf_739 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_739 == 0.0 ? 1.0E-16 : intrm_sf_mf_739 )
+ 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_992 = X [ 272ULL ] *
intrm_sf_mf_992 * 2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; intrm_sf_mf_8 =
X [ 272ULL ] * intrm_sf_mf_8 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) *
0.046833001326703774 / ( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ;
intrm_sf_mf_739 = ( intrm_sf_mf_9 - 2000.0 ) / 2000.0 ; t366_idx_0 =
intrm_sf_mf_739 * intrm_sf_mf_739 * 3.0 - intrm_sf_mf_739 * intrm_sf_mf_739 *
intrm_sf_mf_739 * 2.0 ; if ( intrm_sf_mf_9 <= 2000.0 ) { intrm_sf_mf_739 =
intrm_sf_mf_992 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_9 >=
4000.0 ) { intrm_sf_mf_739 = intrm_sf_mf_8 * 9.9999999999999991E-11 ; } else
{ intrm_sf_mf_739 = ( ( 1.0 - t366_idx_0 ) * intrm_sf_mf_992 + intrm_sf_mf_8
* t366_idx_0 ) * 9.9999999999999991E-11 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 <= 0.0 ) { intrm_sf_mf_8 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 >= 1.0 ) { intrm_sf_mf_8 = 1.0 ; } else { intrm_sf_mf_8 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.4810541339306735 ; } if ( - X [ 272ULL ] >= 0.0 ) { intrm_sf_mf_9 = - X [
272ULL ] ; } else { intrm_sf_mf_9 = X [ 272ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I = piece17 * 0.32 ;
intrm_sf_mf_992 = intrm_sf_mf_9 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t366_idx_0 =
intrm_sf_mf_992 >= 1.0 ? intrm_sf_mf_992 : 1.0 ; t907 = pmf_log10 ( 6.9 / (
t366_idx_0 == 0.0 ? 1.0E-16 : t366_idx_0 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t366_idx_0 == 0.0 ? 1.0E-16 : t366_idx_0 ) +
0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I = t555 *
6.4000000000000011E-5 ; t367_idx_0 = X [ 272ULL ] * piece17 * -
2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; t365_idx_0 =
t555 * 0.0020480000000000003 ; intrm_sf_mf_9 = X [ 272ULL ] * intrm_sf_mf_9 *
( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.046833001326703774 / (
t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ; t366_idx_0 = ( intrm_sf_mf_992 -
2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t366_idx_0 *
t366_idx_0 * 3.0 - t366_idx_0 * t366_idx_0 * t366_idx_0 * 2.0 ; if (
intrm_sf_mf_992 <= 2000.0 ) { t366_idx_0 = t367_idx_0 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_992 >= 4000.0 ) { t366_idx_0
= intrm_sf_mf_9 * 9.9999999999999991E-11 ; } else { t366_idx_0 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * t367_idx_0
+ intrm_sf_mf_9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
9.9999999999999991E-11 ; } if ( - X [ 129ULL ] >= 0.0 ) { intrm_sf_mf_9 = - X
[ 129ULL ] ; } else { intrm_sf_mf_9 = X [ 129ULL ] ; } intrm_sf_mf_992 =
intrm_sf_mf_9 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_x_a_I ) ; t367_idx_0 =
intrm_sf_mf_992 >= 1.0 ? intrm_sf_mf_992 : 1.0 ; t907 = pmf_log10 ( 6.9 / (
t367_idx_0 == 0.0 ? 1.0E-16 : t367_idx_0 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t367_idx_0 == 0.0 ? 1.0E-16 : t367_idx_0 ) +
0.00017169489553429715 ) * 3.24 ; piece17 = X [ 129ULL ] * piece17 * -
2.9973120849090416 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_a_I ) ; intrm_sf_mf_9 =
X [ 129ULL ] * intrm_sf_mf_9 * ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * -
0.046833001326703774 / ( t365_idx_0 == 0.0 ? 1.0E-16 : t365_idx_0 ) ;
t367_idx_0 = ( intrm_sf_mf_992 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t367_idx_0 *
t367_idx_0 * 3.0 - t367_idx_0 * t367_idx_0 * t367_idx_0 * 2.0 ; if (
intrm_sf_mf_992 <= 2000.0 ) { t367_idx_0 = piece17 * 9.9999999999999991E-11 ;
} else if ( intrm_sf_mf_992 >= 4000.0 ) { t367_idx_0 = intrm_sf_mf_9 *
9.9999999999999991E-11 ; } else { t367_idx_0 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) * piece17 +
intrm_sf_mf_9 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) *
9.9999999999999991E-11 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 <= 0.0 ) { intrm_sf_mf_9 = 0.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 >= 1.0 ) { intrm_sf_mf_9 = 1.0 ; } else { intrm_sf_mf_9 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 /
1.2531035067089982 ; } if ( - X [ 239ULL ] >= 0.0 ) { intrm_sf_mf_992 = - X [
239ULL ] ; } else { intrm_sf_mf_992 = X [ 239ULL ] ; } piece17 =
intrm_sf_mf_992 * 0.05 / ( t495 == 0.0 ? 1.0E-16 : t495 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = piece17 >=
1.0 ? piece17 : 1.0 ; t907 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 ) +
2.8767404433520813E-5 ) * 3.24 ; t586 = X [ 239ULL ] * t586 * - 11.2 / ( t768
== 0.0 ? 1.0E-16 : t768 ) ; intrm_sf_mf_992 = X [ 239ULL ] * intrm_sf_mf_992
* ( 1.0 / ( t907 == 0.0 ? 1.0E-16 : t907 ) ) * - 0.175 / ( t425 == 0.0 ?
1.0E-16 : t425 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( piece17 -
2000.0 ) / 2000.0 ; t479 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 2.0 ; if (
piece17 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t586 *
9.9999999999999991E-11 ; } else if ( piece17 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
intrm_sf_mf_992 * 9.9999999999999991E-11 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = ( ( 1.0 -
t479 ) * t586 + intrm_sf_mf_992 * t479 ) * 9.9999999999999991E-11 ; } piece17
= X [ 110ULL ] * 0.00062831853071795862 ; t479 = X [ 323ULL ] *
0.0031415926535897937 ; t282 [ 0ULL ] = U_idx_0 ; t282 [ 1ULL ] = U_idx_0 ;
t282 [ 2ULL ] = U_idx_1 ; t282 [ 3ULL ] = U_idx_1 ; t282 [ 4ULL ] = - X [
51ULL ] - U_idx_0 ; t282 [ 5ULL ] = U_idx_1 ; t282 [ 6ULL ] = U_idx_1 ; t282
[ 7ULL ] = U_idx_1 ; t282 [ 8ULL ] = X [ 51ULL ] ; t282 [ 9ULL ] = U_idx_1 ;
t282 [ 10ULL ] = intrm_sf_mf_2 ; t282 [ 11ULL ] = intrm_sf_mf_5 ; t282 [
12ULL ] = X [ 52ULL ] ; t282 [ 13ULL ] = U_idx_1 ; t282 [ 14ULL ] = X [ 53ULL
] ; t282 [ 15ULL ] = ( X [ 54ULL ] * intrm_sf_mf_2 + ( 1.0 - intrm_sf_mf_2 )
* X [ 51ULL ] * X [ 51ULL ] ) * 1000.0 ; t282 [ 16ULL ] = X [ 54ULL ] *
1000.0 ; t282 [ 17ULL ] = X [ 0ULL ] ; t282 [ 18ULL ] = X [ 53ULL ] ; t282 [
19ULL ] = - X [ 52ULL ] ; t282 [ 20ULL ] = - X [ 52ULL ] ; t282 [ 21ULL ] = X
[ 53ULL ] ; t282 [ 22ULL ] = X [ 53ULL ] ; t282 [ 23ULL ] = - X [ 52ULL ] ;
t282 [ 24ULL ] = X [ 53ULL ] ; t282 [ 25ULL ] = X [ 53ULL ] ; t282 [ 26ULL ]
= X [ 53ULL ] ; t282 [ 27ULL ] = X [ 53ULL ] ; t282 [ 28ULL ] = X [ 53ULL ] ;
t282 [ 29ULL ] = U_idx_1 ; t282 [ 30ULL ] = U_idx_0 ; t282 [ 31ULL ] = - X [
52ULL ] ; t282 [ 32ULL ] = - X [ 52ULL ] ; t282 [ 33ULL ] = X [ 53ULL ] ;
t282 [ 34ULL ] = t467 ; t282 [ 35ULL ] = X [ 53ULL ] ; t282 [ 36ULL ] = X [
53ULL ] ; t282 [ 37ULL ] = X [ 1ULL ] ; t282 [ 38ULL ] = t467 * t467 * 0.01 ;
t282 [ 39ULL ] = X [ 55ULL ] ; t282 [ 40ULL ] = U_idx_10 ; t282 [ 41ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t282 [ 42ULL ] =
Fuel_Cell_Boost_Converter_L_n_v ; t282 [ 43ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 44ULL ] = X [ 56ULL ] ; t282 [ 45ULL
] = X [ 2ULL ] ; t282 [ 46ULL ] = X [ 56ULL ] * X [ 56ULL ] *
1.0000000000000002E-12 ; t282 [ 47ULL ] = Fuel_Cell_Boost_Converter_L_n_v ;
t282 [ 48ULL ] = X [ 58ULL ] ; t282 [ 49ULL ] = X [ 2ULL ] ; t282 [ 50ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t282 [ 51ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t282 [ 52ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 53ULL ] = X [ 53ULL ] ; t282 [ 54ULL
] = Fuel_Cell_Boost_Converter_L_n_v * X [ 58ULL ] + (
Fuel_Cell_Boost_Converter_L_n_v - X [ 55ULL ] ) * (
Fuel_Cell_Boost_Converter_L_i - X [ 58ULL ] ) ; t282 [ 55ULL ] = X [ 1ULL ] ;
t282 [ 56ULL ] = Fuel_Cell_Current_Sensor1_I ; t282 [ 57ULL ] =
Fuel_Cell_Current_Sensor1_I ; t282 [ 58ULL ] = X [ 53ULL ] ; t282 [ 59ULL ] =
X [ 53ULL ] ; t282 [ 60ULL ] = Fuel_Cell_Current_Sensor1_I ; t282 [ 61ULL ] =
X [ 59ULL ] ; t282 [ 62ULL ] = X [ 60ULL ] * 0.1 ; t282 [ 63ULL ] = X [ 61ULL
] ; t282 [ 64ULL ] = X [ 62ULL ] ; t282 [ 65ULL ] = X [ 63ULL ] ; t282 [
66ULL ] = X [ 64ULL ] * 0.1 ; t282 [ 67ULL ] = X [ 65ULL ] ; t282 [ 68ULL ] =
X [ 66ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 +
69ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t396 ]
; } for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 77ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t396 ] ; } for (
t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 85ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t396 ] ; } for (
t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 93ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t396 ] ; } t282
[ 101ULL ] = X [ 59ULL ] ; t282 [ 102ULL ] = X [ 60ULL ] * 0.1 ; t282 [
103ULL ] = X [ 61ULL ] ; t282 [ 104ULL ] = X [ 62ULL ] ; t282 [ 105ULL ] = X
[ 63ULL ] ; t282 [ 106ULL ] = X [ 64ULL ] * 0.1 ; t282 [ 107ULL ] = X [ 65ULL
] ; t282 [ 108ULL ] = X [ 66ULL ] ; t282 [ 109ULL ] = X [ 87ULL ] ; t282 [
110ULL ] = X [ 88ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [
t396 + 111ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi
[ t396 ] ; } for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 +
119ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t396
] ; } for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 127ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t396 ] ; } for (
t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 135ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t396 ] ; } t282
[ 143ULL ] = X [ 57ULL ] ; t282 [ 144ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 * 0.0001 ;
t282 [ 145ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.20177105219743391 / 192970.66424 * 1000.0 ; t282 [ 146ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 * 1000.0 ;
t282 [ 147ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra21 * 1000.0 ;
t282 [ 148ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.3583866814737065 / 385941.32848 * 1000.0 ; t282 [ 149ULL ] = X [ 89ULL ] ;
t282 [ 150ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 * 100.0 ; t282
[ 151ULL ] = X [ 7ULL ] ; t282 [ 152ULL ] = X [ 8ULL ] ; t282 [ 153ULL ] = X
[ 9ULL ] ; t282 [ 154ULL ] = X [ 13ULL ] ; t282 [ 155ULL ] = X [ 14ULL ] ;
t282 [ 156ULL ] = X [ 15ULL ] ; t282 [ 157ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra55 ; t282 [
158ULL ] = intrm_sf_mf_8 ; t282 [ 159ULL ] = intrm_sf_mf_9 ; t282 [ 160ULL ]
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t282 [
161ULL ] = X [ 91ULL ] ; t282 [ 162ULL ] = X [ 92ULL ] ; t282 [ 163ULL ] = X
[ 13ULL ] ; t282 [ 164ULL ] = X [ 14ULL ] ; t282 [ 165ULL ] = X [ 15ULL ] ;
t282 [ 166ULL ] = - X [ 91ULL ] ; t282 [ 167ULL ] = X [ 93ULL ] ; t282 [
168ULL ] = X [ 94ULL ] ; t282 [ 169ULL ] = X [ 7ULL ] ; t282 [ 170ULL ] = X [
8ULL ] ; t282 [ 171ULL ] = X [ 9ULL ] ; t282 [ 172ULL ] = - X [ 93ULL ] ;
t282 [ 173ULL ] = X [ 95ULL ] ; t282 [ 174ULL ] = X [ 96ULL ] ; t282 [ 175ULL
] = X [ 13ULL ] ; t282 [ 176ULL ] = X [ 14ULL ] ; t282 [ 177ULL ] = X [ 15ULL
] ; t282 [ 178ULL ] = - X [ 95ULL ] ; t282 [ 179ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra36 * 0.001 ;
t282 [ 180ULL ] = X [ 99ULL ] ; t282 [ 181ULL ] = X [ 97ULL ] ; t282 [ 182ULL
] = X [ 7ULL ] ; t282 [ 183ULL ] = X [ 8ULL ] ; t282 [ 184ULL ] = X [ 9ULL ]
; t282 [ 185ULL ] = - X [ 99ULL ] ; t282 [ 186ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 ; t282 [
187ULL ] = X [ 98ULL ] ; t282 [ 188ULL ] = X [ 13ULL ] ; t282 [ 189ULL ] = X
[ 14ULL ] ; t282 [ 190ULL ] = X [ 15ULL ] ; t282 [ 191ULL ] = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra50 ; t282 [
192ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 ;
t282 [ 193ULL ] = t469 * 0.001 ; t282 [ 194ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t282 [
195ULL ] = X [ 7ULL ] ; t282 [ 196ULL ] = X [ 8ULL ] ; t282 [ 197ULL ] = X [
9ULL ] ; t282 [ 198ULL ] = X [ 13ULL ] ; t282 [ 199ULL ] = X [ 14ULL ] ; t282
[ 200ULL ] = X [ 15ULL ] ; t282 [ 201ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t282 [
202ULL ] = X [ 89ULL ] * - 1000.0 ; t282 [ 203ULL ] = X [ 89ULL ] * - 1000.0
; t282 [ 204ULL ] = - X [ 89ULL ] ; t282 [ 205ULL ] = X [ 101ULL ] * 1000.0 ;
t282 [ 206ULL ] = X [ 16ULL ] - 273.15 ; t282 [ 207ULL ] = t472 ; t282 [
208ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 209ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 210ULL ] = X [ 3ULL ] ; t282 [
211ULL ] = t472 * t472 * 1.0E-9 ; t282 [ 212ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t282 [ 213ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t282 [ 214ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 215ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 216ULL ] =
Fuel_Cell_Boost_Converter_L_i ; t282 [ 217ULL ] = - X [ 57ULL ] ; t282 [
218ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 219ULL ] = t474 ; t282 [
220ULL ] = X [ 90ULL ] ; t282 [ 221ULL ] = - ( X [ 57ULL ] * X [ 90ULL ] ) ;
t282 [ 222ULL ] = - X [ 57ULL ] ; t282 [ 223ULL ] = t474 ; t282 [ 224ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t282 [
225ULL ] = X [ 57ULL ] * - 0.001 ; t282 [ 226ULL ] = X [ 57ULL ] * X [ 57ULL
] * 0.001 ; t282 [ 227ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 228ULL
] = Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 229ULL ] =
Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 230ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra24 ; t282 [
231ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 232ULL ] = ( ( ( ( ( - X
[ 89ULL ] - X [ 101ULL ] ) - X [ 102ULL ] ) - X [ 103ULL ] ) - X [ 104ULL ] )
- X [ 105ULL ] ) * 1000.0 ; t282 [ 233ULL ] = X [ 106ULL ] ; t282 [ 234ULL ]
= X [ 107ULL ] * 0.1 ; t282 [ 235ULL ] = X [ 108ULL ] ; t282 [ 236ULL ] = X [
109ULL ] ; t282 [ 237ULL ] = X [ 110ULL ] ; t282 [ 238ULL ] = -
184.19157727996955 + piece17 * 1000.0 ; t282 [ 239ULL ] = ( X [ 110ULL ] *
0.00062831853071795862 - 0.18419157727996954 ) * 1591.5494309189535 ; t282 [
240ULL ] = X [ 111ULL ] ; t282 [ 241ULL ] = X [ 112ULL ] ; t282 [ 242ULL ] =
X [ 113ULL ] ; t282 [ 243ULL ] = X [ 114ULL ] ; t282 [ 244ULL ] = X [ 115ULL
] ; t282 [ 245ULL ] = X [ 123ULL ] ; t282 [ 246ULL ] = X [ 122ULL ] ; t282 [
247ULL ] = X [ 111ULL ] ; t282 [ 248ULL ] = X [ 112ULL ] ; t282 [ 249ULL ] =
X [ 113ULL ] ; t282 [ 250ULL ] = X [ 115ULL ] ; t282 [ 251ULL ] = X [ 116ULL
] ; t282 [ 252ULL ] = X [ 117ULL ] ; t282 [ 253ULL ] = X [ 118ULL ] ; t282 [
254ULL ] = X [ 119ULL ] ; t282 [ 255ULL ] = X [ 120ULL ] ; t282 [ 256ULL ] =
X [ 121ULL ] ; t282 [ 257ULL ] = t492 ; t282 [ 258ULL ] = X [ 117ULL ] ; t282
[ 259ULL ] = X [ 118ULL ] ; t282 [ 260ULL ] = X [ 119ULL ] ; t282 [ 261ULL ]
= t482 * 100000.0 ; t282 [ 262ULL ] = ( 1.0 - X [ 122ULL ] ) - X [ 123ULL ] ;
t282 [ 263ULL ] = X [ 124ULL ] ; t282 [ 264ULL ] = - 184.19157727996955 +
piece17 * 1000.0 ; t282 [ 265ULL ] = U_idx_2 ; t282 [ 266ULL ] = U_idx_2 *
3.1415926535897929E-6 ; t282 [ 267ULL ] = X [ 106ULL ] ; t282 [ 268ULL ] = X
[ 107ULL ] * 0.1 ; t282 [ 269ULL ] = X [ 108ULL ] ; t282 [ 270ULL ] = X [
109ULL ] ; t282 [ 271ULL ] = X [ 125ULL ] ; t282 [ 272ULL ] = X [ 126ULL ] *
0.1 ; t282 [ 273ULL ] = X [ 127ULL ] ; t282 [ 274ULL ] = X [ 128ULL ] ; t282
[ 275ULL ] = X [ 20ULL ] ; t282 [ 276ULL ] = X [ 133ULL ] ; t282 [ 277ULL ] =
X [ 19ULL ] ; t282 [ 278ULL ] = X [ 130ULL ] ; t282 [ 279ULL ] = X [ 17ULL ]
- 273.15 ; t282 [ 280ULL ] = X [ 129ULL ] ; t282 [ 281ULL ] = X [ 131ULL ] *
0.1 ; t282 [ 282ULL ] = X [ 18ULL ] * 0.1 ; t282 [ 283ULL ] = X [ 132ULL ] ;
t282 [ 284ULL ] = t490 * 100000.0 ; t282 [ 285ULL ] = X [ 134ULL ] ; t282 [
286ULL ] = - X [ 117ULL ] ; t282 [ 287ULL ] = X [ 135ULL ] * 0.1 ; for ( t396
= 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 288ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F [ t396 ] ; } t282 [
296ULL ] = X [ 110ULL ] ; t282 [ 297ULL ] = X [ 136ULL ] ; t282 [ 298ULL ] =
t404 ; t282 [ 299ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Mach_B ; t282 [ 300ULL ]
= X [ 138ULL ] ; t282 [ 301ULL ] = - X [ 115ULL ] ; t282 [ 302ULL ] =
0.18419157727996954 - piece17 ; t282 [ 303ULL ] = X [ 137ULL ] ; t282 [
304ULL ] = X [ 17ULL ] ; t282 [ 305ULL ] = X [ 20ULL ] ; t282 [ 306ULL ] = X
[ 19ULL ] ; t282 [ 307ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W ; t282 [ 308ULL ] = X
[ 106ULL ] ; t282 [ 309ULL ] = X [ 107ULL ] * 0.1 ; t282 [ 310ULL ] = X [
108ULL ] ; t282 [ 311ULL ] = X [ 109ULL ] ; t282 [ 312ULL ] = X [ 138ULL ] ;
t282 [ 313ULL ] = X [ 139ULL ] ; t282 [ 314ULL ] = X [ 129ULL ] ; t282 [
315ULL ] = X [ 140ULL ] ; t282 [ 316ULL ] = X [ 141ULL ] ; t282 [ 317ULL ] =
X [ 142ULL ] ; t282 [ 318ULL ] = X [ 143ULL ] ; t282 [ 319ULL ] = X [ 125ULL
] ; t282 [ 320ULL ] = X [ 126ULL ] * 0.1 ; t282 [ 321ULL ] = X [ 127ULL ] ;
t282 [ 322ULL ] = X [ 128ULL ] ; t282 [ 323ULL ] = - X [ 115ULL ] ; t282 [
324ULL ] = X [ 144ULL ] ; t282 [ 325ULL ] = - X [ 117ULL ] ; t282 [ 326ULL ]
= - X [ 118ULL ] ; t282 [ 327ULL ] = - X [ 119ULL ] ; t282 [ 328ULL ] = X [
145ULL ] ; t282 [ 329ULL ] = X [ 146ULL ] ; t282 [ 330ULL ] = t496 ; t282 [
331ULL ] = X [ 140ULL ] ; t282 [ 332ULL ] = - X [ 118ULL ] ; t282 [ 333ULL ]
= X [ 141ULL ] ; t282 [ 334ULL ] = - X [ 119ULL ] ; t282 [ 335ULL ] = t588 *
0.1 ; t282 [ 336ULL ] = t621 * 0.1 ; t282 [ 337ULL ] = ( 1.0 - X [ 19ULL ] )
- X [ 20ULL ] ; t282 [ 338ULL ] = X [ 125ULL ] ; t282 [ 339ULL ] = X [ 126ULL
] * 0.1 ; t282 [ 340ULL ] = X [ 127ULL ] ; t282 [ 341ULL ] = X [ 128ULL ] ;
t282 [ 342ULL ] = t487 * 0.0001 ; t282 [ 343ULL ] = X [ 111ULL ] ; t282 [
344ULL ] = X [ 112ULL ] ; t282 [ 345ULL ] = X [ 113ULL ] ; t282 [ 346ULL ] =
X [ 117ULL ] ; t282 [ 347ULL ] = X [ 125ULL ] ; t282 [ 348ULL ] = X [ 126ULL
] * 0.1 ; t282 [ 349ULL ] = X [ 127ULL ] ; t282 [ 350ULL ] = X [ 128ULL ] ;
t282 [ 351ULL ] = X [ 115ULL ] ; t282 [ 352ULL ] = X [ 153ULL ] ; t282 [
353ULL ] = X [ 117ULL ] ; t282 [ 354ULL ] = X [ 118ULL ] ; t282 [ 355ULL ] =
X [ 119ULL ] ; t282 [ 356ULL ] = X [ 150ULL ] ; t282 [ 357ULL ] = X [ 149ULL
] ; t282 [ 358ULL ] = X [ 147ULL ] ; t282 [ 359ULL ] = X [ 148ULL ] * 0.1 ;
t282 [ 360ULL ] = X [ 151ULL ] ; t282 [ 361ULL ] = X [ 152ULL ] ; t282 [
362ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_Mach_R ;
t282 [ 363ULL ] = X [ 115ULL ] ; t282 [ 364ULL ] = - X [ 115ULL ] ; t282 [
365ULL ] = X [ 111ULL ] ; t282 [ 366ULL ] = X [ 112ULL ] ; t282 [ 367ULL ] =
X [ 113ULL ] ; t282 [ 368ULL ] = - X [ 115ULL ] ; t282 [ 369ULL ] = X [
153ULL ] ; t282 [ 370ULL ] = - X [ 117ULL ] ; t282 [ 371ULL ] = - X [ 118ULL
] ; t282 [ 372ULL ] = - X [ 119ULL ] ; t282 [ 373ULL ] = X [ 150ULL ] ; t282
[ 374ULL ] = X [ 149ULL ] ; t282 [ 375ULL ] = - X [ 117ULL ] ; t282 [ 376ULL
] = X [ 118ULL ] ; t282 [ 377ULL ] = - X [ 118ULL ] ; t282 [ 378ULL ] = X [
119ULL ] ; t282 [ 379ULL ] = - X [ 119ULL ] ; t282 [ 380ULL ] = U_idx_2 ;
t282 [ 381ULL ] = Fuel_Cell_Boost_Converter_L_p_v ; t282 [ 382ULL ] = X [
154ULL ] ; t282 [ 383ULL ] = X [ 155ULL ] * 0.1 ; t282 [ 384ULL ] = X [
156ULL ] ; t282 [ 385ULL ] = X [ 157ULL ] ; t282 [ 386ULL ] = X [ 158ULL ] ;
t282 [ 387ULL ] = X [ 22ULL ] * 0.1 ; t282 [ 388ULL ] = X [ 159ULL ] ; t282 [
389ULL ] = X [ 160ULL ] ; t282 [ 390ULL ] = X [ 21ULL ] ; t282 [ 391ULL ] = X
[ 22ULL ] * 0.1 ; t282 [ 392ULL ] = X [ 23ULL ] ; t282 [ 393ULL ] = X [ 24ULL
] ; t282 [ 394ULL ] = X [ 21ULL ] ; t282 [ 395ULL ] = X [ 22ULL ] * 0.1 ;
t282 [ 396ULL ] = X [ 23ULL ] ; t282 [ 397ULL ] = X [ 24ULL ] ; t282 [ 398ULL
] = X [ 21ULL ] ; t282 [ 399ULL ] = X [ 22ULL ] * 0.1 ; t282 [ 400ULL ] = X [
23ULL ] ; t282 [ 401ULL ] = X [ 24ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ;
t396 ++ ) { t282 [ t396 + 402ULL ] = t286 [ t396 ] ; } t282 [ 410ULL ] = X [
21ULL ] ; t282 [ 411ULL ] = X [ 161ULL ] ; t282 [ 412ULL ] = X [ 165ULL ] ;
t282 [ 413ULL ] = X [ 21ULL ] - 273.15 ; t282 [ 414ULL ] = X [ 23ULL ] ; t282
[ 415ULL ] = X [ 163ULL ] ; t282 [ 416ULL ] = X [ 24ULL ] ; t282 [ 417ULL ] =
X [ 22ULL ] * 0.1 ; t282 [ 418ULL ] = t498 * 100000.0 ; t282 [ 419ULL ] = X [
162ULL ] ; t282 [ 420ULL ] = X [ 21ULL ] ; t282 [ 421ULL ] = X [ 23ULL ] ;
t282 [ 422ULL ] = X [ 24ULL ] ; t282 [ 423ULL ] = t499 ; t282 [ 424ULL ] = X
[ 158ULL ] ; t282 [ 425ULL ] = X [ 22ULL ] * 0.1 ; t282 [ 426ULL ] = X [
159ULL ] ; t282 [ 427ULL ] = X [ 160ULL ] ; t282 [ 428ULL ] = X [ 165ULL ] ;
t282 [ 429ULL ] = X [ 166ULL ] ; t282 [ 430ULL ] = X [ 167ULL ] ; t282 [
431ULL ] = X [ 168ULL ] ; t282 [ 432ULL ] = X [ 169ULL ] ; t282 [ 433ULL ] =
X [ 170ULL ] ; t282 [ 434ULL ] = X [ 171ULL ] ; t282 [ 435ULL ] = t502 ; t282
[ 436ULL ] = X [ 167ULL ] ; t282 [ 437ULL ] = X [ 168ULL ] ; t282 [ 438ULL ]
= X [ 169ULL ] ; t282 [ 439ULL ] = ( 1.0 - X [ 24ULL ] ) - X [ 23ULL ] ; t282
[ 440ULL ] = X [ 164ULL ] ; t282 [ 441ULL ] = X [ 154ULL ] ; t282 [ 442ULL ]
= X [ 155ULL ] * 0.1 ; t282 [ 443ULL ] = X [ 156ULL ] ; t282 [ 444ULL ] = X [
157ULL ] ; t282 [ 445ULL ] = X [ 158ULL ] ; t282 [ 446ULL ] = X [ 22ULL ] *
0.1 ; t282 [ 447ULL ] = X [ 159ULL ] ; t282 [ 448ULL ] = X [ 160ULL ] ; t282
[ 449ULL ] = X [ 158ULL ] ; t282 [ 450ULL ] = X [ 22ULL ] * 0.1 ; t282 [
451ULL ] = X [ 159ULL ] ; t282 [ 452ULL ] = X [ 160ULL ] ; t282 [ 453ULL ] =
- X [ 167ULL ] ; t282 [ 454ULL ] = - X [ 168ULL ] ; t282 [ 455ULL ] = - X [
169ULL ] ; t282 [ 456ULL ] = X [ 165ULL ] * - 1000.0 ; t282 [ 457ULL ] = - X
[ 165ULL ] ; t282 [ 458ULL ] = - X [ 167ULL ] ; t282 [ 459ULL ] = - X [
168ULL ] ; t282 [ 460ULL ] = - X [ 169ULL ] ; t282 [ 461ULL ] = - X [ 167ULL
] ; t282 [ 462ULL ] = X [ 21ULL ] ; t282 [ 463ULL ] = X [ 21ULL ] ; t282 [
464ULL ] = X [ 172ULL ] ; t282 [ 465ULL ] = X [ 172ULL ] ; t282 [ 466ULL ] =
X [ 173ULL ] ; t282 [ 467ULL ] = X [ 174ULL ] * 0.1 ; t282 [ 468ULL ] = X [
175ULL ] ; t282 [ 469ULL ] = X [ 176ULL ] ; t282 [ 470ULL ] = X [ 154ULL ] ;
t282 [ 471ULL ] = X [ 155ULL ] * 0.1 ; t282 [ 472ULL ] = X [ 156ULL ] ; t282
[ 473ULL ] = X [ 157ULL ] ; t282 [ 474ULL ] = X [ 28ULL ] ; t282 [ 475ULL ] =
X [ 180ULL ] ; t282 [ 476ULL ] = X [ 27ULL ] ; t282 [ 477ULL ] = X [ 177ULL ]
; t282 [ 478ULL ] = X [ 25ULL ] - 273.15 ; t282 [ 479ULL ] = - X [ 167ULL ] ;
t282 [ 480ULL ] = X [ 178ULL ] * 0.1 ; t282 [ 481ULL ] = X [ 26ULL ] * 0.1 ;
t282 [ 482ULL ] = X [ 179ULL ] ; t282 [ 483ULL ] = t503 * 100000.0 ; t282 [
484ULL ] = X [ 182ULL ] ; t282 [ 485ULL ] = X [ 181ULL ] ; t282 [ 486ULL ] =
X [ 183ULL ] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [
t396 + 487ULL ] = t291 [ t396 ] ; } t282 [ 495ULL ] = X [ 172ULL ] ; t282 [
496ULL ] = X [ 184ULL ] ; t282 [ 497ULL ] = t504 ; t282 [ 498ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_Mach_B ; t282 [ 499ULL ] =
- X [ 165ULL ] ; t282 [ 500ULL ] = X [ 186ULL ] ; t282 [ 501ULL ] = X [
185ULL ] ; t282 [ 502ULL ] = X [ 25ULL ] ; t282 [ 503ULL ] = X [ 28ULL ] ;
t282 [ 504ULL ] = X [ 27ULL ] ; t282 [ 505ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ; t282 [
506ULL ] = X [ 173ULL ] ; t282 [ 507ULL ] = X [ 174ULL ] * 0.1 ; t282 [
508ULL ] = X [ 175ULL ] ; t282 [ 509ULL ] = X [ 176ULL ] ; t282 [ 510ULL ] =
- X [ 165ULL ] ; t282 [ 511ULL ] = X [ 187ULL ] ; t282 [ 512ULL ] = - X [
167ULL ] ; t282 [ 513ULL ] = - X [ 168ULL ] ; t282 [ 514ULL ] = - X [ 169ULL
] ; t282 [ 515ULL ] = X [ 188ULL ] ; t282 [ 516ULL ] = X [ 189ULL ] ; t282 [
517ULL ] = X [ 154ULL ] ; t282 [ 518ULL ] = X [ 155ULL ] * 0.1 ; t282 [
519ULL ] = X [ 156ULL ] ; t282 [ 520ULL ] = X [ 157ULL ] ; t282 [ 521ULL ] =
X [ 186ULL ] ; t282 [ 522ULL ] = X [ 190ULL ] ; t282 [ 523ULL ] = X [ 181ULL
] ; t282 [ 524ULL ] = X [ 191ULL ] ; t282 [ 525ULL ] = X [ 192ULL ] ; t282 [
526ULL ] = X [ 193ULL ] ; t282 [ 527ULL ] = X [ 194ULL ] ; t282 [ 528ULL ] =
t509 ; t282 [ 529ULL ] = - X [ 168ULL ] ; t282 [ 530ULL ] = X [ 191ULL ] ;
t282 [ 531ULL ] = - X [ 169ULL ] ; t282 [ 532ULL ] = X [ 192ULL ] ; t282 [
533ULL ] = t455 * 0.1 ; t282 [ 534ULL ] = t635 * 0.1 ; t282 [ 535ULL ] = (
1.0 - X [ 27ULL ] ) - X [ 28ULL ] ; t282 [ 536ULL ] = X [ 158ULL ] ; t282 [
537ULL ] = X [ 22ULL ] * 0.1 ; t282 [ 538ULL ] = X [ 159ULL ] ; t282 [ 539ULL
] = X [ 160ULL ] ; t282 [ 540ULL ] = X [ 173ULL ] ; t282 [ 541ULL ] = X [
174ULL ] * 0.1 ; t282 [ 542ULL ] = X [ 175ULL ] ; t282 [ 543ULL ] = X [
176ULL ] ; t282 [ 544ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 * 1.0E+6 ;
t282 [ 545ULL ] = t500 ; t282 [ 546ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 * -
125000.03125000779 ; t282 [ 547ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 * 1.0E+6 ;
t282 [ 548ULL ] = t500 ; t282 [ 549ULL ] = t500 * 7.8539816339744827E-5 ;
t282 [ 550ULL ] = X [ 174ULL ] * 99999.999999999985 ; t282 [ 551ULL ] = (
t508 - 0.05000000000000001 ) * 0.1 ; t282 [ 552ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V0 * -
125000.03125000779 ; t282 [ 553ULL ] = t508 * 0.1 ; t282 [ 554ULL ] = ( t508
- 0.05000000000000001 ) * 0.1 ; t282 [ 555ULL ] = X [ 173ULL ] ; t282 [
556ULL ] = X [ 174ULL ] * 0.1 ; t282 [ 557ULL ] = X [ 175ULL ] ; t282 [
558ULL ] = X [ 176ULL ] ; t282 [ 559ULL ] = X [ 174ULL ] * 99999.999999999985
; t282 [ 560ULL ] = X [ 173ULL ] ; t282 [ 561ULL ] = X [ 158ULL ] ; t282 [
562ULL ] = X [ 22ULL ] * 0.1 ; t282 [ 563ULL ] = X [ 159ULL ] ; t282 [ 564ULL
] = X [ 160ULL ] ; t282 [ 565ULL ] = t500 * 7.8539816339744827E-5 ; t282 [
566ULL ] = X [ 173ULL ] ; t282 [ 567ULL ] = X [ 174ULL ] * 0.1 ; t282 [
568ULL ] = X [ 175ULL ] ; t282 [ 569ULL ] = X [ 176ULL ] ; t282 [ 570ULL ] =
- X [ 167ULL ] ; t282 [ 571ULL ] = X [ 158ULL ] ; t282 [ 572ULL ] = X [ 22ULL
] * 0.1 ; t282 [ 573ULL ] = X [ 159ULL ] ; t282 [ 574ULL ] = X [ 160ULL ] ;
t282 [ 575ULL ] = - X [ 165ULL ] ; t282 [ 576ULL ] = X [ 201ULL ] ; t282 [
577ULL ] = - X [ 167ULL ] ; t282 [ 578ULL ] = - X [ 168ULL ] ; t282 [ 579ULL
] = - X [ 169ULL ] ; t282 [ 580ULL ] = X [ 198ULL ] ; t282 [ 581ULL ] = X [
197ULL ] ; t282 [ 582ULL ] = X [ 195ULL ] ; t282 [ 583ULL ] = X [ 196ULL ] *
0.1 ; t282 [ 584ULL ] = X [ 199ULL ] ; t282 [ 585ULL ] = X [ 200ULL ] ; t282
[ 586ULL ] = t511 ; t282 [ 587ULL ] = - X [ 165ULL ] ; t282 [ 588ULL ] = X [
165ULL ] ; t282 [ 589ULL ] = X [ 173ULL ] ; t282 [ 590ULL ] = X [ 174ULL ] *
0.1 ; t282 [ 591ULL ] = X [ 175ULL ] ; t282 [ 592ULL ] = X [ 176ULL ] ; t282
[ 593ULL ] = X [ 165ULL ] ; t282 [ 594ULL ] = X [ 201ULL ] ; t282 [ 595ULL ]
= X [ 167ULL ] ; t282 [ 596ULL ] = X [ 168ULL ] ; t282 [ 597ULL ] = X [
169ULL ] ; t282 [ 598ULL ] = X [ 198ULL ] ; t282 [ 599ULL ] = X [ 197ULL ] ;
t282 [ 600ULL ] = X [ 167ULL ] ; t282 [ 601ULL ] = - X [ 168ULL ] ; t282 [
602ULL ] = X [ 168ULL ] ; t282 [ 603ULL ] = - X [ 169ULL ] ; t282 [ 604ULL ]
= X [ 169ULL ] ; t282 [ 605ULL ] = t508 * 0.1 ; t282 [ 606ULL ] = U_idx_3 ;
t282 [ 607ULL ] = X [ 202ULL ] ; t282 [ 608ULL ] = X [ 203ULL ] ; t282 [
609ULL ] = X [ 204ULL ] ; t282 [ 610ULL ] = X [ 205ULL ] ; t282 [ 611ULL ] =
X [ 206ULL ] ; t282 [ 612ULL ] = X [ 214ULL ] ; t282 [ 613ULL ] = X [ 213ULL
] ; t282 [ 614ULL ] = X [ 202ULL ] ; t282 [ 615ULL ] = X [ 203ULL ] ; t282 [
616ULL ] = X [ 204ULL ] ; t282 [ 617ULL ] = X [ 206ULL ] ; t282 [ 618ULL ] =
X [ 207ULL ] ; t282 [ 619ULL ] = X [ 208ULL ] ; t282 [ 620ULL ] = X [ 209ULL
] ; t282 [ 621ULL ] = X [ 210ULL ] ; t282 [ 622ULL ] = X [ 211ULL ] ; t282 [
623ULL ] = X [ 212ULL ] ; t282 [ 624ULL ] = t480 ; t282 [ 625ULL ] = X [
208ULL ] ; t282 [ 626ULL ] = X [ 209ULL ] ; t282 [ 627ULL ] = X [ 210ULL ] ;
t282 [ 628ULL ] = t514 * 100000.0 ; t282 [ 629ULL ] = ( 1.0 - X [ 213ULL ] )
- X [ 214ULL ] ; t282 [ 630ULL ] = X [ 215ULL ] ; t282 [ 631ULL ] = X [
216ULL ] ; t282 [ 632ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 633ULL ] = X [ 217ULL
] ; t282 [ 634ULL ] = X [ 218ULL ] ; t282 [ 635ULL ] = X [ 202ULL ] ; t282 [
636ULL ] = X [ 203ULL ] ; t282 [ 637ULL ] = X [ 204ULL ] ; t282 [ 638ULL ] =
X [ 216ULL ] ; t282 [ 639ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 640ULL ] = X [
217ULL ] ; t282 [ 641ULL ] = X [ 218ULL ] ; t282 [ 642ULL ] = X [ 220ULL ] ;
t282 [ 643ULL ] = X [ 223ULL ] ; t282 [ 644ULL ] = X [ 202ULL ] ; t282 [
645ULL ] = X [ 203ULL ] ; t282 [ 646ULL ] = X [ 204ULL ] ; t282 [ 647ULL ] =
- X [ 206ULL ] ; t282 [ 648ULL ] = X [ 224ULL ] ; t282 [ 649ULL ] = - X [
208ULL ] ; t282 [ 650ULL ] = - X [ 209ULL ] ; t282 [ 651ULL ] = - X [ 210ULL
] ; t282 [ 652ULL ] = X [ 225ULL ] ; t282 [ 653ULL ] = X [ 226ULL ] ; t282 [
654ULL ] = - X [ 208ULL ] ; t282 [ 655ULL ] = X [ 221ULL ] ; t282 [ 656ULL ]
= X [ 222ULL ] ; t282 [ 657ULL ] = X [ 216ULL ] ; t282 [ 658ULL ] = X [ 29ULL
] * 0.1 ; t282 [ 659ULL ] = X [ 217ULL ] ; t282 [ 660ULL ] = X [ 218ULL ] ;
t282 [ 661ULL ] = X [ 219ULL ] ; t282 [ 662ULL ] = X [ 224ULL ] ; t282 [
663ULL ] = X [ 208ULL ] ; t282 [ 664ULL ] = X [ 209ULL ] ; t282 [ 665ULL ] =
X [ 210ULL ] ; t282 [ 666ULL ] = X [ 225ULL ] ; t282 [ 667ULL ] = X [ 226ULL
] ; t282 [ 668ULL ] = X [ 208ULL ] ; t282 [ 669ULL ] = - X [ 208ULL ] ; t282
[ 670ULL ] = - X [ 206ULL ] ; t282 [ 671ULL ] = X [ 219ULL ] ; t282 [ 672ULL
] = - X [ 209ULL ] ; t282 [ 673ULL ] = X [ 209ULL ] ; t282 [ 674ULL ] = - X [
210ULL ] ; t282 [ 675ULL ] = X [ 210ULL ] ; t282 [ 676ULL ] = t517 ; t282 [
677ULL ] = X [ 216ULL ] ; t282 [ 678ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 679ULL
] = X [ 217ULL ] ; t282 [ 680ULL ] = X [ 218ULL ] ; t282 [ 681ULL ] = X [
227ULL ] ; t282 [ 682ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 683ULL ] = X [ 228ULL
] ; t282 [ 684ULL ] = X [ 229ULL ] ; t282 [ 685ULL ] = X [ 30ULL ] ; t282 [
686ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 687ULL ] = X [ 31ULL ] ; t282 [ 688ULL
] = X [ 32ULL ] ; t282 [ 689ULL ] = X [ 30ULL ] ; t282 [ 690ULL ] = X [ 29ULL
] * 0.1 ; t282 [ 691ULL ] = X [ 31ULL ] ; t282 [ 692ULL ] = X [ 32ULL ] ; for
( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 693ULL ] = t299 [
t396 ] ; } t282 [ 701ULL ] = X [ 30ULL ] ; t282 [ 702ULL ] = X [ 230ULL ] ;
t282 [ 703ULL ] = - X [ 219ULL ] ; t282 [ 704ULL ] = X [ 234ULL ] ; t282 [
705ULL ] = X [ 30ULL ] - 273.15 ; t282 [ 706ULL ] = X [ 31ULL ] ; t282 [
707ULL ] = X [ 232ULL ] ; t282 [ 708ULL ] = X [ 32ULL ] ; t282 [ 709ULL ] = X
[ 29ULL ] * 0.1 ; t282 [ 710ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_rho * 100000.0 ;
t282 [ 711ULL ] = X [ 231ULL ] ; t282 [ 712ULL ] = X [ 30ULL ] ; t282 [
713ULL ] = X [ 31ULL ] ; t282 [ 714ULL ] = X [ 32ULL ] ; t282 [ 715ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_md2 ; t282 [
716ULL ] = X [ 216ULL ] ; t282 [ 717ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 718ULL
] = X [ 217ULL ] ; t282 [ 719ULL ] = X [ 218ULL ] ; t282 [ 720ULL ] = - X [
219ULL ] ; t282 [ 721ULL ] = X [ 235ULL ] ; t282 [ 722ULL ] = - X [ 208ULL ]
; t282 [ 723ULL ] = - X [ 209ULL ] ; t282 [ 724ULL ] = - X [ 210ULL ] ; t282
[ 725ULL ] = X [ 236ULL ] ; t282 [ 726ULL ] = X [ 237ULL ] ; t282 [ 727ULL ]
= X [ 227ULL ] ; t282 [ 728ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 729ULL ] = X [
228ULL ] ; t282 [ 730ULL ] = X [ 229ULL ] ; t282 [ 731ULL ] = X [ 234ULL ] ;
t282 [ 732ULL ] = X [ 238ULL ] ; t282 [ 733ULL ] = X [ 239ULL ] ; t282 [
734ULL ] = X [ 240ULL ] ; t282 [ 735ULL ] = X [ 241ULL ] ; t282 [ 736ULL ] =
X [ 242ULL ] ; t282 [ 737ULL ] = X [ 243ULL ] ; t282 [ 738ULL ] = t524 ; t282
[ 739ULL ] = - X [ 208ULL ] ; t282 [ 740ULL ] = X [ 239ULL ] ; t282 [ 741ULL
] = - X [ 209ULL ] ; t282 [ 742ULL ] = X [ 240ULL ] ; t282 [ 743ULL ] = - X [
210ULL ] ; t282 [ 744ULL ] = X [ 241ULL ] ; t282 [ 745ULL ] = ( 1.0 - X [
32ULL ] ) - X [ 31ULL ] ; t282 [ 746ULL ] = X [ 233ULL ] ; t282 [ 747ULL ] =
X [ 227ULL ] ; t282 [ 748ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 749ULL ] = X [
228ULL ] ; t282 [ 750ULL ] = X [ 229ULL ] ; t282 [ 751ULL ] = X [ 227ULL ] ;
t282 [ 752ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 753ULL ] = X [ 228ULL ] ; t282 [
754ULL ] = X [ 229ULL ] ; t282 [ 755ULL ] = - X [ 239ULL ] ; t282 [ 756ULL ]
= - X [ 240ULL ] ; t282 [ 757ULL ] = - X [ 241ULL ] ; t282 [ 758ULL ] = X [
234ULL ] * - 1000.0 ; t282 [ 759ULL ] = - X [ 234ULL ] ; t282 [ 760ULL ] = -
X [ 239ULL ] ; t282 [ 761ULL ] = - X [ 240ULL ] ; t282 [ 762ULL ] = - X [
241ULL ] ; t282 [ 763ULL ] = - X [ 239ULL ] ; t282 [ 764ULL ] = U_idx_4 ;
t282 [ 765ULL ] = t519 * 9.5492965855137211 ; t282 [ 766ULL ] = X [ 227ULL ]
; t282 [ 767ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 768ULL ] = X [ 228ULL ] ; t282
[ 769ULL ] = X [ 229ULL ] ; t282 [ 770ULL ] = X [ 30ULL ] ; t282 [ 771ULL ] =
X [ 30ULL ] ; t282 [ 772ULL ] = X [ 216ULL ] ; t282 [ 773ULL ] = X [ 29ULL ]
* 0.1 ; t282 [ 774ULL ] = X [ 217ULL ] ; t282 [ 775ULL ] = X [ 218ULL ] ;
t282 [ 776ULL ] = X [ 202ULL ] ; t282 [ 777ULL ] = X [ 203ULL ] ; t282 [
778ULL ] = X [ 204ULL ] ; t282 [ 779ULL ] = X [ 216ULL ] ; t282 [ 780ULL ] =
X [ 29ULL ] * 0.1 ; t282 [ 781ULL ] = X [ 217ULL ] ; t282 [ 782ULL ] = X [
218ULL ] ; t282 [ 783ULL ] = t525 * 1000.0 ; t282 [ 784ULL ] = t525 *
1111.1111111111111 ; t282 [ 785ULL ] = t525 * 1111.1111111111111 ; t282 [
786ULL ] = - ( X [ 29ULL ] - 1.01325 ) * 99999.999999999985 ; t282 [ 787ULL ]
= t523 * 1.0E-6 ; t282 [ 788ULL ] = t525 * 1000.0 ; t282 [ 789ULL ] = X [
202ULL ] ; t282 [ 790ULL ] = X [ 203ULL ] ; t282 [ 791ULL ] = X [ 204ULL ] ;
t282 [ 792ULL ] = X [ 216ULL ] ; t282 [ 793ULL ] = X [ 29ULL ] * 0.1 ; t282 [
794ULL ] = X [ 217ULL ] ; t282 [ 795ULL ] = X [ 218ULL ] ; t282 [ 796ULL ] =
- ( X [ 29ULL ] - 1.01325 ) * 99999.999999999985 ; t282 [ 797ULL ] = X [
202ULL ] - X [ 216ULL ] ; t282 [ 798ULL ] = X [ 216ULL ] ; t282 [ 799ULL ] =
X [ 29ULL ] * 0.1 ; t282 [ 800ULL ] = X [ 217ULL ] ; t282 [ 801ULL ] = X [
218ULL ] ; t282 [ 802ULL ] = X [ 216ULL ] ; t282 [ 803ULL ] = X [ 29ULL ] *
0.1 ; t282 [ 804ULL ] = X [ 217ULL ] ; t282 [ 805ULL ] = X [ 218ULL ] ; t282
[ 806ULL ] = - X [ 219ULL ] ; t282 [ 807ULL ] = t523 * 1.0E-6 ; t282 [ 808ULL
] = - X [ 208ULL ] ; t282 [ 809ULL ] = - X [ 209ULL ] ; t282 [ 810ULL ] = - X
[ 210ULL ] ; t282 [ 811ULL ] = U_idx_4 ; t282 [ 812ULL ] = X [ 244ULL ] ;
t282 [ 813ULL ] = t527 * 0.99999999999999978 / 0.99999999999999978 *
9.5492965855137211 ; t282 [ 814ULL ] = - X [ 208ULL ] ; t282 [ 815ULL ] = X [
29ULL ] * 99999.999999999985 ; t282 [ 816ULL ] = X [ 244ULL ] ; t282 [ 817ULL
] = X [ 202ULL ] ; t282 [ 818ULL ] = X [ 203ULL ] ; t282 [ 819ULL ] = X [
204ULL ] ; t282 [ 820ULL ] = X [ 202ULL ] ; t282 [ 821ULL ] = X [ 216ULL ] ;
t282 [ 822ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 823ULL ] = X [ 217ULL ] ; t282 [
824ULL ] = X [ 218ULL ] ; t282 [ 825ULL ] = X [ 29ULL ] * 99999.999999999985
; t282 [ 826ULL ] = X [ 216ULL ] ; t282 [ 827ULL ] = X [ 202ULL ] ; t282 [
828ULL ] = X [ 203ULL ] ; t282 [ 829ULL ] = X [ 204ULL ] ; t282 [ 830ULL ] =
- X [ 208ULL ] ; t282 [ 831ULL ] = X [ 216ULL ] ; t282 [ 832ULL ] = X [ 29ULL
] * 0.1 ; t282 [ 833ULL ] = X [ 217ULL ] ; t282 [ 834ULL ] = X [ 218ULL ] ;
t282 [ 835ULL ] = t527 * 9.5492965855137211 ; t282 [ 836ULL ] = X [ 154ULL ]
; t282 [ 837ULL ] = X [ 155ULL ] * 0.1 ; t282 [ 838ULL ] = X [ 156ULL ] ;
t282 [ 839ULL ] = X [ 157ULL ] ; t282 [ 840ULL ] = X [ 245ULL ] ; t282 [
841ULL ] = X [ 246ULL ] * 0.1 ; t282 [ 842ULL ] = X [ 247ULL ] ; t282 [
843ULL ] = X [ 248ULL ] ; t282 [ 844ULL ] = U_idx_5 ; t282 [ 845ULL ] = X [
249ULL ] ; t282 [ 846ULL ] = X [ 33ULL ] ; t282 [ 847ULL ] = X [ 34ULL ] ;
t282 [ 848ULL ] = X [ 35ULL ] ; t282 [ 849ULL ] = U_idx_6 ; t282 [ 850ULL ] =
- U_idx_5 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 +
851ULL ] = t316 [ t396 ] ; } t282 [ 859ULL ] = X [ 253ULL ] ; t282 [ 860ULL ]
= X [ 250ULL ] * 1.0E-5 * 99999.999999999985 ; t282 [ 861ULL ] = X [ 33ULL ]
; t282 [ 862ULL ] = X [ 252ULL ] ; t282 [ 863ULL ] = X [ 252ULL ] ; t282 [
864ULL ] = X [ 255ULL ] ; t282 [ 865ULL ] = X [ 255ULL ] ; t282 [ 866ULL ] =
X [ 154ULL ] ; t282 [ 867ULL ] = X [ 155ULL ] * 0.1 ; t282 [ 868ULL ] = X [
156ULL ] ; t282 [ 869ULL ] = X [ 157ULL ] ; t282 [ 870ULL ] = X [ 245ULL ] ;
t282 [ 871ULL ] = X [ 246ULL ] * 0.1 ; t282 [ 872ULL ] = X [ 247ULL ] ; t282
[ 873ULL ] = X [ 248ULL ] ; t282 [ 874ULL ] = X [ 34ULL ] ; t282 [ 875ULL ] =
X [ 253ULL ] ; t282 [ 876ULL ] = X [ 35ULL ] ; t282 [ 877ULL ] = X [ 256ULL ]
; t282 [ 878ULL ] = X [ 33ULL ] - 273.15 ; t282 [ 879ULL ] = - X [ 181ULL ] ;
t282 [ 880ULL ] = X [ 257ULL ] * 0.1 ; t282 [ 881ULL ] = X [ 36ULL ] * 0.1 ;
t282 [ 882ULL ] = X [ 254ULL ] ; t282 [ 883ULL ] = t539 * 100000.0 ; t282 [
884ULL ] = X [ 259ULL ] ; t282 [ 885ULL ] = X [ 258ULL ] ; t282 [ 886ULL ] =
X [ 260ULL ] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [
t396 + 887ULL ] = t316 [ t396 ] ; } t282 [ 895ULL ] = X [ 255ULL ] ; t282 [
896ULL ] = X [ 251ULL ] ; t282 [ 897ULL ] = t540 ; t282 [ 898ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Mach_B ; t282 [ 899ULL ] =
- X [ 186ULL ] ; t282 [ 900ULL ] = X [ 261ULL ] ; t282 [ 901ULL ] = - X [
249ULL ] ; t282 [ 902ULL ] = X [ 252ULL ] ; t282 [ 903ULL ] = X [ 33ULL ] ;
t282 [ 904ULL ] = X [ 34ULL ] ; t282 [ 905ULL ] = X [ 35ULL ] ; t282 [ 906ULL
] = t542 ; t282 [ 907ULL ] = X [ 154ULL ] ; t282 [ 908ULL ] = X [ 155ULL ] *
0.1 ; t282 [ 909ULL ] = X [ 156ULL ] ; t282 [ 910ULL ] = X [ 157ULL ] ; t282
[ 911ULL ] = - X [ 186ULL ] ; t282 [ 912ULL ] = X [ 262ULL ] ; t282 [ 913ULL
] = - X [ 181ULL ] ; t282 [ 914ULL ] = - X [ 191ULL ] ; t282 [ 915ULL ] = - X
[ 192ULL ] ; t282 [ 916ULL ] = X [ 263ULL ] ; t282 [ 917ULL ] = X [ 264ULL ]
; t282 [ 918ULL ] = X [ 245ULL ] ; t282 [ 919ULL ] = X [ 246ULL ] * 0.1 ;
t282 [ 920ULL ] = X [ 247ULL ] ; t282 [ 921ULL ] = X [ 248ULL ] ; t282 [
922ULL ] = X [ 261ULL ] ; t282 [ 923ULL ] = X [ 265ULL ] ; t282 [ 924ULL ] =
X [ 258ULL ] ; t282 [ 925ULL ] = X [ 266ULL ] ; t282 [ 926ULL ] = X [ 267ULL
] ; t282 [ 927ULL ] = X [ 268ULL ] ; t282 [ 928ULL ] = X [ 269ULL ] ; t282 [
929ULL ] = t545 ; t282 [ 930ULL ] = - X [ 191ULL ] ; t282 [ 931ULL ] = X [
266ULL ] ; t282 [ 932ULL ] = U_idx_5 ; t282 [ 933ULL ] = - X [ 192ULL ] ;
t282 [ 934ULL ] = X [ 267ULL ] ; t282 [ 935ULL ] = t513 * 0.1 ; t282 [ 936ULL
] = t581 * 0.1 ; t282 [ 937ULL ] = ( 1.0 - X [ 35ULL ] ) - X [ 34ULL ] ; t282
[ 938ULL ] = U_idx_6 ; t282 [ 939ULL ] = U_idx_5 ; t282 [ 940ULL ] = X [
59ULL ] ; t282 [ 941ULL ] = X [ 60ULL ] * 0.1 ; t282 [ 942ULL ] = X [ 61ULL ]
; t282 [ 943ULL ] = X [ 62ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ )
{ t282 [ t396 + 944ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi [ t396 ] ; } for (
t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 952ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo [ t396 ] ; } t282
[ 960ULL ] = X [ 245ULL ] ; t282 [ 961ULL ] = X [ 246ULL ] * 0.1 ; t282 [
962ULL ] = X [ 247ULL ] ; t282 [ 963ULL ] = X [ 248ULL ] ; t282 [ 964ULL ] =
X [ 59ULL ] ; t282 [ 965ULL ] = X [ 60ULL ] * 0.1 ; t282 [ 966ULL ] = X [
61ULL ] ; t282 [ 967ULL ] = X [ 62ULL ] ; t282 [ 968ULL ] = X [ 5ULL ] ; t282
[ 969ULL ] = X [ 70ULL ] ; t282 [ 970ULL ] = X [ 6ULL ] ; t282 [ 971ULL ] = X
[ 270ULL ] ; t282 [ 972ULL ] = X [ 4ULL ] - 273.15 ; t282 [ 973ULL ] = - X [
258ULL ] ; t282 [ 974ULL ] = X [ 271ULL ] * 0.1 ; t282 [ 975ULL ] = X [ 37ULL
] * 0.1 ; t282 [ 976ULL ] = X [ 71ULL ] ; t282 [ 977ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_rho_I * 100000.0 ; t282 [
978ULL ] = X [ 273ULL ] ; t282 [ 979ULL ] = X [ 272ULL ] ; t282 [ 980ULL ] =
X [ 274ULL ] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [
t396 + 981ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi
[ t396 ] ; } t282 [ 989ULL ] = X [ 69ULL ] ; t282 [ 990ULL ] = t549 ; t282 [
991ULL ] = t544 ; t282 [ 992ULL ] = - X [ 261ULL ] ; t282 [ 993ULL ] = X [
275ULL ] ; t282 [ 994ULL ] = X [ 102ULL ] ; t282 [ 995ULL ] = X [ 68ULL ] ;
t282 [ 996ULL ] = X [ 4ULL ] ; t282 [ 997ULL ] = X [ 5ULL ] ; t282 [ 998ULL ]
= X [ 6ULL ] ; t282 [ 999ULL ] = t431 ; t282 [ 1000ULL ] = X [ 245ULL ] ;
t282 [ 1001ULL ] = X [ 246ULL ] * 0.1 ; t282 [ 1002ULL ] = X [ 247ULL ] ;
t282 [ 1003ULL ] = X [ 248ULL ] ; t282 [ 1004ULL ] = - X [ 261ULL ] ; t282 [
1005ULL ] = X [ 276ULL ] ; t282 [ 1006ULL ] = - X [ 258ULL ] ; t282 [ 1007ULL
] = - X [ 266ULL ] ; t282 [ 1008ULL ] = - X [ 267ULL ] ; t282 [ 1009ULL ] = X
[ 277ULL ] ; t282 [ 1010ULL ] = X [ 278ULL ] ; t282 [ 1011ULL ] = X [ 59ULL ]
; t282 [ 1012ULL ] = X [ 60ULL ] * 0.1 ; t282 [ 1013ULL ] = X [ 61ULL ] ;
t282 [ 1014ULL ] = X [ 62ULL ] ; t282 [ 1015ULL ] = X [ 275ULL ] ; t282 [
1016ULL ] = X [ 279ULL ] ; t282 [ 1017ULL ] = X [ 272ULL ] ; t282 [ 1018ULL ]
= X [ 280ULL ] ; t282 [ 1019ULL ] = X [ 281ULL ] ; t282 [ 1020ULL ] = X [
282ULL ] ; t282 [ 1021ULL ] = X [ 283ULL ] ; t282 [ 1022ULL ] = t554 ; t282 [
1023ULL ] = - X [ 266ULL ] ; t282 [ 1024ULL ] = X [ 280ULL ] ; t282 [ 1025ULL
] = - X [ 267ULL ] ; t282 [ 1026ULL ] = X [ 281ULL ] ; t282 [ 1027ULL ] =
t541 * 0.1 ; t282 [ 1028ULL ] = intrm_sf_mf_739 * 0.1 ; t282 [ 1029ULL ] = (
1.0 - X [ 6ULL ] ) - X [ 5ULL ] ; t282 [ 1030ULL ] = X [ 59ULL ] ; t282 [
1031ULL ] = X [ 60ULL ] * 0.1 ; t282 [ 1032ULL ] = X [ 61ULL ] ; t282 [
1033ULL ] = X [ 62ULL ] ; t282 [ 1034ULL ] = X [ 106ULL ] ; t282 [ 1035ULL ]
= X [ 107ULL ] * 0.1 ; t282 [ 1036ULL ] = X [ 108ULL ] ; t282 [ 1037ULL ] = X
[ 109ULL ] ; t282 [ 1038ULL ] = X [ 8ULL ] ; t282 [ 1039ULL ] = X [ 75ULL ] ;
t282 [ 1040ULL ] = X [ 9ULL ] ; t282 [ 1041ULL ] = X [ 284ULL ] ; t282 [
1042ULL ] = X [ 7ULL ] - 273.15 ; t282 [ 1043ULL ] = - X [ 272ULL ] ; t282 [
1044ULL ] = X [ 285ULL ] * 0.1 ; t282 [ 1045ULL ] = X [ 38ULL ] * 0.1 ; t282
[ 1046ULL ] = X [ 76ULL ] ; t282 [ 1047ULL ] = t555 * 100000.0 ; t282 [
1048ULL ] = X [ 286ULL ] ; t282 [ 1049ULL ] = - X [ 129ULL ] ; t282 [ 1050ULL
] = X [ 287ULL ] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [
t396 + 1051ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo
[ t396 ] ; } t282 [ 1059ULL ] = X [ 72ULL ] ; t282 [ 1060ULL ] = t558 ; t282
[ 1061ULL ] = t553 ; t282 [ 1062ULL ] = - X [ 275ULL ] ; t282 [ 1063ULL ] = -
X [ 138ULL ] ; t282 [ 1064ULL ] = - X [ 94ULL ] - X [ 97ULL ] ; t282 [
1065ULL ] = X [ 103ULL ] ; t282 [ 1066ULL ] = X [ 74ULL ] ; t282 [ 1067ULL ]
= X [ 7ULL ] ; t282 [ 1068ULL ] = X [ 8ULL ] ; t282 [ 1069ULL ] = X [ 9ULL ]
; t282 [ 1070ULL ] = t562 ; t282 [ 1071ULL ] = X [ 59ULL ] ; t282 [ 1072ULL ]
= X [ 60ULL ] * 0.1 ; t282 [ 1073ULL ] = X [ 61ULL ] ; t282 [ 1074ULL ] = X [
62ULL ] ; t282 [ 1075ULL ] = - X [ 275ULL ] ; t282 [ 1076ULL ] = X [ 288ULL ]
; t282 [ 1077ULL ] = - X [ 272ULL ] ; t282 [ 1078ULL ] = - X [ 280ULL ] ;
t282 [ 1079ULL ] = - X [ 281ULL ] ; t282 [ 1080ULL ] = X [ 289ULL ] ; t282 [
1081ULL ] = X [ 290ULL ] ; t282 [ 1082ULL ] = X [ 106ULL ] ; t282 [ 1083ULL ]
= X [ 107ULL ] * 0.1 ; t282 [ 1084ULL ] = X [ 108ULL ] ; t282 [ 1085ULL ] = X
[ 109ULL ] ; t282 [ 1086ULL ] = - X [ 138ULL ] ; t282 [ 1087ULL ] = X [
291ULL ] ; t282 [ 1088ULL ] = - X [ 129ULL ] ; t282 [ 1089ULL ] = - X [
140ULL ] ; t282 [ 1090ULL ] = - X [ 141ULL ] ; t282 [ 1091ULL ] = X [ 292ULL
] ; t282 [ 1092ULL ] = X [ 293ULL ] ; t282 [ 1093ULL ] = t572 ; t282 [
1094ULL ] = - X [ 280ULL ] ; t282 [ 1095ULL ] = - X [ 140ULL ] ; t282 [
1096ULL ] = X [ 93ULL ] ; t282 [ 1097ULL ] = X [ 99ULL ] ; t282 [ 1098ULL ] =
- X [ 281ULL ] ; t282 [ 1099ULL ] = - X [ 141ULL ] ; t282 [ 1100ULL ] =
t366_idx_0 * 0.1 ; t282 [ 1101ULL ] = t367_idx_0 * 0.1 ; t282 [ 1102ULL ] = (
1.0 - X [ 9ULL ] ) - X [ 8ULL ] ; t282 [ 1103ULL ] = X [ 7ULL ] ; t282 [
1104ULL ] = X [ 8ULL ] ; t282 [ 1105ULL ] = X [ 9ULL ] ; t282 [ 1106ULL ] = X
[ 245ULL ] ; t282 [ 1107ULL ] = X [ 246ULL ] * 0.1 ; t282 [ 1108ULL ] = X [
247ULL ] ; t282 [ 1109ULL ] = X [ 248ULL ] ; t282 [ 1110ULL ] = X [ 106ULL ]
; t282 [ 1111ULL ] = X [ 107ULL ] * 0.1 ; t282 [ 1112ULL ] = X [ 108ULL ] ;
t282 [ 1113ULL ] = X [ 109ULL ] ; t282 [ 1114ULL ] = X [ 227ULL ] ; t282 [
1115ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 1116ULL ] = X [ 228ULL ] ; t282 [
1117ULL ] = X [ 229ULL ] ; t282 [ 1118ULL ] = X [ 294ULL ] ; t282 [ 1119ULL ]
= X [ 295ULL ] * 0.1 ; t282 [ 1120ULL ] = X [ 296ULL ] ; t282 [ 1121ULL ] = X
[ 297ULL ] ; t282 [ 1122ULL ] = U_idx_7 ; t282 [ 1123ULL ] = X [ 298ULL ] ;
t282 [ 1124ULL ] = X [ 39ULL ] ; t282 [ 1125ULL ] = X [ 40ULL ] ; t282 [
1126ULL ] = X [ 41ULL ] ; t282 [ 1127ULL ] = U_idx_8 ; t282 [ 1128ULL ] = -
U_idx_7 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 1129ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t396 ]
; } t282 [ 1137ULL ] = X [ 302ULL ] ; t282 [ 1138ULL ] = X [ 299ULL ] *
1.0E-5 * 99999.999999999985 ; t282 [ 1139ULL ] = X [ 39ULL ] ; t282 [ 1140ULL
] = X [ 301ULL ] ; t282 [ 1141ULL ] = X [ 301ULL ] ; t282 [ 1142ULL ] = X [
304ULL ] ; t282 [ 1143ULL ] = X [ 304ULL ] ; t282 [ 1144ULL ] = X [ 227ULL ]
; t282 [ 1145ULL ] = X [ 29ULL ] * 0.1 ; t282 [ 1146ULL ] = X [ 228ULL ] ;
t282 [ 1147ULL ] = X [ 229ULL ] ; t282 [ 1148ULL ] = X [ 294ULL ] ; t282 [
1149ULL ] = X [ 295ULL ] * 0.1 ; t282 [ 1150ULL ] = X [ 296ULL ] ; t282 [
1151ULL ] = X [ 297ULL ] ; t282 [ 1152ULL ] = X [ 40ULL ] ; t282 [ 1153ULL ]
= X [ 302ULL ] ; t282 [ 1154ULL ] = X [ 41ULL ] ; t282 [ 1155ULL ] = X [
305ULL ] ; t282 [ 1156ULL ] = X [ 39ULL ] - 273.15 ; t282 [ 1157ULL ] = - X [
239ULL ] ; t282 [ 1158ULL ] = X [ 306ULL ] * 0.1 ; t282 [ 1159ULL ] = X [
42ULL ] * 0.1 ; t282 [ 1160ULL ] = X [ 303ULL ] ; t282 [ 1161ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 100000.0 ; t282 [
1162ULL ] = X [ 308ULL ] ; t282 [ 1163ULL ] = X [ 307ULL ] ; t282 [ 1164ULL ]
= X [ 309ULL ] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [
t396 + 1165ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Measurement_Selector0 [ t396 ] ; }
t282 [ 1173ULL ] = X [ 304ULL ] ; t282 [ 1174ULL ] = X [ 300ULL ] ; t282 [
1175ULL ] = t585 ; t282 [ 1176ULL ] = t583 ; t282 [ 1177ULL ] = - X [ 234ULL
] ; t282 [ 1178ULL ] = X [ 310ULL ] ; t282 [ 1179ULL ] = - X [ 298ULL ] ;
t282 [ 1180ULL ] = X [ 301ULL ] ; t282 [ 1181ULL ] = X [ 39ULL ] ; t282 [
1182ULL ] = X [ 40ULL ] ; t282 [ 1183ULL ] = X [ 41ULL ] ; t282 [ 1184ULL ] =
t587 ; t282 [ 1185ULL ] = X [ 227ULL ] ; t282 [ 1186ULL ] = X [ 29ULL ] * 0.1
; t282 [ 1187ULL ] = X [ 228ULL ] ; t282 [ 1188ULL ] = X [ 229ULL ] ; t282 [
1189ULL ] = - X [ 234ULL ] ; t282 [ 1190ULL ] = X [ 311ULL ] ; t282 [ 1191ULL
] = - X [ 239ULL ] ; t282 [ 1192ULL ] = - X [ 240ULL ] ; t282 [ 1193ULL ] = -
X [ 241ULL ] ; t282 [ 1194ULL ] = X [ 312ULL ] ; t282 [ 1195ULL ] = X [
313ULL ] ; t282 [ 1196ULL ] = X [ 294ULL ] ; t282 [ 1197ULL ] = X [ 295ULL ]
* 0.1 ; t282 [ 1198ULL ] = X [ 296ULL ] ; t282 [ 1199ULL ] = X [ 297ULL ] ;
t282 [ 1200ULL ] = X [ 310ULL ] ; t282 [ 1201ULL ] = X [ 314ULL ] ; t282 [
1202ULL ] = X [ 307ULL ] ; t282 [ 1203ULL ] = X [ 315ULL ] ; t282 [ 1204ULL ]
= X [ 316ULL ] ; t282 [ 1205ULL ] = X [ 317ULL ] ; t282 [ 1206ULL ] = X [
318ULL ] ; t282 [ 1207ULL ] = t590 ; t282 [ 1208ULL ] = - X [ 240ULL ] ; t282
[ 1209ULL ] = X [ 315ULL ] ; t282 [ 1210ULL ] = U_idx_7 ; t282 [ 1211ULL ] =
- X [ 241ULL ] ; t282 [ 1212ULL ] = X [ 316ULL ] ; t282 [ 1213ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.1 ; t282 [
1214ULL ] = intrm_sf_mf_1004 * 0.1 ; t282 [ 1215ULL ] = ( 1.0 - X [ 41ULL ] )
- X [ 40ULL ] ; t282 [ 1216ULL ] = U_idx_8 ; t282 [ 1217ULL ] = U_idx_7 ;
t282 [ 1218ULL ] = X [ 319ULL ] ; t282 [ 1219ULL ] = X [ 320ULL ] * 0.1 ;
t282 [ 1220ULL ] = X [ 321ULL ] ; t282 [ 1221ULL ] = X [ 322ULL ] ; t282 [
1222ULL ] = X [ 323ULL ] ; t282 [ 1223ULL ] = - 920.95788639984789 + t479 *
1000.0 ; t282 [ 1224ULL ] = ( X [ 323ULL ] * 0.0031415926535897937 -
0.92095788639984788 ) * 318.30988618379064 ; t282 [ 1225ULL ] = X [ 324ULL ]
; t282 [ 1226ULL ] = X [ 325ULL ] ; t282 [ 1227ULL ] = X [ 326ULL ] ; t282 [
1228ULL ] = X [ 327ULL ] ; t282 [ 1229ULL ] = X [ 328ULL ] ; t282 [ 1230ULL ]
= X [ 336ULL ] ; t282 [ 1231ULL ] = X [ 335ULL ] ; t282 [ 1232ULL ] = X [
324ULL ] ; t282 [ 1233ULL ] = X [ 325ULL ] ; t282 [ 1234ULL ] = X [ 326ULL ]
; t282 [ 1235ULL ] = X [ 328ULL ] ; t282 [ 1236ULL ] = X [ 329ULL ] ; t282 [
1237ULL ] = X [ 330ULL ] ; t282 [ 1238ULL ] = X [ 331ULL ] ; t282 [ 1239ULL ]
= X [ 332ULL ] ; t282 [ 1240ULL ] = X [ 333ULL ] ; t282 [ 1241ULL ] = X [
334ULL ] ; t282 [ 1242ULL ] = t629 ; t282 [ 1243ULL ] = X [ 330ULL ] ; t282 [
1244ULL ] = X [ 331ULL ] ; t282 [ 1245ULL ] = X [ 332ULL ] ; t282 [ 1246ULL ]
= t589 * 100000.0 ; t282 [ 1247ULL ] = ( 1.0 - X [ 335ULL ] ) - X [ 336ULL ]
; t282 [ 1248ULL ] = X [ 337ULL ] ; t282 [ 1249ULL ] = - 920.95788639984789 +
t479 * 1000.0 ; t282 [ 1250ULL ] = X [ 319ULL ] ; t282 [ 1251ULL ] = X [
320ULL ] * 0.1 ; t282 [ 1252ULL ] = X [ 321ULL ] ; t282 [ 1253ULL ] = X [
322ULL ] ; t282 [ 1254ULL ] = X [ 338ULL ] ; t282 [ 1255ULL ] = t593 * 0.1 ;
t282 [ 1256ULL ] = X [ 340ULL ] ; t282 [ 1257ULL ] = X [ 341ULL ] ; t282 [
1258ULL ] = X [ 46ULL ] ; t282 [ 1259ULL ] = X [ 346ULL ] ; t282 [ 1260ULL ]
= X [ 45ULL ] ; t282 [ 1261ULL ] = X [ 343ULL ] ; t282 [ 1262ULL ] = X [
43ULL ] - 273.15 ; t282 [ 1263ULL ] = X [ 342ULL ] ; t282 [ 1264ULL ] = X [
344ULL ] * 0.1 ; t282 [ 1265ULL ] = X [ 44ULL ] * 0.1 ; t282 [ 1266ULL ] = X
[ 345ULL ] ; t282 [ 1267ULL ] = t599 * 100000.0 ; t282 [ 1268ULL ] = X [
347ULL ] ; t282 [ 1269ULL ] = - X [ 330ULL ] ; t282 [ 1270ULL ] = X [ 348ULL
] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 1271ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_F [ t396 ] ; } t282 [
1279ULL ] = X [ 323ULL ] ; t282 [ 1280ULL ] = X [ 349ULL ] ; t282 [ 1281ULL ]
= t600 ; t282 [ 1282ULL ] = t598 ; t282 [ 1283ULL ] = X [ 351ULL ] ; t282 [
1284ULL ] = - X [ 328ULL ] ; t282 [ 1285ULL ] = 0.92095788639984788 - t479 ;
t282 [ 1286ULL ] = X [ 350ULL ] ; t282 [ 1287ULL ] = X [ 43ULL ] ; t282 [
1288ULL ] = X [ 46ULL ] ; t282 [ 1289ULL ] = X [ 45ULL ] ; t282 [ 1290ULL ] =
intrm_sf_mf_1107 ; t282 [ 1291ULL ] = X [ 319ULL ] ; t282 [ 1292ULL ] = X [
320ULL ] * 0.1 ; t282 [ 1293ULL ] = X [ 321ULL ] ; t282 [ 1294ULL ] = X [
322ULL ] ; t282 [ 1295ULL ] = X [ 351ULL ] ; t282 [ 1296ULL ] = X [ 352ULL ]
; t282 [ 1297ULL ] = X [ 342ULL ] ; t282 [ 1298ULL ] = X [ 353ULL ] ; t282 [
1299ULL ] = X [ 354ULL ] ; t282 [ 1300ULL ] = X [ 355ULL ] ; t282 [ 1301ULL ]
= X [ 356ULL ] ; t282 [ 1302ULL ] = X [ 338ULL ] ; t282 [ 1303ULL ] = t593 *
0.1 ; t282 [ 1304ULL ] = X [ 340ULL ] ; t282 [ 1305ULL ] = X [ 341ULL ] ;
t282 [ 1306ULL ] = - X [ 328ULL ] ; t282 [ 1307ULL ] = X [ 357ULL ] ; t282 [
1308ULL ] = - X [ 330ULL ] ; t282 [ 1309ULL ] = - X [ 331ULL ] ; t282 [
1310ULL ] = - X [ 332ULL ] ; t282 [ 1311ULL ] = X [ 358ULL ] ; t282 [ 1312ULL
] = X [ 359ULL ] ; t282 [ 1313ULL ] = t605 ; t282 [ 1314ULL ] = X [ 353ULL ]
; t282 [ 1315ULL ] = - X [ 331ULL ] ; t282 [ 1316ULL ] = X [ 354ULL ] ; t282
[ 1317ULL ] = - X [ 332ULL ] ; t282 [ 1318ULL ] = t630 * 0.1 ; t282 [ 1319ULL
] = t631 * 0.1 ; t282 [ 1320ULL ] = ( 1.0 - X [ 45ULL ] ) - X [ 46ULL ] ;
t282 [ 1321ULL ] = X [ 338ULL ] ; t282 [ 1322ULL ] = t593 * 0.1 ; t282 [
1323ULL ] = X [ 340ULL ] ; t282 [ 1324ULL ] = X [ 341ULL ] ; t282 [ 1325ULL ]
= X [ 324ULL ] ; t282 [ 1326ULL ] = X [ 325ULL ] ; t282 [ 1327ULL ] = X [
326ULL ] ; t282 [ 1328ULL ] = ( X [ 339ULL ] - 1.0E-8 ) * 1.0E+6 ; t282 [
1329ULL ] = X [ 339ULL ] ; t282 [ 1330ULL ] = ( X [ 339ULL ] - 1.0E-8 ) *
7812.5001220703134 ; t282 [ 1331ULL ] = ( X [ 339ULL ] - 1.0E-8 ) * 1.0E+6 ;
t282 [ 1332ULL ] = X [ 339ULL ] ; t282 [ 1333ULL ] = X [ 339ULL ] *
0.0019634954084936209 ; t282 [ 1334ULL ] = t593 * 99999.999999999985 ; t282 [
1335ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked *
0.1 ; t282 [ 1336ULL ] = ( X [ 339ULL ] - 1.0E-8 ) * 7812.5001220703134 ;
t282 [ 1337ULL ] = X [ 338ULL ] ; t282 [ 1338ULL ] = t593 * 0.1 ; t282 [
1339ULL ] = X [ 340ULL ] ; t282 [ 1340ULL ] = X [ 341ULL ] ; t282 [ 1341ULL ]
= t593 * 99999.999999999985 ; t282 [ 1342ULL ] = X [ 338ULL ] ; t282 [
1343ULL ] = X [ 338ULL ] ; t282 [ 1344ULL ] = t593 * 0.1 ; t282 [ 1345ULL ] =
X [ 340ULL ] ; t282 [ 1346ULL ] = X [ 341ULL ] ; t282 [ 1347ULL ] = X [
339ULL ] * 0.0019634954084936209 ; t282 [ 1348ULL ] = X [ 324ULL ] ; t282 [
1349ULL ] = X [ 325ULL ] ; t282 [ 1350ULL ] = X [ 326ULL ] ; t282 [ 1351ULL ]
= X [ 330ULL ] ; t282 [ 1352ULL ] = X [ 338ULL ] ; t282 [ 1353ULL ] = t593 *
0.1 ; t282 [ 1354ULL ] = X [ 340ULL ] ; t282 [ 1355ULL ] = X [ 341ULL ] ;
t282 [ 1356ULL ] = X [ 328ULL ] ; t282 [ 1357ULL ] = X [ 366ULL ] ; t282 [
1358ULL ] = X [ 330ULL ] ; t282 [ 1359ULL ] = X [ 331ULL ] ; t282 [ 1360ULL ]
= X [ 332ULL ] ; t282 [ 1361ULL ] = X [ 363ULL ] ; t282 [ 1362ULL ] = X [
362ULL ] ; t282 [ 1363ULL ] = X [ 360ULL ] ; t282 [ 1364ULL ] = X [ 361ULL ]
* 0.1 ; t282 [ 1365ULL ] = X [ 364ULL ] ; t282 [ 1366ULL ] = X [ 365ULL ] ;
t282 [ 1367ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val13 ; t282 [
1368ULL ] = X [ 328ULL ] ; t282 [ 1369ULL ] = - X [ 328ULL ] ; t282 [ 1370ULL
] = X [ 324ULL ] ; t282 [ 1371ULL ] = X [ 325ULL ] ; t282 [ 1372ULL ] = X [
326ULL ] ; t282 [ 1373ULL ] = - X [ 328ULL ] ; t282 [ 1374ULL ] = X [ 366ULL
] ; t282 [ 1375ULL ] = - X [ 330ULL ] ; t282 [ 1376ULL ] = - X [ 331ULL ] ;
t282 [ 1377ULL ] = - X [ 332ULL ] ; t282 [ 1378ULL ] = X [ 363ULL ] ; t282 [
1379ULL ] = X [ 362ULL ] ; t282 [ 1380ULL ] = - X [ 330ULL ] ; t282 [ 1381ULL
] = X [ 331ULL ] ; t282 [ 1382ULL ] = - X [ 331ULL ] ; t282 [ 1383ULL ] = X [
332ULL ] ; t282 [ 1384ULL ] = - X [ 332ULL ] ; t282 [ 1385ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_B_choked * 0.1 ; t282
[ 1386ULL ] = U_idx_9 ; t282 [ 1387ULL ] = X [ 63ULL ] ; t282 [ 1388ULL ] = X
[ 64ULL ] * 0.1 ; t282 [ 1389ULL ] = X [ 65ULL ] ; t282 [ 1390ULL ] = X [
66ULL ] ; for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 1391ULL
] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t396 ] ; }
for ( t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 1399ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t396 ] ; } t282
[ 1407ULL ] = X [ 294ULL ] ; t282 [ 1408ULL ] = X [ 295ULL ] * 0.1 ; t282 [
1409ULL ] = X [ 296ULL ] ; t282 [ 1410ULL ] = X [ 297ULL ] ; t282 [ 1411ULL ]
= X [ 63ULL ] ; t282 [ 1412ULL ] = X [ 64ULL ] * 0.1 ; t282 [ 1413ULL ] = X [
65ULL ] ; t282 [ 1414ULL ] = X [ 66ULL ] ; t282 [ 1415ULL ] = X [ 11ULL ] ;
t282 [ 1416ULL ] = X [ 80ULL ] ; t282 [ 1417ULL ] = X [ 12ULL ] ; t282 [
1418ULL ] = X [ 367ULL ] ; t282 [ 1419ULL ] = X [ 10ULL ] - 273.15 ; t282 [
1420ULL ] = - X [ 307ULL ] ; t282 [ 1421ULL ] = X [ 368ULL ] * 0.1 ; t282 [
1422ULL ] = X [ 47ULL ] * 0.1 ; t282 [ 1423ULL ] = X [ 81ULL ] ; t282 [
1424ULL ] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
100000.0 ; t282 [ 1425ULL ] = X [ 370ULL ] ; t282 [ 1426ULL ] = X [ 369ULL ]
; t282 [ 1427ULL ] = X [ 371ULL ] * 0.1 ; for ( t396 = 0ULL ; t396 < 8ULL ;
t396 ++ ) { t282 [ t396 + 1428ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi [ t396 ] ; } t282
[ 1436ULL ] = X [ 79ULL ] ; t282 [ 1437ULL ] = t613 ; t282 [ 1438ULL ] = t609
; t282 [ 1439ULL ] = - X [ 310ULL ] ; t282 [ 1440ULL ] = X [ 372ULL ] ; t282
[ 1441ULL ] = X [ 104ULL ] ; t282 [ 1442ULL ] = X [ 78ULL ] ; t282 [ 1443ULL
] = X [ 10ULL ] ; t282 [ 1444ULL ] = X [ 11ULL ] ; t282 [ 1445ULL ] = X [
12ULL ] ; t282 [ 1446ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden ; t282 [
1447ULL ] = X [ 294ULL ] ; t282 [ 1448ULL ] = X [ 295ULL ] * 0.1 ; t282 [
1449ULL ] = X [ 296ULL ] ; t282 [ 1450ULL ] = X [ 297ULL ] ; t282 [ 1451ULL ]
= - X [ 310ULL ] ; t282 [ 1452ULL ] = X [ 373ULL ] ; t282 [ 1453ULL ] = - X [
307ULL ] ; t282 [ 1454ULL ] = - X [ 315ULL ] ; t282 [ 1455ULL ] = - X [
316ULL ] ; t282 [ 1456ULL ] = X [ 374ULL ] ; t282 [ 1457ULL ] = X [ 375ULL ]
; t282 [ 1458ULL ] = X [ 63ULL ] ; t282 [ 1459ULL ] = X [ 64ULL ] * 0.1 ;
t282 [ 1460ULL ] = X [ 65ULL ] ; t282 [ 1461ULL ] = X [ 66ULL ] ; t282 [
1462ULL ] = X [ 372ULL ] ; t282 [ 1463ULL ] = X [ 376ULL ] ; t282 [ 1464ULL ]
= X [ 369ULL ] ; t282 [ 1465ULL ] = X [ 377ULL ] ; t282 [ 1466ULL ] = X [
378ULL ] ; t282 [ 1467ULL ] = X [ 379ULL ] ; t282 [ 1468ULL ] = X [ 380ULL ]
; t282 [ 1469ULL ] = t618 ; t282 [ 1470ULL ] = - X [ 315ULL ] ; t282 [
1471ULL ] = X [ 377ULL ] ; t282 [ 1472ULL ] = - X [ 316ULL ] ; t282 [ 1473ULL
] = X [ 378ULL ] ; t282 [ 1474ULL ] = intrm_sf_mf_1311 * 0.1 ; t282 [ 1475ULL
] = intrm_sf_mf_1318 * 0.1 ; t282 [ 1476ULL ] = ( 1.0 - X [ 12ULL ] ) - X [
11ULL ] ; t282 [ 1477ULL ] = X [ 63ULL ] ; t282 [ 1478ULL ] = X [ 64ULL ] *
0.1 ; t282 [ 1479ULL ] = X [ 65ULL ] ; t282 [ 1480ULL ] = X [ 66ULL ] ; t282
[ 1481ULL ] = X [ 319ULL ] ; t282 [ 1482ULL ] = X [ 320ULL ] * 0.1 ; t282 [
1483ULL ] = X [ 321ULL ] ; t282 [ 1484ULL ] = X [ 322ULL ] ; t282 [ 1485ULL ]
= X [ 14ULL ] ; t282 [ 1486ULL ] = X [ 85ULL ] ; t282 [ 1487ULL ] = X [ 15ULL
] ; t282 [ 1488ULL ] = X [ 381ULL ] ; t282 [ 1489ULL ] = X [ 13ULL ] - 273.15
; t282 [ 1490ULL ] = - X [ 369ULL ] ; t282 [ 1491ULL ] = X [ 382ULL ] * 0.1 ;
t282 [ 1492ULL ] = X [ 48ULL ] * 0.1 ; t282 [ 1493ULL ] = X [ 86ULL ] ; t282
[ 1494ULL ] = t619 * 100000.0 ; t282 [ 1495ULL ] = X [ 383ULL ] ; t282 [
1496ULL ] = - X [ 342ULL ] ; t282 [ 1497ULL ] = X [ 384ULL ] * 0.1 ; for (
t396 = 0ULL ; t396 < 8ULL ; t396 ++ ) { t282 [ t396 + 1498ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo [ t396 ] ; } t282
[ 1506ULL ] = X [ 84ULL ] ; t282 [ 1507ULL ] = t622 ; t282 [ 1508ULL ] = t617
; t282 [ 1509ULL ] = - X [ 372ULL ] ; t282 [ 1510ULL ] = - X [ 351ULL ] ;
t282 [ 1511ULL ] = ( - X [ 92ULL ] - X [ 96ULL ] ) - X [ 98ULL ] ; t282 [
1512ULL ] = X [ 105ULL ] ; t282 [ 1513ULL ] = X [ 83ULL ] ; t282 [ 1514ULL ]
= X [ 13ULL ] ; t282 [ 1515ULL ] = X [ 14ULL ] ; t282 [ 1516ULL ] = X [ 15ULL
] ; t282 [ 1517ULL ] = t623 ; t282 [ 1518ULL ] = X [ 63ULL ] ; t282 [ 1519ULL
] = X [ 64ULL ] * 0.1 ; t282 [ 1520ULL ] = X [ 65ULL ] ; t282 [ 1521ULL ] = X
[ 66ULL ] ; t282 [ 1522ULL ] = - X [ 372ULL ] ; t282 [ 1523ULL ] = X [ 385ULL
] ; t282 [ 1524ULL ] = - X [ 369ULL ] ; t282 [ 1525ULL ] = - X [ 377ULL ] ;
t282 [ 1526ULL ] = - X [ 378ULL ] ; t282 [ 1527ULL ] = X [ 386ULL ] ; t282 [
1528ULL ] = X [ 387ULL ] ; t282 [ 1529ULL ] = X [ 319ULL ] ; t282 [ 1530ULL ]
= X [ 320ULL ] * 0.1 ; t282 [ 1531ULL ] = X [ 321ULL ] ; t282 [ 1532ULL ] = X
[ 322ULL ] ; t282 [ 1533ULL ] = - X [ 351ULL ] ; t282 [ 1534ULL ] = X [
388ULL ] ; t282 [ 1535ULL ] = - X [ 342ULL ] ; t282 [ 1536ULL ] = - X [
353ULL ] ; t282 [ 1537ULL ] = - X [ 354ULL ] ; t282 [ 1538ULL ] = X [ 389ULL
] ; t282 [ 1539ULL ] = X [ 390ULL ] ; t282 [ 1540ULL ] = t627 ; t282 [
1541ULL ] = - X [ 377ULL ] ; t282 [ 1542ULL ] = - X [ 353ULL ] ; t282 [
1543ULL ] = X [ 95ULL ] ; t282 [ 1544ULL ] = X [ 100ULL ] ; t282 [ 1545ULL ]
= - X [ 378ULL ] ; t282 [ 1546ULL ] = - X [ 354ULL ] ; t282 [ 1547ULL ] =
t634 * 0.1 ; t282 [ 1548ULL ] = t637 * 0.1 ; t282 [ 1549ULL ] = ( 1.0 - X [
15ULL ] ) - X [ 14ULL ] ; t282 [ 1550ULL ] = X [ 13ULL ] ; t282 [ 1551ULL ] =
X [ 14ULL ] ; t282 [ 1552ULL ] = X [ 15ULL ] ; t282 [ 1553ULL ] = X [ 294ULL
] ; t282 [ 1554ULL ] = X [ 295ULL ] * 0.1 ; t282 [ 1555ULL ] = X [ 296ULL ] ;
t282 [ 1556ULL ] = X [ 297ULL ] ; t282 [ 1557ULL ] = X [ 319ULL ] ; t282 [
1558ULL ] = X [ 320ULL ] * 0.1 ; t282 [ 1559ULL ] = X [ 321ULL ] ; t282 [
1560ULL ] = X [ 322ULL ] ; t282 [ 1561ULL ] = Fuel_Cell_Boost_Converter_L_p_v
; t282 [ 1562ULL ] = U_idx_10 ; t282 [ 1563ULL ] = X [ 53ULL ] ; t282 [
1564ULL ] = X [ 53ULL ] ; t282 [ 1565ULL ] = X [ 53ULL ] ; t282 [ 1566ULL ] =
X [ 53ULL ] ; t282 [ 1567ULL ] = intrm_sf_mf_1322 ; t282 [ 1568ULL ] =
intrm_sf_mf_1322 ; t282 [ 1569ULL ] = X [ 53ULL ] ; t282 [ 1570ULL ] = X [
53ULL ] ; t282 [ 1571ULL ] = intrm_sf_mf_1322 ; t282 [ 1572ULL ] = X [ 53ULL
] ; t282 [ 1573ULL ] = X [ 53ULL ] ; t282 [ 1574ULL ] = X [ 53ULL ] ; t282 [
1575ULL ] = X [ 53ULL ] ; t282 [ 1576ULL ] = X [ 53ULL ] ; t282 [ 1577ULL ] =
X [ 49ULL ] ; t282 [ 1578ULL ] = X [ 49ULL ] ; t282 [ 1579ULL ] = U_idx_11 ;
t282 [ 1580ULL ] = X [ 53ULL ] ; t282 [ 1581ULL ] = intrm_sf_mf_1322 ; t282 [
1582ULL ] = t626 * 1000.0 ; t282 [ 1583ULL ] = X [ 392ULL ] ; t282 [ 1584ULL
] = X [ 393ULL ] ; t282 [ 1585ULL ] = X [ 393ULL ] ; t282 [ 1586ULL ] = X [
391ULL ] ; t282 [ 1587ULL ] = X [ 50ULL ] ; t282 [ 1588ULL ] = X [ 53ULL ] ;
t282 [ 1589ULL ] = X [ 49ULL ] * 9.5492965855137211 ; t282 [ 1590ULL ] = X [
49ULL ] ; t282 [ 1591ULL ] = U_idx_12 ; t282 [ 1592ULL ] = - X [ 392ULL ] ;
t282 [ 1593ULL ] = U_idx_12 ; t282 [ 1594ULL ] = X [ 49ULL ] ; t282 [ 1595ULL
] = X [ 49ULL ] ; t282 [ 1596ULL ] = - X [ 392ULL ] ; t282 [ 1597ULL ] = - X
[ 392ULL ] ; t282 [ 1598ULL ] = X [ 49ULL ] ; t282 [ 1599ULL ] = X [ 49ULL ]
; t282 [ 1600ULL ] = - X [ 392ULL ] ; t282 [ 1601ULL ] = - X [ 392ULL ] ;
t282 [ 1602ULL ] = - X [ 392ULL ] ; t282 [ 1603ULL ] = X [ 49ULL ] ; t282 [
1604ULL ] = U_idx_12 ; t282 [ 1605ULL ] = U_idx_11 ; t282 [ 1606ULL ] = X [
53ULL ] ; t282 [ 1607ULL ] = X [ 299ULL ] ; t282 [ 1608ULL ] = X [ 250ULL ] ;
t282 [ 1609ULL ] = X [ 82ULL ] ; t282 [ 1610ULL ] = X [ 83ULL ] ; t282 [
1611ULL ] = X [ 84ULL ] ; t282 [ 1612ULL ] = X [ 77ULL ] ; t282 [ 1613ULL ] =
X [ 78ULL ] ; t282 [ 1614ULL ] = X [ 79ULL ] ; t282 [ 1615ULL ] = X [ 73ULL ]
; t282 [ 1616ULL ] = X [ 74ULL ] ; t282 [ 1617ULL ] = X [ 72ULL ] ; t282 [
1618ULL ] = X [ 67ULL ] ; t282 [ 1619ULL ] = X [ 68ULL ] ; t282 [ 1620ULL ] =
X [ 69ULL ] ; for ( b = 0 ; b < 1621 ; b ++ ) { out . mX [ b ] = t282 [ b ] ;
} ( void ) LC ; ( void ) t909 ; return 0 ; }
