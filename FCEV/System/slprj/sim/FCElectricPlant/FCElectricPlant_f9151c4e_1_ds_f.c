#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_f.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t4097 , NeDsMethodOutput * t4098 ) { ETTS0 an_efOut ;
ETTS0 bf_efOut ; ETTS0 bm_efOut ; ETTS0 bq_efOut ; ETTS0 c_efOut ; ETTS0
ce_efOut ; ETTS0 cg_efOut ; ETTS0 cj_efOut ; ETTS0 ck_efOut ; ETTS0 cp_efOut
; ETTS0 cr_efOut ; ETTS0 ct_efOut ; ETTS0 dd_efOut ; ETTS0 dl_efOut ; ETTS0
do_efOut ; ETTS0 ds_efOut ; ETTS0 e_efOut ; ETTS0 ec_efOut ; ETTS0 efOut ;
ETTS0 ei_efOut ; ETTS0 en_efOut ; ETTS0 fh_efOut ; ETTS0 fm_efOut ; ETTS0
fq_efOut ; ETTS0 g_efOut ; ETTS0 ge_efOut ; ETTS0 gk_efOut ; ETTS0 gp_efOut ;
ETTS0 gt_efOut ; ETTS0 hl_efOut ; ETTS0 ho_efOut ; ETTS0 hs_efOut ; ETTS0
i_efOut ; ETTS0 ic_efOut ; ETTS0 in_efOut ; ETTS0 it_efOut ; ETTS0 jh_efOut ;
ETTS0 jm_efOut ; ETTS0 jq_efOut ; ETTS0 k_efOut ; ETTS0 kp_efOut ; ETTS0
kt_efOut ; ETTS0 lb_efOut ; ETTS0 lo_efOut ; ETTS0 ls_efOut ; ETTS0 lt_efOut
; ETTS0 m_efOut ; ETTS0 me_efOut ; ETTS0 mn_efOut ; ETTS0 mr_efOut ; ETTS0
mt_efOut ; ETTS0 nf_efOut ; ETTS0 nm_efOut ; ETTS0 nq_efOut ; ETTS0 nt_efOut
; ETTS0 og_efOut ; ETTS0 op_efOut ; ETTS0 ot_efOut ; ETTS0 pc_efOut ; ETTS0
pd_efOut ; ETTS0 pj_efOut ; ETTS0 po_efOut ; ETTS0 ps_efOut ; ETTS0 q_efOut ;
ETTS0 qe_efOut ; ETTS0 qh_efOut ; ETTS0 qi_efOut ; ETTS0 qk_efOut ; ETTS0
qn_efOut ; ETTS0 qr_efOut ; ETTS0 rf_efOut ; ETTS0 rm_efOut ; ETTS0 rq_efOut
; ETTS0 sg_efOut ; ETTS0 sp_efOut ; ETTS0 t18 ; ETTS0 t19 ; ETTS0 t31 ; ETTS0
t32 ; ETTS0 t48 ; ETTS0 t54 ; ETTS0 t58 ; ETTS0 t60 ; ETTS0 t70 ; ETTS0 t77 ;
ETTS0 t86 ; ETTS0 t94 ; ETTS0 td_efOut ; ETTS0 tl_efOut ; ETTS0 to_efOut ;
ETTS0 ts_efOut ; ETTS0 ui_efOut ; ETTS0 ul_efOut ; ETTS0 un_efOut ; ETTS0
ur_efOut ; ETTS0 vm_efOut ; ETTS0 wl_efOut ; ETTS0 wp_efOut ; ETTS0 x_efOut ;
ETTS0 xb_efOut ; ETTS0 xd_efOut ; ETTS0 xo_efOut ; ETTS0 xs_efOut ; ETTS0
yn_efOut ; ETTS0 yr_efOut ; PmRealVector out ; real_T X [ 399 ] ; real_T
t1209 [ 399 ] ; real_T nonscalar34 [ 7 ] ; real_T nonscalar33 [ 6 ] ; real_T
nonscalar37 [ 5 ] ; real_T nonscalar38 [ 3 ] ; real_T ab_efOut [ 1 ] ; real_T
ac_efOut [ 1 ] ; real_T ad_efOut [ 1 ] ; real_T ae_efOut [ 1 ] ; real_T
af_efOut [ 1 ] ; real_T ag_efOut [ 1 ] ; real_T ah_efOut [ 1 ] ; real_T
ai_efOut [ 1 ] ; real_T aj_efOut [ 1 ] ; real_T ak_efOut [ 1 ] ; real_T
al_efOut [ 1 ] ; real_T am_efOut [ 1 ] ; real_T ao_efOut [ 1 ] ; real_T
ap_efOut [ 1 ] ; real_T aq_efOut [ 1 ] ; real_T ar_efOut [ 1 ] ; real_T
as_efOut [ 1 ] ; real_T at_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T
bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T
be_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T bh_efOut [ 1 ] ; real_T
bi_efOut [ 1 ] ; real_T bj_efOut [ 1 ] ; real_T bk_efOut [ 1 ] ; real_T
bl_efOut [ 1 ] ; real_T bn_efOut [ 1 ] ; real_T bo_efOut [ 1 ] ; real_T
bp_efOut [ 1 ] ; real_T br_efOut [ 1 ] ; real_T bs_efOut [ 1 ] ; real_T
bt_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ; real_T
cd_efOut [ 1 ] ; real_T cf_efOut [ 1 ] ; real_T ch_efOut [ 1 ] ; real_T
ci_efOut [ 1 ] ; real_T cl_efOut [ 1 ] ; real_T cm_efOut [ 1 ] ; real_T
cn_efOut [ 1 ] ; real_T co_efOut [ 1 ] ; real_T cq_efOut [ 1 ] ; real_T
cs_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T
dc_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T
dg_efOut [ 1 ] ; real_T dh_efOut [ 1 ] ; real_T di_efOut [ 1 ] ; real_T
dj_efOut [ 1 ] ; real_T dk_efOut [ 1 ] ; real_T dm_efOut [ 1 ] ; real_T
dn_efOut [ 1 ] ; real_T dp_efOut [ 1 ] ; real_T dq_efOut [ 1 ] ; real_T
dr_efOut [ 1 ] ; real_T dt_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
ed_efOut [ 1 ] ; real_T ee_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T
eg_efOut [ 1 ] ; real_T eh_efOut [ 1 ] ; real_T ej_efOut [ 1 ] ; real_T
ek_efOut [ 1 ] ; real_T el_efOut [ 1 ] ; real_T em_efOut [ 1 ] ; real_T
eo_efOut [ 1 ] ; real_T ep_efOut [ 1 ] ; real_T eq_efOut [ 1 ] ; real_T
er_efOut [ 1 ] ; real_T es_efOut [ 1 ] ; real_T et_efOut [ 1 ] ; real_T
f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T
fd_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ; real_T ff_efOut [ 1 ] ; real_T
fg_efOut [ 1 ] ; real_T fi_efOut [ 1 ] ; real_T fj_efOut [ 1 ] ; real_T
fk_efOut [ 1 ] ; real_T fl_efOut [ 1 ] ; real_T fn_efOut [ 1 ] ; real_T
fo_efOut [ 1 ] ; real_T fp_efOut [ 1 ] ; real_T fr_efOut [ 1 ] ; real_T
fs_efOut [ 1 ] ; real_T ft_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T
gc_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T gf_efOut [ 1 ] ; real_T
gg_efOut [ 1 ] ; real_T gh_efOut [ 1 ] ; real_T gi_efOut [ 1 ] ; real_T
gj_efOut [ 1 ] ; real_T gl_efOut [ 1 ] ; real_T gm_efOut [ 1 ] ; real_T
gn_efOut [ 1 ] ; real_T go_efOut [ 1 ] ; real_T gq_efOut [ 1 ] ; real_T
gr_efOut [ 1 ] ; real_T gs_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T
hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T
he_efOut [ 1 ] ; real_T hf_efOut [ 1 ] ; real_T hg_efOut [ 1 ] ; real_T
hh_efOut [ 1 ] ; real_T hi_efOut [ 1 ] ; real_T hj_efOut [ 1 ] ; real_T
hk_efOut [ 1 ] ; real_T hm_efOut [ 1 ] ; real_T hn_efOut [ 1 ] ; real_T
hp_efOut [ 1 ] ; real_T hq_efOut [ 1 ] ; real_T hr_efOut [ 1 ] ; real_T
ht_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T id_efOut [ 1 ] ; real_T
ie_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T ig_efOut [ 1 ] ; real_T
ih_efOut [ 1 ] ; real_T ii_efOut [ 1 ] ; real_T ij_efOut [ 1 ] ; real_T
ik_efOut [ 1 ] ; real_T il_efOut [ 1 ] ; real_T im_efOut [ 1 ] ; real_T
io_efOut [ 1 ] ; real_T ip_efOut [ 1 ] ; real_T iq_efOut [ 1 ] ; real_T
ir_efOut [ 1 ] ; real_T is_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T
jb_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T jd_efOut [ 1 ] ; real_T
je_efOut [ 1 ] ; real_T jf_efOut [ 1 ] ; real_T jg_efOut [ 1 ] ; real_T
ji_efOut [ 1 ] ; real_T jj_efOut [ 1 ] ; real_T jk_efOut [ 1 ] ; real_T
jl_efOut [ 1 ] ; real_T jn_efOut [ 1 ] ; real_T jo_efOut [ 1 ] ; real_T
jp_efOut [ 1 ] ; real_T jr_efOut [ 1 ] ; real_T js_efOut [ 1 ] ; real_T
jt_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T
kd_efOut [ 1 ] ; real_T ke_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T
kg_efOut [ 1 ] ; real_T kh_efOut [ 1 ] ; real_T ki_efOut [ 1 ] ; real_T
kj_efOut [ 1 ] ; real_T kk_efOut [ 1 ] ; real_T kl_efOut [ 1 ] ; real_T
km_efOut [ 1 ] ; real_T kn_efOut [ 1 ] ; real_T ko_efOut [ 1 ] ; real_T
kq_efOut [ 1 ] ; real_T kr_efOut [ 1 ] ; real_T ks_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T ld_efOut [ 1 ] ; real_T
le_efOut [ 1 ] ; real_T lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T
lh_efOut [ 1 ] ; real_T li_efOut [ 1 ] ; real_T lj_efOut [ 1 ] ; real_T
lk_efOut [ 1 ] ; real_T ll_efOut [ 1 ] ; real_T lm_efOut [ 1 ] ; real_T
ln_efOut [ 1 ] ; real_T lp_efOut [ 1 ] ; real_T lq_efOut [ 1 ] ; real_T
lr_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T
md_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T mg_efOut [ 1 ] ; real_T
mh_efOut [ 1 ] ; real_T mi_efOut [ 1 ] ; real_T mj_efOut [ 1 ] ; real_T
mk_efOut [ 1 ] ; real_T ml_efOut [ 1 ] ; real_T mm_efOut [ 1 ] ; real_T
mo_efOut [ 1 ] ; real_T mp_efOut [ 1 ] ; real_T mq_efOut [ 1 ] ; real_T
ms_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T nd_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T
ng_efOut [ 1 ] ; real_T nh_efOut [ 1 ] ; real_T ni_efOut [ 1 ] ; real_T
nj_efOut [ 1 ] ; real_T nk_efOut [ 1 ] ; real_T nl_efOut [ 1 ] ; real_T
nn_efOut [ 1 ] ; real_T no_efOut [ 1 ] ; real_T np_efOut [ 1 ] ; real_T
nr_efOut [ 1 ] ; real_T ns_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T
oe_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T oh_efOut [ 1 ] ; real_T
oi_efOut [ 1 ] ; real_T oj_efOut [ 1 ] ; real_T ok_efOut [ 1 ] ; real_T
ol_efOut [ 1 ] ; real_T om_efOut [ 1 ] ; real_T on_efOut [ 1 ] ; real_T
oo_efOut [ 1 ] ; real_T oq_efOut [ 1 ] ; real_T or_efOut [ 1 ] ; real_T
os_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T
pe_efOut [ 1 ] ; real_T pf_efOut [ 1 ] ; real_T pg_efOut [ 1 ] ; real_T
ph_efOut [ 1 ] ; real_T pi_efOut [ 1 ] ; real_T pk_efOut [ 1 ] ; real_T
pl_efOut [ 1 ] ; real_T pm_efOut [ 1 ] ; real_T pn_efOut [ 1 ] ; real_T
pp_efOut [ 1 ] ; real_T pq_efOut [ 1 ] ; real_T pr_efOut [ 1 ] ; real_T
pt_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T
qd_efOut [ 1 ] ; real_T qf_efOut [ 1 ] ; real_T qg_efOut [ 1 ] ; real_T
qj_efOut [ 1 ] ; real_T ql_efOut [ 1 ] ; real_T qm_efOut [ 1 ] ; real_T
qo_efOut [ 1 ] ; real_T qp_efOut [ 1 ] ; real_T qq_efOut [ 1 ] ; real_T
qs_efOut [ 1 ] ; real_T qt_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T
re_efOut [ 1 ] ; real_T rg_efOut [ 1 ] ; real_T rh_efOut [ 1 ] ; real_T
ri_efOut [ 1 ] ; real_T rj_efOut [ 1 ] ; real_T rk_efOut [ 1 ] ; real_T
rl_efOut [ 1 ] ; real_T rn_efOut [ 1 ] ; real_T ro_efOut [ 1 ] ; real_T
rp_efOut [ 1 ] ; real_T rr_efOut [ 1 ] ; real_T rs_efOut [ 1 ] ; real_T
rt_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T
sc_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T se_efOut [ 1 ] ; real_T
sf_efOut [ 1 ] ; real_T sh_efOut [ 1 ] ; real_T si_efOut [ 1 ] ; real_T
sj_efOut [ 1 ] ; real_T sk_efOut [ 1 ] ; real_T sl_efOut [ 1 ] ; real_T
sm_efOut [ 1 ] ; real_T sn_efOut [ 1 ] ; real_T so_efOut [ 1 ] ; real_T
sq_efOut [ 1 ] ; real_T sr_efOut [ 1 ] ; real_T ss_efOut [ 1 ] ; real_T
st_efOut [ 1 ] ; real_T t1195 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T tb_efOut
[ 1 ] ; real_T tc_efOut [ 1 ] ; real_T te_efOut [ 1 ] ; real_T tf_efOut [ 1 ]
; real_T tg_efOut [ 1 ] ; real_T th_efOut [ 1 ] ; real_T ti_efOut [ 1 ] ;
real_T tj_efOut [ 1 ] ; real_T tk_efOut [ 1 ] ; real_T tm_efOut [ 1 ] ;
real_T tn_efOut [ 1 ] ; real_T tp_efOut [ 1 ] ; real_T tq_efOut [ 1 ] ;
real_T tr_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ; real_T
uc_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T ue_efOut [ 1 ] ; real_T
uf_efOut [ 1 ] ; real_T ug_efOut [ 1 ] ; real_T uh_efOut [ 1 ] ; real_T
uj_efOut [ 1 ] ; real_T uk_efOut [ 1 ] ; real_T um_efOut [ 1 ] ; real_T
uo_efOut [ 1 ] ; real_T up_efOut [ 1 ] ; real_T uq_efOut [ 1 ] ; real_T
us_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T
vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T ve_efOut [ 1 ] ; real_T
vf_efOut [ 1 ] ; real_T vg_efOut [ 1 ] ; real_T vh_efOut [ 1 ] ; real_T
vi_efOut [ 1 ] ; real_T vj_efOut [ 1 ] ; real_T vk_efOut [ 1 ] ; real_T
vl_efOut [ 1 ] ; real_T vn_efOut [ 1 ] ; real_T vo_efOut [ 1 ] ; real_T
vp_efOut [ 1 ] ; real_T vq_efOut [ 1 ] ; real_T vr_efOut [ 1 ] ; real_T
vs_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T
wc_efOut [ 1 ] ; real_T wd_efOut [ 1 ] ; real_T we_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T wg_efOut [ 1 ] ; real_T wh_efOut [ 1 ] ; real_T
wi_efOut [ 1 ] ; real_T wj_efOut [ 1 ] ; real_T wk_efOut [ 1 ] ; real_T
wm_efOut [ 1 ] ; real_T wn_efOut [ 1 ] ; real_T wo_efOut [ 1 ] ; real_T
wq_efOut [ 1 ] ; real_T wr_efOut [ 1 ] ; real_T ws_efOut [ 1 ] ; real_T
xc_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T xf_efOut [ 1 ] ; real_T
xg_efOut [ 1 ] ; real_T xh_efOut [ 1 ] ; real_T xi_efOut [ 1 ] ; real_T
xj_efOut [ 1 ] ; real_T xk_efOut [ 1 ] ; real_T xl_efOut [ 1 ] ; real_T
xm_efOut [ 1 ] ; real_T xn_efOut [ 1 ] ; real_T xp_efOut [ 1 ] ; real_T
xq_efOut [ 1 ] ; real_T xr_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
yb_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T yd_efOut [ 1 ] ; real_T
ye_efOut [ 1 ] ; real_T yf_efOut [ 1 ] ; real_T yg_efOut [ 1 ] ; real_T
yh_efOut [ 1 ] ; real_T yi_efOut [ 1 ] ; real_T yj_efOut [ 1 ] ; real_T
yk_efOut [ 1 ] ; real_T yl_efOut [ 1 ] ; real_T ym_efOut [ 1 ] ; real_T
yo_efOut [ 1 ] ; real_T yp_efOut [ 1 ] ; real_T yq_efOut [ 1 ] ; real_T
ys_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T
U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ;
real_T intrm_sf_mf_1009 ; real_T intrm_sf_mf_1010 ; real_T intrm_sf_mf_1054 ;
real_T intrm_sf_mf_1065 ; real_T intrm_sf_mf_1188 ; real_T intrm_sf_mf_1235 ;
real_T intrm_sf_mf_1269 ; real_T intrm_sf_mf_1284 ; real_T intrm_sf_mf_1299 ;
real_T intrm_sf_mf_1318 ; real_T intrm_sf_mf_1402 ; real_T intrm_sf_mf_1428 ;
real_T intrm_sf_mf_1449 ; real_T intrm_sf_mf_1452 ; real_T intrm_sf_mf_151 ;
real_T intrm_sf_mf_173 ; real_T intrm_sf_mf_182 ; real_T intrm_sf_mf_189 ;
real_T intrm_sf_mf_192 ; real_T intrm_sf_mf_199 ; real_T intrm_sf_mf_218 ;
real_T intrm_sf_mf_325 ; real_T intrm_sf_mf_381 ; real_T intrm_sf_mf_384 ;
real_T intrm_sf_mf_385 ; real_T intrm_sf_mf_413 ; real_T intrm_sf_mf_536 ;
real_T intrm_sf_mf_538 ; real_T intrm_sf_mf_549 ; real_T intrm_sf_mf_558 ;
real_T intrm_sf_mf_583 ; real_T intrm_sf_mf_688 ; real_T intrm_sf_mf_715 ;
real_T intrm_sf_mf_718 ; real_T intrm_sf_mf_740 ; real_T intrm_sf_mf_758 ;
real_T intrm_sf_mf_826 ; real_T intrm_sf_mf_871 ; real_T intrm_sf_mf_934 ;
real_T intrm_sf_mf_992 ; real_T intrm_sf_mf_995 ; real_T piece14 ; real_T
piece151 ; real_T piece170 ; real_T piece175 ; real_T piece20 ; real_T
piece214 ; real_T piece218 ; real_T piece223 ; real_T piece232 ; real_T
piece250 ; real_T piece96 ; real_T t105 ; real_T t106 ; real_T t108 ; real_T
t111 ; real_T t112 ; real_T t115 ; real_T t116 ; real_T t122 ; real_T t123 ;
real_T t1599_idx_0 ; real_T t1603_idx_0 ; real_T t1608_idx_0 ; real_T t1616 ;
real_T t1623 ; real_T t1631 ; real_T t1632 ; real_T t1636 ; real_T t1639 ;
real_T t1644 ; real_T t1647 ; real_T t1648 ; real_T t1662 ; real_T t1712 ;
real_T t1713 ; real_T t1714 ; real_T t1715 ; real_T t1716 ; real_T t1717 ;
real_T t1718 ; real_T t1720 ; real_T t1723 ; real_T t1725 ; real_T t1726 ;
real_T t1730 ; real_T t1731 ; real_T t1733 ; real_T t1735 ; real_T t1736 ;
real_T t1737 ; real_T t1739 ; real_T t1743 ; real_T t1744 ; real_T t1749 ;
real_T t1751 ; real_T t1752 ; real_T t1754 ; real_T t1755 ; real_T t1756 ;
real_T t1763 ; real_T t1764 ; real_T t1765 ; real_T t1766 ; real_T t1768 ;
real_T t1770 ; real_T t1772 ; real_T t1773 ; real_T t1775 ; real_T t1776 ;
real_T t1777 ; real_T t1778 ; real_T t1779 ; real_T t1781 ; real_T t1782 ;
real_T t1783 ; real_T t1785 ; real_T t1786 ; real_T t1789 ; real_T t1790 ;
real_T t1791 ; real_T t1794 ; real_T t1795 ; real_T t1796 ; real_T t1797 ;
real_T t1798 ; real_T t1799 ; real_T t1801 ; real_T t1802 ; real_T t1803 ;
real_T t1805 ; real_T t1806 ; real_T t1807 ; real_T t1809 ; real_T t1811 ;
real_T t1812 ; real_T t1813 ; real_T t1814 ; real_T t1816 ; real_T t1818 ;
real_T t1820 ; real_T t1822 ; real_T t1828 ; real_T t1829 ; real_T t1831 ;
real_T t1832 ; real_T t1833 ; real_T t1834 ; real_T t1835 ; real_T t1836 ;
real_T t1840 ; real_T t1843 ; real_T t1846 ; real_T t1848 ; real_T t1849 ;
real_T t1850 ; real_T t1853 ; real_T t1855 ; real_T t1856 ; real_T t1858 ;
real_T t1859 ; real_T t1860 ; real_T t1861 ; real_T t1862 ; real_T t1864 ;
real_T t1865 ; real_T t1867 ; real_T t1869 ; real_T t1870 ; real_T t1873 ;
real_T t1876 ; real_T t1880 ; real_T t1882 ; real_T t1883 ; real_T t1885 ;
real_T t1886 ; real_T t1888 ; real_T t1889 ; real_T t1890 ; real_T t1891 ;
real_T t1892 ; real_T t1893 ; real_T t1894 ; real_T t1895 ; real_T t1900 ;
real_T t1901 ; real_T t1902 ; real_T t1907 ; real_T t1912 ; real_T t1913 ;
real_T t1914 ; real_T t1915 ; real_T t1916 ; real_T t1918 ; real_T t1919 ;
real_T t1921 ; real_T t1922 ; real_T t1923 ; real_T t1924 ; real_T t1925 ;
real_T t1926 ; real_T t1928 ; real_T t1930 ; real_T t1931 ; real_T t1932 ;
real_T t1933 ; real_T t1934 ; real_T t1935 ; real_T t1936 ; real_T t1941 ;
real_T t1944 ; real_T t1945 ; real_T t1946 ; real_T t1949 ; real_T t1952 ;
real_T t1953 ; real_T t1956 ; real_T t1957 ; real_T t1962 ; real_T t1965 ;
real_T t1966 ; real_T t1967 ; real_T t1968 ; real_T t1969 ; real_T t1970 ;
real_T t1971 ; real_T t1972 ; real_T t1975 ; real_T t1977 ; real_T t1980 ;
real_T t1984 ; real_T t1986 ; real_T t1987 ; real_T t1988 ; real_T t1989 ;
real_T t1992 ; real_T t1994 ; real_T t1995 ; real_T t1997 ; real_T t2000 ;
real_T t2001 ; real_T t2002 ; real_T t2005 ; real_T t2007 ; real_T t2009 ;
real_T t2011 ; real_T t2012 ; real_T t2013 ; real_T t2014 ; real_T t2015 ;
real_T t2016 ; real_T t2020 ; real_T t2021 ; real_T t2025 ; real_T t2028 ;
real_T t2031 ; real_T t2032 ; real_T t2034 ; real_T t2035 ; real_T t2040 ;
real_T t2041 ; real_T t2045 ; real_T t2047 ; real_T t2049 ; real_T t2050 ;
real_T t2052 ; real_T t2053 ; real_T t2054 ; real_T t2055 ; real_T t2057 ;
real_T t2058 ; real_T t2059 ; real_T t2061 ; real_T t2064 ; real_T t2066 ;
real_T t2068 ; real_T t2071 ; real_T t2072 ; real_T t2073 ; real_T t2074 ;
real_T t2076 ; real_T t2078 ; real_T t2079 ; real_T t2080 ; real_T t2081 ;
real_T t2083 ; real_T t2084 ; real_T t2087 ; real_T t2089 ; real_T t2096 ;
real_T t2099 ; real_T t2101 ; real_T t2103 ; real_T t2104 ; real_T t2105 ;
real_T t2107 ; real_T t2111 ; real_T t2114 ; real_T t2118 ; real_T t2119 ;
real_T t2123 ; real_T t2126 ; real_T t2129 ; real_T t2130 ; real_T t2131 ;
real_T t2132 ; real_T t2133 ; real_T t2138 ; real_T t2140 ; real_T t2141 ;
real_T t2143 ; real_T t2145 ; real_T t2147 ; real_T t2148 ; real_T t2150 ;
real_T t2151 ; real_T t2152 ; real_T t2153 ; real_T t2154 ; real_T t2159 ;
real_T t2162 ; real_T t2164 ; real_T t2169 ; real_T t2171 ; real_T t2174 ;
real_T t2175 ; real_T t2176 ; real_T t2179 ; real_T t2181 ; real_T t2184 ;
real_T t2186 ; real_T t2188 ; real_T t2189 ; real_T t2190 ; real_T t2191 ;
real_T t2192 ; real_T t2194 ; real_T t2195 ; real_T t2196 ; real_T t2197 ;
real_T t2199 ; real_T t2204 ; real_T t2205 ; real_T t2207 ; real_T t2208 ;
real_T t2209 ; real_T t2212 ; real_T t2218 ; real_T t2221 ; real_T t2222 ;
real_T t2224 ; real_T t2225 ; real_T t2226 ; real_T t2227 ; real_T t2228 ;
real_T t2229 ; real_T t2231 ; real_T t2236 ; real_T t2237 ; real_T t2238 ;
real_T t2239 ; real_T t2241 ; real_T t2243 ; real_T t2245 ; real_T t2246 ;
real_T t2249 ; real_T t2251 ; real_T t2252 ; real_T t2253 ; real_T t2254 ;
real_T t2257 ; real_T t2258 ; real_T t2261 ; real_T t2262 ; real_T t2263 ;
real_T t2264 ; real_T t2265 ; real_T t2266 ; real_T t2267 ; real_T t2268 ;
real_T t2270 ; real_T t2272 ; real_T t2273 ; real_T t2274 ; real_T t2275 ;
real_T t2276 ; real_T t2278 ; real_T t2279 ; real_T t2280 ; real_T t2283 ;
real_T t2284 ; real_T t2285 ; real_T t2286 ; real_T t2287 ; real_T t2288 ;
real_T t2289 ; real_T t2292 ; real_T t2293 ; real_T t2294 ; real_T t2295 ;
real_T t2297 ; real_T t2298 ; real_T t2299 ; real_T t2301 ; real_T t2304 ;
real_T t2305 ; real_T t2307 ; real_T t2308 ; real_T t2312 ; real_T t2313 ;
real_T t2314 ; real_T t2315 ; real_T t2318 ; real_T t2320 ; real_T t2322 ;
real_T t2323 ; real_T t2325 ; real_T t2327 ; real_T t2333 ; real_T t2334 ;
real_T t2335 ; real_T t2339 ; real_T t2341 ; real_T t2342 ; real_T t2345 ;
real_T t2347 ; real_T t2348 ; real_T t2350 ; real_T t2353 ; real_T t2354 ;
real_T t2355 ; real_T t2356 ; real_T t2357 ; real_T t2358 ; real_T t2359 ;
real_T t2360 ; real_T t2361 ; real_T t2362 ; real_T t2363 ; real_T t2408 ;
real_T t2414 ; real_T t2417 ; real_T t2418 ; real_T t2422 ; real_T t2425 ;
real_T t2505 ; real_T t2532 ; real_T t2535 ; real_T t2542 ; real_T t2546 ;
real_T t2548 ; real_T t2550 ; real_T t2553 ; real_T t2562 ; real_T t2640 ;
real_T t2644 ; real_T t2646 ; real_T t2648 ; real_T t2651 ; real_T t2659 ;
real_T t2916 ; real_T t2931 ; real_T t2945 ; real_T t2961 ; real_T t2983 ;
real_T t2987 ; real_T t2990 ; real_T t3006 ; real_T t3023 ; real_T t3033 ;
real_T t3037 ; real_T t3039 ; real_T t3051 ; real_T t3068 ; real_T t3075 ;
real_T t3079 ; real_T t3082 ; real_T t3089 ; real_T t3098 ; real_T t3116 ;
real_T t3143 ; real_T t3150 ; real_T t3165 ; real_T t3180 ; real_T t3185 ;
real_T t3193 ; real_T t3200 ; real_T t3211 ; real_T t3231 ; real_T t3243 ;
real_T t3254 ; real_T t3256 ; real_T t3267 ; real_T t3272 ; real_T t3279 ;
real_T t3299 ; real_T t3314 ; real_T t3346 ; real_T t3379 ; real_T t3391 ;
real_T t3393 ; real_T t3396 ; real_T t3397 ; real_T t3398 ; real_T t3403 ;
real_T t3429 ; real_T t3655 ; real_T t3672 ; real_T t3674 ; real_T t3906 ;
real_T t3908 ; real_T t3910 ; real_T t3992 ; real_T t4002 ; real_T t95 ;
real_T zc_int103 ; real_T zc_int135 ; real_T zc_int167 ; real_T zc_int200 ;
real_T zc_int201 ; real_T zc_int21 ; real_T zc_int218 ; real_T zc_int233 ;
real_T zc_int251 ; real_T zc_int262 ; real_T zc_int263 ; real_T zc_int276 ;
real_T zc_int291 ; real_T zc_int309 ; real_T zc_int36 ; real_T zc_int37 ;
real_T zc_int48 ; real_T zc_int82 ; real_T zc_int88 ; real_T zc_int91 ;
real_T zc_int94 ; size_t t1184 [ 1 ] ; size_t t1187 [ 1 ] ; size_t t1193 [ 1
] ; size_t t126 [ 1 ] ; size_t t1604 [ 1 ] ; size_t t754 [ 1 ] ; size_t t1611
; size_t t1612 ; size_t t1613 ; int32_T M [ 218 ] ; int32_T b ; for ( b = 0 ;
b < 218 ; b ++ ) { M [ b ] = t4097 -> mM . mX [ b ] ; } U_idx_0 = t4097 -> mU
. mX [ 0 ] ; U_idx_1 = t4097 -> mU . mX [ 1 ] ; U_idx_2 = t4097 -> mU . mX [
2 ] ; U_idx_3 = t4097 -> mU . mX [ 3 ] ; U_idx_4 = t4097 -> mU . mX [ 4 ] ;
U_idx_5 = t4097 -> mU . mX [ 5 ] ; U_idx_6 = t4097 -> mU . mX [ 6 ] ; U_idx_7
= t4097 -> mU . mX [ 7 ] ; U_idx_8 = t4097 -> mU . mX [ 8 ] ; U_idx_9 = t4097
-> mU . mX [ 9 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t4097 -> mX .
mX [ b ] ; } out = t4098 -> mF ; nonscalar33 [ 0 ] = 0.0 ; nonscalar33 [ 1 ]
= 0.2 ; nonscalar33 [ 2 ] = 0.4 ; nonscalar33 [ 3 ] = 0.6 ; nonscalar33 [ 4 ]
= 0.8 ; nonscalar33 [ 5 ] = 1.0 ; nonscalar34 [ 0 ] = 243.1 ; nonscalar34 [ 1
] = 253.1 ; nonscalar34 [ 2 ] = 263.1 ; nonscalar34 [ 3 ] = 273.1 ;
nonscalar34 [ 4 ] = 283.1 ; nonscalar34 [ 5 ] = 298.1 ; nonscalar34 [ 6 ] =
313.1 ; nonscalar37 [ 0 ] = 1.0 ; nonscalar37 [ 1 ] = 1.25 ; nonscalar37 [ 2
] = 1.5 ; nonscalar37 [ 3 ] = 1.75 ; nonscalar37 [ 4 ] = 2.0 ; nonscalar38 [
0 ] = 0.0 ; nonscalar38 [ 1 ] = 188.49555921538757 ; nonscalar38 [ 2 ] =
376.99111843077515 ; U_idx_0 = - X [ 53ULL ] - U_idx_0 ; t3908 = ( ( ( real_T
) ( U_idx_0 >= 0.0 ) * U_idx_0 * 1000.0 + ( real_T ) ( U_idx_0 < 0.0 ) * X [
55ULL ] ) - 0.9 ) / 0.099999999999999978 ; if ( ( real_T ) ( U_idx_0 >= 0.0 )
* U_idx_0 * 1000.0 + ( real_T ) ( U_idx_0 < 0.0 ) * X [ 55ULL ] <= 0.9 ) {
t3908 = 0.0 ; } else { t3908 = ( real_T ) ( U_idx_0 >= 0.0 ) * U_idx_0 *
1000.0 + ( real_T ) ( U_idx_0 < 0.0 ) * X [ 55ULL ] >= 1.0 ? 1.0 : t3908 *
t3908 * 3.0 - t3908 * t3908 * t3908 * 2.0 ; } t3910 = X [ 61ULL ] * 1.0E-9 +
X [ 4ULL ] ; t3672 = ( ( X [ 4ULL ] * - 1.0E-6 + X [ 61ULL ] * -
1.0000000000000011 ) + X [ 62ULL ] * - 1.0E-6 ) + X [ 5ULL ] ; if ( X [ 92ULL
] < 0.0 ) { piece214 = X [ 92ULL ] * 17.81 + 0.043 ; } else if ( X [ 92ULL ]
<= 1.0 ) { piece214 = ( ( X [ 92ULL ] * 17.81 + 0.043 ) - X [ 92ULL ] * X [
92ULL ] * 39.85 ) + X [ 92ULL ] * X [ 92ULL ] * X [ 92ULL ] * 36.0 ; } else {
piece214 = ( X [ 92ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 93ULL ] < 0.0 )
{ piece218 = X [ 93ULL ] * 17.81 + 0.043 ; } else if ( X [ 93ULL ] <= 1.0 ) {
piece218 = ( ( X [ 93ULL ] * 17.81 + 0.043 ) - X [ 93ULL ] * X [ 93ULL ] *
39.85 ) + X [ 93ULL ] * X [ 93ULL ] * X [ 93ULL ] * 36.0 ; } else { piece218
= ( X [ 93ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 62ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = - X [ 62ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = 0.0 ; }
t1712 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 *
0.20177105219743391 / 192970.66424 ; if ( piece214 >= 0.0 ) { t3674 =
piece214 * piece214 * 0.0029 + piece214 * 0.05 ; } else { t3674 = piece214 *
0.05 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 = (
X [ 72ULL ] + X [ 78ULL ] ) / 2.0 ; t1616 = ( X [ 82ULL ] + X [ 87ULL ] ) /
2.0 ; t1195 [ 0 ] = 343.15 ; t1184 [ 0 ] = 52ULL ; t126 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 =
efOut ; tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1195 [ 0 ] = b_efOut [ 0 ]
; piece223 = pmf_exp ( pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 ) - t1195 [
0ULL ] ) ; t1632 = X [ 92ULL ] / ( piece223 == 0.0 ? 1.0E-16 : piece223 ) ;
piece223 = pmf_exp ( pmf_log ( t1616 ) - t1195 [ 0ULL ] ) ; piece232 = X [
93ULL ] / ( piece223 == 0.0 ? 1.0E-16 : piece223 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 > t1616 ) {
zc_int218 = 4.0566516249873756E-6 ; t1713 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 - t1616 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 * t1632 *
1.58E-18 / ( zc_int218 == 0.0 ? 1.0E-16 : zc_int218 ) ; } else { t1723 =
4.0566516249873756E-6 ; t1713 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 - t1616 ) *
t1616 * piece232 * 1.58E-18 / ( t1723 == 0.0 ? 1.0E-16 : t1723 ) ; } t3992 =
( ( ( piece214 * 1818.181818181818 - piece218 * 1818.181818181818 ) *
3.1649674241803613E-10 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 * t3674 /
96485.33212 ) + t1713 ) * 0.20177105219743391 ; t4002 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 *
0.022577863652674921 / 192970.66424 ; t3674 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 *
0.3583866814737065 / 385941.32848 ; piece214 = ( piece214 + piece218 ) / 2.0
; if ( piece214 >= 1.0 ) { piece218 = piece214 * 0.005139 - 0.00326 ; } else
{ piece218 = 0.0018790000000000005 ; } piece214 = piece218 *
1.6283557743720771 ; piece218 = 0.000125 / ( piece214 == 0.0 ? 1.0E-16 :
piece214 ) ; t1713 = piece223 * ( ( X [ 86ULL ] + X [ 91ULL ] ) / 2.0 ) ;
piece214 = t1713 >= 1.0E-9 ? t1713 : 1.0E-6 ; piece223 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 * ( ( X [
75ULL ] + X [ 80ULL ] ) / 2.0 ) / 1.01325 ; if ( piece223 * 1.0E-5 >= 1.0E-9
) { t1713 = piece223 * 1.0E-5 ; } else { t1713 = 1.0E-6 ; } piece223 = t1616
* ( ( X [ 85ULL ] + X [ 90ULL ] ) / 2.0 ) / 1.01325 ; if ( piece223 * 1.0E-5
>= 1.0E-9 ) { t1623 = piece223 * 1.0E-5 ; } else { t1623 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 = ( X [ 81ULL
] - t1632 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 *
7.0000000000000007E-6 / 2853.1078474192841 ) / 0.00025 ; t1616 = ( piece232 -
X [ 91ULL ] ) * ( t1616 * 7.0000000000000007E-6 / 2853.1078474192841 ) /
0.00025 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 >= 1.0 ) {
piece223 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ) *
0.021121699350046864 ; } else { piece223 = 0.0 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 <= 13986.0 )
{ t95 = pmf_log ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 / 14000.0 ) ;
} else { t95 = - 6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; } t3655 = t95 * - 0.014785189545032806 ;
t1737 = pmf_sqrt ( t1623 ) * t1713 ; t1632 = pmf_log ( t1737 / ( piece214 ==
0.0 ? 1.0E-16 : piece214 ) ) * 0.014785189545032806 + 1.228891453185164 ;
piece232 = piece218 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ; t1632 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 * ( ( ( t1632
- piece223 ) - piece232 * 0.01 ) - t3655 ) * 11.200000000000001 ; t1195 [
0ULL ] = X [ 96ULL ] >= 0.0 ? 343.15 : X [ 15ULL ] ;
tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = d_efOut [
0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 =
t1608_idx_0 ; t1195 [ 0ULL ] = X [ 98ULL ] >= 0.0 ? 343.15 : X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = f_efOut [
0 ] ; t1713 = t1608_idx_0 ; t1195 [ 0ULL ] = X [ 100ULL ] >= 0.0 ? 343.15 : X
[ 15ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , &
g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t86 = g_efOut ; tlu2_1d_linear_linear_value ( &
h_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = h_efOut [ 0 ] ; t1623 = t1608_idx_0 ; t1195 [ 0ULL ] = X [
104ULL ] >= 0.0 ? 343.15 : X [ 9ULL ] ; tlu2_linear_linear_prelookup ( &
i_efOut . mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [
0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = i_efOut ;
tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] ,
& t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = j_efOut [ 0 ] ; t95 =
t1608_idx_0 ; t1631 = - X [ 96ULL ] + X [ 105ULL ] ; t1195 [ 0ULL ] = t1631
>= 0.0 ? 343.15 : X [ 15ULL ] ; tlu2_linear_linear_prelookup ( & k_efOut .
mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184
[ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = k_efOut ; tlu2_1d_linear_linear_value (
& l_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = l_efOut [ 0 ] ; t3906 = t1608_idx_0 ; t1636 = pmf_sqrt (
X [ 122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 ) ; t1639 = pmf_sqrt ( X
[ 122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 ) ; t1644 = pmf_sqrt ( X [
122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 ) ; if ( X [ 127ULL ] <= 0.0
) { t1647 = 0.0 ; } else { t1647 = X [ 127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ;
} if ( X [ 128ULL ] <= 0.0 ) { t1714 = 0.0 ; } else { t1714 = X [ 128ULL ] >=
1.0 ? 1.0 : X [ 128ULL ] ; } t1715 = ( ( ( 1.0 - t1647 ) - t1714 ) *
296.802103844292 + t1647 * 461.523 ) + t1714 * 4124.48151675695 ; if ( X [
21ULL ] <= 0.0 ) { t1716 = 0.0 ; } else { t1716 = X [ 21ULL ] >= 1.0 ? 1.0 :
X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) { t1717 = 0.0 ; } else { t1717 = X
[ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } t1718 = ( ( ( 1.0 - t1716 ) - t1717
) * 296.802103844292 + t1716 * 461.523 ) + t1717 * 4124.48151675695 ;
zc_int233 = ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) -
X [ 135ULL ] / ( X [ 136ULL ] == 0.0 ? 1.0E-16 : X [ 136ULL ] ) ) * X [
134ULL ] * t1718 / 7.8539816339744827E-5 ; if ( X [ 135ULL ] <=
216.59999999999997 ) { t1720 = 216.59999999999997 ; } else { t1720 = X [
135ULL ] >= 623.15 ? 623.15 : X [ 135ULL ] ; } intrm_sf_mf_1284 = t1720 *
t1720 ; zc_int218 = ( ( ( 1074.1165326382641 + t1720 * - 0.2214565261064495 )
+ intrm_sf_mf_1284 * 0.00037212980109014541 ) * ( ( 1.0 - t1716 ) - t1717 ) +
( ( 1479.6504774711011 + t1720 * 1.2002114337048222 ) + intrm_sf_mf_1284 * -
0.00038614513167823636 ) * t1716 ) + ( ( 12825.281119789837 + t1720 *
6.9647057412840034 ) + intrm_sf_mf_1284 * - 0.0070524868246844051 ) * t1717 ;
t1744 = zc_int218 - t1718 ; t1720 = zc_int218 / ( t1744 == 0.0 ? 1.0E-16 :
t1744 ) ; zc_int218 = pmf_sqrt ( zc_int233 * zc_int233 *
9.999999999999999E-14 + fabs ( X [ 135ULL ] * t1720 * t1718 ) * 1.0E-9 ) ; if
( X [ 137ULL ] <= 0.0 ) { intrm_sf_mf_1284 = 0.0 ; } else { intrm_sf_mf_1284
= X [ 137ULL ] >= 1.0 ? 1.0 : X [ 137ULL ] ; } if ( X [ 138ULL ] <= 0.0 ) {
t1723 = 0.0 ; } else { t1723 = X [ 138ULL ] >= 1.0 ? 1.0 : X [ 138ULL ] ; }
t1195 [ 0ULL ] = X [ 19ULL ] ; tlu2_linear_nearest_prelookup ( & m_efOut .
mField0 [ 0ULL ] , & m_efOut . mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184
[ 0ULL ] , & t126 [ 0ULL ] ) ; t86 = m_efOut ; tlu2_1d_linear_nearest_value (
& n_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = n_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & o_efOut
[ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = o_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & p_efOut [
0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = p_efOut [ 0 ] ; zc_int36 = ( ( ( 1.0 - intrm_sf_mf_1284 ) -
t1723 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_1284 ) + t1603_idx_0 *
t1723 ; t2916 = X [ 136ULL ] * X [ 136ULL ] * t1720 ; t1725 = - pmf_sqrt (
fabs ( t2916 / ( t1718 == 0.0 ? 1.0E-16 : t1718 ) / ( X [ 135ULL ] == 0.0 ?
1.0E-16 : X [ 135ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t1725 >= 0.0 ) {
t1726 = t1725 * 100000.0 ; } else { t1726 = - t1725 * 100000.0 ; } t1749 =
zc_int36 * 7.8539816339744827E-5 ; t112 = t1726 * 0.01 / ( t1749 == 0.0 ?
1.0E-16 : t1749 ) ; t1751 = X [ 19ULL ] * t1718 ; piece14 = X [ 20ULL ] / (
t1751 == 0.0 ? 1.0E-16 : t1751 ) ; t3089 = piece14 * 1.5707963267948965E-8 ;
zc_int37 = t1725 * zc_int36 * 35.2 / ( t3089 == 0.0 ? 1.0E-16 : t3089 ) ;
t1730 = t112 >= 1.0 ? t112 : 1.0 ; t1754 = pmf_log10 ( 6.9 / ( t1730 == 0.0 ?
1.0E-16 : t1730 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1730 ==
0.0 ? 1.0E-16 : t1730 ) + 0.00017169489553429715 ) * 3.24 ; t1756 = piece14 *
1.2337005501361697E-10 ; t1726 = t1725 * t1726 * ( 1.0 / ( t1754 == 0.0 ?
1.0E-16 : t1754 ) ) * 0.55 / ( t1756 == 0.0 ? 1.0E-16 : t1756 ) ; t1730 = (
t112 - 2000.0 ) / 2000.0 ; t1731 = t1730 * t1730 * 3.0 - t1730 * t1730 *
t1730 * 2.0 ; if ( t112 <= 2000.0 ) { t1730 = zc_int37 * 1.0E-5 ; } else if (
t112 >= 4000.0 ) { t1730 = t1726 * 1.0E-5 ; } else { t1730 = ( ( 1.0 - t1731
) * zc_int37 + t1726 * t1731 ) * 1.0E-5 ; } zc_int218 = X [ 134ULL ] *
zc_int218 / 7.8539816339744827E-5 * 0.00031622776601683789 + t1730 ; t1726 =
X [ 112ULL ] - X [ 20ULL ] ; zc_int37 = - ( ( X [ 19ULL ] / ( X [ 20ULL ] ==
0.0 ? 1.0E-16 : X [ 20ULL ] ) - X [ 139ULL ] / ( X [ 140ULL ] == 0.0 ?
1.0E-16 : X [ 140ULL ] ) ) * X [ 122ULL ] * t1718 ) / 7.8539816339744827E-5 ;
if ( X [ 139ULL ] <= 216.59999999999997 ) { t1730 = 216.59999999999997 ; }
else { t1730 = X [ 139ULL ] >= 623.15 ? 623.15 : X [ 139ULL ] ; } zc_int262 =
t1730 * t1730 ; t1731 = ( ( ( 1074.1165326382641 + t1730 * -
0.2214565261064495 ) + zc_int262 * 0.00037212980109014541 ) * ( ( 1.0 - t1716
) - t1717 ) + ( ( 1479.6504774711011 + t1730 * 1.2002114337048222 ) +
zc_int262 * - 0.00038614513167823636 ) * t1716 ) + ( ( 12825.281119789837 +
t1730 * 6.9647057412840034 ) + zc_int262 * - 0.0070524868246844051 ) * t1717
; t1764 = t1731 - t1718 ; t1730 = t1731 / ( t1764 == 0.0 ? 1.0E-16 : t1764 )
; t1731 = pmf_sqrt ( zc_int37 * zc_int37 * 9.999999999999999E-14 + fabs ( X [
139ULL ] * t1730 * t1718 ) * 1.0E-9 ) ; t1765 = X [ 140ULL ] * X [ 140ULL ] *
t1730 ; zc_int262 = - pmf_sqrt ( fabs ( t1765 / ( t1718 == 0.0 ? 1.0E-16 :
t1718 ) / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( zc_int262 >= 0.0 ) { t1733 = zc_int262 *
100000.0 ; } else { t1733 = - zc_int262 * 100000.0 ; } t122 = t1733 * 0.01 /
( t1749 == 0.0 ? 1.0E-16 : t1749 ) ; t1735 = zc_int262 * zc_int36 * 35.2 / (
t3089 == 0.0 ? 1.0E-16 : t3089 ) ; t1736 = t122 >= 1.0 ? t122 : 1.0 ; t1772 =
pmf_log10 ( 6.9 / ( t1736 == 0.0 ? 1.0E-16 : t1736 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t1736 == 0.0 ? 1.0E-16 : t1736 ) +
0.00017169489553429715 ) * 3.24 ; t1733 = zc_int262 * t1733 * ( 1.0 / ( t1772
== 0.0 ? 1.0E-16 : t1772 ) ) * 0.55 / ( t1756 == 0.0 ? 1.0E-16 : t1756 ) ;
t1736 = ( t122 - 2000.0 ) / 2000.0 ; t3429 = t1736 * t1736 * 3.0 - t1736 *
t1736 * t1736 * 2.0 ; if ( t122 <= 2000.0 ) { t1736 = t1735 * 1.0E-5 ; } else
if ( t122 >= 4000.0 ) { t1736 = t1733 * 1.0E-5 ; } else { t1736 = ( ( 1.0 -
t3429 ) * t1735 + t1733 * t3429 ) * 1.0E-5 ; } t1731 = - ( X [ 122ULL ] *
t1731 ) / 7.8539816339744827E-5 * 0.00031622776601683789 + t1736 ; t1733 = X
[ 131ULL ] - X [ 20ULL ] ; t1195 [ 0ULL ] = X [ 19ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = r_efOut [
0 ] ; t1735 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & s_efOut [ 0ULL ]
, & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0
= s_efOut [ 0 ] ; t1736 = t1608_idx_0 ; if ( 1.0 - X [ 21ULL ] >= 0.01 ) {
t1739 = 1.0 - X [ 21ULL ] ; } else if ( 1.0 - X [ 21ULL ] >= - 0.1 ) { t1739
= pmf_exp ( ( ( 1.0 - X [ 21ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1739
= 1.6701700790245661E-7 ; } t3429 = X [ 22ULL ] / ( t1739 == 0.0 ? 1.0E-16 :
t1739 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & t_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1184 [ 0ULL ] , & t126 [
0ULL ] ) ; t1608_idx_0 = t_efOut [ 0 ] ; t1743 = pmf_exp ( pmf_log ( X [
20ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t1743 >= 1.0 ) { t1779 = ( t1743
- 1.0 ) * 461.523 + t3429 ; t1744 = t3429 / ( t1779 == 0.0 ? 1.0E-16 : t1779
) ; } else { t1744 = 1.0 ; } t1781 = t1744 * 0.01 ; t3429 = ( X [ 21ULL ] -
t1744 ) / ( t1781 == 0.0 ? 1.0E-16 : t1781 ) ; if ( X [ 21ULL ] - t1744 <=
0.0 ) { t3429 = 0.0 ; } else if ( X [ 21ULL ] - t1744 >= t1744 * 0.01 ) {
t3429 = X [ 21ULL ] - t1744 ; } else { t3429 = ( X [ 21ULL ] - t1744 ) * (
t3429 * t3429 * 3.0 - t3429 * t3429 * t3429 * 2.0 ) ; } piece14 = piece14 *
t3429 * 7.8539816339744827E-5 / 0.001 ; t3429 = ( t1735 - t1736 ) * piece14 ;
tlu2_1d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = u_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = v_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & w_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = w_efOut [ 0 ] ; t1736 =
( ( ( 1.0 - intrm_sf_mf_1284 ) - t1723 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1284 ) + t1603_idx_0 * t1723 ; t1744 = ( X [ 115ULL ] - X [ 19ULL
] ) * ( t1736 * 0.031415926535897927 / 0.01 ) ; piece218 = ( X [ 134ULL ] - (
- X [ 122ULL ] ) ) / 2.0 ; if ( X [ 133ULL ] <= 0.0 ) { t1752 = 0.0 ; } else
{ t1752 = X [ 133ULL ] >= 1.0 ? 1.0 : X [ 133ULL ] ; } if ( X [ 132ULL ] <=
0.0 ) { t1754 = 0.0 ; } else { t1754 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL
] ; } t1755 = ( ( ( 1.0 - t1752 ) - t1754 ) * 296.802103844292 + t1752 *
461.523 ) + t1754 * 4124.48151675695 ; zc_int167 = X [ 132ULL ] *
4124.48151675695 / ( t1755 == 0.0 ? 1.0E-16 : t1755 ) ; if ( zc_int167 <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = zc_int167 >=
1.0 ? 1.0 : zc_int167 ; } zc_int167 = X [ 133ULL ] * 461.523 / ( t1755 == 0.0
? 1.0E-16 : t1755 ) ; if ( zc_int167 <= 0.0 ) { t1763 = 0.0 ; } else { t1763
= zc_int167 >= 1.0 ? 1.0 : zc_int167 ; } t1195 [ 0ULL ] = X [ 130ULL ] ;
tlu2_linear_nearest_prelookup ( & x_efOut . mField0 [ 0ULL ] , & x_efOut .
mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t77 = x_efOut ; tlu2_1d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = y_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & ab_efOut [ 0ULL ] , & t77 . mField0 [
0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ab_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & bb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL
] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = bb_efOut [ 0 ] ; t1789 =
( ( ( ( ( 1.0 - t1763 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * t1608_idx_0 +
t1599_idx_0 * t1763 ) + t1603_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) + zc_int36 ) /
2.0 * 7.8539816339744827E-5 ; zc_int309 = - ( piece218 <= 0.0 ? piece218 :
0.0 ) * 0.01 / ( t1789 == 0.0 ? 1.0E-16 : t1789 ) ; zc_int167 = zc_int309 >=
0.0 ? zc_int309 : - zc_int309 ; t1764 = zc_int167 > 1000.0 ? zc_int167 :
1000.0 ; t1790 = pmf_log10 ( 6.9 / ( t1764 == 0.0 ? 1.0E-16 : t1764 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1764 == 0.0 ? 1.0E-16 : t1764
) + 0.00017169489553429715 ) * 3.24 ; t1766 = 1.0 / ( t1790 == 0.0 ? 1.0E-16
: t1790 ) ; tlu2_1d_linear_nearest_value ( & cb_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = cb_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & db_efOut [ 0ULL ] , & t86 . mField0
[ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = db_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & eb_efOut [ 0ULL ] , & t86 . mField0 [
0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = eb_efOut [ 0
] ; t1768 = ( ( ( 1.0 - intrm_sf_mf_1284 ) - t1723 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_1284 ) + t1603_idx_0 * t1723 ;
tlu2_1d_linear_nearest_value ( & fb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = fb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = gb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = hb_efOut [ 0 ] ;
intrm_sf_mf_1284 = ( ( ( 1.0 - t1763 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * t1608_idx_0 +
t1599_idx_0 * t1763 ) + t1603_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; t1791 = t1768 +
intrm_sf_mf_1284 ; if ( ( pmf_pow ( t1791 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1766 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1795 = ( pmf_pow ( (
t1768 + intrm_sf_mf_1284 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1766 / 8.0 ) * 12.7 + 1.0 ; t1723 = ( t1764 - 1000.0 ) * ( t1766 / 8.0 ) * (
( t1768 + intrm_sf_mf_1284 ) / 2.0 ) / ( t1795 == 0.0 ? 1.0E-16 : t1795 ) ; }
else { t1723 = ( t1764 - 1000.0 ) * ( t1766 / 8.0 ) * ( ( t1768 +
intrm_sf_mf_1284 ) / 2.0 ) / 1.0E-6 ; } t1764 = ( zc_int167 - 2000.0 ) /
2000.0 ; t1766 = t1764 * t1764 * 3.0 - t1764 * t1764 * t1764 * 2.0 ; if (
zc_int167 <= 2000.0 ) { t1764 = 3.66 ; } else if ( zc_int167 >= 4000.0 ) {
t1764 = t1723 ; } else { t1764 = ( 1.0 - t1766 ) * 3.66 + t1723 * t1766 ; }
t1802 = t1791 / 2.0 ; if ( zc_int167 > t1764 * 0.031415926535897927 /
7.8539816339744827E-5 / ( t1802 == 0.0 ? 1.0E-16 : t1802 ) / 30.0 ) { U_idx_0
= ( t1768 + intrm_sf_mf_1284 ) / 2.0 ; t1723 = t1764 * 0.031415926535897927 /
( zc_int167 == 0.0 ? 1.0E-16 : zc_int167 ) / 7.8539816339744827E-5 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else { t1723 = 30.0 ; }
intrm_sf_mf_1284 = ( X [ 115ULL ] - X [ 130ULL ] ) * ( 1.0 - pmf_exp ( -
t1723 ) ) ; tlu2_1d_linear_nearest_value ( & ib_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ib_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & jb_efOut [ 0ULL ] , & t77 . mField0
[ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = jb_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & kb_efOut [ 0ULL ] , & t77 . mField0 [
0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField12 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = kb_efOut [ 0
] ; t1723 = zc_int309 * 7.8539816339744827E-5 / 0.01 * ( t1791 / 2.0 ) * ( (
t1736 + ( ( ( ( 1.0 - t1763 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * t1608_idx_0 +
t1599_idx_0 * t1763 ) + t1603_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) ) / 2.0 ) *
intrm_sf_mf_1284 ; if ( X [ 114ULL ] <= 0.0 ) { intrm_sf_mf_1284 = 0.0 ; }
else { intrm_sf_mf_1284 = X [ 114ULL ] >= 1.0 ? 1.0 : X [ 114ULL ] ; } if ( X
[ 113ULL ] <= 0.0 ) { zc_int309 = 0.0 ; } else { zc_int309 = X [ 113ULL ] >=
1.0 ? 1.0 : X [ 113ULL ] ; } zc_int167 = ( ( ( 1.0 - intrm_sf_mf_1284 ) -
zc_int309 ) * 296.802103844292 + intrm_sf_mf_1284 * 461.523 ) + zc_int309 *
4124.48151675695 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv
= X [ 114ULL ] * 461.523 / ( zc_int167 == 0.0 ? 1.0E-16 : zc_int167 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv <= 0.0 ) { t1763 =
0.0 ; } else { t1763 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = X [ 113ULL ] *
4124.48151675695 / ( zc_int167 == 0.0 ? 1.0E-16 : zc_int167 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv <= 0.0 ) { t1764 =
0.0 ; } else { t1764 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; } t1195 [ 0ULL ]
= X [ 111ULL ] ; tlu2_linear_nearest_prelookup ( & lb_efOut . mField0 [ 0ULL
] , & lb_efOut . mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t77 = lb_efOut ; tlu2_1d_linear_nearest_value ( &
mb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = mb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
nb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = nb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ob_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = ob_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = ( ( ( 1.0 - t1763
) - t1764 ) * t1608_idx_0 + t1599_idx_0 * t1763 ) + t1603_idx_0 * t1764 ;
tlu2_1d_linear_nearest_value ( & pb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = pb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = qb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = rb_efOut [ 0 ] ; t1766 =
( ( ( 1.0 - t1763 ) - t1764 ) * t1608_idx_0 + t1599_idx_0 * t1763 ) +
t1603_idx_0 * t1764 ; t1770 = piece218 >= 0.0 ? piece218 : 0.0 ;
tlu2_1d_linear_nearest_value ( & sb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = sb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tb_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = tb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ub_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ub_efOut [ 0 ] ; piece218
= ( ( ( 1.0 - t1763 ) - t1764 ) * t1608_idx_0 + t1599_idx_0 * t1763 ) +
t1603_idx_0 * t1764 ; t1816 = ( zc_int36 + piece218 ) / 2.0 *
7.8539816339744827E-5 ; t1763 = t1770 * 0.01 / ( t1816 == 0.0 ? 1.0E-16 :
t1816 ) ; t1764 = t1763 >= 0.0 ? t1763 : - t1763 ; t1770 = t1764 > 1000.0 ?
t1764 : 1000.0 ; intrm_sf_mf_536 = pmf_log10 ( 6.9 / ( t1770 == 0.0 ? 1.0E-16
: t1770 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1770 == 0.0 ?
1.0E-16 : t1770 ) + 0.00017169489553429715 ) * 3.24 ; t1772 = 1.0 / (
intrm_sf_mf_536 == 0.0 ? 1.0E-16 : intrm_sf_mf_536 ) ; t1818 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t1768 ; if ( (
pmf_pow ( t1818 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1772 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1822 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t1768 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1772 / 8.0 ) * 12.7 + 1.0 ; t1773
= ( t1770 - 1000.0 ) * ( t1772 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t1768 ) / 2.0 ) /
( t1822 == 0.0 ? 1.0E-16 : t1822 ) ; } else { t1773 = ( t1770 - 1000.0 ) * (
t1772 / 8.0 ) * ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv
+ t1768 ) / 2.0 ) / 1.0E-6 ; } t1770 = ( t1764 - 2000.0 ) / 2000.0 ; t1772 =
t1770 * t1770 * 3.0 - t1770 * t1770 * t1770 * 2.0 ; if ( t1764 <= 2000.0 ) {
t1770 = 3.66 ; } else if ( t1764 >= 4000.0 ) { t1770 = t1773 ; } else { t1770
= ( 1.0 - t1772 ) * 3.66 + t1773 * t1772 ; } t1829 = t1818 / 2.0 ; if ( t1764
> t1770 * 0.031415926535897927 / 7.8539816339744827E-5 / ( t1829 == 0.0 ?
1.0E-16 : t1829 ) / 30.0 ) { t1835 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t1768 ) / 2.0 ;
t1772 = t1770 * 0.031415926535897927 / ( t1764 == 0.0 ? 1.0E-16 : t1764 ) /
7.8539816339744827E-5 / ( t1835 == 0.0 ? 1.0E-16 : t1835 ) ; } else { t1772 =
30.0 ; } t1764 = ( X [ 115ULL ] - X [ 111ULL ] ) * ( 1.0 - pmf_exp ( - t1772
) ) ; t1763 = t1723 + t1763 * 7.8539816339744827E-5 / 0.01 * ( t1818 / 2.0 )
* ( ( t1766 + t1736 ) / 2.0 ) * t1764 ; t1723 = pmf_sqrt ( X [ 134ULL ] * X [
134ULL ] + 2.0360111955237585E-13 ) ; t1736 = pmf_sqrt ( X [ 134ULL ] * X [
134ULL ] + 2.3237892571262758E-14 ) ; t1764 = pmf_sqrt ( X [ 134ULL ] * X [
134ULL ] + 1.6409606283812411E-14 ) ; t1768 = pmf_sqrt ( X [ 122ULL ] * X [
122ULL ] + 2.0360111955237585E-13 ) ; t1770 = pmf_sqrt ( X [ 122ULL ] * X [
122ULL ] + 2.3237892571262758E-14 ) ; t1772 = pmf_sqrt ( X [ 122ULL ] * X [
122ULL ] + 1.6409606283812411E-14 ) ; tlu2_1d_linear_linear_value ( &
vb_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = vb_efOut [ 0 ] ; t1773 = t1608_idx_0 ;
tlu2_1d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = wb_efOut [ 0 ] ; t1776 = -
X [ 123ULL ] + X [ 145ULL ] ; t1777 = ( - X [ 122ULL ] + X [ 134ULL ] ) -
piece14 * 100000.0 ; t1778 = ( - X [ 124ULL ] + X [ 146ULL ] ) - piece14 *
100000.0 ; t1779 = ( ( ( 1.0 - t1716 ) - t1717 ) * t1773 + t1735 * t1716 ) +
t1608_idx_0 * t1717 ; t1781 = t1773 - X [ 19ULL ] * 0.296802103844292 ; t1773
= t1608_idx_0 - X [ 19ULL ] * 4.12448151675695 ; t1775 = t1735 - X [ 19ULL ]
* 0.461523 ; t1735 = U_idx_1 * 0.031415926535897927 ; if ( t1735 * 0.0001 <=
7.8539816339744857E-13 ) { t1782 = 7.8539816339744857E-13 ; } else if ( t1735
* 0.0001 >= 3.1415926535897929E-6 ) { t1782 = 3.1415926535897929E-6 ; } else
{ t1782 = t1735 * 0.0001 ; } t1735 = t1782 / 7.8539816339744827E-5 ; if ( X [
154ULL ] <= 0.0 ) { t1783 = 0.0 ; } else { t1783 = X [ 154ULL ] >= 1.0 ? 1.0
: X [ 154ULL ] ; } if ( X [ 155ULL ] <= 0.0 ) { intrm_sf_mf_413 = 0.0 ; }
else { intrm_sf_mf_413 = X [ 155ULL ] >= 1.0 ? 1.0 : X [ 155ULL ] ; } t1785 =
( ( ( 1.0 - t1783 ) - intrm_sf_mf_413 ) * 296.802103844292 + t1783 * 461.523
) + intrm_sf_mf_413 * 4124.48151675695 ; t1840 = X [ 152ULL ] * t1785 ; t1786
= X [ 153ULL ] / ( t1840 == 0.0 ? 1.0E-16 : t1840 ) ; zc_int48 = X [ 153ULL ]
/ ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) * ( X [ 156ULL ] / ( X [
152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ; intrm_sf_mf_218 = X [ 153ULL ]
/ 1.01325 * ( X [ 157ULL ] / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] )
) ; if ( X [ 122ULL ] > 0.0 ) { t1789 = ( t1735 + 1.0 ) * ( 1.0 - t1735 *
zc_int48 ) * ( X [ 122ULL ] / 0.64 / ( t1782 == 0.0 ? 1.0E-16 : t1782 ) * ( X
[ 122ULL ] / 0.64 / ( t1782 == 0.0 ? 1.0E-16 : t1782 ) ) / 2.0 / ( t1786 ==
0.0 ? 1.0E-16 : t1786 ) ) * 9.9999999999999991E-11 ; } else if ( X [ 122ULL ]
< 0.0 ) { t1789 = ( t1735 + 1.0 ) * ( 1.0 - t1735 * intrm_sf_mf_218 ) * ( X [
122ULL ] / 0.64 / ( t1782 == 0.0 ? 1.0E-16 : t1782 ) * ( X [ 122ULL ] / 0.64
/ ( t1782 == 0.0 ? 1.0E-16 : t1782 ) ) / 2.0 / ( t1786 == 0.0 ? 1.0E-16 :
t1786 ) ) * 9.9999999999999991E-11 ; } else { t1789 = 0.0 ; } t1791 = ( X [
131ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t1790 = ( 1.0 - t1735 )
* ( 1.0 - t1735 ) ; intrm_sf_mf_199 = t1791 * t1790 ; intrm_sf_mf_173 = (
t1735 + 1.0 ) * ( 1.0 - t1735 * zc_int48 ) - ( 1.0 - t1735 * intrm_sf_mf_218
) * t1735 * 2.0 ; t1794 = ( X [ 131ULL ] - 1.01325 ) * ( intrm_sf_mf_173 >=
t1790 ? intrm_sf_mf_173 : t1790 ) ; intrm_sf_mf_173 = ( X [ 131ULL ] -
1.01325 ) / ( t1791 == 0.0 ? 1.0E-16 : t1791 ) ; t1795 = intrm_sf_mf_173 *
intrm_sf_mf_173 * 3.0 - intrm_sf_mf_173 * intrm_sf_mf_173 * intrm_sf_mf_173 *
2.0 ; if ( X [ 131ULL ] - 1.01325 <= 0.0 ) { intrm_sf_mf_173 =
intrm_sf_mf_199 ; } else if ( X [ 131ULL ] - 1.01325 >= t1791 ) {
intrm_sf_mf_173 = t1794 ; } else { intrm_sf_mf_173 = ( 1.0 - t1795 ) *
intrm_sf_mf_199 + t1794 * t1795 ; } t1794 = ( t1735 + 1.0 ) * ( 1.0 - t1735 *
intrm_sf_mf_218 ) - ( 1.0 - t1735 * zc_int48 ) * t1735 * 2.0 ; t1735 = (
1.01325 - X [ 131ULL ] ) * ( t1794 >= t1790 ? t1794 : t1790 ) ; zc_int48 = (
1.01325 - X [ 131ULL ] ) / ( t1791 == 0.0 ? 1.0E-16 : t1791 ) ;
intrm_sf_mf_218 = zc_int48 * zc_int48 * 3.0 - zc_int48 * zc_int48 * zc_int48
* 2.0 ; if ( 1.01325 - X [ 131ULL ] <= 0.0 ) { zc_int48 = intrm_sf_mf_199 ; }
else if ( 1.01325 - X [ 131ULL ] >= t1791 ) { zc_int48 = t1735 ; } else {
zc_int48 = ( 1.0 - intrm_sf_mf_218 ) * intrm_sf_mf_199 + t1735 *
intrm_sf_mf_218 ; } if ( X [ 131ULL ] > 1.01325 ) { t1735 = intrm_sf_mf_173 ;
} else { t1735 = X [ 131ULL ] < 1.01325 ? zc_int48 : intrm_sf_mf_199 ; } if (
X [ 152ULL ] <= 216.59999999999997 ) { zc_int48 = 216.59999999999997 ; } else
{ zc_int48 = X [ 152ULL ] >= 623.15 ? 623.15 : X [ 152ULL ] ; } t1796 =
zc_int48 * zc_int48 ; intrm_sf_mf_218 = ( ( ( 1074.1165326382641 + zc_int48 *
- 0.2214565261064495 ) + t1796 * 0.00037212980109014541 ) * ( ( 1.0 - t1783 )
- intrm_sf_mf_413 ) + ( ( 1479.6504774711011 + zc_int48 * 1.2002114337048222
) + t1796 * - 0.00038614513167823636 ) * t1783 ) + ( ( 12825.281119789837 +
zc_int48 * 6.9647057412840034 ) + t1796 * - 0.0070524868246844051 ) *
intrm_sf_mf_413 ; U_idx_0 = intrm_sf_mf_218 - t1785 ; t1864 = X [ 153ULL ] *
X [ 153ULL ] * ( intrm_sf_mf_218 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) ;
zc_int48 = pmf_sqrt ( fabs ( t1864 / ( t1785 == 0.0 ? 1.0E-16 : t1785 ) / ( X
[ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ) * t1782 * 0.64 ; t1867 =
t1786 * 2.0 ; t1786 = ( X [ 131ULL ] - 1.01325 ) * pmf_sqrt ( fabs ( t1867 /
( t1735 == 0.0 ? 1.0E-16 : t1735 ) ) ) * t1782 * 0.64 ; t1195 [ 0ULL ] = X [
23ULL ] ; tlu2_linear_linear_prelookup ( & xb_efOut . mField0 [ 0ULL ] , &
xb_efOut . mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t70 = xb_efOut ; tlu2_1d_linear_linear_value ( &
yb_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = yb_efOut [ 0 ] ; intrm_sf_mf_218 = t1608_idx_0 ;
tlu2_1d_linear_linear_value ( & ac_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ac_efOut [ 0 ] ; t1790 =
t1608_idx_0 ; if ( X [ 26ULL ] <= 0.0 ) { intrm_sf_mf_199 = 0.0 ; } else {
intrm_sf_mf_199 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ]
<= 0.0 ) { intrm_sf_mf_173 = 0.0 ; } else { intrm_sf_mf_173 = X [ 25ULL ] >=
1.0 ? 1.0 : X [ 25ULL ] ; } t1794 = ( ( ( 1.0 - intrm_sf_mf_199 ) -
intrm_sf_mf_173 ) * 296.802103844292 + intrm_sf_mf_199 * 461.523 ) +
intrm_sf_mf_173 * 4124.48151675695 ; t1869 = X [ 23ULL ] * t1794 ; if ( 1.0 -
X [ 26ULL ] >= 0.01 ) { t1796 = 1.0 - X [ 26ULL ] ; } else if ( 1.0 - X [
26ULL ] >= - 0.1 ) { t1796 = pmf_exp ( ( ( 1.0 - X [ 26ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t1796 = 1.6701700790245661E-7 ; } t1797 = X [ 25ULL
] / ( t1796 == 0.0 ? 1.0E-16 : t1796 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t70
. mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
bc_efOut [ 0 ] ; t1798 = pmf_exp ( pmf_log ( X [ 24ULL ] * 100000.0 ) -
t1608_idx_0 ) ; if ( t1798 >= 1.0 ) { zc_int135 = ( t1798 - 1.0 ) * 461.523 +
t1797 ; t1799 = t1797 / ( zc_int135 == 0.0 ? 1.0E-16 : zc_int135 ) ; } else {
t1799 = 1.0 ; } t111 = t1799 * 0.01 ; t1797 = ( X [ 26ULL ] - t1799 ) / (
t111 == 0.0 ? 1.0E-16 : t111 ) ; if ( X [ 26ULL ] - t1799 <= 0.0 ) { t1797 =
0.0 ; } else if ( X [ 26ULL ] - t1799 >= t1799 * 0.01 ) { t1797 = X [ 26ULL ]
- t1799 ; } else { t1797 = ( X [ 26ULL ] - t1799 ) * ( t1797 * t1797 * 3.0 -
t1797 * t1797 * t1797 * 2.0 ) ; } t1795 = X [ 24ULL ] / ( t1869 == 0.0 ?
1.0E-16 : t1869 ) * t1797 * 0.12 / 0.001 ; t1797 = ( intrm_sf_mf_218 - t1790
) * t1795 ; t1790 = pmf_sqrt ( X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) ; t1799 = pmf_sqrt ( X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) ; t1801 = pmf_sqrt ( X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) ; tlu2_1d_linear_linear_value ( & cc_efOut [ 0ULL ]
, & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0
= cc_efOut [ 0 ] ; t1802 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( &
dc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = dc_efOut [ 0 ] ; t1805 = X [ 172ULL ] - t1795 * 100000.0 ;
t1806 = X [ 174ULL ] - t1795 * 100000.0 ; t1807 = ( ( ( 1.0 - intrm_sf_mf_199
) - intrm_sf_mf_173 ) * t1802 + intrm_sf_mf_218 * intrm_sf_mf_199 ) +
t1608_idx_0 * intrm_sf_mf_173 ; t1809 = t1802 - X [ 23ULL ] *
0.296802103844292 ; t1802 = t1608_idx_0 - X [ 23ULL ] * 4.12448151675695 ;
t1803 = intrm_sf_mf_218 - X [ 23ULL ] * 0.461523 ; if ( X [ 29ULL ] <= 0.0 )
{ intrm_sf_mf_218 = 0.0 ; } else { intrm_sf_mf_218 = X [ 29ULL ] >= 1.0 ? 1.0
: X [ 29ULL ] ; } if ( X [ 30ULL ] <= 0.0 ) { t1811 = 0.0 ; } else { t1811 =
X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } t1812 = ( ( ( 1.0 -
intrm_sf_mf_218 ) - t1811 ) * 296.802103844292 + intrm_sf_mf_218 * 461.523 )
+ t1811 * 4124.48151675695 ; t1813 = - ( ( X [ 27ULL ] / ( X [ 28ULL ] == 0.0
? 1.0E-16 : X [ 28ULL ] ) - X [ 182ULL ] / ( X [ 183ULL ] == 0.0 ? 1.0E-16 :
X [ 183ULL ] ) ) * X [ 172ULL ] * t1812 ) / 7.8539816339744827E-5 ; if ( X [
182ULL ] <= 216.59999999999997 ) { t1814 = 216.59999999999997 ; } else {
t1814 = X [ 182ULL ] >= 623.15 ? 623.15 : X [ 182ULL ] ; } t1816 = t1814 *
t1814 ; t106 = ( ( ( 1074.1165326382641 + t1814 * - 0.2214565261064495 ) +
t1816 * 0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_218 ) - t1811 ) + (
( 1479.6504774711011 + t1814 * 1.2002114337048222 ) + t1816 * -
0.00038614513167823636 ) * intrm_sf_mf_218 ) + ( ( 12825.281119789837 + t1814
* 6.9647057412840034 ) + t1816 * - 0.0070524868246844051 ) * t1811 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 = t106 -
t1812 ; t1814 = t106 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ) ;
t106 = pmf_sqrt ( t1813 * t1813 * 9.999999999999999E-14 + fabs ( X [ 182ULL ]
* t1814 * t1812 ) * 1.0E-9 ) ; if ( X [ 184ULL ] <= 0.0 ) { t1816 = 0.0 ; }
else { t1816 = X [ 184ULL ] >= 1.0 ? 1.0 : X [ 184ULL ] ; } if ( X [ 185ULL ]
<= 0.0 ) { intrm_sf_mf_536 = 0.0 ; } else { intrm_sf_mf_536 = X [ 185ULL ] >=
1.0 ? 1.0 : X [ 185ULL ] ; } t1195 [ 0ULL ] = X [ 27ULL ] ;
tlu2_linear_nearest_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t70 = ec_efOut ; tlu2_1d_linear_nearest_value ( & fc_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = fc_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & gc_efOut [ 0ULL ] , & t70 . mField0
[ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = gc_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & hc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = hc_efOut [ 0 ] ; t1818 =
( ( ( 1.0 - t1816 ) - intrm_sf_mf_536 ) * t1608_idx_0 + t1599_idx_0 * t1816 )
+ t1603_idx_0 * intrm_sf_mf_536 ; t1882 = X [ 183ULL ] * X [ 183ULL ] * t1814
; t105 = - pmf_sqrt ( fabs ( t1882 / ( t1812 == 0.0 ? 1.0E-16 : t1812 ) / ( X
[ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) ) ) * 7.8539816339744827E-5 ; if
( t105 >= 0.0 ) { t1820 = t105 * 100000.0 ; } else { t1820 = - t105 *
100000.0 ; } t1886 = t1818 * 7.8539816339744827E-5 ; zc_int82 = t1820 * 0.01
/ ( t1886 == 0.0 ? 1.0E-16 : t1886 ) ; t1888 = X [ 27ULL ] * t1812 ; t1822 =
X [ 28ULL ] / ( t1888 == 0.0 ? 1.0E-16 : t1888 ) ; t1890 = t1822 *
1.5707963267948965E-8 ; t108 = t105 * t1818 * 35.2 / ( t1890 == 0.0 ? 1.0E-16
: t1890 ) ; zc_int88 = zc_int82 >= 1.0 ? zc_int82 : 1.0 ; t1891 = pmf_log10 (
6.9 / ( zc_int88 == 0.0 ? 1.0E-16 : zc_int88 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int88 == 0.0 ? 1.0E-16 : zc_int88 ) +
0.00017169489553429715 ) * 3.24 ; t1893 = t1822 * 1.2337005501361697E-10 ;
t1820 = t105 * t1820 * ( 1.0 / ( t1891 == 0.0 ? 1.0E-16 : t1891 ) ) * 0.55 /
( t1893 == 0.0 ? 1.0E-16 : t1893 ) ; zc_int88 = ( zc_int82 - 2000.0 ) /
2000.0 ; zc_int91 = zc_int88 * zc_int88 * 3.0 - zc_int88 * zc_int88 *
zc_int88 * 2.0 ; if ( zc_int82 <= 2000.0 ) { zc_int88 = t108 * 1.0E-5 ; }
else if ( zc_int82 >= 4000.0 ) { zc_int88 = t1820 * 1.0E-5 ; } else {
zc_int88 = ( ( 1.0 - zc_int91 ) * t108 + t1820 * zc_int91 ) * 1.0E-5 ; } t106
= - ( X [ 172ULL ] * t106 ) / 7.8539816339744827E-5 * 0.00031622776601683789
+ zc_int88 ; t1820 = X [ 179ULL ] - X [ 28ULL ] ; t108 = ( X [ 27ULL ] / ( X
[ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) - X [ 187ULL ] / ( X [ 188ULL ] ==
0.0 ? 1.0E-16 : X [ 188ULL ] ) ) * X [ 186ULL ] * t1812 /
7.8539816339744827E-5 ; if ( X [ 187ULL ] <= 216.59999999999997 ) { zc_int88
= 216.59999999999997 ; } else { zc_int88 = X [ 187ULL ] >= 623.15 ? 623.15 :
X [ 187ULL ] ; } t1662 = zc_int88 * zc_int88 ; zc_int91 = ( ( (
1074.1165326382641 + zc_int88 * - 0.2214565261064495 ) + t1662 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_218 ) - t1811 ) + ( (
1479.6504774711011 + zc_int88 * 1.2002114337048222 ) + t1662 * -
0.00038614513167823636 ) * intrm_sf_mf_218 ) + ( ( 12825.281119789837 +
zc_int88 * 6.9647057412840034 ) + t1662 * - 0.0070524868246844051 ) * t1811 ;
t1901 = zc_int91 - t1812 ; zc_int88 = zc_int91 / ( t1901 == 0.0 ? 1.0E-16 :
t1901 ) ; zc_int91 = pmf_sqrt ( t108 * t108 * 9.999999999999999E-14 + fabs (
X [ 187ULL ] * zc_int88 * t1812 ) * 1.0E-9 ) ; t1902 = X [ 188ULL ] * X [
188ULL ] * zc_int88 ; t1662 = - pmf_sqrt ( fabs ( t1902 / ( t1812 == 0.0 ?
1.0E-16 : t1812 ) / ( X [ 187ULL ] == 0.0 ? 1.0E-16 : X [ 187ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t1662 >= 0.0 ) { t1828 = t1662 * 100000.0 ; }
else { t1828 = - t1662 * 100000.0 ; } t1829 = t1828 * 0.01 / ( t1886 == 0.0 ?
1.0E-16 : t1886 ) ; zc_int94 = t1662 * t1818 * 35.2 / ( t1890 == 0.0 ?
1.0E-16 : t1890 ) ; t1831 = t1829 >= 1.0 ? t1829 : 1.0 ; piece250 = pmf_log10
( 6.9 / ( t1831 == 0.0 ? 1.0E-16 : t1831 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1831 == 0.0 ? 1.0E-16 : t1831 ) + 0.00017169489553429715
) * 3.24 ; t1828 = t1662 * t1828 * ( 1.0 / ( piece250 == 0.0 ? 1.0E-16 :
piece250 ) ) * 0.55 / ( t1893 == 0.0 ? 1.0E-16 : t1893 ) ; t1831 = ( t1829 -
2000.0 ) / 2000.0 ; t1832 = t1831 * t1831 * 3.0 - t1831 * t1831 * t1831 * 2.0
; if ( t1829 <= 2000.0 ) { t1831 = zc_int94 * 1.0E-5 ; } else if ( t1829 >=
4000.0 ) { t1831 = t1828 * 1.0E-5 ; } else { t1831 = ( ( 1.0 - t1832 ) *
zc_int94 + t1828 * t1832 ) * 1.0E-5 ; } zc_int91 = X [ 186ULL ] * zc_int91 /
7.8539816339744827E-5 * 0.00031622776601683789 + t1831 ; t1828 = X [ 160ULL ]
- X [ 28ULL ] ; t1195 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup (
& ic_efOut . mField0 [ 0ULL ] , & ic_efOut . mField1 [ 0ULL ] , & ic_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [
0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t86 = ic_efOut ;
tlu2_1d_linear_linear_value ( & jc_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = jc_efOut [ 0 ] ; zc_int94
= t1608_idx_0 ; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = kc_efOut
[ 0 ] ; t1831 = t1608_idx_0 ; if ( 1.0 - X [ 29ULL ] >= 0.01 ) { t1833 = 1.0
- X [ 29ULL ] ; } else if ( 1.0 - X [ 29ULL ] >= - 0.1 ) { t1833 = pmf_exp (
( ( 1.0 - X [ 29ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1833 =
1.6701700790245661E-7 ; } t1832 = X [ 30ULL ] / ( t1833 == 0.0 ? 1.0E-16 :
t1833 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & lc_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1184 [ 0ULL ] , & t126 [
0ULL ] ) ; t1608_idx_0 = lc_efOut [ 0 ] ; t1834 = pmf_exp ( pmf_log ( X [
28ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t1834 >= 1.0 ) { t1916 = ( t1834
- 1.0 ) * 461.523 + t1832 ; t1835 = t1832 / ( t1916 == 0.0 ? 1.0E-16 : t1916
) ; } else { t1835 = 1.0 ; } t1918 = t1835 * 0.01 ; t1832 = ( X [ 29ULL ] -
t1835 ) / ( t1918 == 0.0 ? 1.0E-16 : t1918 ) ; if ( X [ 29ULL ] - t1835 <=
0.0 ) { t1832 = 0.0 ; } else if ( X [ 29ULL ] - t1835 >= t1835 * 0.01 ) {
t1832 = X [ 29ULL ] - t1835 ; } else { t1832 = ( X [ 29ULL ] - t1835 ) * (
t1832 * t1832 * 3.0 - t1832 * t1832 * t1832 * 2.0 ) ; } t1822 = t1822 * t1832
* 7.8539816339744827E-5 / 0.001 ; t1832 = ( zc_int94 - t1831 ) * t1822 ;
tlu2_1d_linear_nearest_value ( & mc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = mc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = nc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = oc_efOut [ 0 ] ; t1831 =
( ( ( 1.0 - t1816 ) - intrm_sf_mf_536 ) * t1608_idx_0 + t1599_idx_0 * t1816 )
+ t1603_idx_0 * intrm_sf_mf_536 ; t1835 = ( X [ 177ULL ] - X [ 27ULL ] ) * (
t1831 * 0.031415926535897927 / 0.01 ) ; if ( X [ 181ULL ] <= 0.0 ) { t1836 =
0.0 ; } else { t1836 = X [ 181ULL ] >= 1.0 ? 1.0 : X [ 181ULL ] ; } if ( X [
180ULL ] <= 0.0 ) { intrm_sf_mf_325 = 0.0 ; } else { intrm_sf_mf_325 = X [
180ULL ] >= 1.0 ? 1.0 : X [ 180ULL ] ; } t1843 = ( ( ( 1.0 - t1836 ) -
intrm_sf_mf_325 ) * 296.802103844292 + t1836 * 461.523 ) + intrm_sf_mf_325 *
4124.48151675695 ; t1846 = X [ 181ULL ] * 461.523 / ( t1843 == 0.0 ? 1.0E-16
: t1843 ) ; if ( t1846 <= 0.0 ) { t1848 = 0.0 ; } else { t1848 = t1846 >= 1.0
? 1.0 : t1846 ; } t1846 = X [ 180ULL ] * 4124.48151675695 / ( t1843 == 0.0 ?
1.0E-16 : t1843 ) ; if ( t1846 <= 0.0 ) { t1849 = 0.0 ; } else { t1849 =
t1846 >= 1.0 ? 1.0 : t1846 ; } t1195 [ 0ULL ] = X [ 178ULL ] ;
tlu2_linear_nearest_prelookup ( & pc_efOut . mField0 [ 0ULL ] , & pc_efOut .
mField1 [ 0ULL ] , & pc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = pc_efOut ; tlu2_1d_linear_nearest_value ( & qc_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = qc_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & rc_efOut [ 0ULL ] , & t94 . mField0
[ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = rc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & sc_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = sc_efOut [ 0
] ; t1846 = ( ( ( 1.0 - t1848 ) - t1849 ) * t1608_idx_0 + t1599_idx_0 * t1848
) + t1603_idx_0 * t1849 ; tlu2_1d_linear_nearest_value ( & tc_efOut [ 0ULL ]
, & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0
= tc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & uc_efOut [ 0ULL ] , & t70
. mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 =
uc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vc_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = vc_efOut
[ 0 ] ; t1850 = ( ( ( 1.0 - t1816 ) - intrm_sf_mf_536 ) * t1608_idx_0 +
t1599_idx_0 * t1816 ) + t1603_idx_0 * intrm_sf_mf_536 ;
tlu2_1d_linear_nearest_value ( & wc_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = wc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xc_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = xc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yc_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = yc_efOut [ 0 ] ; t1816 =
( ( ( 1.0 - t1848 ) - t1849 ) * t1608_idx_0 + t1599_idx_0 * t1848 ) +
t1603_idx_0 * t1849 ; intrm_sf_mf_536 = ( - X [ 172ULL ] - X [ 186ULL ] ) /
2.0 ; tlu2_1d_linear_nearest_value ( & ad_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ad_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & bd_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = bd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cd_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = cd_efOut [ 0 ] ; t1926 = (
t1818 + ( ( ( ( 1.0 - t1848 ) - t1849 ) * t1608_idx_0 + t1599_idx_0 * t1848 )
+ t1603_idx_0 * t1849 ) ) / 2.0 * 7.8539816339744827E-5 ; t1848 = (
intrm_sf_mf_536 >= 0.0 ? intrm_sf_mf_536 : 0.0 ) * 0.01 / ( t1926 == 0.0 ?
1.0E-16 : t1926 ) ; t1849 = t1848 >= 0.0 ? t1848 : - t1848 ; intrm_sf_mf_583
= t1849 > 1000.0 ? t1849 : 1000.0 ; U_idx_0 = pmf_log10 ( 6.9 / (
intrm_sf_mf_583 == 0.0 ? 1.0E-16 : intrm_sf_mf_583 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_583 == 0.0 ? 1.0E-16 : intrm_sf_mf_583 )
+ 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = 1.0 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t1928 = t1846 + t1850 ; if ( ( pmf_pow
( t1928 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) { t1932 = ( pmf_pow ( ( t1846 + t1850 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) *
12.7 + 1.0 ; t1853 = ( intrm_sf_mf_583 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) * ( (
t1846 + t1850 ) / 2.0 ) / ( t1932 == 0.0 ? 1.0E-16 : t1932 ) ; } else { t1853
= ( intrm_sf_mf_583 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) * ( (
t1846 + t1850 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_583 = ( t1849 - 2000.0 ) /
2000.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 =
intrm_sf_mf_583 * intrm_sf_mf_583 * 3.0 - intrm_sf_mf_583 * intrm_sf_mf_583 *
intrm_sf_mf_583 * 2.0 ; if ( t1849 <= 2000.0 ) { intrm_sf_mf_583 = 3.66 ; }
else if ( t1849 >= 4000.0 ) { intrm_sf_mf_583 = t1853 ; } else {
intrm_sf_mf_583 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) * 3.66 +
t1853 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ; }
U_idx_1 = t1928 / 2.0 ; if ( t1849 > intrm_sf_mf_583 * 0.031415926535897927 /
7.8539816339744827E-5 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) / 30.0 ) {
t1945 = ( t1846 + t1850 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 =
intrm_sf_mf_583 * 0.031415926535897927 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) /
7.8539816339744827E-5 / ( t1945 == 0.0 ? 1.0E-16 : t1945 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = 30.0 ; }
t1846 = ( X [ 177ULL ] - X [ 178ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) ) ; t1816 =
t1848 * 7.8539816339744827E-5 / 0.01 * ( t1928 / 2.0 ) * ( ( t1816 + t1831 )
/ 2.0 ) * t1846 ; if ( X [ 162ULL ] <= 0.0 ) { t1846 = 0.0 ; } else { t1846 =
X [ 162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; } if ( X [ 161ULL ] <= 0.0 ) {
t1848 = 0.0 ; } else { t1848 = X [ 161ULL ] >= 1.0 ? 1.0 : X [ 161ULL ] ; }
t1849 = ( ( ( 1.0 - t1846 ) - t1848 ) * 296.802103844292 + t1846 * 461.523 )
+ t1848 * 4124.48151675695 ; intrm_sf_mf_583 = X [ 162ULL ] * 461.523 / (
t1849 == 0.0 ? 1.0E-16 : t1849 ) ; if ( intrm_sf_mf_583 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 =
intrm_sf_mf_583 >= 1.0 ? 1.0 : intrm_sf_mf_583 ; } intrm_sf_mf_583 = X [
161ULL ] * 4124.48151675695 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) ; if (
intrm_sf_mf_583 <= 0.0 ) { t1853 = 0.0 ; } else { t1853 = intrm_sf_mf_583 >=
1.0 ? 1.0 : intrm_sf_mf_583 ; } t1195 [ 0ULL ] = X [ 159ULL ] ;
tlu2_linear_nearest_prelookup ( & dd_efOut . mField0 [ 0ULL ] , & dd_efOut .
mField1 [ 0ULL ] , & dd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t77 = dd_efOut ; tlu2_1d_linear_nearest_value ( & ed_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ed_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & fd_efOut [ 0ULL ] , & t77 . mField0
[ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = fd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & gd_efOut [ 0ULL ] , & t77 . mField0 [
0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = gd_efOut [ 0
] ; intrm_sf_mf_583 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) - t1853 ) *
t1608_idx_0 + t1599_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) +
t1603_idx_0 * t1853 ; tlu2_1d_linear_nearest_value ( & hd_efOut [ 0ULL ] , &
t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
hd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & id_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = id_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & jd_efOut [ 0ULL ] , & t77 . mField0
[ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField12 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = jd_efOut [ 0
] ; intrm_sf_mf_538 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) - t1853 ) *
t1608_idx_0 + t1599_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) +
t1603_idx_0 * t1853 ; t1855 = intrm_sf_mf_536 <= 0.0 ? intrm_sf_mf_536 : 0.0
; tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL
] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = kd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ld_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ld_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & md_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = md_efOut [ 0 ] ;
intrm_sf_mf_536 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) - t1853 ) *
t1608_idx_0 + t1599_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) +
t1603_idx_0 * t1853 ; t1953 = ( t1818 + intrm_sf_mf_536 ) / 2.0 *
7.8539816339744827E-5 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = - t1855 *
0.01 / ( t1953 == 0.0 ? 1.0E-16 : t1953 ) ; t1853 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ; t1855 =
t1853 > 1000.0 ? t1853 : 1000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = pmf_log10 (
6.9 / ( t1855 == 0.0 ? 1.0E-16 : t1855 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1855 == 0.0 ? 1.0E-16 : t1855 ) + 0.00017169489553429715
) * 3.24 ; t1856 = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = t1850 +
intrm_sf_mf_583 ; if ( ( pmf_pow (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1856 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { intrm_sf_mf_558 = ( pmf_pow ( ( t1850 + intrm_sf_mf_583 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1856 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I = ( t1855 - 1000.0 )
* ( t1856 / 8.0 ) * ( ( t1850 + intrm_sf_mf_583 ) / 2.0 ) / ( intrm_sf_mf_558
== 0.0 ? 1.0E-16 : intrm_sf_mf_558 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I = ( t1855 - 1000.0 )
* ( t1856 / 8.0 ) * ( ( t1850 + intrm_sf_mf_583 ) / 2.0 ) / 1.0E-6 ; } t1855
= ( t1853 - 2000.0 ) / 2000.0 ; t1856 = t1855 * t1855 * 3.0 - t1855 * t1855 *
t1855 * 2.0 ; if ( t1853 <= 2000.0 ) { t1855 = 3.66 ; } else if ( t1853 >=
4000.0 ) { t1855 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I ;
} else { t1855 = ( 1.0 - t1856 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I * t1856 ; } t1966 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / 2.0 ; if (
t1853 > t1855 * 0.031415926535897927 / 7.8539816339744827E-5 / ( t1966 == 0.0
? 1.0E-16 : t1966 ) / 30.0 ) { t1972 = ( t1850 + intrm_sf_mf_583 ) / 2.0 ;
t1856 = t1855 * 0.031415926535897927 / ( t1853 == 0.0 ? 1.0E-16 : t1853 ) /
7.8539816339744827E-5 / ( t1972 == 0.0 ? 1.0E-16 : t1972 ) ; } else { t1856 =
30.0 ; } t1850 = ( X [ 177ULL ] - X [ 159ULL ] ) * ( 1.0 - pmf_exp ( - t1856
) ) ; t1850 = t1816 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 *
7.8539816339744827E-5 / 0.01 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / 2.0 ) * ( (
t1831 + intrm_sf_mf_538 ) / 2.0 ) * t1850 ; t1816 = pmf_sqrt ( X [ 172ULL ] *
X [ 172ULL ] + 2.0360111955237585E-13 ) ; t1831 = pmf_sqrt ( X [ 172ULL ] * X
[ 172ULL ] + 2.3237892571262758E-14 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = pmf_sqrt (
X [ 172ULL ] * X [ 172ULL ] + 1.6409606283812411E-14 ) ; t1853 = pmf_sqrt ( X
[ 186ULL ] * X [ 186ULL ] + 2.0360111955237585E-13 ) ; t1855 = pmf_sqrt ( X [
186ULL ] * X [ 186ULL ] + 2.3237892571262758E-14 ) ; t1856 = pmf_sqrt ( X [
186ULL ] * X [ 186ULL ] + 1.6409606283812411E-14 ) ;
tlu2_1d_linear_linear_value ( & nd_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = nd_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I = t1608_idx_0 ;
tlu2_1d_linear_linear_value ( & od_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = od_efOut [ 0 ] ; t1859 = -
X [ 173ULL ] + X [ 196ULL ] ; t1860 = ( - X [ 172ULL ] + X [ 186ULL ] ) -
t1822 * 100000.0 ; t1861 = ( - X [ 174ULL ] + X [ 197ULL ] ) - t1822 *
100000.0 ; t1862 = ( ( ( 1.0 - intrm_sf_mf_218 ) - t1811 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I + zc_int94 *
intrm_sf_mf_218 ) + t1608_idx_0 * t1811 ; t1865 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I - X [ 27ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I =
t1608_idx_0 - X [ 27ULL ] * 4.12448151675695 ; t1858 = zc_int94 - X [ 27ULL ]
* 0.461523 ; zc_int94 = ( X [ 179ULL ] * - 0.7999998 + U_idx_2 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( zc_int94 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t1870 =
7.8539816339744857E-13 ; } else if ( zc_int94 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t1870 = 3.1415926535897929E-6 ; } else { t1870 =
zc_int94 * 7.8539816339744827E-5 ; } zc_int94 = t1870 / 7.8539816339744827E-5
; if ( X [ 202ULL ] <= 0.0 ) { intrm_sf_mf_385 = 0.0 ; } else {
intrm_sf_mf_385 = X [ 202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } if ( X [
203ULL ] <= 0.0 ) { zc_int135 = 0.0 ; } else { zc_int135 = X [ 203ULL ] >=
1.0 ? 1.0 : X [ 203ULL ] ; } t1873 = ( ( ( 1.0 - intrm_sf_mf_385 ) -
zc_int135 ) * 296.802103844292 + intrm_sf_mf_385 * 461.523 ) + zc_int135 *
4124.48151675695 ; t1977 = X [ 200ULL ] * t1873 ; t111 = X [ 201ULL ] / (
t1977 == 0.0 ? 1.0E-16 : t1977 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = X [ 201ULL
] / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( X [ 204ULL ] / ( X [
200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t1876 = X [ 201ULL ] / ( X [
179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) * ( X [ 205ULL ] / ( X [ 200ULL ]
== 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; if ( - X [ 172ULL ] > 0.0 ) { t1880 = (
zc_int94 + 1.0 ) * ( 1.0 - zc_int94 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) * ( - X [
172ULL ] / 0.64 / ( t1870 == 0.0 ? 1.0E-16 : t1870 ) * ( - X [ 172ULL ] /
0.64 / ( t1870 == 0.0 ? 1.0E-16 : t1870 ) ) / 2.0 / ( t111 == 0.0 ? 1.0E-16 :
t111 ) ) * 9.9999999999999991E-11 ; } else if ( - X [ 172ULL ] < 0.0 ) {
t1880 = ( zc_int94 + 1.0 ) * ( 1.0 - zc_int94 * t1876 ) * ( - X [ 172ULL ] /
0.64 / ( t1870 == 0.0 ? 1.0E-16 : t1870 ) * ( - X [ 172ULL ] / 0.64 / ( t1870
== 0.0 ? 1.0E-16 : t1870 ) ) / 2.0 / ( t111 == 0.0 ? 1.0E-16 : t111 ) ) *
9.9999999999999991E-11 ; } else { t1880 = 0.0 ; } t1883 = ( X [ 24ULL ] + X [
179ULL ] ) / 2.0 * 0.0010000000000000009 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 = ( 1.0 -
zc_int94 ) * ( 1.0 - zc_int94 ) ; t1885 = t1883 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ; t1889 = (
zc_int94 + 1.0 ) * ( 1.0 - zc_int94 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) - ( 1.0 -
zc_int94 * t1876 ) * zc_int94 * 2.0 ; t1891 = ( X [ 24ULL ] - X [ 179ULL ] )
* ( t1889 >= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1
? t1889 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ) ;
t1889 = ( X [ 24ULL ] - X [ 179ULL ] ) / ( t1883 == 0.0 ? 1.0E-16 : t1883 ) ;
t1892 = t1889 * t1889 * 3.0 - t1889 * t1889 * t1889 * 2.0 ; if ( X [ 24ULL ]
- X [ 179ULL ] <= 0.0 ) { t1889 = t1885 ; } else if ( X [ 24ULL ] - X [
179ULL ] >= t1883 ) { t1889 = t1891 ; } else { t1889 = ( 1.0 - t1892 ) *
t1885 + t1891 * t1892 ; } t1891 = ( zc_int94 + 1.0 ) * ( 1.0 - zc_int94 *
t1876 ) - ( 1.0 - zc_int94 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) * zc_int94
* 2.0 ; zc_int94 = ( X [ 179ULL ] - X [ 24ULL ] ) * ( t1891 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ? t1891 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = ( X [
179ULL ] - X [ 24ULL ] ) / ( t1883 == 0.0 ? 1.0E-16 : t1883 ) ; t1876 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 * 2.0 ; if (
X [ 179ULL ] - X [ 24ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = t1885 ; }
else if ( X [ 179ULL ] - X [ 24ULL ] >= t1883 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = zc_int94 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = (
1.0 - t1876 ) * t1885 + zc_int94 * t1876 ; } if ( X [ 24ULL ] > X [ 179ULL ]
) { zc_int94 = t1889 ; } else { zc_int94 = X [ 24ULL ] < X [ 179ULL ] ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 : t1885 ; }
if ( X [ 200ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = X [ 200ULL
] >= 623.15 ? 623.15 : X [ 200ULL ] ; } t1894 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ; t1876 = ( (
( 1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 * -
0.2214565261064495 ) + t1894 * 0.00037212980109014541 ) * ( ( 1.0 -
intrm_sf_mf_385 ) - zc_int135 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 *
1.2002114337048222 ) + t1894 * - 0.00038614513167823636 ) * intrm_sf_mf_385 )
+ ( ( 12825.281119789837 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 *
6.9647057412840034 ) + t1894 * - 0.0070524868246844051 ) * zc_int135 ; t2001
= t1876 - t1873 ; t2002 = X [ 201ULL ] * X [ 201ULL ] * ( t1876 / ( t2001 ==
0.0 ? 1.0E-16 : t2001 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 = pmf_sqrt (
fabs ( t2002 / ( t1873 == 0.0 ? 1.0E-16 : t1873 ) / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ) ) * t1870 * 0.64 ; t2005 = t111 * 2.0 ; t111 = ( X
[ 24ULL ] - X [ 179ULL ] ) * pmf_sqrt ( fabs ( t2005 / ( zc_int94 == 0.0 ?
1.0E-16 : zc_int94 ) ) ) * t1870 * 0.64 ; t1876 = pmf_sqrt ( X [ 213ULL ] * X
[ 213ULL ] + 2.7104677895120892E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 = pmf_sqrt (
X [ 213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 ) ; t1885 = pmf_sqrt ( X
[ 213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 ) ; if ( X [ 218ULL ] <=
0.0 ) { t1889 = 0.0 ; } else { t1889 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL
] ; } if ( X [ 219ULL ] <= 0.0 ) { t1891 = 0.0 ; } else { t1891 = X [ 219ULL
] >= 1.0 ? 1.0 : X [ 219ULL ] ; } t1892 = ( ( ( 1.0 - t1889 ) - t1891 ) *
296.802103844292 + t1889 * 461.523 ) + t1891 * 259.836612622973 ; if ( X [
231ULL ] <= 0.0 ) { t1894 = 0.0 ; } else { t1894 = X [ 231ULL ] >= 1.0 ? 1.0
: X [ 231ULL ] ; } if ( X [ 230ULL ] <= 0.0 ) { t1895 = 0.0 ; } else { t1895
= X [ 230ULL ] >= 1.0 ? 1.0 : X [ 230ULL ] ; } t1900 = ( ( ( 1.0 - t1894 ) -
t1895 ) * 296.802103844292 + t1894 * 461.523 ) + t1895 * 259.836612622973 ;
t1195 [ 0ULL ] = X [ 225ULL ] ; tlu2_linear_linear_prelookup ( & pd_efOut .
mField0 [ 0ULL ] , & pd_efOut . mField1 [ 0ULL ] , & pd_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t60 = pd_efOut ;
tlu2_1d_linear_linear_value ( & qd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = qd_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & rd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = rd_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & sd_efOut [ 0ULL ] , & t60 . mField0 [ 0ULL ]
, & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = sd_efOut [ 0 ] ; t1901 = (
( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 + t1599_idx_0 * t1894 ) +
t1603_idx_0 * t1895 ; t1195 [ 0ULL ] = X [ 228ULL ] ;
tlu2_linear_linear_prelookup ( & td_efOut . mField0 [ 0ULL ] , & td_efOut .
mField1 [ 0ULL ] , & td_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t31 = td_efOut ; tlu2_1d_linear_linear_value ( & ud_efOut [ 0ULL ] , & t31 .
mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ud_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vd_efOut [ 0ULL ] , & t31 . mField0 [
0ULL ] , & t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = vd_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & wd_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL
] , & t31 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = wd_efOut [ 0 ] ; t3403 =
( ( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 + t1599_idx_0 * t1894 ) +
t1603_idx_0 * t1895 ; t1195 [ 0ULL ] = X [ 226ULL ] ;
tlu2_linear_linear_prelookup ( & xd_efOut . mField0 [ 0ULL ] , & xd_efOut .
mField1 [ 0ULL ] , & xd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t58 = xd_efOut ; tlu2_1d_linear_linear_value ( & yd_efOut [ 0ULL ] , & t58 .
mField0 [ 0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = yd_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ae_efOut [ 0ULL ] , & t58 . mField0 [
0ULL ] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ae_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & be_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL
] , & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = be_efOut [ 0 ] ; piece20
= ( ( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 + t1599_idx_0 * t1894 ) +
t1603_idx_0 * t1895 ; t1195 [ 0ULL ] = X [ 227ULL ] ;
tlu2_linear_linear_prelookup ( & ce_efOut . mField0 [ 0ULL ] , & ce_efOut .
mField1 [ 0ULL ] , & ce_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t54 = ce_efOut ; tlu2_1d_linear_linear_value ( & de_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = de_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ee_efOut [ 0ULL ] , & t54 . mField0 [
0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ee_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & fe_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL
] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = fe_efOut [ 0 ] ; t1907 =
( ( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 + t1599_idx_0 * t1894 ) +
t1603_idx_0 * t1895 ; t1195 [ 0ULL ] = X [ 32ULL ] ;
tlu2_linear_linear_prelookup ( & ge_efOut . mField0 [ 0ULL ] , & ge_efOut .
mField1 [ 0ULL ] , & ge_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t86 = ge_efOut ; tlu2_1d_linear_linear_value ( & he_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = he_efOut
[ 0 ] ; piece250 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & ie_efOut [
0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = ie_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co0 = t1608_idx_0
; if ( X [ 34ULL ] <= 0.0 ) { t1912 = 0.0 ; } else { t1912 = X [ 34ULL ] >=
1.0 ? 1.0 : X [ 34ULL ] ; } if ( X [ 33ULL ] <= 0.0 ) { t1913 = 0.0 ; } else
{ t1913 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } t1914 = ( ( ( 1.0 -
t1912 ) - t1913 ) * 296.802103844292 + t1912 * 461.523 ) + t1913 *
259.836612622973 ; t2007 = X [ 32ULL ] * t1914 ; if ( 1.0 - X [ 34ULL ] >=
0.01 ) { t1916 = 1.0 - X [ 34ULL ] ; } else if ( 1.0 - X [ 34ULL ] >= - 0.1 )
{ t1916 = pmf_exp ( ( ( 1.0 - X [ 34ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else
{ t1916 = 1.6701700790245661E-7 ; } piece96 = X [ 33ULL ] / ( t1916 == 0.0 ?
1.0E-16 : t1916 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & je_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = je_efOut [ 0 ] ; t1918 =
pmf_exp ( pmf_log ( X [ 31ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t1918 >=
1.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = (
t1918 - 1.0 ) * 461.523 + piece96 ; t1919 = piece96 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens ) ;
} else { t1919 = 1.0 ; } t2012 = t1919 * 0.01 ; piece96 = ( X [ 34ULL ] -
t1919 ) / ( t2012 == 0.0 ? 1.0E-16 : t2012 ) ; if ( X [ 34ULL ] - t1919 <=
0.0 ) { piece96 = 0.0 ; } else if ( X [ 34ULL ] - t1919 >= t1919 * 0.01 ) {
piece96 = X [ 34ULL ] - t1919 ; } else { piece96 = ( X [ 34ULL ] - t1919 ) *
( piece96 * piece96 * 3.0 - piece96 * piece96 * piece96 * 2.0 ) ; } t1915 = X
[ 31ULL ] / ( t2007 == 0.0 ? 1.0E-16 : t2007 ) * piece96 * 0.0003 / 0.001 ;
piece96 = ( piece250 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co0 ) * t1915 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co0 = pmf_sqrt (
X [ 244ULL ] * X [ 244ULL ] + 2.7104677895120892E-12 ) ; t1919 = pmf_sqrt ( X
[ 244ULL ] * X [ 244ULL ] + 5.2285258285341208E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co2 = pmf_sqrt (
X [ 244ULL ] * X [ 244ULL ] + 3.6921614138577926E-12 ) ;
tlu2_1d_linear_linear_value ( & ke_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ke_efOut [ 0 ] ; t1921 =
t1608_idx_0 ; tlu2_1d_linear_linear_value ( & le_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = le_efOut
[ 0 ] ; t1923 = - X [ 214ULL ] + X [ 245ULL ] ; t1924 = ( - X [ 213ULL ] + X
[ 244ULL ] ) - t1915 * 100000.0 ; t1925 = ( - X [ 215ULL ] + X [ 246ULL ] ) -
t1915 * 100000.0 ; t1926 = ( ( ( 1.0 - t1912 ) - t1913 ) * t1921 + piece250 *
t1912 ) + t1608_idx_0 * t1913 ; t1928 = t1921 - X [ 32ULL ] *
0.296802103844292 ; t1921 = t1608_idx_0 - X [ 32ULL ] * 0.25983661262297303 ;
t1922 = piece250 - X [ 32ULL ] * 0.461523 ; if ( X [ 223ULL ] <= 0.0 ) {
piece250 = 0.0 ; } else { piece250 = X [ 223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ]
; } if ( X [ 222ULL ] <= 0.0 ) { t1930 = 0.0 ; } else { t1930 = X [ 222ULL ]
>= 1.0 ? 1.0 : X [ 222ULL ] ; } t1931 = ( ( ( 1.0 - piece250 ) - t1930 ) *
296.802103844292 + piece250 * 461.523 ) + t1930 * 259.836612622973 ; if ( X [
37ULL ] <= 0.0 ) { t1932 = 0.0 ; } else { t1932 = X [ 37ULL ] >= 1.0 ? 1.0 :
X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) { t1933 = 0.0 ; } else { t1933 = X
[ 36ULL ] >= 1.0 ? 1.0 : X [ 36ULL ] ; } t1934 = ( ( ( 1.0 - t1932 ) - t1933
) * 296.802103844292 + t1932 * 461.523 ) + t1933 * 4124.48151675695 ; t1935 =
- ( ( X [ 35ULL ] / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) - X [
261ULL ] / ( X [ 262ULL ] == 0.0 ? 1.0E-16 : X [ 262ULL ] ) ) * X [ 186ULL ]
* t1934 ) / 0.0019634954084936209 ; if ( X [ 261ULL ] <= 216.59999999999997 )
{ t1936 = 216.59999999999997 ; } else { t1936 = X [ 261ULL ] >= 623.15 ?
623.15 : X [ 261ULL ] ; } U_idx_1 = t1936 * t1936 ; t115 = ( ( (
1074.1165326382641 + t1936 * - 0.2214565261064495 ) + U_idx_1 *
0.00037212980109014541 ) * ( ( 1.0 - t1932 ) - t1933 ) + ( (
1479.6504774711011 + t1936 * 1.2002114337048222 ) + U_idx_1 * -
0.00038614513167823636 ) * t1932 ) + ( ( 12825.281119789837 + t1936 *
6.9647057412840034 ) + U_idx_1 * - 0.0070524868246844051 ) * t1933 ; t2021 =
t115 - t1934 ; t1936 = t115 / ( t2021 == 0.0 ? 1.0E-16 : t2021 ) ; t115 =
pmf_sqrt ( t1935 * t1935 * 9.999999999999999E-14 + fabs ( X [ 261ULL ] *
t1936 * t1934 ) * 1.0E-9 ) ; if ( X [ 259ULL ] <= 0.0 ) { U_idx_1 = 0.0 ; }
else { U_idx_1 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; } if ( X [ 258ULL
] <= 0.0 ) { zc_int103 = 0.0 ; } else { zc_int103 = X [ 258ULL ] >= 1.0 ? 1.0
: X [ 258ULL ] ; } t1195 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_nearest_prelookup ( & me_efOut . mField0 [ 0ULL ] , & me_efOut .
mField1 [ 0ULL ] , & me_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = me_efOut ; tlu2_1d_linear_nearest_value ( & ne_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ne_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & oe_efOut [ 0ULL ] , & t94 . mField0
[ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = oe_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = pe_efOut [ 0 ] ; t1941 =
( ( ( 1.0 - U_idx_1 ) - zc_int103 ) * t1608_idx_0 + t1599_idx_0 * U_idx_1 ) +
t1603_idx_0 * zc_int103 ; t2987 = X [ 262ULL ] * X [ 262ULL ] * t1936 ; t116
= - pmf_sqrt ( fabs ( t2987 / ( t1934 == 0.0 ? 1.0E-16 : t1934 ) / ( X [
261ULL ] == 0.0 ? 1.0E-16 : X [ 261ULL ] ) ) ) * 0.0019634954084936209 ; if (
t116 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke = t116 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke = - t116 *
100000.0 ; } t2990 = t1941 * 0.0019634954084936209 ; t1944 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke * 0.05 / (
t2990 == 0.0 ? 1.0E-16 : t2990 ) ; t2028 = X [ 35ULL ] * t1934 ; t1945 = X [
38ULL ] / ( t2028 == 0.0 ? 1.0E-16 : t2028 ) ; t2945 = t1945 *
9.8174770424681068E-6 ; t1946 = t116 * t1941 * 11.2 / ( t2945 == 0.0 ?
1.0E-16 : t2945 ) ; zc_int200 = t1944 >= 1.0 ? t1944 : 1.0 ; t2031 =
pmf_log10 ( 6.9 / ( zc_int200 == 0.0 ? 1.0E-16 : zc_int200 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( zc_int200 == 0.0 ? 1.0E-16 :
zc_int200 ) + 2.8767404433520813E-5 ) * 3.24 ; t2983 = t1945 *
3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke = t116 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke * ( 1.0 / (
t2031 == 0.0 ? 1.0E-16 : t2031 ) ) * 0.175 / ( t2983 == 0.0 ? 1.0E-16 : t2983
) ; zc_int200 = ( t1944 - 2000.0 ) / 2000.0 ; t1949 = zc_int200 * zc_int200 *
3.0 - zc_int200 * zc_int200 * zc_int200 * 2.0 ; if ( t1944 <= 2000.0 ) {
zc_int200 = t1946 * 1.0E-5 ; } else if ( t1944 >= 4000.0 ) { zc_int200 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke * 1.0E-5 ; }
else { zc_int200 = ( ( 1.0 - t1949 ) * t1946 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke * t1949 ) *
1.0E-5 ; } t115 = - ( X [ 186ULL ] * t115 ) / 0.0019634954084936209 *
0.00031622776601683789 + zc_int200 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke = X [ 160ULL
] - X [ 38ULL ] ; t1946 = ( X [ 35ULL ] / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X
[ 38ULL ] ) - X [ 264ULL ] / ( X [ 265ULL ] == 0.0 ? 1.0E-16 : X [ 265ULL ] )
) * X [ 263ULL ] * t1934 / 0.0019634954084936209 ; if ( X [ 264ULL ] <=
216.59999999999997 ) { zc_int200 = 216.59999999999997 ; } else { zc_int200 =
X [ 264ULL ] >= 623.15 ? 623.15 : X [ 264ULL ] ; } zc_int201 = zc_int200 *
zc_int200 ; t1949 = ( ( ( 1074.1165326382641 + zc_int200 * -
0.2214565261064495 ) + zc_int201 * 0.00037212980109014541 ) * ( ( 1.0 - t1932
) - t1933 ) + ( ( 1479.6504774711011 + zc_int200 * 1.2002114337048222 ) +
zc_int201 * - 0.00038614513167823636 ) * t1932 ) + ( ( 12825.281119789837 +
zc_int200 * 6.9647057412840034 ) + zc_int201 * - 0.0070524868246844051 ) *
t1933 ; t2041 = t1949 - t1934 ; zc_int200 = t1949 / ( t2041 == 0.0 ? 1.0E-16
: t2041 ) ; t1949 = pmf_sqrt ( t1946 * t1946 * 9.999999999999999E-14 + fabs (
X [ 264ULL ] * zc_int200 * t1934 ) * 1.0E-9 ) ; t3023 = X [ 265ULL ] * X [
265ULL ] * zc_int200 ; zc_int201 = - pmf_sqrt ( fabs ( t3023 / ( t1934 == 0.0
? 1.0E-16 : t1934 ) / ( X [ 264ULL ] == 0.0 ? 1.0E-16 : X [ 264ULL ] ) ) ) *
0.0019634954084936209 ; if ( zc_int201 >= 0.0 ) { t123 = zc_int201 * 100000.0
; } else { t123 = - zc_int201 * 100000.0 ; } t1952 = t123 * 0.05 / ( t2990 ==
0.0 ? 1.0E-16 : t2990 ) ; t1953 = zc_int201 * t1941 * 11.2 / ( t2945 == 0.0 ?
1.0E-16 : t2945 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = t1952 >=
1.0 ? t1952 : 1.0 ; t2049 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ) +
2.8767404433520813E-5 ) * 3.24 ; t123 = zc_int201 * t123 * ( 1.0 / ( t2049 ==
0.0 ? 1.0E-16 : t2049 ) ) * 0.175 / ( t2983 == 0.0 ? 1.0E-16 : t2983 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = ( t1952 -
2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 * 2.0 ; if (
t1952 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = t1953 *
1.0E-5 ; } else if ( t1952 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = t123 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) * t1953 +
t123 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) *
1.0E-5 ; } t1949 = X [ 263ULL ] * t1949 / 0.0019634954084936209 *
0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ; t123 = X [
251ULL ] - X [ 38ULL ] ; t1195 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & qe_efOut . mField0 [ 0ULL ] , & qe_efOut .
mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t70 = qe_efOut ; tlu2_1d_linear_linear_value ( & re_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = re_efOut
[ 0 ] ; t1953 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & se_efOut [ 0ULL
] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = se_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = t1608_idx_0
; if ( 1.0 - X [ 37ULL ] >= 0.01 ) { t1956 = 1.0 - X [ 37ULL ] ; } else if (
1.0 - X [ 37ULL ] >= - 0.1 ) { t1956 = pmf_exp ( ( ( 1.0 - X [ 37ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t1956 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = X [ 36ULL ]
/ ( t1956 == 0.0 ? 1.0E-16 : t1956 ) * 3827.6794129126583 + 296.802103844292
; tlu2_1d_linear_linear_value ( & te_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = te_efOut [ 0 ] ; t1957 =
pmf_exp ( pmf_log ( X [ 38ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t1957 >=
1.0 ) { piece151 = ( t1957 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / ( piece151
== 0.0 ? 1.0E-16 : piece151 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = 1.0 ; } t2058 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = ( X [ 37ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ) / ( t2058 ==
0.0 ? 1.0E-16 : t2058 ) ; if ( X [ 37ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = 0.0 ; }
else if ( X [ 37ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = X [ 37ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = ( X [ 37ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens * 2.0 ) ; }
t1945 = t1945 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
0.00049087385212340522 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = ( t1953 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ) * t1945 ;
tlu2_1d_linear_nearest_value ( & ue_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ue_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ve_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ve_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & we_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = we_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = ( ( ( 1.0 -
U_idx_1 ) - zc_int103 ) * t1608_idx_0 + t1599_idx_0 * U_idx_1 ) + t1603_idx_0
* zc_int103 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = ( X
[ 260ULL ] - X [ 35ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 *
0.039269908169872414 / 0.05 ) ; tlu2_1d_linear_nearest_value ( & xe_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = xe_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ye_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = ye_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
af_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = af_efOut [ 0 ] ; intrm_sf_mf_558 = ( ( ( 1.0 - U_idx_1 )
- zc_int103 ) * t1608_idx_0 + t1599_idx_0 * U_idx_1 ) + t1603_idx_0 *
zc_int103 ; U_idx_1 = ( - X [ 186ULL ] - X [ 263ULL ] ) / 2.0 ; t2064 = (
intrm_sf_mf_536 + t1941 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_536 = (
U_idx_1 >= 0.0 ? U_idx_1 : 0.0 ) * 0.05 / ( t2064 == 0.0 ? 1.0E-16 : t2064 )
; zc_int103 = intrm_sf_mf_536 >= 0.0 ? intrm_sf_mf_536 : - intrm_sf_mf_536 ;
intrm_sf_mf_715 = zc_int103 > 1000.0 ? zc_int103 : 1000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = pmf_log10 (
6.9 / ( intrm_sf_mf_715 == 0.0 ? 1.0E-16 : intrm_sf_mf_715 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_715 == 0.0 ?
1.0E-16 : intrm_sf_mf_715 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_549 = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ) ;
t2066 = intrm_sf_mf_583 + intrm_sf_mf_558 ; if ( ( pmf_pow ( t2066 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_549 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) { intrm_sf_mf_826 = ( pmf_pow ( ( intrm_sf_mf_583 +
intrm_sf_mf_558 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_549 / 8.0 ) * 12.7 + 1.0 ; t1962 = ( intrm_sf_mf_715 - 1000.0 ) *
( intrm_sf_mf_549 / 8.0 ) * ( ( intrm_sf_mf_583 + intrm_sf_mf_558 ) / 2.0 ) /
( intrm_sf_mf_826 == 0.0 ? 1.0E-16 : intrm_sf_mf_826 ) ; } else { t1962 = (
intrm_sf_mf_715 - 1000.0 ) * ( intrm_sf_mf_549 / 8.0 ) * ( ( intrm_sf_mf_583
+ intrm_sf_mf_558 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_715 = ( zc_int103 -
2000.0 ) / 2000.0 ; intrm_sf_mf_549 = intrm_sf_mf_715 * intrm_sf_mf_715 * 3.0
- intrm_sf_mf_715 * intrm_sf_mf_715 * intrm_sf_mf_715 * 2.0 ; if ( zc_int103
<= 2000.0 ) { intrm_sf_mf_715 = 3.66 ; } else if ( zc_int103 >= 4000.0 ) {
intrm_sf_mf_715 = t1962 ; } else { intrm_sf_mf_715 = ( 1.0 - intrm_sf_mf_549
) * 3.66 + t1962 * intrm_sf_mf_549 ; } U_idx_0 = t2066 / 2.0 ; if ( zc_int103
> intrm_sf_mf_715 * 0.039269908169872414 / 0.0019634954084936209 / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) / 30.0 ) { t2083 = ( intrm_sf_mf_583 +
intrm_sf_mf_558 ) / 2.0 ; intrm_sf_mf_549 = intrm_sf_mf_715 *
0.039269908169872414 / ( zc_int103 == 0.0 ? 1.0E-16 : zc_int103 ) /
0.0019634954084936209 / ( t2083 == 0.0 ? 1.0E-16 : t2083 ) ; } else {
intrm_sf_mf_549 = 30.0 ; } intrm_sf_mf_583 = ( X [ 260ULL ] - X [ 159ULL ] )
* ( 1.0 - pmf_exp ( - intrm_sf_mf_549 ) ) ; intrm_sf_mf_536 = intrm_sf_mf_536
* 0.0019634954084936209 / 0.05 * ( t2066 / 2.0 ) * ( ( intrm_sf_mf_538 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ) / 2.0 ) *
intrm_sf_mf_583 ; if ( X [ 253ULL ] <= 0.0 ) { intrm_sf_mf_583 = 0.0 ; } else
{ intrm_sf_mf_583 = X [ 253ULL ] >= 1.0 ? 1.0 : X [ 253ULL ] ; } if ( X [
252ULL ] <= 0.0 ) { intrm_sf_mf_538 = 0.0 ; } else { intrm_sf_mf_538 = X [
252ULL ] >= 1.0 ? 1.0 : X [ 252ULL ] ; } zc_int103 = ( ( ( 1.0 -
intrm_sf_mf_583 ) - intrm_sf_mf_538 ) * 296.802103844292 + intrm_sf_mf_583 *
461.523 ) + intrm_sf_mf_538 * 4124.48151675695 ; intrm_sf_mf_715 = X [ 253ULL
] * 461.523 / ( zc_int103 == 0.0 ? 1.0E-16 : zc_int103 ) ; if (
intrm_sf_mf_715 <= 0.0 ) { intrm_sf_mf_549 = 0.0 ; } else { intrm_sf_mf_549 =
intrm_sf_mf_715 >= 1.0 ? 1.0 : intrm_sf_mf_715 ; } intrm_sf_mf_715 = X [
252ULL ] * 4124.48151675695 / ( zc_int103 == 0.0 ? 1.0E-16 : zc_int103 ) ; if
( intrm_sf_mf_715 <= 0.0 ) { t1962 = 0.0 ; } else { t1962 = intrm_sf_mf_715
>= 1.0 ? 1.0 : intrm_sf_mf_715 ; } t1195 [ 0ULL ] = X [ 250ULL ] ;
tlu2_linear_nearest_prelookup ( & bf_efOut . mField0 [ 0ULL ] , & bf_efOut .
mField1 [ 0ULL ] , & bf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t77 = bf_efOut ; tlu2_1d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = cf_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & df_efOut [ 0ULL ] , & t77 . mField0
[ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = df_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ef_efOut [ 0ULL ] , & t77 . mField0 [
0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ef_efOut [ 0
] ; intrm_sf_mf_715 = ( ( ( 1.0 - intrm_sf_mf_549 ) - t1962 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_549 ) + t1603_idx_0 * t1962 ;
tlu2_1d_linear_nearest_value ( & ff_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ff_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gf_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = gf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hf_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = hf_efOut [ 0 ] ;
intrm_sf_mf_718 = ( ( ( 1.0 - intrm_sf_mf_549 ) - t1962 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_549 ) + t1603_idx_0 * t1962 ; t1965 = U_idx_1 <=
0.0 ? U_idx_1 : 0.0 ; tlu2_1d_linear_nearest_value ( & if_efOut [ 0ULL ] , &
t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
if_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & jf_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = jf_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & kf_efOut [ 0ULL ] , & t77 . mField0
[ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = kf_efOut [ 0 ]
; U_idx_1 = ( ( ( 1.0 - intrm_sf_mf_549 ) - t1962 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_549 ) + t1603_idx_0 * t1962 ; t3396 = ( t1941 +
U_idx_1 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_549 = - t1965 * 0.05 /
( t3396 == 0.0 ? 1.0E-16 : t3396 ) ; t1962 = intrm_sf_mf_549 >= 0.0 ?
intrm_sf_mf_549 : - intrm_sf_mf_549 ; t1965 = t1962 > 1000.0 ? t1962 : 1000.0
; t3068 = pmf_log10 ( 6.9 / ( t1965 == 0.0 ? 1.0E-16 : t1965 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1965 == 0.0 ? 1.0E-16 : t1965
) + 2.8767404433520813E-5 ) * 3.24 ; t1966 = 1.0 / ( t3068 == 0.0 ? 1.0E-16 :
t3068 ) ; t3143 = intrm_sf_mf_558 + intrm_sf_mf_715 ; if ( ( pmf_pow ( t3143
/ 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1966 / 8.0 ) * 12.7 + 1.0
>= 1.0E-6 ) { t3079 = ( pmf_pow ( ( intrm_sf_mf_558 + intrm_sf_mf_715 ) / 2.0
, 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1966 / 8.0 ) * 12.7 + 1.0 ;
t1967 = ( t1965 - 1000.0 ) * ( t1966 / 8.0 ) * ( ( intrm_sf_mf_558 +
intrm_sf_mf_715 ) / 2.0 ) / ( t3079 == 0.0 ? 1.0E-16 : t3079 ) ; } else {
t1967 = ( t1965 - 1000.0 ) * ( t1966 / 8.0 ) * ( ( intrm_sf_mf_558 +
intrm_sf_mf_715 ) / 2.0 ) / 1.0E-6 ; } t1965 = ( t1962 - 2000.0 ) / 2000.0 ;
t1966 = t1965 * t1965 * 3.0 - t1965 * t1965 * t1965 * 2.0 ; if ( t1962 <=
2000.0 ) { t1965 = 3.66 ; } else if ( t1962 >= 4000.0 ) { t1965 = t1967 ; }
else { t1965 = ( 1.0 - t1966 ) * 3.66 + t1967 * t1966 ; } t2104 = t3143 / 2.0
; if ( t1962 > t1965 * 0.039269908169872414 / 0.0019634954084936209 / ( t2104
== 0.0 ? 1.0E-16 : t2104 ) / 30.0 ) { t3200 = ( intrm_sf_mf_558 +
intrm_sf_mf_715 ) / 2.0 ; t1966 = t1965 * 0.039269908169872414 / ( t1962 ==
0.0 ? 1.0E-16 : t1962 ) / 0.0019634954084936209 / ( t3200 == 0.0 ? 1.0E-16 :
t3200 ) ; } else { t1966 = 30.0 ; } intrm_sf_mf_558 = ( X [ 260ULL ] - X [
250ULL ] ) * ( 1.0 - pmf_exp ( - t1966 ) ) ; intrm_sf_mf_558 =
intrm_sf_mf_536 + intrm_sf_mf_549 * 0.0019634954084936209 / 0.05 * ( t3143 /
2.0 ) * ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 +
intrm_sf_mf_718 ) / 2.0 ) * intrm_sf_mf_558 ; intrm_sf_mf_536 = pmf_sqrt ( X
[ 186ULL ] * X [ 186ULL ] + 5.0900279888093953E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = pmf_sqrt (
X [ 186ULL ] * X [ 186ULL ] + 5.8094731428156895E-13 ) ; intrm_sf_mf_549 =
pmf_sqrt ( X [ 186ULL ] * X [ 186ULL ] + 4.1024015709531014E-13 ) ; t1962 =
pmf_sqrt ( X [ 263ULL ] * X [ 263ULL ] + 5.0900279888093953E-12 ) ; t1965 =
pmf_sqrt ( X [ 263ULL ] * X [ 263ULL ] + 5.8094731428156895E-13 ) ; t1966 =
pmf_sqrt ( X [ 263ULL ] * X [ 263ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & lf_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = lf_efOut [ 0 ] ; t1967 =
t1608_idx_0 ; tlu2_1d_linear_linear_value ( & mf_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = mf_efOut
[ 0 ] ; t1969 = - X [ 196ULL ] + X [ 271ULL ] ; t1970 = ( ( - X [ 186ULL ] +
X [ 263ULL ] ) + U_idx_4 ) - t1945 * 100000.0 ; t1971 = ( ( - X [ 197ULL ] +
X [ 272ULL ] ) + U_idx_4 ) - t1945 * 100000.0 ; t1972 = ( ( ( 1.0 - t1932 ) -
t1933 ) * t1967 + t1953 * t1932 ) + t1608_idx_0 * t1933 ; t1975 = t1967 - X [
35ULL ] * 0.296802103844292 ; t1967 = t1608_idx_0 - X [ 35ULL ] *
4.12448151675695 ; t1968 = t1953 - X [ 35ULL ] * 0.461523 ; if ( X [ 8ULL ]
<= 0.0 ) { t1953 = 0.0 ; } else { t1953 = X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL
] ; } if ( X [ 7ULL ] <= 0.0 ) { t1980 = 0.0 ; } else { t1980 = X [ 7ULL ] >=
1.0 ? 1.0 : X [ 7ULL ] ; } t1984 = ( ( ( 1.0 - t1953 ) - t1980 ) *
296.802103844292 + t1953 * 461.523 ) + t1980 * 4124.48151675695 ; t1986 = - (
( X [ 6ULL ] / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) - X [ 275ULL ]
/ ( X [ 276ULL ] == 0.0 ? 1.0E-16 : X [ 276ULL ] ) ) * X [ 263ULL ] * t1984 )
/ 0.32 ; if ( X [ 275ULL ] <= 216.59999999999997 ) { t1987 =
216.59999999999997 ; } else { t1987 = X [ 275ULL ] >= 623.15 ? 623.15 : X [
275ULL ] ; } t1989 = t1987 * t1987 ; t1988 = ( ( ( 1074.1165326382641 + t1987
* - 0.2214565261064495 ) + t1989 * 0.00037212980109014541 ) * ( ( 1.0 - t1953
) - t1980 ) + ( ( 1479.6504774711011 + t1987 * 1.2002114337048222 ) + t1989 *
- 0.00038614513167823636 ) * t1953 ) + ( ( 12825.281119789837 + t1987 *
6.9647057412840034 ) + t1989 * - 0.0070524868246844051 ) * t1980 ; t2119 =
t1988 - t1984 ; t1987 = t1988 / ( t2119 == 0.0 ? 1.0E-16 : t2119 ) ; t1988 =
pmf_sqrt ( t1986 * t1986 * 9.999999999999999E-14 + fabs ( X [ 275ULL ] *
t1987 * t1984 ) * 1.0E-9 ) ; if ( X [ 76ULL ] <= 0.0 ) { t1989 = 0.0 ; } else
{ t1989 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; } if ( X [ 75ULL ] <= 0.0
) { zc_int251 = 0.0 ; } else { zc_int251 = X [ 75ULL ] >= 1.0 ? 1.0 : X [
75ULL ] ; } t1195 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_nearest_prelookup ( &
nf_efOut . mField0 [ 0ULL ] , & nf_efOut . mField1 [ 0ULL ] , & nf_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [
0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = nf_efOut ;
tlu2_1d_linear_nearest_value ( & of_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = of_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pf_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = pf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qf_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = qf_efOut [ 0 ] ; zc_int263
= ( ( ( 1.0 - t1989 ) - zc_int251 ) * t1608_idx_0 + t1599_idx_0 * t1989 ) +
t1603_idx_0 * zc_int251 ; t3033 = X [ 276ULL ] * X [ 276ULL ] * t1987 ; t1992
= - pmf_sqrt ( fabs ( t3033 / ( t1984 == 0.0 ? 1.0E-16 : t1984 ) / ( X [
275ULL ] == 0.0 ? 1.0E-16 : X [ 275ULL ] ) ) ) * 0.32 ; if ( t1992 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke = t1992 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke = - t1992 *
100000.0 ; } t3037 = zc_int263 * 0.32 ; t1994 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke * 0.01 / (
t3037 == 0.0 ? 1.0E-16 : t3037 ) ; t2126 = X [ 6ULL ] * t1984 ; t1995 = X [
39ULL ] / ( t2126 == 0.0 ? 1.0E-16 : t2126 ) ; t3039 = t1995 *
6.4000000000000011E-5 ; zc_int21 = t1992 * zc_int263 * 2.9973120849090416 / (
t3039 == 0.0 ? 1.0E-16 : t3039 ) ; t1997 = t1994 >= 1.0 ? t1994 : 1.0 ; t2129
= pmf_log10 ( 6.9 / ( t1997 == 0.0 ? 1.0E-16 : t1997 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1997 == 0.0 ? 1.0E-16 : t1997
) + 0.00017169489553429715 ) * 3.24 ; t2131 = t1995 * 0.0020480000000000003 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke = t1992 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke * ( 1.0 / (
t2129 == 0.0 ? 1.0E-16 : t2129 ) ) * 0.046833001326703774 / ( t2131 == 0.0 ?
1.0E-16 : t2131 ) ; t1997 = ( t1994 - 2000.0 ) / 2000.0 ; zc_int276 = t1997 *
t1997 * 3.0 - t1997 * t1997 * t1997 * 2.0 ; if ( t1994 <= 2000.0 ) { t1997 =
zc_int21 * 1.0E-5 ; } else if ( t1994 >= 4000.0 ) { t1997 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke * 1.0E-5 ; }
else { t1997 = ( ( 1.0 - zc_int276 ) * zc_int21 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke * zc_int276 )
* 1.0E-5 ; } t1988 = - ( X [ 263ULL ] * t1988 ) / 0.32 *
0.00031622776601683789 + t1997 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke = X [ 251ULL
] - X [ 39ULL ] ; zc_int21 = ( X [ 6ULL ] / ( X [ 39ULL ] == 0.0 ? 1.0E-16 :
X [ 39ULL ] ) - X [ 278ULL ] / ( X [ 279ULL ] == 0.0 ? 1.0E-16 : X [ 279ULL ]
) ) * X [ 277ULL ] * t1984 / 0.32 ; if ( X [ 278ULL ] <= 216.59999999999997 )
{ t1997 = 216.59999999999997 ; } else { t1997 = X [ 278ULL ] >= 623.15 ?
623.15 : X [ 278ULL ] ; } zc_int291 = t1997 * t1997 ; zc_int276 = ( ( (
1074.1165326382641 + t1997 * - 0.2214565261064495 ) + zc_int291 *
0.00037212980109014541 ) * ( ( 1.0 - t1953 ) - t1980 ) + ( (
1479.6504774711011 + t1997 * 1.2002114337048222 ) + zc_int291 * -
0.00038614513167823636 ) * t1953 ) + ( ( 12825.281119789837 + t1997 *
6.9647057412840034 ) + zc_int291 * - 0.0070524868246844051 ) * t1980 ;
U_idx_0 = zc_int276 - t1984 ; t1997 = zc_int276 / ( U_idx_0 == 0.0 ? 1.0E-16
: U_idx_0 ) ; zc_int276 = pmf_sqrt ( zc_int21 * zc_int21 *
9.999999999999999E-14 + fabs ( X [ 278ULL ] * t1997 * t1984 ) * 1.0E-9 ) ;
t2140 = X [ 279ULL ] * X [ 279ULL ] * t1997 ; zc_int291 = - pmf_sqrt ( fabs (
t2140 / ( t1984 == 0.0 ? 1.0E-16 : t1984 ) / ( X [ 278ULL ] == 0.0 ? 1.0E-16
: X [ 278ULL ] ) ) ) * 0.32 ; if ( zc_int291 >= 0.0 ) { t2000 = zc_int291 *
100000.0 ; } else { t2000 = - zc_int291 * 100000.0 ; } t2001 = t2000 * 0.01 /
( t3037 == 0.0 ? 1.0E-16 : t3037 ) ; U_idx_0 = zc_int291 * zc_int263 *
2.9973120849090416 / ( t3039 == 0.0 ? 1.0E-16 : t3039 ) ; intrm_sf_mf_740 =
t2001 >= 1.0 ? t2001 : 1.0 ; t2147 = pmf_log10 ( 6.9 / ( intrm_sf_mf_740 ==
0.0 ? 1.0E-16 : intrm_sf_mf_740 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_740 == 0.0 ? 1.0E-16 : intrm_sf_mf_740 ) +
0.00017169489553429715 ) * 3.24 ; t2000 = zc_int291 * t2000 * ( 1.0 / ( t2147
== 0.0 ? 1.0E-16 : t2147 ) ) * 0.046833001326703774 / ( t2131 == 0.0 ?
1.0E-16 : t2131 ) ; intrm_sf_mf_740 = ( t2001 - 2000.0 ) / 2000.0 ; t2009 =
intrm_sf_mf_740 * intrm_sf_mf_740 * 3.0 - intrm_sf_mf_740 * intrm_sf_mf_740 *
intrm_sf_mf_740 * 2.0 ; if ( t2001 <= 2000.0 ) { intrm_sf_mf_740 = U_idx_0 *
1.0E-5 ; } else if ( t2001 >= 4000.0 ) { intrm_sf_mf_740 = t2000 * 1.0E-5 ; }
else { intrm_sf_mf_740 = ( ( 1.0 - t2009 ) * U_idx_0 + t2000 * t2009 ) *
1.0E-5 ; } zc_int276 = X [ 277ULL ] * zc_int276 / 0.32 *
0.00031622776601683789 + intrm_sf_mf_740 ; t2000 = X [ 65ULL ] - X [ 39ULL ]
; t1195 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup ( & rf_efOut .
mField0 [ 0ULL ] , & rf_efOut . mField1 [ 0ULL ] , & rf_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t48 = rf_efOut ;
tlu2_1d_linear_linear_value ( & sf_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ]
, & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = sf_efOut [ 0 ] ;
intrm_sf_mf_740 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & tf_efOut [
0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = tf_efOut [ 0 ] ; t2009 = t1608_idx_0 ; if ( 1.0 - X [ 8ULL
] >= 0.01 ) { t2011 = 1.0 - X [ 8ULL ] ; } else if ( 1.0 - X [ 8ULL ] >= -
0.1 ) { t2011 = pmf_exp ( ( ( 1.0 - X [ 8ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; }
else { t2011 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = X [ 7ULL ]
/ ( t2011 == 0.0 ? 1.0E-16 : t2011 ) * 3827.6794129126583 + 296.802103844292
; tlu2_1d_linear_linear_value ( & uf_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL
] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = uf_efOut [ 0 ] ; t2012 =
pmf_exp ( pmf_log ( X [ 39ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t2012 >=
1.0 ) { t2154 = ( t2012 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens ; t2013 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens / ( t2154 ==
0.0 ? 1.0E-16 : t2154 ) ; } else { t2013 = 1.0 ; } t3116 = t2013 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = ( X [ 8ULL
] - t2013 ) / ( t3116 == 0.0 ? 1.0E-16 : t3116 ) ; if ( X [ 8ULL ] - t2013 <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = 0.0
; } else if ( X [ 8ULL ] - t2013 >= t2013 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = X [ 8ULL ]
- t2013 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = ( X [ 8ULL
] - t2013 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens * 2.0 ) ; }
t1995 = t1995 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = (
intrm_sf_mf_740 - t2009 ) * t1995 ; tlu2_1d_linear_nearest_value ( & vf_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = vf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
wf_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = wf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
xf_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = xf_efOut [ 0 ] ; t2009 = ( ( ( 1.0 - t1989 ) - zc_int251
) * t1608_idx_0 + t1599_idx_0 * t1989 ) + t1603_idx_0 * zc_int251 ; t2013 = (
343.15 - X [ 6ULL ] ) * ( t2009 * 10.709248339636167 / 0.01 ) ;
tlu2_1d_linear_nearest_value ( & yf_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = yf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ag_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ag_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = bg_efOut [ 0 ] ; t2014 =
( ( ( 1.0 - t1989 ) - zc_int251 ) * t1608_idx_0 + t1599_idx_0 * t1989 ) +
t1603_idx_0 * zc_int251 ; t1989 = ( - X [ 263ULL ] - X [ 277ULL ] ) / 2.0 ;
t2162 = ( U_idx_1 + zc_int263 ) / 2.0 * 0.32 ; U_idx_1 = ( t1989 >= 0.0 ?
t1989 : 0.0 ) * 0.01 / ( t2162 == 0.0 ? 1.0E-16 : t2162 ) ; zc_int251 =
U_idx_1 >= 0.0 ? U_idx_1 : - U_idx_1 ; t2015 = zc_int251 > 1000.0 ? zc_int251
: 1000.0 ; t3254 = pmf_log10 ( 6.9 / ( t2015 == 0.0 ? 1.0E-16 : t2015 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2015 == 0.0 ? 1.0E-16 : t2015
) + 0.00017169489553429715 ) * 3.24 ; t2016 = 1.0 / ( t3254 == 0.0 ? 1.0E-16
: t3254 ) ; t2164 = intrm_sf_mf_715 + t2014 ; if ( ( pmf_pow ( t2164 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2016 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t3314 = ( pmf_pow ( ( intrm_sf_mf_715 + t2014 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2016 / 8.0 ) * 12.7 + 1.0 ; t2020
= ( t2015 - 1000.0 ) * ( t2016 / 8.0 ) * ( ( intrm_sf_mf_715 + t2014 ) / 2.0
) / ( t3314 == 0.0 ? 1.0E-16 : t3314 ) ; } else { t2020 = ( t2015 - 1000.0 )
* ( t2016 / 8.0 ) * ( ( intrm_sf_mf_715 + t2014 ) / 2.0 ) / 1.0E-6 ; } t2015
= ( zc_int251 - 2000.0 ) / 2000.0 ; t2016 = t2015 * t2015 * 3.0 - t2015 *
t2015 * t2015 * 2.0 ; if ( zc_int251 <= 2000.0 ) { t2015 = 3.66 ; } else if (
zc_int251 >= 4000.0 ) { t2015 = t2020 ; } else { t2015 = ( 1.0 - t2016 ) *
3.66 + t2020 * t2016 ; } t2175 = t2164 / 2.0 ; if ( zc_int251 > t2015 *
10.709248339636167 / 0.32 / ( t2175 == 0.0 ? 1.0E-16 : t2175 ) / 30.0 ) {
t2181 = ( intrm_sf_mf_715 + t2014 ) / 2.0 ; t2016 = t2015 *
10.709248339636167 / ( zc_int251 == 0.0 ? 1.0E-16 : zc_int251 ) / 0.32 / (
t2181 == 0.0 ? 1.0E-16 : t2181 ) ; } else { t2016 = 30.0 ; } intrm_sf_mf_715
= ( 343.15 - X [ 250ULL ] ) * ( 1.0 - pmf_exp ( - t2016 ) ) ; U_idx_1 =
U_idx_1 * 0.32 / 0.01 * ( t2164 / 2.0 ) * ( ( intrm_sf_mf_718 + t2009 ) / 2.0
) * intrm_sf_mf_715 ; if ( X [ 67ULL ] <= 0.0 ) { intrm_sf_mf_715 = 0.0 ; }
else { intrm_sf_mf_715 = X [ 67ULL ] >= 1.0 ? 1.0 : X [ 67ULL ] ; } if ( X [
66ULL ] <= 0.0 ) { intrm_sf_mf_718 = 0.0 ; } else { intrm_sf_mf_718 = X [
66ULL ] >= 1.0 ? 1.0 : X [ 66ULL ] ; } zc_int251 = ( ( ( 1.0 -
intrm_sf_mf_715 ) - intrm_sf_mf_718 ) * 296.802103844292 + intrm_sf_mf_715 *
461.523 ) + intrm_sf_mf_718 * 4124.48151675695 ; t2015 = X [ 67ULL ] *
461.523 / ( zc_int251 == 0.0 ? 1.0E-16 : zc_int251 ) ; if ( t2015 <= 0.0 ) {
t2016 = 0.0 ; } else { t2016 = t2015 >= 1.0 ? 1.0 : t2015 ; } t2015 = X [
66ULL ] * 4124.48151675695 / ( zc_int251 == 0.0 ? 1.0E-16 : zc_int251 ) ; if
( t2015 <= 0.0 ) { t2020 = 0.0 ; } else { t2020 = t2015 >= 1.0 ? 1.0 : t2015
; } t1195 [ 0ULL ] = X [ 64ULL ] ; tlu2_linear_nearest_prelookup ( & cg_efOut
. mField0 [ 0ULL ] , & cg_efOut . mField1 [ 0ULL ] , & cg_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t32 = cg_efOut ;
tlu2_1d_linear_nearest_value ( & dg_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = dg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & eg_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = eg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fg_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = fg_efOut [ 0 ] ; t2015 =
( ( ( 1.0 - t2016 ) - t2020 ) * t1608_idx_0 + t1599_idx_0 * t2016 ) +
t1603_idx_0 * t2020 ; tlu2_1d_linear_nearest_value ( & gg_efOut [ 0ULL ] , &
t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
gg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hg_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = hg_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ig_efOut [ 0ULL ] , & t32 . mField0
[ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField12 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ig_efOut [ 0
] ; t2021 = ( ( ( 1.0 - t2016 ) - t2020 ) * t1608_idx_0 + t1599_idx_0 * t2016
) + t1603_idx_0 * t2020 ; intrm_sf_mf_688 = t1989 <= 0.0 ? t1989 : 0.0 ;
tlu2_1d_linear_nearest_value ( & jg_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = jg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kg_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = kg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & lg_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = lg_efOut [ 0 ] ; t1989 = (
( ( 1.0 - t2016 ) - t2020 ) * t1608_idx_0 + t1599_idx_0 * t2016 ) +
t1603_idx_0 * t2020 ; t2189 = ( zc_int263 + t1989 ) / 2.0 * 0.32 ; t2016 = -
intrm_sf_mf_688 * 0.01 / ( t2189 == 0.0 ? 1.0E-16 : t2189 ) ; t2020 = t2016
>= 0.0 ? t2016 : - t2016 ; intrm_sf_mf_688 = t2020 > 1000.0 ? t2020 : 1000.0
; t2190 = pmf_log10 ( 6.9 / ( intrm_sf_mf_688 == 0.0 ? 1.0E-16 :
intrm_sf_mf_688 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_688 == 0.0 ? 1.0E-16 : intrm_sf_mf_688 ) + 0.00017169489553429715
) * 3.24 ; t2025 = 1.0 / ( t2190 == 0.0 ? 1.0E-16 : t2190 ) ; t2191 = t2014 +
t2015 ; if ( ( pmf_pow ( t2191 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2025 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2195 = ( pmf_pow ( (
t2014 + t2015 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2025 /
8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 = (
intrm_sf_mf_688 - 1000.0 ) * ( t2025 / 8.0 ) * ( ( t2014 + t2015 ) / 2.0 ) /
( t2195 == 0.0 ? 1.0E-16 : t2195 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 = (
intrm_sf_mf_688 - 1000.0 ) * ( t2025 / 8.0 ) * ( ( t2014 + t2015 ) / 2.0 ) /
1.0E-6 ; } intrm_sf_mf_688 = ( t2020 - 2000.0 ) / 2000.0 ; t2025 =
intrm_sf_mf_688 * intrm_sf_mf_688 * 3.0 - intrm_sf_mf_688 * intrm_sf_mf_688 *
intrm_sf_mf_688 * 2.0 ; if ( t2020 <= 2000.0 ) { intrm_sf_mf_688 = 3.66 ; }
else if ( t2020 >= 4000.0 ) { intrm_sf_mf_688 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 ; } else {
intrm_sf_mf_688 = ( 1.0 - t2025 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 * t2025 ; }
intrm_sf_mf_1188 = t2191 / 2.0 ; if ( t2020 > intrm_sf_mf_688 *
10.709248339636167 / 0.32 / ( intrm_sf_mf_1188 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1188 ) / 30.0 ) { t2208 = ( t2014 + t2015 ) / 2.0 ; t2025 =
intrm_sf_mf_688 * 10.709248339636167 / ( t2020 == 0.0 ? 1.0E-16 : t2020 ) /
0.32 / ( t2208 == 0.0 ? 1.0E-16 : t2208 ) ; } else { t2025 = 30.0 ; } t2014 =
( 343.15 - X [ 64ULL ] ) * ( 1.0 - pmf_exp ( - t2025 ) ) ; t2014 = U_idx_1 +
t2016 * 0.32 / 0.01 * ( t2191 / 2.0 ) * ( ( t2009 + t2021 ) / 2.0 ) * t2014 ;
t2009 = pmf_sqrt ( X [ 263ULL ] * X [ 263ULL ] + 4.3455507383574884E-7 ) ;
t2016 = pmf_sqrt ( X [ 263ULL ] * X [ 263ULL ] + 4.9597684650720062E-8 ) ;
t2020 = pmf_sqrt ( X [ 263ULL ] * X [ 263ULL ] + 3.5023764535063242E-8 ) ;
intrm_sf_mf_688 = pmf_sqrt ( X [ 277ULL ] * X [ 277ULL ] +
4.3455507383574884E-7 ) ; t2025 = pmf_sqrt ( X [ 277ULL ] * X [ 277ULL ] +
4.9597684650720062E-8 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 = pmf_sqrt (
X [ 277ULL ] * X [ 277ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & mg_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ]
, & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = mg_efOut [ 0 ] ; t2031 =
t1608_idx_0 ; tlu2_1d_linear_linear_value ( & ng_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ng_efOut
[ 0 ] ; t2034 = - X [ 271ULL ] + X [ 285ULL ] ; t2035 = ( - X [ 263ULL ] + X
[ 277ULL ] ) - t1995 * 100000.0 ; t2040 = ( - X [ 272ULL ] + X [ 286ULL ] ) -
t1995 * 100000.0 ; t2041 = ( ( ( 1.0 - t1953 ) - t1980 ) * t2031 +
intrm_sf_mf_740 * t1953 ) + t1608_idx_0 * t1980 ; t2045 = t2031 - X [ 6ULL ]
* 0.296802103844292 ; t2031 = t1608_idx_0 - X [ 6ULL ] * 4.12448151675695 ;
t2032 = intrm_sf_mf_740 - X [ 6ULL ] * 0.461523 ; if ( X [ 11ULL ] <= 0.0 ) {
intrm_sf_mf_740 = 0.0 ; } else { intrm_sf_mf_740 = X [ 11ULL ] >= 1.0 ? 1.0 :
X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) { t2047 = 0.0 ; } else { t2047 = X
[ 10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ; } t2049 = ( ( ( 1.0 - intrm_sf_mf_740
) - t2047 ) * 296.802103844292 + intrm_sf_mf_740 * 461.523 ) + t2047 *
4124.48151675695 ; t2050 = - ( ( X [ 9ULL ] / ( X [ 40ULL ] == 0.0 ? 1.0E-16
: X [ 40ULL ] ) - X [ 289ULL ] / ( X [ 290ULL ] == 0.0 ? 1.0E-16 : X [ 290ULL
] ) ) * X [ 277ULL ] * t2049 ) / 0.32 ; if ( X [ 289ULL ] <=
216.59999999999997 ) { t2052 = 216.59999999999997 ; } else { t2052 = X [
289ULL ] >= 623.15 ? 623.15 : X [ 289ULL ] ; } t2054 = t2052 * t2052 ; t2053
= ( ( ( 1074.1165326382641 + t2052 * - 0.2214565261064495 ) + t2054 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_740 ) - t2047 ) + ( (
1479.6504774711011 + t2052 * 1.2002114337048222 ) + t2054 * -
0.00038614513167823636 ) * intrm_sf_mf_740 ) + ( ( 12825.281119789837 + t2052
* 6.9647057412840034 ) + t2054 * - 0.0070524868246844051 ) * t2047 ; t3393 =
t2053 - t2049 ; t2052 = t2053 / ( t3393 == 0.0 ? 1.0E-16 : t3393 ) ; t2053 =
pmf_sqrt ( t2050 * t2050 * 9.999999999999999E-14 + fabs ( X [ 289ULL ] *
t2052 * t2049 ) * 1.0E-9 ) ; if ( X [ 81ULL ] <= 0.0 ) { t2054 = 0.0 ; } else
{ t2054 = X [ 81ULL ] >= 1.0 ? 1.0 : X [ 81ULL ] ; } if ( X [ 80ULL ] <= 0.0
) { t2055 = 0.0 ; } else { t2055 = X [ 80ULL ] >= 1.0 ? 1.0 : X [ 80ULL ] ; }
t1195 [ 0ULL ] = X [ 9ULL ] ; tlu2_linear_nearest_prelookup ( & og_efOut .
mField0 [ 0ULL ] , & og_efOut . mField1 [ 0ULL ] , & og_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = og_efOut ;
tlu2_1d_linear_nearest_value ( & pg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = pg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = qg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = rg_efOut [ 0 ] ; piece151
= ( ( ( 1.0 - t2054 ) - t2055 ) * t1608_idx_0 + t1599_idx_0 * t2054 ) +
t1603_idx_0 * t2055 ; t2218 = X [ 290ULL ] * X [ 290ULL ] * t2052 ; t2057 = -
pmf_sqrt ( fabs ( t2218 / ( t2049 == 0.0 ? 1.0E-16 : t2049 ) / ( X [ 289ULL ]
== 0.0 ? 1.0E-16 : X [ 289ULL ] ) ) ) * 0.32 ; if ( t2057 >= 0.0 ) { t2058 =
t2057 * 100000.0 ; } else { t2058 = - t2057 * 100000.0 ; } t2222 = piece151 *
0.32 ; t2059 = t2058 * 0.01 / ( t2222 == 0.0 ? 1.0E-16 : t2222 ) ; t2224 = X
[ 9ULL ] * t2049 ; piece170 = X [ 40ULL ] / ( t2224 == 0.0 ? 1.0E-16 : t2224
) ; t2226 = piece170 * 6.4000000000000011E-5 ; t2061 = t2057 * piece151 *
2.9973120849090416 / ( t2226 == 0.0 ? 1.0E-16 : t2226 ) ; intrm_sf_mf_758 =
t2059 >= 1.0 ? t2059 : 1.0 ; t2227 = pmf_log10 ( 6.9 / ( intrm_sf_mf_758 ==
0.0 ? 1.0E-16 : intrm_sf_mf_758 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_758 == 0.0 ? 1.0E-16 : intrm_sf_mf_758 ) +
0.00017169489553429715 ) * 3.24 ; t2229 = piece170 * 0.0020480000000000003 ;
t2058 = t2057 * t2058 * ( 1.0 / ( t2227 == 0.0 ? 1.0E-16 : t2227 ) ) *
0.046833001326703774 / ( t2229 == 0.0 ? 1.0E-16 : t2229 ) ; intrm_sf_mf_758 =
( t2059 - 2000.0 ) / 2000.0 ; piece175 = intrm_sf_mf_758 * intrm_sf_mf_758 *
3.0 - intrm_sf_mf_758 * intrm_sf_mf_758 * intrm_sf_mf_758 * 2.0 ; if ( t2059
<= 2000.0 ) { intrm_sf_mf_758 = t2061 * 1.0E-5 ; } else if ( t2059 >= 4000.0
) { intrm_sf_mf_758 = t2058 * 1.0E-5 ; } else { intrm_sf_mf_758 = ( ( 1.0 -
piece175 ) * t2061 + t2058 * piece175 ) * 1.0E-5 ; } t2053 = - ( X [ 277ULL ]
* t2053 ) / 0.32 * 0.00031622776601683789 + intrm_sf_mf_758 ; t2058 = X [
65ULL ] - X [ 40ULL ] ; t2061 = - ( ( X [ 9ULL ] / ( X [ 40ULL ] == 0.0 ?
1.0E-16 : X [ 40ULL ] ) - X [ 291ULL ] / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X
[ 292ULL ] ) ) * X [ 134ULL ] * t2049 ) / 0.32 ; if ( X [ 291ULL ] <=
216.59999999999997 ) { intrm_sf_mf_758 = 216.59999999999997 ; } else {
intrm_sf_mf_758 = X [ 291ULL ] >= 623.15 ? 623.15 : X [ 291ULL ] ; } t2064 =
intrm_sf_mf_758 * intrm_sf_mf_758 ; piece175 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_758 * - 0.2214565261064495 ) + t2064 * 0.00037212980109014541 ) *
( ( 1.0 - intrm_sf_mf_740 ) - t2047 ) + ( ( 1479.6504774711011 +
intrm_sf_mf_758 * 1.2002114337048222 ) + t2064 * - 0.00038614513167823636 ) *
intrm_sf_mf_740 ) + ( ( 12825.281119789837 + intrm_sf_mf_758 *
6.9647057412840034 ) + t2064 * - 0.0070524868246844051 ) * t2047 ; t2237 =
piece175 - t2049 ; intrm_sf_mf_758 = piece175 / ( t2237 == 0.0 ? 1.0E-16 :
t2237 ) ; piece175 = pmf_sqrt ( t2061 * t2061 * 9.999999999999999E-14 + fabs
( X [ 291ULL ] * intrm_sf_mf_758 * t2049 ) * 1.0E-9 ) ; t2238 = X [ 292ULL ]
* X [ 292ULL ] * intrm_sf_mf_758 ; t2064 = - pmf_sqrt ( fabs ( t2238 / (
t2049 == 0.0 ? 1.0E-16 : t2049 ) / ( X [ 291ULL ] == 0.0 ? 1.0E-16 : X [
291ULL ] ) ) ) * 0.32 ; if ( t2064 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = t2064 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = - t2064 *
100000.0 ; } t2066 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok * 0.01 / (
t2222 == 0.0 ? 1.0E-16 : t2222 ) ; U_idx_0 = t2064 * piece151 *
2.9973120849090416 / ( t2226 == 0.0 ? 1.0E-16 : t2226 ) ; t2068 = t2066 >=
1.0 ? t2066 : 1.0 ; t2245 = pmf_log10 ( 6.9 / ( t2068 == 0.0 ? 1.0E-16 :
t2068 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2068 == 0.0 ?
1.0E-16 : t2068 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = t2064 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok * ( 1.0 / (
t2245 == 0.0 ? 1.0E-16 : t2245 ) ) * 0.046833001326703774 / ( t2229 == 0.0 ?
1.0E-16 : t2229 ) ; t2068 = ( t2066 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = t2068 * t2068
* 3.0 - t2068 * t2068 * t2068 * 2.0 ; if ( t2066 <= 2000.0 ) { t2068 =
U_idx_0 * 1.0E-5 ; } else if ( t2066 >= 4000.0 ) { t2068 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok * 1.0E-5 ; }
else { t2068 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) * U_idx_0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) * 1.0E-5 ; }
piece175 = - ( X [ 134ULL ] * piece175 ) / 0.32 * 0.00031622776601683789 +
t2068 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = X [
112ULL ] - X [ 40ULL ] ; t1195 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & sg_efOut . mField0 [ 0ULL ] , & sg_efOut .
mField1 [ 0ULL ] , & sg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t86 = sg_efOut ; tlu2_1d_linear_linear_value ( & tg_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = tg_efOut
[ 0 ] ; t2068 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & ug_efOut [ 0ULL
] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = ug_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = t1608_idx_0 ;
if ( 1.0 - X [ 11ULL ] >= 0.01 ) { t2071 = 1.0 - X [ 11ULL ] ; } else if (
1.0 - X [ 11ULL ] >= - 0.1 ) { t2071 = pmf_exp ( ( ( 1.0 - X [ 11ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t2071 = 1.6701700790245661E-7 ; }
intrm_sf_mf_826 = X [ 10ULL ] / ( t2071 == 0.0 ? 1.0E-16 : t2071 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
vg_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = vg_efOut [ 0 ] ; t2072 = pmf_exp ( pmf_log ( X [ 40ULL ] *
100000.0 ) - t1608_idx_0 ) ; if ( t2072 >= 1.0 ) { t2252 = ( t2072 - 1.0 ) *
461.523 + intrm_sf_mf_826 ; t2073 = intrm_sf_mf_826 / ( t2252 == 0.0 ?
1.0E-16 : t2252 ) ; } else { t2073 = 1.0 ; } t2254 = t2073 * 0.01 ;
intrm_sf_mf_826 = ( X [ 11ULL ] - t2073 ) / ( t2254 == 0.0 ? 1.0E-16 : t2254
) ; if ( X [ 11ULL ] - t2073 <= 0.0 ) { intrm_sf_mf_826 = 0.0 ; } else if ( X
[ 11ULL ] - t2073 >= t2073 * 0.01 ) { intrm_sf_mf_826 = X [ 11ULL ] - t2073 ;
} else { intrm_sf_mf_826 = ( X [ 11ULL ] - t2073 ) * ( intrm_sf_mf_826 *
intrm_sf_mf_826 * 3.0 - intrm_sf_mf_826 * intrm_sf_mf_826 * intrm_sf_mf_826 *
2.0 ) ; } piece170 = piece170 * intrm_sf_mf_826 * 0.026773120849090417 /
0.001 ; intrm_sf_mf_826 = ( t2068 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) * piece170 ;
tlu2_1d_linear_nearest_value ( & wg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = wg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = xg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yg_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = yg_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = ( ( ( 1.0 -
t2054 ) - t2055 ) * t1608_idx_0 + t1599_idx_0 * t2054 ) + t1603_idx_0 * t2055
; t2073 = ( 343.15 - X [ 9ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total *
10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( & ah_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = ah_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
bh_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = bh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ch_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = ch_efOut [ 0 ] ; t2074 = ( ( ( 1.0 - t2054 ) - t2055 ) *
t1608_idx_0 + t1599_idx_0 * t2054 ) + t1603_idx_0 * t2055 ; t2054 = ( - X [
277ULL ] - ( - X [ 134ULL ] ) ) / 2.0 ; intrm_sf_mf_1269 = ( t1989 + piece151
) / 2.0 * 0.32 ; t1989 = ( t2054 >= 0.0 ? t2054 : 0.0 ) * 0.01 / (
intrm_sf_mf_1269 == 0.0 ? 1.0E-16 : intrm_sf_mf_1269 ) ; t2055 = t1989 >= 0.0
? t1989 : - t1989 ; t2076 = t2055 > 1000.0 ? t2055 : 1000.0 ; t2261 =
pmf_log10 ( 6.9 / ( t2076 == 0.0 ? 1.0E-16 : t2076 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2076 == 0.0 ? 1.0E-16 : t2076 ) +
0.00017169489553429715 ) * 3.24 ; U_idx_0 = 1.0 / ( t2261 == 0.0 ? 1.0E-16 :
t2261 ) ; t2262 = t2015 + t2074 ; if ( ( pmf_pow ( t2262 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( U_idx_0 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t2266 = ( pmf_pow ( ( t2015 + t2074 ) / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( U_idx_0 / 8.0 ) * 12.7 + 1.0 ; t2078 = ( t2076 -
1000.0 ) * ( U_idx_0 / 8.0 ) * ( ( t2015 + t2074 ) / 2.0 ) / ( t2266 == 0.0 ?
1.0E-16 : t2266 ) ; } else { t2078 = ( t2076 - 1000.0 ) * ( U_idx_0 / 8.0 ) *
( ( t2015 + t2074 ) / 2.0 ) / 1.0E-6 ; } t2076 = ( t2055 - 2000.0 ) / 2000.0
; U_idx_0 = t2076 * t2076 * 3.0 - t2076 * t2076 * t2076 * 2.0 ; if ( t2055 <=
2000.0 ) { t2076 = 3.66 ; } else if ( t2055 >= 4000.0 ) { t2076 = t2078 ; }
else { t2076 = ( 1.0 - U_idx_0 ) * 3.66 + t2078 * U_idx_0 ; } t2273 = t2262 /
2.0 ; if ( t2055 > t2076 * 10.709248339636167 / 0.32 / ( t2273 == 0.0 ?
1.0E-16 : t2273 ) / 30.0 ) { t2279 = ( t2015 + t2074 ) / 2.0 ; U_idx_0 =
t2076 * 10.709248339636167 / ( t2055 == 0.0 ? 1.0E-16 : t2055 ) / 0.32 / (
t2279 == 0.0 ? 1.0E-16 : t2279 ) ; } else { U_idx_0 = 30.0 ; } t2015 = (
343.15 - X [ 64ULL ] ) * ( 1.0 - pmf_exp ( - U_idx_0 ) ) ; t1989 = t1989 *
0.32 / 0.01 * ( t2262 / 2.0 ) * ( ( t2021 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) / 2.0 ) *
t2015 ; t2285 = ( piece151 + piece218 ) / 2.0 * 0.32 ; piece218 = - ( t2054
<= 0.0 ? t2054 : 0.0 ) * 0.01 / ( t2285 == 0.0 ? 1.0E-16 : t2285 ) ; t2015 =
piece218 >= 0.0 ? piece218 : - piece218 ; t2021 = t2015 > 1000.0 ? t2015 :
1000.0 ; t2286 = pmf_log10 ( 6.9 / ( t2021 == 0.0 ? 1.0E-16 : t2021 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2021 == 0.0 ? 1.0E-16 : t2021
) + 0.00017169489553429715 ) * 3.24 ; t2054 = 1.0 / ( t2286 == 0.0 ? 1.0E-16
: t2286 ) ; t2287 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv
+ t2074 ; if ( ( pmf_pow ( t2287 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2054 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { intrm_sf_mf_192 = (
pmf_pow ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2074
) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2054 / 8.0 ) * 12.7 +
1.0 ; t2055 = ( t2021 - 1000.0 ) * ( t2054 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2074 ) / 2.0 ) /
( intrm_sf_mf_192 == 0.0 ? 1.0E-16 : intrm_sf_mf_192 ) ; } else { t2055 = (
t2021 - 1000.0 ) * ( t2054 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2074 ) / 2.0 ) /
1.0E-6 ; } t2021 = ( t2015 - 2000.0 ) / 2000.0 ; t2054 = t2021 * t2021 * 3.0
- t2021 * t2021 * t2021 * 2.0 ; if ( t2015 <= 2000.0 ) { t2021 = 3.66 ; }
else if ( t2015 >= 4000.0 ) { t2021 = t2055 ; } else { t2021 = ( 1.0 - t2054
) * 3.66 + t2055 * t2054 ; } t2298 = t2287 / 2.0 ; if ( t2015 > t2021 *
10.709248339636167 / 0.32 / ( t2298 == 0.0 ? 1.0E-16 : t2298 ) / 30.0 ) {
t2304 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2074 )
/ 2.0 ; t2054 = t2021 * 10.709248339636167 / ( t2015 == 0.0 ? 1.0E-16 : t2015
) / 0.32 / ( t2304 == 0.0 ? 1.0E-16 : t2304 ) ; } else { t2054 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = ( 343.15 - X [
111ULL ] ) * ( 1.0 - pmf_exp ( - t2054 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = t1989 + piece218
* 0.32 / 0.01 * ( t2287 / 2.0 ) * ( ( t1766 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; t1766 = pmf_sqrt
( X [ 134ULL ] * X [ 134ULL ] + 4.3455507383574884E-7 ) ; t1989 = pmf_sqrt (
X [ 134ULL ] * X [ 134ULL ] + 4.9597684650720062E-8 ) ; t2015 = pmf_sqrt ( X
[ 134ULL ] * X [ 134ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & dh_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = dh_efOut [ 0 ] ; t2021 =
t1608_idx_0 ; tlu2_1d_linear_linear_value ( & eh_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = eh_efOut
[ 0 ] ; t2055 = ( - X [ 285ULL ] - X [ 145ULL ] ) + X [ 98ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = ( ( ( - X [
277ULL ] - X [ 134ULL ] ) + X [ 98ULL ] ) + X [ 104ULL ] ) - piece170 *
100000.0 ; t2074 = ( ( - X [ 286ULL ] - X [ 146ULL ] ) + X [ 104ULL ] ) -
piece170 * 100000.0 ; t2076 = ( ( ( 1.0 - intrm_sf_mf_740 ) - t2047 ) * t2021
+ t2068 * intrm_sf_mf_740 ) + t1608_idx_0 * t2047 ; t2078 = t2021 - X [ 9ULL
] * 0.296802103844292 ; t2021 = t1608_idx_0 - X [ 9ULL ] * 4.12448151675695 ;
t2054 = t2068 - X [ 9ULL ] * 0.461523 ; if ( X [ 43ULL ] <= 0.0 ) { t2068 =
0.0 ; } else { t2068 = X [ 43ULL ] >= 1.0 ? 1.0 : X [ 43ULL ] ; } if ( X [
42ULL ] <= 0.0 ) { t2079 = 0.0 ; } else { t2079 = X [ 42ULL ] >= 1.0 ? 1.0 :
X [ 42ULL ] ; } t2080 = ( ( ( 1.0 - t2068 ) - t2079 ) * 296.802103844292 +
t2068 * 461.523 ) + t2079 * 259.836612622973 ; t2081 = - ( ( X [ 41ULL ] / (
X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 310ULL ] / ( X [ 311ULL ]
== 0.0 ? 1.0E-16 : X [ 311ULL ] ) ) * X [ 244ULL ] * t2080 ) /
0.0019634954084936209 ; if ( X [ 310ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = X [ 310ULL ] >=
623.15 ? 623.15 : X [ 310ULL ] ; } t2084 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; t2083 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.2214565261064495 ) + t2084 * 0.00037212980109014541 ) * ( ( 1.0 - t2068 ) -
t2079 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
1.2002114337048222 ) + t2084 * - 0.00038614513167823636 ) * t2068 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * -
0.044484923911382625 ) + t2084 * 0.00036936011832044979 ) * t2079 ; t2313 =
t2083 - t2080 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
t2083 / ( t2313 == 0.0 ? 1.0E-16 : t2313 ) ; t2083 = pmf_sqrt ( t2081 * t2081
* 9.999999999999999E-14 + fabs ( X [ 310ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * t2080 ) * 1.0E-9
) ; if ( X [ 308ULL ] <= 0.0 ) { t2084 = 0.0 ; } else { t2084 = X [ 308ULL ]
>= 1.0 ? 1.0 : X [ 308ULL ] ; } if ( X [ 307ULL ] <= 0.0 ) { U_idx_2 = 0.0 ;
} else { U_idx_2 = X [ 307ULL ] >= 1.0 ? 1.0 : X [ 307ULL ] ; } t1195 [ 0ULL
] = X [ 41ULL ] ; tlu2_linear_nearest_prelookup ( & fh_efOut . mField0 [ 0ULL
] , & fh_efOut . mField1 [ 0ULL ] , & fh_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t86 = fh_efOut ; tlu2_1d_linear_nearest_value ( &
gh_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = gh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hh_efOut
[ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = hh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ih_efOut
[ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = ih_efOut [ 0 ] ; t2087 = ( ( ( 1.0 - t2084 ) - U_idx_2 )
* t1608_idx_0 + t1599_idx_0 * t2084 ) + t1603_idx_0 * U_idx_2 ; t2314 = X [
311ULL ] * X [ 311ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI ; t3398 = -
pmf_sqrt ( fabs ( t2314 / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) / ( X [ 310ULL ]
== 0.0 ? 1.0E-16 : X [ 310ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3398 >=
0.0 ) { t2089 = t3398 * 100000.0 ; } else { t2089 = - t3398 * 100000.0 ; }
t2318 = t2087 * 0.0019634954084936209 ; t3051 = t2089 * 0.05 / ( t2318 == 0.0
? 1.0E-16 : t2318 ) ; t2320 = X [ 41ULL ] * t2080 ; t3396 = X [ 44ULL ] / (
t2320 == 0.0 ? 1.0E-16 : t2320 ) ; t2322 = t3396 * 9.8174770424681068E-6 ;
t3068 = t3398 * t2087 * 11.2 / ( t2322 == 0.0 ? 1.0E-16 : t2322 ) ; t3143 =
t3051 >= 1.0 ? t3051 : 1.0 ; t2323 = pmf_log10 ( 6.9 / ( t3143 == 0.0 ?
1.0E-16 : t3143 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3143 ==
0.0 ? 1.0E-16 : t3143 ) + 2.8767404433520813E-5 ) * 3.24 ; t2325 = t3396 *
3.855314219175531E-7 ; t2089 = t3398 * t2089 * ( 1.0 / ( t2323 == 0.0 ?
1.0E-16 : t2323 ) ) * 0.175 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) ; t3143 = (
t3051 - 2000.0 ) / 2000.0 ; t3075 = t3143 * t3143 * 3.0 - t3143 * t3143 *
t3143 * 2.0 ; if ( t3051 <= 2000.0 ) { t3143 = t3068 * 1.0E-5 ; } else if (
t3051 >= 4000.0 ) { t3143 = t2089 * 1.0E-5 ; } else { t3143 = ( ( 1.0 - t3075
) * t3068 + t2089 * t3075 ) * 1.0E-5 ; } t2083 = - ( X [ 244ULL ] * t2083 ) /
0.0019634954084936209 * 0.00031622776601683789 + t3143 ; t2089 = X [ 31ULL ]
- X [ 44ULL ] ; t3068 = ( X [ 41ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [
44ULL ] ) - X [ 313ULL ] / ( X [ 314ULL ] == 0.0 ? 1.0E-16 : X [ 314ULL ] ) )
* X [ 312ULL ] * t2080 / 0.0019634954084936209 ; if ( X [ 313ULL ] <=
216.59999999999997 ) { t3143 = 216.59999999999997 ; } else { t3143 = X [
313ULL ] >= 623.15 ? 623.15 : X [ 313ULL ] ; } t3211 = t3143 * t3143 ; t3075
= ( ( ( 1074.1165326382641 + t3143 * - 0.2214565261064495 ) + t3211 *
0.00037212980109014541 ) * ( ( 1.0 - t2068 ) - t2079 ) + ( (
1479.6504774711011 + t3143 * 1.2002114337048222 ) + t3211 * -
0.00038614513167823636 ) * t2068 ) + ( ( 900.63941224838356 + t3143 * -
0.044484923911382625 ) + t3211 * 0.00036936011832044979 ) * t2079 ; t2333 =
t3075 - t2080 ; t3143 = t3075 / ( t2333 == 0.0 ? 1.0E-16 : t2333 ) ; t3075 =
pmf_sqrt ( t3068 * t3068 * 9.999999999999999E-14 + fabs ( X [ 313ULL ] *
t3143 * t2080 ) * 1.0E-9 ) ; t2334 = X [ 314ULL ] * X [ 314ULL ] * t3143 ;
t3211 = - pmf_sqrt ( fabs ( t2334 / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) / ( X
[ 313ULL ] == 0.0 ? 1.0E-16 : X [ 313ULL ] ) ) ) * 0.0019634954084936209 ; if
( t3211 >= 0.0 ) { t2096 = t3211 * 100000.0 ; } else { t2096 = - t3211 *
100000.0 ; } t3079 = t2096 * 0.05 / ( t2318 == 0.0 ? 1.0E-16 : t2318 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 = t3211 *
t2087 * 11.2 / ( t2322 == 0.0 ? 1.0E-16 : t2322 ) ; t2099 = t3079 >= 1.0 ?
t3079 : 1.0 ; t2341 = pmf_log10 ( 6.9 / ( t2099 == 0.0 ? 1.0E-16 : t2099 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2099 == 0.0 ? 1.0E-16 : t2099
) + 2.8767404433520813E-5 ) * 3.24 ; t2096 = t3211 * t2096 * ( 1.0 / ( t2341
== 0.0 ? 1.0E-16 : t2341 ) ) * 0.175 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) ;
t2099 = ( t3079 - 2000.0 ) / 2000.0 ; t3397 = t2099 * t2099 * 3.0 - t2099 *
t2099 * t2099 * 2.0 ; if ( t3079 <= 2000.0 ) { t2099 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 * 1.0E-5 ; }
else if ( t3079 >= 4000.0 ) { t2099 = t2096 * 1.0E-5 ; } else { t2099 = ( (
1.0 - t3397 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 + t2096 *
t3397 ) * 1.0E-5 ; } t3075 = X [ 312ULL ] * t3075 / 0.0019634954084936209 *
0.00031622776601683789 + t2099 ; t2096 = X [ 300ULL ] - X [ 44ULL ] ; t1195 [
0ULL ] = X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & jh_efOut . mField0 [
0ULL ] , & jh_efOut . mField1 [ 0ULL ] , & jh_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t77 = jh_efOut ; tlu2_1d_linear_linear_value ( &
kh_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = kh_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 = t1608_idx_0
; tlu2_1d_linear_linear_value ( & lh_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL
] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = lh_efOut [ 0 ] ; t2099 =
t1608_idx_0 ; if ( 1.0 - X [ 43ULL ] >= 0.01 ) { t2101 = 1.0 - X [ 43ULL ] ;
} else if ( 1.0 - X [ 43ULL ] >= - 0.1 ) { t2101 = pmf_exp ( ( ( 1.0 - X [
43ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2101 = 1.6701700790245661E-7 ;
} t3397 = X [ 42ULL ] / ( t2101 == 0.0 ? 1.0E-16 : t2101 ) * -
36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
mh_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = mh_efOut [ 0 ] ; t2103 = pmf_exp ( pmf_log ( X [ 44ULL ] *
100000.0 ) - t1608_idx_0 ) ; if ( t2103 >= 1.0 ) { t2348 = ( t2103 - 1.0 ) *
461.523 + t3397 ; t2104 = t3397 / ( t2348 == 0.0 ? 1.0E-16 : t2348 ) ; } else
{ t2104 = 1.0 ; } t2350 = t2104 * 0.01 ; t3397 = ( X [ 43ULL ] - t2104 ) / (
t2350 == 0.0 ? 1.0E-16 : t2350 ) ; if ( X [ 43ULL ] - t2104 <= 0.0 ) { t3397
= 0.0 ; } else if ( X [ 43ULL ] - t2104 >= t2104 * 0.01 ) { t3397 = X [ 43ULL
] - t2104 ; } else { t3397 = ( X [ 43ULL ] - t2104 ) * ( t3397 * t3397 * 3.0
- t3397 * t3397 * t3397 * 2.0 ) ; } t3396 = t3396 * t3397 *
0.00049087385212340522 / 0.001 ; t3397 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 - t2099 ) *
t3396 ; tlu2_1d_linear_nearest_value ( & nh_efOut [ 0ULL ] , & t86 . mField0
[ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = nh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & oh_efOut [ 0ULL ] , & t86 . mField0 [
0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = oh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ph_efOut [ 0ULL ] , & t86 . mField0 [
0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ph_efOut [ 0
] ; t2099 = ( ( ( 1.0 - t2084 ) - U_idx_2 ) * t1608_idx_0 + t1599_idx_0 *
t2084 ) + t1603_idx_0 * U_idx_2 ; t2104 = ( X [ 309ULL ] - X [ 41ULL ] ) * (
t2099 * 0.039269908169872414 / 0.05 ) ; if ( X [ 234ULL ] <= 0.0 ) { t2105 =
0.0 ; } else { t2105 = X [ 234ULL ] >= 1.0 ? 1.0 : X [ 234ULL ] ; } if ( X [
233ULL ] <= 0.0 ) { t3391 = 0.0 ; } else { t3391 = X [ 233ULL ] >= 1.0 ? 1.0
: X [ 233ULL ] ; } t2107 = ( ( ( 1.0 - t2105 ) - t3391 ) * 296.802103844292 +
t2105 * 461.523 ) + t3391 * 259.836612622973 ; intrm_sf_mf_934 = X [ 234ULL ]
* 461.523 / ( t2107 == 0.0 ? 1.0E-16 : t2107 ) ; if ( intrm_sf_mf_934 <= 0.0
) { intrm_sf_mf_1299 = 0.0 ; } else { intrm_sf_mf_1299 = intrm_sf_mf_934 >=
1.0 ? 1.0 : intrm_sf_mf_934 ; } intrm_sf_mf_934 = X [ 233ULL ] *
259.836612622973 / ( t2107 == 0.0 ? 1.0E-16 : t2107 ) ; if ( intrm_sf_mf_934
<= 0.0 ) { t3200 = 0.0 ; } else { t3200 = intrm_sf_mf_934 >= 1.0 ? 1.0 :
intrm_sf_mf_934 ; } t1195 [ 0ULL ] = X [ 232ULL ] ;
tlu2_linear_nearest_prelookup ( & qh_efOut . mField0 [ 0ULL ] , & qh_efOut .
mField1 [ 0ULL ] , & qh_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t32 = qh_efOut ; tlu2_1d_linear_nearest_value ( & rh_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = rh_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & sh_efOut [ 0ULL ] , & t32 . mField0
[ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = sh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & th_efOut [ 0ULL ] , & t32 . mField0 [
0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField19 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = th_efOut [ 0
] ; intrm_sf_mf_934 = ( ( ( 1.0 - intrm_sf_mf_1299 ) - t3200 ) * t1608_idx_0
+ t1599_idx_0 * intrm_sf_mf_1299 ) + t1603_idx_0 * t3200 ;
tlu2_1d_linear_nearest_value ( & uh_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = uh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vh_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = vh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wh_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = wh_efOut [ 0 ] ; t2111 =
( ( ( 1.0 - t2084 ) - U_idx_2 ) * t1608_idx_0 + t1599_idx_0 * t2084 ) +
t1603_idx_0 * U_idx_2 ; tlu2_1d_linear_nearest_value ( & xh_efOut [ 0ULL ] ,
& t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
xh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & yh_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = yh_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ai_efOut [ 0ULL ] , & t32 . mField0
[ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ai_efOut [ 0
] ; t2084 = ( ( ( 1.0 - intrm_sf_mf_1299 ) - t3200 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_1299 ) + t1603_idx_0 * t3200 ; U_idx_2 = ( - X [
244ULL ] - X [ 312ULL ] ) / 2.0 ; tlu2_1d_linear_nearest_value ( & bi_efOut [
0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = bi_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ci_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = ci_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & di_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = di_efOut [ 0 ] ; t2358 = ( t2087 + ( ( ( ( 1.0 -
intrm_sf_mf_1299 ) - t3200 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_1299 )
+ t1603_idx_0 * t3200 ) ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_1299 =
( U_idx_2 >= 0.0 ? U_idx_2 : 0.0 ) * 0.05 / ( t2358 == 0.0 ? 1.0E-16 : t2358
) ; t3200 = intrm_sf_mf_1299 >= 0.0 ? intrm_sf_mf_1299 : - intrm_sf_mf_1299 ;
t3299 = t3200 > 1000.0 ? t3200 : 1000.0 ; t2359 = pmf_log10 ( 6.9 / ( t3299
== 0.0 ? 1.0E-16 : t3299 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t3299 == 0.0 ? 1.0E-16 : t3299 ) + 2.8767404433520813E-5 ) * 3.24 ; t2114 =
1.0 / ( t2359 == 0.0 ? 1.0E-16 : t2359 ) ; t2360 = intrm_sf_mf_934 + t2111 ;
if ( ( pmf_pow ( t2360 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t2114 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { intrm_sf_mf_871 = ( pmf_pow ( (
intrm_sf_mf_934 + t2111 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t2114 / 8.0 ) * 12.7 + 1.0 ; t2118 = ( t3299 - 1000.0 ) * ( t2114 / 8.0 ) * (
( intrm_sf_mf_934 + t2111 ) / 2.0 ) / ( intrm_sf_mf_871 == 0.0 ? 1.0E-16 :
intrm_sf_mf_871 ) ; } else { t2118 = ( t3299 - 1000.0 ) * ( t2114 / 8.0 ) * (
( intrm_sf_mf_934 + t2111 ) / 2.0 ) / 1.0E-6 ; } t3299 = ( t3200 - 2000.0 ) /
2000.0 ; t2114 = t3299 * t3299 * 3.0 - t3299 * t3299 * t3299 * 2.0 ; if (
t3200 <= 2000.0 ) { t3299 = 3.66 ; } else if ( t3200 >= 4000.0 ) { t3299 =
t2118 ; } else { t3299 = ( 1.0 - t2114 ) * 3.66 + t2118 * t2114 ; } t2408 =
t2360 / 2.0 ; if ( t3200 > t3299 * 0.039269908169872414 /
0.0019634954084936209 / ( t2408 == 0.0 ? 1.0E-16 : t2408 ) / 30.0 ) { t2417 =
( intrm_sf_mf_934 + t2111 ) / 2.0 ; t2114 = t3299 * 0.039269908169872414 / (
t3200 == 0.0 ? 1.0E-16 : t3200 ) / 0.0019634954084936209 / ( t2417 == 0.0 ?
1.0E-16 : t2417 ) ; } else { t2114 = 30.0 ; } intrm_sf_mf_934 = ( X [ 309ULL
] - X [ 232ULL ] ) * ( 1.0 - pmf_exp ( - t2114 ) ) ; t2084 = intrm_sf_mf_1299
* 0.0019634954084936209 / 0.05 * ( t2360 / 2.0 ) * ( ( t2084 + t2099 ) / 2.0
) * intrm_sf_mf_934 ; if ( X [ 302ULL ] <= 0.0 ) { intrm_sf_mf_934 = 0.0 ; }
else { intrm_sf_mf_934 = X [ 302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } if ( X
[ 301ULL ] <= 0.0 ) { intrm_sf_mf_1299 = 0.0 ; } else { intrm_sf_mf_1299 = X
[ 301ULL ] >= 1.0 ? 1.0 : X [ 301ULL ] ; } t3200 = ( ( ( 1.0 -
intrm_sf_mf_934 ) - intrm_sf_mf_1299 ) * 296.802103844292 + intrm_sf_mf_934 *
461.523 ) + intrm_sf_mf_1299 * 259.836612622973 ; t3299 = X [ 302ULL ] *
461.523 / ( t3200 == 0.0 ? 1.0E-16 : t3200 ) ; if ( t3299 <= 0.0 ) { t2114 =
0.0 ; } else { t2114 = t3299 >= 1.0 ? 1.0 : t3299 ; } t3299 = X [ 301ULL ] *
259.836612622973 / ( t3200 == 0.0 ? 1.0E-16 : t3200 ) ; if ( t3299 <= 0.0 ) {
t2118 = 0.0 ; } else { t2118 = t3299 >= 1.0 ? 1.0 : t3299 ; } t1195 [ 0ULL ]
= X [ 299ULL ] ; tlu2_linear_nearest_prelookup ( & ei_efOut . mField0 [ 0ULL
] , & ei_efOut . mField1 [ 0ULL ] , & ei_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t48 = ei_efOut ; tlu2_1d_linear_nearest_value ( &
fi_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = fi_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
gi_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = gi_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
hi_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = hi_efOut [ 0 ] ; t3299 = ( ( ( 1.0 - t2114 ) - t2118 ) *
t1608_idx_0 + t1599_idx_0 * t2114 ) + t1603_idx_0 * t2118 ;
tlu2_1d_linear_nearest_value ( & ii_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ]
, & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ii_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ji_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ]
, & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ji_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ki_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ]
, & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ki_efOut [ 0 ] ; t2119 =
( ( ( 1.0 - t2114 ) - t2118 ) * t1608_idx_0 + t1599_idx_0 * t2114 ) +
t1603_idx_0 * t2118 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 = U_idx_2 <=
0.0 ? U_idx_2 : 0.0 ; tlu2_1d_linear_nearest_value ( & li_efOut [ 0ULL ] , &
t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
li_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mi_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = mi_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ni_efOut [ 0ULL ] , & t48 . mField0
[ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ni_efOut [ 0
] ; U_idx_2 = ( ( ( 1.0 - t2114 ) - t2118 ) * t1608_idx_0 + t1599_idx_0 *
t2114 ) + t1603_idx_0 * t2118 ; U_idx_0 = ( t2087 + U_idx_2 ) / 2.0 *
0.0019634954084936209 ; t2114 = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 * 0.05 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2118 = t2114 >= 0.0 ? t2114 : - t2114
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 = t2118 >
1000.0 ? t2118 : 1000.0 ; t2408 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 ) +
2.8767404433520813E-5 ) * 3.24 ; t2123 = 1.0 / ( t2408 == 0.0 ? 1.0E-16 :
t2408 ) ; t2408 = t2111 + t3299 ; if ( ( pmf_pow ( t2408 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2123 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t2414 = ( pmf_pow ( ( t2111 + t3299 ) / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t2123 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 - 1000.0 ) *
( t2123 / 8.0 ) * ( ( t2111 + t3299 ) / 2.0 ) / ( t2414 == 0.0 ? 1.0E-16 :
t2414 ) ; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I =
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 - 1000.0 )
* ( t2123 / 8.0 ) * ( ( t2111 + t3299 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 = ( t2118 -
2000.0 ) / 2000.0 ; t2123 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 * 2.0 ; if (
t2118 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 = 3.66 ; }
else if ( t2118 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 = ( 1.0 -
t2123 ) * 3.66 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I *
t2123 ; } U_idx_0 = t2408 / 2.0 ; if ( t2118 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 *
0.039269908169872414 / 0.0019634954084936209 / ( U_idx_0 == 0.0 ? 1.0E-16 :
U_idx_0 ) / 30.0 ) { t2418 = ( t2111 + t3299 ) / 2.0 ; t2123 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 *
0.039269908169872414 / ( t2118 == 0.0 ? 1.0E-16 : t2118 ) /
0.0019634954084936209 / ( t2418 == 0.0 ? 1.0E-16 : t2418 ) ; } else { t2123 =
30.0 ; } t2111 = ( X [ 309ULL ] - X [ 299ULL ] ) * ( 1.0 - pmf_exp ( - t2123
) ) ; t2111 = t2084 + t2114 * 0.0019634954084936209 / 0.05 * ( t2408 / 2.0 )
* ( ( t2099 + t2119 ) / 2.0 ) * t2111 ; t2084 = pmf_sqrt ( X [ 244ULL ] * X [
244ULL ] + 3.0116308772356542E-13 ) ; t2099 = pmf_sqrt ( X [ 244ULL ] * X [
244ULL ] + 5.8094731428156895E-13 ) ; t2114 = pmf_sqrt ( X [ 244ULL ] * X [
244ULL ] + 4.1024015709531014E-13 ) ; t2118 = pmf_sqrt ( X [ 312ULL ] * X [
312ULL ] + 3.0116308772356542E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 = pmf_sqrt (
X [ 312ULL ] * X [ 312ULL ] + 5.8094731428156895E-13 ) ; t2123 = pmf_sqrt ( X
[ 312ULL ] * X [ 312ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & oi_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = oi_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t1608_idx_0 ;
tlu2_1d_linear_linear_value ( & pi_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ]
, & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = pi_efOut [ 0 ] ; t2130 = -
X [ 245ULL ] + X [ 320ULL ] ; t2132 = ( ( - X [ 244ULL ] + X [ 312ULL ] ) +
U_idx_6 ) - t3396 * 100000.0 ; t2133 = ( ( - X [ 246ULL ] + X [ 321ULL ] ) +
U_idx_6 ) - t3396 * 100000.0 ; t2138 = ( ( ( 1.0 - t2068 ) - t2079 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 * t2068 ) +
t1608_idx_0 * t2079 ; t2141 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - X [ 41ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I =
t1608_idx_0 - X [ 41ULL ] * 0.25983661262297303 ; t2129 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 - X [ 41ULL ]
* 0.461523 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0
= pmf_sqrt ( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) ; t2143 =
pmf_sqrt ( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) ; t2145 =
pmf_sqrt ( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) ; if ( X [
340ULL ] <= 0.0 ) { t2147 = 0.0 ; } else { t2147 = X [ 340ULL ] >= 1.0 ? 1.0
: X [ 340ULL ] ; } if ( X [ 341ULL ] <= 0.0 ) { t2148 = 0.0 ; } else { t2148
= X [ 341ULL ] >= 1.0 ? 1.0 : X [ 341ULL ] ; } t2150 = ( ( ( 1.0 - t2147 ) -
t2148 ) * 296.802103844292 + t2147 * 461.523 ) + t2148 * 259.836612622973 ;
t2151 = ( X [ 344ULL ] * 0.07812500122070315 + U_idx_8 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 47ULL ] <= 0.0 ) { t2152 = 0.0 ; } else {
t2152 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 )
{ t2153 = 0.0 ; } else { t2153 = X [ 48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; }
t2154 = ( ( ( 1.0 - t2152 ) - t2153 ) * 296.802103844292 + t2152 * 461.523 )
+ t2153 * 259.836612622973 ; t3098 = ( X [ 45ULL ] / ( X [ 46ULL ] == 0.0 ?
1.0E-16 : X [ 46ULL ] ) - X [ 348ULL ] / ( X [ 349ULL ] == 0.0 ? 1.0E-16 : X
[ 349ULL ] ) ) * X [ 347ULL ] * t2154 / 0.0019634954084936209 ; if ( X [
348ULL ] <= 216.59999999999997 ) { t3116 = 216.59999999999997 ; } else {
t3116 = X [ 348ULL ] >= 623.15 ? 623.15 : X [ 348ULL ] ; } piece218 = t3116 *
t3116 ; t3231 = ( ( ( 1074.1165326382641 + t3116 * - 0.2214565261064495 ) +
piece218 * 0.00037212980109014541 ) * ( ( 1.0 - t2152 ) - t2153 ) + ( (
1479.6504774711011 + t3116 * 1.2002114337048222 ) + piece218 * -
0.00038614513167823636 ) * t2152 ) + ( ( 900.63941224838356 + t3116 * -
0.044484923911382625 ) + piece218 * 0.00036936011832044979 ) * t2153 ; t2414
= t3231 - t2154 ; t3116 = t3231 / ( t2414 == 0.0 ? 1.0E-16 : t2414 ) ; t3231
= pmf_sqrt ( t3098 * t3098 * 9.999999999999999E-14 + fabs ( X [ 348ULL ] *
t3116 * t2154 ) * 1.0E-9 ) ; if ( X [ 350ULL ] <= 0.0 ) { piece218 = 0.0 ; }
else { piece218 = X [ 350ULL ] >= 1.0 ? 1.0 : X [ 350ULL ] ; } if ( X [
351ULL ] <= 0.0 ) { t2159 = 0.0 ; } else { t2159 = X [ 351ULL ] >= 1.0 ? 1.0
: X [ 351ULL ] ; } t1195 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_nearest_prelookup ( & qi_efOut . mField0 [ 0ULL ] , & qi_efOut .
mField1 [ 0ULL ] , & qi_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t86 = qi_efOut ; tlu2_1d_linear_nearest_value ( & ri_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ri_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & si_efOut [ 0ULL ] , & t86 . mField0
[ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = si_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & ti_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL
] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17
, & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ti_efOut [ 0 ] ; t3150
= ( ( ( 1.0 - piece218 ) - t2159 ) * t1608_idx_0 + t1599_idx_0 * piece218 ) +
t1603_idx_0 * t2159 ; t2414 = X [ 349ULL ] * X [ 349ULL ] * t3116 ; t3165 = -
pmf_sqrt ( fabs ( t2414 / ( t2154 == 0.0 ? 1.0E-16 : t2154 ) / ( X [ 348ULL ]
== 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3165 >=
0.0 ) { t2162 = t3165 * 100000.0 ; } else { t2162 = - t3165 * 100000.0 ; }
t2418 = t3150 * 0.0019634954084936209 ; t3254 = t2162 * 0.05 / ( t2418 == 0.0
? 1.0E-16 : t2418 ) ; t2417 = X [ 45ULL ] * t2154 ; t2164 = X [ 46ULL ] / (
t2417 == 0.0 ? 1.0E-16 : t2417 ) ; t2422 = t2164 * 9.8174770424681068E-6 ;
t3180 = t3165 * t3150 * 35.2 / ( t2422 == 0.0 ? 1.0E-16 : t2422 ) ; t3185 =
t3254 >= 1.0 ? t3254 : 1.0 ; U_idx_0 = pmf_log10 ( 6.9 / ( t3185 == 0.0 ?
1.0E-16 : t3185 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3185 ==
0.0 ? 1.0E-16 : t3185 ) + 2.8767404433520813E-5 ) * 3.24 ; t2425 = t2164 *
3.855314219175531E-7 ; t2162 = t3165 * t2162 * ( 1.0 / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ) * 0.55 / ( t2425 == 0.0 ? 1.0E-16 : t2425 ) ; t3185 = (
t3254 - 2000.0 ) / 2000.0 ; t3193 = t3185 * t3185 * 3.0 - t3185 * t3185 *
t3185 * 2.0 ; if ( t3254 <= 2000.0 ) { t3185 = t3180 * 1.0E-5 ; } else if (
t3254 >= 4000.0 ) { t3185 = t2162 * 1.0E-5 ; } else { t3185 = ( ( 1.0 - t3193
) * t3180 + t2162 * t3193 ) * 1.0E-5 ; } t3231 = X [ 347ULL ] * t3231 /
0.0019634954084936209 * 0.00031622776601683789 + t3185 ; t2162 = X [ 325ULL ]
- X [ 46ULL ] ; t3180 = - ( ( X [ 45ULL ] / ( X [ 46ULL ] == 0.0 ? 1.0E-16 :
X [ 46ULL ] ) - X [ 352ULL ] / ( X [ 353ULL ] == 0.0 ? 1.0E-16 : X [ 353ULL ]
) ) * X [ 335ULL ] * t2154 ) / 0.0019634954084936209 ; if ( X [ 352ULL ] <=
216.59999999999997 ) { t3185 = 216.59999999999997 ; } else { t3185 = X [
352ULL ] >= 623.15 ? 623.15 : X [ 352ULL ] ; } t3314 = t3185 * t3185 ; t3193
= ( ( ( 1074.1165326382641 + t3185 * - 0.2214565261064495 ) + t3314 *
0.00037212980109014541 ) * ( ( 1.0 - t2152 ) - t2153 ) + ( (
1479.6504774711011 + t3185 * 1.2002114337048222 ) + t3314 * -
0.00038614513167823636 ) * t2152 ) + ( ( 900.63941224838356 + t3185 * -
0.044484923911382625 ) + t3314 * 0.00036936011832044979 ) * t2153 ; t2408 =
t3193 - t2154 ; t3185 = t3193 / ( t2408 == 0.0 ? 1.0E-16 : t2408 ) ; t3193 =
pmf_sqrt ( t3180 * t3180 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] *
t3185 * t2154 ) * 1.0E-9 ) ; t2408 = X [ 353ULL ] * X [ 353ULL ] * t3185 ;
t3314 = - pmf_sqrt ( fabs ( t2408 / ( t2154 == 0.0 ? 1.0E-16 : t2154 ) / ( X
[ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) ) * 0.0019634954084936209 ; if
( t3314 >= 0.0 ) { t2169 = t3314 * 100000.0 ; } else { t2169 = - t3314 *
100000.0 ; } t3243 = t2169 * 0.05 / ( t2418 == 0.0 ? 1.0E-16 : t2418 ) ;
t2171 = t3314 * t3150 * 35.2 / ( t2422 == 0.0 ? 1.0E-16 : t2422 ) ;
intrm_sf_mf_1065 = t3243 >= 1.0 ? t3243 : 1.0 ; U_idx_1 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1065 == 0.0 ? 1.0E-16 : intrm_sf_mf_1065 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1065 == 0.0 ?
1.0E-16 : intrm_sf_mf_1065 ) + 2.8767404433520813E-5 ) * 3.24 ; t2169 = t3314
* t2169 * ( 1.0 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ) * 0.55 / ( t2425
== 0.0 ? 1.0E-16 : t2425 ) ; intrm_sf_mf_1065 = ( t3243 - 2000.0 ) / 2000.0 ;
t2174 = intrm_sf_mf_1065 * intrm_sf_mf_1065 * 3.0 - intrm_sf_mf_1065 *
intrm_sf_mf_1065 * intrm_sf_mf_1065 * 2.0 ; if ( t3243 <= 2000.0 ) {
intrm_sf_mf_1065 = t2171 * 1.0E-5 ; } else if ( t3243 >= 4000.0 ) {
intrm_sf_mf_1065 = t2169 * 1.0E-5 ; } else { intrm_sf_mf_1065 = ( ( 1.0 -
t2174 ) * t2171 + t2169 * t2174 ) * 1.0E-5 ; } t3193 = - ( X [ 335ULL ] *
t3193 ) / 0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_1065 ;
t2169 = t2151 - X [ 46ULL ] ; t1195 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & ui_efOut . mField0 [ 0ULL ] , & ui_efOut .
mField1 [ 0ULL ] , & ui_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t48 = ui_efOut ; tlu2_1d_linear_linear_value ( & vi_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = vi_efOut
[ 0 ] ; t2171 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & wi_efOut [ 0ULL
] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = wi_efOut [ 0 ] ; intrm_sf_mf_1065 = t1608_idx_0 ; if ( 1.0
- X [ 47ULL ] >= 0.01 ) { t2175 = 1.0 - X [ 47ULL ] ; } else if ( 1.0 - X [
47ULL ] >= - 0.1 ) { t2175 = pmf_exp ( ( ( 1.0 - X [ 47ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t2175 = 1.6701700790245661E-7 ; } t2174 = X [ 48ULL
] / ( t2175 == 0.0 ? 1.0E-16 : t2175 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & xi_efOut [ 0ULL ] , & t48
. mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
xi_efOut [ 0 ] ; t2176 = pmf_exp ( pmf_log ( X [ 46ULL ] * 100000.0 ) -
t1608_idx_0 ) ; if ( t2176 >= 1.0 ) { U_idx_1 = ( t2176 - 1.0 ) * 461.523 +
t2174 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond = t2174 / (
U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond = 1.0 ; } t2505 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond * 0.01 ; t2174 = ( X
[ 47ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ) / (
t2505 == 0.0 ? 1.0E-16 : t2505 ) ; if ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond <= 0.0 ) { t2174 =
0.0 ; } else if ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond * 0.01 ) { t2174 = X
[ 47ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ; } else
{ t2174 = ( X [ 47ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ) * ( t2174 * t2174
* 3.0 - t2174 * t2174 * t2174 * 2.0 ) ; } t2164 = t2164 * t2174 *
0.0019634954084936209 / 0.001 ; t2174 = ( t2171 - intrm_sf_mf_1065 ) * t2164
; tlu2_1d_linear_nearest_value ( & yi_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL
] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10
, & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = yi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & aj_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = aj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bj_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = bj_efOut [ 0 ] ;
intrm_sf_mf_1065 = ( ( ( 1.0 - piece218 ) - t2159 ) * t1608_idx_0 +
t1599_idx_0 * piece218 ) + t1603_idx_0 * t2159 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond = ( X [ 328ULL ] - X
[ 45ULL ] ) * ( intrm_sf_mf_1065 * 0.15707963267948966 / 0.05 ) ; if ( X [
327ULL ] <= 0.0 ) { t3256 = 0.0 ; } else { t3256 = X [ 327ULL ] >= 1.0 ? 1.0
: X [ 327ULL ] ; } if ( X [ 326ULL ] <= 0.0 ) { t2179 = 0.0 ; } else { t2179
= X [ 326ULL ] >= 1.0 ? 1.0 : X [ 326ULL ] ; } t3082 = ( ( ( 1.0 - t3256 ) -
t2179 ) * 296.802103844292 + t3256 * 461.523 ) + t2179 * 259.836612622973 ;
t2181 = X [ 327ULL ] * 461.523 / ( t3082 == 0.0 ? 1.0E-16 : t3082 ) ; if (
t2181 <= 0.0 ) { intrm_sf_mf_1054 = 0.0 ; } else { intrm_sf_mf_1054 = t2181
>= 1.0 ? 1.0 : t2181 ; } t2181 = X [ 326ULL ] * 259.836612622973 / ( t3082 ==
0.0 ? 1.0E-16 : t3082 ) ; if ( t2181 <= 0.0 ) { t2184 = 0.0 ; } else { t2184
= t2181 >= 1.0 ? 1.0 : t2181 ; } t1195 [ 0ULL ] = X [ 324ULL ] ;
tlu2_linear_nearest_prelookup ( & cj_efOut . mField0 [ 0ULL ] , & cj_efOut .
mField1 [ 0ULL ] , & cj_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = cj_efOut ; tlu2_1d_linear_nearest_value ( & dj_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = dj_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ej_efOut [ 0ULL ] , & t94 . mField0
[ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ej_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & fj_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField19 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = fj_efOut [ 0
] ; t2181 = ( ( ( 1.0 - intrm_sf_mf_1054 ) - t2184 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_1054 ) + t1603_idx_0 * t2184 ;
tlu2_1d_linear_nearest_value ( & gj_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = gj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hj_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = hj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ij_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ij_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 = ( ( ( 1.0 -
piece218 ) - t2159 ) * t1608_idx_0 + t1599_idx_0 * piece218 ) + t1603_idx_0 *
t2159 ; tlu2_1d_linear_nearest_value ( & jj_efOut [ 0ULL ] , & t94 . mField0
[ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = jj_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & kj_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = kj_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & lj_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = lj_efOut [ 0
] ; piece218 = ( ( ( 1.0 - intrm_sf_mf_1054 ) - t2184 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_1054 ) + t1603_idx_0 * t2184 ; t2159 = ( X [ 347ULL
] - ( - X [ 335ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( & mj_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = mj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & nj_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = nj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & oj_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = oj_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 = ( ( ( 1.0 -
intrm_sf_mf_1054 ) - t2184 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_1054 )
+ t1603_idx_0 * t2184 ; t2532 = ( t3150 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 ) / 2.0 *
0.0019634954084936209 ; intrm_sf_mf_1054 = ( t2159 >= 0.0 ? t2159 : 0.0 ) *
0.05 / ( t2532 == 0.0 ? 1.0E-16 : t2532 ) ; t2184 = intrm_sf_mf_1054 >= 0.0 ?
intrm_sf_mf_1054 : - intrm_sf_mf_1054 ; t2186 = t2184 > 1000.0 ? t2184 :
1000.0 ; U_idx_1 = pmf_log10 ( 6.9 / ( t2186 == 0.0 ? 1.0E-16 : t2186 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2186 == 0.0 ? 1.0E-16 : t2186
) + 2.8767404433520813E-5 ) * 3.24 ; t2188 = 1.0 / ( U_idx_1 == 0.0 ? 1.0E-16
: U_idx_1 ) ; U_idx_1 = t2181 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ; if ( (
pmf_pow ( U_idx_1 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2188 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2535 = ( pmf_pow ( ( t2181 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2188 / 8.0 ) * 12.7 + 1.0 ; t2189
= ( t2186 - 1000.0 ) * ( t2188 / 8.0 ) * ( ( t2181 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ) / (
t2535 == 0.0 ? 1.0E-16 : t2535 ) ; } else { t2189 = ( t2186 - 1000.0 ) * (
t2188 / 8.0 ) * ( ( t2181 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ) /
1.0E-6 ; } t2186 = ( t2184 - 2000.0 ) / 2000.0 ; t2188 = t2186 * t2186 * 3.0
- t2186 * t2186 * t2186 * 2.0 ; if ( t2184 <= 2000.0 ) { t2186 = 3.66 ; }
else if ( t2184 >= 4000.0 ) { t2186 = t2189 ; } else { t2186 = ( 1.0 - t2188
) * 3.66 + t2189 * t2188 ; } t2505 = U_idx_1 / 2.0 ; if ( t2184 > t2186 *
0.15707963267948966 / 0.0019634954084936209 / ( t2505 == 0.0 ? 1.0E-16 :
t2505 ) / 30.0 ) { U_idx_0 = ( t2181 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ;
t2188 = t2186 * 0.15707963267948966 / ( t2184 == 0.0 ? 1.0E-16 : t2184 ) /
0.0019634954084936209 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else {
t2188 = 30.0 ; } t2184 = ( X [ 328ULL ] - X [ 324ULL ] ) * ( 1.0 - pmf_exp (
- t2188 ) ) ; intrm_sf_mf_1054 = intrm_sf_mf_1054 * 0.0019634954084936209 /
0.05 * ( U_idx_1 / 2.0 ) * ( ( piece218 + intrm_sf_mf_1065 ) / 2.0 ) * t2184
; if ( X [ 346ULL ] <= 0.0 ) { t2184 = 0.0 ; } else { t2184 = X [ 346ULL ] >=
1.0 ? 1.0 : X [ 346ULL ] ; } if ( X [ 345ULL ] <= 0.0 ) { t2186 = 0.0 ; }
else { t2186 = X [ 345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ; } t2188 = ( ( ( 1.0
- t2184 ) - t2186 ) * 296.802103844292 + t2184 * 461.523 ) + t2186 *
259.836612622973 ; t2189 = X [ 346ULL ] * 461.523 / ( t2188 == 0.0 ? 1.0E-16
: t2188 ) ; if ( t2189 <= 0.0 ) { t2190 = 0.0 ; } else { t2190 = t2189 >= 1.0
? 1.0 : t2189 ; } t2189 = X [ 345ULL ] * 259.836612622973 / ( t2188 == 0.0 ?
1.0E-16 : t2188 ) ; if ( t2189 <= 0.0 ) { t2191 = 0.0 ; } else { t2191 =
t2189 >= 1.0 ? 1.0 : t2189 ; } t1195 [ 0ULL ] = X [ 343ULL ] ;
tlu2_linear_nearest_prelookup ( & pj_efOut . mField0 [ 0ULL ] , & pj_efOut .
mField1 [ 0ULL ] , & pj_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t32 = pj_efOut ; tlu2_1d_linear_nearest_value ( & qj_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = qj_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & rj_efOut [ 0ULL ] , & t32 . mField0
[ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = rj_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & sj_efOut [ 0ULL ] , & t32 . mField0 [
0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField19 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = sj_efOut [ 0
] ; t2189 = ( ( ( 1.0 - t2190 ) - t2191 ) * t1608_idx_0 + t1599_idx_0 * t2190
) + t1603_idx_0 * t2191 ; tlu2_1d_linear_nearest_value ( & tj_efOut [ 0ULL ]
, & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0
= tj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & uj_efOut [ 0ULL ] , & t32
. mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 =
uj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vj_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField18 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = vj_efOut
[ 0 ] ; t2192 = ( ( ( 1.0 - t2190 ) - t2191 ) * t1608_idx_0 + t1599_idx_0 *
t2190 ) + t1603_idx_0 * t2191 ; tlu2_1d_linear_nearest_value ( & wj_efOut [
0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = wj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xj_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = xj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & yj_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = yj_efOut [ 0 ] ; t2532 = ( t3150 + ( ( ( ( 1.0 - t2190 )
- t2191 ) * t1608_idx_0 + t1599_idx_0 * t2190 ) + t1603_idx_0 * t2191 ) ) /
2.0 * 0.0019634954084936209 ; t2159 = - ( t2159 <= 0.0 ? t2159 : 0.0 ) * 0.05
/ ( t2532 == 0.0 ? 1.0E-16 : t2532 ) ; t2190 = t2159 >= 0.0 ? t2159 : - t2159
; t2191 = t2190 > 1000.0 ? t2190 : 1000.0 ; U_idx_1 = pmf_log10 ( 6.9 / (
t2191 == 0.0 ? 1.0E-16 : t2191 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t2191 == 0.0 ? 1.0E-16 : t2191 ) + 2.8767404433520813E-5 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I = 1.0 / ( U_idx_1 ==
0.0 ? 1.0E-16 : U_idx_1 ) ; U_idx_1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 + t2189 ; if
( ( pmf_pow ( U_idx_1 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I / 8.0 ) * 12.7 + 1.0
>= 1.0E-6 ) { t2535 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 + t2189 ) /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I / 8.0 ) * 12.7 + 1.0
; t2194 = ( t2191 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 + t2189 ) /
2.0 ) / ( t2535 == 0.0 ? 1.0E-16 : t2535 ) ; } else { t2194 = ( t2191 -
1000.0 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I / 8.0 )
* ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 + t2189
) / 2.0 ) / 1.0E-6 ; } t2191 = ( t2190 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I = t2191 * t2191 * 3.0
- t2191 * t2191 * t2191 * 2.0 ; if ( t2190 <= 2000.0 ) { t2191 = 3.66 ; }
else if ( t2190 >= 4000.0 ) { t2191 = t2194 ; } else { t2191 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I ) * 3.66 + t2194 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I ; } t2505 = U_idx_1 /
2.0 ; if ( t2190 > t2191 * 0.15707963267948966 / 0.0019634954084936209 / (
t2505 == 0.0 ? 1.0E-16 : t2505 ) / 30.0 ) { U_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 + t2189 ) /
2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I = t2191 *
0.15707963267948966 / ( t2190 == 0.0 ? 1.0E-16 : t2190 ) /
0.0019634954084936209 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 = ( X [
328ULL ] - X [ 343ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I ) ) ;
intrm_sf_mf_1065 = intrm_sf_mf_1054 + t2159 * 0.0019634954084936209 / 0.05 *
( U_idx_1 / 2.0 ) * ( ( intrm_sf_mf_1065 + t2192 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ; t2159 =
pmf_sqrt ( X [ 347ULL ] * X [ 347ULL ] + 3.0116308772356542E-13 ) ;
intrm_sf_mf_1054 = pmf_sqrt ( X [ 347ULL ] * X [ 347ULL ] +
5.8094731428156895E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 = pmf_sqrt (
X [ 347ULL ] * X [ 347ULL ] + 4.1024015709531014E-13 ) ; t2189 = pmf_sqrt ( X
[ 335ULL ] * X [ 335ULL ] + 3.0116308772356542E-13 ) ; t2190 = pmf_sqrt ( X [
335ULL ] * X [ 335ULL ] + 5.8094731428156895E-13 ) ; t2191 = pmf_sqrt ( X [
335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & ak_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ]
, & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ak_efOut [ 0 ] ; t2192 =
t1608_idx_0 ; tlu2_1d_linear_linear_value ( & bk_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = bk_efOut
[ 0 ] ; t2194 = - X [ 336ULL ] + X [ 358ULL ] ; t2195 = ( - X [ 335ULL ] + X
[ 347ULL ] ) - t2164 * 100000.0 ; t2196 = ( - X [ 337ULL ] + X [ 359ULL ] ) -
t2164 * 100000.0 ; t2197 = ( ( ( 1.0 - t2152 ) - t2153 ) * t2192 + t2171 *
t2152 ) + t1608_idx_0 * t2153 ; t2199 = t2192 - X [ 45ULL ] *
0.296802103844292 ; t2192 = t1608_idx_0 - X [ 45ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I = t2171 - X [ 45ULL ]
* 0.461523 ; if ( X [ 344ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { t2171 = 1.9634954084936209E-11 ; } else if ( X [
344ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) { t2171 =
0.0012566370614359179 ; } else { t2171 = X [ 344ULL ] * 0.0019634954084936209
; } t3267 = t2171 / 0.0019634954084936209 ; if ( X [ 367ULL ] <= 0.0 ) {
intrm_sf_mf_1188 = 0.0 ; } else { intrm_sf_mf_1188 = X [ 367ULL ] >= 1.0 ?
1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0 ) { t3272 = 0.0 ; } else {
t3272 = X [ 368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ; } t2204 = ( ( ( 1.0 -
intrm_sf_mf_1188 ) - t3272 ) * 296.802103844292 + intrm_sf_mf_1188 * 461.523
) + t3272 * 259.836612622973 ; t2505 = X [ 365ULL ] * t2204 ; t2205 = X [
366ULL ] / ( t2505 == 0.0 ? 1.0E-16 : t2505 ) ; t3279 = X [ 366ULL ] / (
t2151 == 0.0 ? 1.0E-16 : t2151 ) * ( X [ 369ULL ] / ( X [ 365ULL ] == 0.0 ?
1.0E-16 : X [ 365ULL ] ) ) ; t2207 = X [ 366ULL ] / 1.01325 * ( X [ 370ULL ]
/ ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ; if ( X [ 335ULL ] >
0.0 ) { t2208 = ( t3267 + 1.0 ) * ( 1.0 - t3267 * t3279 ) * ( X [ 335ULL ] /
0.64 / ( t2171 == 0.0 ? 1.0E-16 : t2171 ) * ( X [ 335ULL ] / 0.64 / ( t2171
== 0.0 ? 1.0E-16 : t2171 ) ) / 2.0 / ( t2205 == 0.0 ? 1.0E-16 : t2205 ) ) *
9.9999999999999991E-11 ; } else if ( X [ 335ULL ] < 0.0 ) { t2208 = ( t3267 +
1.0 ) * ( 1.0 - t3267 * t2207 ) * ( X [ 335ULL ] / 0.64 / ( t2171 == 0.0 ?
1.0E-16 : t2171 ) * ( X [ 335ULL ] / 0.64 / ( t2171 == 0.0 ? 1.0E-16 : t2171
) ) / 2.0 / ( t2205 == 0.0 ? 1.0E-16 : t2205 ) ) * 9.9999999999999991E-11 ; }
else { t2208 = 0.0 ; } intrm_sf_mf_1318 = ( t2151 + 1.01325 ) / 2.0 *
0.0010000000000000009 ; t2209 = ( 1.0 - t3267 ) * ( 1.0 - t3267 ) ; t2212 =
intrm_sf_mf_1318 * t2209 ; t3346 = ( t3267 + 1.0 ) * ( 1.0 - t3267 * t3279 )
- ( 1.0 - t3267 * t2207 ) * t3267 * 2.0 ; t3393 = ( t2151 - 1.01325 ) * (
t3346 >= t2209 ? t3346 : t2209 ) ; t3346 = ( t2151 - 1.01325 ) / (
intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) ; t3379 = t3346 *
t3346 * 3.0 - t3346 * t3346 * t3346 * 2.0 ; if ( t2151 - 1.01325 <= 0.0 ) {
t3346 = t2212 ; } else if ( t2151 - 1.01325 >= intrm_sf_mf_1318 ) { t3346 =
t3393 ; } else { t3346 = ( 1.0 - t3379 ) * t2212 + t3393 * t3379 ; } t3393 =
( t3267 + 1.0 ) * ( 1.0 - t3267 * t2207 ) - ( 1.0 - t3267 * t3279 ) * t3267 *
2.0 ; t3267 = ( 1.01325 - t2151 ) * ( t3393 >= t2209 ? t3393 : t2209 ) ;
t3279 = ( 1.01325 - t2151 ) / ( intrm_sf_mf_1318 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1318 ) ; t2207 = t3279 * t3279 * 3.0 - t3279 * t3279 * t3279 *
2.0 ; if ( 1.01325 - t2151 <= 0.0 ) { t3279 = t2212 ; } else if ( 1.01325 -
t2151 >= intrm_sf_mf_1318 ) { t3279 = t3267 ; } else { t3279 = ( 1.0 - t2207
) * t2212 + t3267 * t2207 ; } if ( t2151 > 1.01325 ) { t3267 = t3346 ; } else
{ t3267 = t2151 < 1.01325 ? t3279 : t2212 ; } if ( X [ 365ULL ] <=
216.59999999999997 ) { t3279 = 216.59999999999997 ; } else { t3279 = X [
365ULL ] >= 623.15 ? 623.15 : X [ 365ULL ] ; } t2221 = t3279 * t3279 ; t2207
= ( ( ( 1074.1165326382641 + t3279 * - 0.2214565261064495 ) + t2221 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_1188 ) - t3272 ) + ( (
1479.6504774711011 + t3279 * 1.2002114337048222 ) + t2221 * -
0.00038614513167823636 ) * intrm_sf_mf_1188 ) + ( ( 900.63941224838356 +
t3279 * - 0.044484923911382625 ) + t2221 * 0.00036936011832044979 ) * t3272 ;
t2532 = t2207 - t2204 ; t2532 = X [ 366ULL ] * X [ 366ULL ] * ( t2207 / (
t2532 == 0.0 ? 1.0E-16 : t2532 ) ) ; t3279 = pmf_sqrt ( fabs ( t2532 / (
t2204 == 0.0 ? 1.0E-16 : t2204 ) / ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [
365ULL ] ) ) ) * t2171 * 0.64 ; t2535 = t2205 * 2.0 ; t2205 = ( t2151 -
1.01325 ) * pmf_sqrt ( fabs ( t2535 / ( t3267 == 0.0 ? 1.0E-16 : t3267 ) ) )
* t2171 * 0.64 ; if ( X [ 14ULL ] <= 0.0 ) { t2207 = 0.0 ; } else { t2207 = X
[ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { t2209 =
0.0 ; } else { t2209 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; } t2212 = ( (
( 1.0 - t2207 ) - t2209 ) * 296.802103844292 + t2207 * 461.523 ) + t2209 *
259.836612622973 ; t3346 = - ( ( X [ 12ULL ] / ( X [ 49ULL ] == 0.0 ? 1.0E-16
: X [ 49ULL ] ) - X [ 372ULL ] / ( X [ 373ULL ] == 0.0 ? 1.0E-16 : X [ 373ULL
] ) ) * X [ 312ULL ] * t2212 ) / 0.32 ; if ( X [ 372ULL ] <=
216.59999999999997 ) { t3393 = 216.59999999999997 ; } else { t3393 = X [
372ULL ] >= 623.15 ? 623.15 : X [ 372ULL ] ; } t2225 = t3393 * t3393 ; t3379
= ( ( ( 1074.1165326382641 + t3393 * - 0.2214565261064495 ) + t2225 *
0.00037212980109014541 ) * ( ( 1.0 - t2207 ) - t2209 ) + ( (
1479.6504774711011 + t3393 * 1.2002114337048222 ) + t2225 * -
0.00038614513167823636 ) * t2207 ) + ( ( 900.63941224838356 + t3393 * -
0.044484923911382625 ) + t2225 * 0.00036936011832044979 ) * t2209 ; t2542 =
t3379 - t2212 ; t3393 = t3379 / ( t2542 == 0.0 ? 1.0E-16 : t2542 ) ; t3379 =
pmf_sqrt ( t3346 * t3346 * 9.999999999999999E-14 + fabs ( X [ 372ULL ] *
t3393 * t2212 ) * 1.0E-9 ) ; if ( X [ 86ULL ] <= 0.0 ) { t2221 = 0.0 ; } else
{ t2221 = X [ 86ULL ] >= 1.0 ? 1.0 : X [ 86ULL ] ; } if ( X [ 85ULL ] <= 0.0
) { t2225 = 0.0 ; } else { t2225 = X [ 85ULL ] >= 1.0 ? 1.0 : X [ 85ULL ] ; }
t1195 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_nearest_prelookup ( & ck_efOut .
mField0 [ 0ULL ] , & ck_efOut . mField1 [ 0ULL ] , & ck_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = ck_efOut ;
tlu2_1d_linear_nearest_value ( & dk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = dk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ek_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ek_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = fk_efOut [ 0 ] ; t2227 =
( ( ( 1.0 - t2221 ) - t2225 ) * t1608_idx_0 + t1599_idx_0 * t2221 ) +
t1603_idx_0 * t2225 ; t2542 = X [ 373ULL ] * X [ 373ULL ] * t3393 ; t2228 = -
pmf_sqrt ( fabs ( t2542 / ( t2212 == 0.0 ? 1.0E-16 : t2212 ) / ( X [ 372ULL ]
== 0.0 ? 1.0E-16 : X [ 372ULL ] ) ) ) * 0.32 ; if ( t2228 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke = t2228 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke = - t2228 *
100000.0 ; } t2546 = t2227 * 0.32 ; t2231 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke * 0.01 / (
t2546 == 0.0 ? 1.0E-16 : t2546 ) ; t2548 = X [ 12ULL ] * t2212 ; t2236 = X [
49ULL ] / ( t2548 == 0.0 ? 1.0E-16 : t2548 ) ; t2550 = t2236 *
6.4000000000000011E-5 ; t2237 = t2228 * t2227 * 2.9973120849090416 / ( t2550
== 0.0 ? 1.0E-16 : t2550 ) ; t2239 = t2231 >= 1.0 ? t2231 : 1.0 ; U_idx_0 =
pmf_log10 ( 6.9 / ( t2239 == 0.0 ? 1.0E-16 : t2239 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2239 == 0.0 ? 1.0E-16 : t2239 ) +
0.00017169489553429715 ) * 3.24 ; t2553 = t2236 * 0.0020480000000000003 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke = t2228 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke * ( 1.0 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * 0.046833001326703774 / ( t2553 ==
0.0 ? 1.0E-16 : t2553 ) ; t2239 = ( t2231 - 2000.0 ) / 2000.0 ; t2241 = t2239
* t2239 * 3.0 - t2239 * t2239 * t2239 * 2.0 ; if ( t2231 <= 2000.0 ) { t2239
= t2237 * 1.0E-5 ; } else if ( t2231 >= 4000.0 ) { t2239 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke * 1.0E-5 ; }
else { t2239 = ( ( 1.0 - t2241 ) * t2237 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke * t2241 ) *
1.0E-5 ; } t3379 = - ( X [ 312ULL ] * t3379 ) / 0.32 * 0.00031622776601683789
+ t2239 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke = X
[ 300ULL ] - X [ 49ULL ] ; t2237 = ( X [ 12ULL ] / ( X [ 49ULL ] == 0.0 ?
1.0E-16 : X [ 49ULL ] ) - X [ 375ULL ] / ( X [ 376ULL ] == 0.0 ? 1.0E-16 : X
[ 376ULL ] ) ) * X [ 374ULL ] * t2212 / 0.32 ; if ( X [ 375ULL ] <=
216.59999999999997 ) { t2239 = 216.59999999999997 ; } else { t2239 = X [
375ULL ] >= 623.15 ? 623.15 : X [ 375ULL ] ; } t2243 = t2239 * t2239 ; t2241
= ( ( ( 1074.1165326382641 + t2239 * - 0.2214565261064495 ) + t2243 *
0.00037212980109014541 ) * ( ( 1.0 - t2207 ) - t2209 ) + ( (
1479.6504774711011 + t2239 * 1.2002114337048222 ) + t2243 * -
0.00038614513167823636 ) * t2207 ) + ( ( 900.63941224838356 + t2239 * -
0.044484923911382625 ) + t2243 * 0.00036936011832044979 ) * t2209 ; t2562 =
t2241 - t2212 ; t2239 = t2241 / ( t2562 == 0.0 ? 1.0E-16 : t2562 ) ; t2241 =
pmf_sqrt ( t2237 * t2237 * 9.999999999999999E-14 + fabs ( X [ 375ULL ] *
t2239 * t2212 ) * 1.0E-9 ) ; t2562 = X [ 376ULL ] * X [ 376ULL ] * t2239 ;
t2243 = - pmf_sqrt ( fabs ( t2562 / ( t2212 == 0.0 ? 1.0E-16 : t2212 ) / ( X
[ 375ULL ] == 0.0 ? 1.0E-16 : X [ 375ULL ] ) ) ) * 0.32 ; if ( t2243 >= 0.0 )
{ t2245 = t2243 * 100000.0 ; } else { t2245 = - t2243 * 100000.0 ; } t2246 =
t2245 * 0.01 / ( t2546 == 0.0 ? 1.0E-16 : t2546 ) ; U_idx_0 = t2243 * t2227 *
2.9973120849090416 / ( t2550 == 0.0 ? 1.0E-16 : t2550 ) ; t2249 = t2246 >=
1.0 ? t2246 : 1.0 ; t2659 = pmf_log10 ( 6.9 / ( t2249 == 0.0 ? 1.0E-16 :
t2249 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2249 == 0.0 ?
1.0E-16 : t2249 ) + 0.00017169489553429715 ) * 3.24 ; t2245 = t2243 * t2245 *
( 1.0 / ( t2659 == 0.0 ? 1.0E-16 : t2659 ) ) * 0.046833001326703774 / ( t2553
== 0.0 ? 1.0E-16 : t2553 ) ; t2249 = ( t2246 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_1235 = t2249 * t2249 * 3.0 - t2249 * t2249 * t2249 * 2.0 ; if (
t2246 <= 2000.0 ) { t2249 = U_idx_0 * 1.0E-5 ; } else if ( t2246 >= 4000.0 )
{ t2249 = t2245 * 1.0E-5 ; } else { t2249 = ( ( 1.0 - intrm_sf_mf_1235 ) *
U_idx_0 + t2245 * intrm_sf_mf_1235 ) * 1.0E-5 ; } t2241 = X [ 374ULL ] *
t2241 / 0.32 * 0.00031622776601683789 + t2249 ; t2245 = X [ 69ULL ] - X [
49ULL ] ; t1195 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup ( &
gk_efOut . mField0 [ 0ULL ] , & gk_efOut . mField1 [ 0ULL ] , & gk_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [
0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t86 = gk_efOut ;
tlu2_1d_linear_linear_value ( & hk_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = hk_efOut [ 0 ] ; t2249 =
t1608_idx_0 ; tlu2_1d_linear_linear_value ( & ik_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ik_efOut
[ 0 ] ; intrm_sf_mf_1235 = t1608_idx_0 ; if ( 1.0 - X [ 14ULL ] >= 0.01 ) {
t2252 = 1.0 - X [ 14ULL ] ; } else if ( 1.0 - X [ 14ULL ] >= - 0.1 ) { t2252
= pmf_exp ( ( ( 1.0 - X [ 14ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2252
= 1.6701700790245661E-7 ; } t2251 = X [ 13ULL ] / ( t2252 == 0.0 ? 1.0E-16 :
t2252 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & jk_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = jk_efOut [ 0 ] ; t2253 =
pmf_exp ( pmf_log ( X [ 49ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t2253 >=
1.0 ) { t2659 = ( t2253 - 1.0 ) * 461.523 + t2251 ; t2254 = t2251 / ( t2659
== 0.0 ? 1.0E-16 : t2659 ) ; } else { t2254 = 1.0 ; } U_idx_0 = t2254 * 0.01
; t2251 = ( X [ 14ULL ] - t2254 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ;
if ( X [ 14ULL ] - t2254 <= 0.0 ) { t2251 = 0.0 ; } else if ( X [ 14ULL ] -
t2254 >= t2254 * 0.01 ) { t2251 = X [ 14ULL ] - t2254 ; } else { t2251 = ( X
[ 14ULL ] - t2254 ) * ( t2251 * t2251 * 3.0 - t2251 * t2251 * t2251 * 2.0 ) ;
} t2236 = t2236 * t2251 * 0.026773120849090417 / 0.001 ; t2251 = ( t2249 -
intrm_sf_mf_1235 ) * t2236 ; tlu2_1d_linear_nearest_value ( & kk_efOut [ 0ULL
] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = kk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
lk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = lk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
mk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = mk_efOut [ 0 ] ; intrm_sf_mf_1235 = ( ( ( 1.0 - t2221 ) -
t2225 ) * t1608_idx_0 + t1599_idx_0 * t2221 ) + t1603_idx_0 * t2225 ; t2254 =
( 343.15 - X [ 12ULL ] ) * ( intrm_sf_mf_1235 * 10.709248339636167 / 0.01 ) ;
tlu2_1d_linear_nearest_value ( & nk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = nk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ok_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ok_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = pk_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = ( ( ( 1.0 - t2221
) - t2225 ) * t1608_idx_0 + t1599_idx_0 * t2221 ) + t1603_idx_0 * t2225 ;
t2221 = ( - X [ 312ULL ] - X [ 374ULL ] ) / 2.0 ; U_idx_0 = ( t2227 + U_idx_2
) / 2.0 * 0.32 ; U_idx_2 = ( t2221 >= 0.0 ? t2221 : 0.0 ) * 0.01 / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) ; t2225 = U_idx_2 >= 0.0 ? U_idx_2 : - U_idx_2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = t2225 >
1000.0 ? t2225 : 1000.0 ; t2659 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * 3.24 ; t2257 = 1.0 / ( t2659 == 0.0 ? 1.0E-16 :
t2659 ) ; t2659 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv +
t3299 ; if ( ( pmf_pow ( t2659 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2257 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2640 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv + t3299 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2257 / 8.0 ) * 12.7 + 1.0 ; t2258
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 - 1000.0
) * ( t2257 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv + t3299 ) / 2.0 ) /
( t2640 == 0.0 ? 1.0E-16 : t2640 ) ; } else { t2258 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 - 1000.0 ) *
( t2257 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv + t3299 ) / 2.0 ) /
1.0E-6 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 =
( t2225 - 2000.0 ) / 2000.0 ; t2257 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 * 2.0 ; if (
t2225 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = 3.66 ; }
else if ( t2225 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = t2258 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = (
1.0 - t2257 ) * 3.66 + t2258 * t2257 ; } U_idx_0 = t2659 / 2.0 ; if ( t2225 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
10.709248339636167 / 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) / 30.0 ) {
t2644 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv + t3299 )
/ 2.0 ; t2257 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
10.709248339636167 / ( t2225 == 0.0 ? 1.0E-16 : t2225 ) / 0.32 / ( t2644 ==
0.0 ? 1.0E-16 : t2644 ) ; } else { t2257 = 30.0 ; } t3299 = ( 343.15 - X [
299ULL ] ) * ( 1.0 - pmf_exp ( - t2257 ) ) ; U_idx_2 = U_idx_2 * 0.32 / 0.01
* ( t2659 / 2.0 ) * ( ( intrm_sf_mf_1235 + t2119 ) / 2.0 ) * t3299 ; if ( X [
71ULL ] <= 0.0 ) { t3299 = 0.0 ; } else { t3299 = X [ 71ULL ] >= 1.0 ? 1.0 :
X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 ) { t2119 = 0.0 ; } else { t2119 = X
[ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ] ; } t2225 = ( ( ( 1.0 - t3299 ) - t2119
) * 296.802103844292 + t3299 * 461.523 ) + t2119 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = X [ 71ULL ]
* 461.523 / ( t2225 == 0.0 ? 1.0E-16 : t2225 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 <= 0.0 ) {
t2257 = 0.0 ; } else { t2257 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = X [ 70ULL ]
* 259.836612622973 / ( t2225 == 0.0 ? 1.0E-16 : t2225 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 <= 0.0 ) {
t2258 = 0.0 ; } else { t2258 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; } t1195 [
0ULL ] = X [ 68ULL ] ; tlu2_linear_nearest_prelookup ( & qk_efOut . mField0 [
0ULL ] , & qk_efOut . mField1 [ 0ULL ] , & qk_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = qk_efOut ; tlu2_1d_linear_nearest_value ( &
rk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = rk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
sk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = sk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
tk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = tk_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = ( ( ( 1.0 -
t2257 ) - t2258 ) * t1608_idx_0 + t1599_idx_0 * t2257 ) + t1603_idx_0 * t2258
; tlu2_1d_linear_nearest_value ( & uk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10
, & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = uk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = vk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = wk_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = ( ( ( 1.0 - t2257
) - t2258 ) * t1608_idx_0 + t1599_idx_0 * t2257 ) + t1603_idx_0 * t2258 ;
intrm_sf_mf_1269 = t2221 <= 0.0 ? t2221 : 0.0 ; tlu2_1d_linear_nearest_value
( & xk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1184 [ 0ULL ] , & t126 [
0ULL ] ) ; t1608_idx_0 = xk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
yk_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = yk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & al_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = al_efOut [ 0 ] ; t2221 = ( ( ( 1.0 - t2257 ) - t2258 ) *
t1608_idx_0 + t1599_idx_0 * t2257 ) + t1603_idx_0 * t2258 ; U_idx_0 = ( t2227
+ t2221 ) / 2.0 * 0.32 ; t2257 = - intrm_sf_mf_1269 * 0.01 / ( U_idx_0 == 0.0
? 1.0E-16 : U_idx_0 ) ; t2258 = t2257 >= 0.0 ? t2257 : - t2257 ;
intrm_sf_mf_1269 = t2258 > 1000.0 ? t2258 : 1000.0 ; t2659 = pmf_log10 ( 6.9
/ ( intrm_sf_mf_1269 == 0.0 ? 1.0E-16 : intrm_sf_mf_1269 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1269 == 0.0 ?
1.0E-16 : intrm_sf_mf_1269 ) + 0.00017169489553429715 ) * 3.24 ; t2261 = 1.0
/ ( t2659 == 0.0 ? 1.0E-16 : t2659 ) ; t2659 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; if ( (
pmf_pow ( t2659 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2261 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2640 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2261 / 8.0 ) * 12.7 + 1.0 ; t2262
= ( intrm_sf_mf_1269 - 1000.0 ) * ( t2261 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ) / (
t2640 == 0.0 ? 1.0E-16 : t2640 ) ; } else { t2262 = ( intrm_sf_mf_1269 -
1000.0 ) * ( t2261 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ) /
1.0E-6 ; } intrm_sf_mf_1269 = ( t2258 - 2000.0 ) / 2000.0 ; t2261 =
intrm_sf_mf_1269 * intrm_sf_mf_1269 * 3.0 - intrm_sf_mf_1269 *
intrm_sf_mf_1269 * intrm_sf_mf_1269 * 2.0 ; if ( t2258 <= 2000.0 ) {
intrm_sf_mf_1269 = 3.66 ; } else if ( t2258 >= 4000.0 ) { intrm_sf_mf_1269 =
t2262 ; } else { intrm_sf_mf_1269 = ( 1.0 - t2261 ) * 3.66 + t2262 * t2261 ;
} U_idx_0 = t2659 / 2.0 ; if ( t2258 > intrm_sf_mf_1269 * 10.709248339636167
/ 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) / 30.0 ) { t2644 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ;
t2261 = intrm_sf_mf_1269 * 10.709248339636167 / ( t2258 == 0.0 ? 1.0E-16 :
t2258 ) / 0.32 / ( t2644 == 0.0 ? 1.0E-16 : t2644 ) ; } else { t2261 = 30.0 ;
} Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = ( 343.15 - X [
68ULL ] ) * ( 1.0 - pmf_exp ( - t2261 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = U_idx_2 + t2257 *
0.32 / 0.01 * ( t2659 / 2.0 ) * ( ( intrm_sf_mf_1235 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ; intrm_sf_mf_1235 =
pmf_sqrt ( X [ 312ULL ] * X [ 312ULL ] + 2.5711439722933289E-8 ) ; t2257 =
pmf_sqrt ( X [ 312ULL ] * X [ 312ULL ] + 4.9597684650720062E-8 ) ; t2258 =
pmf_sqrt ( X [ 312ULL ] * X [ 312ULL ] + 3.5023764535063242E-8 ) ;
intrm_sf_mf_1269 = pmf_sqrt ( X [ 374ULL ] * X [ 374ULL ] +
2.5711439722933289E-8 ) ; t2261 = pmf_sqrt ( X [ 374ULL ] * X [ 374ULL ] +
4.9597684650720062E-8 ) ; t2262 = pmf_sqrt ( X [ 374ULL ] * X [ 374ULL ] +
3.5023764535063242E-8 ) ; tlu2_1d_linear_linear_value ( & bl_efOut [ 0ULL ] ,
& t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
bl_efOut [ 0 ] ; t2263 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( &
cl_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = cl_efOut [ 0 ] ; t2265 = - X [ 320ULL ] + X [ 382ULL ] ;
t2266 = ( - X [ 312ULL ] + X [ 374ULL ] ) - t2236 * 100000.0 ; t2267 = ( - X
[ 321ULL ] + X [ 383ULL ] ) - t2236 * 100000.0 ; t2268 = ( ( ( 1.0 - t2207 )
- t2209 ) * t2263 + t2249 * t2207 ) + t1608_idx_0 * t2209 ; t2270 = t2263 - X
[ 12ULL ] * 0.296802103844292 ; t2263 = t1608_idx_0 - X [ 12ULL ] *
0.25983661262297303 ; t2264 = t2249 - X [ 12ULL ] * 0.461523 ; if ( X [ 17ULL
] <= 0.0 ) { t2249 = 0.0 ; } else { t2249 = X [ 17ULL ] >= 1.0 ? 1.0 : X [
17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) { t2272 = 0.0 ; } else { t2272 = X [
16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } t2273 = ( ( ( 1.0 - t2249 ) - t2272 )
* 296.802103844292 + t2249 * 461.523 ) + t2272 * 259.836612622973 ; t2274 = -
( ( X [ 15ULL ] / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) - X [ 386ULL
] / ( X [ 387ULL ] == 0.0 ? 1.0E-16 : X [ 387ULL ] ) ) * X [ 374ULL ] * t2273
) / 0.32 ; if ( X [ 386ULL ] <= 216.59999999999997 ) { t2275 =
216.59999999999997 ; } else { t2275 = X [ 386ULL ] >= 623.15 ? 623.15 : X [
386ULL ] ; } intrm_sf_mf_1402 = t2275 * t2275 ; t2276 = ( ( (
1074.1165326382641 + t2275 * - 0.2214565261064495 ) + intrm_sf_mf_1402 *
0.00037212980109014541 ) * ( ( 1.0 - t2249 ) - t2272 ) + ( (
1479.6504774711011 + t2275 * 1.2002114337048222 ) + intrm_sf_mf_1402 * -
0.00038614513167823636 ) * t2249 ) + ( ( 900.63941224838356 + t2275 * -
0.044484923911382625 ) + intrm_sf_mf_1402 * 0.00036936011832044979 ) * t2272
; t2640 = t2276 - t2273 ; t2275 = t2276 / ( t2640 == 0.0 ? 1.0E-16 : t2640 )
; t2276 = pmf_sqrt ( t2274 * t2274 * 9.999999999999999E-14 + fabs ( X [
386ULL ] * t2275 * t2273 ) * 1.0E-9 ) ; if ( X [ 91ULL ] <= 0.0 ) {
intrm_sf_mf_1402 = 0.0 ; } else { intrm_sf_mf_1402 = X [ 91ULL ] >= 1.0 ? 1.0
: X [ 91ULL ] ; } if ( X [ 90ULL ] <= 0.0 ) { t2278 = 0.0 ; } else { t2278 =
X [ 90ULL ] >= 1.0 ? 1.0 : X [ 90ULL ] ; } t1195 [ 0ULL ] = X [ 15ULL ] ;
tlu2_linear_nearest_prelookup ( & dl_efOut . mField0 [ 0ULL ] , & dl_efOut .
mField1 [ 0ULL ] , & dl_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t86 = dl_efOut ; tlu2_1d_linear_nearest_value ( & el_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = el_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & fl_efOut [ 0ULL ] , & t86 . mField0
[ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = fl_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & gl_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL
] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17
, & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = gl_efOut [ 0 ] ; t2279
= ( ( ( 1.0 - intrm_sf_mf_1402 ) - t2278 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1402 ) + t1603_idx_0 * t2278 ; t2640 = X [ 387ULL ] * X [ 387ULL
] * t2275 ; t2280 = - pmf_sqrt ( fabs ( t2640 / ( t2273 == 0.0 ? 1.0E-16 :
t2273 ) / ( X [ 386ULL ] == 0.0 ? 1.0E-16 : X [ 386ULL ] ) ) ) * 0.32 ; if (
t2280 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok = t2280 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok = - t2280 *
100000.0 ; } t2644 = t2279 * 0.32 ; t2283 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok * 0.01 / (
t2644 == 0.0 ? 1.0E-16 : t2644 ) ; t2646 = X [ 15ULL ] * t2273 ; t2284 = X [
50ULL ] / ( t2646 == 0.0 ? 1.0E-16 : t2646 ) ; t2648 = t2284 *
6.4000000000000011E-5 ; t2285 = t2280 * t2279 * 2.9973120849090416 / ( t2648
== 0.0 ? 1.0E-16 : t2648 ) ; t2286 = t2283 >= 1.0 ? t2283 : 1.0 ; U_idx_0 =
pmf_log10 ( 6.9 / ( t2286 == 0.0 ? 1.0E-16 : t2286 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2286 == 0.0 ? 1.0E-16 : t2286 ) +
0.00017169489553429715 ) * 3.24 ; t2651 = t2284 * 0.0020480000000000003 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok = t2280 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok * ( 1.0 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * 0.046833001326703774 / ( t2651 ==
0.0 ? 1.0E-16 : t2651 ) ; t2286 = ( t2283 - 2000.0 ) / 2000.0 ; t2287 = t2286
* t2286 * 3.0 - t2286 * t2286 * t2286 * 2.0 ; if ( t2283 <= 2000.0 ) { t2286
= t2285 * 1.0E-5 ; } else if ( t2283 >= 4000.0 ) { t2286 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok * 1.0E-5 ; }
else { t2286 = ( ( 1.0 - t2287 ) * t2285 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok * t2287 ) *
1.0E-5 ; } t2276 = - ( X [ 374ULL ] * t2276 ) / 0.32 * 0.00031622776601683789
+ t2286 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok = X
[ 69ULL ] - X [ 50ULL ] ; t2285 = - ( ( X [ 15ULL ] / ( X [ 50ULL ] == 0.0 ?
1.0E-16 : X [ 50ULL ] ) - X [ 388ULL ] / ( X [ 389ULL ] == 0.0 ? 1.0E-16 : X
[ 389ULL ] ) ) * X [ 347ULL ] * t2273 ) / 0.32 ; if ( X [ 388ULL ] <=
216.59999999999997 ) { t2286 = 216.59999999999997 ; } else { t2286 = X [
388ULL ] >= 623.15 ? 623.15 : X [ 388ULL ] ; } t2288 = t2286 * t2286 ; t2287
= ( ( ( 1074.1165326382641 + t2286 * - 0.2214565261064495 ) + t2288 *
0.00037212980109014541 ) * ( ( 1.0 - t2249 ) - t2272 ) + ( (
1479.6504774711011 + t2286 * 1.2002114337048222 ) + t2288 * -
0.00038614513167823636 ) * t2249 ) + ( ( 900.63941224838356 + t2286 * -
0.044484923911382625 ) + t2288 * 0.00036936011832044979 ) * t2272 ; t2659 =
t2287 - t2273 ; t2286 = t2287 / ( t2659 == 0.0 ? 1.0E-16 : t2659 ) ; t2287 =
pmf_sqrt ( t2285 * t2285 * 9.999999999999999E-14 + fabs ( X [ 388ULL ] *
t2286 * t2273 ) * 1.0E-9 ) ; t2659 = X [ 389ULL ] * X [ 389ULL ] * t2286 ;
t1648 = - pmf_sqrt ( fabs ( t2659 / ( t2273 == 0.0 ? 1.0E-16 : t2273 ) / ( X
[ 388ULL ] == 0.0 ? 1.0E-16 : X [ 388ULL ] ) ) ) * 0.32 ; if ( t1648 >= 0.0 )
{ t2288 = t1648 * 100000.0 ; } else { t2288 = - t1648 * 100000.0 ; } t2289 =
t2288 * 0.01 / ( t2644 == 0.0 ? 1.0E-16 : t2644 ) ; U_idx_0 = t1648 * t2279 *
2.9973120849090416 / ( t2648 == 0.0 ? 1.0E-16 : t2648 ) ; intrm_sf_mf_192 =
t2289 >= 1.0 ? t2289 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / (
intrm_sf_mf_192 == 0.0 ? 1.0E-16 : intrm_sf_mf_192 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_192 == 0.0 ? 1.0E-16 : intrm_sf_mf_192 )
+ 0.00017169489553429715 ) * 3.24 ; t2288 = t1648 * t2288 * ( 1.0 / (
t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.046833001326703774 / (
t2651 == 0.0 ? 1.0E-16 : t2651 ) ; intrm_sf_mf_192 = ( t2289 - 2000.0 ) /
2000.0 ; t2292 = intrm_sf_mf_192 * intrm_sf_mf_192 * 3.0 - intrm_sf_mf_192 *
intrm_sf_mf_192 * intrm_sf_mf_192 * 2.0 ; if ( t2289 <= 2000.0 ) {
intrm_sf_mf_192 = U_idx_0 * 1.0E-5 ; } else if ( t2289 >= 4000.0 ) {
intrm_sf_mf_192 = t2288 * 1.0E-5 ; } else { intrm_sf_mf_192 = ( ( 1.0 - t2292
) * U_idx_0 + t2288 * t2292 ) * 1.0E-5 ; } t2287 = - ( X [ 347ULL ] * t2287 )
/ 0.32 * 0.00031622776601683789 + intrm_sf_mf_192 ; t2288 = X [ 325ULL ] - X
[ 50ULL ] ; t1195 [ 0ULL ] = X [ 15ULL ] ; tlu2_linear_linear_prelookup ( &
hl_efOut . mField0 [ 0ULL ] , & hl_efOut . mField1 [ 0ULL ] , & hl_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [
0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = hl_efOut ;
tlu2_1d_linear_linear_value ( & il_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = il_efOut [ 0 ] ;
intrm_sf_mf_192 = t1608_idx_0 ; tlu2_1d_linear_linear_value ( & jl_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = jl_efOut [ 0 ] ; t2292 = t1608_idx_0 ; if ( 1.0 - X [ 17ULL
] >= 0.01 ) { t2294 = 1.0 - X [ 17ULL ] ; } else if ( 1.0 - X [ 17ULL ] >= -
0.1 ) { t2294 = pmf_exp ( ( ( 1.0 - X [ 17ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t2294 = 1.6701700790245661E-7 ; } t2293 = X [ 16ULL ] / ( t2294 ==
0.0 ? 1.0E-16 : t2294 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & kl_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = kl_efOut [ 0 ] ; t2295 =
pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t1608_idx_0 ) ; if ( t2295 >=
1.0 ) { t1599_idx_0 = ( t2295 - 1.0 ) * 461.523 + t2293 ; t2297 = t2293 / (
t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ; } else { t2297 = 1.0 ; }
U_idx_0 = t2297 * 0.01 ; t2293 = ( X [ 17ULL ] - t2297 ) / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ; if ( X [ 17ULL ] - t2297 <= 0.0 ) { t2293 = 0.0 ; }
else if ( X [ 17ULL ] - t2297 >= t2297 * 0.01 ) { t2293 = X [ 17ULL ] - t2297
; } else { t2293 = ( X [ 17ULL ] - t2297 ) * ( t2293 * t2293 * 3.0 - t2293 *
t2293 * t2293 * 2.0 ) ; } t2284 = t2284 * t2293 * 0.026773120849090417 /
0.001 ; t2293 = ( intrm_sf_mf_192 - t2292 ) * t2284 ;
tlu2_1d_linear_nearest_value ( & ll_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ll_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ml_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ml_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nl_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = nl_efOut [ 0 ] ; t2292 =
( ( ( 1.0 - intrm_sf_mf_1402 ) - t2278 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1402 ) + t1603_idx_0 * t2278 ; t2297 = ( 343.15 - X [ 15ULL ] ) *
( t2292 * 10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( &
ol_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = ol_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
pl_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = pl_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ql_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = ql_efOut [ 0 ] ; t2298 = ( ( ( 1.0 - intrm_sf_mf_1402 ) -
t2278 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_1402 ) + t1603_idx_0 *
t2278 ; intrm_sf_mf_1402 = ( - X [ 374ULL ] - ( - X [ 347ULL ] ) ) / 2.0 ;
U_idx_0 = ( t2221 + t2279 ) / 2.0 * 0.32 ; t2221 = ( intrm_sf_mf_1402 >= 0.0
? intrm_sf_mf_1402 : 0.0 ) * 0.01 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ;
t2278 = t2221 >= 0.0 ? t2221 : - t2221 ; t2299 = t2278 > 1000.0 ? t2278 :
1000.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2299 == 0.0 ? 1.0E-16 : t2299 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2299 == 0.0 ? 1.0E-16 : t2299
) + 0.00017169489553429715 ) * 3.24 ; U_idx_1 = 1.0 / ( t1599_idx_0 == 0.0 ?
1.0E-16 : t1599_idx_0 ) ; t1599_idx_0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 + t2298 ; if
( ( pmf_pow ( t1599_idx_0 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
U_idx_1 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { U_idx_0 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 + t2298 ) /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( U_idx_1 / 8.0 ) * 12.7 + 1.0
; t2301 = ( t2299 - 1000.0 ) * ( U_idx_1 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 + t2298 ) /
2.0 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else { t2301 = ( t2299 -
1000.0 ) * ( U_idx_1 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 + t2298 ) /
2.0 ) / 1.0E-6 ; } t2299 = ( t2278 - 2000.0 ) / 2000.0 ; U_idx_1 = t2299 *
t2299 * 3.0 - t2299 * t2299 * t2299 * 2.0 ; if ( t2278 <= 2000.0 ) { t2299 =
3.66 ; } else if ( t2278 >= 4000.0 ) { t2299 = t2301 ; } else { t2299 = ( 1.0
- U_idx_1 ) * 3.66 + t2301 * U_idx_1 ; } U_idx_0 = t1599_idx_0 / 2.0 ; if (
t2278 > t2299 * 10.709248339636167 / 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 :
U_idx_0 ) / 30.0 ) { U_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 + t2298 ) /
2.0 ; U_idx_1 = t2299 * 10.709248339636167 / ( t2278 == 0.0 ? 1.0E-16 : t2278
) / 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else { U_idx_1 = 30.0 ;
} Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = ( 343.15
- X [ 68ULL ] ) * ( 1.0 - pmf_exp ( - U_idx_1 ) ) ; t2221 = t2221 * 0.32 /
0.01 * ( t1599_idx_0 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I + t2292 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; U_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 + t2279 ) /
2.0 * 0.32 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3
= - ( intrm_sf_mf_1402 <= 0.0 ? intrm_sf_mf_1402 : 0.0 ) * 0.01 / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 : 1000.0 ;
t1599_idx_0 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1402 = 1.0 / ( t1599_idx_0 ==
0.0 ? 1.0E-16 : t1599_idx_0 ) ; t1599_idx_0 = t2181 + t2298 ; if ( ( pmf_pow
( t1599_idx_0 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_1402 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { U_idx_0 = ( pmf_pow ( (
t2181 + t2298 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_1402 / 8.0 ) * 12.7 + 1.0 ; t2278 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - 1000.0 ) * (
intrm_sf_mf_1402 / 8.0 ) * ( ( t2181 + t2298 ) / 2.0 ) / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ; } else { t2278 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - 1000.0 ) * (
intrm_sf_mf_1402 / 8.0 ) * ( ( t2181 + t2298 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1402 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = t2278 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = ( 1.0 -
intrm_sf_mf_1402 ) * 3.66 + t2278 * intrm_sf_mf_1402 ; } U_idx_0 =
t1599_idx_0 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 10.709248339636167
/ 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) / 30.0 ) { U_idx_0 = ( t2181
+ t2298 ) / 2.0 ; intrm_sf_mf_1402 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 10.709248339636167
/ ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) /
0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else { intrm_sf_mf_1402 =
30.0 ; } t2181 = ( 343.15 - X [ 324ULL ] ) * ( 1.0 - pmf_exp ( -
intrm_sf_mf_1402 ) ) ; t2181 = t2221 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 * 0.32 / 0.01
* ( t1599_idx_0 / 2.0 ) * ( ( piece218 + t2292 ) / 2.0 ) * t2181 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 = pmf_sqrt (
X [ 347ULL ] * X [ 347ULL ] + 2.5711439722933289E-8 ) ; t2221 = pmf_sqrt ( X
[ 347ULL ] * X [ 347ULL ] + 4.9597684650720062E-8 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = pmf_sqrt (
X [ 347ULL ] * X [ 347ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & rl_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = rl_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = t1608_idx_0 ;
tlu2_1d_linear_linear_value ( & sl_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = sl_efOut [ 0 ] ; t2278 = (
- X [ 382ULL ] - X [ 358ULL ] ) + X [ 100ULL ] ; t2292 = ( ( ( - X [ 374ULL ]
- X [ 347ULL ] ) + X [ 100ULL ] ) + X [ 105ULL ] ) - t2284 * 100000.0 ; t2298
= ( ( - X [ 383ULL ] - X [ 359ULL ] ) + X [ 105ULL ] ) - t2284 * 100000.0 ;
t2299 = ( ( ( 1.0 - t2249 ) - t2272 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I + intrm_sf_mf_192 *
t2249 ) + t1608_idx_0 * t2272 ; t2301 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - X [ 15ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I
= t1608_idx_0 - X [ 15ULL ] * 0.25983661262297303 ; intrm_sf_mf_1402 =
intrm_sf_mf_192 - X [ 15ULL ] * 0.461523 ; t1195 [ 0ULL ] = X [ 51ULL ] ;
t754 [ 0 ] = 23ULL ; tlu2_linear_nearest_prelookup ( & tl_efOut . mField0 [
0ULL ] , & tl_efOut . mField1 [ 0ULL ] , & tl_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1195 [ 0ULL ] , & t754 [ 0ULL
] , & t126 [ 0ULL ] ) ; t70 = tl_efOut ; t1195 [ 0ULL ] = X [ 396ULL ] ;
t1187 [ 0 ] = 29ULL ; tlu2_linear_nearest_prelookup ( & ul_efOut . mField0 [
0ULL ] , & ul_efOut . mField1 [ 0ULL ] , & ul_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1195 [ 0ULL ] , & t1187 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = ul_efOut ; tlu2_2d_linear_nearest_value ( &
vl_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , &
t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField20 , & t754 [ 0ULL ] , & t1187 [ 0ULL ] , & t126 [ 0ULL ] )
; t1608_idx_0 = vl_efOut [ 0 ] ; intrm_sf_mf_192 = t1608_idx_0 ;
intrm_sf_mf_1010 = X [ 312ULL ] * t2087 * 11.2 / ( t2322 == 0.0 ? 1.0E-16 :
t2322 ) ; intrm_sf_mf_1009 = X [ 312ULL ] >= 0.0 ? X [ 312ULL ] : - X [
312ULL ] ; t2304 = intrm_sf_mf_1009 * 0.05 / ( t2318 == 0.0 ? 1.0E-16 : t2318
) ; t2305 = t2304 >= 1.0 ? t2304 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / (
t2305 == 0.0 ? 1.0E-16 : t2305 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t2305 == 0.0 ? 1.0E-16 : t2305 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_1009 = X [ 312ULL ] * intrm_sf_mf_1009 * ( 1.0 / ( t1599_idx_0 ==
0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.175 / ( t2325 == 0.0 ? 1.0E-16 : t2325 )
; t2305 = ( t2304 - 2000.0 ) / 2000.0 ; t2307 = t2305 * t2305 * 3.0 - t2305 *
t2305 * t2305 * 2.0 ; if ( t2304 <= 2000.0 ) { t2305 = intrm_sf_mf_1010 *
9.9999999999999991E-11 ; } else if ( t2304 >= 4000.0 ) { t2305 =
intrm_sf_mf_1009 * 9.9999999999999991E-11 ; } else { t2305 = ( ( 1.0 - t2307
) * intrm_sf_mf_1010 + intrm_sf_mf_1009 * t2307 ) * 9.9999999999999991E-11 ;
} if ( 1.0 - X [ 340ULL ] >= 0.01 ) { intrm_sf_mf_1009 = 1.0 - X [ 340ULL ] ;
} else if ( 1.0 - X [ 340ULL ] >= - 0.1 ) { intrm_sf_mf_1009 = pmf_exp ( ( (
1.0 - X [ 340ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { intrm_sf_mf_1009 =
1.6701700790245661E-7 ; } if ( X [ 331ULL ] <= 0.0 ) { intrm_sf_mf_1010 = 0.0
; } else { intrm_sf_mf_1010 = X [ 331ULL ] >= 1.0 ? 1.0 : X [ 331ULL ] ; } if
( X [ 330ULL ] <= 0.0 ) { t2304 = 0.0 ; } else { t2304 = X [ 330ULL ] >= 1.0
? 1.0 : X [ 330ULL ] ; } t2307 = ( ( ( 1.0 - intrm_sf_mf_1010 ) - t2304 ) *
296.802103844292 + intrm_sf_mf_1010 * 461.523 ) + t2304 * 259.836612622973 ;
t1195 [ 0ULL ] = X [ 329ULL ] ; tlu2_linear_linear_prelookup ( & wl_efOut .
mField0 [ 0ULL ] , & wl_efOut . mField1 [ 0ULL ] , & wl_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = wl_efOut ;
tlu2_1d_linear_linear_value ( & xl_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = xl_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yl_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = yl_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & am_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = am_efOut [ 0 ] ; t2308 = (
( ( 1.0 - intrm_sf_mf_1010 ) - t2304 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1010 ) + t1603_idx_0 * t2304 ; t1195 [ 0ULL ] = X [ 324ULL ] ;
tlu2_linear_linear_prelookup ( & bm_efOut . mField0 [ 0ULL ] , & bm_efOut .
mField1 [ 0ULL ] , & bm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = bm_efOut ; tlu2_1d_linear_linear_value ( & cm_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = cm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & dm_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = dm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & em_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = em_efOut [ 0 ] ;
intrm_sf_mf_1010 = ( ( ( 1.0 - t3256 ) - t2179 ) * t1608_idx_0 + t1599_idx_0
* t3256 ) + t1603_idx_0 * t2179 ; t1195 [ 0ULL ] = X [ 343ULL ] ;
tlu2_linear_linear_prelookup ( & fm_efOut . mField0 [ 0ULL ] , & fm_efOut .
mField1 [ 0ULL ] , & fm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t77 = fm_efOut ; tlu2_1d_linear_linear_value ( & gm_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = gm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & hm_efOut [ 0ULL ] , & t77 . mField0 [
0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = hm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & im_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL
] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = im_efOut [ 0 ] ; t3256 =
( ( ( 1.0 - t2184 ) - t2186 ) * t1608_idx_0 + t1599_idx_0 * t2184 ) +
t1603_idx_0 * t2186 ; t1195 [ 0ULL ] = X [ 348ULL ] ;
tlu2_linear_linear_prelookup ( & jm_efOut . mField0 [ 0ULL ] , & jm_efOut .
mField1 [ 0ULL ] , & jm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t48 = jm_efOut ; tlu2_1d_linear_linear_value ( & km_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = km_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & lm_efOut [ 0ULL ] , & t48 . mField0 [
0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = lm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & mm_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL
] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = mm_efOut [ 0 ] ; t2179 =
( ( ( 1.0 - t2152 ) - t2153 ) * t1608_idx_0 + t1599_idx_0 * t2152 ) +
t1603_idx_0 * t2153 ; t1195 [ 0ULL ] = X [ 352ULL ] ;
tlu2_linear_linear_prelookup ( & nm_efOut . mField0 [ 0ULL ] , & nm_efOut .
mField1 [ 0ULL ] , & nm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = nm_efOut ; tlu2_1d_linear_linear_value ( & om_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = om_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & pm_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = pm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & qm_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = qm_efOut [ 0 ] ; t2184 =
( ( ( 1.0 - t2152 ) - t2153 ) * t1608_idx_0 + t1599_idx_0 * t2152 ) +
t1603_idx_0 * t2153 ; t2186 = X [ 347ULL ] >= 0.0 ? X [ 347ULL ] : - X [
347ULL ] ; t2304 = t2186 * 0.05 / ( t2418 == 0.0 ? 1.0E-16 : t2418 ) ; t2312
= t2304 >= 1.0 ? t2304 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2312 == 0.0
? 1.0E-16 : t2312 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2312 ==
0.0 ? 1.0E-16 : t2312 ) + 2.8767404433520813E-5 ) * 3.24 ; t2313 = X [ 347ULL
] * t3150 * 35.2 / ( t2422 == 0.0 ? 1.0E-16 : t2422 ) ; t2186 = X [ 347ULL ]
* t2186 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.55 / (
t2425 == 0.0 ? 1.0E-16 : t2425 ) ; t2312 = ( t2304 - 2000.0 ) / 2000.0 ;
t2315 = t2312 * t2312 * 3.0 - t2312 * t2312 * t2312 * 2.0 ; if ( t2304 <=
2000.0 ) { t2312 = t2313 * 9.9999999999999991E-11 ; } else if ( t2304 >=
4000.0 ) { t2312 = t2186 * 9.9999999999999991E-11 ; } else { t2312 = ( ( 1.0
- t2315 ) * t2313 + t2186 * t2315 ) * 9.9999999999999991E-11 ; } if ( - X [
335ULL ] >= 0.0 ) { t2186 = - X [ 335ULL ] ; } else { t2186 = X [ 335ULL ] ;
} t2304 = t2186 * 0.05 / ( t2418 == 0.0 ? 1.0E-16 : t2418 ) ; t2313 = t2304
>= 1.0 ? t2304 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2313 == 0.0 ?
1.0E-16 : t2313 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2313 ==
0.0 ? 1.0E-16 : t2313 ) + 2.8767404433520813E-5 ) * 3.24 ; t2315 = X [ 335ULL
] * t3150 * - 35.2 / ( t2422 == 0.0 ? 1.0E-16 : t2422 ) ; t2186 = X [ 335ULL
] * t2186 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * - 0.55
/ ( t2425 == 0.0 ? 1.0E-16 : t2425 ) ; t2313 = ( t2304 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_1428 = t2313 * t2313 * 3.0 - t2313 * t2313 * t2313 * 2.0 ; if (
t2304 <= 2000.0 ) { t2313 = t2315 * 9.9999999999999991E-11 ; } else if (
t2304 >= 4000.0 ) { t2313 = t2186 * 9.9999999999999991E-11 ; } else { t2313 =
( ( 1.0 - intrm_sf_mf_1428 ) * t2315 + t2186 * intrm_sf_mf_1428 ) *
9.9999999999999991E-11 ; } t1195 [ 0ULL ] = X [ 369ULL ] ;
tlu2_linear_linear_prelookup ( & rm_efOut . mField0 [ 0ULL ] , & rm_efOut .
mField1 [ 0ULL ] , & rm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = rm_efOut ; tlu2_1d_linear_linear_value ( & sm_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = sm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & tm_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = tm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & um_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = um_efOut [ 0 ] ; t2186 =
( ( ( 1.0 - intrm_sf_mf_1188 ) - t3272 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1188 ) + t1603_idx_0 * t3272 ; t1195 [ 0ULL ] = X [ 370ULL ] ;
tlu2_linear_linear_prelookup ( & vm_efOut . mField0 [ 0ULL ] , & vm_efOut .
mField1 [ 0ULL ] , & vm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t70 = vm_efOut ; tlu2_1d_linear_linear_value ( & wm_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = wm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & xm_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = xm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ym_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ym_efOut [ 0 ] ; t2304 =
( ( ( 1.0 - intrm_sf_mf_1188 ) - t3272 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1188 ) + t1603_idx_0 * t3272 ; t1195 [ 0ULL ] = X [ 365ULL ] ;
tlu2_linear_linear_prelookup ( & an_efOut . mField0 [ 0ULL ] , & an_efOut .
mField1 [ 0ULL ] , & an_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = an_efOut ; tlu2_1d_linear_linear_value ( & bn_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = bn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & cn_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = cn_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & dn_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = dn_efOut [ 0 ] ; t2315 =
( ( ( 1.0 - intrm_sf_mf_1188 ) - t3272 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1188 ) + t1603_idx_0 * t3272 ; U_idx_0 = intrm_sf_mf_1318 - ( -
intrm_sf_mf_1318 ) ; intrm_sf_mf_1188 = ( ( t2151 - 1.01325 ) - ( -
intrm_sf_mf_1318 ) ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t3272 =
intrm_sf_mf_1188 * intrm_sf_mf_1188 * 3.0 - intrm_sf_mf_1188 *
intrm_sf_mf_1188 * intrm_sf_mf_1188 * 2.0 ; if ( t2151 - 1.01325 <= -
intrm_sf_mf_1318 ) { intrm_sf_mf_1188 = 1.01325 ; } else if ( t2151 - 1.01325
>= intrm_sf_mf_1318 ) { intrm_sf_mf_1188 = t2151 ; } else { intrm_sf_mf_1188
= ( 1.0 - t3272 ) * 1.01325 + t2151 * t3272 ; } t1195 [ 0ULL ] = X [ 111ULL ]
; tlu2_linear_linear_prelookup ( & en_efOut . mField0 [ 0ULL ] , & en_efOut .
mField1 [ 0ULL ] , & en_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t19 = en_efOut ; tlu2_1d_linear_linear_value ( & fn_efOut [ 0ULL ] , & t19 .
mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = fn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & gn_efOut [ 0ULL ] , & t19 . mField0 [
0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = gn_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & hn_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL
] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = hn_efOut [ 0 ] ; t3272 =
( ( ( 1.0 - intrm_sf_mf_1284 ) - zc_int309 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_1284 ) + t1603_idx_0 * zc_int309 ; t1195 [ 0ULL ] = X [ 299ULL ]
; tlu2_linear_linear_prelookup ( & in_efOut . mField0 [ 0ULL ] , & in_efOut .
mField1 [ 0ULL ] , & in_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t32 = in_efOut ; tlu2_1d_linear_linear_value ( & jn_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = jn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & kn_efOut [ 0ULL ] , & t32 . mField0 [
0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = kn_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ln_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL
] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ln_efOut [ 0 ] ;
intrm_sf_mf_1284 = ( ( ( 1.0 - intrm_sf_mf_934 ) - intrm_sf_mf_1299 ) *
t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_934 ) + t1603_idx_0 *
intrm_sf_mf_1299 ; t1195 [ 0ULL ] = X [ 68ULL ] ;
tlu2_linear_linear_prelookup ( & mn_efOut . mField0 [ 0ULL ] , & mn_efOut .
mField1 [ 0ULL ] , & mn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t18 = mn_efOut ; tlu2_1d_linear_linear_value ( & nn_efOut [ 0ULL ] , & t18 .
mField0 [ 0ULL ] , & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = nn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & on_efOut [ 0ULL ] , & t18 . mField0 [
0ULL ] , & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = on_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & pn_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL
] , & t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = pn_efOut [ 0 ] ;
zc_int309 = ( ( ( 1.0 - t3299 ) - t2119 ) * t1608_idx_0 + t1599_idx_0 * t3299
) + t1603_idx_0 * t2119 ; t1195 [ 0ULL ] = X [ 372ULL ] ;
tlu2_linear_linear_prelookup ( & qn_efOut . mField0 [ 0ULL ] , & qn_efOut .
mField1 [ 0ULL ] , & qn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t86 = qn_efOut ; tlu2_1d_linear_linear_value ( & rn_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = rn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & sn_efOut [ 0ULL ] , & t86 . mField0 [
0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = sn_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & tn_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL
] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = tn_efOut [ 0 ] ;
intrm_sf_mf_934 = ( ( ( 1.0 - t2207 ) - t2209 ) * t1608_idx_0 + t1599_idx_0 *
t2207 ) + t1603_idx_0 * t2209 ; t1195 [ 0ULL ] = X [ 375ULL ] ;
tlu2_linear_linear_prelookup ( & un_efOut . mField0 [ 0ULL ] , & un_efOut .
mField1 [ 0ULL ] , & un_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = un_efOut ; tlu2_1d_linear_linear_value ( & vn_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = vn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & wn_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = wn_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & xn_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = xn_efOut [ 0 ] ;
intrm_sf_mf_1299 = ( ( ( 1.0 - t2207 ) - t2209 ) * t1608_idx_0 + t1599_idx_0
* t2207 ) + t1603_idx_0 * t2209 ; t1195 [ 0ULL ] = X [ 130ULL ] ;
tlu2_linear_linear_prelookup ( & yn_efOut . mField0 [ 0ULL ] , & yn_efOut .
mField1 [ 0ULL ] , & yn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t19 = yn_efOut ; tlu2_1d_linear_linear_value ( & ao_efOut [ 0ULL ] , & t19 .
mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ao_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & bo_efOut [ 0ULL ] , & t19 . mField0 [
0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = bo_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & co_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL
] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = co_efOut [ 0 ] ; t3299 =
( ( ( 1.0 - t1752 ) - t1754 ) * t1608_idx_0 + t1599_idx_0 * t1752 ) +
t1603_idx_0 * t1754 ; if ( - X [ 312ULL ] >= 0.0 ) { t1752 = - X [ 312ULL ] ;
} else { t1752 = X [ 312ULL ] ; } t1754 = t1752 * 0.01 / ( t2546 == 0.0 ?
1.0E-16 : t2546 ) ; t2119 = t1754 >= 1.0 ? t1754 : 1.0 ; t1599_idx_0 =
pmf_log10 ( 6.9 / ( t2119 == 0.0 ? 1.0E-16 : t2119 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2119 == 0.0 ? 1.0E-16 : t2119 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1318 = X [ 312ULL ] * t2227 * -
2.9973120849090416 / ( t2550 == 0.0 ? 1.0E-16 : t2550 ) ; t1752 = X [ 312ULL
] * t1752 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * -
0.046833001326703774 / ( t2553 == 0.0 ? 1.0E-16 : t2553 ) ; t2119 = ( t1754 -
2000.0 ) / 2000.0 ; intrm_sf_mf_1428 = t2119 * t2119 * 3.0 - t2119 * t2119 *
t2119 * 2.0 ; if ( t1754 <= 2000.0 ) { t2119 = intrm_sf_mf_1318 *
9.9999999999999991E-11 ; } else if ( t1754 >= 4000.0 ) { t2119 = t1752 *
9.9999999999999991E-11 ; } else { t2119 = ( ( 1.0 - intrm_sf_mf_1428 ) *
intrm_sf_mf_1318 + t1752 * intrm_sf_mf_1428 ) * 9.9999999999999991E-11 ; }
t1752 = X [ 374ULL ] >= 0.0 ? X [ 374ULL ] : - X [ 374ULL ] ; t1754 = t1752 *
0.01 / ( t2546 == 0.0 ? 1.0E-16 : t2546 ) ; intrm_sf_mf_1318 = t1754 >= 1.0 ?
t1754 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1318 == 0.0 ?
1.0E-16 : intrm_sf_mf_1318 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1428 = X [ 374ULL ] * t2227 *
2.9973120849090416 / ( t2550 == 0.0 ? 1.0E-16 : t2550 ) ; t1752 = X [ 374ULL
] * t1752 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) *
0.046833001326703774 / ( t2553 == 0.0 ? 1.0E-16 : t2553 ) ; intrm_sf_mf_1318
= ( t1754 - 2000.0 ) / 2000.0 ; intrm_sf_mf_189 = intrm_sf_mf_1318 *
intrm_sf_mf_1318 * 3.0 - intrm_sf_mf_1318 * intrm_sf_mf_1318 *
intrm_sf_mf_1318 * 2.0 ; if ( t1754 <= 2000.0 ) { intrm_sf_mf_1318 =
intrm_sf_mf_1428 * 9.9999999999999991E-11 ; } else if ( t1754 >= 4000.0 ) {
intrm_sf_mf_1318 = t1752 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1318
= ( ( 1.0 - intrm_sf_mf_189 ) * intrm_sf_mf_1428 + t1752 * intrm_sf_mf_189 )
* 9.9999999999999991E-11 ; } t1195 [ 0ULL ] = X [ 135ULL ] ;
tlu2_linear_linear_prelookup ( & do_efOut . mField0 [ 0ULL ] , & do_efOut .
mField1 [ 0ULL ] , & do_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t19 = do_efOut ; tlu2_1d_linear_linear_value ( & eo_efOut [ 0ULL ] , & t19 .
mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = eo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & fo_efOut [ 0ULL ] , & t19 . mField0 [
0ULL ] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = fo_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & go_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL
] , & t19 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = go_efOut [ 0 ] ; t1752 =
( ( ( 1.0 - t1716 ) - t1717 ) * t1608_idx_0 + t1599_idx_0 * t1716 ) +
t1603_idx_0 * t1717 ; t1195 [ 0ULL ] = X [ 139ULL ] ;
tlu2_linear_linear_prelookup ( & ho_efOut . mField0 [ 0ULL ] , & ho_efOut .
mField1 [ 0ULL ] , & ho_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = ho_efOut ; tlu2_1d_linear_linear_value ( & io_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = io_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & jo_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = jo_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ko_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ko_efOut [ 0 ] ; t1754 =
( ( ( 1.0 - t1716 ) - t1717 ) * t1608_idx_0 + t1599_idx_0 * t1716 ) +
t1603_idx_0 * t1717 ; t1195 [ 0ULL ] = X [ 386ULL ] ;
tlu2_linear_linear_prelookup ( & lo_efOut . mField0 [ 0ULL ] , & lo_efOut .
mField1 [ 0ULL ] , & lo_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = lo_efOut ; tlu2_1d_linear_linear_value ( & mo_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = mo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & no_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = no_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & oo_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = oo_efOut [ 0 ] ;
intrm_sf_mf_1428 = ( ( ( 1.0 - t2249 ) - t2272 ) * t1608_idx_0 + t1599_idx_0
* t2249 ) + t1603_idx_0 * t2272 ; intrm_sf_mf_189 = X [ 134ULL ] >= 0.0 ? X [
134ULL ] : - X [ 134ULL ] ; t1195 [ 0ULL ] = X [ 388ULL ] ;
tlu2_linear_linear_prelookup ( & po_efOut . mField0 [ 0ULL ] , & po_efOut .
mField1 [ 0ULL ] , & po_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = po_efOut ; tlu2_1d_linear_linear_value ( & qo_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = qo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ro_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ro_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & so_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = so_efOut [ 0 ] ; t2323 =
( ( ( 1.0 - t2249 ) - t2272 ) * t1608_idx_0 + t1599_idx_0 * t2249 ) +
t1603_idx_0 * t2272 ; if ( - X [ 374ULL ] >= 0.0 ) { intrm_sf_mf_1449 = - X [
374ULL ] ; } else { intrm_sf_mf_1449 = X [ 374ULL ] ; } intrm_sf_mf_151 =
intrm_sf_mf_1449 * 0.01 / ( t2644 == 0.0 ? 1.0E-16 : t2644 ) ; t2327 =
intrm_sf_mf_151 >= 1.0 ? intrm_sf_mf_151 : 1.0 ; t1599_idx_0 = pmf_log10 (
6.9 / ( t2327 == 0.0 ? 1.0E-16 : t2327 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t2327 == 0.0 ? 1.0E-16 : t2327 ) + 0.00017169489553429715
) * 3.24 ; intrm_sf_mf_182 = X [ 374ULL ] * t2279 * - 2.9973120849090416 / (
t2648 == 0.0 ? 1.0E-16 : t2648 ) ; t2333 = intrm_sf_mf_189 * 0.01 / ( t1749
== 0.0 ? 1.0E-16 : t1749 ) ; intrm_sf_mf_1449 = X [ 374ULL ] *
intrm_sf_mf_1449 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) *
- 0.046833001326703774 / ( t2651 == 0.0 ? 1.0E-16 : t2651 ) ; t2327 = (
intrm_sf_mf_151 - 2000.0 ) / 2000.0 ; t2335 = t2327 * t2327 * 3.0 - t2327 *
t2327 * t2327 * 2.0 ; if ( intrm_sf_mf_151 <= 2000.0 ) { t2327 =
intrm_sf_mf_182 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_151 >=
4000.0 ) { t2327 = intrm_sf_mf_1449 * 9.9999999999999991E-11 ; } else { t2327
= ( ( 1.0 - t2335 ) * intrm_sf_mf_182 + intrm_sf_mf_1449 * t2335 ) *
9.9999999999999991E-11 ; } if ( - X [ 347ULL ] >= 0.0 ) { intrm_sf_mf_1449 =
- X [ 347ULL ] ; } else { intrm_sf_mf_1449 = X [ 347ULL ] ; } intrm_sf_mf_151
= intrm_sf_mf_1449 * 0.01 / ( t2644 == 0.0 ? 1.0E-16 : t2644 ) ;
intrm_sf_mf_182 = intrm_sf_mf_151 >= 1.0 ? intrm_sf_mf_151 : 1.0 ;
t1599_idx_0 = pmf_log10 ( 6.9 / ( intrm_sf_mf_182 == 0.0 ? 1.0E-16 :
intrm_sf_mf_182 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_182 == 0.0 ? 1.0E-16 : intrm_sf_mf_182 ) + 0.00017169489553429715
) * 3.24 ; t2335 = X [ 347ULL ] * t2279 * - 2.9973120849090416 / ( t2648 ==
0.0 ? 1.0E-16 : t2648 ) ; intrm_sf_mf_1449 = X [ 347ULL ] * intrm_sf_mf_1449
* ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * -
0.046833001326703774 / ( t2651 == 0.0 ? 1.0E-16 : t2651 ) ; intrm_sf_mf_182 =
t2333 >= 1.0 ? t2333 : 1.0 ; intrm_sf_mf_1452 = ( intrm_sf_mf_151 - 2000.0 )
/ 2000.0 ; t2339 = intrm_sf_mf_1452 * intrm_sf_mf_1452 * 3.0 -
intrm_sf_mf_1452 * intrm_sf_mf_1452 * intrm_sf_mf_1452 * 2.0 ; if (
intrm_sf_mf_151 <= 2000.0 ) { intrm_sf_mf_1452 = t2335 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_151 >= 4000.0 ) {
intrm_sf_mf_1452 = intrm_sf_mf_1449 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_1452 = ( ( 1.0 - t2339 ) * t2335 + intrm_sf_mf_1449 * t2339 ) *
9.9999999999999991E-11 ; } if ( U_idx_9 >= 1.0 ) { intrm_sf_mf_1449 = 1.0 ; }
else { intrm_sf_mf_1449 = U_idx_9 <= 0.0 ? 0.0 : U_idx_9 ; } t1599_idx_0 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_182 == 0.0 ? 1.0E-16 : intrm_sf_mf_182 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_182 == 0.0 ?
1.0E-16 : intrm_sf_mf_182 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_182 = X [ 134ULL ] * zc_int36 * 35.2 / ( t3089 == 0.0 ? 1.0E-16 :
t3089 ) ; intrm_sf_mf_189 = X [ 134ULL ] * intrm_sf_mf_189 * ( 1.0 / (
t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.55 / ( t1756 == 0.0 ?
1.0E-16 : t1756 ) ; intrm_sf_mf_151 = ( t2333 - 2000.0 ) / 2000.0 ; t2335 =
intrm_sf_mf_151 * intrm_sf_mf_151 * 3.0 - intrm_sf_mf_151 * intrm_sf_mf_151 *
intrm_sf_mf_151 * 2.0 ; if ( t2333 <= 2000.0 ) { intrm_sf_mf_151 =
intrm_sf_mf_182 * 9.9999999999999991E-11 ; } else if ( t2333 >= 4000.0 ) {
intrm_sf_mf_151 = intrm_sf_mf_189 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_151 = ( ( 1.0 - t2335 ) * intrm_sf_mf_182 + intrm_sf_mf_189 *
t2335 ) * 9.9999999999999991E-11 ; } if ( - X [ 122ULL ] >= 0.0 ) {
intrm_sf_mf_189 = - X [ 122ULL ] ; } else { intrm_sf_mf_189 = X [ 122ULL ] ;
} intrm_sf_mf_182 = intrm_sf_mf_189 * 0.01 / ( t1749 == 0.0 ? 1.0E-16 : t1749
) ; t2333 = intrm_sf_mf_182 >= 1.0 ? intrm_sf_mf_182 : 1.0 ; t1599_idx_0 =
pmf_log10 ( 6.9 / ( t2333 == 0.0 ? 1.0E-16 : t2333 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2333 == 0.0 ? 1.0E-16 : t2333 ) +
0.00017169489553429715 ) * 3.24 ; t2335 = X [ 122ULL ] * zc_int36 * - 35.2 /
( t3089 == 0.0 ? 1.0E-16 : t3089 ) ; intrm_sf_mf_189 = X [ 122ULL ] *
intrm_sf_mf_189 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) *
- 0.55 / ( t1756 == 0.0 ? 1.0E-16 : t1756 ) ; t2333 = ( intrm_sf_mf_182 -
2000.0 ) / 2000.0 ; t2339 = X [ 51ULL ] * X [ 396ULL ] * 0.001 +
intrm_sf_mf_192 ; intrm_sf_mf_192 = t2333 * t2333 * 3.0 - t2333 * t2333 *
t2333 * 2.0 ; if ( intrm_sf_mf_182 <= 2000.0 ) { t2333 = t2335 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_182 >= 4000.0 ) { t2333 =
intrm_sf_mf_189 * 9.9999999999999991E-11 ; } else { t2333 = ( ( 1.0 -
intrm_sf_mf_192 ) * t2335 + intrm_sf_mf_189 * intrm_sf_mf_192 ) *
9.9999999999999991E-11 ; } if ( X [ 118ULL ] <= 0.0 ) { intrm_sf_mf_189 = 0.0
; } else { intrm_sf_mf_189 = X [ 118ULL ] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if
( X [ 117ULL ] <= 0.0 ) { intrm_sf_mf_182 = 0.0 ; } else { intrm_sf_mf_182 =
X [ 117ULL ] >= 1.0 ? 1.0 : X [ 117ULL ] ; } t2335 = ( ( ( 1.0 -
intrm_sf_mf_189 ) - intrm_sf_mf_182 ) * 296.802103844292 + intrm_sf_mf_189 *
461.523 ) + intrm_sf_mf_182 * 4124.48151675695 ; t1195 [ 0ULL ] = X [ 116ULL
] ; tlu2_linear_linear_prelookup ( & to_efOut . mField0 [ 0ULL ] , & to_efOut
. mField1 [ 0ULL ] , & to_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] )
; t94 = to_efOut ; tlu2_1d_linear_linear_value ( & uo_efOut [ 0ULL ] , & t94
. mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
uo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vo_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = vo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & wo_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = wo_efOut [ 0 ]
; t2341 = ( ( ( 1.0 - intrm_sf_mf_189 ) - intrm_sf_mf_182 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_189 ) + t1603_idx_0 * intrm_sf_mf_182 ; t1195 [
0ULL ] = X [ 156ULL ] ; tlu2_linear_linear_prelookup ( & xo_efOut . mField0 [
0ULL ] , & xo_efOut . mField1 [ 0ULL ] , & xo_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t19 = xo_efOut ; tlu2_1d_linear_linear_value ( &
yo_efOut [ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = yo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ap_efOut
[ 0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = ap_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bp_efOut [
0ULL ] , & t19 . mField0 [ 0ULL ] , & t19 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = bp_efOut [ 0 ] ; intrm_sf_mf_189 = ( ( ( 1.0 - t1783 ) -
intrm_sf_mf_413 ) * t1608_idx_0 + t1599_idx_0 * t1783 ) + t1603_idx_0 *
intrm_sf_mf_413 ; if ( 1.0 - X [ 127ULL ] >= 0.01 ) { intrm_sf_mf_182 = 1.0 -
X [ 127ULL ] ; } else if ( 1.0 - X [ 127ULL ] >= - 0.1 ) { intrm_sf_mf_182 =
pmf_exp ( ( ( 1.0 - X [ 127ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
intrm_sf_mf_182 = 1.6701700790245661E-7 ; } t1195 [ 0ULL ] = X [ 157ULL ] ;
tlu2_linear_linear_prelookup ( & cp_efOut . mField0 [ 0ULL ] , & cp_efOut .
mField1 [ 0ULL ] , & cp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t70 = cp_efOut ; tlu2_1d_linear_linear_value ( & dp_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = dp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ep_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = ep_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & fp_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = fp_efOut [ 0 ] ;
intrm_sf_mf_192 = ( ( ( 1.0 - t1783 ) - intrm_sf_mf_413 ) * t1608_idx_0 +
t1599_idx_0 * t1783 ) + t1603_idx_0 * intrm_sf_mf_413 ; t1195 [ 0ULL ] = X [
152ULL ] ; tlu2_linear_linear_prelookup ( & gp_efOut . mField0 [ 0ULL ] , &
gp_efOut . mField1 [ 0ULL ] , & gp_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = gp_efOut ; tlu2_1d_linear_linear_value ( &
hp_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = hp_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ip_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = ip_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & jp_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = jp_efOut [ 0 ] ; t2342 = ( ( ( 1.0 - t1783 ) -
intrm_sf_mf_413 ) * t1608_idx_0 + t1599_idx_0 * t1783 ) + t1603_idx_0 *
intrm_sf_mf_413 ; U_idx_0 = t1791 - ( - t1791 ) ; t1783 = ( ( X [ 131ULL ] -
1.01325 ) - ( - t1791 ) ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ;
intrm_sf_mf_413 = t1783 * t1783 * 3.0 - t1783 * t1783 * t1783 * 2.0 ; if ( X
[ 131ULL ] - 1.01325 <= - t1791 ) { t1783 = 1.01325 ; } else if ( X [ 131ULL
] - 1.01325 >= t1791 ) { t1783 = X [ 131ULL ] ; } else { t1783 = ( 1.0 -
intrm_sf_mf_413 ) * 1.01325 + X [ 131ULL ] * intrm_sf_mf_413 ; } if ( X [
165ULL ] <= 0.0 ) { intrm_sf_mf_413 = 0.0 ; } else { intrm_sf_mf_413 = X [
165ULL ] >= 1.0 ? 1.0 : X [ 165ULL ] ; } if ( X [ 164ULL ] <= 0.0 ) { t1791 =
0.0 ; } else { t1791 = X [ 164ULL ] >= 1.0 ? 1.0 : X [ 164ULL ] ; } U_idx_8 =
( ( ( 1.0 - intrm_sf_mf_413 ) - t1791 ) * 296.802103844292 + intrm_sf_mf_413
* 461.523 ) + t1791 * 4124.48151675695 ; t1195 [ 0ULL ] = X [ 163ULL ] ;
tlu2_linear_linear_prelookup ( & kp_efOut . mField0 [ 0ULL ] , & kp_efOut .
mField1 [ 0ULL ] , & kp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = kp_efOut ; tlu2_1d_linear_linear_value ( & lp_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = lp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & mp_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = mp_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & np_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = np_efOut [ 0 ] ; t2345 =
( ( ( 1.0 - intrm_sf_mf_413 ) - t1791 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_413 ) + t1603_idx_0 * t1791 ; intrm_sf_mf_413 = ( X [ 55ULL ] -
0.9 ) / 0.099999999999999978 ; t1195 [ 0ULL ] = X [ 178ULL ] ;
tlu2_linear_linear_prelookup ( & op_efOut . mField0 [ 0ULL ] , & op_efOut .
mField1 [ 0ULL ] , & op_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = op_efOut ; tlu2_1d_linear_linear_value ( & pp_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = pp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & qp_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = qp_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & rp_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = rp_efOut [ 0 ] ; t1791 =
( ( ( 1.0 - t1836 ) - intrm_sf_mf_325 ) * t1608_idx_0 + t1599_idx_0 * t1836 )
+ t1603_idx_0 * intrm_sf_mf_325 ; t1195 [ 0ULL ] = X [ 159ULL ] ;
tlu2_linear_linear_prelookup ( & sp_efOut . mField0 [ 0ULL ] , & sp_efOut .
mField1 [ 0ULL ] , & sp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = sp_efOut ; tlu2_1d_linear_linear_value ( & tp_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = tp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & up_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = up_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & vp_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = vp_efOut [ 0 ] ; t1836 =
( ( ( 1.0 - t1846 ) - t1848 ) * t1608_idx_0 + t1599_idx_0 * t1846 ) +
t1603_idx_0 * t1848 ; t1195 [ 0ULL ] = X [ 182ULL ] ;
tlu2_linear_linear_prelookup ( & wp_efOut . mField0 [ 0ULL ] , & wp_efOut .
mField1 [ 0ULL ] , & wp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t48 = wp_efOut ; tlu2_1d_linear_linear_value ( & xp_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = xp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & yp_efOut [ 0ULL ] , & t48 . mField0 [
0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = yp_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & aq_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL
] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = aq_efOut [ 0 ] ;
intrm_sf_mf_325 = ( ( ( 1.0 - intrm_sf_mf_218 ) - t1811 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_218 ) + t1603_idx_0 * t1811 ; t1195 [ 0ULL ] = X [
187ULL ] ; tlu2_linear_linear_prelookup ( & bq_efOut . mField0 [ 0ULL ] , &
bq_efOut . mField1 [ 0ULL ] , & bq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t32 = bq_efOut ; tlu2_1d_linear_linear_value ( &
cq_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = cq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & dq_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = dq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & eq_efOut [
0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = eq_efOut [ 0 ] ; t1846 = ( ( ( 1.0 - intrm_sf_mf_218 ) -
t1811 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_218 ) + t1603_idx_0 * t1811
; if ( - X [ 172ULL ] >= 0.0 ) { t1848 = - X [ 172ULL ] ; } else { t1848 = X
[ 172ULL ] ; } intrm_sf_mf_381 = t1848 * 0.01 / ( t1886 == 0.0 ? 1.0E-16 :
t1886 ) ; t2347 = intrm_sf_mf_381 >= 1.0 ? intrm_sf_mf_381 : 1.0 ;
t1599_idx_0 = pmf_log10 ( 6.9 / ( t2347 == 0.0 ? 1.0E-16 : t2347 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2347 == 0.0 ? 1.0E-16 : t2347
) + 0.00017169489553429715 ) * 3.24 ; t2348 = X [ 172ULL ] * t1818 * - 35.2 /
( t1890 == 0.0 ? 1.0E-16 : t1890 ) ; t1848 = X [ 172ULL ] * t1848 * ( 1.0 / (
t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * - 0.55 / ( t1893 == 0.0 ?
1.0E-16 : t1893 ) ; t2347 = ( intrm_sf_mf_381 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_384 = t2347 * t2347 * 3.0 - t2347 * t2347 * t2347 * 2.0 ; if (
intrm_sf_mf_381 <= 2000.0 ) { t2347 = t2348 * 9.9999999999999991E-11 ; } else
if ( intrm_sf_mf_381 >= 4000.0 ) { t2347 = t1848 * 9.9999999999999991E-11 ; }
else { t2347 = ( ( 1.0 - intrm_sf_mf_384 ) * t2348 + t1848 * intrm_sf_mf_384
) * 9.9999999999999991E-11 ; } t1848 = X [ 186ULL ] >= 0.0 ? X [ 186ULL ] : -
X [ 186ULL ] ; intrm_sf_mf_381 = t1848 * 0.01 / ( t1886 == 0.0 ? 1.0E-16 :
t1886 ) ; t2348 = intrm_sf_mf_381 >= 1.0 ? intrm_sf_mf_381 : 1.0 ;
t1599_idx_0 = pmf_log10 ( 6.9 / ( t2348 == 0.0 ? 1.0E-16 : t2348 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2348 == 0.0 ? 1.0E-16 : t2348
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_384 = X [ 186ULL ] * t1818
* 35.2 / ( t1890 == 0.0 ? 1.0E-16 : t1890 ) ; t1848 = X [ 186ULL ] * t1848 *
( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.55 / ( t1893 ==
0.0 ? 1.0E-16 : t1893 ) ; t2348 = ( intrm_sf_mf_381 - 2000.0 ) / 2000.0 ;
t2350 = t2348 * t2348 * 3.0 - t2348 * t2348 * t2348 * 2.0 ; if (
intrm_sf_mf_381 <= 2000.0 ) { t2348 = intrm_sf_mf_384 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_381 >= 4000.0 ) { t2348 =
t1848 * 9.9999999999999991E-11 ; } else { t2348 = ( ( 1.0 - t2350 ) *
intrm_sf_mf_384 + t1848 * t2350 ) * 9.9999999999999991E-11 ; } t1195 [ 0ULL ]
= X [ 204ULL ] ; tlu2_linear_linear_prelookup ( & fq_efOut . mField0 [ 0ULL ]
, & fq_efOut . mField1 [ 0ULL ] , & fq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t48 = fq_efOut ; tlu2_1d_linear_linear_value ( &
gq_efOut [ 0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = gq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & hq_efOut
[ 0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = hq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & iq_efOut [
0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = iq_efOut [ 0 ] ; t1848 = ( ( ( 1.0 - intrm_sf_mf_385 ) -
zc_int135 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_385 ) + t1603_idx_0 *
zc_int135 ; t1195 [ 0ULL ] = X [ 205ULL ] ; tlu2_linear_linear_prelookup ( &
jq_efOut . mField0 [ 0ULL ] , & jq_efOut . mField1 [ 0ULL ] , & jq_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [
0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 = jq_efOut ;
tlu2_1d_linear_linear_value ( & kq_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = kq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lq_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = lq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mq_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ]
, & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = mq_efOut [ 0 ] ;
intrm_sf_mf_381 = ( ( ( 1.0 - intrm_sf_mf_385 ) - zc_int135 ) * t1608_idx_0 +
t1599_idx_0 * intrm_sf_mf_385 ) + t1603_idx_0 * zc_int135 ; t1195 [ 0ULL ] =
X [ 200ULL ] ; tlu2_linear_linear_prelookup ( & nq_efOut . mField0 [ 0ULL ] ,
& nq_efOut . mField1 [ 0ULL ] , & nq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = nq_efOut ; tlu2_1d_linear_linear_value ( &
oq_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = oq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pq_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = pq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & qq_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = qq_efOut [ 0 ] ; intrm_sf_mf_384 = ( ( ( 1.0 -
intrm_sf_mf_385 ) - zc_int135 ) * t1608_idx_0 + t1599_idx_0 * intrm_sf_mf_385
) + t1603_idx_0 * zc_int135 ; U_idx_0 = t1883 - ( - t1883 ) ; intrm_sf_mf_385
= ( ( X [ 24ULL ] - X [ 179ULL ] ) - ( - t1883 ) ) / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ; zc_int135 = intrm_sf_mf_385 * intrm_sf_mf_385 * 3.0 -
intrm_sf_mf_385 * intrm_sf_mf_385 * intrm_sf_mf_385 * 2.0 ; if ( X [ 24ULL ]
- X [ 179ULL ] <= - t1883 ) { intrm_sf_mf_385 = X [ 179ULL ] ; } else if ( X
[ 24ULL ] - X [ 179ULL ] >= t1883 ) { intrm_sf_mf_385 = X [ 24ULL ] ; } else
{ intrm_sf_mf_385 = ( 1.0 - zc_int135 ) * X [ 179ULL ] + X [ 24ULL ] *
zc_int135 ; } if ( 1.0 - X [ 218ULL ] >= 0.01 ) { t1883 = 1.0 - X [ 218ULL ]
; } else if ( 1.0 - X [ 218ULL ] >= - 0.1 ) { t1883 = pmf_exp ( ( ( 1.0 - X [
218ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1883 = 1.6701700790245661E-7
; } if ( X [ 209ULL ] <= 0.0 ) { zc_int135 = 0.0 ; } else { zc_int135 = X [
209ULL ] >= 1.0 ? 1.0 : X [ 209ULL ] ; } if ( X [ 208ULL ] <= 0.0 ) { t2350 =
0.0 ; } else { t2350 = X [ 208ULL ] >= 1.0 ? 1.0 : X [ 208ULL ] ; } U_idx_2 =
( ( ( 1.0 - zc_int135 ) - t2350 ) * 296.802103844292 + zc_int135 * 461.523 )
+ t2350 * 259.836612622973 ; t1195 [ 0ULL ] = X [ 207ULL ] ;
tlu2_linear_linear_prelookup ( & rq_efOut . mField0 [ 0ULL ] , & rq_efOut .
mField1 [ 0ULL ] , & rq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = rq_efOut ; tlu2_1d_linear_linear_value ( & sq_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = sq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & tq_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = tq_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & uq_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = uq_efOut [ 0 ] ;
piece218 = ( ( ( 1.0 - zc_int135 ) - t2350 ) * t1608_idx_0 + t1599_idx_0 *
zc_int135 ) + t1603_idx_0 * t2350 ; zc_int135 = intrm_sf_mf_413 *
intrm_sf_mf_413 * 3.0 - intrm_sf_mf_413 * intrm_sf_mf_413 * intrm_sf_mf_413 *
2.0 ; tlu2_1d_linear_linear_value ( & vq_efOut [ 0ULL ] , & t60 . mField0 [
0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField23 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = vq_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & wq_efOut [ 0ULL ] , & t60 . mField0 [
0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField24 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = wq_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & xq_efOut [ 0ULL ] , & t60 . mField0 [
0ULL ] , & t60 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = xq_efOut [ 0
] ; intrm_sf_mf_413 = ( ( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 +
t1599_idx_0 * t1894 ) + t1603_idx_0 * t1895 ; tlu2_1d_linear_linear_value ( &
yq_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = yq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ar_efOut
[ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1599_idx_0 = ar_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & br_efOut
[ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField25 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1603_idx_0 = br_efOut [ 0 ] ; t2350 = ( ( ( 1.0 - t1894 ) - t1895 ) *
t1608_idx_0 + t1599_idx_0 * t1894 ) + t1603_idx_0 * t1895 ; t1195 [ 0ULL ] =
X [ 221ULL ] ; tlu2_linear_linear_prelookup ( & cr_efOut . mField0 [ 0ULL ] ,
& cr_efOut . mField1 [ 0ULL ] , & cr_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t31 = cr_efOut ; tlu2_1d_linear_linear_value ( &
dr_efOut [ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = dr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & er_efOut
[ 0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = er_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fr_efOut [
0ULL ] , & t31 . mField0 [ 0ULL ] , & t31 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = fr_efOut [ 0 ] ; t2353 = ( ( ( 1.0 - piece250 ) - t1930 ) *
t1608_idx_0 + t1599_idx_0 * piece250 ) + t1603_idx_0 * t1930 ;
tlu2_1d_linear_linear_value ( & gr_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = gr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & hr_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = hr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ir_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField25 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ir_efOut [ 0 ] ;
piece250 = ( ( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 + t1599_idx_0 * t1894
) + t1603_idx_0 * t1895 ; tlu2_1d_linear_linear_value ( & jr_efOut [ 0ULL ] ,
& t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
jr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & kr_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = kr_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & lr_efOut [ 0ULL ] , & t54 . mField0 [
0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = lr_efOut [ 0
] ; t1930 = ( ( ( 1.0 - t1894 ) - t1895 ) * t1608_idx_0 + t1599_idx_0 * t1894
) + t1603_idx_0 * t1895 ; t1195 [ 0ULL ] = X [ 232ULL ] ;
tlu2_linear_linear_prelookup ( & mr_efOut . mField0 [ 0ULL ] , & mr_efOut .
mField1 [ 0ULL ] , & mr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = mr_efOut ; tlu2_1d_linear_linear_value ( & nr_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = nr_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & or_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = or_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & pr_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = pr_efOut [ 0 ] ; t2354 =
( ( ( 1.0 - t2105 ) - t3391 ) * t1608_idx_0 + t1599_idx_0 * t2105 ) +
t1603_idx_0 * t3391 ; if ( X [ 55ULL ] <= 0.9 ) { t2105 = 0.0 ; } else {
t2105 = X [ 55ULL ] >= 1.0 ? 1.0 : zc_int135 ; } t1195 [ 0ULL ] = X [ 250ULL
] ; tlu2_linear_linear_prelookup ( & qr_efOut . mField0 [ 0ULL ] , & qr_efOut
. mField1 [ 0ULL ] , & qr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] )
; t94 = qr_efOut ; tlu2_1d_linear_linear_value ( & rr_efOut [ 0ULL ] , & t94
. mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 =
rr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & sr_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = sr_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & tr_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = tr_efOut [ 0 ]
; zc_int135 = ( ( ( 1.0 - intrm_sf_mf_583 ) - intrm_sf_mf_538 ) * t1608_idx_0
+ t1599_idx_0 * intrm_sf_mf_583 ) + t1603_idx_0 * intrm_sf_mf_538 ; t1195 [
0ULL ] = X [ 261ULL ] ; tlu2_linear_linear_prelookup ( & ur_efOut . mField0 [
0ULL ] , & ur_efOut . mField1 [ 0ULL ] , & ur_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = ur_efOut ; tlu2_1d_linear_linear_value ( &
vr_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = vr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wr_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = wr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & xr_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = xr_efOut [ 0 ] ; intrm_sf_mf_583 = ( ( ( 1.0 - t1932 ) -
t1933 ) * t1608_idx_0 + t1599_idx_0 * t1932 ) + t1603_idx_0 * t1933 ; t1195 [
0ULL ] = X [ 264ULL ] ; tlu2_linear_linear_prelookup ( & yr_efOut . mField0 [
0ULL ] , & yr_efOut . mField1 [ 0ULL ] , & yr_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = yr_efOut ; tlu2_1d_linear_linear_value ( &
as_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = as_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bs_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = bs_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & cs_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = cs_efOut [ 0 ] ; intrm_sf_mf_538 = ( ( ( 1.0 - t1932 ) -
t1933 ) * t1608_idx_0 + t1599_idx_0 * t1932 ) + t1603_idx_0 * t1933 ; if ( -
X [ 186ULL ] >= 0.0 ) { t3391 = - X [ 186ULL ] ; } else { t3391 = X [ 186ULL
] ; } t2355 = t3391 * 0.05 / ( t2990 == 0.0 ? 1.0E-16 : t2990 ) ; t2356 =
t2355 >= 1.0 ? t2355 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2356 == 0.0 ?
1.0E-16 : t2356 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2356 ==
0.0 ? 1.0E-16 : t2356 ) + 2.8767404433520813E-5 ) * 3.24 ; t2357 = X [ 186ULL
] * t1941 * - 11.2 / ( t2945 == 0.0 ? 1.0E-16 : t2945 ) ; t3391 = X [ 186ULL
] * t3391 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * -
0.175 / ( t2983 == 0.0 ? 1.0E-16 : t2983 ) ; t2356 = ( t2355 - 2000.0 ) /
2000.0 ; t2358 = t2356 * t2356 * 3.0 - t2356 * t2356 * t2356 * 2.0 ; if (
t2355 <= 2000.0 ) { t2356 = t2357 * 9.9999999999999991E-11 ; } else if (
t2355 >= 4000.0 ) { t2356 = t3391 * 9.9999999999999991E-11 ; } else { t2356 =
( ( 1.0 - t2358 ) * t2357 + t3391 * t2358 ) * 9.9999999999999991E-11 ; }
t3391 = X [ 263ULL ] >= 0.0 ? X [ 263ULL ] : - X [ 263ULL ] ; t2355 = t3391 *
0.05 / ( t2990 == 0.0 ? 1.0E-16 : t2990 ) ; t2357 = t2355 >= 1.0 ? t2355 :
1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2357 == 0.0 ? 1.0E-16 : t2357 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2357 == 0.0 ? 1.0E-16 : t2357
) + 2.8767404433520813E-5 ) * 3.24 ; t2358 = X [ 263ULL ] * t1941 * 11.2 / (
t2945 == 0.0 ? 1.0E-16 : t2945 ) ; t3391 = X [ 263ULL ] * t3391 * ( 1.0 / (
t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.175 / ( t2983 == 0.0 ?
1.0E-16 : t2983 ) ; t2357 = ( t2355 - 2000.0 ) / 2000.0 ; t2359 = t2357 *
t2357 * 3.0 - t2357 * t2357 * t2357 * 2.0 ; if ( t2355 <= 2000.0 ) { t2357 =
t2358 * 9.9999999999999991E-11 ; } else if ( t2355 >= 4000.0 ) { t2357 =
t3391 * 9.9999999999999991E-11 ; } else { t2357 = ( ( 1.0 - t2359 ) * t2358 +
t3391 * t2359 ) * 9.9999999999999991E-11 ; } t1195 [ 0ULL ] = X [ 64ULL ] ;
tlu2_linear_linear_prelookup ( & ds_efOut . mField0 [ 0ULL ] , & ds_efOut .
mField1 [ 0ULL ] , & ds_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = ds_efOut ; tlu2_1d_linear_linear_value ( & es_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = es_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & fs_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = fs_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & gs_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = gs_efOut [ 0 ] ; t3391 =
( ( ( 1.0 - intrm_sf_mf_715 ) - intrm_sf_mf_718 ) * t1608_idx_0 + t1599_idx_0
* intrm_sf_mf_715 ) + t1603_idx_0 * intrm_sf_mf_718 ; t1195 [ 0ULL ] = X [
275ULL ] ; tlu2_linear_linear_prelookup ( & hs_efOut . mField0 [ 0ULL ] , &
hs_efOut . mField1 [ 0ULL ] , & hs_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = hs_efOut ; tlu2_1d_linear_linear_value ( &
is_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = is_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & js_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = js_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ks_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = ks_efOut [ 0 ] ; intrm_sf_mf_715 = ( ( ( 1.0 - t1953 ) -
t1980 ) * t1608_idx_0 + t1599_idx_0 * t1953 ) + t1603_idx_0 * t1980 ; t1195 [
0ULL ] = X [ 278ULL ] ; tlu2_linear_linear_prelookup ( & ls_efOut . mField0 [
0ULL ] , & ls_efOut . mField1 [ 0ULL ] , & ls_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t94 = ls_efOut ; tlu2_1d_linear_linear_value ( &
ms_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL
] ) ; t1608_idx_0 = ms_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ns_efOut
[ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1599_idx_0 = ns_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & os_efOut [
0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1603_idx_0 = os_efOut [ 0 ] ; intrm_sf_mf_718 = ( ( ( 1.0 - t1953 ) -
t1980 ) * t1608_idx_0 + t1599_idx_0 * t1953 ) + t1603_idx_0 * t1980 ; if ( -
X [ 263ULL ] >= 0.0 ) { t2355 = - X [ 263ULL ] ; } else { t2355 = X [ 263ULL
] ; } t2358 = t2355 * 0.01 / ( t3037 == 0.0 ? 1.0E-16 : t3037 ) ; t2359 =
t2358 >= 1.0 ? t2358 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2359 == 0.0 ?
1.0E-16 : t2359 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2359 ==
0.0 ? 1.0E-16 : t2359 ) + 0.00017169489553429715 ) * 3.24 ; t2360 = X [
263ULL ] * zc_int263 * - 2.9973120849090416 / ( t3039 == 0.0 ? 1.0E-16 :
t3039 ) ; t2355 = X [ 263ULL ] * t2355 * ( 1.0 / ( t1599_idx_0 == 0.0 ?
1.0E-16 : t1599_idx_0 ) ) * - 0.046833001326703774 / ( t2131 == 0.0 ? 1.0E-16
: t2131 ) ; t2359 = ( t2358 - 2000.0 ) / 2000.0 ; t2361 = t2359 * t2359 * 3.0
- t2359 * t2359 * t2359 * 2.0 ; if ( t2358 <= 2000.0 ) { t2359 = t2360 *
9.9999999999999991E-11 ; } else if ( t2358 >= 4000.0 ) { t2359 = t2355 *
9.9999999999999991E-11 ; } else { t2359 = ( ( 1.0 - t2361 ) * t2360 + t2355 *
t2361 ) * 9.9999999999999991E-11 ; } t2355 = X [ 277ULL ] >= 0.0 ? X [ 277ULL
] : - X [ 277ULL ] ; t2358 = t2355 * 0.01 / ( t3037 == 0.0 ? 1.0E-16 : t3037
) ; t2360 = t2358 >= 1.0 ? t2358 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / (
t2360 == 0.0 ? 1.0E-16 : t2360 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t2360 == 0.0 ? 1.0E-16 : t2360 ) + 0.00017169489553429715 ) * 3.24 ;
t2361 = X [ 277ULL ] * zc_int263 * 2.9973120849090416 / ( t3039 == 0.0 ?
1.0E-16 : t3039 ) ; t2355 = X [ 277ULL ] * t2355 * ( 1.0 / ( t1599_idx_0 ==
0.0 ? 1.0E-16 : t1599_idx_0 ) ) * 0.046833001326703774 / ( t2131 == 0.0 ?
1.0E-16 : t2131 ) ; t2360 = ( t2358 - 2000.0 ) / 2000.0 ; t2362 = t2360 *
t2360 * 3.0 - t2360 * t2360 * t2360 * 2.0 ; if ( t2358 <= 2000.0 ) { t2360 =
t2361 * 9.9999999999999991E-11 ; } else if ( t2358 >= 4000.0 ) { t2360 =
t2355 * 9.9999999999999991E-11 ; } else { t2360 = ( ( 1.0 - t2362 ) * t2361 +
t2355 * t2362 ) * 9.9999999999999991E-11 ; } t1195 [ 0ULL ] = X [ 289ULL ] ;
tlu2_linear_linear_prelookup ( & ps_efOut . mField0 [ 0ULL ] , & ps_efOut .
mField1 [ 0ULL ] , & ps_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = ps_efOut ; tlu2_1d_linear_linear_value ( & qs_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = qs_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & rs_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = rs_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ss_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ss_efOut [ 0 ] ; t2355 =
( ( ( 1.0 - intrm_sf_mf_740 ) - t2047 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_740 ) + t1603_idx_0 * t2047 ; t1195 [ 0ULL ] = X [ 291ULL ] ;
tlu2_linear_linear_prelookup ( & ts_efOut . mField0 [ 0ULL ] , & ts_efOut .
mField1 [ 0ULL ] , & ts_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t86 = ts_efOut ; tlu2_1d_linear_linear_value ( & us_efOut [ 0ULL ] , & t86 .
mField0 [ 0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = us_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vs_efOut [ 0ULL ] , & t86 . mField0 [
0ULL ] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = vs_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ws_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL
] , & t86 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ws_efOut [ 0 ] ; t2358 =
( ( ( 1.0 - intrm_sf_mf_740 ) - t2047 ) * t1608_idx_0 + t1599_idx_0 *
intrm_sf_mf_740 ) + t1603_idx_0 * t2047 ; if ( - X [ 277ULL ] >= 0.0 ) {
t2361 = - X [ 277ULL ] ; } else { t2361 = X [ 277ULL ] ; } t2362 = t2361 *
0.01 / ( t2222 == 0.0 ? 1.0E-16 : t2222 ) ; t2363 = t2362 >= 1.0 ? t2362 :
1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / ( t2363 == 0.0 ? 1.0E-16 : t2363 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2363 == 0.0 ? 1.0E-16 : t2363
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_871 = X [ 277ULL ] *
piece151 * - 2.9973120849090416 / ( t2226 == 0.0 ? 1.0E-16 : t2226 ) ; t2361
= X [ 277ULL ] * t2361 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0
) ) * - 0.046833001326703774 / ( t2229 == 0.0 ? 1.0E-16 : t2229 ) ; t2363 = (
t2362 - 2000.0 ) / 2000.0 ; intrm_sf_mf_992 = t2363 * t2363 * 3.0 - t2363 *
t2363 * t2363 * 2.0 ; if ( t2362 <= 2000.0 ) { t2363 = intrm_sf_mf_871 *
9.9999999999999991E-11 ; } else if ( t2362 >= 4000.0 ) { t2363 = t2361 *
9.9999999999999991E-11 ; } else { t2363 = ( ( 1.0 - intrm_sf_mf_992 ) *
intrm_sf_mf_871 + t2361 * intrm_sf_mf_992 ) * 9.9999999999999991E-11 ; } if (
- X [ 134ULL ] >= 0.0 ) { t2361 = - X [ 134ULL ] ; } else { t2361 = X [
134ULL ] ; } t2362 = t2361 * 0.01 / ( t2222 == 0.0 ? 1.0E-16 : t2222 ) ;
intrm_sf_mf_871 = t2362 >= 1.0 ? t2362 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9
/ ( intrm_sf_mf_871 == 0.0 ? 1.0E-16 : intrm_sf_mf_871 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_871 == 0.0 ?
1.0E-16 : intrm_sf_mf_871 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_992 = X [ 134ULL ] * piece151 * - 2.9973120849090416 / ( t2226 ==
0.0 ? 1.0E-16 : t2226 ) ; t2361 = X [ 134ULL ] * t2361 * ( 1.0 / (
t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) * - 0.046833001326703774 / (
t2229 == 0.0 ? 1.0E-16 : t2229 ) ; intrm_sf_mf_871 = ( t2362 - 2000.0 ) /
2000.0 ; t3006 = intrm_sf_mf_871 * intrm_sf_mf_871 * 3.0 - intrm_sf_mf_871 *
intrm_sf_mf_871 * intrm_sf_mf_871 * 2.0 ; if ( t2362 <= 2000.0 ) {
intrm_sf_mf_871 = intrm_sf_mf_992 * 9.9999999999999991E-11 ; } else if (
t2362 >= 4000.0 ) { intrm_sf_mf_871 = t2361 * 9.9999999999999991E-11 ; } else
{ intrm_sf_mf_871 = ( ( 1.0 - t3006 ) * intrm_sf_mf_992 + t2361 * t3006 ) *
9.9999999999999991E-11 ; } t1195 [ 0ULL ] = X [ 310ULL ] ;
tlu2_linear_linear_prelookup ( & xs_efOut . mField0 [ 0ULL ] , & xs_efOut .
mField1 [ 0ULL ] , & xs_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t94 = xs_efOut ; tlu2_1d_linear_linear_value ( & ys_efOut [ 0ULL ] , & t94 .
mField0 [ 0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ys_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & at_efOut [ 0ULL ] , & t94 . mField0 [
0ULL ] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = at_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & bt_efOut [ 0ULL ] , & t94 . mField0 [ 0ULL
] , & t94 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = bt_efOut [ 0 ] ; t2361 =
( ( ( 1.0 - t2068 ) - t2079 ) * t1608_idx_0 + t1599_idx_0 * t2068 ) +
t1603_idx_0 * t2079 ; t1195 [ 0ULL ] = X [ 313ULL ] ;
tlu2_linear_linear_prelookup ( & ct_efOut . mField0 [ 0ULL ] , & ct_efOut .
mField1 [ 0ULL ] , & ct_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t77 = ct_efOut ; tlu2_1d_linear_linear_value ( & dt_efOut [ 0ULL ] , & t77 .
mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = dt_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & et_efOut [ 0ULL ] , & t77 . mField0 [
0ULL ] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = et_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ft_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL
] , & t77 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = ft_efOut [ 0 ] ; t2362 =
( ( ( 1.0 - t2068 ) - t2079 ) * t1608_idx_0 + t1599_idx_0 * t2068 ) +
t1603_idx_0 * t2079 ; if ( - X [ 244ULL ] >= 0.0 ) { intrm_sf_mf_992 = - X [
244ULL ] ; } else { intrm_sf_mf_992 = X [ 244ULL ] ; } t3006 =
intrm_sf_mf_992 * 0.05 / ( t2318 == 0.0 ? 1.0E-16 : t2318 ) ; intrm_sf_mf_995
= t3006 >= 1.0 ? t3006 : 1.0 ; t1599_idx_0 = pmf_log10 ( 6.9 / (
intrm_sf_mf_995 == 0.0 ? 1.0E-16 : intrm_sf_mf_995 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_995 == 0.0 ? 1.0E-16 : intrm_sf_mf_995 )
+ 2.8767404433520813E-5 ) * 3.24 ; t2961 = X [ 244ULL ] * t2087 * - 11.2 / (
t2322 == 0.0 ? 1.0E-16 : t2322 ) ; intrm_sf_mf_992 = X [ 244ULL ] *
intrm_sf_mf_992 * ( 1.0 / ( t1599_idx_0 == 0.0 ? 1.0E-16 : t1599_idx_0 ) ) *
- 0.175 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) ; intrm_sf_mf_995 = ( t3006 -
2000.0 ) / 2000.0 ; t2931 = intrm_sf_mf_995 * intrm_sf_mf_995 * 3.0 -
intrm_sf_mf_995 * intrm_sf_mf_995 * intrm_sf_mf_995 * 2.0 ; if ( t3006 <=
2000.0 ) { intrm_sf_mf_995 = t2961 * 9.9999999999999991E-11 ; } else if (
t3006 >= 4000.0 ) { intrm_sf_mf_995 = intrm_sf_mf_992 *
9.9999999999999991E-11 ; } else { intrm_sf_mf_995 = ( ( 1.0 - t2931 ) * t2961
+ intrm_sf_mf_992 * t2931 ) * 9.9999999999999991E-11 ; } if ( M [ 0ULL ] != 0
) { t1604 [ 0ULL ] = 0ULL ; for ( t1611 = 0ULL ; t1611 < 42ULL ; t1611 ++ ) {
t1612 = t1611 / 42ULL ; t1613 = ( t1611 - t1611 % 42ULL ) + t1604 [ t1612 >
0ULL ? 0ULL : t1612 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [
t1611 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t1613 >
41ULL ? 41ULL : t1613 ] * 1.0E-5 ) { t1604 [ t1612 > 0ULL ? 0ULL : t1612 ] =
t1611 % 42ULL ; } } t1611 = t1604 [ 0ULL ] ; intrm_sf_mf_992 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t1611 > 41ULL ? 41ULL : t1611 ] *
1.0E-5 ; } else { intrm_sf_mf_992 = X [ 54ULL ] ; } t3006 = - pmf_sqrt ( ( (
real_T ) ( M [ 24ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2916 / ( t1718 == 0.0 ?
1.0E-16 : t1718 ) / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t1725 >= 0.0 ) { t2961 = t3006 * 100000.0 ; }
else { t2961 = - t3006 * 100000.0 ; } if ( M [ 178ULL ] != 0 ) { t1725 =
216.59999999999997 ; } else { t1725 = M [ 179ULL ] != 0 ? 623.15 : U_idx_5 ;
} t1195 [ 0ULL ] = U_idx_4 >= 0.0 ? t1725 : X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & gt_efOut . mField0 [ 0ULL ] , & gt_efOut .
mField1 [ 0ULL ] , & gt_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t32 = gt_efOut ; tlu2_1d_linear_linear_value ( & ht_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = ht_efOut
[ 0 ] ; t1725 = t1608_idx_0 ; t1599_idx_0 = X [ 159ULL ] * t1849 ; t1849 = (
( real_T ) ( M [ 153ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1599_idx_0 / ( X [ 160ULL
] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ) * ( t1599_idx_0 / ( X [ 160ULL ] == 0.0
? 1.0E-16 : X [ 160ULL ] ) ) * ( - X [ 186ULL ] / 0.0019634954084936209 ) * (
- X [ 186ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t1836 ; U_idx_1 = X [ 250ULL ] * zc_int103 ; zc_int103 = ( ( real_T ) ( M [
180ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 251ULL ] == 0.0 ? 1.0E-16 :
X [ 251ULL ] ) ) * ( U_idx_1 / ( X [ 251ULL ] == 0.0 ? 1.0E-16 : X [ 251ULL ]
) ) * ( X [ 263ULL ] / 0.0019634954084936209 ) * ( X [ 263ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + zc_int135 ; t2931 =
pmf_sqrt ( t1935 * t1935 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 181ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 261ULL ] * t1936 * t1934 * 1.0E-9 ) ; t1935 =
pmf_sqrt ( t1946 * t1946 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 182ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 264ULL ] * zc_int200 * t1934 * 1.0E-9 ) ; t1936
= - pmf_sqrt ( ( ( real_T ) ( M [ 183ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2987 / (
t1934 == 0.0 ? 1.0E-16 : t1934 ) / ( X [ 261ULL ] == 0.0 ? 1.0E-16 : X [
261ULL ] ) ) ) * 0.0019634954084936209 ; t1946 = t1941 * t1936 * 11.2 / (
t2945 == 0.0 ? 1.0E-16 : t2945 ) ; if ( t116 >= 0.0 ) { zc_int200 = t1936 *
100000.0 ; } else { zc_int200 = - t1936 * 100000.0 ; } t116 = zc_int200 *
0.05 / ( t2990 == 0.0 ? 1.0E-16 : t2990 ) ; U_idx_5 = t2961 * 0.01 / ( t1749
== 0.0 ? 1.0E-16 : t1749 ) ; t2916 = t1944 >= 1.0 ? t116 : 1.0 ; U_idx_0 =
pmf_log10 ( 6.9 / ( t2916 == 0.0 ? 1.0E-16 : t2916 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t2916 == 0.0 ? 1.0E-16 : t2916 ) +
2.8767404433520813E-5 ) * 3.24 ; t1936 = t1936 * zc_int200 * ( 1.0 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * 0.175 / ( t2983 == 0.0 ? 1.0E-16 :
t2983 ) ; t116 = ( t116 - 2000.0 ) / 2000.0 ; zc_int200 = t116 * t116 * 3.0 -
t116 * t116 * t116 * 2.0 ; if ( t1944 <= 2000.0 ) { t116 = t1946 * 1.0E-5 ; }
else if ( t1944 >= 4000.0 ) { t116 = t1936 * 1.0E-5 ; } else { t116 = ( ( 1.0
- zc_int200 ) * t1946 + t1936 * zc_int200 ) * 1.0E-5 ; } t2916 = - ( X [
186ULL ] * t2931 ) ; t1936 = t2916 / 0.0019634954084936209 *
0.00031622776601683789 + t116 ; U_idx_0 = - t1936 - t1936 * - 0.95 ; t116 = (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke - t1936 * -
0.95 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t1944 = t116 * t116 * 3.0 -
t116 * t116 * t116 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke <= t115 * -
0.95 ) { t116 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke >= - t115 )
{ t116 = t1936 ; } else { t116 = ( 1.0 - t1944 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke + t1936 *
t1944 ; } t1936 = t112 >= 1.0 ? U_idx_5 : 1.0 ; t115 = - pmf_sqrt ( ( (
real_T ) ( M [ 184ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3023 / ( t1934 == 0.0 ?
1.0E-16 : t1934 ) / ( X [ 264ULL ] == 0.0 ? 1.0E-16 : X [ 264ULL ] ) ) ) *
0.0019634954084936209 ; t1941 = t1941 * t115 * 11.2 / ( t2945 == 0.0 ?
1.0E-16 : t2945 ) ; if ( zc_int201 >= 0.0 ) { t1944 = t115 * 100000.0 ; }
else { t1944 = - t115 * 100000.0 ; } t1946 = t1944 * 0.05 / ( t2990 == 0.0 ?
1.0E-16 : t2990 ) ; zc_int200 = t1952 >= 1.0 ? t1946 : 1.0 ; t2931 =
pmf_log10 ( 6.9 / ( zc_int200 == 0.0 ? 1.0E-16 : zc_int200 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( zc_int200 == 0.0 ? 1.0E-16 :
zc_int200 ) + 2.8767404433520813E-5 ) * 3.24 ; t115 = t115 * t1944 * ( 1.0 /
( t2931 == 0.0 ? 1.0E-16 : t2931 ) ) * 0.175 / ( t2983 == 0.0 ? 1.0E-16 :
t2983 ) ; t1944 = ( t1946 - 2000.0 ) / 2000.0 ; t1946 = t1944 * t1944 * 3.0 -
t1944 * t1944 * t1944 * 2.0 ; if ( t1952 <= 2000.0 ) { t1944 = t1941 * 1.0E-5
; } else if ( t1952 >= 4000.0 ) { t1944 = t115 * 1.0E-5 ; } else { t1944 = (
( 1.0 - t1946 ) * t1941 + t115 * t1946 ) * 1.0E-5 ; } t2931 = pmf_log10 ( 6.9
/ ( t1936 == 0.0 ? 1.0E-16 : t1936 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1936 == 0.0 ? 1.0E-16 : t1936 ) + 0.00017169489553429715 ) * 3.24 ;
t1936 = 1.0 / ( t2931 == 0.0 ? 1.0E-16 : t2931 ) ; t2931 = X [ 263ULL ] *
t1935 ; t1935 = t2931 / 0.0019634954084936209 * 0.00031622776601683789 +
t1944 ; t2987 = - t1935 - t1935 * - 0.95 ; t115 = ( - t123 - t1935 * - 0.95 )
/ ( t2987 == 0.0 ? 1.0E-16 : t2987 ) ; t1941 = t115 * t115 * 3.0 - t115 *
t115 * t115 * 2.0 ; if ( - t123 <= t1949 * - 0.95 ) { t115 = t123 ; } else if
( - t123 >= - t1949 ) { t115 = t1935 ; } else { t115 = ( 1.0 - t1941 ) * t123
+ t1935 * t1941 ; } t1935 = ( ( real_T ) ( M [ 180ULL ] != 0 ) * 2.0 - 1.0 )
* ( U_idx_1 / ( X [ 251ULL ] == 0.0 ? 1.0E-16 : X [ 251ULL ] ) ) * ( U_idx_1
/ ( X [ 251ULL ] == 0.0 ? 1.0E-16 : X [ 251ULL ] ) ) * ( - X [ 263ULL ] /
0.32 ) * ( - X [ 263ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + zc_int135
; t2987 = X [ 64ULL ] * zc_int251 ; zc_int135 = ( ( real_T ) ( M [ 188ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t2987 / ( X [ 65ULL ] == 0.0 ? 1.0E-16 : X [ 65ULL ]
) ) * ( t2987 / ( X [ 65ULL ] == 0.0 ? 1.0E-16 : X [ 65ULL ] ) ) * ( X [
277ULL ] / 0.32 ) * ( X [ 277ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t3391 ; t1941 = pmf_sqrt ( t1986 * t1986 * 9.999999999999999E-14 + ( ( real_T
) ( M [ 189ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 275ULL ] * t1987 * t1984 * 1.0E-9
) ; t1944 = pmf_sqrt ( zc_int21 * zc_int21 * 9.999999999999999E-14 + ( (
real_T ) ( M [ 190ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 278ULL ] * t1997 * t1984 *
1.0E-9 ) ; t1946 = - pmf_sqrt ( ( ( real_T ) ( M [ 191ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3033 / ( t1984 == 0.0 ? 1.0E-16 : t1984 ) / ( X [ 275ULL ] == 0.0
? 1.0E-16 : X [ 275ULL ] ) ) ) * 0.32 ; zc_int200 = zc_int263 * t1946 *
2.9973120849090416 / ( t3039 == 0.0 ? 1.0E-16 : t3039 ) ; t1936 = t2961 *
t1936 * t3006 * 0.55 / ( t1756 == 0.0 ? 1.0E-16 : t1756 ) ; if ( t1992 >= 0.0
) { t1949 = t1946 * 100000.0 ; } else { t1949 = - t1946 * 100000.0 ; }
zc_int201 = t1949 * 0.01 / ( t3037 == 0.0 ? 1.0E-16 : t3037 ) ; t1952 = t1994
>= 1.0 ? zc_int201 : 1.0 ; t2961 = pmf_log10 ( 6.9 / ( t1952 == 0.0 ? 1.0E-16
: t1952 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1952 == 0.0 ?
1.0E-16 : t1952 ) + 0.00017169489553429715 ) * 3.24 ; t1946 = t1946 * t1949 *
( 1.0 / ( t2961 == 0.0 ? 1.0E-16 : t2961 ) ) * 0.046833001326703774 / ( t2131
== 0.0 ? 1.0E-16 : t2131 ) ; t1949 = ( zc_int201 - 2000.0 ) / 2000.0 ;
zc_int201 = t1949 * t1949 * 3.0 - t1949 * t1949 * t1949 * 2.0 ; if ( t1994 <=
2000.0 ) { t1949 = zc_int200 * 1.0E-5 ; } else if ( t1994 >= 4000.0 ) { t1949
= t1946 * 1.0E-5 ; } else { t1949 = ( ( 1.0 - zc_int201 ) * zc_int200 + t1946
* zc_int201 ) * 1.0E-5 ; } t2961 = - ( X [ 263ULL ] * t1941 ) ; t1941 = t2961
/ 0.32 * 0.00031622776601683789 + t1949 ; t2990 = - t1941 - t1941 * - 0.95 ;
t1946 = ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke -
t1941 * - 0.95 ) / ( t2990 == 0.0 ? 1.0E-16 : t2990 ) ; zc_int200 = ( U_idx_5
- 2000.0 ) / 2000.0 ; t1949 = t1946 * t1946 * 3.0 - t1946 * t1946 * t1946 *
2.0 ; if ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke
<= t1988 * - 0.95 ) { t1946 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke >= - t1988
) { t1946 = t1941 ; } else { t1946 = ( 1.0 - t1949 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke + t1941 *
t1949 ; } t1941 = - pmf_sqrt ( ( ( real_T ) ( M [ 192ULL ] != 0 ) * 2.0 - 1.0
) * ( t2140 / ( t1984 == 0.0 ? 1.0E-16 : t1984 ) / ( X [ 278ULL ] == 0.0 ?
1.0E-16 : X [ 278ULL ] ) ) ) * 0.32 ; t1949 = zc_int263 * t1941 *
2.9973120849090416 / ( t3039 == 0.0 ? 1.0E-16 : t3039 ) ; if ( zc_int291 >=
0.0 ) { zc_int201 = t1941 * 100000.0 ; } else { zc_int201 = - t1941 *
100000.0 ; } t1952 = zc_int201 * 0.01 / ( t3037 == 0.0 ? 1.0E-16 : t3037 ) ;
t1986 = t2001 >= 1.0 ? t1952 : 1.0 ; U_idx_5 = pmf_log10 ( 6.9 / ( t1986 ==
0.0 ? 1.0E-16 : t1986 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1986 == 0.0 ? 1.0E-16 : t1986 ) + 0.00017169489553429715 ) * 3.24 ; t1941 =
t1941 * zc_int201 * ( 1.0 / ( U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5 ) ) *
0.046833001326703774 / ( t2131 == 0.0 ? 1.0E-16 : t2131 ) ; zc_int201 = (
t1952 - 2000.0 ) / 2000.0 ; t1952 = zc_int200 * zc_int200 * 3.0 - zc_int200 *
zc_int200 * zc_int200 * 2.0 ; zc_int200 = zc_int201 * zc_int201 * 3.0 -
zc_int201 * zc_int201 * zc_int201 * 2.0 ; if ( t2001 <= 2000.0 ) { zc_int201
= t1949 * 1.0E-5 ; } else if ( t2001 >= 4000.0 ) { zc_int201 = t1941 * 1.0E-5
; } else { zc_int201 = ( ( 1.0 - zc_int200 ) * t1949 + t1941 * zc_int200 ) *
1.0E-5 ; } U_idx_5 = X [ 277ULL ] * t1944 ; t1941 = U_idx_5 / 0.32 *
0.00031622776601683789 + zc_int201 ; t2990 = - t1941 - t1941 * - 0.95 ; t1944
= ( - t2000 - t1941 * - 0.95 ) / ( t2990 == 0.0 ? 1.0E-16 : t2990 ) ;
zc_int200 = t1944 * t1944 * 3.0 - t1944 * t1944 * t1944 * 2.0 ; if ( - t2000
<= zc_int276 * - 0.95 ) { t1944 = t2000 ; } else if ( - t2000 >= - zc_int276
) { t1944 = t1941 ; } else { t1944 = ( 1.0 - zc_int200 ) * t2000 + t1941 *
zc_int200 ; } t1941 = ( ( real_T ) ( M [ 188ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2987 / ( X [ 65ULL ] == 0.0 ? 1.0E-16 : X [ 65ULL ] ) ) * ( t2987 / ( X [
65ULL ] == 0.0 ? 1.0E-16 : X [ 65ULL ] ) ) * ( - X [ 277ULL ] / 0.32 ) * ( -
X [ 277ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t3391 ; t3391 = X [
111ULL ] * zc_int167 ; zc_int167 = ( ( real_T ) ( M [ 197ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3391 / ( X [ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) ) * (
t3391 / ( X [ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) ) * ( - X [ 134ULL ]
/ 0.32 ) * ( - X [ 134ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t3272 ;
zc_int200 = pmf_sqrt ( t2050 * t2050 * 9.999999999999999E-14 + ( ( real_T ) (
M [ 198ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 289ULL ] * t2052 * t2049 * 1.0E-9 ) ;
t1949 = pmf_sqrt ( t2061 * t2061 * 9.999999999999999E-14 + ( ( real_T ) ( M [
199ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 291ULL ] * intrm_sf_mf_758 * t2049 *
1.0E-9 ) ; zc_int201 = zc_int36 * t3006 * 35.2 / ( t3089 == 0.0 ? 1.0E-16 :
t3089 ) ; if ( t112 <= 2000.0 ) { t1986 = zc_int201 * 1.0E-5 ; } else if (
t112 >= 4000.0 ) { t1986 = t1936 * 1.0E-5 ; } else { t1986 = ( ( 1.0 - t1952
) * zc_int201 + t1936 * t1952 ) * 1.0E-5 ; } t112 = - pmf_sqrt ( ( ( real_T )
( M [ 200ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2218 / ( t2049 == 0.0 ? 1.0E-16 :
t2049 ) / ( X [ 289ULL ] == 0.0 ? 1.0E-16 : X [ 289ULL ] ) ) ) * 0.32 ; t1936
= piece151 * t112 * 2.9973120849090416 / ( t2226 == 0.0 ? 1.0E-16 : t2226 ) ;
if ( t2057 >= 0.0 ) { zc_int201 = t112 * 100000.0 ; } else { zc_int201 = -
t112 * 100000.0 ; } t1952 = zc_int201 * 0.01 / ( t2222 == 0.0 ? 1.0E-16 :
t2222 ) ; t1987 = t2059 >= 1.0 ? t1952 : 1.0 ; t3006 = pmf_log10 ( 6.9 / (
t1987 == 0.0 ? 1.0E-16 : t1987 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1987 == 0.0 ? 1.0E-16 : t1987 ) + 0.00017169489553429715 ) * 3.24 ; t112
= t112 * zc_int201 * ( 1.0 / ( t3006 == 0.0 ? 1.0E-16 : t3006 ) ) *
0.046833001326703774 / ( t2229 == 0.0 ? 1.0E-16 : t2229 ) ; zc_int201 = (
t1952 - 2000.0 ) / 2000.0 ; t1952 = zc_int201 * zc_int201 * 3.0 - zc_int201 *
zc_int201 * zc_int201 * 2.0 ; if ( t2059 <= 2000.0 ) { zc_int201 = t1936 *
1.0E-5 ; } else if ( t2059 >= 4000.0 ) { zc_int201 = t112 * 1.0E-5 ; } else {
zc_int201 = ( ( 1.0 - t1952 ) * t1936 + t112 * t1952 ) * 1.0E-5 ; } t112 =
pmf_sqrt ( zc_int233 * zc_int233 * 9.999999999999999E-14 + ( ( real_T ) ( M [
2ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 135ULL ] * t1720 * t1718 * 1.0E-9 ) ; t3006
= X [ 134ULL ] * t112 ; zc_int233 = t3006 / 7.8539816339744827E-5 *
0.00031622776601683789 + t1986 ; t2990 = - ( X [ 277ULL ] * zc_int200 ) ;
t1720 = t2990 / 0.32 * 0.00031622776601683789 + zc_int201 ; U_idx_9 = - t1720
- t1720 * - 0.95 ; t112 = ( - t2058 - t1720 * - 0.95 ) / ( U_idx_9 == 0.0 ?
1.0E-16 : U_idx_9 ) ; t1936 = t112 * t112 * 3.0 - t112 * t112 * t112 * 2.0 ;
if ( - t2058 <= t2053 * - 0.95 ) { t112 = t2058 ; } else if ( - t2058 >= -
t2053 ) { t112 = t1720 ; } else { t112 = ( 1.0 - t1936 ) * t2058 + t1720 *
t1936 ; } t1720 = - pmf_sqrt ( ( ( real_T ) ( M [ 201ULL ] != 0 ) * 2.0 - 1.0
) * ( t2238 / ( t2049 == 0.0 ? 1.0E-16 : t2049 ) / ( X [ 291ULL ] == 0.0 ?
1.0E-16 : X [ 291ULL ] ) ) ) * 0.32 ; t1936 = piece151 * t1720 *
2.9973120849090416 / ( t2226 == 0.0 ? 1.0E-16 : t2226 ) ; if ( t2064 >= 0.0 )
{ zc_int200 = t1720 * 100000.0 ; } else { zc_int200 = - t1720 * 100000.0 ; }
zc_int201 = zc_int200 * 0.01 / ( t2222 == 0.0 ? 1.0E-16 : t2222 ) ; t1952 =
t2066 >= 1.0 ? zc_int201 : 1.0 ; t3023 = pmf_log10 ( 6.9 / ( t1952 == 0.0 ?
1.0E-16 : t1952 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1952 ==
0.0 ? 1.0E-16 : t1952 ) + 0.00017169489553429715 ) * 3.24 ; U_idx_9 = -
zc_int233 - zc_int233 * - 0.95 ; t1986 = ( - t1726 - zc_int233 * - 0.95 ) / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ; t1720 = t1720 * zc_int200 * ( 1.0 / (
t3023 == 0.0 ? 1.0E-16 : t3023 ) ) * 0.046833001326703774 / ( t2229 == 0.0 ?
1.0E-16 : t2229 ) ; zc_int200 = ( zc_int201 - 2000.0 ) / 2000.0 ; zc_int201 =
zc_int200 * zc_int200 * 3.0 - zc_int200 * zc_int200 * zc_int200 * 2.0 ; if (
t2066 <= 2000.0 ) { zc_int200 = t1936 * 1.0E-5 ; } else if ( t2066 >= 4000.0
) { zc_int200 = t1720 * 1.0E-5 ; } else { zc_int200 = ( ( 1.0 - zc_int201 ) *
t1936 + t1720 * zc_int201 ) * 1.0E-5 ; } t3023 = - ( X [ 134ULL ] * t1949 ) ;
t1720 = t3023 / 0.32 * 0.00031622776601683789 + zc_int200 ; t3033 = - t1720 -
t1720 * - 0.95 ; t1936 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok - t1720 * -
0.95 ) / ( t3033 == 0.0 ? 1.0E-16 : t3033 ) ; zc_int200 = t1936 * t1936 * 3.0
- t1936 * t1936 * t1936 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok <= piece175 *
- 0.95 ) { t1936 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok >= -
piece175 ) { t1936 = t1720 ; } else { t1936 = ( 1.0 - zc_int200 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok + t1720 *
zc_int200 ; } if ( M [ 205ULL ] != 0 ) { t1720 = 216.59999999999997 ; } else
{ t1720 = M [ 206ULL ] != 0 ? 623.15 : U_idx_7 ; } t1949 = t1986 * t1986 *
3.0 - t1986 * t1986 * t1986 * 2.0 ; t1195 [ 0ULL ] = U_idx_6 >= 0.0 ? t1720 :
X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & it_efOut . mField0 [ 0ULL ] ,
& it_efOut . mField1 [ 0ULL ] , & it_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t77 = it_efOut ; tlu2_1d_linear_linear_value ( &
jt_efOut [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1184 [ 0ULL ] , & t126 [ 0ULL ]
) ; t1608_idx_0 = jt_efOut [ 0 ] ; zc_int200 = t1608_idx_0 ; U_idx_9 = X [
232ULL ] * t2107 ; t3033 = X [ 299ULL ] * t3200 ; t1952 = ( ( real_T ) ( M [
15ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3033 / ( X [ 300ULL ] == 0.0 ? 1.0E-16 : X
[ 300ULL ] ) ) * ( t3033 / ( X [ 300ULL ] == 0.0 ? 1.0E-16 : X [ 300ULL ] ) )
* ( X [ 312ULL ] / 0.0019634954084936209 ) * ( X [ 312ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1284 ;
t1986 = pmf_sqrt ( t2081 * t2081 * 9.999999999999999E-14 + ( ( real_T ) ( M [
207ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 310ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * t2080 * 1.0E-9 )
; t1987 = pmf_sqrt ( t3068 * t3068 * 9.999999999999999E-14 + ( ( real_T ) ( M
[ 208ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 313ULL ] * t3143 * t2080 * 1.0E-9 ) ;
t1988 = - pmf_sqrt ( ( ( real_T ) ( M [ 209ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2314 / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) / ( X [ 310ULL ] == 0.0 ? 1.0E-16
: X [ 310ULL ] ) ) ) * 0.0019634954084936209 ; zc_int251 = t2087 * t1988 *
11.2 / ( t2322 == 0.0 ? 1.0E-16 : t2322 ) ; if ( t3398 >= 0.0 ) { zc_int263 =
t1988 * 100000.0 ; } else { zc_int263 = - t1988 * 100000.0 ; } t1992 =
zc_int263 * 0.05 / ( t2318 == 0.0 ? 1.0E-16 : t2318 ) ; t1994 = t3051 >= 1.0
? t1992 : 1.0 ; if ( - t1726 <= zc_int218 * - 0.95 ) { zc_int21 = t1726 ; }
else if ( - t1726 >= - zc_int218 ) { zc_int21 = zc_int233 ; } else { zc_int21
= ( 1.0 - t1949 ) * t1726 + zc_int233 * t1949 ; } t3068 = pmf_log10 ( 6.9 / (
t1994 == 0.0 ? 1.0E-16 : t1994 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t1994 == 0.0 ? 1.0E-16 : t1994 ) + 2.8767404433520813E-5 ) * 3.24 ;
zc_int233 = t1988 * zc_int263 * ( 1.0 / ( t3068 == 0.0 ? 1.0E-16 : t3068 ) )
* 0.175 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) ; zc_int218 = ( t1992 - 2000.0 )
/ 2000.0 ; t1949 = zc_int218 * zc_int218 * 3.0 - zc_int218 * zc_int218 *
zc_int218 * 2.0 ; if ( t3051 <= 2000.0 ) { zc_int218 = zc_int251 * 1.0E-5 ; }
else if ( t3051 >= 4000.0 ) { zc_int218 = zc_int233 * 1.0E-5 ; } else {
zc_int218 = ( ( 1.0 - t1949 ) * zc_int251 + zc_int233 * t1949 ) * 1.0E-5 ; }
t3051 = - ( X [ 244ULL ] * t1986 ) ; zc_int233 = t3051 /
0.0019634954084936209 * 0.00031622776601683789 + zc_int218 ; t3143 = -
zc_int233 - zc_int233 * - 0.95 ; zc_int218 = ( - t2089 - zc_int233 * - 0.95 )
/ ( t3143 == 0.0 ? 1.0E-16 : t3143 ) ; t1949 = zc_int218 * zc_int218 * 3.0 -
zc_int218 * zc_int218 * zc_int218 * 2.0 ; if ( - t2089 <= t2083 * - 0.95 ) {
zc_int218 = t2089 ; } else if ( - t2089 >= - t2083 ) { zc_int218 = zc_int233
; } else { zc_int218 = ( 1.0 - t1949 ) * t2089 + zc_int233 * t1949 ; }
zc_int233 = - pmf_sqrt ( ( ( real_T ) ( M [ 210ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2334 / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) / ( X [ 313ULL ] == 0.0 ? 1.0E-16
: X [ 313ULL ] ) ) ) * 0.0019634954084936209 ; t1949 = - pmf_sqrt ( ( (
real_T ) ( M [ 34ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1765 / ( t1718 == 0.0 ?
1.0E-16 : t1718 ) / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) ) *
7.8539816339744827E-5 ; t1986 = t2087 * zc_int233 * 11.2 / ( t2322 == 0.0 ?
1.0E-16 : t2322 ) ; if ( t3211 >= 0.0 ) { t1988 = zc_int233 * 100000.0 ; }
else { t1988 = - zc_int233 * 100000.0 ; } zc_int251 = t1988 * 0.05 / ( t2318
== 0.0 ? 1.0E-16 : t2318 ) ; zc_int263 = t3079 >= 1.0 ? zc_int251 : 1.0 ;
t3068 = pmf_log10 ( 6.9 / ( zc_int263 == 0.0 ? 1.0E-16 : zc_int263 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( zc_int263 == 0.0 ? 1.0E-16 :
zc_int263 ) + 2.8767404433520813E-5 ) * 3.24 ; zc_int233 = zc_int233 * t1988
* ( 1.0 / ( t3068 == 0.0 ? 1.0E-16 : t3068 ) ) * 0.175 / ( t2325 == 0.0 ?
1.0E-16 : t2325 ) ; t1988 = ( zc_int251 - 2000.0 ) / 2000.0 ; zc_int251 =
t1988 * t1988 * 3.0 - t1988 * t1988 * t1988 * 2.0 ; if ( t3079 <= 2000.0 ) {
t1988 = t1986 * 1.0E-5 ; } else if ( t3079 >= 4000.0 ) { t1988 = zc_int233 *
1.0E-5 ; } else { t1988 = ( ( 1.0 - zc_int251 ) * t1986 + zc_int233 *
zc_int251 ) * 1.0E-5 ; } t3068 = X [ 312ULL ] * t1987 ; zc_int233 = t3068 /
0.0019634954084936209 * 0.00031622776601683789 + t1988 ; zc_int36 = zc_int36
* t1949 * 35.2 / ( t3089 == 0.0 ? 1.0E-16 : t3089 ) ; t3211 = - zc_int233 -
zc_int233 * - 0.95 ; t1986 = ( - t2096 - zc_int233 * - 0.95 ) / ( t3211 ==
0.0 ? 1.0E-16 : t3211 ) ; t1987 = t1986 * t1986 * 3.0 - t1986 * t1986 * t1986
* 2.0 ; if ( - t2096 <= t3075 * - 0.95 ) { t1986 = t2096 ; } else if ( -
t2096 >= - t3075 ) { t1986 = zc_int233 ; } else { t1986 = ( 1.0 - t1987 ) *
t2096 + zc_int233 * t1987 ; } t3143 = X [ 329ULL ] * t2307 ; zc_int233 = ( (
real_T ) ( M [ 8ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3143 / 1.01325 ) * ( t3143 /
1.01325 ) * ( X [ 335ULL ] / 0.0019634954084936209 ) * ( X [ 335ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2308 ; t3211 = X [
324ULL ] * t3082 ; t1987 = ( ( real_T ) ( M [ 25ULL ] != 0 ) * 2.0 - 1.0 ) *
( t3211 / ( X [ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ) * ( t3211 / ( X
[ 325ULL ] == 0.0 ? 1.0E-16 : X [ 325ULL ] ) ) * ( X [ 347ULL ] /
0.0019634954084936209 ) * ( X [ 347ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1010 ; t2307 = X [ 343ULL ] * t2188 ;
t1988 = ( ( real_T ) ( M [ 7ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2307 / ( t2151 ==
0.0 ? 1.0E-16 : t2151 ) ) * ( t2307 / ( t2151 == 0.0 ? 1.0E-16 : t2151 ) ) *
( - X [ 335ULL ] / 0.0019634954084936209 ) * ( - X [ 335ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3256 ; zc_int251 =
pmf_sqrt ( t3098 * t3098 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 215ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 348ULL ] * t3116 * t2154 * 1.0E-9 ) ; zc_int263
= pmf_sqrt ( t3180 * t3180 * 9.999999999999999E-14 + ( ( real_T ) ( M [
216ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 352ULL ] * t3185 * t2154 * 1.0E-9 ) ;
t1992 = - pmf_sqrt ( ( ( real_T ) ( M [ 217ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2414 / ( t2154 == 0.0 ? 1.0E-16 : t2154 ) / ( X [ 348ULL ] == 0.0 ? 1.0E-16
: X [ 348ULL ] ) ) ) * 0.0019634954084936209 ; t1994 = t3150 * t1992 * 35.2 /
( t2422 == 0.0 ? 1.0E-16 : t2422 ) ; if ( zc_int262 >= 0.0 ) { t1997 = t1949
* 100000.0 ; } else { t1997 = - t1949 * 100000.0 ; } if ( t3165 >= 0.0 ) {
zc_int262 = t1992 * 100000.0 ; } else { zc_int262 = - t1992 * 100000.0 ; }
zc_int276 = zc_int262 * 0.05 / ( t2418 == 0.0 ? 1.0E-16 : t2418 ) ; zc_int291
= t3254 >= 1.0 ? zc_int276 : 1.0 ; t3098 = pmf_log10 ( 6.9 / ( zc_int291 ==
0.0 ? 1.0E-16 : zc_int291 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
zc_int291 == 0.0 ? 1.0E-16 : zc_int291 ) + 2.8767404433520813E-5 ) * 3.24 ;
zc_int262 = t1992 * zc_int262 * ( 1.0 / ( t3098 == 0.0 ? 1.0E-16 : t3098 ) )
* 0.55 / ( t2425 == 0.0 ? 1.0E-16 : t2425 ) ; t1992 = ( zc_int276 - 2000.0 )
/ 2000.0 ; zc_int276 = t1992 * t1992 * 3.0 - t1992 * t1992 * t1992 * 2.0 ; if
( t3254 <= 2000.0 ) { t1992 = t1994 * 1.0E-5 ; } else if ( t3254 >= 4000.0 )
{ t1992 = zc_int262 * 1.0E-5 ; } else { t1992 = ( ( 1.0 - zc_int276 ) * t1994
+ zc_int262 * zc_int276 ) * 1.0E-5 ; } t3098 = X [ 347ULL ] * zc_int251 ;
zc_int262 = t3098 / 0.0019634954084936209 * 0.00031622776601683789 + t1992 ;
t3165 = - zc_int262 - zc_int262 * - 0.95 ; zc_int251 = ( - t2162 - zc_int262
* - 0.95 ) / ( t3165 == 0.0 ? 1.0E-16 : t3165 ) ; t1992 = t1997 * 0.01 / (
t1749 == 0.0 ? 1.0E-16 : t1749 ) ; t1994 = zc_int251 * zc_int251 * 3.0 -
zc_int251 * zc_int251 * zc_int251 * 2.0 ; if ( - t2162 <= t3231 * - 0.95 ) {
zc_int251 = t2162 ; } else if ( - t2162 >= - t3231 ) { zc_int251 = zc_int262
; } else { zc_int251 = ( 1.0 - t1994 ) * t2162 + zc_int262 * t1994 ; }
zc_int262 = - pmf_sqrt ( ( ( real_T ) ( M [ 3ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2408 / ( t2154 == 0.0 ? 1.0E-16 : t2154 ) / ( X [ 352ULL ] == 0.0 ? 1.0E-16
: X [ 352ULL ] ) ) ) * 0.0019634954084936209 ; t1994 = t3150 * zc_int262 *
35.2 / ( t2422 == 0.0 ? 1.0E-16 : t2422 ) ; if ( t3314 >= 0.0 ) { zc_int276 =
zc_int262 * 100000.0 ; } else { zc_int276 = - zc_int262 * 100000.0 ; }
zc_int291 = zc_int276 * 0.05 / ( t2418 == 0.0 ? 1.0E-16 : t2418 ) ; t2001 =
t3243 >= 1.0 ? zc_int291 : 1.0 ; t3116 = pmf_log10 ( 6.9 / ( t2001 == 0.0 ?
1.0E-16 : t2001 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2001 ==
0.0 ? 1.0E-16 : t2001 ) + 2.8767404433520813E-5 ) * 3.24 ; zc_int262 =
zc_int262 * zc_int276 * ( 1.0 / ( t3116 == 0.0 ? 1.0E-16 : t3116 ) ) * 0.55 /
( t2425 == 0.0 ? 1.0E-16 : t2425 ) ; zc_int276 = ( zc_int291 - 2000.0 ) /
2000.0 ; zc_int291 = t122 >= 1.0 ? t1992 : 1.0 ; t2001 = zc_int276 *
zc_int276 * 3.0 - zc_int276 * zc_int276 * zc_int276 * 2.0 ; if ( t3243 <=
2000.0 ) { zc_int276 = t1994 * 1.0E-5 ; } else if ( t3243 >= 4000.0 ) {
zc_int276 = zc_int262 * 1.0E-5 ; } else { zc_int276 = ( ( 1.0 - t2001 ) *
t1994 + zc_int262 * t2001 ) * 1.0E-5 ; } t3116 = - ( X [ 335ULL ] * zc_int263
) ; zc_int262 = t3116 / 0.0019634954084936209 * 0.00031622776601683789 +
zc_int276 ; t3150 = - zc_int262 - zc_int262 * - 0.95 ; zc_int263 = ( - t2169
- zc_int262 * - 0.95 ) / ( t3150 == 0.0 ? 1.0E-16 : t3150 ) ; t1994 =
zc_int263 * zc_int263 * 3.0 - zc_int263 * zc_int263 * zc_int263 * 2.0 ; if (
- t2169 <= t3193 * - 0.95 ) { zc_int263 = t2169 ; } else if ( - t2169 >= -
t3193 ) { zc_int263 = zc_int262 ; } else { zc_int263 = ( 1.0 - t1994 ) *
t2169 + zc_int262 * t1994 ; } zc_int262 = ( ( real_T ) ( M [ 7ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2307 / ( t2151 == 0.0 ? 1.0E-16 : t2151 ) ) * ( t2307 / (
t2151 == 0.0 ? 1.0E-16 : t2151 ) ) * ( X [ 335ULL ] / 0.0019634954084936209 )
* ( X [ 335ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t3256 ; t1994 = ( ( real_T ) ( M [ 8ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3143 /
1.01325 ) * ( t3143 / 1.01325 ) * ( - X [ 335ULL ] / 0.0019634954084936209 )
* ( - X [ 335ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t2308 ; zc_int276 = ( t2151 - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 9ULL
] != 0 ) * 2.0 - 1.0 ) * ( t2535 / ( t3267 == 0.0 ? 1.0E-16 : t3267 ) ) ) *
t2171 * 0.64 ; t2001 = pmf_sqrt ( ( ( real_T ) ( M [ 10ULL ] != 0 ) * 2.0 -
1.0 ) * ( t2532 / ( t2204 == 0.0 ? 1.0E-16 : t2204 ) / ( X [ 365ULL ] == 0.0
? 1.0E-16 : X [ 365ULL ] ) ) ) * t2171 * 0.64 ; t3143 = pmf_log10 ( 6.9 / (
zc_int291 == 0.0 ? 1.0E-16 : zc_int291 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int291 == 0.0 ? 1.0E-16 : zc_int291 ) +
0.00017169489553429715 ) * 3.24 ; t3231 = t2001 - t2001 * 0.95 ; t2050 = (
zc_int276 - t2001 * 0.95 ) / ( t3231 == 0.0 ? 1.0E-16 : t3231 ) ; t2052 =
t2050 * t2050 * 3.0 - t2050 * t2050 * t2050 * 2.0 ; if ( t2205 <= t3279 *
0.95 ) { t2050 = zc_int276 * 100000.0 ; } else if ( t2205 >= t3279 ) { t2050
= t2001 * 100000.0 ; } else { t2050 = ( ( 1.0 - t2052 ) * zc_int276 + t2001 *
t2052 ) * 100000.0 ; } t2052 = ( - zc_int276 - t2001 * 0.95 ) / ( t3231 ==
0.0 ? 1.0E-16 : t3231 ) ; t2053 = t2052 * t2052 * 3.0 - t2052 * t2052 * t2052
* 2.0 ; if ( - t2205 <= t3279 * 0.95 ) { t2052 = zc_int276 * 100000.0 ; }
else if ( - t2205 >= t3279 ) { t2052 = - t2001 * 100000.0 ; } else { t2052 =
( ( 1.0 - t2053 ) * zc_int276 + - t2001 * t2053 ) * 100000.0 ; } zc_int276 =
( ( real_T ) ( M [ 15ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3033 / ( X [ 300ULL ] ==
0.0 ? 1.0E-16 : X [ 300ULL ] ) ) * ( t3033 / ( X [ 300ULL ] == 0.0 ? 1.0E-16
: X [ 300ULL ] ) ) * ( - X [ 312ULL ] / 0.32 ) * ( - X [ 312ULL ] / 0.32 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_1284 ; t3200 = X [ 68ULL ] * t2225
; intrm_sf_mf_1284 = ( ( real_T ) ( M [ 16ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3200 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( t3200 / ( X [
69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( X [ 374ULL ] / 0.32 ) * ( X [
374ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + zc_int309 ; t2001 =
pmf_sqrt ( t3346 * t3346 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 17ULL ]
!= 0 ) * 2.0 - 1.0 ) * X [ 372ULL ] * t3393 * t2212 * 1.0E-9 ) ; t2053 =
pmf_sqrt ( t2237 * t2237 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 18ULL ]
!= 0 ) * 2.0 - 1.0 ) * X [ 375ULL ] * t2239 * t2212 * 1.0E-9 ) ; t1949 =
t1949 * t1997 * ( 1.0 / ( t3143 == 0.0 ? 1.0E-16 : t3143 ) ) * 0.55 / ( t1756
== 0.0 ? 1.0E-16 : t1756 ) ; t1997 = - pmf_sqrt ( ( ( real_T ) ( M [ 19ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t2542 / ( t2212 == 0.0 ? 1.0E-16 : t2212 ) / ( X [
372ULL ] == 0.0 ? 1.0E-16 : X [ 372ULL ] ) ) ) * 0.32 ; zc_int291 = t2227 *
t1997 * 2.9973120849090416 / ( t2550 == 0.0 ? 1.0E-16 : t2550 ) ; if ( t2228
>= 0.0 ) { piece151 = t1997 * 100000.0 ; } else { piece151 = - t1997 *
100000.0 ; } t2057 = piece151 * 0.01 / ( t2546 == 0.0 ? 1.0E-16 : t2546 ) ;
t2059 = t2231 >= 1.0 ? t2057 : 1.0 ; t3165 = pmf_log10 ( 6.9 / ( t2059 == 0.0
? 1.0E-16 : t2059 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2059 ==
0.0 ? 1.0E-16 : t2059 ) + 0.00017169489553429715 ) * 3.24 ; t1997 = t1997 *
piece151 * ( 1.0 / ( t3165 == 0.0 ? 1.0E-16 : t3165 ) ) *
0.046833001326703774 / ( t2553 == 0.0 ? 1.0E-16 : t2553 ) ; piece151 = (
t2057 - 2000.0 ) / 2000.0 ; t2057 = piece151 * piece151 * 3.0 - piece151 *
piece151 * piece151 * 2.0 ; if ( t2231 <= 2000.0 ) { piece151 = zc_int291 *
1.0E-5 ; } else if ( t2231 >= 4000.0 ) { piece151 = t1997 * 1.0E-5 ; } else {
piece151 = ( ( 1.0 - t2057 ) * zc_int291 + t1997 * t2057 ) * 1.0E-5 ; } t1992
= ( t1992 - 2000.0 ) / 2000.0 ; t3165 = - ( X [ 312ULL ] * t2001 ) ; t1997 =
t3165 / 0.32 * 0.00031622776601683789 + piece151 ; t3180 = - t1997 - t1997 *
- 0.95 ; zc_int291 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke - t1997 * -
0.95 ) / ( t3180 == 0.0 ? 1.0E-16 : t3180 ) ; t2001 = zc_int291 * zc_int291 *
3.0 - zc_int291 * zc_int291 * zc_int291 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke <= t3379 * -
0.95 ) { zc_int291 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke >= - t3379
) { zc_int291 = t1997 ; } else { zc_int291 = ( 1.0 - t2001 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke + t1997 *
t2001 ; } t1997 = - pmf_sqrt ( ( ( real_T ) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0
) * ( t2562 / ( t2212 == 0.0 ? 1.0E-16 : t2212 ) / ( X [ 375ULL ] == 0.0 ?
1.0E-16 : X [ 375ULL ] ) ) ) * 0.32 ; t2001 = t2227 * t1997 *
2.9973120849090416 / ( t2550 == 0.0 ? 1.0E-16 : t2550 ) ; if ( t2243 >= 0.0 )
{ piece151 = t1997 * 100000.0 ; } else { piece151 = - t1997 * 100000.0 ; }
t2057 = piece151 * 0.01 / ( t2546 == 0.0 ? 1.0E-16 : t2546 ) ; t2059 = t2246
>= 1.0 ? t2057 : 1.0 ; t3254 = pmf_log10 ( 6.9 / ( t2059 == 0.0 ? 1.0E-16 :
t2059 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2059 == 0.0 ?
1.0E-16 : t2059 ) + 0.00017169489553429715 ) * 3.24 ; t2059 = 1.0 / ( t3254
== 0.0 ? 1.0E-16 : t3254 ) ; t3254 = X [ 116ULL ] * t2335 ; intrm_sf_mf_758 =
t1992 * t1992 * 3.0 - t1992 * t1992 * t1992 * 2.0 ; t1992 = t1997 * piece151
* t2059 * 0.046833001326703774 / ( t2553 == 0.0 ? 1.0E-16 : t2553 ) ; t1997 =
( t2057 - 2000.0 ) / 2000.0 ; piece151 = t1997 * t1997 * 3.0 - t1997 * t1997
* t1997 * 2.0 ; if ( t2246 <= 2000.0 ) { t1997 = t2001 * 1.0E-5 ; } else if (
t2246 >= 4000.0 ) { t1997 = t1992 * 1.0E-5 ; } else { t1997 = ( ( 1.0 -
piece151 ) * t2001 + t1992 * piece151 ) * 1.0E-5 ; } t3185 = X [ 374ULL ] *
t2053 ; t1992 = t3185 / 0.32 * 0.00031622776601683789 + t1997 ; t3314 = -
t1992 - t1992 * - 0.95 ; t1997 = ( - t2245 - t1992 * - 0.95 ) / ( t3314 ==
0.0 ? 1.0E-16 : t3314 ) ; t2001 = t1997 * t1997 * 3.0 - t1997 * t1997 * t1997
* 2.0 ; if ( - t2245 <= t2241 * - 0.95 ) { t1997 = t2245 ; } else if ( -
t2245 >= - t2241 ) { t1997 = t1992 ; } else { t1997 = ( 1.0 - t2001 ) * t2245
+ t1992 * t2001 ; } t1992 = ( ( real_T ) ( M [ 16ULL ] != 0 ) * 2.0 - 1.0 ) *
( t3200 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( t3200 / ( X [
69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( - X [ 374ULL ] / 0.32 ) * ( -
X [ 374ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + zc_int309 ; zc_int309 =
( ( real_T ) ( M [ 25ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3211 / ( X [ 325ULL ] ==
0.0 ? 1.0E-16 : X [ 325ULL ] ) ) * ( t3211 / ( X [ 325ULL ] == 0.0 ? 1.0E-16
: X [ 325ULL ] ) ) * ( - X [ 347ULL ] / 0.32 ) * ( - X [ 347ULL ] / 0.32 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_1010 ; if ( t122 <= 2000.0 ) {
t2001 = zc_int36 * 1.0E-5 ; } else if ( t122 >= 4000.0 ) { t2001 = t1949 *
1.0E-5 ; } else { t2001 = ( ( 1.0 - intrm_sf_mf_758 ) * zc_int36 + t1949 *
intrm_sf_mf_758 ) * 1.0E-5 ; } zc_int36 = pmf_sqrt ( t2274 * t2274 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 26ULL ] != 0 ) * 2.0 - 1.0 ) * X [
386ULL ] * t2275 * t2273 * 1.0E-9 ) ; t122 = pmf_sqrt ( t2285 * t2285 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 27ULL ] != 0 ) * 2.0 - 1.0 ) * X [
388ULL ] * t2286 * t2273 * 1.0E-9 ) ; t1949 = - pmf_sqrt ( ( ( real_T ) ( M [
28ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2640 / ( t2273 == 0.0 ? 1.0E-16 : t2273 ) /
( X [ 386ULL ] == 0.0 ? 1.0E-16 : X [ 386ULL ] ) ) ) * 0.32 ; t2053 = t2279 *
t1949 * 2.9973120849090416 / ( t2648 == 0.0 ? 1.0E-16 : t2648 ) ; if ( t2280
>= 0.0 ) { piece151 = t1949 * 100000.0 ; } else { piece151 = - t1949 *
100000.0 ; } t2057 = piece151 * 0.01 / ( t2644 == 0.0 ? 1.0E-16 : t2644 ) ;
t2059 = t2283 >= 1.0 ? t2057 : 1.0 ; t3211 = pmf_log10 ( 6.9 / ( t2059 == 0.0
? 1.0E-16 : t2059 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2059 ==
0.0 ? 1.0E-16 : t2059 ) + 0.00017169489553429715 ) * 3.24 ; t1949 = t1949 *
piece151 * ( 1.0 / ( t3211 == 0.0 ? 1.0E-16 : t3211 ) ) *
0.046833001326703774 / ( t2651 == 0.0 ? 1.0E-16 : t2651 ) ; piece151 = (
t2057 - 2000.0 ) / 2000.0 ; t2057 = pmf_sqrt ( zc_int37 * zc_int37 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 ) * X [
139ULL ] * t1730 * t1718 * 1.0E-9 ) ; t3211 = - ( X [ 122ULL ] * t2057 ) ;
zc_int37 = t3211 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2001 ;
t1730 = piece151 * piece151 * 3.0 - piece151 * piece151 * piece151 * 2.0 ; if
( t2283 <= 2000.0 ) { t2001 = t2053 * 1.0E-5 ; } else if ( t2283 >= 4000.0 )
{ t2001 = t1949 * 1.0E-5 ; } else { t2001 = ( ( 1.0 - t1730 ) * t2053 + t1949
* t1730 ) * 1.0E-5 ; } t3079 = - ( X [ 374ULL ] * zc_int36 ) ; zc_int36 =
t3079 / 0.32 * 0.00031622776601683789 + t2001 ; t3314 = - zc_int36 - zc_int36
* - 0.95 ; t1730 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok - zc_int36 *
- 0.95 ) / ( t3314 == 0.0 ? 1.0E-16 : t3314 ) ; t1949 = t1730 * t1730 * 3.0 -
t1730 * t1730 * t1730 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok <= t2276 * -
0.95 ) { t1730 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok >= - t2276
) { t1730 = zc_int36 ; } else { t1730 = ( 1.0 - t1949 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok + zc_int36 *
t1949 ; } zc_int36 = - pmf_sqrt ( ( ( real_T ) ( M [ 29ULL ] != 0 ) * 2.0 -
1.0 ) * ( t2659 / ( t2273 == 0.0 ? 1.0E-16 : t2273 ) / ( X [ 388ULL ] == 0.0
? 1.0E-16 : X [ 388ULL ] ) ) ) * 0.32 ; t1949 = t2279 * zc_int36 *
2.9973120849090416 / ( t2648 == 0.0 ? 1.0E-16 : t2648 ) ; if ( t1648 >= 0.0 )
{ t2001 = zc_int36 * 100000.0 ; } else { t2001 = - zc_int36 * 100000.0 ; }
t2053 = t2001 * 0.01 / ( t2644 == 0.0 ? 1.0E-16 : t2644 ) ; t3314 = -
zc_int37 - zc_int37 * - 0.95 ; piece151 = ( - t1733 - zc_int37 * - 0.95 ) / (
t3314 == 0.0 ? 1.0E-16 : t3314 ) ; t2057 = t2289 >= 1.0 ? t2053 : 1.0 ; t3231
= pmf_log10 ( 6.9 / ( t2057 == 0.0 ? 1.0E-16 : t2057 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2057 == 0.0 ? 1.0E-16 : t2057
) + 0.00017169489553429715 ) * 3.24 ; zc_int36 = zc_int36 * t2001 * ( 1.0 / (
t3231 == 0.0 ? 1.0E-16 : t3231 ) ) * 0.046833001326703774 / ( t2651 == 0.0 ?
1.0E-16 : t2651 ) ; t2001 = ( t2053 - 2000.0 ) / 2000.0 ; t2053 = t2001 *
t2001 * 3.0 - t2001 * t2001 * t2001 * 2.0 ; if ( t2289 <= 2000.0 ) { t2001 =
t1949 * 1.0E-5 ; } else if ( t2289 >= 4000.0 ) { t2001 = zc_int36 * 1.0E-5 ;
} else { t2001 = ( ( 1.0 - t2053 ) * t1949 + zc_int36 * t2053 ) * 1.0E-5 ; }
t3231 = - ( X [ 347ULL ] * t122 ) ; zc_int36 = t3231 / 0.32 *
0.00031622776601683789 + t2001 ; t3243 = - zc_int36 - zc_int36 * - 0.95 ;
t122 = ( - t2288 - zc_int36 * - 0.95 ) / ( t3243 == 0.0 ? 1.0E-16 : t3243 ) ;
t1949 = t122 * t122 * 3.0 - t122 * t122 * t122 * 2.0 ; if ( - t2288 <= t2287
* - 0.95 ) { t122 = t2288 ; } else if ( - t2288 >= - t2287 ) { t122 =
zc_int36 ; } else { t122 = ( 1.0 - t1949 ) * t2288 + zc_int36 * t1949 ; }
zc_int36 = piece151 * piece151 * 3.0 - piece151 * piece151 * piece151 * 2.0 ;
if ( - t1733 <= t1731 * - 0.95 ) { t1949 = t1733 ; } else if ( - t1733 >= -
t1731 ) { t1949 = zc_int37 ; } else { t1949 = ( 1.0 - zc_int36 ) * t1733 +
zc_int37 * zc_int36 ; } t3314 = X [ 130ULL ] * t1755 ; zc_int36 = ( ( real_T
) ( M [ 78ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3314 / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) ) * ( t3314 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [
131ULL ] ) ) * ( X [ 122ULL ] / 7.8539816339744827E-5 ) * ( X [ 122ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3299 ; t1731 = ( X [
131ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 100ULL ] != 0 ) * 2.0 -
1.0 ) * ( t1867 / ( t1735 == 0.0 ? 1.0E-16 : t1735 ) ) ) * t1782 * 0.64 ;
t1735 = pmf_sqrt ( ( ( real_T ) ( M [ 112ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1864
/ ( t1785 == 0.0 ? 1.0E-16 : t1785 ) / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [
152ULL ] ) ) ) * t1782 * 0.64 ; t1755 = ( ( real_T ) ( M [ 197ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3391 / ( X [ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) ) *
( t3391 / ( X [ 112ULL ] == 0.0 ? 1.0E-16 : X [ 112ULL ] ) ) * ( X [ 134ULL ]
/ 7.8539816339744827E-5 ) * ( X [ 134ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t3272 ; t3256 = t1735 - t1735 * 0.95 ; t2001 = (
t1731 - t1735 * 0.95 ) / ( t3256 == 0.0 ? 1.0E-16 : t3256 ) ; t2053 = t2001 *
t2001 * 3.0 - t2001 * t2001 * t2001 * 2.0 ; if ( t1786 <= zc_int48 * 0.95 ) {
t2001 = t1731 * 100000.0 ; } else if ( t1786 >= zc_int48 ) { t2001 = t1735 *
100000.0 ; } else { t2001 = ( ( 1.0 - t2053 ) * t1731 + t1735 * t2053 ) *
100000.0 ; } t2053 = ( - t1731 - t1735 * 0.95 ) / ( t3256 == 0.0 ? 1.0E-16 :
t3256 ) ; piece151 = t2053 * t2053 * 3.0 - t2053 * t2053 * t2053 * 2.0 ; if (
- t1786 <= zc_int48 * 0.95 ) { t2053 = t1731 * 100000.0 ; } else if ( - t1786
>= zc_int48 ) { t2053 = - t1735 * 100000.0 ; } else { t2053 = ( ( 1.0 -
piece151 ) * t1731 + - t1735 * piece151 ) * 100000.0 ; } t3391 = X [ 163ULL ]
* U_idx_8 ; t1731 = ( ( real_T ) ( M [ 150ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3391 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t3391 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( X [ 172ULL ] /
7.8539816339744827E-5 ) * ( X [ 172ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2345 ; t3267 = X [ 178ULL ] * t1843 ; t1735 = ( (
real_T ) ( M [ 152ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3267 / ( X [ 179ULL ] ==
0.0 ? 1.0E-16 : X [ 179ULL ] ) ) * ( t3267 / ( X [ 179ULL ] == 0.0 ? 1.0E-16
: X [ 179ULL ] ) ) * ( - X [ 172ULL ] / 7.8539816339744827E-5 ) * ( - X [
172ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1791 ;
zc_int48 = ( ( real_T ) ( M [ 153ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1599_idx_0 /
( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ) * ( t1599_idx_0 / ( X [
160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ) * ( X [ 186ULL ] /
7.8539816339744827E-5 ) * ( X [ 186ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1836 ; t1836 = pmf_sqrt ( t1813 * t1813 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 154ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 182ULL ] * t1814 * t1812 * 1.0E-9 ) ; t1813 = ( ( real_T ) ( M [ 78ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t3314 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ]
) ) * ( t3314 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) ) * ( - X [
122ULL ] / 7.8539816339744827E-5 ) * ( - X [ 122ULL ] / 7.8539816339744827E-5
) / 2.0 * 9.999999999999999E-14 + t3299 ; t1814 = pmf_sqrt ( t108 * t108 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 155ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 187ULL ] * zc_int88 * t1812 * 1.0E-9 ) ; t108 = - pmf_sqrt ( ( ( real_T ) (
M [ 157ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1882 / ( t1812 == 0.0 ? 1.0E-16 :
t1812 ) / ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) ) ) *
7.8539816339744827E-5 ; zc_int88 = t1818 * t108 * 35.2 / ( t1890 == 0.0 ?
1.0E-16 : t1890 ) ; if ( t105 >= 0.0 ) { t1843 = t108 * 100000.0 ; } else {
t1843 = - t108 * 100000.0 ; } t105 = t1843 * 0.01 / ( t1886 == 0.0 ? 1.0E-16
: t1886 ) ; piece151 = zc_int82 >= 1.0 ? t105 : 1.0 ; t3299 = pmf_log10 ( 6.9
/ ( piece151 == 0.0 ? 1.0E-16 : piece151 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( piece151 == 0.0 ? 1.0E-16 : piece151 ) +
0.00017169489553429715 ) * 3.24 ; t108 = t108 * t1843 * ( 1.0 / ( t3299 ==
0.0 ? 1.0E-16 : t3299 ) ) * 0.55 / ( t1893 == 0.0 ? 1.0E-16 : t1893 ) ; t105
= ( t105 - 2000.0 ) / 2000.0 ; t1843 = t105 * t105 * 3.0 - t105 * t105 * t105
* 2.0 ; if ( zc_int82 <= 2000.0 ) { t105 = zc_int88 * 1.0E-5 ; } else if (
zc_int82 >= 4000.0 ) { t105 = t108 * 1.0E-5 ; } else { t105 = ( ( 1.0 - t1843
) * zc_int88 + t108 * t1843 ) * 1.0E-5 ; } t3299 = - ( X [ 172ULL ] * t1836 )
; zc_int82 = t3299 / 7.8539816339744827E-5 * 0.00031622776601683789 + t105 ;
t3346 = - zc_int82 - zc_int82 * - 0.95 ; t105 = ( - t1820 - zc_int82 * - 0.95
) / ( t3346 == 0.0 ? 1.0E-16 : t3346 ) ; t108 = t105 * t105 * 3.0 - t105 *
t105 * t105 * 2.0 ; if ( - t1820 <= t106 * - 0.95 ) { t105 = t1820 ; } else
if ( - t1820 >= - t106 ) { t105 = zc_int82 ; } else { t105 = ( 1.0 - t108 ) *
t1820 + zc_int82 * t108 ; } t106 = - pmf_sqrt ( ( ( real_T ) ( M [ 158ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t1902 / ( t1812 == 0.0 ? 1.0E-16 : t1812 ) / ( X [
187ULL ] == 0.0 ? 1.0E-16 : X [ 187ULL ] ) ) ) * 7.8539816339744827E-5 ;
t1818 = t1818 * t106 * 35.2 / ( t1890 == 0.0 ? 1.0E-16 : t1890 ) ; if ( t1662
>= 0.0 ) { zc_int82 = t106 * 100000.0 ; } else { zc_int82 = - t106 * 100000.0
; } t108 = zc_int82 * 0.01 / ( t1886 == 0.0 ? 1.0E-16 : t1886 ) ; zc_int88 =
t1829 >= 1.0 ? t108 : 1.0 ; t3314 = pmf_log10 ( 6.9 / ( zc_int88 == 0.0 ?
1.0E-16 : zc_int88 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
zc_int88 == 0.0 ? 1.0E-16 : zc_int88 ) + 0.00017169489553429715 ) * 3.24 ;
t106 = t106 * zc_int82 * ( 1.0 / ( t3314 == 0.0 ? 1.0E-16 : t3314 ) ) * 0.55
/ ( t1893 == 0.0 ? 1.0E-16 : t1893 ) ; zc_int82 = ( t108 - 2000.0 ) / 2000.0
; t108 = zc_int82 * zc_int82 * 3.0 - zc_int82 * zc_int82 * zc_int82 * 2.0 ;
if ( t1829 <= 2000.0 ) { zc_int82 = t1818 * 1.0E-5 ; } else if ( t1829 >=
4000.0 ) { zc_int82 = t106 * 1.0E-5 ; } else { zc_int82 = ( ( 1.0 - t108 ) *
t1818 + t106 * t108 ) * 1.0E-5 ; } t3314 = X [ 186ULL ] * t1814 ; t1814 =
t3314 / 7.8539816339744827E-5 * 0.00031622776601683789 + zc_int82 ; t3393 = -
t1814 - t1814 * - 0.95 ; t106 = ( - t1828 - t1814 * - 0.95 ) / ( t3393 == 0.0
? 1.0E-16 : t3393 ) ; t1818 = t106 * t106 * 3.0 - t106 * t106 * t106 * 2.0 ;
if ( - t1828 <= zc_int91 * - 0.95 ) { t106 = t1828 ; } else if ( - t1828 >= -
zc_int91 ) { t106 = t1814 ; } else { t106 = ( 1.0 - t1818 ) * t1828 + t1814 *
t1818 ; } t1814 = ( ( real_T ) ( M [ 150ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3391
/ ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t3391 / ( X [ 24ULL ]
== 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( - X [ 172ULL ] / 7.8539816339744827E-5
) * ( - X [ 172ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14
+ t2345 ; t1818 = ( ( real_T ) ( M [ 152ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3267
/ ( X [ 179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) ) * ( t3267 / ( X [ 179ULL
] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) ) * ( X [ 172ULL ] /
7.8539816339744827E-5 ) * ( X [ 172ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1791 ; t1791 = ( X [ 24ULL ] - X [ 179ULL ] ) *
pmf_sqrt ( ( ( real_T ) ( M [ 162ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2005 / (
zc_int94 == 0.0 ? 1.0E-16 : zc_int94 ) ) ) * t1870 * 0.64 ; zc_int82 =
pmf_sqrt ( ( ( real_T ) ( M [ 163ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2002 / (
t1873 == 0.0 ? 1.0E-16 : t1873 ) / ( X [ 200ULL ] == 0.0 ? 1.0E-16 : X [
200ULL ] ) ) ) * t1870 * 0.64 ; t3267 = zc_int82 - zc_int82 * 0.95 ; t108 = (
t1791 - zc_int82 * 0.95 ) / ( t3267 == 0.0 ? 1.0E-16 : t3267 ) ; zc_int88 =
t108 * t108 * 3.0 - t108 * t108 * t108 * 2.0 ; if ( t111 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 * 0.95 ) {
t108 = t1791 * 100000.0 ; } else if ( t111 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) { t108 =
zc_int82 * 100000.0 ; } else { t108 = ( ( 1.0 - zc_int88 ) * t1791 + zc_int82
* zc_int88 ) * 100000.0 ; } zc_int88 = ( - t1791 - zc_int82 * 0.95 ) / (
t3267 == 0.0 ? 1.0E-16 : t3267 ) ; zc_int91 = zc_int88 * zc_int88 * 3.0 -
zc_int88 * zc_int88 * zc_int88 * 2.0 ; if ( - t111 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 * 0.95 ) {
zc_int88 = t1791 * 100000.0 ; } else if ( - t111 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) { zc_int88
= - zc_int82 * 100000.0 ; } else { zc_int88 = ( ( 1.0 - zc_int91 ) * t1791 +
- zc_int82 * zc_int91 ) * 100000.0 ; } t3391 = X [ 207ULL ] * U_idx_2 ; t1791
= ( ( real_T ) ( M [ 168ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3391 / 1.01325 ) * (
t3391 / 1.01325 ) * ( X [ 213ULL ] / 0.0019634954084936209 ) * ( X [ 213ULL ]
/ 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + piece218 ; zc_int82
= ( ( real_T ) ( M [ 168ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3391 / 1.01325 ) * (
t3391 / 1.01325 ) * ( - X [ 213ULL ] / 0.0019634954084936209 ) * ( - X [
213ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + piece218 ;
t3391 = X [ 221ULL ] * t1931 ; t3393 = X [ 228ULL ] * t1900 ; t1662 = ( (
real_T ) ( M [ 171ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3393 / ( X [ 31ULL ] == 0.0
? 1.0E-16 : X [ 31ULL ] ) ) * ( t3393 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [
31ULL ] ) ) * ( - X [ 213ULL ] / 0.0019634954084936209 ) * ( - X [ 213ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3403 ; t3393 = X [
225ULL ] * t1900 ; t1829 = ( ( real_T ) ( M [ 172ULL ] != 0 ) * 2.0 - 1.0 ) *
( t3393 / 1.01325 ) * ( t3393 / 1.01325 ) * ( - X [ 213ULL ] /
0.0019634954084936209 ) * ( - X [ 213ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1901 ; t3393 = X [ 227ULL ] * t1900 ; zc_int94 = ( (
real_T ) ( M [ 173ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3393 / 1.01325 ) * ( t3393
/ 1.01325 ) * ( X [ 213ULL ] / 0.0019634954084936209 ) * ( X [ 213ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t1907 ; t3393 = X [
226ULL ] * t1900 ; if ( - X [ 213ULL ] >= 0.0 ) { t1843 = - ( ( t1662 - t1829
) * X [ 213ULL ] ) ; } else { t1843 = ( zc_int94 - ( ( ( real_T ) ( M [
174ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3393 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X
[ 31ULL ] ) ) * ( t3393 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) *
( X [ 213ULL ] / 0.0019634954084936209 ) * ( X [ 213ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + piece20 ) ) * X [
213ULL ] ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26
= - ( piece14 * 100000.0 ) ; piece20 = - ( t3429 * 100000.0 ) ; t3429 = - (
t1795 * 100000.0 ) ; t1795 = - ( t1797 * 100000.0 ) ; t1797 = - ( t1822 *
100000.0 ) ; t1822 = - ( t1832 * 100000.0 ) ; t1832 = - ( t1915 * 100000.0 )
; t1907 = - ( piece96 * 100000.0 ) ; t1915 = - ( t1945 * 100000.0 ) ; piece96
= - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
100000.0 ) ; t1931 = - ( t1995 * 100000.0 ) ; t1945 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens * 100000.0 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = - (
piece170 * 100000.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens = - ( t3396 *
100000.0 ) ; t2057 = - ( t2164 * 100000.0 ) ; piece175 = - ( t2236 * 100000.0
) ; t2066 = - ( t2284 * 100000.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = pmf_log ( t1737
/ ( piece214 == 0.0 ? 1.0E-16 : piece214 ) ) * 0.014785189545032806 ;
piece214 = ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI -
piece223 ) - piece232 * 0.01 ) - t3655 ; piece232 = ( ( - t1889 - t1891 ) *
296.802103844292 + t1889 * 461.523 ) + t1891 * 259.836612622973 ; t2083 = ( (
- t1894 - t1895 ) * 296.802103844292 + t1894 * 461.523 ) + t1895 *
259.836612622973 ; t1895 = ( ( t2350 - pmf_log ( X [ 31ULL ] * 100000.0 ) *
t1900 ) - intrm_sf_mf_413 ) + t2083 * 11.526088451496509 ; t2087 = ( ( t1930
- t2083 * 11.526088451496509 ) - piece250 ) + pmf_log ( X [ 31ULL ] *
100000.0 ) * t1900 ; t1900 = ( ( - t2147 - t2148 ) * 296.802103844292 + t2147
* 461.523 ) + t2148 * 259.836612622973 ; t1195 [ 0ULL ] = X [ 0ULL ] *
9.2592592592592591E-6 ; t1184 [ 0 ] = 6ULL ; tlu2_linear_linear_prelookup ( &
kt_efOut . mField0 [ 0ULL ] , & kt_efOut . mField1 [ 0ULL ] , & kt_efOut .
mField2 [ 0ULL ] , & nonscalar33 [ 0ULL ] , & t1195 [ 0ULL ] , & t1184 [ 0ULL
] , & t126 [ 0ULL ] ) ; t86 = kt_efOut ; t1195 [ 0 ] = 298.15 ; t1187 [ 0 ] =
7ULL ; tlu2_linear_linear_prelookup ( & lt_efOut . mField0 [ 0ULL ] , &
lt_efOut . mField1 [ 0ULL ] , & lt_efOut . mField2 [ 0ULL ] , & nonscalar34 [
0ULL ] , & t1195 [ 0ULL ] , & t1187 [ 0ULL ] , & t126 [ 0ULL ] ) ; t94 =
lt_efOut ; t1195 [ 0ULL ] = X [ 249ULL ] ; t1604 [ 0 ] = 5ULL ;
tlu2_linear_nearest_prelookup ( & mt_efOut . mField0 [ 0ULL ] , & mt_efOut .
mField1 [ 0ULL ] , & mt_efOut . mField2 [ 0ULL ] , & nonscalar37 [ 0ULL ] , &
t1195 [ 0ULL ] , & t1604 [ 0ULL ] , & t126 [ 0ULL ] ) ; t32 = mt_efOut ;
t1195 [ 0ULL ] = U_idx_3 * 376.99111843077515 * 0.99999999999999978 /
0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978 ; t1193 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & nt_efOut . mField0 [ 0ULL ] , &
nt_efOut . mField1 [ 0ULL ] , & nt_efOut . mField2 [ 0ULL ] , & nonscalar38 [
0ULL ] , & t1195 [ 0ULL ] , & t1193 [ 0ULL ] , & t126 [ 0ULL ] ) ; t77 =
nt_efOut ; if ( X [ 52ULL ] != X [ 52ULL ] ) { t2164 = X [ 52ULL ] ; } else
if ( X [ 52ULL ] > 0.0 ) { t2164 = 1.0 ; } else { t2164 = X [ 52ULL ] < 0.0 ?
- 1.0 : 0.0 ; } t1195 [ 0ULL ] = t2164 * X [ 51ULL ] ;
tlu2_linear_nearest_prelookup ( & ot_efOut . mField0 [ 0ULL ] , & ot_efOut .
mField1 [ 0ULL ] , & ot_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t1195 [ 0ULL ] , & t754 [ 0ULL ] , & t126 [ 0ULL ] ) ;
t70 = ot_efOut ; t3396 = M [ 111ULL ] != 0 ? X [ 55ULL ] : 0.9 ; U_idx_0 = -
( ( X [ 59ULL ] - X [ 57ULL ] * X [ 58ULL ] * 0.001 ) * t3908 / ( t3396 ==
0.0 ? 1.0E-16 : t3396 ) * 1000.0 + ( 1.0 - t3908 ) * X [ 55ULL ] / 1000.0 ) ;
if ( M [ 156ULL ] != 0 ) { t3908 = ( ( t3672 - X [ 60ULL ] ) - 0.799999992 )
* 1000.0 ; } else { t3908 = ( t3672 - X [ 60ULL ] ) * 1.0E-5 ; } if ( M [
165ULL ] != 0 ) { t1930 = t3672 - ( X [ 63ULL ] - t3910 ) * intrm_sf_mf_1449
* 0.001 ; } else { t1930 = ( X [ 58ULL ] - X [ 60ULL ] ) - ( t3910 * 0.001 +
X [ 58ULL ] ) * intrm_sf_mf_1449 ; } if ( M [ 175ULL ] != 0 ) { t3672 = - X [
62ULL ] - ( X [ 95ULL ] - 0.59999999819999994 ) / 0.3 ; } else { t3672 = - X
[ 62ULL ] - X [ 95ULL ] * 1.0E-8 ; } if ( X [ 134ULL ] >= 0.0 ) { t2083 = ( X
[ 136ULL ] - X [ 20ULL ] ) - t1726 ; } else { t2083 = ( X [ 136ULL ] - X [
20ULL ] ) - zc_int21 ; } if ( - X [ 122ULL ] >= 0.0 ) { t1726 = ( X [ 140ULL
] - X [ 20ULL ] ) - t1733 ; } else { t1726 = ( X [ 140ULL ] - X [ 20ULL ] ) -
t1949 ; } if ( t1786 >= 0.0 ) { t1733 = X [ 122ULL ] - t2001 ; } else { t1733
= X [ 122ULL ] - t2053 ; } if ( - X [ 172ULL ] >= 0.0 ) { t1786 = ( X [
183ULL ] - X [ 28ULL ] ) - t1820 ; } else { t1786 = ( X [ 183ULL ] - X [
28ULL ] ) - t105 ; } if ( X [ 186ULL ] >= 0.0 ) { t105 = ( X [ 188ULL ] - X [
28ULL ] ) - t1828 ; } else { t105 = ( X [ 188ULL ] - X [ 28ULL ] ) - t106 ; }
if ( t111 >= 0.0 ) { t106 = - X [ 172ULL ] - t108 ; } else { t106 = - X [
172ULL ] - zc_int88 ; } if ( - X [ 186ULL ] >= 0.0 ) { t1820 = ( X [ 262ULL ]
- X [ 38ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke ; } else {
t1820 = ( X [ 262ULL ] - X [ 38ULL ] ) - t116 ; } if ( X [ 263ULL ] >= 0.0 )
{ t108 = ( X [ 265ULL ] - X [ 38ULL ] ) - t123 ; } else { t108 = ( X [ 265ULL
] - X [ 38ULL ] ) - t115 ; } if ( - X [ 263ULL ] >= 0.0 ) { zc_int88 = ( X [
276ULL ] - X [ 39ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_unchoke ; } else {
zc_int88 = ( X [ 276ULL ] - X [ 39ULL ] ) - t1946 ; } if ( X [ 277ULL ] >=
0.0 ) { t1828 = ( X [ 279ULL ] - X [ 39ULL ] ) - t2000 ; } else { t1828 = ( X
[ 279ULL ] - X [ 39ULL ] ) - t1944 ; } if ( - X [ 277ULL ] >= 0.0 ) { t111 =
( X [ 290ULL ] - X [ 40ULL ] ) - t2058 ; } else { t111 = ( X [ 290ULL ] - X [
40ULL ] ) - t112 ; } if ( - X [ 134ULL ] >= 0.0 ) { t112 = ( X [ 292ULL ] - X
[ 40ULL ] ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok
; } else { t112 = ( X [ 292ULL ] - X [ 40ULL ] ) - t1936 ; } if ( - X [
244ULL ] >= 0.0 ) { t1936 = ( X [ 311ULL ] - X [ 44ULL ] ) - t2089 ; } else {
t1936 = ( X [ 311ULL ] - X [ 44ULL ] ) - zc_int218 ; } if ( X [ 312ULL ] >=
0.0 ) { zc_int218 = ( X [ 314ULL ] - X [ 44ULL ] ) - t2096 ; } else {
zc_int218 = ( X [ 314ULL ] - X [ 44ULL ] ) - t1986 ; } if ( X [ 347ULL ] >=
0.0 ) { t115 = ( X [ 349ULL ] - X [ 46ULL ] ) - t2162 ; } else { t115 = ( X [
349ULL ] - X [ 46ULL ] ) - zc_int251 ; } if ( - X [ 335ULL ] >= 0.0 ) { t116
= ( X [ 353ULL ] - X [ 46ULL ] ) - t2169 ; } else { t116 = ( X [ 353ULL ] - X
[ 46ULL ] ) - zc_int263 ; } if ( t2205 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke = X [ 335ULL
] - t2050 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke = X [ 335ULL
] - t2052 ; } if ( - X [ 312ULL ] >= 0.0 ) { t1944 = ( X [ 373ULL ] - X [
49ULL ] ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_AI_unchoke ;
} else { t1944 = ( X [ 373ULL ] - X [ 49ULL ] ) - zc_int291 ; } if ( X [
374ULL ] >= 0.0 ) { t1946 = ( X [ 376ULL ] - X [ 49ULL ] ) - t2245 ; } else {
t1946 = ( X [ 376ULL ] - X [ 49ULL ] ) - t1997 ; } if ( - X [ 374ULL ] >= 0.0
) { t1949 = ( X [ 387ULL ] - X [ 50ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_unchok ; } else {
t1949 = ( X [ 387ULL ] - X [ 50ULL ] ) - t1730 ; } if ( - X [ 347ULL ] >= 0.0
) { t1730 = ( X [ 389ULL ] - X [ 50ULL ] ) - t2288 ; } else { t1730 = ( X [
389ULL ] - X [ 50ULL ] ) - t122 ; } if ( M [ 33ULL ] != 0 ) { t122 = X [
396ULL ] - X [ 398ULL ] ; } else if ( M [ 35ULL ] != 0 ) { t122 = X [ 396ULL
] - ( - X [ 398ULL ] ) ; } else { t122 = X [ 396ULL ] - X [ 52ULL ] ; }
tlu2_2d_linear_linear_value ( & pt_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1184 [ 0ULL ] , &
t1187 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1195 [ 0 ] = pt_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & qt_efOut [ 0ULL ] , & t86 . mField0 [ 0ULL ]
, & t86 . mField2 [ 0ULL ] , & t94 . mField0 [ 0ULL ] , & t94 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField26 , & t1184 [ 0ULL ] , &
t1187 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1608_idx_0 = qt_efOut [ 0 ] ;
tlu2_2d_linear_nearest_value ( & rt_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & t77 . mField0 [ 0ULL ] , & t77 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1604 [ 0ULL ] , &
t1193 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1599_idx_0 = rt_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & st_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 ,
& t754 [ 0ULL ] , & t126 [ 0ULL ] ) ; t1603_idx_0 = st_efOut [ 0 ] ; t1209 [
0ULL ] = - 0.0 ; t1209 [ 1ULL ] = - X [ 53ULL ] * ( real_T ) ( X [ 53ULL ] <
0.0 ) / 108000.0 ; t1209 [ 2ULL ] = 0.0 ; t1209 [ 3ULL ] = - 0.0 ; t1209 [
4ULL ] = - 0.0 ; t1209 [ 5ULL ] = - 0.0 ; t1209 [ 6ULL ] = - 0.0 ; t1209 [
7ULL ] = - ( ( ( ( t1778 - t1777 * X [ 21ULL ] ) * ( - 164.72089615570803 / (
t1718 == 0.0 ? 1.0E-16 : t1718 ) ) + ( t1776 - t1777 * X [ 22ULL ] ) * ( -
3827.6794129126583 / ( t1718 == 0.0 ? 1.0E-16 : t1718 ) ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) /
12.896402563644669 ) ; t1209 [ 8ULL ] = - ( - 8.1984652990144453E-5 + ( ( ( (
t1775 - t1781 ) * ( t1778 - t1777 * X [ 21ULL ] ) + ( t1773 - t1781 ) * (
t1776 - t1777 * X [ 22ULL ] ) ) + t1777 * ( t1779 - X [ 19ULL ] * t1718 *
0.001 ) ) - piece20 ) / 2246.65922904024 ) ; t1209 [ 9ULL ] = - ( t1777 * X [
21ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V26 ) ;
t1209 [ 10ULL ] = - ( t1777 * X [ 22ULL ] ) ; t1209 [ 11ULL ] = - ( ( ( (
t1806 - t1805 * X [ 26ULL ] ) * ( - 164.72089615570803 / ( t1794 == 0.0 ?
1.0E-16 : t1794 ) ) + ( X [ 173ULL ] - t1805 * X [ 25ULL ] ) * ( -
3827.6794129126583 / ( t1794 == 0.0 ? 1.0E-16 : t1794 ) ) ) - t3429 ) /
12.896402563644669 ) ; t1209 [ 12ULL ] = - ( ( ( ( ( t1803 - t1809 ) * (
t1806 - t1805 * X [ 26ULL ] ) + ( t1802 - t1809 ) * ( X [ 173ULL ] - t1805 *
X [ 25ULL ] ) ) + t1805 * ( t1807 - X [ 23ULL ] * t1794 * 0.001 ) ) - t1795 )
/ 2246.65922904024 ) ; t1209 [ 13ULL ] = - ( t1805 * X [ 26ULL ] - t3429 ) ;
t1209 [ 14ULL ] = - ( t1805 * X [ 25ULL ] ) ; t1209 [ 15ULL ] = - ( ( ( (
t1861 - t1860 * X [ 29ULL ] ) * ( - 164.72089615570803 / ( t1812 == 0.0 ?
1.0E-16 : t1812 ) ) + ( t1859 - t1860 * X [ 30ULL ] ) * ( -
3827.6794129126583 / ( t1812 == 0.0 ? 1.0E-16 : t1812 ) ) ) - t1797 ) /
12.896402563644669 ) ; t1209 [ 16ULL ] = - ( ( ( ( ( t1858 - t1865 ) * (
t1861 - t1860 * X [ 29ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_u_g_I - t1865 ) * ( t1859 -
t1860 * X [ 30ULL ] ) ) + t1860 * ( t1862 - X [ 27ULL ] * t1812 * 0.001 ) ) -
t1822 ) / 2246.65922904024 ) ; t1209 [ 17ULL ] = - ( t1860 * X [ 29ULL ] -
t1797 ) ; t1209 [ 18ULL ] = - ( t1860 * X [ 30ULL ] ) ; t1209 [ 19ULL ] = - (
( ( t1925 - t1924 * X [ 34ULL ] ) * ( - 164.72089615570803 / ( t1914 == 0.0 ?
1.0E-16 : t1914 ) ) + ( t1923 - t1924 * X [ 33ULL ] ) * ( 36.965491221318985
/ ( t1914 == 0.0 ? 1.0E-16 : t1914 ) ) ) - t1832 ) ; t1209 [ 20ULL ] = - ( (
( ( ( t1922 - t1928 ) * ( t1925 - t1924 * X [ 34ULL ] ) + ( t1921 - t1928 ) *
( t1923 - t1924 * X [ 33ULL ] ) ) + t1924 * ( t1926 - X [ 32ULL ] * t1914 *
0.001 ) ) - t1907 ) / 2172.7681408465714 ) ; t1209 [ 21ULL ] = - ( t1924 * X
[ 34ULL ] - t1832 ) ; t1209 [ 22ULL ] = - ( t1924 * X [ 33ULL ] ) ; t1209 [
23ULL ] = - ( ( ( ( t1971 - t1970 * X [ 37ULL ] ) * ( - 164.72089615570803 /
( t1934 == 0.0 ? 1.0E-16 : t1934 ) ) + ( t1969 - t1970 * X [ 36ULL ] ) * ( -
3827.6794129126583 / ( t1934 == 0.0 ? 1.0E-16 : t1934 ) ) ) - t1915 ) /
12.896402563644669 ) ; t1209 [ 24ULL ] = - ( ( ( ( ( t1968 - t1975 ) * (
t1971 - t1970 * X [ 37ULL ] ) + ( t1967 - t1975 ) * ( t1969 - t1970 * X [
36ULL ] ) ) + t1970 * ( t1972 - X [ 35ULL ] * t1934 * 0.001 ) ) - piece96 ) /
2246.65922904024 ) ; t1209 [ 25ULL ] = - ( t1970 * X [ 37ULL ] - t1915 ) ;
t1209 [ 26ULL ] = - ( t1970 * X [ 36ULL ] ) ; t1209 [ 27ULL ] = - ( ( ( (
t2040 - t2035 * X [ 8ULL ] ) * ( - 164.72089615570803 / ( t1984 == 0.0 ?
1.0E-16 : t1984 ) ) + ( t2034 - t2035 * X [ 7ULL ] ) * ( - 3827.6794129126583
/ ( t1984 == 0.0 ? 1.0E-16 : t1984 ) ) ) - t1931 ) / 12.896402563644669 ) ;
t1209 [ 28ULL ] = - ( ( ( ( ( t2032 - t2045 ) * ( t2040 - t2035 * X [ 8ULL ]
) + ( t2031 - t2045 ) * ( t2034 - t2035 * X [ 7ULL ] ) ) + t2035 * ( t2041 -
X [ 6ULL ] * t1984 * 0.001 ) ) - t1945 ) / 2246.65922904024 ) ; t1209 [ 29ULL
] = - ( t2035 * X [ 8ULL ] - t1931 ) ; t1209 [ 30ULL ] = - ( t2035 * X [ 7ULL
] ) ; t1209 [ 31ULL ] = - ( ( ( ( t2074 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 11ULL ] )
* ( - 164.72089615570803 / ( t2049 == 0.0 ? 1.0E-16 : t2049 ) ) + ( t2055 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 10ULL ] )
* ( - 3827.6794129126583 / ( t2049 == 0.0 ? 1.0E-16 : t2049 ) ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) /
13.896402563644669 ) ; t1209 [ 32ULL ] = - ( ( ( ( ( t2054 - t2078 ) * (
t2074 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [
11ULL ] ) + ( t2021 - t2078 ) * ( t2055 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 10ULL ] )
) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * ( t2076 -
X [ 9ULL ] * t2049 * 0.001 ) ) - ( - ( intrm_sf_mf_826 * 100000.0 ) ) ) /
2448.8207083326588 ) ; t1209 [ 33ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) ; t1209 [
34ULL ] = - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total *
X [ 10ULL ] ) ; t1209 [ 35ULL ] = - ( ( ( t2133 - t2132 * X [ 43ULL ] ) * ( -
164.72089615570803 / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) ) + ( t2130 - t2132 *
X [ 42ULL ] ) * ( 36.965491221318985 / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) ) )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens ) ; t1209 [
36ULL ] = - ( ( ( ( ( t2129 - t2141 ) * ( t2133 - t2132 * X [ 43ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - t2141 ) * ( t2130 -
t2132 * X [ 42ULL ] ) ) + t2132 * ( t2138 - X [ 41ULL ] * t2080 * 0.001 ) ) -
( - ( t3397 * 100000.0 ) ) ) / 2172.7681408465714 ) ; t1209 [ 37ULL ] = - (
t2132 * X [ 43ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Phi_w_condens ) ; t1209 [
38ULL ] = - ( t2132 * X [ 42ULL ] ) ; t1209 [ 39ULL ] = - ( ( ( t2196 - t2195
* X [ 47ULL ] ) * ( - 164.72089615570803 / ( t2154 == 0.0 ? 1.0E-16 : t2154 )
) + ( t2194 - t2195 * X [ 48ULL ] ) * ( 36.965491221318985 / ( t2154 == 0.0 ?
1.0E-16 : t2154 ) ) ) - t2057 ) ; t1209 [ 40ULL ] = - ( -
0.00042386385785324375 + ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_w_I - t2199 ) * ( t2196 -
t2195 * X [ 47ULL ] ) + ( t2192 - t2199 ) * ( t2194 - t2195 * X [ 48ULL ] ) )
+ t2195 * ( t2197 - X [ 45ULL ] * t2154 * 0.001 ) ) - ( - ( t2174 * 100000.0
) ) ) / 2172.7681408465714 ) ; t1209 [ 41ULL ] = - ( t2195 * X [ 47ULL ] -
t2057 ) ; t1209 [ 42ULL ] = - ( t2195 * X [ 48ULL ] ) ; t1209 [ 43ULL ] = - (
( ( t2267 - t2266 * X [ 14ULL ] ) * ( - 164.72089615570803 / ( t2212 == 0.0 ?
1.0E-16 : t2212 ) ) + ( t2265 - t2266 * X [ 13ULL ] ) * ( 36.965491221318985
/ ( t2212 == 0.0 ? 1.0E-16 : t2212 ) ) ) - piece175 ) ; t1209 [ 44ULL ] = - (
( ( ( ( t2264 - t2270 ) * ( t2267 - t2266 * X [ 14ULL ] ) + ( t2263 - t2270 )
* ( t2265 - t2266 * X [ 13ULL ] ) ) + t2266 * ( t2268 - X [ 12ULL ] * t2212 *
0.001 ) ) - ( - ( t2251 * 100000.0 ) ) ) / 2172.7681408465714 ) ; t1209 [
45ULL ] = - ( t2266 * X [ 14ULL ] - piece175 ) ; t1209 [ 46ULL ] = - ( t2266
* X [ 13ULL ] ) ; t1209 [ 47ULL ] = - ( ( ( ( t2298 - t2292 * X [ 17ULL ] ) *
( - 164.72089615570803 / ( t2273 == 0.0 ? 1.0E-16 : t2273 ) ) + ( t2278 -
t2292 * X [ 16ULL ] ) * ( 36.965491221318985 / ( t2273 == 0.0 ? 1.0E-16 :
t2273 ) ) ) - t2066 ) / 1.5549856083302016 ) ; t1209 [ 48ULL ] = - ( ( ( ( (
intrm_sf_mf_1402 - t2301 ) * ( t2298 - t2292 * X [ 17ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - t2301 ) * ( t2278
- t2292 * X [ 16ULL ] ) ) + t2292 * ( t2299 - X [ 15ULL ] * t2273 * 0.001 ) )
- ( - ( t2293 * 100000.0 ) ) ) / 2374.9296201389902 ) ; t1209 [ 49ULL ] = - (
t2292 * X [ 17ULL ] - t2066 ) ; t1209 [ 50ULL ] = - ( t2292 * X [ 16ULL ] ) ;
t1209 [ 51ULL ] = - 0.0 ; t1209 [ 52ULL ] = - 0.0 ; U_idx_8 = - t1195 [ 0ULL
] ; t1209 [ 53ULL ] = U_idx_8 / 285.83999999999992 ; t1209 [ 54ULL ] = - 0.0
- ( X [ 53ULL ] * ( M [ 1ULL ] != 0 ? 4.03416E-7 : X [ 56ULL ] ) +
intrm_sf_mf_992 ) ; t1209 [ 55ULL ] = - t1608_idx_0 ; t1209 [ 56ULL ] = - ( (
X [ 57ULL ] * 0.1 + 650.0 ) * t2105 + ( 1.0 - t2105 ) * X [ 57ULL ] * 1000.0
) / 1000.0 ; t1209 [ 57ULL ] = U_idx_0 ; t1209 [ 58ULL ] = - ( X [ 57ULL ] *
X [ 57ULL ] * 0.00010037240412334386 ) - 0.001 ; t1209 [ 59ULL ] = - t3908 ;
t1209 [ 60ULL ] = t1930 ; t1209 [ 61ULL ] = - ( t3910 * intrm_sf_mf_1449 ) ;
t1209 [ 62ULL ] = X [ 96ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 /
2626.19492016262 ; t1209 [ 63ULL ] = X [ 98ULL ] * t1713 / 4578.46197843019 ;
t1209 [ 64ULL ] = X [ 100ULL ] * t1623 / 312.559698673577 ; t1209 [ 65ULL ] =
X [ 104ULL ] * t95 / 2626.19492016262 ; t1209 [ 66ULL ] = t1631 * t3906 /
2626.19492016262 ; t1209 [ 67ULL ] = - 0.16623276278497481 + - ( piece214 *
400.0 ) / 2957.0379090065608 ; t1209 [ 68ULL ] = - ( t4002 *
241812.2160511087 / 0.0020158806832745466 * 0.001 - t1632 * 0.001 ) /
3931.85243448965 ; t1209 [ 69ULL ] = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 *
0.20177105219743391 - t3992 ) / 0.20063898135050592 ; t1209 [ 70ULL ] = (
t1616 * 0.20177105219743391 - ( t1712 + t3992 ) ) / 0.20063898135050592 ;
t1209 [ 71ULL ] = t3992 ; t1209 [ 72ULL ] = - t3992 ; t1209 [ 73ULL ] = t4002
; t1209 [ 74ULL ] = t3674 ; t1209 [ 75ULL ] = - t1712 ; t1209 [ 76ULL ] = -
343.15 ; t1209 [ 77ULL ] = t3672 ; U_idx_1 = X [ 122ULL ] + t1644 ; U_idx_8 =
t1644 - X [ 122ULL ] ; t1209 [ 78ULL ] = - ( U_idx_1 / 2.0 * ( ( ( real_T ) (
M [ 89ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3254 / 1.01325 ) * ( t3254 / 1.01325 )
* ( X [ 122ULL ] / 7.8539816339744827E-5 ) * ( X [ 122ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2341 ) - U_idx_8 /
2.0 * X [ 121ULL ] ) / 365.59674280784293 ; t4002 = X [ 122ULL ] + t1639 ;
t3992 = t1639 - X [ 122ULL ] ; t1209 [ 79ULL ] = - ( t4002 / 2.0 * X [ 118ULL
] - t3992 / 2.0 * X [ 126ULL ] ) ; t3906 = X [ 122ULL ] + t1636 ; U_idx_2 =
t1636 - X [ 122ULL ] ; t1209 [ 80ULL ] = - ( t3906 / 2.0 * X [ 117ULL ] -
U_idx_2 / 2.0 * X [ 125ULL ] ) ; t1209 [ 81ULL ] = 0.0 ; t1209 [ 82ULL ] = X
[ 129ULL ] * t1715 / 461.523 ; t1209 [ 83ULL ] = X [ 119ULL ] *
intrm_sf_mf_182 ; t1209 [ 84ULL ] = 0.071939481849452439 + ( ( ( - t1647 -
t1714 ) * 296.802103844292 + t1647 * 461.523 ) + t1714 * 4124.48151675695 ) *
0.9997 / 4124.48151675695 ; t3655 = t1715 * 293.15 ; t1209 [ 85ULL ] = -
304.06022922571 - ( ( ( real_T ) ( M [ 193ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3655 / 1.01325 ) * ( t3655 / 1.01325 ) * ( X [ 122ULL ] /
7.8539816339744827E-5 ) * ( X [ 122ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + ( ( ( - t1647 - t1714 ) * 304.06022922571 + t1647 *
2537.56068088674 ) + t1714 * 3860.3219873489 ) ) ; t1209 [ 86ULL ] = - t1647
; t1209 [ 87ULL ] = - t1714 ; t1209 [ 88ULL ] = - ( ( X [ 134ULL ] + t1764 )
/ 2.0 * t1755 - ( t1764 - X [ 134ULL ] ) / 2.0 * X [ 144ULL ] ) ; t1209 [
89ULL ] = - ( ( X [ 134ULL ] + t1736 ) / 2.0 * X [ 114ULL ] - ( t1736 - X [
134ULL ] ) / 2.0 * X [ 148ULL ] ) ; t1209 [ 90ULL ] = - ( ( X [ 134ULL ] +
t1723 ) / 2.0 * X [ 113ULL ] - ( t1723 - X [ 134ULL ] ) / 2.0 * X [ 147ULL ]
) ; t1209 [ 91ULL ] = - ( ( - X [ 122ULL ] + t1772 ) / 2.0 * t1813 - ( t1772
- ( - X [ 122ULL ] ) ) / 2.0 * X [ 149ULL ] ) ; t1209 [ 92ULL ] = - ( ( - X [
122ULL ] + t1770 ) / 2.0 * X [ 133ULL ] - ( t1770 - ( - X [ 122ULL ] ) ) /
2.0 * X [ 151ULL ] ) ; t1209 [ 93ULL ] = - ( ( - X [ 122ULL ] + t1768 ) / 2.0
* X [ 132ULL ] - ( t1768 - ( - X [ 122ULL ] ) ) / 2.0 * X [ 150ULL ] ) ;
t1209 [ 94ULL ] = - ( ( t1744 + t1763 ) * 0.001 ) - - 0.18419157727996954 ;
t1209 [ 95ULL ] = - ( t3006 / 7.8539816339744827E-5 * 0.00031622776601683789
+ intrm_sf_mf_151 ) ; t1209 [ 96ULL ] = - ( t3211 / 7.8539816339744827E-5 *
0.00031622776601683789 + t2333 ) ; t1209 [ 97ULL ] = t2083 ; t1209 [ 98ULL ]
= t1726 ; t3655 = X [ 135ULL ] * t1718 ; t1209 [ 99ULL ] = - ( ( ( real_T ) (
M [ 45ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3655 / ( X [ 136ULL ] == 0.0 ? 1.0E-16
: X [ 136ULL ] ) ) * ( t3655 / ( X [ 136ULL ] == 0.0 ? 1.0E-16 : X [ 136ULL ]
) ) * ( X [ 134ULL ] / 7.8539816339744827E-5 ) * ( X [ 134ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1752 ) ; t3655 = X [
139ULL ] * t1718 ; t1209 [ 100ULL ] = - ( ( ( real_T ) ( M [ 56ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3655 / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ] ) ) *
( t3655 / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ] ) ) * ( - X [ 122ULL
] / 7.8539816339744827E-5 ) * ( - X [ 122ULL ] / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + t1754 ) ; t1209 [ 101ULL ] = ( X [ 142ULL ] *
t1718 / 461.523 - t1743 * X [ 21ULL ] ) / 0.64309276860371423 ; t1209 [
102ULL ] = X [ 137ULL ] * t1718 / 461.523 ; t1209 [ 103ULL ] = X [ 141ULL ] *
t1739 ; t1209 [ 104ULL ] = X [ 138ULL ] * t1718 / 4124.48151675695 ; t1209 [
105ULL ] = - ( ( ( real_T ) ( M [ 67ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1751 / (
X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( t1751 / ( X [ 20ULL ] ==
0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( X [ 134ULL ] / 7.8539816339744827E-5 ) *
( X [ 134ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t1779 ) ; t1209 [ 106ULL ] = - t1716 ; t1209 [ 107ULL ] = - t1717 ; t1209 [
108ULL ] = - ( ( ( real_T ) ( M [ 67ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1751 / (
X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( t1751 / ( X [ 20ULL ] ==
0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( - X [ 122ULL ] / 7.8539816339744827E-5 )
* ( - X [ 122ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t1779 ) ; t1209 [ 109ULL ] = - t1716 ; t1209 [ 110ULL ] = - t1717 ; t1209 [
111ULL ] = - ( U_idx_1 / 2.0 * zc_int36 - U_idx_8 / 2.0 * X [ 158ULL ] ) ;
t1209 [ 112ULL ] = - ( t4002 / 2.0 * X [ 133ULL ] - t3992 / 2.0 * X [ 154ULL
] ) ; t1209 [ 113ULL ] = - ( t3906 / 2.0 * X [ 132ULL ] - U_idx_2 / 2.0 * X [
155ULL ] ) ; t1209 [ 114ULL ] = - ( ( - X [ 122ULL ] + t1644 ) / 2.0 * ( ( (
real_T ) ( M [ 89ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3254 / 1.01325 ) * ( t3254 /
1.01325 ) * ( - X [ 122ULL ] / 7.8539816339744827E-5 ) * ( - X [ 122ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2341 ) - ( t1644 - (
- X [ 122ULL ] ) ) / 2.0 * X [ 158ULL ] ) / 365.59674280784293 ; t1209 [
115ULL ] = - ( ( - X [ 122ULL ] + t1639 ) / 2.0 * X [ 118ULL ] - ( t1639 - (
- X [ 122ULL ] ) ) / 2.0 * X [ 154ULL ] ) ; t1209 [ 116ULL ] = - ( ( - X [
122ULL ] + t1636 ) / 2.0 * X [ 117ULL ] - ( t1636 - ( - X [ 122ULL ] ) ) /
2.0 * X [ 155ULL ] ) ; t1209 [ 117ULL ] = t1733 ; t1209 [ 118ULL ] = - (
t1783 - t1789 ) ; U_idx_1 = X [ 156ULL ] * t1785 ; t1209 [ 119ULL ] = - ( ( (
real_T ) ( M [ 123ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 131ULL ] ==
0.0 ? 1.0E-16 : X [ 131ULL ] ) ) * ( U_idx_1 / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) ) * ( X [ 122ULL ] / 0.64 / 7.8539816339744827E-5 )
* ( X [ 122ULL ] / 0.64 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_189 ) ; U_idx_1 = X [ 157ULL ] * t1785 ;
t1209 [ 120ULL ] = - ( ( ( real_T ) ( M [ 134ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_1 / 1.01325 ) * ( U_idx_1 / 1.01325 ) * ( X [ 122ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( X [ 122ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_192 ) / 1.0413512978067061 ; t1209
[ 121ULL ] = - ( ( ( real_T ) ( M [ 145ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1840 /
( X [ 153ULL ] == 0.0 ? 1.0E-16 : X [ 153ULL ] ) ) * ( t1840 / ( X [ 153ULL ]
== 0.0 ? 1.0E-16 : X [ 153ULL ] ) ) * ( X [ 122ULL ] / 0.64 / ( t1782 == 0.0
? 1.0E-16 : t1782 ) ) * ( X [ 122ULL ] / 0.64 / ( t1782 == 0.0 ? 1.0E-16 :
t1782 ) ) / 2.0 * 9.999999999999999E-14 + t2342 ) ; U_idx_1 = X [ 172ULL ] +
t1801 ; U_idx_8 = t1801 - X [ 172ULL ] ; t1209 [ 122ULL ] = - ( U_idx_1 / 2.0
* t1731 - U_idx_8 / 2.0 * X [ 171ULL ] ) ; t4002 = X [ 172ULL ] + t1799 ;
t3992 = t1799 - X [ 172ULL ] ; t1209 [ 123ULL ] = - ( t4002 / 2.0 * X [
165ULL ] - t3992 / 2.0 * X [ 176ULL ] ) ; t3655 = X [ 172ULL ] + t1790 ;
t3906 = t1790 - X [ 172ULL ] ; t1209 [ 124ULL ] = - ( t3655 / 2.0 * X [
164ULL ] - t3906 / 2.0 * X [ 175ULL ] ) ; t1209 [ 125ULL ] = ( X [ 167ULL ] *
t1794 / 461.523 - t1798 * X [ 26ULL ] ) / 0.64309276860371423 ; t1209 [
126ULL ] = X [ 169ULL ] * t1794 / 461.523 ; t1209 [ 127ULL ] = X [ 166ULL ] *
t1796 ; t1209 [ 128ULL ] = X [ 168ULL ] * t1794 / 4124.48151675695 ; t1209 [
129ULL ] = - ( ( ( real_T ) ( M [ 151ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1869 / (
X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t1869 / ( X [ 24ULL ] ==
0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( X [ 172ULL ] / 7.8539816339744827E-5 ) *
( X [ 172ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t1807 ) ; t1209 [ 130ULL ] = - intrm_sf_mf_199 ; t1209 [ 131ULL ] = -
intrm_sf_mf_173 ; t1209 [ 132ULL ] = - ( ( - X [ 172ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) / 2.0 *
t1735 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 - (
- X [ 172ULL ] ) ) / 2.0 * X [ 192ULL ] ) ; t1209 [ 133ULL ] = - ( ( - X [
172ULL ] + t1831 ) / 2.0 * X [ 181ULL ] - ( t1831 - ( - X [ 172ULL ] ) ) /
2.0 * X [ 194ULL ] ) ; t1209 [ 134ULL ] = - ( ( - X [ 172ULL ] + t1816 ) /
2.0 * X [ 180ULL ] - ( t1816 - ( - X [ 172ULL ] ) ) / 2.0 * X [ 193ULL ] ) ;
t1209 [ 135ULL ] = - ( ( X [ 186ULL ] + t1856 ) / 2.0 * zc_int48 - ( t1856 -
X [ 186ULL ] ) / 2.0 * X [ 195ULL ] ) ; t1209 [ 136ULL ] = - ( ( X [ 186ULL ]
+ t1855 ) / 2.0 * X [ 162ULL ] - ( t1855 - X [ 186ULL ] ) / 2.0 * X [ 199ULL
] ) ; t1209 [ 137ULL ] = - ( ( X [ 186ULL ] + t1853 ) / 2.0 * X [ 161ULL ] -
( t1853 - X [ 186ULL ] ) / 2.0 * X [ 198ULL ] ) ; t1209 [ 138ULL ] = - ( (
t1835 + t1850 ) * 0.001 ) / 7.5401484792408886E-5 ; t1209 [ 139ULL ] = - (
t3299 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2347 ) ; t1209 [
140ULL ] = - ( t3314 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2348
) ; t1209 [ 141ULL ] = t1786 ; t1209 [ 142ULL ] = t105 ; U_idx_2 = X [ 182ULL
] * t1812 ; t1209 [ 143ULL ] = - ( ( ( real_T ) ( M [ 159ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_2 / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [ 183ULL ] ) ) * (
U_idx_2 / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [ 183ULL ] ) ) * ( - X [ 172ULL
] / 7.8539816339744827E-5 ) * ( - X [ 172ULL ] / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_325 ) ; U_idx_2 = X [ 187ULL ] *
t1812 ; t1209 [ 144ULL ] = - ( ( ( real_T ) ( M [ 160ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_2 / ( X [ 188ULL ] == 0.0 ? 1.0E-16 : X [ 188ULL ] ) ) * (
U_idx_2 / ( X [ 188ULL ] == 0.0 ? 1.0E-16 : X [ 188ULL ] ) ) * ( X [ 186ULL ]
/ 7.8539816339744827E-5 ) * ( X [ 186ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1846 ) ; t1209 [ 145ULL ] = ( X [ 190ULL ] * t1812 /
461.523 - t1834 * X [ 29ULL ] ) / 0.64309276860371423 ; t1209 [ 146ULL ] = X
[ 184ULL ] * t1812 / 461.523 ; t1209 [ 147ULL ] = X [ 189ULL ] * t1833 ;
t1209 [ 148ULL ] = X [ 185ULL ] * t1812 / 4124.48151675695 ; t1209 [ 149ULL ]
= - ( ( ( real_T ) ( M [ 161ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1888 / ( X [
28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( t1888 / ( X [ 28ULL ] == 0.0 ?
1.0E-16 : X [ 28ULL ] ) ) * ( - X [ 172ULL ] / 7.8539816339744827E-5 ) * ( -
X [ 172ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1862
) ; t1209 [ 150ULL ] = - intrm_sf_mf_218 ; t1209 [ 151ULL ] = - t1811 ; t1209
[ 152ULL ] = - ( ( ( real_T ) ( M [ 161ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1888 /
( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( t1888 / ( X [ 28ULL ] ==
0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( X [ 186ULL ] / 7.8539816339744827E-5 ) *
( X [ 186ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t1862 ) ; t1209 [ 153ULL ] = - intrm_sf_mf_218 ; t1209 [ 154ULL ] = - t1811 ;
t1209 [ 155ULL ] = - ( ( - X [ 172ULL ] + t1801 ) / 2.0 * t1814 - ( t1801 - (
- X [ 172ULL ] ) ) / 2.0 * X [ 206ULL ] ) ; t1209 [ 156ULL ] = - ( ( - X [
172ULL ] + t1799 ) / 2.0 * X [ 165ULL ] - ( t1799 - ( - X [ 172ULL ] ) ) /
2.0 * X [ 202ULL ] ) ; t1209 [ 157ULL ] = - ( ( - X [ 172ULL ] + t1790 ) /
2.0 * X [ 164ULL ] - ( t1790 - ( - X [ 172ULL ] ) ) / 2.0 * X [ 203ULL ] ) ;
t1209 [ 158ULL ] = - ( U_idx_1 / 2.0 * t1818 - U_idx_8 / 2.0 * X [ 206ULL ] )
; t1209 [ 159ULL ] = - ( t4002 / 2.0 * X [ 181ULL ] - t3992 / 2.0 * X [
202ULL ] ) ; t1209 [ 160ULL ] = - ( t3655 / 2.0 * X [ 180ULL ] - t3906 / 2.0
* X [ 203ULL ] ) ; t1209 [ 161ULL ] = t106 ; t1209 [ 162ULL ] = - (
intrm_sf_mf_385 - t1880 ) ; U_idx_1 = X [ 204ULL ] * t1873 ; t1209 [ 163ULL ]
= - ( ( ( real_T ) ( M [ 164ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( U_idx_1 / ( X [ 24ULL ] == 0.0
? 1.0E-16 : X [ 24ULL ] ) ) * ( - X [ 172ULL ] / 0.64 / 7.8539816339744827E-5
) * ( - X [ 172ULL ] / 0.64 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1848 ) ; U_idx_1 = X [ 205ULL ] * t1873 ; t1209 [
164ULL ] = - ( ( ( real_T ) ( M [ 166ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 /
( X [ 179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) ) * ( U_idx_1 / ( X [ 179ULL
] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) ) * ( - X [ 172ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( - X [ 172ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_381 ) ; t1209 [ 165ULL ] = - ( ( (
real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1977 / ( X [ 201ULL ] ==
0.0 ? 1.0E-16 : X [ 201ULL ] ) ) * ( t1977 / ( X [ 201ULL ] == 0.0 ? 1.0E-16
: X [ 201ULL ] ) ) * ( - X [ 172ULL ] / 0.64 / ( t1870 == 0.0 ? 1.0E-16 :
t1870 ) ) * ( - X [ 172ULL ] / 0.64 / ( t1870 == 0.0 ? 1.0E-16 : t1870 ) ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_384 ) ; U_idx_1 = X [ 213ULL ] +
t1885 ; U_idx_8 = t1885 - X [ 213ULL ] ; t1209 [ 166ULL ] = - ( U_idx_1 / 2.0
* t1791 - U_idx_8 / 2.0 * X [ 212ULL ] ) / 365.59674280784293 ; t4002 = X [
213ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ;
t3992 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 - X [
213ULL ] ; t1209 [ 167ULL ] = - ( t4002 / 2.0 * X [ 209ULL ] - t3992 / 2.0 *
X [ 217ULL ] ) ; t3655 = X [ 213ULL ] + t1876 ; t3906 = t1876 - X [ 213ULL ]
; t1209 [ 168ULL ] = - ( t3655 / 2.0 * X [ 208ULL ] - t3906 / 2.0 * X [
216ULL ] ) ; U_idx_2 = 148.401051922146 ; t1209 [ 169ULL ] = U_idx_2 /
461.523 / 43.3158175294914 + piece232 * 0.5 / 461.523 / 43.3158175294914 ;
t1209 [ 170ULL ] = X [ 220ULL ] * t1892 / 461.523 ; t1209 [ 171ULL ] = X [
210ULL ] * t1883 ; U_idx_0 = 62.328441807301317 ; t1209 [ 172ULL ] = U_idx_0
/ 259.836612622973 + piece232 * 0.21 / 259.836612622973 ; t3908 = t1892 *
293.15 ; t1209 [ 173ULL ] = - 304.06022922571 - ( ( ( real_T ) ( M [ 169ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t3908 / 1.01325 ) * ( t3908 / 1.01325 ) * ( X [
213ULL ] / 0.0019634954084936209 ) * ( X [ 213ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + ( ( ( - t1889 - t1891 ) * 304.06022922571 +
t1889 * 2537.56068088674 ) + t1891 * 266.413508632715 ) ) ; t1209 [ 174ULL ]
= - t1889 ; t1209 [ 175ULL ] = - t1891 ; t3908 = - X [ 213ULL ] + t1885 ;
t3910 = t1885 - ( - X [ 213ULL ] ) ; t1209 [ 176ULL ] = - ( t3908 / 2.0 *
zc_int82 - t3910 / 2.0 * X [ 229ULL ] ) / 365.59674280784293 ; t3672 = - X [
213ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 ;
piece214 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Air_Intake_convectio1 -
( - X [ 213ULL ] ) ; t1209 [ 177ULL ] = - ( t3672 / 2.0 * X [ 209ULL ] -
piece214 / 2.0 * X [ 231ULL ] ) ; t3674 = - X [ 213ULL ] + t1876 ; piece218 =
t1876 - ( - X [ 213ULL ] ) ; t1209 [ 178ULL ] = - ( t3674 / 2.0 * X [ 208ULL
] - piece218 / 2.0 * X [ 230ULL ] ) ; t1209 [ 179ULL ] = - ( U_idx_1 / 2.0 *
( ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3391 / ( X [ 31ULL ]
== 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( t3391 / ( X [ 31ULL ] == 0.0 ? 1.0E-16
: X [ 31ULL ] ) ) * ( X [ 213ULL ] / 0.0019634954084936209 ) * ( X [ 213ULL ]
/ 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2353 ) - U_idx_8 /
2.0 * X [ 229ULL ] ) ; t1209 [ 180ULL ] = - ( t4002 / 2.0 * X [ 223ULL ] -
t3992 / 2.0 * X [ 231ULL ] ) ; t1209 [ 181ULL ] = - ( t3655 / 2.0 * X [
222ULL ] - t3906 / 2.0 * X [ 230ULL ] ) ; t1209 [ 182ULL ] = t1843 ; t1209 [
183ULL ] = 979.36765375297466 + t1895 / 3.4930368471842854 ; t1209 [ 184ULL ]
= - 979.36765375297466 + t2087 / 3.4930368471842854 ; t1209 [ 185ULL ] =
zc_int94 / 1.0413512978067061 ; t1209 [ 186ULL ] = t1662 ; t1209 [ 187ULL ] =
- ( t3908 / 2.0 * ( ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3391 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( t3391 / ( X [
31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( - X [ 213ULL ] /
0.0019634954084936209 ) * ( - X [ 213ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2353 ) - t3910 / 2.0 * X [ 240ULL ] ) ; t1209 [
188ULL ] = - ( t3672 / 2.0 * X [ 223ULL ] - piece214 / 2.0 * X [ 242ULL ] ) ;
t1209 [ 189ULL ] = - ( t3674 / 2.0 * X [ 222ULL ] - piece218 / 2.0 * X [
241ULL ] ) ; t1209 [ 190ULL ] = - ( ( X [ 244ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co2 ) / 2.0 * ( (
( real_T ) ( M [ 176ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_9 / ( X [ 31ULL ] ==
0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( U_idx_9 / ( X [ 31ULL ] == 0.0 ? 1.0E-16
: X [ 31ULL ] ) ) * ( X [ 244ULL ] / 0.0019634954084936209 ) * ( X [ 244ULL ]
/ 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2354 ) - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co2 - X [ 244ULL
] ) / 2.0 * X [ 243ULL ] ) ; t1209 [ 191ULL ] = - ( ( X [ 244ULL ] + t1919 )
/ 2.0 * X [ 234ULL ] - ( t1919 - X [ 244ULL ] ) / 2.0 * X [ 248ULL ] ) ;
t1209 [ 192ULL ] = - ( ( X [ 244ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co0 ) / 2.0 * X [
233ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co0
- X [ 244ULL ] ) / 2.0 * X [ 247ULL ] ) ; t1209 [ 193ULL ] = ( X [ 236ULL ] *
t1914 / 461.523 - t1918 * X [ 34ULL ] ) / 0.64309276860371423 ; t1209 [
194ULL ] = X [ 238ULL ] * t1914 / 461.523 ; t1209 [ 195ULL ] = X [ 235ULL ] *
t1916 ; t1209 [ 196ULL ] = X [ 237ULL ] * t1914 / 259.836612622973 /
1.1422643670118826 ; t1209 [ 197ULL ] = - ( ( ( real_T ) ( M [ 177ULL ] != 0
) * 2.0 - 1.0 ) * ( t2007 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) )
* ( t2007 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( - X [ 213ULL
] / 0.0019634954084936209 ) * ( - X [ 213ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + t1926 ) ; t1209 [ 198ULL ] = - t1912 ; t1209 [
199ULL ] = - t1913 ; t1209 [ 200ULL ] = - ( ( ( real_T ) ( M [ 177ULL ] != 0
) * 2.0 - 1.0 ) * ( t2007 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) )
* ( t2007 / ( X [ 31ULL ] == 0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( X [ 244ULL ]
/ 0.0019634954084936209 ) * ( X [ 244ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1926 ) ; t1209 [ 201ULL ] = - t1912 ; t1209 [ 202ULL
] = - t1913 ; t1209 [ 203ULL ] = - t1599_idx_0 ; t1209 [ 204ULL ] = 0.0 ;
t1209 [ 205ULL ] = U_idx_4 * t1725 ; t1209 [ 206ULL ] = - ( ( - X [ 186ULL ]
+ intrm_sf_mf_549 ) / 2.0 * t1849 - ( intrm_sf_mf_549 - ( - X [ 186ULL ] ) )
/ 2.0 * X [ 267ULL ] ) ; t1209 [ 207ULL ] = - ( ( - X [ 186ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 ) / 2.0 * X [
162ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1
- ( - X [ 186ULL ] ) ) / 2.0 * X [ 269ULL ] ) ; t1209 [ 208ULL ] = - ( ( - X
[ 186ULL ] + intrm_sf_mf_536 ) / 2.0 * X [ 161ULL ] - ( intrm_sf_mf_536 - ( -
X [ 186ULL ] ) ) / 2.0 * X [ 268ULL ] ) ; t1209 [ 209ULL ] = - ( ( X [ 263ULL
] + t1966 ) / 2.0 * zc_int103 - ( t1966 - X [ 263ULL ] ) / 2.0 * X [ 270ULL ]
) ; t1209 [ 210ULL ] = - ( ( X [ 263ULL ] + t1965 ) / 2.0 * X [ 253ULL ] - (
t1965 - X [ 263ULL ] ) / 2.0 * X [ 274ULL ] ) ; t1209 [ 211ULL ] = - ( ( X [
263ULL ] + t1962 ) / 2.0 * X [ 252ULL ] - ( t1962 - X [ 263ULL ] ) / 2.0 * X
[ 273ULL ] ) ; t1209 [ 212ULL ] = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond + intrm_sf_mf_558 )
* 0.001 ) / 1.8850371198102225E-5 ; t1209 [ 213ULL ] = - ( t2916 /
0.0019634954084936209 * 0.00031622776601683789 + t2356 ) ; t1209 [ 214ULL ] =
- ( t2931 / 0.0019634954084936209 * 0.00031622776601683789 + t2357 ) ; t1209
[ 215ULL ] = t1820 ; t1209 [ 216ULL ] = t108 ; U_idx_1 = X [ 261ULL ] * t1934
; t1209 [ 217ULL ] = - ( ( ( real_T ) ( M [ 185ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_1 / ( X [ 262ULL ] == 0.0 ? 1.0E-16 : X [ 262ULL ] ) ) * ( U_idx_1 / (
X [ 262ULL ] == 0.0 ? 1.0E-16 : X [ 262ULL ] ) ) * ( - X [ 186ULL ] /
0.0019634954084936209 ) * ( - X [ 186ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_583 ) ; U_idx_1 = X [ 264ULL ] * t1934 ;
t1209 [ 218ULL ] = - ( ( ( real_T ) ( M [ 186ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_1 / ( X [ 265ULL ] == 0.0 ? 1.0E-16 : X [ 265ULL ] ) ) * ( U_idx_1 / (
X [ 265ULL ] == 0.0 ? 1.0E-16 : X [ 265ULL ] ) ) * ( X [ 263ULL ] /
0.0019634954084936209 ) * ( X [ 263ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_538 ) ; t1209 [ 219ULL ] = ( X [ 257ULL ]
* t1934 / 461.523 - t1957 * X [ 37ULL ] ) / 0.64309276860371423 ; t1209 [
220ULL ] = X [ 259ULL ] * t1934 / 461.523 ; t1209 [ 221ULL ] = X [ 256ULL ] *
t1956 ; t1209 [ 222ULL ] = X [ 258ULL ] * t1934 / 4124.48151675695 ; t1209 [
223ULL ] = 0.0 ; t1209 [ 224ULL ] = - ( ( ( real_T ) ( M [ 187ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2028 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * (
t2028 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * ( - X [ 186ULL ] /
0.0019634954084936209 ) * ( - X [ 186ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1972 ) ; t1209 [ 225ULL ] = - t1932 ; t1209 [ 226ULL
] = - t1933 ; t1209 [ 227ULL ] = - ( ( ( real_T ) ( M [ 187ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2028 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * (
t2028 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * ( X [ 263ULL ] /
0.0019634954084936209 ) * ( X [ 263ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1972 ) ; t1209 [ 228ULL ] = - t1932 ; t1209 [ 229ULL
] = - t1933 ; t1209 [ 230ULL ] = - ( ( - X [ 263ULL ] + t2020 ) / 2.0 * t1935
- ( t2020 - ( - X [ 263ULL ] ) ) / 2.0 * X [ 281ULL ] ) ; t1209 [ 231ULL ] =
- ( ( - X [ 263ULL ] + t2016 ) / 2.0 * X [ 253ULL ] - ( t2016 - ( - X [
263ULL ] ) ) / 2.0 * X [ 283ULL ] ) ; t1209 [ 232ULL ] = - ( ( - X [ 263ULL ]
+ t2009 ) / 2.0 * X [ 252ULL ] - ( t2009 - ( - X [ 263ULL ] ) ) / 2.0 * X [
282ULL ] ) ; t1209 [ 233ULL ] = - ( ( X [ 277ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 ) / 2.0 *
zc_int135 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2
- X [ 277ULL ] ) / 2.0 * X [ 284ULL ] ) ; t1209 [ 234ULL ] = - ( ( X [ 277ULL
] + t2025 ) / 2.0 * X [ 67ULL ] - ( t2025 - X [ 277ULL ] ) / 2.0 * X [ 288ULL
] ) ; t1209 [ 235ULL ] = - ( ( X [ 277ULL ] + intrm_sf_mf_688 ) / 2.0 * X [
66ULL ] - ( intrm_sf_mf_688 - X [ 277ULL ] ) / 2.0 * X [ 287ULL ] ) ; t1209 [
236ULL ] = - ( ( t2013 + t2014 ) * 0.001 ) ; t1209 [ 237ULL ] = - ( t2961 /
0.32 * 0.00031622776601683789 + t2359 ) ; t1209 [ 238ULL ] = - ( U_idx_5 /
0.32 * 0.00031622776601683789 + t2360 ) ; t1209 [ 239ULL ] = zc_int88 ; t1209
[ 240ULL ] = t1828 ; U_idx_1 = X [ 275ULL ] * t1984 ; t1209 [ 241ULL ] = - (
( ( real_T ) ( M [ 194ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 276ULL ]
== 0.0 ? 1.0E-16 : X [ 276ULL ] ) ) * ( U_idx_1 / ( X [ 276ULL ] == 0.0 ?
1.0E-16 : X [ 276ULL ] ) ) * ( - X [ 263ULL ] / 0.32 ) * ( - X [ 263ULL ] /
0.32 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_715 ) ; U_idx_1 = X [
278ULL ] * t1984 ; t1209 [ 242ULL ] = - ( ( ( real_T ) ( M [ 195ULL ] != 0 )
* 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 279ULL ] == 0.0 ? 1.0E-16 : X [ 279ULL ] )
) * ( U_idx_1 / ( X [ 279ULL ] == 0.0 ? 1.0E-16 : X [ 279ULL ] ) ) * ( X [
277ULL ] / 0.32 ) * ( X [ 277ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_718 ) ; t1209 [ 243ULL ] = ( X [ 73ULL ] * t1984 / 461.523 -
t2012 * X [ 8ULL ] ) / 0.64309276860371423 ; t1209 [ 244ULL ] = X [ 76ULL ] *
t1984 / 461.523 ; t1209 [ 245ULL ] = X [ 74ULL ] * t2011 ; t1209 [ 246ULL ] =
X [ 75ULL ] * t1984 / 4124.48151675695 ; t1209 [ 247ULL ] = 0.0 ; t1209 [
248ULL ] = - ( ( ( real_T ) ( M [ 196ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2126 / (
X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) ) * ( t2126 / ( X [ 39ULL ] ==
0.0 ? 1.0E-16 : X [ 39ULL ] ) ) * ( - X [ 263ULL ] / 0.32 ) * ( - X [ 263ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2041 ) ; t1209 [ 249ULL ] = -
t1953 ; t1209 [ 250ULL ] = - t1980 ; t1209 [ 251ULL ] = - ( ( ( real_T ) ( M
[ 196ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2126 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 :
X [ 39ULL ] ) ) * ( t2126 / ( X [ 39ULL ] == 0.0 ? 1.0E-16 : X [ 39ULL ] ) )
* ( X [ 277ULL ] / 0.32 ) * ( X [ 277ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2041 ) ; t1209 [ 252ULL ] = - t1953 ; t1209 [ 253ULL
] = - t1980 ; t1209 [ 254ULL ] = - ( ( - X [ 277ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 ) / 2.0 *
t1941 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B2 - (
- X [ 277ULL ] ) ) / 2.0 * X [ 293ULL ] ) ; t1209 [ 255ULL ] = - ( ( - X [
277ULL ] + t2025 ) / 2.0 * X [ 67ULL ] - ( t2025 - ( - X [ 277ULL ] ) ) / 2.0
* X [ 295ULL ] ) ; t1209 [ 256ULL ] = - ( ( - X [ 277ULL ] + intrm_sf_mf_688
) / 2.0 * X [ 66ULL ] - ( intrm_sf_mf_688 - ( - X [ 277ULL ] ) ) / 2.0 * X [
294ULL ] ) ; t1209 [ 257ULL ] = - ( ( - X [ 134ULL ] + t2015 ) / 2.0 *
zc_int167 - ( t2015 - ( - X [ 134ULL ] ) ) / 2.0 * X [ 296ULL ] ) ; t1209 [
258ULL ] = - ( ( - X [ 134ULL ] + t1989 ) / 2.0 * X [ 114ULL ] - ( t1989 - (
- X [ 134ULL ] ) ) / 2.0 * X [ 298ULL ] ) ; t1209 [ 259ULL ] = - ( ( - X [
134ULL ] + t1766 ) / 2.0 * X [ 113ULL ] - ( t1766 - ( - X [ 134ULL ] ) ) /
2.0 * X [ 297ULL ] ) ; t1209 [ 260ULL ] = - ( ( t2073 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * 0.001 ) ; t1209
[ 261ULL ] = - ( t2990 / 0.32 * 0.00031622776601683789 + t2363 ) ; t1209 [
262ULL ] = - ( t3023 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_871 ) ;
t1209 [ 263ULL ] = t111 ; t1209 [ 264ULL ] = t112 ; U_idx_1 = X [ 289ULL ] *
t2049 ; t1209 [ 265ULL ] = - ( ( ( real_T ) ( M [ 202ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( X [ 290ULL ] == 0.0 ? 1.0E-16 : X [ 290ULL ] ) ) * (
U_idx_1 / ( X [ 290ULL ] == 0.0 ? 1.0E-16 : X [ 290ULL ] ) ) * ( - X [ 277ULL
] / 0.32 ) * ( - X [ 277ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2355
) ; U_idx_1 = X [ 291ULL ] * t2049 ; t1209 [ 266ULL ] = - ( ( ( real_T ) ( M
[ 203ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 292ULL ] == 0.0 ? 1.0E-16
: X [ 292ULL ] ) ) * ( U_idx_1 / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL
] ) ) * ( - X [ 134ULL ] / 0.32 ) * ( - X [ 134ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2358 ) ; t1209 [ 267ULL ] = ( X [ 79ULL ] * t2049 /
461.523 - t2072 * X [ 11ULL ] ) / 0.64309276860371423 ; t1209 [ 268ULL ] = X
[ 81ULL ] * t2049 / 461.523 ; t1209 [ 269ULL ] = X [ 77ULL ] * t2071 ; t1209
[ 270ULL ] = X [ 80ULL ] * t2049 / 4124.48151675695 ; t1209 [ 271ULL ] = 0.0
; t1209 [ 272ULL ] = - ( ( ( real_T ) ( M [ 204ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2224 / ( X [ 40ULL ] == 0.0 ? 1.0E-16 : X [ 40ULL ] ) ) * ( t2224 / ( X [
40ULL ] == 0.0 ? 1.0E-16 : X [ 40ULL ] ) ) * ( - X [ 277ULL ] / 0.32 ) * ( -
X [ 277ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2076 ) ; t1209 [
273ULL ] = - intrm_sf_mf_740 ; t1209 [ 274ULL ] = - t2047 ; t1209 [ 275ULL ]
= - ( ( ( real_T ) ( M [ 204ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2224 / ( X [
40ULL ] == 0.0 ? 1.0E-16 : X [ 40ULL ] ) ) * ( t2224 / ( X [ 40ULL ] == 0.0 ?
1.0E-16 : X [ 40ULL ] ) ) * ( - X [ 134ULL ] / 0.32 ) * ( - X [ 134ULL ] /
0.32 ) / 2.0 * 9.999999999999999E-14 + t2076 ) ; t1209 [ 276ULL ] = -
intrm_sf_mf_740 ; t1209 [ 277ULL ] = - t2047 ; t1209 [ 278ULL ] = U_idx_6 *
zc_int200 ; t1209 [ 279ULL ] = - ( ( - X [ 244ULL ] + t2114 ) / 2.0 * ( ( (
real_T ) ( M [ 176ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_9 / ( X [ 31ULL ] ==
0.0 ? 1.0E-16 : X [ 31ULL ] ) ) * ( U_idx_9 / ( X [ 31ULL ] == 0.0 ? 1.0E-16
: X [ 31ULL ] ) ) * ( - X [ 244ULL ] / 0.0019634954084936209 ) * ( - X [
244ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2354 ) -
( t2114 - ( - X [ 244ULL ] ) ) / 2.0 * X [ 316ULL ] ) ; t1209 [ 280ULL ] = -
( ( - X [ 244ULL ] + t2099 ) / 2.0 * X [ 234ULL ] - ( t2099 - ( - X [ 244ULL
] ) ) / 2.0 * X [ 318ULL ] ) ; t1209 [ 281ULL ] = - ( ( - X [ 244ULL ] +
t2084 ) / 2.0 * X [ 233ULL ] - ( t2084 - ( - X [ 244ULL ] ) ) / 2.0 * X [
317ULL ] ) ; t1209 [ 282ULL ] = - ( ( X [ 312ULL ] + t2123 ) / 2.0 * t1952 -
( t2123 - X [ 312ULL ] ) / 2.0 * X [ 319ULL ] ) ; t1209 [ 283ULL ] = - ( ( X
[ 312ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1
) / 2.0 * X [ 302ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B1 - X [ 312ULL
] ) / 2.0 * X [ 323ULL ] ) ; t1209 [ 284ULL ] = - ( ( X [ 312ULL ] + t2118 )
/ 2.0 * X [ 301ULL ] - ( t2118 - X [ 312ULL ] ) / 2.0 * X [ 322ULL ] ) ;
t1209 [ 285ULL ] = - ( ( t2104 + t2111 ) * 0.001 ) / 1.8850371198102225E-5 ;
t1209 [ 286ULL ] = - ( t3051 / 0.0019634954084936209 * 0.00031622776601683789
+ intrm_sf_mf_995 ) ; t1209 [ 287ULL ] = - ( t3068 / 0.0019634954084936209 *
0.00031622776601683789 + t2305 ) ; t1209 [ 288ULL ] = t1936 ; t1209 [ 289ULL
] = zc_int218 ; U_idx_1 = X [ 310ULL ] * t2080 ; t1209 [ 290ULL ] = - ( ( (
real_T ) ( M [ 211ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 311ULL ] ==
0.0 ? 1.0E-16 : X [ 311ULL ] ) ) * ( U_idx_1 / ( X [ 311ULL ] == 0.0 ?
1.0E-16 : X [ 311ULL ] ) ) * ( - X [ 244ULL ] / 0.0019634954084936209 ) * ( -
X [ 244ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2361
) ; U_idx_1 = X [ 313ULL ] * t2080 ; t1209 [ 291ULL ] = - ( ( ( real_T ) ( M
[ 212ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 314ULL ] == 0.0 ? 1.0E-16
: X [ 314ULL ] ) ) * ( U_idx_1 / ( X [ 314ULL ] == 0.0 ? 1.0E-16 : X [ 314ULL
] ) ) * ( X [ 312ULL ] / 0.0019634954084936209 ) * ( X [ 312ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2362 ) ; t1209 [
292ULL ] = ( X [ 306ULL ] * t2080 / 461.523 - t2103 * X [ 43ULL ] ) /
0.64309276860371423 ; t1209 [ 293ULL ] = X [ 308ULL ] * t2080 / 461.523 ;
t1209 [ 294ULL ] = X [ 305ULL ] * t2101 ; t1209 [ 295ULL ] = X [ 307ULL ] *
t2080 / 259.836612622973 / 1.1422643670118826 ; t1209 [ 296ULL ] = 0.0 ;
t1209 [ 297ULL ] = - ( ( ( real_T ) ( M [ 213ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2320 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( t2320 / ( X [
44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( - X [ 244ULL ] /
0.0019634954084936209 ) * ( - X [ 244ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2138 ) ; t1209 [ 298ULL ] = - t2068 ; t1209 [ 299ULL
] = - t2079 ; t1209 [ 300ULL ] = - ( ( ( real_T ) ( M [ 213ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2320 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * (
t2320 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( X [ 312ULL ] /
0.0019634954084936209 ) * ( X [ 312ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2138 ) ; t1209 [ 301ULL ] = - t2068 ; t1209 [ 302ULL
] = - t2079 ; U_idx_1 = X [ 335ULL ] + t2145 ; U_idx_8 = t2145 - X [ 335ULL ]
; t1209 [ 303ULL ] = - ( U_idx_1 / 2.0 * zc_int233 - U_idx_8 / 2.0 * X [
334ULL ] ) / 365.59674280784293 ; t4002 = X [ 335ULL ] + t2143 ; t3992 =
t2143 - X [ 335ULL ] ; t1209 [ 304ULL ] = - ( t4002 / 2.0 * X [ 331ULL ] -
t3992 / 2.0 * X [ 339ULL ] ) ; t3655 = X [ 335ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 ; t3906 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 - X [ 335ULL
] ; t1209 [ 305ULL ] = - ( t3655 / 2.0 * X [ 330ULL ] - t3906 / 2.0 * X [
338ULL ] ) ; t1209 [ 306ULL ] = U_idx_2 / 461.523 / 43.3158175294914 + t1900
* 0.5 / 461.523 / 43.3158175294914 ; t1209 [ 307ULL ] = X [ 342ULL ] * t2150
/ 461.523 ; t1209 [ 308ULL ] = X [ 332ULL ] * intrm_sf_mf_1009 ; t1209 [
309ULL ] = U_idx_0 / 259.836612622973 + t1900 * 0.21 / 259.836612622973 ;
U_idx_2 = t2150 * 293.15 ; t1209 [ 310ULL ] = - 304.06022922571 - ( ( (
real_T ) ( M [ 214ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / 1.01325 ) * (
U_idx_2 / 1.01325 ) * ( X [ 335ULL ] / 0.0019634954084936209 ) * ( X [ 335ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + ( ( ( - t2147 -
t2148 ) * 304.06022922571 + t2147 * 2537.56068088674 ) + t2148 *
266.413508632715 ) ) ; t1209 [ 311ULL ] = - t2147 ; t1209 [ 312ULL ] = -
t2148 ; t1209 [ 313ULL ] = - ( ( X [ 347ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 *
t1987 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 - X
[ 347ULL ] ) / 2.0 * X [ 357ULL ] ) ; t1209 [ 314ULL ] = - ( ( X [ 347ULL ] +
intrm_sf_mf_1054 ) / 2.0 * X [ 327ULL ] - ( intrm_sf_mf_1054 - X [ 347ULL ] )
/ 2.0 * X [ 361ULL ] ) ; t1209 [ 315ULL ] = - ( ( X [ 347ULL ] + t2159 ) /
2.0 * X [ 326ULL ] - ( t2159 - X [ 347ULL ] ) / 2.0 * X [ 360ULL ] ) ; t1209
[ 316ULL ] = - ( ( - X [ 335ULL ] + t2191 ) / 2.0 * t1988 - ( t2191 - ( - X [
335ULL ] ) ) / 2.0 * X [ 362ULL ] ) ; t1209 [ 317ULL ] = - ( ( - X [ 335ULL ]
+ t2190 ) / 2.0 * X [ 346ULL ] - ( t2190 - ( - X [ 335ULL ] ) ) / 2.0 * X [
364ULL ] ) ; t1209 [ 318ULL ] = - ( ( - X [ 335ULL ] + t2189 ) / 2.0 * X [
345ULL ] - ( t2189 - ( - X [ 335ULL ] ) ) / 2.0 * X [ 363ULL ] ) ; t1209 [
319ULL ] = - ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond +
intrm_sf_mf_1065 ) * 0.001 ) - - 0.92095788639984788 ; t1209 [ 320ULL ] = - (
t3098 / 0.0019634954084936209 * 0.00031622776601683789 + t2312 ) ; t1209 [
321ULL ] = - ( t3116 / 0.0019634954084936209 * 0.00031622776601683789 + t2313
) ; t1209 [ 322ULL ] = t115 ; t1209 [ 323ULL ] = t116 ; U_idx_2 = X [ 348ULL
] * t2154 ; t1209 [ 324ULL ] = - ( ( ( real_T ) ( M [ 4ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_2 / ( X [ 349ULL ] == 0.0 ? 1.0E-16 : X [ 349ULL ] ) ) * (
U_idx_2 / ( X [ 349ULL ] == 0.0 ? 1.0E-16 : X [ 349ULL ] ) ) * ( X [ 347ULL ]
/ 0.0019634954084936209 ) * ( X [ 347ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2179 ) ; U_idx_2 = X [ 352ULL ] * t2154 ; t1209 [
325ULL ] = - ( ( ( real_T ) ( M [ 5ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / (
X [ 353ULL ] == 0.0 ? 1.0E-16 : X [ 353ULL ] ) ) * ( U_idx_2 / ( X [ 353ULL ]
== 0.0 ? 1.0E-16 : X [ 353ULL ] ) ) * ( - X [ 335ULL ] /
0.0019634954084936209 ) * ( - X [ 335ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2184 ) ; t1209 [ 326ULL ] = ( X [ 355ULL ] * t2154 /
461.523 - t2176 * X [ 47ULL ] ) / 0.64309276860371423 ; t1209 [ 327ULL ] = X
[ 350ULL ] * t2154 / 461.523 ; t1209 [ 328ULL ] = X [ 354ULL ] * t2175 ;
t1209 [ 329ULL ] = X [ 351ULL ] * t2154 / 259.836612622973 /
1.1422643670118826 ; t1209 [ 330ULL ] = - ( ( ( real_T ) ( M [ 6ULL ] != 0 )
* 2.0 - 1.0 ) * ( t2417 / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) ) *
( t2417 / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) ) * ( X [ 347ULL ] /
0.0019634954084936209 ) * ( X [ 347ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2197 ) ; t1209 [ 331ULL ] = - t2152 ; t1209 [ 332ULL
] = - t2153 ; t1209 [ 333ULL ] = - ( ( ( real_T ) ( M [ 6ULL ] != 0 ) * 2.0 -
1.0 ) * ( t2417 / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) ) * ( t2417
/ ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) ) * ( - X [ 335ULL ] /
0.0019634954084936209 ) * ( - X [ 335ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2197 ) ; t1209 [ 334ULL ] = - t2152 ; t1209 [ 335ULL
] = - t2153 ; t1209 [ 336ULL ] = - ( U_idx_1 / 2.0 * zc_int262 - U_idx_8 /
2.0 * X [ 371ULL ] ) ; t1209 [ 337ULL ] = - ( t4002 / 2.0 * X [ 346ULL ] -
t3992 / 2.0 * X [ 367ULL ] ) ; t1209 [ 338ULL ] = - ( t3655 / 2.0 * X [
345ULL ] - t3906 / 2.0 * X [ 368ULL ] ) ; t1209 [ 339ULL ] = - ( ( - X [
335ULL ] + t2145 ) / 2.0 * t1994 - ( t2145 - ( - X [ 335ULL ] ) ) / 2.0 * X [
371ULL ] ) / 365.59674280784293 ; t1209 [ 340ULL ] = - ( ( - X [ 335ULL ] +
t2143 ) / 2.0 * X [ 331ULL ] - ( t2143 - ( - X [ 335ULL ] ) ) / 2.0 * X [
367ULL ] ) ; t1209 [ 341ULL ] = - ( ( - X [ 335ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0 ) / 2.0 * X [
330ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Environment_convecti0
- ( - X [ 335ULL ] ) ) / 2.0 * X [ 368ULL ] ) ; t1209 [ 342ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_unchoke ; t1209 [
343ULL ] = - ( intrm_sf_mf_1188 - t2208 ) ; U_idx_1 = X [ 369ULL ] * t2204 ;
t1209 [ 344ULL ] = - ( ( ( real_T ) ( M [ 11ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_1 / ( t2151 == 0.0 ? 1.0E-16 : t2151 ) ) * ( U_idx_1 / ( t2151 == 0.0 ?
1.0E-16 : t2151 ) ) * ( X [ 335ULL ] / 0.64 / 0.0019634954084936209 ) * ( X [
335ULL ] / 0.64 / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t2186 ) ; U_idx_1 = X [ 370ULL ] * t2204 ; t1209 [ 345ULL ] = - ( ( ( real_T
) ( M [ 12ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / 1.01325 ) * ( U_idx_1 /
1.01325 ) * ( X [ 335ULL ] / 0.64 / 0.0019634954084936209 ) * ( X [ 335ULL ]
/ 0.64 / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2304 ) /
1.0413512978067061 ; t1209 [ 346ULL ] = - ( ( ( real_T ) ( M [ 14ULL ] != 0 )
* 2.0 - 1.0 ) * ( t2505 / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL ] ) )
* ( t2505 / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL ] ) ) * ( X [ 335ULL
] / 0.64 / ( t2171 == 0.0 ? 1.0E-16 : t2171 ) ) * ( X [ 335ULL ] / 0.64 / (
t2171 == 0.0 ? 1.0E-16 : t2171 ) ) / 2.0 * 9.999999999999999E-14 + t2315 ) ;
t1209 [ 347ULL ] = - ( ( - X [ 312ULL ] + t2258 ) / 2.0 * zc_int276 - ( t2258
- ( - X [ 312ULL ] ) ) / 2.0 * X [ 378ULL ] ) ; t1209 [ 348ULL ] = - ( ( - X
[ 312ULL ] + t2257 ) / 2.0 * X [ 302ULL ] - ( t2257 - ( - X [ 312ULL ] ) ) /
2.0 * X [ 380ULL ] ) ; t1209 [ 349ULL ] = - ( ( - X [ 312ULL ] +
intrm_sf_mf_1235 ) / 2.0 * X [ 301ULL ] - ( intrm_sf_mf_1235 - ( - X [ 312ULL
] ) ) / 2.0 * X [ 379ULL ] ) ; t1209 [ 350ULL ] = - ( ( X [ 374ULL ] + t2262
) / 2.0 * intrm_sf_mf_1284 - ( t2262 - X [ 374ULL ] ) / 2.0 * X [ 381ULL ] )
; t1209 [ 351ULL ] = - ( ( X [ 374ULL ] + t2261 ) / 2.0 * X [ 71ULL ] - (
t2261 - X [ 374ULL ] ) / 2.0 * X [ 385ULL ] ) ; t1209 [ 352ULL ] = - ( ( X [
374ULL ] + intrm_sf_mf_1269 ) / 2.0 * X [ 70ULL ] - ( intrm_sf_mf_1269 - X [
374ULL ] ) / 2.0 * X [ 384ULL ] ) ; t1209 [ 353ULL ] = - ( ( t2254 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) * 0.001 ) ; t1209
[ 354ULL ] = - ( t3165 / 0.32 * 0.00031622776601683789 + t2119 ) ; t1209 [
355ULL ] = - ( t3185 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_1318 ) ;
t1209 [ 356ULL ] = t1944 ; t1209 [ 357ULL ] = t1946 ; U_idx_1 = X [ 372ULL ]
* t2212 ; t1209 [ 358ULL ] = - ( ( ( real_T ) ( M [ 21ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_1 / ( X [ 373ULL ] == 0.0 ? 1.0E-16 : X [ 373ULL ] ) ) * (
U_idx_1 / ( X [ 373ULL ] == 0.0 ? 1.0E-16 : X [ 373ULL ] ) ) * ( - X [ 312ULL
] / 0.32 ) * ( - X [ 312ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_934 ) ; U_idx_1 = X [ 375ULL ] * t2212 ; t1209 [ 359ULL ] = - ( (
( real_T ) ( M [ 22ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 376ULL ] ==
0.0 ? 1.0E-16 : X [ 376ULL ] ) ) * ( U_idx_1 / ( X [ 376ULL ] == 0.0 ?
1.0E-16 : X [ 376ULL ] ) ) * ( X [ 374ULL ] / 0.32 ) * ( X [ 374ULL ] / 0.32
) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1299 ) ; t1209 [ 360ULL ] = ( X
[ 83ULL ] * t2212 / 461.523 - t2253 * X [ 14ULL ] ) / 0.64309276860371423 ;
t1209 [ 361ULL ] = X [ 86ULL ] * t2212 / 461.523 ; t1209 [ 362ULL ] = X [
84ULL ] * t2252 ; t1209 [ 363ULL ] = X [ 85ULL ] * t2212 / 259.836612622973 /
1.1422643670118826 ; t1209 [ 364ULL ] = 0.0 ; t1209 [ 365ULL ] = - ( ( (
real_T ) ( M [ 23ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2548 / ( X [ 49ULL ] == 0.0
? 1.0E-16 : X [ 49ULL ] ) ) * ( t2548 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [
49ULL ] ) ) * ( - X [ 312ULL ] / 0.32 ) * ( - X [ 312ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2268 ) ; t1209 [ 366ULL ] = - t2207 ; t1209 [ 367ULL
] = - t2209 ; t1209 [ 368ULL ] = - ( ( ( real_T ) ( M [ 23ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2548 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ) * (
t2548 / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) ) * ( X [ 374ULL ] /
0.32 ) * ( X [ 374ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2268 ) ;
t1209 [ 369ULL ] = - t2207 ; t1209 [ 370ULL ] = - t2209 ; t1209 [ 371ULL ] =
- ( ( - X [ 374ULL ] + t2262 ) / 2.0 * t1992 - ( t2262 - ( - X [ 374ULL ] ) )
/ 2.0 * X [ 390ULL ] ) ; t1209 [ 372ULL ] = - ( ( - X [ 374ULL ] + t2261 ) /
2.0 * X [ 71ULL ] - ( t2261 - ( - X [ 374ULL ] ) ) / 2.0 * X [ 392ULL ] ) ;
t1209 [ 373ULL ] = - ( ( - X [ 374ULL ] + intrm_sf_mf_1269 ) / 2.0 * X [
70ULL ] - ( intrm_sf_mf_1269 - ( - X [ 374ULL ] ) ) / 2.0 * X [ 391ULL ] ) ;
t1209 [ 374ULL ] = - ( ( - X [ 347ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 *
zc_int309 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5
- ( - X [ 347ULL ] ) ) / 2.0 * X [ 393ULL ] ) ; t1209 [ 375ULL ] = - ( ( - X
[ 347ULL ] + t2221 ) / 2.0 * X [ 327ULL ] - ( t2221 - ( - X [ 347ULL ] ) ) /
2.0 * X [ 395ULL ] ) ; t1209 [ 376ULL ] = - ( ( - X [ 347ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3 ) / 2.0 * X [
326ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_3
- ( - X [ 347ULL ] ) ) / 2.0 * X [ 394ULL ] ) ; t1209 [ 377ULL ] = - ( (
t2297 + t2181 ) * 0.001 ) ; t1209 [ 378ULL ] = - ( t3079 / 0.32 *
0.00031622776601683789 + t2327 ) ; t1209 [ 379ULL ] = - ( t3231 / 0.32 *
0.00031622776601683789 + intrm_sf_mf_1452 ) ; t1209 [ 380ULL ] = t1949 ;
t1209 [ 381ULL ] = t1730 ; U_idx_1 = X [ 386ULL ] * t2273 ; t1209 [ 382ULL ]
= - ( ( ( real_T ) ( M [ 30ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [
387ULL ] == 0.0 ? 1.0E-16 : X [ 387ULL ] ) ) * ( U_idx_1 / ( X [ 387ULL ] ==
0.0 ? 1.0E-16 : X [ 387ULL ] ) ) * ( - X [ 374ULL ] / 0.32 ) * ( - X [ 374ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1428 ) ; U_idx_1 = X [
388ULL ] * t2273 ; t1209 [ 383ULL ] = - ( ( ( real_T ) ( M [ 31ULL ] != 0 ) *
2.0 - 1.0 ) * ( U_idx_1 / ( X [ 389ULL ] == 0.0 ? 1.0E-16 : X [ 389ULL ] ) )
* ( U_idx_1 / ( X [ 389ULL ] == 0.0 ? 1.0E-16 : X [ 389ULL ] ) ) * ( - X [
347ULL ] / 0.32 ) * ( - X [ 347ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t2323 ) ; t1209 [ 384ULL ] = ( X [ 88ULL ] * t2273 / 461.523 - t2295 * X [
17ULL ] ) / 0.64309276860371423 ; t1209 [ 385ULL ] = X [ 91ULL ] * t2273 /
461.523 ; t1209 [ 386ULL ] = X [ 89ULL ] * t2294 ; t1209 [ 387ULL ] = X [
90ULL ] * t2273 / 259.836612622973 / 1.1422643670118826 ; t1209 [ 388ULL ] =
0.0 ; t1209 [ 389ULL ] = - ( ( ( real_T ) ( M [ 32ULL ] != 0 ) * 2.0 - 1.0 )
* ( t2646 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) * ( t2646 / ( X
[ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) * ( - X [ 374ULL ] / 0.32 ) * (
- X [ 374ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2299 ) ; t1209 [
390ULL ] = - t2249 ; t1209 [ 391ULL ] = - t2272 ; t1209 [ 392ULL ] = - ( ( (
real_T ) ( M [ 32ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2646 / ( X [ 50ULL ] == 0.0
? 1.0E-16 : X [ 50ULL ] ) ) * ( t2646 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [
50ULL ] ) ) * ( - X [ 347ULL ] / 0.32 ) * ( - X [ 347ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2299 ) ; t1209 [ 393ULL ] = - t2249 ; t1209 [ 394ULL
] = - t2272 ; t1209 [ 395ULL ] = t122 ; t1209 [ 396ULL ] = - ( t2339 / ( X [
58ULL ] == 0.0 ? 1.0E-16 : X [ 58ULL ] ) * 1000.0 ) ; t1209 [ 397ULL ] = -
t1603_idx_0 ; t1209 [ 398ULL ] = 0.0 ; for ( b = 0 ; b < 399 ; b ++ ) { out .
mX [ b ] = t1209 [ b ] ; } ( void ) LC ; ( void ) t4098 ; return 0 ; }
