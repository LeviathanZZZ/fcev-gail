#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_f.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t4073 , NeDsMethodOutput * t4074 ) { ETTS0 an_efOut ;
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
mt_efOut ; ETTS0 nf_efOut ; ETTS0 nm_efOut ; ETTS0 nq_efOut ; ETTS0 og_efOut
; ETTS0 op_efOut ; ETTS0 pc_efOut ; ETTS0 pd_efOut ; ETTS0 pj_efOut ; ETTS0
po_efOut ; ETTS0 ps_efOut ; ETTS0 q_efOut ; ETTS0 qe_efOut ; ETTS0 qh_efOut ;
ETTS0 qi_efOut ; ETTS0 qk_efOut ; ETTS0 qn_efOut ; ETTS0 qr_efOut ; ETTS0
rf_efOut ; ETTS0 rm_efOut ; ETTS0 rq_efOut ; ETTS0 sg_efOut ; ETTS0 sp_efOut
; ETTS0 t20 ; ETTS0 t32 ; ETTS0 t59 ; ETTS0 t6 ; ETTS0 t62 ; ETTS0 t70 ;
ETTS0 t73 ; ETTS0 t75 ; ETTS0 t76 ; ETTS0 t89 ; ETTS0 t92 ; ETTS0 td_efOut ;
ETTS0 tl_efOut ; ETTS0 to_efOut ; ETTS0 ts_efOut ; ETTS0 ui_efOut ; ETTS0
ul_efOut ; ETTS0 un_efOut ; ETTS0 ur_efOut ; ETTS0 vm_efOut ; ETTS0 wl_efOut
; ETTS0 wp_efOut ; ETTS0 x_efOut ; ETTS0 xb_efOut ; ETTS0 xd_efOut ; ETTS0
xo_efOut ; ETTS0 xs_efOut ; ETTS0 yn_efOut ; ETTS0 yr_efOut ; PmRealVector
out ; real_T X [ 394 ] ; real_T t1195 [ 394 ] ; real_T nonscalar31 [ 5 ] ;
real_T nonscalar32 [ 3 ] ; real_T ab_efOut [ 1 ] ; real_T ac_efOut [ 1 ] ;
real_T ad_efOut [ 1 ] ; real_T ae_efOut [ 1 ] ; real_T af_efOut [ 1 ] ;
real_T ag_efOut [ 1 ] ; real_T ah_efOut [ 1 ] ; real_T ai_efOut [ 1 ] ;
real_T aj_efOut [ 1 ] ; real_T ak_efOut [ 1 ] ; real_T al_efOut [ 1 ] ;
real_T am_efOut [ 1 ] ; real_T ao_efOut [ 1 ] ; real_T ap_efOut [ 1 ] ;
real_T aq_efOut [ 1 ] ; real_T ar_efOut [ 1 ] ; real_T as_efOut [ 1 ] ;
real_T at_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T
bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T be_efOut [ 1 ] ; real_T
bg_efOut [ 1 ] ; real_T bh_efOut [ 1 ] ; real_T bi_efOut [ 1 ] ; real_T
bj_efOut [ 1 ] ; real_T bk_efOut [ 1 ] ; real_T bl_efOut [ 1 ] ; real_T
bn_efOut [ 1 ] ; real_T bo_efOut [ 1 ] ; real_T bp_efOut [ 1 ] ; real_T
br_efOut [ 1 ] ; real_T bs_efOut [ 1 ] ; real_T bt_efOut [ 1 ] ; real_T
cb_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ; real_T cd_efOut [ 1 ] ; real_T
cf_efOut [ 1 ] ; real_T ch_efOut [ 1 ] ; real_T ci_efOut [ 1 ] ; real_T
cl_efOut [ 1 ] ; real_T cm_efOut [ 1 ] ; real_T cn_efOut [ 1 ] ; real_T
co_efOut [ 1 ] ; real_T cq_efOut [ 1 ] ; real_T cs_efOut [ 1 ] ; real_T
d_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T
de_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T dg_efOut [ 1 ] ; real_T
dh_efOut [ 1 ] ; real_T di_efOut [ 1 ] ; real_T dj_efOut [ 1 ] ; real_T
dk_efOut [ 1 ] ; real_T dm_efOut [ 1 ] ; real_T dn_efOut [ 1 ] ; real_T
dp_efOut [ 1 ] ; real_T dq_efOut [ 1 ] ; real_T dr_efOut [ 1 ] ; real_T
dt_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T ed_efOut [ 1 ] ; real_T
ee_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T eg_efOut [ 1 ] ; real_T
eh_efOut [ 1 ] ; real_T ej_efOut [ 1 ] ; real_T ek_efOut [ 1 ] ; real_T
el_efOut [ 1 ] ; real_T em_efOut [ 1 ] ; real_T eo_efOut [ 1 ] ; real_T
ep_efOut [ 1 ] ; real_T eq_efOut [ 1 ] ; real_T er_efOut [ 1 ] ; real_T
es_efOut [ 1 ] ; real_T et_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T
fe_efOut [ 1 ] ; real_T ff_efOut [ 1 ] ; real_T fg_efOut [ 1 ] ; real_T
fi_efOut [ 1 ] ; real_T fj_efOut [ 1 ] ; real_T fk_efOut [ 1 ] ; real_T
fl_efOut [ 1 ] ; real_T fn_efOut [ 1 ] ; real_T fo_efOut [ 1 ] ; real_T
fp_efOut [ 1 ] ; real_T fr_efOut [ 1 ] ; real_T fs_efOut [ 1 ] ; real_T
ft_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T gc_efOut [ 1 ] ; real_T
gd_efOut [ 1 ] ; real_T gf_efOut [ 1 ] ; real_T gg_efOut [ 1 ] ; real_T
gh_efOut [ 1 ] ; real_T gi_efOut [ 1 ] ; real_T gj_efOut [ 1 ] ; real_T
gl_efOut [ 1 ] ; real_T gm_efOut [ 1 ] ; real_T gn_efOut [ 1 ] ; real_T
go_efOut [ 1 ] ; real_T gq_efOut [ 1 ] ; real_T gr_efOut [ 1 ] ; real_T
gs_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T
hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T he_efOut [ 1 ] ; real_T
hf_efOut [ 1 ] ; real_T hg_efOut [ 1 ] ; real_T hh_efOut [ 1 ] ; real_T
hi_efOut [ 1 ] ; real_T hj_efOut [ 1 ] ; real_T hk_efOut [ 1 ] ; real_T
hm_efOut [ 1 ] ; real_T hn_efOut [ 1 ] ; real_T hp_efOut [ 1 ] ; real_T
hq_efOut [ 1 ] ; real_T hr_efOut [ 1 ] ; real_T ht_efOut [ 1 ] ; real_T
ib_efOut [ 1 ] ; real_T id_efOut [ 1 ] ; real_T ie_efOut [ 1 ] ; real_T
if_efOut [ 1 ] ; real_T ig_efOut [ 1 ] ; real_T ih_efOut [ 1 ] ; real_T
ii_efOut [ 1 ] ; real_T ij_efOut [ 1 ] ; real_T ik_efOut [ 1 ] ; real_T
il_efOut [ 1 ] ; real_T im_efOut [ 1 ] ; real_T io_efOut [ 1 ] ; real_T
ip_efOut [ 1 ] ; real_T iq_efOut [ 1 ] ; real_T ir_efOut [ 1 ] ; real_T
is_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
jc_efOut [ 1 ] ; real_T jd_efOut [ 1 ] ; real_T je_efOut [ 1 ] ; real_T
jf_efOut [ 1 ] ; real_T jg_efOut [ 1 ] ; real_T ji_efOut [ 1 ] ; real_T
jj_efOut [ 1 ] ; real_T jk_efOut [ 1 ] ; real_T jl_efOut [ 1 ] ; real_T
jn_efOut [ 1 ] ; real_T jo_efOut [ 1 ] ; real_T jp_efOut [ 1 ] ; real_T
jr_efOut [ 1 ] ; real_T js_efOut [ 1 ] ; real_T jt_efOut [ 1 ] ; real_T
kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T
ke_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T kg_efOut [ 1 ] ; real_T
kh_efOut [ 1 ] ; real_T ki_efOut [ 1 ] ; real_T kj_efOut [ 1 ] ; real_T
kk_efOut [ 1 ] ; real_T kl_efOut [ 1 ] ; real_T km_efOut [ 1 ] ; real_T
kn_efOut [ 1 ] ; real_T ko_efOut [ 1 ] ; real_T kq_efOut [ 1 ] ; real_T
kr_efOut [ 1 ] ; real_T ks_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T
lc_efOut [ 1 ] ; real_T ld_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T
lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T lh_efOut [ 1 ] ; real_T
li_efOut [ 1 ] ; real_T lj_efOut [ 1 ] ; real_T lk_efOut [ 1 ] ; real_T
ll_efOut [ 1 ] ; real_T lm_efOut [ 1 ] ; real_T ln_efOut [ 1 ] ; real_T
lp_efOut [ 1 ] ; real_T lq_efOut [ 1 ] ; real_T lr_efOut [ 1 ] ; real_T
mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T
mf_efOut [ 1 ] ; real_T mg_efOut [ 1 ] ; real_T mh_efOut [ 1 ] ; real_T
mi_efOut [ 1 ] ; real_T mj_efOut [ 1 ] ; real_T mk_efOut [ 1 ] ; real_T
ml_efOut [ 1 ] ; real_T mm_efOut [ 1 ] ; real_T mo_efOut [ 1 ] ; real_T
mp_efOut [ 1 ] ; real_T mq_efOut [ 1 ] ; real_T ms_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T
nd_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T
nh_efOut [ 1 ] ; real_T ni_efOut [ 1 ] ; real_T nj_efOut [ 1 ] ; real_T
nk_efOut [ 1 ] ; real_T nl_efOut [ 1 ] ; real_T nn_efOut [ 1 ] ; real_T
no_efOut [ 1 ] ; real_T np_efOut [ 1 ] ; real_T nr_efOut [ 1 ] ; real_T
ns_efOut [ 1 ] ; real_T nt_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T
oe_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T oh_efOut [ 1 ] ; real_T
oi_efOut [ 1 ] ; real_T oj_efOut [ 1 ] ; real_T ok_efOut [ 1 ] ; real_T
ol_efOut [ 1 ] ; real_T om_efOut [ 1 ] ; real_T on_efOut [ 1 ] ; real_T
oo_efOut [ 1 ] ; real_T oq_efOut [ 1 ] ; real_T or_efOut [ 1 ] ; real_T
os_efOut [ 1 ] ; real_T ot_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T
pb_efOut [ 1 ] ; real_T pe_efOut [ 1 ] ; real_T pf_efOut [ 1 ] ; real_T
pg_efOut [ 1 ] ; real_T ph_efOut [ 1 ] ; real_T pi_efOut [ 1 ] ; real_T
pk_efOut [ 1 ] ; real_T pl_efOut [ 1 ] ; real_T pm_efOut [ 1 ] ; real_T
pn_efOut [ 1 ] ; real_T pp_efOut [ 1 ] ; real_T pq_efOut [ 1 ] ; real_T
pr_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T
qd_efOut [ 1 ] ; real_T qf_efOut [ 1 ] ; real_T qg_efOut [ 1 ] ; real_T
qj_efOut [ 1 ] ; real_T ql_efOut [ 1 ] ; real_T qm_efOut [ 1 ] ; real_T
qo_efOut [ 1 ] ; real_T qp_efOut [ 1 ] ; real_T qq_efOut [ 1 ] ; real_T
qs_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T
rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T re_efOut [ 1 ] ; real_T
rg_efOut [ 1 ] ; real_T rh_efOut [ 1 ] ; real_T ri_efOut [ 1 ] ; real_T
rj_efOut [ 1 ] ; real_T rk_efOut [ 1 ] ; real_T rl_efOut [ 1 ] ; real_T
rn_efOut [ 1 ] ; real_T ro_efOut [ 1 ] ; real_T rp_efOut [ 1 ] ; real_T
rr_efOut [ 1 ] ; real_T rs_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T
sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T sd_efOut [ 1 ] ; real_T
se_efOut [ 1 ] ; real_T sf_efOut [ 1 ] ; real_T sh_efOut [ 1 ] ; real_T
si_efOut [ 1 ] ; real_T sj_efOut [ 1 ] ; real_T sk_efOut [ 1 ] ; real_T
sl_efOut [ 1 ] ; real_T sm_efOut [ 1 ] ; real_T sn_efOut [ 1 ] ; real_T
so_efOut [ 1 ] ; real_T sq_efOut [ 1 ] ; real_T sr_efOut [ 1 ] ; real_T
ss_efOut [ 1 ] ; real_T t1187 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T tb_efOut
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
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_u_w ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4
; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_1009 ; real_T intrm_sf_mf_1010 ; real_T
intrm_sf_mf_1126 ; real_T intrm_sf_mf_1151 ; real_T intrm_sf_mf_1179 ; real_T
intrm_sf_mf_1284 ; real_T intrm_sf_mf_1318 ; real_T intrm_sf_mf_1381 ; real_T
intrm_sf_mf_1428 ; real_T intrm_sf_mf_1449 ; real_T intrm_sf_mf_151 ; real_T
intrm_sf_mf_160 ; real_T intrm_sf_mf_192 ; real_T intrm_sf_mf_201 ; real_T
intrm_sf_mf_325 ; real_T intrm_sf_mf_328 ; real_T intrm_sf_mf_385 ; real_T
intrm_sf_mf_390 ; real_T intrm_sf_mf_416 ; real_T intrm_sf_mf_536 ; real_T
intrm_sf_mf_549 ; real_T intrm_sf_mf_583 ; real_T intrm_sf_mf_608 ; real_T
intrm_sf_mf_664 ; real_T intrm_sf_mf_739 ; real_T intrm_sf_mf_850 ; real_T
intrm_sf_mf_853 ; real_T intrm_sf_mf_860 ; real_T intrm_sf_mf_871 ; real_T
intrm_sf_mf_934 ; real_T intrm_sf_mf_956 ; real_T intrm_sf_mf_995 ; real_T
piece14 ; real_T piece172 ; real_T piece232 ; real_T piece234 ; real_T
piece239 ; real_T piece250 ; real_T piece42 ; real_T t104 ; real_T t107 ;
real_T t109 ; real_T t111 ; real_T t112 ; real_T t121 ; real_T t1585_idx_0 ;
real_T t1586_idx_0 ; real_T t1593_idx_0 ; real_T t1595 ; real_T t1602 ;
real_T t1603 ; real_T t1607 ; real_T t1610 ; real_T t1611 ; real_T t1615 ;
real_T t1618 ; real_T t1623 ; real_T t1626 ; real_T t1627 ; real_T t1632 ;
real_T t1638 ; real_T t1650 ; real_T t1653 ; real_T t1665 ; real_T t1680 ;
real_T t1691 ; real_T t1692 ; real_T t1693 ; real_T t1694 ; real_T t1695 ;
real_T t1696 ; real_T t1697 ; real_T t1698 ; real_T t1699 ; real_T t1703 ;
real_T t1705 ; real_T t1706 ; real_T t1713 ; real_T t1714 ; real_T t1715 ;
real_T t1716 ; real_T t1718 ; real_T t1722 ; real_T t1723 ; real_T t1728 ;
real_T t1730 ; real_T t1731 ; real_T t1732 ; real_T t1733 ; real_T t1734 ;
real_T t1735 ; real_T t1736 ; real_T t1742 ; real_T t1745 ; real_T t1749 ;
real_T t1751 ; real_T t1754 ; real_T t1755 ; real_T t1756 ; real_T t1757 ;
real_T t1758 ; real_T t1760 ; real_T t1761 ; real_T t1762 ; real_T t1763 ;
real_T t1764 ; real_T t1765 ; real_T t1767 ; real_T t1768 ; real_T t1769 ;
real_T t1771 ; real_T t1772 ; real_T t1774 ; real_T t1775 ; real_T t1777 ;
real_T t1778 ; real_T t1780 ; real_T t1781 ; real_T t1782 ; real_T t1784 ;
real_T t1785 ; real_T t1786 ; real_T t1788 ; real_T t1790 ; real_T t1791 ;
real_T t1792 ; real_T t1797 ; real_T t1798 ; real_T t1799 ; real_T t1800 ;
real_T t1803 ; real_T t1804 ; real_T t1808 ; real_T t1810 ; real_T t1811 ;
real_T t1812 ; real_T t1813 ; real_T t1814 ; real_T t1815 ; real_T t1819 ;
real_T t1827 ; real_T t1829 ; real_T t1832 ; real_T t1833 ; real_T t1835 ;
real_T t1836 ; real_T t1837 ; real_T t1838 ; real_T t1839 ; real_T t1840 ;
real_T t1841 ; real_T t1843 ; real_T t1844 ; real_T t1846 ; real_T t1848 ;
real_T t1849 ; real_T t1852 ; real_T t1854 ; real_T t1855 ; real_T t1859 ;
real_T t1860 ; real_T t1861 ; real_T t1862 ; real_T t1864 ; real_T t1865 ;
real_T t1867 ; real_T t1868 ; real_T t1869 ; real_T t1870 ; real_T t1872 ;
real_T t1874 ; real_T t1879 ; real_T t1881 ; real_T t1882 ; real_T t1886 ;
real_T t1889 ; real_T t1891 ; real_T t1892 ; real_T t1893 ; real_T t1894 ;
real_T t1895 ; real_T t1896 ; real_T t1897 ; real_T t1899 ; real_T t1900 ;
real_T t1902 ; real_T t1903 ; real_T t1904 ; real_T t1905 ; real_T t1907 ;
real_T t1909 ; real_T t1910 ; real_T t1911 ; real_T t1912 ; real_T t1913 ;
real_T t1914 ; real_T t1915 ; real_T t1919 ; real_T t1922 ; real_T t1924 ;
real_T t1925 ; real_T t1928 ; real_T t1930 ; real_T t1931 ; real_T t1933 ;
real_T t1935 ; real_T t1936 ; real_T t1938 ; real_T t1939 ; real_T t1942 ;
real_T t1944 ; real_T t1945 ; real_T t1946 ; real_T t1947 ; real_T t1948 ;
real_T t1949 ; real_T t1950 ; real_T t1951 ; real_T t1954 ; real_T t1956 ;
real_T t1959 ; real_T t1963 ; real_T t1965 ; real_T t1966 ; real_T t1970 ;
real_T t1971 ; real_T t1972 ; real_T t1974 ; real_T t1975 ; real_T t1977 ;
real_T t1979 ; real_T t1981 ; real_T t1984 ; real_T t1986 ; real_T t1987 ;
real_T t1989 ; real_T t1990 ; real_T t1991 ; real_T t1992 ; real_T t1993 ;
real_T t1994 ; real_T t1999 ; real_T t2000 ; real_T t2002 ; real_T t2004 ;
real_T t2007 ; real_T t2008 ; real_T t2010 ; real_T t2011 ; real_T t2013 ;
real_T t2014 ; real_T t2019 ; real_T t2020 ; real_T t2024 ; real_T t2026 ;
real_T t2028 ; real_T t2029 ; real_T t2032 ; real_T t2034 ; real_T t2035 ;
real_T t2036 ; real_T t2038 ; real_T t2040 ; real_T t2041 ; real_T t2042 ;
real_T t2043 ; real_T t2045 ; real_T t2047 ; real_T t2050 ; real_T t2051 ;
real_T t2052 ; real_T t2053 ; real_T t2058 ; real_T t2059 ; real_T t2060 ;
real_T t2061 ; real_T t2068 ; real_T t2075 ; real_T t2077 ; real_T t2080 ;
real_T t2082 ; real_T t2083 ; real_T t2084 ; real_T t2088 ; real_T t2093 ;
real_T t2097 ; real_T t2098 ; real_T t2099 ; real_T t2100 ; real_T t2103 ;
real_T t2105 ; real_T t2106 ; real_T t2107 ; real_T t2108 ; real_T t2109 ;
real_T t2110 ; real_T t2111 ; real_T t2112 ; real_T t2117 ; real_T t2119 ;
real_T t2120 ; real_T t2122 ; real_T t2124 ; real_T t2126 ; real_T t2127 ;
real_T t2129 ; real_T t2130 ; real_T t2131 ; real_T t2132 ; real_T t2133 ;
real_T t2138 ; real_T t2141 ; real_T t2146 ; real_T t2148 ; real_T t2149 ;
real_T t2151 ; real_T t2154 ; real_T t2155 ; real_T t2160 ; real_T t2161 ;
real_T t2163 ; real_T t2166 ; real_T t2169 ; real_T t2170 ; real_T t2171 ;
real_T t2172 ; real_T t2173 ; real_T t2174 ; real_T t2175 ; real_T t2176 ;
real_T t2178 ; real_T t2181 ; real_T t2183 ; real_T t2184 ; real_T t2186 ;
real_T t2187 ; real_T t2188 ; real_T t2191 ; real_T t2197 ; real_T t2198 ;
real_T t2201 ; real_T t2203 ; real_T t2205 ; real_T t2206 ; real_T t2207 ;
real_T t2208 ; real_T t2209 ; real_T t2210 ; real_T t2215 ; real_T t2216 ;
real_T t2217 ; real_T t2218 ; real_T t2220 ; real_T t2222 ; real_T t2224 ;
real_T t2225 ; real_T t2228 ; real_T t2229 ; real_T t2231 ; real_T t2232 ;
real_T t2233 ; real_T t2234 ; real_T t2236 ; real_T t2237 ; real_T t2239 ;
real_T t2240 ; real_T t2241 ; real_T t2242 ; real_T t2243 ; real_T t2244 ;
real_T t2245 ; real_T t2246 ; real_T t2247 ; real_T t2249 ; real_T t2251 ;
real_T t2252 ; real_T t2253 ; real_T t2254 ; real_T t2255 ; real_T t2256 ;
real_T t2257 ; real_T t2258 ; real_T t2259 ; real_T t2261 ; real_T t2262 ;
real_T t2264 ; real_T t2266 ; real_T t2267 ; real_T t2268 ; real_T t2271 ;
real_T t2272 ; real_T t2273 ; real_T t2274 ; real_T t2276 ; real_T t2278 ;
real_T t2280 ; real_T t2283 ; real_T t2284 ; real_T t2286 ; real_T t2287 ;
real_T t2291 ; real_T t2292 ; real_T t2293 ; real_T t2294 ; real_T t2297 ;
real_T t2299 ; real_T t2300 ; real_T t2301 ; real_T t2302 ; real_T t2304 ;
real_T t2306 ; real_T t2311 ; real_T t2313 ; real_T t2316 ; real_T t2318 ;
real_T t2320 ; real_T t2321 ; real_T t2324 ; real_T t2325 ; real_T t2326 ;
real_T t2327 ; real_T t2328 ; real_T t2332 ; real_T t2333 ; real_T t2334 ;
real_T t2335 ; real_T t2336 ; real_T t2338 ; real_T t2340 ; real_T t2341 ;
real_T t2383 ; real_T t2392 ; real_T t2399 ; real_T t2401 ; real_T t2404 ;
real_T t2412 ; real_T t2488 ; real_T t2510 ; real_T t2514 ; real_T t2515 ;
real_T t2521 ; real_T t2525 ; real_T t2527 ; real_T t2529 ; real_T t2532 ;
real_T t2598 ; real_T t2619 ; real_T t2625 ; real_T t2627 ; real_T t2630 ;
real_T t2639 ; real_T t2863 ; real_T t2901 ; real_T t2916 ; real_T t2945 ;
real_T t2950 ; real_T t2958 ; real_T t2970 ; real_T t2977 ; real_T t2991 ;
real_T t3009 ; real_T t3015 ; real_T t3022 ; real_T t3025 ; real_T t3032 ;
real_T t3039 ; real_T t3047 ; real_T t3061 ; real_T t3073 ; real_T t3078 ;
real_T t3092 ; real_T t3108 ; real_T t3129 ; real_T t3142 ; real_T t3156 ;
real_T t3157 ; real_T t3173 ; real_T t3180 ; real_T t3187 ; real_T t3201 ;
real_T t3222 ; real_T t3235 ; real_T t3252 ; real_T t3256 ; real_T t3270 ;
real_T t3280 ; real_T t3311 ; real_T t3316 ; real_T t3356 ; real_T t3361 ;
real_T t3370 ; real_T t3373 ; real_T t3374 ; real_T t3375 ; real_T t3379 ;
real_T t3381 ; real_T t3409 ; real_T t3645 ; real_T t3647 ; real_T t3648 ;
real_T t3649 ; real_T t3650 ; real_T t3880 ; real_T t3883 ; real_T t3940 ;
real_T t3959 ; real_T t3967 ; real_T t4057 ; real_T t4072 ; real_T zc_int116
; real_T zc_int132 ; real_T zc_int160 ; real_T zc_int164 ; real_T zc_int191 ;
real_T zc_int232 ; real_T zc_int263 ; real_T zc_int265 ; real_T zc_int272 ;
real_T zc_int290 ; real_T zc_int305 ; real_T zc_int306 ; real_T zc_int32 ;
real_T zc_int328 ; real_T zc_int33 ; real_T zc_int34 ; real_T zc_int44 ;
real_T zc_int45 ; real_T zc_int46 ; real_T zc_int53 ; real_T zc_int77 ;
real_T zc_int78 ; real_T zc_int90 ; real_T zc_int97 ; size_t t1182 [ 1 ] ;
size_t t1185 [ 1 ] ; size_t t124 [ 1 ] ; size_t t752 [ 1 ] ; int32_T M [ 214
] ; int32_T b ; for ( b = 0 ; b < 214 ; b ++ ) { M [ b ] = t4073 -> mM . mX [
b ] ; } U_idx_1 = t4073 -> mU . mX [ 1 ] ; U_idx_2 = t4073 -> mU . mX [ 2 ] ;
U_idx_3 = t4073 -> mU . mX [ 3 ] ; U_idx_4 = t4073 -> mU . mX [ 4 ] ; U_idx_5
= t4073 -> mU . mX [ 5 ] ; U_idx_6 = t4073 -> mU . mX [ 6 ] ; U_idx_7 = t4073
-> mU . mX [ 7 ] ; U_idx_8 = t4073 -> mU . mX [ 8 ] ; U_idx_9 = t4073 -> mU .
mX [ 9 ] ; U_idx_10 = t4073 -> mU . mX [ 10 ] ; for ( b = 0 ; b < 394 ; b ++
) { X [ b ] = t4073 -> mX . mX [ b ] ; } out = t4074 -> mF ; nonscalar31 [ 0
] = 1.0 ; nonscalar31 [ 1 ] = 1.25 ; nonscalar31 [ 2 ] = 1.5 ; nonscalar31 [
3 ] = 1.75 ; nonscalar31 [ 4 ] = 2.0 ; nonscalar32 [ 0 ] = 0.0 ; nonscalar32
[ 1 ] = 188.49555921538757 ; nonscalar32 [ 2 ] = 376.99111843077515 ; t3940 =
( ( ( real_T ) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X
[ 51ULL ] < 0.0 ) * U_idx_1 ) - 0.9 ) / 0.099999999999999978 ; if ( ( real_T
) ( X [ 51ULL ] >= 0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] <
0.0 ) * U_idx_1 <= 0.9 ) { t3940 = 0.0 ; } else { t3940 = ( real_T ) ( X [
51ULL ] >= 0.0 ) * X [ 51ULL ] * 1000.0 + ( real_T ) ( X [ 51ULL ] < 0.0 ) *
U_idx_1 >= 1.0 ? 1.0 : t3940 * t3940 * 3.0 - t3940 * t3940 * t3940 * 2.0 ; }
t3883 = X [ 56ULL ] * 1.0E-9 + X [ 2ULL ] ; t3645 = ( ( X [ 2ULL ] * - 1.0E-6
+ X [ 56ULL ] * - 1.0000000000000011 ) + X [ 57ULL ] * - 1.0E-6 ) + X [ 3ULL
] ; if ( X [ 87ULL ] < 0.0 ) { t3647 = X [ 87ULL ] * 17.81 + 0.043 ; } else
if ( X [ 87ULL ] <= 1.0 ) { t3647 = ( ( X [ 87ULL ] * 17.81 + 0.043 ) - X [
87ULL ] * X [ 87ULL ] * 39.85 ) + X [ 87ULL ] * X [ 87ULL ] * X [ 87ULL ] *
36.0 ; } else { t3647 = ( X [ 87ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [
88ULL ] < 0.0 ) { t3649 = X [ 88ULL ] * 17.81 + 0.043 ; } else if ( X [ 88ULL
] <= 1.0 ) { t3649 = ( ( X [ 88ULL ] * 17.81 + 0.043 ) - X [ 88ULL ] * X [
88ULL ] * 39.85 ) + X [ 88ULL ] * X [ 88ULL ] * X [ 88ULL ] * 36.0 ; } else {
t3649 = ( X [ 88ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 57ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = - X [ 57ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 = 0.0 ; }
t1691 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 *
0.20177105219743391 / 192970.66424 ; if ( t3647 >= 0.0 ) { t3648 = t3647 *
t3647 * 0.0029 + t3647 * 0.05 ; } else { t3648 = t3647 * 0.05 ; } t3650 = ( X
[ 67ULL ] + X [ 73ULL ] ) / 2.0 ; t1595 = ( X [ 77ULL ] + X [ 82ULL ] ) / 2.0
; t1187 [ 0 ] = 343.15 ; t1182 [ 0 ] = 52ULL ; t124 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 =
efOut ; tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1187 [ 0 ] = b_efOut [ 0 ]
; t1603 = pmf_exp ( pmf_log ( t3650 ) - t1187 [ 0ULL ] ) ; t1611 = X [ 87ULL
] / ( t1603 == 0.0 ? 1.0E-16 : t1603 ) ; t1603 = pmf_exp ( pmf_log ( t1595 )
- t1187 [ 0ULL ] ) ; piece232 = X [ 88ULL ] / ( t1603 == 0.0 ? 1.0E-16 :
t1603 ) ; if ( t3650 > t1595 ) { zc_int191 = 4.0566516249873756E-6 ; t1692 =
( t3650 - t1595 ) * t3650 * t1611 * 1.58E-18 / ( zc_int191 == 0.0 ? 1.0E-16 :
zc_int191 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 =
4.0566516249873756E-6 ; t1692 = ( t3650 - t1595 ) * t1595 * piece232 *
1.58E-18 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ) ; } t3959 =
( ( ( t3647 * 1818.181818181818 - t3649 * 1818.181818181818 ) *
3.1649674241803613E-10 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 * t3648 /
96485.33212 ) + t1692 ) * 0.20177105219743391 ; t4057 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 *
0.022577863652674921 / 192970.66424 ; t3648 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 *
0.3583866814737065 / 385941.32848 ; t3647 = ( t3647 + t3649 ) / 2.0 ; if (
t3647 >= 1.0 ) { t3649 = t3647 * 0.005139 - 0.00326 ; } else { t3649 =
0.0018790000000000005 ; } t3647 = t3649 * 1.6283557743720771 ; t3649 =
0.000125 / ( t3647 == 0.0 ? 1.0E-16 : t3647 ) ; t1692 = t1603 * ( ( X [ 81ULL
] + X [ 86ULL ] ) / 2.0 ) ; t3647 = t1692 >= 1.0E-9 ? t1692 : 1.0E-6 ; t1603
= t3650 * ( ( X [ 70ULL ] + X [ 75ULL ] ) / 2.0 ) / 1.01325 ; if ( t1603 *
1.0E-5 >= 1.0E-9 ) { t1692 = t1603 * 1.0E-5 ; } else { t1692 = 1.0E-6 ; }
t1603 = t1595 * ( ( X [ 80ULL ] + X [ 85ULL ] ) / 2.0 ) / 1.01325 ; if (
t1603 * 1.0E-5 >= 1.0E-9 ) { t1602 = t1603 * 1.0E-5 ; } else { t1602 = 1.0E-6
; } t3650 = ( X [ 76ULL ] - t1611 ) * ( t3650 * 7.0000000000000007E-6 /
2853.1078474192841 ) / 0.00025 ; t1595 = ( piece232 - X [ 86ULL ] ) * ( t1595
* 7.0000000000000007E-6 / 2853.1078474192841 ) / 0.00025 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 >= 1.0 ) {
t1603 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ) *
0.052804248375117158 ; } else { t1603 = 0.0 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 <= 13986.0 )
{ t1607 = pmf_log ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 / 14000.0 ) ;
} else { t1607 = - 6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; } t3967 = t1607 * - 0.014785189545032806 ;
t1716 = pmf_sqrt ( t1602 ) * t1692 ; t1611 = pmf_log ( t1716 / ( t3647 == 0.0
? 1.0E-16 : t3647 ) ) * 0.014785189545032806 + 1.228891453185164 ; piece232 =
t3649 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 ;
t1611 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 * ( (
( t1611 - t1603 ) - piece232 * 0.01 ) - t3967 ) * 11.200000000000001 ; t1187
[ 0ULL ] = X [ 91ULL ] >= 0.0 ? 343.15 : X [ 13ULL ] ;
tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , & c_efOut .
mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = c_efOut ; tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = d_efOut [
0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 =
t1593_idx_0 ; t1187 [ 0ULL ] = X [ 93ULL ] >= 0.0 ? 343.15 : X [ 7ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = f_efOut [
0 ] ; t1692 = t1593_idx_0 ; t1187 [ 0ULL ] = X [ 95ULL ] >= 0.0 ? 343.15 : X
[ 13ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , &
g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = g_efOut ; tlu2_1d_linear_linear_value ( &
h_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = h_efOut [ 0 ] ; t1602 = t1593_idx_0 ; t1187 [ 0ULL ] = X [
99ULL ] >= 0.0 ? 343.15 : X [ 7ULL ] ; tlu2_linear_linear_prelookup ( &
i_efOut . mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = i_efOut ;
tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] ,
& t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = j_efOut [ 0 ] ; t1607 =
t1593_idx_0 ; t1610 = - X [ 91ULL ] + X [ 100ULL ] ; t1187 [ 0ULL ] = t1610
>= 0.0 ? 343.15 : X [ 13ULL ] ; tlu2_linear_linear_prelookup ( & k_efOut .
mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182
[ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = k_efOut ; tlu2_1d_linear_linear_value (
& l_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = l_efOut [ 0 ] ; t3880 = t1593_idx_0 ; t1615 = pmf_sqrt (
X [ 117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 ) ; t1618 = pmf_sqrt ( X
[ 117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 ) ; t1623 = pmf_sqrt ( X [
117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 ) ; if ( X [ 122ULL ] <= 0.0
) { t1626 = 0.0 ; } else { t1626 = X [ 122ULL ] >= 1.0 ? 1.0 : X [ 122ULL ] ;
} if ( X [ 123ULL ] <= 0.0 ) { t1693 = 0.0 ; } else { t1693 = X [ 123ULL ] >=
1.0 ? 1.0 : X [ 123ULL ] ; } t1694 = ( ( ( 1.0 - t1626 ) - t1693 ) *
296.802103844292 + t1626 * 461.523 ) + t1693 * 4124.48151675695 ; if ( X [
19ULL ] <= 0.0 ) { t1695 = 0.0 ; } else { t1695 = X [ 19ULL ] >= 1.0 ? 1.0 :
X [ 19ULL ] ; } if ( X [ 20ULL ] <= 0.0 ) { t1696 = 0.0 ; } else { t1696 = X
[ 20ULL ] >= 1.0 ? 1.0 : X [ 20ULL ] ; } t1697 = ( ( ( 1.0 - t1695 ) - t1696
) * 296.802103844292 + t1695 * 461.523 ) + t1696 * 4124.48151675695 ; t1698 =
( X [ 17ULL ] / ( X [ 18ULL ] == 0.0 ? 1.0E-16 : X [ 18ULL ] ) - X [ 130ULL ]
/ ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) ) * X [ 129ULL ] * t1697 /
7.8539816339744827E-5 ; if ( X [ 130ULL ] <= 216.59999999999997 ) { t1699 =
216.59999999999997 ; } else { t1699 = X [ 130ULL ] >= 623.15 ? 623.15 : X [
130ULL ] ; } intrm_sf_mf_1284 = t1699 * t1699 ; zc_int191 = ( ( (
1074.1165326382641 + t1699 * - 0.2214565261064495 ) + intrm_sf_mf_1284 *
0.00037212980109014541 ) * ( ( 1.0 - t1695 ) - t1696 ) + ( (
1479.6504774711011 + t1699 * 1.2002114337048222 ) + intrm_sf_mf_1284 * -
0.00038614513167823636 ) * t1695 ) + ( ( 12825.281119789837 + t1699 *
6.9647057412840034 ) + intrm_sf_mf_1284 * - 0.0070524868246844051 ) * t1696 ;
t1723 = zc_int191 - t1697 ; t1699 = zc_int191 / ( t1723 == 0.0 ? 1.0E-16 :
t1723 ) ; zc_int191 = pmf_sqrt ( t1698 * t1698 * 9.999999999999999E-14 + fabs
( X [ 130ULL ] * t1699 * t1697 ) * 1.0E-9 ) ; if ( X [ 132ULL ] <= 0.0 ) {
intrm_sf_mf_1284 = 0.0 ; } else { intrm_sf_mf_1284 = X [ 132ULL ] >= 1.0 ?
1.0 : X [ 132ULL ] ; } if ( X [ 133ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = X [
133ULL ] >= 1.0 ? 1.0 : X [ 133ULL ] ; } t1187 [ 0ULL ] = X [ 17ULL ] ;
tlu2_linear_nearest_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = m_efOut ; tlu2_1d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = n_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = o_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = p_efOut [ 0 ] ; t1703 =
( ( ( 1.0 - intrm_sf_mf_1284 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ) *
t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_1284 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ; t3009 = X [
131ULL ] * X [ 131ULL ] * t1699 ; t107 = - pmf_sqrt ( fabs ( t3009 / ( t1697
== 0.0 ? 1.0E-16 : t1697 ) / ( X [ 130ULL ] == 0.0 ? 1.0E-16 : X [ 130ULL ] )
) ) * 7.8539816339744827E-5 ; if ( t107 >= 0.0 ) { t1705 = t107 * 100000.0 ;
} else { t1705 = - t107 * 100000.0 ; } t1728 = t1703 * 7.8539816339744827E-5
; t1706 = t1705 * 0.01 / ( t1728 == 0.0 ? 1.0E-16 : t1728 ) ; t1730 = X [
17ULL ] * t1697 ; piece14 = X [ 18ULL ] / ( t1730 == 0.0 ? 1.0E-16 : t1730 )
; t1732 = piece14 * 1.5707963267948965E-8 ; zc_int290 = t107 * t1703 * 35.2 /
( t1732 == 0.0 ? 1.0E-16 : t1732 ) ; zc_int305 = t1706 >= 1.0 ? t1706 : 1.0 ;
t1733 = pmf_log10 ( 6.9 / ( zc_int305 == 0.0 ? 1.0E-16 : zc_int305 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int305 == 0.0 ? 1.0E-16 :
zc_int305 ) + 0.00017169489553429715 ) * 3.24 ; t1735 = piece14 *
1.2337005501361697E-10 ; t1705 = t107 * t1705 * ( 1.0 / ( t1733 == 0.0 ?
1.0E-16 : t1733 ) ) * 0.55 / ( t1735 == 0.0 ? 1.0E-16 : t1735 ) ; zc_int305 =
( t1706 - 2000.0 ) / 2000.0 ; zc_int34 = zc_int305 * zc_int305 * 3.0 -
zc_int305 * zc_int305 * zc_int305 * 2.0 ; if ( t1706 <= 2000.0 ) { zc_int305
= zc_int290 * 1.0E-5 ; } else if ( t1706 >= 4000.0 ) { zc_int305 = t1705 *
1.0E-5 ; } else { zc_int305 = ( ( 1.0 - zc_int34 ) * zc_int290 + t1705 *
zc_int34 ) * 1.0E-5 ; } zc_int191 = X [ 129ULL ] * zc_int191 /
7.8539816339744827E-5 * 0.00031622776601683789 + zc_int305 ; t1705 = X [
107ULL ] - X [ 18ULL ] ; zc_int290 = - ( ( X [ 17ULL ] / ( X [ 18ULL ] == 0.0
? 1.0E-16 : X [ 18ULL ] ) - X [ 134ULL ] / ( X [ 135ULL ] == 0.0 ? 1.0E-16 :
X [ 135ULL ] ) ) * X [ 117ULL ] * t1697 ) / 7.8539816339744827E-5 ; if ( X [
134ULL ] <= 216.59999999999997 ) { zc_int305 = 216.59999999999997 ; } else {
zc_int305 = X [ 134ULL ] >= 623.15 ? 623.15 : X [ 134ULL ] ; } t1632 =
zc_int305 * zc_int305 ; zc_int34 = ( ( ( 1074.1165326382641 + zc_int305 * -
0.2214565261064495 ) + t1632 * 0.00037212980109014541 ) * ( ( 1.0 - t1695 ) -
t1696 ) + ( ( 1479.6504774711011 + zc_int305 * 1.2002114337048222 ) + t1632 *
- 0.00038614513167823636 ) * t1695 ) + ( ( 12825.281119789837 + zc_int305 *
6.9647057412840034 ) + t1632 * - 0.0070524868246844051 ) * t1696 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = zc_int34 -
t1697 ; zc_int305 = zc_int34 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) ;
zc_int34 = pmf_sqrt ( zc_int290 * zc_int290 * 9.999999999999999E-14 + fabs (
X [ 134ULL ] * zc_int305 * t1697 ) * 1.0E-9 ) ; t3022 = X [ 135ULL ] * X [
135ULL ] * zc_int305 ; t1632 = - pmf_sqrt ( fabs ( t3022 / ( t1697 == 0.0 ?
1.0E-16 : t1697 ) / ( X [ 134ULL ] == 0.0 ? 1.0E-16 : X [ 134ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t1632 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch = t1632 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch = - t1632 *
100000.0 ; } t1713 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch * 0.01 / (
t1728 == 0.0 ? 1.0E-16 : t1728 ) ; t1714 = t1632 * t1703 * 35.2 / ( t1732 ==
0.0 ? 1.0E-16 : t1732 ) ; t1715 = t1713 >= 1.0 ? t1713 : 1.0 ; t1751 =
pmf_log10 ( 6.9 / ( t1715 == 0.0 ? 1.0E-16 : t1715 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t1715 == 0.0 ? 1.0E-16 : t1715 ) +
0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch = t1632 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch * ( 1.0 / (
t1751 == 0.0 ? 1.0E-16 : t1751 ) ) * 0.55 / ( t1735 == 0.0 ? 1.0E-16 : t1735
) ; t1715 = ( t1713 - 2000.0 ) / 2000.0 ; t3409 = t1715 * t1715 * 3.0 - t1715
* t1715 * t1715 * 2.0 ; if ( t1713 <= 2000.0 ) { t1715 = t1714 * 1.0E-5 ; }
else if ( t1713 >= 4000.0 ) { t1715 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch * 1.0E-5 ; }
else { t1715 = ( ( 1.0 - t3409 ) * t1714 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch * t3409 ) *
1.0E-5 ; } zc_int34 = - ( X [ 117ULL ] * zc_int34 ) / 7.8539816339744827E-5 *
0.00031622776601683789 + t1715 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch = X [ 126ULL
] - X [ 18ULL ] ; t1187 [ 0ULL ] = X [ 17ULL ] ; tlu2_linear_linear_prelookup
( & q_efOut . mField0 [ 0ULL ] , & q_efOut . mField1 [ 0ULL ] , & q_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t70 = q_efOut ;
tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] ,
& t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = r_efOut [ 0 ] ; t1714 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & s_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = s_efOut [
0 ] ; t1715 = t1593_idx_0 ; if ( 1.0 - X [ 19ULL ] >= 0.01 ) { t1718 = 1.0 -
X [ 19ULL ] ; } else if ( 1.0 - X [ 19ULL ] >= - 0.1 ) { t1718 = pmf_exp ( (
( 1.0 - X [ 19ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1718 =
1.6701700790245661E-7 ; } t3409 = X [ 20ULL ] / ( t1718 == 0.0 ? 1.0E-16 :
t1718 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & t_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [
0ULL ] ) ; t1593_idx_0 = t_efOut [ 0 ] ; t1722 = pmf_exp ( pmf_log ( X [
18ULL ] * 100000.0 ) - t1593_idx_0 ) ; if ( t1722 >= 1.0 ) { t1758 = ( t1722
- 1.0 ) * 461.523 + t3409 ; t1723 = t3409 / ( t1758 == 0.0 ? 1.0E-16 : t1758
) ; } else { t1723 = 1.0 ; } t1760 = t1723 * 0.01 ; t3409 = ( X [ 19ULL ] -
t1723 ) / ( t1760 == 0.0 ? 1.0E-16 : t1760 ) ; if ( X [ 19ULL ] - t1723 <=
0.0 ) { t3409 = 0.0 ; } else if ( X [ 19ULL ] - t1723 >= t1723 * 0.01 ) {
t3409 = X [ 19ULL ] - t1723 ; } else { t3409 = ( X [ 19ULL ] - t1723 ) * (
t3409 * t3409 * 3.0 - t3409 * t3409 * t3409 * 2.0 ) ; } piece14 = piece14 *
t3409 * 7.8539816339744827E-5 / 0.001 ; t3409 = ( t1714 - t1715 ) * piece14 ;
tlu2_1d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = u_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = v_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & w_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = w_efOut [ 0 ] ; t1715 =
( ( ( 1.0 - intrm_sf_mf_1284 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ) *
t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_1284 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ; t1723 = ( X
[ 110ULL ] - X [ 17ULL ] ) * ( t1715 * 0.031415926535897927 / 0.01 ) ; t3649
= ( X [ 129ULL ] - ( - X [ 117ULL ] ) ) / 2.0 ; if ( X [ 128ULL ] <= 0.0 ) {
t1731 = 0.0 ; } else { t1731 = X [ 128ULL ] >= 1.0 ? 1.0 : X [ 128ULL ] ; }
if ( X [ 127ULL ] <= 0.0 ) { t1733 = 0.0 ; } else { t1733 = X [ 127ULL ] >=
1.0 ? 1.0 : X [ 127ULL ] ; } t1734 = ( ( ( 1.0 - t1731 ) - t1733 ) *
296.802103844292 + t1731 * 461.523 ) + t1733 * 4124.48151675695 ; t1736 = X [
127ULL ] * 4124.48151675695 / ( t1734 == 0.0 ? 1.0E-16 : t1734 ) ; if ( t1736
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = 0.0 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = t1736 >=
1.0 ? 1.0 : t1736 ; } t1736 = X [ 128ULL ] * 461.523 / ( t1734 == 0.0 ?
1.0E-16 : t1734 ) ; if ( t1736 <= 0.0 ) { t1742 = 0.0 ; } else { t1742 =
t1736 >= 1.0 ? 1.0 : t1736 ; } t1187 [ 0ULL ] = X [ 125ULL ] ;
tlu2_linear_nearest_prelookup ( & x_efOut . mField0 [ 0ULL ] , & x_efOut .
mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t73 = x_efOut ; tlu2_1d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = y_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & ab_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ab_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & bb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL
] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = bb_efOut [ 0 ] ; t1768 =
( ( ( ( ( 1.0 - t1742 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * t1593_idx_0 +
t1585_idx_0 * t1742 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) + t1703 ) / 2.0 *
7.8539816339744827E-5 ; zc_int306 = - ( t3649 <= 0.0 ? t3649 : 0.0 ) * 0.01 /
( t1768 == 0.0 ? 1.0E-16 : t1768 ) ; t1736 = zc_int306 >= 0.0 ? zc_int306 : -
zc_int306 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 =
t1736 > 1000.0 ? t1736 : 1000.0 ; t1769 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) +
0.00017169489553429715 ) * 3.24 ; t1745 = 1.0 / ( t1769 == 0.0 ? 1.0E-16 :
t1769 ) ; tlu2_1d_linear_nearest_value ( & cb_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = cb_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & db_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = db_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & eb_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = eb_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = ( ( (
1.0 - intrm_sf_mf_1284 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ) *
t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_1284 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ;
tlu2_1d_linear_nearest_value ( & fb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = fb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = gb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = hb_efOut [ 0 ] ;
intrm_sf_mf_1284 = ( ( ( 1.0 - t1742 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * t1593_idx_0 +
t1585_idx_0 * t1742 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; zc_int78 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 +
intrm_sf_mf_1284 ; if ( ( pmf_pow ( zc_int78 / 2.0 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( t1745 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1774 = ( pmf_pow
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 +
intrm_sf_mf_1284 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1745 /
8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 - 1000.0 ) *
( t1745 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 +
intrm_sf_mf_1284 ) / 2.0 ) / ( t1774 == 0.0 ? 1.0E-16 : t1774 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 - 1000.0 ) *
( t1745 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 +
intrm_sf_mf_1284 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = ( t1736 -
2000.0 ) / 2000.0 ; t1745 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 * 2.0 ; if (
t1736 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = 3.66 ; }
else if ( t1736 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = ( 1.0 -
t1745 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 * t1745 ; }
t1781 = zc_int78 / 2.0 ; if ( t1736 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 *
0.031415926535897927 / 7.8539816339744827E-5 / ( t1781 == 0.0 ? 1.0E-16 :
t1781 ) / 30.0 ) { t1585_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 +
intrm_sf_mf_1284 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 *
0.031415926535897927 / ( t1736 == 0.0 ? 1.0E-16 : t1736 ) /
7.8539816339744827E-5 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = 30.0
; } intrm_sf_mf_1284 = ( X [ 110ULL ] - X [ 125ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ) ) ;
tlu2_1d_linear_nearest_value ( & ib_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ib_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = jb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = kb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = zc_int306 *
7.8539816339744827E-5 / 0.01 * ( zc_int78 / 2.0 ) * ( ( t1715 + ( ( ( ( 1.0 -
t1742 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) *
t1593_idx_0 + t1585_idx_0 * t1742 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) ) / 2.0 ) *
intrm_sf_mf_1284 ; if ( X [ 109ULL ] <= 0.0 ) { intrm_sf_mf_1284 = 0.0 ; }
else { intrm_sf_mf_1284 = X [ 109ULL ] >= 1.0 ? 1.0 : X [ 109ULL ] ; } if ( X
[ 108ULL ] <= 0.0 ) { zc_int306 = 0.0 ; } else { zc_int306 = X [ 108ULL ] >=
1.0 ? 1.0 : X [ 108ULL ] ; } t1736 = ( ( ( 1.0 - intrm_sf_mf_1284 ) -
zc_int306 ) * 296.802103844292 + intrm_sf_mf_1284 * 461.523 ) + zc_int306 *
4124.48151675695 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv
= X [ 109ULL ] * 461.523 / ( t1736 == 0.0 ? 1.0E-16 : t1736 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv <= 0.0 ) { t1742 =
0.0 ; } else { t1742 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = X [ 108ULL ] *
4124.48151675695 / ( t1736 == 0.0 ? 1.0E-16 : t1736 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; } t1187 [ 0ULL ]
= X [ 106ULL ] ; tlu2_linear_nearest_prelookup ( & lb_efOut . mField0 [ 0ULL
] , & lb_efOut . mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = lb_efOut ; tlu2_1d_linear_nearest_value ( &
mb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = mb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
nb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = nb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ob_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = ob_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = ( ( ( 1.0 - t1742
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) *
t1593_idx_0 + t1585_idx_0 * t1742 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ;
tlu2_1d_linear_nearest_value ( & pb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = pb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = qb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = rb_efOut [ 0 ] ; t1745 =
( ( ( 1.0 - t1742 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) *
t1593_idx_0 + t1585_idx_0 * t1742 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ; t1749 =
t3649 >= 0.0 ? t3649 : 0.0 ; tlu2_1d_linear_nearest_value ( & sb_efOut [ 0ULL
] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = sb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & tb_efOut
[ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = tb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ub_efOut
[ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = ub_efOut [ 0 ] ; t3649 = ( ( ( 1.0 - t1742 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) *
t1593_idx_0 + t1585_idx_0 * t1742 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ; t1638 = (
t1703 + t3649 ) / 2.0 * 7.8539816339744827E-5 ; t1742 = t1749 * 0.01 / (
t1638 == 0.0 ? 1.0E-16 : t1638 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = t1742 >=
0.0 ? t1742 : - t1742 ; t1749 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 : 1000.0 ;
intrm_sf_mf_536 = pmf_log10 ( 6.9 / ( t1749 == 0.0 ? 1.0E-16 : t1749 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1749 == 0.0 ? 1.0E-16 : t1749
) + 0.00017169489553429715 ) * 3.24 ; t1751 = 1.0 / ( intrm_sf_mf_536 == 0.0
? 1.0E-16 : intrm_sf_mf_536 ) ; t1797 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ; if ( (
pmf_pow ( t1797 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1751 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = ( pmf_pow (
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1751 / 8.0 ) * 12.7 + 1.0 ; t3381
= ( t1749 - 1000.0 ) * ( t1751 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) / 2.0 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ) ;
} else { t3381 = ( t1749 - 1000.0 ) * ( t1751 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) / 2.0 ) /
1.0E-6 ; } t1749 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 - 2000.0 ) /
2000.0 ; t1751 = t1749 * t1749 * 3.0 - t1749 * t1749 * t1749 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 <= 2000.0 ) {
t1749 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 >= 4000.0 ) {
t1749 = t3381 ; } else { t1749 = ( 1.0 - t1751 ) * 3.66 + t3381 * t1751 ; }
t1808 = t1797 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 > t1749 *
0.031415926535897927 / 7.8539816339744827E-5 / ( t1808 == 0.0 ? 1.0E-16 :
t1808 ) / 30.0 ) { t1814 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) / 2.0 ;
t1751 = t1749 * 0.031415926535897927 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) /
7.8539816339744827E-5 / ( t1814 == 0.0 ? 1.0E-16 : t1814 ) ; } else { t1751 =
30.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = (
X [ 110ULL ] - X [ 106ULL ] ) * ( 1.0 - pmf_exp ( - t1751 ) ) ; t1742 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 + t1742 *
7.8539816339744827E-5 / 0.01 * ( t1797 / 2.0 ) * ( ( t1745 + t1715 ) / 2.0 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = pmf_sqrt (
X [ 129ULL ] * X [ 129ULL ] + 2.0360111955237585E-13 ) ; t1715 = pmf_sqrt ( X
[ 129ULL ] * X [ 129ULL ] + 2.3237892571262758E-14 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 = pmf_sqrt (
X [ 129ULL ] * X [ 129ULL ] + 1.6409606283812411E-14 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = pmf_sqrt (
X [ 117ULL ] * X [ 117ULL ] + 2.0360111955237585E-13 ) ; t1749 = pmf_sqrt ( X
[ 117ULL ] * X [ 117ULL ] + 2.3237892571262758E-14 ) ; t1751 = pmf_sqrt ( X [
117ULL ] * X [ 117ULL ] + 1.6409606283812411E-14 ) ;
tlu2_1d_linear_linear_value ( & vb_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = vb_efOut [ 0 ] ; t3381 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = wb_efOut
[ 0 ] ; t1755 = - X [ 118ULL ] + X [ 140ULL ] ; t1756 = ( - X [ 117ULL ] + X
[ 129ULL ] ) - piece14 * 100000.0 ; t1757 = ( - X [ 119ULL ] + X [ 141ULL ] )
- piece14 * 100000.0 ; t1758 = ( ( ( 1.0 - t1695 ) - t1696 ) * t3381 + t1714
* t1695 ) + t1593_idx_0 * t1696 ; t1760 = t3381 - X [ 17ULL ] *
0.296802103844292 ; t3381 = t1593_idx_0 - X [ 17ULL ] * 4.12448151675695 ;
t1754 = t1714 - X [ 17ULL ] * 0.461523 ; t1714 = U_idx_2 *
0.031415926535897927 ; if ( t1714 * 0.0001 <= 7.8539816339744857E-13 ) {
t1761 = 7.8539816339744857E-13 ; } else if ( t1714 * 0.0001 >=
3.1415926535897929E-6 ) { t1761 = 3.1415926535897929E-6 ; } else { t1761 =
t1714 * 0.0001 ; } t1714 = t1761 / 7.8539816339744827E-5 ; if ( X [ 149ULL ]
<= 0.0 ) { t1762 = 0.0 ; } else { t1762 = X [ 149ULL ] >= 1.0 ? 1.0 : X [
149ULL ] ; } if ( X [ 150ULL ] <= 0.0 ) { t1763 = 0.0 ; } else { t1763 = X [
150ULL ] >= 1.0 ? 1.0 : X [ 150ULL ] ; } t1764 = ( ( ( 1.0 - t1762 ) - t1763
) * 296.802103844292 + t1762 * 461.523 ) + t1763 * 4124.48151675695 ; t1819 =
X [ 147ULL ] * t1764 ; t1765 = X [ 148ULL ] / ( t1819 == 0.0 ? 1.0E-16 :
t1819 ) ; zc_int44 = X [ 148ULL ] / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [
126ULL ] ) * ( X [ 151ULL ] / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ]
) ) ; t1767 = X [ 148ULL ] / 1.01325 * ( X [ 152ULL ] / ( X [ 147ULL ] == 0.0
? 1.0E-16 : X [ 147ULL ] ) ) ; if ( X [ 117ULL ] > 0.0 ) { t1768 = ( t1714 +
1.0 ) * ( 1.0 - t1714 * zc_int44 ) * ( X [ 117ULL ] / 0.64 / ( t1761 == 0.0 ?
1.0E-16 : t1761 ) * ( X [ 117ULL ] / 0.64 / ( t1761 == 0.0 ? 1.0E-16 : t1761
) ) / 2.0 / ( t1765 == 0.0 ? 1.0E-16 : t1765 ) ) * 9.9999999999999991E-11 ; }
else if ( X [ 117ULL ] < 0.0 ) { t1768 = ( t1714 + 1.0 ) * ( 1.0 - t1714 *
t1767 ) * ( X [ 117ULL ] / 0.64 / ( t1761 == 0.0 ? 1.0E-16 : t1761 ) * ( X [
117ULL ] / 0.64 / ( t1761 == 0.0 ? 1.0E-16 : t1761 ) ) / 2.0 / ( t1765 == 0.0
? 1.0E-16 : t1765 ) ) * 9.9999999999999991E-11 ; } else { t1768 = 0.0 ; }
zc_int78 = ( X [ 126ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t1769 =
( 1.0 - t1714 ) * ( 1.0 - t1714 ) ; t1771 = zc_int78 * t1769 ; t1772 = (
t1714 + 1.0 ) * ( 1.0 - t1714 * zc_int44 ) - ( 1.0 - t1714 * t1767 ) * t1714
* 2.0 ; intrm_sf_mf_201 = ( X [ 126ULL ] - 1.01325 ) * ( t1772 >= t1769 ?
t1772 : t1769 ) ; t1772 = ( X [ 126ULL ] - 1.01325 ) / ( zc_int78 == 0.0 ?
1.0E-16 : zc_int78 ) ; t1774 = t1772 * t1772 * 3.0 - t1772 * t1772 * t1772 *
2.0 ; if ( X [ 126ULL ] - 1.01325 <= 0.0 ) { t1772 = t1771 ; } else if ( X [
126ULL ] - 1.01325 >= zc_int78 ) { t1772 = intrm_sf_mf_201 ; } else { t1772 =
( 1.0 - t1774 ) * t1771 + intrm_sf_mf_201 * t1774 ; } intrm_sf_mf_201 = (
t1714 + 1.0 ) * ( 1.0 - t1714 * t1767 ) - ( 1.0 - t1714 * zc_int44 ) * t1714
* 2.0 ; t1714 = ( 1.01325 - X [ 126ULL ] ) * ( intrm_sf_mf_201 >= t1769 ?
intrm_sf_mf_201 : t1769 ) ; zc_int44 = ( 1.01325 - X [ 126ULL ] ) / (
zc_int78 == 0.0 ? 1.0E-16 : zc_int78 ) ; t1767 = zc_int44 * zc_int44 * 3.0 -
zc_int44 * zc_int44 * zc_int44 * 2.0 ; if ( 1.01325 - X [ 126ULL ] <= 0.0 ) {
zc_int44 = t1771 ; } else if ( 1.01325 - X [ 126ULL ] >= zc_int78 ) {
zc_int44 = t1714 ; } else { zc_int44 = ( 1.0 - t1767 ) * t1771 + t1714 *
t1767 ; } if ( X [ 126ULL ] > 1.01325 ) { t1714 = t1772 ; } else { t1714 = X
[ 126ULL ] < 1.01325 ? zc_int44 : t1771 ; } if ( X [ 147ULL ] <=
216.59999999999997 ) { zc_int44 = 216.59999999999997 ; } else { zc_int44 = X
[ 147ULL ] >= 623.15 ? 623.15 : X [ 147ULL ] ; } t1775 = zc_int44 * zc_int44
; t1767 = ( ( ( 1074.1165326382641 + zc_int44 * - 0.2214565261064495 ) +
t1775 * 0.00037212980109014541 ) * ( ( 1.0 - t1762 ) - t1763 ) + ( (
1479.6504774711011 + zc_int44 * 1.2002114337048222 ) + t1775 * -
0.00038614513167823636 ) * t1762 ) + ( ( 12825.281119789837 + zc_int44 *
6.9647057412840034 ) + t1775 * - 0.0070524868246844051 ) * t1763 ;
t1585_idx_0 = t1767 - t1764 ; t1843 = X [ 148ULL ] * X [ 148ULL ] * ( t1767 /
( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ) ; zc_int44 = pmf_sqrt ( fabs
( t1843 / ( t1764 == 0.0 ? 1.0E-16 : t1764 ) / ( X [ 147ULL ] == 0.0 ?
1.0E-16 : X [ 147ULL ] ) ) ) * t1761 * 0.64 ; t1846 = t1765 * 2.0 ; t1765 = (
X [ 126ULL ] - 1.01325 ) * pmf_sqrt ( fabs ( t1846 / ( t1714 == 0.0 ? 1.0E-16
: t1714 ) ) ) * t1761 * 0.64 ; t1187 [ 0ULL ] = X [ 21ULL ] ;
tlu2_linear_linear_prelookup ( & xb_efOut . mField0 [ 0ULL ] , & xb_efOut .
mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t32 = xb_efOut ; tlu2_1d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = yb_efOut
[ 0 ] ; t1767 = t1593_idx_0 ; tlu2_1d_linear_linear_value ( & ac_efOut [ 0ULL
] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = ac_efOut [ 0 ] ; t1769 = t1593_idx_0 ; if ( X [ 24ULL ] <=
0.0 ) { t1771 = 0.0 ; } else { t1771 = X [ 24ULL ] >= 1.0 ? 1.0 : X [ 24ULL ]
; } if ( X [ 23ULL ] <= 0.0 ) { t1772 = 0.0 ; } else { t1772 = X [ 23ULL ] >=
1.0 ? 1.0 : X [ 23ULL ] ; } intrm_sf_mf_201 = ( ( ( 1.0 - t1771 ) - t1772 ) *
296.802103844292 + t1771 * 461.523 ) + t1772 * 4124.48151675695 ; t1848 = X [
21ULL ] * intrm_sf_mf_201 ; if ( 1.0 - X [ 24ULL ] >= 0.01 ) { t1775 = 1.0 -
X [ 24ULL ] ; } else if ( 1.0 - X [ 24ULL ] >= - 0.1 ) { t1775 = pmf_exp ( (
( 1.0 - X [ 24ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1775 =
1.6701700790245661E-7 ; } piece42 = X [ 23ULL ] / ( t1775 == 0.0 ? 1.0E-16 :
t1775 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & bc_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [
0ULL ] ) ; t1593_idx_0 = bc_efOut [ 0 ] ; t1777 = pmf_exp ( pmf_log ( X [
22ULL ] * 100000.0 ) - t1593_idx_0 ) ; if ( t1777 >= 1.0 ) { zc_int132 = (
t1777 - 1.0 ) * 461.523 + piece42 ; t1778 = piece42 / ( zc_int132 == 0.0 ?
1.0E-16 : zc_int132 ) ; } else { t1778 = 1.0 ; } t112 = t1778 * 0.01 ;
piece42 = ( X [ 24ULL ] - t1778 ) / ( t112 == 0.0 ? 1.0E-16 : t112 ) ; if ( X
[ 24ULL ] - t1778 <= 0.0 ) { piece42 = 0.0 ; } else if ( X [ 24ULL ] - t1778
>= t1778 * 0.01 ) { piece42 = X [ 24ULL ] - t1778 ; } else { piece42 = ( X [
24ULL ] - t1778 ) * ( piece42 * piece42 * 3.0 - piece42 * piece42 * piece42 *
2.0 ) ; } t1774 = X [ 22ULL ] / ( t1848 == 0.0 ? 1.0E-16 : t1848 ) * piece42
* 0.12 / 0.001 ; piece42 = ( t1767 - t1769 ) * t1774 ; t1769 = pmf_sqrt ( X [
167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 ) ; t1778 = pmf_sqrt ( X [
167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 ) ; t1780 = pmf_sqrt ( X [
167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 ) ;
tlu2_1d_linear_linear_value ( & cc_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = cc_efOut [ 0 ] ; t1781 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = dc_efOut
[ 0 ] ; t1784 = X [ 167ULL ] - t1774 * 100000.0 ; t1785 = X [ 169ULL ] -
t1774 * 100000.0 ; t1786 = ( ( ( 1.0 - t1771 ) - t1772 ) * t1781 + t1767 *
t1771 ) + t1593_idx_0 * t1772 ; t1788 = t1781 - X [ 21ULL ] *
0.296802103844292 ; t1781 = t1593_idx_0 - X [ 21ULL ] * 4.12448151675695 ;
t1782 = t1767 - X [ 21ULL ] * 0.461523 ; if ( X [ 27ULL ] <= 0.0 ) { t1767 =
0.0 ; } else { t1767 = X [ 27ULL ] >= 1.0 ? 1.0 : X [ 27ULL ] ; } if ( X [
28ULL ] <= 0.0 ) { t1790 = 0.0 ; } else { t1790 = X [ 28ULL ] >= 1.0 ? 1.0 :
X [ 28ULL ] ; } t1791 = ( ( ( 1.0 - t1767 ) - t1790 ) * 296.802103844292 +
t1767 * 461.523 ) + t1790 * 4124.48151675695 ; t1792 = - ( ( X [ 25ULL ] / (
X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) - X [ 177ULL ] / ( X [ 178ULL ]
== 0.0 ? 1.0E-16 : X [ 178ULL ] ) ) * X [ 167ULL ] * t1791 ) /
7.8539816339744827E-5 ; if ( X [ 177ULL ] <= 216.59999999999997 ) { t104 =
216.59999999999997 ; } else { t104 = X [ 177ULL ] >= 623.15 ? 623.15 : X [
177ULL ] ; } t1638 = t104 * t104 ; zc_int77 = ( ( ( 1074.1165326382641 + t104
* - 0.2214565261064495 ) + t1638 * 0.00037212980109014541 ) * ( ( 1.0 - t1767
) - t1790 ) + ( ( 1479.6504774711011 + t104 * 1.2002114337048222 ) + t1638 *
- 0.00038614513167823636 ) * t1767 ) + ( ( 12825.281119789837 + t104 *
6.9647057412840034 ) + t1638 * - 0.0070524868246844051 ) * t1790 ; t1860 =
zc_int77 - t1791 ; t104 = zc_int77 / ( t1860 == 0.0 ? 1.0E-16 : t1860 ) ;
zc_int77 = pmf_sqrt ( t1792 * t1792 * 9.999999999999999E-14 + fabs ( X [
177ULL ] * t104 * t1791 ) * 1.0E-9 ) ; if ( X [ 179ULL ] <= 0.0 ) { t1638 =
0.0 ; } else { t1638 = X [ 179ULL ] >= 1.0 ? 1.0 : X [ 179ULL ] ; } if ( X [
180ULL ] <= 0.0 ) { intrm_sf_mf_536 = 0.0 ; } else { intrm_sf_mf_536 = X [
180ULL ] >= 1.0 ? 1.0 : X [ 180ULL ] ; } t1187 [ 0ULL ] = X [ 25ULL ] ;
tlu2_linear_nearest_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = ec_efOut ; tlu2_1d_linear_nearest_value ( & fc_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = fc_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & gc_efOut [ 0ULL ] , & t70 . mField0
[ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = gc_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & hc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = hc_efOut [ 0 ] ; t1797 =
( ( ( 1.0 - t1638 ) - intrm_sf_mf_536 ) * t1593_idx_0 + t1585_idx_0 * t1638 )
+ t1586_idx_0 * intrm_sf_mf_536 ; t1861 = X [ 178ULL ] * X [ 178ULL ] * t104
; t1798 = - pmf_sqrt ( fabs ( t1861 / ( t1791 == 0.0 ? 1.0E-16 : t1791 ) / (
X [ 177ULL ] == 0.0 ? 1.0E-16 : X [ 177ULL ] ) ) ) * 7.8539816339744827E-5 ;
if ( t1798 >= 0.0 ) { t1799 = t1798 * 100000.0 ; } else { t1799 = - t1798 *
100000.0 ; } t1865 = t1797 * 7.8539816339744827E-5 ; t1800 = t1799 * 0.01 / (
t1865 == 0.0 ? 1.0E-16 : t1865 ) ; t1867 = X [ 25ULL ] * t1791 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = X [ 26ULL ]
/ ( t1867 == 0.0 ? 1.0E-16 : t1867 ) ; t1869 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *
1.5707963267948965E-8 ; t109 = t1798 * t1797 * 35.2 / ( t1869 == 0.0 ?
1.0E-16 : t1869 ) ; t1803 = t1800 >= 1.0 ? t1800 : 1.0 ; t1870 = pmf_log10 (
6.9 / ( t1803 == 0.0 ? 1.0E-16 : t1803 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1803 == 0.0 ? 1.0E-16 : t1803 ) + 0.00017169489553429715
) * 3.24 ; t1872 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden *
1.2337005501361697E-10 ; t1799 = t1798 * t1799 * ( 1.0 / ( t1870 == 0.0 ?
1.0E-16 : t1870 ) ) * 0.55 / ( t1872 == 0.0 ? 1.0E-16 : t1872 ) ; t1803 = (
t1800 - 2000.0 ) / 2000.0 ; t1804 = t1803 * t1803 * 3.0 - t1803 * t1803 *
t1803 * 2.0 ; if ( t1800 <= 2000.0 ) { t1803 = t109 * 1.0E-5 ; } else if (
t1800 >= 4000.0 ) { t1803 = t1799 * 1.0E-5 ; } else { t1803 = ( ( 1.0 - t1804
) * t109 + t1799 * t1804 ) * 1.0E-5 ; } zc_int77 = - ( X [ 167ULL ] *
zc_int77 ) / 7.8539816339744827E-5 * 0.00031622776601683789 + t1803 ; t1799 =
X [ 174ULL ] - X [ 26ULL ] ; t109 = ( X [ 25ULL ] / ( X [ 26ULL ] == 0.0 ?
1.0E-16 : X [ 26ULL ] ) - X [ 182ULL ] / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X
[ 183ULL ] ) ) * X [ 181ULL ] * t1791 / 7.8539816339744827E-5 ; if ( X [
182ULL ] <= 216.59999999999997 ) { t1803 = 216.59999999999997 ; } else {
t1803 = X [ 182ULL ] >= 623.15 ? 623.15 : X [ 182ULL ] ; } zc_int90 = t1803 *
t1803 ; t1804 = ( ( ( 1074.1165326382641 + t1803 * - 0.2214565261064495 ) +
zc_int90 * 0.00037212980109014541 ) * ( ( 1.0 - t1767 ) - t1790 ) + ( (
1479.6504774711011 + t1803 * 1.2002114337048222 ) + zc_int90 * -
0.00038614513167823636 ) * t1767 ) + ( ( 12825.281119789837 + t1803 *
6.9647057412840034 ) + zc_int90 * - 0.0070524868246844051 ) * t1790 ;
zc_int97 = t1804 - t1791 ; t1803 = t1804 / ( zc_int97 == 0.0 ? 1.0E-16 :
zc_int97 ) ; t1804 = pmf_sqrt ( t109 * t109 * 9.999999999999999E-14 + fabs (
X [ 182ULL ] * t1803 * t1791 ) * 1.0E-9 ) ; t1881 = X [ 183ULL ] * X [ 183ULL
] * t1803 ; zc_int90 = - pmf_sqrt ( fabs ( t1881 / ( t1791 == 0.0 ? 1.0E-16 :
t1791 ) / ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( zc_int90 >= 0.0 ) { t111 = zc_int90 * 100000.0 ;
} else { t111 = - zc_int90 * 100000.0 ; } t1808 = t111 * 0.01 / ( t1865 ==
0.0 ? 1.0E-16 : t1865 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 = zc_int90 *
t1797 * 35.2 / ( t1869 == 0.0 ? 1.0E-16 : t1869 ) ; t1810 = t1808 >= 1.0 ?
t1808 : 1.0 ; piece250 = pmf_log10 ( 6.9 / ( t1810 == 0.0 ? 1.0E-16 : t1810 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1810 == 0.0 ? 1.0E-16 :
t1810 ) + 0.00017169489553429715 ) * 3.24 ; t111 = zc_int90 * t111 * ( 1.0 /
( piece250 == 0.0 ? 1.0E-16 : piece250 ) ) * 0.55 / ( t1872 == 0.0 ? 1.0E-16
: t1872 ) ; t1810 = ( t1808 - 2000.0 ) / 2000.0 ; t1811 = t1810 * t1810 * 3.0
- t1810 * t1810 * t1810 * 2.0 ; if ( t1808 <= 2000.0 ) { t1810 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * 1.0E-5 ; }
else if ( t1808 >= 4000.0 ) { t1810 = t111 * 1.0E-5 ; } else { t1810 = ( (
1.0 - t1811 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 + t111 *
t1811 ) * 1.0E-5 ; } t1804 = X [ 181ULL ] * t1804 / 7.8539816339744827E-5 *
0.00031622776601683789 + t1810 ; t111 = X [ 155ULL ] - X [ 26ULL ] ; t1187 [
0ULL ] = X [ 25ULL ] ; tlu2_linear_linear_prelookup ( & ic_efOut . mField0 [
0ULL ] , & ic_efOut . mField1 [ 0ULL ] , & ic_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = ic_efOut ; tlu2_1d_linear_linear_value ( &
jc_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = jc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 = t1593_idx_0
; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL
] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = kc_efOut [ 0 ] ; t1810 =
t1593_idx_0 ; if ( 1.0 - X [ 27ULL ] >= 0.01 ) { t1812 = 1.0 - X [ 27ULL ] ;
} else if ( 1.0 - X [ 27ULL ] >= - 0.1 ) { t1812 = pmf_exp ( ( ( 1.0 - X [
27ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1812 = 1.6701700790245661E-7 ;
} t1811 = X [ 28ULL ] / ( t1812 == 0.0 ? 1.0E-16 : t1812 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
lc_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = lc_efOut [ 0 ] ; t1813 = pmf_exp ( pmf_log ( X [ 26ULL ] *
100000.0 ) - t1593_idx_0 ) ; if ( t1813 >= 1.0 ) { t1895 = ( t1813 - 1.0 ) *
461.523 + t1811 ; t1814 = t1811 / ( t1895 == 0.0 ? 1.0E-16 : t1895 ) ; } else
{ t1814 = 1.0 ; } t1897 = t1814 * 0.01 ; t1811 = ( X [ 27ULL ] - t1814 ) / (
t1897 == 0.0 ? 1.0E-16 : t1897 ) ; if ( X [ 27ULL ] - t1814 <= 0.0 ) { t1811
= 0.0 ; } else if ( X [ 27ULL ] - t1814 >= t1814 * 0.01 ) { t1811 = X [ 27ULL
] - t1814 ; } else { t1811 = ( X [ 27ULL ] - t1814 ) * ( t1811 * t1811 * 3.0
- t1811 * t1811 * t1811 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden * t1811 *
7.8539816339744827E-5 / 0.001 ; t1811 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 - t1810 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ;
tlu2_1d_linear_nearest_value ( & mc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = mc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = nc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = oc_efOut [ 0 ] ; t1810 =
( ( ( 1.0 - t1638 ) - intrm_sf_mf_536 ) * t1593_idx_0 + t1585_idx_0 * t1638 )
+ t1586_idx_0 * intrm_sf_mf_536 ; t1814 = ( X [ 172ULL ] - X [ 25ULL ] ) * (
t1810 * 0.031415926535897927 / 0.01 ) ; if ( X [ 176ULL ] <= 0.0 ) { t1815 =
0.0 ; } else { t1815 = X [ 176ULL ] >= 1.0 ? 1.0 : X [ 176ULL ] ; } if ( X [
175ULL ] <= 0.0 ) { intrm_sf_mf_325 = 0.0 ; } else { intrm_sf_mf_325 = X [
175ULL ] >= 1.0 ? 1.0 : X [ 175ULL ] ; } zc_int45 = ( ( ( 1.0 - t1815 ) -
intrm_sf_mf_325 ) * 296.802103844292 + t1815 * 461.523 ) + intrm_sf_mf_325 *
4124.48151675695 ; intrm_sf_mf_328 = X [ 176ULL ] * 461.523 / ( zc_int45 ==
0.0 ? 1.0E-16 : zc_int45 ) ; if ( intrm_sf_mf_328 <= 0.0 ) { t1827 = 0.0 ; }
else { t1827 = intrm_sf_mf_328 >= 1.0 ? 1.0 : intrm_sf_mf_328 ; }
intrm_sf_mf_328 = X [ 175ULL ] * 4124.48151675695 / ( zc_int45 == 0.0 ?
1.0E-16 : zc_int45 ) ; if ( intrm_sf_mf_328 <= 0.0 ) { zc_int46 = 0.0 ; }
else { zc_int46 = intrm_sf_mf_328 >= 1.0 ? 1.0 : intrm_sf_mf_328 ; } t1187 [
0ULL ] = X [ 173ULL ] ; tlu2_linear_nearest_prelookup ( & pc_efOut . mField0
[ 0ULL ] , & pc_efOut . mField1 [ 0ULL ] , & pc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [
0ULL ] , & t124 [ 0ULL ] ) ; t92 = pc_efOut ; tlu2_1d_linear_nearest_value (
& qc_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [
0ULL ] ) ; t1593_idx_0 = qc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
rc_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = rc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
sc_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = sc_efOut [ 0 ] ; intrm_sf_mf_328 = ( ( ( 1.0 - t1827 ) -
zc_int46 ) * t1593_idx_0 + t1585_idx_0 * t1827 ) + t1586_idx_0 * zc_int46 ;
tlu2_1d_linear_nearest_value ( & tc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = tc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & uc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = uc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vc_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = vc_efOut [ 0 ] ; t1829 =
( ( ( 1.0 - t1638 ) - intrm_sf_mf_536 ) * t1593_idx_0 + t1585_idx_0 * t1638 )
+ t1586_idx_0 * intrm_sf_mf_536 ; tlu2_1d_linear_nearest_value ( & wc_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = wc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xc_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = xc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
yc_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = yc_efOut [ 0 ] ; t1638 = ( ( ( 1.0 - t1827 ) - zc_int46 )
* t1593_idx_0 + t1585_idx_0 * t1827 ) + t1586_idx_0 * zc_int46 ;
intrm_sf_mf_536 = ( - X [ 167ULL ] - X [ 181ULL ] ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & ad_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ad_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bd_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = bd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cd_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = cd_efOut [ 0 ] ; t1905 = (
t1797 + ( ( ( ( 1.0 - t1827 ) - zc_int46 ) * t1593_idx_0 + t1585_idx_0 *
t1827 ) + t1586_idx_0 * zc_int46 ) ) / 2.0 * 7.8539816339744827E-5 ; t1827 =
( intrm_sf_mf_536 >= 0.0 ? intrm_sf_mf_536 : 0.0 ) * 0.01 / ( t1905 == 0.0 ?
1.0E-16 : t1905 ) ; zc_int46 = t1827 >= 0.0 ? t1827 : - t1827 ;
intrm_sf_mf_583 = zc_int46 > 1000.0 ? zc_int46 : 1000.0 ; t1585_idx_0 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_583 == 0.0 ? 1.0E-16 : intrm_sf_mf_583 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_583 == 0.0 ?
1.0E-16 : intrm_sf_mf_583 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = 1.0 / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; t1907 = intrm_sf_mf_328 +
t1829 ; if ( ( pmf_pow ( t1907 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1911 = ( pmf_pow ( ( intrm_sf_mf_328 +
t1829 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) *
12.7 + 1.0 ; t1832 = ( intrm_sf_mf_583 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) * ( (
intrm_sf_mf_328 + t1829 ) / 2.0 ) / ( t1911 == 0.0 ? 1.0E-16 : t1911 ) ; }
else { t1832 = ( intrm_sf_mf_583 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 / 8.0 ) * ( (
intrm_sf_mf_328 + t1829 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_583 = ( zc_int46 -
2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 =
intrm_sf_mf_583 * intrm_sf_mf_583 * 3.0 - intrm_sf_mf_583 * intrm_sf_mf_583 *
intrm_sf_mf_583 * 2.0 ; if ( zc_int46 <= 2000.0 ) { intrm_sf_mf_583 = 3.66 ;
} else if ( zc_int46 >= 4000.0 ) { intrm_sf_mf_583 = t1832 ; } else {
intrm_sf_mf_583 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) * 3.66 +
t1832 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ; }
U_idx_2 = t1907 / 2.0 ; if ( zc_int46 > intrm_sf_mf_583 *
0.031415926535897927 / 7.8539816339744827E-5 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) / 30.0 ) { t1924 = ( intrm_sf_mf_328 + t1829 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 =
intrm_sf_mf_583 * 0.031415926535897927 / ( zc_int46 == 0.0 ? 1.0E-16 :
zc_int46 ) / 7.8539816339744827E-5 / ( t1924 == 0.0 ? 1.0E-16 : t1924 ) ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = 30.0
; } intrm_sf_mf_328 = ( X [ 172ULL ] - X [ 173ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) ) ; t1638 =
t1827 * 7.8539816339744827E-5 / 0.01 * ( t1907 / 2.0 ) * ( ( t1638 + t1810 )
/ 2.0 ) * intrm_sf_mf_328 ; if ( X [ 157ULL ] <= 0.0 ) { intrm_sf_mf_328 =
0.0 ; } else { intrm_sf_mf_328 = X [ 157ULL ] >= 1.0 ? 1.0 : X [ 157ULL ] ; }
if ( X [ 156ULL ] <= 0.0 ) { t1827 = 0.0 ; } else { t1827 = X [ 156ULL ] >=
1.0 ? 1.0 : X [ 156ULL ] ; } zc_int46 = ( ( ( 1.0 - intrm_sf_mf_328 ) - t1827
) * 296.802103844292 + intrm_sf_mf_328 * 461.523 ) + t1827 * 4124.48151675695
; intrm_sf_mf_583 = X [ 157ULL ] * 461.523 / ( zc_int46 == 0.0 ? 1.0E-16 :
zc_int46 ) ; if ( intrm_sf_mf_583 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 =
intrm_sf_mf_583 >= 1.0 ? 1.0 : intrm_sf_mf_583 ; } intrm_sf_mf_583 = X [
156ULL ] * 4124.48151675695 / ( zc_int46 == 0.0 ? 1.0E-16 : zc_int46 ) ; if (
intrm_sf_mf_583 <= 0.0 ) { t1832 = 0.0 ; } else { t1832 = intrm_sf_mf_583 >=
1.0 ? 1.0 : intrm_sf_mf_583 ; } t1187 [ 0ULL ] = X [ 154ULL ] ;
tlu2_linear_nearest_prelookup ( & dd_efOut . mField0 [ 0ULL ] , & dd_efOut .
mField1 [ 0ULL ] , & dd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = dd_efOut ; tlu2_1d_linear_nearest_value ( & ed_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ed_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & fd_efOut [ 0ULL ] , & t70 . mField0
[ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = fd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & gd_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = gd_efOut [ 0
] ; intrm_sf_mf_583 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) - t1832 ) *
t1593_idx_0 + t1585_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) +
t1586_idx_0 * t1832 ; tlu2_1d_linear_nearest_value ( & hd_efOut [ 0ULL ] , &
t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
hd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & id_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = id_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & jd_efOut [ 0ULL ] , & t70 . mField0
[ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = jd_efOut [ 0
] ; t1833 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) - t1832 ) *
t1593_idx_0 + t1585_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) +
t1586_idx_0 * t1832 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 =
intrm_sf_mf_536 <= 0.0 ? intrm_sf_mf_536 : 0.0 ; tlu2_1d_linear_nearest_value
( & kd_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1182 [ 0ULL ] , & t124 [
0ULL ] ) ; t1593_idx_0 = kd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ld_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = ld_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & md_efOut
[ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = md_efOut [ 0 ] ; intrm_sf_mf_536 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) - t1832 ) *
t1593_idx_0 + t1585_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) +
t1586_idx_0 * t1832 ; intrm_sf_mf_608 = ( t1797 + intrm_sf_mf_536 ) / 2.0 *
7.8539816339744827E-5 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 * 0.01 / (
intrm_sf_mf_608 == 0.0 ? 1.0E-16 : intrm_sf_mf_608 ) ; t1832 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 = t1832 >
1000.0 ? t1832 : 1000.0 ; t1933 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 ) +
0.00017169489553429715 ) * 3.24 ; t1835 = 1.0 / ( t1933 == 0.0 ? 1.0E-16 :
t1933 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens =
t1829 + intrm_sf_mf_583 ; if ( ( pmf_pow (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1835 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t1938 = ( pmf_pow ( ( t1829 + intrm_sf_mf_583 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1835 / 8.0 ) * 12.7 + 1.0 ; t1836
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 - 1000.0
) * ( t1835 / 8.0 ) * ( ( t1829 + intrm_sf_mf_583 ) / 2.0 ) / ( t1938 == 0.0
? 1.0E-16 : t1938 ) ; } else { t1836 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 - 1000.0 ) *
( t1835 / 8.0 ) * ( ( t1829 + intrm_sf_mf_583 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 = ( t1832 -
2000.0 ) / 2000.0 ; t1835 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 * 2.0 ; if (
t1832 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 = 3.66 ; }
else if ( t1832 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 = t1836 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 = (
1.0 - t1835 ) * 3.66 + t1836 * t1835 ; } t1945 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / 2.0 ; if (
t1832 > Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 *
0.031415926535897927 / 7.8539816339744827E-5 / ( t1945 == 0.0 ? 1.0E-16 :
t1945 ) / 30.0 ) { t1951 = ( t1829 + intrm_sf_mf_583 ) / 2.0 ; t1835 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 *
0.031415926535897927 / ( t1832 == 0.0 ? 1.0E-16 : t1832 ) /
7.8539816339744827E-5 / ( t1951 == 0.0 ? 1.0E-16 : t1951 ) ; } else { t1835 =
30.0 ; } t1829 = ( X [ 172ULL ] - X [ 154ULL ] ) * ( 1.0 - pmf_exp ( - t1835
) ) ; t1829 = t1638 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 *
7.8539816339744827E-5 / 0.01 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / 2.0 ) * ( (
t1810 + t1833 ) / 2.0 ) * t1829 ; t1638 = pmf_sqrt ( X [ 167ULL ] * X [
167ULL ] + 2.0360111955237585E-13 ) ; t1810 = pmf_sqrt ( X [ 167ULL ] * X [
167ULL ] + 2.3237892571262758E-14 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 = pmf_sqrt (
X [ 167ULL ] * X [ 167ULL ] + 1.6409606283812411E-14 ) ; t1832 = pmf_sqrt ( X
[ 181ULL ] * X [ 181ULL ] + 2.0360111955237585E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 = pmf_sqrt (
X [ 181ULL ] * X [ 181ULL ] + 2.3237892571262758E-14 ) ; t1835 = pmf_sqrt ( X
[ 181ULL ] * X [ 181ULL ] + 1.6409606283812411E-14 ) ;
tlu2_1d_linear_linear_value ( & nd_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = nd_efOut [ 0 ] ; t1836 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & od_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = od_efOut
[ 0 ] ; t1838 = - X [ 168ULL ] + X [ 191ULL ] ; t1839 = ( - X [ 167ULL ] + X
[ 181ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden * 100000.0 ;
t1840 = ( - X [ 169ULL ] + X [ 192ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden * 100000.0 ;
t1841 = ( ( ( 1.0 - t1767 ) - t1790 ) * t1836 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * t1767 ) +
t1593_idx_0 * t1790 ; t1844 = t1836 - X [ 25ULL ] * 0.296802103844292 ; t1836
= t1593_idx_0 - X [ 25ULL ] * 4.12448151675695 ; t1837 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 - X [ 25ULL ]
* 0.461523 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16
= ( X [ 174ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t1849 =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) { t1849 =
3.1415926535897929E-6 ; } else { t1849 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 = t1849 /
7.8539816339744827E-5 ; if ( X [ 197ULL ] <= 0.0 ) { intrm_sf_mf_385 = 0.0 ;
} else { intrm_sf_mf_385 = X [ 197ULL ] >= 1.0 ? 1.0 : X [ 197ULL ] ; } if (
X [ 198ULL ] <= 0.0 ) { zc_int132 = 0.0 ; } else { zc_int132 = X [ 198ULL ]
>= 1.0 ? 1.0 : X [ 198ULL ] ; } t1852 = ( ( ( 1.0 - intrm_sf_mf_385 ) -
zc_int132 ) * 296.802103844292 + intrm_sf_mf_385 * 461.523 ) + zc_int132 *
4124.48151675695 ; t1956 = X [ 195ULL ] * t1852 ; t112 = X [ 196ULL ] / (
t1956 == 0.0 ? 1.0E-16 : t1956 ) ; t1854 = X [ 196ULL ] / ( X [ 22ULL ] ==
0.0 ? 1.0E-16 : X [ 22ULL ] ) * ( X [ 199ULL ] / ( X [ 195ULL ] == 0.0 ?
1.0E-16 : X [ 195ULL ] ) ) ; t1855 = X [ 196ULL ] / ( X [ 174ULL ] == 0.0 ?
1.0E-16 : X [ 174ULL ] ) * ( X [ 200ULL ] / ( X [ 195ULL ] == 0.0 ? 1.0E-16 :
X [ 195ULL ] ) ) ; if ( - X [ 167ULL ] > 0.0 ) { t1859 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * t1854
) * ( - X [ 167ULL ] / 0.64 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) * ( - X [
167ULL ] / 0.64 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) ) / 2.0 / ( t112 == 0.0
? 1.0E-16 : t112 ) ) * 9.9999999999999991E-11 ; } else if ( - X [ 167ULL ] <
0.0 ) { t1859 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * t1855
) * ( - X [ 167ULL ] / 0.64 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) * ( - X [
167ULL ] / 0.64 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) ) / 2.0 / ( t112 == 0.0
? 1.0E-16 : t112 ) ) * 9.9999999999999991E-11 ; } else { t1859 = 0.0 ; }
t1862 = ( X [ 22ULL ] + X [ 174ULL ] ) / 2.0 * 0.0010000000000000009 ; t1860
= ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 ) *
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 ) ;
t1864 = t1862 * t1860 ; t1868 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * t1854
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
t1855 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
2.0 ; t1870 = ( X [ 22ULL ] - X [ 174ULL ] ) * ( t1868 >= t1860 ? t1868 :
t1860 ) ; t1868 = ( X [ 22ULL ] - X [ 174ULL ] ) / ( t1862 == 0.0 ? 1.0E-16 :
t1862 ) ; intrm_sf_mf_390 = t1868 * t1868 * 3.0 - t1868 * t1868 * t1868 * 2.0
; if ( X [ 22ULL ] - X [ 174ULL ] <= 0.0 ) { t1868 = t1864 ; } else if ( X [
22ULL ] - X [ 174ULL ] >= t1862 ) { t1868 = t1870 ; } else { t1868 = ( 1.0 -
intrm_sf_mf_390 ) * t1864 + t1870 * intrm_sf_mf_390 ; } t1870 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * t1855
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
t1854 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 *
2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 = ( X [
174ULL ] - X [ 22ULL ] ) * ( t1870 >= t1860 ? t1870 : t1860 ) ; t1854 = ( X [
174ULL ] - X [ 22ULL ] ) / ( t1862 == 0.0 ? 1.0E-16 : t1862 ) ; t1855 = t1854
* t1854 * 3.0 - t1854 * t1854 * t1854 * 2.0 ; if ( X [ 174ULL ] - X [ 22ULL ]
<= 0.0 ) { t1854 = t1864 ; } else if ( X [ 174ULL ] - X [ 22ULL ] >= t1862 )
{ t1854 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 ; }
else { t1854 = ( 1.0 - t1855 ) * t1864 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 * t1855 ; }
if ( X [ 22ULL ] > X [ 174ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 = t1868 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 = X [
22ULL ] < X [ 174ULL ] ? t1854 : t1864 ; } if ( X [ 195ULL ] <=
216.59999999999997 ) { t1854 = 216.59999999999997 ; } else { t1854 = X [
195ULL ] >= 623.15 ? 623.15 : X [ 195ULL ] ; } piece239 = t1854 * t1854 ;
t1855 = ( ( ( 1074.1165326382641 + t1854 * - 0.2214565261064495 ) + piece239
* 0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_385 ) - zc_int132 ) + ( (
1479.6504774711011 + t1854 * 1.2002114337048222 ) + piece239 * -
0.00038614513167823636 ) * intrm_sf_mf_385 ) + ( ( 12825.281119789837 + t1854
* 6.9647057412840034 ) + piece239 * - 0.0070524868246844051 ) * zc_int132 ;
zc_int33 = t1855 - t1852 ; t1981 = X [ 196ULL ] * X [ 196ULL ] * ( t1855 / (
zc_int33 == 0.0 ? 1.0E-16 : zc_int33 ) ) ; t1854 = pmf_sqrt ( fabs ( t1981 /
( t1852 == 0.0 ? 1.0E-16 : t1852 ) / ( X [ 195ULL ] == 0.0 ? 1.0E-16 : X [
195ULL ] ) ) ) * t1849 * 0.64 ; t1984 = t112 * 2.0 ; t112 = ( X [ 22ULL ] - X
[ 174ULL ] ) * pmf_sqrt ( fabs ( t1984 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 ) )
) * t1849 * 0.64 ; t1855 = pmf_sqrt ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) ; t1860 = pmf_sqrt ( X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) ; t1864 = pmf_sqrt ( X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) ; if ( X [ 213ULL ] <= 0.0 ) { t1868 = 0.0 ; } else
{ t1868 = X [ 213ULL ] >= 1.0 ? 1.0 : X [ 213ULL ] ; } if ( X [ 214ULL ] <=
0.0 ) { t1870 = 0.0 ; } else { t1870 = X [ 214ULL ] >= 1.0 ? 1.0 : X [ 214ULL
] ; } intrm_sf_mf_390 = ( ( ( 1.0 - t1868 ) - t1870 ) * 296.802103844292 +
t1868 * 461.523 ) + t1870 * 259.836612622973 ; if ( X [ 226ULL ] <= 0.0 ) {
piece239 = 0.0 ; } else { piece239 = X [ 226ULL ] >= 1.0 ? 1.0 : X [ 226ULL ]
; } if ( X [ 225ULL ] <= 0.0 ) { t1874 = 0.0 ; } else { t1874 = X [ 225ULL ]
>= 1.0 ? 1.0 : X [ 225ULL ] ; } t1879 = ( ( ( 1.0 - piece239 ) - t1874 ) *
296.802103844292 + piece239 * 461.523 ) + t1874 * 259.836612622973 ; t1187 [
0ULL ] = X [ 220ULL ] ; tlu2_linear_linear_prelookup ( & pd_efOut . mField0 [
0ULL ] , & pd_efOut . mField1 [ 0ULL ] , & pd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t59 = pd_efOut ; tlu2_1d_linear_linear_value ( &
qd_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = qd_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & rd_efOut
[ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = rd_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & sd_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = sd_efOut [ 0 ] ; zc_int97 = ( ( ( 1.0 - piece239 ) - t1874
) * t1593_idx_0 + t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ; t1187 [
0ULL ] = X [ 223ULL ] ; tlu2_linear_linear_prelookup ( & td_efOut . mField0 [
0ULL ] , & td_efOut . mField1 [ 0ULL ] , & td_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t76 = td_efOut ; tlu2_1d_linear_linear_value ( &
ud_efOut [ 0ULL ] , & t76 . mField0 [ 0ULL ] , & t76 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = ud_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vd_efOut
[ 0ULL ] , & t76 . mField0 [ 0ULL ] , & t76 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = vd_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wd_efOut [
0ULL ] , & t76 . mField0 [ 0ULL ] , & t76 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = wd_efOut [ 0 ] ; t1882 = ( ( ( 1.0 - piece239 ) - t1874 ) *
t1593_idx_0 + t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ; t1187 [ 0ULL ]
= X [ 221ULL ] ; tlu2_linear_linear_prelookup ( & xd_efOut . mField0 [ 0ULL ]
, & xd_efOut . mField1 [ 0ULL ] , & xd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t62 = xd_efOut ; tlu2_1d_linear_linear_value ( &
yd_efOut [ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = yd_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ae_efOut
[ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = ae_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & be_efOut [
0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = be_efOut [ 0 ] ; t3379 = ( ( ( 1.0 - piece239 ) - t1874 ) *
t1593_idx_0 + t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ; t1187 [ 0ULL ]
= X [ 222ULL ] ; tlu2_linear_linear_prelookup ( & ce_efOut . mField0 [ 0ULL ]
, & ce_efOut . mField1 [ 0ULL ] , & ce_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t75 = ce_efOut ; tlu2_1d_linear_linear_value ( &
de_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ] , & t75 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = de_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ee_efOut
[ 0ULL ] , & t75 . mField0 [ 0ULL ] , & t75 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = ee_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fe_efOut [
0ULL ] , & t75 . mField0 [ 0ULL ] , & t75 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = fe_efOut [ 0 ] ; t1886 = ( ( ( 1.0 - piece239 ) - t1874 ) *
t1593_idx_0 + t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ; t1187 [ 0ULL ]
= X [ 30ULL ] ; tlu2_linear_linear_prelookup ( & ge_efOut . mField0 [ 0ULL ]
, & ge_efOut . mField1 [ 0ULL ] , & ge_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = ge_efOut ; tlu2_1d_linear_linear_value ( &
he_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = he_efOut [ 0 ] ; piece250 = t1593_idx_0 ;
tlu2_1d_linear_linear_value ( & ie_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ie_efOut [ 0 ] ; t1889 =
t1593_idx_0 ; if ( X [ 32ULL ] <= 0.0 ) { t1891 = 0.0 ; } else { t1891 = X [
32ULL ] >= 1.0 ? 1.0 : X [ 32ULL ] ; } if ( X [ 31ULL ] <= 0.0 ) { t1892 =
0.0 ; } else { t1892 = X [ 31ULL ] >= 1.0 ? 1.0 : X [ 31ULL ] ; } t1893 = ( (
( 1.0 - t1891 ) - t1892 ) * 296.802103844292 + t1891 * 461.523 ) + t1892 *
259.836612622973 ; t1986 = X [ 30ULL ] * t1893 ; if ( 1.0 - X [ 32ULL ] >=
0.01 ) { t1895 = 1.0 - X [ 32ULL ] ; } else if ( 1.0 - X [ 32ULL ] >= - 0.1 )
{ t1895 = pmf_exp ( ( ( 1.0 - X [ 32ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else
{ t1895 = 1.6701700790245661E-7 ; } t1896 = X [ 31ULL ] / ( t1895 == 0.0 ?
1.0E-16 : t1895 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & je_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = je_efOut [ 0 ] ; t1897 =
pmf_exp ( pmf_log ( X [ 29ULL ] * 100000.0 ) - t1593_idx_0 ) ; if ( t1897 >=
1.0 ) { t1989 = ( t1897 - 1.0 ) * 461.523 + t1896 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 = t1896 / (
t1989 == 0.0 ? 1.0E-16 : t1989 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 = 1.0 ; }
t1991 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 *
0.01 ; t1896 = ( X [ 32ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 ) / ( t1991
== 0.0 ? 1.0E-16 : t1991 ) ; if ( X [ 32ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 <= 0.0 ) {
t1896 = 0.0 ; } else if ( X [ 32ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 * 0.01 ) {
t1896 = X [ 32ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 ; } else {
t1896 = ( X [ 32ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 ) * ( t1896 *
t1896 * 3.0 - t1896 * t1896 * t1896 * 2.0 ) ; } t1894 = X [ 29ULL ] / ( t1986
== 0.0 ? 1.0E-16 : t1986 ) * t1896 * 0.0003 / 0.001 ; t1896 = ( piece250 -
t1889 ) * t1894 ; t1889 = pmf_sqrt ( X [ 239ULL ] * X [ 239ULL ] +
2.7104677895120892E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 = pmf_sqrt (
X [ 239ULL ] * X [ 239ULL ] + 5.2285258285341208E-12 ) ; t1899 = pmf_sqrt ( X
[ 239ULL ] * X [ 239ULL ] + 3.6921614138577926E-12 ) ;
tlu2_1d_linear_linear_value ( & ke_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ke_efOut [ 0 ] ; t1900 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & le_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = le_efOut
[ 0 ] ; t1902 = - X [ 209ULL ] + X [ 240ULL ] ; t1903 = ( - X [ 208ULL ] + X
[ 239ULL ] ) - t1894 * 100000.0 ; t1904 = ( - X [ 210ULL ] + X [ 241ULL ] ) -
t1894 * 100000.0 ; t1905 = ( ( ( 1.0 - t1891 ) - t1892 ) * t1900 + piece250 *
t1891 ) + t1593_idx_0 * t1892 ; t1907 = t1900 - X [ 30ULL ] *
0.296802103844292 ; t1900 = t1593_idx_0 - X [ 30ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_u_w = piece250 -
X [ 30ULL ] * 0.461523 ; if ( X [ 218ULL ] <= 0.0 ) { piece250 = 0.0 ; } else
{ piece250 = X [ 218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if ( X [ 217ULL ]
<= 0.0 ) { t1909 = 0.0 ; } else { t1909 = X [ 217ULL ] >= 1.0 ? 1.0 : X [
217ULL ] ; } t1910 = ( ( ( 1.0 - piece250 ) - t1909 ) * 296.802103844292 +
piece250 * 461.523 ) + t1909 * 259.836612622973 ; if ( X [ 35ULL ] <= 0.0 ) {
t1911 = 0.0 ; } else { t1911 = X [ 35ULL ] >= 1.0 ? 1.0 : X [ 35ULL ] ; } if
( X [ 34ULL ] <= 0.0 ) { t1912 = 0.0 ; } else { t1912 = X [ 34ULL ] >= 1.0 ?
1.0 : X [ 34ULL ] ; } t1913 = ( ( ( 1.0 - t1911 ) - t1912 ) *
296.802103844292 + t1911 * 461.523 ) + t1912 * 4124.48151675695 ; t1914 = - (
( X [ 33ULL ] / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) - X [ 256ULL ]
/ ( X [ 257ULL ] == 0.0 ? 1.0E-16 : X [ 257ULL ] ) ) * X [ 181ULL ] * t1913 )
/ 0.0019634954084936209 ; if ( X [ 256ULL ] <= 216.59999999999997 ) { t1915 =
216.59999999999997 ; } else { t1915 = X [ 256ULL ] >= 623.15 ? 623.15 : X [
256ULL ] ; } U_idx_2 = t1915 * t1915 ; zc_int160 = ( ( ( 1074.1165326382641 +
t1915 * - 0.2214565261064495 ) + U_idx_2 * 0.00037212980109014541 ) * ( ( 1.0
- t1911 ) - t1912 ) + ( ( 1479.6504774711011 + t1915 * 1.2002114337048222 ) +
U_idx_2 * - 0.00038614513167823636 ) * t1911 ) + ( ( 12825.281119789837 +
t1915 * 6.9647057412840034 ) + U_idx_2 * - 0.0070524868246844051 ) * t1912 ;
t2000 = zc_int160 - t1913 ; t1915 = zc_int160 / ( t2000 == 0.0 ? 1.0E-16 :
t2000 ) ; zc_int160 = pmf_sqrt ( t1914 * t1914 * 9.999999999999999E-14 + fabs
( X [ 256ULL ] * t1915 * t1913 ) * 1.0E-9 ) ; if ( X [ 254ULL ] <= 0.0 ) {
U_idx_2 = 0.0 ; } else { U_idx_2 = X [ 254ULL ] >= 1.0 ? 1.0 : X [ 254ULL ] ;
} if ( X [ 253ULL ] <= 0.0 ) { t1919 = 0.0 ; } else { t1919 = X [ 253ULL ] >=
1.0 ? 1.0 : X [ 253ULL ] ; } t1187 [ 0ULL ] = X [ 33ULL ] ;
tlu2_linear_nearest_prelookup ( & me_efOut . mField0 [ 0ULL ] , & me_efOut .
mField1 [ 0ULL ] , & me_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = me_efOut ; tlu2_1d_linear_nearest_value ( & ne_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ne_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & oe_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = oe_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = pe_efOut [ 0 ] ;
zc_int164 = ( ( ( 1.0 - U_idx_2 ) - t1919 ) * t1593_idx_0 + t1585_idx_0 *
U_idx_2 ) + t1586_idx_0 * t1919 ; t2950 = X [ 257ULL ] * X [ 257ULL ] * t1915
; zc_int116 = - pmf_sqrt ( fabs ( t2950 / ( t1913 == 0.0 ? 1.0E-16 : t1913 )
/ ( X [ 256ULL ] == 0.0 ? 1.0E-16 : X [ 256ULL ] ) ) ) *
0.0019634954084936209 ; if ( zc_int116 >= 0.0 ) { t1922 = zc_int116 *
100000.0 ; } else { t1922 = - zc_int116 * 100000.0 ; } t2958 = zc_int164 *
0.0019634954084936209 ; t121 = t1922 * 0.05 / ( t2958 == 0.0 ? 1.0E-16 :
t2958 ) ; t2007 = X [ 33ULL ] * t1913 ; t1924 = X [ 36ULL ] / ( t2007 == 0.0
? 1.0E-16 : t2007 ) ; t2970 = t1924 * 9.8174770424681068E-6 ; t1925 =
zc_int116 * zc_int164 * 11.2 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; zc_int263
= t121 >= 1.0 ? t121 : 1.0 ; t2010 = pmf_log10 ( 6.9 / ( zc_int263 == 0.0 ?
1.0E-16 : zc_int263 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
zc_int263 == 0.0 ? 1.0E-16 : zc_int263 ) + 2.8767404433520813E-5 ) * 3.24 ;
t3025 = t1924 * 3.855314219175531E-7 ; t1922 = zc_int116 * t1922 * ( 1.0 / (
t2010 == 0.0 ? 1.0E-16 : t2010 ) ) * 0.175 / ( t3025 == 0.0 ? 1.0E-16 : t3025
) ; zc_int263 = ( t121 - 2000.0 ) / 2000.0 ; t1928 = zc_int263 * zc_int263 *
3.0 - zc_int263 * zc_int263 * zc_int263 * 2.0 ; if ( t121 <= 2000.0 ) {
zc_int263 = t1925 * 1.0E-5 ; } else if ( t121 >= 4000.0 ) { zc_int263 = t1922
* 1.0E-5 ; } else { zc_int263 = ( ( 1.0 - t1928 ) * t1925 + t1922 * t1928 ) *
1.0E-5 ; } zc_int160 = - ( X [ 181ULL ] * zc_int160 ) / 0.0019634954084936209
* 0.00031622776601683789 + zc_int263 ; t1922 = X [ 155ULL ] - X [ 36ULL ] ;
t1925 = ( X [ 33ULL ] / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) - X [
259ULL ] / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) ) * X [ 258ULL ]
* t1913 / 0.0019634954084936209 ; if ( X [ 259ULL ] <= 216.59999999999997 ) {
zc_int263 = 216.59999999999997 ; } else { zc_int263 = X [ 259ULL ] >= 623.15
? 623.15 : X [ 259ULL ] ; } t1650 = zc_int263 * zc_int263 ; t1928 = ( ( (
1074.1165326382641 + zc_int263 * - 0.2214565261064495 ) + t1650 *
0.00037212980109014541 ) * ( ( 1.0 - t1911 ) - t1912 ) + ( (
1479.6504774711011 + zc_int263 * 1.2002114337048222 ) + t1650 * -
0.00038614513167823636 ) * t1911 ) + ( ( 12825.281119789837 + zc_int263 *
6.9647057412840034 ) + t1650 * - 0.0070524868246844051 ) * t1912 ; t2020 =
t1928 - t1913 ; zc_int263 = t1928 / ( t2020 == 0.0 ? 1.0E-16 : t2020 ) ;
t1928 = pmf_sqrt ( t1925 * t1925 * 9.999999999999999E-14 + fabs ( X [ 259ULL
] * zc_int263 * t1913 ) * 1.0E-9 ) ; t3032 = X [ 260ULL ] * X [ 260ULL ] *
zc_int263 ; t1650 = - pmf_sqrt ( fabs ( t3032 / ( t1913 == 0.0 ? 1.0E-16 :
t1913 ) / ( X [ 259ULL ] == 0.0 ? 1.0E-16 : X [ 259ULL ] ) ) ) *
0.0019634954084936209 ; if ( t1650 >= 0.0 ) { t1930 = t1650 * 100000.0 ; }
else { t1930 = - t1650 * 100000.0 ; } t1931 = t1930 * 0.05 / ( t2958 == 0.0 ?
1.0E-16 : t2958 ) ; intrm_sf_mf_608 = t1650 * zc_int164 * 11.2 / ( t2970 ==
0.0 ? 1.0E-16 : t2970 ) ; t1933 = t1931 >= 1.0 ? t1931 : 1.0 ; t2028 =
pmf_log10 ( 6.9 / ( t1933 == 0.0 ? 1.0E-16 : t1933 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t1933 == 0.0 ? 1.0E-16 : t1933 ) +
2.8767404433520813E-5 ) * 3.24 ; t1930 = t1650 * t1930 * ( 1.0 / ( t2028 ==
0.0 ? 1.0E-16 : t2028 ) ) * 0.175 / ( t3025 == 0.0 ? 1.0E-16 : t3025 ) ;
t1933 = ( t1931 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = t1933 *
t1933 * 3.0 - t1933 * t1933 * t1933 * 2.0 ; if ( t1931 <= 2000.0 ) { t1933 =
intrm_sf_mf_608 * 1.0E-5 ; } else if ( t1931 >= 4000.0 ) { t1933 = t1930 *
1.0E-5 ; } else { t1933 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) *
intrm_sf_mf_608 + t1930 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) * 1.0E-5 ;
} t1928 = X [ 258ULL ] * t1928 / 0.0019634954084936209 *
0.00031622776601683789 + t1933 ; t1930 = X [ 246ULL ] - X [ 36ULL ] ; t1187 [
0ULL ] = X [ 33ULL ] ; tlu2_linear_linear_prelookup ( & qe_efOut . mField0 [
0ULL ] , & qe_efOut . mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = qe_efOut ; tlu2_1d_linear_linear_value ( &
re_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = re_efOut [ 0 ] ; intrm_sf_mf_608 = t1593_idx_0 ;
tlu2_1d_linear_linear_value ( & se_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = se_efOut [ 0 ] ; t1933 =
t1593_idx_0 ; if ( 1.0 - X [ 35ULL ] >= 0.01 ) { t1935 = 1.0 - X [ 35ULL ] ;
} else if ( 1.0 - X [ 35ULL ] >= - 0.1 ) { t1935 = pmf_exp ( ( ( 1.0 - X [
35ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1935 = 1.6701700790245661E-7 ;
} Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = X [ 34ULL
] / ( t1935 == 0.0 ? 1.0E-16 : t1935 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & te_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
te_efOut [ 0 ] ; t1936 = pmf_exp ( pmf_log ( X [ 36ULL ] * 100000.0 ) -
t1593_idx_0 ) ; if ( t1936 >= 1.0 ) { t2035 = ( t1936 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens / ( t2035 ==
0.0 ? 1.0E-16 : t2035 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = 1.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = ( X [ 35ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok ) ;
if ( X [ 35ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens =
0.0 ; } else if ( X [ 35ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = X [ 35ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = ( X [ 35ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens * 2.0 ) ; }
t1924 = t1924 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens *
0.00049087385212340522 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = (
intrm_sf_mf_608 - t1933 ) * t1924 ; tlu2_1d_linear_nearest_value ( & ue_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = ue_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ve_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = ve_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
we_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = we_efOut [ 0 ] ; t1933 = ( ( ( 1.0 - U_idx_2 ) - t1919 )
* t1593_idx_0 + t1585_idx_0 * U_idx_2 ) + t1586_idx_0 * t1919 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = ( X [ 255ULL ] - X
[ 33ULL ] ) * ( t1933 * 0.039269908169872414 / 0.05 ) ;
tlu2_1d_linear_nearest_value ( & xe_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = xe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ye_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ye_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & af_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = af_efOut [ 0 ] ; t1938 =
( ( ( 1.0 - U_idx_2 ) - t1919 ) * t1593_idx_0 + t1585_idx_0 * U_idx_2 ) +
t1586_idx_0 * t1919 ; U_idx_2 = ( - X [ 181ULL ] - X [ 258ULL ] ) / 2.0 ;
t2043 = ( intrm_sf_mf_536 + zc_int164 ) / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_536 = ( U_idx_2 >= 0.0 ? U_idx_2 : 0.0 ) * 0.05 / ( t2043 == 0.0
? 1.0E-16 : t2043 ) ; t1919 = intrm_sf_mf_536 >= 0.0 ? intrm_sf_mf_536 : -
intrm_sf_mf_536 ; t1939 = t1919 > 1000.0 ? t1919 : 1000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = pmf_log10 (
6.9 / ( t1939 == 0.0 ? 1.0E-16 : t1939 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( t1939 == 0.0 ? 1.0E-16 : t1939 ) + 2.8767404433520813E-5
) * 3.24 ; intrm_sf_mf_549 = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ) ;
t2045 = intrm_sf_mf_583 + t1938 ; if ( ( pmf_pow ( t2045 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_549 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) { piece234 = ( pmf_pow ( ( intrm_sf_mf_583 + t1938 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_549 / 8.0 ) * 12.7 +
1.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = (
t1939 - 1000.0 ) * ( intrm_sf_mf_549 / 8.0 ) * ( ( intrm_sf_mf_583 + t1938 )
/ 2.0 ) / ( piece234 == 0.0 ? 1.0E-16 : piece234 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = ( t1939 -
1000.0 ) * ( intrm_sf_mf_549 / 8.0 ) * ( ( intrm_sf_mf_583 + t1938 ) / 2.0 )
/ 1.0E-6 ; } t1939 = ( t1919 - 2000.0 ) / 2000.0 ; intrm_sf_mf_549 = t1939 *
t1939 * 3.0 - t1939 * t1939 * t1939 * 2.0 ; if ( t1919 <= 2000.0 ) { t1939 =
3.66 ; } else if ( t1919 >= 4000.0 ) { t1939 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ; } else {
t1939 = ( 1.0 - intrm_sf_mf_549 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 *
intrm_sf_mf_549 ; } t1585_idx_0 = t2045 / 2.0 ; if ( t1919 > t1939 *
0.039269908169872414 / 0.0019634954084936209 / ( t1585_idx_0 == 0.0 ? 1.0E-16
: t1585_idx_0 ) / 30.0 ) { t3375 = ( intrm_sf_mf_583 + t1938 ) / 2.0 ;
intrm_sf_mf_549 = t1939 * 0.039269908169872414 / ( t1919 == 0.0 ? 1.0E-16 :
t1919 ) / 0.0019634954084936209 / ( t3375 == 0.0 ? 1.0E-16 : t3375 ) ; } else
{ intrm_sf_mf_549 = 30.0 ; } intrm_sf_mf_583 = ( X [ 255ULL ] - X [ 154ULL ]
) * ( 1.0 - pmf_exp ( - intrm_sf_mf_549 ) ) ; intrm_sf_mf_536 =
intrm_sf_mf_536 * 0.0019634954084936209 / 0.05 * ( t2045 / 2.0 ) * ( ( t1833
+ t1933 ) / 2.0 ) * intrm_sf_mf_583 ; if ( X [ 248ULL ] <= 0.0 ) {
intrm_sf_mf_583 = 0.0 ; } else { intrm_sf_mf_583 = X [ 248ULL ] >= 1.0 ? 1.0
: X [ 248ULL ] ; } if ( X [ 247ULL ] <= 0.0 ) { t1833 = 0.0 ; } else { t1833
= X [ 247ULL ] >= 1.0 ? 1.0 : X [ 247ULL ] ; } t1919 = ( ( ( 1.0 -
intrm_sf_mf_583 ) - t1833 ) * 296.802103844292 + intrm_sf_mf_583 * 461.523 )
+ t1833 * 4124.48151675695 ; t1939 = X [ 248ULL ] * 461.523 / ( t1919 == 0.0
? 1.0E-16 : t1919 ) ; if ( t1939 <= 0.0 ) { intrm_sf_mf_549 = 0.0 ; } else {
intrm_sf_mf_549 = t1939 >= 1.0 ? 1.0 : t1939 ; } t1939 = X [ 247ULL ] *
4124.48151675695 / ( t1919 == 0.0 ? 1.0E-16 : t1919 ) ; if ( t1939 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 =
t1939 >= 1.0 ? 1.0 : t1939 ; } t1187 [ 0ULL ] = X [ 245ULL ] ;
tlu2_linear_nearest_prelookup ( & bf_efOut . mField0 [ 0ULL ] , & bf_efOut .
mField1 [ 0ULL ] , & bf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = bf_efOut ; tlu2_1d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = cf_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & df_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = df_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ef_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ef_efOut [ 0
] ; t1939 = ( ( ( 1.0 - intrm_sf_mf_549 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ) *
t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_549 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ;
tlu2_1d_linear_nearest_value ( & ff_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ff_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gf_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = gf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hf_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = hf_efOut [ 0 ] ; t1942 =
( ( ( 1.0 - intrm_sf_mf_549 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ) *
t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_549 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ; t1944 =
U_idx_2 <= 0.0 ? U_idx_2 : 0.0 ; tlu2_1d_linear_nearest_value ( & if_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = if_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & jf_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = jf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & kf_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = kf_efOut [ 0 ] ; U_idx_2 = ( ( ( 1.0 - intrm_sf_mf_549 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ) *
t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_549 ) + t1586_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ; t3373 = (
zc_int164 + U_idx_2 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_549 = -
t1944 * 0.05 / ( t3373 == 0.0 ? 1.0E-16 : t3373 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 =
intrm_sf_mf_549 >= 0.0 ? intrm_sf_mf_549 : - intrm_sf_mf_549 ; t1944 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 : 1000.0 ;
t3047 = pmf_log10 ( 6.9 / ( t1944 == 0.0 ? 1.0E-16 : t1944 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1944 == 0.0 ? 1.0E-16 : t1944
) + 2.8767404433520813E-5 ) * 3.24 ; t1945 = 1.0 / ( t3047 == 0.0 ? 1.0E-16 :
t3047 ) ; t3201 = t1938 + t1939 ; if ( ( pmf_pow ( t3201 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1945 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t3187 = ( pmf_pow ( ( t1938 + t1939 ) / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1945 / 8.0 ) * 12.7 + 1.0 ; t1946 = ( t1944 - 1000.0
) * ( t1945 / 8.0 ) * ( ( t1938 + t1939 ) / 2.0 ) / ( t3187 == 0.0 ? 1.0E-16
: t3187 ) ; } else { t1946 = ( t1944 - 1000.0 ) * ( t1945 / 8.0 ) * ( ( t1938
+ t1939 ) / 2.0 ) / 1.0E-6 ; } t1944 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 - 2000.0 ) /
2000.0 ; t1945 = t1944 * t1944 * 3.0 - t1944 * t1944 * t1944 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 <= 2000.0 ) {
t1944 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 >= 4000.0 ) {
t1944 = t1946 ; } else { t1944 = ( 1.0 - t1945 ) * 3.66 + t1946 * t1945 ; }
t2083 = t3201 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 > t1944 *
0.039269908169872414 / 0.0019634954084936209 / ( t2083 == 0.0 ? 1.0E-16 :
t2083 ) / 30.0 ) { t3361 = ( t1938 + t1939 ) / 2.0 ; t1945 = t1944 *
0.039269908169872414 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ) /
0.0019634954084936209 / ( t3361 == 0.0 ? 1.0E-16 : t3361 ) ; } else { t1945 =
30.0 ; } t1938 = ( X [ 255ULL ] - X [ 245ULL ] ) * ( 1.0 - pmf_exp ( - t1945
) ) ; t1938 = intrm_sf_mf_536 + intrm_sf_mf_549 * 0.0019634954084936209 /
0.05 * ( t3201 / 2.0 ) * ( ( t1933 + t1942 ) / 2.0 ) * t1938 ;
intrm_sf_mf_536 = pmf_sqrt ( X [ 181ULL ] * X [ 181ULL ] +
5.0900279888093953E-12 ) ; t1933 = pmf_sqrt ( X [ 181ULL ] * X [ 181ULL ] +
5.8094731428156895E-13 ) ; intrm_sf_mf_549 = pmf_sqrt ( X [ 181ULL ] * X [
181ULL ] + 4.1024015709531014E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = pmf_sqrt (
X [ 258ULL ] * X [ 258ULL ] + 5.0900279888093953E-12 ) ; t1944 = pmf_sqrt ( X
[ 258ULL ] * X [ 258ULL ] + 5.8094731428156895E-13 ) ; t1945 = pmf_sqrt ( X [
258ULL ] * X [ 258ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & lf_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = lf_efOut [ 0 ] ; t1946 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & mf_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = mf_efOut
[ 0 ] ; t1948 = - X [ 191ULL ] + X [ 266ULL ] ; t1949 = ( ( - X [ 181ULL ] +
X [ 258ULL ] ) + U_idx_5 ) - t1924 * 100000.0 ; t1950 = ( ( - X [ 192ULL ] +
X [ 267ULL ] ) + U_idx_5 ) - t1924 * 100000.0 ; t1951 = ( ( ( 1.0 - t1911 ) -
t1912 ) * t1946 + intrm_sf_mf_608 * t1911 ) + t1593_idx_0 * t1912 ; t1954 =
t1946 - X [ 33ULL ] * 0.296802103844292 ; t1946 = t1593_idx_0 - X [ 33ULL ] *
4.12448151675695 ; t1947 = intrm_sf_mf_608 - X [ 33ULL ] * 0.461523 ; if ( X
[ 6ULL ] <= 0.0 ) { intrm_sf_mf_608 = 0.0 ; } else { intrm_sf_mf_608 = X [
6ULL ] >= 1.0 ? 1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) { t1959 = 0.0 ;
} else { t1959 = X [ 5ULL ] >= 1.0 ? 1.0 : X [ 5ULL ] ; } t1963 = ( ( ( 1.0 -
intrm_sf_mf_608 ) - t1959 ) * 296.802103844292 + intrm_sf_mf_608 * 461.523 )
+ t1959 * 4124.48151675695 ; t1965 = - ( ( X [ 4ULL ] / ( X [ 37ULL ] == 0.0
? 1.0E-16 : X [ 37ULL ] ) - X [ 270ULL ] / ( X [ 271ULL ] == 0.0 ? 1.0E-16 :
X [ 271ULL ] ) ) * X [ 258ULL ] * t1963 ) / 0.32 ; if ( X [ 270ULL ] <=
216.59999999999997 ) { t1966 = 216.59999999999997 ; } else { t1966 = X [
270ULL ] >= 623.15 ? 623.15 : X [ 270ULL ] ; } t1653 = t1966 * t1966 ;
zc_int232 = ( ( ( 1074.1165326382641 + t1966 * - 0.2214565261064495 ) + t1653
* 0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_608 ) - t1959 ) + ( (
1479.6504774711011 + t1966 * 1.2002114337048222 ) + t1653 * -
0.00038614513167823636 ) * intrm_sf_mf_608 ) + ( ( 12825.281119789837 + t1966
* 6.9647057412840034 ) + t1653 * - 0.0070524868246844051 ) * t1959 ; t2098 =
zc_int232 - t1963 ; t1966 = zc_int232 / ( t2098 == 0.0 ? 1.0E-16 : t2098 ) ;
zc_int232 = pmf_sqrt ( t1965 * t1965 * 9.999999999999999E-14 + fabs ( X [
270ULL ] * t1966 * t1963 ) * 1.0E-9 ) ; if ( X [ 71ULL ] <= 0.0 ) { t1653 =
0.0 ; } else { t1653 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [
70ULL ] <= 0.0 ) { zc_int272 = 0.0 ; } else { zc_int272 = X [ 70ULL ] >= 1.0
? 1.0 : X [ 70ULL ] ; } t1187 [ 0ULL ] = X [ 4ULL ] ;
tlu2_linear_nearest_prelookup ( & nf_efOut . mField0 [ 0ULL ] , & nf_efOut .
mField1 [ 0ULL ] , & nf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = nf_efOut ; tlu2_1d_linear_nearest_value ( & of_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = of_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & pf_efOut [ 0ULL ] , & t70 . mField0
[ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = pf_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & qf_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = qf_efOut [ 0 ] ; t1970 =
( ( ( 1.0 - t1653 ) - zc_int272 ) * t1593_idx_0 + t1585_idx_0 * t1653 ) +
t1586_idx_0 * zc_int272 ; t2099 = X [ 271ULL ] * X [ 271ULL ] * t1966 ; t1971
= - pmf_sqrt ( fabs ( t2099 / ( t1963 == 0.0 ? 1.0E-16 : t1963 ) / ( X [
270ULL ] == 0.0 ? 1.0E-16 : X [ 270ULL ] ) ) ) * 0.32 ; if ( t1971 >= 0.0 ) {
t1972 = t1971 * 100000.0 ; } else { t1972 = - t1971 * 100000.0 ; } t2103 =
t1970 * 0.32 ; zc_int265 = t1972 * 0.01 / ( t2103 == 0.0 ? 1.0E-16 : t2103 )
; t2105 = X [ 4ULL ] * t1963 ; t1974 = X [ 37ULL ] / ( t2105 == 0.0 ? 1.0E-16
: t2105 ) ; t2107 = t1974 * 6.4000000000000011E-5 ; t1975 = t1971 * t1970 *
2.9973120849090416 / ( t2107 == 0.0 ? 1.0E-16 : t2107 ) ; zc_int32 =
zc_int265 >= 1.0 ? zc_int265 : 1.0 ; t2108 = pmf_log10 ( 6.9 / ( zc_int32 ==
0.0 ? 1.0E-16 : zc_int32 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
zc_int32 == 0.0 ? 1.0E-16 : zc_int32 ) + 0.00017169489553429715 ) * 3.24 ;
t2110 = t1974 * 0.0020480000000000003 ; t1972 = t1971 * t1972 * ( 1.0 / (
t2108 == 0.0 ? 1.0E-16 : t2108 ) ) * 0.046833001326703774 / ( t2110 == 0.0 ?
1.0E-16 : t2110 ) ; zc_int32 = ( zc_int265 - 2000.0 ) / 2000.0 ; t1977 =
zc_int32 * zc_int32 * 3.0 - zc_int32 * zc_int32 * zc_int32 * 2.0 ; if (
zc_int265 <= 2000.0 ) { zc_int32 = t1975 * 1.0E-5 ; } else if ( zc_int265 >=
4000.0 ) { zc_int32 = t1972 * 1.0E-5 ; } else { zc_int32 = ( ( 1.0 - t1977 )
* t1975 + t1972 * t1977 ) * 1.0E-5 ; } zc_int232 = - ( X [ 258ULL ] *
zc_int232 ) / 0.32 * 0.00031622776601683789 + zc_int32 ; t1972 = X [ 246ULL ]
- X [ 37ULL ] ; t1975 = ( X [ 4ULL ] / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [
37ULL ] ) - X [ 273ULL ] / ( X [ 274ULL ] == 0.0 ? 1.0E-16 : X [ 274ULL ] ) )
* X [ 272ULL ] * t1963 / 0.32 ; if ( X [ 273ULL ] <= 216.59999999999997 ) {
zc_int32 = 216.59999999999997 ; } else { zc_int32 = X [ 273ULL ] >= 623.15 ?
623.15 : X [ 273ULL ] ; } zc_int53 = zc_int32 * zc_int32 ; t1977 = ( ( (
1074.1165326382641 + zc_int32 * - 0.2214565261064495 ) + zc_int53 *
0.00037212980109014541 ) * ( ( 1.0 - intrm_sf_mf_608 ) - t1959 ) + ( (
1479.6504774711011 + zc_int32 * 1.2002114337048222 ) + zc_int53 * -
0.00038614513167823636 ) * intrm_sf_mf_608 ) + ( ( 12825.281119789837 +
zc_int32 * 6.9647057412840034 ) + zc_int53 * - 0.0070524868246844051 ) *
t1959 ; t1585_idx_0 = t1977 - t1963 ; zc_int32 = t1977 / ( t1585_idx_0 == 0.0
? 1.0E-16 : t1585_idx_0 ) ; t1977 = pmf_sqrt ( t1975 * t1975 *
9.999999999999999E-14 + fabs ( X [ 273ULL ] * zc_int32 * t1963 ) * 1.0E-9 ) ;
t2119 = X [ 274ULL ] * X [ 274ULL ] * zc_int32 ; zc_int53 = - pmf_sqrt ( fabs
( t2119 / ( t1963 == 0.0 ? 1.0E-16 : t1963 ) / ( X [ 273ULL ] == 0.0 ?
1.0E-16 : X [ 273ULL ] ) ) ) * 0.32 ; if ( zc_int53 >= 0.0 ) { t1979 =
zc_int53 * 100000.0 ; } else { t1979 = - zc_int53 * 100000.0 ; } zc_int33 =
t1979 * 0.01 / ( t2103 == 0.0 ? 1.0E-16 : t2103 ) ; t1585_idx_0 = zc_int53 *
t1970 * 2.9973120849090416 / ( t2107 == 0.0 ? 1.0E-16 : t2107 ) ; t1987 =
zc_int33 >= 1.0 ? zc_int33 : 1.0 ; t2126 = pmf_log10 ( 6.9 / ( t1987 == 0.0 ?
1.0E-16 : t1987 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1987 ==
0.0 ? 1.0E-16 : t1987 ) + 0.00017169489553429715 ) * 3.24 ; t1979 = zc_int53
* t1979 * ( 1.0 / ( t2126 == 0.0 ? 1.0E-16 : t2126 ) ) * 0.046833001326703774
/ ( t2110 == 0.0 ? 1.0E-16 : t2110 ) ; t1987 = ( zc_int33 - 2000.0 ) / 2000.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 = t1987 *
t1987 * 3.0 - t1987 * t1987 * t1987 * 2.0 ; if ( zc_int33 <= 2000.0 ) { t1987
= t1585_idx_0 * 1.0E-5 ; } else if ( zc_int33 >= 4000.0 ) { t1987 = t1979 *
1.0E-5 ; } else { t1987 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 ) *
t1585_idx_0 + t1979 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 ) * 1.0E-5 ;
} t1977 = X [ 272ULL ] * t1977 / 0.32 * 0.00031622776601683789 + t1987 ;
t1979 = X [ 60ULL ] - X [ 37ULL ] ; t1187 [ 0ULL ] = X [ 4ULL ] ;
tlu2_linear_linear_prelookup ( & rf_efOut . mField0 [ 0ULL ] , & rf_efOut .
mField1 [ 0ULL ] , & rf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t73 = rf_efOut ; tlu2_1d_linear_linear_value ( & sf_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = sf_efOut
[ 0 ] ; t1987 = t1593_idx_0 ; tlu2_1d_linear_linear_value ( & tf_efOut [ 0ULL
] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = tf_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 = t1593_idx_0
; if ( 1.0 - X [ 6ULL ] >= 0.01 ) { t1990 = 1.0 - X [ 6ULL ] ; } else if (
1.0 - X [ 6ULL ] >= - 0.1 ) { t1990 = pmf_exp ( ( ( 1.0 - X [ 6ULL ] ) - 0.01
) / 0.01 ) * 0.01 ; } else { t1990 = 1.6701700790245661E-7 ; } t1989 = X [
5ULL ] / ( t1990 == 0.0 ? 1.0E-16 : t1990 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & uf_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
uf_efOut [ 0 ] ; t1991 = pmf_exp ( pmf_log ( X [ 37ULL ] * 100000.0 ) -
t1593_idx_0 ) ; if ( t1991 >= 1.0 ) { t2133 = ( t1991 - 1.0 ) * 461.523 +
t1989 ; t1992 = t1989 / ( t2133 == 0.0 ? 1.0E-16 : t2133 ) ; } else { t1992 =
1.0 ; } t3108 = t1992 * 0.01 ; t1989 = ( X [ 6ULL ] - t1992 ) / ( t3108 ==
0.0 ? 1.0E-16 : t3108 ) ; if ( X [ 6ULL ] - t1992 <= 0.0 ) { t1989 = 0.0 ; }
else if ( X [ 6ULL ] - t1992 >= t1992 * 0.01 ) { t1989 = X [ 6ULL ] - t1992 ;
} else { t1989 = ( X [ 6ULL ] - t1992 ) * ( t1989 * t1989 * 3.0 - t1989 *
t1989 * t1989 * 2.0 ) ; } t1974 = t1974 * t1989 * 0.026773120849090417 /
0.001 ; t1989 = ( t1987 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 ) * t1974 ;
tlu2_1d_linear_nearest_value ( & vf_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = vf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wf_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = wf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xf_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = xf_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 = ( ( ( 1.0 -
t1653 ) - zc_int272 ) * t1593_idx_0 + t1585_idx_0 * t1653 ) + t1586_idx_0 *
zc_int272 ; t1992 = ( 343.15 - X [ 4ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 *
10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( & yf_efOut [
0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = yf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ag_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = ag_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
bg_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = bg_efOut [ 0 ] ; t1993 = ( ( ( 1.0 - t1653 ) - zc_int272
) * t1593_idx_0 + t1585_idx_0 * t1653 ) + t1586_idx_0 * zc_int272 ; t1653 = (
- X [ 258ULL ] - X [ 272ULL ] ) / 2.0 ; t2141 = ( U_idx_2 + t1970 ) / 2.0 *
0.32 ; U_idx_2 = ( t1653 >= 0.0 ? t1653 : 0.0 ) * 0.01 / ( t2141 == 0.0 ?
1.0E-16 : t2141 ) ; zc_int272 = U_idx_2 >= 0.0 ? U_idx_2 : - U_idx_2 ; t1994
= zc_int272 > 1000.0 ? zc_int272 : 1000.0 ; t3173 = pmf_log10 ( 6.9 / ( t1994
== 0.0 ? 1.0E-16 : t1994 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1994 == 0.0 ? 1.0E-16 : t1994 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_664 = 1.0 / ( t3173 == 0.0 ? 1.0E-16 : t3173 ) ; t4072 = t1939 +
t1993 ; if ( ( pmf_pow ( t4072 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( intrm_sf_mf_664 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t3252 = (
pmf_pow ( ( t1939 + t1993 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( intrm_sf_mf_664 / 8.0 ) * 12.7 + 1.0 ; t1999 = ( t1994 - 1000.0 ) * (
intrm_sf_mf_664 / 8.0 ) * ( ( t1939 + t1993 ) / 2.0 ) / ( t3252 == 0.0 ?
1.0E-16 : t3252 ) ; } else { t1999 = ( t1994 - 1000.0 ) * ( intrm_sf_mf_664 /
8.0 ) * ( ( t1939 + t1993 ) / 2.0 ) / 1.0E-6 ; } t1994 = ( zc_int272 - 2000.0
) / 2000.0 ; intrm_sf_mf_664 = t1994 * t1994 * 3.0 - t1994 * t1994 * t1994 *
2.0 ; if ( zc_int272 <= 2000.0 ) { t1994 = 3.66 ; } else if ( zc_int272 >=
4000.0 ) { t1994 = t1999 ; } else { t1994 = ( 1.0 - intrm_sf_mf_664 ) * 3.66
+ t1999 * intrm_sf_mf_664 ; } t2154 = t4072 / 2.0 ; if ( zc_int272 > t1994 *
10.709248339636167 / 0.32 / ( t2154 == 0.0 ? 1.0E-16 : t2154 ) / 30.0 ) {
t2160 = ( t1939 + t1993 ) / 2.0 ; intrm_sf_mf_664 = t1994 *
10.709248339636167 / ( zc_int272 == 0.0 ? 1.0E-16 : zc_int272 ) / 0.32 / (
t2160 == 0.0 ? 1.0E-16 : t2160 ) ; } else { intrm_sf_mf_664 = 30.0 ; } t1939
= ( 343.15 - X [ 245ULL ] ) * ( 1.0 - pmf_exp ( - intrm_sf_mf_664 ) ) ;
U_idx_2 = U_idx_2 * 0.32 / 0.01 * ( t4072 / 2.0 ) * ( ( t1942 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 ) / 2.0 ) *
t1939 ; if ( X [ 62ULL ] <= 0.0 ) { t1939 = 0.0 ; } else { t1939 = X [ 62ULL
] >= 1.0 ? 1.0 : X [ 62ULL ] ; } if ( X [ 61ULL ] <= 0.0 ) { t1942 = 0.0 ; }
else { t1942 = X [ 61ULL ] >= 1.0 ? 1.0 : X [ 61ULL ] ; } zc_int272 = ( ( (
1.0 - t1939 ) - t1942 ) * 296.802103844292 + t1939 * 461.523 ) + t1942 *
4124.48151675695 ; t1994 = X [ 62ULL ] * 461.523 / ( zc_int272 == 0.0 ?
1.0E-16 : zc_int272 ) ; if ( t1994 <= 0.0 ) { intrm_sf_mf_664 = 0.0 ; } else
{ intrm_sf_mf_664 = t1994 >= 1.0 ? 1.0 : t1994 ; } t1994 = X [ 61ULL ] *
4124.48151675695 / ( zc_int272 == 0.0 ? 1.0E-16 : zc_int272 ) ; if ( t1994 <=
0.0 ) { t1999 = 0.0 ; } else { t1999 = t1994 >= 1.0 ? 1.0 : t1994 ; } t1187 [
0ULL ] = X [ 59ULL ] ; tlu2_linear_nearest_prelookup ( & cg_efOut . mField0 [
0ULL ] , & cg_efOut . mField1 [ 0ULL ] , & cg_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = cg_efOut ; tlu2_1d_linear_nearest_value ( &
dg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = dg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
eg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = eg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
fg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = fg_efOut [ 0 ] ; t1994 = ( ( ( 1.0 - intrm_sf_mf_664 ) -
t1999 ) * t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_664 ) + t1586_idx_0 * t1999
; tlu2_1d_linear_nearest_value ( & gg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = gg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = hg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ig_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ig_efOut [ 0 ] ; t2000 =
( ( ( 1.0 - intrm_sf_mf_664 ) - t1999 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_664 ) + t1586_idx_0 * t1999 ; t2002 = t1653 <= 0.0 ? t1653 : 0.0
; tlu2_1d_linear_nearest_value ( & jg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = jg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = kg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & lg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = lg_efOut [ 0 ] ; t1653 = (
( ( 1.0 - intrm_sf_mf_664 ) - t1999 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_664 ) + t1586_idx_0 * t1999 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = ( t1970 + t1653
) / 2.0 * 0.32 ; intrm_sf_mf_664 = - t2002 * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ) ; t1999 =
intrm_sf_mf_664 >= 0.0 ? intrm_sf_mf_664 : - intrm_sf_mf_664 ; t2002 = t1999
> 1000.0 ? t1999 : 1000.0 ; t2169 = pmf_log10 ( 6.9 / ( t2002 == 0.0 ?
1.0E-16 : t2002 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2002 ==
0.0 ? 1.0E-16 : t2002 ) + 0.00017169489553429715 ) * 3.24 ; t2004 = 1.0 / (
t2169 == 0.0 ? 1.0E-16 : t2169 ) ; t2170 = t1993 + t1994 ; if ( ( pmf_pow (
t2170 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2004 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) { t2174 = ( pmf_pow ( ( t1993 + t1994 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2004 / 8.0 ) * 12.7 + 1.0 ; t2008
= ( t2002 - 1000.0 ) * ( t2004 / 8.0 ) * ( ( t1993 + t1994 ) / 2.0 ) / (
t2174 == 0.0 ? 1.0E-16 : t2174 ) ; } else { t2008 = ( t2002 - 1000.0 ) * (
t2004 / 8.0 ) * ( ( t1993 + t1994 ) / 2.0 ) / 1.0E-6 ; } t2002 = ( t1999 -
2000.0 ) / 2000.0 ; t2004 = t2002 * t2002 * 3.0 - t2002 * t2002 * t2002 * 2.0
; if ( t1999 <= 2000.0 ) { t2002 = 3.66 ; } else if ( t1999 >= 4000.0 ) {
t2002 = t2008 ; } else { t2002 = ( 1.0 - t2004 ) * 3.66 + t2008 * t2004 ; }
t2181 = t2170 / 2.0 ; if ( t1999 > t2002 * 10.709248339636167 / 0.32 / (
t2181 == 0.0 ? 1.0E-16 : t2181 ) / 30.0 ) { t2187 = ( t1993 + t1994 ) / 2.0 ;
t2004 = t2002 * 10.709248339636167 / ( t1999 == 0.0 ? 1.0E-16 : t1999 ) /
0.32 / ( t2187 == 0.0 ? 1.0E-16 : t2187 ) ; } else { t2004 = 30.0 ; } t1993 =
( 343.15 - X [ 59ULL ] ) * ( 1.0 - pmf_exp ( - t2004 ) ) ; t1993 = U_idx_2 +
intrm_sf_mf_664 * 0.32 / 0.01 * ( t2170 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 + t2000 ) /
2.0 ) * t1993 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 = pmf_sqrt (
X [ 258ULL ] * X [ 258ULL ] + 4.3455507383574884E-7 ) ; intrm_sf_mf_664 =
pmf_sqrt ( X [ 258ULL ] * X [ 258ULL ] + 4.9597684650720062E-8 ) ; t1999 =
pmf_sqrt ( X [ 258ULL ] * X [ 258ULL ] + 3.5023764535063242E-8 ) ; t2002 =
pmf_sqrt ( X [ 272ULL ] * X [ 272ULL ] + 4.3455507383574884E-7 ) ; t2004 =
pmf_sqrt ( X [ 272ULL ] * X [ 272ULL ] + 4.9597684650720062E-8 ) ; t2008 =
pmf_sqrt ( X [ 272ULL ] * X [ 272ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & mg_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = mg_efOut [ 0 ] ; t2010 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & ng_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ng_efOut
[ 0 ] ; t2013 = - X [ 266ULL ] + X [ 280ULL ] ; t2014 = ( - X [ 258ULL ] + X
[ 272ULL ] ) - t1974 * 100000.0 ; t2019 = ( - X [ 267ULL ] + X [ 281ULL ] ) -
t1974 * 100000.0 ; t2020 = ( ( ( 1.0 - intrm_sf_mf_608 ) - t1959 ) * t2010 +
t1987 * intrm_sf_mf_608 ) + t1593_idx_0 * t1959 ; t2024 = t2010 - X [ 4ULL ]
* 0.296802103844292 ; t2010 = t1593_idx_0 - X [ 4ULL ] * 4.12448151675695 ;
t2011 = t1987 - X [ 4ULL ] * 0.461523 ; if ( X [ 9ULL ] <= 0.0 ) { t1987 =
0.0 ; } else { t1987 = X [ 9ULL ] >= 1.0 ? 1.0 : X [ 9ULL ] ; } if ( X [ 8ULL
] <= 0.0 ) { t2026 = 0.0 ; } else { t2026 = X [ 8ULL ] >= 1.0 ? 1.0 : X [
8ULL ] ; } t2028 = ( ( ( 1.0 - t1987 ) - t2026 ) * 296.802103844292 + t1987 *
461.523 ) + t2026 * 4124.48151675695 ; t2029 = - ( ( X [ 7ULL ] / ( X [ 38ULL
] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) - X [ 284ULL ] / ( X [ 285ULL ] == 0.0 ?
1.0E-16 : X [ 285ULL ] ) ) * X [ 272ULL ] * t2028 ) / 0.32 ; if ( X [ 284ULL
] <= 216.59999999999997 ) { zc_int328 = 216.59999999999997 ; } else {
zc_int328 = X [ 284ULL ] >= 623.15 ? 623.15 : X [ 284ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = zc_int328 *
zc_int328 ; t2032 = ( ( ( 1074.1165326382641 + zc_int328 * -
0.2214565261064495 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I *
0.00037212980109014541 ) * ( ( 1.0 - t1987 ) - t2026 ) + ( (
1479.6504774711011 + zc_int328 * 1.2002114337048222 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I * -
0.00038614513167823636 ) * t1987 ) + ( ( 12825.281119789837 + zc_int328 *
6.9647057412840034 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I * -
0.0070524868246844051 ) * t2026 ; t3370 = t2032 - t2028 ; zc_int328 = t2032 /
( t3370 == 0.0 ? 1.0E-16 : t3370 ) ; t2032 = pmf_sqrt ( t2029 * t2029 *
9.999999999999999E-14 + fabs ( X [ 284ULL ] * zc_int328 * t2028 ) * 1.0E-9 )
; if ( X [ 76ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = X [ 76ULL ] >= 1.0
? 1.0 : X [ 76ULL ] ; } if ( X [ 75ULL ] <= 0.0 ) { t2034 = 0.0 ; } else {
t2034 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } t1187 [ 0ULL ] = X [ 7ULL
] ; tlu2_linear_nearest_prelookup ( & og_efOut . mField0 [ 0ULL ] , &
og_efOut . mField1 [ 0ULL ] , & og_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = og_efOut ; tlu2_1d_linear_nearest_value ( &
pg_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = pg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qg_efOut
[ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = qg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rg_efOut
[ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = rg_efOut [ 0 ] ; t2035 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) - t2034 ) *
t1593_idx_0 + t1585_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) + t1586_idx_0 *
t2034 ; t2197 = X [ 285ULL ] * X [ 285ULL ] * zc_int328 ; t2036 = - pmf_sqrt
( fabs ( t2197 / ( t2028 == 0.0 ? 1.0E-16 : t2028 ) / ( X [ 284ULL ] == 0.0 ?
1.0E-16 : X [ 284ULL ] ) ) ) * 0.32 ; if ( t2036 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok = t2036 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok = - t2036 *
100000.0 ; } t2201 = t2035 * 0.32 ; t2038 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok * 0.01 / (
t2201 == 0.0 ? 1.0E-16 : t2201 ) ; t2203 = X [ 7ULL ] * t2028 ; piece172 = X
[ 38ULL ] / ( t2203 == 0.0 ? 1.0E-16 : t2203 ) ; t2205 = piece172 *
6.4000000000000011E-5 ; t2040 = t2036 * t2035 * 2.9973120849090416 / ( t2205
== 0.0 ? 1.0E-16 : t2205 ) ; t2041 = t2038 >= 1.0 ? t2038 : 1.0 ; t2206 =
pmf_log10 ( 6.9 / ( t2041 == 0.0 ? 1.0E-16 : t2041 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2041 == 0.0 ? 1.0E-16 : t2041 ) +
0.00017169489553429715 ) * 3.24 ; t2208 = piece172 * 0.0020480000000000003 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok = t2036 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok * ( 1.0 / (
t2206 == 0.0 ? 1.0E-16 : t2206 ) ) * 0.046833001326703774 / ( t2208 == 0.0 ?
1.0E-16 : t2208 ) ; t2041 = ( t2038 - 2000.0 ) / 2000.0 ; t2042 = t2041 *
t2041 * 3.0 - t2041 * t2041 * t2041 * 2.0 ; if ( t2038 <= 2000.0 ) { t2041 =
t2040 * 1.0E-5 ; } else if ( t2038 >= 4000.0 ) { t2041 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok * 1.0E-5 ; }
else { t2041 = ( ( 1.0 - t2042 ) * t2040 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok * t2042 ) *
1.0E-5 ; } t2032 = - ( X [ 272ULL ] * t2032 ) / 0.32 * 0.00031622776601683789
+ t2041 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok = X
[ 60ULL ] - X [ 38ULL ] ; t2040 = - ( ( X [ 7ULL ] / ( X [ 38ULL ] == 0.0 ?
1.0E-16 : X [ 38ULL ] ) - X [ 286ULL ] / ( X [ 287ULL ] == 0.0 ? 1.0E-16 : X
[ 287ULL ] ) ) * X [ 129ULL ] * t2028 ) / 0.32 ; if ( X [ 286ULL ] <=
216.59999999999997 ) { t2041 = 216.59999999999997 ; } else { t2041 = X [
286ULL ] >= 623.15 ? 623.15 : X [ 286ULL ] ; } t2043 = t2041 * t2041 ; t2042
= ( ( ( 1074.1165326382641 + t2041 * - 0.2214565261064495 ) + t2043 *
0.00037212980109014541 ) * ( ( 1.0 - t1987 ) - t2026 ) + ( (
1479.6504774711011 + t2041 * 1.2002114337048222 ) + t2043 * -
0.00038614513167823636 ) * t1987 ) + ( ( 12825.281119789837 + t2041 *
6.9647057412840034 ) + t2043 * - 0.0070524868246844051 ) * t2026 ; t2216 =
t2042 - t2028 ; t2041 = t2042 / ( t2216 == 0.0 ? 1.0E-16 : t2216 ) ; t2042 =
pmf_sqrt ( t2040 * t2040 * 9.999999999999999E-14 + fabs ( X [ 286ULL ] *
t2041 * t2028 ) * 1.0E-9 ) ; t2217 = X [ 287ULL ] * X [ 287ULL ] * t2041 ;
t2043 = - pmf_sqrt ( fabs ( t2217 / ( t2028 == 0.0 ? 1.0E-16 : t2028 ) / ( X
[ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) ) ) * 0.32 ; if ( t2043 >= 0.0 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = t2043 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = - t2043 *
100000.0 ; } t2045 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok * 0.01 / (
t2201 == 0.0 ? 1.0E-16 : t2201 ) ; t1585_idx_0 = t2043 * t2035 *
2.9973120849090416 / ( t2205 == 0.0 ? 1.0E-16 : t2205 ) ; t2047 = t2045 >=
1.0 ? t2045 : 1.0 ; t2224 = pmf_log10 ( 6.9 / ( t2047 == 0.0 ? 1.0E-16 :
t2047 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2047 == 0.0 ?
1.0E-16 : t2047 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = t2043 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok * ( 1.0 / (
t2224 == 0.0 ? 1.0E-16 : t2224 ) ) * 0.046833001326703774 / ( t2208 == 0.0 ?
1.0E-16 : t2208 ) ; t2047 = ( t2045 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = t2047 * t2047
* 3.0 - t2047 * t2047 * t2047 * 2.0 ; if ( t2045 <= 2000.0 ) { t2047 =
t1585_idx_0 * 1.0E-5 ; } else if ( t2045 >= 4000.0 ) { t2047 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok * 1.0E-5 ; }
else { t2047 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) * t1585_idx_0
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) * 1.0E-5 ; }
t2042 = - ( X [ 129ULL ] * t2042 ) / 0.32 * 0.00031622776601683789 + t2047 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok = X [ 107ULL
] - X [ 38ULL ] ; t1187 [ 0ULL ] = X [ 7ULL ] ; tlu2_linear_linear_prelookup
( & sg_efOut . mField0 [ 0ULL ] , & sg_efOut . mField1 [ 0ULL ] , & sg_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = sg_efOut ;
tlu2_1d_linear_linear_value ( & tg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = tg_efOut [ 0 ] ; t2047 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & ug_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ug_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total =
t1593_idx_0 ; if ( 1.0 - X [ 9ULL ] >= 0.01 ) { t2050 = 1.0 - X [ 9ULL ] ; }
else if ( 1.0 - X [ 9ULL ] >= - 0.1 ) { t2050 = pmf_exp ( ( ( 1.0 - X [ 9ULL
] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2050 = 1.6701700790245661E-7 ; }
piece234 = X [ 8ULL ] / ( t2050 == 0.0 ? 1.0E-16 : t2050 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
vg_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = vg_efOut [ 0 ] ; t2051 = pmf_exp ( pmf_log ( X [ 38ULL ] *
100000.0 ) - t1593_idx_0 ) ; if ( t2051 >= 1.0 ) { t2231 = ( t2051 - 1.0 ) *
461.523 + piece234 ; t2052 = piece234 / ( t2231 == 0.0 ? 1.0E-16 : t2231 ) ;
} else { t2052 = 1.0 ; } t2233 = t2052 * 0.01 ; piece234 = ( X [ 9ULL ] -
t2052 ) / ( t2233 == 0.0 ? 1.0E-16 : t2233 ) ; if ( X [ 9ULL ] - t2052 <= 0.0
) { piece234 = 0.0 ; } else if ( X [ 9ULL ] - t2052 >= t2052 * 0.01 ) {
piece234 = X [ 9ULL ] - t2052 ; } else { piece234 = ( X [ 9ULL ] - t2052 ) *
( piece234 * piece234 * 3.0 - piece234 * piece234 * piece234 * 2.0 ) ; }
piece172 = piece172 * piece234 * 0.026773120849090417 / 0.001 ; piece234 = (
t2047 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) *
piece172 ; tlu2_1d_linear_nearest_value ( & wg_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = wg_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & xg_efOut [ 0ULL ] , & t73 . mField0
[ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = xg_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & yg_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = yg_efOut [ 0
] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = ( ( ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) - t2034 ) *
t1593_idx_0 + t1585_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) + t1586_idx_0 *
t2034 ; t2052 = ( 343.15 - X [ 7ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total *
10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( & ah_efOut [
0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = ah_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
bh_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = bh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ch_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = ch_efOut [ 0 ] ; t2053 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) - t2034 ) *
t1593_idx_0 + t1585_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) + t1586_idx_0 *
t2034 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = ( - X [
272ULL ] - ( - X [ 129ULL ] ) ) / 2.0 ; t2239 = ( t1653 + t2035 ) / 2.0 *
0.32 ; t1653 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I >=
0.0 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I : 0.0 ) * 0.01
/ ( t2239 == 0.0 ? 1.0E-16 : t2239 ) ; t2034 = t1653 >= 0.0 ? t1653 : - t1653
; intrm_sf_mf_853 = t2034 > 1000.0 ? t2034 : 1000.0 ; t2240 = pmf_log10 ( 6.9
/ ( intrm_sf_mf_853 == 0.0 ? 1.0E-16 : intrm_sf_mf_853 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_853 == 0.0 ?
1.0E-16 : intrm_sf_mf_853 ) + 0.00017169489553429715 ) * 3.24 ; t1585_idx_0 =
1.0 / ( t2240 == 0.0 ? 1.0E-16 : t2240 ) ; t2241 = t1994 + t2053 ; if ( (
pmf_pow ( t2241 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1585_idx_0 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2245 = ( pmf_pow ( ( t1994 +
t2053 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1585_idx_0 / 8.0
) * 12.7 + 1.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I = (
intrm_sf_mf_853 - 1000.0 ) * ( t1585_idx_0 / 8.0 ) * ( ( t1994 + t2053 ) /
2.0 ) / ( t2245 == 0.0 ? 1.0E-16 : t2245 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I = ( intrm_sf_mf_853
- 1000.0 ) * ( t1585_idx_0 / 8.0 ) * ( ( t1994 + t2053 ) / 2.0 ) / 1.0E-6 ; }
intrm_sf_mf_853 = ( t2034 - 2000.0 ) / 2000.0 ; t1585_idx_0 = intrm_sf_mf_853
* intrm_sf_mf_853 * 3.0 - intrm_sf_mf_853 * intrm_sf_mf_853 * intrm_sf_mf_853
* 2.0 ; if ( t2034 <= 2000.0 ) { intrm_sf_mf_853 = 3.66 ; } else if ( t2034
>= 4000.0 ) { intrm_sf_mf_853 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I ; } else {
intrm_sf_mf_853 = ( 1.0 - t1585_idx_0 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I * t1585_idx_0 ; }
t2252 = t2241 / 2.0 ; if ( t2034 > intrm_sf_mf_853 * 10.709248339636167 /
0.32 / ( t2252 == 0.0 ? 1.0E-16 : t2252 ) / 30.0 ) { t2258 = ( t1994 + t2053
) / 2.0 ; t1585_idx_0 = intrm_sf_mf_853 * 10.709248339636167 / ( t2034 == 0.0
? 1.0E-16 : t2034 ) / 0.32 / ( t2258 == 0.0 ? 1.0E-16 : t2258 ) ; } else {
t1585_idx_0 = 30.0 ; } t1994 = ( 343.15 - X [ 59ULL ] ) * ( 1.0 - pmf_exp ( -
t1585_idx_0 ) ) ; t1653 = t1653 * 0.32 / 0.01 * ( t2241 / 2.0 ) * ( ( t2000 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) / 2.0 ) *
t1994 ; t2264 = ( t2035 + t3649 ) / 2.0 * 0.32 ; t3649 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I <= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I : 0.0 ) * 0.01 / (
t2264 == 0.0 ? 1.0E-16 : t2264 ) ; t1994 = t3649 >= 0.0 ? t3649 : - t3649 ;
t2000 = t1994 > 1000.0 ? t1994 : 1000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = pmf_log10 ( 6.9
/ ( t2000 == 0.0 ? 1.0E-16 : t2000 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t2000 == 0.0 ? 1.0E-16 : t2000 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) ; t2266 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2053 ; if ( (
pmf_pow ( t2266 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I / 8.0 ) * 12.7 + 1.0
>= 1.0E-6 ) { intrm_sf_mf_192 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2053 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I / 8.0 ) * 12.7 + 1.0
; t2034 = ( t2000 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv + t2053 ) / 2.0 ) /
( intrm_sf_mf_192 == 0.0 ? 1.0E-16 : intrm_sf_mf_192 ) ; } else { t2034 = (
t2000 - 1000.0 ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I
/ 8.0 ) * ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv +
t2053 ) / 2.0 ) / 1.0E-6 ; } t2000 = ( t1994 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = t2000 * t2000 *
3.0 - t2000 * t2000 * t2000 * 2.0 ; if ( t1994 <= 2000.0 ) { t2000 = 3.66 ; }
else if ( t1994 >= 4000.0 ) { t2000 = t2034 ; } else { t2000 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) * 3.66 + t2034 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total = t2266 / 2.0
; if ( t1994 > t2000 * 10.709248339636167 / 0.32 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) /
30.0 ) { t2283 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv
+ t2053 ) / 2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I =
t2000 * 10.709248339636167 / ( t1994 == 0.0 ? 1.0E-16 : t1994 ) / 0.32 / (
t2283 == 0.0 ? 1.0E-16 : t2283 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = ( 343.15 - X [
106ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv = t1653 + t3649 *
0.32 / 0.01 * ( t2266 / 2.0 ) * ( ( t1745 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ; t1745 = pmf_sqrt
( X [ 129ULL ] * X [ 129ULL ] + 4.3455507383574884E-7 ) ; t1653 = pmf_sqrt (
X [ 129ULL ] * X [ 129ULL ] + 4.9597684650720062E-8 ) ; t1994 = pmf_sqrt ( X
[ 129ULL ] * X [ 129ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & dh_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = dh_efOut [ 0 ] ; t2000 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & eh_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = eh_efOut
[ 0 ] ; t2034 = ( - X [ 280ULL ] - X [ 140ULL ] ) + X [ 93ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total = ( ( ( - X [
272ULL ] - X [ 129ULL ] ) + X [ 93ULL ] ) + X [ 99ULL ] ) - piece172 *
100000.0 ; t2053 = ( ( - X [ 281ULL ] - X [ 141ULL ] ) + X [ 99ULL ] ) -
piece172 * 100000.0 ; intrm_sf_mf_853 = ( ( ( 1.0 - t1987 ) - t2026 ) * t2000
+ t2047 * t1987 ) + t1593_idx_0 * t2026 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I = t2000 - X [ 7ULL ]
* 0.296802103844292 ; t2000 = t1593_idx_0 - X [ 7ULL ] * 4.12448151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I = t2047 - X [ 7ULL ]
* 0.461523 ; if ( X [ 41ULL ] <= 0.0 ) { t2047 = 0.0 ; } else { t2047 = X [
41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t2058 =
0.0 ; } else { t2058 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t2059 = ( (
( 1.0 - t2047 ) - t2058 ) * 296.802103844292 + t2047 * 461.523 ) + t2058 *
259.836612622973 ; t2060 = - ( ( X [ 39ULL ] / ( X [ 42ULL ] == 0.0 ? 1.0E-16
: X [ 42ULL ] ) - X [ 305ULL ] / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL
] ) ) * X [ 239ULL ] * t2059 ) / 0.0019634954084936209 ; if ( X [ 305ULL ] <=
216.59999999999997 ) { t2061 = 216.59999999999997 ; } else { t2061 = X [
305ULL ] >= 623.15 ? 623.15 : X [ 305ULL ] ; } t1665 = t2061 * t2061 ; t3375
= ( ( ( 1074.1165326382641 + t2061 * - 0.2214565261064495 ) + t1665 *
0.00037212980109014541 ) * ( ( 1.0 - t2047 ) - t2058 ) + ( (
1479.6504774711011 + t2061 * 1.2002114337048222 ) + t1665 * -
0.00038614513167823636 ) * t2047 ) + ( ( 900.63941224838356 + t2061 * -
0.044484923911382625 ) + t1665 * 0.00036936011832044979 ) * t2058 ; t2292 =
t3375 - t2059 ; t2061 = t3375 / ( t2292 == 0.0 ? 1.0E-16 : t2292 ) ; t3375 =
pmf_sqrt ( t2060 * t2060 * 9.999999999999999E-14 + fabs ( X [ 305ULL ] *
t2061 * t2059 ) * 1.0E-9 ) ; if ( X [ 303ULL ] <= 0.0 ) { t1665 = 0.0 ; }
else { t1665 = X [ 303ULL ] >= 1.0 ? 1.0 : X [ 303ULL ] ; } if ( X [ 302ULL ]
<= 0.0 ) { U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 302ULL ] >= 1.0 ? 1.0 : X [
302ULL ] ; } t1187 [ 0ULL ] = X [ 39ULL ] ; tlu2_linear_nearest_prelookup ( &
fh_efOut . mField0 [ 0ULL ] , & fh_efOut . mField1 [ 0ULL ] , & fh_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = fh_efOut ;
tlu2_1d_linear_nearest_value ( & gh_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = gh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hh_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = hh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ih_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ih_efOut [ 0 ] ; t3061 =
( ( ( 1.0 - t1665 ) - U_idx_3 ) * t1593_idx_0 + t1585_idx_0 * t1665 ) +
t1586_idx_0 * U_idx_3 ; t2293 = X [ 306ULL ] * X [ 306ULL ] * t2061 ; t3039 =
- pmf_sqrt ( fabs ( t2293 / ( t2059 == 0.0 ? 1.0E-16 : t2059 ) / ( X [ 305ULL
] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3039
>= 0.0 ) { t2068 = t3039 * 100000.0 ; } else { t2068 = - t3039 * 100000.0 ; }
t2297 = t3061 * 0.0019634954084936209 ; t3129 = t2068 * 0.05 / ( t2297 == 0.0
? 1.0E-16 : t2297 ) ; t2299 = X [ 39ULL ] * t2059 ; t3373 = X [ 42ULL ] / (
t2299 == 0.0 ? 1.0E-16 : t2299 ) ; t2301 = t3373 * 9.8174770424681068E-6 ;
t3047 = t3039 * t3061 * 11.2 / ( t2301 == 0.0 ? 1.0E-16 : t2301 ) ; t3201 =
t3129 >= 1.0 ? t3129 : 1.0 ; t2302 = pmf_log10 ( 6.9 / ( t3201 == 0.0 ?
1.0E-16 : t3201 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3201 ==
0.0 ? 1.0E-16 : t3201 ) + 2.8767404433520813E-5 ) * 3.24 ; t2304 = t3373 *
3.855314219175531E-7 ; t2068 = t3039 * t2068 * ( 1.0 / ( t2302 == 0.0 ?
1.0E-16 : t2302 ) ) * 0.175 / ( t2304 == 0.0 ? 1.0E-16 : t2304 ) ; t3201 = (
t3129 - 2000.0 ) / 2000.0 ; t3222 = t3201 * t3201 * 3.0 - t3201 * t3201 *
t3201 * 2.0 ; if ( t3129 <= 2000.0 ) { t3201 = t3047 * 1.0E-5 ; } else if (
t3129 >= 4000.0 ) { t3201 = t2068 * 1.0E-5 ; } else { t3201 = ( ( 1.0 - t3222
) * t3047 + t2068 * t3222 ) * 1.0E-5 ; } t3375 = - ( X [ 239ULL ] * t3375 ) /
0.0019634954084936209 * 0.00031622776601683789 + t3201 ; t2068 = X [ 29ULL ]
- X [ 42ULL ] ; t3047 = ( X [ 39ULL ] / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [
42ULL ] ) - X [ 308ULL ] / ( X [ 309ULL ] == 0.0 ? 1.0E-16 : X [ 309ULL ] ) )
* X [ 307ULL ] * t2059 / 0.0019634954084936209 ; if ( X [ 308ULL ] <=
216.59999999999997 ) { t3201 = 216.59999999999997 ; } else { t3201 = X [
308ULL ] >= 623.15 ? 623.15 : X [ 308ULL ] ; } t3073 = t3201 * t3201 ; t3222
= ( ( ( 1074.1165326382641 + t3201 * - 0.2214565261064495 ) + t3073 *
0.00037212980109014541 ) * ( ( 1.0 - t2047 ) - t2058 ) + ( (
1479.6504774711011 + t3201 * 1.2002114337048222 ) + t3073 * -
0.00038614513167823636 ) * t2047 ) + ( ( 900.63941224838356 + t3201 * -
0.044484923911382625 ) + t3073 * 0.00036936011832044979 ) * t2058 ;
intrm_sf_mf_160 = t3222 - t2059 ; t3201 = t3222 / ( intrm_sf_mf_160 == 0.0 ?
1.0E-16 : intrm_sf_mf_160 ) ; t3222 = pmf_sqrt ( t3047 * t3047 *
9.999999999999999E-14 + fabs ( X [ 308ULL ] * t3201 * t2059 ) * 1.0E-9 ) ;
t2313 = X [ 309ULL ] * X [ 309ULL ] * t3201 ; t3073 = - pmf_sqrt ( fabs (
t2313 / ( t2059 == 0.0 ? 1.0E-16 : t2059 ) / ( X [ 308ULL ] == 0.0 ? 1.0E-16
: X [ 308ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3073 >= 0.0 ) { t2075 =
t3073 * 100000.0 ; } else { t2075 = - t3073 * 100000.0 ; } t3187 = t2075 *
0.05 / ( t2297 == 0.0 ? 1.0E-16 : t2297 ) ; t2077 = t3073 * t3061 * 11.2 / (
t2301 == 0.0 ? 1.0E-16 : t2301 ) ; intrm_sf_mf_956 = t3187 >= 1.0 ? t3187 :
1.0 ; t2320 = pmf_log10 ( 6.9 / ( intrm_sf_mf_956 == 0.0 ? 1.0E-16 :
intrm_sf_mf_956 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_956 == 0.0 ? 1.0E-16 : intrm_sf_mf_956 ) + 2.8767404433520813E-5
) * 3.24 ; t2075 = t3073 * t2075 * ( 1.0 / ( t2320 == 0.0 ? 1.0E-16 : t2320 )
) * 0.175 / ( t2304 == 0.0 ? 1.0E-16 : t2304 ) ; intrm_sf_mf_956 = ( t3187 -
2000.0 ) / 2000.0 ; t3374 = intrm_sf_mf_956 * intrm_sf_mf_956 * 3.0 -
intrm_sf_mf_956 * intrm_sf_mf_956 * intrm_sf_mf_956 * 2.0 ; if ( t3187 <=
2000.0 ) { intrm_sf_mf_956 = t2077 * 1.0E-5 ; } else if ( t3187 >= 4000.0 ) {
intrm_sf_mf_956 = t2075 * 1.0E-5 ; } else { intrm_sf_mf_956 = ( ( 1.0 - t3374
) * t2077 + t2075 * t3374 ) * 1.0E-5 ; } t3222 = X [ 307ULL ] * t3222 /
0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_956 ; t2075 = X
[ 295ULL ] - X [ 42ULL ] ; t1187 [ 0ULL ] = X [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & jh_efOut . mField0 [ 0ULL ] , & jh_efOut .
mField1 [ 0ULL ] , & jh_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t73 = jh_efOut ; tlu2_1d_linear_linear_value ( & kh_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = kh_efOut
[ 0 ] ; t2077 = t1593_idx_0 ; tlu2_1d_linear_linear_value ( & lh_efOut [ 0ULL
] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = lh_efOut [ 0 ] ; intrm_sf_mf_956 = t1593_idx_0 ; if ( 1.0 -
X [ 41ULL ] >= 0.01 ) { t2080 = 1.0 - X [ 41ULL ] ; } else if ( 1.0 - X [
41ULL ] >= - 0.1 ) { t2080 = pmf_exp ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t2080 = 1.6701700790245661E-7 ; } t3374 = X [ 40ULL
] / ( t2080 == 0.0 ? 1.0E-16 : t2080 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & mh_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
mh_efOut [ 0 ] ; t2082 = pmf_exp ( pmf_log ( X [ 42ULL ] * 100000.0 ) -
t1593_idx_0 ) ; if ( t2082 >= 1.0 ) { t2327 = ( t2082 - 1.0 ) * 461.523 +
t3374 ; t2083 = t3374 / ( t2327 == 0.0 ? 1.0E-16 : t2327 ) ; } else { t2083 =
1.0 ; } intrm_sf_mf_416 = t2083 * 0.01 ; t3374 = ( X [ 41ULL ] - t2083 ) / (
intrm_sf_mf_416 == 0.0 ? 1.0E-16 : intrm_sf_mf_416 ) ; if ( X [ 41ULL ] -
t2083 <= 0.0 ) { t3374 = 0.0 ; } else if ( X [ 41ULL ] - t2083 >= t2083 *
0.01 ) { t3374 = X [ 41ULL ] - t2083 ; } else { t3374 = ( X [ 41ULL ] - t2083
) * ( t3374 * t3374 * 3.0 - t3374 * t3374 * t3374 * 2.0 ) ; } t3373 = t3373 *
t3374 * 0.00049087385212340522 / 0.001 ; t3374 = ( t2077 - intrm_sf_mf_956 )
* t3373 ; tlu2_1d_linear_nearest_value ( & nh_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = nh_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & oh_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = oh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ph_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ph_efOut [ 0
] ; intrm_sf_mf_956 = ( ( ( 1.0 - t1665 ) - U_idx_3 ) * t1593_idx_0 +
t1585_idx_0 * t1665 ) + t1586_idx_0 * U_idx_3 ; t2083 = ( X [ 304ULL ] - X [
39ULL ] ) * ( intrm_sf_mf_956 * 0.039269908169872414 / 0.05 ) ; if ( X [
229ULL ] <= 0.0 ) { t2084 = 0.0 ; } else { t2084 = X [ 229ULL ] >= 1.0 ? 1.0
: X [ 229ULL ] ; } if ( X [ 228ULL ] <= 0.0 ) { t2977 = 0.0 ; } else { t2977
= X [ 228ULL ] >= 1.0 ? 1.0 : X [ 228ULL ] ; } t3015 = ( ( ( 1.0 - t2084 ) -
t2977 ) * 296.802103844292 + t2084 * 461.523 ) + t2977 * 259.836612622973 ;
intrm_sf_mf_934 = X [ 229ULL ] * 461.523 / ( t3015 == 0.0 ? 1.0E-16 : t3015 )
; if ( intrm_sf_mf_934 <= 0.0 ) { t2088 = 0.0 ; } else { t2088 =
intrm_sf_mf_934 >= 1.0 ? 1.0 : intrm_sf_mf_934 ; } intrm_sf_mf_934 = X [
228ULL ] * 259.836612622973 / ( t3015 == 0.0 ? 1.0E-16 : t3015 ) ; if (
intrm_sf_mf_934 <= 0.0 ) { t3361 = 0.0 ; } else { t3361 = intrm_sf_mf_934 >=
1.0 ? 1.0 : intrm_sf_mf_934 ; } t1187 [ 0ULL ] = X [ 227ULL ] ;
tlu2_linear_nearest_prelookup ( & qh_efOut . mField0 [ 0ULL ] , & qh_efOut .
mField1 [ 0ULL ] , & qh_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = qh_efOut ; tlu2_1d_linear_nearest_value ( & rh_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = rh_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & sh_efOut [ 0ULL ] , & t70 . mField0
[ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = sh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & th_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = th_efOut [ 0
] ; intrm_sf_mf_934 = ( ( ( 1.0 - t2088 ) - t3361 ) * t1593_idx_0 +
t1585_idx_0 * t2088 ) + t1586_idx_0 * t3361 ; tlu2_1d_linear_nearest_value (
& uh_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [
0ULL ] ) ; t1593_idx_0 = uh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
vh_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = vh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
wh_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = wh_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv = ( ( ( 1.0 - t1665
) - U_idx_3 ) * t1593_idx_0 + t1585_idx_0 * t1665 ) + t1586_idx_0 * U_idx_3 ;
tlu2_1d_linear_nearest_value ( & xh_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = xh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yh_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = yh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ai_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ai_efOut [ 0 ] ; t1665 =
( ( ( 1.0 - t2088 ) - t3361 ) * t1593_idx_0 + t1585_idx_0 * t2088 ) +
t1586_idx_0 * t3361 ; U_idx_3 = ( - X [ 239ULL ] - X [ 307ULL ] ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & bi_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = bi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ci_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ci_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & di_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = di_efOut [ 0 ] ;
intrm_sf_mf_850 = ( t3061 + ( ( ( ( 1.0 - t2088 ) - t3361 ) * t1593_idx_0 +
t1585_idx_0 * t2088 ) + t1586_idx_0 * t3361 ) ) / 2.0 * 0.0019634954084936209
; t2088 = ( U_idx_3 >= 0.0 ? U_idx_3 : 0.0 ) * 0.05 / ( intrm_sf_mf_850 ==
0.0 ? 1.0E-16 : intrm_sf_mf_850 ) ; t3361 = t2088 >= 0.0 ? t2088 : - t2088 ;
t3235 = t3361 > 1000.0 ? t3361 : 1000.0 ; t2338 = pmf_log10 ( 6.9 / ( t3235
== 0.0 ? 1.0E-16 : t3235 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t3235 == 0.0 ? 1.0E-16 : t3235 ) + 2.8767404433520813E-5 ) * 3.24 ; t2093 =
1.0 / ( t2338 == 0.0 ? 1.0E-16 : t2338 ) ; intrm_sf_mf_739 = intrm_sf_mf_934
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ; if ( ( pmf_pow (
intrm_sf_mf_739 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2093 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { intrm_sf_mf_871 = ( pmf_pow ( (
intrm_sf_mf_934 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv )
/ 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2093 / 8.0 ) * 12.7 + 1.0
; t2097 = ( t3235 - 1000.0 ) * ( t2093 / 8.0 ) * ( ( intrm_sf_mf_934 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ) / 2.0 ) / (
intrm_sf_mf_871 == 0.0 ? 1.0E-16 : intrm_sf_mf_871 ) ; } else { t2097 = (
t3235 - 1000.0 ) * ( t2093 / 8.0 ) * ( ( intrm_sf_mf_934 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ) / 2.0 ) / 1.0E-6 ;
} t3235 = ( t3361 - 2000.0 ) / 2000.0 ; t2093 = t3235 * t3235 * 3.0 - t3235 *
t3235 * t3235 * 2.0 ; if ( t3361 <= 2000.0 ) { t3235 = 3.66 ; } else if (
t3361 >= 4000.0 ) { t3235 = t2097 ; } else { t3235 = ( 1.0 - t2093 ) * 3.66 +
t2097 * t2093 ; } t2412 = intrm_sf_mf_739 / 2.0 ; if ( t3361 > t3235 *
0.039269908169872414 / 0.0019634954084936209 / ( t2412 == 0.0 ? 1.0E-16 :
t2412 ) / 30.0 ) { t2399 = ( intrm_sf_mf_934 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ) / 2.0 ; t2093 =
t3235 * 0.039269908169872414 / ( t3361 == 0.0 ? 1.0E-16 : t3361 ) /
0.0019634954084936209 / ( t2399 == 0.0 ? 1.0E-16 : t2399 ) ; } else { t2093 =
30.0 ; } intrm_sf_mf_934 = ( X [ 304ULL ] - X [ 227ULL ] ) * ( 1.0 - pmf_exp
( - t2093 ) ) ; t1665 = t2088 * 0.0019634954084936209 / 0.05 * (
intrm_sf_mf_739 / 2.0 ) * ( ( t1665 + intrm_sf_mf_956 ) / 2.0 ) *
intrm_sf_mf_934 ; if ( X [ 297ULL ] <= 0.0 ) { intrm_sf_mf_934 = 0.0 ; } else
{ intrm_sf_mf_934 = X [ 297ULL ] >= 1.0 ? 1.0 : X [ 297ULL ] ; } if ( X [
296ULL ] <= 0.0 ) { t2088 = 0.0 ; } else { t2088 = X [ 296ULL ] >= 1.0 ? 1.0
: X [ 296ULL ] ; } t3361 = ( ( ( 1.0 - intrm_sf_mf_934 ) - t2088 ) *
296.802103844292 + intrm_sf_mf_934 * 461.523 ) + t2088 * 259.836612622973 ;
t3235 = X [ 297ULL ] * 461.523 / ( t3361 == 0.0 ? 1.0E-16 : t3361 ) ; if (
t3235 <= 0.0 ) { t2093 = 0.0 ; } else { t2093 = t3235 >= 1.0 ? 1.0 : t3235 ;
} t3235 = X [ 296ULL ] * 259.836612622973 / ( t3361 == 0.0 ? 1.0E-16 : t3361
) ; if ( t3235 <= 0.0 ) { t2097 = 0.0 ; } else { t2097 = t3235 >= 1.0 ? 1.0 :
t3235 ; } t1187 [ 0ULL ] = X [ 294ULL ] ; tlu2_linear_nearest_prelookup ( &
ei_efOut . mField0 [ 0ULL ] , & ei_efOut . mField1 [ 0ULL ] , & ei_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = ei_efOut ;
tlu2_1d_linear_nearest_value ( & fi_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = fi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gi_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = gi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hi_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = hi_efOut [ 0 ] ; t3235 =
( ( ( 1.0 - t2093 ) - t2097 ) * t1593_idx_0 + t1585_idx_0 * t2093 ) +
t1586_idx_0 * t2097 ; tlu2_1d_linear_nearest_value ( & ii_efOut [ 0ULL ] , &
t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
ii_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ji_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ji_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ki_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ki_efOut [ 0
] ; t2098 = ( ( ( 1.0 - t2093 ) - t2097 ) * t1593_idx_0 + t1585_idx_0 * t2093
) + t1586_idx_0 * t2097 ; t2100 = U_idx_3 <= 0.0 ? U_idx_3 : 0.0 ;
tlu2_1d_linear_nearest_value ( & li_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = li_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mi_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = mi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ni_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ni_efOut [ 0 ] ; U_idx_3
= ( ( ( 1.0 - t2093 ) - t2097 ) * t1593_idx_0 + t1585_idx_0 * t2093 ) +
t1586_idx_0 * t2097 ; t1585_idx_0 = ( t3061 + U_idx_3 ) / 2.0 *
0.0019634954084936209 ; t2093 = - t2100 * 0.05 / ( t1585_idx_0 == 0.0 ?
1.0E-16 : t1585_idx_0 ) ; t2097 = t2093 >= 0.0 ? t2093 : - t2093 ; t2100 =
t2097 > 1000.0 ? t2097 : 1000.0 ; t2412 = pmf_log10 ( 6.9 / ( t2100 == 0.0 ?
1.0E-16 : t2100 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2100 ==
0.0 ? 1.0E-16 : t2100 ) + 2.8767404433520813E-5 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 = 1.0 / (
t2412 == 0.0 ? 1.0E-16 : t2412 ) ; t2412 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv + t3235 ; if ( (
pmf_pow ( t2412 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) { t2392 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv + t3235 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 / 8.0 ) *
12.7 + 1.0 ; t2106 = ( t2100 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv + t3235 ) / 2.0 ) /
( t2392 == 0.0 ? 1.0E-16 : t2392 ) ; } else { t2106 = ( t2100 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv + t3235 ) / 2.0 ) /
1.0E-6 ; } t2100 = ( t2097 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 = t2100 *
t2100 * 3.0 - t2100 * t2100 * t2100 * 2.0 ; if ( t2097 <= 2000.0 ) { t2100 =
3.66 ; } else if ( t2097 >= 4000.0 ) { t2100 = t2106 ; } else { t2100 = ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 ) * 3.66 +
t2106 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 ; }
t1585_idx_0 = t2412 / 2.0 ; if ( t2097 > t2100 * 0.039269908169872414 /
0.0019634954084936209 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) / 30.0
) { t2383 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv +
t3235 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 = t2100 *
0.039269908169872414 / ( t2097 == 0.0 ? 1.0E-16 : t2097 ) /
0.0019634954084936209 / ( t2383 == 0.0 ? 1.0E-16 : t2383 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv = ( X [ 304ULL ] - X
[ 294ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv = t1665 + t2093 *
0.0019634954084936209 / 0.05 * ( t2412 / 2.0 ) * ( ( intrm_sf_mf_956 + t2098
) / 2.0 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ; t1665
= pmf_sqrt ( X [ 239ULL ] * X [ 239ULL ] + 3.0116308772356542E-13 ) ;
intrm_sf_mf_956 = pmf_sqrt ( X [ 239ULL ] * X [ 239ULL ] +
5.8094731428156895E-13 ) ; t2093 = pmf_sqrt ( X [ 239ULL ] * X [ 239ULL ] +
4.1024015709531014E-13 ) ; t2097 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] +
3.0116308772356542E-13 ) ; t2100 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] +
5.8094731428156895E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 = pmf_sqrt (
X [ 307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & oi_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = oi_efOut [ 0 ] ; t2106 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & pi_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = pi_efOut
[ 0 ] ; t2109 = - X [ 240ULL ] + X [ 315ULL ] ; t2111 = ( ( - X [ 239ULL ] +
X [ 307ULL ] ) + U_idx_7 ) - t3373 * 100000.0 ; t2112 = ( ( - X [ 241ULL ] +
X [ 316ULL ] ) + U_idx_7 ) - t3373 * 100000.0 ; t2117 = ( ( ( 1.0 - t2047 ) -
t2058 ) * t2106 + t2077 * t2047 ) + t1593_idx_0 * t2058 ; t2120 = t2106 - X [
39ULL ] * 0.296802103844292 ; t2106 = t1593_idx_0 - X [ 39ULL ] *
0.25983661262297303 ; t2108 = t2077 - X [ 39ULL ] * 0.461523 ; t2077 =
pmf_sqrt ( X [ 330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 ) ; t2122 =
pmf_sqrt ( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) ; t2124 =
pmf_sqrt ( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) ; if ( X [
335ULL ] <= 0.0 ) { t2126 = 0.0 ; } else { t2126 = X [ 335ULL ] >= 1.0 ? 1.0
: X [ 335ULL ] ; } if ( X [ 336ULL ] <= 0.0 ) { t2127 = 0.0 ; } else { t2127
= X [ 336ULL ] >= 1.0 ? 1.0 : X [ 336ULL ] ; } t2129 = ( ( ( 1.0 - t2126 ) -
t2127 ) * 296.802103844292 + t2126 * 461.523 ) + t2127 * 259.836612622973 ;
t2130 = ( X [ 339ULL ] * 0.07812500122070315 + U_idx_9 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 45ULL ] <= 0.0 ) { t2131 = 0.0 ; } else {
t2131 = X [ 45ULL ] >= 1.0 ? 1.0 : X [ 45ULL ] ; } if ( X [ 46ULL ] <= 0.0 )
{ t2132 = 0.0 ; } else { t2132 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; }
t2133 = ( ( ( 1.0 - t2131 ) - t2132 ) * 296.802103844292 + t2131 * 461.523 )
+ t2132 * 259.836612622973 ; t3092 = ( X [ 43ULL ] / ( X [ 44ULL ] == 0.0 ?
1.0E-16 : X [ 44ULL ] ) - X [ 343ULL ] / ( X [ 344ULL ] == 0.0 ? 1.0E-16 : X
[ 344ULL ] ) ) * X [ 342ULL ] * t2133 / 0.0019634954084936209 ; if ( X [
343ULL ] <= 216.59999999999997 ) { t3108 = 216.59999999999997 ; } else {
t3108 = X [ 343ULL ] >= 623.15 ? 623.15 : X [ 343ULL ] ; } t3649 = t3108 *
t3108 ; t3142 = ( ( ( 1074.1165326382641 + t3108 * - 0.2214565261064495 ) +
t3649 * 0.00037212980109014541 ) * ( ( 1.0 - t2131 ) - t2132 ) + ( (
1479.6504774711011 + t3108 * 1.2002114337048222 ) + t3649 * -
0.00038614513167823636 ) * t2131 ) + ( ( 900.63941224838356 + t3108 * -
0.044484923911382625 ) + t3649 * 0.00036936011832044979 ) * t2132 ; t2392 =
t3142 - t2133 ; t3108 = t3142 / ( t2392 == 0.0 ? 1.0E-16 : t2392 ) ; t3142 =
pmf_sqrt ( t3092 * t3092 * 9.999999999999999E-14 + fabs ( X [ 343ULL ] *
t3108 * t2133 ) * 1.0E-9 ) ; if ( X [ 345ULL ] <= 0.0 ) { t3649 = 0.0 ; }
else { t3649 = X [ 345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ; } if ( X [ 346ULL ]
<= 0.0 ) { t2138 = 0.0 ; } else { t2138 = X [ 346ULL ] >= 1.0 ? 1.0 : X [
346ULL ] ; } t1187 [ 0ULL ] = X [ 43ULL ] ; tlu2_linear_nearest_prelookup ( &
qi_efOut . mField0 [ 0ULL ] , & qi_efOut . mField1 [ 0ULL ] , & qi_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t70 = qi_efOut ;
tlu2_1d_linear_nearest_value ( & ri_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ri_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & si_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = si_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ti_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ti_efOut [ 0 ] ; t3156 =
( ( ( 1.0 - t3649 ) - t2138 ) * t1593_idx_0 + t1585_idx_0 * t3649 ) +
t1586_idx_0 * t2138 ; t2392 = X [ 344ULL ] * X [ 344ULL ] * t3108 ; t3157 = -
pmf_sqrt ( fabs ( t2392 / ( t2133 == 0.0 ? 1.0E-16 : t2133 ) / ( X [ 343ULL ]
== 0.0 ? 1.0E-16 : X [ 343ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3157 >=
0.0 ) { t2141 = t3157 * 100000.0 ; } else { t2141 = - t3157 * 100000.0 ; }
t2383 = t3156 * 0.0019634954084936209 ; t3173 = t2141 * 0.05 / ( t2383 == 0.0
? 1.0E-16 : t2383 ) ; t2399 = X [ 43ULL ] * t2133 ; t4072 = X [ 44ULL ] / (
t2399 == 0.0 ? 1.0E-16 : t2399 ) ; t2401 = t4072 * 9.8174770424681068E-6 ;
t3180 = t3157 * t3156 * 35.2 / ( t2401 == 0.0 ? 1.0E-16 : t2401 ) ; t3311 =
t3173 >= 1.0 ? t3173 : 1.0 ; t1585_idx_0 = pmf_log10 ( 6.9 / ( t3311 == 0.0 ?
1.0E-16 : t3311 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3311 ==
0.0 ? 1.0E-16 : t3311 ) + 2.8767404433520813E-5 ) * 3.24 ; t2404 = t4072 *
3.855314219175531E-7 ; t2141 = t3157 * t2141 * ( 1.0 / ( t1585_idx_0 == 0.0 ?
1.0E-16 : t1585_idx_0 ) ) * 0.55 / ( t2404 == 0.0 ? 1.0E-16 : t2404 ) ; t3311
= ( t3173 - 2000.0 ) / 2000.0 ; t2146 = t3311 * t3311 * 3.0 - t3311 * t3311 *
t3311 * 2.0 ; if ( t3173 <= 2000.0 ) { t3311 = t3180 * 1.0E-5 ; } else if (
t3173 >= 4000.0 ) { t3311 = t2141 * 1.0E-5 ; } else { t3311 = ( ( 1.0 - t2146
) * t3180 + t2141 * t2146 ) * 1.0E-5 ; } t3142 = X [ 342ULL ] * t3142 /
0.0019634954084936209 * 0.00031622776601683789 + t3311 ; t2141 = X [ 320ULL ]
- X [ 44ULL ] ; t3180 = - ( ( X [ 43ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 :
X [ 44ULL ] ) - X [ 347ULL ] / ( X [ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ]
) ) * X [ 330ULL ] * t2133 ) / 0.0019634954084936209 ; if ( X [ 347ULL ] <=
216.59999999999997 ) { t3311 = 216.59999999999997 ; } else { t3311 = X [
347ULL ] >= 623.15 ? 623.15 : X [ 347ULL ] ; } t3252 = t3311 * t3311 ; t2146
= ( ( ( 1074.1165326382641 + t3311 * - 0.2214565261064495 ) + t3252 *
0.00037212980109014541 ) * ( ( 1.0 - t2131 ) - t2132 ) + ( (
1479.6504774711011 + t3311 * 1.2002114337048222 ) + t3252 * -
0.00038614513167823636 ) * t2131 ) + ( ( 900.63941224838356 + t3311 * -
0.044484923911382625 ) + t3252 * 0.00036936011832044979 ) * t2132 ; t2412 =
t2146 - t2133 ; t3311 = t2146 / ( t2412 == 0.0 ? 1.0E-16 : t2412 ) ; t2146 =
pmf_sqrt ( t3180 * t3180 * 9.999999999999999E-14 + fabs ( X [ 347ULL ] *
t3311 * t2133 ) * 1.0E-9 ) ; t2412 = X [ 348ULL ] * X [ 348ULL ] * t3311 ;
t3252 = - pmf_sqrt ( fabs ( t2412 / ( t2133 == 0.0 ? 1.0E-16 : t2133 ) / ( X
[ 347ULL ] == 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) ) * 0.0019634954084936209 ; if
( t3252 >= 0.0 ) { t2148 = t3252 * 100000.0 ; } else { t2148 = - t3252 *
100000.0 ; } t2149 = t2148 * 0.05 / ( t2383 == 0.0 ? 1.0E-16 : t2383 ) ;
intrm_sf_mf_1151 = t3252 * t3156 * 35.2 / ( t2401 == 0.0 ? 1.0E-16 : t2401 )
; t2151 = t2149 >= 1.0 ? t2149 : 1.0 ; U_idx_2 = pmf_log10 ( 6.9 / ( t2151 ==
0.0 ? 1.0E-16 : t2151 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2151
== 0.0 ? 1.0E-16 : t2151 ) + 2.8767404433520813E-5 ) * 3.24 ; t2148 = t3252 *
t2148 * ( 1.0 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ) * 0.55 / ( t2404 ==
0.0 ? 1.0E-16 : t2404 ) ; t2151 = ( t2149 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = t2151 *
t2151 * 3.0 - t2151 * t2151 * t2151 * 2.0 ; if ( t2149 <= 2000.0 ) { t2151 =
intrm_sf_mf_1151 * 1.0E-5 ; } else if ( t2149 >= 4000.0 ) { t2151 = t2148 *
1.0E-5 ; } else { t2151 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens ) *
intrm_sf_mf_1151 + t2148 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens ) * 1.0E-5 ;
} t2146 = - ( X [ 330ULL ] * t2146 ) / 0.0019634954084936209 *
0.00031622776601683789 + t2151 ; t2148 = t2130 - X [ 44ULL ] ; t1187 [ 0ULL ]
= X [ 43ULL ] ; tlu2_linear_linear_prelookup ( & ui_efOut . mField0 [ 0ULL ]
, & ui_efOut . mField1 [ 0ULL ] , & ui_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = ui_efOut ; tlu2_1d_linear_linear_value ( &
vi_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = vi_efOut [ 0 ] ; intrm_sf_mf_1151 = t1593_idx_0 ;
tlu2_1d_linear_linear_value ( & wi_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = wi_efOut [ 0 ] ; t2151 =
t1593_idx_0 ; if ( 1.0 - X [ 45ULL ] >= 0.01 ) { t2154 = 1.0 - X [ 45ULL ] ;
} else if ( 1.0 - X [ 45ULL ] >= - 0.1 ) { t2154 = pmf_exp ( ( ( 1.0 - X [
45ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2154 = 1.6701700790245661E-7 ;
} Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = X [ 46ULL
] / ( t2154 == 0.0 ? 1.0E-16 : t2154 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & xi_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
xi_efOut [ 0 ] ; t2155 = pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) -
t1593_idx_0 ) ; if ( t2155 >= 1.0 ) { U_idx_2 = ( t2155 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens / ( U_idx_2
== 0.0 ? 1.0E-16 : U_idx_2 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond = 1.0 ; } t2488 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = ( X [ 45ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ) / ( t2488 ==
0.0 ? 1.0E-16 : t2488 ) ; if ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = 0.0 ; }
else if ( X [ 45ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = X [ 45ULL ]
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = ( X [ 45ULL
] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens * 2.0 ) ; }
t4072 = t4072 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens *
0.0019634954084936209 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens = (
intrm_sf_mf_1151 - t2151 ) * t4072 ; tlu2_1d_linear_nearest_value ( &
yi_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = yi_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & aj_efOut
[ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = aj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
bj_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = bj_efOut [ 0 ] ; t2151 = ( ( ( 1.0 - t3649 ) - t2138 ) *
t1593_idx_0 + t1585_idx_0 * t3649 ) + t1586_idx_0 * t2138 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond = ( X [ 323ULL ] - X
[ 43ULL ] ) * ( t2151 * 0.15707963267948966 / 0.05 ) ; if ( X [ 322ULL ] <=
0.0 ) { t3256 = 0.0 ; } else { t3256 = X [ 322ULL ] >= 1.0 ? 1.0 : X [ 322ULL
] ; } if ( X [ 321ULL ] <= 0.0 ) { intrm_sf_mf_1126 = 0.0 ; } else {
intrm_sf_mf_1126 = X [ 321ULL ] >= 1.0 ? 1.0 : X [ 321ULL ] ; } t3078 = ( ( (
1.0 - t3256 ) - intrm_sf_mf_1126 ) * 296.802103844292 + t3256 * 461.523 ) +
intrm_sf_mf_1126 * 259.836612622973 ; t2160 = X [ 322ULL ] * 461.523 / (
t3078 == 0.0 ? 1.0E-16 : t3078 ) ; if ( t2160 <= 0.0 ) { t2161 = 0.0 ; } else
{ t2161 = t2160 >= 1.0 ? 1.0 : t2160 ; } t2160 = X [ 321ULL ] *
259.836612622973 / ( t3078 == 0.0 ? 1.0E-16 : t3078 ) ; if ( t2160 <= 0.0 ) {
t2163 = 0.0 ; } else { t2163 = t2160 >= 1.0 ? 1.0 : t2160 ; } t1187 [ 0ULL ]
= X [ 319ULL ] ; tlu2_linear_nearest_prelookup ( & cj_efOut . mField0 [ 0ULL
] , & cj_efOut . mField1 [ 0ULL ] , & cj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = cj_efOut ; tlu2_1d_linear_nearest_value ( &
dj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = dj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ej_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = ej_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
fj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = fj_efOut [ 0 ] ; t2160 = ( ( ( 1.0 - t2161 ) - t2163 ) *
t1593_idx_0 + t1585_idx_0 * t2161 ) + t1586_idx_0 * t2163 ;
tlu2_1d_linear_nearest_value ( & gj_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = gj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hj_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = hj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ij_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ij_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 = ( ( ( 1.0 -
t3649 ) - t2138 ) * t1593_idx_0 + t1585_idx_0 * t3649 ) + t1586_idx_0 * t2138
; tlu2_1d_linear_nearest_value ( & jj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = jj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = kj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & lj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = lj_efOut [ 0 ] ; t3649 =
( ( ( 1.0 - t2161 ) - t2163 ) * t1593_idx_0 + t1585_idx_0 * t2161 ) +
t1586_idx_0 * t2163 ; t2138 = ( X [ 342ULL ] - ( - X [ 330ULL ] ) ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & mj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = mj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = nj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = oj_efOut [ 0 ] ; t2166 =
( ( ( 1.0 - t2161 ) - t2163 ) * t1593_idx_0 + t1585_idx_0 * t2161 ) +
t1586_idx_0 * t2163 ; t2510 = ( t3156 + t2166 ) / 2.0 * 0.0019634954084936209
; t2161 = ( t2138 >= 0.0 ? t2138 : 0.0 ) * 0.05 / ( t2510 == 0.0 ? 1.0E-16 :
t2510 ) ; t2163 = t2161 >= 0.0 ? t2161 : - t2161 ; intrm_sf_mf_1179 = t2163 >
1000.0 ? t2163 : 1000.0 ; U_idx_2 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1179 ==
0.0 ? 1.0E-16 : intrm_sf_mf_1179 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1179 == 0.0 ? 1.0E-16 : intrm_sf_mf_1179 ) +
2.8767404433520813E-5 ) * 3.24 ; t3270 = 1.0 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ; U_idx_2 = t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ; if ( (
pmf_pow ( U_idx_2 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t3270 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2514 = ( pmf_pow ( ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t3270 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = (
intrm_sf_mf_1179 - 1000.0 ) * ( t3270 / 8.0 ) * ( ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ) / (
t2514 == 0.0 ? 1.0E-16 : t2514 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = (
intrm_sf_mf_1179 - 1000.0 ) * ( t3270 / 8.0 ) * ( ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ) /
1.0E-6 ; } intrm_sf_mf_1179 = ( t2163 - 2000.0 ) / 2000.0 ; t3270 =
intrm_sf_mf_1179 * intrm_sf_mf_1179 * 3.0 - intrm_sf_mf_1179 *
intrm_sf_mf_1179 * intrm_sf_mf_1179 * 2.0 ; if ( t2163 <= 2000.0 ) {
intrm_sf_mf_1179 = 3.66 ; } else if ( t2163 >= 4000.0 ) { intrm_sf_mf_1179 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ; } else {
intrm_sf_mf_1179 = ( 1.0 - t3270 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in * t3270 ; } t2488
= U_idx_2 / 2.0 ; if ( t2163 > intrm_sf_mf_1179 * 0.15707963267948966 /
0.0019634954084936209 / ( t2488 == 0.0 ? 1.0E-16 : t2488 ) / 30.0 ) {
t1585_idx_0 = ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 ;
t3270 = intrm_sf_mf_1179 * 0.15707963267948966 / ( t2163 == 0.0 ? 1.0E-16 :
t2163 ) / 0.0019634954084936209 / ( t1585_idx_0 == 0.0 ? 1.0E-16 :
t1585_idx_0 ) ; } else { t3270 = 30.0 ; } t2163 = ( X [ 323ULL ] - X [ 319ULL
] ) * ( 1.0 - pmf_exp ( - t3270 ) ) ; t2161 = t2161 * 0.0019634954084936209 /
0.05 * ( U_idx_2 / 2.0 ) * ( ( t3649 + t2151 ) / 2.0 ) * t2163 ; if ( X [
341ULL ] <= 0.0 ) { t2163 = 0.0 ; } else { t2163 = X [ 341ULL ] >= 1.0 ? 1.0
: X [ 341ULL ] ; } if ( X [ 340ULL ] <= 0.0 ) { intrm_sf_mf_1179 = 0.0 ; }
else { intrm_sf_mf_1179 = X [ 340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; } t3270
= ( ( ( 1.0 - t2163 ) - intrm_sf_mf_1179 ) * 296.802103844292 + t2163 *
461.523 ) + intrm_sf_mf_1179 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = X [ 341ULL ] *
461.523 / ( t3270 == 0.0 ? 1.0E-16 : t3270 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in <= 0.0 ) { t2169 =
0.0 ; } else { t2169 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = X [ 340ULL ] *
259.836612622973 / ( t3270 == 0.0 ? 1.0E-16 : t3270 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in <= 0.0 ) { t2170 =
0.0 ; } else { t2170 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ; } t1187 [ 0ULL ]
= X [ 338ULL ] ; tlu2_linear_nearest_prelookup ( & pj_efOut . mField0 [ 0ULL
] , & pj_efOut . mField1 [ 0ULL ] , & pj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = pj_efOut ; tlu2_1d_linear_nearest_value ( &
qj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = qj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
rj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = rj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
sj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = sj_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = ( ( ( 1.0 -
t2169 ) - t2170 ) * t1593_idx_0 + t1585_idx_0 * t2169 ) + t1586_idx_0 * t2170
; tlu2_1d_linear_nearest_value ( & tj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = tj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & uj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = uj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vj_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = vj_efOut [ 0 ] ; t2171 =
( ( ( 1.0 - t2169 ) - t2170 ) * t1593_idx_0 + t1585_idx_0 * t2169 ) +
t1586_idx_0 * t2170 ; tlu2_1d_linear_nearest_value ( & wj_efOut [ 0ULL ] , &
t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
wj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xj_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = xj_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & yj_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = yj_efOut [ 0
] ; t2510 = ( t3156 + ( ( ( ( 1.0 - t2169 ) - t2170 ) * t1593_idx_0 +
t1585_idx_0 * t2169 ) + t1586_idx_0 * t2170 ) ) / 2.0 * 0.0019634954084936209
; t2138 = - ( t2138 <= 0.0 ? t2138 : 0.0 ) * 0.05 / ( t2510 == 0.0 ? 1.0E-16
: t2510 ) ; t2169 = t2138 >= 0.0 ? t2138 : - t2138 ; t2170 = t2169 > 1000.0 ?
t2169 : 1000.0 ; U_idx_2 = pmf_log10 ( 6.9 / ( t2170 == 0.0 ? 1.0E-16 : t2170
) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2170 == 0.0 ? 1.0E-16 :
t2170 ) + 2.8767404433520813E-5 ) * 3.24 ; t2172 = 1.0 / ( U_idx_2 == 0.0 ?
1.0E-16 : U_idx_2 ) ; U_idx_2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ; if ( ( pmf_pow (
U_idx_2 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2172 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) { t2514 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2172 / 8.0 ) * 12.7 + 1.0 ; t2173
= ( t2170 - 1000.0 ) * ( t2172 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ) / 2.0 ) / (
t2514 == 0.0 ? 1.0E-16 : t2514 ) ; } else { t2173 = ( t2170 - 1000.0 ) * (
t2172 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ) / 2.0 ) / 1.0E-6
; } t2170 = ( t2169 - 2000.0 ) / 2000.0 ; t2172 = t2170 * t2170 * 3.0 - t2170
* t2170 * t2170 * 2.0 ; if ( t2169 <= 2000.0 ) { t2170 = 3.66 ; } else if (
t2169 >= 4000.0 ) { t2170 = t2173 ; } else { t2170 = ( 1.0 - t2172 ) * 3.66 +
t2173 * t2172 ; } t2488 = U_idx_2 / 2.0 ; if ( t2169 > t2170 *
0.15707963267948966 / 0.0019634954084936209 / ( t2488 == 0.0 ? 1.0E-16 :
t2488 ) / 30.0 ) { t1585_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ) / 2.0 ; t2172 =
t2170 * 0.15707963267948966 / ( t2169 == 0.0 ? 1.0E-16 : t2169 ) /
0.0019634954084936209 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; }
else { t2172 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 = ( X [
323ULL ] - X [ 338ULL ] ) * ( 1.0 - pmf_exp ( - t2172 ) ) ; t2151 = t2161 +
t2138 * 0.0019634954084936209 / 0.05 * ( U_idx_2 / 2.0 ) * ( ( t2151 + t2171
) / 2.0 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ;
t2138 = pmf_sqrt ( X [ 342ULL ] * X [ 342ULL ] + 3.0116308772356542E-13 ) ;
t2161 = pmf_sqrt ( X [ 342ULL ] * X [ 342ULL ] + 5.8094731428156895E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 = pmf_sqrt (
X [ 342ULL ] * X [ 342ULL ] + 4.1024015709531014E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in = pmf_sqrt ( X [
330ULL ] * X [ 330ULL ] + 3.0116308772356542E-13 ) ; t2169 = pmf_sqrt ( X [
330ULL ] * X [ 330ULL ] + 5.8094731428156895E-13 ) ; t2170 = pmf_sqrt ( X [
330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 ) ;
tlu2_1d_linear_linear_value ( & ak_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ak_efOut [ 0 ] ; t2171 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & bk_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = bk_efOut
[ 0 ] ; t2173 = - X [ 331ULL ] + X [ 353ULL ] ; t2174 = ( - X [ 330ULL ] + X
[ 342ULL ] ) - t4072 * 100000.0 ; t2175 = ( - X [ 332ULL ] + X [ 354ULL ] ) -
t4072 * 100000.0 ; t2176 = ( ( ( 1.0 - t2131 ) - t2132 ) * t2171 +
intrm_sf_mf_1151 * t2131 ) + t1593_idx_0 * t2132 ; t2178 = t2171 - X [ 43ULL
] * 0.296802103844292 ; t2171 = t1593_idx_0 - X [ 43ULL ] *
0.25983661262297303 ; t2172 = intrm_sf_mf_1151 - X [ 43ULL ] * 0.461523 ; if
( X [ 339ULL ] * 0.0019634954084936209 <= 1.9634954084936209E-11 ) {
intrm_sf_mf_1151 = 1.9634954084936209E-11 ; } else if ( X [ 339ULL ] *
0.0019634954084936209 >= 0.0012566370614359179 ) { intrm_sf_mf_1151 =
0.0012566370614359179 ; } else { intrm_sf_mf_1151 = X [ 339ULL ] *
0.0019634954084936209 ; } t3280 = intrm_sf_mf_1151 / 0.0019634954084936209 ;
if ( X [ 362ULL ] <= 0.0 ) { t2181 = 0.0 ; } else { t2181 = X [ 362ULL ] >=
1.0 ? 1.0 : X [ 362ULL ] ; } if ( X [ 363ULL ] <= 0.0 ) { t2991 = 0.0 ; }
else { t2991 = X [ 363ULL ] >= 1.0 ? 1.0 : X [ 363ULL ] ; } t2183 = ( ( ( 1.0
- t2181 ) - t2991 ) * 296.802103844292 + t2181 * 461.523 ) + t2991 *
259.836612622973 ; t2488 = X [ 360ULL ] * t2183 ; t2184 = X [ 361ULL ] / (
t2488 == 0.0 ? 1.0E-16 : t2488 ) ; t3316 = X [ 361ULL ] / ( t2130 == 0.0 ?
1.0E-16 : t2130 ) * ( X [ 364ULL ] / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [
360ULL ] ) ) ; t2186 = X [ 361ULL ] / 1.01325 * ( X [ 365ULL ] / ( X [ 360ULL
] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ; if ( X [ 330ULL ] > 0.0 ) { t2187 = (
t3280 + 1.0 ) * ( 1.0 - t3280 * t3316 ) * ( X [ 330ULL ] / 0.64 / (
intrm_sf_mf_1151 == 0.0 ? 1.0E-16 : intrm_sf_mf_1151 ) * ( X [ 330ULL ] /
0.64 / ( intrm_sf_mf_1151 == 0.0 ? 1.0E-16 : intrm_sf_mf_1151 ) ) / 2.0 / (
t2184 == 0.0 ? 1.0E-16 : t2184 ) ) * 9.9999999999999991E-11 ; } else if ( X [
330ULL ] < 0.0 ) { t2187 = ( t3280 + 1.0 ) * ( 1.0 - t3280 * t2186 ) * ( X [
330ULL ] / 0.64 / ( intrm_sf_mf_1151 == 0.0 ? 1.0E-16 : intrm_sf_mf_1151 ) *
( X [ 330ULL ] / 0.64 / ( intrm_sf_mf_1151 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1151 ) ) / 2.0 / ( t2184 == 0.0 ? 1.0E-16 : t2184 ) ) *
9.9999999999999991E-11 ; } else { t2187 = 0.0 ; } intrm_sf_mf_1318 = ( t2130
+ 1.01325 ) / 2.0 * 0.0010000000000000009 ; t2188 = ( 1.0 - t3280 ) * ( 1.0 -
t3280 ) ; t2191 = intrm_sf_mf_1318 * t2188 ; t3356 = ( t3280 + 1.0 ) * ( 1.0
- t3280 * t3316 ) - ( 1.0 - t3280 * t2186 ) * t3280 * 2.0 ; t3370 = ( t2130 -
1.01325 ) * ( t3356 >= t2188 ? t3356 : t2188 ) ; t3356 = ( t2130 - 1.01325 )
/ ( intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) ; t2198 = t3356 *
t3356 * 3.0 - t3356 * t3356 * t3356 * 2.0 ; if ( t2130 - 1.01325 <= 0.0 ) {
t3356 = t2191 ; } else if ( t2130 - 1.01325 >= intrm_sf_mf_1318 ) { t3356 =
t3370 ; } else { t3356 = ( 1.0 - t2198 ) * t2191 + t3370 * t2198 ; } t3370 =
( t3280 + 1.0 ) * ( 1.0 - t3280 * t2186 ) - ( 1.0 - t3280 * t3316 ) * t3280 *
2.0 ; t3280 = ( 1.01325 - t2130 ) * ( t3370 >= t2188 ? t3370 : t2188 ) ;
t3316 = ( 1.01325 - t2130 ) / ( intrm_sf_mf_1318 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1318 ) ; t2186 = t3316 * t3316 * 3.0 - t3316 * t3316 * t3316 *
2.0 ; if ( 1.01325 - t2130 <= 0.0 ) { t3316 = t2191 ; } else if ( 1.01325 -
t2130 >= intrm_sf_mf_1318 ) { t3316 = t3280 ; } else { t3316 = ( 1.0 - t2186
) * t2191 + t3280 * t2186 ; } if ( t2130 > 1.01325 ) { t3280 = t3356 ; } else
{ t3280 = t2130 < 1.01325 ? t3316 : t2191 ; } if ( X [ 360ULL ] <=
216.59999999999997 ) { t3316 = 216.59999999999997 ; } else { t3316 = X [
360ULL ] >= 623.15 ? 623.15 : X [ 360ULL ] ; } intrm_sf_mf_1381 = t3316 *
t3316 ; t2186 = ( ( ( 1074.1165326382641 + t3316 * - 0.2214565261064495 ) +
intrm_sf_mf_1381 * 0.00037212980109014541 ) * ( ( 1.0 - t2181 ) - t2991 ) + (
( 1479.6504774711011 + t3316 * 1.2002114337048222 ) + intrm_sf_mf_1381 * -
0.00038614513167823636 ) * t2181 ) + ( ( 900.63941224838356 + t3316 * -
0.044484923911382625 ) + intrm_sf_mf_1381 * 0.00036936011832044979 ) * t2991
; t2510 = t2186 - t2183 ; t2510 = X [ 361ULL ] * X [ 361ULL ] * ( t2186 / (
t2510 == 0.0 ? 1.0E-16 : t2510 ) ) ; t3316 = pmf_sqrt ( fabs ( t2510 / (
t2183 == 0.0 ? 1.0E-16 : t2183 ) / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [
360ULL ] ) ) ) * intrm_sf_mf_1151 * 0.64 ; t2514 = t2184 * 2.0 ; t2184 = (
t2130 - 1.01325 ) * pmf_sqrt ( fabs ( t2514 / ( t3280 == 0.0 ? 1.0E-16 :
t3280 ) ) ) * intrm_sf_mf_1151 * 0.64 ; if ( X [ 12ULL ] <= 0.0 ) { t2186 =
0.0 ; } else { t2186 = X [ 12ULL ] >= 1.0 ? 1.0 : X [ 12ULL ] ; } if ( X [
11ULL ] <= 0.0 ) { t2188 = 0.0 ; } else { t2188 = X [ 11ULL ] >= 1.0 ? 1.0 :
X [ 11ULL ] ; } t2191 = ( ( ( 1.0 - t2186 ) - t2188 ) * 296.802103844292 +
t2186 * 461.523 ) + t2188 * 259.836612622973 ; t3356 = - ( ( X [ 10ULL ] / (
X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) - X [ 367ULL ] / ( X [ 368ULL ]
== 0.0 ? 1.0E-16 : X [ 368ULL ] ) ) * X [ 307ULL ] * t2191 ) / 0.32 ; if ( X
[ 367ULL ] <= 216.59999999999997 ) { t3370 = 216.59999999999997 ; } else {
t3370 = X [ 367ULL ] >= 623.15 ? 623.15 : X [ 367ULL ] ; } t1680 = t3370 *
t3370 ; t2198 = ( ( ( 1074.1165326382641 + t3370 * - 0.2214565261064495 ) +
t1680 * 0.00037212980109014541 ) * ( ( 1.0 - t2186 ) - t2188 ) + ( (
1479.6504774711011 + t3370 * 1.2002114337048222 ) + t1680 * -
0.00038614513167823636 ) * t2186 ) + ( ( 900.63941224838356 + t3370 * -
0.044484923911382625 ) + t1680 * 0.00036936011832044979 ) * t2188 ; t2521 =
t2198 - t2191 ; t3370 = t2198 / ( t2521 == 0.0 ? 1.0E-16 : t2521 ) ; t2198 =
pmf_sqrt ( t3356 * t3356 * 9.999999999999999E-14 + fabs ( X [ 367ULL ] *
t3370 * t2191 ) * 1.0E-9 ) ; if ( X [ 81ULL ] <= 0.0 ) { intrm_sf_mf_1381 =
0.0 ; } else { intrm_sf_mf_1381 = X [ 81ULL ] >= 1.0 ? 1.0 : X [ 81ULL ] ; }
if ( X [ 80ULL ] <= 0.0 ) { t1680 = 0.0 ; } else { t1680 = X [ 80ULL ] >= 1.0
? 1.0 : X [ 80ULL ] ; } t1187 [ 0ULL ] = X [ 10ULL ] ;
tlu2_linear_nearest_prelookup ( & ck_efOut . mField0 [ 0ULL ] , & ck_efOut .
mField1 [ 0ULL ] , & ck_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = ck_efOut ; tlu2_1d_linear_nearest_value ( & dk_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = dk_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ek_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ek_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & fk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16
, & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = fk_efOut [ 0 ] ; t2206
= ( ( ( 1.0 - intrm_sf_mf_1381 ) - t1680 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_1381 ) + t1586_idx_0 * t1680 ; t2521 = X [ 368ULL ] * X [ 368ULL
] * t3370 ; t2207 = - pmf_sqrt ( fabs ( t2521 / ( t2191 == 0.0 ? 1.0E-16 :
t2191 ) / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [ 367ULL ] ) ) ) * 0.32 ; if (
t2207 >= 0.0 ) { t2209 = t2207 * 100000.0 ; } else { t2209 = - t2207 *
100000.0 ; } t2525 = t2206 * 0.32 ; t2210 = t2209 * 0.01 / ( t2525 == 0.0 ?
1.0E-16 : t2525 ) ; t2527 = X [ 10ULL ] * t2191 ; t2215 = X [ 47ULL ] / (
t2527 == 0.0 ? 1.0E-16 : t2527 ) ; t2529 = t2215 * 6.4000000000000011E-5 ;
t2216 = t2207 * t2206 * 2.9973120849090416 / ( t2529 == 0.0 ? 1.0E-16 : t2529
) ; t2218 = t2210 >= 1.0 ? t2210 : 1.0 ; t1585_idx_0 = pmf_log10 ( 6.9 / (
t2218 == 0.0 ? 1.0E-16 : t2218 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t2218 == 0.0 ? 1.0E-16 : t2218 ) + 0.00017169489553429715 ) * 3.24 ;
t2532 = t2215 * 0.0020480000000000003 ; t2209 = t2207 * t2209 * ( 1.0 / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ) * 0.046833001326703774 / (
t2532 == 0.0 ? 1.0E-16 : t2532 ) ; t2218 = ( t2210 - 2000.0 ) / 2000.0 ;
t2220 = t2218 * t2218 * 3.0 - t2218 * t2218 * t2218 * 2.0 ; if ( t2210 <=
2000.0 ) { t2218 = t2216 * 1.0E-5 ; } else if ( t2210 >= 4000.0 ) { t2218 =
t2209 * 1.0E-5 ; } else { t2218 = ( ( 1.0 - t2220 ) * t2216 + t2209 * t2220 )
* 1.0E-5 ; } t2198 = - ( X [ 307ULL ] * t2198 ) / 0.32 *
0.00031622776601683789 + t2218 ; t2209 = X [ 295ULL ] - X [ 47ULL ] ; t2216 =
( X [ 10ULL ] / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) - X [ 370ULL ]
/ ( X [ 371ULL ] == 0.0 ? 1.0E-16 : X [ 371ULL ] ) ) * X [ 369ULL ] * t2191 /
0.32 ; if ( X [ 370ULL ] <= 216.59999999999997 ) { t2218 = 216.59999999999997
; } else { t2218 = X [ 370ULL ] >= 623.15 ? 623.15 : X [ 370ULL ] ; } t2222 =
t2218 * t2218 ; t2220 = ( ( ( 1074.1165326382641 + t2218 * -
0.2214565261064495 ) + t2222 * 0.00037212980109014541 ) * ( ( 1.0 - t2186 ) -
t2188 ) + ( ( 1479.6504774711011 + t2218 * 1.2002114337048222 ) + t2222 * -
0.00038614513167823636 ) * t2186 ) + ( ( 900.63941224838356 + t2218 * -
0.044484923911382625 ) + t2222 * 0.00036936011832044979 ) * t2188 ; t2515 =
t2220 - t2191 ; t2218 = t2220 / ( t2515 == 0.0 ? 1.0E-16 : t2515 ) ; t2220 =
pmf_sqrt ( t2216 * t2216 * 9.999999999999999E-14 + fabs ( X [ 370ULL ] *
t2218 * t2191 ) * 1.0E-9 ) ; t2515 = X [ 371ULL ] * X [ 371ULL ] * t2218 ;
t2222 = - pmf_sqrt ( fabs ( t2515 / ( t2191 == 0.0 ? 1.0E-16 : t2191 ) / ( X
[ 370ULL ] == 0.0 ? 1.0E-16 : X [ 370ULL ] ) ) ) * 0.32 ; if ( t2222 >= 0.0 )
{ t2224 = t2222 * 100000.0 ; } else { t2224 = - t2222 * 100000.0 ; } t2225 =
t2224 * 0.01 / ( t2525 == 0.0 ? 1.0E-16 : t2525 ) ; t1585_idx_0 = t2222 *
t2206 * 2.9973120849090416 / ( t2529 == 0.0 ? 1.0E-16 : t2529 ) ; t2228 =
t2225 >= 1.0 ? t2225 : 1.0 ; t2639 = pmf_log10 ( 6.9 / ( t2228 == 0.0 ?
1.0E-16 : t2228 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2228 ==
0.0 ? 1.0E-16 : t2228 ) + 0.00017169489553429715 ) * 3.24 ; t2224 = t2222 *
t2224 * ( 1.0 / ( t2639 == 0.0 ? 1.0E-16 : t2639 ) ) * 0.046833001326703774 /
( t2532 == 0.0 ? 1.0E-16 : t2532 ) ; t2228 = ( t2225 - 2000.0 ) / 2000.0 ;
t2229 = t2228 * t2228 * 3.0 - t2228 * t2228 * t2228 * 2.0 ; if ( t2225 <=
2000.0 ) { t2228 = t1585_idx_0 * 1.0E-5 ; } else if ( t2225 >= 4000.0 ) {
t2228 = t2224 * 1.0E-5 ; } else { t2228 = ( ( 1.0 - t2229 ) * t1585_idx_0 +
t2224 * t2229 ) * 1.0E-5 ; } t2220 = X [ 369ULL ] * t2220 / 0.32 *
0.00031622776601683789 + t2228 ; t2224 = X [ 64ULL ] - X [ 47ULL ] ; t1187 [
0ULL ] = X [ 10ULL ] ; tlu2_linear_linear_prelookup ( & gk_efOut . mField0 [
0ULL ] , & gk_efOut . mField1 [ 0ULL ] , & gk_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = gk_efOut ; tlu2_1d_linear_linear_value ( &
hk_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = hk_efOut [ 0 ] ; t2228 = t1593_idx_0 ;
tlu2_1d_linear_linear_value ( & ik_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ik_efOut [ 0 ] ; t2229 =
t1593_idx_0 ; if ( 1.0 - X [ 12ULL ] >= 0.01 ) { t2231 = 1.0 - X [ 12ULL ] ;
} else if ( 1.0 - X [ 12ULL ] >= - 0.1 ) { t2231 = pmf_exp ( ( ( 1.0 - X [
12ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2231 = 1.6701700790245661E-7 ;
} Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = X [ 11ULL
] / ( t2231 == 0.0 ? 1.0E-16 : t2231 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & jk_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
jk_efOut [ 0 ] ; t2232 = pmf_exp ( pmf_log ( X [ 47ULL ] * 100000.0 ) -
t1593_idx_0 ) ; if ( t2232 >= 1.0 ) { t2639 = ( t2232 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens ; t2233 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens / ( t2639 ==
0.0 ? 1.0E-16 : t2639 ) ; } else { t2233 = 1.0 ; } t1585_idx_0 = t2233 * 0.01
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = ( X [
12ULL ] - t2233 ) / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; if ( X [
12ULL ] - t2233 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = 0.0 ; }
else if ( X [ 12ULL ] - t2233 >= t2233 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = X [ 12ULL ]
- t2233 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = ( X [ 12ULL
] - t2233 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens * 2.0 ) ; }
t2215 = t2215 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = ( t2228 -
t2229 ) * t2215 ; tlu2_1d_linear_nearest_value ( & kk_efOut [ 0ULL ] , & t92
. mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField9 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
kk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & lk_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField10 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = lk_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & mk_efOut [ 0ULL ] , & t92 . mField0
[ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = mk_efOut [ 0
] ; t2229 = ( ( ( 1.0 - intrm_sf_mf_1381 ) - t1680 ) * t1593_idx_0 +
t1585_idx_0 * intrm_sf_mf_1381 ) + t1586_idx_0 * t1680 ; t2233 = ( 343.15 - X
[ 10ULL ] ) * ( t2229 * 10.709248339636167 / 0.01 ) ;
tlu2_1d_linear_nearest_value ( & nk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = nk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ok_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ok_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = pk_efOut [ 0 ] ; t2234 =
( ( ( 1.0 - intrm_sf_mf_1381 ) - t1680 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_1381 ) + t1586_idx_0 * t1680 ; intrm_sf_mf_1381 = ( - X [ 307ULL
] - X [ 369ULL ] ) / 2.0 ; t1585_idx_0 = ( t2206 + U_idx_3 ) / 2.0 * 0.32 ;
U_idx_3 = ( intrm_sf_mf_1381 >= 0.0 ? intrm_sf_mf_1381 : 0.0 ) * 0.01 / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; t1680 = U_idx_3 >= 0.0 ?
U_idx_3 : - U_idx_3 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = t1680 >
1000.0 ? t1680 : 1000.0 ; t2639 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * 3.24 ; t2236 = 1.0 / ( t2639 == 0.0 ? 1.0E-16 :
t2639 ) ; t2639 = t2234 + t3235 ; if ( ( pmf_pow ( t2639 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2236 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t2619 = ( pmf_pow ( ( t2234 + t3235 ) / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t2236 / 8.0 ) * 12.7 + 1.0 ; t2237 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 - 1000.0 ) *
( t2236 / 8.0 ) * ( ( t2234 + t3235 ) / 2.0 ) / ( t2619 == 0.0 ? 1.0E-16 :
t2619 ) ; } else { t2237 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 - 1000.0 ) *
( t2236 / 8.0 ) * ( ( t2234 + t3235 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = ( t1680 -
2000.0 ) / 2000.0 ; t2236 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 * 2.0 ; if (
t1680 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = 3.66 ; }
else if ( t1680 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = t2237 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = (
1.0 - t2236 ) * 3.66 + t2237 * t2236 ; } t1585_idx_0 = t2639 / 2.0 ; if (
t1680 > Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
10.709248339636167 / 0.32 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) /
30.0 ) { t2598 = ( t2234 + t3235 ) / 2.0 ; t2236 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 *
10.709248339636167 / ( t1680 == 0.0 ? 1.0E-16 : t1680 ) / 0.32 / ( t2598 ==
0.0 ? 1.0E-16 : t2598 ) ; } else { t2236 = 30.0 ; } t3235 = ( 343.15 - X [
294ULL ] ) * ( 1.0 - pmf_exp ( - t2236 ) ) ; U_idx_3 = U_idx_3 * 0.32 / 0.01
* ( t2639 / 2.0 ) * ( ( t2229 + t2098 ) / 2.0 ) * t3235 ; if ( X [ 66ULL ] <=
0.0 ) { t3235 = 0.0 ; } else { t3235 = X [ 66ULL ] >= 1.0 ? 1.0 : X [ 66ULL ]
; } if ( X [ 65ULL ] <= 0.0 ) { t2098 = 0.0 ; } else { t2098 = X [ 65ULL ] >=
1.0 ? 1.0 : X [ 65ULL ] ; } t1680 = ( ( ( 1.0 - t3235 ) - t2098 ) *
296.802103844292 + t3235 * 461.523 ) + t2098 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = X [ 66ULL ]
* 461.523 / ( t1680 == 0.0 ? 1.0E-16 : t1680 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 <= 0.0 ) {
t2236 = 0.0 ; } else { t2236 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = X [ 65ULL ]
* 259.836612622973 / ( t1680 == 0.0 ? 1.0E-16 : t1680 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 <= 0.0 ) {
t2237 = 0.0 ; } else { t2237 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; } t1187 [
0ULL ] = X [ 63ULL ] ; tlu2_linear_nearest_prelookup ( & qk_efOut . mField0 [
0ULL ] , & qk_efOut . mField1 [ 0ULL ] , & qk_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = qk_efOut ; tlu2_1d_linear_nearest_value ( &
rk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = rk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
sk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = sk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
tk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = tk_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = ( ( ( 1.0 -
t2236 ) - t2237 ) * t1593_idx_0 + t1585_idx_0 * t2236 ) + t1586_idx_0 * t2237
; tlu2_1d_linear_nearest_value ( & uk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = uk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = vk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = wk_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = ( ( ( 1.0 - t2236
) - t2237 ) * t1593_idx_0 + t1585_idx_0 * t2236 ) + t1586_idx_0 * t2237 ;
t2239 = intrm_sf_mf_1381 <= 0.0 ? intrm_sf_mf_1381 : 0.0 ;
tlu2_1d_linear_nearest_value ( & xk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = xk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yk_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = yk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & al_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = al_efOut [ 0 ] ;
intrm_sf_mf_1381 = ( ( ( 1.0 - t2236 ) - t2237 ) * t1593_idx_0 + t1585_idx_0
* t2236 ) + t1586_idx_0 * t2237 ; t1585_idx_0 = ( t2206 + intrm_sf_mf_1381 )
/ 2.0 * 0.32 ; t2236 = - t2239 * 0.01 / ( t1585_idx_0 == 0.0 ? 1.0E-16 :
t1585_idx_0 ) ; t2237 = t2236 >= 0.0 ? t2236 : - t2236 ; t2239 = t2237 >
1000.0 ? t2237 : 1000.0 ; t2639 = pmf_log10 ( 6.9 / ( t2239 == 0.0 ? 1.0E-16
: t2239 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2239 == 0.0 ?
1.0E-16 : t2239 ) + 0.00017169489553429715 ) * 3.24 ; t2240 = 1.0 / ( t2639
== 0.0 ? 1.0E-16 : t2639 ) ; t2639 = t2234 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; if ( (
pmf_pow ( t2639 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2240 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t2619 = ( pmf_pow ( ( t2234 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2240 / 8.0 ) * 12.7 + 1.0 ; t2241
= ( t2239 - 1000.0 ) * ( t2240 / 8.0 ) * ( ( t2234 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ) / (
t2619 == 0.0 ? 1.0E-16 : t2619 ) ; } else { t2241 = ( t2239 - 1000.0 ) * (
t2240 / 8.0 ) * ( ( t2234 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ) /
1.0E-6 ; } t2239 = ( t2237 - 2000.0 ) / 2000.0 ; t2240 = t2239 * t2239 * 3.0
- t2239 * t2239 * t2239 * 2.0 ; if ( t2237 <= 2000.0 ) { t2239 = 3.66 ; }
else if ( t2237 >= 4000.0 ) { t2239 = t2241 ; } else { t2239 = ( 1.0 - t2240
) * 3.66 + t2241 * t2240 ; } t1585_idx_0 = t2639 / 2.0 ; if ( t2237 > t2239 *
10.709248339636167 / 0.32 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) /
30.0 ) { t2598 = ( t2234 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 ;
t2240 = t2239 * 10.709248339636167 / ( t2237 == 0.0 ? 1.0E-16 : t2237 ) /
0.32 / ( t2598 == 0.0 ? 1.0E-16 : t2598 ) ; } else { t2240 = 30.0 ; } t2234 =
( 343.15 - X [ 63ULL ] ) * ( 1.0 - pmf_exp ( - t2240 ) ) ; t2234 = U_idx_3 +
t2236 * 0.32 / 0.01 * ( t2639 / 2.0 ) * ( ( t2229 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ) / 2.0 ) * t2234 ;
t2229 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] + 2.5711439722933289E-8 ) ;
t2236 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] + 4.9597684650720062E-8 ) ;
t2237 = pmf_sqrt ( X [ 307ULL ] * X [ 307ULL ] + 3.5023764535063242E-8 ) ;
t2239 = pmf_sqrt ( X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8 ) ;
t2240 = pmf_sqrt ( X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8 ) ;
t2241 = pmf_sqrt ( X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & bl_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ]
, & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = bl_efOut [ 0 ] ; t2242 =
t1593_idx_0 ; tlu2_1d_linear_linear_value ( & cl_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = cl_efOut
[ 0 ] ; t2244 = - X [ 315ULL ] + X [ 377ULL ] ; t2245 = ( - X [ 307ULL ] + X
[ 369ULL ] ) - t2215 * 100000.0 ; t2246 = ( - X [ 316ULL ] + X [ 378ULL ] ) -
t2215 * 100000.0 ; t2247 = ( ( ( 1.0 - t2186 ) - t2188 ) * t2242 + t2228 *
t2186 ) + t1593_idx_0 * t2188 ; t2249 = t2242 - X [ 10ULL ] *
0.296802103844292 ; t2242 = t1593_idx_0 - X [ 10ULL ] * 0.25983661262297303 ;
t2243 = t2228 - X [ 10ULL ] * 0.461523 ; if ( X [ 15ULL ] <= 0.0 ) { t2228 =
0.0 ; } else { t2228 = X [ 15ULL ] >= 1.0 ? 1.0 : X [ 15ULL ] ; } if ( X [
14ULL ] <= 0.0 ) { t2251 = 0.0 ; } else { t2251 = X [ 14ULL ] >= 1.0 ? 1.0 :
X [ 14ULL ] ; } t2252 = ( ( ( 1.0 - t2228 ) - t2251 ) * 296.802103844292 +
t2228 * 461.523 ) + t2251 * 259.836612622973 ; t2253 = - ( ( X [ 13ULL ] / (
X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) - X [ 381ULL ] / ( X [ 382ULL ]
== 0.0 ? 1.0E-16 : X [ 382ULL ] ) ) * X [ 369ULL ] * t2252 ) / 0.32 ; if ( X
[ 381ULL ] <= 216.59999999999997 ) { t2254 = 216.59999999999997 ; } else {
t2254 = X [ 381ULL ] >= 623.15 ? 623.15 : X [ 381ULL ] ; } t2256 = t2254 *
t2254 ; t2255 = ( ( ( 1074.1165326382641 + t2254 * - 0.2214565261064495 ) +
t2256 * 0.00037212980109014541 ) * ( ( 1.0 - t2228 ) - t2251 ) + ( (
1479.6504774711011 + t2254 * 1.2002114337048222 ) + t2256 * -
0.00038614513167823636 ) * t2228 ) + ( ( 900.63941224838356 + t2254 * -
0.044484923911382625 ) + t2256 * 0.00036936011832044979 ) * t2251 ; t2619 =
t2255 - t2252 ; t2254 = t2255 / ( t2619 == 0.0 ? 1.0E-16 : t2619 ) ; t2255 =
pmf_sqrt ( t2253 * t2253 * 9.999999999999999E-14 + fabs ( X [ 381ULL ] *
t2254 * t2252 ) * 1.0E-9 ) ; if ( X [ 86ULL ] <= 0.0 ) { t2256 = 0.0 ; } else
{ t2256 = X [ 86ULL ] >= 1.0 ? 1.0 : X [ 86ULL ] ; } if ( X [ 85ULL ] <= 0.0
) { t2257 = 0.0 ; } else { t2257 = X [ 85ULL ] >= 1.0 ? 1.0 : X [ 85ULL ] ; }
t1187 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_nearest_prelookup ( & dl_efOut .
mField0 [ 0ULL ] , & dl_efOut . mField1 [ 0ULL ] , & dl_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t32 = dl_efOut ;
tlu2_1d_linear_nearest_value ( & el_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = el_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fl_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = fl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gl_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = gl_efOut [ 0 ] ; t2258 =
( ( ( 1.0 - t2256 ) - t2257 ) * t1593_idx_0 + t1585_idx_0 * t2256 ) +
t1586_idx_0 * t2257 ; t2619 = X [ 382ULL ] * X [ 382ULL ] * t2254 ; t2259 = -
pmf_sqrt ( fabs ( t2619 / ( t2252 == 0.0 ? 1.0E-16 : t2252 ) / ( X [ 381ULL ]
== 0.0 ? 1.0E-16 : X [ 381ULL ] ) ) ) * 0.32 ; if ( t2259 >= 0.0 ) { t2261 =
t2259 * 100000.0 ; } else { t2261 = - t2259 * 100000.0 ; } t2598 = t2258 *
0.32 ; t2262 = t2261 * 0.01 / ( t2598 == 0.0 ? 1.0E-16 : t2598 ) ; t2625 = X
[ 13ULL ] * t2252 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde = X [ 48ULL ]
/ ( t2625 == 0.0 ? 1.0E-16 : t2625 ) ; t2627 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde *
6.4000000000000011E-5 ; t2264 = t2259 * t2258 * 2.9973120849090416 / ( t2627
== 0.0 ? 1.0E-16 : t2627 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = t2262 >= 1.0 ?
t2262 : 1.0 ; t1585_idx_0 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI == 0.0 ? 1.0E-16
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) +
0.00017169489553429715 ) * 3.24 ; t2630 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde *
0.0020480000000000003 ; t2261 = t2259 * t2261 * ( 1.0 / ( t1585_idx_0 == 0.0
? 1.0E-16 : t1585_idx_0 ) ) * 0.046833001326703774 / ( t2630 == 0.0 ? 1.0E-16
: t2630 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = (
t2262 - 2000.0 ) / 2000.0 ; t2266 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * 2.0 ; if (
t2262 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = t2264 * 1.0E-5
; } else if ( t2262 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = t2261 * 1.0E-5
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = ( (
1.0 - t2266 ) * t2264 + t2261 * t2266 ) * 1.0E-5 ; } t2255 = - ( X [ 369ULL ]
* t2255 ) / 0.32 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ; t2261 = X [
64ULL ] - X [ 48ULL ] ; t2264 = - ( ( X [ 13ULL ] / ( X [ 48ULL ] == 0.0 ?
1.0E-16 : X [ 48ULL ] ) - X [ 383ULL ] / ( X [ 384ULL ] == 0.0 ? 1.0E-16 : X
[ 384ULL ] ) ) * X [ 342ULL ] * t2252 ) / 0.32 ; if ( X [ 383ULL ] <=
216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = X [ 383ULL ] >=
623.15 ? 623.15 : X [ 383ULL ] ; } t2267 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ; t2266 = ( ( (
1074.1165326382641 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * -
0.2214565261064495 ) + t2267 * 0.00037212980109014541 ) * ( ( 1.0 - t2228 ) -
t2251 ) + ( ( 1479.6504774711011 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
1.2002114337048222 ) + t2267 * - 0.00038614513167823636 ) * t2228 ) + ( (
900.63941224838356 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * -
0.044484923911382625 ) + t2267 * 0.00036936011832044979 ) * t2251 ; t2639 =
t2266 - t2252 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI =
t2266 / ( t2639 == 0.0 ? 1.0E-16 : t2639 ) ; t2266 = pmf_sqrt ( t2264 * t2264
* 9.999999999999999E-14 + fabs ( X [ 383ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * t2252 ) *
1.0E-9 ) ; t2639 = X [ 384ULL ] * X [ 384ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ; t1627 = -
pmf_sqrt ( fabs ( t2639 / ( t2252 == 0.0 ? 1.0E-16 : t2252 ) / ( X [ 383ULL ]
== 0.0 ? 1.0E-16 : X [ 383ULL ] ) ) ) * 0.32 ; if ( t1627 >= 0.0 ) { t2267 =
t1627 * 100000.0 ; } else { t2267 = - t1627 * 100000.0 ; } t2268 = t2267 *
0.01 / ( t2598 == 0.0 ? 1.0E-16 : t2598 ) ; t1585_idx_0 = t1627 * t2258 *
2.9973120849090416 / ( t2627 == 0.0 ? 1.0E-16 : t2627 ) ; intrm_sf_mf_192 =
t2268 >= 1.0 ? t2268 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( intrm_sf_mf_192 ==
0.0 ? 1.0E-16 : intrm_sf_mf_192 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_192 == 0.0 ? 1.0E-16 : intrm_sf_mf_192 ) +
0.00017169489553429715 ) * 3.24 ; t2267 = t1627 * t2267 * ( 1.0 / ( t2863 ==
0.0 ? 1.0E-16 : t2863 ) ) * 0.046833001326703774 / ( t2630 == 0.0 ? 1.0E-16 :
t2630 ) ; intrm_sf_mf_192 = ( t2268 - 2000.0 ) / 2000.0 ; t2271 =
intrm_sf_mf_192 * intrm_sf_mf_192 * 3.0 - intrm_sf_mf_192 * intrm_sf_mf_192 *
intrm_sf_mf_192 * 2.0 ; if ( t2268 <= 2000.0 ) { intrm_sf_mf_192 =
t1585_idx_0 * 1.0E-5 ; } else if ( t2268 >= 4000.0 ) { intrm_sf_mf_192 =
t2267 * 1.0E-5 ; } else { intrm_sf_mf_192 = ( ( 1.0 - t2271 ) * t1585_idx_0 +
t2267 * t2271 ) * 1.0E-5 ; } t2266 = - ( X [ 342ULL ] * t2266 ) / 0.32 *
0.00031622776601683789 + intrm_sf_mf_192 ; t2267 = X [ 320ULL ] - X [ 48ULL ]
; t1187 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup ( & hl_efOut .
mField0 [ 0ULL ] , & hl_efOut . mField1 [ 0ULL ] , & hl_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = hl_efOut ;
tlu2_1d_linear_linear_value ( & il_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = il_efOut [ 0 ] ;
intrm_sf_mf_192 = t1593_idx_0 ; tlu2_1d_linear_linear_value ( & jl_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = jl_efOut [ 0 ] ; t2271 = t1593_idx_0 ; if ( 1.0 - X [ 15ULL
] >= 0.01 ) { t2273 = 1.0 - X [ 15ULL ] ; } else if ( 1.0 - X [ 15ULL ] >= -
0.1 ) { t2273 = pmf_exp ( ( ( 1.0 - X [ 15ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t2273 = 1.6701700790245661E-7 ; } t2272 = X [ 14ULL ] / ( t2273 ==
0.0 ? 1.0E-16 : t2273 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & kl_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = kl_efOut [ 0 ] ; t2274 =
pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t1593_idx_0 ) ; if ( t2274 >=
1.0 ) { t2863 = ( t2274 - 1.0 ) * 461.523 + t2272 ; t2276 = t2272 / ( t2863
== 0.0 ? 1.0E-16 : t2863 ) ; } else { t2276 = 1.0 ; } t1585_idx_0 = t2276 *
0.01 ; t2272 = ( X [ 15ULL ] - t2276 ) / ( t1585_idx_0 == 0.0 ? 1.0E-16 :
t1585_idx_0 ) ; if ( X [ 15ULL ] - t2276 <= 0.0 ) { t2272 = 0.0 ; } else if (
X [ 15ULL ] - t2276 >= t2276 * 0.01 ) { t2272 = X [ 15ULL ] - t2276 ; } else
{ t2272 = ( X [ 15ULL ] - t2276 ) * ( t2272 * t2272 * 3.0 - t2272 * t2272 *
t2272 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde * t2272 *
0.026773120849090417 / 0.001 ; t2272 = ( intrm_sf_mf_192 - t2271 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde ;
tlu2_1d_linear_nearest_value ( & ll_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ll_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ml_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ml_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nl_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = nl_efOut [ 0 ] ; t2271 =
( ( ( 1.0 - t2256 ) - t2257 ) * t1593_idx_0 + t1585_idx_0 * t2256 ) +
t1586_idx_0 * t2257 ; t2276 = ( 343.15 - X [ 13ULL ] ) * ( t2271 *
10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( & ol_efOut [
0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = ol_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
pl_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = pl_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ql_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = ql_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total = ( ( ( 1.0 -
t2256 ) - t2257 ) * t1593_idx_0 + t1585_idx_0 * t2256 ) + t1586_idx_0 * t2257
; t2256 = ( - X [ 369ULL ] - ( - X [ 342ULL ] ) ) / 2.0 ; U_idx_3 = (
intrm_sf_mf_1381 + t2258 ) / 2.0 * 0.32 ; intrm_sf_mf_1381 = ( t2256 >= 0.0 ?
t2256 : 0.0 ) * 0.01 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; t2257 =
intrm_sf_mf_1381 >= 0.0 ? intrm_sf_mf_1381 : - intrm_sf_mf_1381 ; t2278 =
t2257 > 1000.0 ? t2257 : 1000.0 ; t2863 = pmf_log10 ( 6.9 / ( t2278 == 0.0 ?
1.0E-16 : t2278 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2278 ==
0.0 ? 1.0E-16 : t2278 ) + 0.00017169489553429715 ) * 3.24 ; U_idx_2 = 1.0 / (
t2863 == 0.0 ? 1.0E-16 : t2863 ) ; t2863 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ; if ( (
pmf_pow ( t2863 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( U_idx_2 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1585_idx_0 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( U_idx_2 / 8.0 ) * 12.7 + 1.0 ;
t2280 = ( t2278 - 1000.0 ) * ( U_idx_2 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ) / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; } else { t2280 = ( t2278 -
1000.0 ) * ( U_idx_2 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ) /
1.0E-6 ; } t2278 = ( t2257 - 2000.0 ) / 2000.0 ; U_idx_2 = t2278 * t2278 *
3.0 - t2278 * t2278 * t2278 * 2.0 ; if ( t2257 <= 2000.0 ) { t2278 = 3.66 ; }
else if ( t2257 >= 4000.0 ) { t2278 = t2280 ; } else { t2278 = ( 1.0 -
U_idx_2 ) * 3.66 + t2280 * U_idx_2 ; } t1585_idx_0 = t2863 / 2.0 ; if ( t2257
> t2278 * 10.709248339636167 / 0.32 / ( t1585_idx_0 == 0.0 ? 1.0E-16 :
t1585_idx_0 ) / 30.0 ) { t1585_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ;
U_idx_2 = t2278 * 10.709248339636167 / ( t2257 == 0.0 ? 1.0E-16 : t2257 ) /
0.32 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; } else { U_idx_2 =
30.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = (
343.15 - X [ 63ULL ] ) * ( 1.0 - pmf_exp ( - U_idx_2 ) ) ; intrm_sf_mf_1381 =
intrm_sf_mf_1381 * 0.32 / 0.01 * ( t2863 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I + t2271 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ; U_idx_3 = (
t2166 + t2258 ) / 2.0 * 0.32 ; t2166 = - ( t2256 <= 0.0 ? t2256 : 0.0 ) *
0.01 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = t2166 >=
0.0 ? t2166 : - t2166 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 : 1000.0 ;
t2863 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I ) +
0.00017169489553429715 ) * 3.24 ; t2256 = 1.0 / ( t2863 == 0.0 ? 1.0E-16 :
t2863 ) ; t2863 = t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ; if ( (
pmf_pow ( t2863 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2256 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1585_idx_0 = ( pmf_pow ( ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2256 / 8.0 ) * 12.7 + 1.0 ; t2257
= ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - 1000.0 ) * (
t2256 / 8.0 ) * ( ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ) / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; } else { t2257 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - 1000.0 ) * ( t2256
/ 8.0 ) * ( ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ) /
1.0E-6 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 - 2000.0 ) /
2000.0 ; t2256 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = t2257 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = ( 1.0 - t2256 ) *
3.66 + t2257 * t2256 ; } t1585_idx_0 = t2863 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I * 10.709248339636167
/ 0.32 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) / 30.0 ) {
t1585_idx_0 = ( t2160 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total ) / 2.0 ;
t2256 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I *
10.709248339636167 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) /
0.32 / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; } else { t2256 = 30.0
; } t2160 = ( 343.15 - X [ 319ULL ] ) * ( 1.0 - pmf_exp ( - t2256 ) ) ; t2160
= intrm_sf_mf_1381 + t2166 * 0.32 / 0.01 * ( t2863 / 2.0 ) * ( ( t3649 +
t2271 ) / 2.0 ) * t2160 ; t2166 = pmf_sqrt ( X [ 342ULL ] * X [ 342ULL ] +
2.5711439722933289E-8 ) ; intrm_sf_mf_1381 = pmf_sqrt ( X [ 342ULL ] * X [
342ULL ] + 4.9597684650720062E-8 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 = pmf_sqrt (
X [ 342ULL ] * X [ 342ULL ] + 3.5023764535063242E-8 ) ;
tlu2_1d_linear_linear_value ( & rl_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = rl_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I = t1593_idx_0 ;
tlu2_1d_linear_linear_value ( & sl_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = sl_efOut [ 0 ] ; t2257 = (
- X [ 377ULL ] - X [ 353ULL ] ) + X [ 95ULL ] ; t2271 = ( ( ( - X [ 369ULL ]
- X [ 342ULL ] ) + X [ 95ULL ] ) + X [ 100ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total = ( ( - X [
378ULL ] - X [ 354ULL ] ) + X [ 100ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde * 100000.0 ;
t2278 = ( ( ( 1.0 - t2228 ) - t2251 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I + intrm_sf_mf_192 *
t2228 ) + t1593_idx_0 * t2251 ; t2280 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I - X [ 13ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I
= t1593_idx_0 - X [ 13ULL ] * 0.25983661262297303 ; t2256 = intrm_sf_mf_192 -
X [ 13ULL ] * 0.461523 ; t1187 [ 0ULL ] = X [ 49ULL ] ; t752 [ 0 ] = 23ULL ;
tlu2_linear_nearest_prelookup ( & tl_efOut . mField0 [ 0ULL ] , & tl_efOut .
mField1 [ 0ULL ] , & tl_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField20 , & t1187 [ 0ULL ] , & t752 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t73 = tl_efOut ; t1187 [ 0ULL ] = X [ 391ULL ] ; t1185 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & ul_efOut . mField0 [ 0ULL ] , & ul_efOut .
mField1 [ 0ULL ] , & ul_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t1187 [ 0ULL ] , & t1185 [ 0ULL ] , & t124 [ 0ULL ] )
; t92 = ul_efOut ; tlu2_2d_linear_nearest_value ( & vl_efOut [ 0ULL ] , & t73
. mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , & t92 . mField0 [ 0ULL ] , &
t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 , &
t752 [ 0ULL ] , & t1185 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = vl_efOut
[ 0 ] ; intrm_sf_mf_192 = t1593_idx_0 ; intrm_sf_mf_1010 = X [ 307ULL ] *
t3061 * 11.2 / ( t2301 == 0.0 ? 1.0E-16 : t2301 ) ; intrm_sf_mf_1009 = X [
307ULL ] >= 0.0 ? X [ 307ULL ] : - X [ 307ULL ] ; t2283 = intrm_sf_mf_1009 *
0.05 / ( t2297 == 0.0 ? 1.0E-16 : t2297 ) ; t2284 = t2283 >= 1.0 ? t2283 :
1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2284 == 0.0 ? 1.0E-16 : t2284 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2284 == 0.0 ? 1.0E-16 : t2284
) + 2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_1009 = X [ 307ULL ] *
intrm_sf_mf_1009 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * 0.175 / (
t2304 == 0.0 ? 1.0E-16 : t2304 ) ; t2284 = ( t2283 - 2000.0 ) / 2000.0 ;
t2286 = t2284 * t2284 * 3.0 - t2284 * t2284 * t2284 * 2.0 ; if ( t2283 <=
2000.0 ) { t2284 = intrm_sf_mf_1010 * 9.9999999999999991E-11 ; } else if (
t2283 >= 4000.0 ) { t2284 = intrm_sf_mf_1009 * 9.9999999999999991E-11 ; }
else { t2284 = ( ( 1.0 - t2286 ) * intrm_sf_mf_1010 + intrm_sf_mf_1009 *
t2286 ) * 9.9999999999999991E-11 ; } if ( 1.0 - X [ 335ULL ] >= 0.01 ) {
intrm_sf_mf_1009 = 1.0 - X [ 335ULL ] ; } else if ( 1.0 - X [ 335ULL ] >= -
0.1 ) { intrm_sf_mf_1009 = pmf_exp ( ( ( 1.0 - X [ 335ULL ] ) - 0.01 ) / 0.01
) * 0.01 ; } else { intrm_sf_mf_1009 = 1.6701700790245661E-7 ; } if ( X [
326ULL ] <= 0.0 ) { intrm_sf_mf_1010 = 0.0 ; } else { intrm_sf_mf_1010 = X [
326ULL ] >= 1.0 ? 1.0 : X [ 326ULL ] ; } if ( X [ 325ULL ] <= 0.0 ) { t2283 =
0.0 ; } else { t2283 = X [ 325ULL ] >= 1.0 ? 1.0 : X [ 325ULL ] ; } t2286 = (
( ( 1.0 - intrm_sf_mf_1010 ) - t2283 ) * 296.802103844292 + intrm_sf_mf_1010
* 461.523 ) + t2283 * 259.836612622973 ; t1187 [ 0ULL ] = X [ 324ULL ] ;
tlu2_linear_linear_prelookup ( & wl_efOut . mField0 [ 0ULL ] , & wl_efOut .
mField1 [ 0ULL ] , & wl_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t32 = wl_efOut ; tlu2_1d_linear_linear_value ( & xl_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = xl_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & yl_efOut [ 0ULL ] , & t32 . mField0 [
0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = yl_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & am_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL
] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = am_efOut [ 0 ] ; t2287 =
( ( ( 1.0 - intrm_sf_mf_1010 ) - t2283 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_1010 ) + t1586_idx_0 * t2283 ; t1187 [ 0ULL ] = X [ 319ULL ] ;
tlu2_linear_linear_prelookup ( & bm_efOut . mField0 [ 0ULL ] , & bm_efOut .
mField1 [ 0ULL ] , & bm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = bm_efOut ; tlu2_1d_linear_linear_value ( & cm_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = cm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & dm_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = dm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & em_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = em_efOut [ 0 ] ;
intrm_sf_mf_1010 = ( ( ( 1.0 - t3256 ) - intrm_sf_mf_1126 ) * t1593_idx_0 +
t1585_idx_0 * t3256 ) + t1586_idx_0 * intrm_sf_mf_1126 ; t1187 [ 0ULL ] = X [
338ULL ] ; tlu2_linear_linear_prelookup ( & fm_efOut . mField0 [ 0ULL ] , &
fm_efOut . mField1 [ 0ULL ] , & fm_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = fm_efOut ; tlu2_1d_linear_linear_value ( &
gm_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = gm_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & hm_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = hm_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & im_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = im_efOut [ 0 ] ; t3256 = ( ( ( 1.0 - t2163 ) -
intrm_sf_mf_1179 ) * t1593_idx_0 + t1585_idx_0 * t2163 ) + t1586_idx_0 *
intrm_sf_mf_1179 ; t1187 [ 0ULL ] = X [ 343ULL ] ;
tlu2_linear_linear_prelookup ( & jm_efOut . mField0 [ 0ULL ] , & jm_efOut .
mField1 [ 0ULL ] , & jm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t6 = jm_efOut ; tlu2_1d_linear_linear_value ( & km_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = km_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & lm_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = lm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & mm_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = mm_efOut [ 0 ] ;
intrm_sf_mf_1126 = ( ( ( 1.0 - t2131 ) - t2132 ) * t1593_idx_0 + t1585_idx_0
* t2131 ) + t1586_idx_0 * t2132 ; t1187 [ 0ULL ] = X [ 347ULL ] ;
tlu2_linear_linear_prelookup ( & nm_efOut . mField0 [ 0ULL ] , & nm_efOut .
mField1 [ 0ULL ] , & nm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = nm_efOut ; tlu2_1d_linear_linear_value ( & om_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = om_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & pm_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = pm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & qm_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = qm_efOut [ 0 ] ; t2163 =
( ( ( 1.0 - t2131 ) - t2132 ) * t1593_idx_0 + t1585_idx_0 * t2131 ) +
t1586_idx_0 * t2132 ; intrm_sf_mf_1179 = X [ 342ULL ] >= 0.0 ? X [ 342ULL ] :
- X [ 342ULL ] ; t2283 = intrm_sf_mf_1179 * 0.05 / ( t2383 == 0.0 ? 1.0E-16 :
t2383 ) ; t2291 = t2283 >= 1.0 ? t2283 : 1.0 ; t2863 = pmf_log10 ( 6.9 / (
t2291 == 0.0 ? 1.0E-16 : t2291 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t2291 == 0.0 ? 1.0E-16 : t2291 ) + 2.8767404433520813E-5 ) * 3.24 ; t2292
= X [ 342ULL ] * t3156 * 35.2 / ( t2401 == 0.0 ? 1.0E-16 : t2401 ) ;
intrm_sf_mf_1179 = X [ 342ULL ] * intrm_sf_mf_1179 * ( 1.0 / ( t2863 == 0.0 ?
1.0E-16 : t2863 ) ) * 0.55 / ( t2404 == 0.0 ? 1.0E-16 : t2404 ) ; t2291 = (
t2283 - 2000.0 ) / 2000.0 ; t2294 = t2291 * t2291 * 3.0 - t2291 * t2291 *
t2291 * 2.0 ; if ( t2283 <= 2000.0 ) { t2291 = t2292 * 9.9999999999999991E-11
; } else if ( t2283 >= 4000.0 ) { t2291 = intrm_sf_mf_1179 *
9.9999999999999991E-11 ; } else { t2291 = ( ( 1.0 - t2294 ) * t2292 +
intrm_sf_mf_1179 * t2294 ) * 9.9999999999999991E-11 ; } if ( - X [ 330ULL ]
>= 0.0 ) { intrm_sf_mf_1179 = - X [ 330ULL ] ; } else { intrm_sf_mf_1179 = X
[ 330ULL ] ; } t2283 = intrm_sf_mf_1179 * 0.05 / ( t2383 == 0.0 ? 1.0E-16 :
t2383 ) ; t2292 = t2283 >= 1.0 ? t2283 : 1.0 ; t2863 = pmf_log10 ( 6.9 / (
t2292 == 0.0 ? 1.0E-16 : t2292 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t2292 == 0.0 ? 1.0E-16 : t2292 ) + 2.8767404433520813E-5 ) * 3.24 ; t2294
= X [ 330ULL ] * t3156 * - 35.2 / ( t2401 == 0.0 ? 1.0E-16 : t2401 ) ;
intrm_sf_mf_1179 = X [ 330ULL ] * intrm_sf_mf_1179 * ( 1.0 / ( t2863 == 0.0 ?
1.0E-16 : t2863 ) ) * - 0.55 / ( t2404 == 0.0 ? 1.0E-16 : t2404 ) ; t2292 = (
t2283 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1428 = t2292 * t2292 * 3.0 - t2292 *
t2292 * t2292 * 2.0 ; if ( t2283 <= 2000.0 ) { t2292 = t2294 *
9.9999999999999991E-11 ; } else if ( t2283 >= 4000.0 ) { t2292 =
intrm_sf_mf_1179 * 9.9999999999999991E-11 ; } else { t2292 = ( ( 1.0 -
intrm_sf_mf_1428 ) * t2294 + intrm_sf_mf_1179 * intrm_sf_mf_1428 ) *
9.9999999999999991E-11 ; } t1187 [ 0ULL ] = X [ 364ULL ] ;
tlu2_linear_linear_prelookup ( & rm_efOut . mField0 [ 0ULL ] , & rm_efOut .
mField1 [ 0ULL ] , & rm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = rm_efOut ; tlu2_1d_linear_linear_value ( & sm_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = sm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & tm_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = tm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & um_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = um_efOut [ 0 ] ;
intrm_sf_mf_1179 = ( ( ( 1.0 - t2181 ) - t2991 ) * t1593_idx_0 + t1585_idx_0
* t2181 ) + t1586_idx_0 * t2991 ; t1187 [ 0ULL ] = X [ 365ULL ] ;
tlu2_linear_linear_prelookup ( & vm_efOut . mField0 [ 0ULL ] , & vm_efOut .
mField1 [ 0ULL ] , & vm_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = vm_efOut ; tlu2_1d_linear_linear_value ( & wm_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = wm_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & xm_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = xm_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ym_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ym_efOut [ 0 ] ; t2283 =
( ( ( 1.0 - t2181 ) - t2991 ) * t1593_idx_0 + t1585_idx_0 * t2181 ) +
t1586_idx_0 * t2991 ; t1187 [ 0ULL ] = X [ 360ULL ] ;
tlu2_linear_linear_prelookup ( & an_efOut . mField0 [ 0ULL ] , & an_efOut .
mField1 [ 0ULL ] , & an_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = an_efOut ; tlu2_1d_linear_linear_value ( & bn_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = bn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & cn_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = cn_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & dn_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = dn_efOut [ 0 ] ; t2294 =
( ( ( 1.0 - t2181 ) - t2991 ) * t1593_idx_0 + t1585_idx_0 * t2181 ) +
t1586_idx_0 * t2991 ; t1585_idx_0 = intrm_sf_mf_1318 - ( - intrm_sf_mf_1318 )
; t2181 = ( ( t2130 - 1.01325 ) - ( - intrm_sf_mf_1318 ) ) / ( t1585_idx_0 ==
0.0 ? 1.0E-16 : t1585_idx_0 ) ; t2991 = t2181 * t2181 * 3.0 - t2181 * t2181 *
t2181 * 2.0 ; if ( t2130 - 1.01325 <= - intrm_sf_mf_1318 ) { t2181 = 1.01325
; } else if ( t2130 - 1.01325 >= intrm_sf_mf_1318 ) { t2181 = t2130 ; } else
{ t2181 = ( 1.0 - t2991 ) * 1.01325 + t2130 * t2991 ; } t1187 [ 0ULL ] = X [
106ULL ] ; tlu2_linear_linear_prelookup ( & en_efOut . mField0 [ 0ULL ] , &
en_efOut . mField1 [ 0ULL ] , & en_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t20 = en_efOut ; tlu2_1d_linear_linear_value ( &
fn_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = fn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & gn_efOut
[ 0ULL ] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = gn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & hn_efOut [
0ULL ] , & t20 . mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = hn_efOut [ 0 ] ; t2991 = ( ( ( 1.0 - intrm_sf_mf_1284 ) -
zc_int306 ) * t1593_idx_0 + t1585_idx_0 * intrm_sf_mf_1284 ) + t1586_idx_0 *
zc_int306 ; t1187 [ 0ULL ] = X [ 294ULL ] ; tlu2_linear_linear_prelookup ( &
in_efOut . mField0 [ 0ULL ] , & in_efOut . mField1 [ 0ULL ] , & in_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t70 = in_efOut ;
tlu2_1d_linear_linear_value ( & jn_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = jn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & kn_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = kn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ln_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL ]
, & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ln_efOut [ 0 ] ;
intrm_sf_mf_1284 = ( ( ( 1.0 - intrm_sf_mf_934 ) - t2088 ) * t1593_idx_0 +
t1585_idx_0 * intrm_sf_mf_934 ) + t1586_idx_0 * t2088 ; t1187 [ 0ULL ] = X [
63ULL ] ; tlu2_linear_linear_prelookup ( & mn_efOut . mField0 [ 0ULL ] , &
mn_efOut . mField1 [ 0ULL ] , & mn_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = mn_efOut ; tlu2_1d_linear_linear_value ( &
nn_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = nn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & on_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = on_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pn_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = pn_efOut [ 0 ] ; zc_int306 = ( ( ( 1.0 - t3235 ) - t2098 )
* t1593_idx_0 + t1585_idx_0 * t3235 ) + t1586_idx_0 * t2098 ; t1187 [ 0ULL ]
= X [ 367ULL ] ; tlu2_linear_linear_prelookup ( & qn_efOut . mField0 [ 0ULL ]
, & qn_efOut . mField1 [ 0ULL ] , & qn_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t32 = qn_efOut ; tlu2_1d_linear_linear_value ( &
rn_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = rn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & sn_efOut
[ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = sn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & tn_efOut [
0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = tn_efOut [ 0 ] ; intrm_sf_mf_934 = ( ( ( 1.0 - t2186 ) -
t2188 ) * t1593_idx_0 + t1585_idx_0 * t2186 ) + t1586_idx_0 * t2188 ; t1187 [
0ULL ] = X [ 370ULL ] ; tlu2_linear_linear_prelookup ( & un_efOut . mField0 [
0ULL ] , & un_efOut . mField1 [ 0ULL ] , & un_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t89 = un_efOut ; tlu2_1d_linear_linear_value ( &
vn_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = vn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wn_efOut
[ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = wn_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & xn_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = xn_efOut [ 0 ] ; t2088 = ( ( ( 1.0 - t2186 ) - t2188 ) *
t1593_idx_0 + t1585_idx_0 * t2186 ) + t1586_idx_0 * t2188 ; t1187 [ 0ULL ] =
X [ 125ULL ] ; tlu2_linear_linear_prelookup ( & yn_efOut . mField0 [ 0ULL ] ,
& yn_efOut . mField1 [ 0ULL ] , & yn_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = yn_efOut ; tlu2_1d_linear_linear_value ( &
ao_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = ao_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bo_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = bo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & co_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = co_efOut [ 0 ] ; t3235 = ( ( ( 1.0 - t1731 ) - t1733 ) *
t1593_idx_0 + t1585_idx_0 * t1731 ) + t1586_idx_0 * t1733 ; if ( - X [ 307ULL
] >= 0.0 ) { t1731 = - X [ 307ULL ] ; } else { t1731 = X [ 307ULL ] ; } t1733
= t1731 * 0.01 / ( t2525 == 0.0 ? 1.0E-16 : t2525 ) ; t2098 = t1733 >= 1.0 ?
t1733 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2098 == 0.0 ? 1.0E-16 : t2098 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2098 == 0.0 ? 1.0E-16 : t2098
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1318 = X [ 307ULL ] * t2206
* - 2.9973120849090416 / ( t2529 == 0.0 ? 1.0E-16 : t2529 ) ; t1731 = X [
307ULL ] * t1731 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * -
0.046833001326703774 / ( t2532 == 0.0 ? 1.0E-16 : t2532 ) ; t2098 = ( t1733 -
2000.0 ) / 2000.0 ; intrm_sf_mf_1428 = t2098 * t2098 * 3.0 - t2098 * t2098 *
t2098 * 2.0 ; if ( t1733 <= 2000.0 ) { t2098 = intrm_sf_mf_1318 *
9.9999999999999991E-11 ; } else if ( t1733 >= 4000.0 ) { t2098 = t1731 *
9.9999999999999991E-11 ; } else { t2098 = ( ( 1.0 - intrm_sf_mf_1428 ) *
intrm_sf_mf_1318 + t1731 * intrm_sf_mf_1428 ) * 9.9999999999999991E-11 ; }
t1731 = X [ 369ULL ] >= 0.0 ? X [ 369ULL ] : - X [ 369ULL ] ; t1733 = t1731 *
0.01 / ( t2525 == 0.0 ? 1.0E-16 : t2525 ) ; intrm_sf_mf_1318 = t1733 >= 1.0 ?
t1733 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1318 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1318 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1318 == 0.0 ? 1.0E-16 : intrm_sf_mf_1318 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1428 = X [ 369ULL ] * t2206 *
2.9973120849090416 / ( t2529 == 0.0 ? 1.0E-16 : t2529 ) ; t1731 = X [ 369ULL
] * t1731 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) *
0.046833001326703774 / ( t2532 == 0.0 ? 1.0E-16 : t2532 ) ; intrm_sf_mf_1318
= ( t1733 - 2000.0 ) / 2000.0 ; t2300 = intrm_sf_mf_1318 * intrm_sf_mf_1318 *
3.0 - intrm_sf_mf_1318 * intrm_sf_mf_1318 * intrm_sf_mf_1318 * 2.0 ; if (
t1733 <= 2000.0 ) { intrm_sf_mf_1318 = intrm_sf_mf_1428 *
9.9999999999999991E-11 ; } else if ( t1733 >= 4000.0 ) { intrm_sf_mf_1318 =
t1731 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1318 = ( ( 1.0 - t2300
) * intrm_sf_mf_1428 + t1731 * t2300 ) * 9.9999999999999991E-11 ; } t1187 [
0ULL ] = X [ 130ULL ] ; tlu2_linear_linear_prelookup ( & do_efOut . mField0 [
0ULL ] , & do_efOut . mField1 [ 0ULL ] , & do_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = do_efOut ; tlu2_1d_linear_linear_value ( &
eo_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = eo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fo_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = fo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & go_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = go_efOut [ 0 ] ; t1731 = ( ( ( 1.0 - t1695 ) - t1696 ) *
t1593_idx_0 + t1585_idx_0 * t1695 ) + t1586_idx_0 * t1696 ; t1187 [ 0ULL ] =
X [ 134ULL ] ; tlu2_linear_linear_prelookup ( & ho_efOut . mField0 [ 0ULL ] ,
& ho_efOut . mField1 [ 0ULL ] , & ho_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = ho_efOut ; tlu2_1d_linear_linear_value ( &
io_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = io_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & jo_efOut
[ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = jo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ko_efOut [
0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = ko_efOut [ 0 ] ; t1733 = ( ( ( 1.0 - t1695 ) - t1696 ) *
t1593_idx_0 + t1585_idx_0 * t1695 ) + t1586_idx_0 * t1696 ; t1187 [ 0ULL ] =
X [ 381ULL ] ; tlu2_linear_linear_prelookup ( & lo_efOut . mField0 [ 0ULL ] ,
& lo_efOut . mField1 [ 0ULL ] , & lo_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = lo_efOut ; tlu2_1d_linear_linear_value ( &
mo_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = mo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & no_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = no_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & oo_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = oo_efOut [ 0 ] ; intrm_sf_mf_1428 = ( ( ( 1.0 - t2228 ) -
t2251 ) * t1593_idx_0 + t1585_idx_0 * t2228 ) + t1586_idx_0 * t2251 ; t2300 =
X [ 129ULL ] >= 0.0 ? X [ 129ULL ] : - X [ 129ULL ] ; t1187 [ 0ULL ] = X [
383ULL ] ; tlu2_linear_linear_prelookup ( & po_efOut . mField0 [ 0ULL ] , &
po_efOut . mField1 [ 0ULL ] , & po_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = po_efOut ; tlu2_1d_linear_linear_value ( &
qo_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = qo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ro_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = ro_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & so_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = so_efOut [ 0 ] ; t2302 = ( ( ( 1.0 - t2228 ) - t2251 ) *
t1593_idx_0 + t1585_idx_0 * t2228 ) + t1586_idx_0 * t2251 ; if ( - X [ 369ULL
] >= 0.0 ) { intrm_sf_mf_1449 = - X [ 369ULL ] ; } else { intrm_sf_mf_1449 =
X [ 369ULL ] ; } intrm_sf_mf_151 = intrm_sf_mf_1449 * 0.01 / ( t2598 == 0.0 ?
1.0E-16 : t2598 ) ; t2306 = intrm_sf_mf_151 >= 1.0 ? intrm_sf_mf_151 : 1.0 ;
t2863 = pmf_log10 ( 6.9 / ( t2306 == 0.0 ? 1.0E-16 : t2306 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2306 == 0.0 ? 1.0E-16 : t2306
) + 0.00017169489553429715 ) * 3.24 ; t2311 = X [ 369ULL ] * t2258 * -
2.9973120849090416 / ( t2627 == 0.0 ? 1.0E-16 : t2627 ) ; intrm_sf_mf_160 =
t2300 * 0.01 / ( t1728 == 0.0 ? 1.0E-16 : t1728 ) ; intrm_sf_mf_1449 = X [
369ULL ] * intrm_sf_mf_1449 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) *
- 0.046833001326703774 / ( t2630 == 0.0 ? 1.0E-16 : t2630 ) ; t2306 = (
intrm_sf_mf_151 - 2000.0 ) / 2000.0 ; U_idx_3 = t2306 * t2306 * 3.0 - t2306 *
t2306 * t2306 * 2.0 ; if ( intrm_sf_mf_151 <= 2000.0 ) { t2306 = t2311 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_151 >= 4000.0 ) { t2306 =
intrm_sf_mf_1449 * 9.9999999999999991E-11 ; } else { t2306 = ( ( 1.0 -
U_idx_3 ) * t2311 + intrm_sf_mf_1449 * U_idx_3 ) * 9.9999999999999991E-11 ; }
if ( - X [ 342ULL ] >= 0.0 ) { intrm_sf_mf_1449 = - X [ 342ULL ] ; } else {
intrm_sf_mf_1449 = X [ 342ULL ] ; } intrm_sf_mf_151 = intrm_sf_mf_1449 * 0.01
/ ( t2598 == 0.0 ? 1.0E-16 : t2598 ) ; t2311 = intrm_sf_mf_151 >= 1.0 ?
intrm_sf_mf_151 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2311 == 0.0 ? 1.0E-16 :
t2311 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2311 == 0.0 ?
1.0E-16 : t2311 ) + 0.00017169489553429715 ) * 3.24 ; U_idx_3 = X [ 342ULL ]
* t2258 * - 2.9973120849090416 / ( t2627 == 0.0 ? 1.0E-16 : t2627 ) ;
intrm_sf_mf_1449 = X [ 342ULL ] * intrm_sf_mf_1449 * ( 1.0 / ( t2863 == 0.0 ?
1.0E-16 : t2863 ) ) * - 0.046833001326703774 / ( t2630 == 0.0 ? 1.0E-16 :
t2630 ) ; t2311 = intrm_sf_mf_160 >= 1.0 ? intrm_sf_mf_160 : 1.0 ; t2316 = (
intrm_sf_mf_151 - 2000.0 ) / 2000.0 ; t2318 = t2316 * t2316 * 3.0 - t2316 *
t2316 * t2316 * 2.0 ; if ( intrm_sf_mf_151 <= 2000.0 ) { t2316 = U_idx_3 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_151 >= 4000.0 ) { t2316 =
intrm_sf_mf_1449 * 9.9999999999999991E-11 ; } else { t2316 = ( ( 1.0 - t2318
) * U_idx_3 + intrm_sf_mf_1449 * t2318 ) * 9.9999999999999991E-11 ; } if (
U_idx_10 >= 1.0 ) { intrm_sf_mf_1449 = 1.0 ; } else { intrm_sf_mf_1449 =
U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; } t2863 = pmf_log10 ( 6.9 / ( t2311 == 0.0
? 1.0E-16 : t2311 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2311 ==
0.0 ? 1.0E-16 : t2311 ) + 0.00017169489553429715 ) * 3.24 ; t2311 = X [
129ULL ] * t1703 * 35.2 / ( t1732 == 0.0 ? 1.0E-16 : t1732 ) ; t2300 = X [
129ULL ] * t2300 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * 0.55 / (
t1735 == 0.0 ? 1.0E-16 : t1735 ) ; intrm_sf_mf_151 = ( intrm_sf_mf_160 -
2000.0 ) / 2000.0 ; U_idx_3 = intrm_sf_mf_151 * intrm_sf_mf_151 * 3.0 -
intrm_sf_mf_151 * intrm_sf_mf_151 * intrm_sf_mf_151 * 2.0 ; if (
intrm_sf_mf_160 <= 2000.0 ) { intrm_sf_mf_151 = t2311 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_160 >= 4000.0 ) {
intrm_sf_mf_151 = t2300 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_151 =
( ( 1.0 - U_idx_3 ) * t2311 + t2300 * U_idx_3 ) * 9.9999999999999991E-11 ; }
if ( - X [ 117ULL ] >= 0.0 ) { t2300 = - X [ 117ULL ] ; } else { t2300 = X [
117ULL ] ; } t2311 = t2300 * 0.01 / ( t1728 == 0.0 ? 1.0E-16 : t1728 ) ;
intrm_sf_mf_160 = t2311 >= 1.0 ? t2311 : 1.0 ; t2863 = pmf_log10 ( 6.9 / (
intrm_sf_mf_160 == 0.0 ? 1.0E-16 : intrm_sf_mf_160 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_160 == 0.0 ? 1.0E-16 : intrm_sf_mf_160 )
+ 0.00017169489553429715 ) * 3.24 ; U_idx_3 = X [ 117ULL ] * t1703 * - 35.2 /
( t1732 == 0.0 ? 1.0E-16 : t1732 ) ; t2300 = X [ 117ULL ] * t2300 * ( 1.0 / (
t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * - 0.55 / ( t1735 == 0.0 ? 1.0E-16 :
t1735 ) ; intrm_sf_mf_160 = ( t2311 - 2000.0 ) / 2000.0 ; t2318 = X [ 49ULL ]
* X [ 391ULL ] * 0.001 + intrm_sf_mf_192 ; intrm_sf_mf_192 = intrm_sf_mf_160
* intrm_sf_mf_160 * 3.0 - intrm_sf_mf_160 * intrm_sf_mf_160 * intrm_sf_mf_160
* 2.0 ; if ( t2311 <= 2000.0 ) { intrm_sf_mf_160 = U_idx_3 *
9.9999999999999991E-11 ; } else if ( t2311 >= 4000.0 ) { intrm_sf_mf_160 =
t2300 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_160 = ( ( 1.0 -
intrm_sf_mf_192 ) * U_idx_3 + t2300 * intrm_sf_mf_192 ) *
9.9999999999999991E-11 ; } if ( X [ 113ULL ] <= 0.0 ) { t2300 = 0.0 ; } else
{ t2300 = X [ 113ULL ] >= 1.0 ? 1.0 : X [ 113ULL ] ; } if ( X [ 112ULL ] <=
0.0 ) { t2311 = 0.0 ; } else { t2311 = X [ 112ULL ] >= 1.0 ? 1.0 : X [ 112ULL
] ; } U_idx_3 = ( ( ( 1.0 - t2300 ) - t2311 ) * 296.802103844292 + t2300 *
461.523 ) + t2311 * 4124.48151675695 ; t1187 [ 0ULL ] = X [ 111ULL ] ;
tlu2_linear_linear_prelookup ( & to_efOut . mField0 [ 0ULL ] , & to_efOut .
mField1 [ 0ULL ] , & to_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t20 = to_efOut ; tlu2_1d_linear_linear_value ( & uo_efOut [ 0ULL ] , & t20 .
mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = uo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vo_efOut [ 0ULL ] , & t20 . mField0 [
0ULL ] , & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = vo_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & wo_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL
] , & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = wo_efOut [ 0 ] ; t2320 =
( ( ( 1.0 - t2300 ) - t2311 ) * t1593_idx_0 + t1585_idx_0 * t2300 ) +
t1586_idx_0 * t2311 ; t1187 [ 0ULL ] = X [ 151ULL ] ;
tlu2_linear_linear_prelookup ( & xo_efOut . mField0 [ 0ULL ] , & xo_efOut .
mField1 [ 0ULL ] , & xo_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t70 = xo_efOut ; tlu2_1d_linear_linear_value ( & yo_efOut [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = yo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ap_efOut [ 0ULL ] , & t70 . mField0 [
0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ap_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & bp_efOut [ 0ULL ] , & t70 . mField0 [ 0ULL
] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = bp_efOut [ 0 ] ; t2300 =
( ( ( 1.0 - t1762 ) - t1763 ) * t1593_idx_0 + t1585_idx_0 * t1762 ) +
t1586_idx_0 * t1763 ; if ( 1.0 - X [ 122ULL ] >= 0.01 ) { t2311 = 1.0 - X [
122ULL ] ; } else if ( 1.0 - X [ 122ULL ] >= - 0.1 ) { t2311 = pmf_exp ( ( (
1.0 - X [ 122ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2311 =
1.6701700790245661E-7 ; } t1187 [ 0ULL ] = X [ 152ULL ] ;
tlu2_linear_linear_prelookup ( & cp_efOut . mField0 [ 0ULL ] , & cp_efOut .
mField1 [ 0ULL ] , & cp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t6 = cp_efOut ; tlu2_1d_linear_linear_value ( & dp_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = dp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ep_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ep_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & fp_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = fp_efOut [ 0 ] ;
intrm_sf_mf_192 = ( ( ( 1.0 - t1762 ) - t1763 ) * t1593_idx_0 + t1585_idx_0 *
t1762 ) + t1586_idx_0 * t1763 ; t1187 [ 0ULL ] = X [ 147ULL ] ;
tlu2_linear_linear_prelookup ( & gp_efOut . mField0 [ 0ULL ] , & gp_efOut .
mField1 [ 0ULL ] , & gp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t73 = gp_efOut ; tlu2_1d_linear_linear_value ( & hp_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = hp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ip_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ip_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & jp_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL
] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = jp_efOut [ 0 ] ; t2321 =
( ( ( 1.0 - t1762 ) - t1763 ) * t1593_idx_0 + t1585_idx_0 * t1762 ) +
t1586_idx_0 * t1763 ; t1585_idx_0 = zc_int78 - ( - zc_int78 ) ; t1762 = ( ( X
[ 126ULL ] - 1.01325 ) - ( - zc_int78 ) ) / ( t1585_idx_0 == 0.0 ? 1.0E-16 :
t1585_idx_0 ) ; t1763 = t1762 * t1762 * 3.0 - t1762 * t1762 * t1762 * 2.0 ;
if ( X [ 126ULL ] - 1.01325 <= - zc_int78 ) { t1762 = 1.01325 ; } else if ( X
[ 126ULL ] - 1.01325 >= zc_int78 ) { t1762 = X [ 126ULL ] ; } else { t1762 =
( 1.0 - t1763 ) * 1.01325 + X [ 126ULL ] * t1763 ; } if ( X [ 160ULL ] <= 0.0
) { t1763 = 0.0 ; } else { t1763 = X [ 160ULL ] >= 1.0 ? 1.0 : X [ 160ULL ] ;
} if ( X [ 159ULL ] <= 0.0 ) { zc_int78 = 0.0 ; } else { zc_int78 = X [
159ULL ] >= 1.0 ? 1.0 : X [ 159ULL ] ; } U_idx_10 = ( ( ( 1.0 - t1763 ) -
zc_int78 ) * 296.802103844292 + t1763 * 461.523 ) + zc_int78 *
4124.48151675695 ; t1187 [ 0ULL ] = X [ 158ULL ] ;
tlu2_linear_linear_prelookup ( & kp_efOut . mField0 [ 0ULL ] , & kp_efOut .
mField1 [ 0ULL ] , & kp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t32 = kp_efOut ; tlu2_1d_linear_linear_value ( & lp_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = lp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & mp_efOut [ 0ULL ] , & t32 . mField0 [
0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = mp_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & np_efOut [ 0ULL ] , & t32 . mField0 [ 0ULL
] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = np_efOut [ 0 ] ; t2324 =
( ( ( 1.0 - t1763 ) - zc_int78 ) * t1593_idx_0 + t1585_idx_0 * t1763 ) +
t1586_idx_0 * zc_int78 ; t1763 = ( U_idx_1 - 0.9 ) / 0.099999999999999978 ;
t1187 [ 0ULL ] = X [ 173ULL ] ; tlu2_linear_linear_prelookup ( & op_efOut .
mField0 [ 0ULL ] , & op_efOut . mField1 [ 0ULL ] , & op_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t89 = op_efOut ;
tlu2_1d_linear_linear_value ( & pp_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = pp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qp_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = qp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & rp_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = rp_efOut [ 0 ] ; zc_int78
= ( ( ( 1.0 - t1815 ) - intrm_sf_mf_325 ) * t1593_idx_0 + t1585_idx_0 * t1815
) + t1586_idx_0 * intrm_sf_mf_325 ; t1187 [ 0ULL ] = X [ 154ULL ] ;
tlu2_linear_linear_prelookup ( & sp_efOut . mField0 [ 0ULL ] , & sp_efOut .
mField1 [ 0ULL ] , & sp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = sp_efOut ; tlu2_1d_linear_linear_value ( & tp_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = tp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & up_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = up_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & vp_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = vp_efOut [ 0 ] ; t1815 =
( ( ( 1.0 - intrm_sf_mf_328 ) - t1827 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_328 ) + t1586_idx_0 * t1827 ; t1187 [ 0ULL ] = X [ 177ULL ] ;
tlu2_linear_linear_prelookup ( & wp_efOut . mField0 [ 0ULL ] , & wp_efOut .
mField1 [ 0ULL ] , & wp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = wp_efOut ; tlu2_1d_linear_linear_value ( & xp_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = xp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & yp_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = yp_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & aq_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = aq_efOut [ 0 ] ;
intrm_sf_mf_325 = ( ( ( 1.0 - t1767 ) - t1790 ) * t1593_idx_0 + t1585_idx_0 *
t1767 ) + t1586_idx_0 * t1790 ; t1187 [ 0ULL ] = X [ 182ULL ] ;
tlu2_linear_linear_prelookup ( & bq_efOut . mField0 [ 0ULL ] , & bq_efOut .
mField1 [ 0ULL ] , & bq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = bq_efOut ; tlu2_1d_linear_linear_value ( & cq_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = cq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & dq_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = dq_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & eq_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = eq_efOut [ 0 ] ;
intrm_sf_mf_328 = ( ( ( 1.0 - t1767 ) - t1790 ) * t1593_idx_0 + t1585_idx_0 *
t1767 ) + t1586_idx_0 * t1790 ; if ( - X [ 167ULL ] >= 0.0 ) { t1827 = - X [
167ULL ] ; } else { t1827 = X [ 167ULL ] ; } t2325 = t1827 * 0.01 / ( t1865
== 0.0 ? 1.0E-16 : t1865 ) ; t2326 = t2325 >= 1.0 ? t2325 : 1.0 ; t2863 =
pmf_log10 ( 6.9 / ( t2326 == 0.0 ? 1.0E-16 : t2326 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2326 == 0.0 ? 1.0E-16 : t2326 ) +
0.00017169489553429715 ) * 3.24 ; t2327 = X [ 167ULL ] * t1797 * - 35.2 / (
t1869 == 0.0 ? 1.0E-16 : t1869 ) ; t1827 = X [ 167ULL ] * t1827 * ( 1.0 / (
t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * - 0.55 / ( t1872 == 0.0 ? 1.0E-16 :
t1872 ) ; t2326 = ( t2325 - 2000.0 ) / 2000.0 ; t2328 = t2326 * t2326 * 3.0 -
t2326 * t2326 * t2326 * 2.0 ; if ( t2325 <= 2000.0 ) { t2326 = t2327 *
9.9999999999999991E-11 ; } else if ( t2325 >= 4000.0 ) { t2326 = t1827 *
9.9999999999999991E-11 ; } else { t2326 = ( ( 1.0 - t2328 ) * t2327 + t1827 *
t2328 ) * 9.9999999999999991E-11 ; } t1827 = X [ 181ULL ] >= 0.0 ? X [ 181ULL
] : - X [ 181ULL ] ; t2325 = t1827 * 0.01 / ( t1865 == 0.0 ? 1.0E-16 : t1865
) ; t2327 = t2325 >= 1.0 ? t2325 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2327 ==
0.0 ? 1.0E-16 : t2327 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t2327 == 0.0 ? 1.0E-16 : t2327 ) + 0.00017169489553429715 ) * 3.24 ; t2328 =
X [ 181ULL ] * t1797 * 35.2 / ( t1869 == 0.0 ? 1.0E-16 : t1869 ) ; t1827 = X
[ 181ULL ] * t1827 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * 0.55 / (
t1872 == 0.0 ? 1.0E-16 : t1872 ) ; t2327 = ( t2325 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_416 = t2327 * t2327 * 3.0 - t2327 * t2327 * t2327 * 2.0 ; if (
t2325 <= 2000.0 ) { t2327 = t2328 * 9.9999999999999991E-11 ; } else if (
t2325 >= 4000.0 ) { t2327 = t1827 * 9.9999999999999991E-11 ; } else { t2327 =
( ( 1.0 - intrm_sf_mf_416 ) * t2328 + t1827 * intrm_sf_mf_416 ) *
9.9999999999999991E-11 ; } t1187 [ 0ULL ] = X [ 199ULL ] ;
tlu2_linear_linear_prelookup ( & fq_efOut . mField0 [ 0ULL ] , & fq_efOut .
mField1 [ 0ULL ] , & fq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t20 = fq_efOut ; tlu2_1d_linear_linear_value ( & gq_efOut [ 0ULL ] , & t20 .
mField0 [ 0ULL ] , & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = gq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & hq_efOut [ 0ULL ] , & t20 . mField0 [
0ULL ] , & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = hq_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & iq_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL
] , & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = iq_efOut [ 0 ] ; t1827 =
( ( ( 1.0 - intrm_sf_mf_385 ) - zc_int132 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_385 ) + t1586_idx_0 * zc_int132 ; t1187 [ 0ULL ] = X [ 200ULL ] ;
tlu2_linear_linear_prelookup ( & jq_efOut . mField0 [ 0ULL ] , & jq_efOut .
mField1 [ 0ULL ] , & jq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = jq_efOut ; tlu2_1d_linear_linear_value ( & kq_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = kq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & lq_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = lq_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & mq_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = mq_efOut [ 0 ] ; t2325 =
( ( ( 1.0 - intrm_sf_mf_385 ) - zc_int132 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_385 ) + t1586_idx_0 * zc_int132 ; t1187 [ 0ULL ] = X [ 195ULL ] ;
tlu2_linear_linear_prelookup ( & nq_efOut . mField0 [ 0ULL ] , & nq_efOut .
mField1 [ 0ULL ] , & nq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = nq_efOut ; tlu2_1d_linear_linear_value ( & oq_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = oq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & pq_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = pq_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & qq_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = qq_efOut [ 0 ] ; t2328 =
( ( ( 1.0 - intrm_sf_mf_385 ) - zc_int132 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_385 ) + t1586_idx_0 * zc_int132 ; t1585_idx_0 = t1862 - ( - t1862
) ; intrm_sf_mf_385 = ( ( X [ 22ULL ] - X [ 174ULL ] ) - ( - t1862 ) ) / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; zc_int132 = intrm_sf_mf_385 *
intrm_sf_mf_385 * 3.0 - intrm_sf_mf_385 * intrm_sf_mf_385 * intrm_sf_mf_385 *
2.0 ; if ( X [ 22ULL ] - X [ 174ULL ] <= - t1862 ) { intrm_sf_mf_385 = X [
174ULL ] ; } else if ( X [ 22ULL ] - X [ 174ULL ] >= t1862 ) {
intrm_sf_mf_385 = X [ 22ULL ] ; } else { intrm_sf_mf_385 = ( 1.0 - zc_int132
) * X [ 174ULL ] + X [ 22ULL ] * zc_int132 ; } if ( 1.0 - X [ 213ULL ] >=
0.01 ) { t1862 = 1.0 - X [ 213ULL ] ; } else if ( 1.0 - X [ 213ULL ] >= - 0.1
) { t1862 = pmf_exp ( ( ( 1.0 - X [ 213ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; }
else { t1862 = 1.6701700790245661E-7 ; } if ( X [ 204ULL ] <= 0.0 ) {
zc_int132 = 0.0 ; } else { zc_int132 = X [ 204ULL ] >= 1.0 ? 1.0 : X [ 204ULL
] ; } if ( X [ 203ULL ] <= 0.0 ) { intrm_sf_mf_416 = 0.0 ; } else {
intrm_sf_mf_416 = X [ 203ULL ] >= 1.0 ? 1.0 : X [ 203ULL ] ; } t3649 = ( ( (
1.0 - zc_int132 ) - intrm_sf_mf_416 ) * 296.802103844292 + zc_int132 *
461.523 ) + intrm_sf_mf_416 * 259.836612622973 ; t1187 [ 0ULL ] = X [ 202ULL
] ; tlu2_linear_linear_prelookup ( & rq_efOut . mField0 [ 0ULL ] , & rq_efOut
. mField1 [ 0ULL ] , & rq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] )
; t92 = rq_efOut ; tlu2_1d_linear_linear_value ( & sq_efOut [ 0ULL ] , & t92
. mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
sq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & tq_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = tq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & uq_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = uq_efOut [ 0 ]
; U_idx_9 = ( ( ( 1.0 - zc_int132 ) - intrm_sf_mf_416 ) * t1593_idx_0 +
t1585_idx_0 * zc_int132 ) + t1586_idx_0 * intrm_sf_mf_416 ; zc_int132 = t1763
* t1763 * 3.0 - t1763 * t1763 * t1763 * 2.0 ; tlu2_1d_linear_linear_value ( &
vq_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = vq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wq_efOut
[ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = wq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & xq_efOut
[ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = xq_efOut [ 0 ] ; t1763 = ( ( ( 1.0 - piece239 ) - t1874 )
* t1593_idx_0 + t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ;
tlu2_1d_linear_linear_value ( & yq_efOut [ 0ULL ] , & t76 . mField0 [ 0ULL ]
, & t76 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField22 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = yq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ar_efOut [ 0ULL ] , & t76 . mField0 [ 0ULL ]
, & t76 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ar_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & br_efOut [ 0ULL ] , & t76 . mField0 [ 0ULL ]
, & t76 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = br_efOut [ 0 ] ;
intrm_sf_mf_416 = ( ( ( 1.0 - piece239 ) - t1874 ) * t1593_idx_0 +
t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ; t1187 [ 0ULL ] = X [ 216ULL
] ; tlu2_linear_linear_prelookup ( & cr_efOut . mField0 [ 0ULL ] , & cr_efOut
. mField1 [ 0ULL ] , & cr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] )
; t92 = cr_efOut ; tlu2_1d_linear_linear_value ( & dr_efOut [ 0ULL ] , & t92
. mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 =
dr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & er_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = er_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & fr_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = fr_efOut [ 0 ]
; t2332 = ( ( ( 1.0 - piece250 ) - t1909 ) * t1593_idx_0 + t1585_idx_0 *
piece250 ) + t1586_idx_0 * t1909 ; tlu2_1d_linear_linear_value ( & gr_efOut [
0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField22 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = gr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & hr_efOut
[ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1585_idx_0 = hr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ir_efOut
[ 0ULL ] , & t62 . mField0 [ 0ULL ] , & t62 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1586_idx_0 = ir_efOut [ 0 ] ; piece250 = ( ( ( 1.0 - piece239 ) -
t1874 ) * t1593_idx_0 + t1585_idx_0 * piece239 ) + t1586_idx_0 * t1874 ;
tlu2_1d_linear_linear_value ( & jr_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ]
, & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField22 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = jr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & kr_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ]
, & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = kr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lr_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ]
, & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = lr_efOut [ 0 ] ; t1909 =
( ( ( 1.0 - piece239 ) - t1874 ) * t1593_idx_0 + t1585_idx_0 * piece239 ) +
t1586_idx_0 * t1874 ; t1187 [ 0ULL ] = X [ 227ULL ] ;
tlu2_linear_linear_prelookup ( & mr_efOut . mField0 [ 0ULL ] , & mr_efOut .
mField1 [ 0ULL ] , & mr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = mr_efOut ; tlu2_1d_linear_linear_value ( & nr_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = nr_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & or_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = or_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & pr_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = pr_efOut [ 0 ] ; t2333 =
( ( ( 1.0 - t2084 ) - t2977 ) * t1593_idx_0 + t1585_idx_0 * t2084 ) +
t1586_idx_0 * t2977 ; if ( U_idx_1 <= 0.9 ) { t2084 = 0.0 ; } else { t2084 =
U_idx_1 >= 1.0 ? 1.0 : zc_int132 ; } t1187 [ 0ULL ] = X [ 245ULL ] ;
tlu2_linear_linear_prelookup ( & qr_efOut . mField0 [ 0ULL ] , & qr_efOut .
mField1 [ 0ULL ] , & qr_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = qr_efOut ; tlu2_1d_linear_linear_value ( & rr_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = rr_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & sr_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = sr_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & tr_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = tr_efOut [ 0 ] ;
zc_int132 = ( ( ( 1.0 - intrm_sf_mf_583 ) - t1833 ) * t1593_idx_0 +
t1585_idx_0 * intrm_sf_mf_583 ) + t1586_idx_0 * t1833 ; t1187 [ 0ULL ] = X [
256ULL ] ; tlu2_linear_linear_prelookup ( & ur_efOut . mField0 [ 0ULL ] , &
ur_efOut . mField1 [ 0ULL ] , & ur_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t92 = ur_efOut ; tlu2_1d_linear_linear_value ( &
vr_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = vr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wr_efOut
[ 0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = wr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & xr_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = xr_efOut [ 0 ] ; intrm_sf_mf_583 = ( ( ( 1.0 - t1911 ) -
t1912 ) * t1593_idx_0 + t1585_idx_0 * t1911 ) + t1586_idx_0 * t1912 ; t1187 [
0ULL ] = X [ 259ULL ] ; tlu2_linear_linear_prelookup ( & yr_efOut . mField0 [
0ULL ] , & yr_efOut . mField1 [ 0ULL ] , & yr_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t6 = yr_efOut ; tlu2_1d_linear_linear_value ( &
as_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = as_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bs_efOut
[ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = bs_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & cs_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = cs_efOut [ 0 ] ; t1833 = ( ( ( 1.0 - t1911 ) - t1912 ) *
t1593_idx_0 + t1585_idx_0 * t1911 ) + t1586_idx_0 * t1912 ; if ( - X [ 181ULL
] >= 0.0 ) { t2977 = - X [ 181ULL ] ; } else { t2977 = X [ 181ULL ] ; } t2334
= t2977 * 0.05 / ( t2958 == 0.0 ? 1.0E-16 : t2958 ) ; t2335 = t2334 >= 1.0 ?
t2334 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2335 == 0.0 ? 1.0E-16 : t2335 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2335 == 0.0 ? 1.0E-16 : t2335
) + 2.8767404433520813E-5 ) * 3.24 ; t2336 = X [ 181ULL ] * zc_int164 * -
11.2 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; t2977 = X [ 181ULL ] * t2977 * (
1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * - 0.175 / ( t3025 == 0.0 ?
1.0E-16 : t3025 ) ; t2335 = ( t2334 - 2000.0 ) / 2000.0 ; intrm_sf_mf_850 =
t2335 * t2335 * 3.0 - t2335 * t2335 * t2335 * 2.0 ; if ( t2334 <= 2000.0 ) {
t2335 = t2336 * 9.9999999999999991E-11 ; } else if ( t2334 >= 4000.0 ) {
t2335 = t2977 * 9.9999999999999991E-11 ; } else { t2335 = ( ( 1.0 -
intrm_sf_mf_850 ) * t2336 + t2977 * intrm_sf_mf_850 ) *
9.9999999999999991E-11 ; } t2977 = X [ 258ULL ] >= 0.0 ? X [ 258ULL ] : - X [
258ULL ] ; t2334 = t2977 * 0.05 / ( t2958 == 0.0 ? 1.0E-16 : t2958 ) ; t2336
= t2334 >= 1.0 ? t2334 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2336 == 0.0 ?
1.0E-16 : t2336 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2336 ==
0.0 ? 1.0E-16 : t2336 ) + 2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_850 =
X [ 258ULL ] * zc_int164 * 11.2 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; t2977
= X [ 258ULL ] * t2977 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * 0.175
/ ( t3025 == 0.0 ? 1.0E-16 : t3025 ) ; t2336 = ( t2334 - 2000.0 ) / 2000.0 ;
t2338 = t2336 * t2336 * 3.0 - t2336 * t2336 * t2336 * 2.0 ; if ( t2334 <=
2000.0 ) { t2336 = intrm_sf_mf_850 * 9.9999999999999991E-11 ; } else if (
t2334 >= 4000.0 ) { t2336 = t2977 * 9.9999999999999991E-11 ; } else { t2336 =
( ( 1.0 - t2338 ) * intrm_sf_mf_850 + t2977 * t2338 ) *
9.9999999999999991E-11 ; } t1187 [ 0ULL ] = X [ 59ULL ] ;
tlu2_linear_linear_prelookup ( & ds_efOut . mField0 [ 0ULL ] , & ds_efOut .
mField1 [ 0ULL ] , & ds_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = ds_efOut ; tlu2_1d_linear_linear_value ( & es_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = es_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & fs_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = fs_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & gs_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = gs_efOut [ 0 ] ; t2977 =
( ( ( 1.0 - t1939 ) - t1942 ) * t1593_idx_0 + t1585_idx_0 * t1939 ) +
t1586_idx_0 * t1942 ; t1187 [ 0ULL ] = X [ 270ULL ] ;
tlu2_linear_linear_prelookup ( & hs_efOut . mField0 [ 0ULL ] , & hs_efOut .
mField1 [ 0ULL ] , & hs_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t73 = hs_efOut ; tlu2_1d_linear_linear_value ( & is_efOut [ 0ULL ] , & t73 .
mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = is_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & js_efOut [ 0ULL ] , & t73 . mField0 [
0ULL ] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = js_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ks_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL
] , & t73 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ks_efOut [ 0 ] ; t1939 =
( ( ( 1.0 - intrm_sf_mf_608 ) - t1959 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_608 ) + t1586_idx_0 * t1959 ; t1187 [ 0ULL ] = X [ 273ULL ] ;
tlu2_linear_linear_prelookup ( & ls_efOut . mField0 [ 0ULL ] , & ls_efOut .
mField1 [ 0ULL ] , & ls_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t6 = ls_efOut ; tlu2_1d_linear_linear_value ( & ms_efOut [ 0ULL ] , & t6 .
mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ms_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ns_efOut [ 0ULL ] , & t6 . mField0 [
0ULL ] , & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = ns_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & os_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ]
, & t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = os_efOut [ 0 ] ; t1942 = (
( ( 1.0 - intrm_sf_mf_608 ) - t1959 ) * t1593_idx_0 + t1585_idx_0 *
intrm_sf_mf_608 ) + t1586_idx_0 * t1959 ; if ( - X [ 258ULL ] >= 0.0 ) {
t2334 = - X [ 258ULL ] ; } else { t2334 = X [ 258ULL ] ; } intrm_sf_mf_850 =
t2334 * 0.01 / ( t2103 == 0.0 ? 1.0E-16 : t2103 ) ; t2338 = intrm_sf_mf_850
>= 1.0 ? intrm_sf_mf_850 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( t2338 == 0.0 ?
1.0E-16 : t2338 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2338 ==
0.0 ? 1.0E-16 : t2338 ) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_739 =
X [ 258ULL ] * t1970 * - 2.9973120849090416 / ( t2107 == 0.0 ? 1.0E-16 :
t2107 ) ; t2334 = X [ 258ULL ] * t2334 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 :
t2863 ) ) * - 0.046833001326703774 / ( t2110 == 0.0 ? 1.0E-16 : t2110 ) ;
t2338 = ( intrm_sf_mf_850 - 2000.0 ) / 2000.0 ; t2340 = t2338 * t2338 * 3.0 -
t2338 * t2338 * t2338 * 2.0 ; if ( intrm_sf_mf_850 <= 2000.0 ) { t2338 =
intrm_sf_mf_739 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_850 >=
4000.0 ) { t2338 = t2334 * 9.9999999999999991E-11 ; } else { t2338 = ( ( 1.0
- t2340 ) * intrm_sf_mf_739 + t2334 * t2340 ) * 9.9999999999999991E-11 ; }
t2334 = X [ 272ULL ] >= 0.0 ? X [ 272ULL ] : - X [ 272ULL ] ; intrm_sf_mf_850
= t2334 * 0.01 / ( t2103 == 0.0 ? 1.0E-16 : t2103 ) ; intrm_sf_mf_739 =
intrm_sf_mf_850 >= 1.0 ? intrm_sf_mf_850 : 1.0 ; t2863 = pmf_log10 ( 6.9 / (
intrm_sf_mf_739 == 0.0 ? 1.0E-16 : intrm_sf_mf_739 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_739 == 0.0 ? 1.0E-16 : intrm_sf_mf_739 )
+ 0.00017169489553429715 ) * 3.24 ; t2340 = X [ 272ULL ] * t1970 *
2.9973120849090416 / ( t2107 == 0.0 ? 1.0E-16 : t2107 ) ; t2334 = X [ 272ULL
] * t2334 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 : t2863 ) ) *
0.046833001326703774 / ( t2110 == 0.0 ? 1.0E-16 : t2110 ) ; intrm_sf_mf_739 =
( intrm_sf_mf_850 - 2000.0 ) / 2000.0 ; t2341 = intrm_sf_mf_739 *
intrm_sf_mf_739 * 3.0 - intrm_sf_mf_739 * intrm_sf_mf_739 * intrm_sf_mf_739 *
2.0 ; if ( intrm_sf_mf_850 <= 2000.0 ) { intrm_sf_mf_739 = t2340 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_850 >= 4000.0 ) {
intrm_sf_mf_739 = t2334 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_739 =
( ( 1.0 - t2341 ) * t2340 + t2334 * t2341 ) * 9.9999999999999991E-11 ; }
t1187 [ 0ULL ] = X [ 284ULL ] ; tlu2_linear_linear_prelookup ( & ps_efOut .
mField0 [ 0ULL ] , & ps_efOut . mField1 [ 0ULL ] , & ps_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = ps_efOut ;
tlu2_1d_linear_linear_value ( & qs_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = qs_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & rs_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = rs_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ss_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ss_efOut [ 0 ] ; t2334 = (
( ( 1.0 - t1987 ) - t2026 ) * t1593_idx_0 + t1585_idx_0 * t1987 ) +
t1586_idx_0 * t2026 ; t1187 [ 0ULL ] = X [ 286ULL ] ;
tlu2_linear_linear_prelookup ( & ts_efOut . mField0 [ 0ULL ] , & ts_efOut .
mField1 [ 0ULL ] , & ts_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = ts_efOut ; tlu2_1d_linear_linear_value ( & us_efOut [ 0ULL ] , & t92 .
mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = us_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vs_efOut [ 0ULL ] , & t92 . mField0 [
0ULL ] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1585_idx_0 = vs_efOut [ 0 ]
; tlu2_1d_linear_linear_value ( & ws_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL
] , & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1586_idx_0 = ws_efOut [ 0 ] ;
intrm_sf_mf_850 = ( ( ( 1.0 - t1987 ) - t2026 ) * t1593_idx_0 + t1585_idx_0 *
t1987 ) + t1586_idx_0 * t2026 ; if ( - X [ 272ULL ] >= 0.0 ) { t2340 = - X [
272ULL ] ; } else { t2340 = X [ 272ULL ] ; } t2341 = t2340 * 0.01 / ( t2201
== 0.0 ? 1.0E-16 : t2201 ) ; intrm_sf_mf_860 = t2341 >= 1.0 ? t2341 : 1.0 ;
t2863 = pmf_log10 ( 6.9 / ( intrm_sf_mf_860 == 0.0 ? 1.0E-16 :
intrm_sf_mf_860 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_860 == 0.0 ? 1.0E-16 : intrm_sf_mf_860 ) + 0.00017169489553429715
) * 3.24 ; intrm_sf_mf_871 = X [ 272ULL ] * t2035 * - 2.9973120849090416 / (
t2205 == 0.0 ? 1.0E-16 : t2205 ) ; t2340 = X [ 272ULL ] * t2340 * ( 1.0 / (
t2863 == 0.0 ? 1.0E-16 : t2863 ) ) * - 0.046833001326703774 / ( t2208 == 0.0
? 1.0E-16 : t2208 ) ; intrm_sf_mf_860 = ( t2341 - 2000.0 ) / 2000.0 ; t2945 =
intrm_sf_mf_860 * intrm_sf_mf_860 * 3.0 - intrm_sf_mf_860 * intrm_sf_mf_860 *
intrm_sf_mf_860 * 2.0 ; if ( t2341 <= 2000.0 ) { intrm_sf_mf_860 =
intrm_sf_mf_871 * 9.9999999999999991E-11 ; } else if ( t2341 >= 4000.0 ) {
intrm_sf_mf_860 = t2340 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_860 =
( ( 1.0 - t2945 ) * intrm_sf_mf_871 + t2340 * t2945 ) *
9.9999999999999991E-11 ; } if ( - X [ 129ULL ] >= 0.0 ) { t2340 = - X [
129ULL ] ; } else { t2340 = X [ 129ULL ] ; } t2341 = t2340 * 0.01 / ( t2201
== 0.0 ? 1.0E-16 : t2201 ) ; intrm_sf_mf_871 = t2341 >= 1.0 ? t2341 : 1.0 ;
t2863 = pmf_log10 ( 6.9 / ( intrm_sf_mf_871 == 0.0 ? 1.0E-16 :
intrm_sf_mf_871 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_871 == 0.0 ? 1.0E-16 : intrm_sf_mf_871 ) + 0.00017169489553429715
) * 3.24 ; t2945 = X [ 129ULL ] * t2035 * - 2.9973120849090416 / ( t2205 ==
0.0 ? 1.0E-16 : t2205 ) ; t2340 = X [ 129ULL ] * t2340 * ( 1.0 / ( t2863 ==
0.0 ? 1.0E-16 : t2863 ) ) * - 0.046833001326703774 / ( t2208 == 0.0 ? 1.0E-16
: t2208 ) ; intrm_sf_mf_871 = ( t2341 - 2000.0 ) / 2000.0 ; t2901 =
intrm_sf_mf_871 * intrm_sf_mf_871 * 3.0 - intrm_sf_mf_871 * intrm_sf_mf_871 *
intrm_sf_mf_871 * 2.0 ; if ( t2341 <= 2000.0 ) { intrm_sf_mf_871 = t2945 *
9.9999999999999991E-11 ; } else if ( t2341 >= 4000.0 ) { intrm_sf_mf_871 =
t2340 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_871 = ( ( 1.0 - t2901 )
* t2945 + t2340 * t2901 ) * 9.9999999999999991E-11 ; } t1187 [ 0ULL ] = X [
305ULL ] ; tlu2_linear_linear_prelookup ( & xs_efOut . mField0 [ 0ULL ] , &
xs_efOut . mField1 [ 0ULL ] , & xs_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t73 = xs_efOut ; tlu2_1d_linear_linear_value ( &
ys_efOut [ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = ys_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & at_efOut
[ 0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = at_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bt_efOut [
0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = bt_efOut [ 0 ] ; t2340 = ( ( ( 1.0 - t2047 ) - t2058 ) *
t1593_idx_0 + t1585_idx_0 * t2047 ) + t1586_idx_0 * t2058 ; t1187 [ 0ULL ] =
X [ 308ULL ] ; tlu2_linear_linear_prelookup ( & ct_efOut . mField0 [ 0ULL ] ,
& ct_efOut . mField1 [ 0ULL ] , & ct_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL
] , & t124 [ 0ULL ] ) ; t6 = ct_efOut ; tlu2_1d_linear_linear_value ( &
dt_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1182 [ 0ULL ] , & t124 [ 0ULL
] ) ; t1593_idx_0 = dt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & et_efOut
[ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1585_idx_0 = et_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ft_efOut [
0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1182 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1586_idx_0 = ft_efOut [ 0 ] ; t2341 = ( ( ( 1.0 - t2047 ) - t2058 ) *
t1593_idx_0 + t1585_idx_0 * t2047 ) + t1586_idx_0 * t2058 ; if ( - X [ 239ULL
] >= 0.0 ) { t2945 = - X [ 239ULL ] ; } else { t2945 = X [ 239ULL ] ; } t2901
= t2945 * 0.05 / ( t2297 == 0.0 ? 1.0E-16 : t2297 ) ; intrm_sf_mf_995 = t2901
>= 1.0 ? t2901 : 1.0 ; t2863 = pmf_log10 ( 6.9 / ( intrm_sf_mf_995 == 0.0 ?
1.0E-16 : intrm_sf_mf_995 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_995 == 0.0 ? 1.0E-16 : intrm_sf_mf_995 ) + 2.8767404433520813E-5
) * 3.24 ; t2916 = X [ 239ULL ] * t3061 * - 11.2 / ( t2301 == 0.0 ? 1.0E-16 :
t2301 ) ; t2945 = X [ 239ULL ] * t2945 * ( 1.0 / ( t2863 == 0.0 ? 1.0E-16 :
t2863 ) ) * - 0.175 / ( t2304 == 0.0 ? 1.0E-16 : t2304 ) ; intrm_sf_mf_995 =
( t2901 - 2000.0 ) / 2000.0 ; U_idx_2 = intrm_sf_mf_995 * intrm_sf_mf_995 *
3.0 - intrm_sf_mf_995 * intrm_sf_mf_995 * intrm_sf_mf_995 * 2.0 ; if ( t2901
<= 2000.0 ) { intrm_sf_mf_995 = t2916 * 9.9999999999999991E-11 ; } else if (
t2901 >= 4000.0 ) { intrm_sf_mf_995 = t2945 * 9.9999999999999991E-11 ; } else
{ intrm_sf_mf_995 = ( ( 1.0 - U_idx_2 ) * t2916 + t2945 * U_idx_2 ) *
9.9999999999999991E-11 ; } t2863 = X [ 111ULL ] * U_idx_3 ; U_idx_3 = X [
106ULL ] * t1736 ; t1736 = ( ( real_T ) ( M [ 179ULL ] != 0 ) * 2.0 - 1.0 ) *
( U_idx_3 / ( X [ 107ULL ] == 0.0 ? 1.0E-16 : X [ 107ULL ] ) ) * ( U_idx_3 /
( X [ 107ULL ] == 0.0 ? 1.0E-16 : X [ 107ULL ] ) ) * ( X [ 129ULL ] /
7.8539816339744827E-5 ) * ( X [ 129ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2991 ; t2945 = - pmf_sqrt ( ( ( real_T ) ( M [ 2ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3009 / ( t1697 == 0.0 ? 1.0E-16 : t1697 ) / ( X [
130ULL ] == 0.0 ? 1.0E-16 : X [ 130ULL ] ) ) ) * 7.8539816339744827E-5 ; if (
t107 >= 0.0 ) { t2901 = t2945 * 100000.0 ; } else { t2901 = - t2945 *
100000.0 ; } t107 = t2901 * 0.01 / ( t1728 == 0.0 ? 1.0E-16 : t1728 ) ; t2916
= t1706 >= 1.0 ? t107 : 1.0 ; t3009 = pmf_log10 ( 6.9 / ( t2916 == 0.0 ?
1.0E-16 : t2916 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2916 ==
0.0 ? 1.0E-16 : t2916 ) + 0.00017169489553429715 ) * 3.24 ; t2916 = 1.0 / (
t3009 == 0.0 ? 1.0E-16 : t3009 ) ; t3009 = X [ 245ULL ] * t1919 ; t1919 = ( (
real_T ) ( M [ 173ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3009 / ( X [ 246ULL ] ==
0.0 ? 1.0E-16 : X [ 246ULL ] ) ) * ( t3009 / ( X [ 246ULL ] == 0.0 ? 1.0E-16
: X [ 246ULL ] ) ) * ( X [ 258ULL ] / 0.0019634954084936209 ) * ( X [ 258ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + zc_int132 ;
U_idx_2 = pmf_sqrt ( t1914 * t1914 * 9.999999999999999E-14 + ( ( real_T ) ( M
[ 174ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 256ULL ] * t1915 * t1913 * 1.0E-9 ) ;
t1914 = pmf_sqrt ( t1925 * t1925 * 9.999999999999999E-14 + ( ( real_T ) ( M [
175ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 259ULL ] * zc_int263 * t1913 * 1.0E-9 ) ;
t1915 = - pmf_sqrt ( ( ( real_T ) ( M [ 176ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2950 / ( t1913 == 0.0 ? 1.0E-16 : t1913 ) / ( X [ 256ULL ] == 0.0 ? 1.0E-16
: X [ 256ULL ] ) ) ) * 0.0019634954084936209 ; t1925 = zc_int164 * t1915 *
11.2 / ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; if ( zc_int116 >= 0.0 ) {
zc_int263 = t1915 * 100000.0 ; } else { zc_int263 = - t1915 * 100000.0 ; }
zc_int116 = zc_int263 * 0.05 / ( t2958 == 0.0 ? 1.0E-16 : t2958 ) ;
t1586_idx_0 = t121 >= 1.0 ? zc_int116 : 1.0 ; t1585_idx_0 = pmf_log10 ( 6.9 /
( t1586_idx_0 == 0.0 ? 1.0E-16 : t1586_idx_0 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( t1586_idx_0 == 0.0 ? 1.0E-16 : t1586_idx_0 ) +
2.8767404433520813E-5 ) * 3.24 ; t1915 = t1915 * zc_int263 * ( 1.0 / (
t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ) * 0.175 / ( t3025 == 0.0 ?
1.0E-16 : t3025 ) ; zc_int263 = t2916 * t2945 * t2901 * 0.55 / ( t1735 == 0.0
? 1.0E-16 : t1735 ) ; zc_int116 = ( zc_int116 - 2000.0 ) / 2000.0 ; t2901 =
zc_int116 * zc_int116 * 3.0 - zc_int116 * zc_int116 * zc_int116 * 2.0 ; if (
t121 <= 2000.0 ) { zc_int116 = t1925 * 1.0E-5 ; } else if ( t121 >= 4000.0 )
{ zc_int116 = t1915 * 1.0E-5 ; } else { zc_int116 = ( ( 1.0 - t2901 ) * t1925
+ t1915 * t2901 ) * 1.0E-5 ; } t2901 = - ( X [ 181ULL ] * U_idx_2 ) ; t1915 =
t2901 / 0.0019634954084936209 * 0.00031622776601683789 + zc_int116 ; U_idx_2
= - t1915 - t1915 * - 0.95 ; zc_int116 = ( - t1922 - t1915 * - 0.95 ) / (
U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t121 = zc_int116 * zc_int116 * 3.0 -
zc_int116 * zc_int116 * zc_int116 * 2.0 ; if ( - t1922 <= zc_int160 * - 0.95
) { zc_int116 = t1922 ; } else if ( - t1922 >= - zc_int160 ) { zc_int116 =
t1915 ; } else { zc_int116 = ( 1.0 - t121 ) * t1922 + t1915 * t121 ; } t1915
= - pmf_sqrt ( ( ( real_T ) ( M [ 177ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3032 / (
t1913 == 0.0 ? 1.0E-16 : t1913 ) / ( X [ 259ULL ] == 0.0 ? 1.0E-16 : X [
259ULL ] ) ) ) * 0.0019634954084936209 ; zc_int160 = zc_int164 * t1915 * 11.2
/ ( t2970 == 0.0 ? 1.0E-16 : t2970 ) ; if ( t1650 >= 0.0 ) { zc_int164 =
t1915 * 100000.0 ; } else { zc_int164 = - t1915 * 100000.0 ; } t107 = ( t107
- 2000.0 ) / 2000.0 ; t121 = zc_int164 * 0.05 / ( t2958 == 0.0 ? 1.0E-16 :
t2958 ) ; t1925 = t1931 >= 1.0 ? t121 : 1.0 ; t2916 = pmf_log10 ( 6.9 / (
t1925 == 0.0 ? 1.0E-16 : t1925 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( t1925 == 0.0 ? 1.0E-16 : t1925 ) + 2.8767404433520813E-5 ) * 3.24 ; t1915
= t1915 * zc_int164 * ( 1.0 / ( t2916 == 0.0 ? 1.0E-16 : t2916 ) ) * 0.175 /
( t3025 == 0.0 ? 1.0E-16 : t3025 ) ; zc_int164 = ( t121 - 2000.0 ) / 2000.0 ;
t121 = zc_int164 * zc_int164 * 3.0 - zc_int164 * zc_int164 * zc_int164 * 2.0
; if ( t1931 <= 2000.0 ) { zc_int164 = zc_int160 * 1.0E-5 ; } else if ( t1931
>= 4000.0 ) { zc_int164 = t1915 * 1.0E-5 ; } else { zc_int164 = ( ( 1.0 -
t121 ) * zc_int160 + t1915 * t121 ) * 1.0E-5 ; } t2916 = X [ 258ULL ] * t1914
; t1914 = t2916 / 0.0019634954084936209 * 0.00031622776601683789 + zc_int164
; t1586_idx_0 = - t1914 - t1914 * - 0.95 ; t1915 = ( - t1930 - t1914 * - 0.95
) / ( t1586_idx_0 == 0.0 ? 1.0E-16 : t1586_idx_0 ) ; zc_int160 = t1915 *
t1915 * 3.0 - t1915 * t1915 * t1915 * 2.0 ; t1915 = t107 * t107 * 3.0 - t107
* t107 * t107 * 2.0 ; if ( - t1930 <= t1928 * - 0.95 ) { t107 = t1930 ; }
else if ( - t1930 >= - t1928 ) { t107 = t1914 ; } else { t107 = ( 1.0 -
zc_int160 ) * t1930 + t1914 * zc_int160 ; } t1914 = ( ( real_T ) ( M [ 173ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3009 / ( X [ 246ULL ] == 0.0 ? 1.0E-16 : X [
246ULL ] ) ) * ( t3009 / ( X [ 246ULL ] == 0.0 ? 1.0E-16 : X [ 246ULL ] ) ) *
( - X [ 258ULL ] / 0.32 ) * ( - X [ 258ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + zc_int132 ; t1586_idx_0 = X [ 59ULL ] * zc_int272 ;
zc_int132 = ( ( real_T ) ( M [ 182ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1586_idx_0
/ ( X [ 60ULL ] == 0.0 ? 1.0E-16 : X [ 60ULL ] ) ) * ( t1586_idx_0 / ( X [
60ULL ] == 0.0 ? 1.0E-16 : X [ 60ULL ] ) ) * ( X [ 272ULL ] / 0.32 ) * ( X [
272ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2977 ; zc_int160 =
pmf_sqrt ( t1965 * t1965 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 183ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 270ULL ] * t1966 * t1963 * 1.0E-9 ) ; zc_int164
= pmf_sqrt ( t1975 * t1975 * 9.999999999999999E-14 + ( ( real_T ) ( M [
184ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 273ULL ] * zc_int32 * t1963 * 1.0E-9 ) ;
t121 = - pmf_sqrt ( ( ( real_T ) ( M [ 185ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2099 / ( t1963 == 0.0 ? 1.0E-16 : t1963 ) / ( X [ 270ULL ] == 0.0 ? 1.0E-16
: X [ 270ULL ] ) ) ) * 0.32 ; t1925 = t1970 * t121 * 2.9973120849090416 / (
t2107 == 0.0 ? 1.0E-16 : t2107 ) ; if ( t1971 >= 0.0 ) { t1928 = t121 *
100000.0 ; } else { t1928 = - t121 * 100000.0 ; } t1650 = t1928 * 0.01 / (
t2103 == 0.0 ? 1.0E-16 : t2103 ) ; t1931 = zc_int265 >= 1.0 ? t1650 : 1.0 ;
t1965 = t1703 * t2945 * 35.2 / ( t1732 == 0.0 ? 1.0E-16 : t1732 ) ; if (
t1706 <= 2000.0 ) { t1966 = t1965 * 1.0E-5 ; } else if ( t1706 >= 4000.0 ) {
t1966 = zc_int263 * 1.0E-5 ; } else { t1966 = ( ( 1.0 - t1915 ) * t1965 +
zc_int263 * t1915 ) * 1.0E-5 ; } t2945 = pmf_log10 ( 6.9 / ( t1931 == 0.0 ?
1.0E-16 : t1931 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1931 ==
0.0 ? 1.0E-16 : t1931 ) + 0.00017169489553429715 ) * 3.24 ; t1706 = t121 *
t1928 * ( 1.0 / ( t2945 == 0.0 ? 1.0E-16 : t2945 ) ) * 0.046833001326703774 /
( t2110 == 0.0 ? 1.0E-16 : t2110 ) ; t1915 = ( t1650 - 2000.0 ) / 2000.0 ;
t121 = t1915 * t1915 * 3.0 - t1915 * t1915 * t1915 * 2.0 ; if ( zc_int265 <=
2000.0 ) { t1915 = t1925 * 1.0E-5 ; } else if ( zc_int265 >= 4000.0 ) { t1915
= t1706 * 1.0E-5 ; } else { t1915 = ( ( 1.0 - t121 ) * t1925 + t1706 * t121 )
* 1.0E-5 ; } t2945 = - ( X [ 258ULL ] * zc_int160 ) ; t1706 = t2945 / 0.32 *
0.00031622776601683789 + t1915 ; t2958 = - t1706 - t1706 * - 0.95 ; t1915 = (
- t1972 - t1706 * - 0.95 ) / ( t2958 == 0.0 ? 1.0E-16 : t2958 ) ; zc_int160 =
t1915 * t1915 * 3.0 - t1915 * t1915 * t1915 * 2.0 ; if ( - t1972 <= zc_int232
* - 0.95 ) { t1915 = t1972 ; } else if ( - t1972 >= - zc_int232 ) { t1915 =
t1706 ; } else { t1915 = ( 1.0 - zc_int160 ) * t1972 + t1706 * zc_int160 ; }
t1706 = - pmf_sqrt ( ( ( real_T ) ( M [ 186ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2119 / ( t1963 == 0.0 ? 1.0E-16 : t1963 ) / ( X [ 273ULL ] == 0.0 ? 1.0E-16
: X [ 273ULL ] ) ) ) * 0.32 ; zc_int160 = pmf_sqrt ( t1698 * t1698 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 197ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 130ULL ] * t1699 * t1697 * 1.0E-9 ) ; t2950 = X [ 129ULL ] * zc_int160 ;
t1698 = t2950 / 7.8539816339744827E-5 * 0.00031622776601683789 + t1966 ;
t1699 = t1970 * t1706 * 2.9973120849090416 / ( t2107 == 0.0 ? 1.0E-16 : t2107
) ; if ( zc_int53 >= 0.0 ) { zc_int160 = t1706 * 100000.0 ; } else {
zc_int160 = - t1706 * 100000.0 ; } t121 = zc_int160 * 0.01 / ( t2103 == 0.0 ?
1.0E-16 : t2103 ) ; t1925 = zc_int33 >= 1.0 ? t121 : 1.0 ; t2958 = pmf_log10
( 6.9 / ( t1925 == 0.0 ? 1.0E-16 : t1925 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1925 == 0.0 ? 1.0E-16 : t1925 ) + 0.00017169489553429715
) * 3.24 ; t1706 = t1706 * zc_int160 * ( 1.0 / ( t2958 == 0.0 ? 1.0E-16 :
t2958 ) ) * 0.046833001326703774 / ( t2110 == 0.0 ? 1.0E-16 : t2110 ) ;
zc_int160 = ( t121 - 2000.0 ) / 2000.0 ; t121 = zc_int160 * zc_int160 * 3.0 -
zc_int160 * zc_int160 * zc_int160 * 2.0 ; if ( zc_int33 <= 2000.0 ) {
zc_int160 = t1699 * 1.0E-5 ; } else if ( zc_int33 >= 4000.0 ) { zc_int160 =
t1706 * 1.0E-5 ; } else { zc_int160 = ( ( 1.0 - t121 ) * t1699 + t1706 * t121
) * 1.0E-5 ; } t2958 = X [ 272ULL ] * zc_int164 ; t1699 = t2958 / 0.32 *
0.00031622776601683789 + zc_int160 ; t3025 = - t1698 - t1698 * - 0.95 ; t1706
= ( - t1705 - t1698 * - 0.95 ) / ( t3025 == 0.0 ? 1.0E-16 : t3025 ) ; t3025 =
- t1699 - t1699 * - 0.95 ; zc_int160 = ( - t1979 - t1699 * - 0.95 ) / ( t3025
== 0.0 ? 1.0E-16 : t3025 ) ; zc_int164 = zc_int160 * zc_int160 * 3.0 -
zc_int160 * zc_int160 * zc_int160 * 2.0 ; if ( - t1979 <= t1977 * - 0.95 ) {
zc_int160 = t1979 ; } else if ( - t1979 >= - t1977 ) { zc_int160 = t1699 ; }
else { zc_int160 = ( 1.0 - zc_int164 ) * t1979 + t1699 * zc_int164 ; } t1699
= ( ( real_T ) ( M [ 182ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1586_idx_0 / ( X [
60ULL ] == 0.0 ? 1.0E-16 : X [ 60ULL ] ) ) * ( t1586_idx_0 / ( X [ 60ULL ] ==
0.0 ? 1.0E-16 : X [ 60ULL ] ) ) * ( - X [ 272ULL ] / 0.32 ) * ( - X [ 272ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2977 ; zc_int164 = ( ( real_T ) (
M [ 179ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_3 / ( X [ 107ULL ] == 0.0 ?
1.0E-16 : X [ 107ULL ] ) ) * ( U_idx_3 / ( X [ 107ULL ] == 0.0 ? 1.0E-16 : X
[ 107ULL ] ) ) * ( - X [ 129ULL ] / 0.32 ) * ( - X [ 129ULL ] / 0.32 ) / 2.0
* 9.999999999999999E-14 + t2991 ; t121 = pmf_sqrt ( t2029 * t2029 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 190ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 284ULL ] * zc_int328 * t2028 * 1.0E-9 ) ; t1925 = pmf_sqrt ( t2040 * t2040
* 9.999999999999999E-14 + ( ( real_T ) ( M [ 191ULL ] != 0 ) * 2.0 - 1.0 ) *
X [ 286ULL ] * t2041 * t2028 * 1.0E-9 ) ; zc_int263 = - pmf_sqrt ( ( ( real_T
) ( M [ 192ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2197 / ( t2028 == 0.0 ? 1.0E-16 :
t2028 ) / ( X [ 284ULL ] == 0.0 ? 1.0E-16 : X [ 284ULL ] ) ) ) * 0.32 ; t1928
= t2035 * zc_int263 * 2.9973120849090416 / ( t2205 == 0.0 ? 1.0E-16 : t2205 )
; if ( t2036 >= 0.0 ) { t1650 = zc_int263 * 100000.0 ; } else { t1650 = -
zc_int263 * 100000.0 ; } t1931 = t1706 * t1706 * 3.0 - t1706 * t1706 * t1706
* 2.0 ; t1706 = t1650 * 0.01 / ( t2201 == 0.0 ? 1.0E-16 : t2201 ) ; t1965 =
t2038 >= 1.0 ? t1706 : 1.0 ; t2991 = pmf_log10 ( 6.9 / ( t1965 == 0.0 ?
1.0E-16 : t1965 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1965 ==
0.0 ? 1.0E-16 : t1965 ) + 0.00017169489553429715 ) * 3.24 ; zc_int263 =
zc_int263 * t1650 * ( 1.0 / ( t2991 == 0.0 ? 1.0E-16 : t2991 ) ) *
0.046833001326703774 / ( t2208 == 0.0 ? 1.0E-16 : t2208 ) ; t1706 = ( t1706 -
2000.0 ) / 2000.0 ; t1650 = t1706 * t1706 * 3.0 - t1706 * t1706 * t1706 * 2.0
; if ( t2038 <= 2000.0 ) { t1706 = t1928 * 1.0E-5 ; } else if ( t2038 >=
4000.0 ) { t1706 = zc_int263 * 1.0E-5 ; } else { t1706 = ( ( 1.0 - t1650 ) *
t1928 + zc_int263 * t1650 ) * 1.0E-5 ; } t2991 = - ( X [ 272ULL ] * t121 ) ;
t121 = t2991 / 0.32 * 0.00031622776601683789 + t1706 ; t3009 = - t121 - t121
* - 0.95 ; t1706 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok - t121 * -
0.95 ) / ( t3009 == 0.0 ? 1.0E-16 : t3009 ) ; zc_int263 = t1706 * t1706 * 3.0
- t1706 * t1706 * t1706 * 2.0 ; if ( - t1705 <= zc_int191 * - 0.95 ) { t1706
= t1705 ; } else if ( - t1705 >= - zc_int191 ) { t1706 = t1698 ; } else {
t1706 = ( 1.0 - t1931 ) * t1705 + t1698 * t1931 ; } if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok <= t2032 * -
0.95 ) { t1698 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok >= - t2032
) { t1698 = t121 ; } else { t1698 = ( 1.0 - zc_int263 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok + t121 *
zc_int263 ; } zc_int191 = - pmf_sqrt ( ( ( real_T ) ( M [ 193ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2217 / ( t2028 == 0.0 ? 1.0E-16 : t2028 ) / ( X [ 286ULL ]
== 0.0 ? 1.0E-16 : X [ 286ULL ] ) ) ) * 0.32 ; t121 = t2035 * zc_int191 *
2.9973120849090416 / ( t2205 == 0.0 ? 1.0E-16 : t2205 ) ; if ( t2043 >= 0.0 )
{ zc_int263 = zc_int191 * 100000.0 ; } else { zc_int263 = - zc_int191 *
100000.0 ; } t1928 = zc_int263 * 0.01 / ( t2201 == 0.0 ? 1.0E-16 : t2201 ) ;
t1650 = t2045 >= 1.0 ? t1928 : 1.0 ; t1586_idx_0 = pmf_log10 ( 6.9 / ( t1650
== 0.0 ? 1.0E-16 : t1650 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1650 == 0.0 ? 1.0E-16 : t1650 ) + 0.00017169489553429715 ) * 3.24 ;
zc_int191 = zc_int191 * zc_int263 * ( 1.0 / ( t1586_idx_0 == 0.0 ? 1.0E-16 :
t1586_idx_0 ) ) * 0.046833001326703774 / ( t2208 == 0.0 ? 1.0E-16 : t2208 ) ;
zc_int263 = ( t1928 - 2000.0 ) / 2000.0 ; t1928 = zc_int263 * zc_int263 * 3.0
- zc_int263 * zc_int263 * zc_int263 * 2.0 ; zc_int263 = - pmf_sqrt ( ( (
real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3022 / ( t1697 == 0.0 ?
1.0E-16 : t1697 ) / ( X [ 134ULL ] == 0.0 ? 1.0E-16 : X [ 134ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t2045 <= 2000.0 ) { t1650 = t121 * 1.0E-5 ; }
else if ( t2045 >= 4000.0 ) { t1650 = zc_int191 * 1.0E-5 ; } else { t1650 = (
( 1.0 - t1928 ) * t121 + zc_int191 * t1928 ) * 1.0E-5 ; } t1586_idx_0 = - ( X
[ 129ULL ] * t1925 ) ; zc_int191 = t1586_idx_0 / 0.32 *
0.00031622776601683789 + t1650 ; t1585_idx_0 = - zc_int191 - zc_int191 * -
0.95 ; t121 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok - zc_int191 *
- 0.95 ) / ( t1585_idx_0 == 0.0 ? 1.0E-16 : t1585_idx_0 ) ; t1925 = t121 *
t121 * 3.0 - t121 * t121 * t121 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok <= t2042 * -
0.95 ) { t121 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok >= - t2042
) { t121 = zc_int191 ; } else { t121 = ( 1.0 - t1925 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok + zc_int191 *
t1925 ; } if ( M [ 198ULL ] != 0 ) { zc_int191 = 216.59999999999997 ; } else
{ zc_int191 = M [ 199ULL ] != 0 ? 623.15 : U_idx_8 ; } t1187 [ 0ULL ] =
U_idx_7 >= 0.0 ? zc_int191 : X [ 39ULL ] ; tlu2_linear_linear_prelookup ( &
gt_efOut . mField0 [ 0ULL ] , & gt_efOut . mField1 [ 0ULL ] , & gt_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1187 [
0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t92 = gt_efOut ;
tlu2_1d_linear_linear_value ( & ht_efOut [ 0ULL ] , & t92 . mField0 [ 0ULL ]
, & t92 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = ht_efOut [ 0 ] ; zc_int191
= t1593_idx_0 ; t3009 = X [ 227ULL ] * t3015 ; t1585_idx_0 = X [ 294ULL ] *
t3361 ; t1928 = ( ( real_T ) ( M [ 12ULL ] != 0 ) * 2.0 - 1.0 ) * (
t1585_idx_0 / ( X [ 295ULL ] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) ) * (
t1585_idx_0 / ( X [ 295ULL ] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) ) * ( X [
307ULL ] / 0.0019634954084936209 ) * ( X [ 307ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1284 ; t3025 = X [ 125ULL ] *
t1734 ; t1734 = ( ( real_T ) ( M [ 56ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3025 / (
X [ 126ULL ] == 0.0 ? 1.0E-16 : X [ 126ULL ] ) ) * ( t3025 / ( X [ 126ULL ]
== 0.0 ? 1.0E-16 : X [ 126ULL ] ) ) * ( - X [ 117ULL ] /
7.8539816339744827E-5 ) * ( - X [ 117ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t3235 ; t1703 = t1703 * zc_int263 * 35.2 / ( t1732 ==
0.0 ? 1.0E-16 : t1732 ) ; t1650 = pmf_sqrt ( t2060 * t2060 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 200ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 305ULL ] * t2061 * t2059 * 1.0E-9 ) ; t1931 = pmf_sqrt ( t3047 * t3047 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 201ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 308ULL ] * t3201 * t2059 * 1.0E-9 ) ; t1965 = - pmf_sqrt ( ( ( real_T ) ( M
[ 202ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2293 / ( t2059 == 0.0 ? 1.0E-16 : t2059
) / ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) ) *
0.0019634954084936209 ; t1966 = t3061 * t1965 * 11.2 / ( t2301 == 0.0 ?
1.0E-16 : t2301 ) ; if ( t3039 >= 0.0 ) { zc_int232 = t1965 * 100000.0 ; }
else { zc_int232 = - t1965 * 100000.0 ; } zc_int272 = zc_int232 * 0.05 / (
t2297 == 0.0 ? 1.0E-16 : t2297 ) ; t1970 = t3129 >= 1.0 ? zc_int272 : 1.0 ;
t3039 = pmf_log10 ( 6.9 / ( t1970 == 0.0 ? 1.0E-16 : t1970 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1970 == 0.0 ? 1.0E-16 : t1970
) + 2.8767404433520813E-5 ) * 3.24 ; t1965 = t1965 * zc_int232 * ( 1.0 / (
t3039 == 0.0 ? 1.0E-16 : t3039 ) ) * 0.175 / ( t2304 == 0.0 ? 1.0E-16 : t2304
) ; zc_int232 = ( zc_int272 - 2000.0 ) / 2000.0 ; if ( t1632 >= 0.0 ) {
zc_int272 = zc_int263 * 100000.0 ; } else { zc_int272 = - zc_int263 *
100000.0 ; } t1632 = zc_int232 * zc_int232 * 3.0 - zc_int232 * zc_int232 *
zc_int232 * 2.0 ; if ( t3129 <= 2000.0 ) { zc_int232 = t1966 * 1.0E-5 ; }
else if ( t3129 >= 4000.0 ) { zc_int232 = t1965 * 1.0E-5 ; } else { zc_int232
= ( ( 1.0 - t1632 ) * t1966 + t1965 * t1632 ) * 1.0E-5 ; } t3039 = - ( X [
239ULL ] * t1650 ) ; t1632 = t3039 / 0.0019634954084936209 *
0.00031622776601683789 + zc_int232 ; t3047 = - t1632 - t1632 * - 0.95 ; t1650
= ( - t2068 - t1632 * - 0.95 ) / ( t3047 == 0.0 ? 1.0E-16 : t3047 ) ; t1965 =
t1650 * t1650 * 3.0 - t1650 * t1650 * t1650 * 2.0 ; if ( - t2068 <= t3375 * -
0.95 ) { t1650 = t2068 ; } else if ( - t2068 >= - t3375 ) { t1650 = t1632 ; }
else { t1650 = ( 1.0 - t1965 ) * t2068 + t1632 * t1965 ; } t1632 = - pmf_sqrt
( ( ( real_T ) ( M [ 203ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2313 / ( t2059 == 0.0
? 1.0E-16 : t2059 ) / ( X [ 308ULL ] == 0.0 ? 1.0E-16 : X [ 308ULL ] ) ) ) *
0.0019634954084936209 ; t1965 = t3061 * t1632 * 11.2 / ( t2301 == 0.0 ?
1.0E-16 : t2301 ) ; if ( t3073 >= 0.0 ) { t1966 = t1632 * 100000.0 ; } else {
t1966 = - t1632 * 100000.0 ; } zc_int232 = t1966 * 0.05 / ( t2297 == 0.0 ?
1.0E-16 : t2297 ) ; t1970 = zc_int272 * 0.01 / ( t1728 == 0.0 ? 1.0E-16 :
t1728 ) ; t1971 = t3187 >= 1.0 ? zc_int232 : 1.0 ; t3061 = pmf_log10 ( 6.9 /
( t1971 == 0.0 ? 1.0E-16 : t1971 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1971 == 0.0 ? 1.0E-16 : t1971 ) + 2.8767404433520813E-5 ) * 3.24 ;
t1632 = t1632 * t1966 * ( 1.0 / ( t3061 == 0.0 ? 1.0E-16 : t3061 ) ) * 0.175
/ ( t2304 == 0.0 ? 1.0E-16 : t2304 ) ; t1966 = ( zc_int232 - 2000.0 ) /
2000.0 ; zc_int232 = t1966 * t1966 * 3.0 - t1966 * t1966 * t1966 * 2.0 ; if (
t3187 <= 2000.0 ) { t1966 = t1965 * 1.0E-5 ; } else if ( t3187 >= 4000.0 ) {
t1966 = t1632 * 1.0E-5 ; } else { t1966 = ( ( 1.0 - zc_int232 ) * t1965 +
t1632 * zc_int232 ) * 1.0E-5 ; } t3061 = X [ 307ULL ] * t1931 ; t1632 = t3061
/ 0.0019634954084936209 * 0.00031622776601683789 + t1966 ; t3047 = - t1632 -
t1632 * - 0.95 ; t1931 = ( - t2075 - t1632 * - 0.95 ) / ( t3047 == 0.0 ?
1.0E-16 : t3047 ) ; t1965 = t1931 * t1931 * 3.0 - t1931 * t1931 * t1931 * 2.0
; if ( - t2075 <= t3222 * - 0.95 ) { t1931 = t2075 ; } else if ( - t2075 >= -
t3222 ) { t1931 = t1632 ; } else { t1931 = ( 1.0 - t1965 ) * t2075 + t1632 *
t1965 ; } t1632 = t1713 >= 1.0 ? t1970 : 1.0 ; t3129 = X [ 324ULL ] * t2286 ;
t3201 = X [ 319ULL ] * t3078 ; t1966 = ( ( real_T ) ( M [ 22ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3201 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) *
( t3201 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) * ( X [ 342ULL ]
/ 0.0019634954084936209 ) * ( X [ 342ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1010 ; t3187 = X [ 338ULL ] * t3270 ;
zc_int232 = ( ( real_T ) ( M [ 5ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3187 / (
t2130 == 0.0 ? 1.0E-16 : t2130 ) ) * ( t3187 / ( t2130 == 0.0 ? 1.0E-16 :
t2130 ) ) * ( - X [ 330ULL ] / 0.0019634954084936209 ) * ( - X [ 330ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3256 ; t1971 =
pmf_sqrt ( t3092 * t3092 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 209ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 343ULL ] * t3108 * t2133 * 1.0E-9 ) ; zc_int265
= pmf_sqrt ( t3180 * t3180 * 9.999999999999999E-14 + ( ( real_T ) ( M [
210ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 347ULL ] * t3311 * t2133 * 1.0E-9 ) ;
t1975 = - pmf_sqrt ( ( ( real_T ) ( M [ 211ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2392 / ( t2133 == 0.0 ? 1.0E-16 : t2133 ) / ( X [ 343ULL ] == 0.0 ? 1.0E-16
: X [ 343ULL ] ) ) ) * 0.0019634954084936209 ; zc_int32 = t3156 * t1975 *
35.2 / ( t2401 == 0.0 ? 1.0E-16 : t2401 ) ; if ( t3157 >= 0.0 ) { t1977 =
t1975 * 100000.0 ; } else { t1977 = - t1975 * 100000.0 ; } zc_int53 = t1977 *
0.05 / ( t2383 == 0.0 ? 1.0E-16 : t2383 ) ; zc_int33 = t3173 >= 1.0 ?
zc_int53 : 1.0 ; t3092 = pmf_log10 ( 6.9 / ( t1632 == 0.0 ? 1.0E-16 : t1632 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1632 == 0.0 ? 1.0E-16 :
t1632 ) + 0.00017169489553429715 ) * 3.24 ; t1632 = 1.0 / ( t3092 == 0.0 ?
1.0E-16 : t3092 ) ; t3092 = pmf_log10 ( 6.9 / ( zc_int33 == 0.0 ? 1.0E-16 :
zc_int33 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( zc_int33 == 0.0 ?
1.0E-16 : zc_int33 ) + 2.8767404433520813E-5 ) * 3.24 ; t1975 = t1975 * t1977
* ( 1.0 / ( t3092 == 0.0 ? 1.0E-16 : t3092 ) ) * 0.55 / ( t2404 == 0.0 ?
1.0E-16 : t2404 ) ; t1977 = ( zc_int53 - 2000.0 ) / 2000.0 ; zc_int53 = t1977
* t1977 * 3.0 - t1977 * t1977 * t1977 * 2.0 ; if ( t3173 <= 2000.0 ) { t1977
= zc_int32 * 1.0E-5 ; } else if ( t3173 >= 4000.0 ) { t1977 = t1975 * 1.0E-5
; } else { t1977 = ( ( 1.0 - zc_int53 ) * zc_int32 + t1975 * zc_int53 ) *
1.0E-5 ; } t3092 = X [ 342ULL ] * t1971 ; t1971 = t3092 /
0.0019634954084936209 * 0.00031622776601683789 + t1977 ; t3157 = - t1971 -
t1971 * - 0.95 ; t1975 = ( - t2141 - t1971 * - 0.95 ) / ( t3157 == 0.0 ?
1.0E-16 : t3157 ) ; zc_int32 = t1975 * t1975 * 3.0 - t1975 * t1975 * t1975 *
2.0 ; if ( - t2141 <= t3142 * - 0.95 ) { t1975 = t2141 ; } else if ( - t2141
>= - t3142 ) { t1975 = t1971 ; } else { t1975 = ( 1.0 - zc_int32 ) * t2141 +
t1971 * zc_int32 ; } t1971 = - pmf_sqrt ( ( ( real_T ) ( M [ 212ULL ] != 0 )
* 2.0 - 1.0 ) * ( t2412 / ( t2133 == 0.0 ? 1.0E-16 : t2133 ) / ( X [ 347ULL ]
== 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) ) * 0.0019634954084936209 ; t1632 =
zc_int263 * zc_int272 * t1632 * 0.55 / ( t1735 == 0.0 ? 1.0E-16 : t1735 ) ;
zc_int263 = t3156 * t1971 * 35.2 / ( t2401 == 0.0 ? 1.0E-16 : t2401 ) ; if (
t3252 >= 0.0 ) { zc_int272 = t1971 * 100000.0 ; } else { zc_int272 = - t1971
* 100000.0 ; } zc_int32 = zc_int272 * 0.05 / ( t2383 == 0.0 ? 1.0E-16 : t2383
) ; t1977 = t2149 >= 1.0 ? zc_int32 : 1.0 ; t3108 = pmf_log10 ( 6.9 / ( t1977
== 0.0 ? 1.0E-16 : t1977 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t1977 == 0.0 ? 1.0E-16 : t1977 ) + 2.8767404433520813E-5 ) * 3.24 ; zc_int272
= t1971 * zc_int272 * ( 1.0 / ( t3108 == 0.0 ? 1.0E-16 : t3108 ) ) * 0.55 / (
t2404 == 0.0 ? 1.0E-16 : t2404 ) ; t1971 = ( zc_int32 - 2000.0 ) / 2000.0 ;
zc_int32 = t1971 * t1971 * 3.0 - t1971 * t1971 * t1971 * 2.0 ; if ( t2149 <=
2000.0 ) { t1971 = zc_int263 * 1.0E-5 ; } else if ( t2149 >= 4000.0 ) { t1971
= zc_int272 * 1.0E-5 ; } else { t1971 = ( ( 1.0 - zc_int32 ) * zc_int263 +
zc_int272 * zc_int32 ) * 1.0E-5 ; } t3108 = - ( X [ 330ULL ] * zc_int265 ) ;
zc_int263 = t3108 / 0.0019634954084936209 * 0.00031622776601683789 + t1971 ;
zc_int272 = ( t1970 - 2000.0 ) / 2000.0 ; t3156 = - zc_int263 - zc_int263 * -
0.95 ; t1970 = ( - t2148 - zc_int263 * - 0.95 ) / ( t3156 == 0.0 ? 1.0E-16 :
t3156 ) ; t1971 = t1970 * t1970 * 3.0 - t1970 * t1970 * t1970 * 2.0 ; if ( -
t2148 <= t2146 * - 0.95 ) { t1970 = t2148 ; } else if ( - t2148 >= - t2146 )
{ t1970 = zc_int263 ; } else { t1970 = ( 1.0 - t1971 ) * t2148 + zc_int263 *
t1971 ; } zc_int263 = ( ( real_T ) ( M [ 5ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3187 / ( t2130 == 0.0 ? 1.0E-16 : t2130 ) ) * ( t3187 / ( t2130 == 0.0 ?
1.0E-16 : t2130 ) ) * ( X [ 330ULL ] / 0.0019634954084936209 ) * ( X [ 330ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3256 ; zc_int265
= ( t2130 - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 7ULL ] != 0 ) * 2.0 -
1.0 ) * ( t2514 / ( t3280 == 0.0 ? 1.0E-16 : t3280 ) ) ) * intrm_sf_mf_1151 *
0.64 ; zc_int32 = pmf_sqrt ( ( ( real_T ) ( M [ 8ULL ] != 0 ) * 2.0 - 1.0 ) *
( t2510 / ( t2183 == 0.0 ? 1.0E-16 : t2183 ) / ( X [ 360ULL ] == 0.0 ?
1.0E-16 : X [ 360ULL ] ) ) ) * intrm_sf_mf_1151 * 0.64 ; t3187 = zc_int32 -
zc_int32 * 0.95 ; t1977 = ( zc_int265 - zc_int32 * 0.95 ) / ( t3187 == 0.0 ?
1.0E-16 : t3187 ) ; zc_int53 = t1977 * t1977 * 3.0 - t1977 * t1977 * t1977 *
2.0 ; if ( t2184 <= t3316 * 0.95 ) { t1977 = zc_int265 * 100000.0 ; } else if
( t2184 >= t3316 ) { t1977 = zc_int32 * 100000.0 ; } else { t1977 = ( ( 1.0 -
zc_int53 ) * zc_int265 + zc_int32 * zc_int53 ) * 100000.0 ; } zc_int53 =
zc_int272 * zc_int272 * 3.0 - zc_int272 * zc_int272 * zc_int272 * 2.0 ;
zc_int272 = ( - zc_int265 - zc_int32 * 0.95 ) / ( t3187 == 0.0 ? 1.0E-16 :
t3187 ) ; zc_int33 = zc_int272 * zc_int272 * 3.0 - zc_int272 * zc_int272 *
zc_int272 * 2.0 ; if ( - t2184 <= t3316 * 0.95 ) { zc_int272 = zc_int265 *
100000.0 ; } else if ( - t2184 >= t3316 ) { zc_int272 = - zc_int32 * 100000.0
; } else { zc_int272 = ( ( 1.0 - zc_int33 ) * zc_int265 + - zc_int32 *
zc_int33 ) * 100000.0 ; } zc_int265 = ( ( real_T ) ( M [ 12ULL ] != 0 ) * 2.0
- 1.0 ) * ( t1585_idx_0 / ( X [ 295ULL ] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) )
* ( t1585_idx_0 / ( X [ 295ULL ] == 0.0 ? 1.0E-16 : X [ 295ULL ] ) ) * ( - X
[ 307ULL ] / 0.32 ) * ( - X [ 307ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14
+ intrm_sf_mf_1284 ; t3187 = X [ 63ULL ] * t1680 ; intrm_sf_mf_1284 = ( (
real_T ) ( M [ 14ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3187 / ( X [ 64ULL ] == 0.0
? 1.0E-16 : X [ 64ULL ] ) ) * ( t3187 / ( X [ 64ULL ] == 0.0 ? 1.0E-16 : X [
64ULL ] ) ) * ( X [ 369ULL ] / 0.32 ) * ( X [ 369ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + zc_int306 ; zc_int32 = pmf_sqrt ( t3356 * t3356 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 15ULL ] != 0 ) * 2.0 - 1.0 ) * X [
367ULL ] * t3370 * t2191 * 1.0E-9 ) ; zc_int33 = pmf_sqrt ( t2216 * t2216 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 16ULL ] != 0 ) * 2.0 - 1.0 ) * X [
370ULL ] * t2218 * t2191 * 1.0E-9 ) ; t2029 = - pmf_sqrt ( ( ( real_T ) ( M [
17ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2521 / ( t2191 == 0.0 ? 1.0E-16 : t2191 ) /
( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [ 367ULL ] ) ) ) * 0.32 ; zc_int328 =
t2206 * t2029 * 2.9973120849090416 / ( t2529 == 0.0 ? 1.0E-16 : t2529 ) ; if
( t2207 >= 0.0 ) { t2032 = t2029 * 100000.0 ; } else { t2032 = - t2029 *
100000.0 ; } if ( t1713 <= 2000.0 ) { t2035 = t1703 * 1.0E-5 ; } else if (
t1713 >= 4000.0 ) { t2035 = t1632 * 1.0E-5 ; } else { t2035 = ( ( 1.0 -
zc_int53 ) * t1703 + t1632 * zc_int53 ) * 1.0E-5 ; } t1703 = t2032 * 0.01 / (
t2525 == 0.0 ? 1.0E-16 : t2525 ) ; t1632 = t2210 >= 1.0 ? t1703 : 1.0 ; t3156
= pmf_log10 ( 6.9 / ( t1632 == 0.0 ? 1.0E-16 : t1632 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1632 == 0.0 ? 1.0E-16 : t1632
) + 0.00017169489553429715 ) * 3.24 ; t1632 = t2029 * t2032 * ( 1.0 / ( t3156
== 0.0 ? 1.0E-16 : t3156 ) ) * 0.046833001326703774 / ( t2532 == 0.0 ?
1.0E-16 : t2532 ) ; t1703 = ( t1703 - 2000.0 ) / 2000.0 ; t1713 = t1703 *
t1703 * 3.0 - t1703 * t1703 * t1703 * 2.0 ; if ( t2210 <= 2000.0 ) { t1703 =
zc_int328 * 1.0E-5 ; } else if ( t2210 >= 4000.0 ) { t1703 = t1632 * 1.0E-5 ;
} else { t1703 = ( ( 1.0 - t1713 ) * zc_int328 + t1632 * t1713 ) * 1.0E-5 ; }
t3156 = - ( X [ 307ULL ] * zc_int32 ) ; t1632 = t3156 / 0.32 *
0.00031622776601683789 + t1703 ; t3173 = - t1632 - t1632 * - 0.95 ; t1703 = (
- t2209 - t1632 * - 0.95 ) / ( t3173 == 0.0 ? 1.0E-16 : t3173 ) ; t1713 =
t1703 * t1703 * 3.0 - t1703 * t1703 * t1703 * 2.0 ; t1703 = pmf_sqrt (
zc_int290 * zc_int290 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 206ULL ]
!= 0 ) * 2.0 - 1.0 ) * X [ 134ULL ] * zc_int305 * t1697 * 1.0E-9 ) ; t3157 =
- ( X [ 117ULL ] * t1703 ) ; t1703 = t3157 / 7.8539816339744827E-5 *
0.00031622776601683789 + t2035 ; if ( - t2209 <= t2198 * - 0.95 ) { zc_int290
= t2209 ; } else if ( - t2209 >= - t2198 ) { zc_int290 = t1632 ; } else {
zc_int290 = ( 1.0 - t1713 ) * t2209 + t1632 * t1713 ; } zc_int305 = -
pmf_sqrt ( ( ( real_T ) ( M [ 18ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2515 / (
t2191 == 0.0 ? 1.0E-16 : t2191 ) / ( X [ 370ULL ] == 0.0 ? 1.0E-16 : X [
370ULL ] ) ) ) * 0.32 ; t1632 = t2206 * zc_int305 * 2.9973120849090416 / (
t2529 == 0.0 ? 1.0E-16 : t2529 ) ; if ( t2222 >= 0.0 ) { t1713 = zc_int305 *
100000.0 ; } else { t1713 = - zc_int305 * 100000.0 ; } zc_int32 = t1713 *
0.01 / ( t2525 == 0.0 ? 1.0E-16 : t2525 ) ; zc_int53 = t2225 >= 1.0 ?
zc_int32 : 1.0 ; t3173 = pmf_log10 ( 6.9 / ( zc_int53 == 0.0 ? 1.0E-16 :
zc_int53 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int53 == 0.0 ?
1.0E-16 : zc_int53 ) + 0.00017169489553429715 ) * 3.24 ; zc_int305 =
zc_int305 * t1713 * ( 1.0 / ( t3173 == 0.0 ? 1.0E-16 : t3173 ) ) *
0.046833001326703774 / ( t2532 == 0.0 ? 1.0E-16 : t2532 ) ; t1713 = (
zc_int32 - 2000.0 ) / 2000.0 ; zc_int32 = t1713 * t1713 * 3.0 - t1713 * t1713
* t1713 * 2.0 ; t3180 = - t1703 - t1703 * - 0.95 ; t1713 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch - t1703 * -
0.95 ) / ( t3180 == 0.0 ? 1.0E-16 : t3180 ) ; if ( t2225 <= 2000.0 ) {
zc_int53 = t1632 * 1.0E-5 ; } else if ( t2225 >= 4000.0 ) { zc_int53 =
zc_int305 * 1.0E-5 ; } else { zc_int53 = ( ( 1.0 - zc_int32 ) * t1632 +
zc_int305 * zc_int32 ) * 1.0E-5 ; } t3173 = X [ 369ULL ] * zc_int33 ;
zc_int305 = t3173 / 0.32 * 0.00031622776601683789 + zc_int53 ; t3311 = -
zc_int305 - zc_int305 * - 0.95 ; t1632 = ( - t2224 - zc_int305 * - 0.95 ) / (
t3311 == 0.0 ? 1.0E-16 : t3311 ) ; zc_int32 = t1632 * t1632 * 3.0 - t1632 *
t1632 * t1632 * 2.0 ; if ( - t2224 <= t2220 * - 0.95 ) { t1632 = t2224 ; }
else if ( - t2224 >= - t2220 ) { t1632 = zc_int305 ; } else { t1632 = ( 1.0 -
zc_int32 ) * t2224 + zc_int305 * zc_int32 ; } zc_int305 = ( ( real_T ) ( M [
14ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3187 / ( X [ 64ULL ] == 0.0 ? 1.0E-16 : X [
64ULL ] ) ) * ( t3187 / ( X [ 64ULL ] == 0.0 ? 1.0E-16 : X [ 64ULL ] ) ) * (
- X [ 369ULL ] / 0.32 ) * ( - X [ 369ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + zc_int306 ; zc_int306 = ( ( real_T ) ( M [ 22ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t3201 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ]
) ) * ( t3201 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) * ( - X [
342ULL ] / 0.32 ) * ( - X [ 342ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1010 ; zc_int32 = pmf_sqrt ( t2253 * t2253 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 24ULL ] != 0 ) * 2.0 - 1.0 ) * X [
381ULL ] * t2254 * t2252 * 1.0E-9 ) ; zc_int53 = pmf_sqrt ( t2264 * t2264 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 25ULL ] != 0 ) * 2.0 - 1.0 ) * X [
383ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
t2252 * 1.0E-9 ) ; zc_int33 = - pmf_sqrt ( ( ( real_T ) ( M [ 26ULL ] != 0 )
* 2.0 - 1.0 ) * ( t2619 / ( t2252 == 0.0 ? 1.0E-16 : t2252 ) / ( X [ 381ULL ]
== 0.0 ? 1.0E-16 : X [ 381ULL ] ) ) ) * 0.32 ; t2029 = t1713 * t1713 * 3.0 -
t1713 * t1713 * t1713 * 2.0 ; t1713 = t2258 * zc_int33 * 2.9973120849090416 /
( t2627 == 0.0 ? 1.0E-16 : t2627 ) ; if ( t2259 >= 0.0 ) { zc_int328 =
zc_int33 * 100000.0 ; } else { zc_int328 = - zc_int33 * 100000.0 ; } t2032 =
zc_int328 * 0.01 / ( t2598 == 0.0 ? 1.0E-16 : t2598 ) ; t2035 = t2262 >= 1.0
? t2032 : 1.0 ; t3201 = pmf_log10 ( 6.9 / ( t2035 == 0.0 ? 1.0E-16 : t2035 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2035 == 0.0 ? 1.0E-16 :
t2035 ) + 0.00017169489553429715 ) * 3.24 ; zc_int33 = zc_int33 * zc_int328 *
( 1.0 / ( t3201 == 0.0 ? 1.0E-16 : t3201 ) ) * 0.046833001326703774 / ( t2630
== 0.0 ? 1.0E-16 : t2630 ) ; zc_int328 = ( t2032 - 2000.0 ) / 2000.0 ; t2032
= zc_int328 * zc_int328 * 3.0 - zc_int328 * zc_int328 * zc_int328 * 2.0 ; if
( t2262 <= 2000.0 ) { zc_int328 = t1713 * 1.0E-5 ; } else if ( t2262 >=
4000.0 ) { zc_int328 = zc_int33 * 1.0E-5 ; } else { zc_int328 = ( ( 1.0 -
t2032 ) * t1713 + zc_int33 * t2032 ) * 1.0E-5 ; } t3201 = - ( X [ 369ULL ] *
zc_int32 ) ; t1713 = t3201 / 0.32 * 0.00031622776601683789 + zc_int328 ; if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch <= zc_int34
* - 0.95 ) { zc_int32 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch >= -
zc_int34 ) { zc_int32 = t1703 ; } else { zc_int32 = ( 1.0 - t2029 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch + t1703 *
t2029 ; } t3361 = - t1713 - t1713 * - 0.95 ; t1703 = ( - t2261 - t1713 * -
0.95 ) / ( t3361 == 0.0 ? 1.0E-16 : t3361 ) ; zc_int34 = t1703 * t1703 * 3.0
- t1703 * t1703 * t1703 * 2.0 ; if ( - t2261 <= t2255 * - 0.95 ) { t1703 =
t2261 ; } else if ( - t2261 >= - t2255 ) { t1703 = t1713 ; } else { t1703 = (
1.0 - zc_int34 ) * t2261 + t1713 * zc_int34 ; } zc_int34 = - pmf_sqrt ( ( (
real_T ) ( M [ 27ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2639 / ( t2252 == 0.0 ?
1.0E-16 : t2252 ) / ( X [ 383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ] ) ) ) *
0.32 ; t1713 = t2258 * zc_int34 * 2.9973120849090416 / ( t2627 == 0.0 ?
1.0E-16 : t2627 ) ; if ( t1627 >= 0.0 ) { zc_int33 = zc_int34 * 100000.0 ; }
else { zc_int33 = - zc_int34 * 100000.0 ; } t2029 = zc_int33 * 0.01 / ( t2598
== 0.0 ? 1.0E-16 : t2598 ) ; zc_int328 = t2268 >= 1.0 ? t2029 : 1.0 ; t3222 =
pmf_log10 ( 6.9 / ( zc_int328 == 0.0 ? 1.0E-16 : zc_int328 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int328 == 0.0 ? 1.0E-16 :
zc_int328 ) + 0.00017169489553429715 ) * 3.24 ; zc_int34 = zc_int34 *
zc_int33 * ( 1.0 / ( t3222 == 0.0 ? 1.0E-16 : t3222 ) ) *
0.046833001326703774 / ( t2630 == 0.0 ? 1.0E-16 : t2630 ) ; zc_int33 = ( (
real_T ) ( M [ 56ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3025 / ( X [ 126ULL ] == 0.0
? 1.0E-16 : X [ 126ULL ] ) ) * ( t3025 / ( X [ 126ULL ] == 0.0 ? 1.0E-16 : X
[ 126ULL ] ) ) * ( X [ 117ULL ] / 7.8539816339744827E-5 ) * ( X [ 117ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3235 ; t2029 = (
t2029 - 2000.0 ) / 2000.0 ; zc_int328 = t2029 * t2029 * 3.0 - t2029 * t2029 *
t2029 * 2.0 ; if ( t2268 <= 2000.0 ) { t2029 = t1713 * 1.0E-5 ; } else if (
t2268 >= 4000.0 ) { t2029 = zc_int34 * 1.0E-5 ; } else { t2029 = ( ( 1.0 -
zc_int328 ) * t1713 + zc_int34 * zc_int328 ) * 1.0E-5 ; } t3222 = - ( X [
342ULL ] * zc_int53 ) ; zc_int34 = t3222 / 0.32 * 0.00031622776601683789 +
t2029 ; t3235 = - zc_int34 - zc_int34 * - 0.95 ; t1713 = ( - t2267 - zc_int34
* - 0.95 ) / ( t3235 == 0.0 ? 1.0E-16 : t3235 ) ; zc_int53 = t1713 * t1713 *
3.0 - t1713 * t1713 * t1713 * 2.0 ; if ( - t2267 <= t2266 * - 0.95 ) { t1713
= t2267 ; } else if ( - t2267 >= - t2266 ) { t1713 = zc_int34 ; } else {
t1713 = ( 1.0 - zc_int53 ) * t2267 + zc_int34 * zc_int53 ; } zc_int53 = ( X [
126ULL ] - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 78ULL ] != 0 ) * 2.0 -
1.0 ) * ( t1846 / ( t1714 == 0.0 ? 1.0E-16 : t1714 ) ) ) * t1761 * 0.64 ;
t1714 = pmf_sqrt ( ( ( real_T ) ( M [ 89ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1843
/ ( t1764 == 0.0 ? 1.0E-16 : t1764 ) / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [
147ULL ] ) ) ) * t1761 * 0.64 ; t3235 = t1714 - t1714 * 0.95 ; t2029 = (
zc_int53 - t1714 * 0.95 ) / ( t3235 == 0.0 ? 1.0E-16 : t3235 ) ; zc_int328 =
t2029 * t2029 * 3.0 - t2029 * t2029 * t2029 * 2.0 ; if ( t1765 <= zc_int44 *
0.95 ) { t2029 = zc_int53 * 100000.0 ; } else if ( t1765 >= zc_int44 ) {
t2029 = t1714 * 100000.0 ; } else { t2029 = ( ( 1.0 - zc_int328 ) * zc_int53
+ t1714 * zc_int328 ) * 100000.0 ; } zc_int328 = ( - zc_int53 - t1714 * 0.95
) / ( t3235 == 0.0 ? 1.0E-16 : t3235 ) ; t2032 = zc_int328 * zc_int328 * 3.0
- zc_int328 * zc_int328 * zc_int328 * 2.0 ; if ( - t1765 <= zc_int44 * 0.95 )
{ zc_int328 = zc_int53 * 100000.0 ; } else if ( - t1765 >= zc_int44 ) {
zc_int328 = - t1714 * 100000.0 ; } else { zc_int328 = ( ( 1.0 - t2032 ) *
zc_int53 + - t1714 * t2032 ) * 100000.0 ; } t3361 = X [ 158ULL ] * U_idx_10 ;
t1714 = ( ( real_T ) ( M [ 134ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3361 / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( t3361 / ( X [ 22ULL ] == 0.0 ?
1.0E-16 : X [ 22ULL ] ) ) * ( X [ 167ULL ] / 7.8539816339744827E-5 ) * ( X [
167ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2324 ;
t3311 = X [ 173ULL ] * zc_int45 ; zc_int44 = ( ( real_T ) ( M [ 146ULL ] != 0
) * 2.0 - 1.0 ) * ( t3311 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] )
) * ( t3311 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) ) * ( - X [
167ULL ] / 7.8539816339744827E-5 ) * ( - X [ 167ULL ] / 7.8539816339744827E-5
) / 2.0 * 9.999999999999999E-14 + zc_int78 ; t3252 = X [ 154ULL ] * zc_int46
; zc_int45 = ( ( real_T ) ( M [ 147ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3252 / ( X
[ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) ) * ( t3252 / ( X [ 155ULL ] ==
0.0 ? 1.0E-16 : X [ 155ULL ] ) ) * ( X [ 181ULL ] / 7.8539816339744827E-5 ) *
( X [ 181ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t1815 ; zc_int46 = pmf_sqrt ( t1792 * t1792 * 9.999999999999999E-14 + ( (
real_T ) ( M [ 148ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 177ULL ] * t104 * t1791 *
1.0E-9 ) ; t1792 = pmf_sqrt ( t109 * t109 * 9.999999999999999E-14 + ( (
real_T ) ( M [ 149ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 182ULL ] * t1803 * t1791 *
1.0E-9 ) ; t104 = - pmf_sqrt ( ( ( real_T ) ( M [ 150ULL ] != 0 ) * 2.0 - 1.0
) * ( t1861 / ( t1791 == 0.0 ? 1.0E-16 : t1791 ) / ( X [ 177ULL ] == 0.0 ?
1.0E-16 : X [ 177ULL ] ) ) ) * 7.8539816339744827E-5 ; t109 = t1797 * t104 *
35.2 / ( t1869 == 0.0 ? 1.0E-16 : t1869 ) ; if ( t1798 >= 0.0 ) { t1803 =
t104 * 100000.0 ; } else { t1803 = - t104 * 100000.0 ; } t1798 = t1803 * 0.01
/ ( t1865 == 0.0 ? 1.0E-16 : t1865 ) ; zc_int53 = t1800 >= 1.0 ? t1798 : 1.0
; t3270 = pmf_log10 ( 6.9 / ( zc_int53 == 0.0 ? 1.0E-16 : zc_int53 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( zc_int53 == 0.0 ? 1.0E-16 :
zc_int53 ) + 0.00017169489553429715 ) * 3.24 ; t104 = t104 * t1803 * ( 1.0 /
( t3270 == 0.0 ? 1.0E-16 : t3270 ) ) * 0.55 / ( t1872 == 0.0 ? 1.0E-16 :
t1872 ) ; t1798 = ( t1798 - 2000.0 ) / 2000.0 ; t1803 = t1798 * t1798 * 3.0 -
t1798 * t1798 * t1798 * 2.0 ; if ( t1800 <= 2000.0 ) { t1798 = t109 * 1.0E-5
; } else if ( t1800 >= 4000.0 ) { t1798 = t104 * 1.0E-5 ; } else { t1798 = (
( 1.0 - t1803 ) * t109 + t104 * t1803 ) * 1.0E-5 ; } t3270 = - ( X [ 167ULL ]
* zc_int46 ) ; t104 = t3270 / 7.8539816339744827E-5 * 0.00031622776601683789
+ t1798 ; t3316 = - t104 - t104 * - 0.95 ; t1798 = ( - t1799 - t104 * - 0.95
) / ( t3316 == 0.0 ? 1.0E-16 : t3316 ) ; t1800 = t1798 * t1798 * 3.0 - t1798
* t1798 * t1798 * 2.0 ; if ( - t1799 <= zc_int77 * - 0.95 ) { t1798 = t1799 ;
} else if ( - t1799 >= - zc_int77 ) { t1798 = t104 ; } else { t1798 = ( 1.0 -
t1800 ) * t1799 + t104 * t1800 ; } t104 = - pmf_sqrt ( ( ( real_T ) ( M [
151ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1881 / ( t1791 == 0.0 ? 1.0E-16 : t1791 )
/ ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) ) ) *
7.8539816339744827E-5 ; zc_int77 = t1797 * t104 * 35.2 / ( t1869 == 0.0 ?
1.0E-16 : t1869 ) ; if ( zc_int90 >= 0.0 ) { t1797 = t104 * 100000.0 ; } else
{ t1797 = - t104 * 100000.0 ; } t1800 = t1797 * 0.01 / ( t1865 == 0.0 ?
1.0E-16 : t1865 ) ; t109 = t1808 >= 1.0 ? t1800 : 1.0 ; t3280 = pmf_log10 (
6.9 / ( t109 == 0.0 ? 1.0E-16 : t109 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( t109 == 0.0 ? 1.0E-16 : t109 ) + 0.00017169489553429715 ) * 3.24 ;
t104 = t104 * t1797 * ( 1.0 / ( t3280 == 0.0 ? 1.0E-16 : t3280 ) ) * 0.55 / (
t1872 == 0.0 ? 1.0E-16 : t1872 ) ; t1797 = ( t1800 - 2000.0 ) / 2000.0 ;
t1800 = t1797 * t1797 * 3.0 - t1797 * t1797 * t1797 * 2.0 ; if ( t1808 <=
2000.0 ) { t1797 = zc_int77 * 1.0E-5 ; } else if ( t1808 >= 4000.0 ) { t1797
= t104 * 1.0E-5 ; } else { t1797 = ( ( 1.0 - t1800 ) * zc_int77 + t104 *
t1800 ) * 1.0E-5 ; } t3280 = X [ 181ULL ] * t1792 ; t1792 = t3280 /
7.8539816339744827E-5 * 0.00031622776601683789 + t1797 ; t3356 = - t1792 -
t1792 * - 0.95 ; t104 = ( - t111 - t1792 * - 0.95 ) / ( t3356 == 0.0 ?
1.0E-16 : t3356 ) ; zc_int77 = t104 * t104 * 3.0 - t104 * t104 * t104 * 2.0 ;
if ( - t111 <= t1804 * - 0.95 ) { t104 = t111 ; } else if ( - t111 >= - t1804
) { t104 = t1792 ; } else { t104 = ( 1.0 - zc_int77 ) * t111 + t1792 *
zc_int77 ; } t1792 = ( ( real_T ) ( M [ 134ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3361 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( t3361 / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( - X [ 167ULL ] /
7.8539816339744827E-5 ) * ( - X [ 167ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2324 ; zc_int77 = ( ( real_T ) ( M [ 146ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3311 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) )
* ( t3311 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) ) * ( X [ 167ULL
] / 7.8539816339744827E-5 ) * ( X [ 167ULL ] / 7.8539816339744827E-5 ) / 2.0
* 9.999999999999999E-14 + zc_int78 ; zc_int78 = ( X [ 22ULL ] - X [ 174ULL ]
) * pmf_sqrt ( ( ( real_T ) ( M [ 156ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1984 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V16 ) )
) * t1849 * 0.64 ; t1797 = pmf_sqrt ( ( ( real_T ) ( M [ 157ULL ] != 0 ) *
2.0 - 1.0 ) * ( t1981 / ( t1852 == 0.0 ? 1.0E-16 : t1852 ) / ( X [ 195ULL ]
== 0.0 ? 1.0E-16 : X [ 195ULL ] ) ) ) * t1849 * 0.64 ; t3311 = t1797 - t1797
* 0.95 ; t1800 = ( zc_int78 - t1797 * 0.95 ) / ( t3311 == 0.0 ? 1.0E-16 :
t3311 ) ; t109 = t1800 * t1800 * 3.0 - t1800 * t1800 * t1800 * 2.0 ; if (
t112 <= t1854 * 0.95 ) { t1800 = zc_int78 * 100000.0 ; } else if ( t112 >=
t1854 ) { t1800 = t1797 * 100000.0 ; } else { t1800 = ( ( 1.0 - t109 ) *
zc_int78 + t1797 * t109 ) * 100000.0 ; } t109 = ( - zc_int78 - t1797 * 0.95 )
/ ( t3311 == 0.0 ? 1.0E-16 : t3311 ) ; t1803 = t109 * t109 * 3.0 - t109 *
t109 * t109 * 2.0 ; if ( - t112 <= t1854 * 0.95 ) { t109 = zc_int78 *
100000.0 ; } else if ( - t112 >= t1854 ) { t109 = - t1797 * 100000.0 ; } else
{ t109 = ( ( 1.0 - t1803 ) * zc_int78 + - t1797 * t1803 ) * 100000.0 ; }
t3361 = X [ 202ULL ] * t3649 ; zc_int78 = ( ( real_T ) ( M [ 161ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3361 / 1.01325 ) * ( t3361 / 1.01325 ) * ( X [ 208ULL ] /
0.0019634954084936209 ) * ( X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + U_idx_9 ; t1797 = ( ( real_T ) ( M [ 161ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3361 / 1.01325 ) * ( t3361 / 1.01325 ) * ( - X [ 208ULL ]
/ 0.0019634954084936209 ) * ( - X [ 208ULL ] / 0.0019634954084936209 ) / 2.0
* 9.999999999999999E-14 + U_idx_9 ; t3361 = X [ 216ULL ] * t1910 ; t3356 = X
[ 223ULL ] * t1879 ; t1804 = ( ( real_T ) ( M [ 164ULL ] != 0 ) * 2.0 - 1.0 )
* ( t3356 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( t3356 / ( X
[ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( - X [ 208ULL ] /
0.0019634954084936209 ) * ( - X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1882 ; t3356 = X [ 220ULL ] * t1879 ; zc_int90 = ( (
real_T ) ( M [ 165ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3356 / 1.01325 ) * ( t3356
/ 1.01325 ) * ( - X [ 208ULL ] / 0.0019634954084936209 ) * ( - X [ 208ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + zc_int97 ; t3356 = X
[ 222ULL ] * t1879 ; t1808 = ( ( real_T ) ( M [ 166ULL ] != 0 ) * 2.0 - 1.0 )
* ( t3356 / 1.01325 ) * ( t3356 / 1.01325 ) * ( X [ 208ULL ] /
0.0019634954084936209 ) * ( X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1886 ; t3356 = X [ 221ULL ] * t1879 ; if ( - X [
208ULL ] >= 0.0 ) { zc_int46 = - ( ( t1804 - zc_int90 ) * X [ 208ULL ] ) ; }
else { zc_int46 = ( t1808 - ( ( ( real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0
) * ( t3356 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( t3356 / (
X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( X [ 208ULL ] /
0.0019634954084936209 ) * ( X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3379 ) ) * X [ 208ULL ] ; } if ( M [ 171ULL ] != 0 )
{ t1854 = 216.59999999999997 ; } else { t1854 = M [ 172ULL ] != 0 ? 623.15 :
U_idx_6 ; } t1187 [ 0ULL ] = U_idx_5 >= 0.0 ? t1854 : X [ 33ULL ] ;
tlu2_linear_linear_prelookup ( & it_efOut . mField0 [ 0ULL ] , & it_efOut .
mField1 [ 0ULL ] , & it_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t32 = it_efOut ; tlu2_1d_linear_linear_value ( & jt_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t1593_idx_0 = jt_efOut
[ 0 ] ; t1854 = t1593_idx_0 ; zc_int97 = ( ( real_T ) ( M [ 147ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3252 / ( X [ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) ) *
( t3252 / ( X [ 155ULL ] == 0.0 ? 1.0E-16 : X [ 155ULL ] ) ) * ( - X [ 181ULL
] / 0.0019634954084936209 ) * ( - X [ 181ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + t1815 ; t1815 = - ( piece14 * 100000.0 ) ;
t1886 = - ( t3409 * 100000.0 ) ; t3409 = - ( t1774 * 100000.0 ) ; t1774 = - (
piece42 * 100000.0 ) ; piece42 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden * 100000.0 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden = - ( t1811
* 100000.0 ) ; t1811 = - ( t1894 * 100000.0 ) ; t1894 = - ( t1896 * 100000.0
) ; t1896 = - ( t1924 * 100000.0 ) ; t1910 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens * 100000.0 )
; t1924 = - ( t1974 * 100000.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens = - ( t1989 *
100000.0 ) ; t1974 = - ( piece172 * 100000.0 ) ; zc_int53 = - ( piece234 *
100000.0 ) ; t1989 = - ( t3373 * 100000.0 ) ; t2035 = - ( t4072 * 100000.0 )
; t2040 = - ( t2215 * 100000.0 ) ; t2042 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_conde * 100000.0 )
; piece234 = pmf_log ( t1716 / ( t3647 == 0.0 ? 1.0E-16 : t3647 ) ) *
0.014785189545032806 ; t3647 = ( ( piece234 - t1603 ) - piece232 * 0.01 ) -
t3967 ; piece232 = ( ( - t1868 - t1870 ) * 296.802103844292 + t1868 * 461.523
) + t1870 * 259.836612622973 ; t2060 = ( ( - piece239 - t1874 ) *
296.802103844292 + piece239 * 461.523 ) + t1874 * 259.836612622973 ; t1874 =
( ( intrm_sf_mf_416 - pmf_log ( X [ 29ULL ] * 100000.0 ) * t1879 ) - t1763 )
+ t2060 * 11.526088451496509 ; t2061 = ( ( t1909 - t2060 * 11.526088451496509
) - piece250 ) + pmf_log ( X [ 29ULL ] * 100000.0 ) * t1879 ; t1879 = ( ( -
t2126 - t2127 ) * 296.802103844292 + t2126 * 461.523 ) + t2127 *
259.836612622973 ; t1187 [ 0ULL ] = X [ 244ULL ] ; t1182 [ 0 ] = 5ULL ;
tlu2_linear_nearest_prelookup ( & kt_efOut . mField0 [ 0ULL ] , & kt_efOut .
mField1 [ 0ULL ] , & kt_efOut . mField2 [ 0ULL ] , & nonscalar31 [ 0ULL ] , &
t1187 [ 0ULL ] , & t1182 [ 0ULL ] , & t124 [ 0ULL ] ) ; t73 = kt_efOut ;
t1187 [ 0ULL ] = U_idx_4 * 837.75804095727813 * 0.99999999999999978 /
0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978 ; t1185 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & lt_efOut . mField0 [ 0ULL ] , &
lt_efOut . mField1 [ 0ULL ] , & lt_efOut . mField2 [ 0ULL ] , & nonscalar32 [
0ULL ] , & t1187 [ 0ULL ] , & t1185 [ 0ULL ] , & t124 [ 0ULL ] ) ; t70 =
lt_efOut ; if ( X [ 50ULL ] != X [ 50ULL ] ) { t4072 = X [ 50ULL ] ; } else
if ( X [ 50ULL ] > 0.0 ) { t4072 = 1.0 ; } else { t4072 = X [ 50ULL ] < 0.0 ?
- 1.0 : 0.0 ; } t1187 [ 0ULL ] = t4072 * X [ 49ULL ] ;
tlu2_linear_nearest_prelookup ( & mt_efOut . mField0 [ 0ULL ] , & mt_efOut .
mField1 [ 0ULL ] , & mt_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField20 , & t1187 [ 0ULL ] , & t752 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t92 = mt_efOut ; t3373 = M [ 0ULL ] != 0 ? U_idx_1 : 0.9 ; t1909 = - ( ( X [
54ULL ] - X [ 52ULL ] * X [ 53ULL ] * 0.001 ) * t3940 / ( t3373 == 0.0 ?
1.0E-16 : t3373 ) * 1000.0 + ( 1.0 - t3940 ) * U_idx_1 / 1000.0 ) ; if ( M [
1ULL ] != 0 ) { U_idx_3 = ( ( t3645 - X [ 55ULL ] ) - 0.799999992 ) * 1000.0
; } else { U_idx_3 = ( t3645 - X [ 55ULL ] ) * 1.0E-5 ; } if ( M [ 111ULL ]
!= 0 ) { t3940 = t3645 - ( X [ 58ULL ] - t3883 ) * intrm_sf_mf_1449 * 0.001 ;
} else { t3940 = ( X [ 53ULL ] - X [ 55ULL ] ) - ( t3883 * 0.001 + X [ 53ULL
] ) * intrm_sf_mf_1449 ; } if ( M [ 152ULL ] != 0 ) { t3645 = - X [ 57ULL ] -
( X [ 90ULL ] - 0.59999999819999994 ) / 0.3 ; } else { t3645 = - X [ 57ULL ]
- X [ 90ULL ] * 1.0E-8 ; } if ( X [ 129ULL ] >= 0.0 ) { t2060 = ( X [ 131ULL
] - X [ 18ULL ] ) - t1705 ; } else { t2060 = ( X [ 131ULL ] - X [ 18ULL ] ) -
t1706 ; } if ( - X [ 117ULL ] >= 0.0 ) { t1705 = ( X [ 135ULL ] - X [ 18ULL ]
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch ; } else
{ t1705 = ( X [ 135ULL ] - X [ 18ULL ] ) - zc_int32 ; } if ( t1765 >= 0.0 ) {
t1706 = X [ 117ULL ] - t2029 ; } else { t1706 = X [ 117ULL ] - zc_int328 ; }
if ( - X [ 167ULL ] >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch = ( X [
178ULL ] - X [ 26ULL ] ) - t1799 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch = ( X [
178ULL ] - X [ 26ULL ] ) - t1798 ; } if ( X [ 181ULL ] >= 0.0 ) { t1765 = ( X
[ 183ULL ] - X [ 26ULL ] ) - t111 ; } else { t1765 = ( X [ 183ULL ] - X [
26ULL ] ) - t104 ; } if ( t112 >= 0.0 ) { t104 = - X [ 167ULL ] - t1800 ; }
else { t104 = - X [ 167ULL ] - t109 ; } if ( - X [ 181ULL ] >= 0.0 ) { t1798
= ( X [ 257ULL ] - X [ 36ULL ] ) - t1922 ; } else { t1798 = ( X [ 257ULL ] -
X [ 36ULL ] ) - zc_int116 ; } if ( X [ 258ULL ] >= 0.0 ) { t1799 = ( X [
260ULL ] - X [ 36ULL ] ) - t1930 ; } else { t1799 = ( X [ 260ULL ] - X [
36ULL ] ) - t107 ; } if ( - X [ 258ULL ] >= 0.0 ) { t107 = ( X [ 271ULL ] - X
[ 37ULL ] ) - t1972 ; } else { t107 = ( X [ 271ULL ] - X [ 37ULL ] ) - t1915
; } if ( X [ 272ULL ] >= 0.0 ) { t1800 = ( X [ 274ULL ] - X [ 37ULL ] ) -
t1979 ; } else { t1800 = ( X [ 274ULL ] - X [ 37ULL ] ) - zc_int160 ; } if (
- X [ 272ULL ] >= 0.0 ) { t109 = ( X [ 285ULL ] - X [ 38ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_AI_unchok ; } else {
t109 = ( X [ 285ULL ] - X [ 38ULL ] ) - t1698 ; } if ( - X [ 129ULL ] >= 0.0
) { t1698 = ( X [ 287ULL ] - X [ 38ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Dp_BI_unchok ; } else {
t1698 = ( X [ 287ULL ] - X [ 38ULL ] ) - t121 ; } if ( - X [ 239ULL ] >= 0.0
) { t111 = ( X [ 306ULL ] - X [ 42ULL ] ) - t2068 ; } else { t111 = ( X [
306ULL ] - X [ 42ULL ] ) - t1650 ; } if ( X [ 307ULL ] >= 0.0 ) { t112 = ( X
[ 309ULL ] - X [ 42ULL ] ) - t2075 ; } else { t112 = ( X [ 309ULL ] - X [
42ULL ] ) - t1931 ; } if ( X [ 342ULL ] >= 0.0 ) { t1915 = ( X [ 344ULL ] - X
[ 44ULL ] ) - t2141 ; } else { t1915 = ( X [ 344ULL ] - X [ 44ULL ] ) - t1975
; } if ( - X [ 330ULL ] >= 0.0 ) { zc_int160 = ( X [ 348ULL ] - X [ 44ULL ] )
- t2148 ; } else { zc_int160 = ( X [ 348ULL ] - X [ 44ULL ] ) - t1970 ; } if
( t2184 >= 0.0 ) { zc_int116 = X [ 330ULL ] - t1977 ; } else { zc_int116 = X
[ 330ULL ] - zc_int272 ; } if ( - X [ 307ULL ] >= 0.0 ) { t1922 = ( X [
368ULL ] - X [ 47ULL ] ) - t2209 ; } else { t1922 = ( X [ 368ULL ] - X [
47ULL ] ) - zc_int290 ; } if ( X [ 369ULL ] >= 0.0 ) { zc_int290 = ( X [
371ULL ] - X [ 47ULL ] ) - t2224 ; } else { zc_int290 = ( X [ 371ULL ] - X [
47ULL ] ) - t1632 ; } if ( - X [ 369ULL ] >= 0.0 ) { t1632 = ( X [ 382ULL ] -
X [ 48ULL ] ) - t2261 ; } else { t1632 = ( X [ 382ULL ] - X [ 48ULL ] ) -
t1703 ; } if ( - X [ 342ULL ] >= 0.0 ) { t1703 = ( X [ 384ULL ] - X [ 48ULL ]
) - t2267 ; } else { t1703 = ( X [ 384ULL ] - X [ 48ULL ] ) - t1713 ; } if (
M [ 31ULL ] != 0 ) { t1713 = X [ 391ULL ] - X [ 393ULL ] ; } else if ( M [
32ULL ] != 0 ) { t1713 = X [ 391ULL ] - ( - X [ 393ULL ] ) ; } else { t1713 =
X [ 391ULL ] - X [ 50ULL ] ; } tlu2_2d_linear_nearest_value ( & nt_efOut [
0ULL ] , & t73 . mField0 [ 0ULL ] , & t73 . mField2 [ 0ULL ] , & t70 .
mField0 [ 0ULL ] , & t70 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField25 , & t1182 [ 0ULL ] , & t1185 [ 0ULL ] , & t124 [ 0ULL ] ) ;
t1187 [ 0 ] = nt_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ot_efOut [
0ULL ] , & t92 . mField0 [ 0ULL ] , & t92 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField26 , & t752 [ 0ULL ] , & t124 [ 0ULL ]
) ; t1593_idx_0 = ot_efOut [ 0 ] ; t1195 [ 0ULL ] = 0.0 ; t1195 [ 1ULL ] = -
0.0 ; t1195 [ 2ULL ] = - 0.0 ; t1195 [ 3ULL ] = - 0.0 ; t1195 [ 4ULL ] = -
0.0 ; t1195 [ 5ULL ] = - ( ( ( ( t1757 - t1756 * X [ 19ULL ] ) * ( -
164.72089615570803 / ( t1697 == 0.0 ? 1.0E-16 : t1697 ) ) + ( t1755 - t1756 *
X [ 20ULL ] ) * ( - 3827.6794129126583 / ( t1697 == 0.0 ? 1.0E-16 : t1697 ) )
) - t1815 ) / 12.896402563644669 ) ; t1195 [ 6ULL ] = - ( -
8.1984652990144453E-5 + ( ( ( ( t1754 - t1760 ) * ( t1757 - t1756 * X [ 19ULL
] ) + ( t3381 - t1760 ) * ( t1755 - t1756 * X [ 20ULL ] ) ) + t1756 * ( t1758
- X [ 17ULL ] * t1697 * 0.001 ) ) - t1886 ) / 2246.65922904024 ) ; t1195 [
7ULL ] = - ( t1756 * X [ 19ULL ] - t1815 ) ; t1195 [ 8ULL ] = - ( t1756 * X [
20ULL ] ) ; t1195 [ 9ULL ] = - ( ( ( ( t1785 - t1784 * X [ 24ULL ] ) * ( -
164.72089615570803 / ( intrm_sf_mf_201 == 0.0 ? 1.0E-16 : intrm_sf_mf_201 ) )
+ ( X [ 168ULL ] - t1784 * X [ 23ULL ] ) * ( - 3827.6794129126583 / (
intrm_sf_mf_201 == 0.0 ? 1.0E-16 : intrm_sf_mf_201 ) ) ) - t3409 ) /
12.896402563644669 ) ; t1195 [ 10ULL ] = - ( ( ( ( ( t1782 - t1788 ) * (
t1785 - t1784 * X [ 24ULL ] ) + ( t1781 - t1788 ) * ( X [ 168ULL ] - t1784 *
X [ 23ULL ] ) ) + t1784 * ( t1786 - X [ 21ULL ] * intrm_sf_mf_201 * 0.001 ) )
- t1774 ) / 2246.65922904024 ) ; t1195 [ 11ULL ] = - ( t1784 * X [ 24ULL ] -
t3409 ) ; t1195 [ 12ULL ] = - ( t1784 * X [ 23ULL ] ) ; t1195 [ 13ULL ] = - (
( ( ( t1840 - t1839 * X [ 27ULL ] ) * ( - 164.72089615570803 / ( t1791 == 0.0
? 1.0E-16 : t1791 ) ) + ( t1838 - t1839 * X [ 28ULL ] ) * ( -
3827.6794129126583 / ( t1791 == 0.0 ? 1.0E-16 : t1791 ) ) ) - piece42 ) /
12.896402563644669 ) ; t1195 [ 14ULL ] = - ( ( ( ( ( t1837 - t1844 ) * (
t1840 - t1839 * X [ 27ULL ] ) + ( t1836 - t1844 ) * ( t1838 - t1839 * X [
28ULL ] ) ) + t1839 * ( t1841 - X [ 25ULL ] * t1791 * 0.001 ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_mdot_w_conden ) /
2246.65922904024 ) ; t1195 [ 15ULL ] = - ( t1839 * X [ 27ULL ] - piece42 ) ;
t1195 [ 16ULL ] = - ( t1839 * X [ 28ULL ] ) ; t1195 [ 17ULL ] = - ( ( ( t1904
- t1903 * X [ 32ULL ] ) * ( - 164.72089615570803 / ( t1893 == 0.0 ? 1.0E-16 :
t1893 ) ) + ( t1902 - t1903 * X [ 31ULL ] ) * ( 36.965491221318985 / ( t1893
== 0.0 ? 1.0E-16 : t1893 ) ) ) - t1811 ) ; t1195 [ 18ULL ] = - ( ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_u_w - t1907 ) * (
t1904 - t1903 * X [ 32ULL ] ) + ( t1900 - t1907 ) * ( t1902 - t1903 * X [
31ULL ] ) ) + t1903 * ( t1905 - X [ 30ULL ] * t1893 * 0.001 ) ) - t1894 ) /
2172.7681408465714 ) ; t1195 [ 19ULL ] = - ( t1903 * X [ 32ULL ] - t1811 ) ;
t1195 [ 20ULL ] = - ( t1903 * X [ 31ULL ] ) ; t1195 [ 21ULL ] = - ( ( ( (
t1950 - t1949 * X [ 35ULL ] ) * ( - 164.72089615570803 / ( t1913 == 0.0 ?
1.0E-16 : t1913 ) ) + ( t1948 - t1949 * X [ 34ULL ] ) * ( -
3827.6794129126583 / ( t1913 == 0.0 ? 1.0E-16 : t1913 ) ) ) - t1896 ) /
12.896402563644669 ) ; t1195 [ 22ULL ] = - ( ( ( ( ( t1947 - t1954 ) * (
t1950 - t1949 * X [ 35ULL ] ) + ( t1946 - t1954 ) * ( t1948 - t1949 * X [
34ULL ] ) ) + t1949 * ( t1951 - X [ 33ULL ] * t1913 * 0.001 ) ) - t1910 ) /
2246.65922904024 ) ; t1195 [ 23ULL ] = - ( t1949 * X [ 35ULL ] - t1896 ) ;
t1195 [ 24ULL ] = - ( t1949 * X [ 34ULL ] ) ; t1195 [ 25ULL ] = - ( ( ( (
t2019 - t2014 * X [ 6ULL ] ) * ( - 164.72089615570803 / ( t1963 == 0.0 ?
1.0E-16 : t1963 ) ) + ( t2013 - t2014 * X [ 5ULL ] ) * ( - 3827.6794129126583
/ ( t1963 == 0.0 ? 1.0E-16 : t1963 ) ) ) - t1924 ) / 12.896402563644669 ) ;
t1195 [ 26ULL ] = - ( ( ( ( ( t2011 - t2024 ) * ( t2019 - t2014 * X [ 6ULL ]
) + ( t2010 - t2024 ) * ( t2013 - t2014 * X [ 5ULL ] ) ) + t2014 * ( t2020 -
X [ 4ULL ] * t1963 * 0.001 ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Phi_w_condens ) /
2246.65922904024 ) ; t1195 [ 27ULL ] = - ( t2014 * X [ 6ULL ] - t1924 ) ;
t1195 [ 28ULL ] = - ( t2014 * X [ 5ULL ] ) ; t1195 [ 29ULL ] = - ( ( ( (
t2053 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [
9ULL ] ) * ( - 164.72089615570803 / ( t2028 == 0.0 ? 1.0E-16 : t2028 ) ) + (
t2034 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [
8ULL ] ) * ( - 3827.6794129126583 / ( t2028 == 0.0 ? 1.0E-16 : t2028 ) ) ) -
t1974 ) / 13.896402563644669 ) ; t1195 [ 30ULL ] = - ( ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_h_g_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I ) * ( t2053 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 9ULL ] )
+ ( t2000 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_u_a_I ) * (
t2034 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [
8ULL ] ) ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total *
( intrm_sf_mf_853 - X [ 7ULL ] * t2028 * 0.001 ) ) - zc_int53 ) /
2448.8207083326588 ) ; t1195 [ 31ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 9ULL ] -
t1974 ) ; t1195 [ 32ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_mdot_total * X [ 8ULL ] )
; t1195 [ 33ULL ] = - ( ( ( t2112 - t2111 * X [ 41ULL ] ) * ( -
164.72089615570803 / ( t2059 == 0.0 ? 1.0E-16 : t2059 ) ) + ( t2109 - t2111 *
X [ 40ULL ] ) * ( 36.965491221318985 / ( t2059 == 0.0 ? 1.0E-16 : t2059 ) ) )
- t1989 ) ; t1195 [ 34ULL ] = - ( ( ( ( ( t2108 - t2120 ) * ( t2112 - t2111 *
X [ 41ULL ] ) + ( t2106 - t2120 ) * ( t2109 - t2111 * X [ 40ULL ] ) ) + t2111
* ( t2117 - X [ 39ULL ] * t2059 * 0.001 ) ) - ( - ( t3374 * 100000.0 ) ) ) /
2172.7681408465714 ) ; t1195 [ 35ULL ] = - ( t2111 * X [ 41ULL ] - t1989 ) ;
t1195 [ 36ULL ] = - ( t2111 * X [ 40ULL ] ) ; t1195 [ 37ULL ] = - ( ( ( t2175
- t2174 * X [ 45ULL ] ) * ( - 164.72089615570803 / ( t2133 == 0.0 ? 1.0E-16 :
t2133 ) ) + ( t2173 - t2174 * X [ 46ULL ] ) * ( 36.965491221318985 / ( t2133
== 0.0 ? 1.0E-16 : t2133 ) ) ) - t2035 ) ; t1195 [ 38ULL ] = - ( -
0.00042386385785324375 + ( ( ( ( t2172 - t2178 ) * ( t2175 - t2174 * X [
45ULL ] ) + ( t2171 - t2178 ) * ( t2173 - t2174 * X [ 46ULL ] ) ) + t2174 * (
t2176 - X [ 43ULL ] * t2133 * 0.001 ) ) - ( - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Phi_w_condens * 100000.0 )
) ) / 2172.7681408465714 ) ; t1195 [ 39ULL ] = - ( t2174 * X [ 45ULL ] -
t2035 ) ; t1195 [ 40ULL ] = - ( t2174 * X [ 46ULL ] ) ; t1195 [ 41ULL ] = - (
( ( t2246 - t2245 * X [ 12ULL ] ) * ( - 164.72089615570803 / ( t2191 == 0.0 ?
1.0E-16 : t2191 ) ) + ( t2244 - t2245 * X [ 11ULL ] ) * ( 36.965491221318985
/ ( t2191 == 0.0 ? 1.0E-16 : t2191 ) ) ) - t2040 ) ; t1195 [ 42ULL ] = - ( (
( ( ( t2243 - t2249 ) * ( t2246 - t2245 * X [ 12ULL ] ) + ( t2242 - t2249 ) *
( t2244 - t2245 * X [ 11ULL ] ) ) + t2245 * ( t2247 - X [ 10ULL ] * t2191 *
0.001 ) ) - ( - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens * 100000.0 )
) ) / 2172.7681408465714 ) ; t1195 [ 43ULL ] = - ( t2245 * X [ 12ULL ] -
t2040 ) ; t1195 [ 44ULL ] = - ( t2245 * X [ 11ULL ] ) ; t1195 [ 45ULL ] = - (
( ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total - t2271
* X [ 15ULL ] ) * ( - 164.72089615570803 / ( t2252 == 0.0 ? 1.0E-16 : t2252 )
) + ( t2257 - t2271 * X [ 14ULL ] ) * ( 36.965491221318985 / ( t2252 == 0.0 ?
1.0E-16 : t2252 ) ) ) - t2042 ) / 1.5549856083302016 ) ; t1195 [ 46ULL ] = -
( ( ( ( ( t2256 - t2280 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_w_total - t2271 * X [
15ULL ] ) + ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_u_g_I -
t2280 ) * ( t2257 - t2271 * X [ 14ULL ] ) ) + t2271 * ( t2278 - X [ 13ULL ] *
t2252 * 0.001 ) ) - ( - ( t2272 * 100000.0 ) ) ) / 2374.9296201389902 ) ;
t1195 [ 47ULL ] = - ( t2271 * X [ 15ULL ] - t2042 ) ; t1195 [ 48ULL ] = - (
t2271 * X [ 14ULL ] ) ; t1195 [ 49ULL ] = - 0.0 ; t1195 [ 50ULL ] = - 0.0 ;
t1195 [ 51ULL ] = - ( ( X [ 52ULL ] * 0.1 + 650.0 ) * t2084 + ( 1.0 - t2084 )
* X [ 52ULL ] * 1000.0 ) / 1000.0 ; t1195 [ 52ULL ] = t1909 ; t1195 [ 53ULL ]
= - ( X [ 52ULL ] * X [ 52ULL ] * 1.8996297494407663E-6 ) - 0.001 ; t1195 [
54ULL ] = - U_idx_3 ; t1195 [ 55ULL ] = t3940 ; t1195 [ 56ULL ] = - ( t3883 *
intrm_sf_mf_1449 ) ; t1195 [ 57ULL ] = X [ 91ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra43 /
2626.19492016262 ; t1195 [ 58ULL ] = X [ 93ULL ] * t1692 / 4578.46197843019 ;
t1195 [ 59ULL ] = X [ 95ULL ] * t1602 / 312.559698673577 ; t1195 [ 60ULL ] =
X [ 99ULL ] * t1607 / 2626.19492016262 ; t1195 [ 61ULL ] = t1610 * t3880 /
2626.19492016262 ; t1195 [ 62ULL ] = - 0.16623276278497481 + - ( t3647 *
400.0 ) / 2957.0379090065608 ; t1195 [ 63ULL ] = - ( t4057 *
241812.2160511087 / 0.0020158806832745466 * 0.001 - t1611 * 0.001 ) /
3931.85243448965 ; t1195 [ 64ULL ] = ( t3650 * 0.20177105219743391 - t3959 )
/ 0.20063898135050592 ; t1195 [ 65ULL ] = ( t1595 * 0.20177105219743391 - (
t1691 + t3959 ) ) / 0.20063898135050592 ; t1195 [ 66ULL ] = t3959 ; t1195 [
67ULL ] = - t3959 ; t1195 [ 68ULL ] = t4057 ; t1195 [ 69ULL ] = t3648 ; t1195
[ 70ULL ] = - t1691 ; t1195 [ 71ULL ] = - 343.15 ; t1195 [ 72ULL ] = t3645 ;
U_idx_2 = X [ 117ULL ] + t1623 ; t4057 = t1623 - X [ 117ULL ] ; t1195 [ 73ULL
] = - ( U_idx_2 / 2.0 * ( ( ( real_T ) ( M [ 67ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2863 / 1.01325 ) * ( t2863 / 1.01325 ) * ( X [ 117ULL ] /
7.8539816339744827E-5 ) * ( X [ 117ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2320 ) - t4057 / 2.0 * X [ 116ULL ] ) /
365.59674280784293 ; t3959 = X [ 117ULL ] + t1618 ; t3880 = t1618 - X [
117ULL ] ; t1195 [ 74ULL ] = - ( t3959 / 2.0 * X [ 113ULL ] - t3880 / 2.0 * X
[ 121ULL ] ) ; U_idx_3 = X [ 117ULL ] + t1615 ; t3940 = t1615 - X [ 117ULL ]
; t1195 [ 75ULL ] = - ( U_idx_3 / 2.0 * X [ 112ULL ] - t3940 / 2.0 * X [
120ULL ] ) ; t1195 [ 76ULL ] = 0.0 ; t1195 [ 77ULL ] = X [ 124ULL ] * t1694 /
461.523 ; t1195 [ 78ULL ] = X [ 114ULL ] * t2311 ; t1195 [ 79ULL ] =
0.071939481849452439 + ( ( ( - t1626 - t1693 ) * 296.802103844292 + t1626 *
461.523 ) + t1693 * 4124.48151675695 ) * 0.9997 / 4124.48151675695 ; t3967 =
t1694 * 293.15 ; t1195 [ 80ULL ] = - 304.06022922571 - ( ( ( real_T ) ( M [
169ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3967 / 1.01325 ) * ( t3967 / 1.01325 ) * (
X [ 117ULL ] / 7.8539816339744827E-5 ) * ( X [ 117ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + ( ( ( - t1626 - t1693
) * 304.06022922571 + t1626 * 2537.56068088674 ) + t1693 * 3860.3219873489 )
) ; t1195 [ 81ULL ] = - t1626 ; t1195 [ 82ULL ] = - t1693 ; t1195 [ 83ULL ] =
- ( ( X [ 129ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 ) / 2.0 *
t1736 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio2 - X
[ 129ULL ] ) / 2.0 * X [ 139ULL ] ) ; t1195 [ 84ULL ] = - ( ( X [ 129ULL ] +
t1715 ) / 2.0 * X [ 109ULL ] - ( t1715 - X [ 129ULL ] ) / 2.0 * X [ 143ULL ]
) ; t1195 [ 85ULL ] = - ( ( X [ 129ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 ) / 2.0 * X [
108ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0
- X [ 129ULL ] ) / 2.0 * X [ 142ULL ] ) ; t1195 [ 86ULL ] = - ( ( - X [
117ULL ] + t1751 ) / 2.0 * t1734 - ( t1751 - ( - X [ 117ULL ] ) ) / 2.0 * X [
144ULL ] ) ; t1195 [ 87ULL ] = - ( ( - X [ 117ULL ] + t1749 ) / 2.0 * X [
128ULL ] - ( t1749 - ( - X [ 117ULL ] ) ) / 2.0 * X [ 146ULL ] ) ; t1195 [
88ULL ] = - ( ( - X [ 117ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) / 2.0 * X [
127ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3
- ( - X [ 117ULL ] ) ) / 2.0 * X [ 145ULL ] ) ; t1195 [ 89ULL ] = - ( ( t1723
+ t1742 ) * 0.001 ) - - 0.18419157727996954 ; t1195 [ 90ULL ] = - ( t2950 /
7.8539816339744827E-5 * 0.00031622776601683789 + intrm_sf_mf_151 ) ; t1195 [
91ULL ] = - ( t3157 / 7.8539816339744827E-5 * 0.00031622776601683789 +
intrm_sf_mf_160 ) ; t1195 [ 92ULL ] = t2060 ; t1195 [ 93ULL ] = t1705 ; t3967
= X [ 130ULL ] * t1697 ; t1195 [ 94ULL ] = - ( ( ( real_T ) ( M [ 23ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t3967 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ]
) ) * ( t3967 / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) ) * ( X [
129ULL ] / 7.8539816339744827E-5 ) * ( X [ 129ULL ] / 7.8539816339744827E-5 )
/ 2.0 * 9.999999999999999E-14 + t1731 ) ; t3967 = X [ 134ULL ] * t1697 ;
t1195 [ 95ULL ] = - ( ( ( real_T ) ( M [ 34ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3967 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) * ( t3967 / ( X [
135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) * ( - X [ 117ULL ] /
7.8539816339744827E-5 ) * ( - X [ 117ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1733 ) ; t1195 [ 96ULL ] = ( X [ 137ULL ] * t1697 /
461.523 - t1722 * X [ 19ULL ] ) / 0.64309276860371423 ; t1195 [ 97ULL ] = X [
132ULL ] * t1697 / 461.523 ; t1195 [ 98ULL ] = X [ 136ULL ] * t1718 ; t1195 [
99ULL ] = X [ 133ULL ] * t1697 / 4124.48151675695 ; t1195 [ 100ULL ] = - ( (
( real_T ) ( M [ 45ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1730 / ( X [ 18ULL ] ==
0.0 ? 1.0E-16 : X [ 18ULL ] ) ) * ( t1730 / ( X [ 18ULL ] == 0.0 ? 1.0E-16 :
X [ 18ULL ] ) ) * ( X [ 129ULL ] / 7.8539816339744827E-5 ) * ( X [ 129ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1758 ) ; t1195 [
101ULL ] = - t1695 ; t1195 [ 102ULL ] = - t1696 ; t1195 [ 103ULL ] = - ( ( (
real_T ) ( M [ 45ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1730 / ( X [ 18ULL ] == 0.0
? 1.0E-16 : X [ 18ULL ] ) ) * ( t1730 / ( X [ 18ULL ] == 0.0 ? 1.0E-16 : X [
18ULL ] ) ) * ( - X [ 117ULL ] / 7.8539816339744827E-5 ) * ( - X [ 117ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1758 ) ; t1195 [
104ULL ] = - t1695 ; t1195 [ 105ULL ] = - t1696 ; t1195 [ 106ULL ] = - (
U_idx_2 / 2.0 * zc_int33 - t4057 / 2.0 * X [ 153ULL ] ) ; t1195 [ 107ULL ] =
- ( t3959 / 2.0 * X [ 128ULL ] - t3880 / 2.0 * X [ 149ULL ] ) ; t1195 [
108ULL ] = - ( U_idx_3 / 2.0 * X [ 127ULL ] - t3940 / 2.0 * X [ 150ULL ] ) ;
t1195 [ 109ULL ] = - ( ( - X [ 117ULL ] + t1623 ) / 2.0 * ( ( ( real_T ) ( M
[ 67ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2863 / 1.01325 ) * ( t2863 / 1.01325 ) *
( - X [ 117ULL ] / 7.8539816339744827E-5 ) * ( - X [ 117ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2320 ) - ( t1623 - (
- X [ 117ULL ] ) ) / 2.0 * X [ 153ULL ] ) / 365.59674280784293 ; t1195 [
110ULL ] = - ( ( - X [ 117ULL ] + t1618 ) / 2.0 * X [ 113ULL ] - ( t1618 - (
- X [ 117ULL ] ) ) / 2.0 * X [ 149ULL ] ) ; t1195 [ 111ULL ] = - ( ( - X [
117ULL ] + t1615 ) / 2.0 * X [ 112ULL ] - ( t1615 - ( - X [ 117ULL ] ) ) /
2.0 * X [ 150ULL ] ) ; t1195 [ 112ULL ] = t1706 ; t1195 [ 113ULL ] = - (
t1762 - t1768 ) ; U_idx_2 = X [ 151ULL ] * t1764 ; t1195 [ 114ULL ] = - ( ( (
real_T ) ( M [ 100ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( X [ 126ULL ] ==
0.0 ? 1.0E-16 : X [ 126ULL ] ) ) * ( U_idx_2 / ( X [ 126ULL ] == 0.0 ?
1.0E-16 : X [ 126ULL ] ) ) * ( X [ 117ULL ] / 0.64 / 7.8539816339744827E-5 )
* ( X [ 117ULL ] / 0.64 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2300 ) ; U_idx_2 = X [ 152ULL ] * t1764 ; t1195 [
115ULL ] = - ( ( ( real_T ) ( M [ 112ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 /
1.01325 ) * ( U_idx_2 / 1.01325 ) * ( X [ 117ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( X [ 117ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_192 ) / 1.0413512978067061 ; t1195
[ 116ULL ] = - ( ( ( real_T ) ( M [ 123ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1819 /
( X [ 148ULL ] == 0.0 ? 1.0E-16 : X [ 148ULL ] ) ) * ( t1819 / ( X [ 148ULL ]
== 0.0 ? 1.0E-16 : X [ 148ULL ] ) ) * ( X [ 117ULL ] / 0.64 / ( t1761 == 0.0
? 1.0E-16 : t1761 ) ) * ( X [ 117ULL ] / 0.64 / ( t1761 == 0.0 ? 1.0E-16 :
t1761 ) ) / 2.0 * 9.999999999999999E-14 + t2321 ) ; U_idx_2 = X [ 167ULL ] +
t1780 ; t4057 = t1780 - X [ 167ULL ] ; t1195 [ 117ULL ] = - ( U_idx_2 / 2.0 *
t1714 - t4057 / 2.0 * X [ 166ULL ] ) ; t3959 = X [ 167ULL ] + t1778 ; t3967 =
t1778 - X [ 167ULL ] ; t1195 [ 118ULL ] = - ( t3959 / 2.0 * X [ 160ULL ] -
t3967 / 2.0 * X [ 171ULL ] ) ; t3880 = X [ 167ULL ] + t1769 ; U_idx_3 = t1769
- X [ 167ULL ] ; t1195 [ 119ULL ] = - ( t3880 / 2.0 * X [ 159ULL ] - U_idx_3
/ 2.0 * X [ 170ULL ] ) ; t1195 [ 120ULL ] = ( X [ 162ULL ] * intrm_sf_mf_201
/ 461.523 - t1777 * X [ 24ULL ] ) / 0.64309276860371423 ; t1195 [ 121ULL ] =
X [ 164ULL ] * intrm_sf_mf_201 / 461.523 ; t1195 [ 122ULL ] = X [ 161ULL ] *
t1775 ; t1195 [ 123ULL ] = X [ 163ULL ] * intrm_sf_mf_201 / 4124.48151675695
; t1195 [ 124ULL ] = - ( ( ( real_T ) ( M [ 145ULL ] != 0 ) * 2.0 - 1.0 ) * (
t1848 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( t1848 / ( X [
22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( X [ 167ULL ] /
7.8539816339744827E-5 ) * ( X [ 167ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1786 ) ; t1195 [ 125ULL ] = - t1771 ; t1195 [ 126ULL
] = - t1772 ; t1195 [ 127ULL ] = - ( ( - X [ 167ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2 ) / 2.0 *
zc_int44 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_A2
- ( - X [ 167ULL ] ) ) / 2.0 * X [ 187ULL ] ) ; t1195 [ 128ULL ] = - ( ( - X
[ 167ULL ] + t1810 ) / 2.0 * X [ 176ULL ] - ( t1810 - ( - X [ 167ULL ] ) ) /
2.0 * X [ 189ULL ] ) ; t1195 [ 129ULL ] = - ( ( - X [ 167ULL ] + t1638 ) /
2.0 * X [ 175ULL ] - ( t1638 - ( - X [ 167ULL ] ) ) / 2.0 * X [ 188ULL ] ) ;
t1195 [ 130ULL ] = - ( ( X [ 181ULL ] + t1835 ) / 2.0 * zc_int45 - ( t1835 -
X [ 181ULL ] ) / 2.0 * X [ 190ULL ] ) ; t1195 [ 131ULL ] = - ( ( X [ 181ULL ]
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 ) / 2.0 * X
[ 157ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_convection_B1 - X [ 181ULL
] ) / 2.0 * X [ 194ULL ] ) ; t1195 [ 132ULL ] = - ( ( X [ 181ULL ] + t1832 )
/ 2.0 * X [ 156ULL ] - ( t1832 - X [ 181ULL ] ) / 2.0 * X [ 193ULL ] ) ;
t1195 [ 133ULL ] = - ( ( t1814 + t1829 ) * 0.001 ) / 7.5401484792408886E-5 ;
t1195 [ 134ULL ] = - ( t3270 / 7.8539816339744827E-5 * 0.00031622776601683789
+ t2326 ) ; t1195 [ 135ULL ] = - ( t3280 / 7.8539816339744827E-5 *
0.00031622776601683789 + t2327 ) ; t1195 [ 136ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_unch ; t1195 [
137ULL ] = t1765 ; t3940 = X [ 177ULL ] * t1791 ; t1195 [ 138ULL ] = - ( ( (
real_T ) ( M [ 153ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3940 / ( X [ 178ULL ] ==
0.0 ? 1.0E-16 : X [ 178ULL ] ) ) * ( t3940 / ( X [ 178ULL ] == 0.0 ? 1.0E-16
: X [ 178ULL ] ) ) * ( - X [ 167ULL ] / 7.8539816339744827E-5 ) * ( - X [
167ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_325 ) ; t3940 = X [ 182ULL ] * t1791 ; t1195 [ 139ULL ] = - ( ( (
real_T ) ( M [ 154ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3940 / ( X [ 183ULL ] ==
0.0 ? 1.0E-16 : X [ 183ULL ] ) ) * ( t3940 / ( X [ 183ULL ] == 0.0 ? 1.0E-16
: X [ 183ULL ] ) ) * ( X [ 181ULL ] / 7.8539816339744827E-5 ) * ( X [ 181ULL
] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_328 )
; t1195 [ 140ULL ] = ( X [ 185ULL ] * t1791 / 461.523 - t1813 * X [ 27ULL ] )
/ 0.64309276860371423 ; t1195 [ 141ULL ] = X [ 179ULL ] * t1791 / 461.523 ;
t1195 [ 142ULL ] = X [ 184ULL ] * t1812 ; t1195 [ 143ULL ] = X [ 180ULL ] *
t1791 / 4124.48151675695 ; t1195 [ 144ULL ] = - ( ( ( real_T ) ( M [ 155ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t1867 / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ]
) ) * ( t1867 / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) ) * ( - X [
167ULL ] / 7.8539816339744827E-5 ) * ( - X [ 167ULL ] / 7.8539816339744827E-5
) / 2.0 * 9.999999999999999E-14 + t1841 ) ; t1195 [ 145ULL ] = - t1767 ;
t1195 [ 146ULL ] = - t1790 ; t1195 [ 147ULL ] = - ( ( ( real_T ) ( M [ 155ULL
] != 0 ) * 2.0 - 1.0 ) * ( t1867 / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL
] ) ) * ( t1867 / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) ) * ( X [
181ULL ] / 7.8539816339744827E-5 ) * ( X [ 181ULL ] / 7.8539816339744827E-5 )
/ 2.0 * 9.999999999999999E-14 + t1841 ) ; t1195 [ 148ULL ] = - t1767 ; t1195
[ 149ULL ] = - t1790 ; t1195 [ 150ULL ] = - ( ( - X [ 167ULL ] + t1780 ) /
2.0 * t1792 - ( t1780 - ( - X [ 167ULL ] ) ) / 2.0 * X [ 201ULL ] ) ; t1195 [
151ULL ] = - ( ( - X [ 167ULL ] + t1778 ) / 2.0 * X [ 160ULL ] - ( t1778 - (
- X [ 167ULL ] ) ) / 2.0 * X [ 197ULL ] ) ; t1195 [ 152ULL ] = - ( ( - X [
167ULL ] + t1769 ) / 2.0 * X [ 159ULL ] - ( t1769 - ( - X [ 167ULL ] ) ) /
2.0 * X [ 198ULL ] ) ; t1195 [ 153ULL ] = - ( U_idx_2 / 2.0 * zc_int77 -
t4057 / 2.0 * X [ 201ULL ] ) ; t1195 [ 154ULL ] = - ( t3959 / 2.0 * X [
176ULL ] - t3967 / 2.0 * X [ 197ULL ] ) ; t1195 [ 155ULL ] = - ( t3880 / 2.0
* X [ 175ULL ] - U_idx_3 / 2.0 * X [ 198ULL ] ) ; t1195 [ 156ULL ] = t104 ;
t1195 [ 157ULL ] = - ( intrm_sf_mf_385 - t1859 ) ; U_idx_2 = X [ 199ULL ] *
t1852 ; t1195 [ 158ULL ] = - ( ( ( real_T ) ( M [ 158ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_2 / ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( U_idx_2
/ ( X [ 22ULL ] == 0.0 ? 1.0E-16 : X [ 22ULL ] ) ) * ( - X [ 167ULL ] / 0.64
/ 7.8539816339744827E-5 ) * ( - X [ 167ULL ] / 0.64 / 7.8539816339744827E-5 )
/ 2.0 * 9.999999999999999E-14 + t1827 ) ; U_idx_2 = X [ 200ULL ] * t1852 ;
t1195 [ 159ULL ] = - ( ( ( real_T ) ( M [ 159ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_2 / ( X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) ) * ( U_idx_2 / (
X [ 174ULL ] == 0.0 ? 1.0E-16 : X [ 174ULL ] ) ) * ( - X [ 167ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( - X [ 167ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + t2325 ) ; t1195 [ 160ULL ] = - ( ( ( real_T ) (
M [ 160ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1956 / ( X [ 196ULL ] == 0.0 ? 1.0E-16
: X [ 196ULL ] ) ) * ( t1956 / ( X [ 196ULL ] == 0.0 ? 1.0E-16 : X [ 196ULL ]
) ) * ( - X [ 167ULL ] / 0.64 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) ) * ( - X
[ 167ULL ] / 0.64 / ( t1849 == 0.0 ? 1.0E-16 : t1849 ) ) / 2.0 *
9.999999999999999E-14 + t2328 ) ; U_idx_2 = X [ 208ULL ] + t1864 ; t4057 =
t1864 - X [ 208ULL ] ; t1195 [ 161ULL ] = - ( U_idx_2 / 2.0 * zc_int78 -
t4057 / 2.0 * X [ 207ULL ] ) / 365.59674280784293 ; t3959 = X [ 208ULL ] +
t1860 ; t3967 = t1860 - X [ 208ULL ] ; t1195 [ 162ULL ] = - ( t3959 / 2.0 * X
[ 204ULL ] - t3967 / 2.0 * X [ 212ULL ] ) ; t3880 = X [ 208ULL ] + t1855 ;
U_idx_3 = t1855 - X [ 208ULL ] ; t1195 [ 163ULL ] = - ( t3880 / 2.0 * X [
203ULL ] - U_idx_3 / 2.0 * X [ 211ULL ] ) ; t3940 = 148.401051922146 ; t1195
[ 164ULL ] = t3940 / 461.523 / 43.3158175294914 + piece232 * 0.5 / 461.523 /
43.3158175294914 ; t1195 [ 165ULL ] = X [ 215ULL ] * intrm_sf_mf_390 /
461.523 ; t1195 [ 166ULL ] = X [ 205ULL ] * t1862 ; t1585_idx_0 =
62.328441807301317 ; t1195 [ 167ULL ] = t1585_idx_0 / 259.836612622973 +
piece232 * 0.21 / 259.836612622973 ; t3883 = intrm_sf_mf_390 * 293.15 ; t1195
[ 168ULL ] = - 304.06022922571 - ( ( ( real_T ) ( M [ 162ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3883 / 1.01325 ) * ( t3883 / 1.01325 ) * ( X [ 208ULL ] /
0.0019634954084936209 ) * ( X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + ( ( ( - t1868 - t1870 ) * 304.06022922571 + t1868 *
2537.56068088674 ) + t1870 * 266.413508632715 ) ) ; t1195 [ 169ULL ] = -
t1868 ; t1195 [ 170ULL ] = - t1870 ; t3883 = - X [ 208ULL ] + t1864 ; t3645 =
t1864 - ( - X [ 208ULL ] ) ; t1195 [ 171ULL ] = - ( t3883 / 2.0 * t1797 -
t3645 / 2.0 * X [ 224ULL ] ) / 365.59674280784293 ; t3647 = - X [ 208ULL ] +
t1860 ; t3648 = t1860 - ( - X [ 208ULL ] ) ; t1195 [ 172ULL ] = - ( t3647 /
2.0 * X [ 204ULL ] - t3648 / 2.0 * X [ 226ULL ] ) ; t3649 = - X [ 208ULL ] +
t1855 ; t3650 = t1855 - ( - X [ 208ULL ] ) ; t1195 [ 173ULL ] = - ( t3649 /
2.0 * X [ 203ULL ] - t3650 / 2.0 * X [ 225ULL ] ) ; t1195 [ 174ULL ] = - (
U_idx_2 / 2.0 * ( ( ( real_T ) ( M [ 163ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3361
/ ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( t3361 / ( X [ 29ULL ]
== 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( X [ 208ULL ] / 0.0019634954084936209 )
* ( X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t2332 ) - t4057 / 2.0 * X [ 224ULL ] ) ; t1195 [ 175ULL ] = - ( t3959 / 2.0 *
X [ 218ULL ] - t3967 / 2.0 * X [ 226ULL ] ) ; t1195 [ 176ULL ] = - ( t3880 /
2.0 * X [ 217ULL ] - U_idx_3 / 2.0 * X [ 225ULL ] ) ; t1195 [ 177ULL ] =
zc_int46 ; t1195 [ 178ULL ] = 979.36765375297466 + t1874 / 3.4930368471842854
; t1195 [ 179ULL ] = - 979.36765375297466 + t2061 / 3.4930368471842854 ;
t1195 [ 180ULL ] = t1808 / 1.0413512978067061 ; t1195 [ 181ULL ] = t1804 ;
t1195 [ 182ULL ] = - ( t3883 / 2.0 * ( ( ( real_T ) ( M [ 163ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3361 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * (
t3361 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( - X [ 208ULL ] /
0.0019634954084936209 ) * ( - X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2332 ) - t3645 / 2.0 * X [ 235ULL ] ) ; t1195 [
183ULL ] = - ( t3647 / 2.0 * X [ 218ULL ] - t3648 / 2.0 * X [ 237ULL ] ) ;
t1195 [ 184ULL ] = - ( t3649 / 2.0 * X [ 217ULL ] - t3650 / 2.0 * X [ 236ULL
] ) ; t1195 [ 185ULL ] = - ( ( X [ 239ULL ] + t1899 ) / 2.0 * ( ( ( real_T )
( M [ 168ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3009 / ( X [ 29ULL ] == 0.0 ?
1.0E-16 : X [ 29ULL ] ) ) * ( t3009 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [
29ULL ] ) ) * ( X [ 239ULL ] / 0.0019634954084936209 ) * ( X [ 239ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2333 ) - ( t1899 - X
[ 239ULL ] ) / 2.0 * X [ 238ULL ] ) ; t1195 [ 186ULL ] = - ( ( X [ 239ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1 ) / 2.0 * X [
229ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Compressor_Volume_co1
- X [ 239ULL ] ) / 2.0 * X [ 243ULL ] ) ; t1195 [ 187ULL ] = - ( ( X [ 239ULL
] + t1889 ) / 2.0 * X [ 228ULL ] - ( t1889 - X [ 239ULL ] ) / 2.0 * X [
242ULL ] ) ; t1195 [ 188ULL ] = ( X [ 231ULL ] * t1893 / 461.523 - t1897 * X
[ 32ULL ] ) / 0.64309276860371423 ; t1195 [ 189ULL ] = X [ 233ULL ] * t1893 /
461.523 ; t1195 [ 190ULL ] = X [ 230ULL ] * t1895 ; t1195 [ 191ULL ] = X [
232ULL ] * t1893 / 259.836612622973 / 1.1422643670118826 ; t1195 [ 192ULL ] =
- ( ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1986 / ( X [ 29ULL
] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( t1986 / ( X [ 29ULL ] == 0.0 ?
1.0E-16 : X [ 29ULL ] ) ) * ( - X [ 208ULL ] / 0.0019634954084936209 ) * ( -
X [ 208ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t1905
) ; t1195 [ 193ULL ] = - t1891 ; t1195 [ 194ULL ] = - t1892 ; t1195 [ 195ULL
] = - ( ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1986 / ( X [
29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( t1986 / ( X [ 29ULL ] == 0.0 ?
1.0E-16 : X [ 29ULL ] ) ) * ( X [ 239ULL ] / 0.0019634954084936209 ) * ( X [
239ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t1905 ) ;
t1195 [ 196ULL ] = - t1891 ; t1195 [ 197ULL ] = - t1892 ; t1195 [ 198ULL ] =
- t1187 [ 0ULL ] ; t1195 [ 199ULL ] = 0.0 ; t1195 [ 200ULL ] = U_idx_5 *
t1854 ; t1195 [ 201ULL ] = - ( ( - X [ 181ULL ] + intrm_sf_mf_549 ) / 2.0 *
zc_int97 - ( intrm_sf_mf_549 - ( - X [ 181ULL ] ) ) / 2.0 * X [ 262ULL ] ) ;
t1195 [ 202ULL ] = - ( ( - X [ 181ULL ] + t1933 ) / 2.0 * X [ 157ULL ] - (
t1933 - ( - X [ 181ULL ] ) ) / 2.0 * X [ 264ULL ] ) ; t1195 [ 203ULL ] = - (
( - X [ 181ULL ] + intrm_sf_mf_536 ) / 2.0 * X [ 156ULL ] - ( intrm_sf_mf_536
- ( - X [ 181ULL ] ) ) / 2.0 * X [ 263ULL ] ) ; t1195 [ 204ULL ] = - ( ( X [
258ULL ] + t1945 ) / 2.0 * t1919 - ( t1945 - X [ 258ULL ] ) / 2.0 * X [
265ULL ] ) ; t1195 [ 205ULL ] = - ( ( X [ 258ULL ] + t1944 ) / 2.0 * X [
248ULL ] - ( t1944 - X [ 258ULL ] ) / 2.0 * X [ 269ULL ] ) ; t1195 [ 206ULL ]
= - ( ( X [ 258ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 ) / 2.0 * X [
247ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0
- X [ 258ULL ] ) / 2.0 * X [ 268ULL ] ) ; t1195 [ 207ULL ] = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond + t1938 ) * 0.001 )
/ 1.8850371198102225E-5 ; t1195 [ 208ULL ] = - ( t2901 /
0.0019634954084936209 * 0.00031622776601683789 + t2335 ) ; t1195 [ 209ULL ] =
- ( t2916 / 0.0019634954084936209 * 0.00031622776601683789 + t2336 ) ; t1195
[ 210ULL ] = t1798 ; t1195 [ 211ULL ] = t1799 ; U_idx_2 = X [ 256ULL ] *
t1913 ; t1195 [ 212ULL ] = - ( ( ( real_T ) ( M [ 178ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_2 / ( X [ 257ULL ] == 0.0 ? 1.0E-16 : X [ 257ULL ] ) ) * (
U_idx_2 / ( X [ 257ULL ] == 0.0 ? 1.0E-16 : X [ 257ULL ] ) ) * ( - X [ 181ULL
] / 0.0019634954084936209 ) * ( - X [ 181ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_583 ) ; U_idx_2 = X [ 259ULL ] *
t1913 ; t1195 [ 213ULL ] = - ( ( ( real_T ) ( M [ 180ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_2 / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) ) * (
U_idx_2 / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X [ 260ULL ] ) ) * ( X [ 258ULL ]
/ 0.0019634954084936209 ) * ( X [ 258ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1833 ) ; t1195 [ 214ULL ] = ( X [ 252ULL ] * t1913 /
461.523 - t1936 * X [ 35ULL ] ) / 0.64309276860371423 ; t1195 [ 215ULL ] = X
[ 254ULL ] * t1913 / 461.523 ; t1195 [ 216ULL ] = X [ 251ULL ] * t1935 ;
t1195 [ 217ULL ] = X [ 253ULL ] * t1913 / 4124.48151675695 ; t1195 [ 218ULL ]
= 0.0 ; t1195 [ 219ULL ] = - ( ( ( real_T ) ( M [ 181ULL ] != 0 ) * 2.0 - 1.0
) * ( t2007 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * ( t2007 / (
X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * ( - X [ 181ULL ] /
0.0019634954084936209 ) * ( - X [ 181ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1951 ) ; t1195 [ 220ULL ] = - t1911 ; t1195 [ 221ULL
] = - t1912 ; t1195 [ 222ULL ] = - ( ( ( real_T ) ( M [ 181ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2007 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * (
t2007 / ( X [ 36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) ) * ( X [ 258ULL ] /
0.0019634954084936209 ) * ( X [ 258ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t1951 ) ; t1195 [ 223ULL ] = - t1911 ; t1195 [ 224ULL
] = - t1912 ; t1195 [ 225ULL ] = - ( ( - X [ 258ULL ] + t1999 ) / 2.0 * t1914
- ( t1999 - ( - X [ 258ULL ] ) ) / 2.0 * X [ 276ULL ] ) ; t1195 [ 226ULL ] =
- ( ( - X [ 258ULL ] + intrm_sf_mf_664 ) / 2.0 * X [ 248ULL ] - (
intrm_sf_mf_664 - ( - X [ 258ULL ] ) ) / 2.0 * X [ 278ULL ] ) ; t1195 [
227ULL ] = - ( ( - X [ 258ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0 ) / 2.0 * X [
247ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_A0
- ( - X [ 258ULL ] ) ) / 2.0 * X [ 277ULL ] ) ; t1195 [ 228ULL ] = - ( ( X [
272ULL ] + t2008 ) / 2.0 * zc_int132 - ( t2008 - X [ 272ULL ] ) / 2.0 * X [
279ULL ] ) ; t1195 [ 229ULL ] = - ( ( X [ 272ULL ] + t2004 ) / 2.0 * X [
62ULL ] - ( t2004 - X [ 272ULL ] ) / 2.0 * X [ 283ULL ] ) ; t1195 [ 230ULL ]
= - ( ( X [ 272ULL ] + t2002 ) / 2.0 * X [ 61ULL ] - ( t2002 - X [ 272ULL ] )
/ 2.0 * X [ 282ULL ] ) ; t1195 [ 231ULL ] = - ( ( t1992 + t1993 ) * 0.001 ) ;
t1195 [ 232ULL ] = - ( t2945 / 0.32 * 0.00031622776601683789 + t2338 ) ;
t1195 [ 233ULL ] = - ( t2958 / 0.32 * 0.00031622776601683789 +
intrm_sf_mf_739 ) ; t1195 [ 234ULL ] = t107 ; t1195 [ 235ULL ] = t1800 ;
U_idx_2 = X [ 270ULL ] * t1963 ; t1195 [ 236ULL ] = - ( ( ( real_T ) ( M [
187ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( X [ 271ULL ] == 0.0 ? 1.0E-16 :
X [ 271ULL ] ) ) * ( U_idx_2 / ( X [ 271ULL ] == 0.0 ? 1.0E-16 : X [ 271ULL ]
) ) * ( - X [ 258ULL ] / 0.32 ) * ( - X [ 258ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t1939 ) ; U_idx_2 = X [ 273ULL ] * t1963 ; t1195 [
237ULL ] = - ( ( ( real_T ) ( M [ 188ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 /
( X [ 274ULL ] == 0.0 ? 1.0E-16 : X [ 274ULL ] ) ) * ( U_idx_2 / ( X [ 274ULL
] == 0.0 ? 1.0E-16 : X [ 274ULL ] ) ) * ( X [ 272ULL ] / 0.32 ) * ( X [
272ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t1942 ) ; t1195 [ 238ULL ]
= ( X [ 68ULL ] * t1963 / 461.523 - t1991 * X [ 6ULL ] ) /
0.64309276860371423 ; t1195 [ 239ULL ] = X [ 71ULL ] * t1963 / 461.523 ;
t1195 [ 240ULL ] = X [ 69ULL ] * t1990 ; t1195 [ 241ULL ] = X [ 70ULL ] *
t1963 / 4124.48151675695 ; t1195 [ 242ULL ] = 0.0 ; t1195 [ 243ULL ] = - ( (
( real_T ) ( M [ 189ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2105 / ( X [ 37ULL ] ==
0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( t2105 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 :
X [ 37ULL ] ) ) * ( - X [ 258ULL ] / 0.32 ) * ( - X [ 258ULL ] / 0.32 ) / 2.0
* 9.999999999999999E-14 + t2020 ) ; t1195 [ 244ULL ] = - intrm_sf_mf_608 ;
t1195 [ 245ULL ] = - t1959 ; t1195 [ 246ULL ] = - ( ( ( real_T ) ( M [ 189ULL
] != 0 ) * 2.0 - 1.0 ) * ( t2105 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL
] ) ) * ( t2105 / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) ) * ( X [
272ULL ] / 0.32 ) * ( X [ 272ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t2020 ) ; t1195 [ 247ULL ] = - intrm_sf_mf_608 ; t1195 [ 248ULL ] = - t1959 ;
t1195 [ 249ULL ] = - ( ( - X [ 272ULL ] + t2008 ) / 2.0 * t1699 - ( t2008 - (
- X [ 272ULL ] ) ) / 2.0 * X [ 288ULL ] ) ; t1195 [ 250ULL ] = - ( ( - X [
272ULL ] + t2004 ) / 2.0 * X [ 62ULL ] - ( t2004 - ( - X [ 272ULL ] ) ) / 2.0
* X [ 290ULL ] ) ; t1195 [ 251ULL ] = - ( ( - X [ 272ULL ] + t2002 ) / 2.0 *
X [ 61ULL ] - ( t2002 - ( - X [ 272ULL ] ) ) / 2.0 * X [ 289ULL ] ) ; t1195 [
252ULL ] = - ( ( - X [ 129ULL ] + t1994 ) / 2.0 * zc_int164 - ( t1994 - ( - X
[ 129ULL ] ) ) / 2.0 * X [ 291ULL ] ) ; t1195 [ 253ULL ] = - ( ( - X [ 129ULL
] + t1653 ) / 2.0 * X [ 109ULL ] - ( t1653 - ( - X [ 129ULL ] ) ) / 2.0 * X [
293ULL ] ) ; t1195 [ 254ULL ] = - ( ( - X [ 129ULL ] + t1745 ) / 2.0 * X [
108ULL ] - ( t1745 - ( - X [ 129ULL ] ) ) / 2.0 * X [ 292ULL ] ) ; t1195 [
255ULL ] = - ( ( t2052 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA1_Q_conv ) * 0.001 ) ; t1195
[ 256ULL ] = - ( t2991 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_860 ) ;
t1195 [ 257ULL ] = - ( t1586_idx_0 / 0.32 * 0.00031622776601683789 +
intrm_sf_mf_871 ) ; t1195 [ 258ULL ] = t109 ; t1195 [ 259ULL ] = t1698 ;
U_idx_2 = X [ 284ULL ] * t2028 ; t1195 [ 260ULL ] = - ( ( ( real_T ) ( M [
194ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( X [ 285ULL ] == 0.0 ? 1.0E-16 :
X [ 285ULL ] ) ) * ( U_idx_2 / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [ 285ULL ]
) ) * ( - X [ 272ULL ] / 0.32 ) * ( - X [ 272ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2334 ) ; U_idx_2 = X [ 286ULL ] * t2028 ; t1195 [
261ULL ] = - ( ( ( real_T ) ( M [ 195ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 /
( X [ 287ULL ] == 0.0 ? 1.0E-16 : X [ 287ULL ] ) ) * ( U_idx_2 / ( X [ 287ULL
] == 0.0 ? 1.0E-16 : X [ 287ULL ] ) ) * ( - X [ 129ULL ] / 0.32 ) * ( - X [
129ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_850 ) ; t1195 [
262ULL ] = ( X [ 74ULL ] * t2028 / 461.523 - t2051 * X [ 9ULL ] ) /
0.64309276860371423 ; t1195 [ 263ULL ] = X [ 76ULL ] * t2028 / 461.523 ;
t1195 [ 264ULL ] = X [ 72ULL ] * t2050 ; t1195 [ 265ULL ] = X [ 75ULL ] *
t2028 / 4124.48151675695 ; t1195 [ 266ULL ] = 0.0 ; t1195 [ 267ULL ] = - ( (
( real_T ) ( M [ 196ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2203 / ( X [ 38ULL ] ==
0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * ( t2203 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 :
X [ 38ULL ] ) ) * ( - X [ 272ULL ] / 0.32 ) * ( - X [ 272ULL ] / 0.32 ) / 2.0
* 9.999999999999999E-14 + intrm_sf_mf_853 ) ; t1195 [ 268ULL ] = - t1987 ;
t1195 [ 269ULL ] = - t2026 ; t1195 [ 270ULL ] = - ( ( ( real_T ) ( M [ 196ULL
] != 0 ) * 2.0 - 1.0 ) * ( t2203 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL
] ) ) * ( t2203 / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) ) * ( - X [
129ULL ] / 0.32 ) * ( - X [ 129ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_853 ) ; t1195 [ 271ULL ] = - t1987 ; t1195 [ 272ULL ] = - t2026 ;
t1195 [ 273ULL ] = U_idx_7 * zc_int191 ; t1195 [ 274ULL ] = - ( ( - X [
239ULL ] + t2093 ) / 2.0 * ( ( ( real_T ) ( M [ 168ULL ] != 0 ) * 2.0 - 1.0 )
* ( t3009 / ( X [ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( t3009 / ( X
[ 29ULL ] == 0.0 ? 1.0E-16 : X [ 29ULL ] ) ) * ( - X [ 239ULL ] /
0.0019634954084936209 ) * ( - X [ 239ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2333 ) - ( t2093 - ( - X [ 239ULL ] ) ) / 2.0 * X [
311ULL ] ) ; t1195 [ 275ULL ] = - ( ( - X [ 239ULL ] + intrm_sf_mf_956 ) /
2.0 * X [ 229ULL ] - ( intrm_sf_mf_956 - ( - X [ 239ULL ] ) ) / 2.0 * X [
313ULL ] ) ; t1195 [ 276ULL ] = - ( ( - X [ 239ULL ] + t1665 ) / 2.0 * X [
228ULL ] - ( t1665 - ( - X [ 239ULL ] ) ) / 2.0 * X [ 312ULL ] ) ; t1195 [
277ULL ] = - ( ( X [ 307ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 ) / 2.0 *
t1928 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_B2 - X
[ 307ULL ] ) / 2.0 * X [ 314ULL ] ) ; t1195 [ 278ULL ] = - ( ( X [ 307ULL ] +
t2100 ) / 2.0 * X [ 297ULL ] - ( t2100 - X [ 307ULL ] ) / 2.0 * X [ 318ULL ]
) ; t1195 [ 279ULL ] = - ( ( X [ 307ULL ] + t2097 ) / 2.0 * X [ 296ULL ] - (
t2097 - X [ 307ULL ] ) / 2.0 * X [ 317ULL ] ) ; t1195 [ 280ULL ] = - ( (
t2083 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_conv ) * 0.001 )
/ 1.8850371198102225E-5 ; t1195 [ 281ULL ] = - ( t3039 /
0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_995 ) ; t1195 [
282ULL ] = - ( t3061 / 0.0019634954084936209 * 0.00031622776601683789 + t2284
) ; t1195 [ 283ULL ] = t111 ; t1195 [ 284ULL ] = t112 ; U_idx_2 = X [ 305ULL
] * t2059 ; t1195 [ 285ULL ] = - ( ( ( real_T ) ( M [ 204ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_2 / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL ] ) ) * (
U_idx_2 / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL ] ) ) * ( - X [ 239ULL
] / 0.0019634954084936209 ) * ( - X [ 239ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + t2340 ) ; U_idx_2 = X [ 308ULL ] * t2059 ;
t1195 [ 286ULL ] = - ( ( ( real_T ) ( M [ 205ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_2 / ( X [ 309ULL ] == 0.0 ? 1.0E-16 : X [ 309ULL ] ) ) * ( U_idx_2 / (
X [ 309ULL ] == 0.0 ? 1.0E-16 : X [ 309ULL ] ) ) * ( X [ 307ULL ] /
0.0019634954084936209 ) * ( X [ 307ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2341 ) ; t1195 [ 287ULL ] = ( X [ 301ULL ] * t2059 /
461.523 - t2082 * X [ 41ULL ] ) / 0.64309276860371423 ; t1195 [ 288ULL ] = X
[ 303ULL ] * t2059 / 461.523 ; t1195 [ 289ULL ] = X [ 300ULL ] * t2080 ;
t1195 [ 290ULL ] = X [ 302ULL ] * t2059 / 259.836612622973 /
1.1422643670118826 ; t1195 [ 291ULL ] = 0.0 ; t1195 [ 292ULL ] = - ( ( (
real_T ) ( M [ 207ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2299 / ( X [ 42ULL ] == 0.0
? 1.0E-16 : X [ 42ULL ] ) ) * ( t2299 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [
42ULL ] ) ) * ( - X [ 239ULL ] / 0.0019634954084936209 ) * ( - X [ 239ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2117 ) ; t1195 [
293ULL ] = - t2047 ; t1195 [ 294ULL ] = - t2058 ; t1195 [ 295ULL ] = - ( ( (
real_T ) ( M [ 207ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2299 / ( X [ 42ULL ] == 0.0
? 1.0E-16 : X [ 42ULL ] ) ) * ( t2299 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [
42ULL ] ) ) * ( X [ 307ULL ] / 0.0019634954084936209 ) * ( X [ 307ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2117 ) ; t1195 [
296ULL ] = - t2047 ; t1195 [ 297ULL ] = - t2058 ; U_idx_2 = X [ 330ULL ] +
t2124 ; t4057 = t2124 - X [ 330ULL ] ; t1195 [ 298ULL ] = - ( U_idx_2 / 2.0 *
( ( ( real_T ) ( M [ 6ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3129 / 1.01325 ) * (
t3129 / 1.01325 ) * ( X [ 330ULL ] / 0.0019634954084936209 ) * ( X [ 330ULL ]
/ 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t2287 ) - t4057 /
2.0 * X [ 329ULL ] ) / 365.59674280784293 ; t3959 = X [ 330ULL ] + t2122 ;
t3967 = t2122 - X [ 330ULL ] ; t1195 [ 299ULL ] = - ( t3959 / 2.0 * X [
326ULL ] - t3967 / 2.0 * X [ 334ULL ] ) ; t3880 = X [ 330ULL ] + t2077 ;
U_idx_3 = t2077 - X [ 330ULL ] ; t1195 [ 300ULL ] = - ( t3880 / 2.0 * X [
325ULL ] - U_idx_3 / 2.0 * X [ 333ULL ] ) ; t1195 [ 301ULL ] = t3940 /
461.523 / 43.3158175294914 + t1879 * 0.5 / 461.523 / 43.3158175294914 ; t1195
[ 302ULL ] = X [ 337ULL ] * t2129 / 461.523 ; t1195 [ 303ULL ] = X [ 327ULL ]
* intrm_sf_mf_1009 ; t1195 [ 304ULL ] = t1585_idx_0 / 259.836612622973 +
t1879 * 0.21 / 259.836612622973 ; t3940 = t2129 * 293.15 ; t1195 [ 305ULL ] =
- 304.06022922571 - ( ( ( real_T ) ( M [ 208ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3940 / 1.01325 ) * ( t3940 / 1.01325 ) * ( X [ 330ULL ] /
0.0019634954084936209 ) * ( X [ 330ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + ( ( ( - t2126 - t2127 ) * 304.06022922571 + t2126 *
2537.56068088674 ) + t2127 * 266.413508632715 ) ) ; t1195 [ 306ULL ] = -
t2126 ; t1195 [ 307ULL ] = - t2127 ; t1195 [ 308ULL ] = - ( ( X [ 342ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 ) / 2.0 *
t1966 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A2 - X
[ 342ULL ] ) / 2.0 * X [ 352ULL ] ) ; t1195 [ 309ULL ] = - ( ( X [ 342ULL ] +
t2161 ) / 2.0 * X [ 322ULL ] - ( t2161 - X [ 342ULL ] ) / 2.0 * X [ 356ULL ]
) ; t1195 [ 310ULL ] = - ( ( X [ 342ULL ] + t2138 ) / 2.0 * X [ 321ULL ] - (
t2138 - X [ 342ULL ] ) / 2.0 * X [ 355ULL ] ) ; t1195 [ 311ULL ] = - ( ( - X
[ 330ULL ] + t2170 ) / 2.0 * zc_int232 - ( t2170 - ( - X [ 330ULL ] ) ) / 2.0
* X [ 357ULL ] ) ; t1195 [ 312ULL ] = - ( ( - X [ 330ULL ] + t2169 ) / 2.0 *
X [ 341ULL ] - ( t2169 - ( - X [ 330ULL ] ) ) / 2.0 * X [ 359ULL ] ) ; t1195
[ 313ULL ] = - ( ( - X [ 330ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in ) / 2.0 * X [
340ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_g_B_in - ( -
X [ 330ULL ] ) ) / 2.0 * X [ 358ULL ] ) ; t1195 [ 314ULL ] = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Q_cond + t2151 ) * 0.001 )
- - 0.92095788639984788 ; t1195 [ 315ULL ] = - ( t3092 /
0.0019634954084936209 * 0.00031622776601683789 + t2291 ) ; t1195 [ 316ULL ] =
- ( t3108 / 0.0019634954084936209 * 0.00031622776601683789 + t2292 ) ; t1195
[ 317ULL ] = t1915 ; t1195 [ 318ULL ] = zc_int160 ; t3940 = X [ 343ULL ] *
t2133 ; t1195 [ 319ULL ] = - ( ( ( real_T ) ( M [ 213ULL ] != 0 ) * 2.0 - 1.0
) * ( t3940 / ( X [ 344ULL ] == 0.0 ? 1.0E-16 : X [ 344ULL ] ) ) * ( t3940 /
( X [ 344ULL ] == 0.0 ? 1.0E-16 : X [ 344ULL ] ) ) * ( X [ 342ULL ] /
0.0019634954084936209 ) * ( X [ 342ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1126 ) ; t3940 = X [ 347ULL ] * t2133 ;
t1195 [ 320ULL ] = - ( ( ( real_T ) ( M [ 3ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3940 / ( X [ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) * ( t3940 / ( X [
348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) * ( - X [ 330ULL ] /
0.0019634954084936209 ) * ( - X [ 330ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2163 ) ; t1195 [ 321ULL ] = ( X [ 350ULL ] * t2133 /
461.523 - t2155 * X [ 45ULL ] ) / 0.64309276860371423 ; t1195 [ 322ULL ] = X
[ 345ULL ] * t2133 / 461.523 ; t1195 [ 323ULL ] = X [ 349ULL ] * t2154 ;
t1195 [ 324ULL ] = X [ 346ULL ] * t2133 / 259.836612622973 /
1.1422643670118826 ; t1195 [ 325ULL ] = - ( ( ( real_T ) ( M [ 4ULL ] != 0 )
* 2.0 - 1.0 ) * ( t2399 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) *
( t2399 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( X [ 342ULL ] /
0.0019634954084936209 ) * ( X [ 342ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2176 ) ; t1195 [ 326ULL ] = - t2131 ; t1195 [ 327ULL
] = - t2132 ; t1195 [ 328ULL ] = - ( ( ( real_T ) ( M [ 4ULL ] != 0 ) * 2.0 -
1.0 ) * ( t2399 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( t2399
/ ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( - X [ 330ULL ] /
0.0019634954084936209 ) * ( - X [ 330ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2176 ) ; t1195 [ 329ULL ] = - t2131 ; t1195 [ 330ULL
] = - t2132 ; t1195 [ 331ULL ] = - ( U_idx_2 / 2.0 * zc_int263 - t4057 / 2.0
* X [ 366ULL ] ) ; t1195 [ 332ULL ] = - ( t3959 / 2.0 * X [ 341ULL ] - t3967
/ 2.0 * X [ 362ULL ] ) ; t1195 [ 333ULL ] = - ( t3880 / 2.0 * X [ 340ULL ] -
U_idx_3 / 2.0 * X [ 363ULL ] ) ; t1195 [ 334ULL ] = - ( ( - X [ 330ULL ] +
t2124 ) / 2.0 * ( ( ( real_T ) ( M [ 6ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3129 /
1.01325 ) * ( t3129 / 1.01325 ) * ( - X [ 330ULL ] / 0.0019634954084936209 )
* ( - X [ 330ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t2287 ) - ( t2124 - ( - X [ 330ULL ] ) ) / 2.0 * X [ 366ULL ] ) /
365.59674280784293 ; t1195 [ 335ULL ] = - ( ( - X [ 330ULL ] + t2122 ) / 2.0
* X [ 326ULL ] - ( t2122 - ( - X [ 330ULL ] ) ) / 2.0 * X [ 362ULL ] ) ;
t1195 [ 336ULL ] = - ( ( - X [ 330ULL ] + t2077 ) / 2.0 * X [ 325ULL ] - (
t2077 - ( - X [ 330ULL ] ) ) / 2.0 * X [ 363ULL ] ) ; t1195 [ 337ULL ] =
zc_int116 ; t1195 [ 338ULL ] = - ( t2181 - t2187 ) ; U_idx_2 = X [ 364ULL ] *
t2183 ; t1195 [ 339ULL ] = - ( ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 )
* ( U_idx_2 / ( t2130 == 0.0 ? 1.0E-16 : t2130 ) ) * ( U_idx_2 / ( t2130 ==
0.0 ? 1.0E-16 : t2130 ) ) * ( X [ 330ULL ] / 0.64 / 0.0019634954084936209 ) *
( X [ 330ULL ] / 0.64 / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14
+ intrm_sf_mf_1179 ) ; U_idx_2 = X [ 365ULL ] * t2183 ; t1195 [ 340ULL ] = -
( ( ( real_T ) ( M [ 10ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / 1.01325 ) * (
U_idx_2 / 1.01325 ) * ( X [ 330ULL ] / 0.64 / 0.0019634954084936209 ) * ( X [
330ULL ] / 0.64 / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t2283 ) / 1.0413512978067061 ; t1195 [ 341ULL ] = - ( ( ( real_T ) ( M [
11ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2488 / ( X [ 361ULL ] == 0.0 ? 1.0E-16 : X
[ 361ULL ] ) ) * ( t2488 / ( X [ 361ULL ] == 0.0 ? 1.0E-16 : X [ 361ULL ] ) )
* ( X [ 330ULL ] / 0.64 / ( intrm_sf_mf_1151 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1151 ) ) * ( X [ 330ULL ] / 0.64 / ( intrm_sf_mf_1151 == 0.0 ?
1.0E-16 : intrm_sf_mf_1151 ) ) / 2.0 * 9.999999999999999E-14 + t2294 ) ;
t1195 [ 342ULL ] = - ( ( - X [ 307ULL ] + t2237 ) / 2.0 * zc_int265 - ( t2237
- ( - X [ 307ULL ] ) ) / 2.0 * X [ 373ULL ] ) ; t1195 [ 343ULL ] = - ( ( - X
[ 307ULL ] + t2236 ) / 2.0 * X [ 297ULL ] - ( t2236 - ( - X [ 307ULL ] ) ) /
2.0 * X [ 375ULL ] ) ; t1195 [ 344ULL ] = - ( ( - X [ 307ULL ] + t2229 ) /
2.0 * X [ 296ULL ] - ( t2229 - ( - X [ 307ULL ] ) ) / 2.0 * X [ 374ULL ] ) ;
t1195 [ 345ULL ] = - ( ( X [ 369ULL ] + t2241 ) / 2.0 * intrm_sf_mf_1284 - (
t2241 - X [ 369ULL ] ) / 2.0 * X [ 376ULL ] ) ; t1195 [ 346ULL ] = - ( ( X [
369ULL ] + t2240 ) / 2.0 * X [ 66ULL ] - ( t2240 - X [ 369ULL ] ) / 2.0 * X [
380ULL ] ) ; t1195 [ 347ULL ] = - ( ( X [ 369ULL ] + t2239 ) / 2.0 * X [
65ULL ] - ( t2239 - X [ 369ULL ] ) / 2.0 * X [ 379ULL ] ) ; t1195 [ 348ULL ]
= - ( ( t2233 + t2234 ) * 0.001 ) ; t1195 [ 349ULL ] = - ( t3156 / 0.32 *
0.00031622776601683789 + t2098 ) ; t1195 [ 350ULL ] = - ( t3173 / 0.32 *
0.00031622776601683789 + intrm_sf_mf_1318 ) ; t1195 [ 351ULL ] = t1922 ;
t1195 [ 352ULL ] = zc_int290 ; U_idx_2 = X [ 367ULL ] * t2191 ; t1195 [
353ULL ] = - ( ( ( real_T ) ( M [ 19ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 /
( X [ 368ULL ] == 0.0 ? 1.0E-16 : X [ 368ULL ] ) ) * ( U_idx_2 / ( X [ 368ULL
] == 0.0 ? 1.0E-16 : X [ 368ULL ] ) ) * ( - X [ 307ULL ] / 0.32 ) * ( - X [
307ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_934 ) ; U_idx_2
= X [ 370ULL ] * t2191 ; t1195 [ 354ULL ] = - ( ( ( real_T ) ( M [ 20ULL ] !=
0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( X [ 371ULL ] == 0.0 ? 1.0E-16 : X [ 371ULL
] ) ) * ( U_idx_2 / ( X [ 371ULL ] == 0.0 ? 1.0E-16 : X [ 371ULL ] ) ) * ( X
[ 369ULL ] / 0.32 ) * ( X [ 369ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t2088 ) ; t1195 [ 355ULL ] = ( X [ 78ULL ] * t2191 / 461.523 - t2232 * X [
12ULL ] ) / 0.64309276860371423 ; t1195 [ 356ULL ] = X [ 81ULL ] * t2191 /
461.523 ; t1195 [ 357ULL ] = X [ 79ULL ] * t2231 ; t1195 [ 358ULL ] = X [
80ULL ] * t2191 / 259.836612622973 / 1.1422643670118826 ; t1195 [ 359ULL ] =
0.0 ; t1195 [ 360ULL ] = - ( ( ( real_T ) ( M [ 21ULL ] != 0 ) * 2.0 - 1.0 )
* ( t2527 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) ) * ( t2527 / ( X
[ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) ) * ( - X [ 307ULL ] / 0.32 ) * (
- X [ 307ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2247 ) ; t1195 [
361ULL ] = - t2186 ; t1195 [ 362ULL ] = - t2188 ; t1195 [ 363ULL ] = - ( ( (
real_T ) ( M [ 21ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2527 / ( X [ 47ULL ] == 0.0
? 1.0E-16 : X [ 47ULL ] ) ) * ( t2527 / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [
47ULL ] ) ) * ( X [ 369ULL ] / 0.32 ) * ( X [ 369ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2247 ) ; t1195 [ 364ULL ] = - t2186 ; t1195 [ 365ULL
] = - t2188 ; t1195 [ 366ULL ] = - ( ( - X [ 369ULL ] + t2241 ) / 2.0 *
zc_int305 - ( t2241 - ( - X [ 369ULL ] ) ) / 2.0 * X [ 385ULL ] ) ; t1195 [
367ULL ] = - ( ( - X [ 369ULL ] + t2240 ) / 2.0 * X [ 66ULL ] - ( t2240 - ( -
X [ 369ULL ] ) ) / 2.0 * X [ 387ULL ] ) ; t1195 [ 368ULL ] = - ( ( - X [
369ULL ] + t2239 ) / 2.0 * X [ 65ULL ] - ( t2239 - ( - X [ 369ULL ] ) ) / 2.0
* X [ 386ULL ] ) ; t1195 [ 369ULL ] = - ( ( - X [ 342ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5 ) / 2.0 *
zc_int306 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_convection_5
- ( - X [ 342ULL ] ) ) / 2.0 * X [ 388ULL ] ) ; t1195 [ 370ULL ] = - ( ( - X
[ 342ULL ] + intrm_sf_mf_1381 ) / 2.0 * X [ 322ULL ] - ( intrm_sf_mf_1381 - (
- X [ 342ULL ] ) ) / 2.0 * X [ 390ULL ] ) ; t1195 [ 371ULL ] = - ( ( - X [
342ULL ] + t2166 ) / 2.0 * X [ 321ULL ] - ( t2166 - ( - X [ 342ULL ] ) ) /
2.0 * X [ 389ULL ] ) ; t1195 [ 372ULL ] = - ( ( t2276 + t2160 ) * 0.001 ) ;
t1195 [ 373ULL ] = - ( t3201 / 0.32 * 0.00031622776601683789 + t2306 ) ;
t1195 [ 374ULL ] = - ( t3222 / 0.32 * 0.00031622776601683789 + t2316 ) ;
t1195 [ 375ULL ] = t1632 ; t1195 [ 376ULL ] = t1703 ; U_idx_2 = X [ 381ULL ]
* t2252 ; t1195 [ 377ULL ] = - ( ( ( real_T ) ( M [ 28ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_2 / ( X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) ) * (
U_idx_2 / ( X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL ] ) ) * ( - X [ 369ULL
] / 0.32 ) * ( - X [ 369ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1428 ) ; U_idx_2 = X [ 383ULL ] * t2252 ; t1195 [ 378ULL ] = - (
( ( real_T ) ( M [ 29ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_2 / ( X [ 384ULL ]
== 0.0 ? 1.0E-16 : X [ 384ULL ] ) ) * ( U_idx_2 / ( X [ 384ULL ] == 0.0 ?
1.0E-16 : X [ 384ULL ] ) ) * ( - X [ 342ULL ] / 0.32 ) * ( - X [ 342ULL ] /
0.32 ) / 2.0 * 9.999999999999999E-14 + t2302 ) ; t1195 [ 379ULL ] = ( X [
83ULL ] * t2252 / 461.523 - t2274 * X [ 15ULL ] ) / 0.64309276860371423 ;
t1195 [ 380ULL ] = X [ 86ULL ] * t2252 / 461.523 ; t1195 [ 381ULL ] = X [
84ULL ] * t2273 ; t1195 [ 382ULL ] = X [ 85ULL ] * t2252 / 259.836612622973 /
1.1422643670118826 ; t1195 [ 383ULL ] = 0.0 ; t1195 [ 384ULL ] = - ( ( (
real_T ) ( M [ 30ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2625 / ( X [ 48ULL ] == 0.0
? 1.0E-16 : X [ 48ULL ] ) ) * ( t2625 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [
48ULL ] ) ) * ( - X [ 369ULL ] / 0.32 ) * ( - X [ 369ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2278 ) ; t1195 [ 385ULL ] = - t2228 ; t1195 [ 386ULL
] = - t2251 ; t1195 [ 387ULL ] = - ( ( ( real_T ) ( M [ 30ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2625 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * (
t2625 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * ( - X [ 342ULL ] /
0.32 ) * ( - X [ 342ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2278 ) ;
t1195 [ 388ULL ] = - t2228 ; t1195 [ 389ULL ] = - t2251 ; t1195 [ 390ULL ] =
t1713 ; t1195 [ 391ULL ] = - ( t2318 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [
53ULL ] ) * 1000.0 ) ; t1195 [ 392ULL ] = - t1593_idx_0 ; t1195 [ 393ULL ] =
0.0 ; for ( b = 0 ; b < 394 ; b ++ ) { out . mX [ b ] = t1195 [ b ] ; } (
void ) LC ; ( void ) t4074 ; return 0 ; }
