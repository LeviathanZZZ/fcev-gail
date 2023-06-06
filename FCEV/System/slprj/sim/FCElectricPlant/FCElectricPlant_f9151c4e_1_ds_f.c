#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_f.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t4353 , NeDsMethodOutput * t4354 ) { ETTS0 ae_efOut ;
ETTS0 ai_efOut ; ETTS0 ar_efOut ; ETTS0 av_efOut ; ETTS0 bd_efOut ; ETTS0
bn_efOut ; ETTS0 bq_efOut ; ETTS0 bu_efOut ; ETTS0 c_efOut ; ETTS0 ck_efOut ;
ETTS0 cn_efOut ; ETTS0 cp_efOut ; ETTS0 ct_efOut ; ETTS0 df_efOut ; ETTS0
do_efOut ; ETTS0 ds_efOut ; ETTS0 e_efOut ; ETTS0 ec_efOut ; ETTS0 efOut ;
ETTS0 en_efOut ; ETTS0 er_efOut ; ETTS0 ev_efOut ; ETTS0 fd_efOut ; ETTS0
fq_efOut ; ETTS0 fu_efOut ; ETTS0 g_efOut ; ETTS0 gp_efOut ; ETTS0 gt_efOut ;
ETTS0 ho_efOut ; ETTS0 hs_efOut ; ETTS0 i_efOut ; ETTS0 ic_efOut ; ETTS0
ig_efOut ; ETTS0 in_efOut ; ETTS0 ir_efOut ; ETTS0 iv_efOut ; ETTS0 jf_efOut
; ETTS0 jh_efOut ; ETTS0 jk_efOut ; ETTS0 jl_efOut ; ETTS0 jq_efOut ; ETTS0
ju_efOut ; ETTS0 k_efOut ; ETTS0 km_efOut ; ETTS0 kp_efOut ; ETTS0 kv_efOut ;
ETTS0 lb_efOut ; ETTS0 lj_efOut ; ETTS0 lo_efOut ; ETTS0 ls_efOut ; ETTS0
m_efOut ; ETTS0 mc_efOut ; ETTS0 md_efOut ; ETTS0 me_efOut ; ETTS0 mi_efOut ;
ETTS0 mn_efOut ; ETTS0 mr_efOut ; ETTS0 mv_efOut ; ETTS0 nf_efOut ; ETTS0
nl_efOut ; ETTS0 nq_efOut ; ETTS0 nu_efOut ; ETTS0 om_efOut ; ETTS0 op_efOut
; ETTS0 po_efOut ; ETTS0 ps_efOut ; ETTS0 q_efOut ; ETTS0 qc_efOut ; ETTS0
qe_efOut ; ETTS0 qi_efOut ; ETTS0 qn_efOut ; ETTS0 qt_efOut ; ETTS0 rq_efOut
; ETTS0 ru_efOut ; ETTS0 rv_efOut ; ETTS0 sp_efOut ; ETTS0 sv_efOut ; ETTS0
t106 ; ETTS0 t16 ; ETTS0 t20 ; ETTS0 t40 ; ETTS0 t41 ; ETTS0 t55 ; ETTS0 t58
; ETTS0 t61 ; ETTS0 t68 ; ETTS0 t75 ; ETTS0 t81 ; ETTS0 t84 ; ETTS0 t85 ;
ETTS0 t89 ; ETTS0 t90 ; ETTS0 t95 ; ETTS0 to_efOut ; ETTS0 ts_efOut ; ETTS0
tv_efOut ; ETTS0 uc_efOut ; ETTS0 ue_efOut ; ETTS0 uf_efOut ; ETTS0 ug_efOut
; ETTS0 un_efOut ; ETTS0 uv_efOut ; ETTS0 vh_efOut ; ETTS0 vq_efOut ; ETTS0
vu_efOut ; ETTS0 vv_efOut ; ETTS0 wk_efOut ; ETTS0 wp_efOut ; ETTS0 x_efOut ;
ETTS0 xb_efOut ; ETTS0 xi_efOut ; ETTS0 xj_efOut ; ETTS0 xl_efOut ; ETTS0
xo_efOut ; ETTS0 xs_efOut ; ETTS0 ye_efOut ; ETTS0 yg_efOut ; ETTS0 yn_efOut
; PmRealVector out ; real_T X [ 440 ] ; real_T t1345 [ 440 ] ; real_T
nonscalar35 [ 7 ] ; real_T nonscalar34 [ 6 ] ; real_T nonscalar38 [ 5 ] ;
real_T nonscalar39 [ 3 ] ; real_T t1799 [ 2 ] ; real_T ab_efOut [ 1 ] ;
real_T ac_efOut [ 1 ] ; real_T ad_efOut [ 1 ] ; real_T af_efOut [ 1 ] ;
real_T ag_efOut [ 1 ] ; real_T ah_efOut [ 1 ] ; real_T aj_efOut [ 1 ] ;
real_T ak_efOut [ 1 ] ; real_T al_efOut [ 1 ] ; real_T am_efOut [ 1 ] ;
real_T an_efOut [ 1 ] ; real_T ao_efOut [ 1 ] ; real_T ap_efOut [ 1 ] ;
real_T aq_efOut [ 1 ] ; real_T as_efOut [ 1 ] ; real_T at_efOut [ 1 ] ;
real_T au_efOut [ 1 ] ; real_T aw_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T
bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T be_efOut [ 1 ] ; real_T
bf_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T bh_efOut [ 1 ] ; real_T
bi_efOut [ 1 ] ; real_T bj_efOut [ 1 ] ; real_T bk_efOut [ 1 ] ; real_T
bl_efOut [ 1 ] ; real_T bm_efOut [ 1 ] ; real_T bo_efOut [ 1 ] ; real_T
bp_efOut [ 1 ] ; real_T br_efOut [ 1 ] ; real_T bs_efOut [ 1 ] ; real_T
bt_efOut [ 1 ] ; real_T bv_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T
cc_efOut [ 1 ] ; real_T cd_efOut [ 1 ] ; real_T ce_efOut [ 1 ] ; real_T
cf_efOut [ 1 ] ; real_T cg_efOut [ 1 ] ; real_T ch_efOut [ 1 ] ; real_T
ci_efOut [ 1 ] ; real_T cj_efOut [ 1 ] ; real_T cl_efOut [ 1 ] ; real_T
cm_efOut [ 1 ] ; real_T co_efOut [ 1 ] ; real_T cq_efOut [ 1 ] ; real_T
cr_efOut [ 1 ] ; real_T cs_efOut [ 1 ] ; real_T cu_efOut [ 1 ] ; real_T
cv_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T
dc_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T
dg_efOut [ 1 ] ; real_T dh_efOut [ 1 ] ; real_T di_efOut [ 1 ] ; real_T
dj_efOut [ 1 ] ; real_T dk_efOut [ 1 ] ; real_T dl_efOut [ 1 ] ; real_T
dm_efOut [ 1 ] ; real_T dn_efOut [ 1 ] ; real_T dp_efOut [ 1 ] ; real_T
dq_efOut [ 1 ] ; real_T dr_efOut [ 1 ] ; real_T dt_efOut [ 1 ] ; real_T
du_efOut [ 1 ] ; real_T dv_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
ed_efOut [ 1 ] ; real_T ee_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T
eg_efOut [ 1 ] ; real_T eh_efOut [ 1 ] ; real_T ei_efOut [ 1 ] ; real_T
ej_efOut [ 1 ] ; real_T ek_efOut [ 1 ] ; real_T el_efOut [ 1 ] ; real_T
em_efOut [ 1 ] ; real_T eo_efOut [ 1 ] ; real_T ep_efOut [ 1 ] ; real_T
eq_efOut [ 1 ] ; real_T es_efOut [ 1 ] ; real_T et_efOut [ 1 ] ; real_T
eu_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T
fc_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ; real_T ff_efOut [ 1 ] ; real_T
fg_efOut [ 1 ] ; real_T fh_efOut [ 1 ] ; real_T fi_efOut [ 1 ] ; real_T
fj_efOut [ 1 ] ; real_T fk_efOut [ 1 ] ; real_T fl_efOut [ 1 ] ; real_T
fm_efOut [ 1 ] ; real_T fn_efOut [ 1 ] ; real_T fo_efOut [ 1 ] ; real_T
fp_efOut [ 1 ] ; real_T fr_efOut [ 1 ] ; real_T fs_efOut [ 1 ] ; real_T
ft_efOut [ 1 ] ; real_T fv_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T
gc_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T ge_efOut [ 1 ] ; real_T
gf_efOut [ 1 ] ; real_T gg_efOut [ 1 ] ; real_T gh_efOut [ 1 ] ; real_T
gi_efOut [ 1 ] ; real_T gj_efOut [ 1 ] ; real_T gk_efOut [ 1 ] ; real_T
gl_efOut [ 1 ] ; real_T gm_efOut [ 1 ] ; real_T gn_efOut [ 1 ] ; real_T
go_efOut [ 1 ] ; real_T gq_efOut [ 1 ] ; real_T gr_efOut [ 1 ] ; real_T
gs_efOut [ 1 ] ; real_T gu_efOut [ 1 ] ; real_T gv_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T
hd_efOut [ 1 ] ; real_T he_efOut [ 1 ] ; real_T hf_efOut [ 1 ] ; real_T
hg_efOut [ 1 ] ; real_T hh_efOut [ 1 ] ; real_T hi_efOut [ 1 ] ; real_T
hj_efOut [ 1 ] ; real_T hk_efOut [ 1 ] ; real_T hl_efOut [ 1 ] ; real_T
hm_efOut [ 1 ] ; real_T hn_efOut [ 1 ] ; real_T hp_efOut [ 1 ] ; real_T
hq_efOut [ 1 ] ; real_T hr_efOut [ 1 ] ; real_T ht_efOut [ 1 ] ; real_T
hu_efOut [ 1 ] ; real_T hv_efOut [ 1 ] ; real_T ib_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T ie_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T
ih_efOut [ 1 ] ; real_T ii_efOut [ 1 ] ; real_T ij_efOut [ 1 ] ; real_T
ik_efOut [ 1 ] ; real_T il_efOut [ 1 ] ; real_T im_efOut [ 1 ] ; real_T
io_efOut [ 1 ] ; real_T ip_efOut [ 1 ] ; real_T iq_efOut [ 1 ] ; real_T
is_efOut [ 1 ] ; real_T it_efOut [ 1 ] ; real_T iu_efOut [ 1 ] ; real_T
j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T
jd_efOut [ 1 ] ; real_T je_efOut [ 1 ] ; real_T jg_efOut [ 1 ] ; real_T
ji_efOut [ 1 ] ; real_T jj_efOut [ 1 ] ; real_T jm_efOut [ 1 ] ; real_T
jn_efOut [ 1 ] ; real_T jo_efOut [ 1 ] ; real_T jp_efOut [ 1 ] ; real_T
jr_efOut [ 1 ] ; real_T js_efOut [ 1 ] ; real_T jt_efOut [ 1 ] ; real_T
jv_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T
kd_efOut [ 1 ] ; real_T ke_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T
kg_efOut [ 1 ] ; real_T kh_efOut [ 1 ] ; real_T ki_efOut [ 1 ] ; real_T
kj_efOut [ 1 ] ; real_T kk_efOut [ 1 ] ; real_T kl_efOut [ 1 ] ; real_T
kn_efOut [ 1 ] ; real_T ko_efOut [ 1 ] ; real_T kq_efOut [ 1 ] ; real_T
kr_efOut [ 1 ] ; real_T ks_efOut [ 1 ] ; real_T kt_efOut [ 1 ] ; real_T
ku_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
ld_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T lf_efOut [ 1 ] ; real_T
lg_efOut [ 1 ] ; real_T lh_efOut [ 1 ] ; real_T li_efOut [ 1 ] ; real_T
lk_efOut [ 1 ] ; real_T ll_efOut [ 1 ] ; real_T lm_efOut [ 1 ] ; real_T
ln_efOut [ 1 ] ; real_T lp_efOut [ 1 ] ; real_T lq_efOut [ 1 ] ; real_T
lr_efOut [ 1 ] ; real_T lt_efOut [ 1 ] ; real_T lu_efOut [ 1 ] ; real_T
lv_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T
mg_efOut [ 1 ] ; real_T mh_efOut [ 1 ] ; real_T mj_efOut [ 1 ] ; real_T
mk_efOut [ 1 ] ; real_T ml_efOut [ 1 ] ; real_T mm_efOut [ 1 ] ; real_T
mo_efOut [ 1 ] ; real_T mp_efOut [ 1 ] ; real_T mq_efOut [ 1 ] ; real_T
ms_efOut [ 1 ] ; real_T mt_efOut [ 1 ] ; real_T mu_efOut [ 1 ] ; real_T
n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T
nd_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T
nh_efOut [ 1 ] ; real_T ni_efOut [ 1 ] ; real_T nj_efOut [ 1 ] ; real_T
nk_efOut [ 1 ] ; real_T nm_efOut [ 1 ] ; real_T nn_efOut [ 1 ] ; real_T
no_efOut [ 1 ] ; real_T np_efOut [ 1 ] ; real_T nr_efOut [ 1 ] ; real_T
ns_efOut [ 1 ] ; real_T nt_efOut [ 1 ] ; real_T nv_efOut [ 1 ] ; real_T
o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T
od_efOut [ 1 ] ; real_T oe_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T
og_efOut [ 1 ] ; real_T oh_efOut [ 1 ] ; real_T oi_efOut [ 1 ] ; real_T
oj_efOut [ 1 ] ; real_T ok_efOut [ 1 ] ; real_T ol_efOut [ 1 ] ; real_T
on_efOut [ 1 ] ; real_T oo_efOut [ 1 ] ; real_T oq_efOut [ 1 ] ; real_T
or_efOut [ 1 ] ; real_T os_efOut [ 1 ] ; real_T ot_efOut [ 1 ] ; real_T
ou_efOut [ 1 ] ; real_T ov_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T
pb_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T
pe_efOut [ 1 ] ; real_T pf_efOut [ 1 ] ; real_T pg_efOut [ 1 ] ; real_T
ph_efOut [ 1 ] ; real_T pi_efOut [ 1 ] ; real_T pj_efOut [ 1 ] ; real_T
pk_efOut [ 1 ] ; real_T pl_efOut [ 1 ] ; real_T pm_efOut [ 1 ] ; real_T
pn_efOut [ 1 ] ; real_T pp_efOut [ 1 ] ; real_T pq_efOut [ 1 ] ; real_T
pr_efOut [ 1 ] ; real_T pt_efOut [ 1 ] ; real_T pu_efOut [ 1 ] ; real_T
pv_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T
qf_efOut [ 1 ] ; real_T qg_efOut [ 1 ] ; real_T qh_efOut [ 1 ] ; real_T
qj_efOut [ 1 ] ; real_T qk_efOut [ 1 ] ; real_T ql_efOut [ 1 ] ; real_T
qm_efOut [ 1 ] ; real_T qo_efOut [ 1 ] ; real_T qp_efOut [ 1 ] ; real_T
qq_efOut [ 1 ] ; real_T qr_efOut [ 1 ] ; real_T qs_efOut [ 1 ] ; real_T
qu_efOut [ 1 ] ; real_T qv_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T
re_efOut [ 1 ] ; real_T rf_efOut [ 1 ] ; real_T rg_efOut [ 1 ] ; real_T
rh_efOut [ 1 ] ; real_T ri_efOut [ 1 ] ; real_T rj_efOut [ 1 ] ; real_T
rk_efOut [ 1 ] ; real_T rl_efOut [ 1 ] ; real_T rm_efOut [ 1 ] ; real_T
rn_efOut [ 1 ] ; real_T ro_efOut [ 1 ] ; real_T rp_efOut [ 1 ] ; real_T
rr_efOut [ 1 ] ; real_T rs_efOut [ 1 ] ; real_T rt_efOut [ 1 ] ; real_T
s_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T
sd_efOut [ 1 ] ; real_T se_efOut [ 1 ] ; real_T sf_efOut [ 1 ] ; real_T
sg_efOut [ 1 ] ; real_T sh_efOut [ 1 ] ; real_T si_efOut [ 1 ] ; real_T
sj_efOut [ 1 ] ; real_T sk_efOut [ 1 ] ; real_T sl_efOut [ 1 ] ; real_T
sm_efOut [ 1 ] ; real_T sn_efOut [ 1 ] ; real_T so_efOut [ 1 ] ; real_T
sq_efOut [ 1 ] ; real_T sr_efOut [ 1 ] ; real_T ss_efOut [ 1 ] ; real_T
st_efOut [ 1 ] ; real_T su_efOut [ 1 ] ; real_T t1325 [ 1 ] ; real_T t1789 [
1 ] ; real_T t1790 [ 1 ] ; real_T t1791 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T
tb_efOut [ 1 ] ; real_T tc_efOut [ 1 ] ; real_T td_efOut [ 1 ] ; real_T
te_efOut [ 1 ] ; real_T tf_efOut [ 1 ] ; real_T tg_efOut [ 1 ] ; real_T
th_efOut [ 1 ] ; real_T ti_efOut [ 1 ] ; real_T tj_efOut [ 1 ] ; real_T
tk_efOut [ 1 ] ; real_T tl_efOut [ 1 ] ; real_T tm_efOut [ 1 ] ; real_T
tn_efOut [ 1 ] ; real_T tp_efOut [ 1 ] ; real_T tq_efOut [ 1 ] ; real_T
tr_efOut [ 1 ] ; real_T tt_efOut [ 1 ] ; real_T tu_efOut [ 1 ] ; real_T
u_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T
uh_efOut [ 1 ] ; real_T ui_efOut [ 1 ] ; real_T uj_efOut [ 1 ] ; real_T
uk_efOut [ 1 ] ; real_T ul_efOut [ 1 ] ; real_T um_efOut [ 1 ] ; real_T
uo_efOut [ 1 ] ; real_T up_efOut [ 1 ] ; real_T uq_efOut [ 1 ] ; real_T
ur_efOut [ 1 ] ; real_T us_efOut [ 1 ] ; real_T ut_efOut [ 1 ] ; real_T
uu_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T
vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T ve_efOut [ 1 ] ; real_T
vf_efOut [ 1 ] ; real_T vg_efOut [ 1 ] ; real_T vi_efOut [ 1 ] ; real_T
vj_efOut [ 1 ] ; real_T vk_efOut [ 1 ] ; real_T vl_efOut [ 1 ] ; real_T
vm_efOut [ 1 ] ; real_T vn_efOut [ 1 ] ; real_T vo_efOut [ 1 ] ; real_T
vp_efOut [ 1 ] ; real_T vr_efOut [ 1 ] ; real_T vs_efOut [ 1 ] ; real_T
vt_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T
wc_efOut [ 1 ] ; real_T wd_efOut [ 1 ] ; real_T we_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T wg_efOut [ 1 ] ; real_T wh_efOut [ 1 ] ; real_T
wi_efOut [ 1 ] ; real_T wj_efOut [ 1 ] ; real_T wl_efOut [ 1 ] ; real_T
wm_efOut [ 1 ] ; real_T wn_efOut [ 1 ] ; real_T wo_efOut [ 1 ] ; real_T
wq_efOut [ 1 ] ; real_T wr_efOut [ 1 ] ; real_T ws_efOut [ 1 ] ; real_T
wt_efOut [ 1 ] ; real_T wu_efOut [ 1 ] ; real_T wv_efOut [ 1 ] ; real_T
xc_efOut [ 1 ] ; real_T xd_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T
xf_efOut [ 1 ] ; real_T xg_efOut [ 1 ] ; real_T xh_efOut [ 1 ] ; real_T
xk_efOut [ 1 ] ; real_T xm_efOut [ 1 ] ; real_T xn_efOut [ 1 ] ; real_T
xp_efOut [ 1 ] ; real_T xq_efOut [ 1 ] ; real_T xr_efOut [ 1 ] ; real_T
xt_efOut [ 1 ] ; real_T xu_efOut [ 1 ] ; real_T xv_efOut [ 1 ] ; real_T
y_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T
yd_efOut [ 1 ] ; real_T yf_efOut [ 1 ] ; real_T yh_efOut [ 1 ] ; real_T
yi_efOut [ 1 ] ; real_T yj_efOut [ 1 ] ; real_T yk_efOut [ 1 ] ; real_T
yl_efOut [ 1 ] ; real_T ym_efOut [ 1 ] ; real_T yo_efOut [ 1 ] ; real_T
yp_efOut [ 1 ] ; real_T yq_efOut [ 1 ] ; real_T yr_efOut [ 1 ] ; real_T
ys_efOut [ 1 ] ; real_T yt_efOut [ 1 ] ; real_T yu_efOut [ 1 ] ; real_T
yv_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_g_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_w_I ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ;
real_T U_idx_9 ; real_T intrm_sf_mf_1050 ; real_T intrm_sf_mf_1060 ; real_T
intrm_sf_mf_1088 ; real_T intrm_sf_mf_1186 ; real_T intrm_sf_mf_1209 ; real_T
intrm_sf_mf_1210 ; real_T intrm_sf_mf_1234 ; real_T intrm_sf_mf_1247 ; real_T
intrm_sf_mf_1258 ; real_T intrm_sf_mf_1259 ; real_T intrm_sf_mf_1293 ; real_T
intrm_sf_mf_1383 ; real_T intrm_sf_mf_1433 ; real_T intrm_sf_mf_154 ; real_T
intrm_sf_mf_201 ; real_T intrm_sf_mf_384 ; real_T intrm_sf_mf_412 ; real_T
intrm_sf_mf_425 ; real_T intrm_sf_mf_436 ; real_T intrm_sf_mf_465 ; real_T
intrm_sf_mf_468 ; real_T intrm_sf_mf_474 ; real_T intrm_sf_mf_477 ; real_T
intrm_sf_mf_522 ; real_T intrm_sf_mf_55 ; real_T intrm_sf_mf_626 ; real_T
intrm_sf_mf_638 ; real_T intrm_sf_mf_676 ; real_T intrm_sf_mf_810 ; real_T
intrm_sf_mf_825 ; real_T intrm_sf_mf_834 ; real_T intrm_sf_mf_863 ; real_T
intrm_sf_mf_971 ; real_T intrm_sf_mf_973 ; real_T piece118 ; real_T piece14 ;
real_T piece154 ; real_T piece170 ; real_T piece173 ; real_T piece2 ; real_T
piece20 ; real_T piece231 ; real_T piece233 ; real_T piece255 ; real_T
piece267 ; real_T piece96 ; real_T t110 ; real_T t124 ; real_T t129 ; real_T
t131 ; real_T t133 ; real_T t1768_idx_0 ; real_T t1785_idx_0 ; real_T t1809 ;
real_T t1814 ; real_T t1817 ; real_T t1818 ; real_T t1822 ; real_T t1825 ;
real_T t1830 ; real_T t1833 ; real_T t1834 ; real_T t1836 ; real_T t1854 ;
real_T t1869 ; real_T t1884 ; real_T t1900 ; real_T t1901 ; real_T t1902 ;
real_T t1903 ; real_T t1904 ; real_T t1905 ; real_T t1906 ; real_T t1907 ;
real_T t1908 ; real_T t1910 ; real_T t1914 ; real_T t1915 ; real_T t1916 ;
real_T t1917 ; real_T t1919 ; real_T t1920 ; real_T t1922 ; real_T t1924 ;
real_T t1925 ; real_T t1926 ; real_T t1927 ; real_T t1930 ; real_T t1932 ;
real_T t1933 ; real_T t1934 ; real_T t1935 ; real_T t1937 ; real_T t1938 ;
real_T t1940 ; real_T t1942 ; real_T t1944 ; real_T t1945 ; real_T t1946 ;
real_T t1953 ; real_T t1954 ; real_T t1957 ; real_T t1961 ; real_T t1962 ;
real_T t1964 ; real_T t1965 ; real_T t1966 ; real_T t1968 ; real_T t1969 ;
real_T t1971 ; real_T t1972 ; real_T t1974 ; real_T t1975 ; real_T t1978 ;
real_T t1979 ; real_T t1980 ; real_T t1981 ; real_T t1982 ; real_T t1983 ;
real_T t1984 ; real_T t1985 ; real_T t1987 ; real_T t1988 ; real_T t1989 ;
real_T t1990 ; real_T t1991 ; real_T t1992 ; real_T t1993 ; real_T t1994 ;
real_T t1995 ; real_T t1997 ; real_T t1998 ; real_T t1999 ; real_T t2001 ;
real_T t2002 ; real_T t2003 ; real_T t2004 ; real_T t2005 ; real_T t2007 ;
real_T t2009 ; real_T t2011 ; real_T t2013 ; real_T t2014 ; real_T t2015 ;
real_T t2016 ; real_T t2017 ; real_T t2018 ; real_T t2019 ; real_T t2021 ;
real_T t2023 ; real_T t2026 ; real_T t2029 ; real_T t2031 ; real_T t2032 ;
real_T t2033 ; real_T t2034 ; real_T t2035 ; real_T t2037 ; real_T t2038 ;
real_T t2039 ; real_T t2041 ; real_T t2042 ; real_T t2043 ; real_T t2044 ;
real_T t2045 ; real_T t2047 ; real_T t2048 ; real_T t2050 ; real_T t2052 ;
real_T t2053 ; real_T t2054 ; real_T t2055 ; real_T t2056 ; real_T t2057 ;
real_T t2058 ; real_T t2060 ; real_T t2064 ; real_T t2065 ; real_T t2067 ;
real_T t2072 ; real_T t2073 ; real_T t2074 ; real_T t2076 ; real_T t2077 ;
real_T t2079 ; real_T t2080 ; real_T t2081 ; real_T t2083 ; real_T t2084 ;
real_T t2086 ; real_T t2092 ; real_T t2093 ; real_T t2094 ; real_T t2096 ;
real_T t2098 ; real_T t2100 ; real_T t2103 ; real_T t2105 ; real_T t2106 ;
real_T t2107 ; real_T t2109 ; real_T t2110 ; real_T t2113 ; real_T t2114 ;
real_T t2115 ; real_T t2117 ; real_T t2118 ; real_T t2121 ; real_T t2122 ;
real_T t2124 ; real_T t2126 ; real_T t2127 ; real_T t2128 ; real_T t2129 ;
real_T t2130 ; real_T t2132 ; real_T t2134 ; real_T t2136 ; real_T t2137 ;
real_T t2138 ; real_T t2140 ; real_T t2141 ; real_T t2142 ; real_T t2143 ;
real_T t2145 ; real_T t2146 ; real_T t2147 ; real_T t2148 ; real_T t2150 ;
real_T t2151 ; real_T t2153 ; real_T t2155 ; real_T t2156 ; real_T t2157 ;
real_T t2158 ; real_T t2162 ; real_T t2165 ; real_T t2174 ; real_T t2177 ;
real_T t2179 ; real_T t2180 ; real_T t2182 ; real_T t2183 ; real_T t2184 ;
real_T t2186 ; real_T t2187 ; real_T t2188 ; real_T t2190 ; real_T t2191 ;
real_T t2193 ; real_T t2195 ; real_T t2196 ; real_T t2199 ; real_T t2200 ;
real_T t2207 ; real_T t2209 ; real_T t2211 ; real_T t2214 ; real_T t2217 ;
real_T t2218 ; real_T t2220 ; real_T t2221 ; real_T t2226 ; real_T t2229 ;
real_T t2231 ; real_T t2233 ; real_T t2240 ; real_T t2241 ; real_T t2243 ;
real_T t2244 ; real_T t2245 ; real_T t2246 ; real_T t2248 ; real_T t2249 ;
real_T t2250 ; real_T t2251 ; real_T t2255 ; real_T t2256 ; real_T t2257 ;
real_T t2259 ; real_T t2263 ; real_T t2264 ; real_T t2265 ; real_T t2266 ;
real_T t2267 ; real_T t2271 ; real_T t2272 ; real_T t2273 ; real_T t2274 ;
real_T t2276 ; real_T t2277 ; real_T t2278 ; real_T t2281 ; real_T t2282 ;
real_T t2285 ; real_T t2286 ; real_T t2287 ; real_T t2288 ; real_T t2289 ;
real_T t2290 ; real_T t2291 ; real_T t2292 ; real_T t2303 ; real_T t2305 ;
real_T t2306 ; real_T t2308 ; real_T t2309 ; real_T t2310 ; real_T t2311 ;
real_T t2312 ; real_T t2313 ; real_T t2314 ; real_T t2315 ; real_T t2321 ;
real_T t2322 ; real_T t2323 ; real_T t2325 ; real_T t2327 ; real_T t2332 ;
real_T t2336 ; real_T t2343 ; real_T t2344 ; real_T t2346 ; real_T t2348 ;
real_T t2349 ; real_T t2350 ; real_T t2353 ; real_T t2361 ; real_T t2363 ;
real_T t2367 ; real_T t2368 ; real_T t2369 ; real_T t2370 ; real_T t2371 ;
real_T t2373 ; real_T t2374 ; real_T t2375 ; real_T t2377 ; real_T t2378 ;
real_T t2379 ; real_T t2380 ; real_T t2381 ; real_T t2382 ; real_T t2383 ;
real_T t2384 ; real_T t2394 ; real_T t2398 ; real_T t2400 ; real_T t2401 ;
real_T t2402 ; real_T t2405 ; real_T t2407 ; real_T t2414 ; real_T t2415 ;
real_T t2422 ; real_T t2424 ; real_T t2425 ; real_T t2426 ; real_T t2430 ;
real_T t2432 ; real_T t2434 ; real_T t2435 ; real_T t2437 ; real_T t2440 ;
real_T t2441 ; real_T t2442 ; real_T t2443 ; real_T t2445 ; real_T t2446 ;
real_T t2448 ; real_T t2450 ; real_T t2452 ; real_T t2453 ; real_T t2456 ;
real_T t2457 ; real_T t2458 ; real_T t2459 ; real_T t2460 ; real_T t2461 ;
real_T t2462 ; real_T t2463 ; real_T t2465 ; real_T t2467 ; real_T t2468 ;
real_T t2470 ; real_T t2471 ; real_T t2472 ; real_T t2473 ; real_T t2475 ;
real_T t2478 ; real_T t2484 ; real_T t2485 ; real_T t2487 ; real_T t2488 ;
real_T t2490 ; real_T t2491 ; real_T t2492 ; real_T t2493 ; real_T t2495 ;
real_T t2496 ; real_T t2502 ; real_T t2503 ; real_T t2504 ; real_T t2509 ;
real_T t2511 ; real_T t2515 ; real_T t2516 ; real_T t2517 ; real_T t2518 ;
real_T t2520 ; real_T t2521 ; real_T t2522 ; real_T t2523 ; real_T t2524 ;
real_T t2525 ; real_T t2526 ; real_T t2527 ; real_T t2528 ; real_T t2529 ;
real_T t2530 ; real_T t2531 ; real_T t2532 ; real_T t2534 ; real_T t2535 ;
real_T t2537 ; real_T t2538 ; real_T t2540 ; real_T t2541 ; real_T t2543 ;
real_T t2544 ; real_T t2545 ; real_T t2548 ; real_T t2550 ; real_T t2553 ;
real_T t2554 ; real_T t2555 ; real_T t2559 ; real_T t2561 ; real_T t2562 ;
real_T t2565 ; real_T t2566 ; real_T t2568 ; real_T t2569 ; real_T t2571 ;
real_T t2572 ; real_T t2573 ; real_T t2577 ; real_T t2579 ; real_T t2580 ;
real_T t2582 ; real_T t2583 ; real_T t2585 ; real_T t2586 ; real_T t2587 ;
real_T t2588 ; real_T t2589 ; real_T t2590 ; real_T t2599 ; real_T t2600 ;
real_T t2602 ; real_T t2610 ; real_T t2611 ; real_T t2612 ; real_T t2613 ;
real_T t2618 ; real_T t2662 ; real_T t2668 ; real_T t2691 ; real_T t2694 ;
real_T t2700 ; real_T t2704 ; real_T t2705 ; real_T t2709 ; real_T t2712 ;
real_T t2793 ; real_T t2797 ; real_T t2799 ; real_T t2801 ; real_T t2804 ;
real_T t2813 ; real_T t3048 ; real_T t3134 ; real_T t3145 ; real_T t3149 ;
real_T t3165 ; real_T t3168 ; real_T t3174 ; real_T t3194 ; real_T t3207 ;
real_T t3209 ; real_T t3211 ; real_T t3241 ; real_T t3252 ; real_T t3267 ;
real_T t3274 ; real_T t3284 ; real_T t3289 ; real_T t3303 ; real_T t3316 ;
real_T t3345 ; real_T t3352 ; real_T t3369 ; real_T t3383 ; real_T t3384 ;
real_T t3397 ; real_T t3410 ; real_T t3411 ; real_T t3427 ; real_T t3435 ;
real_T t3460 ; real_T t3472 ; real_T t3516 ; real_T t3520 ; real_T t3534 ;
real_T t3555 ; real_T t3569 ; real_T t3570 ; real_T t3571 ; real_T t3591 ;
real_T t3596 ; real_T t3597 ; real_T t3598 ; real_T t3603 ; real_T t3633 ;
real_T t3909 ; real_T t3913 ; real_T t3925 ; real_T t3927 ; real_T t3928 ;
real_T t4160 ; real_T t4163 ; real_T t4246 ; real_T t4247 ; real_T t4352 ;
real_T zc_int102 ; real_T zc_int103 ; real_T zc_int107 ; real_T zc_int177 ;
real_T zc_int208 ; real_T zc_int227 ; real_T zc_int231 ; real_T zc_int239 ;
real_T zc_int242 ; real_T zc_int260 ; real_T zc_int275 ; real_T zc_int281 ;
real_T zc_int286 ; real_T zc_int320 ; real_T zc_int38 ; real_T zc_int43 ;
real_T zc_int48 ; real_T zc_int49 ; real_T zc_int50 ; real_T zc_int58 ;
real_T zc_int91 ; size_t t1320 [ 1 ] ; size_t t1323 [ 1 ] ; size_t t1329 [ 1
] ; size_t t139 [ 1 ] ; size_t t1784 [ 1 ] ; size_t t837 [ 1 ] ; size_t t1792
; size_t t1793 ; size_t t1794 ; int32_T M [ 231 ] ; int32_T b ; for ( b = 0 ;
b < 231 ; b ++ ) { M [ b ] = t4353 -> mM . mX [ b ] ; } U_idx_0 = t4353 -> mU
. mX [ 0 ] ; U_idx_1 = t4353 -> mU . mX [ 1 ] ; U_idx_2 = t4353 -> mU . mX [
2 ] ; U_idx_3 = t4353 -> mU . mX [ 3 ] ; U_idx_4 = t4353 -> mU . mX [ 4 ] ;
U_idx_5 = t4353 -> mU . mX [ 5 ] ; U_idx_6 = t4353 -> mU . mX [ 6 ] ; U_idx_7
= t4353 -> mU . mX [ 7 ] ; U_idx_8 = t4353 -> mU . mX [ 8 ] ; U_idx_9 = t4353
-> mU . mX [ 9 ] ; U_idx_10 = t4353 -> mU . mX [ 10 ] ; for ( b = 0 ; b < 440
; b ++ ) { X [ b ] = t4353 -> mX . mX [ b ] ; } out = t4354 -> mF ;
nonscalar34 [ 0 ] = 0.0 ; nonscalar34 [ 1 ] = 0.2 ; nonscalar34 [ 2 ] = 0.4 ;
nonscalar34 [ 3 ] = 0.6 ; nonscalar34 [ 4 ] = 0.8 ; nonscalar34 [ 5 ] = 1.0 ;
nonscalar35 [ 0 ] = 243.1 ; nonscalar35 [ 1 ] = 253.1 ; nonscalar35 [ 2 ] =
263.1 ; nonscalar35 [ 3 ] = 273.1 ; nonscalar35 [ 4 ] = 283.1 ; nonscalar35 [
5 ] = 298.1 ; nonscalar35 [ 6 ] = 313.1 ; nonscalar38 [ 0 ] = 1.0 ;
nonscalar38 [ 1 ] = 1.25 ; nonscalar38 [ 2 ] = 1.5 ; nonscalar38 [ 3 ] = 1.75
; nonscalar38 [ 4 ] = 2.0 ; nonscalar39 [ 0 ] = 0.0 ; nonscalar39 [ 1 ] =
188.49555921538757 ; nonscalar39 [ 2 ] = 376.99111843077515 ; U_idx_0 = - X [
57ULL ] - U_idx_0 ; t4163 = ( ( ( real_T ) ( U_idx_0 >= 0.0 ) * U_idx_0 *
1000.0 + ( real_T ) ( U_idx_0 < 0.0 ) * X [ 59ULL ] ) - 0.9 ) /
0.099999999999999978 ; if ( ( real_T ) ( U_idx_0 >= 0.0 ) * U_idx_0 * 1000.0
+ ( real_T ) ( U_idx_0 < 0.0 ) * X [ 59ULL ] <= 0.9 ) { t4163 = 0.0 ; } else
{ t4163 = ( real_T ) ( U_idx_0 >= 0.0 ) * U_idx_0 * 1000.0 + ( real_T ) (
U_idx_0 < 0.0 ) * X [ 59ULL ] >= 1.0 ? 1.0 : t4163 * t4163 * 3.0 - t4163 *
t4163 * t4163 * 2.0 ; } t3913 = X [ 65ULL ] * 1.0E-9 + X [ 4ULL ] ; t3925 = (
( X [ 4ULL ] * - 1.0E-6 + X [ 65ULL ] * - 1.0000000000000011 ) + X [ 66ULL ]
* - 1.0E-6 ) + X [ 5ULL ] ; if ( X [ 96ULL ] < 0.0 ) { piece233 = X [ 96ULL ]
* 17.81 + 0.043 ; } else if ( X [ 96ULL ] <= 1.0 ) { piece233 = ( ( X [ 96ULL
] * 17.81 + 0.043 ) - X [ 96ULL ] * X [ 96ULL ] * 39.85 ) + X [ 96ULL ] * X [
96ULL ] * X [ 96ULL ] * 36.0 ; } else { piece233 = ( X [ 96ULL ] - 1.0 ) *
1.4 + 14.003 ; } if ( X [ 97ULL ] < 0.0 ) { t3928 = X [ 97ULL ] * 17.81 +
0.043 ; } else if ( X [ 97ULL ] <= 1.0 ) { t3928 = ( ( X [ 97ULL ] * 17.81 +
0.043 ) - X [ 97ULL ] * X [ 97ULL ] * 39.85 ) + X [ 97ULL ] * X [ 97ULL ] * X
[ 97ULL ] * 36.0 ; } else { t3928 = ( X [ 97ULL ] - 1.0 ) * 1.4 + 14.003 ; }
if ( X [ 66ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = - X [ 66ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = 0.0 ; }
t1900 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 *
0.20177105219743391 / 192970.66424 ; if ( piece233 >= 0.0 ) { t3927 =
piece233 * piece233 * 0.0029 + piece233 * 0.05 ; } else { t3927 = piece233 *
0.05 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 = (
X [ 78ULL ] + X [ 83ULL ] ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 = ( X [ 88ULL
] + X [ 93ULL ] ) / 2.0 ; t1325 [ 0 ] = 323.15 ; t1323 [ 0 ] = 52ULL ; t139 [
0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , &
efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField2 , & t1325 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t81 = efOut ; tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t81
. mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1325 [ 0 ] = b_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 =
pmf_exp ( pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 ) - t1325 [
0ULL ] ) ; t1818 = X [ 96ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 = pmf_exp (
pmf_log ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 ) -
t1325 [ 0ULL ] ) ; piece255 = X [ 97ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 ) ;
if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 ) { zc_int320
= 3.577951275483784E-6 ; t1901 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 * t1818 *
1.58E-18 / ( zc_int320 == 0.0 ? 1.0E-16 : zc_int320 ) ; } else { zc_int227 =
3.577951275483784E-6 ; t1901 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 * piece255 *
1.58E-18 / ( zc_int227 == 0.0 ? 1.0E-16 : zc_int227 ) ; } t4247 = ( ( (
piece233 * 1818.181818181818 - t3928 * 1818.181818181818 ) *
2.0470329271173142E-10 / 0.000125 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 * t3927 /
96485.33212 ) + t1901 ) * 0.20177105219743391 ; t4246 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 *
0.022577863652674921 / 192970.66424 ; t3927 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 *
0.3583866814737065 / 385941.32848 ; piece233 = ( piece233 + t3928 ) / 2.0 ;
if ( piece233 >= 1.0 ) { t3928 = piece233 * 0.005139 - 0.00326 ; } else {
t3928 = 0.0018790000000000005 ; } piece233 = t3928 * 1.2954698564516058 ;
t3928 = 0.000125 / ( piece233 == 0.0 ? 1.0E-16 : piece233 ) ; t1901 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 * ( ( X [
87ULL ] + X [ 92ULL ] ) / 2.0 ) ; piece233 = t1901 >= 1.0E-9 ? t1901 : 1.0E-6
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 * ( ( X [
76ULL ] + X [ 81ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 * 1.0E-5 >=
1.0E-9 ) { t1901 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 * 1.0E-5 ; }
else { t1901 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 * ( ( X [
86ULL ] + X [ 91ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 * 1.0E-5 >=
1.0E-9 ) { t1809 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 * 1.0E-5 ; }
else { t1809 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 = ( X [ 82ULL
] - t1818 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 *
7.0000000000000007E-6 / 2686.8185950562192 ) / 0.00025 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 = ( piece255
- X [ 92ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 *
7.0000000000000007E-6 / 2686.8185950562192 ) / 0.00025 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 = pmf_log (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 ) *
0.019890651741126749 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 = 0.0 ; } if
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 <= 13986.0
) { t1814 = pmf_log ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 / 14000.0 ) ;
} else { t1814 = - 6.9077552789821359 - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 / 14000.0 -
0.999 ) / 0.0010000000000000009 ; } t4160 = t1814 * - 0.013923456218788726 ;
t1925 = pmf_sqrt ( t1809 ) * t1901 ; t1818 = pmf_log ( t1925 / ( piece233 ==
0.0 ? 1.0E-16 : piece233 ) ) * 0.013923456218788726 + 1.228891453185164 ;
piece255 = t3928 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 ; t1818 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 * ( ( ( t1818
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 ) -
piece255 * 0.01 ) - t4160 ) * 11.200000000000001 ; t1789 [ 0ULL ] = X [
100ULL ] >= 0.0 ? 323.15 : X [ 15ULL ] ; tlu2_linear_linear_prelookup ( &
c_efOut . mField0 [ 0ULL ] , & c_efOut . mField1 [ 0ULL ] , & c_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1789 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = c_efOut ;
tlu2_1d_linear_linear_value ( & d_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] ,
& t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1790 [ 0 ] = d_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = t1790 [
0ULL ] ; t1790 [ 0ULL ] = X [ 102ULL ] >= 0.0 ? 323.15 : X [ 9ULL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1790 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = e_efOut ; tlu2_1d_linear_linear_value ( & f_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1791 [ 0 ] = f_efOut [
0 ] ; t1901 = t1791 [ 0ULL ] ; t1791 [ 0ULL ] = X [ 104ULL ] >= 0.0 ? 323.15
: X [ 15ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] ,
& g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = g_efOut ; tlu2_1d_linear_linear_value ( &
h_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = h_efOut [ 0 ] ; t1809 = t1785_idx_0 ; t1791 [ 0ULL ] = X [
108ULL ] >= 0.0 ? 323.15 : X [ 9ULL ] ; tlu2_linear_linear_prelookup ( &
i_efOut . mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = i_efOut ;
tlu2_1d_linear_linear_value ( & j_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] ,
& t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = j_efOut [ 0 ] ; t1814 =
t1785_idx_0 ; t1817 = - X [ 100ULL ] + X [ 109ULL ] ; t1791 [ 0ULL ] = t1817
>= 0.0 ? 323.15 : X [ 15ULL ] ; tlu2_linear_linear_prelookup ( & k_efOut .
mField0 [ 0ULL ] , & k_efOut . mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323
[ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = k_efOut ; tlu2_1d_linear_linear_value (
& l_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = l_efOut [ 0 ] ; t3909 = t1785_idx_0 ; t1822 = pmf_sqrt (
X [ 126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 ) ; t1825 = pmf_sqrt ( X
[ 126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 ) ; t1830 = pmf_sqrt ( X [
126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 ) ; if ( X [ 131ULL ] <= 0.0
) { t1833 = 0.0 ; } else { t1833 = X [ 131ULL ] >= 1.0 ? 1.0 : X [ 131ULL ] ;
} if ( X [ 132ULL ] <= 0.0 ) { t1902 = 0.0 ; } else { t1902 = X [ 132ULL ] >=
1.0 ? 1.0 : X [ 132ULL ] ; } t1903 = ( ( ( 1.0 - t1833 ) - t1902 ) *
296.802103844292 + t1833 * 461.523 ) + t1902 * 4124.48151675695 ; if ( 1.0 -
X [ 131ULL ] >= 0.01 ) { t1904 = 1.0 - X [ 131ULL ] ; } else if ( 1.0 - X [
131ULL ] >= - 0.1 ) { t1904 = pmf_exp ( ( ( 1.0 - X [ 131ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t1904 = 1.6701700790245661E-7 ; } t1905 = - X [
138ULL ] + U_idx_2 * - 0.01 ; if ( X [ 21ULL ] <= 0.0 ) { t1906 = 0.0 ; }
else { t1906 = X [ 21ULL ] >= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <=
0.0 ) { t1907 = 0.0 ; } else { t1907 = X [ 22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ]
; } t1908 = ( ( ( 1.0 - t1906 ) - t1907 ) * 296.802103844292 + t1906 *
461.523 ) + t1907 * 4124.48151675695 ; zc_int320 = ( X [ 19ULL ] / ( X [
20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) - X [ 139ULL ] / ( X [ 140ULL ] ==
0.0 ? 1.0E-16 : X [ 140ULL ] ) ) * t1905 * t1908 / 7.8539816339744827E-5 ; if
( X [ 139ULL ] <= 216.59999999999997 ) { t1910 = 216.59999999999997 ; } else
{ t1910 = X [ 139ULL ] >= 623.15 ? 623.15 : X [ 139ULL ] ; } t1836 = t1910 *
t1910 ; zc_int227 = ( ( ( 1074.1165326382541 + t1910 * - 0.2214565261064077 )
+ t1836 * 0.00037212980109010952 ) * ( ( 1.0 - t1906 ) - t1907 ) + ( (
1479.6504774710445 + t1910 * 1.200211433705052 ) + t1836 * -
0.00038614513167842338 ) * t1906 ) + ( ( 12825.281119790017 + t1910 *
6.9647057412830984 ) + t1836 * - 0.007052486824683288 ) * t1907 ; t1933 =
zc_int227 - t1908 ; t1910 = zc_int227 / ( t1933 == 0.0 ? 1.0E-16 : t1933 ) ;
zc_int227 = pmf_sqrt ( zc_int320 * zc_int320 * 9.999999999999999E-14 + fabs (
X [ 139ULL ] * t1910 * t1908 ) * 1.0E-9 ) ; if ( X [ 141ULL ] <= 0.0 ) {
t1836 = 0.0 ; } else { t1836 = X [ 141ULL ] >= 1.0 ? 1.0 : X [ 141ULL ] ; }
if ( X [ 142ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = X [
142ULL ] >= 1.0 ? 1.0 : X [ 142ULL ] ; } t1791 [ 0ULL ] = X [ 19ULL ] ;
tlu2_linear_nearest_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t95 = m_efOut ; tlu2_1d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t95 .
mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = n_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t95 . mField0 [
0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = o_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = p_efOut [ 0 ] ; t1914 = (
( ( 1.0 - t1836 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ) *
t1785_idx_0 + U_idx_0 * t1836 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ; t1934 = X [
140ULL ] * X [ 140ULL ] * t1910 ; t1915 = - pmf_sqrt ( fabs ( t1934 / ( t1908
== 0.0 ? 1.0E-16 : t1908 ) / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] )
) ) * 7.8539816339744827E-5 ; if ( t1915 >= 0.0 ) { t1916 = t1915 * 100000.0
; } else { t1916 = - t1915 * 100000.0 ; } t1938 = t1914 *
7.8539816339744827E-5 ; t1917 = t1916 * 0.01 / ( t1938 == 0.0 ? 1.0E-16 :
t1938 ) ; t1940 = X [ 19ULL ] * t1908 ; piece14 = X [ 20ULL ] / ( t1940 ==
0.0 ? 1.0E-16 : t1940 ) ; t1942 = piece14 * 1.5707963267948965E-8 ; t1919 =
t1915 * t1914 * 35.2 / ( t1942 == 0.0 ? 1.0E-16 : t1942 ) ; t1920 = t1917 >=
1.0 ? t1917 : 1.0 ; zc_int43 = pmf_log10 ( 6.9 / ( t1920 == 0.0 ? 1.0E-16 :
t1920 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1920 == 0.0 ?
1.0E-16 : t1920 ) + 0.00017169489553429715 ) * 3.24 ; t1945 = piece14 *
1.2337005501361697E-10 ; t1916 = t1915 * t1916 * ( 1.0 / ( zc_int43 == 0.0 ?
1.0E-16 : zc_int43 ) ) * 0.55 / ( t1945 == 0.0 ? 1.0E-16 : t1945 ) ; t1920 =
( t1917 - 2000.0 ) / 2000.0 ; zc_int38 = t1920 * t1920 * 3.0 - t1920 * t1920
* t1920 * 2.0 ; if ( t1917 <= 2000.0 ) { t1920 = t1919 * 1.0E-5 ; } else if (
t1917 >= 4000.0 ) { t1920 = t1916 * 1.0E-5 ; } else { t1920 = ( ( 1.0 -
zc_int38 ) * t1919 + t1916 * zc_int38 ) * 1.0E-5 ; } zc_int227 = t1905 *
zc_int227 / 7.8539816339744827E-5 * 0.00031622776601683789 + t1920 ; t1916 =
X [ 116ULL ] - X [ 20ULL ] ; t1919 = - ( ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0
? 1.0E-16 : X [ 20ULL ] ) - X [ 143ULL ] / ( X [ 144ULL ] == 0.0 ? 1.0E-16 :
X [ 144ULL ] ) ) * X [ 126ULL ] * t1908 ) / 7.8539816339744827E-5 ; if ( X [
143ULL ] <= 216.59999999999997 ) { t1920 = 216.59999999999997 ; } else {
t1920 = X [ 143ULL ] >= 623.15 ? 623.15 : X [ 143ULL ] ; } t1922 = t1920 *
t1920 ; zc_int38 = ( ( ( 1074.1165326382541 + t1920 * - 0.2214565261064077 )
+ t1922 * 0.00037212980109010952 ) * ( ( 1.0 - t1906 ) - t1907 ) + ( (
1479.6504774710445 + t1920 * 1.200211433705052 ) + t1922 * -
0.00038614513167842338 ) * t1906 ) + ( ( 12825.281119790017 + t1920 *
6.9647057412830984 ) + t1922 * - 0.007052486824683288 ) * t1907 ; t1953 =
zc_int38 - t1908 ; t1920 = zc_int38 / ( t1953 == 0.0 ? 1.0E-16 : t1953 ) ;
zc_int38 = pmf_sqrt ( t1919 * t1919 * 9.999999999999999E-14 + fabs ( X [
143ULL ] * t1920 * t1908 ) * 1.0E-9 ) ; t1954 = X [ 144ULL ] * X [ 144ULL ] *
t1920 ; t1922 = - pmf_sqrt ( fabs ( t1954 / ( t1908 == 0.0 ? 1.0E-16 : t1908
) / ( X [ 143ULL ] == 0.0 ? 1.0E-16 : X [ 143ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t1922 >= 0.0 ) { intrm_sf_mf_55 = t1922 *
100000.0 ; } else { intrm_sf_mf_55 = - t1922 * 100000.0 ; } t1924 =
intrm_sf_mf_55 * 0.01 / ( t1938 == 0.0 ? 1.0E-16 : t1938 ) ; t1926 = t1922 *
t1914 * 35.2 / ( t1942 == 0.0 ? 1.0E-16 : t1942 ) ; t1927 = t1924 >= 1.0 ?
t1924 : 1.0 ; t1961 = pmf_log10 ( 6.9 / ( t1927 == 0.0 ? 1.0E-16 : t1927 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1927 == 0.0 ? 1.0E-16 : t1927
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_55 = t1922 * intrm_sf_mf_55
* ( 1.0 / ( t1961 == 0.0 ? 1.0E-16 : t1961 ) ) * 0.55 / ( t1945 == 0.0 ?
1.0E-16 : t1945 ) ; t1927 = ( t1924 - 2000.0 ) / 2000.0 ; t3633 = t1927 *
t1927 * 3.0 - t1927 * t1927 * t1927 * 2.0 ; if ( t1924 <= 2000.0 ) { t1927 =
t1926 * 1.0E-5 ; } else if ( t1924 >= 4000.0 ) { t1927 = intrm_sf_mf_55 *
1.0E-5 ; } else { t1927 = ( ( 1.0 - t3633 ) * t1926 + intrm_sf_mf_55 * t3633
) * 1.0E-5 ; } zc_int38 = - ( X [ 126ULL ] * zc_int38 ) /
7.8539816339744827E-5 * 0.00031622776601683789 + t1927 ; intrm_sf_mf_55 = X [
135ULL ] - X [ 20ULL ] ; t1791 [ 0ULL ] = X [ 19ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = q_efOut ; tlu2_1d_linear_linear_value ( & r_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = r_efOut [
0 ] ; t1926 = t1785_idx_0 ; tlu2_1d_linear_linear_value ( & s_efOut [ 0ULL ]
, & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0
= s_efOut [ 0 ] ; t1927 = t1785_idx_0 ; if ( 1.0 - X [ 21ULL ] >= 0.01 ) {
t1932 = 1.0 - X [ 21ULL ] ; } else if ( 1.0 - X [ 21ULL ] >= - 0.1 ) { t1932
= pmf_exp ( ( ( 1.0 - X [ 21ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1932
= 1.6701700790245661E-7 ; } t3633 = X [ 22ULL ] / ( t1932 == 0.0 ? 1.0E-16 :
t1932 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & t_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [
0ULL ] ) ; t1785_idx_0 = t_efOut [ 0 ] ; t1933 = pmf_exp ( pmf_log ( X [
20ULL ] * 100000.0 ) - t1785_idx_0 ) ; if ( t1933 >= 1.0 ) { t1968 = ( t1933
- 1.0 ) * 461.523 + t3633 ; t1935 = t3633 / ( t1968 == 0.0 ? 1.0E-16 : t1968
) ; } else { t1935 = 1.0 ; } U_idx_0 = t1935 * 0.01 ; t3633 = ( X [ 21ULL ] -
t1935 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; if ( X [ 21ULL ] - t1935
<= 0.0 ) { t3633 = 0.0 ; } else if ( X [ 21ULL ] - t1935 >= t1935 * 0.01 ) {
t3633 = X [ 21ULL ] - t1935 ; } else { t3633 = ( X [ 21ULL ] - t1935 ) * (
t3633 * t3633 * 3.0 - t3633 * t3633 * t3633 * 2.0 ) ; } piece14 = piece14 *
t3633 * 7.8539816339744827E-5 / 0.001 ; t3633 = ( t1926 - t1927 ) * piece14 ;
tlu2_1d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = u_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = v_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & w_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = w_efOut [ 0 ] ; t1927 =
( ( ( 1.0 - t1836 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ) *
t1785_idx_0 + U_idx_0 * t1836 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ; t1935 = ( X
[ 119ULL ] - X [ 19ULL ] ) * ( t1927 * 0.031415926535897927 / 0.01 ) ; if ( X
[ 137ULL ] <= 0.0 ) { t1937 = 0.0 ; } else { t1937 = X [ 137ULL ] >= 1.0 ?
1.0 : X [ 137ULL ] ; } if ( X [ 136ULL ] <= 0.0 ) { zc_int48 = 0.0 ; } else {
zc_int48 = X [ 136ULL ] >= 1.0 ? 1.0 : X [ 136ULL ] ; } zc_int43 = ( ( ( 1.0
- t1937 ) - zc_int48 ) * 296.802103844292 + t1937 * 461.523 ) + zc_int48 *
4124.48151675695 ; t1944 = X [ 137ULL ] * 461.523 / ( zc_int43 == 0.0 ?
1.0E-16 : zc_int43 ) ; if ( t1944 <= 0.0 ) { t1946 = 0.0 ; } else { t1946 =
t1944 >= 1.0 ? 1.0 : t1944 ; } t1944 = X [ 136ULL ] * 4124.48151675695 / (
zc_int43 == 0.0 ? 1.0E-16 : zc_int43 ) ; if ( t1944 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv = t1944 >= 1.0 ?
1.0 : t1944 ; } t1791 [ 0ULL ] = X [ 134ULL ] ; tlu2_linear_nearest_prelookup
( & x_efOut . mField0 [ 0ULL ] , & x_efOut . mField1 [ 0ULL ] , & x_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = x_efOut ;
tlu2_1d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = y_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ab_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ab_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = bb_efOut [ 0 ] ; t1944 =
( ( ( 1.0 - t1946 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ) * t1785_idx_0 +
U_idx_0 * t1946 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; t3928 = ( t1905 -
( - X [ 126ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( & cb_efOut [ 0ULL
] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = cb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & db_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = db_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & eb_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = eb_efOut [ 0 ] ; t1978 = ( ( ( ( ( 1.0 - t1946 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ) * t1785_idx_0 +
U_idx_0 * t1946 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ) + t1914 ) / 2.0 *
7.8539816339744827E-5 ; t1953 = - ( t3928 <= 0.0 ? t3928 : 0.0 ) * 0.01 / (
t1978 == 0.0 ? 1.0E-16 : t1978 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = t1953 >=
0.0 ? t1953 : - t1953 ; t1957 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 : 1000.0 ;
tlu2_1d_linear_nearest_value ( & fb_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = fb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gb_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = gb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hb_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = hb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total = ( ( ( 1.0 -
t1836 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ) *
t1785_idx_0 + U_idx_0 * t1836 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ;
tlu2_1d_linear_nearest_value ( & ib_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ib_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = jb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = kb_efOut [ 0 ] ; t1836 =
( ( ( 1.0 - t1946 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ) * t1785_idx_0 +
U_idx_0 * t1946 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; t1979 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total + t1836 ; if
( t1979 / 2.0 > 0.5 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total + t1836 ) /
2.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = 0.5 ; }
t1981 = pmf_log10 ( 6.9 / ( t1957 == 0.0 ? 1.0E-16 : t1957 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1957 == 0.0 ? 1.0E-16 : t1957
) + 0.00017169489553429715 ) * 3.24 ; t1946 = 1.0 / ( t1981 == 0.0 ? 1.0E-16
: t1981 ) ; t1983 = ( pmf_pow (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1946 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = ( t1957 -
1000.0 ) * ( t1946 / 8.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 / ( t1983 ==
0.0 ? 1.0E-16 : t1983 ) ; t1946 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 - 2000.0 ) /
2000.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv = t1946 *
t1946 * 3.0 - t1946 * t1946 * t1946 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 <= 2000.0 ) {
t1946 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 >= 4000.0 ) {
t1946 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ; }
else { t1946 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; } t1988 = t1979 /
2.0 ; if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 >
t1946 * 0.031415926535897927 / 7.8539816339744827E-5 / ( t1988 == 0.0 ?
1.0E-16 : t1988 ) / 30.0 ) { t1994 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total + t1836 ) /
2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = t1946
* 0.031415926535897927 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) /
7.8539816339744827E-5 / ( t1994 == 0.0 ? 1.0E-16 : t1994 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = 30.0 ; }
t1836 = ( X [ 119ULL ] - X [ 134ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = t1953 *
7.8539816339744827E-5 / 0.01 * ( t1979 / 2.0 ) * ( ( t1944 + t1927 ) / 2.0 )
* t1836 ; if ( X [ 118ULL ] <= 0.0 ) { t1836 = 0.0 ; } else { t1836 = X [
118ULL ] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [ 117ULL ] <= 0.0 ) { t1944 =
0.0 ; } else { t1944 = X [ 117ULL ] >= 1.0 ? 1.0 : X [ 117ULL ] ; } t1946 = (
( ( 1.0 - t1836 ) - t1944 ) * 296.802103844292 + t1836 * 461.523 ) + t1944 *
4124.48151675695 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv
= X [ 118ULL ] * 461.523 / ( t1946 == 0.0 ? 1.0E-16 : t1946 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv <= 0.0 ) { t1953 =
0.0 ; } else { t1953 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv = X [ 117ULL ] *
4124.48151675695 / ( t1946 == 0.0 ? 1.0E-16 : t1946 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; } t1791 [ 0ULL ]
= X [ 115ULL ] ; tlu2_linear_nearest_prelookup ( & lb_efOut . mField0 [ 0ULL
] , & lb_efOut . mField1 [ 0ULL ] , & lb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = lb_efOut ; tlu2_1d_linear_nearest_value ( &
mb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = mb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
nb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = nb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ob_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = ob_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv = ( ( ( 1.0 - t1953
) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) *
t1785_idx_0 + U_idx_0 * t1953 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ;
tlu2_1d_linear_nearest_value ( & pb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = pb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = qb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = rb_efOut [ 0 ] ; t1957 =
( ( ( 1.0 - t1953 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) *
t1785_idx_0 + U_idx_0 * t1953 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ; t1961 =
t3928 >= 0.0 ? t3928 : 0.0 ; tlu2_1d_linear_nearest_value ( & sb_efOut [ 0ULL
] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = sb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & tb_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = tb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ub_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = ub_efOut [ 0 ] ; t3928 = ( ( ( 1.0 - t1953 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) *
t1785_idx_0 + U_idx_0 * t1953 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ; t2002 = (
t1914 + t3928 ) / 2.0 * 7.8539816339744827E-5 ; t1953 = t1961 * 0.01 / (
t2002 == 0.0 ? 1.0E-16 : t2002 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = t1953 >=
0.0 ? t1953 : - t1953 ; t1961 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 : 1000.0 ;
t2003 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total ; if ( t2003
/ 2.0 > 0.5 ) { t1962 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total ) / 2.0 ; }
else { t1962 = 0.5 ; } t2005 = pmf_log10 ( 6.9 / ( t1961 == 0.0 ? 1.0E-16 :
t1961 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1961 == 0.0 ?
1.0E-16 : t1961 ) + 0.00017169489553429715 ) * 3.24 ; t1964 = 1.0 / ( t2005
== 0.0 ? 1.0E-16 : t2005 ) ; t2007 = ( pmf_pow ( t1962 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1964 / 8.0 ) * 12.7 + 1.0 ; t1961 = ( t1961 - 1000.0
) * ( t1964 / 8.0 ) * t1962 / ( t2007 == 0.0 ? 1.0E-16 : t2007 ) ; t1962 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 - 2000.0 ) /
2000.0 ; t1964 = t1962 * t1962 * 3.0 - t1962 * t1962 * t1962 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 <= 2000.0 ) {
t1962 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 >= 4000.0 ) {
t1962 = t1961 ; } else { t1962 = ( 1.0 - t1964 ) * 3.66 + t1961 * t1964 ; }
zc_int58 = t2003 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 > t1962 *
0.031415926535897927 / 7.8539816339744827E-5 / ( zc_int58 == 0.0 ? 1.0E-16 :
zc_int58 ) / 30.0 ) { t2018 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total ) / 2.0 ;
t1961 = t1962 * 0.031415926535897927 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) /
7.8539816339744827E-5 / ( t2018 == 0.0 ? 1.0E-16 : t2018 ) ; } else { t1961 =
30.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = (
X [ 119ULL ] - X [ 115ULL ] ) * ( 1.0 - pmf_exp ( - t1961 ) ) ; t1953 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 + t1953 *
7.8539816339744827E-5 / 0.01 * ( t2003 / 2.0 ) * ( ( t1957 + t1927 ) / 2.0 )
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = pmf_sqrt (
t1905 * t1905 + 2.0360111955237585E-13 ) ; t1927 = pmf_sqrt ( t1905 * t1905 +
2.3237892571262758E-14 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 = pmf_sqrt (
t1905 * t1905 + 1.6409606283812424E-14 ) ; t1962 = pmf_sqrt ( X [ 126ULL ] *
X [ 126ULL ] + 2.0360111955237585E-13 ) ; t1964 = pmf_sqrt ( X [ 126ULL ] * X
[ 126ULL ] + 2.3237892571262758E-14 ) ; t1965 = pmf_sqrt ( X [ 126ULL ] * X [
126ULL ] + 1.6409606283812424E-14 ) ; tlu2_1d_linear_linear_value ( &
vb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = vb_efOut [ 0 ] ; t1966 = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & wb_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wb_efOut [ 0 ] ; t1968 = -
X [ 127ULL ] + ( - X [ 150ULL ] - X [ 151ULL ] ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total = ( - X [
126ULL ] + t1905 ) - piece14 * 100000.0 ; t1969 = ( - X [ 128ULL ] + ( - X [
152ULL ] - X [ 153ULL ] ) ) - piece14 * 100000.0 ; t1961 = ( ( ( 1.0 - t1906
) - t1907 ) * t1966 + t1926 * t1906 ) + t1785_idx_0 * t1907 ; t1971 = t1966 -
X [ 19ULL ] * 0.296802103844292 ; t1966 = t1785_idx_0 - X [ 19ULL ] *
4.12448151675695 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I
= t1926 - X [ 19ULL ] * 0.461523 ; t1926 = U_idx_1 * 0.031415926535897927 ;
if ( t1926 * 0.0001 <= 7.8539816339744857E-13 ) { t1972 =
7.8539816339744857E-13 ; } else if ( t1926 * 0.0001 >= 3.1415926535897929E-6
) { t1972 = 3.1415926535897929E-6 ; } else { t1972 = t1926 * 0.0001 ; } t1926
= t1972 / 7.8539816339744827E-5 ; if ( X [ 161ULL ] <= 0.0 ) {
intrm_sf_mf_201 = 0.0 ; } else { intrm_sf_mf_201 = X [ 161ULL ] >= 1.0 ? 1.0
: X [ 161ULL ] ; } if ( X [ 162ULL ] <= 0.0 ) { t1974 = 0.0 ; } else { t1974
= X [ 162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; } t1975 = ( ( ( 1.0 -
intrm_sf_mf_201 ) - t1974 ) * 296.802103844292 + intrm_sf_mf_201 * 461.523 )
+ t1974 * 4124.48151675695 ; t2023 = X [ 159ULL ] * t1975 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u = X [ 160ULL
] / ( t2023 == 0.0 ? 1.0E-16 : t2023 ) ; zc_int49 = X [ 160ULL ] / ( X [
135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) * ( X [ 163ULL ] / ( X [ 159ULL ]
== 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ; t1978 = X [ 160ULL ] / 1.01325 * ( X [
164ULL ] / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ; if ( X [
126ULL ] > 0.0 ) { t1979 = ( t1926 + 1.0 ) * ( 1.0 - t1926 * zc_int49 ) * ( X
[ 126ULL ] / 0.64 / ( t1972 == 0.0 ? 1.0E-16 : t1972 ) * ( X [ 126ULL ] /
0.64 / ( t1972 == 0.0 ? 1.0E-16 : t1972 ) ) / 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u ) )
* 9.9999999999999991E-11 ; } else if ( X [ 126ULL ] < 0.0 ) { t1979 = ( t1926
+ 1.0 ) * ( 1.0 - t1926 * t1978 ) * ( X [ 126ULL ] / 0.64 / ( t1972 == 0.0 ?
1.0E-16 : t1972 ) * ( X [ 126ULL ] / 0.64 / ( t1972 == 0.0 ? 1.0E-16 : t1972
) ) / 2.0 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u ) ) *
9.9999999999999991E-11 ; } else { t1979 = 0.0 ; } t1981 = ( X [ 135ULL ] +
1.01325 ) / 2.0 * 0.0010000000000000009 ; t1980 = ( 1.0 - t1926 ) * ( 1.0 -
t1926 ) ; t1982 = t1981 * t1980 ; t1983 = ( t1926 + 1.0 ) * ( 1.0 - t1926 *
zc_int49 ) - ( 1.0 - t1926 * t1978 ) * t1926 * 2.0 ; t1984 = ( X [ 135ULL ] -
1.01325 ) * ( t1983 >= t1980 ? t1983 : t1980 ) ; t1983 = ( X [ 135ULL ] -
1.01325 ) / ( t1981 == 0.0 ? 1.0E-16 : t1981 ) ; t1985 = t1983 * t1983 * 3.0
- t1983 * t1983 * t1983 * 2.0 ; if ( X [ 135ULL ] - 1.01325 <= 0.0 ) { t1983
= t1982 ; } else if ( X [ 135ULL ] - 1.01325 >= t1981 ) { t1983 = t1984 ; }
else { t1983 = ( 1.0 - t1985 ) * t1982 + t1984 * t1985 ; } t1984 = ( t1926 +
1.0 ) * ( 1.0 - t1926 * t1978 ) - ( 1.0 - t1926 * zc_int49 ) * t1926 * 2.0 ;
t1926 = ( 1.01325 - X [ 135ULL ] ) * ( t1984 >= t1980 ? t1984 : t1980 ) ;
zc_int49 = ( 1.01325 - X [ 135ULL ] ) / ( t1981 == 0.0 ? 1.0E-16 : t1981 ) ;
t1978 = zc_int49 * zc_int49 * 3.0 - zc_int49 * zc_int49 * zc_int49 * 2.0 ; if
( 1.01325 - X [ 135ULL ] <= 0.0 ) { zc_int49 = t1982 ; } else if ( 1.01325 -
X [ 135ULL ] >= t1981 ) { zc_int49 = t1926 ; } else { zc_int49 = ( 1.0 -
t1978 ) * t1982 + t1926 * t1978 ; } if ( X [ 135ULL ] > 1.01325 ) { t1926 =
t1983 ; } else { t1926 = X [ 135ULL ] < 1.01325 ? zc_int49 : t1982 ; } if ( X
[ 159ULL ] <= 216.59999999999997 ) { zc_int49 = 216.59999999999997 ; } else {
zc_int49 = X [ 159ULL ] >= 623.15 ? 623.15 : X [ 159ULL ] ; } t1987 =
zc_int49 * zc_int49 ; t1978 = ( ( ( 1074.1165326382541 + zc_int49 * -
0.2214565261064077 ) + t1987 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_201 ) - t1974 ) + ( ( 1479.6504774710445 + zc_int49 *
1.200211433705052 ) + t1987 * - 0.00038614513167842338 ) * intrm_sf_mf_201 )
+ ( ( 12825.281119790017 + zc_int49 * 6.9647057412830984 ) + t1987 * -
0.007052486824683288 ) * t1974 ; zc_int91 = t1978 - t1975 ; t2047 = X [
160ULL ] * X [ 160ULL ] * ( t1978 / ( zc_int91 == 0.0 ? 1.0E-16 : zc_int91 )
) ; zc_int49 = pmf_sqrt ( fabs ( t2047 / ( t1975 == 0.0 ? 1.0E-16 : t1975 ) /
( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ) * t1972 * 0.64 ; t2050 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u = ( X [
135ULL ] - 1.01325 ) * pmf_sqrt ( fabs ( t2050 / ( t1926 == 0.0 ? 1.0E-16 :
t1926 ) ) ) * t1972 * 0.64 ; t1791 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & xb_efOut . mField0 [ 0ULL ] , & xb_efOut .
mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = xb_efOut ; tlu2_1d_linear_linear_value ( & yb_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = yb_efOut
[ 0 ] ; t1978 = t1785_idx_0 ; tlu2_1d_linear_linear_value ( & ac_efOut [ 0ULL
] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = ac_efOut [ 0 ] ; t1980 = t1785_idx_0 ; if ( X [ 26ULL ] <=
0.0 ) { t1982 = 0.0 ; } else { t1982 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ]
; } if ( X [ 25ULL ] <= 0.0 ) { t1983 = 0.0 ; } else { t1983 = X [ 25ULL ] >=
1.0 ? 1.0 : X [ 25ULL ] ; } t1984 = ( ( ( 1.0 - t1982 ) - t1983 ) *
296.802103844292 + t1982 * 461.523 ) + t1983 * 4124.48151675695 ; t2052 = X [
23ULL ] * t1984 ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) { t1987 = 1.0 - X [ 26ULL
] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) { t1987 = pmf_exp ( ( ( 1.0 - X
[ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1987 = 1.6701700790245661E-7
; } t1988 = X [ 25ULL ] / ( t1987 == 0.0 ? 1.0E-16 : t1987 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
bc_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = bc_efOut [ 0 ] ; t1989 = pmf_exp ( pmf_log ( X [ 24ULL ] *
100000.0 ) - t1785_idx_0 ) ; if ( t1989 >= 1.0 ) { t2055 = ( t1989 - 1.0 ) *
461.523 + t1988 ; t1990 = t1988 / ( t2055 == 0.0 ? 1.0E-16 : t2055 ) ; } else
{ t1990 = 1.0 ; } t2057 = t1990 * 0.01 ; t1988 = ( X [ 26ULL ] - t1990 ) / (
t2057 == 0.0 ? 1.0E-16 : t2057 ) ; if ( X [ 26ULL ] - t1990 <= 0.0 ) { t1988
= 0.0 ; } else if ( X [ 26ULL ] - t1990 >= t1990 * 0.01 ) { t1988 = X [ 26ULL
] - t1990 ; } else { t1988 = ( X [ 26ULL ] - t1990 ) * ( t1988 * t1988 * 3.0
- t1988 * t1988 * t1988 * 2.0 ) ; } t1985 = X [ 24ULL ] / ( t2052 == 0.0 ?
1.0E-16 : t2052 ) * t1988 * 0.00012500000000000003 / 0.001 ; t1988 = ( t1978
- t1980 ) * t1985 ; t1980 = pmf_sqrt ( X [ 183ULL ] * X [ 183ULL ] +
1.8324100759713822E-12 ) ; t1990 = pmf_sqrt ( X [ 183ULL ] * X [ 183ULL ] +
2.0914103314136477E-13 ) ; t1991 = pmf_sqrt ( X [ 183ULL ] * X [ 183ULL ] +
1.4768645655431184E-13 ) ; t1992 = U_idx_2 * 0.01 ; t1993 = pmf_sqrt ( t1992
* t1992 + 1.8324100759713822E-12 ) ; t1994 = pmf_sqrt ( t1992 * t1992 +
2.0914103314136477E-13 ) ; t1995 = pmf_sqrt ( t1992 * t1992 +
1.4768645655431184E-13 ) ; t1997 = pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] +
1.8324100759713822E-12 ) ; t1998 = pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] +
2.0914103314136477E-13 ) ; t1999 = pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] +
1.4768645655431184E-13 ) ; tlu2_1d_linear_linear_value ( & cc_efOut [ 0ULL ]
, & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0
= cc_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 = t1785_idx_0
; tlu2_1d_linear_linear_value ( & dc_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL
] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = dc_efOut [ 0 ] ; t2002 =
( X [ 150ULL ] + X [ 184ULL ] ) + X [ 193ULL ] ; t2003 = ( ( X [ 183ULL ] +
t1992 ) + X [ 192ULL ] ) - t1985 * 100000.0 ; t2004 = ( ( X [ 152ULL ] + X [
185ULL ] ) + X [ 194ULL ] ) - t1985 * 100000.0 ; t2005 = ( ( ( 1.0 - t1982 )
- t1983 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 +
t1978 * t1982 ) + t1785_idx_0 * t1983 ; t2007 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 - X [ 23ULL ]
* 0.296802103844292 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 = t1785_idx_0
- X [ 23ULL ] * 4.12448151675695 ; t2001 = t1978 - X [ 23ULL ] * 0.461523 ;
if ( X [ 203ULL ] <= 0.0 ) { t1978 = 0.0 ; } else { t1978 = X [ 203ULL ] >=
1.0 ? 1.0 : X [ 203ULL ] ; } if ( X [ 202ULL ] <= 0.0 ) { piece2 = 0.0 ; }
else { piece2 = X [ 202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } t2009 = ( ( (
1.0 - t1978 ) - piece2 ) * 296.802103844292 + t1978 * 461.523 ) + piece2 *
4124.48151675695 ; t1791 [ 0ULL ] = X [ 197ULL ] ;
tlu2_linear_linear_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t90 = ec_efOut ; tlu2_1d_linear_linear_value ( & fc_efOut [ 0ULL ] , & t90 .
mField0 [ 0ULL ] , & t90 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = fc_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & gc_efOut [ 0ULL ] , & t90 . mField0 [
0ULL ] , & t90 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = gc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t90 . mField0 [ 0ULL ]
, & t90 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = hc_efOut [ 0 ] ; t2011 = (
( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 * t1978 ) + t1768_idx_0
* piece2 ; t1791 [ 0ULL ] = X [ 200ULL ] ; tlu2_linear_linear_prelookup ( &
ic_efOut . mField0 [ 0ULL ] , & ic_efOut . mField1 [ 0ULL ] , & ic_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t75 = ic_efOut ;
tlu2_1d_linear_linear_value ( & jc_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ]
, & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = jc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ]
, & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = kc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t75 . mField0 [ 0ULL ]
, & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = lc_efOut [ 0 ] ; zc_int58
= ( ( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 * t1978 ) +
t1768_idx_0 * piece2 ; t1791 [ 0ULL ] = X [ 198ULL ] ;
tlu2_linear_linear_prelookup ( & mc_efOut . mField0 [ 0ULL ] , & mc_efOut .
mField1 [ 0ULL ] , & mc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t84 = mc_efOut ; tlu2_1d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t84 .
mField0 [ 0ULL ] , & t84 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = nc_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & oc_efOut [ 0ULL ] , & t84 . mField0 [
0ULL ] , & t84 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = oc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pc_efOut [ 0ULL ] , & t84 . mField0 [ 0ULL ]
, & t84 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pc_efOut [ 0 ] ; t2013 = (
( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 * t1978 ) + t1768_idx_0
* piece2 ; t1791 [ 0ULL ] = X [ 199ULL ] ; tlu2_linear_linear_prelookup ( &
qc_efOut . mField0 [ 0ULL ] , & qc_efOut . mField1 [ 0ULL ] , & qc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t16 = qc_efOut ;
tlu2_1d_linear_linear_value ( & rc_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = rc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & sc_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = sc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tc_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = tc_efOut [ 0 ] ; t2014 = (
( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 * t1978 ) + t1768_idx_0
* piece2 ; t1791 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup ( &
uc_efOut . mField0 [ 0ULL ] , & uc_efOut . mField1 [ 0ULL ] , & uc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = uc_efOut ;
tlu2_1d_linear_linear_value ( & vc_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = vc_efOut [ 0 ] ; t2015 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & wc_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wc_efOut
[ 0 ] ; t2016 = t1785_idx_0 ; if ( X [ 30ULL ] <= 0.0 ) { t2017 = 0.0 ; }
else { t2017 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } if ( X [ 29ULL ] <=
0.0 ) { t2018 = 0.0 ; } else { t2018 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ]
; } t2019 = ( ( ( 1.0 - t2017 ) - t2018 ) * 296.802103844292 + t2017 *
461.523 ) + t2018 * 4124.48151675695 ; t2060 = X [ 27ULL ] * t2019 ; if ( 1.0
- X [ 30ULL ] >= 0.01 ) { t2026 = 1.0 - X [ 30ULL ] ; } else if ( 1.0 - X [
30ULL ] >= - 0.1 ) { t2026 = pmf_exp ( ( ( 1.0 - X [ 30ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t2026 = 1.6701700790245661E-7 ; } t2029 = X [ 29ULL
] / ( t2026 == 0.0 ? 1.0E-16 : t2026 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t81
. mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
xc_efOut [ 0 ] ; t2031 = pmf_exp ( pmf_log ( X [ 28ULL ] * 100000.0 ) -
t1785_idx_0 ) ; if ( t2031 >= 1.0 ) { piece20 = ( t2031 - 1.0 ) * 461.523 +
t2029 ; t2032 = t2029 / ( piece20 == 0.0 ? 1.0E-16 : piece20 ) ; } else {
t2032 = 1.0 ; } t2065 = t2032 * 0.01 ; t2029 = ( X [ 30ULL ] - t2032 ) / (
t2065 == 0.0 ? 1.0E-16 : t2065 ) ; if ( X [ 30ULL ] - t2032 <= 0.0 ) { t2029
= 0.0 ; } else if ( X [ 30ULL ] - t2032 >= t2032 * 0.01 ) { t2029 = X [ 30ULL
] - t2032 ; } else { t2029 = ( X [ 30ULL ] - t2032 ) * ( t2029 * t2029 * 3.0
- t2029 * t2029 * t2029 * 2.0 ) ; } t2021 = X [ 28ULL ] / ( t2060 == 0.0 ?
1.0E-16 : t2060 ) * t2029 * 0.12 / 0.001 ; t2029 = ( t2015 - t2016 ) * t2021
; t2016 = pmf_sqrt ( X [ 213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 ) ;
t2032 = pmf_sqrt ( X [ 213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 ) ;
t2033 = pmf_sqrt ( X [ 213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 ) ;
tlu2_1d_linear_linear_value ( & yc_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = yc_efOut [ 0 ] ; t2034 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & ad_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ad_efOut
[ 0 ] ; t2037 = X [ 213ULL ] - t2021 * 100000.0 ; t2038 = X [ 215ULL ] -
t2021 * 100000.0 ; t2039 = ( ( ( 1.0 - t2017 ) - t2018 ) * t2034 + t2015 *
t2017 ) + t1785_idx_0 * t2018 ; t2041 = t2034 - X [ 27ULL ] *
0.296802103844292 ; t2034 = t1785_idx_0 - X [ 27ULL ] * 4.12448151675695 ;
t2035 = t2015 - X [ 27ULL ] * 0.461523 ; if ( X [ 33ULL ] <= 0.0 ) { t2015 =
0.0 ; } else { t2015 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ; } if ( X [
34ULL ] <= 0.0 ) { t2042 = 0.0 ; } else { t2042 = X [ 34ULL ] >= 1.0 ? 1.0 :
X [ 34ULL ] ; } t2043 = ( ( ( 1.0 - t2015 ) - t2042 ) * 296.802103844292 +
t2015 * 461.523 ) + t2042 * 4124.48151675695 ; t2044 = - ( ( X [ 31ULL ] / (
X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) - X [ 223ULL ] / ( X [ 224ULL ]
== 0.0 ? 1.0E-16 : X [ 224ULL ] ) ) * X [ 213ULL ] * t2043 ) /
7.8539816339744827E-5 ; if ( X [ 223ULL ] <= 216.59999999999997 ) { t2045 =
216.59999999999997 ; } else { t2045 = X [ 223ULL ] >= 623.15 ? 623.15 : X [
223ULL ] ; } t2048 = t2045 * t2045 ; zc_int91 = ( ( ( 1074.1165326382541 +
t2045 * - 0.2214565261064077 ) + t2048 * 0.00037212980109010952 ) * ( ( 1.0 -
t2015 ) - t2042 ) + ( ( 1479.6504774710445 + t2045 * 1.200211433705052 ) +
t2048 * - 0.00038614513167842338 ) * t2015 ) + ( ( 12825.281119790017 + t2045
* 6.9647057412830984 ) + t2048 * - 0.007052486824683288 ) * t2042 ; t2072 =
zc_int91 - t2043 ; t2045 = zc_int91 / ( t2072 == 0.0 ? 1.0E-16 : t2072 ) ;
zc_int91 = pmf_sqrt ( t2044 * t2044 * 9.999999999999999E-14 + fabs ( X [
223ULL ] * t2045 * t2043 ) * 1.0E-9 ) ; if ( X [ 225ULL ] <= 0.0 ) { t2048 =
0.0 ; } else { t2048 = X [ 225ULL ] >= 1.0 ? 1.0 : X [ 225ULL ] ; } if ( X [
226ULL ] <= 0.0 ) { t2053 = 0.0 ; } else { t2053 = X [ 226ULL ] >= 1.0 ? 1.0
: X [ 226ULL ] ; } t1791 [ 0ULL ] = X [ 31ULL ] ;
tlu2_linear_nearest_prelookup ( & bd_efOut . mField0 [ 0ULL ] , & bd_efOut .
mField1 [ 0ULL ] , & bd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t106 = bd_efOut ; tlu2_1d_linear_nearest_value ( & cd_efOut [ 0ULL ] , & t106
. mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
cd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & dd_efOut [ 0ULL ] , & t106
. mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = dd_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & ed_efOut [ 0ULL ] , & t106 . mField0
[ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ed_efOut [ 0 ]
; t2054 = ( ( ( 1.0 - t2048 ) - t2053 ) * t1785_idx_0 + U_idx_0 * t2048 ) +
t1768_idx_0 * t2053 ; t2073 = X [ 224ULL ] * X [ 224ULL ] * t2045 ; t2055 = -
pmf_sqrt ( fabs ( t2073 / ( t2043 == 0.0 ? 1.0E-16 : t2043 ) / ( X [ 223ULL ]
== 0.0 ? 1.0E-16 : X [ 223ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t2055 >=
0.0 ) { t2056 = t2055 * 100000.0 ; } else { t2056 = - t2055 * 100000.0 ; }
t2077 = t2054 * 7.8539816339744827E-5 ; t2057 = t2056 * 0.01 / ( t2077 == 0.0
? 1.0E-16 : t2077 ) ; t2079 = X [ 31ULL ] * t2043 ; t2058 = X [ 32ULL ] / (
t2079 == 0.0 ? 1.0E-16 : t2079 ) ; t2081 = t2058 * 1.5707963267948965E-8 ;
t124 = t2055 * t2054 * 35.2 / ( t2081 == 0.0 ? 1.0E-16 : t2081 ) ; t3603 =
t2057 >= 1.0 ? t2057 : 1.0 ; intrm_sf_mf_412 = pmf_log10 ( 6.9 / ( t3603 ==
0.0 ? 1.0E-16 : t3603 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t3603 == 0.0 ? 1.0E-16 : t3603 ) + 0.00017169489553429715 ) * 3.24 ; t2084 =
t2058 * 1.2337005501361697E-10 ; t2056 = t2055 * t2056 * ( 1.0 / (
intrm_sf_mf_412 == 0.0 ? 1.0E-16 : intrm_sf_mf_412 ) ) * 0.55 / ( t2084 ==
0.0 ? 1.0E-16 : t2084 ) ; t3603 = ( t2057 - 2000.0 ) / 2000.0 ; piece20 =
t3603 * t3603 * 3.0 - t3603 * t3603 * t3603 * 2.0 ; if ( t2057 <= 2000.0 ) {
t3603 = t124 * 1.0E-5 ; } else if ( t2057 >= 4000.0 ) { t3603 = t2056 *
1.0E-5 ; } else { t3603 = ( ( 1.0 - piece20 ) * t124 + t2056 * piece20 ) *
1.0E-5 ; } zc_int91 = - ( X [ 213ULL ] * zc_int91 ) / 7.8539816339744827E-5 *
0.00031622776601683789 + t3603 ; t2056 = X [ 220ULL ] - X [ 32ULL ] ; t124 =
- ( ( X [ 31ULL ] / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) - X [
227ULL ] / ( X [ 228ULL ] == 0.0 ? 1.0E-16 : X [ 228ULL ] ) ) * X [ 183ULL ]
* t2043 ) / 7.8539816339744827E-5 ; if ( X [ 227ULL ] <= 216.59999999999997 )
{ t3603 = 216.59999999999997 ; } else { t3603 = X [ 227ULL ] >= 623.15 ?
623.15 : X [ 227ULL ] ; } t2064 = t3603 * t3603 ; piece20 = ( ( (
1074.1165326382541 + t3603 * - 0.2214565261064077 ) + t2064 *
0.00037212980109010952 ) * ( ( 1.0 - t2015 ) - t2042 ) + ( (
1479.6504774710445 + t3603 * 1.200211433705052 ) + t2064 * -
0.00038614513167842338 ) * t2015 ) + ( ( 12825.281119790017 + t3603 *
6.9647057412830984 ) + t2064 * - 0.007052486824683288 ) * t2042 ; t2092 =
piece20 - t2043 ; t3603 = piece20 / ( t2092 == 0.0 ? 1.0E-16 : t2092 ) ;
piece20 = pmf_sqrt ( t124 * t124 * 9.999999999999999E-14 + fabs ( X [ 227ULL
] * t3603 * t2043 ) * 1.0E-9 ) ; t2093 = X [ 228ULL ] * X [ 228ULL ] * t3603
; t2064 = - pmf_sqrt ( fabs ( t2093 / ( t2043 == 0.0 ? 1.0E-16 : t2043 ) / (
X [ 227ULL ] == 0.0 ? 1.0E-16 : X [ 227ULL ] ) ) ) * 7.8539816339744827E-5 ;
if ( t2064 >= 0.0 ) { t2065 = t2064 * 100000.0 ; } else { t2065 = - t2064 *
100000.0 ; } piece96 = t2065 * 0.01 / ( t2077 == 0.0 ? 1.0E-16 : t2077 ) ;
t2067 = t2064 * t2054 * 35.2 / ( t2081 == 0.0 ? 1.0E-16 : t2081 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv = piece96 >= 1.0 ?
piece96 : 1.0 ; t2100 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ) +
0.00017169489553429715 ) * 3.24 ; t2065 = t2064 * t2065 * ( 1.0 / ( t2100 ==
0.0 ? 1.0E-16 : t2100 ) ) * 0.55 / ( t2084 == 0.0 ? 1.0E-16 : t2084 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv = ( piece96 - 2000.0
) / 2000.0 ; t2072 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv * 2.0 ; if ( piece96
<= 2000.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv =
t2067 * 1.0E-5 ; } else if ( piece96 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv = t2065 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv = ( ( 1.0 -
t2072 ) * t2067 + t2065 * t2072 ) * 1.0E-5 ; } piece20 = - ( X [ 183ULL ] *
piece20 ) / 7.8539816339744827E-5 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ; t2065 = X [ 24ULL
] - X [ 32ULL ] ; t1791 [ 0ULL ] = X [ 31ULL ] ; tlu2_linear_linear_prelookup
( & fd_efOut . mField0 [ 0ULL ] , & fd_efOut . mField1 [ 0ULL ] , & fd_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t55 = fd_efOut ;
tlu2_1d_linear_linear_value ( & gd_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = gd_efOut [ 0 ] ; t2067 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & hd_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = hd_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv =
t1785_idx_0 ; if ( 1.0 - X [ 33ULL ] >= 0.01 ) { t2074 = 1.0 - X [ 33ULL ] ;
} else if ( 1.0 - X [ 33ULL ] >= - 0.1 ) { t2074 = pmf_exp ( ( ( 1.0 - X [
33ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2074 = 1.6701700790245661E-7 ;
} t2072 = X [ 34ULL ] / ( t2074 == 0.0 ? 1.0E-16 : t2074 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
id_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = id_efOut [ 0 ] ; t2076 = pmf_exp ( pmf_log ( X [ 32ULL ] *
100000.0 ) - t1785_idx_0 ) ; if ( t2076 >= 1.0 ) { t2107 = ( t2076 - 1.0 ) *
461.523 + t2072 ; t2080 = t2072 / ( t2107 == 0.0 ? 1.0E-16 : t2107 ) ; } else
{ t2080 = 1.0 ; } t2109 = t2080 * 0.01 ; t2072 = ( X [ 33ULL ] - t2080 ) / (
t2109 == 0.0 ? 1.0E-16 : t2109 ) ; if ( X [ 33ULL ] - t2080 <= 0.0 ) { t2072
= 0.0 ; } else if ( X [ 33ULL ] - t2080 >= t2080 * 0.01 ) { t2072 = X [ 33ULL
] - t2080 ; } else { t2072 = ( X [ 33ULL ] - t2080 ) * ( t2072 * t2072 * 3.0
- t2072 * t2072 * t2072 * 2.0 ) ; } t2058 = t2058 * t2072 *
7.8539816339744827E-5 / 0.001 ; t2072 = ( t2067 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ) * t2058 ;
tlu2_1d_linear_nearest_value ( & jd_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL
] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10
, & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = jd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL
] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11
, & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = kd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ld_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL
] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12
, & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ld_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv = ( ( ( 1.0 - t2048
) - t2053 ) * t1785_idx_0 + U_idx_0 * t2048 ) + t1768_idx_0 * t2053 ; t2080 =
( X [ 218ULL ] - X [ 31ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv *
0.031415926535897927 / 0.01 ) ; if ( X [ 222ULL ] <= 0.0 ) { intrm_sf_mf_412
= 0.0 ; } else { intrm_sf_mf_412 = X [ 222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ;
} if ( X [ 221ULL ] <= 0.0 ) { t2083 = 0.0 ; } else { t2083 = X [ 221ULL ] >=
1.0 ? 1.0 : X [ 221ULL ] ; } piece118 = ( ( ( 1.0 - intrm_sf_mf_412 ) - t2083
) * 296.802103844292 + intrm_sf_mf_412 * 461.523 ) + t2083 * 4124.48151675695
; t2086 = X [ 222ULL ] * 461.523 / ( piece118 == 0.0 ? 1.0E-16 : piece118 ) ;
if ( t2086 <= 0.0 ) { zc_int50 = 0.0 ; } else { zc_int50 = t2086 >= 1.0 ? 1.0
: t2086 ; } t2086 = X [ 221ULL ] * 4124.48151675695 / ( piece118 == 0.0 ?
1.0E-16 : piece118 ) ; if ( t2086 <= 0.0 ) { t2092 = 0.0 ; } else { t2092 =
t2086 >= 1.0 ? 1.0 : t2086 ; } t1791 [ 0ULL ] = X [ 219ULL ] ;
tlu2_linear_nearest_prelookup ( & md_efOut . mField0 [ 0ULL ] , & md_efOut .
mField1 [ 0ULL ] , & md_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t68 = md_efOut ; tlu2_1d_linear_nearest_value ( & nd_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = nd_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & od_efOut [ 0ULL ] , & t68 . mField0
[ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = od_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pd_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pd_efOut [ 0 ] ; t2086 =
( ( ( 1.0 - zc_int50 ) - t2092 ) * t1785_idx_0 + U_idx_0 * zc_int50 ) +
t1768_idx_0 * t2092 ; tlu2_1d_linear_nearest_value ( & qd_efOut [ 0ULL ] , &
t106 . mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
qd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rd_efOut [ 0ULL ] , & t106
. mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 =
rd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & sd_efOut [ 0ULL ] , & t106
. mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 =
sd_efOut [ 0 ] ; t2094 = ( ( ( 1.0 - t2048 ) - t2053 ) * t1785_idx_0 +
U_idx_0 * t2048 ) + t1768_idx_0 * t2053 ; tlu2_1d_linear_nearest_value ( &
td_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = td_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ud_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = ud_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vd_efOut [
0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = vd_efOut [ 0 ] ; t2048 = ( ( ( 1.0 - zc_int50 ) - t2092 )
* t1785_idx_0 + U_idx_0 * zc_int50 ) + t1768_idx_0 * t2092 ; t2053 = ( - X [
213ULL ] - ( - X [ 183ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( &
wd_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = wd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xd_efOut
[ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = xd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & yd_efOut [
0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = yd_efOut [ 0 ] ; t2117 = ( t2054 + ( ( ( ( 1.0 - zc_int50 )
- t2092 ) * t1785_idx_0 + U_idx_0 * zc_int50 ) + t1768_idx_0 * t2092 ) ) /
2.0 * 7.8539816339744827E-5 ; zc_int50 = ( t2053 >= 0.0 ? t2053 : 0.0 ) *
0.01 / ( t2117 == 0.0 ? 1.0E-16 : t2117 ) ; t2092 = zc_int50 >= 0.0 ?
zc_int50 : - zc_int50 ; t2096 = t2092 > 1000.0 ? t2092 : 1000.0 ; t2118 =
t2086 + t2094 ; if ( t2118 / 2.0 > 0.5 ) { t2098 = ( t2086 + t2094 ) / 2.0 ;
} else { t2098 = 0.5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 = pmf_log10 (
6.9 / ( t2096 == 0.0 ? 1.0E-16 : t2096 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t2096 == 0.0 ? 1.0E-16 : t2096 ) + 0.00017169489553429715
) * 3.24 ; t2100 = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ) ;
t2122 = ( pmf_pow ( t2098 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2100
/ 8.0 ) * 12.7 + 1.0 ; t2096 = ( t2096 - 1000.0 ) * ( t2100 / 8.0 ) * t2098 /
( t2122 == 0.0 ? 1.0E-16 : t2122 ) ; t2098 = ( t2092 - 2000.0 ) / 2000.0 ;
t2100 = t2098 * t2098 * 3.0 - t2098 * t2098 * t2098 * 2.0 ; if ( t2092 <=
2000.0 ) { t2098 = 3.66 ; } else if ( t2092 >= 4000.0 ) { t2098 = t2096 ; }
else { t2098 = ( 1.0 - t2100 ) * 3.66 + t2096 * t2100 ; } t2127 = t2118 / 2.0
; if ( t2092 > t2098 * 0.031415926535897927 / 7.8539816339744827E-5 / ( t2127
== 0.0 ? 1.0E-16 : t2127 ) / 30.0 ) { U_idx_0 = ( t2086 + t2094 ) / 2.0 ;
t2096 = t2098 * 0.031415926535897927 / ( t2092 == 0.0 ? 1.0E-16 : t2092 ) /
7.8539816339744827E-5 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else {
t2096 = 30.0 ; } t2086 = ( X [ 218ULL ] - X [ 219ULL ] ) * ( 1.0 - pmf_exp (
- t2096 ) ) ; t2048 = zc_int50 * 7.8539816339744827E-5 / 0.01 * ( t2118 / 2.0
) * ( ( t2048 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ) /
2.0 ) * t2086 ; if ( X [ 168ULL ] <= 0.0 ) { t2086 = 0.0 ; } else { t2086 = X
[ 168ULL ] >= 1.0 ? 1.0 : X [ 168ULL ] ; } if ( X [ 167ULL ] <= 0.0 ) {
zc_int50 = 0.0 ; } else { zc_int50 = X [ 167ULL ] >= 1.0 ? 1.0 : X [ 167ULL ]
; } t2092 = ( ( ( 1.0 - t2086 ) - zc_int50 ) * 296.802103844292 + t2086 *
461.523 ) + zc_int50 * 4124.48151675695 ; t2096 = X [ 168ULL ] * 461.523 / (
t2092 == 0.0 ? 1.0E-16 : t2092 ) ; if ( t2096 <= 0.0 ) { t2098 = 0.0 ; } else
{ t2098 = t2096 >= 1.0 ? 1.0 : t2096 ; } t2096 = X [ 167ULL ] *
4124.48151675695 / ( t2092 == 0.0 ? 1.0E-16 : t2092 ) ; if ( t2096 <= 0.0 ) {
t2100 = 0.0 ; } else { t2100 = t2096 >= 1.0 ? 1.0 : t2096 ; } t1791 [ 0ULL ]
= X [ 166ULL ] ; tlu2_linear_nearest_prelookup ( & ae_efOut . mField0 [ 0ULL
] , & ae_efOut . mField1 [ 0ULL ] , & ae_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = ae_efOut ; tlu2_1d_linear_nearest_value ( &
be_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = be_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
ce_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = ce_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & de_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = de_efOut [ 0 ] ; t2096 = ( ( ( 1.0 - t2098 ) - t2100 ) *
t1785_idx_0 + U_idx_0 * t2098 ) + t1768_idx_0 * t2100 ;
tlu2_1d_linear_nearest_value ( & ee_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ee_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fe_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = fe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ge_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ge_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I = ( ( ( 1.0 - t2098 )
- t2100 ) * t1785_idx_0 + U_idx_0 * t2098 ) + t1768_idx_0 * t2100 ;
tlu2_1d_linear_nearest_value ( & he_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = he_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ie_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ie_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & je_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = je_efOut [ 0 ] ; t2141 = (
t2054 + ( ( ( ( 1.0 - t2098 ) - t2100 ) * t1785_idx_0 + U_idx_0 * t2098 ) +
t1768_idx_0 * t2100 ) ) / 2.0 * 7.8539816339744827E-5 ; t2053 = - ( t2053 <=
0.0 ? t2053 : 0.0 ) * 0.01 / ( t2141 == 0.0 ? 1.0E-16 : t2141 ) ; t2098 =
t2053 >= 0.0 ? t2053 : - t2053 ; t2100 = t2098 > 1000.0 ? t2098 : 1000.0 ;
t2142 = t2094 + t2096 ; if ( t2142 / 2.0 > 0.5 ) { t2103 = ( t2094 + t2096 )
/ 2.0 ; } else { t2103 = 0.5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 = pmf_log10 (
6.9 / ( t2100 == 0.0 ? 1.0E-16 : t2100 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t2100 == 0.0 ? 1.0E-16 : t2100 ) + 0.00017169489553429715
) * 3.24 ; intrm_sf_mf_384 = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 ) ;
t2146 = ( pmf_pow ( t2103 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_384 / 8.0 ) * 12.7 + 1.0 ; t2100 = ( t2100 - 1000.0 ) * (
intrm_sf_mf_384 / 8.0 ) * t2103 / ( t2146 == 0.0 ? 1.0E-16 : t2146 ) ; t2103
= ( t2098 - 2000.0 ) / 2000.0 ; intrm_sf_mf_384 = t2103 * t2103 * 3.0 - t2103
* t2103 * t2103 * 2.0 ; if ( t2098 <= 2000.0 ) { t2103 = 3.66 ; } else if (
t2098 >= 4000.0 ) { t2103 = t2100 ; } else { t2103 = ( 1.0 - intrm_sf_mf_384
) * 3.66 + t2100 * intrm_sf_mf_384 ; } t2151 = t2142 / 2.0 ; if ( t2098 >
t2103 * 0.031415926535897927 / 7.8539816339744827E-5 / ( t2151 == 0.0 ?
1.0E-16 : t2151 ) / 30.0 ) { t2157 = ( t2094 + t2096 ) / 2.0 ; t2100 = t2103
* 0.031415926535897927 / ( t2098 == 0.0 ? 1.0E-16 : t2098 ) /
7.8539816339744827E-5 / ( t2157 == 0.0 ? 1.0E-16 : t2157 ) ; } else { t2100 =
30.0 ; } t2094 = ( X [ 218ULL ] - X [ 166ULL ] ) * ( 1.0 - pmf_exp ( - t2100
) ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv = t2048 +
t2053 * 7.8539816339744827E-5 / 0.01 * ( t2142 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I ) / 2.0 ) * t2094 ;
t2048 = pmf_sqrt ( X [ 213ULL ] * X [ 213ULL ] + 2.0360111955237585E-13 ) ;
t2053 = pmf_sqrt ( X [ 213ULL ] * X [ 213ULL ] + 2.3237892571262758E-14 ) ;
t2094 = pmf_sqrt ( X [ 213ULL ] * X [ 213ULL ] + 1.6409606283812424E-14 ) ;
t2096 = pmf_sqrt ( X [ 183ULL ] * X [ 183ULL ] + 2.0360111955237585E-13 ) ;
t2098 = pmf_sqrt ( X [ 183ULL ] * X [ 183ULL ] + 2.3237892571262758E-14 ) ;
t2100 = pmf_sqrt ( X [ 183ULL ] * X [ 183ULL ] + 1.6409606283812424E-14 ) ;
tlu2_1d_linear_linear_value ( & ke_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ke_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & le_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = le_efOut [ 0 ] ;
intrm_sf_mf_384 = - X [ 214ULL ] - X [ 184ULL ] ; t2105 = ( - X [ 213ULL ] -
X [ 183ULL ] ) - t2058 * 100000.0 ; t2106 = ( - X [ 215ULL ] - X [ 185ULL ] )
- t2058 * 100000.0 ; t2107 = ( ( ( 1.0 - t2015 ) - t2042 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I + t2067 * t2015 ) +
t1785_idx_0 * t2042 ; t2109 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I - X [ 31ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I =
t1785_idx_0 - X [ 31ULL ] * 4.12448151675695 ; t2103 = t2067 - X [ 31ULL ] *
0.461523 ; t2067 = ( X [ 220ULL ] * - 0.7999998 + U_idx_3 *
7.9999980000000006 ) + 9.9999999947364415E-9 ; if ( t2067 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t2110 =
7.8539816339744857E-13 ; } else if ( t2067 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t2110 = 3.1415926535897929E-6 ; } else { t2110 =
t2067 * 7.8539816339744827E-5 ; } t2067 = t2110 / 7.8539816339744827E-5 ; if
( X [ 239ULL ] <= 0.0 ) { intrm_sf_mf_474 = 0.0 ; } else { intrm_sf_mf_474 =
X [ 239ULL ] >= 1.0 ? 1.0 : X [ 239ULL ] ; } if ( X [ 240ULL ] <= 0.0 ) {
piece267 = 0.0 ; } else { piece267 = X [ 240ULL ] >= 1.0 ? 1.0 : X [ 240ULL ]
; } t2113 = ( ( ( 1.0 - intrm_sf_mf_474 ) - piece267 ) * 296.802103844292 +
intrm_sf_mf_474 * 461.523 ) + piece267 * 4124.48151675695 ; t2162 = X [
237ULL ] * t2113 ; t2114 = X [ 238ULL ] / ( t2162 == 0.0 ? 1.0E-16 : t2162 )
; t2115 = X [ 238ULL ] / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) * ( X
[ 241ULL ] / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 = X [ 238ULL
] / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) * ( X [ 242ULL ] / ( X [
237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ; if ( - X [ 213ULL ] > 0.0 ) {
t2117 = ( t2067 + 1.0 ) * ( 1.0 - t2067 * t2115 ) * ( - X [ 213ULL ] / 0.64 /
( t2110 == 0.0 ? 1.0E-16 : t2110 ) * ( - X [ 213ULL ] / 0.64 / ( t2110 == 0.0
? 1.0E-16 : t2110 ) ) / 2.0 / ( t2114 == 0.0 ? 1.0E-16 : t2114 ) ) *
9.9999999999999991E-11 ; } else if ( - X [ 213ULL ] < 0.0 ) { t2117 = ( t2067
+ 1.0 ) * ( 1.0 - t2067 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ) * ( - X [
213ULL ] / 0.64 / ( t2110 == 0.0 ? 1.0E-16 : t2110 ) * ( - X [ 213ULL ] /
0.64 / ( t2110 == 0.0 ? 1.0E-16 : t2110 ) ) / 2.0 / ( t2114 == 0.0 ? 1.0E-16
: t2114 ) ) * 9.9999999999999991E-11 ; } else { t2117 = 0.0 ; } t110 = ( X [
28ULL ] + X [ 220ULL ] ) / 2.0 * 0.0010000000000000009 ; t2118 = ( 1.0 -
t2067 ) * ( 1.0 - t2067 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 = t110 *
t2118 ; t2121 = ( t2067 + 1.0 ) * ( 1.0 - t2067 * t2115 ) - ( 1.0 - t2067 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ) * t2067 *
2.0 ; t2122 = ( X [ 28ULL ] - X [ 220ULL ] ) * ( t2121 >= t2118 ? t2121 :
t2118 ) ; t2121 = ( X [ 28ULL ] - X [ 220ULL ] ) / ( t110 == 0.0 ? 1.0E-16 :
t110 ) ; intrm_sf_mf_477 = t2121 * t2121 * 3.0 - t2121 * t2121 * t2121 * 2.0
; if ( X [ 28ULL ] - X [ 220ULL ] <= 0.0 ) { t2121 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ; } else if (
X [ 28ULL ] - X [ 220ULL ] >= t110 ) { t2121 = t2122 ; } else { t2121 = ( 1.0
- intrm_sf_mf_477 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 + t2122 *
intrm_sf_mf_477 ; } t2122 = ( t2067 + 1.0 ) * ( 1.0 - t2067 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ) - ( 1.0 -
t2067 * t2115 ) * t2067 * 2.0 ; t2067 = ( X [ 220ULL ] - X [ 28ULL ] ) * (
t2122 >= t2118 ? t2122 : t2118 ) ; t2115 = ( X [ 220ULL ] - X [ 28ULL ] ) / (
t110 == 0.0 ? 1.0E-16 : t110 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 = t2115 *
t2115 * 3.0 - t2115 * t2115 * t2115 * 2.0 ; if ( X [ 220ULL ] - X [ 28ULL ]
<= 0.0 ) { t2115 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ; } else if (
X [ 220ULL ] - X [ 28ULL ] >= t110 ) { t2115 = t2067 ; } else { t2115 = ( 1.0
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 + t2067 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ; } if ( X [
28ULL ] > X [ 220ULL ] ) { t2067 = t2121 ; } else { t2067 = X [ 28ULL ] < X [
220ULL ] ? t2115 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ; } if ( X [
237ULL ] <= 216.59999999999997 ) { t2115 = 216.59999999999997 ; } else {
t2115 = X [ 237ULL ] >= 623.15 ? 623.15 : X [ 237ULL ] ; } t2124 = t2115 *
t2115 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 = ( (
( 1074.1165326382541 + t2115 * - 0.2214565261064077 ) + t2124 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_474 ) - piece267 ) + ( (
1479.6504774710445 + t2115 * 1.200211433705052 ) + t2124 * -
0.00038614513167842338 ) * intrm_sf_mf_474 ) + ( ( 12825.281119790017 + t2115
* 6.9647057412830984 ) + t2124 * - 0.007052486824683288 ) * piece267 ; t2186
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 - t2113 ;
t2187 = X [ 238ULL ] * X [ 238ULL ] * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 / ( t2186 ==
0.0 ? 1.0E-16 : t2186 ) ) ; t2115 = pmf_sqrt ( fabs ( t2187 / ( t2113 == 0.0
? 1.0E-16 : t2113 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ) *
t2110 * 0.64 ; t2190 = t2114 * 2.0 ; t2114 = ( X [ 28ULL ] - X [ 220ULL ] ) *
pmf_sqrt ( fabs ( t2190 / ( t2067 == 0.0 ? 1.0E-16 : t2067 ) ) ) * t2110 *
0.64 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 =
pmf_sqrt ( X [ 250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 ) ; t2118 =
pmf_sqrt ( X [ 250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 = pmf_sqrt (
X [ 250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 ) ; if ( X [ 255ULL ] <=
0.0 ) { t2121 = 0.0 ; } else { t2121 = X [ 255ULL ] >= 1.0 ? 1.0 : X [ 255ULL
] ; } if ( X [ 256ULL ] <= 0.0 ) { t2122 = 0.0 ; } else { t2122 = X [ 256ULL
] >= 1.0 ? 1.0 : X [ 256ULL ] ; } intrm_sf_mf_477 = ( ( ( 1.0 - t2121 ) -
t2122 ) * 296.802103844292 + t2121 * 461.523 ) + t2122 * 259.836612622973 ;
if ( 1.0 - X [ 255ULL ] >= 0.01 ) { t2124 = 1.0 - X [ 255ULL ] ; } else if (
1.0 - X [ 255ULL ] >= - 0.1 ) { t2124 = pmf_exp ( ( ( 1.0 - X [ 255ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t2124 = 1.6701700790245661E-7 ; } if ( X [
268ULL ] <= 0.0 ) { t2126 = 0.0 ; } else { t2126 = X [ 268ULL ] >= 1.0 ? 1.0
: X [ 268ULL ] ; } if ( X [ 267ULL ] <= 0.0 ) { t2127 = 0.0 ; } else { t2127
= X [ 267ULL ] >= 1.0 ? 1.0 : X [ 267ULL ] ; } t2128 = ( ( ( 1.0 - t2126 ) -
t2127 ) * 296.802103844292 + t2126 * 461.523 ) + t2127 * 259.836612622973 ;
t1791 [ 0ULL ] = X [ 262ULL ] ; tlu2_linear_linear_prelookup ( & me_efOut .
mField0 [ 0ULL ] , & me_efOut . mField1 [ 0ULL ] , & me_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t106 = me_efOut ;
tlu2_1d_linear_linear_value ( & ne_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL ]
, & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ne_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & oe_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL ]
, & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = oe_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pe_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL ]
, & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pe_efOut [ 0 ] ; t2129 =
( ( ( 1.0 - t2126 ) - t2127 ) * t1785_idx_0 + U_idx_0 * t2126 ) + t1768_idx_0
* t2127 ; t1791 [ 0ULL ] = X [ 265ULL ] ; tlu2_linear_linear_prelookup ( &
qe_efOut . mField0 [ 0ULL ] , & qe_efOut . mField1 [ 0ULL ] , & qe_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t85 = qe_efOut ;
tlu2_1d_linear_linear_value ( & re_efOut [ 0ULL ] , & t85 . mField0 [ 0ULL ]
, & t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = re_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & se_efOut [ 0ULL ] , & t85 . mField0 [ 0ULL ]
, & t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = se_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & te_efOut [ 0ULL ] , & t85 . mField0 [ 0ULL ]
, & t85 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = te_efOut [ 0 ] ; t2130 = (
( ( 1.0 - t2126 ) - t2127 ) * t1785_idx_0 + U_idx_0 * t2126 ) + t1768_idx_0 *
t2127 ; t1791 [ 0ULL ] = X [ 263ULL ] ; tlu2_linear_linear_prelookup ( &
ue_efOut . mField0 [ 0ULL ] , & ue_efOut . mField1 [ 0ULL ] , & ue_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t58 = ue_efOut ;
tlu2_1d_linear_linear_value ( & ve_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ve_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & we_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = we_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & xe_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = xe_efOut [ 0 ] ; zc_int107
= ( ( ( 1.0 - t2126 ) - t2127 ) * t1785_idx_0 + U_idx_0 * t2126 ) +
t1768_idx_0 * t2127 ; t1791 [ 0ULL ] = X [ 264ULL ] ;
tlu2_linear_linear_prelookup ( & ye_efOut . mField0 [ 0ULL ] , & ye_efOut .
mField1 [ 0ULL ] , & ye_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t61 = ye_efOut ; tlu2_1d_linear_linear_value ( & af_efOut [ 0ULL ] , & t61 .
mField0 [ 0ULL ] , & t61 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = af_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & bf_efOut [ 0ULL ] , & t61 . mField0 [
0ULL ] , & t61 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = bf_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & cf_efOut [ 0ULL ] , & t61 . mField0 [ 0ULL ]
, & t61 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = cf_efOut [ 0 ] ; t2132 = (
( ( 1.0 - t2126 ) - t2127 ) * t1785_idx_0 + U_idx_0 * t2126 ) + t1768_idx_0 *
t2127 ; t1791 [ 0ULL ] = X [ 36ULL ] ; tlu2_linear_linear_prelookup ( &
df_efOut . mField0 [ 0ULL ] , & df_efOut . mField1 [ 0ULL ] , & df_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t55 = df_efOut ;
tlu2_1d_linear_linear_value ( & ef_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ef_efOut [ 0 ] ; U_idx_0 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & ff_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ff_efOut
[ 0 ] ; t2134 = t1785_idx_0 ; if ( X [ 38ULL ] <= 0.0 ) { t2136 = 0.0 ; }
else { t2136 = X [ 38ULL ] >= 1.0 ? 1.0 : X [ 38ULL ] ; } if ( X [ 37ULL ] <=
0.0 ) { t2137 = 0.0 ; } else { t2137 = X [ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ]
; } t2138 = ( ( ( 1.0 - t2136 ) - t2137 ) * 296.802103844292 + t2136 *
461.523 ) + t2137 * 259.836612622973 ; t2193 = X [ 36ULL ] * t2138 ; if ( 1.0
- X [ 38ULL ] >= 0.01 ) { t2140 = 1.0 - X [ 38ULL ] ; } else if ( 1.0 - X [
38ULL ] >= - 0.1 ) { t2140 = pmf_exp ( ( ( 1.0 - X [ 38ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t2140 = 1.6701700790245661E-7 ; } t2141 = X [ 37ULL
] / ( t2140 == 0.0 ? 1.0E-16 : t2140 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & gf_efOut [ 0ULL ] , & t55
. mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
gf_efOut [ 0 ] ; t2142 = pmf_exp ( pmf_log ( X [ 35ULL ] * 100000.0 ) -
t1785_idx_0 ) ; if ( t2142 >= 1.0 ) { t2196 = ( t2142 - 1.0 ) * 461.523 +
t2141 ; t2143 = t2141 / ( t2196 == 0.0 ? 1.0E-16 : t2196 ) ; } else { t2143 =
1.0 ; } intrm_sf_mf_676 = t2143 * 0.01 ; t2141 = ( X [ 38ULL ] - t2143 ) / (
intrm_sf_mf_676 == 0.0 ? 1.0E-16 : intrm_sf_mf_676 ) ; if ( X [ 38ULL ] -
t2143 <= 0.0 ) { t2141 = 0.0 ; } else if ( X [ 38ULL ] - t2143 >= t2143 *
0.01 ) { t2141 = X [ 38ULL ] - t2143 ; } else { t2141 = ( X [ 38ULL ] - t2143
) * ( t2141 * t2141 * 3.0 - t2141 * t2141 * t2141 * 2.0 ) ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 = X [ 35ULL ]
/ ( t2193 == 0.0 ? 1.0E-16 : t2193 ) * t2141 * 0.0003 / 0.001 ; t2141 = (
U_idx_0 - t2134 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 ; t2134 =
pmf_sqrt ( X [ 281ULL ] * X [ 281ULL ] + 2.7104677895120892E-12 ) ; t2143 =
pmf_sqrt ( X [ 281ULL ] * X [ 281ULL ] + 5.2285258285341208E-12 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 = pmf_sqrt (
X [ 281ULL ] * X [ 281ULL ] + 3.6921614138577959E-12 ) ;
tlu2_1d_linear_linear_value ( & hf_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = hf_efOut [ 0 ] ; t2145 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & if_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = if_efOut
[ 0 ] ; t2147 = - X [ 251ULL ] + X [ 282ULL ] ; t2148 = ( - X [ 250ULL ] + X
[ 281ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 * 100000.0 ;
t2150 = ( - X [ 252ULL ] + X [ 283ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 * 100000.0 ;
t2151 = ( ( ( 1.0 - t2136 ) - t2137 ) * t2145 + U_idx_0 * t2136 ) +
t1785_idx_0 * t2137 ; t2153 = t2145 - X [ 36ULL ] * 0.296802103844292 ; t2145
= t1785_idx_0 - X [ 36ULL ] * 0.25983661262297303 ; t2146 = U_idx_0 - X [
36ULL ] * 0.461523 ; if ( X [ 41ULL ] <= 0.0 ) { t2155 = 0.0 ; } else { t2155
= X [ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) {
t2156 = 0.0 ; } else { t2156 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; }
t2157 = ( ( ( 1.0 - t2155 ) - t2156 ) * 296.802103844292 + t2155 * 461.523 )
+ t2156 * 4124.48151675695 ; t2158 = - ( ( X [ 39ULL ] / ( X [ 42ULL ] == 0.0
? 1.0E-16 : X [ 42ULL ] ) - X [ 302ULL ] / ( X [ 303ULL ] == 0.0 ? 1.0E-16 :
X [ 303ULL ] ) ) * X [ 192ULL ] * t2157 ) / 0.0019634954084936209 ; if ( X [
302ULL ] <= 216.59999999999997 ) { t129 = 216.59999999999997 ; } else { t129
= X [ 302ULL ] >= 623.15 ? 623.15 : X [ 302ULL ] ; } t1854 = t129 * t129 ;
t2165 = ( ( ( 1074.1165326382541 + t129 * - 0.2214565261064077 ) + t1854 *
0.00037212980109010952 ) * ( ( 1.0 - t2155 ) - t2156 ) + ( (
1479.6504774710445 + t129 * 1.200211433705052 ) + t1854 * -
0.00038614513167842338 ) * t2155 ) + ( ( 12825.281119790017 + t129 *
6.9647057412830984 ) + t1854 * - 0.007052486824683288 ) * t2156 ; t2207 =
t2165 - t2157 ; t129 = t2165 / ( t2207 == 0.0 ? 1.0E-16 : t2207 ) ; t2165 =
pmf_sqrt ( t2158 * t2158 * 9.999999999999999E-14 + fabs ( X [ 302ULL ] * t129
* t2157 ) * 1.0E-9 ) ; if ( X [ 299ULL ] <= 0.0 ) { t1854 = 0.0 ; } else {
t1854 = X [ 299ULL ] >= 1.0 ? 1.0 : X [ 299ULL ] ; } if ( X [ 298ULL ] <= 0.0
) { U_idx_1 = 0.0 ; } else { U_idx_1 = X [ 298ULL ] >= 1.0 ? 1.0 : X [ 298ULL
] ; } t1791 [ 0ULL ] = X [ 39ULL ] ; tlu2_linear_nearest_prelookup ( &
jf_efOut . mField0 [ 0ULL ] , & jf_efOut . mField1 [ 0ULL ] , & jf_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t89 = jf_efOut ;
tlu2_1d_linear_nearest_value ( & kf_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = kf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & lf_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = lf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mf_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = mf_efOut [ 0 ] ; zc_int208
= ( ( ( 1.0 - t1854 ) - U_idx_1 ) * t1785_idx_0 + U_idx_0 * t1854 ) +
t1768_idx_0 * U_idx_1 ; t3194 = X [ 303ULL ] * X [ 303ULL ] * t129 ; t131 = -
pmf_sqrt ( fabs ( t3194 / ( t2157 == 0.0 ? 1.0E-16 : t2157 ) / ( X [ 302ULL ]
== 0.0 ? 1.0E-16 : X [ 302ULL ] ) ) ) * 0.0019634954084936209 ; if ( t131 >=
0.0 ) { t2174 = t131 * 100000.0 ; } else { t2174 = - t131 * 100000.0 ; }
t3149 = zc_int208 * 0.0019634954084936209 ; zc_int177 = t2174 * 0.05 / (
t3149 == 0.0 ? 1.0E-16 : t3149 ) ; t2214 = X [ 39ULL ] * t2157 ; piece154 = X
[ 42ULL ] / ( t2214 == 0.0 ? 1.0E-16 : t2214 ) ; t3168 = piece154 *
9.8174770424681068E-6 ; t2177 = t131 * zc_int208 * 11.2 / ( t3168 == 0.0 ?
1.0E-16 : t3168 ) ; t133 = zc_int177 >= 1.0 ? zc_int177 : 1.0 ; t2217 =
pmf_log10 ( 6.9 / ( t133 == 0.0 ? 1.0E-16 : t133 ) + 2.8767404433520813E-5 )
* pmf_log10 ( 6.9 / ( t133 == 0.0 ? 1.0E-16 : t133 ) + 2.8767404433520813E-5
) * 3.24 ; t3209 = piece154 * 3.855314219175531E-7 ; t2174 = t131 * t2174 * (
1.0 / ( t2217 == 0.0 ? 1.0E-16 : t2217 ) ) * 0.175 / ( t3209 == 0.0 ? 1.0E-16
: t3209 ) ; t133 = ( zc_int177 - 2000.0 ) / 2000.0 ; t2179 = t133 * t133 *
3.0 - t133 * t133 * t133 * 2.0 ; if ( zc_int177 <= 2000.0 ) { t133 = t2177 *
1.0E-5 ; } else if ( zc_int177 >= 4000.0 ) { t133 = t2174 * 1.0E-5 ; } else {
t133 = ( ( 1.0 - t2179 ) * t2177 + t2174 * t2179 ) * 1.0E-5 ; } t2165 = - ( X
[ 192ULL ] * t2165 ) / 0.0019634954084936209 * 0.00031622776601683789 + t133
; t2174 = X [ 24ULL ] - X [ 42ULL ] ; t2177 = ( X [ 39ULL ] / ( X [ 42ULL ]
== 0.0 ? 1.0E-16 : X [ 42ULL ] ) - X [ 305ULL ] / ( X [ 306ULL ] == 0.0 ?
1.0E-16 : X [ 306ULL ] ) ) * X [ 304ULL ] * t2157 / 0.0019634954084936209 ;
if ( X [ 305ULL ] <= 216.59999999999997 ) { t133 = 216.59999999999997 ; }
else { t133 = X [ 305ULL ] >= 623.15 ? 623.15 : X [ 305ULL ] ; } t2180 = t133
* t133 ; t2179 = ( ( ( 1074.1165326382541 + t133 * - 0.2214565261064077 ) +
t2180 * 0.00037212980109010952 ) * ( ( 1.0 - t2155 ) - t2156 ) + ( (
1479.6504774710445 + t133 * 1.200211433705052 ) + t2180 * -
0.00038614513167842338 ) * t2155 ) + ( ( 12825.281119790017 + t133 *
6.9647057412830984 ) + t2180 * - 0.007052486824683288 ) * t2156 ; U_idx_0 =
t2179 - t2157 ; t133 = t2179 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2179
= pmf_sqrt ( t2177 * t2177 * 9.999999999999999E-14 + fabs ( X [ 305ULL ] *
t133 * t2157 ) * 1.0E-9 ) ; t3211 = X [ 306ULL ] * X [ 306ULL ] * t133 ;
t2180 = - pmf_sqrt ( fabs ( t3211 / ( t2157 == 0.0 ? 1.0E-16 : t2157 ) / ( X
[ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) ) * 0.0019634954084936209 ; if
( t2180 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke = t2180 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke = - t2180 *
100000.0 ; } t2182 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke * 0.05 / (
t3149 == 0.0 ? 1.0E-16 : t3149 ) ; t2183 = t2180 * zc_int208 * 11.2 / ( t3168
== 0.0 ? 1.0E-16 : t3168 ) ; t2184 = t2182 >= 1.0 ? t2182 : 1.0 ; zc_int231 =
pmf_log10 ( 6.9 / ( t2184 == 0.0 ? 1.0E-16 : t2184 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t2184 == 0.0 ? 1.0E-16 : t2184 ) +
2.8767404433520813E-5 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke = t2180 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke * ( 1.0 / (
zc_int231 == 0.0 ? 1.0E-16 : zc_int231 ) ) * 0.175 / ( t3209 == 0.0 ? 1.0E-16
: t3209 ) ; t2184 = ( t2182 - 2000.0 ) / 2000.0 ; piece170 = t2184 * t2184 *
3.0 - t2184 * t2184 * t2184 * 2.0 ; if ( t2182 <= 2000.0 ) { t2184 = t2183 *
1.0E-5 ; } else if ( t2182 >= 4000.0 ) { t2184 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke * 1.0E-5 ; }
else { t2184 = ( ( 1.0 - piece170 ) * t2183 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke * piece170 )
* 1.0E-5 ; } t2179 = X [ 304ULL ] * t2179 / 0.0019634954084936209 *
0.00031622776601683789 + t2184 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke = X [ 292ULL
] - X [ 42ULL ] ; t1791 [ 0ULL ] = X [ 39ULL ] ; tlu2_linear_linear_prelookup
( & nf_efOut . mField0 [ 0ULL ] , & nf_efOut . mField1 [ 0ULL ] , & nf_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = nf_efOut ;
tlu2_1d_linear_linear_value ( & of_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = of_efOut [ 0 ] ; t2183 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & pf_efOut [ 0ULL ] , & t95 .
mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = pf_efOut
[ 0 ] ; t2184 = t1785_idx_0 ; if ( 1.0 - X [ 41ULL ] >= 0.01 ) { t2186 = 1.0
- X [ 41ULL ] ; } else if ( 1.0 - X [ 41ULL ] >= - 0.1 ) { t2186 = pmf_exp (
( ( 1.0 - X [ 41ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2186 =
1.6701700790245661E-7 ; } piece170 = X [ 40ULL ] / ( t2186 == 0.0 ? 1.0E-16 :
t2186 ) * 3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value
( & qf_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [
0ULL ] ) ; t1785_idx_0 = qf_efOut [ 0 ] ; t2188 = pmf_exp ( pmf_log ( X [
42ULL ] * 100000.0 ) - t1785_idx_0 ) ; if ( t2188 >= 1.0 ) { zc_int260 = (
t2188 - 1.0 ) * 461.523 + piece170 ; t2191 = piece170 / ( zc_int260 == 0.0 ?
1.0E-16 : zc_int260 ) ; } else { t2191 = 1.0 ; } t2244 = t2191 * 0.01 ;
piece170 = ( X [ 41ULL ] - t2191 ) / ( t2244 == 0.0 ? 1.0E-16 : t2244 ) ; if
( X [ 41ULL ] - t2191 <= 0.0 ) { piece170 = 0.0 ; } else if ( X [ 41ULL ] -
t2191 >= t2191 * 0.01 ) { piece170 = X [ 41ULL ] - t2191 ; } else { piece170
= ( X [ 41ULL ] - t2191 ) * ( piece170 * piece170 * 3.0 - piece170 * piece170
* piece170 * 2.0 ) ; } piece154 = piece154 * piece170 *
0.00049087385212340522 / 0.001 ; piece170 = ( t2183 - t2184 ) * piece154 ;
tlu2_1d_linear_nearest_value ( & rf_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = rf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sf_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = sf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tf_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = tf_efOut [ 0 ] ; t2184 =
( ( ( 1.0 - t1854 ) - U_idx_1 ) * t1785_idx_0 + U_idx_0 * t1854 ) +
t1768_idx_0 * U_idx_1 ; t2191 = ( X [ 301ULL ] - X [ 39ULL ] ) * ( t2184 *
0.039269908169872414 / 0.05 ) ; if ( X [ 171ULL ] <= 0.0 ) { piece173 = 0.0 ;
} else { piece173 = X [ 171ULL ] >= 1.0 ? 1.0 : X [ 171ULL ] ; } if ( X [
170ULL ] <= 0.0 ) { t2195 = 0.0 ; } else { t2195 = X [ 170ULL ] >= 1.0 ? 1.0
: X [ 170ULL ] ; } t2196 = ( ( ( 1.0 - piece173 ) - t2195 ) *
296.802103844292 + piece173 * 461.523 ) + t2195 * 4124.48151675695 ;
intrm_sf_mf_626 = X [ 171ULL ] * 461.523 / ( t2196 == 0.0 ? 1.0E-16 : t2196 )
; if ( intrm_sf_mf_626 <= 0.0 ) { intrm_sf_mf_676 = 0.0 ; } else {
intrm_sf_mf_676 = intrm_sf_mf_626 >= 1.0 ? 1.0 : intrm_sf_mf_626 ; }
intrm_sf_mf_626 = X [ 170ULL ] * 4124.48151675695 / ( t2196 == 0.0 ? 1.0E-16
: t2196 ) ; if ( intrm_sf_mf_626 <= 0.0 ) { t2199 = 0.0 ; } else { t2199 =
intrm_sf_mf_626 >= 1.0 ? 1.0 : intrm_sf_mf_626 ; } t1791 [ 0ULL ] = X [
169ULL ] ; tlu2_linear_nearest_prelookup ( & uf_efOut . mField0 [ 0ULL ] , &
uf_efOut . mField1 [ 0ULL ] , & uf_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = uf_efOut ; tlu2_1d_linear_nearest_value ( &
vf_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = vf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
wf_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = wf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xf_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = xf_efOut [ 0 ] ; intrm_sf_mf_626 = ( ( ( 1.0 -
intrm_sf_mf_676 ) - t2199 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_676 ) +
t1768_idx_0 * t2199 ; tlu2_1d_linear_nearest_value ( & yf_efOut [ 0ULL ] , &
t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
yf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ag_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ag_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & bg_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = bg_efOut [ 0
] ; t2200 = ( ( ( 1.0 - t1854 ) - U_idx_1 ) * t1785_idx_0 + U_idx_0 * t1854 )
+ t1768_idx_0 * U_idx_1 ; tlu2_1d_linear_nearest_value ( & cg_efOut [ 0ULL ]
, & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0
= cg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & dg_efOut [ 0ULL ] , & t81
. mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = dg_efOut [
0 ] ; tlu2_1d_linear_nearest_value ( & eg_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField12 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = eg_efOut [ 0
] ; t1854 = ( ( ( 1.0 - intrm_sf_mf_676 ) - t2199 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_676 ) + t1768_idx_0 * t2199 ; U_idx_1 = ( - X [ 192ULL ] - X [
304ULL ] ) / 2.0 ; tlu2_1d_linear_nearest_value ( & fg_efOut [ 0ULL ] , & t81
. mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
fg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & gg_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = gg_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & hg_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = hg_efOut [ 0 ]
; U_idx_0 = ( zc_int208 + ( ( ( ( 1.0 - intrm_sf_mf_676 ) - t2199 ) *
t1785_idx_0 + U_idx_0 * intrm_sf_mf_676 ) + t1768_idx_0 * t2199 ) ) / 2.0 *
0.0019634954084936209 ; intrm_sf_mf_676 = ( U_idx_1 >= 0.0 ? U_idx_1 : 0.0 )
* 0.05 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2199 = intrm_sf_mf_676 >=
0.0 ? intrm_sf_mf_676 : - intrm_sf_mf_676 ; intrm_sf_mf_810 = t2199 > 1000.0
? t2199 : 1000.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I =
intrm_sf_mf_626 + t2200 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I / 2.0 > 0.5 ) {
intrm_sf_mf_638 = ( intrm_sf_mf_626 + t2200 ) / 2.0 ; } else {
intrm_sf_mf_638 = 0.5 ; } t2255 = pmf_log10 ( 6.9 / ( intrm_sf_mf_810 == 0.0
? 1.0E-16 : intrm_sf_mf_810 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_810 == 0.0 ? 1.0E-16 : intrm_sf_mf_810 ) + 2.8767404433520813E-5
) * 3.24 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 =
1.0 / ( t2255 == 0.0 ? 1.0E-16 : t2255 ) ; t2257 = ( pmf_pow (
intrm_sf_mf_638 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 / 8.0 ) *
12.7 + 1.0 ; intrm_sf_mf_810 = ( intrm_sf_mf_810 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 / 8.0 ) *
intrm_sf_mf_638 / ( t2257 == 0.0 ? 1.0E-16 : t2257 ) ; intrm_sf_mf_638 = (
t2199 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 =
intrm_sf_mf_638 * intrm_sf_mf_638 * 3.0 - intrm_sf_mf_638 * intrm_sf_mf_638 *
intrm_sf_mf_638 * 2.0 ; if ( t2199 <= 2000.0 ) { intrm_sf_mf_638 = 3.66 ; }
else if ( t2199 >= 4000.0 ) { intrm_sf_mf_638 = intrm_sf_mf_810 ; } else {
intrm_sf_mf_638 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ) * 3.66 +
intrm_sf_mf_810 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I / 2.0 ; if ( t2199 >
intrm_sf_mf_638 * 0.039269908169872414 / 0.0019634954084936209 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) /
30.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = (
intrm_sf_mf_626 + t2200 ) / 2.0 ; intrm_sf_mf_810 = intrm_sf_mf_638 *
0.039269908169872414 / ( t2199 == 0.0 ? 1.0E-16 : t2199 ) /
0.0019634954084936209 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I ) ; } else {
intrm_sf_mf_810 = 30.0 ; } intrm_sf_mf_626 = ( X [ 301ULL ] - X [ 169ULL ] )
* ( 1.0 - pmf_exp ( - intrm_sf_mf_810 ) ) ; t1854 = intrm_sf_mf_676 *
0.0019634954084936209 / 0.05 * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I / 2.0 ) * ( ( t1854 +
t2184 ) / 2.0 ) * intrm_sf_mf_626 ; if ( X [ 294ULL ] <= 0.0 ) {
intrm_sf_mf_626 = 0.0 ; } else { intrm_sf_mf_626 = X [ 294ULL ] >= 1.0 ? 1.0
: X [ 294ULL ] ; } if ( X [ 293ULL ] <= 0.0 ) { intrm_sf_mf_676 = 0.0 ; }
else { intrm_sf_mf_676 = X [ 293ULL ] >= 1.0 ? 1.0 : X [ 293ULL ] ; } t2199 =
( ( ( 1.0 - intrm_sf_mf_626 ) - intrm_sf_mf_676 ) * 296.802103844292 +
intrm_sf_mf_626 * 461.523 ) + intrm_sf_mf_676 * 4124.48151675695 ;
intrm_sf_mf_810 = X [ 294ULL ] * 461.523 / ( t2199 == 0.0 ? 1.0E-16 : t2199 )
; if ( intrm_sf_mf_810 <= 0.0 ) { intrm_sf_mf_638 = 0.0 ; } else {
intrm_sf_mf_638 = intrm_sf_mf_810 >= 1.0 ? 1.0 : intrm_sf_mf_810 ; }
intrm_sf_mf_810 = X [ 293ULL ] * 4124.48151675695 / ( t2199 == 0.0 ? 1.0E-16
: t2199 ) ; if ( intrm_sf_mf_810 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 =
intrm_sf_mf_810 >= 1.0 ? 1.0 : intrm_sf_mf_810 ; } t1791 [ 0ULL ] = X [
291ULL ] ; tlu2_linear_nearest_prelookup ( & ig_efOut . mField0 [ 0ULL ] , &
ig_efOut . mField1 [ 0ULL ] , & ig_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = ig_efOut ; tlu2_1d_linear_nearest_value ( &
jg_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = jg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
kg_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = kg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & lg_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = lg_efOut [ 0 ] ; intrm_sf_mf_810 = ( ( ( 1.0 -
intrm_sf_mf_638 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ) *
t1785_idx_0 + U_idx_0 * intrm_sf_mf_638 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ;
tlu2_1d_linear_nearest_value ( & mg_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = mg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ng_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ng_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & og_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = og_efOut [ 0 ] ; t2207 =
( ( ( 1.0 - intrm_sf_mf_638 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ) *
t1785_idx_0 + U_idx_0 * intrm_sf_mf_638 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ; t2209 =
U_idx_1 <= 0.0 ? U_idx_1 : 0.0 ; tlu2_1d_linear_nearest_value ( & pg_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = pg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qg_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = qg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rg_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = rg_efOut [ 0 ] ; U_idx_1 = ( ( ( 1.0 - intrm_sf_mf_638 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ) *
t1785_idx_0 + U_idx_0 * intrm_sf_mf_638 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ; t2276 = (
zc_int208 + U_idx_1 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_638 = -
t2209 * 0.05 / ( t2276 == 0.0 ? 1.0E-16 : t2276 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 =
intrm_sf_mf_638 >= 0.0 ? intrm_sf_mf_638 : - intrm_sf_mf_638 ; t2209 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 : 1000.0 ;
t2277 = t2200 + intrm_sf_mf_810 ; if ( t2277 / 2.0 > 0.5 ) { t2211 = ( t2200
+ intrm_sf_mf_810 ) / 2.0 ; } else { t2211 = 0.5 ; } zc_int281 = pmf_log10 (
6.9 / ( t2209 == 0.0 ? 1.0E-16 : t2209 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( t2209 == 0.0 ? 1.0E-16 : t2209 ) + 2.8767404433520813E-5
) * 3.24 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I = 1.0 / (
zc_int281 == 0.0 ? 1.0E-16 : zc_int281 ) ; t2281 = ( pmf_pow ( t2211 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I / 8.0 ) * 12.7 + 1.0
; t2209 = ( t2209 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I / 8.0 ) * t2211 / (
t2281 == 0.0 ? 1.0E-16 : t2281 ) ; t2211 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 - 2000.0 ) /
2000.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I = t2211 *
t2211 * 3.0 - t2211 * t2211 * t2211 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 <= 2000.0 ) {
t2211 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 >= 4000.0 ) {
t2211 = t2209 ; } else { t2211 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I ) * 3.66 + t2209 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I ; } t2286 = t2277 /
2.0 ; if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 >
t2211 * 0.039269908169872414 / 0.0019634954084936209 / ( t2286 == 0.0 ?
1.0E-16 : t2286 ) / 30.0 ) { t2292 = ( t2200 + intrm_sf_mf_810 ) / 2.0 ;
t2209 = t2211 * 0.039269908169872414 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ) /
0.0019634954084936209 / ( t2292 == 0.0 ? 1.0E-16 : t2292 ) ; } else { t2209 =
30.0 ; } t2200 = ( X [ 301ULL ] - X [ 291ULL ] ) * ( 1.0 - pmf_exp ( - t2209
) ) ; t2200 = t1854 + intrm_sf_mf_638 * 0.0019634954084936209 / 0.05 * (
t2277 / 2.0 ) * ( ( t2184 + t2207 ) / 2.0 ) * t2200 ; t1854 = pmf_sqrt ( X [
192ULL ] * X [ 192ULL ] + 5.0900279888093953E-12 ) ; t2184 = pmf_sqrt ( X [
192ULL ] * X [ 192ULL ] + 5.8094731428156895E-13 ) ; intrm_sf_mf_638 =
pmf_sqrt ( X [ 192ULL ] * X [ 192ULL ] + 4.1024015709531055E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 = pmf_sqrt (
X [ 304ULL ] * X [ 304ULL ] + 5.0900279888093953E-12 ) ; t2209 = pmf_sqrt ( X
[ 304ULL ] * X [ 304ULL ] + 5.8094731428156895E-13 ) ; t2211 = pmf_sqrt ( X [
304ULL ] * X [ 304ULL ] + 4.1024015709531055E-13 ) ;
tlu2_1d_linear_linear_value ( & sg_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = sg_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & tg_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = tg_efOut [ 0 ] ; t2218 = -
X [ 193ULL ] + X [ 312ULL ] ; t2220 = ( ( - X [ 192ULL ] + X [ 304ULL ] ) +
U_idx_5 ) - piece154 * 100000.0 ; t2221 = ( ( - X [ 194ULL ] + X [ 313ULL ] )
+ U_idx_5 ) - piece154 * 100000.0 ; t2226 = ( ( ( 1.0 - t2155 ) - t2156 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I + t2183 * t2155 ) +
t1785_idx_0 * t2156 ; t2229 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I - X [ 39ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I =
t1785_idx_0 - X [ 39ULL ] * 4.12448151675695 ; t2217 = t2183 - X [ 39ULL ] *
0.461523 ; if ( X [ 8ULL ] <= 0.0 ) { t2183 = 0.0 ; } else { t2183 = X [ 8ULL
] >= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) { t2231 = 0.0 ; }
else { t2231 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ; } t2233 = ( ( ( 1.0 -
t2183 ) - t2231 ) * 296.802103844292 + t2183 * 461.523 ) + t2231 *
4124.48151675695 ; zc_int231 = - ( ( X [ 6ULL ] / ( X [ 43ULL ] == 0.0 ?
1.0E-16 : X [ 43ULL ] ) - X [ 316ULL ] / ( X [ 317ULL ] == 0.0 ? 1.0E-16 : X
[ 317ULL ] ) ) * X [ 304ULL ] * t2233 ) / 0.32 ; if ( X [ 316ULL ] <=
216.59999999999997 ) { zc_int242 = 216.59999999999997 ; } else { zc_int242 =
X [ 316ULL ] >= 623.15 ? 623.15 : X [ 316ULL ] ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 = zc_int242 *
zc_int242 ; zc_int239 = ( ( ( 1074.1165326382541 + zc_int242 * -
0.2214565261064077 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 *
0.00037212980109010952 ) * ( ( 1.0 - t2183 ) - t2231 ) + ( (
1479.6504774710445 + zc_int242 * 1.200211433705052 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 * -
0.00038614513167842338 ) * t2183 ) + ( ( 12825.281119790017 + zc_int242 *
6.9647057412830984 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 * -
0.007052486824683288 ) * t2231 ; intrm_sf_mf_973 = zc_int239 - t2233 ;
zc_int242 = zc_int239 / ( intrm_sf_mf_973 == 0.0 ? 1.0E-16 : intrm_sf_mf_973
) ; zc_int239 = pmf_sqrt ( zc_int231 * zc_int231 * 9.999999999999999E-14 +
fabs ( X [ 316ULL ] * zc_int242 * t2233 ) * 1.0E-9 ) ; if ( X [ 77ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 = 0.0
; } else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 =
X [ 77ULL ] >= 1.0 ? 1.0 : X [ 77ULL ] ; } if ( X [ 76ULL ] <= 0.0 ) { t2240
= 0.0 ; } else { t2240 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; } t1791 [
0ULL ] = X [ 6ULL ] ; tlu2_linear_nearest_prelookup ( & ug_efOut . mField0 [
0ULL ] , & ug_efOut . mField1 [ 0ULL ] , & ug_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t95 = ug_efOut ; tlu2_1d_linear_nearest_value ( &
vg_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = vg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & wg_efOut
[ 0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = wg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xg_efOut [
0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = xg_efOut [ 0 ] ; t2241 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) - t2240 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) +
t1768_idx_0 * t2240 ; t3241 = X [ 317ULL ] * X [ 317ULL ] * zc_int242 ;
zc_int260 = - pmf_sqrt ( fabs ( t3241 / ( t2233 == 0.0 ? 1.0E-16 : t2233 ) /
( X [ 316ULL ] == 0.0 ? 1.0E-16 : X [ 316ULL ] ) ) ) * 0.32 ; if ( zc_int260
>= 0.0 ) { t2243 = zc_int260 * 100000.0 ; } else { t2243 = - zc_int260 *
100000.0 ; } t2306 = t2241 * 0.32 ; t2244 = t2243 * 0.01 / ( t2306 == 0.0 ?
1.0E-16 : t2306 ) ; t2308 = X [ 6ULL ] * t2233 ; t2245 = X [ 43ULL ] / (
t2308 == 0.0 ? 1.0E-16 : t2308 ) ; t2310 = t2245 * 6.4000000000000011E-5 ;
t2246 = zc_int260 * t2241 * 2.9973120849090416 / ( t2310 == 0.0 ? 1.0E-16 :
t2310 ) ; zc_int275 = t2244 >= 1.0 ? t2244 : 1.0 ; t2311 = pmf_log10 ( 6.9 /
( zc_int275 == 0.0 ? 1.0E-16 : zc_int275 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int275 == 0.0 ? 1.0E-16 : zc_int275 ) +
0.00017169489553429715 ) * 3.24 ; t2313 = t2245 * 0.0020480000000000003 ;
t2243 = zc_int260 * t2243 * ( 1.0 / ( t2311 == 0.0 ? 1.0E-16 : t2311 ) ) *
0.046833001326703774 / ( t2313 == 0.0 ? 1.0E-16 : t2313 ) ; zc_int275 = (
t2244 - 2000.0 ) / 2000.0 ; t2248 = zc_int275 * zc_int275 * 3.0 - zc_int275 *
zc_int275 * zc_int275 * 2.0 ; if ( t2244 <= 2000.0 ) { zc_int275 = t2246 *
1.0E-5 ; } else if ( t2244 >= 4000.0 ) { zc_int275 = t2243 * 1.0E-5 ; } else
{ zc_int275 = ( ( 1.0 - t2248 ) * t2246 + t2243 * t2248 ) * 1.0E-5 ; }
zc_int239 = - ( X [ 304ULL ] * zc_int239 ) / 0.32 * 0.00031622776601683789 +
zc_int275 ; t2243 = X [ 292ULL ] - X [ 43ULL ] ; t2246 = ( X [ 6ULL ] / ( X [
43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) - X [ 319ULL ] / ( X [ 320ULL ] ==
0.0 ? 1.0E-16 : X [ 320ULL ] ) ) * X [ 318ULL ] * t2233 / 0.32 ; if ( X [
319ULL ] <= 216.59999999999997 ) { zc_int275 = 216.59999999999997 ; } else {
zc_int275 = X [ 319ULL ] >= 623.15 ? 623.15 : X [ 319ULL ] ; } t2249 =
zc_int275 * zc_int275 ; t2248 = ( ( ( 1074.1165326382541 + zc_int275 * -
0.2214565261064077 ) + t2249 * 0.00037212980109010952 ) * ( ( 1.0 - t2183 ) -
t2231 ) + ( ( 1479.6504774710445 + zc_int275 * 1.200211433705052 ) + t2249 *
- 0.00038614513167842338 ) * t2183 ) + ( ( 12825.281119790017 + zc_int275 *
6.9647057412830984 ) + t2249 * - 0.007052486824683288 ) * t2231 ; t2321 =
t2248 - t2233 ; zc_int275 = t2248 / ( t2321 == 0.0 ? 1.0E-16 : t2321 ) ;
t2248 = pmf_sqrt ( t2246 * t2246 * 9.999999999999999E-14 + fabs ( X [ 319ULL
] * zc_int275 * t2233 ) * 1.0E-9 ) ; t2322 = X [ 320ULL ] * X [ 320ULL ] *
zc_int275 ; t2249 = - pmf_sqrt ( fabs ( t2322 / ( t2233 == 0.0 ? 1.0E-16 :
t2233 ) / ( X [ 319ULL ] == 0.0 ? 1.0E-16 : X [ 319ULL ] ) ) ) * 0.32 ; if (
t2249 >= 0.0 ) { t2250 = t2249 * 100000.0 ; } else { t2250 = - t2249 *
100000.0 ; } t2251 = t2250 * 0.01 / ( t2306 == 0.0 ? 1.0E-16 : t2306 ) ;
U_idx_0 = t2249 * t2241 * 2.9973120849090416 / ( t2310 == 0.0 ? 1.0E-16 :
t2310 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = t2251 >=
1.0 ? t2251 : 1.0 ; t3598 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) +
0.00017169489553429715 ) * 3.24 ; t2250 = t2249 * t2250 * ( 1.0 / ( t3598 ==
0.0 ? 1.0E-16 : t3598 ) ) * 0.046833001326703774 / ( t2313 == 0.0 ? 1.0E-16 :
t2313 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = ( t2251 -
2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I * 2.0 ; if ( t2251 <=
2000.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = U_idx_0
* 1.0E-5 ; } else if ( t2251 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = t2250 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 ) * U_idx_0 +
t2250 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 ) *
1.0E-5 ; } t2248 = X [ 318ULL ] * t2248 / 0.32 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ; t2250 = X [ 69ULL ]
- X [ 43ULL ] ; t1791 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup (
& yg_efOut . mField0 [ 0ULL ] , & yg_efOut . mField1 [ 0ULL ] , & yg_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t89 = yg_efOut ;
tlu2_1d_linear_linear_value ( & ah_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ah_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & bh_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = bh_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 = t1785_idx_0
; if ( 1.0 - X [ 8ULL ] >= 0.01 ) { t2256 = 1.0 - X [ 8ULL ] ; } else if (
1.0 - X [ 8ULL ] >= - 0.1 ) { t2256 = pmf_exp ( ( ( 1.0 - X [ 8ULL ] ) - 0.01
) / 0.01 ) * 0.01 ; } else { t2256 = 1.6701700790245661E-7 ; } t2255 = X [
7ULL ] / ( t2256 == 0.0 ? 1.0E-16 : t2256 ) * 3827.6794129126583 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & ch_efOut [ 0ULL ] , & t89
. mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
ch_efOut [ 0 ] ; t2257 = pmf_exp ( pmf_log ( X [ 43ULL ] * 100000.0 ) -
t1785_idx_0 ) ; if ( t2257 >= 1.0 ) { t2336 = ( t2257 - 1.0 ) * 461.523 +
t2255 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond = t2255 / (
t2336 == 0.0 ? 1.0E-16 : t2336 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond = 1.0 ; } t3596 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond * 0.01 ; t2255 = ( X
[ 8ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond ) / (
t3596 == 0.0 ? 1.0E-16 : t3596 ) ; if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond <= 0.0 ) { t2255 =
0.0 ; } else if ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond * 0.01 ) { t2255 = X
[ 8ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond ; } else
{ t2255 = ( X [ 8ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond ) * ( t2255 * t2255
* 3.0 - t2255 * t2255 * t2255 * 2.0 ) ; } t2245 = t2245 * t2255 *
0.026773120849090417 / 0.001 ; t2255 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 ) * t2245 ;
tlu2_1d_linear_nearest_value ( & dh_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = dh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & eh_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = eh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fh_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = fh_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) - t2240 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) +
t1768_idx_0 * t2240 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond = ( 323.15 - X [
6ULL ] ) * ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0
* 10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( & gh_efOut [
0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = gh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
hh_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = hh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ih_efOut [
0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = ih_efOut [ 0 ] ; t2259 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) - t2240 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) +
t1768_idx_0 * t2240 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 = ( - X [
304ULL ] - X [ 318ULL ] ) / 2.0 ; t2344 = ( U_idx_1 + t2241 ) / 2.0 * 0.32 ;
U_idx_1 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4
>= 0.0 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 :
0.0 ) * 0.01 / ( t2344 == 0.0 ? 1.0E-16 : t2344 ) ; t2240 = U_idx_1 >= 0.0 ?
U_idx_1 : - U_idx_1 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = t2240 >
1000.0 ? t2240 : 1000.0 ; t3289 = intrm_sf_mf_810 + t2259 ; if ( t3289 / 2.0
> 0.5 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = (
intrm_sf_mf_810 + t2259 ) / 2.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = 0.5 ; }
t3597 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * 3.24 ; t2263 = 1.0 / ( t3597 == 0.0 ? 1.0E-16 :
t3597 ) ; t2349 = ( pmf_pow (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2263 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 - 1000.0 ) *
( t2263 / 8.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 / ( t2349 ==
0.0 ? 1.0E-16 : t2349 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = ( t2240 -
2000.0 ) / 2000.0 ; t2263 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 * 2.0 ; if (
t2240 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = 3.66 ; }
else if ( t2240 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = ( 1.0 -
t2263 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 * t2263 ; }
t3165 = t3289 / 2.0 ; if ( t2240 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 *
10.709248339636167 / 0.32 / ( t3165 == 0.0 ? 1.0E-16 : t3165 ) / 30.0 ) {
intrm_sf_mf_1050 = ( intrm_sf_mf_810 + t2259 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 *
10.709248339636167 / ( t2240 == 0.0 ? 1.0E-16 : t2240 ) / 0.32 / (
intrm_sf_mf_1050 == 0.0 ? 1.0E-16 : intrm_sf_mf_1050 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = 30.0 ; }
intrm_sf_mf_810 = ( 323.15 - X [ 291ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) ) ; U_idx_1
= U_idx_1 * 0.32 / 0.01 * ( t3289 / 2.0 ) * ( ( t2207 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 ) / 2.0 ) *
intrm_sf_mf_810 ; if ( X [ 71ULL ] <= 0.0 ) { intrm_sf_mf_810 = 0.0 ; } else
{ intrm_sf_mf_810 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL
] <= 0.0 ) { t2207 = 0.0 ; } else { t2207 = X [ 70ULL ] >= 1.0 ? 1.0 : X [
70ULL ] ; } t2240 = ( ( ( 1.0 - intrm_sf_mf_810 ) - t2207 ) *
296.802103844292 + intrm_sf_mf_810 * 461.523 ) + t2207 * 4124.48151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = X [ 71ULL ]
* 461.523 / ( t2240 == 0.0 ? 1.0E-16 : t2240 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = X [ 70ULL ]
* 4124.48151675695 / ( t2240 == 0.0 ? 1.0E-16 : t2240 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 <= 0.0 ) {
t2263 = 0.0 ; } else { t2263 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ; } t1791 [
0ULL ] = X [ 68ULL ] ; tlu2_linear_nearest_prelookup ( & jh_efOut . mField0 [
0ULL ] , & jh_efOut . mField1 [ 0ULL ] , & jh_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = jh_efOut ; tlu2_1d_linear_nearest_value ( &
kh_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = kh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
lh_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = lh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mh_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = mh_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) - t2263 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) +
t1768_idx_0 * t2263 ; tlu2_1d_linear_nearest_value ( & nh_efOut [ 0ULL ] , &
t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
nh_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & oh_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = oh_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ph_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField12 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ph_efOut [ 0
] ; t2264 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) - t2263 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) +
t1768_idx_0 * t2263 ; t2265 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 <= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 : 0.0 ;
tlu2_1d_linear_nearest_value ( & qh_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = qh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rh_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = rh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sh_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = sh_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) - t2263 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) +
t1768_idx_0 * t2263 ; t2368 = ( t2241 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) / 2.0 *
0.32 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = -
t2265 * 0.01 / ( t2368 == 0.0 ? 1.0E-16 : t2368 ) ; t2263 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ; t2265 =
t2263 > 1000.0 ? t2263 : 1000.0 ; t2369 = t2259 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ; if ( t2369
/ 2.0 > 0.5 ) { t2266 = ( t2259 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) / 2.0 ; }
else { t2266 = 0.5 ; } t2371 = pmf_log10 ( 6.9 / ( t2265 == 0.0 ? 1.0E-16 :
t2265 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2265 == 0.0 ?
1.0E-16 : t2265 ) + 0.00017169489553429715 ) * 3.24 ; t2267 = 1.0 / ( t2371
== 0.0 ? 1.0E-16 : t2371 ) ; t2373 = ( pmf_pow ( t2266 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t2267 / 8.0 ) * 12.7 + 1.0 ; t2265 = ( t2265 - 1000.0
) * ( t2267 / 8.0 ) * t2266 / ( t2373 == 0.0 ? 1.0E-16 : t2373 ) ; t2266 = (
t2263 - 2000.0 ) / 2000.0 ; t2267 = t2266 * t2266 * 3.0 - t2266 * t2266 *
t2266 * 2.0 ; if ( t2263 <= 2000.0 ) { t2266 = 3.66 ; } else if ( t2263 >=
4000.0 ) { t2266 = t2265 ; } else { t2266 = ( 1.0 - t2267 ) * 3.66 + t2265 *
t2267 ; } t2378 = t2369 / 2.0 ; if ( t2263 > t2266 * 10.709248339636167 /
0.32 / ( t2378 == 0.0 ? 1.0E-16 : t2378 ) / 30.0 ) { t2384 = ( t2259 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) / 2.0 ;
t2265 = t2266 * 10.709248339636167 / ( t2263 == 0.0 ? 1.0E-16 : t2263 ) /
0.32 / ( t2384 == 0.0 ? 1.0E-16 : t2384 ) ; } else { t2265 = 30.0 ; } t2259 =
( 323.15 - X [ 68ULL ] ) * ( 1.0 - pmf_exp ( - t2265 ) ) ; t2259 = U_idx_1 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 * 0.32 / 0.01
* ( t2369 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 + t2264 ) /
2.0 ) * t2259 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 = pmf_sqrt (
X [ 304ULL ] * X [ 304ULL ] + 4.3455507383574884E-7 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 = pmf_sqrt (
X [ 304ULL ] * X [ 304ULL ] + 4.9597684650720062E-8 ) ; t2263 = pmf_sqrt ( X
[ 304ULL ] * X [ 304ULL ] + 3.5023764535063275E-8 ) ; t2265 = pmf_sqrt ( X [
318ULL ] * X [ 318ULL ] + 4.3455507383574884E-7 ) ; t2266 = pmf_sqrt ( X [
318ULL ] * X [ 318ULL ] + 4.9597684650720062E-8 ) ; t2267 = pmf_sqrt ( X [
318ULL ] * X [ 318ULL ] + 3.5023764535063275E-8 ) ;
tlu2_1d_linear_linear_value ( & th_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = th_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & uh_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = uh_efOut [ 0 ] ; t2271 = -
X [ 312ULL ] + X [ 326ULL ] ; t2272 = ( - X [ 304ULL ] + X [ 318ULL ] ) -
t2245 * 100000.0 ; t2273 = ( - X [ 313ULL ] + X [ 327ULL ] ) - t2245 *
100000.0 ; t2274 = ( ( ( 1.0 - t2183 ) - t2231 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I * t2183 ) +
t1785_idx_0 * t2231 ; t2276 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - X [ 6ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I =
t1785_idx_0 - X [ 6ULL ] * 4.12448151675695 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I - X [ 6ULL ] *
0.461523 ; if ( X [ 11ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I = X [ 11ULL ] >= 1.0
? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) { t2277 = 0.0 ; } else {
t2277 = X [ 10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ; } t2278 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) - t2277 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I *
461.523 ) + t2277 * 4124.48151675695 ; zc_int281 = - ( ( X [ 9ULL ] / ( X [
44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 330ULL ] / ( X [ 331ULL ] ==
0.0 ? 1.0E-16 : X [ 331ULL ] ) ) * X [ 318ULL ] * t2278 ) / 0.32 ; if ( X [
330ULL ] <= 216.59999999999997 ) { zc_int286 = 216.59999999999997 ; } else {
zc_int286 = X [ 330ULL ] >= 623.15 ? 623.15 : X [ 330ULL ] ; } t2282 =
zc_int286 * zc_int286 ; t2281 = ( ( ( 1074.1165326382541 + zc_int286 * -
0.2214565261064077 ) + t2282 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) - t2277 ) + ( (
1479.6504774710445 + zc_int286 * 1.200211433705052 ) + t2282 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) + ( (
12825.281119790017 + zc_int286 * 6.9647057412830984 ) + t2282 * -
0.007052486824683288 ) * t2277 ; intrm_sf_mf_1210 = t2281 - t2278 ; zc_int286
= t2281 / ( intrm_sf_mf_1210 == 0.0 ? 1.0E-16 : intrm_sf_mf_1210 ) ; t2281 =
pmf_sqrt ( zc_int281 * zc_int281 * 9.999999999999999E-14 + fabs ( X [ 330ULL
] * zc_int286 * t2278 ) * 1.0E-9 ) ; if ( X [ 82ULL ] <= 0.0 ) { t2282 = 0.0
; } else { t2282 = X [ 82ULL ] >= 1.0 ? 1.0 : X [ 82ULL ] ; } if ( X [ 81ULL
] <= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total
= 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total = X [ 81ULL ]
>= 1.0 ? 1.0 : X [ 81ULL ] ; } t1791 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_nearest_prelookup ( & vh_efOut . mField0 [ 0ULL ] , & vh_efOut .
mField1 [ 0ULL ] , & vh_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = vh_efOut ; tlu2_1d_linear_nearest_value ( & wh_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wh_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & xh_efOut [ 0ULL ] , & t89 . mField0
[ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = xh_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yh_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = yh_efOut [ 0 ] ; t2285 = (
( ( 1.0 - t2282 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ) *
t1785_idx_0 + U_idx_0 * t2282 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ; t2394 = X [
331ULL ] * X [ 331ULL ] * zc_int286 ; t2286 = - pmf_sqrt ( fabs ( t2394 / (
t2278 == 0.0 ? 1.0E-16 : t2278 ) / ( X [ 330ULL ] == 0.0 ? 1.0E-16 : X [
330ULL ] ) ) ) * 0.32 ; if ( t2286 >= 0.0 ) { t2287 = t2286 * 100000.0 ; }
else { t2287 = - t2286 * 100000.0 ; } t2398 = t2285 * 0.32 ; t2288 = t2287 *
0.01 / ( t2398 == 0.0 ? 1.0E-16 : t2398 ) ; t2400 = X [ 9ULL ] * t2278 ;
t2289 = X [ 44ULL ] / ( t2400 == 0.0 ? 1.0E-16 : t2400 ) ; t2402 = t2289 *
6.4000000000000011E-5 ; t2290 = t2286 * t2285 * 2.9973120849090416 / ( t2402
== 0.0 ? 1.0E-16 : t2402 ) ; t2291 = t2288 >= 1.0 ? t2288 : 1.0 ; t3435 =
pmf_log10 ( 6.9 / ( t2291 == 0.0 ? 1.0E-16 : t2291 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2291 == 0.0 ? 1.0E-16 : t2291 ) +
0.00017169489553429715 ) * 3.24 ; t2405 = t2289 * 0.0020480000000000003 ;
t2287 = t2286 * t2287 * ( 1.0 / ( t3435 == 0.0 ? 1.0E-16 : t3435 ) ) *
0.046833001326703774 / ( t2405 == 0.0 ? 1.0E-16 : t2405 ) ; t2291 = ( t2288 -
2000.0 ) / 2000.0 ; t2292 = t2291 * t2291 * 3.0 - t2291 * t2291 * t2291 * 2.0
; if ( t2288 <= 2000.0 ) { t2291 = t2290 * 1.0E-5 ; } else if ( t2288 >=
4000.0 ) { t2291 = t2287 * 1.0E-5 ; } else { t2291 = ( ( 1.0 - t2292 ) *
t2290 + t2287 * t2292 ) * 1.0E-5 ; } t2281 = - ( X [ 318ULL ] * t2281 ) /
0.32 * 0.00031622776601683789 + t2291 ; t2287 = X [ 69ULL ] - X [ 44ULL ] ;
t2290 = ( X [ 9ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [
332ULL ] / ( X [ 333ULL ] == 0.0 ? 1.0E-16 : X [ 333ULL ] ) ) * X [ 138ULL ]
* t2278 / 0.32 ; if ( X [ 332ULL ] <= 216.59999999999997 ) { t2291 =
216.59999999999997 ; } else { t2291 = X [ 332ULL ] >= 623.15 ? 623.15 : X [
332ULL ] ; } t1869 = t2291 * t2291 ; t2292 = ( ( ( 1074.1165326382541 + t2291
* - 0.2214565261064077 ) + t1869 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) - t2277 ) + ( (
1479.6504774710445 + t2291 * 1.200211433705052 ) + t1869 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) + ( (
12825.281119790017 + t2291 * 6.9647057412830984 ) + t1869 * -
0.007052486824683288 ) * t2277 ; t3516 = t2292 - t2278 ; t2291 = t2292 / (
t3516 == 0.0 ? 1.0E-16 : t3516 ) ; t2292 = pmf_sqrt ( t2290 * t2290 *
9.999999999999999E-14 + fabs ( X [ 332ULL ] * t2291 * t2278 ) * 1.0E-9 ) ;
t2414 = X [ 333ULL ] * X [ 333ULL ] * t2291 ; t1869 = - pmf_sqrt ( fabs (
t2414 / ( t2278 == 0.0 ? 1.0E-16 : t2278 ) / ( X [ 332ULL ] == 0.0 ? 1.0E-16
: X [ 332ULL ] ) ) ) * 0.32 ; if ( t1869 >= 0.0 ) { intrm_sf_mf_863 = t1869 *
100000.0 ; } else { intrm_sf_mf_863 = - t1869 * 100000.0 ; } piece231 =
intrm_sf_mf_863 * 0.01 / ( t2398 == 0.0 ? 1.0E-16 : t2398 ) ; U_idx_0 = t1869
* t2285 * 2.9973120849090416 / ( t2402 == 0.0 ? 1.0E-16 : t2402 ) ;
intrm_sf_mf_973 = piece231 >= 1.0 ? piece231 : 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = pmf_log10 ( 6.9 /
( intrm_sf_mf_973 == 0.0 ? 1.0E-16 : intrm_sf_mf_973 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_973 == 0.0 ?
1.0E-16 : intrm_sf_mf_973 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_863 = t1869 * intrm_sf_mf_863 * ( 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) ) *
0.046833001326703774 / ( t2405 == 0.0 ? 1.0E-16 : t2405 ) ; intrm_sf_mf_973 =
( piece231 - 2000.0 ) / 2000.0 ; t2303 = intrm_sf_mf_973 * intrm_sf_mf_973 *
3.0 - intrm_sf_mf_973 * intrm_sf_mf_973 * intrm_sf_mf_973 * 2.0 ; if (
piece231 <= 2000.0 ) { intrm_sf_mf_973 = U_idx_0 * 1.0E-5 ; } else if (
piece231 >= 4000.0 ) { intrm_sf_mf_973 = intrm_sf_mf_863 * 1.0E-5 ; } else {
intrm_sf_mf_973 = ( ( 1.0 - t2303 ) * U_idx_0 + intrm_sf_mf_863 * t2303 ) *
1.0E-5 ; } t2292 = X [ 138ULL ] * t2292 / 0.32 * 0.00031622776601683789 +
intrm_sf_mf_973 ; intrm_sf_mf_863 = X [ 116ULL ] - X [ 44ULL ] ; t1791 [ 0ULL
] = X [ 9ULL ] ; tlu2_linear_linear_prelookup ( & ai_efOut . mField0 [ 0ULL ]
, & ai_efOut . mField1 [ 0ULL ] , & ai_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = ai_efOut ; tlu2_1d_linear_linear_value ( &
bi_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = bi_efOut [ 0 ] ; intrm_sf_mf_973 = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & ci_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ci_efOut [ 0 ] ; t2303 =
t1785_idx_0 ; if ( 1.0 - X [ 11ULL ] >= 0.01 ) { t2309 = 1.0 - X [ 11ULL ] ;
} else if ( 1.0 - X [ 11ULL ] >= - 0.1 ) { t2309 = pmf_exp ( ( ( 1.0 - X [
11ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2309 = 1.6701700790245661E-7 ;
} t2305 = X [ 10ULL ] / ( t2309 == 0.0 ? 1.0E-16 : t2309 ) *
3827.6794129126583 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
di_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = di_efOut [ 0 ] ; t2311 = pmf_exp ( pmf_log ( X [ 44ULL ] *
100000.0 ) - t1785_idx_0 ) ; if ( t2311 >= 1.0 ) { intrm_sf_mf_1234 = ( t2311
- 1.0 ) * 461.523 + t2305 ; t2312 = t2305 / ( intrm_sf_mf_1234 == 0.0 ?
1.0E-16 : intrm_sf_mf_1234 ) ; } else { t2312 = 1.0 ; } t2430 = t2312 * 0.01
; t2305 = ( X [ 11ULL ] - t2312 ) / ( t2430 == 0.0 ? 1.0E-16 : t2430 ) ; if (
X [ 11ULL ] - t2312 <= 0.0 ) { t2305 = 0.0 ; } else if ( X [ 11ULL ] - t2312
>= t2312 * 0.01 ) { t2305 = X [ 11ULL ] - t2312 ; } else { t2305 = ( X [
11ULL ] - t2312 ) * ( t2305 * t2305 * 3.0 - t2305 * t2305 * t2305 * 2.0 ) ; }
t2289 = t2289 * t2305 * 0.026773120849090417 / 0.001 ; t2305 = (
intrm_sf_mf_973 - t2303 ) * t2289 ; tlu2_1d_linear_nearest_value ( & ei_efOut
[ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = ei_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
fi_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = fi_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & gi_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = gi_efOut [ 0 ] ; t2303 = ( ( ( 1.0 - t2282 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ) *
t1785_idx_0 + U_idx_0 * t2282 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ; t2312 = (
323.15 - X [ 9ULL ] ) * ( t2303 * 10.709248339636167 / 0.01 ) ;
tlu2_1d_linear_nearest_value ( & hi_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = hi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ii_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ii_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ji_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ji_efOut [ 0 ] ; t2314 =
( ( ( 1.0 - t2282 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ) *
t1785_idx_0 + U_idx_0 * t2282 ) + t1768_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ; t2282 = ( -
X [ 318ULL ] - X [ 138ULL ] ) / 2.0 ; t3534 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 + t2285 ) /
2.0 * 0.32 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4
= ( t2282 >= 0.0 ? t2282 : 0.0 ) * 0.01 / ( t3534 == 0.0 ? 1.0E-16 : t3534 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ; t2315 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total : 1000.0 ;
t2437 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 +
t2314 ; if ( t2437 / 2.0 > 0.5 ) { U_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 + t2314 ) /
2.0 ; } else { U_idx_0 = 0.5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = pmf_log10 (
6.9 / ( t2315 == 0.0 ? 1.0E-16 : t2315 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t2315 == 0.0 ? 1.0E-16 : t2315 ) + 0.00017169489553429715
) * 3.24 ; t2321 = 1.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) ;
t2441 = ( pmf_pow ( U_idx_0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t2321 / 8.0 ) * 12.7 + 1.0 ; t2315 = ( t2315 - 1000.0 ) * ( t2321 / 8.0 ) *
U_idx_0 / ( t2441 == 0.0 ? 1.0E-16 : t2441 ) ; U_idx_0 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total - 2000.0 ) /
2000.0 ; t2321 = U_idx_0 * U_idx_0 * 3.0 - U_idx_0 * U_idx_0 * U_idx_0 * 2.0
; if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total <=
2000.0 ) { U_idx_0 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total >= 4000.0 ) {
U_idx_0 = t2315 ; } else { U_idx_0 = ( 1.0 - t2321 ) * 3.66 + t2315 * t2321 ;
} t2446 = t2437 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total > U_idx_0 *
10.709248339636167 / 0.32 / ( t2446 == 0.0 ? 1.0E-16 : t2446 ) / 30.0 ) {
t2452 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 +
t2314 ) / 2.0 ; t2315 = U_idx_0 * 10.709248339636167 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ) /
0.32 / ( t2452 == 0.0 ? 1.0E-16 : t2452 ) ; } else { t2315 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = ( 323.15 -
X [ 68ULL ] ) * ( 1.0 - pmf_exp ( - t2315 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 * 0.32 / 0.01
* ( t2437 / 2.0 ) * ( ( t2264 + t2303 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ; t2458 = (
t3928 + t2285 ) / 2.0 * 0.32 ; t3928 = - ( t2282 <= 0.0 ? t2282 : 0.0 ) *
0.01 / ( t2458 == 0.0 ? 1.0E-16 : t2458 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = t3928 >=
0.0 ? t3928 : - t3928 ; t2264 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 : 1000.0 ;
t2459 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv + t2314 ;
if ( t2459 / 2.0 > 0.5 ) { t2282 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv + t2314 ) / 2.0 ; }
else { t2282 = 0.5 ; } t2461 = pmf_log10 ( 6.9 / ( t2264 == 0.0 ? 1.0E-16 :
t2264 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2264 == 0.0 ?
1.0E-16 : t2264 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total = 1.0 / (
t2461 == 0.0 ? 1.0E-16 : t2461 ) ; t2463 = ( pmf_pow ( t2282 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total / 8.0 ) *
12.7 + 1.0 ; t2264 = ( t2264 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total / 8.0 ) *
t2282 / ( t2463 == 0.0 ? 1.0E-16 : t2463 ) ; t2282 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 - 2000.0 ) /
2000.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total =
t2282 * t2282 * 3.0 - t2282 * t2282 * t2282 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 <= 2000.0 ) {
t2282 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 >= 4000.0 ) {
t2282 = t2264 ; } else { t2282 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ) * 3.66 +
t2264 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total ; }
t2468 = t2459 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 > t2282 *
10.709248339636167 / 0.32 / ( t2468 == 0.0 ? 1.0E-16 : t2468 ) / 30.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv + t2314 ) / 2.0 ;
t2264 = t2282 * 10.709248339636167 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) /
0.32 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) ; } else {
t2264 = 30.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv =
( 323.15 - X [ 115ULL ] ) * ( 1.0 - pmf_exp ( - t2264 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 + t3928 *
0.32 / 0.01 * ( t2459 / 2.0 ) * ( ( t1957 + t2303 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ; t1957 = pmf_sqrt
( X [ 138ULL ] * X [ 138ULL ] + 4.3455507383574884E-7 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 = pmf_sqrt (
X [ 138ULL ] * X [ 138ULL ] + 4.9597684650720062E-8 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 = pmf_sqrt (
X [ 138ULL ] * X [ 138ULL ] + 3.5023764535063275E-8 ) ;
tlu2_1d_linear_linear_value ( & ki_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ki_efOut [ 0 ] ; t2264 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & li_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = li_efOut
[ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total = ( -
X [ 326ULL ] + X [ 102ULL ] ) + X [ 151ULL ] ; t2303 = ( ( ( - X [ 318ULL ] +
X [ 102ULL ] ) + X [ 108ULL ] ) + X [ 138ULL ] ) - t2289 * 100000.0 ; t2314 =
( ( - X [ 327ULL ] + X [ 108ULL ] ) + X [ 153ULL ] ) - t2289 * 100000.0 ;
t2315 = ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I )
- t2277 ) * t2264 + intrm_sf_mf_973 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) + t1785_idx_0 *
t2277 ; t2321 = t2264 - X [ 9ULL ] * 0.296802103844292 ; t2264 = t1785_idx_0
- X [ 9ULL ] * 4.12448151675695 ; t2282 = intrm_sf_mf_973 - X [ 9ULL ] *
0.461523 ; if ( X [ 47ULL ] <= 0.0 ) { intrm_sf_mf_973 = 0.0 ; } else {
intrm_sf_mf_973 = X [ 47ULL ] >= 1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ]
<= 0.0 ) { t2323 = 0.0 ; } else { t2323 = X [ 46ULL ] >= 1.0 ? 1.0 : X [
46ULL ] ; } t2325 = ( ( ( 1.0 - intrm_sf_mf_973 ) - t2323 ) *
296.802103844292 + intrm_sf_mf_973 * 461.523 ) + t2323 * 259.836612622973 ;
t2327 = - ( ( X [ 45ULL ] / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) -
X [ 351ULL ] / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) * X [
281ULL ] * t2325 ) / 0.0019634954084936209 ; if ( X [ 351ULL ] <=
216.59999999999997 ) { t3598 = 216.59999999999997 ; } else { t3598 = X [
351ULL ] >= 623.15 ? 623.15 : X [ 351ULL ] ; } t2332 = t3598 * t3598 ; t3267
= ( ( ( 1074.1165326382541 + t3598 * - 0.2214565261064077 ) + t2332 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_973 ) - t2323 ) + ( (
1479.6504774710445 + t3598 * 1.200211433705052 ) + t2332 * -
0.00038614513167842338 ) * intrm_sf_mf_973 ) + ( ( 900.63941224837913 + t3598
* - 0.044484923911364271 ) + t2332 * 0.00036936011832043369 ) * t2323 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = t3267 - t2325 ;
t3598 = t3267 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) ;
t3267 = pmf_sqrt ( t2327 * t2327 * 9.999999999999999E-14 + fabs ( X [ 351ULL
] * t3598 * t2325 ) * 1.0E-9 ) ; if ( X [ 348ULL ] <= 0.0 ) { t2332 = 0.0 ; }
else { t2332 = X [ 348ULL ] >= 1.0 ? 1.0 : X [ 348ULL ] ; } if ( X [ 347ULL ]
<= 0.0 ) { U_idx_2 = 0.0 ; } else { U_idx_2 = X [ 347ULL ] >= 1.0 ? 1.0 : X [
347ULL ] ; } t1791 [ 0ULL ] = X [ 45ULL ] ; tlu2_linear_nearest_prelookup ( &
mi_efOut . mField0 [ 0ULL ] , & mi_efOut . mField1 [ 0ULL ] , & mi_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = mi_efOut ;
tlu2_1d_linear_nearest_value ( & ni_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ni_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oi_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = oi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pi_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pi_efOut [ 0 ] ; t3345 =
( ( ( 1.0 - t2332 ) - U_idx_2 ) * t1785_idx_0 + U_idx_0 * t2332 ) +
t1768_idx_0 * U_idx_2 ; t2484 = X [ 352ULL ] * X [ 352ULL ] * t3598 ; t3252 =
- pmf_sqrt ( fabs ( t2484 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) / ( X [ 351ULL
] == 0.0 ? 1.0E-16 : X [ 351ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3252
>= 0.0 ) { t2336 = t3252 * 100000.0 ; } else { t2336 = - t3252 * 100000.0 ; }
t2488 = t3345 * 0.0019634954084936209 ; t3274 = t2336 * 0.05 / ( t2488 == 0.0
? 1.0E-16 : t2488 ) ; t2490 = X [ 45ULL ] * t2325 ; t3596 = X [ 48ULL ] / (
t2490 == 0.0 ? 1.0E-16 : t2490 ) ; t2492 = t3596 * 9.8174770424681068E-6 ;
t3410 = t3252 * t3345 * 11.2 / ( t2492 == 0.0 ? 1.0E-16 : t2492 ) ; t3411 =
t3274 >= 1.0 ? t3274 : 1.0 ; t2493 = pmf_log10 ( 6.9 / ( t3411 == 0.0 ?
1.0E-16 : t3411 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t3411 ==
0.0 ? 1.0E-16 : t3411 ) + 2.8767404433520813E-5 ) * 3.24 ; t2495 = t3596 *
3.855314219175531E-7 ; t2336 = t3252 * t2336 * ( 1.0 / ( t2493 == 0.0 ?
1.0E-16 : t2493 ) ) * 0.175 / ( t2495 == 0.0 ? 1.0E-16 : t2495 ) ; t3411 = (
t3274 - 2000.0 ) / 2000.0 ; t3284 = t3411 * t3411 * 3.0 - t3411 * t3411 *
t3411 * 2.0 ; if ( t3274 <= 2000.0 ) { t3411 = t3410 * 1.0E-5 ; } else if (
t3274 >= 4000.0 ) { t3411 = t2336 * 1.0E-5 ; } else { t3411 = ( ( 1.0 - t3284
) * t3410 + t2336 * t3284 ) * 1.0E-5 ; } t3267 = - ( X [ 281ULL ] * t3267 ) /
0.0019634954084936209 * 0.00031622776601683789 + t3411 ; t2336 = X [ 35ULL ]
- X [ 48ULL ] ; t3410 = ( X [ 45ULL ] / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [
48ULL ] ) - X [ 354ULL ] / ( X [ 355ULL ] == 0.0 ? 1.0E-16 : X [ 355ULL ] ) )
* X [ 353ULL ] * t2325 / 0.0019634954084936209 ; if ( X [ 354ULL ] <=
216.59999999999997 ) { t3411 = 216.59999999999997 ; } else { t3411 = X [
354ULL ] >= 623.15 ? 623.15 : X [ 354ULL ] ; } t3397 = t3411 * t3411 ; t3284
= ( ( ( 1074.1165326382541 + t3411 * - 0.2214565261064077 ) + t3397 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_973 ) - t2323 ) + ( (
1479.6504774710445 + t3411 * 1.200211433705052 ) + t3397 * -
0.00038614513167842338 ) * intrm_sf_mf_973 ) + ( ( 900.63941224837913 + t3411
* - 0.044484923911364271 ) + t3397 * 0.00036936011832043369 ) * t2323 ; t2503
= t3284 - t2325 ; t3411 = t3284 / ( t2503 == 0.0 ? 1.0E-16 : t2503 ) ; t3284
= pmf_sqrt ( t3410 * t3410 * 9.999999999999999E-14 + fabs ( X [ 354ULL ] *
t3411 * t2325 ) * 1.0E-9 ) ; t2504 = X [ 355ULL ] * X [ 355ULL ] * t3411 ;
t3397 = - pmf_sqrt ( fabs ( t2504 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) / ( X
[ 354ULL ] == 0.0 ? 1.0E-16 : X [ 354ULL ] ) ) ) * 0.0019634954084936209 ;
t2343 = t3397 * t3345 * 11.2 / ( t2492 == 0.0 ? 1.0E-16 : t2492 ) ; if (
t3397 >= 0.0 ) { t2344 = t3397 * 100000.0 ; } else { t2344 = - t3397 *
100000.0 ; } t3289 = t2344 * 0.05 / ( t2488 == 0.0 ? 1.0E-16 : t2488 ) ;
t2346 = t3289 >= 1.0 ? t3289 : 1.0 ; t2511 = pmf_log10 ( 6.9 / ( t2346 == 0.0
? 1.0E-16 : t2346 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2346 ==
0.0 ? 1.0E-16 : t2346 ) + 2.8767404433520813E-5 ) * 3.24 ; t2344 = t3397 *
t2344 * ( 1.0 / ( t2511 == 0.0 ? 1.0E-16 : t2511 ) ) * 0.175 / ( t2495 == 0.0
? 1.0E-16 : t2495 ) ; t2346 = ( t3289 - 2000.0 ) / 2000.0 ; t3597 = t2346 *
t2346 * 3.0 - t2346 * t2346 * t2346 * 2.0 ; if ( t3289 <= 2000.0 ) { t2346 =
t2343 * 1.0E-5 ; } else if ( t3289 >= 4000.0 ) { t2346 = t2344 * 1.0E-5 ; }
else { t2346 = ( ( 1.0 - t3597 ) * t2343 + t2344 * t3597 ) * 1.0E-5 ; } t3284
= X [ 353ULL ] * t3284 / 0.0019634954084936209 * 0.00031622776601683789 +
t2346 ; t2343 = X [ 341ULL ] - X [ 48ULL ] ; t1791 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & qi_efOut . mField0 [ 0ULL ] , & qi_efOut .
mField1 [ 0ULL ] , & qi_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = qi_efOut ; tlu2_1d_linear_linear_value ( & ri_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ri_efOut
[ 0 ] ; t2344 = t1785_idx_0 ; tlu2_1d_linear_linear_value ( & si_efOut [ 0ULL
] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = si_efOut [ 0 ] ; t2346 = t1785_idx_0 ; if ( 1.0 - X [ 47ULL
] >= 0.01 ) { t2348 = 1.0 - X [ 47ULL ] ; } else if ( 1.0 - X [ 47ULL ] >= -
0.1 ) { t2348 = pmf_exp ( ( ( 1.0 - X [ 47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t2348 = 1.6701700790245661E-7 ; } t3597 = X [ 46ULL ] / ( t2348 ==
0.0 ? 1.0E-16 : t2348 ) * - 36.965491221318985 + 296.802103844292 ;
tlu2_1d_linear_linear_value ( & ti_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ti_efOut [ 0 ] ; t2349 =
pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t1785_idx_0 ) ; if ( t2349 >=
1.0 ) { t2518 = ( t2349 - 1.0 ) * 461.523 + t3597 ; t2350 = t3597 / ( t2518
== 0.0 ? 1.0E-16 : t2518 ) ; } else { t2350 = 1.0 ; } t2520 = t2350 * 0.01 ;
t3597 = ( X [ 47ULL ] - t2350 ) / ( t2520 == 0.0 ? 1.0E-16 : t2520 ) ; if ( X
[ 47ULL ] - t2350 <= 0.0 ) { t3597 = 0.0 ; } else if ( X [ 47ULL ] - t2350 >=
t2350 * 0.01 ) { t3597 = X [ 47ULL ] - t2350 ; } else { t3597 = ( X [ 47ULL ]
- t2350 ) * ( t3597 * t3597 * 3.0 - t3597 * t3597 * t3597 * 2.0 ) ; } t3596 =
t3596 * t3597 * 0.00049087385212340522 / 0.001 ; t3597 = ( t2344 - t2346 ) *
t3596 ; tlu2_1d_linear_nearest_value ( & ui_efOut [ 0ULL ] , & t95 . mField0
[ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ui_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & vi_efOut [ 0ULL ] , & t95 . mField0 [
0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = vi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wi_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = wi_efOut [ 0 ] ; t2346 =
( ( ( 1.0 - t2332 ) - U_idx_2 ) * t1785_idx_0 + U_idx_0 * t2332 ) +
t1768_idx_0 * U_idx_2 ; t2350 = ( X [ 350ULL ] - X [ 45ULL ] ) * ( t2346 *
0.039269908169872414 / 0.05 ) ; if ( X [ 271ULL ] <= 0.0 ) { t3427 = 0.0 ; }
else { t3427 = X [ 271ULL ] >= 1.0 ? 1.0 : X [ 271ULL ] ; } if ( X [ 270ULL ]
<= 0.0 ) { t2353 = 0.0 ; } else { t2353 = X [ 270ULL ] >= 1.0 ? 1.0 : X [
270ULL ] ; } t3165 = ( ( ( 1.0 - t3427 ) - t2353 ) * 296.802103844292 + t3427
* 461.523 ) + t2353 * 259.836612622973 ; intrm_sf_mf_1088 = X [ 271ULL ] *
461.523 / ( t3165 == 0.0 ? 1.0E-16 : t3165 ) ; if ( intrm_sf_mf_1088 <= 0.0 )
{ t3555 = 0.0 ; } else { t3555 = intrm_sf_mf_1088 >= 1.0 ? 1.0 :
intrm_sf_mf_1088 ; } intrm_sf_mf_1088 = X [ 270ULL ] * 259.836612622973 / (
t3165 == 0.0 ? 1.0E-16 : t3165 ) ; if ( intrm_sf_mf_1088 <= 0.0 ) { t3352 =
0.0 ; } else { t3352 = intrm_sf_mf_1088 >= 1.0 ? 1.0 : intrm_sf_mf_1088 ; }
t1791 [ 0ULL ] = X [ 269ULL ] ; tlu2_linear_nearest_prelookup ( & xi_efOut .
mField0 [ 0ULL ] , & xi_efOut . mField1 [ 0ULL ] , & xi_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = xi_efOut ;
tlu2_1d_linear_nearest_value ( & yi_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = yi_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & aj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = aj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = bj_efOut [ 0 ] ;
intrm_sf_mf_1088 = ( ( ( 1.0 - t3555 ) - t3352 ) * t1785_idx_0 + U_idx_0 *
t3555 ) + t1768_idx_0 * t3352 ; tlu2_1d_linear_nearest_value ( & cj_efOut [
0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = cj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
dj_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = dj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ej_efOut [
0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = ej_efOut [ 0 ] ; intrm_sf_mf_1060 = ( ( ( 1.0 - t2332 ) -
U_idx_2 ) * t1785_idx_0 + U_idx_0 * t2332 ) + t1768_idx_0 * U_idx_2 ;
tlu2_1d_linear_nearest_value ( & fj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = fj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = gj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = hj_efOut [ 0 ] ; t2332 =
( ( ( 1.0 - t3555 ) - t3352 ) * t1785_idx_0 + U_idx_0 * t3555 ) + t1768_idx_0
* t3352 ; U_idx_2 = ( - X [ 281ULL ] - X [ 353ULL ] ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & ij_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ij_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = jj_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = kj_efOut [ 0 ] ; t2528 =
( ( ( ( ( 1.0 - t3555 ) - t3352 ) * t1785_idx_0 + U_idx_0 * t3555 ) +
t1768_idx_0 * t3352 ) + t3345 ) / 2.0 * 0.0019634954084936209 ; t3555 = (
U_idx_2 >= 0.0 ? U_idx_2 : 0.0 ) * 0.05 / ( t2528 == 0.0 ? 1.0E-16 : t2528 )
; t3352 = t3555 >= 0.0 ? t3555 : - t3555 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = t3352 > 1000.0 ?
t3352 : 1000.0 ; t2529 = intrm_sf_mf_1088 + intrm_sf_mf_1060 ; if ( t2529 /
2.0 > 0.5 ) { intrm_sf_mf_1050 = ( intrm_sf_mf_1088 + intrm_sf_mf_1060 ) /
2.0 ; } else { intrm_sf_mf_1050 = 0.5 ; } t2531 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) +
2.8767404433520813E-5 ) * 3.24 ; t2361 = 1.0 / ( t2531 == 0.0 ? 1.0E-16 :
t2531 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI = (
pmf_pow ( intrm_sf_mf_1050 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2361
/ 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in - 1000.0 ) * (
t2361 / 8.0 ) * intrm_sf_mf_1050 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI ) ;
intrm_sf_mf_1050 = ( t3352 - 2000.0 ) / 2000.0 ; t2361 = intrm_sf_mf_1050 *
intrm_sf_mf_1050 * 3.0 - intrm_sf_mf_1050 * intrm_sf_mf_1050 *
intrm_sf_mf_1050 * 2.0 ; if ( t3352 <= 2000.0 ) { intrm_sf_mf_1050 = 3.66 ; }
else if ( t3352 >= 4000.0 ) { intrm_sf_mf_1050 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ; } else {
intrm_sf_mf_1050 = ( 1.0 - t2361 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in * t2361 ; } t2538
= t2529 / 2.0 ; if ( t3352 > intrm_sf_mf_1050 * 0.039269908169872414 /
0.0019634954084936209 / ( t2538 == 0.0 ? 1.0E-16 : t2538 ) / 30.0 ) { t2544 =
( intrm_sf_mf_1088 + intrm_sf_mf_1060 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = intrm_sf_mf_1050
* 0.039269908169872414 / ( t3352 == 0.0 ? 1.0E-16 : t3352 ) /
0.0019634954084936209 / ( t2544 == 0.0 ? 1.0E-16 : t2544 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = 30.0 ; }
intrm_sf_mf_1088 = ( X [ 350ULL ] - X [ 269ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) ) ; t2332 =
t3555 * 0.0019634954084936209 / 0.05 * ( t2529 / 2.0 ) * ( ( t2332 + t2346 )
/ 2.0 ) * intrm_sf_mf_1088 ; if ( X [ 343ULL ] <= 0.0 ) { intrm_sf_mf_1088 =
0.0 ; } else { intrm_sf_mf_1088 = X [ 343ULL ] >= 1.0 ? 1.0 : X [ 343ULL ] ;
} if ( X [ 342ULL ] <= 0.0 ) { t3555 = 0.0 ; } else { t3555 = X [ 342ULL ] >=
1.0 ? 1.0 : X [ 342ULL ] ; } t3352 = ( ( ( 1.0 - intrm_sf_mf_1088 ) - t3555 )
* 296.802103844292 + intrm_sf_mf_1088 * 461.523 ) + t3555 * 259.836612622973
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = X [ 343ULL ] *
461.523 / ( t3352 == 0.0 ? 1.0E-16 : t3352 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in <= 0.0 ) {
intrm_sf_mf_1050 = 0.0 ; } else { intrm_sf_mf_1050 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = X [ 342ULL ] *
259.836612622973 / ( t3352 == 0.0 ? 1.0E-16 : t3352 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in <= 0.0 ) { t2361 =
0.0 ; } else { t2361 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in >= 1.0 ? 1.0 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ; } t1791 [ 0ULL ]
= X [ 340ULL ] ; tlu2_linear_nearest_prelookup ( & lj_efOut . mField0 [ 0ULL
] , & lj_efOut . mField1 [ 0ULL ] , & lj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = lj_efOut ; tlu2_1d_linear_nearest_value ( &
mj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = mj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
nj_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = nj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & oj_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = oj_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = ( ( ( 1.0 -
intrm_sf_mf_1050 ) - t2361 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_1050 ) +
t1768_idx_0 * t2361 ; tlu2_1d_linear_nearest_value ( & pj_efOut [ 0ULL ] , &
t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
pj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qj_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = qj_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & rj_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = rj_efOut [ 0
] ; t2363 = ( ( ( 1.0 - intrm_sf_mf_1050 ) - t2361 ) * t1785_idx_0 + U_idx_0
* intrm_sf_mf_1050 ) + t1768_idx_0 * t2361 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 = U_idx_2 <=
0.0 ? U_idx_2 : 0.0 ; tlu2_1d_linear_nearest_value ( & sj_efOut [ 0ULL ] , &
t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
sj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & tj_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = tj_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & uj_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = uj_efOut [ 0
] ; U_idx_2 = ( ( ( 1.0 - intrm_sf_mf_1050 ) - t2361 ) * t1785_idx_0 +
U_idx_0 * intrm_sf_mf_1050 ) + t1768_idx_0 * t2361 ; intrm_sf_mf_1293 = (
U_idx_2 + t3345 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_1050 = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 * 0.05 / (
intrm_sf_mf_1293 == 0.0 ? 1.0E-16 : intrm_sf_mf_1293 ) ; t2361 =
intrm_sf_mf_1050 >= 0.0 ? intrm_sf_mf_1050 : - intrm_sf_mf_1050 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 = t2361 >
1000.0 ? t2361 : 1000.0 ; t2553 = intrm_sf_mf_1060 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ; if ( t2553 / 2.0
> 0.5 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = (
intrm_sf_mf_1060 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in
) / 2.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = 0.5 ; }
t2555 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 ) +
2.8767404433520813E-5 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I = 1.0 / ( t2555 ==
0.0 ? 1.0E-16 : t2555 ) ; intrm_sf_mf_1247 = ( pmf_pow (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I / 8.0 ) * 12.7 + 1.0
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 - 1000.0 ) *
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I / 8.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 / (
intrm_sf_mf_1247 == 0.0 ? 1.0E-16 : intrm_sf_mf_1247 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = ( t2361 -
2000.0 ) / 2000.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 * 2.0 ; if (
t2361 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = 3.66 ; }
else if ( t2361 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I ; } t2562 = t2553 /
2.0 ; if ( t2361 >
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 *
0.039269908169872414 / 0.0019634954084936209 / ( t2562 == 0.0 ? 1.0E-16 :
t2562 ) / 30.0 ) { t2568 = ( intrm_sf_mf_1060 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 *
0.039269908169872414 / ( t2361 == 0.0 ? 1.0E-16 : t2361 ) /
0.0019634954084936209 / ( t2568 == 0.0 ? 1.0E-16 : t2568 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 = 30.0 ; }
intrm_sf_mf_1060 = ( X [ 350ULL ] - X [ 340ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 ) ) ;
intrm_sf_mf_1060 = t2332 + intrm_sf_mf_1050 * 0.0019634954084936209 / 0.05 *
( t2553 / 2.0 ) * ( ( t2346 + t2363 ) / 2.0 ) * intrm_sf_mf_1060 ; t2332 =
pmf_sqrt ( X [ 281ULL ] * X [ 281ULL ] + 3.0116308772356542E-13 ) ; t2346 =
pmf_sqrt ( X [ 281ULL ] * X [ 281ULL ] + 5.8094731428156895E-13 ) ;
intrm_sf_mf_1050 = pmf_sqrt ( X [ 281ULL ] * X [ 281ULL ] +
4.1024015709531055E-13 ) ; t2361 = pmf_sqrt ( X [ 353ULL ] * X [ 353ULL ] +
3.0116308772356542E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 = pmf_sqrt (
X [ 353ULL ] * X [ 353ULL ] + 5.8094731428156895E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = pmf_sqrt (
X [ 353ULL ] * X [ 353ULL ] + 4.1024015709531055E-13 ) ;
tlu2_1d_linear_linear_value ( & vj_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = vj_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & wj_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wj_efOut [ 0 ] ; t2368 = -
X [ 282ULL ] + X [ 361ULL ] ; t2369 = ( ( - X [ 281ULL ] + X [ 353ULL ] ) +
U_idx_7 ) - t3596 * 100000.0 ; t2370 = ( ( - X [ 283ULL ] + X [ 362ULL ] ) +
U_idx_7 ) - t3596 * 100000.0 ; t2371 = ( ( ( 1.0 - intrm_sf_mf_973 ) - t2323
) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I + t2344 *
intrm_sf_mf_973 ) + t1785_idx_0 * t2323 ; t2373 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I - X [ 45ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I =
t1785_idx_0 - X [ 45ULL ] * 0.25983661262297303 ; t2367 = t2344 - X [ 45ULL ]
* 0.461523 ; t2344 = pmf_sqrt ( X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) ; t2374 = pmf_sqrt ( X [ 376ULL ] * X [ 376ULL ] +
5.2285258285341208E-12 ) ; t2375 = pmf_sqrt ( X [ 376ULL ] * X [ 376ULL ] +
3.6921614138577959E-12 ) ; if ( X [ 381ULL ] <= 0.0 ) { t2377 = 0.0 ; } else
{ t2377 = X [ 381ULL ] >= 1.0 ? 1.0 : X [ 381ULL ] ; } if ( X [ 382ULL ] <=
0.0 ) { t2378 = 0.0 ; } else { t2378 = X [ 382ULL ] >= 1.0 ? 1.0 : X [ 382ULL
] ; } t2379 = ( ( ( 1.0 - t2377 ) - t2378 ) * 296.802103844292 + t2377 *
461.523 ) + t2378 * 259.836612622973 ; if ( 1.0 - X [ 381ULL ] >= 0.01 ) {
t2380 = 1.0 - X [ 381ULL ] ; } else if ( 1.0 - X [ 381ULL ] >= - 0.1 ) {
t2380 = pmf_exp ( ( ( 1.0 - X [ 381ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else
{ t2380 = 1.6701700790245661E-7 ; } t2381 = ( X [ 385ULL ] *
0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10 ; if ( X [
51ULL ] <= 0.0 ) { t2382 = 0.0 ; } else { t2382 = X [ 51ULL ] >= 1.0 ? 1.0 :
X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) { t2383 = 0.0 ; } else { t2383 = X
[ 52ULL ] >= 1.0 ? 1.0 : X [ 52ULL ] ; } t2384 = ( ( ( 1.0 - t2382 ) - t2383
) * 296.802103844292 + t2382 * 461.523 ) + t2383 * 259.836612622973 ; t3303 =
( X [ 49ULL ] / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) - X [ 389ULL ]
/ ( X [ 390ULL ] == 0.0 ? 1.0E-16 : X [ 390ULL ] ) ) * X [ 388ULL ] * t2384 /
0.0019634954084936209 ; if ( X [ 389ULL ] <= 216.59999999999997 ) { t3316 =
216.59999999999997 ; } else { t3316 = X [ 389ULL ] >= 623.15 ? 623.15 : X [
389ULL ] ; } U_idx_3 = t3316 * t3316 ; t3369 = ( ( ( 1074.1165326382541 +
t3316 * - 0.2214565261064077 ) + U_idx_3 * 0.00037212980109010952 ) * ( ( 1.0
- t2382 ) - t2383 ) + ( ( 1479.6504774710445 + t3316 * 1.200211433705052 ) +
U_idx_3 * - 0.00038614513167842338 ) * t2382 ) + ( ( 900.63941224837913 +
t3316 * - 0.044484923911364271 ) + U_idx_3 * 0.00036936011832043369 ) * t2383
; zc_int102 = t3369 - t2384 ; t3316 = t3369 / ( zc_int102 == 0.0 ? 1.0E-16 :
zc_int102 ) ; t3369 = pmf_sqrt ( t3303 * t3303 * 9.999999999999999E-14 + fabs
( X [ 389ULL ] * t3316 * t2384 ) * 1.0E-9 ) ; if ( X [ 391ULL ] <= 0.0 ) {
U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 391ULL ] >= 1.0 ? 1.0 : X [ 391ULL ] ;
} if ( X [ 392ULL ] <= 0.0 ) { intrm_sf_mf_1210 = 0.0 ; } else {
intrm_sf_mf_1210 = X [ 392ULL ] >= 1.0 ? 1.0 : X [ 392ULL ] ; } t1791 [ 0ULL
] = X [ 49ULL ] ; tlu2_linear_nearest_prelookup ( & xj_efOut . mField0 [ 0ULL
] , & xj_efOut . mField1 [ 0ULL ] , & xj_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t40 = xj_efOut ; tlu2_1d_linear_nearest_value ( &
yj_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = yj_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ak_efOut
[ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = ak_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & bk_efOut [
0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = bk_efOut [ 0 ] ; t3383 = ( ( ( 1.0 - U_idx_3 ) -
intrm_sf_mf_1210 ) * t1785_idx_0 + U_idx_0 * U_idx_3 ) + t1768_idx_0 *
intrm_sf_mf_1210 ; t2579 = X [ 390ULL ] * X [ 390ULL ] * t3316 ; t3384 = -
pmf_sqrt ( fabs ( t2579 / ( t2384 == 0.0 ? 1.0E-16 : t2384 ) / ( X [ 389ULL ]
== 0.0 ? 1.0E-16 : X [ 389ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3384 >=
0.0 ) { t2401 = t3384 * 100000.0 ; } else { t2401 = - t3384 * 100000.0 ; }
t2583 = t3383 * 0.0019634954084936209 ; t3435 = t2401 * 0.05 / ( t2583 == 0.0
? 1.0E-16 : t2583 ) ; t2585 = X [ 49ULL ] * t2384 ; t4352 = X [ 50ULL ] / (
t2585 == 0.0 ? 1.0E-16 : t2585 ) ; t2587 = t4352 * 9.8174770424681068E-6 ;
t3569 = t3384 * t3383 * 35.2 / ( t2587 == 0.0 ? 1.0E-16 : t2587 ) ; t2407 =
t3435 >= 1.0 ? t3435 : 1.0 ; t2588 = pmf_log10 ( 6.9 / ( t2407 == 0.0 ?
1.0E-16 : t2407 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2407 ==
0.0 ? 1.0E-16 : t2407 ) + 2.8767404433520813E-5 ) * 3.24 ; t2590 = t4352 *
3.855314219175531E-7 ; t2401 = t3384 * t2401 * ( 1.0 / ( t2588 == 0.0 ?
1.0E-16 : t2588 ) ) * 0.55 / ( t2590 == 0.0 ? 1.0E-16 : t2590 ) ; t2407 = (
t3435 - 2000.0 ) / 2000.0 ; t3460 = t2407 * t2407 * 3.0 - t2407 * t2407 *
t2407 * 2.0 ; if ( t3435 <= 2000.0 ) { t2407 = t3569 * 1.0E-5 ; } else if (
t3435 >= 4000.0 ) { t2407 = t2401 * 1.0E-5 ; } else { t2407 = ( ( 1.0 - t3460
) * t3569 + t2401 * t3460 ) * 1.0E-5 ; } t3369 = X [ 388ULL ] * t3369 /
0.0019634954084936209 * 0.00031622776601683789 + t2407 ; t2401 = X [ 366ULL ]
- X [ 50ULL ] ; t3569 = - ( ( X [ 49ULL ] / ( X [ 50ULL ] == 0.0 ? 1.0E-16 :
X [ 50ULL ] ) - X [ 393ULL ] / ( X [ 394ULL ] == 0.0 ? 1.0E-16 : X [ 394ULL ]
) ) * X [ 376ULL ] * t2384 ) / 0.0019634954084936209 ; if ( X [ 393ULL ] <=
216.59999999999997 ) { t2407 = 216.59999999999997 ; } else { t2407 = X [
393ULL ] >= 623.15 ? 623.15 : X [ 393ULL ] ; } t3516 = t2407 * t2407 ; t3460
= ( ( ( 1074.1165326382541 + t2407 * - 0.2214565261064077 ) + t3516 *
0.00037212980109010952 ) * ( ( 1.0 - t2382 ) - t2383 ) + ( (
1479.6504774710445 + t2407 * 1.200211433705052 ) + t3516 * -
0.00038614513167842338 ) * t2382 ) + ( ( 900.63941224837913 + t2407 * -
0.044484923911364271 ) + t3516 * 0.00036936011832043369 ) * t2383 ;
intrm_sf_mf_436 = t3460 - t2384 ; t2407 = t3460 / ( intrm_sf_mf_436 == 0.0 ?
1.0E-16 : intrm_sf_mf_436 ) ; t3460 = pmf_sqrt ( t3569 * t3569 *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t2407 * t2384 ) * 1.0E-9 ) ;
t2599 = X [ 394ULL ] * X [ 394ULL ] * t2407 ; t3516 = - pmf_sqrt ( fabs (
t2599 / ( t2384 == 0.0 ? 1.0E-16 : t2384 ) / ( X [ 393ULL ] == 0.0 ? 1.0E-16
: X [ 393ULL ] ) ) ) * 0.0019634954084936209 ; if ( t3516 >= 0.0 ) { t2415 =
t3516 * 100000.0 ; } else { t2415 = - t3516 * 100000.0 ; } t3472 = t2415 *
0.05 / ( t2583 == 0.0 ? 1.0E-16 : t2583 ) ; intrm_sf_mf_1259 = t3516 * t3383
* 35.2 / ( t2587 == 0.0 ? 1.0E-16 : t2587 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = t3472 >= 1.0 ?
t3472 : 1.0 ; t3134 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) +
2.8767404433520813E-5 ) * 3.24 ; t2415 = t3516 * t2415 * ( 1.0 / ( t3134 ==
0.0 ? 1.0E-16 : t3134 ) ) * 0.55 / ( t2590 == 0.0 ? 1.0E-16 : t2590 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = ( t3472 - 2000.0 )
/ 2000.0 ; t2422 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv * 2.0 ; if ( t3472
<= 2000.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv =
intrm_sf_mf_1259 * 1.0E-5 ; } else if ( t3472 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = t2415 * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = ( ( 1.0 -
t2422 ) * intrm_sf_mf_1259 + t2415 * t2422 ) * 1.0E-5 ; } t3460 = - ( X [
376ULL ] * t3460 ) / 0.0019634954084936209 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ; t2415 = t2381 - X
[ 50ULL ] ; t1791 [ 0ULL ] = X [ 49ULL ] ; tlu2_linear_linear_prelookup ( &
ck_efOut . mField0 [ 0ULL ] , & ck_efOut . mField1 [ 0ULL ] , & ck_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = ck_efOut ;
tlu2_1d_linear_linear_value ( & dk_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = dk_efOut [ 0 ] ;
intrm_sf_mf_1259 = t1785_idx_0 ; tlu2_1d_linear_linear_value ( & ek_efOut [
0ULL ] , & t95 . mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = ek_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = t1785_idx_0 ; if (
1.0 - X [ 51ULL ] >= 0.01 ) { t2424 = 1.0 - X [ 51ULL ] ; } else if ( 1.0 - X
[ 51ULL ] >= - 0.1 ) { t2424 = pmf_exp ( ( ( 1.0 - X [ 51ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t2424 = 1.6701700790245661E-7 ; } t2422 = X [ 52ULL
] / ( t2424 == 0.0 ? 1.0E-16 : t2424 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & fk_efOut [ 0ULL ] , & t95
. mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
fk_efOut [ 0 ] ; t2425 = pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) -
t1785_idx_0 ) ; if ( t2425 >= 1.0 ) { t2613 = ( t2425 - 1.0 ) * 461.523 +
t2422 ; t2426 = t2422 / ( t2613 == 0.0 ? 1.0E-16 : t2613 ) ; } else { t2426 =
1.0 ; } intrm_sf_mf_834 = t2426 * 0.01 ; t2422 = ( X [ 51ULL ] - t2426 ) / (
intrm_sf_mf_834 == 0.0 ? 1.0E-16 : intrm_sf_mf_834 ) ; if ( X [ 51ULL ] -
t2426 <= 0.0 ) { t2422 = 0.0 ; } else if ( X [ 51ULL ] - t2426 >= t2426 *
0.01 ) { t2422 = X [ 51ULL ] - t2426 ; } else { t2422 = ( X [ 51ULL ] - t2426
) * ( t2422 * t2422 * 3.0 - t2422 * t2422 * t2422 * 2.0 ) ; } t4352 = t4352 *
t2422 * 0.0019634954084936209 / 0.001 ; t2422 = ( intrm_sf_mf_1259 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) * t4352 ;
tlu2_1d_linear_nearest_value ( & gk_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = gk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hk_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = hk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ik_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ik_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = ( ( ( 1.0 -
U_idx_3 ) - intrm_sf_mf_1210 ) * t1785_idx_0 + U_idx_0 * U_idx_3 ) +
t1768_idx_0 * intrm_sf_mf_1210 ; t2426 = ( X [ 369ULL ] - X [ 49ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv *
0.15707963267948966 / 0.05 ) ; if ( X [ 368ULL ] <= 0.0 ) { t3520 = 0.0 ; }
else { t3520 = X [ 368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ; } if ( X [ 367ULL ]
<= 0.0 ) { intrm_sf_mf_1234 = 0.0 ; } else { intrm_sf_mf_1234 = X [ 367ULL ]
>= 1.0 ? 1.0 : X [ 367ULL ] ; } t3591 = ( ( ( 1.0 - t3520 ) -
intrm_sf_mf_1234 ) * 296.802103844292 + t3520 * 461.523 ) + intrm_sf_mf_1234
* 259.836612622973 ; t2430 = X [ 368ULL ] * 461.523 / ( t3591 == 0.0 ?
1.0E-16 : t3591 ) ; if ( t2430 <= 0.0 ) { intrm_sf_mf_1186 = 0.0 ; } else {
intrm_sf_mf_1186 = t2430 >= 1.0 ? 1.0 : t2430 ; } t2430 = X [ 367ULL ] *
259.836612622973 / ( t3591 == 0.0 ? 1.0E-16 : t3591 ) ; if ( t2430 <= 0.0 ) {
t2432 = 0.0 ; } else { t2432 = t2430 >= 1.0 ? 1.0 : t2430 ; } t1791 [ 0ULL ]
= X [ 365ULL ] ; tlu2_linear_nearest_prelookup ( & jk_efOut . mField0 [ 0ULL
] , & jk_efOut . mField1 [ 0ULL ] , & jk_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = jk_efOut ; tlu2_1d_linear_nearest_value ( &
kk_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = kk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
lk_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = lk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mk_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = mk_efOut [ 0 ] ; t2430 = ( ( ( 1.0 - intrm_sf_mf_1186 ) -
t2432 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_1186 ) + t1768_idx_0 * t2432 ;
tlu2_1d_linear_nearest_value ( & nk_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = nk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ok_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ok_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pk_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pk_efOut [ 0 ] ;
intrm_sf_mf_1209 = ( ( ( 1.0 - U_idx_3 ) - intrm_sf_mf_1210 ) * t1785_idx_0 +
U_idx_0 * U_idx_3 ) + t1768_idx_0 * intrm_sf_mf_1210 ;
tlu2_1d_linear_nearest_value ( & qk_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = qk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rk_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = rk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sk_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = sk_efOut [ 0 ] ; U_idx_3
= ( ( ( 1.0 - intrm_sf_mf_1186 ) - t2432 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_1186 ) + t1768_idx_0 * t2432 ; intrm_sf_mf_1210 = ( X [ 388ULL ]
- ( - X [ 376ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( & tk_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = tk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & uk_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = uk_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vk_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = vk_efOut [ 0 ] ; t2435 = ( ( ( 1.0 - intrm_sf_mf_1186 ) -
t2432 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_1186 ) + t1768_idx_0 * t2432 ;
t2668 = ( t3383 + t2435 ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_1186 =
( intrm_sf_mf_1210 >= 0.0 ? intrm_sf_mf_1210 : 0.0 ) * 0.05 / ( t2668 == 0.0
? 1.0E-16 : t2668 ) ; t2432 = intrm_sf_mf_1186 >= 0.0 ? intrm_sf_mf_1186 : -
intrm_sf_mf_1186 ; t2434 = t2432 > 1000.0 ? t2432 : 1000.0 ; U_idx_1 = t2430
+ intrm_sf_mf_1209 ; if ( U_idx_1 / 2.0 > 0.5 ) { t3534 = ( t2430 +
intrm_sf_mf_1209 ) / 2.0 ; } else { t3534 = 0.5 ; } t2668 = pmf_log10 ( 6.9 /
( t2434 == 0.0 ? 1.0E-16 : t2434 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t2434 == 0.0 ? 1.0E-16 : t2434 ) + 2.8767404433520813E-5 ) * 3.24 ;
t2437 = 1.0 / ( t2668 == 0.0 ? 1.0E-16 : t2668 ) ; t2691 = ( pmf_pow ( t3534
, 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2437 / 8.0 ) * 12.7 + 1.0 ;
t2434 = ( t2434 - 1000.0 ) * ( t2437 / 8.0 ) * t3534 / ( t2691 == 0.0 ?
1.0E-16 : t2691 ) ; t3534 = ( t2432 - 2000.0 ) / 2000.0 ; t2437 = t3534 *
t3534 * 3.0 - t3534 * t3534 * t3534 * 2.0 ; if ( t2432 <= 2000.0 ) { t3534 =
3.66 ; } else if ( t2432 >= 4000.0 ) { t3534 = t2434 ; } else { t3534 = ( 1.0
- t2437 ) * 3.66 + t2434 * t2437 ; } t2668 = U_idx_1 / 2.0 ; if ( t2432 >
t3534 * 0.15707963267948966 / 0.0019634954084936209 / ( t2668 == 0.0 ?
1.0E-16 : t2668 ) / 30.0 ) { U_idx_0 = ( t2430 + intrm_sf_mf_1209 ) / 2.0 ;
t2434 = t3534 * 0.15707963267948966 / ( t2432 == 0.0 ? 1.0E-16 : t2432 ) /
0.0019634954084936209 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else {
t2434 = 30.0 ; } t2432 = ( X [ 369ULL ] - X [ 365ULL ] ) * ( 1.0 - pmf_exp (
- t2434 ) ) ; intrm_sf_mf_1186 = intrm_sf_mf_1186 * 0.0019634954084936209 /
0.05 * ( U_idx_1 / 2.0 ) * ( ( U_idx_3 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) / 2.0 ) * t2432 ;
if ( X [ 387ULL ] <= 0.0 ) { t2432 = 0.0 ; } else { t2432 = X [ 387ULL ] >=
1.0 ? 1.0 : X [ 387ULL ] ; } if ( X [ 386ULL ] <= 0.0 ) { t2434 = 0.0 ; }
else { t2434 = X [ 386ULL ] >= 1.0 ? 1.0 : X [ 386ULL ] ; } t3534 = ( ( ( 1.0
- t2432 ) - t2434 ) * 296.802103844292 + t2432 * 461.523 ) + t2434 *
259.836612622973 ; t2437 = X [ 387ULL ] * 461.523 / ( t3534 == 0.0 ? 1.0E-16
: t3534 ) ; if ( t2437 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 =
t2437 >= 1.0 ? 1.0 : t2437 ; } t2437 = X [ 386ULL ] * 259.836612622973 / (
t3534 == 0.0 ? 1.0E-16 : t3534 ) ; if ( t2437 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 =
t2437 >= 1.0 ? 1.0 : t2437 ; } t1791 [ 0ULL ] = X [ 384ULL ] ;
tlu2_linear_nearest_prelookup ( & wk_efOut . mField0 [ 0ULL ] , & wk_efOut .
mField1 [ 0ULL ] , & wk_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = wk_efOut ; tlu2_1d_linear_nearest_value ( & xk_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = xk_efOut
[ 0 ] ; tlu2_1d_linear_nearest_value ( & yk_efOut [ 0ULL ] , & t81 . mField0
[ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = yk_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & al_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = al_efOut [ 0 ] ; t2437 =
( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 ) +
t1768_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2
; tlu2_1d_linear_nearest_value ( & bl_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL
] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10
, & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = bl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cl_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = cl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & dl_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = dl_efOut [ 0 ] ; t2440 =
( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 ) +
t1768_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2
; tlu2_1d_linear_nearest_value ( & el_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL
] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = el_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fl_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = fl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gl_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = gl_efOut [ 0 ] ; t2691 =
( t3383 + ( ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) *
t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 ) +
t1768_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2
) ) / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_1210 = - ( intrm_sf_mf_1210
<= 0.0 ? intrm_sf_mf_1210 : 0.0 ) * 0.05 / ( t2691 == 0.0 ? 1.0E-16 : t2691 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 =
intrm_sf_mf_1210 >= 0.0 ? intrm_sf_mf_1210 : - intrm_sf_mf_1210 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 : 1000.0 ;
U_idx_1 = intrm_sf_mf_1209 + t2437 ; if ( U_idx_1 / 2.0 > 0.5 ) { t2441 = (
intrm_sf_mf_1209 + t2437 ) / 2.0 ; } else { t2441 = 0.5 ; } t2668 = pmf_log10
( 6.9 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) +
2.8767404433520813E-5 ) * 3.24 ; t2442 = 1.0 / ( t2668 == 0.0 ? 1.0E-16 :
t2668 ) ; t2691 = ( pmf_pow ( t2441 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2442 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 - 1000.0 ) *
( t2442 / 8.0 ) * t2441 / ( t2691 == 0.0 ? 1.0E-16 : t2691 ) ; t2441 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 - 2000.0 ) /
2000.0 ; t2442 = t2441 * t2441 * 3.0 - t2441 * t2441 * t2441 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 <= 2000.0 ) {
t2441 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 >= 4000.0 ) {
t2441 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ; }
else { t2441 = ( 1.0 - t2442 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 * t2442 ; }
t2668 = U_idx_1 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 > t2441 *
0.15707963267948966 / 0.0019634954084936209 / ( t2668 == 0.0 ? 1.0E-16 :
t2668 ) / 30.0 ) { U_idx_0 = ( intrm_sf_mf_1209 + t2437 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = t2441 *
0.15707963267948966 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 ) /
0.0019634954084936209 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = 30.0 ; }
intrm_sf_mf_1209 = ( X [ 369ULL ] - X [ 384ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv = intrm_sf_mf_1186 +
intrm_sf_mf_1210 * 0.0019634954084936209 / 0.05 * ( U_idx_1 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv + t2440 ) / 2.0 ) *
intrm_sf_mf_1209 ; intrm_sf_mf_1210 = pmf_sqrt ( X [ 388ULL ] * X [ 388ULL ]
+ 3.0116308772356542E-13 ) ; intrm_sf_mf_1186 = pmf_sqrt ( X [ 388ULL ] * X [
388ULL ] + 5.8094731428156895E-13 ) ; intrm_sf_mf_1209 = pmf_sqrt ( X [
388ULL ] * X [ 388ULL ] + 4.1024015709531055E-13 ) ; t2437 = pmf_sqrt ( X [
376ULL ] * X [ 376ULL ] + 3.0116308772356542E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = pmf_sqrt (
X [ 376ULL ] * X [ 376ULL ] + 5.8094731428156895E-13 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 = pmf_sqrt (
X [ 376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 ) ;
tlu2_1d_linear_linear_value ( & hl_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = hl_efOut [ 0 ] ; t2440 =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & il_efOut [ 0ULL ] , & t95 .
mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = il_efOut
[ 0 ] ; t2442 = - X [ 377ULL ] + X [ 399ULL ] ; t2443 = ( - X [ 376ULL ] + X
[ 388ULL ] ) - t4352 * 100000.0 ; t2445 = ( - X [ 378ULL ] + X [ 400ULL ] ) -
t4352 * 100000.0 ; t2446 = ( ( ( 1.0 - t2382 ) - t2383 ) * t2440 +
intrm_sf_mf_1259 * t2382 ) + t1785_idx_0 * t2383 ; t2448 = t2440 - X [ 49ULL
] * 0.296802103844292 ; t2440 = t1785_idx_0 - X [ 49ULL ] *
0.25983661262297303 ; t2441 = intrm_sf_mf_1259 - X [ 49ULL ] * 0.461523 ; if
( X [ 385ULL ] * 0.0019634954084936209 <= 1.9634954084936209E-11 ) {
intrm_sf_mf_1259 = 1.9634954084936209E-11 ; } else if ( X [ 385ULL ] *
0.0019634954084936209 >= 0.0012566370614359179 ) { intrm_sf_mf_1259 =
0.0012566370614359179 ; } else { intrm_sf_mf_1259 = X [ 385ULL ] *
0.0019634954084936209 ; } t3570 = intrm_sf_mf_1259 / 0.0019634954084936209 ;
if ( X [ 408ULL ] <= 0.0 ) { t2450 = 0.0 ; } else { t2450 = X [ 408ULL ] >=
1.0 ? 1.0 : X [ 408ULL ] ; } if ( X [ 409ULL ] <= 0.0 ) { t3571 = 0.0 ; }
else { t3571 = X [ 409ULL ] >= 1.0 ? 1.0 : X [ 409ULL ] ; } t2452 = ( ( ( 1.0
- t2450 ) - t3571 ) * 296.802103844292 + t2450 * 461.523 ) + t3571 *
259.836612622973 ; t2668 = X [ 406ULL ] * t2452 ; t2453 = X [ 407ULL ] / (
t2668 == 0.0 ? 1.0E-16 : t2668 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = X [ 407ULL
] / ( t2381 == 0.0 ? 1.0E-16 : t2381 ) * ( X [ 410ULL ] / ( X [ 406ULL ] ==
0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ; t2456 = X [ 407ULL ] / 1.01325 * ( X [
411ULL ] / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ; if ( X [
376ULL ] > 0.0 ) { t2457 = ( t3570 + 1.0 ) * ( 1.0 - t3570 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) * ( X [
376ULL ] / 0.64 / ( intrm_sf_mf_1259 == 0.0 ? 1.0E-16 : intrm_sf_mf_1259 ) *
( X [ 376ULL ] / 0.64 / ( intrm_sf_mf_1259 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1259 ) ) / 2.0 / ( t2453 == 0.0 ? 1.0E-16 : t2453 ) ) *
9.9999999999999991E-11 ; } else if ( X [ 376ULL ] < 0.0 ) { t2457 = ( t3570 +
1.0 ) * ( 1.0 - t3570 * t2456 ) * ( X [ 376ULL ] / 0.64 / ( intrm_sf_mf_1259
== 0.0 ? 1.0E-16 : intrm_sf_mf_1259 ) * ( X [ 376ULL ] / 0.64 / (
intrm_sf_mf_1259 == 0.0 ? 1.0E-16 : intrm_sf_mf_1259 ) ) / 2.0 / ( t2453 ==
0.0 ? 1.0E-16 : t2453 ) ) * 9.9999999999999991E-11 ; } else { t2457 = 0.0 ; }
t2459 = ( t2381 + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t2458 = ( 1.0 -
t3570 ) * ( 1.0 - t3570 ) ; t2460 = t2459 * t2458 ; t2461 = ( t3570 + 1.0 ) *
( 1.0 - t3570 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) - ( 1.0 -
t3570 * t2456 ) * t3570 * 2.0 ; t2462 = ( t2381 - 1.01325 ) * ( t2461 >=
t2458 ? t2461 : t2458 ) ; t2461 = ( t2381 - 1.01325 ) / ( t2459 == 0.0 ?
1.0E-16 : t2459 ) ; t2463 = t2461 * t2461 * 3.0 - t2461 * t2461 * t2461 * 2.0
; if ( t2381 - 1.01325 <= 0.0 ) { t2461 = t2460 ; } else if ( t2381 - 1.01325
>= t2459 ) { t2461 = t2462 ; } else { t2461 = ( 1.0 - t2463 ) * t2460 + t2462
* t2463 ; } t2462 = ( t3570 + 1.0 ) * ( 1.0 - t3570 * t2456 ) - ( 1.0 - t3570
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) * t3570 *
2.0 ; t3570 = ( 1.01325 - t2381 ) * ( t2462 >= t2458 ? t2462 : t2458 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = ( 1.01325 -
t2381 ) / ( t2459 == 0.0 ? 1.0E-16 : t2459 ) ; t2456 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * 2.0 ; if (
1.01325 - t2381 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = t2460 ; }
else if ( 1.01325 - t2381 >= t2459 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = t3570 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = (
1.0 - t2456 ) * t2460 + t3570 * t2456 ; } if ( t2381 > 1.01325 ) { t3570 =
t2461 ; } else { t3570 = t2381 < 1.01325 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 : t2460 ; }
if ( X [ 406ULL ] <= 216.59999999999997 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 =
216.59999999999997 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = X [ 406ULL
] >= 623.15 ? 623.15 : X [ 406ULL ] ; } t1884 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ; t2456 = ( (
( 1074.1165326382541 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * -
0.2214565261064077 ) + t1884 * 0.00037212980109010952 ) * ( ( 1.0 - t2450 ) -
t3571 ) + ( ( 1479.6504774710445 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 *
1.200211433705052 ) + t1884 * - 0.00038614513167842338 ) * t2450 ) + ( (
900.63941224837913 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * -
0.044484923911364271 ) + t1884 * 0.00036936011832043369 ) * t3571 ; t2691 =
t2456 - t2452 ; t2691 = X [ 407ULL ] * X [ 407ULL ] * ( t2456 / ( t2691 ==
0.0 ? 1.0E-16 : t2691 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = pmf_sqrt (
fabs ( t2691 / ( t2452 == 0.0 ? 1.0E-16 : t2452 ) / ( X [ 406ULL ] == 0.0 ?
1.0E-16 : X [ 406ULL ] ) ) ) * intrm_sf_mf_1259 * 0.64 ; t2694 = t2453 * 2.0
; t2453 = ( t2381 - 1.01325 ) * pmf_sqrt ( fabs ( t2694 / ( t3570 == 0.0 ?
1.0E-16 : t3570 ) ) ) * intrm_sf_mf_1259 * 0.64 ; if ( X [ 14ULL ] <= 0.0 ) {
t2456 = 0.0 ; } else { t2456 = X [ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if
( X [ 13ULL ] <= 0.0 ) { t2458 = 0.0 ; } else { t2458 = X [ 13ULL ] >= 1.0 ?
1.0 : X [ 13ULL ] ; } t2460 = ( ( ( 1.0 - t2456 ) - t2458 ) *
296.802103844292 + t2456 * 461.523 ) + t2458 * 259.836612622973 ; t2461 = - (
( X [ 12ULL ] / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) - X [ 413ULL ]
/ ( X [ 414ULL ] == 0.0 ? 1.0E-16 : X [ 414ULL ] ) ) * X [ 353ULL ] * t2460 )
/ 0.32 ; if ( X [ 413ULL ] <= 216.59999999999997 ) { t2462 =
216.59999999999997 ; } else { t2462 = X [ 413ULL ] >= 623.15 ? 623.15 : X [
413ULL ] ; } t2465 = t2462 * t2462 ; t2463 = ( ( ( 1074.1165326382541 + t2462
* - 0.2214565261064077 ) + t2465 * 0.00037212980109010952 ) * ( ( 1.0 - t2456
) - t2458 ) + ( ( 1479.6504774710445 + t2462 * 1.200211433705052 ) + t2465 *
- 0.00038614513167842338 ) * t2456 ) + ( ( 900.63941224837913 + t2462 * -
0.044484923911364271 ) + t2465 * 0.00036936011832043369 ) * t2458 ; t2700 =
t2463 - t2460 ; t2462 = t2463 / ( t2700 == 0.0 ? 1.0E-16 : t2700 ) ; t2463 =
pmf_sqrt ( t2461 * t2461 * 9.999999999999999E-14 + fabs ( X [ 413ULL ] *
t2462 * t2460 ) * 1.0E-9 ) ; if ( X [ 87ULL ] <= 0.0 ) { t1884 = 0.0 ; } else
{ t1884 = X [ 87ULL ] >= 1.0 ? 1.0 : X [ 87ULL ] ; } if ( X [ 86ULL ] <= 0.0
) { t2465 = 0.0 ; } else { t2465 = X [ 86ULL ] >= 1.0 ? 1.0 : X [ 86ULL ] ; }
t1791 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_nearest_prelookup ( & jl_efOut .
mField0 [ 0ULL ] , & jl_efOut . mField1 [ 0ULL ] , & jl_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t89 = jl_efOut ;
tlu2_1d_linear_nearest_value ( & kl_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = kl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ll_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ll_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ml_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ml_efOut [ 0 ] ; t2467 =
( ( ( 1.0 - t1884 ) - t2465 ) * t1785_idx_0 + U_idx_0 * t1884 ) + t1768_idx_0
* t2465 ; t2700 = X [ 414ULL ] * X [ 414ULL ] * t2462 ; t2468 = - pmf_sqrt (
fabs ( t2700 / ( t2460 == 0.0 ? 1.0E-16 : t2460 ) / ( X [ 413ULL ] == 0.0 ?
1.0E-16 : X [ 413ULL ] ) ) ) * 0.32 ; if ( t2468 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke = t2468 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke = - t2468 *
100000.0 ; } t2705 = t2467 * 0.32 ; t2470 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke * 0.01 / (
t2705 == 0.0 ? 1.0E-16 : t2705 ) ; t2704 = X [ 12ULL ] * t2460 ; t2471 = X [
53ULL ] / ( t2704 == 0.0 ? 1.0E-16 : t2704 ) ; t2709 = t2471 *
6.4000000000000011E-5 ; t2472 = t2468 * t2467 * 2.9973120849090416 / ( t2709
== 0.0 ? 1.0E-16 : t2709 ) ; t2473 = t2470 >= 1.0 ? t2470 : 1.0 ; U_idx_0 =
pmf_log10 ( 6.9 / ( t2473 == 0.0 ? 1.0E-16 : t2473 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2473 == 0.0 ? 1.0E-16 : t2473 ) +
0.00017169489553429715 ) * 3.24 ; t2712 = t2471 * 0.0020480000000000003 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke = t2468 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke * ( 1.0 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ) * 0.046833001326703774 / ( t2712 ==
0.0 ? 1.0E-16 : t2712 ) ; t2473 = ( t2470 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = t2473 *
t2473 * 3.0 - t2473 * t2473 * t2473 * 2.0 ; if ( t2470 <= 2000.0 ) { t2473 =
t2472 * 1.0E-5 ; } else if ( t2470 >= 4000.0 ) { t2473 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke * 1.0E-5 ; }
else { t2473 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) * t2472 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) * 1.0E-5 ; }
t2463 = - ( X [ 353ULL ] * t2463 ) / 0.32 * 0.00031622776601683789 + t2473 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke = X [ 341ULL
] - X [ 53ULL ] ; t2472 = ( X [ 12ULL ] / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X
[ 53ULL ] ) - X [ 416ULL ] / ( X [ 417ULL ] == 0.0 ? 1.0E-16 : X [ 417ULL ] )
) * X [ 415ULL ] * t2460 / 0.32 ; if ( X [ 416ULL ] <= 216.59999999999997 ) {
t2473 = 216.59999999999997 ; } else { t2473 = X [ 416ULL ] >= 623.15 ? 623.15
: X [ 416ULL ] ; } t2475 = t2473 * t2473 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = ( ( (
1074.1165326382541 + t2473 * - 0.2214565261064077 ) + t2475 *
0.00037212980109010952 ) * ( ( 1.0 - t2456 ) - t2458 ) + ( (
1479.6504774710445 + t2473 * 1.200211433705052 ) + t2475 * -
0.00038614513167842338 ) * t2456 ) + ( ( 900.63941224837913 + t2473 * -
0.044484923911364271 ) + t2475 * 0.00036936011832043369 ) * t2458 ; t2662 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked - t2460 ;
t2473 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked / (
t2662 == 0.0 ? 1.0E-16 : t2662 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = pmf_sqrt (
t2472 * t2472 * 9.999999999999999E-14 + fabs ( X [ 416ULL ] * t2473 * t2460 )
* 1.0E-9 ) ; t2662 = X [ 417ULL ] * X [ 417ULL ] * t2473 ; t2475 = - pmf_sqrt
( fabs ( t2662 / ( t2460 == 0.0 ? 1.0E-16 : t2460 ) / ( X [ 416ULL ] == 0.0 ?
1.0E-16 : X [ 416ULL ] ) ) ) * 0.32 ; if ( t2475 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = t2475 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = - t2475 *
100000.0 ; } t2478 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke * 0.01 / (
t2705 == 0.0 ? 1.0E-16 : t2705 ) ; U_idx_0 = t2475 * t2467 *
2.9973120849090416 / ( t2709 == 0.0 ? 1.0E-16 : t2709 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = t2478 >= 1.0 ?
t2478 : 1.0 ; t2813 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) +
0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = t2475 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke * ( 1.0 / (
t2813 == 0.0 ? 1.0E-16 : t2813 ) ) * 0.046833001326703774 / ( t2712 == 0.0 ?
1.0E-16 : t2712 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I =
( t2478 - 2000.0 ) / 2000.0 ; t2485 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I * 2.0 ; if ( t2478 <=
2000.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = U_idx_0
* 1.0E-5 ; } else if ( t2478 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke * 1.0E-5 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = ( ( 1.0 -
t2485 ) * U_idx_0 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke * t2485 ) *
1.0E-5 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = X
[ 415ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked /
0.32 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = X [ 73ULL ]
- X [ 53ULL ] ; t1791 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup (
& nl_efOut . mField0 [ 0ULL ] , & nl_efOut . mField1 [ 0ULL ] , & nl_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = nl_efOut ;
tlu2_1d_linear_linear_value ( & ol_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ol_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & pl_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = pl_efOut [ 0 ] ; t2485 =
t1785_idx_0 ; if ( 1.0 - X [ 14ULL ] >= 0.01 ) { t2491 = 1.0 - X [ 14ULL ] ;
} else if ( 1.0 - X [ 14ULL ] >= - 0.1 ) { t2491 = pmf_exp ( ( ( 1.0 - X [
14ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t2491 = 1.6701700790245661E-7 ;
} t2487 = X [ 13ULL ] / ( t2491 == 0.0 ? 1.0E-16 : t2491 ) * -
36.965491221318985 + 296.802103844292 ; tlu2_1d_linear_linear_value ( &
ql_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = ql_efOut [ 0 ] ; t2493 = pmf_exp ( pmf_log ( X [ 53ULL ] *
100000.0 ) - t1785_idx_0 ) ; if ( t2493 >= 1.0 ) { t2813 = ( t2493 - 1.0 ) *
461.523 + t2487 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond =
t2487 / ( t2813 == 0.0 ? 1.0E-16 : t2813 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond = 1.0 ; } U_idx_0 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond * 0.01 ; t2487 = ( X
[ 14ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond ) / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; if ( X [ 14ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond <= 0.0 ) { t2487 =
0.0 ; } else if ( X [ 14ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond * 0.01 ) { t2487 = X
[ 14ULL ] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond ; } else
{ t2487 = ( X [ 14ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond ) * ( t2487 * t2487
* 3.0 - t2487 * t2487 * t2487 * 2.0 ) ; } t2471 = t2471 * t2487 *
0.026773120849090417 / 0.001 ; t2487 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I - t2485 ) * t2471 ;
tlu2_1d_linear_nearest_value ( & rl_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = rl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sl_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = sl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tl_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = tl_efOut [ 0 ] ; t2485 =
( ( ( 1.0 - t1884 ) - t2465 ) * t1785_idx_0 + U_idx_0 * t1884 ) + t1768_idx_0
* t2465 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond = ( 323.15
- X [ 12ULL ] ) * ( t2485 * 10.709248339636167 / 0.01 ) ;
tlu2_1d_linear_nearest_value ( & ul_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ul_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vl_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = vl_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wl_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = wl_efOut [ 0 ] ; t2496 =
( ( ( 1.0 - t1884 ) - t2465 ) * t1785_idx_0 + U_idx_0 * t1884 ) + t1768_idx_0
* t2465 ; t1884 = ( - X [ 353ULL ] - X [ 415ULL ] ) / 2.0 ; U_idx_0 = (
U_idx_2 + t2467 ) / 2.0 * 0.32 ; U_idx_2 = ( t1884 >= 0.0 ? t1884 : 0.0 ) *
0.01 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2465 = U_idx_2 >= 0.0 ?
U_idx_2 : - U_idx_2 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = t2465 >
1000.0 ? t2465 : 1000.0 ; t2813 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in + t2496 ; if (
t2813 / 2.0 > 0.5 ) { t2502 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in + t2496 ) / 2.0 ;
} else { t2502 = 0.5 ; } U_idx_0 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) +
0.00017169489553429715 ) * 3.24 ; t2503 = 1.0 / ( U_idx_0 == 0.0 ? 1.0E-16 :
U_idx_0 ) ; U_idx_0 = ( pmf_pow ( t2502 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2503 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 - 1000.0 ) *
( t2503 / 8.0 ) * t2502 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2502 = (
t2465 - 2000.0 ) / 2000.0 ; t2503 = t2502 * t2502 * 3.0 - t2502 * t2502 *
t2502 * 2.0 ; if ( t2465 <= 2000.0 ) { t2502 = 3.66 ; } else if ( t2465 >=
4000.0 ) { t2502 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ; } else {
t2502 = ( 1.0 - t2503 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 * t2503 ; }
U_idx_0 = t2813 / 2.0 ; if ( t2465 > t2502 * 10.709248339636167 / 0.32 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) / 30.0 ) { t2797 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in + t2496 ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = t2502 *
10.709248339636167 / ( t2465 == 0.0 ? 1.0E-16 : t2465 ) / 0.32 / ( t2797 ==
0.0 ? 1.0E-16 : t2797 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = ( 323.15 - X [
340ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) ) ; U_idx_2
= U_idx_2 * 0.32 / 0.01 * ( t2813 / 2.0 ) * ( ( t2363 + t2485 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ; if ( X [ 75ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = 0.0 ;
} else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = X [
75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [ 74ULL ] <= 0.0 ) { t2363 =
0.0 ; } else { t2363 = X [ 74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; } t2465 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) - t2363
) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in * 461.523 ) +
t2363 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = X [ 75ULL ]
* 461.523 / ( t2465 == 0.0 ? 1.0E-16 : t2465 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 <= 0.0 ) {
t2502 = 0.0 ; } else { t2502 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = X [ 74ULL ]
* 259.836612622973 / ( t2465 == 0.0 ? 1.0E-16 : t2465 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 <= 0.0 ) {
t2503 = 0.0 ; } else { t2503 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ; } t1791 [
0ULL ] = X [ 72ULL ] ; tlu2_linear_nearest_prelookup ( & xl_efOut . mField0 [
0ULL ] , & xl_efOut . mField1 [ 0ULL ] , & xl_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t55 = xl_efOut ; tlu2_1d_linear_nearest_value ( &
yl_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = yl_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
am_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = am_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & bm_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = bm_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = ( ( ( 1.0 -
t2502 ) - t2503 ) * t1785_idx_0 + U_idx_0 * t2502 ) + t1768_idx_0 * t2503 ;
tlu2_1d_linear_nearest_value ( & cm_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = cm_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & dm_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = dm_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & em_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = em_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I = ( ( ( 1.0 - t2502
) - t2503 ) * t1785_idx_0 + U_idx_0 * t2502 ) + t1768_idx_0 * t2503 ;
intrm_sf_mf_1383 = t1884 <= 0.0 ? t1884 : 0.0 ; tlu2_1d_linear_nearest_value
( & fm_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [
0ULL ] ) ; t1785_idx_0 = fm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
gm_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = gm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hm_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = hm_efOut [ 0 ] ; t1884 = ( ( ( 1.0 - t2502 ) - t2503 ) *
t1785_idx_0 + U_idx_0 * t2502 ) + t1768_idx_0 * t2503 ; U_idx_0 = ( t2467 +
t1884 ) / 2.0 * 0.32 ; t2502 = - intrm_sf_mf_1383 * 0.01 / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ; t2503 = t2502 >= 0.0 ? t2502 : - t2502 ;
intrm_sf_mf_1383 = t2503 > 1000.0 ? t2503 : 1000.0 ; t2813 = t2496 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ; if ( t2813
/ 2.0 > 0.5 ) { t2509 = ( t2496 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) / 2.0 ; }
else { t2509 = 0.5 ; } U_idx_0 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1383 == 0.0
? 1.0E-16 : intrm_sf_mf_1383 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 /
( intrm_sf_mf_1383 == 0.0 ? 1.0E-16 : intrm_sf_mf_1383 ) +
0.00017169489553429715 ) * 3.24 ; t2511 = 1.0 / ( U_idx_0 == 0.0 ? 1.0E-16 :
U_idx_0 ) ; U_idx_0 = ( pmf_pow ( t2509 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2511 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_1383 = ( intrm_sf_mf_1383
- 1000.0 ) * ( t2511 / 8.0 ) * t2509 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 )
; t2509 = ( t2503 - 2000.0 ) / 2000.0 ; t2511 = t2509 * t2509 * 3.0 - t2509 *
t2509 * t2509 * 2.0 ; if ( t2503 <= 2000.0 ) { t2509 = 3.66 ; } else if (
t2503 >= 4000.0 ) { t2509 = intrm_sf_mf_1383 ; } else { t2509 = ( 1.0 - t2511
) * 3.66 + intrm_sf_mf_1383 * t2511 ; } U_idx_0 = t2813 / 2.0 ; if ( t2503 >
t2509 * 10.709248339636167 / 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) /
30.0 ) { t2797 = ( t2496 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) / 2.0 ;
intrm_sf_mf_1383 = t2509 * 10.709248339636167 / ( t2503 == 0.0 ? 1.0E-16 :
t2503 ) / 0.32 / ( t2797 == 0.0 ? 1.0E-16 : t2797 ) ; } else {
intrm_sf_mf_1383 = 30.0 ; } t2496 = ( 323.15 - X [ 72ULL ] ) * ( 1.0 -
pmf_exp ( - intrm_sf_mf_1383 ) ) ; t2496 = U_idx_2 + t2502 * 0.32 / 0.01 * (
t2813 / 2.0 ) * ( ( t2485 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I ) / 2.0 ) * t2496 ;
t2485 = pmf_sqrt ( X [ 353ULL ] * X [ 353ULL ] + 2.5711439722933289E-8 ) ;
t2502 = pmf_sqrt ( X [ 353ULL ] * X [ 353ULL ] + 4.9597684650720062E-8 ) ;
t2503 = pmf_sqrt ( X [ 353ULL ] * X [ 353ULL ] + 3.5023764535063275E-8 ) ;
intrm_sf_mf_1383 = pmf_sqrt ( X [ 415ULL ] * X [ 415ULL ] +
2.5711439722933289E-8 ) ; t2509 = pmf_sqrt ( X [ 415ULL ] * X [ 415ULL ] +
4.9597684650720062E-8 ) ; t2511 = pmf_sqrt ( X [ 415ULL ] * X [ 415ULL ] +
3.5023764535063275E-8 ) ; tlu2_1d_linear_linear_value ( & im_efOut [ 0ULL ] ,
& t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
im_efOut [ 0 ] ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_g_I =
t1785_idx_0 ; tlu2_1d_linear_linear_value ( & jm_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = jm_efOut
[ 0 ] ; t2515 = - X [ 361ULL ] + X [ 423ULL ] ; t2516 = ( - X [ 353ULL ] + X
[ 415ULL ] ) - t2471 * 100000.0 ; t2517 = ( - X [ 362ULL ] + X [ 424ULL ] ) -
t2471 * 100000.0 ; t2518 = ( ( ( 1.0 - t2456 ) - t2458 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_g_I +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I * t2456 ) +
t1785_idx_0 * t2458 ; t2520 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_g_I - X [ 12ULL ] *
0.296802103844292 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_g_I =
t1785_idx_0 - X [ 12ULL ] * 0.25983661262297303 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_w_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I - X [ 12ULL ] *
0.461523 ; if ( X [ 17ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I = X [ 17ULL ] >= 1.0
? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) { t2521 = 0.0 ; } else {
t2521 = X [ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } t2522 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) - t2521 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I *
461.523 ) + t2521 * 259.836612622973 ; t2523 = - ( ( X [ 15ULL ] / ( X [
54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) - X [ 427ULL ] / ( X [ 428ULL ] ==
0.0 ? 1.0E-16 : X [ 428ULL ] ) ) * X [ 415ULL ] * t2522 ) / 0.32 ; if ( X [
427ULL ] <= 216.59999999999997 ) { t2524 = 216.59999999999997 ; } else {
t2524 = X [ 427ULL ] >= 623.15 ? 623.15 : X [ 427ULL ] ; } t2526 = t2524 *
t2524 ; t2525 = ( ( ( 1074.1165326382541 + t2524 * - 0.2214565261064077 ) +
t2526 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) - t2521 ) + ( (
1479.6504774710445 + t2524 * 1.200211433705052 ) + t2526 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) + ( (
900.63941224837913 + t2524 * - 0.044484923911364271 ) + t2526 *
0.00036936011832043369 ) * t2521 ; t2793 = t2525 - t2522 ; t2524 = t2525 / (
t2793 == 0.0 ? 1.0E-16 : t2793 ) ; t2525 = pmf_sqrt ( t2523 * t2523 *
9.999999999999999E-14 + fabs ( X [ 427ULL ] * t2524 * t2522 ) * 1.0E-9 ) ; if
( X [ 92ULL ] <= 0.0 ) { t2526 = 0.0 ; } else { t2526 = X [ 92ULL ] >= 1.0 ?
1.0 : X [ 92ULL ] ; } if ( X [ 91ULL ] <= 0.0 ) { t2527 = 0.0 ; } else {
t2527 = X [ 91ULL ] >= 1.0 ? 1.0 : X [ 91ULL ] ; } t1791 [ 0ULL ] = X [ 15ULL
] ; tlu2_linear_nearest_prelookup ( & km_efOut . mField0 [ 0ULL ] , &
km_efOut . mField1 [ 0ULL ] , & km_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t89 = km_efOut ; tlu2_1d_linear_nearest_value ( &
lm_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = lm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mm_efOut
[ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = mm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & nm_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = nm_efOut [ 0 ] ; t2528 = ( ( ( 1.0 - t2526 ) - t2527 ) *
t1785_idx_0 + U_idx_0 * t2526 ) + t1768_idx_0 * t2527 ; t2793 = X [ 428ULL ]
* X [ 428ULL ] * t2524 ; t2529 = - pmf_sqrt ( fabs ( t2793 / ( t2522 == 0.0 ?
1.0E-16 : t2522 ) / ( X [ 427ULL ] == 0.0 ? 1.0E-16 : X [ 427ULL ] ) ) ) *
0.32 ; if ( t2529 >= 0.0 ) { t2530 = t2529 * 100000.0 ; } else { t2530 = -
t2529 * 100000.0 ; } t2797 = t2528 * 0.32 ; t2531 = t2530 * 0.01 / ( t2797 ==
0.0 ? 1.0E-16 : t2797 ) ; t2799 = X [ 15ULL ] * t2522 ; t2532 = X [ 54ULL ] /
( t2799 == 0.0 ? 1.0E-16 : t2799 ) ; t2801 = t2532 * 6.4000000000000011E-5 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI = t2529 *
t2528 * 2.9973120849090416 / ( t2801 == 0.0 ? 1.0E-16 : t2801 ) ; t2534 =
t2531 >= 1.0 ? t2531 : 1.0 ; U_idx_0 = pmf_log10 ( 6.9 / ( t2534 == 0.0 ?
1.0E-16 : t2534 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2534 ==
0.0 ? 1.0E-16 : t2534 ) + 0.00017169489553429715 ) * 3.24 ; t2804 = t2532 *
0.0020480000000000003 ; t2530 = t2529 * t2530 * ( 1.0 / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ) * 0.046833001326703774 / ( t2804 == 0.0 ? 1.0E-16 :
t2804 ) ; t2534 = ( t2531 - 2000.0 ) / 2000.0 ; t2535 = t2534 * t2534 * 3.0 -
t2534 * t2534 * t2534 * 2.0 ; if ( t2531 <= 2000.0 ) { t2534 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI * 1.0E-5 ; }
else if ( t2531 >= 4000.0 ) { t2534 = t2530 * 1.0E-5 ; } else { t2534 = ( (
1.0 - t2535 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI + t2530 *
t2535 ) * 1.0E-5 ; } t2525 = - ( X [ 415ULL ] * t2525 ) / 0.32 *
0.00031622776601683789 + t2534 ; t2530 = X [ 73ULL ] - X [ 54ULL ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI = - ( ( X [
15ULL ] / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) - X [ 429ULL ] / ( X
[ 430ULL ] == 0.0 ? 1.0E-16 : X [ 430ULL ] ) ) * X [ 388ULL ] * t2522 ) /
0.32 ; if ( X [ 429ULL ] <= 216.59999999999997 ) { t2534 = 216.59999999999997
; } else { t2534 = X [ 429ULL ] >= 623.15 ? 623.15 : X [ 429ULL ] ; } t2537 =
t2534 * t2534 ; t2535 = ( ( ( 1074.1165326382541 + t2534 * -
0.2214565261064077 ) + t2537 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) - t2521 ) + ( (
1479.6504774710445 + t2534 * 1.200211433705052 ) + t2537 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) + ( (
900.63941224837913 + t2534 * - 0.044484923911364271 ) + t2537 *
0.00036936011832043369 ) * t2521 ; t2813 = t2535 - t2522 ; t2534 = t2535 / (
t2813 == 0.0 ? 1.0E-16 : t2813 ) ; t2535 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 429ULL ] * t2534 * t2522 ) * 1.0E-9 ) ;
t2813 = X [ 430ULL ] * X [ 430ULL ] * t2534 ; t1834 = - pmf_sqrt ( fabs (
t2813 / ( t2522 == 0.0 ? 1.0E-16 : t2522 ) / ( X [ 429ULL ] == 0.0 ? 1.0E-16
: X [ 429ULL ] ) ) ) * 0.32 ; if ( t1834 >= 0.0 ) { t2537 = t1834 * 100000.0
; } else { t2537 = - t1834 * 100000.0 ; } t2538 = t2537 * 0.01 / ( t2797 ==
0.0 ? 1.0E-16 : t2797 ) ; U_idx_0 = t1834 * t2528 * 2.9973120849090416 / (
t2801 == 0.0 ? 1.0E-16 : t2801 ) ; t2540 = t2538 >= 1.0 ? t2538 : 1.0 ; t3048
= pmf_log10 ( 6.9 / ( t2540 == 0.0 ? 1.0E-16 : t2540 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2540 == 0.0 ? 1.0E-16 : t2540
) + 0.00017169489553429715 ) * 3.24 ; t2537 = t1834 * t2537 * ( 1.0 / ( t3048
== 0.0 ? 1.0E-16 : t3048 ) ) * 0.046833001326703774 / ( t2804 == 0.0 ?
1.0E-16 : t2804 ) ; t2540 = ( t2538 - 2000.0 ) / 2000.0 ; t2541 = t2540 *
t2540 * 3.0 - t2540 * t2540 * t2540 * 2.0 ; if ( t2538 <= 2000.0 ) { t2540 =
U_idx_0 * 1.0E-5 ; } else if ( t2538 >= 4000.0 ) { t2540 = t2537 * 1.0E-5 ; }
else { t2540 = ( ( 1.0 - t2541 ) * U_idx_0 + t2537 * t2541 ) * 1.0E-5 ; }
t2535 = - ( X [ 388ULL ] * t2535 ) / 0.32 * 0.00031622776601683789 + t2540 ;
t2537 = X [ 366ULL ] - X [ 54ULL ] ; t1791 [ 0ULL ] = X [ 15ULL ] ;
tlu2_linear_linear_prelookup ( & om_efOut . mField0 [ 0ULL ] , & om_efOut .
mField1 [ 0ULL ] , & om_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = om_efOut ; tlu2_1d_linear_linear_value ( & pm_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = pm_efOut
[ 0 ] ; t2540 = t1785_idx_0 ; tlu2_1d_linear_linear_value ( & qm_efOut [ 0ULL
] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1785_idx_0 = qm_efOut [ 0 ] ; t2541 = t1785_idx_0 ; if ( 1.0 - X [ 17ULL
] >= 0.01 ) { t2543 = 1.0 - X [ 17ULL ] ; } else if ( 1.0 - X [ 17ULL ] >= -
0.1 ) { t2543 = pmf_exp ( ( ( 1.0 - X [ 17ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t2543 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden = X [ 16ULL ]
/ ( t2543 == 0.0 ? 1.0E-16 : t2543 ) * - 36.965491221318985 +
296.802103844292 ; tlu2_1d_linear_linear_value ( & rm_efOut [ 0ULL ] , & t81
. mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField3 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
rm_efOut [ 0 ] ; t2544 = pmf_exp ( pmf_log ( X [ 54ULL ] * 100000.0 ) -
t1785_idx_0 ) ; if ( t2544 >= 1.0 ) { t3048 = ( t2544 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden ; t2545 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden / ( t3048 ==
0.0 ? 1.0E-16 : t3048 ) ; } else { t2545 = 1.0 ; } U_idx_0 = t2545 * 0.01 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden = ( X [ 17ULL
] - t2545 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; if ( X [ 17ULL ] -
t2545 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden = 0.0 ; }
else if ( X [ 17ULL ] - t2545 >= t2545 * 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden = X [ 17ULL ]
- t2545 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden = ( X [ 17ULL
] - t2545 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden * 2.0 ) ; }
t2532 = t2532 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden *
0.026773120849090417 / 0.001 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden = ( t2540 -
t2541 ) * t2532 ; tlu2_1d_linear_nearest_value ( & sm_efOut [ 0ULL ] , & t89
. mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField10 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
sm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & tm_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = tm_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & um_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = um_efOut [ 0
] ; t2541 = ( ( ( 1.0 - t2526 ) - t2527 ) * t1785_idx_0 + U_idx_0 * t2526 ) +
t1768_idx_0 * t2527 ; t2545 = ( 323.15 - X [ 15ULL ] ) * ( t2541 *
10.709248339636167 / 0.01 ) ; tlu2_1d_linear_nearest_value ( & vm_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = vm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( &
wm_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = wm_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xm_efOut [
0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = xm_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total = ( ( ( 1.0 -
t2526 ) - t2527 ) * t1785_idx_0 + U_idx_0 * t2526 ) + t1768_idx_0 * t2527 ;
t2526 = ( - X [ 415ULL ] - ( - X [ 388ULL ] ) ) / 2.0 ; U_idx_0 = ( t1884 +
t2528 ) / 2.0 * 0.32 ; t1884 = ( t2526 >= 0.0 ? t2526 : 0.0 ) * 0.01 / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2527 = t1884 >= 0.0 ? t1884 : - t1884
; t2548 = t2527 > 1000.0 ? t2527 : 1000.0 ; t3048 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ; if ( t3048
/ 2.0 > 0.5 ) { U_idx_1 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ) / 2.0 ; }
else { U_idx_1 = 0.5 ; } U_idx_0 = pmf_log10 ( 6.9 / ( t2548 == 0.0 ? 1.0E-16
: t2548 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2548 == 0.0 ?
1.0E-16 : t2548 ) + 0.00017169489553429715 ) * 3.24 ; t2550 = 1.0 / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) ; U_idx_0 = ( pmf_pow ( U_idx_1 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t2550 / 8.0 ) * 12.7 + 1.0 ; t2548
= ( t2548 - 1000.0 ) * ( t2550 / 8.0 ) * U_idx_1 / ( U_idx_0 == 0.0 ? 1.0E-16
: U_idx_0 ) ; U_idx_1 = ( t2527 - 2000.0 ) / 2000.0 ; t2550 = U_idx_1 *
U_idx_1 * 3.0 - U_idx_1 * U_idx_1 * U_idx_1 * 2.0 ; if ( t2527 <= 2000.0 ) {
U_idx_1 = 3.66 ; } else if ( t2527 >= 4000.0 ) { U_idx_1 = t2548 ; } else {
U_idx_1 = ( 1.0 - t2550 ) * 3.66 + t2548 * t2550 ; } U_idx_0 = t3048 / 2.0 ;
if ( t2527 > U_idx_1 * 10.709248339636167 / 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16
: U_idx_0 ) / 30.0 ) { U_idx_2 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ) / 2.0 ;
t2548 = U_idx_1 * 10.709248339636167 / ( t2527 == 0.0 ? 1.0E-16 : t2527 ) /
0.32 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; } else { t2548 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = ( 323.15 -
X [ 72ULL ] ) * ( 1.0 - pmf_exp ( - t2548 ) ) ; t1884 = t1884 * 0.32 / 0.01 *
( t3048 / 2.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I + t2541 ) / 2.0 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ; U_idx_0 = (
t2435 + t2528 ) / 2.0 * 0.32 ; t2435 = - ( t2526 <= 0.0 ? t2526 : 0.0 ) *
0.01 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = t2435 >=
0.0 ? t2435 : - t2435 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 > 1000.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 : 1000.0 ;
t3048 = t2430 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ; if ( t3048
/ 2.0 > 0.5 ) { t2526 = ( t2430 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ) / 2.0 ; }
else { t2526 = 0.5 ; } U_idx_0 = pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I ) +
0.00017169489553429715 ) * 3.24 ; t2527 = 1.0 / ( U_idx_0 == 0.0 ? 1.0E-16 :
U_idx_0 ) ; U_idx_0 = ( pmf_pow ( t2526 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t2527 / 8.0 ) * 12.7 + 1.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I - 1000.0 ) * ( t2527
/ 8.0 ) * t2526 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2526 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 - 2000.0 ) /
2000.0 ; t2527 = t2526 * t2526 * 3.0 - t2526 * t2526 * t2526 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 <= 2000.0 ) {
t2526 = 3.66 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 >= 4000.0 ) {
t2526 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I ; } else {
t2526 = ( 1.0 - t2527 ) * 3.66 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I * t2527 ; } U_idx_0
= t3048 / 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 > t2526 *
10.709248339636167 / 0.32 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) / 30.0 ) {
U_idx_2 = ( t2430 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total ) / 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I = t2526 *
10.709248339636167 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) /
0.32 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I = 30.0 ; } t2430 = (
323.15 - X [ 365ULL ] ) * ( 1.0 - pmf_exp ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I ) ) ; t2430 = t1884
+ t2435 * 0.32 / 0.01 * ( t3048 / 2.0 ) * ( ( U_idx_3 + t2541 ) / 2.0 ) *
t2430 ; t2435 = pmf_sqrt ( X [ 388ULL ] * X [ 388ULL ] +
2.5711439722933289E-8 ) ; t1884 = pmf_sqrt ( X [ 388ULL ] * X [ 388ULL ] +
4.9597684650720062E-8 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 = pmf_sqrt (
X [ 388ULL ] * X [ 388ULL ] + 3.5023764535063275E-8 ) ;
tlu2_1d_linear_linear_value ( & ym_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ym_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I = t1785_idx_0 ;
tlu2_1d_linear_linear_value ( & an_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = an_efOut [ 0 ] ; t2527 = (
- X [ 423ULL ] - X [ 399ULL ] ) + X [ 104ULL ] ; t2541 = ( ( ( - X [ 415ULL ]
- X [ 388ULL ] ) + X [ 104ULL ] ) + X [ 109ULL ] ) - t2532 * 100000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total = ( ( - X [
424ULL ] - X [ 400ULL ] ) + X [ 109ULL ] ) - t2532 * 100000.0 ; t2548 = ( ( (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) - t2521 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I + t2540 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) + t1785_idx_0 *
t2521 ; t2550 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I - X
[ 15ULL ] * 0.296802103844292 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I = t1785_idx_0 - X [
15ULL ] * 0.25983661262297303 ; t2526 = t2540 - X [ 15ULL ] * 0.461523 ;
t1791 [ 0ULL ] = X [ 55ULL ] ; t837 [ 0 ] = 23ULL ;
tlu2_linear_nearest_prelookup ( & bn_efOut . mField0 [ 0ULL ] , & bn_efOut .
mField1 [ 0ULL ] , & bn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField21 , & t1791 [ 0ULL ] , & t837 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t55 = bn_efOut ; t1791 [ 0ULL ] = X [ 437ULL ] ; t1320 [ 0 ] = 29ULL ;
tlu2_linear_nearest_prelookup ( & cn_efOut . mField0 [ 0ULL ] , & cn_efOut .
mField1 [ 0ULL ] , & cn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField22 , & t1791 [ 0ULL ] , & t1320 [ 0ULL ] , & t139 [ 0ULL ] )
; t81 = cn_efOut ; tlu2_2d_linear_nearest_value ( & dn_efOut [ 0ULL ] , & t55
. mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , & t81 . mField0 [ 0ULL ] , &
t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField20 , &
t837 [ 0ULL ] , & t1320 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = dn_efOut
[ 0 ] ; t2540 = t1785_idx_0 ; t1791 [ 0ULL ] = X [ 269ULL ] ;
tlu2_linear_linear_prelookup ( & en_efOut . mField0 [ 0ULL ] , & en_efOut .
mField1 [ 0ULL ] , & en_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t95 = en_efOut ; tlu2_1d_linear_linear_value ( & fn_efOut [ 0ULL ] , & t95 .
mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = fn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & gn_efOut [ 0ULL ] , & t95 . mField0 [
0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = gn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & hn_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = hn_efOut [ 0 ] ; U_idx_3 =
( ( ( 1.0 - t3427 ) - t2353 ) * t1785_idx_0 + U_idx_0 * t3427 ) + t1768_idx_0
* t2353 ; t1791 [ 0ULL ] = X [ 340ULL ] ; tlu2_linear_linear_prelookup ( &
in_efOut . mField0 [ 0ULL ] , & in_efOut . mField1 [ 0ULL ] , & in_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t68 = in_efOut ;
tlu2_1d_linear_linear_value ( & jn_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = jn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & kn_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = kn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ln_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ln_efOut [ 0 ] ; t3427 = (
( ( 1.0 - intrm_sf_mf_1088 ) - t3555 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_1088 ) + t1768_idx_0 * t3555 ; t1791 [ 0ULL ] = X [ 351ULL ] ;
tlu2_linear_linear_prelookup ( & mn_efOut . mField0 [ 0ULL ] , & mn_efOut .
mField1 [ 0ULL ] , & mn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t40 = mn_efOut ; tlu2_1d_linear_linear_value ( & nn_efOut [ 0ULL ] , & t40 .
mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = nn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & on_efOut [ 0ULL ] , & t40 . mField0 [
0ULL ] , & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = on_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pn_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ]
, & t40 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pn_efOut [ 0 ] ; t2353 = (
( ( 1.0 - intrm_sf_mf_973 ) - t2323 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_973 ) + t1768_idx_0 * t2323 ; t1791 [ 0ULL ] = X [ 354ULL ] ;
tlu2_linear_linear_prelookup ( & qn_efOut . mField0 [ 0ULL ] , & qn_efOut .
mField1 [ 0ULL ] , & qn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t41 = qn_efOut ; tlu2_1d_linear_linear_value ( & rn_efOut [ 0ULL ] , & t41 .
mField0 [ 0ULL ] , & t41 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = rn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & sn_efOut [ 0ULL ] , & t41 . mField0 [
0ULL ] , & t41 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = sn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tn_efOut [ 0ULL ] , & t41 . mField0 [ 0ULL ]
, & t41 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = tn_efOut [ 0 ] ;
intrm_sf_mf_1088 = ( ( ( 1.0 - intrm_sf_mf_973 ) - t2323 ) * t1785_idx_0 +
U_idx_0 * intrm_sf_mf_973 ) + t1768_idx_0 * t2323 ; if ( - X [ 281ULL ] >=
0.0 ) { t3555 = - X [ 281ULL ] ; } else { t3555 = X [ 281ULL ] ; }
intrm_sf_mf_1293 = t3555 * 0.05 / ( t2488 == 0.0 ? 1.0E-16 : t2488 ) ; t2553
= intrm_sf_mf_1293 >= 1.0 ? intrm_sf_mf_1293 : 1.0 ; t3048 = pmf_log10 ( 6.9
/ ( t2553 == 0.0 ? 1.0E-16 : t2553 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t2553 == 0.0 ? 1.0E-16 : t2553 ) + 2.8767404433520813E-5 ) * 3.24 ;
t2554 = X [ 281ULL ] * t3345 * - 11.2 / ( t2492 == 0.0 ? 1.0E-16 : t2492 ) ;
t3555 = X [ 281ULL ] * t3555 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) *
- 0.175 / ( t2495 == 0.0 ? 1.0E-16 : t2495 ) ; t2553 = ( intrm_sf_mf_1293 -
2000.0 ) / 2000.0 ; t2555 = t2553 * t2553 * 3.0 - t2553 * t2553 * t2553 * 2.0
; if ( intrm_sf_mf_1293 <= 2000.0 ) { t2553 = t2554 * 9.9999999999999991E-11
; } else if ( intrm_sf_mf_1293 >= 4000.0 ) { t2553 = t3555 *
9.9999999999999991E-11 ; } else { t2553 = ( ( 1.0 - t2555 ) * t2554 + t3555 *
t2555 ) * 9.9999999999999991E-11 ; } t3555 = X [ 353ULL ] >= 0.0 ? X [ 353ULL
] : - X [ 353ULL ] ; intrm_sf_mf_1293 = t3555 * 0.05 / ( t2488 == 0.0 ?
1.0E-16 : t2488 ) ; t2554 = intrm_sf_mf_1293 >= 1.0 ? intrm_sf_mf_1293 : 1.0
; t3048 = pmf_log10 ( 6.9 / ( t2554 == 0.0 ? 1.0E-16 : t2554 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2554 == 0.0 ? 1.0E-16 : t2554
) + 2.8767404433520813E-5 ) * 3.24 ; t2555 = X [ 353ULL ] * t3345 * 11.2 / (
t2492 == 0.0 ? 1.0E-16 : t2492 ) ; t3555 = X [ 353ULL ] * t3555 * ( 1.0 / (
t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * 0.175 / ( t2495 == 0.0 ? 1.0E-16 : t2495
) ; t2554 = ( intrm_sf_mf_1293 - 2000.0 ) / 2000.0 ; t3928 = t2554 * t2554 *
3.0 - t2554 * t2554 * t2554 * 2.0 ; if ( intrm_sf_mf_1293 <= 2000.0 ) { t2554
= t2555 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_1293 >= 4000.0 ) {
t2554 = t3555 * 9.9999999999999991E-11 ; } else { t2554 = ( ( 1.0 - t3928 ) *
t2555 + t3555 * t3928 ) * 9.9999999999999991E-11 ; } if ( X [ 372ULL ] <= 0.0
) { t3555 = 0.0 ; } else { t3555 = X [ 372ULL ] >= 1.0 ? 1.0 : X [ 372ULL ] ;
} if ( X [ 371ULL ] <= 0.0 ) { intrm_sf_mf_1293 = 0.0 ; } else {
intrm_sf_mf_1293 = X [ 371ULL ] >= 1.0 ? 1.0 : X [ 371ULL ] ; } t2555 = ( ( (
1.0 - t3555 ) - intrm_sf_mf_1293 ) * 296.802103844292 + t3555 * 461.523 ) +
intrm_sf_mf_1293 * 259.836612622973 ; t1791 [ 0ULL ] = X [ 370ULL ] ;
tlu2_linear_linear_prelookup ( & un_efOut . mField0 [ 0ULL ] , & un_efOut .
mField1 [ 0ULL ] , & un_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = un_efOut ; tlu2_1d_linear_linear_value ( & vn_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = vn_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & wn_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = wn_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & xn_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = xn_efOut [ 0 ] ; t3928 = (
( ( 1.0 - t3555 ) - intrm_sf_mf_1293 ) * t1785_idx_0 + U_idx_0 * t3555 ) +
t1768_idx_0 * intrm_sf_mf_1293 ; t1791 [ 0ULL ] = X [ 365ULL ] ;
tlu2_linear_linear_prelookup ( & yn_efOut . mField0 [ 0ULL ] , & yn_efOut .
mField1 [ 0ULL ] , & yn_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = yn_efOut ; tlu2_1d_linear_linear_value ( & ao_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ao_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & bo_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = bo_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & co_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = co_efOut [ 0 ] ; t3555 = (
( ( 1.0 - t3520 ) - intrm_sf_mf_1234 ) * t1785_idx_0 + U_idx_0 * t3520 ) +
t1768_idx_0 * intrm_sf_mf_1234 ; t1791 [ 0ULL ] = X [ 384ULL ] ;
tlu2_linear_linear_prelookup ( & do_efOut . mField0 [ 0ULL ] , & do_efOut .
mField1 [ 0ULL ] , & do_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t95 = do_efOut ; tlu2_1d_linear_linear_value ( & eo_efOut [ 0ULL ] , & t95 .
mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = eo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & fo_efOut [ 0ULL ] , & t95 . mField0 [
0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = fo_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & go_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = go_efOut [ 0 ] ; t3520 = (
( ( 1.0 - t2432 ) - t2434 ) * t1785_idx_0 + U_idx_0 * t2432 ) + t1768_idx_0 *
t2434 ; t1791 [ 0ULL ] = X [ 389ULL ] ; tlu2_linear_linear_prelookup ( &
ho_efOut . mField0 [ 0ULL ] , & ho_efOut . mField1 [ 0ULL ] , & ho_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t55 = ho_efOut ;
tlu2_1d_linear_linear_value ( & io_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = io_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & jo_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = jo_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ko_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ko_efOut [ 0 ] ;
intrm_sf_mf_1234 = ( ( ( 1.0 - t2382 ) - t2383 ) * t1785_idx_0 + U_idx_0 *
t2382 ) + t1768_idx_0 * t2383 ; t1791 [ 0ULL ] = X [ 393ULL ] ;
tlu2_linear_linear_prelookup ( & lo_efOut . mField0 [ 0ULL ] , & lo_efOut .
mField1 [ 0ULL ] , & lo_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = lo_efOut ; tlu2_1d_linear_linear_value ( & mo_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = mo_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & no_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = no_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & oo_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = oo_efOut [ 0 ] ; t2432 = (
( ( 1.0 - t2382 ) - t2383 ) * t1785_idx_0 + U_idx_0 * t2382 ) + t1768_idx_0 *
t2383 ; t2434 = X [ 388ULL ] >= 0.0 ? X [ 388ULL ] : - X [ 388ULL ] ;
intrm_sf_mf_1293 = t2434 * 0.05 / ( t2583 == 0.0 ? 1.0E-16 : t2583 ) ;
intrm_sf_mf_1247 = intrm_sf_mf_1293 >= 1.0 ? intrm_sf_mf_1293 : 1.0 ; t3048 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_1247 == 0.0 ? 1.0E-16 : intrm_sf_mf_1247 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1247 == 0.0 ?
1.0E-16 : intrm_sf_mf_1247 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_1258 = X [ 388ULL ] * t3383 * 35.2 / ( t2587 == 0.0 ? 1.0E-16 :
t2587 ) ; t2434 = X [ 388ULL ] * t2434 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 :
t3048 ) ) * 0.55 / ( t2590 == 0.0 ? 1.0E-16 : t2590 ) ; intrm_sf_mf_1247 = (
intrm_sf_mf_1293 - 2000.0 ) / 2000.0 ; t2559 = intrm_sf_mf_1247 *
intrm_sf_mf_1247 * 3.0 - intrm_sf_mf_1247 * intrm_sf_mf_1247 *
intrm_sf_mf_1247 * 2.0 ; if ( intrm_sf_mf_1293 <= 2000.0 ) { intrm_sf_mf_1247
= intrm_sf_mf_1258 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_1293 >=
4000.0 ) { intrm_sf_mf_1247 = t2434 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_1247 = ( ( 1.0 - t2559 ) * intrm_sf_mf_1258 + t2434 * t2559 ) *
9.9999999999999991E-11 ; } if ( - X [ 376ULL ] >= 0.0 ) { t2434 = - X [
376ULL ] ; } else { t2434 = X [ 376ULL ] ; } intrm_sf_mf_1293 = t2434 * 0.05
/ ( t2583 == 0.0 ? 1.0E-16 : t2583 ) ; intrm_sf_mf_1258 = intrm_sf_mf_1293 >=
1.0 ? intrm_sf_mf_1293 : 1.0 ; t3048 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1258
== 0.0 ? 1.0E-16 : intrm_sf_mf_1258 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1258 == 0.0 ? 1.0E-16 : intrm_sf_mf_1258 ) +
2.8767404433520813E-5 ) * 3.24 ; t2559 = X [ 376ULL ] * t3383 * - 35.2 / (
t2587 == 0.0 ? 1.0E-16 : t2587 ) ; t2434 = X [ 376ULL ] * t2434 * ( 1.0 / (
t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * - 0.55 / ( t2590 == 0.0 ? 1.0E-16 :
t2590 ) ; intrm_sf_mf_1258 = ( intrm_sf_mf_1293 - 2000.0 ) / 2000.0 ; t2561 =
intrm_sf_mf_1258 * intrm_sf_mf_1258 * 3.0 - intrm_sf_mf_1258 *
intrm_sf_mf_1258 * intrm_sf_mf_1258 * 2.0 ; if ( intrm_sf_mf_1293 <= 2000.0 )
{ intrm_sf_mf_1258 = t2559 * 9.9999999999999991E-11 ; } else if (
intrm_sf_mf_1293 >= 4000.0 ) { intrm_sf_mf_1258 = t2434 *
9.9999999999999991E-11 ; } else { intrm_sf_mf_1258 = ( ( 1.0 - t2561 ) *
t2559 + t2434 * t2561 ) * 9.9999999999999991E-11 ; } t1791 [ 0ULL ] = X [
115ULL ] ; tlu2_linear_linear_prelookup ( & po_efOut . mField0 [ 0ULL ] , &
po_efOut . mField1 [ 0ULL ] , & po_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = po_efOut ; tlu2_1d_linear_linear_value ( &
qo_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = qo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ro_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = ro_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & so_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = so_efOut [ 0 ] ; t2434 = ( ( ( 1.0 - t1836 ) - t1944 ) *
t1785_idx_0 + U_idx_0 * t1836 ) + t1768_idx_0 * t1944 ; t1791 [ 0ULL ] = X [
410ULL ] ; tlu2_linear_linear_prelookup ( & to_efOut . mField0 [ 0ULL ] , &
to_efOut . mField1 [ 0ULL ] , & to_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = to_efOut ; tlu2_1d_linear_linear_value ( &
uo_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = uo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & vo_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = vo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & wo_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = wo_efOut [ 0 ] ; t1836 = ( ( ( 1.0 - t2450 ) - t3571 ) *
t1785_idx_0 + U_idx_0 * t2450 ) + t1768_idx_0 * t3571 ; t1791 [ 0ULL ] = X [
411ULL ] ; tlu2_linear_linear_prelookup ( & xo_efOut . mField0 [ 0ULL ] , &
xo_efOut . mField1 [ 0ULL ] , & xo_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t40 = xo_efOut ; tlu2_1d_linear_linear_value ( &
yo_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = yo_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ap_efOut
[ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = ap_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bp_efOut [
0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = bp_efOut [ 0 ] ; t1944 = ( ( ( 1.0 - t2450 ) - t3571 ) *
t1785_idx_0 + U_idx_0 * t2450 ) + t1768_idx_0 * t3571 ; t1791 [ 0ULL ] = X [
406ULL ] ; tlu2_linear_linear_prelookup ( & cp_efOut . mField0 [ 0ULL ] , &
cp_efOut . mField1 [ 0ULL ] , & cp_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = cp_efOut ; tlu2_1d_linear_linear_value ( &
dp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = dp_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ep_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = ep_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & fp_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = fp_efOut [ 0 ] ; intrm_sf_mf_1293 = ( ( ( 1.0 - t2450 ) -
t3571 ) * t1785_idx_0 + U_idx_0 * t2450 ) + t1768_idx_0 * t3571 ; U_idx_0 =
t2459 - ( - t2459 ) ; t2450 = ( ( t2381 - 1.01325 ) - ( - t2459 ) ) / (
U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t3571 = t2450 * t2450 * 3.0 - t2450 *
t2450 * t2450 * 2.0 ; if ( t2381 - 1.01325 <= - t2459 ) { t2450 = 1.01325 ; }
else if ( t2381 - 1.01325 >= t2459 ) { t2450 = t2381 ; } else { t2450 = ( 1.0
- t3571 ) * 1.01325 + t2381 * t3571 ; } t1791 [ 0ULL ] = X [ 134ULL ] ;
tlu2_linear_linear_prelookup ( & gp_efOut . mField0 [ 0ULL ] , & gp_efOut .
mField1 [ 0ULL ] , & gp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = gp_efOut ; tlu2_1d_linear_linear_value ( & hp_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = hp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & ip_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ip_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & jp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = jp_efOut [ 0 ] ; t3571 = (
( ( 1.0 - t1937 ) - zc_int48 ) * t1785_idx_0 + U_idx_0 * t1937 ) +
t1768_idx_0 * zc_int48 ; t1791 [ 0ULL ] = X [ 139ULL ] ;
tlu2_linear_linear_prelookup ( & kp_efOut . mField0 [ 0ULL ] , & kp_efOut .
mField1 [ 0ULL ] , & kp_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t41 = kp_efOut ; tlu2_1d_linear_linear_value ( & lp_efOut [ 0ULL ] , & t41 .
mField0 [ 0ULL ] , & t41 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = lp_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & mp_efOut [ 0ULL ] , & t41 . mField0 [
0ULL ] , & t41 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = mp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & np_efOut [ 0ULL ] , & t41 . mField0 [ 0ULL ]
, & t41 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = np_efOut [ 0 ] ; t1937 = (
( ( 1.0 - t1906 ) - t1907 ) * t1785_idx_0 + U_idx_0 * t1906 ) + t1768_idx_0 *
t1907 ; t1791 [ 0ULL ] = X [ 72ULL ] ; tlu2_linear_linear_prelookup ( &
op_efOut . mField0 [ 0ULL ] , & op_efOut . mField1 [ 0ULL ] , & op_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = op_efOut ;
tlu2_1d_linear_linear_value ( & pp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = pp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & qp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = qp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & rp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = rp_efOut [ 0 ] ; zc_int48
= ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) -
t2363 ) * t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) + t1768_idx_0 *
t2363 ; t1791 [ 0ULL ] = X [ 413ULL ] ; tlu2_linear_linear_prelookup ( &
sp_efOut . mField0 [ 0ULL ] , & sp_efOut . mField1 [ 0ULL ] , & sp_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = sp_efOut ;
tlu2_1d_linear_linear_value ( & tp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = tp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & up_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = up_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & vp_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = vp_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in = ( ( ( 1.0 -
t2456 ) - t2458 ) * t1785_idx_0 + U_idx_0 * t2456 ) + t1768_idx_0 * t2458 ;
t1791 [ 0ULL ] = X [ 416ULL ] ; tlu2_linear_linear_prelookup ( & wp_efOut .
mField0 [ 0ULL ] , & wp_efOut . mField1 [ 0ULL ] , & wp_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t20 = wp_efOut ;
tlu2_1d_linear_linear_value ( & xp_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = xp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yp_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = yp_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & aq_efOut [ 0ULL ] , & t20 . mField0 [ 0ULL ]
, & t20 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = aq_efOut [ 0 ] ; t2363 = (
( ( 1.0 - t2456 ) - t2458 ) * t1785_idx_0 + U_idx_0 * t2456 ) + t1768_idx_0 *
t2458 ; if ( - X [ 353ULL ] >= 0.0 ) { t2459 = - X [ 353ULL ] ; } else {
t2459 = X [ 353ULL ] ; } t2559 = t2459 * 0.01 / ( t2705 == 0.0 ? 1.0E-16 :
t2705 ) ; t2561 = t2559 >= 1.0 ? t2559 : 1.0 ; t3048 = pmf_log10 ( 6.9 / (
t2561 == 0.0 ? 1.0E-16 : t2561 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t2561 == 0.0 ? 1.0E-16 : t2561 ) + 0.00017169489553429715 ) * 3.24 ;
t1791 [ 0ULL ] = X [ 143ULL ] ; tlu2_linear_linear_prelookup ( & bq_efOut .
mField0 [ 0ULL ] , & bq_efOut . mField1 [ 0ULL ] , & bq_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = bq_efOut ;
tlu2_1d_linear_linear_value ( & cq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = cq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = dq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & eq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = eq_efOut [ 0 ] ; t2562 = (
( ( 1.0 - t1906 ) - t1907 ) * t1785_idx_0 + U_idx_0 * t1906 ) + t1768_idx_0 *
t1907 ; intrm_sf_mf_1433 = X [ 353ULL ] * t2467 * - 2.9973120849090416 / (
t2709 == 0.0 ? 1.0E-16 : t2709 ) ; t2459 = X [ 353ULL ] * t2459 * ( 1.0 / (
t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * - 0.046833001326703774 / ( t2712 == 0.0
? 1.0E-16 : t2712 ) ; t2561 = ( t2559 - 2000.0 ) / 2000.0 ; intrm_sf_mf_154 =
t2561 * t2561 * 3.0 - t2561 * t2561 * t2561 * 2.0 ; if ( t2559 <= 2000.0 ) {
t2561 = intrm_sf_mf_1433 * 9.9999999999999991E-11 ; } else if ( t2559 >=
4000.0 ) { t2561 = t2459 * 9.9999999999999991E-11 ; } else { t2561 = ( ( 1.0
- intrm_sf_mf_154 ) * intrm_sf_mf_1433 + t2459 * intrm_sf_mf_154 ) *
9.9999999999999991E-11 ; } t2459 = X [ 415ULL ] >= 0.0 ? X [ 415ULL ] : - X [
415ULL ] ; t2559 = t2459 * 0.01 / ( t2705 == 0.0 ? 1.0E-16 : t2705 ) ;
intrm_sf_mf_1433 = t2559 >= 1.0 ? t2559 : 1.0 ; t3048 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1433 == 0.0 ? 1.0E-16 : intrm_sf_mf_1433 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1433 == 0.0 ?
1.0E-16 : intrm_sf_mf_1433 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_154 = X [ 415ULL ] * t2467 * 2.9973120849090416 / ( t2709 == 0.0
? 1.0E-16 : t2709 ) ; t2459 = X [ 415ULL ] * t2459 * ( 1.0 / ( t3048 == 0.0 ?
1.0E-16 : t3048 ) ) * 0.046833001326703774 / ( t2712 == 0.0 ? 1.0E-16 : t2712
) ; intrm_sf_mf_1433 = ( t2559 - 2000.0 ) / 2000.0 ; t2565 = intrm_sf_mf_1433
* intrm_sf_mf_1433 * 3.0 - intrm_sf_mf_1433 * intrm_sf_mf_1433 *
intrm_sf_mf_1433 * 2.0 ; if ( t2559 <= 2000.0 ) { intrm_sf_mf_1433 =
intrm_sf_mf_154 * 9.9999999999999991E-11 ; } else if ( t2559 >= 4000.0 ) {
intrm_sf_mf_1433 = t2459 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_1433
= ( ( 1.0 - t2565 ) * intrm_sf_mf_154 + t2459 * t2565 ) *
9.9999999999999991E-11 ; } t2459 = t1905 >= 0.0 ? t1905 : - t1905 ; t2559 =
t2459 * 0.01 / ( t1938 == 0.0 ? 1.0E-16 : t1938 ) ; intrm_sf_mf_154 = t2559
>= 1.0 ? t2559 : 1.0 ; t3048 = pmf_log10 ( 6.9 / ( intrm_sf_mf_154 == 0.0 ?
1.0E-16 : intrm_sf_mf_154 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_154 == 0.0 ? 1.0E-16 : intrm_sf_mf_154 ) + 0.00017169489553429715
) * 3.24 ; t2565 = t1905 * t1914 * 35.2 / ( t1942 == 0.0 ? 1.0E-16 : t1942 )
; t2459 = t1905 * t2459 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * 0.55
/ ( t1945 == 0.0 ? 1.0E-16 : t1945 ) ; intrm_sf_mf_154 = ( t2559 - 2000.0 ) /
2000.0 ; t2566 = intrm_sf_mf_154 * intrm_sf_mf_154 * 3.0 - intrm_sf_mf_154 *
intrm_sf_mf_154 * intrm_sf_mf_154 * 2.0 ; if ( t2559 <= 2000.0 ) {
intrm_sf_mf_154 = t2565 * 9.9999999999999991E-11 ; } else if ( t2559 >=
4000.0 ) { intrm_sf_mf_154 = t2459 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_154 = ( ( 1.0 - t2566 ) * t2565 + t2459 * t2566 ) *
9.9999999999999991E-11 ; } t1791 [ 0ULL ] = X [ 427ULL ] ;
tlu2_linear_linear_prelookup ( & fq_efOut . mField0 [ 0ULL ] , & fq_efOut .
mField1 [ 0ULL ] , & fq_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = fq_efOut ; tlu2_1d_linear_linear_value ( & gq_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = gq_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & hq_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = hq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & iq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = iq_efOut [ 0 ] ; t2459 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) - t2521 )
* t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) + t1768_idx_0 *
t2521 ; t1791 [ 0ULL ] = X [ 429ULL ] ; tlu2_linear_linear_prelookup ( &
jq_efOut . mField0 [ 0ULL ] , & jq_efOut . mField1 [ 0ULL ] , & jq_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = jq_efOut ;
tlu2_1d_linear_linear_value ( & kq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = kq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = lq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = mq_efOut [ 0 ] ; t2559 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) - t2521 )
* t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ) + t1768_idx_0 *
t2521 ; if ( - X [ 126ULL ] >= 0.0 ) { t2565 = - X [ 126ULL ] ; } else {
t2565 = X [ 126ULL ] ; } if ( - X [ 415ULL ] >= 0.0 ) { t2566 = - X [ 415ULL
] ; } else { t2566 = X [ 415ULL ] ; } intrm_sf_mf_522 = t2566 * 0.01 / (
t2797 == 0.0 ? 1.0E-16 : t2797 ) ; t2568 = intrm_sf_mf_522 >= 1.0 ?
intrm_sf_mf_522 : 1.0 ; t3048 = pmf_log10 ( 6.9 / ( t2568 == 0.0 ? 1.0E-16 :
t2568 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2568 == 0.0 ?
1.0E-16 : t2568 ) + 0.00017169489553429715 ) * 3.24 ; t2569 = X [ 415ULL ] *
t2528 * - 2.9973120849090416 / ( t2801 == 0.0 ? 1.0E-16 : t2801 ) ; t2566 = X
[ 415ULL ] * t2566 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * -
0.046833001326703774 / ( t2804 == 0.0 ? 1.0E-16 : t2804 ) ; t2568 = (
intrm_sf_mf_522 - 2000.0 ) / 2000.0 ; t2571 = t2565 * 0.01 / ( t1938 == 0.0 ?
1.0E-16 : t1938 ) ; t2572 = t2568 * t2568 * 3.0 - t2568 * t2568 * t2568 * 2.0
; if ( intrm_sf_mf_522 <= 2000.0 ) { t2568 = t2569 * 9.9999999999999991E-11 ;
} else if ( intrm_sf_mf_522 >= 4000.0 ) { t2568 = t2566 *
9.9999999999999991E-11 ; } else { t2568 = ( ( 1.0 - t2572 ) * t2569 + t2566 *
t2572 ) * 9.9999999999999991E-11 ; } if ( - X [ 388ULL ] >= 0.0 ) { t2566 = -
X [ 388ULL ] ; } else { t2566 = X [ 388ULL ] ; } intrm_sf_mf_522 = t2566 *
0.01 / ( t2797 == 0.0 ? 1.0E-16 : t2797 ) ; t2569 = intrm_sf_mf_522 >= 1.0 ?
intrm_sf_mf_522 : 1.0 ; t3048 = pmf_log10 ( 6.9 / ( t2569 == 0.0 ? 1.0E-16 :
t2569 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2569 == 0.0 ?
1.0E-16 : t2569 ) + 0.00017169489553429715 ) * 3.24 ; t2572 = X [ 388ULL ] *
t2528 * - 2.9973120849090416 / ( t2801 == 0.0 ? 1.0E-16 : t2801 ) ; t2566 = X
[ 388ULL ] * t2566 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * -
0.046833001326703774 / ( t2804 == 0.0 ? 1.0E-16 : t2804 ) ; t2569 = (
intrm_sf_mf_522 - 2000.0 ) / 2000.0 ; t2573 = t2569 * t2569 * 3.0 - t2569 *
t2569 * t2569 * 2.0 ; t2569 = t2571 >= 1.0 ? t2571 : 1.0 ; if (
intrm_sf_mf_522 <= 2000.0 ) { t2577 = t2572 * 9.9999999999999991E-11 ; } else
if ( intrm_sf_mf_522 >= 4000.0 ) { t2577 = t2566 * 9.9999999999999991E-11 ; }
else { t2577 = ( ( 1.0 - t2573 ) * t2572 + t2566 * t2573 ) *
9.9999999999999991E-11 ; } if ( U_idx_10 >= 1.0 ) { t2566 = 1.0 ; } else {
t2566 = U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; } t3048 = pmf_log10 ( 6.9 / (
t2569 == 0.0 ? 1.0E-16 : t2569 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t2569 == 0.0 ? 1.0E-16 : t2569 ) + 0.00017169489553429715 ) * 3.24 ;
t2569 = X [ 126ULL ] * t1914 * - 35.2 / ( t1942 == 0.0 ? 1.0E-16 : t1942 ) ;
t2565 = X [ 126ULL ] * t2565 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) *
- 0.55 / ( t1945 == 0.0 ? 1.0E-16 : t1945 ) ; intrm_sf_mf_522 = ( t2571 -
2000.0 ) / 2000.0 ; t2572 = intrm_sf_mf_522 * intrm_sf_mf_522 * 3.0 -
intrm_sf_mf_522 * intrm_sf_mf_522 * intrm_sf_mf_522 * 2.0 ; if ( X [ 260ULL ]
<= 0.0 ) { intrm_sf_mf_522 = 0.0 ; } else { intrm_sf_mf_522 = X [ 260ULL ] >=
1.0 ? 1.0 : X [ 260ULL ] ; } if ( X [ 259ULL ] <= 0.0 ) { t2573 = 0.0 ; }
else { t2573 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; } zc_int102 = ( ( (
1.0 - intrm_sf_mf_522 ) - t2573 ) * 296.802103844292 + intrm_sf_mf_522 *
461.523 ) + t2573 * 259.836612622973 ; t2580 = X [ 35ULL ] / ( zc_int102 ==
0.0 ? 1.0E-16 : zc_int102 ) / ( X [ 258ULL ] == 0.0 ? 1.0E-16 : X [ 258ULL ]
) ; if ( t2571 <= 2000.0 ) { t2582 = t2569 * 9.9999999999999991E-11 ; } else
if ( t2571 >= 4000.0 ) { t2582 = t2565 * 9.9999999999999991E-11 ; } else {
t2582 = ( ( 1.0 - t2572 ) * t2569 + t2565 * t2572 ) * 9.9999999999999991E-11
; } t2565 = X [ 55ULL ] * X [ 437ULL ] * 0.001 + t2540 ; if ( X [ 122ULL ] <=
0.0 ) { t2540 = 0.0 ; } else { t2540 = X [ 122ULL ] >= 1.0 ? 1.0 : X [ 122ULL
] ; } if ( X [ 121ULL ] <= 0.0 ) { t2569 = 0.0 ; } else { t2569 = X [ 121ULL
] >= 1.0 ? 1.0 : X [ 121ULL ] ; } t2571 = ( ( ( 1.0 - t2540 ) - t2569 ) *
296.802103844292 + t2540 * 461.523 ) + t2569 * 4124.48151675695 ; t1791 [
0ULL ] = X [ 120ULL ] ; tlu2_linear_linear_prelookup ( & nq_efOut . mField0 [
0ULL ] , & nq_efOut . mField1 [ 0ULL ] , & nq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = nq_efOut ; tlu2_1d_linear_linear_value ( &
oq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = oq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pq_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = pq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & qq_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = qq_efOut [ 0 ] ; t2572 = ( ( ( 1.0 - t2540 ) - t2569 ) *
t1785_idx_0 + U_idx_0 * t2540 ) + t1768_idx_0 * t2569 ; t1791 [ 0ULL ] = X [
163ULL ] ; tlu2_linear_linear_prelookup ( & rq_efOut . mField0 [ 0ULL ] , &
rq_efOut . mField1 [ 0ULL ] , & rq_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = rq_efOut ; tlu2_1d_linear_linear_value ( &
sq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = sq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & tq_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = tq_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & uq_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = uq_efOut [ 0 ] ; t2540 = ( ( ( 1.0 - intrm_sf_mf_201 ) -
t1974 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_201 ) + t1768_idx_0 * t1974 ;
t1791 [ 0ULL ] = X [ 164ULL ] ; tlu2_linear_linear_prelookup ( & vq_efOut .
mField0 [ 0ULL ] , & vq_efOut . mField1 [ 0ULL ] , & vq_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = vq_efOut ;
tlu2_1d_linear_linear_value ( & wq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & xq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = xq_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yq_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = yq_efOut [ 0 ] ; t2569 = (
( ( 1.0 - intrm_sf_mf_201 ) - t1974 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_201 ) + t1768_idx_0 * t1974 ; t1791 [ 0ULL ] = X [ 159ULL ] ;
tlu2_linear_linear_prelookup ( & ar_efOut . mField0 [ 0ULL ] , & ar_efOut .
mField1 [ 0ULL ] , & ar_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = ar_efOut ; tlu2_1d_linear_linear_value ( & br_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = br_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & cr_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = cr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dr_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = dr_efOut [ 0 ] ; t2586 = (
( ( 1.0 - intrm_sf_mf_201 ) - t1974 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_201 ) + t1768_idx_0 * t1974 ; U_idx_0 = t1981 - ( - t1981 ) ;
intrm_sf_mf_201 = ( ( X [ 135ULL ] - 1.01325 ) - ( - t1981 ) ) / ( U_idx_0 ==
0.0 ? 1.0E-16 : U_idx_0 ) ; t1974 = intrm_sf_mf_201 * intrm_sf_mf_201 * 3.0 -
intrm_sf_mf_201 * intrm_sf_mf_201 * intrm_sf_mf_201 * 2.0 ; if ( X [ 135ULL ]
- 1.01325 <= - t1981 ) { intrm_sf_mf_201 = 1.01325 ; } else if ( X [ 135ULL ]
- 1.01325 >= t1981 ) { intrm_sf_mf_201 = X [ 135ULL ] ; } else {
intrm_sf_mf_201 = ( 1.0 - t1974 ) * 1.01325 + X [ 135ULL ] * t1974 ; } t1791
[ 0ULL ] = X [ 166ULL ] ; tlu2_linear_linear_prelookup ( & er_efOut . mField0
[ 0ULL ] , & er_efOut . mField1 [ 0ULL ] , & er_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [
0ULL ] , & t139 [ 0ULL ] ) ; t41 = er_efOut ; tlu2_1d_linear_linear_value ( &
fr_efOut [ 0ULL ] , & t41 . mField0 [ 0ULL ] , & t41 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = fr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & gr_efOut
[ 0ULL ] , & t41 . mField0 [ 0ULL ] , & t41 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = gr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & hr_efOut [
0ULL ] , & t41 . mField0 [ 0ULL ] , & t41 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = hr_efOut [ 0 ] ; t1974 = ( ( ( 1.0 - t2086 ) - zc_int50 ) *
t1785_idx_0 + U_idx_0 * t2086 ) + t1768_idx_0 * zc_int50 ; if ( X [ 174ULL ]
<= 0.0 ) { t1981 = 0.0 ; } else { t1981 = X [ 174ULL ] >= 1.0 ? 1.0 : X [
174ULL ] ; } if ( X [ 173ULL ] <= 0.0 ) { t2086 = 0.0 ; } else { t2086 = X [
173ULL ] >= 1.0 ? 1.0 : X [ 173ULL ] ; } zc_int50 = ( ( ( 1.0 - t1981 ) -
t2086 ) * 296.802103844292 + t1981 * 461.523 ) + t2086 * 4124.48151675695 ;
t1791 [ 0ULL ] = X [ 172ULL ] ; tlu2_linear_linear_prelookup ( & ir_efOut .
mField0 [ 0ULL ] , & ir_efOut . mField1 [ 0ULL ] , & ir_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = ir_efOut ;
tlu2_1d_linear_linear_value ( & jr_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = jr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & kr_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = kr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lr_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = lr_efOut [ 0 ] ; t2588 = (
( ( 1.0 - t1981 ) - t2086 ) * t1785_idx_0 + U_idx_0 * t1981 ) + t1768_idx_0 *
t2086 ; t1791 [ 0ULL ] = X [ 169ULL ] ; tlu2_linear_linear_prelookup ( &
mr_efOut . mField0 [ 0ULL ] , & mr_efOut . mField1 [ 0ULL ] , & mr_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t81 = mr_efOut ;
tlu2_1d_linear_linear_value ( & nr_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = nr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & or_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = or_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & pr_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = pr_efOut [ 0 ] ; t1981 = (
( ( 1.0 - piece173 ) - t2195 ) * t1785_idx_0 + U_idx_0 * piece173 ) +
t1768_idx_0 * t2195 ; tlu2_1d_linear_linear_value ( & qr_efOut [ 0ULL ] , &
t90 . mField0 [ 0ULL ] , & t90 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField23 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
qr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & rr_efOut [ 0ULL ] , & t90 .
mField0 [ 0ULL ] , & t90 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = rr_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & sr_efOut [ 0ULL ] , & t90 . mField0 [
0ULL ] , & t90 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = sr_efOut [ 0
] ; t2086 = ( ( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 * t1978 )
+ t1768_idx_0 * piece2 ; tlu2_1d_linear_linear_value ( & tr_efOut [ 0ULL ] ,
& t75 . mField0 [ 0ULL ] , & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
tr_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ur_efOut [ 0ULL ] , & t75 .
mField0 [ 0ULL ] , & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ur_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & vr_efOut [ 0ULL ] , & t75 . mField0 [
0ULL ] , & t75 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = vr_efOut [ 0
] ; t2195 = ( ( ( ( ( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 *
t1978 ) + t1768_idx_0 * piece2 ) - pmf_log ( X [ 24ULL ] * 100000.0 ) * t2009
) - t2086 ) + pmf_log ( X [ 116ULL ] * 100000.0 ) * t2009 ;
tlu2_1d_linear_linear_value ( & wr_efOut [ 0ULL ] , & t84 . mField0 [ 0ULL ]
, & t84 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & xr_efOut [ 0ULL ] , & t84 . mField0 [ 0ULL ]
, & t84 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = xr_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yr_efOut [ 0ULL ] , & t84 . mField0 [ 0ULL ]
, & t84 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField25 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = yr_efOut [ 0 ] ; t2086 =
( ( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 * t1978 ) +
t1768_idx_0 * piece2 ; tlu2_1d_linear_linear_value ( & as_efOut [ 0ULL ] , &
t16 . mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField23 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
as_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bs_efOut [ 0ULL ] , & t16 .
mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField24 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = bs_efOut [ 0
] ; tlu2_1d_linear_linear_value ( & cs_efOut [ 0ULL ] , & t16 . mField0 [
0ULL ] , & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField25 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = cs_efOut [ 0
] ; t1978 = ( ( ( ( ( ( 1.0 - t1978 ) - piece2 ) * t1785_idx_0 + U_idx_0 *
t1978 ) + t1768_idx_0 * piece2 ) - pmf_log ( X [ 116ULL ] * 100000.0 ) *
t2009 ) - t2086 ) + pmf_log ( X [ 24ULL ] * 100000.0 ) * t2009 ; if ( X [
206ULL ] <= 0.0 ) { piece2 = 0.0 ; } else { piece2 = X [ 206ULL ] >= 1.0 ?
1.0 : X [ 206ULL ] ; } if ( X [ 205ULL ] <= 0.0 ) { t2086 = 0.0 ; } else {
t2086 = X [ 205ULL ] >= 1.0 ? 1.0 : X [ 205ULL ] ; } piece173 = ( ( ( 1.0 -
piece2 ) - t2086 ) * 296.802103844292 + piece2 * 461.523 ) + t2086 *
4124.48151675695 ; t1791 [ 0ULL ] = X [ 204ULL ] ;
tlu2_linear_linear_prelookup ( & ds_efOut . mField0 [ 0ULL ] , & ds_efOut .
mField1 [ 0ULL ] , & ds_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t16 = ds_efOut ; tlu2_1d_linear_linear_value ( & es_efOut [ 0ULL ] , & t16 .
mField0 [ 0ULL ] , & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = es_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & fs_efOut [ 0ULL ] , & t16 . mField0 [
0ULL ] , & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = fs_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & gs_efOut [ 0ULL ] , & t16 . mField0 [ 0ULL ]
, & t16 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = gs_efOut [ 0 ] ; t2589 = (
( ( 1.0 - piece2 ) - t2086 ) * t1785_idx_0 + U_idx_0 * piece2 ) + t1768_idx_0
* t2086 ; piece2 = ( X [ 59ULL ] - 0.9 ) / 0.099999999999999978 ; t2086 =
piece2 * piece2 * 3.0 - piece2 * piece2 * piece2 * 2.0 ; t1791 [ 0ULL ] = X [
219ULL ] ; tlu2_linear_linear_prelookup ( & hs_efOut . mField0 [ 0ULL ] , &
hs_efOut . mField1 [ 0ULL ] , & hs_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t40 = hs_efOut ; tlu2_1d_linear_linear_value ( &
is_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = is_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & js_efOut
[ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = js_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ks_efOut [
0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = ks_efOut [ 0 ] ; piece2 = ( ( ( 1.0 - intrm_sf_mf_412 ) -
t2083 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_412 ) + t1768_idx_0 * t2083 ;
t1791 [ 0ULL ] = X [ 223ULL ] ; tlu2_linear_linear_prelookup ( & ls_efOut .
mField0 [ 0ULL ] , & ls_efOut . mField1 [ 0ULL ] , & ls_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t55 = ls_efOut ;
tlu2_1d_linear_linear_value ( & ms_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ms_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ns_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = ns_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & os_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = os_efOut [ 0 ] ;
intrm_sf_mf_412 = ( ( ( 1.0 - t2015 ) - t2042 ) * t1785_idx_0 + U_idx_0 *
t2015 ) + t1768_idx_0 * t2042 ; t1791 [ 0ULL ] = X [ 227ULL ] ;
tlu2_linear_linear_prelookup ( & ps_efOut . mField0 [ 0ULL ] , & ps_efOut .
mField1 [ 0ULL ] , & ps_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = ps_efOut ; tlu2_1d_linear_linear_value ( & qs_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = qs_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & rs_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = rs_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ss_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ss_efOut [ 0 ] ; t2083 = (
( ( 1.0 - t2015 ) - t2042 ) * t1785_idx_0 + U_idx_0 * t2015 ) + t1768_idx_0 *
t2042 ; if ( - X [ 213ULL ] >= 0.0 ) { intrm_sf_mf_465 = - X [ 213ULL ] ; }
else { intrm_sf_mf_465 = X [ 213ULL ] ; } intrm_sf_mf_468 = intrm_sf_mf_465 *
0.01 / ( t2077 == 0.0 ? 1.0E-16 : t2077 ) ; intrm_sf_mf_425 = intrm_sf_mf_468
>= 1.0 ? intrm_sf_mf_468 : 1.0 ; t3048 = pmf_log10 ( 6.9 / ( intrm_sf_mf_425
== 0.0 ? 1.0E-16 : intrm_sf_mf_425 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_425 == 0.0 ? 1.0E-16 : intrm_sf_mf_425 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_436 = X [ 213ULL ] * t2054 * -
35.2 / ( t2081 == 0.0 ? 1.0E-16 : t2081 ) ; intrm_sf_mf_465 = X [ 213ULL ] *
intrm_sf_mf_465 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * - 0.55 / (
t2084 == 0.0 ? 1.0E-16 : t2084 ) ; intrm_sf_mf_425 = ( intrm_sf_mf_468 -
2000.0 ) / 2000.0 ; t2600 = intrm_sf_mf_425 * intrm_sf_mf_425 * 3.0 -
intrm_sf_mf_425 * intrm_sf_mf_425 * intrm_sf_mf_425 * 2.0 ; if (
intrm_sf_mf_468 <= 2000.0 ) { intrm_sf_mf_425 = intrm_sf_mf_436 *
9.9999999999999991E-11 ; } else if ( intrm_sf_mf_468 >= 4000.0 ) {
intrm_sf_mf_425 = intrm_sf_mf_465 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_425 = ( ( 1.0 - t2600 ) * intrm_sf_mf_436 + intrm_sf_mf_465 *
t2600 ) * 9.9999999999999991E-11 ; } if ( - X [ 183ULL ] >= 0.0 ) {
intrm_sf_mf_465 = - X [ 183ULL ] ; } else { intrm_sf_mf_465 = X [ 183ULL ] ;
} intrm_sf_mf_468 = intrm_sf_mf_465 * 0.01 / ( t2077 == 0.0 ? 1.0E-16 : t2077
) ; intrm_sf_mf_436 = intrm_sf_mf_468 >= 1.0 ? intrm_sf_mf_468 : 1.0 ; t3048
= pmf_log10 ( 6.9 / ( intrm_sf_mf_436 == 0.0 ? 1.0E-16 : intrm_sf_mf_436 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_436 == 0.0 ?
1.0E-16 : intrm_sf_mf_436 ) + 0.00017169489553429715 ) * 3.24 ; t2600 = X [
183ULL ] * t2054 * - 35.2 / ( t2081 == 0.0 ? 1.0E-16 : t2081 ) ;
intrm_sf_mf_465 = X [ 183ULL ] * intrm_sf_mf_465 * ( 1.0 / ( t3048 == 0.0 ?
1.0E-16 : t3048 ) ) * - 0.55 / ( t2084 == 0.0 ? 1.0E-16 : t2084 ) ;
intrm_sf_mf_436 = ( intrm_sf_mf_468 - 2000.0 ) / 2000.0 ; t2602 =
intrm_sf_mf_436 * intrm_sf_mf_436 * 3.0 - intrm_sf_mf_436 * intrm_sf_mf_436 *
intrm_sf_mf_436 * 2.0 ; if ( intrm_sf_mf_468 <= 2000.0 ) { intrm_sf_mf_436 =
t2600 * 9.9999999999999991E-11 ; } else if ( intrm_sf_mf_468 >= 4000.0 ) {
intrm_sf_mf_436 = intrm_sf_mf_465 * 9.9999999999999991E-11 ; } else {
intrm_sf_mf_436 = ( ( 1.0 - t2602 ) * t2600 + intrm_sf_mf_465 * t2602 ) *
9.9999999999999991E-11 ; } t1791 [ 0ULL ] = X [ 241ULL ] ;
tlu2_linear_linear_prelookup ( & ts_efOut . mField0 [ 0ULL ] , & ts_efOut .
mField1 [ 0ULL ] , & ts_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t55 = ts_efOut ; tlu2_1d_linear_linear_value ( & us_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = us_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & vs_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = vs_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ws_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ws_efOut [ 0 ] ;
intrm_sf_mf_465 = ( ( ( 1.0 - intrm_sf_mf_474 ) - piece267 ) * t1785_idx_0 +
U_idx_0 * intrm_sf_mf_474 ) + t1768_idx_0 * piece267 ; t1791 [ 0ULL ] = X [
242ULL ] ; tlu2_linear_linear_prelookup ( & xs_efOut . mField0 [ 0ULL ] , &
xs_efOut . mField1 [ 0ULL ] , & xs_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t40 = xs_efOut ; tlu2_1d_linear_linear_value ( &
ys_efOut [ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = ys_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & at_efOut
[ 0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = at_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & bt_efOut [
0ULL ] , & t40 . mField0 [ 0ULL ] , & t40 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = bt_efOut [ 0 ] ; intrm_sf_mf_468 = ( ( ( 1.0 -
intrm_sf_mf_474 ) - piece267 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_474 ) +
t1768_idx_0 * piece267 ; t1791 [ 0ULL ] = X [ 237ULL ] ;
tlu2_linear_linear_prelookup ( & ct_efOut . mField0 [ 0ULL ] , & ct_efOut .
mField1 [ 0ULL ] , & ct_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = ct_efOut ; tlu2_1d_linear_linear_value ( & dt_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = dt_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & et_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = et_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & ft_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = ft_efOut [ 0 ] ; t2600 = (
( ( 1.0 - intrm_sf_mf_474 ) - piece267 ) * t1785_idx_0 + U_idx_0 *
intrm_sf_mf_474 ) + t1768_idx_0 * piece267 ; U_idx_0 = t110 - ( - t110 ) ;
intrm_sf_mf_474 = ( ( X [ 28ULL ] - X [ 220ULL ] ) - ( - t110 ) ) / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) ; piece267 = intrm_sf_mf_474 * intrm_sf_mf_474 *
3.0 - intrm_sf_mf_474 * intrm_sf_mf_474 * intrm_sf_mf_474 * 2.0 ; if ( X [
28ULL ] - X [ 220ULL ] <= - t110 ) { intrm_sf_mf_474 = X [ 220ULL ] ; } else
if ( X [ 28ULL ] - X [ 220ULL ] >= t110 ) { intrm_sf_mf_474 = X [ 28ULL ] ; }
else { intrm_sf_mf_474 = ( 1.0 - piece267 ) * X [ 220ULL ] + X [ 28ULL ] *
piece267 ; } if ( X [ 246ULL ] <= 0.0 ) { piece267 = 0.0 ; } else { piece267
= X [ 246ULL ] >= 1.0 ? 1.0 : X [ 246ULL ] ; } if ( X [ 245ULL ] <= 0.0 ) {
t110 = 0.0 ; } else { t110 = X [ 245ULL ] >= 1.0 ? 1.0 : X [ 245ULL ] ; }
t2602 = ( ( ( 1.0 - piece267 ) - t110 ) * 296.802103844292 + piece267 *
461.523 ) + t110 * 259.836612622973 ; t1791 [ 0ULL ] = X [ 244ULL ] ;
tlu2_linear_linear_prelookup ( & gt_efOut . mField0 [ 0ULL ] , & gt_efOut .
mField1 [ 0ULL ] , & gt_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t95 = gt_efOut ; tlu2_1d_linear_linear_value ( & ht_efOut [ 0ULL ] , & t95 .
mField0 [ 0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ht_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & it_efOut [ 0ULL ] , & t95 . mField0 [
0ULL ] , & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = it_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & jt_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = jt_efOut [ 0 ] ; zc_int103
= ( ( ( 1.0 - piece267 ) - t110 ) * t1785_idx_0 + U_idx_0 * piece267 ) +
t1768_idx_0 * t110 ; tlu2_1d_linear_linear_value ( & kt_efOut [ 0ULL ] , &
t106 . mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField23 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 =
kt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & lt_efOut [ 0ULL ] , & t106 .
mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField24 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = lt_efOut [
0 ] ; tlu2_1d_linear_linear_value ( & mt_efOut [ 0ULL ] , & t106 . mField0 [
0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField26 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = mt_efOut [ 0
] ; piece267 = ( ( ( 1.0 - t2126 ) - t2127 ) * t1785_idx_0 + U_idx_0 * t2126
) + t1768_idx_0 * t2127 ; if ( X [ 59ULL ] <= 0.9 ) { t110 = 0.0 ; } else {
t110 = X [ 59ULL ] >= 1.0 ? 1.0 : t2086 ; } tlu2_1d_linear_linear_value ( &
nt_efOut [ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = nt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ot_efOut
[ 0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = ot_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pt_efOut [
0ULL ] , & t85 . mField0 [ 0ULL ] , & t85 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField26 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = pt_efOut [ 0 ] ; t2086 = ( ( ( 1.0 - t2126 ) - t2127 ) *
t1785_idx_0 + U_idx_0 * t2126 ) + t1768_idx_0 * t2127 ; t1791 [ 0ULL ] = X [
258ULL ] ; tlu2_linear_linear_prelookup ( & qt_efOut . mField0 [ 0ULL ] , &
qt_efOut . mField1 [ 0ULL ] , & qt_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t55 = qt_efOut ; tlu2_1d_linear_linear_value ( &
rt_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = rt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & st_efOut
[ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = st_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & tt_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = tt_efOut [ 0 ] ; t3134 = ( ( ( 1.0 - intrm_sf_mf_522 ) -
t2573 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_522 ) + t1768_idx_0 * t2573 ;
tlu2_1d_linear_linear_value ( & ut_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField23 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ut_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & vt_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField24 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = vt_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & wt_efOut [ 0ULL ] , & t58 . mField0 [ 0ULL ]
, & t58 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField26 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = wt_efOut [ 0 ] ;
intrm_sf_mf_522 = ( ( ( 1.0 - t2126 ) - t2127 ) * t1785_idx_0 + U_idx_0 *
t2126 ) + t1768_idx_0 * t2127 ; tlu2_1d_linear_linear_value ( & xt_efOut [
0ULL ] , & t61 . mField0 [ 0ULL ] , & t61 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField23 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = xt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & yt_efOut
[ 0ULL ] , & t61 . mField0 [ 0ULL ] , & t61 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField24 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = yt_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & au_efOut [
0ULL ] , & t61 . mField0 [ 0ULL ] , & t61 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField26 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1768_idx_0 = au_efOut [ 0 ] ; t2573 = ( ( ( 1.0 - t2126 ) - t2127 ) *
t1785_idx_0 + U_idx_0 * t2126 ) + t1768_idx_0 * t2127 ; t1791 [ 0ULL ] = X [
291ULL ] ; tlu2_linear_linear_prelookup ( & bu_efOut . mField0 [ 0ULL ] , &
bu_efOut . mField1 [ 0ULL ] , & bu_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t106 = bu_efOut ; tlu2_1d_linear_linear_value ( &
cu_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [
0ULL ] ) ; t1785_idx_0 = cu_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( &
du_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; U_idx_0 = du_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & eu_efOut [
0ULL ] , & t106 . mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = eu_efOut [ 0 ] ; t3145 = ( ( ( 1.0 - intrm_sf_mf_626 ) -
intrm_sf_mf_676 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_626 ) + t1768_idx_0 *
intrm_sf_mf_676 ; t1791 [ 0ULL ] = X [ 302ULL ] ;
tlu2_linear_linear_prelookup ( & fu_efOut . mField0 [ 0ULL ] , & fu_efOut .
mField1 [ 0ULL ] , & fu_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t68 = fu_efOut ; tlu2_1d_linear_linear_value ( & gu_efOut [ 0ULL ] , & t68 .
mField0 [ 0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = gu_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & hu_efOut [ 0ULL ] , & t68 . mField0 [
0ULL ] , & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = hu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & iu_efOut [ 0ULL ] , & t68 . mField0 [ 0ULL ]
, & t68 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = iu_efOut [ 0 ] ;
intrm_sf_mf_626 = ( ( ( 1.0 - t2155 ) - t2156 ) * t1785_idx_0 + U_idx_0 *
t2155 ) + t1768_idx_0 * t2156 ; t1791 [ 0ULL ] = X [ 305ULL ] ;
tlu2_linear_linear_prelookup ( & ju_efOut . mField0 [ 0ULL ] , & ju_efOut .
mField1 [ 0ULL ] , & ju_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t89 = ju_efOut ; tlu2_1d_linear_linear_value ( & ku_efOut [ 0ULL ] , & t89 .
mField0 [ 0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = ku_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & lu_efOut [ 0ULL ] , & t89 . mField0 [
0ULL ] , & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = lu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & mu_efOut [ 0ULL ] , & t89 . mField0 [ 0ULL ]
, & t89 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = mu_efOut [ 0 ] ;
intrm_sf_mf_676 = ( ( ( 1.0 - t2155 ) - t2156 ) * t1785_idx_0 + U_idx_0 *
t2155 ) + t1768_idx_0 * t2156 ; if ( - X [ 192ULL ] >= 0.0 ) { U_idx_1 = - X
[ 192ULL ] ; } else { U_idx_1 = X [ 192ULL ] ; } t2610 = U_idx_1 * 0.05 / (
t3149 == 0.0 ? 1.0E-16 : t3149 ) ; t2611 = t2610 >= 1.0 ? t2610 : 1.0 ; t3048
= pmf_log10 ( 6.9 / ( t2611 == 0.0 ? 1.0E-16 : t2611 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2611 == 0.0 ? 1.0E-16 : t2611
) + 2.8767404433520813E-5 ) * 3.24 ; t2612 = X [ 192ULL ] * zc_int208 * -
11.2 / ( t3168 == 0.0 ? 1.0E-16 : t3168 ) ; U_idx_1 = X [ 192ULL ] * U_idx_1
* ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * - 0.175 / ( t3209 == 0.0 ?
1.0E-16 : t3209 ) ; t2611 = ( t2610 - 2000.0 ) / 2000.0 ; t2613 = t2611 *
t2611 * 3.0 - t2611 * t2611 * t2611 * 2.0 ; if ( t2610 <= 2000.0 ) { t2611 =
t2612 * 9.9999999999999991E-11 ; } else if ( t2610 >= 4000.0 ) { t2611 =
U_idx_1 * 9.9999999999999991E-11 ; } else { t2611 = ( ( 1.0 - t2613 ) * t2612
+ U_idx_1 * t2613 ) * 9.9999999999999991E-11 ; } U_idx_1 = X [ 304ULL ] >=
0.0 ? X [ 304ULL ] : - X [ 304ULL ] ; t2610 = U_idx_1 * 0.05 / ( t3149 == 0.0
? 1.0E-16 : t3149 ) ; t2612 = t2610 >= 1.0 ? t2610 : 1.0 ; t3048 = pmf_log10
( 6.9 / ( t2612 == 0.0 ? 1.0E-16 : t2612 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( t2612 == 0.0 ? 1.0E-16 : t2612 ) + 2.8767404433520813E-5
) * 3.24 ; t2613 = X [ 304ULL ] * zc_int208 * 11.2 / ( t3168 == 0.0 ? 1.0E-16
: t3168 ) ; U_idx_1 = X [ 304ULL ] * U_idx_1 * ( 1.0 / ( t3048 == 0.0 ?
1.0E-16 : t3048 ) ) * 0.175 / ( t3209 == 0.0 ? 1.0E-16 : t3209 ) ; t2612 = (
t2610 - 2000.0 ) / 2000.0 ; intrm_sf_mf_825 = t2612 * t2612 * 3.0 - t2612 *
t2612 * t2612 * 2.0 ; if ( t2610 <= 2000.0 ) { t2612 = t2613 *
9.9999999999999991E-11 ; } else if ( t2610 >= 4000.0 ) { t2612 = U_idx_1 *
9.9999999999999991E-11 ; } else { t2612 = ( ( 1.0 - intrm_sf_mf_825 ) * t2613
+ U_idx_1 * intrm_sf_mf_825 ) * 9.9999999999999991E-11 ; } t1791 [ 0ULL ] = X
[ 68ULL ] ; tlu2_linear_linear_prelookup ( & nu_efOut . mField0 [ 0ULL ] , &
nu_efOut . mField1 [ 0ULL ] , & nu_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = nu_efOut ; tlu2_1d_linear_linear_value ( &
ou_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1785_idx_0 = ou_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & pu_efOut
[ 0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; U_idx_0 = pu_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & qu_efOut [
0ULL ] , & t81 . mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [ 0ULL ] , & t139 [ 0ULL ]
) ; t1768_idx_0 = qu_efOut [ 0 ] ; U_idx_1 = ( ( ( 1.0 - intrm_sf_mf_810 ) -
t2207 ) * t1785_idx_0 + U_idx_0 * intrm_sf_mf_810 ) + t1768_idx_0 * t2207 ;
t1791 [ 0ULL ] = X [ 316ULL ] ; tlu2_linear_linear_prelookup ( & ru_efOut .
mField0 [ 0ULL ] , & ru_efOut . mField1 [ 0ULL ] , & ru_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = ru_efOut ;
tlu2_1d_linear_linear_value ( & su_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = su_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & tu_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = tu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & uu_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = uu_efOut [ 0 ] ;
intrm_sf_mf_810 = ( ( ( 1.0 - t2183 ) - t2231 ) * t1785_idx_0 + U_idx_0 *
t2183 ) + t1768_idx_0 * t2231 ; t1791 [ 0ULL ] = X [ 319ULL ] ;
tlu2_linear_linear_prelookup ( & vu_efOut . mField0 [ 0ULL ] , & vu_efOut .
mField1 [ 0ULL ] , & vu_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = vu_efOut ; tlu2_1d_linear_linear_value ( & wu_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = wu_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & xu_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = xu_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & yu_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = yu_efOut [ 0 ] ; t2207 = (
( ( 1.0 - t2183 ) - t2231 ) * t1785_idx_0 + U_idx_0 * t2183 ) + t1768_idx_0 *
t2231 ; if ( - X [ 304ULL ] >= 0.0 ) { t2610 = - X [ 304ULL ] ; } else {
t2610 = X [ 304ULL ] ; } t2613 = t2610 * 0.01 / ( t2306 == 0.0 ? 1.0E-16 :
t2306 ) ; intrm_sf_mf_825 = t2613 >= 1.0 ? t2613 : 1.0 ; t3048 = pmf_log10 (
6.9 / ( intrm_sf_mf_825 == 0.0 ? 1.0E-16 : intrm_sf_mf_825 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_825 == 0.0 ?
1.0E-16 : intrm_sf_mf_825 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_834 = X [ 304ULL ] * t2241 * - 2.9973120849090416 / ( t2310 ==
0.0 ? 1.0E-16 : t2310 ) ; t2610 = X [ 304ULL ] * t2610 * ( 1.0 / ( t3048 ==
0.0 ? 1.0E-16 : t3048 ) ) * - 0.046833001326703774 / ( t2313 == 0.0 ? 1.0E-16
: t2313 ) ; intrm_sf_mf_825 = ( t2613 - 2000.0 ) / 2000.0 ; U_idx_0 =
intrm_sf_mf_825 * intrm_sf_mf_825 * 3.0 - intrm_sf_mf_825 * intrm_sf_mf_825 *
intrm_sf_mf_825 * 2.0 ; if ( t2613 <= 2000.0 ) { intrm_sf_mf_825 =
intrm_sf_mf_834 * 9.9999999999999991E-11 ; } else if ( t2613 >= 4000.0 ) {
intrm_sf_mf_825 = t2610 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_825 =
( ( 1.0 - U_idx_0 ) * intrm_sf_mf_834 + t2610 * U_idx_0 ) *
9.9999999999999991E-11 ; } t2610 = X [ 318ULL ] >= 0.0 ? X [ 318ULL ] : - X [
318ULL ] ; t2613 = t2610 * 0.01 / ( t2306 == 0.0 ? 1.0E-16 : t2306 ) ;
intrm_sf_mf_834 = t2613 >= 1.0 ? t2613 : 1.0 ; t3048 = pmf_log10 ( 6.9 / (
intrm_sf_mf_834 == 0.0 ? 1.0E-16 : intrm_sf_mf_834 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_834 == 0.0 ? 1.0E-16 : intrm_sf_mf_834 )
+ 0.00017169489553429715 ) * 3.24 ; U_idx_0 = X [ 318ULL ] * t2241 *
2.9973120849090416 / ( t2310 == 0.0 ? 1.0E-16 : t2310 ) ; t2610 = X [ 318ULL
] * t2610 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) *
0.046833001326703774 / ( t2313 == 0.0 ? 1.0E-16 : t2313 ) ; intrm_sf_mf_834 =
( t2613 - 2000.0 ) / 2000.0 ; U_idx_10 = intrm_sf_mf_834 * intrm_sf_mf_834 *
3.0 - intrm_sf_mf_834 * intrm_sf_mf_834 * intrm_sf_mf_834 * 2.0 ; if ( t2613
<= 2000.0 ) { intrm_sf_mf_834 = U_idx_0 * 9.9999999999999991E-11 ; } else if
( t2613 >= 4000.0 ) { intrm_sf_mf_834 = t2610 * 9.9999999999999991E-11 ; }
else { intrm_sf_mf_834 = ( ( 1.0 - U_idx_10 ) * U_idx_0 + t2610 * U_idx_10 )
* 9.9999999999999991E-11 ; } t1791 [ 0ULL ] = X [ 330ULL ] ;
tlu2_linear_linear_prelookup ( & av_efOut . mField0 [ 0ULL ] , & av_efOut .
mField1 [ 0ULL ] , & av_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = av_efOut ; tlu2_1d_linear_linear_value ( & bv_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = bv_efOut
[ 0 ] ; tlu2_1d_linear_linear_value ( & cv_efOut [ 0ULL ] , & t81 . mField0 [
0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = cv_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & dv_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = dv_efOut [ 0 ] ; t2610 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) - t2277 )
* t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) + t1768_idx_0 *
t2277 ; t1791 [ 0ULL ] = X [ 332ULL ] ; tlu2_linear_linear_prelookup ( &
ev_efOut . mField0 [ 0ULL ] , & ev_efOut . mField1 [ 0ULL ] , & ev_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t1791 [
0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = ev_efOut ;
tlu2_1d_linear_linear_value ( & fv_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = fv_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & gv_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; U_idx_0 = gv_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & hv_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1768_idx_0 = hv_efOut [ 0 ] ; t2613 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) - t2277 )
* t1785_idx_0 + U_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ) + t1768_idx_0 *
t2277 ; if ( - X [ 318ULL ] >= 0.0 ) { U_idx_0 = - X [ 318ULL ] ; } else {
U_idx_0 = X [ 318ULL ] ; } U_idx_10 = U_idx_0 * 0.01 / ( t2398 == 0.0 ?
1.0E-16 : t2398 ) ; t2618 = U_idx_10 >= 1.0 ? U_idx_10 : 1.0 ; t3048 =
pmf_log10 ( 6.9 / ( t2618 == 0.0 ? 1.0E-16 : t2618 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t2618 == 0.0 ? 1.0E-16 : t2618 ) +
0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_971 = X [ 318ULL ] * t2285 * -
2.9973120849090416 / ( t2402 == 0.0 ? 1.0E-16 : t2402 ) ; U_idx_0 = X [
318ULL ] * U_idx_0 * ( 1.0 / ( t3048 == 0.0 ? 1.0E-16 : t3048 ) ) * -
0.046833001326703774 / ( t2405 == 0.0 ? 1.0E-16 : t2405 ) ; t2618 = (
U_idx_10 - 2000.0 ) / 2000.0 ; t3174 = t2618 * t2618 * 3.0 - t2618 * t2618 *
t2618 * 2.0 ; if ( U_idx_10 <= 2000.0 ) { t2618 = intrm_sf_mf_971 *
9.9999999999999991E-11 ; } else if ( U_idx_10 >= 4000.0 ) { t2618 = U_idx_0 *
9.9999999999999991E-11 ; } else { t2618 = ( ( 1.0 - t3174 ) * intrm_sf_mf_971
+ U_idx_0 * t3174 ) * 9.9999999999999991E-11 ; } U_idx_0 = X [ 138ULL ] >=
0.0 ? X [ 138ULL ] : - X [ 138ULL ] ; U_idx_10 = U_idx_0 * 0.01 / ( t2398 ==
0.0 ? 1.0E-16 : t2398 ) ; intrm_sf_mf_971 = U_idx_10 >= 1.0 ? U_idx_10 : 1.0
; t3048 = pmf_log10 ( 6.9 / ( intrm_sf_mf_971 == 0.0 ? 1.0E-16 :
intrm_sf_mf_971 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_971 == 0.0 ? 1.0E-16 : intrm_sf_mf_971 ) + 0.00017169489553429715
) * 3.24 ; t3174 = X [ 138ULL ] * t2285 * 2.9973120849090416 / ( t2402 == 0.0
? 1.0E-16 : t2402 ) ; U_idx_0 = X [ 138ULL ] * U_idx_0 * ( 1.0 / ( t3048 ==
0.0 ? 1.0E-16 : t3048 ) ) * 0.046833001326703774 / ( t2405 == 0.0 ? 1.0E-16 :
t2405 ) ; intrm_sf_mf_971 = ( U_idx_10 - 2000.0 ) / 2000.0 ; t3207 =
intrm_sf_mf_971 * intrm_sf_mf_971 * 3.0 - intrm_sf_mf_971 * intrm_sf_mf_971 *
intrm_sf_mf_971 * 2.0 ; if ( U_idx_10 <= 2000.0 ) { intrm_sf_mf_971 = t3174 *
9.9999999999999991E-11 ; } else if ( U_idx_10 >= 4000.0 ) { intrm_sf_mf_971 =
U_idx_0 * 9.9999999999999991E-11 ; } else { intrm_sf_mf_971 = ( ( 1.0 - t3207
) * t3174 + U_idx_0 * t3207 ) * 9.9999999999999991E-11 ; } if ( M [ 1ULL ] !=
0 ) { t1784 [ 0ULL ] = 0ULL ; for ( t1792 = 0ULL ; t1792 < 42ULL ; t1792 ++ )
{ t1793 = t1792 / 42ULL ; t1794 = ( t1792 - t1792 % 42ULL ) + t1784 [ t1793 >
0ULL ? 0ULL : t1793 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [
t1792 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t1794 >
41ULL ? 41ULL : t1794 ] * 1.0E-5 ) { t1784 [ t1793 > 0ULL ? 0ULL : t1793 ] =
t1792 % 42ULL ; } } t1792 = t1784 [ 0ULL ] ; U_idx_10 = ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField0 [ t1792 > 41ULL ? 41ULL : t1792 ] * 1.0E-5 ; } else {
U_idx_10 = X [ 58ULL ] ; } t3174 = - pmf_sqrt ( ( ( real_T ) ( M [ 22ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t1934 / ( t1908 == 0.0 ? 1.0E-16 : t1908 ) / ( X [
139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) ) * 7.8539816339744827E-5 ;
t3207 = t1914 * t3174 * 35.2 / ( t1942 == 0.0 ? 1.0E-16 : t1942 ) ; t3048 = X
[ 244ULL ] * t2602 ; t2602 = ( ( real_T ) ( M [ 190ULL ] != 0 ) * 2.0 - 1.0 )
* ( t3048 / 1.01325 ) * ( t3048 / 1.01325 ) * ( X [ 250ULL ] /
0.0019634954084936209 ) * ( X [ 250ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + zc_int103 ; t1930 = ( ( real_T ) ( M [ 190ULL ] != 0
) * 2.0 - 1.0 ) * ( t3048 / 1.01325 ) * ( t3048 / 1.01325 ) * ( - X [ 250ULL
] / 0.0019634954084936209 ) * ( - X [ 250ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + zc_int103 ; t3048 = X [ 258ULL ] * zc_int102 ;
zc_int102 = ( ( real_T ) ( M [ 192ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3048 / ( X
[ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( t3048 / ( X [ 35ULL ] == 0.0
? 1.0E-16 : X [ 35ULL ] ) ) * ( X [ 250ULL ] / 0.0019634954084936209 ) * ( X
[ 250ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3134 ;
U_idx_0 = X [ 265ULL ] * t2128 ; zc_int103 = ( ( real_T ) ( M [ 193ULL ] != 0
) * 2.0 - 1.0 ) * ( U_idx_0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] )
) * ( U_idx_0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( - X [
250ULL ] / 0.0019634954084936209 ) * ( - X [ 250ULL ] / 0.0019634954084936209
) / 2.0 * 9.999999999999999E-14 + t2130 ; U_idx_0 = X [ 262ULL ] * t2128 ;
t2130 = ( ( real_T ) ( M [ 194ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_0 /
1.01325 ) * ( U_idx_0 / 1.01325 ) * ( - X [ 250ULL ] / 0.0019634954084936209
) * ( - X [ 250ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14
+ t2129 ; U_idx_0 = X [ 264ULL ] * t2128 ; t2129 = ( ( real_T ) ( M [ 195ULL
] != 0 ) * 2.0 - 1.0 ) * ( U_idx_0 / 1.01325 ) * ( U_idx_0 / 1.01325 ) * ( X
[ 250ULL ] / 0.0019634954084936209 ) * ( X [ 250ULL ] / 0.0019634954084936209
) / 2.0 * 9.999999999999999E-14 + t2132 ; U_idx_0 = X [ 263ULL ] * t2128 ; if
( - X [ 250ULL ] >= 0.0 ) { zc_int107 = - ( ( zc_int103 - t2130 ) * X [
250ULL ] ) ; } else { zc_int107 = ( t2129 - ( ( ( real_T ) ( M [ 196ULL ] !=
0 ) * 2.0 - 1.0 ) * ( U_idx_0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ]
) ) * ( U_idx_0 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( X [
250ULL ] / 0.0019634954084936209 ) * ( X [ 250ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + zc_int107 ) ) * X [ 250ULL ] ; } t2130 = ( (
real_T ) ( M [ 192ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3048 / ( X [ 35ULL ] == 0.0
? 1.0E-16 : X [ 35ULL ] ) ) * ( t3048 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [
35ULL ] ) ) * ( - X [ 250ULL ] / 0.0019634954084936209 ) * ( - X [ 250ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3134 ; t3048 = X [
269ULL ] * t3165 ; t2132 = ( ( real_T ) ( M [ 197ULL ] != 0 ) * 2.0 - 1.0 ) *
( t3048 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( t3048 / ( X [
35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( X [ 281ULL ] /
0.0019634954084936209 ) * ( X [ 281ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + U_idx_3 ; if ( t1915 >= 0.0 ) { t3165 = t3174 *
100000.0 ; } else { t3165 = - t3174 * 100000.0 ; } if ( M [ 199ULL ] != 0 ) {
t1915 = 216.59999999999997 ; } else { t1915 = M [ 200ULL ] != 0 ? 623.15 :
U_idx_6 ; } t1791 [ 0ULL ] = U_idx_5 >= 0.0 ? t1915 : X [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & iv_efOut . mField0 [ 0ULL ] , & iv_efOut .
mField1 [ 0ULL ] , & iv_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = iv_efOut ; tlu2_1d_linear_linear_value ( & jv_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = jv_efOut
[ 0 ] ; t1915 = t1785_idx_0 ; t1768_idx_0 = X [ 169ULL ] * t2196 ; U_idx_2 =
X [ 291ULL ] * t2199 ; t2199 = ( ( real_T ) ( M [ 201ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_2 / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL ] ) ) * (
U_idx_2 / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL ] ) ) * ( X [ 304ULL ]
/ 0.0019634954084936209 ) * ( X [ 304ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3145 ; t3134 = pmf_sqrt ( t2158 * t2158 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 202ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 302ULL ] * t129 * t2157 * 1.0E-9 ) ; t2158 = pmf_sqrt ( t2177 * t2177 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 203ULL ] != 0 ) * 2.0 - 1.0 ) * X
[ 305ULL ] * t133 * t2157 * 1.0E-9 ) ; t129 = - pmf_sqrt ( ( ( real_T ) ( M [
204ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3194 / ( t2157 == 0.0 ? 1.0E-16 : t2157 )
/ ( X [ 302ULL ] == 0.0 ? 1.0E-16 : X [ 302ULL ] ) ) ) *
0.0019634954084936209 ; t2177 = zc_int208 * t129 * 11.2 / ( t3168 == 0.0 ?
1.0E-16 : t3168 ) ; if ( t131 >= 0.0 ) { t133 = t129 * 100000.0 ; } else {
t133 = - t129 * 100000.0 ; } t131 = t3165 * 0.01 / ( t1938 == 0.0 ? 1.0E-16 :
t1938 ) ; t1934 = t133 * 0.05 / ( t3149 == 0.0 ? 1.0E-16 : t3149 ) ; U_idx_0
= zc_int177 >= 1.0 ? t1934 : 1.0 ; t3194 = pmf_log10 ( 6.9 / ( U_idx_0 == 0.0
? 1.0E-16 : U_idx_0 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( U_idx_0
== 0.0 ? 1.0E-16 : U_idx_0 ) + 2.8767404433520813E-5 ) * 3.24 ; t129 = t129 *
t133 * ( 1.0 / ( t3194 == 0.0 ? 1.0E-16 : t3194 ) ) * 0.175 / ( t3209 == 0.0
? 1.0E-16 : t3209 ) ; t133 = ( t1934 - 2000.0 ) / 2000.0 ; t1934 = t133 *
t133 * 3.0 - t133 * t133 * t133 * 2.0 ; if ( zc_int177 <= 2000.0 ) { t133 =
t2177 * 1.0E-5 ; } else if ( zc_int177 >= 4000.0 ) { t133 = t129 * 1.0E-5 ; }
else { t133 = ( ( 1.0 - t1934 ) * t2177 + t129 * t1934 ) * 1.0E-5 ; } t1934 =
- ( X [ 192ULL ] * t3134 ) ; t129 = t1934 / 0.0019634954084936209 *
0.00031622776601683789 + t133 ; U_idx_0 = - t129 - t129 * - 0.95 ; zc_int177
= ( - t2174 - t129 * - 0.95 ) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ;
t2177 = zc_int177 * zc_int177 * 3.0 - zc_int177 * zc_int177 * zc_int177 * 2.0
; zc_int177 = t1917 >= 1.0 ? t131 : 1.0 ; if ( - t2174 <= t2165 * - 0.95 ) {
t133 = t2174 ; } else if ( - t2174 >= - t2165 ) { t133 = t129 ; } else { t133
= ( 1.0 - t2177 ) * t2174 + t129 * t2177 ; } t129 = - pmf_sqrt ( ( ( real_T )
( M [ 206ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3211 / ( t2157 == 0.0 ? 1.0E-16 :
t2157 ) / ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) ) *
0.0019634954084936209 ; t2165 = zc_int208 * t129 * 11.2 / ( t3168 == 0.0 ?
1.0E-16 : t3168 ) ; if ( t2180 >= 0.0 ) { zc_int208 = t129 * 100000.0 ; }
else { zc_int208 = - t129 * 100000.0 ; } t2177 = zc_int208 * 0.05 / ( t3149
== 0.0 ? 1.0E-16 : t3149 ) ; t2180 = t2182 >= 1.0 ? t2177 : 1.0 ; t3134 =
pmf_log10 ( 6.9 / ( t2180 == 0.0 ? 1.0E-16 : t2180 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( t2180 == 0.0 ? 1.0E-16 : t2180 ) +
2.8767404433520813E-5 ) * 3.24 ; t129 = t129 * zc_int208 * ( 1.0 / ( t3134 ==
0.0 ? 1.0E-16 : t3134 ) ) * 0.175 / ( t3209 == 0.0 ? 1.0E-16 : t3209 ) ;
zc_int208 = ( t2177 - 2000.0 ) / 2000.0 ; t2177 = zc_int208 * zc_int208 * 3.0
- zc_int208 * zc_int208 * zc_int208 * 2.0 ; t3134 = pmf_log10 ( 6.9 / (
zc_int177 == 0.0 ? 1.0E-16 : zc_int177 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int177 == 0.0 ? 1.0E-16 : zc_int177 ) +
0.00017169489553429715 ) * 3.24 ; zc_int208 = 1.0 / ( t3134 == 0.0 ? 1.0E-16
: t3134 ) ; if ( t2182 <= 2000.0 ) { zc_int177 = t2165 * 1.0E-5 ; } else if (
t2182 >= 4000.0 ) { zc_int177 = t129 * 1.0E-5 ; } else { zc_int177 = ( ( 1.0
- t2177 ) * t2165 + t129 * t2177 ) * 1.0E-5 ; } t3134 = X [ 304ULL ] * t2158
; t2158 = t3134 / 0.0019634954084936209 * 0.00031622776601683789 + zc_int177
; t3194 = - t2158 - t2158 * - 0.95 ; t129 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke - t2158 * -
0.95 ) / ( t3194 == 0.0 ? 1.0E-16 : t3194 ) ; t2165 = t129 * t129 * 3.0 -
t129 * t129 * t129 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke <= t2179 * -
0.95 ) { t129 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke >= - t2179
) { t129 = t2158 ; } else { t129 = ( 1.0 - t2165 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke + t2158 *
t2165 ; } t2158 = ( ( real_T ) ( M [ 201ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_2 / ( X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL ] ) ) * ( U_idx_2 / (
X [ 292ULL ] == 0.0 ? 1.0E-16 : X [ 292ULL ] ) ) * ( - X [ 304ULL ] / 0.32 )
* ( - X [ 304ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t3145 ; t3145 = X
[ 68ULL ] * t2240 ; t2165 = ( ( real_T ) ( M [ 210ULL ] != 0 ) * 2.0 - 1.0 )
* ( t3145 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( t3145 / ( X
[ 69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( X [ 318ULL ] / 0.32 ) * ( X
[ 318ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + U_idx_1 ; zc_int177 =
pmf_sqrt ( zc_int231 * zc_int231 * 9.999999999999999E-14 + ( ( real_T ) ( M [
211ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 316ULL ] * zc_int242 * t2233 * 1.0E-9 ) ;
t2177 = pmf_sqrt ( t2246 * t2246 * 9.999999999999999E-14 + ( ( real_T ) ( M [
212ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 319ULL ] * zc_int275 * t2233 * 1.0E-9 ) ;
t2179 = - pmf_sqrt ( ( ( real_T ) ( M [ 213ULL ] != 0 ) * 2.0 - 1.0 ) * (
t3241 / ( t2233 == 0.0 ? 1.0E-16 : t2233 ) / ( X [ 316ULL ] == 0.0 ? 1.0E-16
: X [ 316ULL ] ) ) ) * 0.32 ; zc_int208 = t3165 * zc_int208 * t3174 * 0.55 /
( t1945 == 0.0 ? 1.0E-16 : t1945 ) ; t2180 = t2241 * t2179 *
2.9973120849090416 / ( t2310 == 0.0 ? 1.0E-16 : t2310 ) ; if ( zc_int260 >=
0.0 ) { t2182 = t2179 * 100000.0 ; } else { t2182 = - t2179 * 100000.0 ; }
zc_int231 = t2182 * 0.01 / ( t2306 == 0.0 ? 1.0E-16 : t2306 ) ; zc_int242 =
t2244 >= 1.0 ? zc_int231 : 1.0 ; t3165 = pmf_log10 ( 6.9 / ( zc_int242 == 0.0
? 1.0E-16 : zc_int242 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
zc_int242 == 0.0 ? 1.0E-16 : zc_int242 ) + 0.00017169489553429715 ) * 3.24 ;
t2179 = t2179 * t2182 * ( 1.0 / ( t3165 == 0.0 ? 1.0E-16 : t3165 ) ) *
0.046833001326703774 / ( t2313 == 0.0 ? 1.0E-16 : t2313 ) ; t2182 = (
zc_int231 - 2000.0 ) / 2000.0 ; zc_int231 = t2182 * t2182 * 3.0 - t2182 *
t2182 * t2182 * 2.0 ; if ( t2244 <= 2000.0 ) { t2182 = t2180 * 1.0E-5 ; }
else if ( t2244 >= 4000.0 ) { t2182 = t2179 * 1.0E-5 ; } else { t2182 = ( (
1.0 - zc_int231 ) * t2180 + t2179 * zc_int231 ) * 1.0E-5 ; } t3165 = - ( X [
304ULL ] * zc_int177 ) ; zc_int177 = t3165 / 0.32 * 0.00031622776601683789 +
t2182 ; t131 = ( t131 - 2000.0 ) / 2000.0 ; t3168 = - zc_int177 - zc_int177 *
- 0.95 ; t2179 = ( - t2243 - zc_int177 * - 0.95 ) / ( t3168 == 0.0 ? 1.0E-16
: t3168 ) ; t2180 = t2179 * t2179 * 3.0 - t2179 * t2179 * t2179 * 2.0 ; if (
- t2243 <= zc_int239 * - 0.95 ) { t2179 = t2243 ; } else if ( - t2243 >= -
zc_int239 ) { t2179 = zc_int177 ; } else { t2179 = ( 1.0 - t2180 ) * t2243 +
zc_int177 * t2180 ; } zc_int177 = - pmf_sqrt ( ( ( real_T ) ( M [ 214ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t2322 / ( t2233 == 0.0 ? 1.0E-16 : t2233 ) / ( X [
319ULL ] == 0.0 ? 1.0E-16 : X [ 319ULL ] ) ) ) * 0.32 ; t2180 = t2241 *
zc_int177 * 2.9973120849090416 / ( t2310 == 0.0 ? 1.0E-16 : t2310 ) ; if (
t2249 >= 0.0 ) { t2182 = zc_int177 * 100000.0 ; } else { t2182 = - zc_int177
* 100000.0 ; } zc_int231 = t2182 * 0.01 / ( t2306 == 0.0 ? 1.0E-16 : t2306 )
; zc_int242 = t2251 >= 1.0 ? zc_int231 : 1.0 ; t3174 = pmf_log10 ( 6.9 / (
zc_int242 == 0.0 ? 1.0E-16 : zc_int242 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int242 == 0.0 ? 1.0E-16 : zc_int242 ) +
0.00017169489553429715 ) * 3.24 ; zc_int177 = zc_int177 * t2182 * ( 1.0 / (
t3174 == 0.0 ? 1.0E-16 : t3174 ) ) * 0.046833001326703774 / ( t2313 == 0.0 ?
1.0E-16 : t2313 ) ; t2182 = t131 * t131 * 3.0 - t131 * t131 * t131 * 2.0 ;
t131 = ( zc_int231 - 2000.0 ) / 2000.0 ; zc_int231 = t131 * t131 * 3.0 - t131
* t131 * t131 * 2.0 ; if ( t2251 <= 2000.0 ) { t131 = t2180 * 1.0E-5 ; } else
if ( t2251 >= 4000.0 ) { t131 = zc_int177 * 1.0E-5 ; } else { t131 = ( ( 1.0
- zc_int231 ) * t2180 + zc_int177 * zc_int231 ) * 1.0E-5 ; } t3174 = X [
318ULL ] * t2177 ; zc_int177 = t3174 / 0.32 * 0.00031622776601683789 + t131 ;
t3209 = - zc_int177 - zc_int177 * - 0.95 ; t131 = ( - t2250 - zc_int177 * -
0.95 ) / ( t3209 == 0.0 ? 1.0E-16 : t3209 ) ; t2177 = t131 * t131 * 3.0 -
t131 * t131 * t131 * 2.0 ; if ( - t2250 <= t2248 * - 0.95 ) { t131 = t2250 ;
} else if ( - t2250 >= - t2248 ) { t131 = zc_int177 ; } else { t131 = ( 1.0 -
t2177 ) * t2250 + zc_int177 * t2177 ; } zc_int177 = ( ( real_T ) ( M [ 210ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3145 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL
] ) ) * ( t3145 / ( X [ 69ULL ] == 0.0 ? 1.0E-16 : X [ 69ULL ] ) ) * ( - X [
318ULL ] / 0.32 ) * ( - X [ 318ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
U_idx_1 ; t3145 = X [ 115ULL ] * t1946 ; t2177 = pmf_sqrt ( zc_int281 *
zc_int281 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 218ULL ] != 0 ) * 2.0
- 1.0 ) * X [ 330ULL ] * zc_int286 * t2278 * 1.0E-9 ) ; if ( t1917 <= 2000.0
) { t2180 = t3207 * 1.0E-5 ; } else if ( t1917 >= 4000.0 ) { t2180 =
zc_int208 * 1.0E-5 ; } else { t2180 = ( ( 1.0 - t2182 ) * t3207 + zc_int208 *
t2182 ) * 1.0E-5 ; } t1917 = pmf_sqrt ( t2290 * t2290 * 9.999999999999999E-14
+ ( ( real_T ) ( M [ 219ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 332ULL ] * t2291 *
t2278 * 1.0E-9 ) ; zc_int208 = - pmf_sqrt ( ( ( real_T ) ( M [ 220ULL ] != 0
) * 2.0 - 1.0 ) * ( t2394 / ( t2278 == 0.0 ? 1.0E-16 : t2278 ) / ( X [ 330ULL
] == 0.0 ? 1.0E-16 : X [ 330ULL ] ) ) ) * 0.32 ; t2182 = t2285 * zc_int208 *
2.9973120849090416 / ( t2402 == 0.0 ? 1.0E-16 : t2402 ) ; if ( t2286 >= 0.0 )
{ zc_int231 = zc_int208 * 100000.0 ; } else { zc_int231 = - zc_int208 *
100000.0 ; } zc_int242 = zc_int231 * 0.01 / ( t2398 == 0.0 ? 1.0E-16 : t2398
) ; zc_int239 = t2288 >= 1.0 ? zc_int242 : 1.0 ; t3207 = pmf_log10 ( 6.9 / (
zc_int239 == 0.0 ? 1.0E-16 : zc_int239 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( zc_int239 == 0.0 ? 1.0E-16 : zc_int239 ) +
0.00017169489553429715 ) * 3.24 ; zc_int208 = zc_int208 * zc_int231 * ( 1.0 /
( t3207 == 0.0 ? 1.0E-16 : t3207 ) ) * 0.046833001326703774 / ( t2405 == 0.0
? 1.0E-16 : t2405 ) ; zc_int231 = ( zc_int242 - 2000.0 ) / 2000.0 ; zc_int242
= zc_int231 * zc_int231 * 3.0 - zc_int231 * zc_int231 * zc_int231 * 2.0 ;
zc_int231 = pmf_sqrt ( zc_int320 * zc_int320 * 9.999999999999999E-14 + ( (
real_T ) ( M [ 2ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 139ULL ] * t1910 * t1908 *
1.0E-9 ) ; t3207 = t1905 * zc_int231 ; zc_int320 = t3207 /
7.8539816339744827E-5 * 0.00031622776601683789 + t2180 ; if ( t2288 <= 2000.0
) { t1910 = t2182 * 1.0E-5 ; } else if ( t2288 >= 4000.0 ) { t1910 =
zc_int208 * 1.0E-5 ; } else { t1910 = ( ( 1.0 - zc_int242 ) * t2182 +
zc_int208 * zc_int242 ) * 1.0E-5 ; } t3209 = - ( X [ 318ULL ] * t2177 ) ;
zc_int208 = t3209 / 0.32 * 0.00031622776601683789 + t1910 ; t3211 = -
zc_int208 - zc_int208 * - 0.95 ; t1910 = ( - t2287 - zc_int208 * - 0.95 ) / (
t3211 == 0.0 ? 1.0E-16 : t3211 ) ; t2177 = t1910 * t1910 * 3.0 - t1910 *
t1910 * t1910 * 2.0 ; if ( - t2287 <= t2281 * - 0.95 ) { t1910 = t2287 ; }
else if ( - t2287 >= - t2281 ) { t1910 = zc_int208 ; } else { t1910 = ( 1.0 -
t2177 ) * t2287 + zc_int208 * t2177 ; } zc_int208 = - pmf_sqrt ( ( ( real_T )
( M [ 221ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2414 / ( t2278 == 0.0 ? 1.0E-16 :
t2278 ) / ( X [ 332ULL ] == 0.0 ? 1.0E-16 : X [ 332ULL ] ) ) ) * 0.32 ; t2177
= t2285 * zc_int208 * 2.9973120849090416 / ( t2402 == 0.0 ? 1.0E-16 : t2402 )
; if ( t1869 >= 0.0 ) { t2180 = zc_int208 * 100000.0 ; } else { t2180 = -
zc_int208 * 100000.0 ; } t2182 = t2180 * 0.01 / ( t2398 == 0.0 ? 1.0E-16 :
t2398 ) ; zc_int231 = piece231 >= 1.0 ? t2182 : 1.0 ; t3211 = - zc_int320 -
zc_int320 * - 0.95 ; zc_int242 = ( - t1916 - zc_int320 * - 0.95 ) / ( t3211
== 0.0 ? 1.0E-16 : t3211 ) ; U_idx_9 = pmf_log10 ( 6.9 / ( zc_int231 == 0.0 ?
1.0E-16 : zc_int231 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
zc_int231 == 0.0 ? 1.0E-16 : zc_int231 ) + 0.00017169489553429715 ) * 3.24 ;
zc_int208 = zc_int208 * t2180 * ( 1.0 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9
) ) * 0.046833001326703774 / ( t2405 == 0.0 ? 1.0E-16 : t2405 ) ; t2180 = (
t2182 - 2000.0 ) / 2000.0 ; t2182 = t2180 * t2180 * 3.0 - t2180 * t2180 *
t2180 * 2.0 ; if ( piece231 <= 2000.0 ) { t2180 = t2177 * 1.0E-5 ; } else if
( piece231 >= 4000.0 ) { t2180 = zc_int208 * 1.0E-5 ; } else { t2180 = ( (
1.0 - t2182 ) * t2177 + zc_int208 * t2182 ) * 1.0E-5 ; } U_idx_9 = X [ 138ULL
] * t1917 ; t1917 = U_idx_9 / 0.32 * 0.00031622776601683789 + t2180 ; U_idx_0
= - t1917 - t1917 * - 0.95 ; zc_int208 = ( - intrm_sf_mf_863 - t1917 * - 0.95
) / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; t2177 = zc_int208 * zc_int208 *
3.0 - zc_int208 * zc_int208 * zc_int208 * 2.0 ; if ( - intrm_sf_mf_863 <=
t2292 * - 0.95 ) { zc_int208 = intrm_sf_mf_863 ; } else if ( -
intrm_sf_mf_863 >= - t2292 ) { zc_int208 = t1917 ; } else { zc_int208 = ( 1.0
- t2177 ) * intrm_sf_mf_863 + t1917 * t2177 ; } if ( M [ 225ULL ] != 0 ) {
t1917 = 216.59999999999997 ; } else { t1917 = M [ 226ULL ] != 0 ? 623.15 :
U_idx_8 ; } t2177 = zc_int242 * zc_int242 * 3.0 - zc_int242 * zc_int242 *
zc_int242 * 2.0 ; t1791 [ 0ULL ] = U_idx_7 >= 0.0 ? t1917 : X [ 45ULL ] ;
tlu2_linear_linear_prelookup ( & kv_efOut . mField0 [ 0ULL ] , & kv_efOut .
mField1 [ 0ULL ] , & kv_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t81 = kv_efOut ; tlu2_1d_linear_linear_value ( & lv_efOut [ 0ULL ] , & t81 .
mField0 [ 0ULL ] , & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1785_idx_0 = lv_efOut
[ 0 ] ; t2180 = ( ( real_T ) ( M [ 197ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3048 /
( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( t3048 / ( X [ 35ULL ] ==
0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( - X [ 281ULL ] / 0.0019634954084936209 )
* ( - X [ 281ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
U_idx_3 ; U_idx_3 = X [ 340ULL ] * t3352 ; t2182 = ( ( real_T ) ( M [ 24ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( U_idx_3 / ( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [
341ULL ] ) ) * ( U_idx_3 / ( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [ 341ULL ] ) )
* ( X [ 353ULL ] / 0.0019634954084936209 ) * ( X [ 353ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3427 ; zc_int231 =
pmf_sqrt ( t2327 * t2327 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 227ULL
] != 0 ) * 2.0 - 1.0 ) * X [ 351ULL ] * t3598 * t2325 * 1.0E-9 ) ; zc_int242
= pmf_sqrt ( t3410 * t3410 * 9.999999999999999E-14 + ( ( real_T ) ( M [
228ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 354ULL ] * t3411 * t2325 * 1.0E-9 ) ;
zc_int239 = - pmf_sqrt ( ( ( real_T ) ( M [ 229ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2484 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) / ( X [ 351ULL ] == 0.0 ? 1.0E-16
: X [ 351ULL ] ) ) ) * 0.0019634954084936209 ; t2240 = t3345 * zc_int239 *
11.2 / ( t2492 == 0.0 ? 1.0E-16 : t2492 ) ; if ( t3252 >= 0.0 ) { t2241 =
zc_int239 * 100000.0 ; } else { t2241 = - zc_int239 * 100000.0 ; } zc_int260
= t2241 * 0.05 / ( t2488 == 0.0 ? 1.0E-16 : t2488 ) ; if ( - t1916 <=
zc_int227 * - 0.95 ) { t2244 = t1916 ; } else if ( - t1916 >= - zc_int227 ) {
t2244 = zc_int320 ; } else { t2244 = ( 1.0 - t2177 ) * t1916 + zc_int320 *
t2177 ; } zc_int320 = t3274 >= 1.0 ? zc_int260 : 1.0 ; t3252 = pmf_log10 (
6.9 / ( zc_int320 == 0.0 ? 1.0E-16 : zc_int320 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( zc_int320 == 0.0 ? 1.0E-16 : zc_int320 ) +
2.8767404433520813E-5 ) * 3.24 ; zc_int320 = zc_int239 * t2241 * ( 1.0 / (
t3252 == 0.0 ? 1.0E-16 : t3252 ) ) * 0.175 / ( t2495 == 0.0 ? 1.0E-16 : t2495
) ; zc_int227 = ( zc_int260 - 2000.0 ) / 2000.0 ; t2177 = zc_int227 *
zc_int227 * 3.0 - zc_int227 * zc_int227 * zc_int227 * 2.0 ; if ( t3274 <=
2000.0 ) { zc_int227 = t2240 * 1.0E-5 ; } else if ( t3274 >= 4000.0 ) {
zc_int227 = zc_int320 * 1.0E-5 ; } else { zc_int227 = ( ( 1.0 - t2177 ) *
t2240 + zc_int320 * t2177 ) * 1.0E-5 ; } t3252 = - ( X [ 281ULL ] * zc_int231
) ; zc_int320 = t3252 / 0.0019634954084936209 * 0.00031622776601683789 +
zc_int227 ; t3410 = - zc_int320 - zc_int320 * - 0.95 ; zc_int227 = ( - t2336
- zc_int320 * - 0.95 ) / ( t3410 == 0.0 ? 1.0E-16 : t3410 ) ; t2177 =
zc_int227 * zc_int227 * 3.0 - zc_int227 * zc_int227 * zc_int227 * 2.0 ; if (
- t2336 <= t3267 * - 0.95 ) { zc_int227 = t2336 ; } else if ( - t2336 >= -
t3267 ) { zc_int227 = zc_int320 ; } else { zc_int227 = ( 1.0 - t2177 ) *
t2336 + zc_int320 * t2177 ; } zc_int320 = - pmf_sqrt ( ( ( real_T ) ( M [
33ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1954 / ( t1908 == 0.0 ? 1.0E-16 : t1908 ) /
( X [ 143ULL ] == 0.0 ? 1.0E-16 : X [ 143ULL ] ) ) ) * 7.8539816339744827E-5
; t2177 = - pmf_sqrt ( ( ( real_T ) ( M [ 230ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2504 / ( t2325 == 0.0 ? 1.0E-16 : t2325 ) / ( X [ 354ULL ] == 0.0 ? 1.0E-16
: X [ 354ULL ] ) ) ) * 0.0019634954084936209 ; zc_int231 = t3345 * t2177 *
11.2 / ( t2492 == 0.0 ? 1.0E-16 : t2492 ) ; if ( t3397 >= 0.0 ) { zc_int239 =
t2177 * 100000.0 ; } else { zc_int239 = - t2177 * 100000.0 ; } t2240 =
zc_int239 * 0.05 / ( t2488 == 0.0 ? 1.0E-16 : t2488 ) ; t2241 = t3289 >= 1.0
? t2240 : 1.0 ; t3267 = pmf_log10 ( 6.9 / ( t2241 == 0.0 ? 1.0E-16 : t2241 )
+ 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2241 == 0.0 ? 1.0E-16 :
t2241 ) + 2.8767404433520813E-5 ) * 3.24 ; t2177 = t2177 * zc_int239 * ( 1.0
/ ( t3267 == 0.0 ? 1.0E-16 : t3267 ) ) * 0.175 / ( t2495 == 0.0 ? 1.0E-16 :
t2495 ) ; zc_int239 = ( t2240 - 2000.0 ) / 2000.0 ; t2240 = zc_int239 *
zc_int239 * 3.0 - zc_int239 * zc_int239 * zc_int239 * 2.0 ; if ( t3289 <=
2000.0 ) { zc_int239 = zc_int231 * 1.0E-5 ; } else if ( t3289 >= 4000.0 ) {
zc_int239 = t2177 * 1.0E-5 ; } else { zc_int239 = ( ( 1.0 - t2240 ) *
zc_int231 + t2177 * t2240 ) * 1.0E-5 ; } t1914 = t1914 * zc_int320 * 35.2 / (
t1942 == 0.0 ? 1.0E-16 : t1942 ) ; t3267 = X [ 353ULL ] * zc_int242 ; t2177 =
t3267 / 0.0019634954084936209 * 0.00031622776601683789 + zc_int239 ; t3274 =
- t2177 - t2177 * - 0.95 ; zc_int231 = ( - t2343 - t2177 * - 0.95 ) / ( t3274
== 0.0 ? 1.0E-16 : t3274 ) ; zc_int242 = zc_int231 * zc_int231 * 3.0 -
zc_int231 * zc_int231 * zc_int231 * 2.0 ; if ( - t2343 <= t3284 * - 0.95 ) {
zc_int231 = t2343 ; } else if ( - t2343 >= - t3284 ) { zc_int231 = t2177 ; }
else { zc_int231 = ( 1.0 - zc_int242 ) * t2343 + t2177 * zc_int242 ; } t3345
= X [ 370ULL ] * t2555 ; t2177 = ( ( real_T ) ( M [ 6ULL ] != 0 ) * 2.0 - 1.0
) * ( t3345 / 1.01325 ) * ( t3345 / 1.01325 ) * ( X [ 376ULL ] /
0.0019634954084936209 ) * ( X [ 376ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t3928 ; t3410 = X [ 365ULL ] * t3591 ; zc_int242 = (
( real_T ) ( M [ 8ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3410 / ( X [ 366ULL ] ==
0.0 ? 1.0E-16 : X [ 366ULL ] ) ) * ( t3410 / ( X [ 366ULL ] == 0.0 ? 1.0E-16
: X [ 366ULL ] ) ) * ( X [ 388ULL ] / 0.0019634954084936209 ) * ( X [ 388ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3555 ; t3397 = X
[ 384ULL ] * t3534 ; zc_int239 = ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0
) * ( t3397 / ( t2381 == 0.0 ? 1.0E-16 : t2381 ) ) * ( t3397 / ( t2381 == 0.0
? 1.0E-16 : t2381 ) ) * ( - X [ 376ULL ] / 0.0019634954084936209 ) * ( - X [
376ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3520 ;
t2240 = pmf_sqrt ( t3303 * t3303 * 9.999999999999999E-14 + ( ( real_T ) ( M [
10ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 389ULL ] * t3316 * t2384 * 1.0E-9 ) ;
t2241 = pmf_sqrt ( t3569 * t3569 * 9.999999999999999E-14 + ( ( real_T ) ( M [
11ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 393ULL ] * t2407 * t2384 * 1.0E-9 ) ;
zc_int260 = - pmf_sqrt ( ( ( real_T ) ( M [ 12ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2579 / ( t2384 == 0.0 ? 1.0E-16 : t2384 ) / ( X [ 389ULL ] == 0.0 ? 1.0E-16
: X [ 389ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1922 >= 0.0 ) { t2246 =
zc_int320 * 100000.0 ; } else { t2246 = - zc_int320 * 100000.0 ; } t1922 =
t3383 * zc_int260 * 35.2 / ( t2587 == 0.0 ? 1.0E-16 : t2587 ) ; if ( t3384 >=
0.0 ) { zc_int275 = zc_int260 * 100000.0 ; } else { zc_int275 = - zc_int260 *
100000.0 ; } t2248 = zc_int275 * 0.05 / ( t2583 == 0.0 ? 1.0E-16 : t2583 ) ;
t2249 = t3435 >= 1.0 ? t2248 : 1.0 ; t3303 = pmf_log10 ( 6.9 / ( t2249 == 0.0
? 1.0E-16 : t2249 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2249 ==
0.0 ? 1.0E-16 : t2249 ) + 2.8767404433520813E-5 ) * 3.24 ; zc_int260 =
zc_int260 * zc_int275 * ( 1.0 / ( t3303 == 0.0 ? 1.0E-16 : t3303 ) ) * 0.55 /
( t2590 == 0.0 ? 1.0E-16 : t2590 ) ; zc_int275 = ( t2248 - 2000.0 ) / 2000.0
; t2248 = zc_int275 * zc_int275 * 3.0 - zc_int275 * zc_int275 * zc_int275 *
2.0 ; if ( t3435 <= 2000.0 ) { zc_int275 = t1922 * 1.0E-5 ; } else if ( t3435
>= 4000.0 ) { zc_int275 = zc_int260 * 1.0E-5 ; } else { zc_int275 = ( ( 1.0 -
t2248 ) * t1922 + zc_int260 * t2248 ) * 1.0E-5 ; } t3303 = X [ 388ULL ] *
t2240 ; t1922 = t3303 / 0.0019634954084936209 * 0.00031622776601683789 +
zc_int275 ; t2240 = t2246 * 0.01 / ( t1938 == 0.0 ? 1.0E-16 : t1938 ) ; t3384
= - t1922 - t1922 * - 0.95 ; zc_int260 = ( - t2401 - t1922 * - 0.95 ) / (
t3384 == 0.0 ? 1.0E-16 : t3384 ) ; zc_int275 = zc_int260 * zc_int260 * 3.0 -
zc_int260 * zc_int260 * zc_int260 * 2.0 ; if ( - t2401 <= t3369 * - 0.95 ) {
zc_int260 = t2401 ; } else if ( - t2401 >= - t3369 ) { zc_int260 = t1922 ; }
else { zc_int260 = ( 1.0 - zc_int275 ) * t2401 + t1922 * zc_int275 ; } t1922
= - pmf_sqrt ( ( ( real_T ) ( M [ 14ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2599 / (
t2384 == 0.0 ? 1.0E-16 : t2384 ) / ( X [ 393ULL ] == 0.0 ? 1.0E-16 : X [
393ULL ] ) ) ) * 0.0019634954084936209 ; zc_int275 = t3383 * t1922 * 35.2 / (
t2587 == 0.0 ? 1.0E-16 : t2587 ) ; if ( t3516 >= 0.0 ) { t2248 = t1922 *
100000.0 ; } else { t2248 = - t1922 * 100000.0 ; } t2249 = t2248 * 0.05 / (
t2583 == 0.0 ? 1.0E-16 : t2583 ) ; t2251 = t3472 >= 1.0 ? t2249 : 1.0 ; t3316
= pmf_log10 ( 6.9 / ( t2251 == 0.0 ? 1.0E-16 : t2251 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t2251 == 0.0 ? 1.0E-16 : t2251
) + 2.8767404433520813E-5 ) * 3.24 ; t1922 = t1922 * t2248 * ( 1.0 / ( t3316
== 0.0 ? 1.0E-16 : t3316 ) ) * 0.55 / ( t2590 == 0.0 ? 1.0E-16 : t2590 ) ;
t2248 = t1924 >= 1.0 ? t2240 : 1.0 ; t2249 = ( t2249 - 2000.0 ) / 2000.0 ;
t2251 = t2249 * t2249 * 3.0 - t2249 * t2249 * t2249 * 2.0 ; if ( t3472 <=
2000.0 ) { t2249 = zc_int275 * 1.0E-5 ; } else if ( t3472 >= 4000.0 ) { t2249
= t1922 * 1.0E-5 ; } else { t2249 = ( ( 1.0 - t2251 ) * zc_int275 + t1922 *
t2251 ) * 1.0E-5 ; } t3316 = - ( X [ 376ULL ] * t2241 ) ; t1922 = t3316 /
0.0019634954084936209 * 0.00031622776601683789 + t2249 ; t3383 = - t1922 -
t1922 * - 0.95 ; t2241 = ( - t2415 - t1922 * - 0.95 ) / ( t3383 == 0.0 ?
1.0E-16 : t3383 ) ; zc_int275 = t2241 * t2241 * 3.0 - t2241 * t2241 * t2241 *
2.0 ; if ( - t2415 <= t3460 * - 0.95 ) { t2241 = t2415 ; } else if ( - t2415
>= - t3460 ) { t2241 = t1922 ; } else { t2241 = ( 1.0 - zc_int275 ) * t2415 +
t1922 * zc_int275 ; } t1922 = ( ( real_T ) ( M [ 9ULL ] != 0 ) * 2.0 - 1.0 )
* ( t3397 / ( t2381 == 0.0 ? 1.0E-16 : t2381 ) ) * ( t3397 / ( t2381 == 0.0 ?
1.0E-16 : t2381 ) ) * ( X [ 376ULL ] / 0.0019634954084936209 ) * ( X [ 376ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3520 ; zc_int275
= ( ( real_T ) ( M [ 6ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3345 / 1.01325 ) * (
t3345 / 1.01325 ) * ( - X [ 376ULL ] / 0.0019634954084936209 ) * ( - X [
376ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t3928 ;
t2249 = ( t2381 - 1.01325 ) * pmf_sqrt ( ( ( real_T ) ( M [ 18ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2694 / ( t3570 == 0.0 ? 1.0E-16 : t3570 ) ) ) *
intrm_sf_mf_1259 * 0.64 ; t3345 = pmf_log10 ( 6.9 / ( t2248 == 0.0 ? 1.0E-16
: t2248 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2248 == 0.0 ?
1.0E-16 : t2248 ) + 0.00017169489553429715 ) * 3.24 ; t2251 = pmf_sqrt ( ( (
real_T ) ( M [ 19ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2691 / ( t2452 == 0.0 ?
1.0E-16 : t2452 ) / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ) *
intrm_sf_mf_1259 * 0.64 ; t3397 = t2251 - t2251 * 0.95 ; zc_int281 = ( t2249
- t2251 * 0.95 ) / ( t3397 == 0.0 ? 1.0E-16 : t3397 ) ; zc_int286 = zc_int281
* zc_int281 * 3.0 - zc_int281 * zc_int281 * zc_int281 * 2.0 ; if ( t2453 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * 0.95 ) {
zc_int281 = t2249 * 100000.0 ; } else if ( t2453 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) { zc_int281
= t2251 * 100000.0 ; } else { zc_int281 = ( ( 1.0 - zc_int286 ) * t2249 +
t2251 * zc_int286 ) * 100000.0 ; } zc_int286 = ( - t2249 - t2251 * 0.95 ) / (
t3397 == 0.0 ? 1.0E-16 : t3397 ) ; t2281 = zc_int286 * zc_int286 * 3.0 -
zc_int286 * zc_int286 * zc_int286 * 2.0 ; if ( - t2453 <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * 0.95 ) {
zc_int286 = t2249 * 100000.0 ; } else if ( - t2453 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) { zc_int286
= - t2251 * 100000.0 ; } else { zc_int286 = ( ( 1.0 - t2281 ) * t2249 + -
t2251 * t2281 ) * 100000.0 ; } t2249 = ( ( real_T ) ( M [ 24ULL ] != 0 ) *
2.0 - 1.0 ) * ( U_idx_3 / ( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [ 341ULL ] ) )
* ( U_idx_3 / ( X [ 341ULL ] == 0.0 ? 1.0E-16 : X [ 341ULL ] ) ) * ( - X [
353ULL ] / 0.32 ) * ( - X [ 353ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t3427 ; t3397 = X [ 72ULL ] * t2465 ; t2251 = ( ( real_T ) ( M [ 25ULL ] != 0
) * 2.0 - 1.0 ) * ( t3397 / ( X [ 73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) )
* ( t3397 / ( X [ 73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ) * ( X [ 415ULL ]
/ 0.32 ) * ( X [ 415ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + zc_int48 ;
t2281 = pmf_sqrt ( t2461 * t2461 * 9.999999999999999E-14 + ( ( real_T ) ( M [
26ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 413ULL ] * t2462 * t2460 * 1.0E-9 ) ;
zc_int320 = zc_int320 * t2246 * ( 1.0 / ( t3345 == 0.0 ? 1.0E-16 : t3345 ) )
* 0.55 / ( t1945 == 0.0 ? 1.0E-16 : t1945 ) ; t2246 = pmf_sqrt ( t2472 *
t2472 * 9.999999999999999E-14 + ( ( real_T ) ( M [ 27ULL ] != 0 ) * 2.0 - 1.0
) * X [ 416ULL ] * t2473 * t2460 * 1.0E-9 ) ; t2248 = - pmf_sqrt ( ( ( real_T
) ( M [ 28ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2700 / ( t2460 == 0.0 ? 1.0E-16 :
t2460 ) / ( X [ 413ULL ] == 0.0 ? 1.0E-16 : X [ 413ULL ] ) ) ) * 0.32 ; t2285
= t2467 * t2248 * 2.9973120849090416 / ( t2709 == 0.0 ? 1.0E-16 : t2709 ) ;
if ( t2468 >= 0.0 ) { t2286 = t2248 * 100000.0 ; } else { t2286 = - t2248 *
100000.0 ; } t2288 = t2286 * 0.01 / ( t2705 == 0.0 ? 1.0E-16 : t2705 ) ;
t2290 = t2470 >= 1.0 ? t2288 : 1.0 ; t3369 = pmf_log10 ( 6.9 / ( t2290 == 0.0
? 1.0E-16 : t2290 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2290 ==
0.0 ? 1.0E-16 : t2290 ) + 0.00017169489553429715 ) * 3.24 ; t2248 = t2248 *
t2286 * ( 1.0 / ( t3369 == 0.0 ? 1.0E-16 : t3369 ) ) * 0.046833001326703774 /
( t2712 == 0.0 ? 1.0E-16 : t2712 ) ; t2286 = ( t2288 - 2000.0 ) / 2000.0 ;
t2288 = t2286 * t2286 * 3.0 - t2286 * t2286 * t2286 * 2.0 ; t2240 = ( t2240 -
2000.0 ) / 2000.0 ; if ( t2470 <= 2000.0 ) { t2286 = t2285 * 1.0E-5 ; } else
if ( t2470 >= 4000.0 ) { t2286 = t2248 * 1.0E-5 ; } else { t2286 = ( ( 1.0 -
t2288 ) * t2285 + t2248 * t2288 ) * 1.0E-5 ; } t3369 = - ( X [ 353ULL ] *
t2281 ) ; t2248 = t3369 / 0.32 * 0.00031622776601683789 + t2286 ; t3384 = -
t2248 - t2248 * - 0.95 ; t2281 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke - t2248 * -
0.95 ) / ( t3384 == 0.0 ? 1.0E-16 : t3384 ) ; t2285 = t2281 * t2281 * 3.0 -
t2281 * t2281 * t2281 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke <= t2463 * -
0.95 ) { t2281 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke ; } else if (
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke >= - t2463
) { t2281 = t2248 ; } else { t2281 = ( 1.0 - t2285 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke + t2248 *
t2285 ; } t2248 = - pmf_sqrt ( ( ( real_T ) ( M [ 29ULL ] != 0 ) * 2.0 - 1.0
) * ( t2662 / ( t2460 == 0.0 ? 1.0E-16 : t2460 ) / ( X [ 416ULL ] == 0.0 ?
1.0E-16 : X [ 416ULL ] ) ) ) * 0.32 ; t2285 = t2467 * t2248 *
2.9973120849090416 / ( t2709 == 0.0 ? 1.0E-16 : t2709 ) ; if ( t2475 >= 0.0 )
{ t2286 = t2248 * 100000.0 ; } else { t2286 = - t2248 * 100000.0 ; } t2288 =
t2286 * 0.01 / ( t2705 == 0.0 ? 1.0E-16 : t2705 ) ; t2290 = t2478 >= 1.0 ?
t2288 : 1.0 ; t2291 = t2240 * t2240 * 3.0 - t2240 * t2240 * t2240 * 2.0 ;
t3383 = pmf_log10 ( 6.9 / ( t2290 == 0.0 ? 1.0E-16 : t2290 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2290 == 0.0 ? 1.0E-16 : t2290
) + 0.00017169489553429715 ) * 3.24 ; t2240 = t2248 * t2286 * ( 1.0 / ( t3383
== 0.0 ? 1.0E-16 : t3383 ) ) * 0.046833001326703774 / ( t2712 == 0.0 ?
1.0E-16 : t2712 ) ; t2248 = ( t2288 - 2000.0 ) / 2000.0 ; t2286 = t2248 *
t2248 * 3.0 - t2248 * t2248 * t2248 * 2.0 ; if ( t2478 <= 2000.0 ) { t2248 =
t2285 * 1.0E-5 ; } else if ( t2478 >= 4000.0 ) { t2248 = t2240 * 1.0E-5 ; }
else { t2248 = ( ( 1.0 - t2286 ) * t2285 + t2240 * t2286 ) * 1.0E-5 ; } t3383
= X [ 415ULL ] * t2246 ; t2240 = t3383 / 0.32 * 0.00031622776601683789 +
t2248 ; t3435 = - t2240 - t2240 * - 0.95 ; t2246 = ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke - t2240 * -
0.95 ) / ( t3435 == 0.0 ? 1.0E-16 : t3435 ) ; t2248 = t2246 * t2246 * 3.0 -
t2246 * t2246 * t2246 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke <=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked * - 0.95 ) {
t2246 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke ; }
else if ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke
>= - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) { t2246
= t2240 ; } else { t2246 = ( 1.0 - t2248 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke + t2240 *
t2248 ; } t2240 = ( ( real_T ) ( M [ 25ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3397 /
( X [ 73ULL ] == 0.0 ? 1.0E-16 : X [ 73ULL ] ) ) * ( t3397 / ( X [ 73ULL ] ==
0.0 ? 1.0E-16 : X [ 73ULL ] ) ) * ( - X [ 415ULL ] / 0.32 ) * ( - X [ 415ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + zc_int48 ; if ( t1924 <= 2000.0 )
{ zc_int48 = t1914 * 1.0E-5 ; } else if ( t1924 >= 4000.0 ) { zc_int48 =
zc_int320 * 1.0E-5 ; } else { zc_int48 = ( ( 1.0 - t2291 ) * t1914 +
zc_int320 * t2291 ) * 1.0E-5 ; } zc_int320 = ( ( real_T ) ( M [ 8ULL ] != 0 )
* 2.0 - 1.0 ) * ( t3410 / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL ] ) )
* ( t3410 / ( X [ 366ULL ] == 0.0 ? 1.0E-16 : X [ 366ULL ] ) ) * ( - X [
388ULL ] / 0.32 ) * ( - X [ 388ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t3555 ; t1914 = pmf_sqrt ( t2523 * t2523 * 9.999999999999999E-14 + ( ( real_T
) ( M [ 34ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 427ULL ] * t2524 * t2522 * 1.0E-9
) ; t1924 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_delta_vel_BI *
9.999999999999999E-14 + ( ( real_T ) ( M [ 35ULL ] != 0 ) * 2.0 - 1.0 ) * X [
429ULL ] * t2534 * t2522 * 1.0E-9 ) ; t2248 = - pmf_sqrt ( ( ( real_T ) ( M [
36ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2793 / ( t2522 == 0.0 ? 1.0E-16 : t2522 ) /
( X [ 427ULL ] == 0.0 ? 1.0E-16 : X [ 427ULL ] ) ) ) * 0.32 ; t2285 = t2528 *
t2248 * 2.9973120849090416 / ( t2801 == 0.0 ? 1.0E-16 : t2801 ) ; if ( t2529
>= 0.0 ) { t2286 = t2248 * 100000.0 ; } else { t2286 = - t2248 * 100000.0 ; }
t2288 = t2286 * 0.01 / ( t2797 == 0.0 ? 1.0E-16 : t2797 ) ; t2290 = t2531 >=
1.0 ? t2288 : 1.0 ; t3410 = pmf_log10 ( 6.9 / ( t2290 == 0.0 ? 1.0E-16 :
t2290 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2290 == 0.0 ?
1.0E-16 : t2290 ) + 0.00017169489553429715 ) * 3.24 ; t2248 = t2248 * t2286 *
( 1.0 / ( t3410 == 0.0 ? 1.0E-16 : t3410 ) ) * 0.046833001326703774 / ( t2804
== 0.0 ? 1.0E-16 : t2804 ) ; t2286 = pmf_sqrt ( t1919 * t1919 *
9.999999999999999E-14 + ( ( real_T ) ( M [ 13ULL ] != 0 ) * 2.0 - 1.0 ) * X [
143ULL ] * t1920 * t1908 * 1.0E-9 ) ; t3410 = - ( X [ 126ULL ] * t2286 ) ;
t1919 = t3410 / 7.8539816339744827E-5 * 0.00031622776601683789 + zc_int48 ;
t1920 = ( t2288 - 2000.0 ) / 2000.0 ; zc_int48 = t1920 * t1920 * 3.0 - t1920
* t1920 * t1920 * 2.0 ; if ( t2531 <= 2000.0 ) { t1920 = t2285 * 1.0E-5 ; }
else if ( t2531 >= 4000.0 ) { t1920 = t2248 * 1.0E-5 ; } else { t1920 = ( (
1.0 - zc_int48 ) * t2285 + t2248 * zc_int48 ) * 1.0E-5 ; } t3411 = - ( X [
415ULL ] * t1914 ) ; t1914 = t3411 / 0.32 * 0.00031622776601683789 + t1920 ;
t3555 = - t1914 - t1914 * - 0.95 ; t1920 = ( - t2530 - t1914 * - 0.95 ) / (
t3555 == 0.0 ? 1.0E-16 : t3555 ) ; zc_int48 = t1920 * t1920 * 3.0 - t1920 *
t1920 * t1920 * 2.0 ; if ( - t2530 <= t2525 * - 0.95 ) { t1920 = t2530 ; }
else if ( - t2530 >= - t2525 ) { t1920 = t1914 ; } else { t1920 = ( 1.0 -
zc_int48 ) * t2530 + t1914 * zc_int48 ; } t1914 = - pmf_sqrt ( ( ( real_T ) (
M [ 37ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2813 / ( t2522 == 0.0 ? 1.0E-16 : t2522
) / ( X [ 429ULL ] == 0.0 ? 1.0E-16 : X [ 429ULL ] ) ) ) * 0.32 ; zc_int48 =
t2528 * t1914 * 2.9973120849090416 / ( t2801 == 0.0 ? 1.0E-16 : t2801 ) ; if
( t1834 >= 0.0 ) { t2248 = t1914 * 100000.0 ; } else { t2248 = - t1914 *
100000.0 ; } t3555 = - t1919 - t1919 * - 0.95 ; t2285 = ( - intrm_sf_mf_55 -
t1919 * - 0.95 ) / ( t3555 == 0.0 ? 1.0E-16 : t3555 ) ; t2286 = t2248 * 0.01
/ ( t2797 == 0.0 ? 1.0E-16 : t2797 ) ; t2288 = t2538 >= 1.0 ? t2286 : 1.0 ;
t3427 = pmf_log10 ( 6.9 / ( t2288 == 0.0 ? 1.0E-16 : t2288 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t2288 == 0.0 ? 1.0E-16 : t2288
) + 0.00017169489553429715 ) * 3.24 ; t1914 = t1914 * t2248 * ( 1.0 / ( t3427
== 0.0 ? 1.0E-16 : t3427 ) ) * 0.046833001326703774 / ( t2804 == 0.0 ?
1.0E-16 : t2804 ) ; t2248 = ( t2286 - 2000.0 ) / 2000.0 ; t2286 = t2248 *
t2248 * 3.0 - t2248 * t2248 * t2248 * 2.0 ; if ( t2538 <= 2000.0 ) { t2248 =
zc_int48 * 1.0E-5 ; } else if ( t2538 >= 4000.0 ) { t2248 = t1914 * 1.0E-5 ;
} else { t2248 = ( ( 1.0 - t2286 ) * zc_int48 + t1914 * t2286 ) * 1.0E-5 ; }
t3427 = - ( X [ 388ULL ] * t1924 ) ; t1914 = t3427 / 0.32 *
0.00031622776601683789 + t2248 ; t3435 = - t1914 - t1914 * - 0.95 ; t1924 = (
- t2537 - t1914 * - 0.95 ) / ( t3435 == 0.0 ? 1.0E-16 : t3435 ) ; zc_int48 =
t1924 * t1924 * 3.0 - t1924 * t1924 * t1924 * 2.0 ; t1924 = t2285 * t2285 *
3.0 - t2285 * t2285 * t2285 * 2.0 ; if ( - t2537 <= t2535 * - 0.95 ) { t2248
= t2537 ; } else if ( - t2537 >= - t2535 ) { t2248 = t1914 ; } else { t2248 =
( 1.0 - zc_int48 ) * t2537 + t1914 * zc_int48 ; } if ( - intrm_sf_mf_55 <=
zc_int38 * - 0.95 ) { t1914 = intrm_sf_mf_55 ; } else if ( - intrm_sf_mf_55
>= - zc_int38 ) { t1914 = t1919 ; } else { t1914 = ( 1.0 - t1924 ) *
intrm_sf_mf_55 + t1919 * t1924 ; } t3555 = X [ 134ULL ] * zc_int43 ; t1919 =
( ( real_T ) ( M [ 75ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3555 / ( X [ 135ULL ] ==
0.0 ? 1.0E-16 : X [ 135ULL ] ) ) * ( t3555 / ( X [ 135ULL ] == 0.0 ? 1.0E-16
: X [ 135ULL ] ) ) * ( X [ 126ULL ] / 7.8539816339744827E-5 ) * ( X [ 126ULL
] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3571 ; t3569 = X
[ 120ULL ] * t2571 ; zc_int38 = ( ( real_T ) ( M [ 86ULL ] != 0 ) * 2.0 - 1.0
) * ( t3569 / 1.01325 ) * ( t3569 / 1.01325 ) * ( - X [ 126ULL ] /
7.8539816339744827E-5 ) * ( - X [ 126ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2572 ; t1924 = ( X [ 135ULL ] - 1.01325 ) * pmf_sqrt
( ( ( real_T ) ( M [ 97ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2050 / ( t1926 == 0.0
? 1.0E-16 : t1926 ) ) ) * t1972 * 0.64 ; t1926 = ( ( real_T ) ( M [ 86ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t3569 / 1.01325 ) * ( t3569 / 1.01325 ) * ( X [
126ULL ] / 7.8539816339744827E-5 ) * ( X [ 126ULL ] / 7.8539816339744827E-5 )
/ 2.0 * 9.999999999999999E-14 + t2572 ; zc_int48 = pmf_sqrt ( ( ( real_T ) (
M [ 109ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2047 / ( t1975 == 0.0 ? 1.0E-16 :
t1975 ) / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ) * t1972 * 0.64
; t3460 = zc_int48 - zc_int48 * 0.95 ; zc_int43 = ( t1924 - zc_int48 * 0.95 )
/ ( t3460 == 0.0 ? 1.0E-16 : t3460 ) ; t2285 = zc_int43 * zc_int43 * 3.0 -
zc_int43 * zc_int43 * zc_int43 * 2.0 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u <= zc_int49 *
0.95 ) { zc_int43 = t1924 * 100000.0 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u >= zc_int49 )
{ zc_int43 = zc_int48 * 100000.0 ; } else { zc_int43 = ( ( 1.0 - t2285 ) *
t1924 + zc_int48 * t2285 ) * 100000.0 ; } t2285 = ( - t1924 - zc_int48 * 0.95
) / ( t3460 == 0.0 ? 1.0E-16 : t3460 ) ; t2286 = t2285 * t2285 * 3.0 - t2285
* t2285 * t2285 * 2.0 ; if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u <= zc_int49 *
0.95 ) { t2285 = t1924 * 100000.0 ; } else if ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u >= zc_int49 )
{ t2285 = - zc_int48 * 100000.0 ; } else { t2285 = ( ( 1.0 - t2286 ) * t1924
+ - zc_int48 * t2286 ) * 100000.0 ; } t3569 = X [ 166ULL ] * t2092 ; t1924 =
( ( real_T ) ( M [ 153ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3569 / ( X [ 24ULL ] ==
0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t3569 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 :
X [ 24ULL ] ) ) * ( X [ 183ULL ] / 7.8539816339744827E-5 ) * ( X [ 183ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1974 ; t3516 = X [
172ULL ] * zc_int50 ; zc_int48 = ( ( real_T ) ( M [ 164ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3516 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t3516
/ ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t1992 /
7.8539816339744827E-5 ) * ( t1992 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2588 ; t2092 = ( ( real_T ) ( M [ 164ULL ] != 0 ) *
2.0 - 1.0 ) * ( t3516 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * (
t3516 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( - t1992 /
7.8539816339744827E-5 ) * ( - t1992 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2588 ; t3516 = X [ 200ULL ] * t2009 ; t2286 = ( (
real_T ) ( M [ 169ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3516 / ( X [ 24ULL ] == 0.0
? 1.0E-16 : X [ 24ULL ] ) ) * ( t3516 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) ) * ( t1992 / 7.8539816339744827E-5 ) * ( t1992 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + zc_int58 ; t3516 = X
[ 197ULL ] * t2009 ; zc_int58 = ( ( real_T ) ( M [ 170ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3516 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * (
t3516 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t1992 /
7.8539816339744827E-5 ) * ( t1992 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2011 ; t3516 = X [ 199ULL ] * t2009 ; t2011 = ( (
real_T ) ( M [ 171ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3516 / ( X [ 116ULL ] ==
0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t3516 / ( X [ 116ULL ] == 0.0 ? 1.0E-16
: X [ 116ULL ] ) ) * ( - t1992 / 7.8539816339744827E-5 ) * ( - t1992 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2014 ; t3516 = X [
198ULL ] * t2009 ; if ( t1992 >= 0.0 ) { t2013 = ( t2286 - zc_int58 ) * t1992
; } else { t2013 = - ( ( t2011 - ( ( ( real_T ) ( M [ 172ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3516 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t3516
/ ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( - t1992 /
7.8539816339744827E-5 ) * ( - t1992 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2013 ) ) * t1992 ) ; } t3516 = X [ 204ULL ] *
piece173 ; t3591 = X [ 219ULL ] * piece118 ; zc_int58 = ( ( real_T ) ( M [
175ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3591 / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X
[ 220ULL ] ) ) * ( t3591 / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) )
* ( - X [ 213ULL ] / 7.8539816339744827E-5 ) * ( - X [ 213ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + piece2 ; t2014 = ( (
real_T ) ( M [ 153ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3569 / ( X [ 24ULL ] == 0.0
? 1.0E-16 : X [ 24ULL ] ) ) * ( t3569 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [
24ULL ] ) ) * ( - X [ 183ULL ] / 7.8539816339744827E-5 ) * ( - X [ 183ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1974 ; t1974 = ( (
real_T ) ( M [ 75ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3555 / ( X [ 135ULL ] == 0.0
? 1.0E-16 : X [ 135ULL ] ) ) * ( t3555 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X
[ 135ULL ] ) ) * ( - X [ 126ULL ] / 7.8539816339744827E-5 ) * ( - X [ 126ULL
] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t3571 ; piece118
= pmf_sqrt ( t2044 * t2044 * 9.999999999999999E-14 + ( ( real_T ) ( M [
176ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 223ULL ] * t2045 * t2043 * 1.0E-9 ) ;
t2044 = pmf_sqrt ( t124 * t124 * 9.999999999999999E-14 + ( ( real_T ) ( M [
177ULL ] != 0 ) * 2.0 - 1.0 ) * X [ 227ULL ] * t3603 * t2043 * 1.0E-9 ) ;
t2045 = - pmf_sqrt ( ( ( real_T ) ( M [ 179ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2073 / ( t2043 == 0.0 ? 1.0E-16 : t2043 ) / ( X [ 223ULL ] == 0.0 ? 1.0E-16
: X [ 223ULL ] ) ) ) * 7.8539816339744827E-5 ; t124 = t2054 * t2045 * 35.2 /
( t2081 == 0.0 ? 1.0E-16 : t2081 ) ; if ( t2055 >= 0.0 ) { t3603 = t2045 *
100000.0 ; } else { t3603 = - t2045 * 100000.0 ; } t2055 = t3603 * 0.01 / (
t2077 == 0.0 ? 1.0E-16 : t2077 ) ; piece173 = t2057 >= 1.0 ? t2055 : 1.0 ;
t3555 = pmf_log10 ( 6.9 / ( piece173 == 0.0 ? 1.0E-16 : piece173 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( piece173 == 0.0 ? 1.0E-16 :
piece173 ) + 0.00017169489553429715 ) * 3.24 ; t2045 = t2045 * t3603 * ( 1.0
/ ( t3555 == 0.0 ? 1.0E-16 : t3555 ) ) * 0.55 / ( t2084 == 0.0 ? 1.0E-16 :
t2084 ) ; t2055 = ( t2055 - 2000.0 ) / 2000.0 ; t3603 = t2055 * t2055 * 3.0 -
t2055 * t2055 * t2055 * 2.0 ; if ( t2057 <= 2000.0 ) { t2055 = t124 * 1.0E-5
; } else if ( t2057 >= 4000.0 ) { t2055 = t2045 * 1.0E-5 ; } else { t2055 = (
( 1.0 - t3603 ) * t124 + t2045 * t3603 ) * 1.0E-5 ; } t3555 = - ( X [ 213ULL
] * piece118 ) ; t2045 = t3555 / 7.8539816339744827E-5 *
0.00031622776601683789 + t2055 ; t3570 = - t2045 - t2045 * - 0.95 ; t2055 = (
- t2056 - t2045 * - 0.95 ) / ( t3570 == 0.0 ? 1.0E-16 : t3570 ) ; t2057 =
t2055 * t2055 * 3.0 - t2055 * t2055 * t2055 * 2.0 ; if ( - t2056 <= zc_int91
* - 0.95 ) { t2055 = t2056 ; } else if ( - t2056 >= - zc_int91 ) { t2055 =
t2045 ; } else { t2055 = ( 1.0 - t2057 ) * t2056 + t2045 * t2057 ; } t2045 =
- pmf_sqrt ( ( ( real_T ) ( M [ 180ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2093 / (
t2043 == 0.0 ? 1.0E-16 : t2043 ) / ( X [ 227ULL ] == 0.0 ? 1.0E-16 : X [
227ULL ] ) ) ) * 7.8539816339744827E-5 ; zc_int91 = t2054 * t2045 * 35.2 / (
t2081 == 0.0 ? 1.0E-16 : t2081 ) ; if ( t2064 >= 0.0 ) { t2054 = t2045 *
100000.0 ; } else { t2054 = - t2045 * 100000.0 ; } t2057 = t2054 * 0.01 / (
t2077 == 0.0 ? 1.0E-16 : t2077 ) ; t124 = piece96 >= 1.0 ? t2057 : 1.0 ;
t3569 = pmf_log10 ( 6.9 / ( t124 == 0.0 ? 1.0E-16 : t124 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t124 == 0.0 ? 1.0E-16 : t124 )
+ 0.00017169489553429715 ) * 3.24 ; t2045 = t2045 * t2054 * ( 1.0 / ( t3569
== 0.0 ? 1.0E-16 : t3569 ) ) * 0.55 / ( t2084 == 0.0 ? 1.0E-16 : t2084 ) ;
t2054 = ( t2057 - 2000.0 ) / 2000.0 ; t2057 = t2054 * t2054 * 3.0 - t2054 *
t2054 * t2054 * 2.0 ; if ( piece96 <= 2000.0 ) { t2054 = zc_int91 * 1.0E-5 ;
} else if ( piece96 >= 4000.0 ) { t2054 = t2045 * 1.0E-5 ; } else { t2054 = (
( 1.0 - t2057 ) * zc_int91 + t2045 * t2057 ) * 1.0E-5 ; } t3569 = - ( X [
183ULL ] * t2044 ) ; t2044 = t3569 / 7.8539816339744827E-5 *
0.00031622776601683789 + t2054 ; t3571 = - t2044 - t2044 * - 0.95 ; t2045 = (
- t2065 - t2044 * - 0.95 ) / ( t3571 == 0.0 ? 1.0E-16 : t3571 ) ; zc_int91 =
t2045 * t2045 * 3.0 - t2045 * t2045 * t2045 * 2.0 ; if ( - t2065 <= piece20 *
- 0.95 ) { t2045 = t2065 ; } else if ( - t2065 >= - piece20 ) { t2045 = t2044
; } else { t2045 = ( 1.0 - zc_int91 ) * t2065 + t2044 * zc_int91 ; } zc_int91
= ( ( real_T ) ( M [ 175ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3591 / ( X [ 220ULL ]
== 0.0 ? 1.0E-16 : X [ 220ULL ] ) ) * ( t3591 / ( X [ 220ULL ] == 0.0 ?
1.0E-16 : X [ 220ULL ] ) ) * ( X [ 213ULL ] / 7.8539816339744827E-5 ) * ( X [
213ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + piece2 ;
piece2 = ( X [ 28ULL ] - X [ 220ULL ] ) * pmf_sqrt ( ( ( real_T ) ( M [
184ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2190 / ( t2067 == 0.0 ? 1.0E-16 : t2067 )
) ) * t2110 * 0.64 ; t2054 = pmf_sqrt ( ( ( real_T ) ( M [ 185ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2187 / ( t2113 == 0.0 ? 1.0E-16 : t2113 ) / ( X [ 237ULL ]
== 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) ) * t2110 * 0.64 ; t3591 = t2054 - t2054
* 0.95 ; t2057 = ( piece2 - t2054 * 0.95 ) / ( t3591 == 0.0 ? 1.0E-16 : t3591
) ; t124 = t2057 * t2057 * 3.0 - t2057 * t2057 * t2057 * 2.0 ; if ( t2114 <=
t2115 * 0.95 ) { t2057 = piece2 * 100000.0 ; } else if ( t2114 >= t2115 ) {
t2057 = t2054 * 100000.0 ; } else { t2057 = ( ( 1.0 - t124 ) * piece2 + t2054
* t124 ) * 100000.0 ; } t124 = ( - piece2 - t2054 * 0.95 ) / ( t3591 == 0.0 ?
1.0E-16 : t3591 ) ; t3603 = t124 * t124 * 3.0 - t124 * t124 * t124 * 2.0 ; if
( - t2114 <= t2115 * 0.95 ) { t124 = piece2 * 100000.0 ; } else if ( - t2114
>= t2115 ) { t124 = - t2054 * 100000.0 ; } else { t124 = ( ( 1.0 - t3603 ) *
piece2 + - t2054 * t3603 ) * 100000.0 ; } piece2 = - ( piece14 * 100000.0 ) ;
piece20 = - ( t3633 * 100000.0 ) ; t3633 = - ( t1985 * 100000.0 ) ; t1985 = -
( t1988 * 100000.0 ) ; t1988 = - ( t2021 * 100000.0 ) ; t2021 = - ( t2029 *
100000.0 ) ; t2029 = - ( t2058 * 100000.0 ) ; t2064 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 * 100000.0 )
; piece96 = - ( t2141 * 100000.0 ) ; t2067 = - ( piece154 * 100000.0 ) ;
piece118 = - ( t2245 * 100000.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 = - ( t2289 *
100000.0 ) ; t2141 = - ( t2305 * 100000.0 ) ; piece154 = - ( t3596 * 100000.0
) ; piece173 = - ( t4352 * 100000.0 ) ; t2289 = - ( t2471 * 100000.0 ) ;
t2291 = - ( t2532 * 100000.0 ) ; piece231 = pmf_log ( t1925 / ( piece233 ==
0.0 ? 1.0E-16 : piece233 ) ) * 0.013923456218788726 ; piece233 = ( ( piece231
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra53 ) -
piece255 * 0.01 ) - t4160 ; t3928 = t4246 * 241812.2160511087 /
0.0020158806832745466 * 0.001 - t1818 * 0.001 ; t1791 [ 0 ] = 293.15 ;
tlu2_linear_linear_prelookup ( & mv_efOut . mField0 [ 0ULL ] , & mv_efOut .
mField1 [ 0ULL ] , & mv_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t1791 [ 0ULL ] , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ;
t106 = mv_efOut ; tlu2_1d_linear_linear_value ( & nv_efOut [ 0ULL ] , & t106
. mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField16 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1790 [ 0 ] =
nv_efOut [ 0 ] ; tlu2_1d_linear_linear_value ( & ov_efOut [ 0ULL ] , & t106 .
mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField4 , & t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1789 [ 0 ] =
ov_efOut [ 0 ] ; t1799 [ 0ULL ] = t106 . mField0 [ 0ULL ] ; t1799 [ 1ULL ] =
t106 . mField0 [ 1ULL ] ; t1320 [ 0ULL ] = t106 . mField2 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & pv_efOut [ 0ULL ] , & t1799 [ 0ULL ] , &
t1320 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t1323 [
0ULL ] , & t139 [ 0ULL ] ) ; t1791 [ 0 ] = pv_efOut [ 0 ] ; t1818 = ( ( -
t1833 - t1902 ) * t1790 [ 0ULL ] + t1789 [ 0ULL ] * t1833 ) + t1791 [ 0ULL ]
* t1902 ; piece255 = ( ( - t2121 - t2122 ) * 296.802103844292 + t2121 *
461.523 ) + t2122 * 259.836612622973 ; tlu2_1d_linear_linear_value ( &
qv_efOut [ 0ULL ] , & t106 . mField0 [ 0ULL ] , & t106 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t1323 [ 0ULL ] , & t139 [ 0ULL
] ) ; t1325 [ 0 ] = qv_efOut [ 0 ] ; piece231 = ( ( - t2121 - t2122 ) * t1790
[ 0ULL ] + t1789 [ 0ULL ] * t2121 ) + t1325 [ 0ULL ] * t2122 ; t2305 = ( ( -
t2126 - t2127 ) * 296.802103844292 + t2126 * 461.523 ) + t2127 *
259.836612622973 ; t2127 = ( ( t2086 - pmf_log ( X [ 35ULL ] * 100000.0 ) *
t2128 ) - piece267 ) + t2305 * 11.526088451496509 ; piece267 = ( ( t2573 -
t2305 * 11.526088451496509 ) - intrm_sf_mf_522 ) + pmf_log ( X [ 35ULL ] *
100000.0 ) * t2128 ; t2128 = ( ( - t2377 - t2378 ) * 296.802103844292 + t2377
* 461.523 ) + t2378 * 259.836612622973 ; t2305 = ( ( - t2377 - t2378 ) *
t1790 [ 0ULL ] + t1789 [ 0ULL ] * t2377 ) + t1325 [ 0ULL ] * t2378 ; t1325 [
0ULL ] = X [ 0ULL ] * 9.2592592592592591E-6 ; t1320 [ 0 ] = 6ULL ;
tlu2_linear_linear_prelookup ( & rv_efOut . mField0 [ 0ULL ] , & rv_efOut .
mField1 [ 0ULL ] , & rv_efOut . mField2 [ 0ULL ] , & nonscalar34 [ 0ULL ] , &
t1325 [ 0ULL ] , & t1320 [ 0ULL ] , & t139 [ 0ULL ] ) ; t95 = rv_efOut ;
t1325 [ 0 ] = 298.15 ; t1323 [ 0 ] = 7ULL ; tlu2_linear_linear_prelookup ( &
sv_efOut . mField0 [ 0ULL ] , & sv_efOut . mField1 [ 0ULL ] , & sv_efOut .
mField2 [ 0ULL ] , & nonscalar35 [ 0ULL ] , & t1325 [ 0ULL ] , & t1323 [ 0ULL
] , & t139 [ 0ULL ] ) ; t89 = sv_efOut ; t1325 [ 0ULL ] = X [ 287ULL ] ;
t1784 [ 0 ] = 5ULL ; tlu2_linear_nearest_prelookup ( & tv_efOut . mField0 [
0ULL ] , & tv_efOut . mField1 [ 0ULL ] , & tv_efOut . mField2 [ 0ULL ] , &
nonscalar38 [ 0ULL ] , & t1325 [ 0ULL ] , & t1784 [ 0ULL ] , & t139 [ 0ULL ]
) ; t55 = tv_efOut ; t1325 [ 0ULL ] = U_idx_4 * 376.99111843077515 *
0.99999999999999978 / 0.99999999999999978 * 0.99999999999999978 /
0.99999999999999978 ; t1329 [ 0 ] = 3ULL ; tlu2_linear_nearest_prelookup ( &
uv_efOut . mField0 [ 0ULL ] , & uv_efOut . mField1 [ 0ULL ] , & uv_efOut .
mField2 [ 0ULL ] , & nonscalar39 [ 0ULL ] , & t1325 [ 0ULL ] , & t1329 [ 0ULL
] , & t139 [ 0ULL ] ) ; t68 = uv_efOut ; if ( X [ 56ULL ] != X [ 56ULL ] ) {
t4352 = X [ 56ULL ] ; } else if ( X [ 56ULL ] > 0.0 ) { t4352 = 1.0 ; } else
{ t4352 = X [ 56ULL ] < 0.0 ? - 1.0 : 0.0 ; } t1325 [ 0ULL ] = t4352 * X [
55ULL ] ; tlu2_linear_nearest_prelookup ( & vv_efOut . mField0 [ 0ULL ] , &
vv_efOut . mField1 [ 0ULL ] , & vv_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField21 , & t1325 [ 0ULL ] , & t837 [ 0ULL
] , & t139 [ 0ULL ] ) ; t81 = vv_efOut ; U_idx_3 = - ( ( X [ 61ULL ] * 0.1 +
650.0 ) * t110 + ( 1.0 - t110 ) * X [ 61ULL ] * 1000.0 ) ; t3596 = M [ 108ULL
] != 0 ? X [ 59ULL ] : 0.9 ; t110 = - ( ( X [ 63ULL ] - X [ 61ULL ] * X [
62ULL ] * 0.001 ) * t4163 / ( t3596 == 0.0 ? 1.0E-16 : t3596 ) * 1000.0 + (
1.0 - t4163 ) * X [ 59ULL ] / 1000.0 ) ; if ( M [ 168ULL ] != 0 ) { t4163 = (
( t3925 - X [ 64ULL ] ) - 0.799999992 ) * 1000.0 ; } else { t4163 = ( t3925 -
X [ 64ULL ] ) * 1.0E-5 ; } if ( M [ 178ULL ] != 0 ) { U_idx_0 = t3925 - ( X [
67ULL ] - t3913 ) * t2566 * 0.001 ; } else { U_idx_0 = ( X [ 62ULL ] - X [
64ULL ] ) - ( t3913 * 0.001 + X [ 62ULL ] ) * t2566 ; } if ( M [ 187ULL ] !=
0 ) { t3925 = - X [ 66ULL ] - ( X [ 99ULL ] - 0.59999999819999994 ) / 0.3 ; }
else { t3925 = - X [ 66ULL ] - X [ 99ULL ] * 1.0E-8 ; } if ( t1905 >= 0.0 ) {
t2327 = ( X [ 140ULL ] - X [ 20ULL ] ) - t1916 ; } else { t2327 = ( X [
140ULL ] - X [ 20ULL ] ) - t2244 ; } if ( - X [ 126ULL ] >= 0.0 ) { t1916 = (
X [ 144ULL ] - X [ 20ULL ] ) - intrm_sf_mf_55 ; } else { t1916 = ( X [ 144ULL
] - X [ 20ULL ] ) - t1914 ; } if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u >= 0.0 ) {
t1914 = X [ 126ULL ] - zc_int43 ; } else { t1914 = X [ 126ULL ] - t2285 ; }
if ( - X [ 213ULL ] >= 0.0 ) { intrm_sf_mf_55 = ( X [ 224ULL ] - X [ 32ULL ]
) - t2056 ; } else { intrm_sf_mf_55 = ( X [ 224ULL ] - X [ 32ULL ] ) - t2055
; } if ( - X [ 183ULL ] >= 0.0 ) { zc_int43 = ( X [ 228ULL ] - X [ 32ULL ] )
- t2065 ; } else { zc_int43 = ( X [ 228ULL ] - X [ 32ULL ] ) - t2045 ; } if (
t2114 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u = - X [
213ULL ] - t2057 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u = - X [
213ULL ] - t124 ; } if ( - X [ 192ULL ] >= 0.0 ) { t2045 = ( X [ 303ULL ] - X
[ 42ULL ] ) - t2174 ; } else { t2045 = ( X [ 303ULL ] - X [ 42ULL ] ) - t133
; } if ( X [ 304ULL ] >= 0.0 ) { t2055 = ( X [ 306ULL ] - X [ 42ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_unchoke ; } else {
t2055 = ( X [ 306ULL ] - X [ 42ULL ] ) - t129 ; } if ( - X [ 304ULL ] >= 0.0
) { t2056 = ( X [ 317ULL ] - X [ 43ULL ] ) - t2243 ; } else { t2056 = ( X [
317ULL ] - X [ 43ULL ] ) - t2179 ; } if ( X [ 318ULL ] >= 0.0 ) { t2057 = ( X
[ 320ULL ] - X [ 43ULL ] ) - t2250 ; } else { t2057 = ( X [ 320ULL ] - X [
43ULL ] ) - t131 ; } if ( - X [ 318ULL ] >= 0.0 ) { t124 = ( X [ 331ULL ] - X
[ 44ULL ] ) - t2287 ; } else { t124 = ( X [ 331ULL ] - X [ 44ULL ] ) - t1910
; } if ( X [ 138ULL ] >= 0.0 ) { t1910 = ( X [ 333ULL ] - X [ 44ULL ] ) -
intrm_sf_mf_863 ; } else { t1910 = ( X [ 333ULL ] - X [ 44ULL ] ) - zc_int208
; } if ( - X [ 281ULL ] >= 0.0 ) { t2065 = ( X [ 352ULL ] - X [ 48ULL ] ) -
t2336 ; } else { t2065 = ( X [ 352ULL ] - X [ 48ULL ] ) - zc_int227 ; } if (
X [ 353ULL ] >= 0.0 ) { zc_int227 = ( X [ 355ULL ] - X [ 48ULL ] ) - t2343 ;
} else { zc_int227 = ( X [ 355ULL ] - X [ 48ULL ] ) - zc_int231 ; } if ( X [
388ULL ] >= 0.0 ) { t2114 = ( X [ 390ULL ] - X [ 50ULL ] ) - t2401 ; } else {
t2114 = ( X [ 390ULL ] - X [ 50ULL ] ) - zc_int260 ; } if ( - X [ 376ULL ] >=
0.0 ) { t129 = ( X [ 394ULL ] - X [ 50ULL ] ) - t2415 ; } else { t129 = ( X [
394ULL ] - X [ 50ULL ] ) - t2241 ; } if ( t2453 >= 0.0 ) { zc_int208 = X [
376ULL ] - zc_int281 ; } else { zc_int208 = X [ 376ULL ] - zc_int286 ; } if (
- X [ 353ULL ] >= 0.0 ) { t131 = ( X [ 414ULL ] - X [ 53ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_AI_unchoke ; } else {
t131 = ( X [ 414ULL ] - X [ 53ULL ] ) - t2281 ; } if ( X [ 415ULL ] >= 0.0 )
{ t2174 = ( X [ 417ULL ] - X [ 53ULL ] ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke ; } else {
t2174 = ( X [ 417ULL ] - X [ 53ULL ] ) - t2246 ; } if ( - X [ 415ULL ] >= 0.0
) { t133 = ( X [ 428ULL ] - X [ 54ULL ] ) - t2530 ; } else { t133 = ( X [
428ULL ] - X [ 54ULL ] ) - t1920 ; } if ( - X [ 388ULL ] >= 0.0 ) { t1920 = (
X [ 430ULL ] - X [ 54ULL ] ) - t2537 ; } else { t1920 = ( X [ 430ULL ] - X [
54ULL ] ) - t2248 ; } if ( M [ 41ULL ] != 0 ) { t2179 = X [ 437ULL ] - X [
439ULL ] ; } else if ( M [ 43ULL ] != 0 ) { t2179 = X [ 437ULL ] - ( - X [
439ULL ] ) ; } else { t2179 = X [ 437ULL ] - X [ 56ULL ] ; }
tlu2_2d_linear_linear_value ( & wv_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t1320 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1325 [ 0 ] = wv_efOut [ 0 ] ;
tlu2_2d_linear_linear_value ( & xv_efOut [ 0ULL ] , & t95 . mField0 [ 0ULL ]
, & t95 . mField2 [ 0ULL ] , & t89 . mField0 [ 0ULL ] , & t89 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField27 , & t1320 [ 0ULL ] , &
t1323 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1789 [ 0 ] = xv_efOut [ 0 ] ;
tlu2_2d_linear_nearest_value ( & yv_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , & t68 . mField0 [ 0ULL ] , & t68 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField28 , & t1784 [ 0ULL ] , &
t1329 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1790 [ 0 ] = yv_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & aw_efOut [ 0ULL ] , & t81 . mField0 [ 0ULL ]
, & t81 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField29 ,
& t837 [ 0ULL ] , & t139 [ 0ULL ] ) ; t1791 [ 0 ] = aw_efOut [ 0 ] ; t1345 [
0ULL ] = - 0.0 ; t1345 [ 1ULL ] = - X [ 57ULL ] * ( real_T ) ( X [ 57ULL ] <
0.0 ) / 108000.0 ; t1345 [ 2ULL ] = 0.0 ; t1345 [ 3ULL ] = - 0.0 ; t1345 [
4ULL ] = - 0.0 ; t1345 [ 5ULL ] = - 0.0 ; t1345 [ 6ULL ] = - 0.0 ; t1345 [
7ULL ] = - ( ( ( ( t1969 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * X [ 21ULL ]
) * ( - 164.72089615570803 / ( t1908 == 0.0 ? 1.0E-16 : t1908 ) ) + ( t1968 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * X [ 22ULL ]
) * ( - 3827.6794129126583 / ( t1908 == 0.0 ? 1.0E-16 : t1908 ) ) ) - piece2
) / 12.896402563644669 ) ; t1345 [ 8ULL ] = - ( - 8.1984652990144453E-5 + ( (
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I - t1971 ) * (
t1969 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * X [
21ULL ] ) + ( t1966 - t1971 ) * ( t1968 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * X [ 22ULL ]
) ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * (
t1961 - X [ 19ULL ] * t1908 * 0.001 ) ) - piece20 ) / 2246.65922904024 ) ;
t1345 [ 9ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * X [ 21ULL ]
- piece2 ) ; t1345 [ 10ULL ] = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_mdot_total * X [ 22ULL ]
) ; t1345 [ 11ULL ] = - ( ( ( ( t2004 - t2003 * X [ 26ULL ] ) * ( -
164.72089615570803 / ( t1984 == 0.0 ? 1.0E-16 : t1984 ) ) + ( t2002 - t2003 *
X [ 25ULL ] ) * ( - 3827.6794129126583 / ( t1984 == 0.0 ? 1.0E-16 : t1984 ) )
) - t3633 ) / 12.896402563644669 ) ; t1345 [ 12ULL ] = - ( ( ( ( ( t2001 -
t2007 ) * ( t2004 - t2003 * X [ 26ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Constant_Volume_Cha28 - t2007 ) * (
t2002 - t2003 * X [ 25ULL ] ) ) + t2003 * ( t2005 - X [ 23ULL ] * t1984 *
0.001 ) ) - t1985 ) / 2246.65922904024 ) ; t1345 [ 13ULL ] = - ( t2003 * X [
26ULL ] - t3633 ) ; t1345 [ 14ULL ] = - ( t2003 * X [ 25ULL ] ) ; t1345 [
15ULL ] = - ( ( ( ( t2038 - t2037 * X [ 30ULL ] ) * ( - 164.72089615570803 /
( t2019 == 0.0 ? 1.0E-16 : t2019 ) ) + ( X [ 214ULL ] - t2037 * X [ 29ULL ] )
* ( - 3827.6794129126583 / ( t2019 == 0.0 ? 1.0E-16 : t2019 ) ) ) - t1988 ) /
12.896402563644669 ) ; t1345 [ 16ULL ] = - ( ( ( ( ( t2035 - t2041 ) * (
t2038 - t2037 * X [ 30ULL ] ) + ( t2034 - t2041 ) * ( X [ 214ULL ] - t2037 *
X [ 29ULL ] ) ) + t2037 * ( t2039 - X [ 27ULL ] * t2019 * 0.001 ) ) - t2021 )
/ 2246.65922904024 ) ; t1345 [ 17ULL ] = - ( t2037 * X [ 30ULL ] - t1988 ) ;
t1345 [ 18ULL ] = - ( t2037 * X [ 29ULL ] ) ; t1345 [ 19ULL ] = - ( ( ( (
t2106 - t2105 * X [ 33ULL ] ) * ( - 164.72089615570803 / ( t2043 == 0.0 ?
1.0E-16 : t2043 ) ) + ( intrm_sf_mf_384 - t2105 * X [ 34ULL ] ) * ( -
3827.6794129126583 / ( t2043 == 0.0 ? 1.0E-16 : t2043 ) ) ) - t2029 ) /
12.896402563644669 ) ; t1345 [ 20ULL ] = - ( ( ( ( ( t2103 - t2109 ) * (
t2106 - t2105 * X [ 33ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_h_a_I - t2109 ) * (
intrm_sf_mf_384 - t2105 * X [ 34ULL ] ) ) + t2105 * ( t2107 - X [ 31ULL ] *
t2043 * 0.001 ) ) - ( - ( t2072 * 100000.0 ) ) ) / 2246.65922904024 ) ; t1345
[ 21ULL ] = - ( t2105 * X [ 33ULL ] - t2029 ) ; t1345 [ 22ULL ] = - ( t2105 *
X [ 34ULL ] ) ; t1345 [ 23ULL ] = - ( ( ( t2150 - t2148 * X [ 38ULL ] ) * ( -
164.72089615570803 / ( t2138 == 0.0 ? 1.0E-16 : t2138 ) ) + ( t2147 - t2148 *
X [ 37ULL ] ) * ( 36.965491221318985 / ( t2138 == 0.0 ? 1.0E-16 : t2138 ) ) )
- t2064 ) ; t1345 [ 24ULL ] = - ( ( ( ( ( t2146 - t2153 ) * ( t2150 - t2148 *
X [ 38ULL ] ) + ( t2145 - t2153 ) * ( t2147 - t2148 * X [ 37ULL ] ) ) + t2148
* ( t2151 - X [ 36ULL ] * t2138 * 0.001 ) ) - piece96 ) / 2172.7681408465714
) ; t1345 [ 25ULL ] = - ( t2148 * X [ 38ULL ] - t2064 ) ; t1345 [ 26ULL ] = -
( t2148 * X [ 37ULL ] ) ; t1345 [ 27ULL ] = - ( ( ( ( t2221 - t2220 * X [
41ULL ] ) * ( - 164.72089615570803 / ( t2157 == 0.0 ? 1.0E-16 : t2157 ) ) + (
t2218 - t2220 * X [ 40ULL ] ) * ( - 3827.6794129126583 / ( t2157 == 0.0 ?
1.0E-16 : t2157 ) ) ) - t2067 ) / 12.896402563644669 ) ; t1345 [ 28ULL ] = -
( ( ( ( ( t2217 - t2229 ) * ( t2221 - t2220 * X [ 41ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_u_g_I - t2229 ) * ( t2218 -
t2220 * X [ 40ULL ] ) ) + t2220 * ( t2226 - X [ 39ULL ] * t2157 * 0.001 ) ) -
( - ( piece170 * 100000.0 ) ) ) / 2246.65922904024 ) ; t1345 [ 29ULL ] = - (
t2220 * X [ 41ULL ] - t2067 ) ; t1345 [ 30ULL ] = - ( t2220 * X [ 40ULL ] ) ;
t1345 [ 31ULL ] = - ( ( ( ( t2273 - t2272 * X [ 8ULL ] ) * ( -
164.72089615570803 / ( t2233 == 0.0 ? 1.0E-16 : t2233 ) ) + ( t2271 - t2272 *
X [ 7ULL ] ) * ( - 3827.6794129126583 / ( t2233 == 0.0 ? 1.0E-16 : t2233 ) )
) - piece118 ) / 12.896402563644669 ) ; t1345 [ 32ULL ] = - ( ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_w_I - t2276 ) * ( t2273 -
t2272 * X [ 8ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - t2276 ) * ( t2271 -
t2272 * X [ 7ULL ] ) ) + t2272 * ( t2274 - X [ 6ULL ] * t2233 * 0.001 ) ) - (
- ( t2255 * 100000.0 ) ) ) / 2246.65922904024 ) ; t1345 [ 33ULL ] = - ( t2272
* X [ 8ULL ] - piece118 ) ; t1345 [ 34ULL ] = - ( t2272 * X [ 7ULL ] ) ;
t1345 [ 35ULL ] = - ( ( ( ( t2314 - t2303 * X [ 11ULL ] ) * ( -
164.72089615570803 / ( t2278 == 0.0 ? 1.0E-16 : t2278 ) ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total - t2303 * X [
10ULL ] ) * ( - 3827.6794129126583 / ( t2278 == 0.0 ? 1.0E-16 : t2278 ) ) ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 ) /
13.896402563644669 ) ; t1345 [ 36ULL ] = - ( ( ( ( ( t2282 - t2321 ) * (
t2314 - t2303 * X [ 11ULL ] ) + ( t2264 - t2321 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_mdot_g_total - t2303 * X [
10ULL ] ) ) + t2303 * ( t2315 - X [ 9ULL ] * t2278 * 0.001 ) ) - t2141 ) /
2448.8207083326588 ) ; t1345 [ 37ULL ] = - ( t2303 * X [ 11ULL ] -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_md2 ) ; t1345 [
38ULL ] = - ( t2303 * X [ 10ULL ] ) ; t1345 [ 39ULL ] = - ( ( ( t2370 - t2369
* X [ 47ULL ] ) * ( - 164.72089615570803 / ( t2325 == 0.0 ? 1.0E-16 : t2325 )
) + ( t2368 - t2369 * X [ 46ULL ] ) * ( 36.965491221318985 / ( t2325 == 0.0 ?
1.0E-16 : t2325 ) ) ) - piece154 ) ; t1345 [ 40ULL ] = - ( ( ( ( ( t2367 -
t2373 ) * ( t2370 - t2369 * X [ 47ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_u_g_I - t2373 ) * ( t2368 -
t2369 * X [ 46ULL ] ) ) + t2369 * ( t2371 - X [ 45ULL ] * t2325 * 0.001 ) ) -
( - ( t3597 * 100000.0 ) ) ) / 2172.7681408465714 ) ; t1345 [ 41ULL ] = - (
t2369 * X [ 47ULL ] - piece154 ) ; t1345 [ 42ULL ] = - ( t2369 * X [ 46ULL ]
) ; t1345 [ 43ULL ] = - ( ( ( t2445 - t2443 * X [ 51ULL ] ) * ( -
164.72089615570803 / ( t2384 == 0.0 ? 1.0E-16 : t2384 ) ) + ( t2442 - t2443 *
X [ 52ULL ] ) * ( 36.965491221318985 / ( t2384 == 0.0 ? 1.0E-16 : t2384 ) ) )
- piece173 ) ; t1345 [ 44ULL ] = - ( - 0.00042386385785324375 + ( ( ( ( t2441
- t2448 ) * ( t2445 - t2443 * X [ 51ULL ] ) + ( t2440 - t2448 ) * ( t2442 -
t2443 * X [ 52ULL ] ) ) + t2443 * ( t2446 - X [ 49ULL ] * t2384 * 0.001 ) ) -
( - ( t2422 * 100000.0 ) ) ) / 2172.7681408465714 ) ; t1345 [ 45ULL ] = - (
t2443 * X [ 51ULL ] - piece173 ) ; t1345 [ 46ULL ] = - ( t2443 * X [ 52ULL ]
) ; t1345 [ 47ULL ] = - ( ( ( t2517 - t2516 * X [ 14ULL ] ) * ( -
164.72089615570803 / ( t2460 == 0.0 ? 1.0E-16 : t2460 ) ) + ( t2515 - t2516 *
X [ 13ULL ] ) * ( 36.965491221318985 / ( t2460 == 0.0 ? 1.0E-16 : t2460 ) ) )
- t2289 ) ; t1345 [ 48ULL ] = - ( ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_w_I - t2520 ) * ( t2517 -
t2516 * X [ 14ULL ] ) + (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_u_g_I - t2520 ) * ( t2515 -
t2516 * X [ 13ULL ] ) ) + t2516 * ( t2518 - X [ 12ULL ] * t2460 * 0.001 ) ) -
( - ( t2487 * 100000.0 ) ) ) / 2172.7681408465714 ) ; t1345 [ 49ULL ] = - (
t2516 * X [ 14ULL ] - t2289 ) ; t1345 [ 50ULL ] = - ( t2516 * X [ 13ULL ] ) ;
t1345 [ 51ULL ] = - ( ( ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total - t2541 * X [
17ULL ] ) * ( - 164.72089615570803 / ( t2522 == 0.0 ? 1.0E-16 : t2522 ) ) + (
t2527 - t2541 * X [ 16ULL ] ) * ( 36.965491221318985 / ( t2522 == 0.0 ?
1.0E-16 : t2522 ) ) ) - t2291 ) / 1.5549856083302016 ) ; t1345 [ 52ULL ] = -
( ( ( ( ( t2526 - t2550 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_mdot_w_total - t2541 * X [
17ULL ] ) + ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_u_g_I -
t2550 ) * ( t2527 - t2541 * X [ 16ULL ] ) ) + t2541 * ( t2548 - X [ 15ULL ] *
t2522 * 0.001 ) ) - ( - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Phi_w_conden * 100000.0 )
) ) / 2374.9296201389902 ) ; t1345 [ 53ULL ] = - ( t2541 * X [ 17ULL ] -
t2291 ) ; t1345 [ 54ULL ] = - ( t2541 * X [ 16ULL ] ) ; t1345 [ 55ULL ] = -
0.0 ; t1345 [ 56ULL ] = - 0.0 ; U_idx_2 = - t1325 [ 0ULL ] ; t1345 [ 57ULL ]
= U_idx_2 / 285.83999999999992 ; t1345 [ 58ULL ] = - 0.0 - ( X [ 57ULL ] * (
M [ 0ULL ] != 0 ? 4.03416E-7 : X [ 60ULL ] ) + U_idx_10 ) ; t1345 [ 59ULL ] =
- t1789 [ 0ULL ] ; t1345 [ 60ULL ] = U_idx_3 / 1000.0 ; t1345 [ 61ULL ] =
t110 ; t1345 [ 62ULL ] = - ( X [ 61ULL ] * X [ 61ULL ] *
0.00010037240412334386 ) - 0.001 ; t1345 [ 63ULL ] = - t4163 ; t1345 [ 64ULL
] = U_idx_0 ; t1345 [ 65ULL ] = - ( t3913 * t2566 ) ; t1345 [ 66ULL ] = X [
100ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 /
2591.4109179101 ; t1345 [ 67ULL ] = X [ 102ULL ] * t1901 / 4290.44463593559 ;
t1345 [ 68ULL ] = X [ 104ULL ] * t1809 / 294.048557917965 ; t1345 [ 69ULL ] =
X [ 108ULL ] * t1814 / 2591.4109179101 ; t1345 [ 70ULL ] = t1817 * t3909 /
2591.4109179101 ; t1345 [ 71ULL ] = - 0.17652103527669544 + - ( piece233 *
400.0 ) / 2784.6912437577439 ; t1345 [ 72ULL ] = - t3928 / 3931.85243448965 ;
t1345 [ 73ULL ] = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra19 *
0.20177105219743391 - t4247 ) / 0.21305668095443633 ; t1345 [ 74ULL ] = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra20 *
0.20177105219743391 - ( t1900 + t4247 ) ) / 0.21305668095443633 ; t1345 [
75ULL ] = t4247 ; t1345 [ 76ULL ] = - t4247 ; t1345 [ 77ULL ] = t4246 ; t1345
[ 78ULL ] = t3927 ; t1345 [ 79ULL ] = - t1900 ; t1345 [ 80ULL ] = - 323.15 ;
t1345 [ 81ULL ] = t3925 ; U_idx_1 = X [ 126ULL ] + t1830 ; U_idx_2 = t1830 -
X [ 126ULL ] ; t1345 [ 82ULL ] = - ( U_idx_1 / 2.0 * t1926 - U_idx_2 / 2.0 *
X [ 125ULL ] ) / 365.59674280784293 ; t4246 = X [ 126ULL ] + t1825 ; t4247 =
t1825 - X [ 126ULL ] ; t1345 [ 83ULL ] = - ( t4246 / 2.0 * X [ 122ULL ] -
t4247 / 2.0 * X [ 130ULL ] ) ; t3909 = X [ 126ULL ] + t1822 ; U_idx_3 = t1822
- X [ 126ULL ] ; t1345 [ 84ULL ] = - ( t3909 / 2.0 * X [ 121ULL ] - U_idx_3 /
2.0 * X [ 129ULL ] ) ; t1345 [ 85ULL ] = 0.0 ; t1345 [ 86ULL ] = X [ 133ULL ]
* t1903 / 461.523 ; t1345 [ 87ULL ] = X [ 123ULL ] * t1904 ; t1345 [ 88ULL ]
= 0.071939481849452439 + ( ( ( - t1833 - t1902 ) * 296.802103844292 + t1833 *
461.523 ) + t1902 * 4124.48151675695 ) * 0.9997 / 4124.48151675695 ; t4160 =
t1903 * 293.15 ; t1345 [ 89ULL ] = - 304.06022922571 - ( ( ( real_T ) ( M [
205ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4160 / 1.01325 ) * ( t4160 / 1.01325 ) * (
X [ 126ULL ] / 7.8539816339744827E-5 ) * ( X [ 126ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1818 ) ; t1345 [
90ULL ] = - t1833 ; t1345 [ 91ULL ] = - t1902 ; t1345 [ 92ULL ] = - ( ( t1905
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 ) / 2.0 * (
( ( real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3145 / ( X [ 116ULL ]
== 0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t3145 / ( X [ 116ULL ] == 0.0 ?
1.0E-16 : X [ 116ULL ] ) ) * ( t1905 / 7.8539816339744827E-5 ) * ( t1905 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2434 ) - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio3 - t1905 ) /
2.0 * X [ 149ULL ] ) ; t1345 [ 93ULL ] = - ( ( t1905 + t1927 ) / 2.0 * X [
118ULL ] - ( t1927 - t1905 ) / 2.0 * X [ 155ULL ] ) ; t1345 [ 94ULL ] = - ( (
t1905 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 ) /
2.0 * X [ 117ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 - t1905 ) /
2.0 * X [ 154ULL ] ) ; t1345 [ 95ULL ] = - ( ( - X [ 126ULL ] + t1965 ) / 2.0
* t1974 - ( t1965 - ( - X [ 126ULL ] ) ) / 2.0 * X [ 156ULL ] ) ; t1345 [
96ULL ] = - ( ( - X [ 126ULL ] + t1964 ) / 2.0 * X [ 137ULL ] - ( t1964 - ( -
X [ 126ULL ] ) ) / 2.0 * X [ 158ULL ] ) ; t1345 [ 97ULL ] = - ( ( - X [
126ULL ] + t1962 ) / 2.0 * X [ 136ULL ] - ( t1962 - ( - X [ 126ULL ] ) ) /
2.0 * X [ 157ULL ] ) ; t1345 [ 98ULL ] = - ( ( t1935 + t1953 ) * 0.001 ) - -
0.18419157727996954 ; t1345 [ 99ULL ] = - ( t3207 / 7.8539816339744827E-5 *
0.00031622776601683789 + intrm_sf_mf_154 ) ; t1345 [ 100ULL ] = - ( t3410 /
7.8539816339744827E-5 * 0.00031622776601683789 + t2582 ) ; t1345 [ 101ULL ] =
t2327 ; t1345 [ 102ULL ] = t1916 ; t4160 = X [ 139ULL ] * t1908 ; t1345 [
103ULL ] = - ( ( ( real_T ) ( M [ 42ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4160 / (
X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ] ) ) * ( t4160 / ( X [ 140ULL ]
== 0.0 ? 1.0E-16 : X [ 140ULL ] ) ) * ( t1905 / 7.8539816339744827E-5 ) * (
t1905 / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1937 ) ;
t4160 = X [ 143ULL ] * t1908 ; t1345 [ 104ULL ] = - ( ( ( real_T ) ( M [
53ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4160 / ( X [ 144ULL ] == 0.0 ? 1.0E-16 : X
[ 144ULL ] ) ) * ( t4160 / ( X [ 144ULL ] == 0.0 ? 1.0E-16 : X [ 144ULL ] ) )
* ( - X [ 126ULL ] / 7.8539816339744827E-5 ) * ( - X [ 126ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2562 ) ; t1345 [
105ULL ] = ( X [ 146ULL ] * t1908 / 461.523 - t1933 * X [ 21ULL ] ) /
0.64309276860371423 ; t1345 [ 106ULL ] = X [ 141ULL ] * t1908 / 461.523 ;
t1345 [ 107ULL ] = X [ 145ULL ] * t1932 ; t1345 [ 108ULL ] = X [ 142ULL ] *
t1908 / 4124.48151675695 ; t1345 [ 109ULL ] = - ( ( ( real_T ) ( M [ 64ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t1940 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ]
) ) * ( t1940 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( t1905 /
7.8539816339744827E-5 ) * ( t1905 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1961 ) ; t1345 [ 110ULL ] = - t1906 ; t1345 [ 111ULL
] = - t1907 ; t1345 [ 112ULL ] = - ( ( ( real_T ) ( M [ 64ULL ] != 0 ) * 2.0
- 1.0 ) * ( t1940 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * (
t1940 / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) ) * ( - X [ 126ULL ] /
7.8539816339744827E-5 ) * ( - X [ 126ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t1961 ) ; t1345 [ 113ULL ] = - t1906 ; t1345 [ 114ULL
] = - t1907 ; t1345 [ 115ULL ] = - ( U_idx_1 / 2.0 * t1919 - U_idx_2 / 2.0 *
X [ 165ULL ] ) ; t1345 [ 116ULL ] = - ( t4246 / 2.0 * X [ 137ULL ] - t4247 /
2.0 * X [ 161ULL ] ) ; t1345 [ 117ULL ] = - ( t3909 / 2.0 * X [ 136ULL ] -
U_idx_3 / 2.0 * X [ 162ULL ] ) ; t1345 [ 118ULL ] = - ( ( - X [ 126ULL ] +
t1830 ) / 2.0 * zc_int38 - ( t1830 - ( - X [ 126ULL ] ) ) / 2.0 * X [ 165ULL
] ) / 365.59674280784293 ; t1345 [ 119ULL ] = - ( ( - X [ 126ULL ] + t1825 )
/ 2.0 * X [ 122ULL ] - ( t1825 - ( - X [ 126ULL ] ) ) / 2.0 * X [ 161ULL ] )
; t1345 [ 120ULL ] = - ( ( - X [ 126ULL ] + t1822 ) / 2.0 * X [ 121ULL ] - (
t1822 - ( - X [ 126ULL ] ) ) / 2.0 * X [ 162ULL ] ) ; t1345 [ 121ULL ] =
t1914 ; t1345 [ 122ULL ] = - ( intrm_sf_mf_201 - t1979 ) ; U_idx_1 = X [
163ULL ] * t1975 ; t1345 [ 123ULL ] = - ( ( ( real_T ) ( M [ 120ULL ] != 0 )
* 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] )
) * ( U_idx_1 / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) * ( X [
126ULL ] / 0.64 / 7.8539816339744827E-5 ) * ( X [ 126ULL ] / 0.64 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2540 ) ; U_idx_1 = X
[ 164ULL ] * t1975 ; t1345 [ 124ULL ] = - ( ( ( real_T ) ( M [ 131ULL ] != 0
) * 2.0 - 1.0 ) * ( U_idx_1 / 1.01325 ) * ( U_idx_1 / 1.01325 ) * ( X [
126ULL ] / 0.64 / 7.8539816339744827E-5 ) * ( X [ 126ULL ] / 0.64 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t2569 ) /
1.0413512978067061 ; t1345 [ 125ULL ] = - ( ( ( real_T ) ( M [ 142ULL ] != 0
) * 2.0 - 1.0 ) * ( t2023 / ( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] )
) * ( t2023 / ( X [ 160ULL ] == 0.0 ? 1.0E-16 : X [ 160ULL ] ) ) * ( X [
126ULL ] / 0.64 / ( t1972 == 0.0 ? 1.0E-16 : t1972 ) ) * ( X [ 126ULL ] /
0.64 / ( t1972 == 0.0 ? 1.0E-16 : t1972 ) ) / 2.0 * 9.999999999999999E-14 +
t2586 ) ; t1345 [ 126ULL ] = - ( ( X [ 183ULL ] + t1991 ) / 2.0 * t1924 - (
t1991 - X [ 183ULL ] ) / 2.0 * X [ 182ULL ] ) ; t1345 [ 127ULL ] = - ( ( X [
183ULL ] + t1990 ) / 2.0 * X [ 168ULL ] - ( t1990 - X [ 183ULL ] ) / 2.0 * X
[ 187ULL ] ) ; t1345 [ 128ULL ] = - ( ( X [ 183ULL ] + t1980 ) / 2.0 * X [
167ULL ] - ( t1980 - X [ 183ULL ] ) / 2.0 * X [ 186ULL ] ) ; U_idx_1 = t1992
+ t1995 ; U_idx_2 = t1995 - t1992 ; t1345 [ 129ULL ] = - ( U_idx_1 / 2.0 *
zc_int48 - U_idx_2 / 2.0 * X [ 188ULL ] ) ; t4246 = t1992 + t1994 ; t4247 =
t1994 - t1992 ; t1345 [ 130ULL ] = - ( t4246 / 2.0 * X [ 174ULL ] - t4247 /
2.0 * X [ 190ULL ] ) ; t4160 = t1992 + t1993 ; t3909 = t1993 - t1992 ; t1345
[ 131ULL ] = - ( t4160 / 2.0 * X [ 173ULL ] - t3909 / 2.0 * X [ 189ULL ] ) ;
t1345 [ 132ULL ] = - ( ( X [ 192ULL ] + t1999 ) / 2.0 * ( ( ( real_T ) ( M [
165ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1768_idx_0 / ( X [ 24ULL ] == 0.0 ?
1.0E-16 : X [ 24ULL ] ) ) * ( t1768_idx_0 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 :
X [ 24ULL ] ) ) * ( X [ 192ULL ] / 7.8539816339744827E-5 ) * ( X [ 192ULL ] /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + t1981 ) - ( t1999 - X
[ 192ULL ] ) / 2.0 * X [ 191ULL ] ) ; t1345 [ 133ULL ] = - ( ( X [ 192ULL ] +
t1998 ) / 2.0 * X [ 171ULL ] - ( t1998 - X [ 192ULL ] ) / 2.0 * X [ 196ULL ]
) ; t1345 [ 134ULL ] = - ( ( X [ 192ULL ] + t1997 ) / 2.0 * X [ 170ULL ] - (
t1997 - X [ 192ULL ] ) / 2.0 * X [ 195ULL ] ) ; t1345 [ 135ULL ] = ( X [
176ULL ] * t1984 / 461.523 - t1989 * X [ 26ULL ] ) / 0.64309276860371423 ;
t1345 [ 136ULL ] = X [ 178ULL ] * t1984 / 461.523 ; t1345 [ 137ULL ] = X [
175ULL ] * t1987 ; t1345 [ 138ULL ] = X [ 177ULL ] * t1984 / 4124.48151675695
; t1345 [ 139ULL ] = - ( ( ( real_T ) ( M [ 166ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2052 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t2052 / ( X [
24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( X [ 183ULL ] /
7.8539816339744827E-5 ) * ( X [ 183ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2005 ) ; t1345 [ 140ULL ] = - t1982 ; t1345 [ 141ULL
] = - t1983 ; t1345 [ 142ULL ] = - ( ( ( real_T ) ( M [ 166ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2052 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * (
t2052 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( t1992 /
7.8539816339744827E-5 ) * ( t1992 / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2005 ) ; t1345 [ 143ULL ] = - t1982 ; t1345 [ 144ULL
] = - t1983 ; t1345 [ 145ULL ] = - ( ( ( real_T ) ( M [ 166ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2052 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * (
t2052 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) ) * ( X [ 192ULL ] /
7.8539816339744827E-5 ) * ( X [ 192ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2005 ) ; t1345 [ 146ULL ] = - t1982 ; t1345 [ 147ULL
] = - t1983 ; t1345 [ 148ULL ] = - ( U_idx_1 / 2.0 * ( ( ( real_T ) ( M [
167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3145 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X
[ 116ULL ] ) ) * ( t3145 / ( X [ 116ULL ] == 0.0 ? 1.0E-16 : X [ 116ULL ] ) )
* ( t1992 / 7.8539816339744827E-5 ) * ( t1992 / 7.8539816339744827E-5 ) / 2.0
* 9.999999999999999E-14 + t2434 ) - U_idx_2 / 2.0 * X [ 201ULL ] ) ; t1345 [
149ULL ] = - ( t4246 / 2.0 * X [ 118ULL ] - t4247 / 2.0 * X [ 203ULL ] ) ;
t1345 [ 150ULL ] = - ( t4160 / 2.0 * X [ 117ULL ] - t3909 / 2.0 * X [ 202ULL
] ) ; t1345 [ 151ULL ] = - ( ( - t1992 + t1995 ) / 2.0 * t2092 - ( t1995 - (
- t1992 ) ) / 2.0 * X [ 201ULL ] ) ; t1345 [ 152ULL ] = - ( ( - t1992 + t1994
) / 2.0 * X [ 174ULL ] - ( t1994 - ( - t1992 ) ) / 2.0 * X [ 203ULL ] ) ;
t1345 [ 153ULL ] = - ( ( - t1992 + t1993 ) / 2.0 * X [ 173ULL ] - ( t1993 - (
- t1992 ) ) / 2.0 * X [ 202ULL ] ) ; t1345 [ 154ULL ] = t2013 ; t1345 [
155ULL ] = t2195 / 3.4930368471842854 ; t1345 [ 156ULL ] = t1978 /
3.4930368471842854 ; t1345 [ 157ULL ] = t2011 ; t1345 [ 158ULL ] = t2286 ;
U_idx_1 = X [ 213ULL ] + t2033 ; U_idx_2 = t2033 - X [ 213ULL ] ; t1345 [
159ULL ] = - ( U_idx_1 / 2.0 * ( ( ( real_T ) ( M [ 173ULL ] != 0 ) * 2.0 -
1.0 ) * ( t3516 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( t3516
/ ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( X [ 213ULL ] /
7.8539816339744827E-5 ) * ( X [ 213ULL ] / 7.8539816339744827E-5 ) / 2.0 *
9.999999999999999E-14 + t2589 ) - U_idx_2 / 2.0 * X [ 212ULL ] ) ; t4246 = X
[ 213ULL ] + t2032 ; t4247 = t2032 - X [ 213ULL ] ; t1345 [ 160ULL ] = - (
t4246 / 2.0 * X [ 206ULL ] - t4247 / 2.0 * X [ 217ULL ] ) ; t4160 = X [
213ULL ] + t2016 ; t3909 = t2016 - X [ 213ULL ] ; t1345 [ 161ULL ] = - (
t4160 / 2.0 * X [ 205ULL ] - t3909 / 2.0 * X [ 216ULL ] ) ; t1345 [ 162ULL ]
= ( X [ 208ULL ] * t2019 / 461.523 - t2031 * X [ 30ULL ] ) /
0.64309276860371423 ; t1345 [ 163ULL ] = X [ 210ULL ] * t2019 / 461.523 ;
t1345 [ 164ULL ] = X [ 207ULL ] * t2026 ; t1345 [ 165ULL ] = X [ 209ULL ] *
t2019 / 4124.48151675695 ; t1345 [ 166ULL ] = - ( ( ( real_T ) ( M [ 174ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t2060 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ]
) ) * ( t2060 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( X [
213ULL ] / 7.8539816339744827E-5 ) * ( X [ 213ULL ] / 7.8539816339744827E-5 )
/ 2.0 * 9.999999999999999E-14 + t2039 ) ; t1345 [ 167ULL ] = - t2017 ; t1345
[ 168ULL ] = - t2018 ; t1345 [ 169ULL ] = - ( ( - X [ 213ULL ] + t2094 ) /
2.0 * zc_int58 - ( t2094 - ( - X [ 213ULL ] ) ) / 2.0 * X [ 231ULL ] ) ;
t1345 [ 170ULL ] = - ( ( - X [ 213ULL ] + t2053 ) / 2.0 * X [ 222ULL ] - (
t2053 - ( - X [ 213ULL ] ) ) / 2.0 * X [ 233ULL ] ) ; t1345 [ 171ULL ] = - (
( - X [ 213ULL ] + t2048 ) / 2.0 * X [ 221ULL ] - ( t2048 - ( - X [ 213ULL ]
) ) / 2.0 * X [ 232ULL ] ) ; t1345 [ 172ULL ] = - ( ( - X [ 183ULL ] + t2100
) / 2.0 * t2014 - ( t2100 - ( - X [ 183ULL ] ) ) / 2.0 * X [ 234ULL ] ) ;
t1345 [ 173ULL ] = - ( ( - X [ 183ULL ] + t2098 ) / 2.0 * X [ 168ULL ] - (
t2098 - ( - X [ 183ULL ] ) ) / 2.0 * X [ 236ULL ] ) ; t1345 [ 174ULL ] = - (
( - X [ 183ULL ] + t2096 ) / 2.0 * X [ 167ULL ] - ( t2096 - ( - X [ 183ULL ]
) ) / 2.0 * X [ 235ULL ] ) ; t1345 [ 175ULL ] = - ( ( t2080 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_Q_conv ) * 0.001 ) /
7.5401484792408886E-5 ; t1345 [ 176ULL ] = - ( t3555 / 7.8539816339744827E-5
* 0.00031622776601683789 + intrm_sf_mf_425 ) ; t1345 [ 177ULL ] = - ( t3569 /
7.8539816339744827E-5 * 0.00031622776601683789 + intrm_sf_mf_436 ) ; t1345 [
178ULL ] = intrm_sf_mf_55 ; t1345 [ 179ULL ] = zc_int43 ; U_idx_3 = X [
223ULL ] * t2043 ; t1345 [ 180ULL ] = - ( ( ( real_T ) ( M [ 181ULL ] != 0 )
* 2.0 - 1.0 ) * ( U_idx_3 / ( X [ 224ULL ] == 0.0 ? 1.0E-16 : X [ 224ULL ] )
) * ( U_idx_3 / ( X [ 224ULL ] == 0.0 ? 1.0E-16 : X [ 224ULL ] ) ) * ( - X [
213ULL ] / 7.8539816339744827E-5 ) * ( - X [ 213ULL ] / 7.8539816339744827E-5
) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_412 ) ; U_idx_3 = X [ 227ULL ]
* t2043 ; t1345 [ 181ULL ] = - ( ( ( real_T ) ( M [ 182ULL ] != 0 ) * 2.0 -
1.0 ) * ( U_idx_3 / ( X [ 228ULL ] == 0.0 ? 1.0E-16 : X [ 228ULL ] ) ) * (
U_idx_3 / ( X [ 228ULL ] == 0.0 ? 1.0E-16 : X [ 228ULL ] ) ) * ( - X [ 183ULL
] / 7.8539816339744827E-5 ) * ( - X [ 183ULL ] / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + t2083 ) ; t1345 [ 182ULL ] = ( X [ 230ULL ] *
t2043 / 461.523 - t2076 * X [ 33ULL ] ) / 0.64309276860371423 ; t1345 [
183ULL ] = X [ 225ULL ] * t2043 / 461.523 ; t1345 [ 184ULL ] = X [ 229ULL ] *
t2074 ; t1345 [ 185ULL ] = X [ 226ULL ] * t2043 / 4124.48151675695 ; t1345 [
186ULL ] = - ( ( ( real_T ) ( M [ 183ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2079 / (
X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) ) * ( t2079 / ( X [ 32ULL ] ==
0.0 ? 1.0E-16 : X [ 32ULL ] ) ) * ( - X [ 213ULL ] / 7.8539816339744827E-5 )
* ( - X [ 213ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t2107 ) ; t1345 [ 187ULL ] = - t2015 ; t1345 [ 188ULL ] = - t2042 ; t1345 [
189ULL ] = - ( ( ( real_T ) ( M [ 183ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2079 / (
X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) ) * ( t2079 / ( X [ 32ULL ] ==
0.0 ? 1.0E-16 : X [ 32ULL ] ) ) * ( - X [ 183ULL ] / 7.8539816339744827E-5 )
* ( - X [ 183ULL ] / 7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 +
t2107 ) ; t1345 [ 190ULL ] = - t2015 ; t1345 [ 191ULL ] = - t2042 ; t1345 [
192ULL ] = - ( ( - X [ 213ULL ] + t2033 ) / 2.0 * ( ( ( real_T ) ( M [ 173ULL
] != 0 ) * 2.0 - 1.0 ) * ( t3516 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL
] ) ) * ( t3516 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( - X [
213ULL ] / 7.8539816339744827E-5 ) * ( - X [ 213ULL ] / 7.8539816339744827E-5
) / 2.0 * 9.999999999999999E-14 + t2589 ) - ( t2033 - ( - X [ 213ULL ] ) ) /
2.0 * X [ 243ULL ] ) ; t1345 [ 193ULL ] = - ( ( - X [ 213ULL ] + t2032 ) /
2.0 * X [ 206ULL ] - ( t2032 - ( - X [ 213ULL ] ) ) / 2.0 * X [ 239ULL ] ) ;
t1345 [ 194ULL ] = - ( ( - X [ 213ULL ] + t2016 ) / 2.0 * X [ 205ULL ] - (
t2016 - ( - X [ 213ULL ] ) ) / 2.0 * X [ 240ULL ] ) ; t1345 [ 195ULL ] = - (
U_idx_1 / 2.0 * zc_int91 - U_idx_2 / 2.0 * X [ 243ULL ] ) ; t1345 [ 196ULL ]
= - ( t4246 / 2.0 * X [ 222ULL ] - t4247 / 2.0 * X [ 239ULL ] ) ; t1345 [
197ULL ] = - ( t4160 / 2.0 * X [ 221ULL ] - t3909 / 2.0 * X [ 240ULL ] ) ;
t1345 [ 198ULL ] =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_u ; t1345 [
199ULL ] = - ( intrm_sf_mf_474 - t2117 ) ; U_idx_1 = X [ 241ULL ] * t2113 ;
t1345 [ 200ULL ] = - ( ( ( real_T ) ( M [ 186ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_1 / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( U_idx_1 / ( X
[ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) ) * ( - X [ 213ULL ] / 0.64 /
7.8539816339744827E-5 ) * ( - X [ 213ULL ] / 0.64 / 7.8539816339744827E-5 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_465 ) ; U_idx_1 = X [ 242ULL ] *
t2113 ; t1345 [ 201ULL ] = - ( ( ( real_T ) ( M [ 188ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) ) * (
U_idx_1 / ( X [ 220ULL ] == 0.0 ? 1.0E-16 : X [ 220ULL ] ) ) * ( - X [ 213ULL
] / 0.64 / 7.8539816339744827E-5 ) * ( - X [ 213ULL ] / 0.64 /
7.8539816339744827E-5 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_468 ) ;
t1345 [ 202ULL ] = - ( ( ( real_T ) ( M [ 189ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2162 / ( X [ 238ULL ] == 0.0 ? 1.0E-16 : X [ 238ULL ] ) ) * ( t2162 / ( X [
238ULL ] == 0.0 ? 1.0E-16 : X [ 238ULL ] ) ) * ( - X [ 213ULL ] / 0.64 / (
t2110 == 0.0 ? 1.0E-16 : t2110 ) ) * ( - X [ 213ULL ] / 0.64 / ( t2110 == 0.0
? 1.0E-16 : t2110 ) ) / 2.0 * 9.999999999999999E-14 + t2600 ) ; U_idx_1 = X [
250ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ;
U_idx_2 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 - X
[ 250ULL ] ; t1345 [ 203ULL ] = - ( U_idx_1 / 2.0 * t2602 - U_idx_2 / 2.0 * X
[ 249ULL ] ) / 365.59674280784293 ; t4246 = X [ 250ULL ] + t2118 ; t4247 =
t2118 - X [ 250ULL ] ; t1345 [ 204ULL ] = - ( t4246 / 2.0 * X [ 246ULL ] -
t4247 / 2.0 * X [ 254ULL ] ) ; t4160 = X [ 250ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ; t3909 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 - X [ 250ULL
] ; t1345 [ 205ULL ] = - ( t4160 / 2.0 * X [ 245ULL ] - t3909 / 2.0 * X [
253ULL ] ) ; U_idx_3 = 148.401051922146 ; t1345 [ 206ULL ] = U_idx_3 /
461.523 / 43.3158175294914 + piece255 * 0.5 / 461.523 / 43.3158175294914 ;
t1345 [ 207ULL ] = X [ 257ULL ] * intrm_sf_mf_477 / 461.523 ; t1345 [ 208ULL
] = X [ 247ULL ] * t2124 ; U_idx_0 = 62.328441807301317 ; t1345 [ 209ULL ] =
U_idx_0 / 259.836612622973 + piece255 * 0.21 / 259.836612622973 ; t4163 =
intrm_sf_mf_477 * 293.15 ; t1345 [ 210ULL ] = - 304.06022922571 - ( ( (
real_T ) ( M [ 191ULL ] != 0 ) * 2.0 - 1.0 ) * ( t4163 / 1.01325 ) * ( t4163
/ 1.01325 ) * ( X [ 250ULL ] / 0.0019634954084936209 ) * ( X [ 250ULL ] /
0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + piece231 ) ; t1345 [
211ULL ] = - t2121 ; t1345 [ 212ULL ] = - t2122 ; t4163 = - X [ 250ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 ; t3913 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio2 - ( - X [
250ULL ] ) ; t1345 [ 213ULL ] = - ( t4163 / 2.0 * t1930 - t3913 / 2.0 * X [
266ULL ] ) / 365.59674280784293 ; t3925 = - X [ 250ULL ] + t2118 ; piece233 =
t2118 - ( - X [ 250ULL ] ) ; t1345 [ 214ULL ] = - ( t3925 / 2.0 * X [ 246ULL
] - piece233 / 2.0 * X [ 268ULL ] ) ; t3927 = - X [ 250ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 ; t3928 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Air_Intake_convectio0 - ( - X [
250ULL ] ) ; t1345 [ 215ULL ] = - ( t3927 / 2.0 * X [ 245ULL ] - t3928 / 2.0
* X [ 267ULL ] ) ; t1345 [ 216ULL ] = - ( U_idx_1 / 2.0 * zc_int102 - U_idx_2
/ 2.0 * X [ 266ULL ] ) ; t1345 [ 217ULL ] = - ( t4246 / 2.0 * X [ 260ULL ] -
t4247 / 2.0 * X [ 268ULL ] ) ; t1345 [ 218ULL ] = - ( t4160 / 2.0 * X [
259ULL ] - t3909 / 2.0 * X [ 267ULL ] ) ; t1345 [ 219ULL ] = zc_int107 ;
t1345 [ 220ULL ] = 979.36765375297466 + t2127 / 3.4930368471842854 ; t1345 [
221ULL ] = - 979.36765375297466 + piece267 / 3.4930368471842854 ; t1345 [
222ULL ] = t2129 / 1.0413512978067061 ; t1345 [ 223ULL ] = zc_int103 ; t1345
[ 224ULL ] = - ( t4163 / 2.0 * t2130 - t3913 / 2.0 * X [ 277ULL ] ) ; t1345 [
225ULL ] = - ( t3925 / 2.0 * X [ 260ULL ] - piece233 / 2.0 * X [ 279ULL ] ) ;
t1345 [ 226ULL ] = - ( t3927 / 2.0 * X [ 259ULL ] - t3928 / 2.0 * X [ 278ULL
] ) ; t1345 [ 227ULL ] = - ( ( X [ 281ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 ) / 2.0 *
t2132 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_co2 - X
[ 281ULL ] ) / 2.0 * X [ 280ULL ] ) ; t1345 [ 228ULL ] = - ( ( X [ 281ULL ] +
t2143 ) / 2.0 * X [ 271ULL ] - ( t2143 - X [ 281ULL ] ) / 2.0 * X [ 285ULL ]
) ; t1345 [ 229ULL ] = - ( ( X [ 281ULL ] + t2134 ) / 2.0 * X [ 270ULL ] - (
t2134 - X [ 281ULL ] ) / 2.0 * X [ 284ULL ] ) ; t1345 [ 230ULL ] = ( X [
273ULL ] * t2138 / 461.523 - t2142 * X [ 38ULL ] ) / 0.64309276860371423 ;
t1345 [ 231ULL ] = X [ 275ULL ] * t2138 / 461.523 ; t1345 [ 232ULL ] = X [
272ULL ] * t2140 ; t1345 [ 233ULL ] = X [ 274ULL ] * t2138 / 259.836612622973
/ 1.1422643670118826 ; t1345 [ 234ULL ] = - ( ( ( real_T ) ( M [ 198ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t2193 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] )
) * ( t2193 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( - X [
250ULL ] / 0.0019634954084936209 ) * ( - X [ 250ULL ] / 0.0019634954084936209
) / 2.0 * 9.999999999999999E-14 + t2151 ) ; t1345 [ 235ULL ] = - t2136 ;
t1345 [ 236ULL ] = - t2137 ; t1345 [ 237ULL ] = - ( ( ( real_T ) ( M [ 198ULL
] != 0 ) * 2.0 - 1.0 ) * ( t2193 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL
] ) ) * ( t2193 / ( X [ 35ULL ] == 0.0 ? 1.0E-16 : X [ 35ULL ] ) ) * ( X [
281ULL ] / 0.0019634954084936209 ) * ( X [ 281ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + t2151 ) ; t1345 [ 238ULL ] = - t2136 ; t1345
[ 239ULL ] = - t2137 ; t1345 [ 240ULL ] = X [ 286ULL ] * t2580 * 0.1 ; t1345
[ 241ULL ] = - t1790 [ 0ULL ] ; t1345 [ 242ULL ] = 0.0 ; t1345 [ 243ULL ] = -
( X [ 289ULL ] / ( X [ 290ULL ] == 0.0 ? 1.0E-16 : X [ 290ULL ] ) ) ; t1345 [
244ULL ] = 0.0 ; t1345 [ 245ULL ] = - pmf_sqrt ( X [ 244ULL ] *
0.00347041471455839 ) ; t1345 [ 246ULL ] = U_idx_5 * t1915 ; t1345 [ 247ULL ]
= - ( ( - X [ 192ULL ] + intrm_sf_mf_638 ) / 2.0 * ( ( ( real_T ) ( M [
165ULL ] != 0 ) * 2.0 - 1.0 ) * ( t1768_idx_0 / ( X [ 24ULL ] == 0.0 ?
1.0E-16 : X [ 24ULL ] ) ) * ( t1768_idx_0 / ( X [ 24ULL ] == 0.0 ? 1.0E-16 :
X [ 24ULL ] ) ) * ( - X [ 192ULL ] / 0.0019634954084936209 ) * ( - X [ 192ULL
] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 + t1981 ) - (
intrm_sf_mf_638 - ( - X [ 192ULL ] ) ) / 2.0 * X [ 308ULL ] ) ; t1345 [
248ULL ] = - ( ( - X [ 192ULL ] + t2184 ) / 2.0 * X [ 171ULL ] - ( t2184 - (
- X [ 192ULL ] ) ) / 2.0 * X [ 310ULL ] ) ; t1345 [ 249ULL ] = - ( ( - X [
192ULL ] + t1854 ) / 2.0 * X [ 170ULL ] - ( t1854 - ( - X [ 192ULL ] ) ) /
2.0 * X [ 309ULL ] ) ; t1345 [ 250ULL ] = - ( ( X [ 304ULL ] + t2211 ) / 2.0
* t2199 - ( t2211 - X [ 304ULL ] ) / 2.0 * X [ 311ULL ] ) ; t1345 [ 251ULL ]
= - ( ( X [ 304ULL ] + t2209 ) / 2.0 * X [ 294ULL ] - ( t2209 - X [ 304ULL ]
) / 2.0 * X [ 315ULL ] ) ; t1345 [ 252ULL ] = - ( ( X [ 304ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0 ) / 2.0 * X [
293ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_convection_B0
- X [ 304ULL ] ) / 2.0 * X [ 314ULL ] ) ; t1345 [ 253ULL ] = - ( ( t2191 +
t2200 ) * 0.001 ) / 1.8850371198102225E-5 ; t1345 [ 254ULL ] = - ( t1934 /
0.0019634954084936209 * 0.00031622776601683789 + t2611 ) ; t1345 [ 255ULL ] =
- ( t3134 / 0.0019634954084936209 * 0.00031622776601683789 + t2612 ) ; t1345
[ 256ULL ] = t2045 ; t1345 [ 257ULL ] = t2055 ; U_idx_1 = X [ 302ULL ] *
t2157 ; t1345 [ 258ULL ] = - ( ( ( real_T ) ( M [ 207ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( X [ 303ULL ] == 0.0 ? 1.0E-16 : X [ 303ULL ] ) ) * (
U_idx_1 / ( X [ 303ULL ] == 0.0 ? 1.0E-16 : X [ 303ULL ] ) ) * ( - X [ 192ULL
] / 0.0019634954084936209 ) * ( - X [ 192ULL ] / 0.0019634954084936209 ) /
2.0 * 9.999999999999999E-14 + intrm_sf_mf_626 ) ; U_idx_1 = X [ 305ULL ] *
t2157 ; t1345 [ 259ULL ] = - ( ( ( real_T ) ( M [ 208ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL ] ) ) * (
U_idx_1 / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL ] ) ) * ( X [ 304ULL ]
/ 0.0019634954084936209 ) * ( X [ 304ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_676 ) ; t1345 [ 260ULL ] = ( X [ 297ULL ]
* t2157 / 461.523 - t2188 * X [ 41ULL ] ) / 0.64309276860371423 ; t1345 [
261ULL ] = X [ 299ULL ] * t2157 / 461.523 ; t1345 [ 262ULL ] = X [ 296ULL ] *
t2186 ; t1345 [ 263ULL ] = X [ 298ULL ] * t2157 / 4124.48151675695 ; t1345 [
264ULL ] = 0.0 ; t1345 [ 265ULL ] = - ( ( ( real_T ) ( M [ 209ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2214 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) ) * (
t2214 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) ) * ( - X [ 192ULL ] /
0.0019634954084936209 ) * ( - X [ 192ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2226 ) ; t1345 [ 266ULL ] = - t2155 ; t1345 [ 267ULL
] = - t2156 ; t1345 [ 268ULL ] = - ( ( ( real_T ) ( M [ 209ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2214 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) ) * (
t2214 / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) ) * ( X [ 304ULL ] /
0.0019634954084936209 ) * ( X [ 304ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2226 ) ; t1345 [ 269ULL ] = - t2155 ; t1345 [ 270ULL
] = - t2156 ; t1345 [ 271ULL ] = - ( ( - X [ 304ULL ] + t2263 ) / 2.0 * t2158
- ( t2263 - ( - X [ 304ULL ] ) ) / 2.0 * X [ 322ULL ] ) ; t1345 [ 272ULL ] =
- ( ( - X [ 304ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1 ) / 2.0 * X [
294ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A1
- ( - X [ 304ULL ] ) ) / 2.0 * X [ 324ULL ] ) ; t1345 [ 273ULL ] = - ( ( - X
[ 304ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0
) / 2.0 * X [ 293ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A0 - ( - X [
304ULL ] ) ) / 2.0 * X [ 323ULL ] ) ; t1345 [ 274ULL ] = - ( ( X [ 318ULL ] +
t2267 ) / 2.0 * t2165 - ( t2267 - X [ 318ULL ] ) / 2.0 * X [ 325ULL ] ) ;
t1345 [ 275ULL ] = - ( ( X [ 318ULL ] + t2266 ) / 2.0 * X [ 71ULL ] - ( t2266
- X [ 318ULL ] ) / 2.0 * X [ 329ULL ] ) ; t1345 [ 276ULL ] = - ( ( X [ 318ULL
] + t2265 ) / 2.0 * X [ 70ULL ] - ( t2265 - X [ 318ULL ] ) / 2.0 * X [ 328ULL
] ) ; t1345 [ 277ULL ] = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Q_cond + t2259 ) * 0.001 )
; t1345 [ 278ULL ] = - ( t3165 / 0.32 * 0.00031622776601683789 +
intrm_sf_mf_825 ) ; t1345 [ 279ULL ] = - ( t3174 / 0.32 *
0.00031622776601683789 + intrm_sf_mf_834 ) ; t1345 [ 280ULL ] = t2056 ; t1345
[ 281ULL ] = t2057 ; U_idx_1 = X [ 316ULL ] * t2233 ; t1345 [ 282ULL ] = - (
( ( real_T ) ( M [ 215ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 317ULL ]
== 0.0 ? 1.0E-16 : X [ 317ULL ] ) ) * ( U_idx_1 / ( X [ 317ULL ] == 0.0 ?
1.0E-16 : X [ 317ULL ] ) ) * ( - X [ 304ULL ] / 0.32 ) * ( - X [ 304ULL ] /
0.32 ) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_810 ) ; U_idx_1 = X [
319ULL ] * t2233 ; t1345 [ 283ULL ] = - ( ( ( real_T ) ( M [ 216ULL ] != 0 )
* 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] )
) * ( U_idx_1 / ( X [ 320ULL ] == 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) * ( X [
318ULL ] / 0.32 ) * ( X [ 318ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t2207 ) ; t1345 [ 284ULL ] = ( X [ 79ULL ] * t2233 / 461.523 - t2257 * X [
8ULL ] ) / 0.64309276860371423 ; t1345 [ 285ULL ] = X [ 77ULL ] * t2233 /
461.523 ; t1345 [ 286ULL ] = X [ 80ULL ] * t2256 ; t1345 [ 287ULL ] = X [
76ULL ] * t2233 / 4124.48151675695 ; t1345 [ 288ULL ] = 0.0 ; t1345 [ 289ULL
] = - ( ( ( real_T ) ( M [ 217ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2308 / ( X [
43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ) * ( t2308 / ( X [ 43ULL ] == 0.0 ?
1.0E-16 : X [ 43ULL ] ) ) * ( - X [ 304ULL ] / 0.32 ) * ( - X [ 304ULL ] /
0.32 ) / 2.0 * 9.999999999999999E-14 + t2274 ) ; t1345 [ 290ULL ] = - t2183 ;
t1345 [ 291ULL ] = - t2231 ; t1345 [ 292ULL ] = - ( ( ( real_T ) ( M [ 217ULL
] != 0 ) * 2.0 - 1.0 ) * ( t2308 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL
] ) ) * ( t2308 / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) ) * ( X [
318ULL ] / 0.32 ) * ( X [ 318ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t2274 ) ; t1345 [ 293ULL ] = - t2183 ; t1345 [ 294ULL ] = - t2231 ; t1345 [
295ULL ] = - ( ( - X [ 318ULL ] + t2267 ) / 2.0 * zc_int177 - ( t2267 - ( - X
[ 318ULL ] ) ) / 2.0 * X [ 334ULL ] ) ; t1345 [ 296ULL ] = - ( ( - X [ 318ULL
] + t2266 ) / 2.0 * X [ 71ULL ] - ( t2266 - ( - X [ 318ULL ] ) ) / 2.0 * X [
336ULL ] ) ; t1345 [ 297ULL ] = - ( ( - X [ 318ULL ] + t2265 ) / 2.0 * X [
70ULL ] - ( t2265 - ( - X [ 318ULL ] ) ) / 2.0 * X [ 335ULL ] ) ; t1345 [
298ULL ] = - ( ( X [ 138ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 ) / 2.0 * ( (
( real_T ) ( M [ 167ULL ] != 0 ) * 2.0 - 1.0 ) * ( t3145 / ( X [ 116ULL ] ==
0.0 ? 1.0E-16 : X [ 116ULL ] ) ) * ( t3145 / ( X [ 116ULL ] == 0.0 ? 1.0E-16
: X [ 116ULL ] ) ) * ( X [ 138ULL ] / 0.32 ) * ( X [ 138ULL ] / 0.32 ) / 2.0
* 9.999999999999999E-14 + t2434 ) - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_5 - X [ 138ULL
] ) / 2.0 * X [ 337ULL ] ) ; t1345 [ 299ULL ] = - ( ( X [ 138ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4 ) / 2.0 * X [
118ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_convection_4
- X [ 138ULL ] ) / 2.0 * X [ 339ULL ] ) ; t1345 [ 300ULL ] = - ( ( X [ 138ULL
] + t1957 ) / 2.0 * X [ 117ULL ] - ( t1957 - X [ 138ULL ] ) / 2.0 * X [
338ULL ] ) ; t1345 [ 301ULL ] = - ( ( t2312 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Q_conv ) * 0.001 ) ; t1345
[ 302ULL ] = - ( t3209 / 0.32 * 0.00031622776601683789 + t2618 ) ; t1345 [
303ULL ] = - ( U_idx_9 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_971 ) ;
t1345 [ 304ULL ] = t124 ; t1345 [ 305ULL ] = t1910 ; U_idx_1 = X [ 330ULL ] *
t2278 ; t1345 [ 306ULL ] = - ( ( ( real_T ) ( M [ 222ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( X [ 331ULL ] == 0.0 ? 1.0E-16 : X [ 331ULL ] ) ) * (
U_idx_1 / ( X [ 331ULL ] == 0.0 ? 1.0E-16 : X [ 331ULL ] ) ) * ( - X [ 318ULL
] / 0.32 ) * ( - X [ 318ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2610
) ; U_idx_1 = X [ 332ULL ] * t2278 ; t1345 [ 307ULL ] = - ( ( ( real_T ) ( M
[ 223ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 333ULL ] == 0.0 ? 1.0E-16
: X [ 333ULL ] ) ) * ( U_idx_1 / ( X [ 333ULL ] == 0.0 ? 1.0E-16 : X [ 333ULL
] ) ) * ( X [ 138ULL ] / 0.32 ) * ( X [ 138ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2613 ) ; t1345 [ 308ULL ] = ( X [ 84ULL ] * t2278 /
461.523 - t2311 * X [ 11ULL ] ) / 0.64309276860371423 ; t1345 [ 309ULL ] = X
[ 82ULL ] * t2278 / 461.523 ; t1345 [ 310ULL ] = X [ 85ULL ] * t2309 ; t1345
[ 311ULL ] = X [ 81ULL ] * t2278 / 4124.48151675695 ; t1345 [ 312ULL ] = 0.0
; t1345 [ 313ULL ] = - ( ( ( real_T ) ( M [ 224ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2400 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( t2400 / ( X [
44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( - X [ 318ULL ] / 0.32 ) * ( -
X [ 318ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2315 ) ; t1345 [
314ULL ] = - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ; t1345
[ 315ULL ] = - t2277 ; t1345 [ 316ULL ] = - ( ( ( real_T ) ( M [ 224ULL ] !=
0 ) * 2.0 - 1.0 ) * ( t2400 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] )
) * ( t2400 / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) ) * ( X [ 138ULL
] / 0.32 ) * ( X [ 138ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2315 )
; t1345 [ 317ULL ] = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_h_w_I ; t1345 [ 318ULL ] =
- t2277 ; t1345 [ 319ULL ] = U_idx_7 * t1785_idx_0 ; t1345 [ 320ULL ] = - ( (
- X [ 281ULL ] + intrm_sf_mf_1050 ) / 2.0 * t2180 - ( intrm_sf_mf_1050 - ( -
X [ 281ULL ] ) ) / 2.0 * X [ 357ULL ] ) ; t1345 [ 321ULL ] = - ( ( - X [
281ULL ] + t2346 ) / 2.0 * X [ 271ULL ] - ( t2346 - ( - X [ 281ULL ] ) ) /
2.0 * X [ 359ULL ] ) ; t1345 [ 322ULL ] = - ( ( - X [ 281ULL ] + t2332 ) /
2.0 * X [ 270ULL ] - ( t2332 - ( - X [ 281ULL ] ) ) / 2.0 * X [ 358ULL ] ) ;
t1345 [ 323ULL ] = - ( ( X [ 353ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 ) / 2.0 *
t2182 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 - X
[ 353ULL ] ) / 2.0 * X [ 360ULL ] ) ; t1345 [ 324ULL ] = - ( ( X [ 353ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1 ) / 2.0 * X [
343ULL ] - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B1
- X [ 353ULL ] ) / 2.0 * X [ 364ULL ] ) ; t1345 [ 325ULL ] = - ( ( X [ 353ULL
] + t2361 ) / 2.0 * X [ 342ULL ] - ( t2361 - X [ 353ULL ] ) / 2.0 * X [
363ULL ] ) ; t1345 [ 326ULL ] = - ( ( t2350 + intrm_sf_mf_1060 ) * 0.001 ) /
1.8850371198102225E-5 ; t1345 [ 327ULL ] = - ( t3252 / 0.0019634954084936209
* 0.00031622776601683789 + t2553 ) ; t1345 [ 328ULL ] = - ( t3267 /
0.0019634954084936209 * 0.00031622776601683789 + t2554 ) ; t1345 [ 329ULL ] =
t2065 ; t1345 [ 330ULL ] = zc_int227 ; U_idx_1 = X [ 351ULL ] * t2325 ; t1345
[ 331ULL ] = - ( ( ( real_T ) ( M [ 3ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 /
( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) * ( U_idx_1 / ( X [ 352ULL
] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) * ( - X [ 281ULL ] /
0.0019634954084936209 ) * ( - X [ 281ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2353 ) ; U_idx_1 = X [ 354ULL ] * t2325 ; t1345 [
332ULL ] = - ( ( ( real_T ) ( M [ 4ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / (
X [ 355ULL ] == 0.0 ? 1.0E-16 : X [ 355ULL ] ) ) * ( U_idx_1 / ( X [ 355ULL ]
== 0.0 ? 1.0E-16 : X [ 355ULL ] ) ) * ( X [ 353ULL ] / 0.0019634954084936209
) * ( X [ 353ULL ] / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1088 ) ; t1345 [ 333ULL ] = ( X [ 346ULL ] * t2325 / 461.523 -
t2349 * X [ 47ULL ] ) / 0.64309276860371423 ; t1345 [ 334ULL ] = X [ 348ULL ]
* t2325 / 461.523 ; t1345 [ 335ULL ] = X [ 345ULL ] * t2348 ; t1345 [ 336ULL
] = X [ 347ULL ] * t2325 / 259.836612622973 / 1.1422643670118826 ; t1345 [
337ULL ] = 0.0 ; t1345 [ 338ULL ] = - ( ( ( real_T ) ( M [ 5ULL ] != 0 ) *
2.0 - 1.0 ) * ( t2490 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * (
t2490 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * ( - X [ 281ULL ] /
0.0019634954084936209 ) * ( - X [ 281ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2371 ) ; t1345 [ 339ULL ] = - intrm_sf_mf_973 ;
t1345 [ 340ULL ] = - t2323 ; t1345 [ 341ULL ] = - ( ( ( real_T ) ( M [ 5ULL ]
!= 0 ) * 2.0 - 1.0 ) * ( t2490 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ]
) ) * ( t2490 / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) ) * ( X [
353ULL ] / 0.0019634954084936209 ) * ( X [ 353ULL ] / 0.0019634954084936209 )
/ 2.0 * 9.999999999999999E-14 + t2371 ) ; t1345 [ 342ULL ] = -
intrm_sf_mf_973 ; t1345 [ 343ULL ] = - t2323 ; U_idx_1 = X [ 376ULL ] + t2375
; U_idx_2 = t2375 - X [ 376ULL ] ; t1345 [ 344ULL ] = - ( U_idx_1 / 2.0 *
t2177 - U_idx_2 / 2.0 * X [ 375ULL ] ) / 365.59674280784293 ; t4246 = X [
376ULL ] + t2374 ; t4247 = t2374 - X [ 376ULL ] ; t1345 [ 345ULL ] = - (
t4246 / 2.0 * X [ 372ULL ] - t4247 / 2.0 * X [ 380ULL ] ) ; t4160 = X [
376ULL ] + t2344 ; t3909 = t2344 - X [ 376ULL ] ; t1345 [ 346ULL ] = - (
t4160 / 2.0 * X [ 371ULL ] - t3909 / 2.0 * X [ 379ULL ] ) ; t1345 [ 347ULL ]
= U_idx_3 / 461.523 / 43.3158175294914 + t2128 * 0.5 / 461.523 /
43.3158175294914 ; t1345 [ 348ULL ] = X [ 383ULL ] * t2379 / 461.523 ; t1345
[ 349ULL ] = X [ 373ULL ] * t2380 ; t1345 [ 350ULL ] = U_idx_0 /
259.836612622973 + t2128 * 0.21 / 259.836612622973 ; U_idx_3 = t2379 * 293.15
; t1345 [ 351ULL ] = - 304.06022922571 - ( ( ( real_T ) ( M [ 7ULL ] != 0 ) *
2.0 - 1.0 ) * ( U_idx_3 / 1.01325 ) * ( U_idx_3 / 1.01325 ) * ( X [ 376ULL ]
/ 0.0019634954084936209 ) * ( X [ 376ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2305 ) ; t1345 [ 352ULL ] = - t2377 ; t1345 [ 353ULL
] = - t2378 ; t1345 [ 354ULL ] = - ( ( X [ 388ULL ] + intrm_sf_mf_1209 ) /
2.0 * zc_int242 - ( intrm_sf_mf_1209 - X [ 388ULL ] ) / 2.0 * X [ 398ULL ] )
; t1345 [ 355ULL ] = - ( ( X [ 388ULL ] + intrm_sf_mf_1186 ) / 2.0 * X [
368ULL ] - ( intrm_sf_mf_1186 - X [ 388ULL ] ) / 2.0 * X [ 402ULL ] ) ; t1345
[ 356ULL ] = - ( ( X [ 388ULL ] + intrm_sf_mf_1210 ) / 2.0 * X [ 367ULL ] - (
intrm_sf_mf_1210 - X [ 388ULL ] ) / 2.0 * X [ 401ULL ] ) ; t1345 [ 357ULL ] =
- ( ( - X [ 376ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2 ) / 2.0 *
zc_int239 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B2
- ( - X [ 376ULL ] ) ) / 2.0 * X [ 403ULL ] ) ; t1345 [ 358ULL ] = - ( ( - X
[ 376ULL ] + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1
) / 2.0 * X [ 387ULL ] - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 - ( - X [
376ULL ] ) ) / 2.0 * X [ 405ULL ] ) ; t1345 [ 359ULL ] = - ( ( - X [ 376ULL ]
+ t2437 ) / 2.0 * X [ 386ULL ] - ( t2437 - ( - X [ 376ULL ] ) ) / 2.0 * X [
404ULL ] ) ; t1345 [ 360ULL ] = - ( ( t2426 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Q_conv ) * 0.001 ) - -
0.92095788639984788 ; t1345 [ 361ULL ] = - ( t3303 / 0.0019634954084936209 *
0.00031622776601683789 + intrm_sf_mf_1247 ) ; t1345 [ 362ULL ] = - ( t3316 /
0.0019634954084936209 * 0.00031622776601683789 + intrm_sf_mf_1258 ) ; t1345 [
363ULL ] = t2114 ; t1345 [ 364ULL ] = t129 ; U_idx_3 = X [ 389ULL ] * t2384 ;
t1345 [ 365ULL ] = - ( ( ( real_T ) ( M [ 15ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_3 / ( X [ 390ULL ] == 0.0 ? 1.0E-16 : X [ 390ULL ] ) ) * ( U_idx_3 / (
X [ 390ULL ] == 0.0 ? 1.0E-16 : X [ 390ULL ] ) ) * ( X [ 388ULL ] /
0.0019634954084936209 ) * ( X [ 388ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + intrm_sf_mf_1234 ) ; U_idx_3 = X [ 393ULL ] * t2384 ;
t1345 [ 366ULL ] = - ( ( ( real_T ) ( M [ 16ULL ] != 0 ) * 2.0 - 1.0 ) * (
U_idx_3 / ( X [ 394ULL ] == 0.0 ? 1.0E-16 : X [ 394ULL ] ) ) * ( U_idx_3 / (
X [ 394ULL ] == 0.0 ? 1.0E-16 : X [ 394ULL ] ) ) * ( - X [ 376ULL ] /
0.0019634954084936209 ) * ( - X [ 376ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2432 ) ; t1345 [ 367ULL ] = ( X [ 396ULL ] * t2384 /
461.523 - t2425 * X [ 51ULL ] ) / 0.64309276860371423 ; t1345 [ 368ULL ] = X
[ 391ULL ] * t2384 / 461.523 ; t1345 [ 369ULL ] = X [ 395ULL ] * t2424 ;
t1345 [ 370ULL ] = X [ 392ULL ] * t2384 / 259.836612622973 /
1.1422643670118826 ; t1345 [ 371ULL ] = - ( ( ( real_T ) ( M [ 17ULL ] != 0 )
* 2.0 - 1.0 ) * ( t2585 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) *
( t2585 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) * ( X [ 388ULL ] /
0.0019634954084936209 ) * ( X [ 388ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2446 ) ; t1345 [ 372ULL ] = - t2382 ; t1345 [ 373ULL
] = - t2383 ; t1345 [ 374ULL ] = - ( ( ( real_T ) ( M [ 17ULL ] != 0 ) * 2.0
- 1.0 ) * ( t2585 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) * (
t2585 / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) ) * ( - X [ 376ULL ] /
0.0019634954084936209 ) * ( - X [ 376ULL ] / 0.0019634954084936209 ) / 2.0 *
9.999999999999999E-14 + t2446 ) ; t1345 [ 375ULL ] = - t2382 ; t1345 [ 376ULL
] = - t2383 ; t1345 [ 377ULL ] = - ( U_idx_1 / 2.0 * t1922 - U_idx_2 / 2.0 *
X [ 412ULL ] ) ; t1345 [ 378ULL ] = - ( t4246 / 2.0 * X [ 387ULL ] - t4247 /
2.0 * X [ 408ULL ] ) ; t1345 [ 379ULL ] = - ( t4160 / 2.0 * X [ 386ULL ] -
t3909 / 2.0 * X [ 409ULL ] ) ; t1345 [ 380ULL ] = - ( ( - X [ 376ULL ] +
t2375 ) / 2.0 * zc_int275 - ( t2375 - ( - X [ 376ULL ] ) ) / 2.0 * X [ 412ULL
] ) / 365.59674280784293 ; t1345 [ 381ULL ] = - ( ( - X [ 376ULL ] + t2374 )
/ 2.0 * X [ 372ULL ] - ( t2374 - ( - X [ 376ULL ] ) ) / 2.0 * X [ 408ULL ] )
; t1345 [ 382ULL ] = - ( ( - X [ 376ULL ] + t2344 ) / 2.0 * X [ 371ULL ] - (
t2344 - ( - X [ 376ULL ] ) ) / 2.0 * X [ 409ULL ] ) ; t1345 [ 383ULL ] =
zc_int208 ; t1345 [ 384ULL ] = - ( t2450 - t2457 ) ; U_idx_1 = X [ 410ULL ] *
t2452 ; t1345 [ 385ULL ] = - ( ( ( real_T ) ( M [ 20ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( t2381 == 0.0 ? 1.0E-16 : t2381 ) ) * ( U_idx_1 / ( t2381 ==
0.0 ? 1.0E-16 : t2381 ) ) * ( X [ 376ULL ] / 0.64 / 0.0019634954084936209 ) *
( X [ 376ULL ] / 0.64 / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14
+ t1836 ) ; U_idx_1 = X [ 411ULL ] * t2452 ; t1345 [ 386ULL ] = - ( ( (
real_T ) ( M [ 21ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / 1.01325 ) * (
U_idx_1 / 1.01325 ) * ( X [ 376ULL ] / 0.64 / 0.0019634954084936209 ) * ( X [
376ULL ] / 0.64 / 0.0019634954084936209 ) / 2.0 * 9.999999999999999E-14 +
t1944 ) / 1.0413512978067061 ; t1345 [ 387ULL ] = - ( ( ( real_T ) ( M [
23ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2668 / ( X [ 407ULL ] == 0.0 ? 1.0E-16 : X
[ 407ULL ] ) ) * ( t2668 / ( X [ 407ULL ] == 0.0 ? 1.0E-16 : X [ 407ULL ] ) )
* ( X [ 376ULL ] / 0.64 / ( intrm_sf_mf_1259 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1259 ) ) * ( X [ 376ULL ] / 0.64 / ( intrm_sf_mf_1259 == 0.0 ?
1.0E-16 : intrm_sf_mf_1259 ) ) / 2.0 * 9.999999999999999E-14 +
intrm_sf_mf_1293 ) ; t1345 [ 388ULL ] = - ( ( - X [ 353ULL ] + t2503 ) / 2.0
* t2249 - ( t2503 - ( - X [ 353ULL ] ) ) / 2.0 * X [ 419ULL ] ) ; t1345 [
389ULL ] = - ( ( - X [ 353ULL ] + t2502 ) / 2.0 * X [ 343ULL ] - ( t2502 - (
- X [ 353ULL ] ) ) / 2.0 * X [ 421ULL ] ) ; t1345 [ 390ULL ] = - ( ( - X [
353ULL ] + t2485 ) / 2.0 * X [ 342ULL ] - ( t2485 - ( - X [ 353ULL ] ) ) /
2.0 * X [ 420ULL ] ) ; t1345 [ 391ULL ] = - ( ( X [ 415ULL ] + t2511 ) / 2.0
* t2251 - ( t2511 - X [ 415ULL ] ) / 2.0 * X [ 422ULL ] ) ; t1345 [ 392ULL ]
= - ( ( X [ 415ULL ] + t2509 ) / 2.0 * X [ 75ULL ] - ( t2509 - X [ 415ULL ] )
/ 2.0 * X [ 426ULL ] ) ; t1345 [ 393ULL ] = - ( ( X [ 415ULL ] +
intrm_sf_mf_1383 ) / 2.0 * X [ 74ULL ] - ( intrm_sf_mf_1383 - X [ 415ULL ] )
/ 2.0 * X [ 425ULL ] ) ; t1345 [ 394ULL ] = - ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Q_cond + t2496 ) * 0.001 )
; t1345 [ 395ULL ] = - ( t3369 / 0.32 * 0.00031622776601683789 + t2561 ) ;
t1345 [ 396ULL ] = - ( t3383 / 0.32 * 0.00031622776601683789 +
intrm_sf_mf_1433 ) ; t1345 [ 397ULL ] = t131 ; t1345 [ 398ULL ] = t2174 ;
U_idx_1 = X [ 413ULL ] * t2460 ; t1345 [ 399ULL ] = - ( ( ( real_T ) ( M [
30ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [ 414ULL ] == 0.0 ? 1.0E-16 :
X [ 414ULL ] ) ) * ( U_idx_1 / ( X [ 414ULL ] == 0.0 ? 1.0E-16 : X [ 414ULL ]
) ) * ( - X [ 353ULL ] / 0.32 ) * ( - X [ 353ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_y_w_B_in ) ; U_idx_1 = X [
416ULL ] * t2460 ; t1345 [ 400ULL ] = - ( ( ( real_T ) ( M [ 31ULL ] != 0 ) *
2.0 - 1.0 ) * ( U_idx_1 / ( X [ 417ULL ] == 0.0 ? 1.0E-16 : X [ 417ULL ] ) )
* ( U_idx_1 / ( X [ 417ULL ] == 0.0 ? 1.0E-16 : X [ 417ULL ] ) ) * ( X [
415ULL ] / 0.32 ) * ( X [ 415ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 +
t2363 ) ; t1345 [ 401ULL ] = ( X [ 89ULL ] * t2460 / 461.523 - t2493 * X [
14ULL ] ) / 0.64309276860371423 ; t1345 [ 402ULL ] = X [ 87ULL ] * t2460 /
461.523 ; t1345 [ 403ULL ] = X [ 90ULL ] * t2491 ; t1345 [ 404ULL ] = X [
86ULL ] * t2460 / 259.836612622973 / 1.1422643670118826 ; t1345 [ 405ULL ] =
0.0 ; t1345 [ 406ULL ] = - ( ( ( real_T ) ( M [ 32ULL ] != 0 ) * 2.0 - 1.0 )
* ( t2704 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) ) * ( t2704 / ( X
[ 53ULL ] == 0.0 ? 1.0E-16 : X [ 53ULL ] ) ) * ( - X [ 353ULL ] / 0.32 ) * (
- X [ 353ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2518 ) ; t1345 [
407ULL ] = - t2456 ; t1345 [ 408ULL ] = - t2458 ; t1345 [ 409ULL ] = - ( ( (
real_T ) ( M [ 32ULL ] != 0 ) * 2.0 - 1.0 ) * ( t2704 / ( X [ 53ULL ] == 0.0
? 1.0E-16 : X [ 53ULL ] ) ) * ( t2704 / ( X [ 53ULL ] == 0.0 ? 1.0E-16 : X [
53ULL ] ) ) * ( X [ 415ULL ] / 0.32 ) * ( X [ 415ULL ] / 0.32 ) / 2.0 *
9.999999999999999E-14 + t2518 ) ; t1345 [ 410ULL ] = - t2456 ; t1345 [ 411ULL
] = - t2458 ; t1345 [ 412ULL ] = - ( ( - X [ 415ULL ] + t2511 ) / 2.0 * t2240
- ( t2511 - ( - X [ 415ULL ] ) ) / 2.0 * X [ 431ULL ] ) ; t1345 [ 413ULL ] =
- ( ( - X [ 415ULL ] + t2509 ) / 2.0 * X [ 75ULL ] - ( t2509 - ( - X [ 415ULL
] ) ) / 2.0 * X [ 433ULL ] ) ; t1345 [ 414ULL ] = - ( ( - X [ 415ULL ] +
intrm_sf_mf_1383 ) / 2.0 * X [ 74ULL ] - ( intrm_sf_mf_1383 - ( - X [ 415ULL
] ) ) / 2.0 * X [ 432ULL ] ) ; t1345 [ 415ULL ] = - ( ( - X [ 388ULL ] +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5 ) / 2.0 *
zc_int320 - ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_convection_5
- ( - X [ 388ULL ] ) ) / 2.0 * X [ 434ULL ] ) ; t1345 [ 416ULL ] = - ( ( - X
[ 388ULL ] + t1884 ) / 2.0 * X [ 368ULL ] - ( t1884 - ( - X [ 388ULL ] ) ) /
2.0 * X [ 436ULL ] ) ; t1345 [ 417ULL ] = - ( ( - X [ 388ULL ] + t2435 ) /
2.0 * X [ 367ULL ] - ( t2435 - ( - X [ 388ULL ] ) ) / 2.0 * X [ 435ULL ] ) ;
t1345 [ 418ULL ] = - ( ( t2545 + t2430 ) * 0.001 ) ; t1345 [ 419ULL ] = - (
t3411 / 0.32 * 0.00031622776601683789 + t2568 ) ; t1345 [ 420ULL ] = - (
t3427 / 0.32 * 0.00031622776601683789 + t2577 ) ; t1345 [ 421ULL ] = t133 ;
t1345 [ 422ULL ] = t1920 ; U_idx_1 = X [ 427ULL ] * t2522 ; t1345 [ 423ULL ]
= - ( ( ( real_T ) ( M [ 38ULL ] != 0 ) * 2.0 - 1.0 ) * ( U_idx_1 / ( X [
428ULL ] == 0.0 ? 1.0E-16 : X [ 428ULL ] ) ) * ( U_idx_1 / ( X [ 428ULL ] ==
0.0 ? 1.0E-16 : X [ 428ULL ] ) ) * ( - X [ 415ULL ] / 0.32 ) * ( - X [ 415ULL
] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2459 ) ; U_idx_1 = X [ 429ULL ] *
t2522 ; t1345 [ 424ULL ] = - ( ( ( real_T ) ( M [ 39ULL ] != 0 ) * 2.0 - 1.0
) * ( U_idx_1 / ( X [ 430ULL ] == 0.0 ? 1.0E-16 : X [ 430ULL ] ) ) * (
U_idx_1 / ( X [ 430ULL ] == 0.0 ? 1.0E-16 : X [ 430ULL ] ) ) * ( - X [ 388ULL
] / 0.32 ) * ( - X [ 388ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2559
) ; t1345 [ 425ULL ] = ( X [ 94ULL ] * t2522 / 461.523 - t2544 * X [ 17ULL ]
) / 0.64309276860371423 ; t1345 [ 426ULL ] = X [ 92ULL ] * t2522 / 461.523 ;
t1345 [ 427ULL ] = X [ 95ULL ] * t2543 ; t1345 [ 428ULL ] = X [ 91ULL ] *
t2522 / 259.836612622973 / 1.1422643670118826 ; t1345 [ 429ULL ] = 0.0 ;
t1345 [ 430ULL ] = - ( ( ( real_T ) ( M [ 40ULL ] != 0 ) * 2.0 - 1.0 ) * (
t2799 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( t2799 / ( X [
54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( - X [ 415ULL ] / 0.32 ) * ( -
X [ 415ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2548 ) ; t1345 [
431ULL ] = - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ; t1345
[ 432ULL ] = - t2521 ; t1345 [ 433ULL ] = - ( ( ( real_T ) ( M [ 40ULL ] != 0
) * 2.0 - 1.0 ) * ( t2799 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) )
* ( t2799 / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) ) * ( - X [ 388ULL
] / 0.32 ) * ( - X [ 388ULL ] / 0.32 ) / 2.0 * 9.999999999999999E-14 + t2548
) ; t1345 [ 434ULL ] = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_h_w_I ; t1345 [ 435ULL ] =
- t2521 ; t1345 [ 436ULL ] = t2179 ; t1345 [ 437ULL ] = - ( t2565 / ( X [
62ULL ] == 0.0 ? 1.0E-16 : X [ 62ULL ] ) * 1000.0 ) ; t1345 [ 438ULL ] = -
t1791 [ 0ULL ] ; t1345 [ 439ULL ] = 0.0 ; for ( b = 0 ; b < 440 ; b ++ ) {
out . mX [ b ] = t1345 [ b ] ; } ( void ) LC ; ( void ) t4354 ; return 0 ; }
