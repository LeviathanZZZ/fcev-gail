/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_f.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t4886, NeDsMethodOutput *t4887)
{
  ETTS0 af_efOut;
  ETTS0 ah_efOut;
  ETTS0 aq_efOut;
  ETTS0 av_efOut;
  ETTS0 bc_efOut;
  ETTS0 bd_efOut;
  ETTS0 bg_efOut;
  ETTS0 bi_efOut;
  ETTS0 bt_efOut;
  ETTS0 bu_efOut;
  ETTS0 by_efOut;
  ETTS0 c_efOut;
  ETTS0 ce_efOut;
  ETTS0 cs_efOut;
  ETTS0 db_efOut;
  ETTS0 de_efOut;
  ETTS0 dg_efOut;
  ETTS0 dr_efOut;
  ETTS0 dw_efOut;
  ETTS0 dy_efOut;
  ETTS0 e_efOut;
  ETTS0 efOut;
  ETTS0 ef_efOut;
  ETTS0 eh_efOut;
  ETTS0 el_efOut;
  ETTS0 eq_efOut;
  ETTS0 ev_efOut;
  ETTS0 fd_efOut;
  ETTS0 fe_efOut;
  ETTS0 fk_efOut;
  ETTS0 fm_efOut;
  ETTS0 ft_efOut;
  ETTS0 fu_efOut;
  ETTS0 fy_efOut;
  ETTS0 gf_efOut;
  ETTS0 gs_efOut;
  ETTS0 he_efOut;
  ETTS0 hg_efOut;
  ETTS0 hr_efOut;
  ETTS0 hw_efOut;
  ETTS0 hy_efOut;
  ETTS0 i_efOut;
  ETTS0 if_efOut;
  ETTS0 ih_efOut;
  ETTS0 ii_efOut;
  ETTS0 ij_efOut;
  ETTS0 in_efOut;
  ETTS0 iq_efOut;
  ETTS0 ix_efOut;
  ETTS0 jf_efOut;
  ETTS0 jg_efOut;
  ETTS0 jk_efOut;
  ETTS0 jo_efOut;
  ETTS0 jt_efOut;
  ETTS0 ju_efOut;
  ETTS0 ke_efOut;
  ETTS0 kp_efOut;
  ETTS0 ks_efOut;
  ETTS0 le_efOut;
  ETTS0 lg_efOut;
  ETTS0 lp_efOut;
  ETTS0 lr_efOut;
  ETTS0 lw_efOut;
  ETTS0 mg_efOut;
  ETTS0 mh_efOut;
  ETTS0 mj_efOut;
  ETTS0 mn_efOut;
  ETTS0 mq_efOut;
  ETTS0 my_efOut;
  ETTS0 ne_efOut;
  ETTS0 no_efOut;
  ETTS0 np_efOut;
  ETTS0 nu_efOut;
  ETTS0 ny_efOut;
  ETTS0 oc_efOut;
  ETTS0 os_efOut;
  ETTS0 ot_efOut;
  ETTS0 oy_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 pd_efOut;
  ETTS0 pe_efOut;
  ETTS0 pr_efOut;
  ETTS0 pw_efOut;
  ETTS0 py_efOut;
  ETTS0 qe_efOut;
  ETTS0 qf_efOut;
  ETTS0 qh_efOut;
  ETTS0 qj_efOut;
  ETTS0 qk_efOut;
  ETTS0 ql_efOut;
  ETTS0 qq_efOut;
  ETTS0 qy_efOut;
  ETTS0 rm_efOut;
  ETTS0 rp_efOut;
  ETTS0 ru_efOut;
  ETTS0 se_efOut;
  ETTS0 sf_efOut;
  ETTS0 ss_efOut;
  ETTS0 st_efOut;
  ETTS0 sx_efOut;
  ETTS0 t103;
  ETTS0 t107;
  ETTS0 t116;
  ETTS0 t117;
  ETTS0 t119;
  ETTS0 t12;
  ETTS0 t120;
  ETTS0 t128;
  ETTS0 t131;
  ETTS0 t132;
  ETTS0 t135;
  ETTS0 t136;
  ETTS0 t137;
  ETTS0 t138;
  ETTS0 t47;
  ETTS0 t57;
  ETTS0 t59;
  ETTS0 t64;
  ETTS0 t65;
  ETTS0 t68;
  ETTS0 t69;
  ETTS0 t70;
  ETTS0 t72;
  ETTS0 t76;
  ETTS0 t77;
  ETTS0 t82;
  ETTS0 t86;
  ETTS0 t90;
  ETTS0 t91;
  ETTS0 tb_efOut;
  ETTS0 tf_efOut;
  ETTS0 tg_efOut;
  ETTS0 tn_efOut;
  ETTS0 tr_efOut;
  ETTS0 tw_efOut;
  ETTS0 ue_efOut;
  ETTS0 uj_efOut;
  ETTS0 ul_efOut;
  ETTS0 uq_efOut;
  ETTS0 uv_efOut;
  ETTS0 ux_efOut;
  ETTS0 ve_efOut;
  ETTS0 vf_efOut;
  ETTS0 vi_efOut;
  ETTS0 vm_efOut;
  ETTS0 vp_efOut;
  ETTS0 vu_efOut;
  ETTS0 wh_efOut;
  ETTS0 ws_efOut;
  ETTS0 wt_efOut;
  ETTS0 wx_efOut;
  ETTS0 xe_efOut;
  ETTS0 xf_efOut;
  ETTS0 xo_efOut;
  ETTS0 xr_efOut;
  ETTS0 xw_efOut;
  ETTS0 yf_efOut;
  ETTS0 yj_efOut;
  ETTS0 yq_efOut;
  ETTS0 yv_efOut;
  ETTS0 yx_efOut;
  PmRealVector out;
  real_T X[480];
  real_T t1612[480];
  real_T nonscalar45[7];
  real_T nonscalar44[6];
  real_T nonscalar48[5];
  real_T nonscalar49[3];
  real_T t2114[2];
  real_T aab_efOut[1];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T ag_efOut[1];
  real_T ai_efOut[1];
  real_T aj_efOut[1];
  real_T ak_efOut[1];
  real_T al_efOut[1];
  real_T am_efOut[1];
  real_T an_efOut[1];
  real_T ao_efOut[1];
  real_T ap_efOut[1];
  real_T ar_efOut[1];
  real_T as_efOut[1];
  real_T at_efOut[1];
  real_T au_efOut[1];
  real_T aw_efOut[1];
  real_T ax_efOut[1];
  real_T ay_efOut[1];
  real_T b_efOut[1];
  real_T bab_efOut[1];
  real_T bb_efOut[1];
  real_T be_efOut[1];
  real_T bf_efOut[1];
  real_T bh_efOut[1];
  real_T bj_efOut[1];
  real_T bk_efOut[1];
  real_T bl_efOut[1];
  real_T bm_efOut[1];
  real_T bn_efOut[1];
  real_T bo_efOut[1];
  real_T bp_efOut[1];
  real_T bq_efOut[1];
  real_T br_efOut[1];
  real_T bs_efOut[1];
  real_T bv_efOut[1];
  real_T bw_efOut[1];
  real_T bx_efOut[1];
  real_T cab_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T cf_efOut[1];
  real_T cg_efOut[1];
  real_T ch_efOut[1];
  real_T ci_efOut[1];
  real_T cj_efOut[1];
  real_T ck_efOut[1];
  real_T cl_efOut[1];
  real_T cm_efOut[1];
  real_T cn_efOut[1];
  real_T co_efOut[1];
  real_T cp_efOut[1];
  real_T cq_efOut[1];
  real_T cr_efOut[1];
  real_T ct_efOut[1];
  real_T cu_efOut[1];
  real_T cv_efOut[1];
  real_T cw_efOut[1];
  real_T cx_efOut[1];
  real_T cy_efOut[1];
  real_T d_efOut[1];
  real_T dab_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T df_efOut[1];
  real_T dh_efOut[1];
  real_T di_efOut[1];
  real_T dj_efOut[1];
  real_T dk_efOut[1];
  real_T dl_efOut[1];
  real_T dm_efOut[1];
  real_T dn_efOut[1];
  real_T do_efOut[1];
  real_T dp_efOut[1];
  real_T dq_efOut[1];
  real_T ds_efOut[1];
  real_T dt_efOut[1];
  real_T du_efOut[1];
  real_T dv_efOut[1];
  real_T dx_efOut[1];
  real_T eab_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T ed_efOut[1];
  real_T ee_efOut[1];
  real_T eg_efOut[1];
  real_T ei_efOut[1];
  real_T ej_efOut[1];
  real_T ek_efOut[1];
  real_T em_efOut[1];
  real_T en_efOut[1];
  real_T eo_efOut[1];
  real_T ep_efOut[1];
  real_T er_efOut[1];
  real_T es_efOut[1];
  real_T et_efOut[1];
  real_T eu_efOut[1];
  real_T ew_efOut[1];
  real_T ex_efOut[1];
  real_T ey_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fc_efOut[1];
  real_T ff_efOut[1];
  real_T fg_efOut[1];
  real_T fh_efOut[1];
  real_T fi_efOut[1];
  real_T fj_efOut[1];
  real_T fl_efOut[1];
  real_T fn_efOut[1];
  real_T fo_efOut[1];
  real_T fp_efOut[1];
  real_T fq_efOut[1];
  real_T fr_efOut[1];
  real_T fs_efOut[1];
  real_T fv_efOut[1];
  real_T fw_efOut[1];
  real_T fx_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T ge_efOut[1];
  real_T gg_efOut[1];
  real_T gh_efOut[1];
  real_T gi_efOut[1];
  real_T gj_efOut[1];
  real_T gk_efOut[1];
  real_T gl_efOut[1];
  real_T gm_efOut[1];
  real_T gn_efOut[1];
  real_T go_efOut[1];
  real_T gp_efOut[1];
  real_T gq_efOut[1];
  real_T gr_efOut[1];
  real_T gt_efOut[1];
  real_T gu_efOut[1];
  real_T gv_efOut[1];
  real_T gw_efOut[1];
  real_T gx_efOut[1];
  real_T gy_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T hf_efOut[1];
  real_T hh_efOut[1];
  real_T hi_efOut[1];
  real_T hj_efOut[1];
  real_T hk_efOut[1];
  real_T hl_efOut[1];
  real_T hm_efOut[1];
  real_T hn_efOut[1];
  real_T ho_efOut[1];
  real_T hp_efOut[1];
  real_T hq_efOut[1];
  real_T hs_efOut[1];
  real_T ht_efOut[1];
  real_T hu_efOut[1];
  real_T hv_efOut[1];
  real_T hx_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T ig_efOut[1];
  real_T ik_efOut[1];
  real_T il_efOut[1];
  real_T im_efOut[1];
  real_T io_efOut[1];
  real_T ip_efOut[1];
  real_T ir_efOut[1];
  real_T is_efOut[1];
  real_T it_efOut[1];
  real_T iu_efOut[1];
  real_T iv_efOut[1];
  real_T iw_efOut[1];
  real_T iy_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T jd_efOut[1];
  real_T je_efOut[1];
  real_T jh_efOut[1];
  real_T ji_efOut[1];
  real_T jj_efOut[1];
  real_T jl_efOut[1];
  real_T jm_efOut[1];
  real_T jn_efOut[1];
  real_T jp_efOut[1];
  real_T jq_efOut[1];
  real_T jr_efOut[1];
  real_T js_efOut[1];
  real_T jv_efOut[1];
  real_T jw_efOut[1];
  real_T jx_efOut[1];
  real_T jy_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T kd_efOut[1];
  real_T kf_efOut[1];
  real_T kg_efOut[1];
  real_T kh_efOut[1];
  real_T ki_efOut[1];
  real_T kj_efOut[1];
  real_T kk_efOut[1];
  real_T kl_efOut[1];
  real_T km_efOut[1];
  real_T kn_efOut[1];
  real_T ko_efOut[1];
  real_T kq_efOut[1];
  real_T kr_efOut[1];
  real_T kt_efOut[1];
  real_T ku_efOut[1];
  real_T kv_efOut[1];
  real_T kw_efOut[1];
  real_T kx_efOut[1];
  real_T ky_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T lf_efOut[1];
  real_T lh_efOut[1];
  real_T li_efOut[1];
  real_T lj_efOut[1];
  real_T lk_efOut[1];
  real_T ll_efOut[1];
  real_T lm_efOut[1];
  real_T ln_efOut[1];
  real_T lo_efOut[1];
  real_T lq_efOut[1];
  real_T ls_efOut[1];
  real_T lt_efOut[1];
  real_T lu_efOut[1];
  real_T lv_efOut[1];
  real_T lx_efOut[1];
  real_T ly_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T me_efOut[1];
  real_T mf_efOut[1];
  real_T mi_efOut[1];
  real_T mk_efOut[1];
  real_T ml_efOut[1];
  real_T mm_efOut[1];
  real_T mo_efOut[1];
  real_T mp_efOut[1];
  real_T mr_efOut[1];
  real_T ms_efOut[1];
  real_T mt_efOut[1];
  real_T mu_efOut[1];
  real_T mv_efOut[1];
  real_T mw_efOut[1];
  real_T mx_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T nd_efOut[1];
  real_T nf_efOut[1];
  real_T ng_efOut[1];
  real_T nh_efOut[1];
  real_T ni_efOut[1];
  real_T nj_efOut[1];
  real_T nk_efOut[1];
  real_T nl_efOut[1];
  real_T nm_efOut[1];
  real_T nn_efOut[1];
  real_T nq_efOut[1];
  real_T nr_efOut[1];
  real_T ns_efOut[1];
  real_T nt_efOut[1];
  real_T nv_efOut[1];
  real_T nw_efOut[1];
  real_T nx_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T od_efOut[1];
  real_T oe_efOut[1];
  real_T of_efOut[1];
  real_T og_efOut[1];
  real_T oh_efOut[1];
  real_T oi_efOut[1];
  real_T oj_efOut[1];
  real_T ok_efOut[1];
  real_T ol_efOut[1];
  real_T om_efOut[1];
  real_T on_efOut[1];
  real_T oo_efOut[1];
  real_T op_efOut[1];
  real_T oq_efOut[1];
  real_T or_efOut[1];
  real_T ou_efOut[1];
  real_T ov_efOut[1];
  real_T ow_efOut[1];
  real_T ox_efOut[1];
  real_T pc_efOut[1];
  real_T pf_efOut[1];
  real_T pg_efOut[1];
  real_T ph_efOut[1];
  real_T pi_efOut[1];
  real_T pj_efOut[1];
  real_T pk_efOut[1];
  real_T pl_efOut[1];
  real_T pm_efOut[1];
  real_T pn_efOut[1];
  real_T po_efOut[1];
  real_T pp_efOut[1];
  real_T pq_efOut[1];
  real_T ps_efOut[1];
  real_T pt_efOut[1];
  real_T pu_efOut[1];
  real_T pv_efOut[1];
  real_T px_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T qg_efOut[1];
  real_T qi_efOut[1];
  real_T qm_efOut[1];
  real_T qn_efOut[1];
  real_T qo_efOut[1];
  real_T qp_efOut[1];
  real_T qr_efOut[1];
  real_T qs_efOut[1];
  real_T qt_efOut[1];
  real_T qu_efOut[1];
  real_T qv_efOut[1];
  real_T qw_efOut[1];
  real_T qx_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T re_efOut[1];
  real_T rf_efOut[1];
  real_T rg_efOut[1];
  real_T rh_efOut[1];
  real_T ri_efOut[1];
  real_T rj_efOut[1];
  real_T rk_efOut[1];
  real_T rl_efOut[1];
  real_T rn_efOut[1];
  real_T ro_efOut[1];
  real_T rq_efOut[1];
  real_T rr_efOut[1];
  real_T rs_efOut[1];
  real_T rt_efOut[1];
  real_T rv_efOut[1];
  real_T rw_efOut[1];
  real_T rx_efOut[1];
  real_T ry_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T sd_efOut[1];
  real_T sg_efOut[1];
  real_T sh_efOut[1];
  real_T si_efOut[1];
  real_T sj_efOut[1];
  real_T sk_efOut[1];
  real_T sl_efOut[1];
  real_T sm_efOut[1];
  real_T sn_efOut[1];
  real_T so_efOut[1];
  real_T sp_efOut[1];
  real_T sq_efOut[1];
  real_T sr_efOut[1];
  real_T su_efOut[1];
  real_T sv_efOut[1];
  real_T sw_efOut[1];
  real_T sy_efOut[1];
  real_T t1565[1];
  real_T t1613[1];
  real_T t2093[1];
  real_T t2096[1];
  real_T t_efOut[1];
  real_T tc_efOut[1];
  real_T td_efOut[1];
  real_T te_efOut[1];
  real_T th_efOut[1];
  real_T ti_efOut[1];
  real_T tj_efOut[1];
  real_T tk_efOut[1];
  real_T tl_efOut[1];
  real_T tm_efOut[1];
  real_T to_efOut[1];
  real_T tp_efOut[1];
  real_T tq_efOut[1];
  real_T ts_efOut[1];
  real_T tt_efOut[1];
  real_T tu_efOut[1];
  real_T tv_efOut[1];
  real_T tx_efOut[1];
  real_T ty_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T ud_efOut[1];
  real_T uf_efOut[1];
  real_T ug_efOut[1];
  real_T uh_efOut[1];
  real_T ui_efOut[1];
  real_T uk_efOut[1];
  real_T um_efOut[1];
  real_T un_efOut[1];
  real_T uo_efOut[1];
  real_T up_efOut[1];
  real_T ur_efOut[1];
  real_T us_efOut[1];
  real_T ut_efOut[1];
  real_T uu_efOut[1];
  real_T uw_efOut[1];
  real_T uy_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T vd_efOut[1];
  real_T vg_efOut[1];
  real_T vh_efOut[1];
  real_T vj_efOut[1];
  real_T vk_efOut[1];
  real_T vl_efOut[1];
  real_T vn_efOut[1];
  real_T vo_efOut[1];
  real_T vq_efOut[1];
  real_T vr_efOut[1];
  real_T vs_efOut[1];
  real_T vt_efOut[1];
  real_T vv_efOut[1];
  real_T vw_efOut[1];
  real_T vx_efOut[1];
  real_T vy_efOut[1];
  real_T w_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T we_efOut[1];
  real_T wf_efOut[1];
  real_T wg_efOut[1];
  real_T wi_efOut[1];
  real_T wj_efOut[1];
  real_T wk_efOut[1];
  real_T wl_efOut[1];
  real_T wm_efOut[1];
  real_T wn_efOut[1];
  real_T wo_efOut[1];
  real_T wp_efOut[1];
  real_T wq_efOut[1];
  real_T wr_efOut[1];
  real_T wu_efOut[1];
  real_T wv_efOut[1];
  real_T ww_efOut[1];
  real_T wy_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T xg_efOut[1];
  real_T xh_efOut[1];
  real_T xi_efOut[1];
  real_T xj_efOut[1];
  real_T xk_efOut[1];
  real_T xl_efOut[1];
  real_T xm_efOut[1];
  real_T xn_efOut[1];
  real_T xp_efOut[1];
  real_T xq_efOut[1];
  real_T xs_efOut[1];
  real_T xt_efOut[1];
  real_T xu_efOut[1];
  real_T xv_efOut[1];
  real_T xx_efOut[1];
  real_T xy_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T yd_efOut[1];
  real_T ye_efOut[1];
  real_T yg_efOut[1];
  real_T yh_efOut[1];
  real_T yi_efOut[1];
  real_T yk_efOut[1];
  real_T yl_efOut[1];
  real_T ym_efOut[1];
  real_T yn_efOut[1];
  real_T yo_efOut[1];
  real_T yp_efOut[1];
  real_T yr_efOut[1];
  real_T ys_efOut[1];
  real_T yt_efOut[1];
  real_T yu_efOut[1];
  real_T yw_efOut[1];
  real_T yy_efOut[1];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan7;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Flow_Resistance_TL_9;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_convection_8;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_u_w;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_10;
  real_T U_idx_11;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T U_idx_8;
  real_T U_idx_9;
  real_T intrm_sf_mf_1061;
  real_T intrm_sf_mf_1140;
  real_T intrm_sf_mf_1177;
  real_T intrm_sf_mf_1248;
  real_T intrm_sf_mf_127;
  real_T intrm_sf_mf_1292;
  real_T intrm_sf_mf_1335;
  real_T intrm_sf_mf_139;
  real_T intrm_sf_mf_1395;
  real_T intrm_sf_mf_1437;
  real_T intrm_sf_mf_1443;
  real_T intrm_sf_mf_1449;
  real_T intrm_sf_mf_1452;
  real_T intrm_sf_mf_1553;
  real_T intrm_sf_mf_1556;
  real_T intrm_sf_mf_1579;
  real_T intrm_sf_mf_1586;
  real_T intrm_sf_mf_1623;
  real_T intrm_sf_mf_163;
  real_T intrm_sf_mf_1651;
  real_T intrm_sf_mf_1660;
  real_T intrm_sf_mf_1704;
  real_T intrm_sf_mf_176;
  real_T intrm_sf_mf_202;
  real_T intrm_sf_mf_327;
  real_T intrm_sf_mf_339;
  real_T intrm_sf_mf_502;
  real_T intrm_sf_mf_509;
  real_T intrm_sf_mf_713;
  real_T intrm_sf_mf_742;
  real_T intrm_sf_mf_791;
  real_T intrm_sf_mf_800;
  real_T intrm_sf_mf_838;
  real_T piece101;
  real_T piece117;
  real_T piece120;
  real_T piece14;
  real_T piece174;
  real_T piece194;
  real_T piece229;
  real_T piece245;
  real_T piece307;
  real_T piece313;
  real_T piece82;
  real_T piece98;
  real_T t147;
  real_T t151;
  real_T t152;
  real_T t155;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t2086_idx_0;
  real_T t2099_idx_0;
  real_T t2100_idx_0;
  real_T t2117;
  real_T t2125;
  real_T t2129;
  real_T t2132;
  real_T t2137;
  real_T t2140;
  real_T t2141;
  real_T t2145;
  real_T t2148;
  real_T t2149;
  real_T t2157;
  real_T t2163;
  real_T t2172;
  real_T t2187;
  real_T t2215;
  real_T t2216;
  real_T t2217;
  real_T t2218;
  real_T t2219;
  real_T t2220;
  real_T t2221;
  real_T t2222;
  real_T t2223;
  real_T t2225;
  real_T t2229;
  real_T t2230;
  real_T t2233;
  real_T t2234;
  real_T t2235;
  real_T t2236;
  real_T t2237;
  real_T t2238;
  real_T t2241;
  real_T t2243;
  real_T t2244;
  real_T t2245;
  real_T t2247;
  real_T t2248;
  real_T t2249;
  real_T t2254;
  real_T t2255;
  real_T t2256;
  real_T t2257;
  real_T t2260;
  real_T t2262;
  real_T t2263;
  real_T t2264;
  real_T t2266;
  real_T t2267;
  real_T t2268;
  real_T t2269;
  real_T t2274;
  real_T t2275;
  real_T t2276;
  real_T t2279;
  real_T t2281;
  real_T t2283;
  real_T t2284;
  real_T t2286;
  real_T t2287;
  real_T t2289;
  real_T t2290;
  real_T t2291;
  real_T t2292;
  real_T t2293;
  real_T t2294;
  real_T t2295;
  real_T t2297;
  real_T t2298;
  real_T t2300;
  real_T t2302;
  real_T t2306;
  real_T t2307;
  real_T t2310;
  real_T t2311;
  real_T t2312;
  real_T t2313;
  real_T t2314;
  real_T t2316;
  real_T t2317;
  real_T t2321;
  real_T t2323;
  real_T t2324;
  real_T t2329;
  real_T t2330;
  real_T t2331;
  real_T t2334;
  real_T t2335;
  real_T t2339;
  real_T t2341;
  real_T t2343;
  real_T t2345;
  real_T t2351;
  real_T t2353;
  real_T t2354;
  real_T t2355;
  real_T t2356;
  real_T t2357;
  real_T t2359;
  real_T t2360;
  real_T t2361;
  real_T t2362;
  real_T t2363;
  real_T t2365;
  real_T t2366;
  real_T t2367;
  real_T t2369;
  real_T t2370;
  real_T t2372;
  real_T t2379;
  real_T t2380;
  real_T t2382;
  real_T t2383;
  real_T t2385;
  real_T t2386;
  real_T t2387;
  real_T t2388;
  real_T t2389;
  real_T t2390;
  real_T t2392;
  real_T t2397;
  real_T t2399;
  real_T t2400;
  real_T t2402;
  real_T t2404;
  real_T t2406;
  real_T t2407;
  real_T t2409;
  real_T t2410;
  real_T t2411;
  real_T t2412;
  real_T t2414;
  real_T t2415;
  real_T t2416;
  real_T t2417;
  real_T t2419;
  real_T t2420;
  real_T t2421;
  real_T t2423;
  real_T t2424;
  real_T t2425;
  real_T t2426;
  real_T t2427;
  real_T t2428;
  real_T t2429;
  real_T t2430;
  real_T t2432;
  real_T t2433;
  real_T t2434;
  real_T t2436;
  real_T t2437;
  real_T t2438;
  real_T t2439;
  real_T t2440;
  real_T t2443;
  real_T t2444;
  real_T t2446;
  real_T t2447;
  real_T t2448;
  real_T t2449;
  real_T t2450;
  real_T t2451;
  real_T t2452;
  real_T t2453;
  real_T t2454;
  real_T t2456;
  real_T t2457;
  real_T t2458;
  real_T t2459;
  real_T t2460;
  real_T t2461;
  real_T t2464;
  real_T t2466;
  real_T t2467;
  real_T t2471;
  real_T t2472;
  real_T t2474;
  real_T t2479;
  real_T t2480;
  real_T t2482;
  real_T t2483;
  real_T t2485;
  real_T t2486;
  real_T t2491;
  real_T t2492;
  real_T t2494;
  real_T t2496;
  real_T t2500;
  real_T t2501;
  real_T t2503;
  real_T t2504;
  real_T t2505;
  real_T t2507;
  real_T t2508;
  real_T t2510;
  real_T t2511;
  real_T t2513;
  real_T t2515;
  real_T t2516;
  real_T t2517;
  real_T t2518;
  real_T t2519;
  real_T t2521;
  real_T t2524;
  real_T t2525;
  real_T t2526;
  real_T t2527;
  real_T t2528;
  real_T t2529;
  real_T t2530;
  real_T t2531;
  real_T t2532;
  real_T t2534;
  real_T t2536;
  real_T t2537;
  real_T t2538;
  real_T t2539;
  real_T t2540;
  real_T t2542;
  real_T t2543;
  real_T t2544;
  real_T t2546;
  real_T t2548;
  real_T t2550;
  real_T t2552;
  real_T t2553;
  real_T t2554;
  real_T t2555;
  real_T t2556;
  real_T t2558;
  real_T t2559;
  real_T t2560;
  real_T t2562;
  real_T t2563;
  real_T t2567;
  real_T t2568;
  real_T t2569;
  real_T t2573;
  real_T t2574;
  real_T t2575;
  real_T t2579;
  real_T t2581;
  real_T t2587;
  real_T t2589;
  real_T t2590;
  real_T t2592;
  real_T t2593;
  real_T t2594;
  real_T t2596;
  real_T t2598;
  real_T t2599;
  real_T t2600;
  real_T t2606;
  real_T t2607;
  real_T t2613;
  real_T t2615;
  real_T t2616;
  real_T t2620;
  real_T t2623;
  real_T t2625;
  real_T t2627;
  real_T t2629;
  real_T t2630;
  real_T t2634;
  real_T t2637;
  real_T t2639;
  real_T t2642;
  real_T t2643;
  real_T t2645;
  real_T t2646;
  real_T t2647;
  real_T t2648;
  real_T t2649;
  real_T t2654;
  real_T t2655;
  real_T t2656;
  real_T t2657;
  real_T t2661;
  real_T t2663;
  real_T t2666;
  real_T t2667;
  real_T t2668;
  real_T t2669;
  real_T t2670;
  real_T t2671;
  real_T t2672;
  real_T t2673;
  real_T t2675;
  real_T t2676;
  real_T t2677;
  real_T t2678;
  real_T t2679;
  real_T t2680;
  real_T t2681;
  real_T t2683;
  real_T t2685;
  real_T t2686;
  real_T t2689;
  real_T t2690;
  real_T t2691;
  real_T t2692;
  real_T t2694;
  real_T t2696;
  real_T t2697;
  real_T t2699;
  real_T t2701;
  real_T t2702;
  real_T t2703;
  real_T t2705;
  real_T t2708;
  real_T t2709;
  real_T t2710;
  real_T t2713;
  real_T t2715;
  real_T t2716;
  real_T t2717;
  real_T t2718;
  real_T t2719;
  real_T t2720;
  real_T t2721;
  real_T t2723;
  real_T t2725;
  real_T t2728;
  real_T t2732;
  real_T t2734;
  real_T t2735;
  real_T t2736;
  real_T t2742;
  real_T t2743;
  real_T t2744;
  real_T t2745;
  real_T t2746;
  real_T t2747;
  real_T t2748;
  real_T t2749;
  real_T t2750;
  real_T t2751;
  real_T t2753;
  real_T t2756;
  real_T t2757;
  real_T t2758;
  real_T t2759;
  real_T t2771;
  real_T t2774;
  real_T t2775;
  real_T t2777;
  real_T t2779;
  real_T t2782;
  real_T t2784;
  real_T t2791;
  real_T t2792;
  real_T t2798;
  real_T t2799;
  real_T t2801;
  real_T t2802;
  real_T t2803;
  real_T t2804;
  real_T t2808;
  real_T t2810;
  real_T t2811;
  real_T t2812;
  real_T t2813;
  real_T t2814;
  real_T t2815;
  real_T t2817;
  real_T t2818;
  real_T t2819;
  real_T t2828;
  real_T t2830;
  real_T t2836;
  real_T t2839;
  real_T t2842;
  real_T t2843;
  real_T t2844;
  real_T t2845;
  real_T t2846;
  real_T t2849;
  real_T t2850;
  real_T t2851;
  real_T t2855;
  real_T t2856;
  real_T t2858;
  real_T t2859;
  real_T t2863;
  real_T t2864;
  real_T t2865;
  real_T t2866;
  real_T t2868;
  real_T t2869;
  real_T t2871;
  real_T t2873;
  real_T t2875;
  real_T t2876;
  real_T t2877;
  real_T t2878;
  real_T t2883;
  real_T t2885;
  real_T t2888;
  real_T t2890;
  real_T t2892;
  real_T t2895;
  real_T t2897;
  real_T t2898;
  real_T t2899;
  real_T t2900;
  real_T t2902;
  real_T t2903;
  real_T t2905;
  real_T t2906;
  real_T t2907;
  real_T t2908;
  real_T t2909;
  real_T t2910;
  real_T t2911;
  real_T t2912;
  real_T t2913;
  real_T t2914;
  real_T t2916;
  real_T t2917;
  real_T t2918;
  real_T t2920;
  real_T t2922;
  real_T t2923;
  real_T t2924;
  real_T t2926;
  real_T t2927;
  real_T t2928;
  real_T t2931;
  real_T t2933;
  real_T t2935;
  real_T t2937;
  real_T t2938;
  real_T t2940;
  real_T t2943;
  real_T t2944;
  real_T t2945;
  real_T t2946;
  real_T t2947;
  real_T t2948;
  real_T t2950;
  real_T t2951;
  real_T t2956;
  real_T t2957;
  real_T t2961;
  real_T t2963;
  real_T t2964;
  real_T t2965;
  real_T t2966;
  real_T t2967;
  real_T t2968;
  real_T t2969;
  real_T t2970;
  real_T t2975;
  real_T t2977;
  real_T t2982;
  real_T t2987;
  real_T t2989;
  real_T t2990;
  real_T t2991;
  real_T t2992;
  real_T t2993;
  real_T t2994;
  real_T t2999;
  real_T t3000;
  real_T t3002;
  real_T t3004;
  real_T t3005;
  real_T t3006;
  real_T t3009;
  real_T t3010;
  real_T t3012;
  real_T t3014;
  real_T t3018;
  real_T t3019;
  real_T t3047;
  real_T t3050;
  real_T t3051;
  real_T t3055;
  real_T t3058;
  real_T t3067;
  real_T t3134;
  real_T t3139;
  real_T t3143;
  real_T t3144;
  real_T t3148;
  real_T t3151;
  real_T t3216;
  real_T t3250;
  real_T t3253;
  real_T t3557;
  real_T t3576;
  real_T t3579;
  real_T t3619;
  real_T t3626;
  real_T t3633;
  real_T t3644;
  real_T t3688;
  real_T t3693;
  real_T t3734;
  real_T t3738;
  real_T t3750;
  real_T t3753;
  real_T t3757;
  real_T t3776;
  real_T t3779;
  real_T t3797;
  real_T t3798;
  real_T t3813;
  real_T t3825;
  real_T t3841;
  real_T t3851;
  real_T t3858;
  real_T t3874;
  real_T t3887;
  real_T t3891;
  real_T t3903;
  real_T t3918;
  real_T t3926;
  real_T t3939;
  real_T t3942;
  real_T t3943;
  real_T t3946;
  real_T t3951;
  real_T t3965;
  real_T t3968;
  real_T t3982;
  real_T t4010;
  real_T t4035;
  real_T t4043;
  real_T t4044;
  real_T t4062;
  real_T t4075;
  real_T t4083;
  real_T t4085;
  real_T t4097;
  real_T t4098;
  real_T t4237;
  real_T t4536;
  real_T t4548;
  real_T t4551;
  real_T t4554;
  real_T t4555;
  real_T t4790;
  real_T t4830;
  real_T t4831;
  real_T t4885;
  real_T zc_int0;
  real_T zc_int12;
  real_T zc_int128;
  real_T zc_int129;
  real_T zc_int130;
  real_T zc_int138;
  real_T zc_int15;
  real_T zc_int191;
  real_T zc_int196;
  real_T zc_int257;
  real_T zc_int273;
  real_T zc_int292;
  real_T zc_int294;
  real_T zc_int306;
  real_T zc_int319;
  real_T zc_int335;
  real_T zc_int357;
  real_T zc_int36;
  real_T zc_int44;
  real_T zc_int54;
  real_T zc_int95;
  size_t t1049[1];
  size_t t1560[1];
  size_t t1563[1];
  size_t t1569[1];
  size_t t170[1];
  size_t t2085[1];
  size_t t386[1];
  size_t t389[1];
  size_t t2107;
  size_t t2108;
  size_t t2109;
  int32_T M[259];
  int32_T b;
  for (b = 0; b < 259; b++) {
    M[b] = t4886->mM.mX[b];
  }

  U_idx_0 = t4886->mU.mX[0];
  U_idx_1 = t4886->mU.mX[1];
  U_idx_2 = t4886->mU.mX[2];
  U_idx_3 = t4886->mU.mX[3];
  U_idx_4 = t4886->mU.mX[4];
  U_idx_5 = t4886->mU.mX[5];
  U_idx_6 = t4886->mU.mX[6];
  U_idx_7 = t4886->mU.mX[7];
  U_idx_8 = t4886->mU.mX[8];
  U_idx_9 = t4886->mU.mX[9];
  U_idx_10 = t4886->mU.mX[10];
  U_idx_11 = t4886->mU.mX[11];
  for (b = 0; b < 480; b++) {
    X[b] = t4886->mX.mX[b];
  }

  out = t4887->mF;
  nonscalar44[0] = 0.0;
  nonscalar44[1] = 0.2;
  nonscalar44[2] = 0.4;
  nonscalar44[3] = 0.6;
  nonscalar44[4] = 0.8;
  nonscalar44[5] = 1.0;
  nonscalar45[0] = 243.1;
  nonscalar45[1] = 253.1;
  nonscalar45[2] = 263.1;
  nonscalar45[3] = 273.1;
  nonscalar45[4] = 283.1;
  nonscalar45[5] = 298.1;
  nonscalar45[6] = 313.1;
  nonscalar48[0] = 1.0;
  nonscalar48[1] = 1.25;
  nonscalar48[2] = 1.5;
  nonscalar48[3] = 1.75;
  nonscalar48[4] = 2.0;
  nonscalar49[0] = 0.0;
  nonscalar49[1] = 188.49555921538757;
  nonscalar49[2] = 376.99111843077515;
  t4237 = -X[64ULL] - U_idx_0;
  t4536 = (((real_T)(t4237 >= 0.0) * t4237 * 1000.0 + (real_T)(t4237 < 0.0) * X
            [66ULL]) - 0.9) / 0.099999999999999978;
  if ((real_T)(t4237 >= 0.0) * t4237 * 1000.0 + (real_T)(t4237 < 0.0) * X[66ULL]
      <= 0.9) {
    t4536 = 0.0;
  } else {
    t4536 = (real_T)(t4237 >= 0.0) * t4237 * 1000.0 + (real_T)(t4237 < 0.0) * X
      [66ULL] >= 1.0 ? 1.0 : t4536 * t4536 * 3.0 - t4536 * t4536 * t4536 * 2.0;
  }

  t4831 = X[72ULL] * 1.0E-9 + X[4ULL];
  t4830 = ((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0000000000000011) + X[73ULL] *
           -1.0E-6) + X[5ULL];
  if (X[103ULL] < 0.0) {
    t4790 = X[103ULL] * 17.81 + 0.043;
  } else if (X[103ULL] <= 1.0) {
    t4790 = ((X[103ULL] * 17.81 + 0.043) - X[103ULL] * X[103ULL] * 39.85) + X
      [103ULL] * X[103ULL] * X[103ULL] * 36.0;
  } else {
    t4790 = (X[103ULL] - 1.0) * 1.4 + 14.003;
  }

  if (X[104ULL] < 0.0) {
    t4551 = X[104ULL] * 17.81 + 0.043;
  } else if (X[104ULL] <= 1.0) {
    t4551 = ((X[104ULL] * 17.81 + 0.043) - X[104ULL] * X[104ULL] * 39.85) + X
      [104ULL] * X[104ULL] * X[104ULL] * 36.0;
  } else {
    t4551 = (X[104ULL] - 1.0) * 1.4 + 14.003;
  }

  t4554 = pmf_exp((0.003298697014679202 - 1.0 / (X[18ULL] == 0.0 ? 1.0E-16 : X
    [18ULL])) * 2416.0) * 1.25E-10;
  if (X[73ULL] <= 0.0) {
    t4555 = -X[73ULL] / 0.028;
  } else {
    t4555 = 0.0;
  }

  t2216 = t4555 * 0.20177105219743391 / 192970.66424;
  t4548 = (t4790 * 1818.181818181818 - t4551 * 1818.181818181818) * t4554 /
    0.000125;
  if (t4790 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t4790 *
      t4790 * 0.0029 + t4790 * 0.05;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t4790 *
      0.05;
  }

  t1565[0ULL] = X[18ULL];
  t1563[0] = 52ULL;
  t170[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t1565[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = efOut;
  tlu2_1d_linear_nearest_value(&b_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t1613[0] = b_efOut[0];
  t4554 = t1613[0ULL];
  t2117 = (X[85ULL] + X[91ULL]) / 2.0;
  t2125 = (X[95ULL] + X[100ULL]) / 2.0;
  t1613[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&c_efOut.mField0[0ULL], &c_efOut.mField1[0ULL],
    &c_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t1613[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = c_efOut;
  tlu2_1d_linear_linear_value(&d_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t1565[0] = d_efOut[0];
  piece245 = pmf_exp(pmf_log(t2117) - t1565[0ULL]);
  t2141 = X[103ULL] / (piece245 == 0.0 ? 1.0E-16 : piece245);
  piece245 = pmf_exp(pmf_log(t2125) - t1565[0ULL]);
  t2217 = X[104ULL] / (piece245 == 0.0 ? 1.0E-16 : piece245);
  if (t2117 > t2125) {
    t2225 = t4554 * X[18ULL] * 0.001039307827269155;
    t2218 = (t2117 - t2125) * t2117 * t2141 * 1.58E-18 / (t2225 == 0.0 ? 1.0E-16
      : t2225);
  } else {
    t147 = t4554 * X[18ULL] * 0.001039307827269155;
    t2218 = (t2117 - t2125) * t2125 * t2217 * 1.58E-18 / (t147 == 0.0 ? 1.0E-16 :
      t147);
  }

  t4554 = ((t4548 + t4555 *
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 /
            96485.33212) + t2218) * 0.20177105219743391;
  t4548 = t4555 * 0.022577863652674921 / 192970.66424;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t4555 *
    0.3583866814737065 / 385941.32848;
  t4790 = (t4790 + t4551) / 2.0;
  if (t4790 >= 1.0) {
    t4551 = t4790 * 0.005139 - 0.00326;
  } else {
    t4551 = 0.0018790000000000005;
  }

  t4790 = pmf_exp((0.003298697014679202 - 1.0 / (X[18ULL] == 0.0 ? 1.0E-16 : X
    [18ULL])) * 1268.0) * t4551;
  t4551 = 0.000125 / (t4790 == 0.0 ? 1.0E-16 : t4790);
  t2218 = piece245 * ((X[94ULL] + X[99ULL]) / 2.0);
  t4790 = t2218 >= 1.0E-9 ? t2218 : 1.0E-6;
  piece245 = t2117 * ((X[83ULL] + X[88ULL]) / 2.0) / 1.01325;
  if (piece245 * 1.0E-5 >= 1.0E-9) {
    t2218 = piece245 * 1.0E-5;
  } else {
    t2218 = 1.0E-6;
  }

  piece245 = t2125 * ((X[93ULL] + X[98ULL]) / 2.0) / 1.01325;
  if (piece245 * 1.0E-5 >= 1.0E-9) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0 = piece245 *
      1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0 = 1.0E-6;
  }

  t2237 = X[18ULL] * 8.31446261815324;
  t2117 = (X[89ULL] - t2141) * (t2117 * 7.0000000000000007E-6 / (t2237 == 0.0 ?
    1.0E-16 : t2237)) / 0.00025;
  t2125 = (t2217 - X[99ULL]) * (t2125 * 7.0000000000000007E-6 / (t2237 == 0.0 ?
    1.0E-16 : t2237)) / 0.00025;
  if (t4555 >= 1.0) {
    t2141 = pmf_log(t4555) * (t2237 / 135079.46496800001);
  } else {
    t2141 = 0.0;
  }

  if (t4555 <= 13986.0) {
    t2129 = pmf_log(1.0 - t4555 / 14000.0);
  } else {
    t2129 = -6.9077552789821359 - (t4555 / 14000.0 - 0.999) /
      0.0010000000000000009;
  }

  piece245 = X[18ULL] * -8.31446261815324 / 192970.66424 * t2129;
  t2247 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0) * t2218;
  t2217 = t2237 / 192970.66424 * pmf_log(t2247 / (t4790 == 0.0 ? 1.0E-16 : t4790))
    + 1.228891453185164;
  t2218 = t4551 * t4555;
  t2217 = t4555 * (((t2217 - t2141) - t2218 * 0.01) - piece245) *
    11.200000000000001;
  t4555 = -X[112ULL] + X[121ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0 = pmf_sqrt(X
    [133ULL] * X[133ULL] + 1.8324100759713822E-12);
  t2129 = pmf_sqrt(X[133ULL] * X[133ULL] + 2.0914103314136477E-13);
  t2132 = pmf_sqrt(X[133ULL] * X[133ULL] + 1.4768645655431184E-13);
  if (X[138ULL] <= 0.0) {
    t2137 = 0.0;
  } else {
    t2137 = X[138ULL] >= 1.0 ? 1.0 : X[138ULL];
  }

  if (X[139ULL] <= 0.0) {
    t2140 = 0.0;
  } else {
    t2140 = X[139ULL] >= 1.0 ? 1.0 : X[139ULL];
  }

  t2145 = (((1.0 - t2137) - t2140) * 296.802103844292 + t2137 * 461.523) + t2140
    * 4124.48151675695;
  if (1.0 - X[138ULL] >= 0.01) {
    t2148 = 1.0 - X[138ULL];
  } else if (1.0 - X[138ULL] >= -0.1) {
    t2148 = pmf_exp(((1.0 - X[138ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2148 = 1.6701700790245661E-7;
  }

  t2215 = -X[145ULL] + U_idx_2 * -0.01;
  if (X[21ULL] <= 0.0) {
    t2219 = 0.0;
  } else {
    t2219 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    t2220 = 0.0;
  } else {
    t2220 = X[22ULL] >= 1.0 ? 1.0 : X[22ULL];
  }

  t2221 = (((1.0 - t2219) - t2220) * 296.802103844292 + t2219 * 461.523) + t2220
    * 4124.48151675695;
  t2222 = (X[19ULL] / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) - X[146ULL] / (X
            [147ULL] == 0.0 ? 1.0E-16 : X[147ULL])) * t2215 * t2221 /
    7.8539816339744827E-5;
  if (X[146ULL] <= 216.59999999999997) {
    t2223 = 216.59999999999997;
  } else {
    t2223 = X[146ULL] >= 623.15 ? 623.15 : X[146ULL];
  }

  t2225 = t2223 * t2223;
  zc_int44 = (((1074.1165326382541 + t2223 * -0.2214565261064077) + t2225 *
               0.00037212980109010952) * ((1.0 - t2219) - t2220) +
              ((1479.6504774710445 + t2223 * 1.200211433705052) + t2225 *
               -0.00038614513167842338) * t2219) + ((12825.281119790017 + t2223 *
    6.9647057412830984) + t2225 * -0.007052486824683288) * t2220;
  t2255 = zc_int44 - t2221;
  t2223 = zc_int44 / (t2255 == 0.0 ? 1.0E-16 : t2255);
  zc_int44 = pmf_sqrt(t2222 * t2222 * 9.999999999999999E-14 + fabs(X[146ULL] *
    t2223 * t2221) * 1.0E-9);
  if (X[148ULL] <= 0.0) {
    t2225 = 0.0;
  } else {
    t2225 = X[148ULL] >= 1.0 ? 1.0 : X[148ULL];
  }

  if (X[149ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = X[149ULL] >=
      1.0 ? 1.0 : X[149ULL];
  }

  t2096[0ULL] = X[19ULL];
  tlu2_linear_nearest_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2096[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = e_efOut;
  tlu2_1d_linear_nearest_value(&f_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2093[0] = f_efOut[0];
  tlu2_1d_linear_nearest_value(&g_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = g_efOut[0];
  tlu2_1d_linear_nearest_value(&h_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = h_efOut[0];
  t147 = (((1.0 - t2225) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1) *
          t2093[0ULL] + t2086_idx_0 * t2225) + t2099_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1;
  t2256 = X[147ULL] * X[147ULL] * t2223;
  t163 = -pmf_sqrt(fabs(t2256 / (t2221 == 0.0 ? 1.0E-16 : t2221) / (X[146ULL] ==
    0.0 ? 1.0E-16 : X[146ULL]))) * 7.8539816339744827E-5;
  if (t163 >= 0.0) {
    t2229 = t163 * 100000.0;
  } else {
    t2229 = -t163 * 100000.0;
  }

  t2260 = t147 * 7.8539816339744827E-5;
  t2230 = t2229 * 0.01 / (t2260 == 0.0 ? 1.0E-16 : t2260);
  t2262 = X[19ULL] * t2221;
  piece14 = X[20ULL] / (t2262 == 0.0 ? 1.0E-16 : t2262);
  t2264 = piece14 * 1.5707963267948965E-8;
  t2233 = t163 * t147 * 35.2 / (t2264 == 0.0 ? 1.0E-16 : t2264);
  t2234 = t2230 >= 1.0 ? t2230 : 1.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I = pmf_log10(6.9 /
    (t2234 == 0.0 ? 1.0E-16 : t2234) + 0.00017169489553429715) * pmf_log10(6.9 /
    (t2234 == 0.0 ? 1.0E-16 : t2234) + 0.00017169489553429715) * 3.24;
  t2267 = piece14 * 1.2337005501361697E-10;
  t2229 = t163 * t2229 * (1.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I)) * 0.55 / (t2267 ==
    0.0 ? 1.0E-16 : t2267);
  t2234 = (t2230 - 2000.0) / 2000.0;
  t2235 = t2234 * t2234 * 3.0 - t2234 * t2234 * t2234 * 2.0;
  if (t2230 <= 2000.0) {
    t2234 = t2233 * 1.0E-5;
  } else if (t2230 >= 4000.0) {
    t2234 = t2229 * 1.0E-5;
  } else {
    t2234 = ((1.0 - t2235) * t2233 + t2229 * t2235) * 1.0E-5;
  }

  zc_int44 = t2215 * zc_int44 / 7.8539816339744827E-5 * 0.00031622776601683789 +
    t2234;
  t2229 = X[123ULL] - X[20ULL];
  t2233 = -((X[19ULL] / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) - X[150ULL] / (X
              [151ULL] == 0.0 ? 1.0E-16 : X[151ULL])) * X[133ULL] * t2221) /
    7.8539816339744827E-5;
  if (X[150ULL] <= 216.59999999999997) {
    t2234 = 216.59999999999997;
  } else {
    t2234 = X[150ULL] >= 623.15 ? 623.15 : X[150ULL];
  }

  t2236 = t2234 * t2234;
  t2235 = (((1074.1165326382541 + t2234 * -0.2214565261064077) + t2236 *
            0.00037212980109010952) * ((1.0 - t2219) - t2220) +
           ((1479.6504774710445 + t2234 * 1.200211433705052) + t2236 *
            -0.00038614513167842338) * t2219) + ((12825.281119790017 + t2234 *
    6.9647057412830984) + t2236 * -0.007052486824683288) * t2220;
  t2275 = t2235 - t2221;
  t2234 = t2235 / (t2275 == 0.0 ? 1.0E-16 : t2275);
  t2235 = pmf_sqrt(t2233 * t2233 * 9.999999999999999E-14 + fabs(X[150ULL] *
    t2234 * t2221) * 1.0E-9);
  t2276 = X[151ULL] * X[151ULL] * t2234;
  t2236 = -pmf_sqrt(fabs(t2276 / (t2221 == 0.0 ? 1.0E-16 : t2221) / (X[150ULL] ==
    0.0 ? 1.0E-16 : X[150ULL]))) * 7.8539816339744827E-5;
  if (t2236 >= 0.0) {
    t2238 = t2236 * 100000.0;
  } else {
    t2238 = -t2236 * 100000.0;
  }

  zc_int54 = t2238 * 0.01 / (t2260 == 0.0 ? 1.0E-16 : t2260);
  t2241 = t2236 * t147 * 35.2 / (t2264 == 0.0 ? 1.0E-16 : t2264);
  t2243 = zc_int54 >= 1.0 ? zc_int54 : 1.0;
  t2283 = pmf_log10(6.9 / (t2243 == 0.0 ? 1.0E-16 : t2243) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2243 == 0.0 ?
    1.0E-16 : t2243) + 0.00017169489553429715) * 3.24;
  t2238 = t2236 * t2238 * (1.0 / (t2283 == 0.0 ? 1.0E-16 : t2283)) * 0.55 /
    (t2267 == 0.0 ? 1.0E-16 : t2267);
  t2243 = (zc_int54 - 2000.0) / 2000.0;
  t2244 = t2243 * t2243 * 3.0 - t2243 * t2243 * t2243 * 2.0;
  if (zc_int54 <= 2000.0) {
    t2243 = t2241 * 1.0E-5;
  } else if (zc_int54 >= 4000.0) {
    t2243 = t2238 * 1.0E-5;
  } else {
    t2243 = ((1.0 - t2244) * t2241 + t2238 * t2244) * 1.0E-5;
  }

  t2235 = -(X[133ULL] * t2235) / 7.8539816339744827E-5 * 0.00031622776601683789
    + t2243;
  t2238 = X[142ULL] - X[20ULL];
  t2093[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t103 = i_efOut;
  tlu2_1d_linear_linear_value(&j_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = j_efOut[0];
  t2241 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = k_efOut[0];
  t2243 = t2086_idx_0;
  if (1.0 - X[21ULL] >= 0.01) {
    t2245 = 1.0 - X[21ULL];
  } else if (1.0 - X[21ULL] >= -0.1) {
    t2245 = pmf_exp(((1.0 - X[21ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2245 = 1.6701700790245661E-7;
  }

  t2244 = X[22ULL] / (t2245 == 0.0 ? 1.0E-16 : t2245) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = l_efOut[0];
  t2248 = pmf_exp(pmf_log(X[20ULL] * 100000.0) - t2086_idx_0);
  if (t2248 >= 1.0) {
    t2290 = (t2248 - 1.0) * 461.523 + t2244;
    t2249 = t2244 / (t2290 == 0.0 ? 1.0E-16 : t2290);
  } else {
    t2249 = 1.0;
  }

  t2292 = t2249 * 0.01;
  t2244 = (X[21ULL] - t2249) / (t2292 == 0.0 ? 1.0E-16 : t2292);
  if (X[21ULL] - t2249 <= 0.0) {
    t2244 = 0.0;
  } else if (X[21ULL] - t2249 >= t2249 * 0.01) {
    t2244 = X[21ULL] - t2249;
  } else {
    t2244 = (X[21ULL] - t2249) * (t2244 * t2244 * 3.0 - t2244 * t2244 * t2244 *
      2.0);
  }

  piece14 = piece14 * t2244 * 7.8539816339744827E-5 / 0.001;
  t2244 = (t2241 - t2243) * piece14;
  tlu2_1d_linear_nearest_value(&m_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = m_efOut[0];
  tlu2_1d_linear_nearest_value(&n_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = n_efOut[0];
  tlu2_1d_linear_nearest_value(&o_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = o_efOut[0];
  t2243 = (((1.0 - t2225) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1) *
           t2086_idx_0 + t2099_idx_0 * t2225) + t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1;
  t2249 = (X[126ULL] - X[19ULL]) * (t2243 * 0.031415926535897927 / 0.01);
  if (X[144ULL] <= 0.0) {
    intrm_sf_mf_139 = 0.0;
  } else {
    intrm_sf_mf_139 = X[144ULL] >= 1.0 ? 1.0 : X[144ULL];
  }

  if (X[143ULL] <= 0.0) {
    t2254 = 0.0;
  } else {
    t2254 = X[143ULL] >= 1.0 ? 1.0 : X[143ULL];
  }

  t2255 = (((1.0 - intrm_sf_mf_139) - t2254) * 296.802103844292 +
           intrm_sf_mf_139 * 461.523) + t2254 * 4124.48151675695;
  t2257 = X[144ULL] * 461.523 / (t2255 == 0.0 ? 1.0E-16 : t2255);
  if (t2257 <= 0.0) {
    zc_int129 = 0.0;
  } else {
    zc_int129 = t2257 >= 1.0 ? 1.0 : t2257;
  }

  t2257 = X[143ULL] * 4124.48151675695 / (t2255 == 0.0 ? 1.0E-16 : t2255);
  if (t2257 <= 0.0) {
    t2263 = 0.0;
  } else {
    t2263 = t2257 >= 1.0 ? 1.0 : t2257;
  }

  t2093[0ULL] = X[141ULL];
  tlu2_linear_nearest_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = p_efOut;
  tlu2_1d_linear_nearest_value(&q_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = q_efOut[0];
  tlu2_1d_linear_nearest_value(&r_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = r_efOut[0];
  tlu2_1d_linear_nearest_value(&s_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = s_efOut[0];
  t2257 = (((1.0 - zc_int129) - t2263) * t2086_idx_0 + t2099_idx_0 * zc_int129)
    + t2100_idx_0 * t2263;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I = (t2215 - (-X[133ULL]))
    / 2.0;
  tlu2_1d_linear_nearest_value(&t_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = t_efOut[0];
  tlu2_1d_linear_nearest_value(&u_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = u_efOut[0];
  tlu2_1d_linear_nearest_value(&v_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = v_efOut[0];
  t2300 = (((((1.0 - zc_int129) - t2263) * t2086_idx_0 + t2099_idx_0 * zc_int129)
            + t2100_idx_0 * t2263) + t147) / 2.0 * 7.8539816339744827E-5;
  t2266 = -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I <= 0.0 ?
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I : 0.0) *
    0.01 / (t2300 == 0.0 ? 1.0E-16 : t2300);
  t2268 = t2266 >= 0.0 ? t2266 : -t2266;
  t2269 = t2268 > 1000.0 ? t2268 : 1000.0;
  tlu2_1d_linear_nearest_value(&w_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = w_efOut[0];
  tlu2_1d_linear_nearest_value(&x_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = x_efOut[0];
  tlu2_1d_linear_nearest_value(&y_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = y_efOut[0];
  t2274 = (((1.0 - t2225) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1) *
           t2086_idx_0 + t2099_idx_0 * t2225) + t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1;
  tlu2_1d_linear_nearest_value(&ab_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ab_efOut[0];
  tlu2_1d_linear_nearest_value(&bb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = bb_efOut[0];
  tlu2_1d_linear_nearest_value(&cb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = cb_efOut[0];
  t2225 = (((1.0 - zc_int129) - t2263) * t2086_idx_0 + t2099_idx_0 * zc_int129)
    + t2100_idx_0 * t2263;
  intrm_sf_mf_176 = t2274 + t2225;
  if (intrm_sf_mf_176 / 2.0 > 0.5) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = (t2274 +
      t2225) / 2.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = 0.5;
  }

  t151 = pmf_log10(6.9 / (t2269 == 0.0 ? 1.0E-16 : t2269) +
                   0.00017169489553429715) * pmf_log10(6.9 / (t2269 == 0.0 ?
    1.0E-16 : t2269) + 0.00017169489553429715) * 3.24;
  zc_int129 = 1.0 / (t151 == 0.0 ? 1.0E-16 : t151);
  t4237 = (pmf_pow
           (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1,
            0.66666666666666663) - 1.0) * pmf_sqrt(zc_int129 / 8.0) * 12.7 + 1.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = (t2269 -
    1000.0) * (zc_int129 / 8.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 / (t4237 ==
    0.0 ? 1.0E-16 : t4237);
  zc_int129 = (t2268 - 2000.0) / 2000.0;
  t2263 = zc_int129 * zc_int129 * 3.0 - zc_int129 * zc_int129 * zc_int129 * 2.0;
  if (t2268 <= 2000.0) {
    zc_int129 = 3.66;
  } else if (t2268 >= 4000.0) {
    zc_int129 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1;
  } else {
    zc_int129 = (1.0 - t2263) * 3.66 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 * t2263;
  }

  t2310 = intrm_sf_mf_176 / 2.0;
  if (t2268 > zc_int129 * 0.031415926535897927 / 7.8539816339744827E-5 / (t2310 ==
       0.0 ? 1.0E-16 : t2310) / 30.0) {
    t2316 = (t2274 + t2225) / 2.0;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = zc_int129 *
      0.031415926535897927 / (t2268 == 0.0 ? 1.0E-16 : t2268) /
      7.8539816339744827E-5 / (t2316 == 0.0 ? 1.0E-16 : t2316);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = 30.0;
  }

  t2225 = (X[126ULL] - X[141ULL]) * (1.0 - pmf_exp
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1));
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = t2266 *
    7.8539816339744827E-5 / 0.01 * (intrm_sf_mf_176 / 2.0) * ((t2257 + t2243) /
    2.0) * t2225;
  if (X[125ULL] <= 0.0) {
    t2225 = 0.0;
  } else {
    t2225 = X[125ULL] >= 1.0 ? 1.0 : X[125ULL];
  }

  if (X[124ULL] <= 0.0) {
    t2257 = 0.0;
  } else {
    t2257 = X[124ULL] >= 1.0 ? 1.0 : X[124ULL];
  }

  zc_int129 = (((1.0 - t2225) - t2257) * 296.802103844292 + t2225 * 461.523) +
    t2257 * 4124.48151675695;
  t2263 = X[125ULL] * 461.523 / (zc_int129 == 0.0 ? 1.0E-16 : zc_int129);
  if (t2263 <= 0.0) {
    t2266 = 0.0;
  } else {
    t2266 = t2263 >= 1.0 ? 1.0 : t2263;
  }

  t2263 = X[124ULL] * 4124.48151675695 / (zc_int129 == 0.0 ? 1.0E-16 : zc_int129);
  if (t2263 <= 0.0) {
    t2268 = 0.0;
  } else {
    t2268 = t2263 >= 1.0 ? 1.0 : t2263;
  }

  t2093[0ULL] = X[122ULL];
  tlu2_linear_nearest_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = db_efOut;
  tlu2_1d_linear_nearest_value(&eb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = eb_efOut[0];
  tlu2_1d_linear_nearest_value(&fb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = fb_efOut[0];
  tlu2_1d_linear_nearest_value(&gb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = gb_efOut[0];
  t2263 = (((1.0 - t2266) - t2268) * t2086_idx_0 + t2099_idx_0 * t2266) +
    t2100_idx_0 * t2268;
  tlu2_1d_linear_nearest_value(&hb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = hb_efOut[0];
  tlu2_1d_linear_nearest_value(&ib_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ib_efOut[0];
  tlu2_1d_linear_nearest_value(&jb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = jb_efOut[0];
  t2269 = (((1.0 - t2266) - t2268) * t2086_idx_0 + t2099_idx_0 * t2266) +
    t2100_idx_0 * t2268;
  t2275 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I >= 0.0 ?
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I : 0.0;
  tlu2_1d_linear_nearest_value(&kb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = kb_efOut[0];
  tlu2_1d_linear_nearest_value(&lb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = lb_efOut[0];
  tlu2_1d_linear_nearest_value(&mb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = mb_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I = (((1.0 - t2266) -
    t2268) * t2086_idx_0 + t2099_idx_0 * t2266) + t2100_idx_0 * t2268;
  t2324 = (t147 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I) / 2.0
    * 7.8539816339744827E-5;
  t2266 = t2275 * 0.01 / (t2324 == 0.0 ? 1.0E-16 : t2324);
  t2268 = t2266 >= 0.0 ? t2266 : -t2266;
  t2275 = t2268 > 1000.0 ? t2268 : 1000.0;
  U_idx_0 = t2263 + t2274;
  if (U_idx_0 / 2.0 > 0.5) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = (t2263 +
      t2274) / 2.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = 0.5;
  }

  intrm_sf_mf_1452 = pmf_log10(6.9 / (t2275 == 0.0 ? 1.0E-16 : t2275) +
    0.00017169489553429715) * pmf_log10(6.9 / (t2275 == 0.0 ? 1.0E-16 : t2275) +
    0.00017169489553429715) * 3.24;
  t2279 = 1.0 / (intrm_sf_mf_1452 == 0.0 ? 1.0E-16 : intrm_sf_mf_1452);
  t2329 = (pmf_pow
           (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6,
            0.66666666666666663) - 1.0) * pmf_sqrt(t2279 / 8.0) * 12.7 + 1.0;
  t2275 = (t2275 - 1000.0) * (t2279 / 8.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 / (t2329 ==
    0.0 ? 1.0E-16 : t2329);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = (t2268 -
    2000.0) / 2000.0;
  t2279 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 * 2.0;
  if (t2268 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = 3.66;
  } else if (t2268 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = t2275;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = (1.0 -
      t2279) * 3.66 + t2275 * t2279;
  }

  t2334 = U_idx_0 / 2.0;
  if (t2268 > Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 *
      0.031415926535897927 / 7.8539816339744827E-5 / (t2334 == 0.0 ? 1.0E-16 :
       t2334) / 30.0) {
    zc_int357 = (t2263 + t2274) / 2.0;
    t2275 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 *
      0.031415926535897927 / (t2268 == 0.0 ? 1.0E-16 : t2268) /
      7.8539816339744827E-5 / (zc_int357 == 0.0 ? 1.0E-16 : zc_int357);
  } else {
    t2275 = 30.0;
  }

  t2268 = (X[126ULL] - X[122ULL]) * (1.0 - pmf_exp(-t2275));
  t2266 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 +
    t2266 * 7.8539816339744827E-5 / 0.01 * (U_idx_0 / 2.0) * ((t2269 + t2243) /
    2.0) * t2268;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1 = pmf_sqrt
    (t2215 * t2215 + 2.0360111955237585E-13);
  t2243 = pmf_sqrt(t2215 * t2215 + 2.3237892571262758E-14);
  t2268 = pmf_sqrt(t2215 * t2215 + 1.6409606283812424E-14);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6 = pmf_sqrt(X
    [133ULL] * X[133ULL] + 2.0360111955237585E-13);
  t2279 = pmf_sqrt(X[133ULL] * X[133ULL] + 2.3237892571262758E-14);
  t2281 = pmf_sqrt(X[133ULL] * X[133ULL] + 1.6409606283812424E-14);
  tlu2_1d_linear_linear_value(&nb_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = nb_efOut[0];
  t2283 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&ob_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ob_efOut[0];
  t2286 = -X[134ULL] + (-X[157ULL] - X[158ULL]);
  t2274 = (-X[133ULL] + t2215) - piece14 * 100000.0;
  t2287 = (-X[135ULL] + (-X[159ULL] - X[160ULL])) - piece14 * 100000.0;
  t2275 = (((1.0 - t2219) - t2220) * t2283 + t2241 * t2219) + t2086_idx_0 *
    t2220;
  t2289 = t2283 - X[19ULL] * 0.296802103844292;
  t2283 = t2086_idx_0 - X[19ULL] * 4.12448151675695;
  t2284 = t2241 - X[19ULL] * 0.461523;
  t2241 = U_idx_1 * 0.031415926535897927;
  if (t2241 * 0.0001 <= 7.8539816339744857E-13) {
    t2290 = 7.8539816339744857E-13;
  } else if (t2241 * 0.0001 >= 3.1415926535897929E-6) {
    t2290 = 3.1415926535897929E-6;
  } else {
    t2290 = t2241 * 0.0001;
  }

  t2241 = t2290 / 7.8539816339744827E-5;
  if (X[168ULL] <= 0.0) {
    t2291 = 0.0;
  } else {
    t2291 = X[168ULL] >= 1.0 ? 1.0 : X[168ULL];
  }

  if (X[169ULL] <= 0.0) {
    t2292 = 0.0;
  } else {
    t2292 = X[169ULL] >= 1.0 ? 1.0 : X[169ULL];
  }

  t2293 = (((1.0 - t2291) - t2292) * 296.802103844292 + t2291 * 461.523) + t2292
    * 4124.48151675695;
  t2345 = X[166ULL] * t2293;
  t2294 = X[167ULL] / (t2345 == 0.0 ? 1.0E-16 : t2345);
  t2295 = X[167ULL] / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]) * (X[170ULL] /
    (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]));
  intrm_sf_mf_202 = X[167ULL] / 1.01325 * (X[171ULL] / (X[166ULL] == 0.0 ?
    1.0E-16 : X[166ULL]));
  if (X[133ULL] > 0.0) {
    t2297 = (t2241 + 1.0) * (1.0 - t2241 * t2295) * (X[133ULL] / 0.64 / (t2290 ==
      0.0 ? 1.0E-16 : t2290) * (X[133ULL] / 0.64 / (t2290 == 0.0 ? 1.0E-16 :
      t2290)) / 2.0 / (t2294 == 0.0 ? 1.0E-16 : t2294)) * 9.9999999999999991E-11;
  } else if (X[133ULL] < 0.0) {
    t2297 = (t2241 + 1.0) * (1.0 - t2241 * intrm_sf_mf_202) * (X[133ULL] / 0.64 /
      (t2290 == 0.0 ? 1.0E-16 : t2290) * (X[133ULL] / 0.64 / (t2290 == 0.0 ?
      1.0E-16 : t2290)) / 2.0 / (t2294 == 0.0 ? 1.0E-16 : t2294)) *
      9.9999999999999991E-11;
  } else {
    t2297 = 0.0;
  }

  zc_int95 = (X[142ULL] + 1.01325) / 2.0 * 0.0010000000000000009;
  t2298 = (1.0 - t2241) * (1.0 - t2241);
  t2300 = zc_int95 * t2298;
  intrm_sf_mf_176 = (t2241 + 1.0) * (1.0 - t2241 * t2295) - (1.0 - t2241 *
    intrm_sf_mf_202) * t2241 * 2.0;
  t2302 = (X[142ULL] - 1.01325) * (intrm_sf_mf_176 >= t2298 ? intrm_sf_mf_176 :
    t2298);
  intrm_sf_mf_176 = (X[142ULL] - 1.01325) / (zc_int95 == 0.0 ? 1.0E-16 :
    zc_int95);
  t151 = intrm_sf_mf_176 * intrm_sf_mf_176 * 3.0 - intrm_sf_mf_176 *
    intrm_sf_mf_176 * intrm_sf_mf_176 * 2.0;
  if (X[142ULL] - 1.01325 <= 0.0) {
    intrm_sf_mf_176 = t2300;
  } else if (X[142ULL] - 1.01325 >= zc_int95) {
    intrm_sf_mf_176 = t2302;
  } else {
    intrm_sf_mf_176 = (1.0 - t151) * t2300 + t2302 * t151;
  }

  t2302 = (t2241 + 1.0) * (1.0 - t2241 * intrm_sf_mf_202) - (1.0 - t2241 * t2295)
    * t2241 * 2.0;
  t2241 = (1.01325 - X[142ULL]) * (t2302 >= t2298 ? t2302 : t2298);
  t2295 = (1.01325 - X[142ULL]) / (zc_int95 == 0.0 ? 1.0E-16 : zc_int95);
  intrm_sf_mf_202 = t2295 * t2295 * 3.0 - t2295 * t2295 * t2295 * 2.0;
  if (1.01325 - X[142ULL] <= 0.0) {
    t2295 = t2300;
  } else if (1.01325 - X[142ULL] >= zc_int95) {
    t2295 = t2241;
  } else {
    t2295 = (1.0 - intrm_sf_mf_202) * t2300 + t2241 * intrm_sf_mf_202;
  }

  if (X[142ULL] > 1.01325) {
    t2241 = intrm_sf_mf_176;
  } else {
    t2241 = X[142ULL] < 1.01325 ? t2295 : t2300;
  }

  if (X[166ULL] <= 216.59999999999997) {
    t2295 = 216.59999999999997;
  } else {
    t2295 = X[166ULL] >= 623.15 ? 623.15 : X[166ULL];
  }

  t2157 = t2295 * t2295;
  intrm_sf_mf_202 = (((1074.1165326382541 + t2295 * -0.2214565261064077) + t2157
                      * 0.00037212980109010952) * ((1.0 - t2291) - t2292) +
                     ((1479.6504774710445 + t2295 * 1.200211433705052) + t2157 *
                      -0.00038614513167842338) * t2291) + ((12825.281119790017 +
    t2295 * 6.9647057412830984) + t2157 * -0.007052486824683288) * t2292;
  zc_int12 = intrm_sf_mf_202 - t2293;
  t2369 = X[167ULL] * X[167ULL] * (intrm_sf_mf_202 / (zc_int12 == 0.0 ? 1.0E-16 :
    zc_int12));
  t2295 = pmf_sqrt(fabs(t2369 / (t2293 == 0.0 ? 1.0E-16 : t2293) / (X[166ULL] ==
    0.0 ? 1.0E-16 : X[166ULL]))) * t2290 * 0.64;
  t2372 = t2294 * 2.0;
  t2294 = (X[142ULL] - 1.01325) * pmf_sqrt(fabs(t2372 / (t2241 == 0.0 ? 1.0E-16 :
    t2241))) * t2290 * 0.64;
  if (X[14ULL] <= 0.0) {
    intrm_sf_mf_202 = 0.0;
  } else {
    intrm_sf_mf_202 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    t2298 = 0.0;
  } else {
    t2298 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  t2300 = (((1.0 - intrm_sf_mf_202) - t2298) * 296.802103844292 +
           intrm_sf_mf_202 * 461.523) + t2298 * 259.836612622973;
  intrm_sf_mf_176 = (X[12ULL] / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) - X
                     [178ULL] / (X[179ULL] == 0.0 ? 1.0E-16 : X[179ULL])) * X
    [177ULL] * t2300 / 0.32;
  if (X[178ULL] <= 216.59999999999997) {
    t2302 = 216.59999999999997;
  } else {
    t2302 = X[178ULL] >= 623.15 ? 623.15 : X[178ULL];
  }

  t4237 = t2302 * t2302;
  t151 = (((1074.1165326382541 + t2302 * -0.2214565261064077) + t4237 *
           0.00037212980109010952) * ((1.0 - intrm_sf_mf_202) - t2298) +
          ((1479.6504774710445 + t2302 * 1.200211433705052) + t4237 *
           -0.00038614513167842338) * intrm_sf_mf_202) + ((900.63941224837913 +
    t2302 * -0.044484923911364271) + t4237 * 0.00036936011832043369) * t2298;
  zc_int130 = t151 - t2300;
  t2302 = t151 / (zc_int130 == 0.0 ? 1.0E-16 : zc_int130);
  t151 = pmf_sqrt(intrm_sf_mf_176 * intrm_sf_mf_176 * 9.999999999999999E-14 +
                  fabs(X[178ULL] * t2302 * t2300) * 1.0E-9);
  if (X[94ULL] <= 0.0) {
    t2157 = 0.0;
  } else {
    t2157 = X[94ULL] >= 1.0 ? 1.0 : X[94ULL];
  }

  if (X[93ULL] <= 0.0) {
    t4237 = 0.0;
  } else {
    t4237 = X[93ULL] >= 1.0 ? 1.0 : X[93ULL];
  }

  t2093[0ULL] = X[12ULL];
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = pb_efOut;
  tlu2_1d_linear_nearest_value(&qb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qb_efOut[0];
  tlu2_1d_linear_nearest_value(&rb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = rb_efOut[0];
  tlu2_1d_linear_nearest_value(&sb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = sb_efOut[0];
  t2306 = (((1.0 - t2157) - t4237) * t2086_idx_0 + t2099_idx_0 * t2157) +
    t2100_idx_0 * t4237;
  t2379 = X[179ULL] * X[179ULL] * t2302;
  t2307 = -pmf_sqrt(fabs(t2379 / (t2300 == 0.0 ? 1.0E-16 : t2300) / (X[178ULL] ==
    0.0 ? 1.0E-16 : X[178ULL]))) * 0.32;
  if (t2307 >= 0.0) {
    t152 = t2307 * 100000.0;
  } else {
    t152 = -t2307 * 100000.0;
  }

  t2383 = t2306 * 0.32;
  t2310 = t152 * 0.01 / (t2383 == 0.0 ? 1.0E-16 : t2383);
  t2385 = X[12ULL] * t2300;
  t2311 = X[23ULL] / (t2385 == 0.0 ? 1.0E-16 : t2385);
  t2387 = t2311 * 6.4000000000000011E-5;
  t2312 = t2307 * t2306 * 2.9973120849090416 / (t2387 == 0.0 ? 1.0E-16 : t2387);
  t2313 = t2310 >= 1.0 ? t2310 : 1.0;
  t2388 = pmf_log10(6.9 / (t2313 == 0.0 ? 1.0E-16 : t2313) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2313 == 0.0 ?
    1.0E-16 : t2313) + 0.00017169489553429715) * 3.24;
  t2390 = t2311 * 0.0020480000000000003;
  t152 = t2307 * t152 * (1.0 / (t2388 == 0.0 ? 1.0E-16 : t2388)) *
    0.046833001326703774 / (t2390 == 0.0 ? 1.0E-16 : t2390);
  t2313 = (t2310 - 2000.0) / 2000.0;
  t2314 = t2313 * t2313 * 3.0 - t2313 * t2313 * t2313 * 2.0;
  if (t2310 <= 2000.0) {
    t2313 = t2312 * 1.0E-5;
  } else if (t2310 >= 4000.0) {
    t2313 = t152 * 1.0E-5;
  } else {
    t2313 = ((1.0 - t2314) * t2312 + t152 * t2314) * 1.0E-5;
  }

  t151 = X[177ULL] * t151 / 0.32 * 0.00031622776601683789 + t2313;
  t152 = X[174ULL] - X[23ULL];
  t2312 = (X[12ULL] / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) - X[181ULL] / (X
            [182ULL] == 0.0 ? 1.0E-16 : X[182ULL])) * X[180ULL] * t2300 / 0.32;
  if (X[181ULL] <= 216.59999999999997) {
    t2313 = 216.59999999999997;
  } else {
    t2313 = X[181ULL] >= 623.15 ? 623.15 : X[181ULL];
  }

  t2163 = t2313 * t2313;
  t2314 = (((1074.1165326382541 + t2313 * -0.2214565261064077) + t2163 *
            0.00037212980109010952) * ((1.0 - intrm_sf_mf_202) - t2298) +
           ((1479.6504774710445 + t2313 * 1.200211433705052) + t2163 *
            -0.00038614513167842338) * intrm_sf_mf_202) + ((900.63941224837913 +
    t2313 * -0.044484923911364271) + t2163 * 0.00036936011832043369) * t2298;
  piece117 = t2314 - t2300;
  t2313 = t2314 / (piece117 == 0.0 ? 1.0E-16 : piece117);
  t2314 = pmf_sqrt(t2312 * t2312 * 9.999999999999999E-14 + fabs(X[181ULL] *
    t2313 * t2300) * 1.0E-9);
  t2399 = X[182ULL] * X[182ULL] * t2313;
  t2163 = -pmf_sqrt(fabs(t2399 / (t2300 == 0.0 ? 1.0E-16 : t2300) / (X[181ULL] ==
    0.0 ? 1.0E-16 : X[181ULL]))) * 0.32;
  if (t2163 >= 0.0) {
    t2316 = t2163 * 100000.0;
  } else {
    t2316 = -t2163 * 100000.0;
  }

  t2317 = t2316 * 0.01 / (t2383 == 0.0 ? 1.0E-16 : t2383);
  U_idx_0 = t2163 * t2306 * 2.9973120849090416 / (t2387 == 0.0 ? 1.0E-16 : t2387);
  intrm_sf_mf_339 = t2317 >= 1.0 ? t2317 : 1.0;
  t2406 = pmf_log10(6.9 / (intrm_sf_mf_339 == 0.0 ? 1.0E-16 : intrm_sf_mf_339) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_339 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_339) + 0.00017169489553429715) * 3.24;
  t2316 = t2163 * t2316 * (1.0 / (t2406 == 0.0 ? 1.0E-16 : t2406)) *
    0.046833001326703774 / (t2390 == 0.0 ? 1.0E-16 : t2390);
  intrm_sf_mf_339 = (t2317 - 2000.0) / 2000.0;
  t2321 = intrm_sf_mf_339 * intrm_sf_mf_339 * 3.0 - intrm_sf_mf_339 *
    intrm_sf_mf_339 * intrm_sf_mf_339 * 2.0;
  if (t2317 <= 2000.0) {
    intrm_sf_mf_339 = U_idx_0 * 1.0E-5;
  } else if (t2317 >= 4000.0) {
    intrm_sf_mf_339 = t2316 * 1.0E-5;
  } else {
    intrm_sf_mf_339 = ((1.0 - t2321) * U_idx_0 + t2316 * t2321) * 1.0E-5;
  }

  t2314 = X[180ULL] * t2314 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_339;
  t2316 = X[80ULL] - X[23ULL];
  t2093[0ULL] = X[12ULL];
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = tb_efOut;
  tlu2_1d_linear_linear_value(&ub_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ub_efOut[0];
  intrm_sf_mf_339 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&vb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vb_efOut[0];
  t2321 = t2086_idx_0;
  if (1.0 - X[14ULL] >= 0.01) {
    t2323 = 1.0 - X[14ULL];
  } else if (1.0 - X[14ULL] >= -0.1) {
    t2323 = pmf_exp(((1.0 - X[14ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2323 = 1.6701700790245661E-7;
  }

  piece82 = X[13ULL] / (t2323 == 0.0 ? 1.0E-16 : t2323) * -36.965491221318985 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&wb_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wb_efOut[0];
  t2324 = pmf_exp(pmf_log(X[23ULL] * 100000.0) - t2086_idx_0);
  if (t2324 >= 1.0) {
    U_idx_0 = (t2324 - 1.0) * 461.523 + piece82;
    U_idx_0 = piece82 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  } else {
    U_idx_0 = 1.0;
  }

  t2415 = U_idx_0 * 0.01;
  piece82 = (X[14ULL] - U_idx_0) / (t2415 == 0.0 ? 1.0E-16 : t2415);
  if (X[14ULL] - U_idx_0 <= 0.0) {
    piece82 = 0.0;
  } else if (X[14ULL] - U_idx_0 >= U_idx_0 * 0.01) {
    piece82 = X[14ULL] - U_idx_0;
  } else {
    piece82 = (X[14ULL] - U_idx_0) * (piece82 * piece82 * 3.0 - piece82 *
      piece82 * piece82 * 2.0);
  }

  t2311 = t2311 * piece82 * 0.026773120849090417 / 0.001;
  piece82 = (intrm_sf_mf_339 - t2321) * t2311;
  tlu2_1d_linear_nearest_value(&xb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xb_efOut[0];
  tlu2_1d_linear_nearest_value(&yb_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = yb_efOut[0];
  tlu2_1d_linear_nearest_value(&ac_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ac_efOut[0];
  t2321 = (((1.0 - t2157) - t4237) * t2086_idx_0 + t2099_idx_0 * t2157) +
    t2100_idx_0 * t4237;
  if (X[176ULL] <= 0.0) {
    intrm_sf_mf_1449 = 0.0;
  } else {
    intrm_sf_mf_1449 = X[176ULL] >= 1.0 ? 1.0 : X[176ULL];
  }

  if (X[175ULL] <= 0.0) {
    intrm_sf_mf_1452 = 0.0;
  } else {
    intrm_sf_mf_1452 = X[175ULL] >= 1.0 ? 1.0 : X[175ULL];
  }

  zc_int292 = (((1.0 - intrm_sf_mf_1449) - intrm_sf_mf_1452) * 296.802103844292
               + intrm_sf_mf_1449 * 461.523) + intrm_sf_mf_1452 *
    259.836612622973;
  t2329 = X[176ULL] * 461.523 / (zc_int292 == 0.0 ? 1.0E-16 : zc_int292);
  if (t2329 <= 0.0) {
    t2330 = 0.0;
  } else {
    t2330 = t2329 >= 1.0 ? 1.0 : t2329;
  }

  t2329 = X[175ULL] * 259.836612622973 / (zc_int292 == 0.0 ? 1.0E-16 : zc_int292);
  if (t2329 <= 0.0) {
    t2331 = 0.0;
  } else {
    t2331 = t2329 >= 1.0 ? 1.0 : t2329;
  }

  t2093[0ULL] = X[173ULL];
  tlu2_linear_nearest_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = bc_efOut;
  tlu2_1d_linear_nearest_value(&cc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cc_efOut[0];
  tlu2_1d_linear_nearest_value(&dc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = dc_efOut[0];
  tlu2_1d_linear_nearest_value(&ec_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ec_efOut[0];
  t2329 = (((1.0 - t2330) - t2331) * t2086_idx_0 + t2099_idx_0 * t2330) +
    t2100_idx_0 * t2331;
  tlu2_1d_linear_nearest_value(&fc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fc_efOut[0];
  tlu2_1d_linear_nearest_value(&gc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gc_efOut[0];
  tlu2_1d_linear_nearest_value(&hc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hc_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv = (((1.0 - t2157) -
    t4237) * t2086_idx_0 + t2099_idx_0 * t2157) + t2100_idx_0 * t4237;
  tlu2_1d_linear_nearest_value(&ic_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ic_efOut[0];
  tlu2_1d_linear_nearest_value(&jc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = jc_efOut[0];
  tlu2_1d_linear_nearest_value(&kc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = kc_efOut[0];
  t2157 = (((1.0 - t2330) - t2331) * t2086_idx_0 + t2099_idx_0 * t2330) +
    t2100_idx_0 * t2331;
  t4237 = (X[177ULL] - X[180ULL]) / 2.0;
  tlu2_1d_linear_nearest_value(&lc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = lc_efOut[0];
  tlu2_1d_linear_nearest_value(&mc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = mc_efOut[0];
  tlu2_1d_linear_nearest_value(&nc_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = nc_efOut[0];
  t2335 = (((1.0 - t2330) - t2331) * t2086_idx_0 + t2099_idx_0 * t2330) +
    t2100_idx_0 * t2331;
  t2423 = (t2306 + t2335) / 2.0 * 0.32;
  t2330 = (t4237 >= 0.0 ? t4237 : 0.0) * 0.01 / (t2423 == 0.0 ? 1.0E-16 : t2423);
  t2331 = t2330 >= 0.0 ? t2330 : -t2330;
  t2334 = t2331 > 1000.0 ? t2331 : 1000.0;
  t2424 = t2329 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv;
  if (t2424 / 2.0 > 0.5) {
    piece98 = (t2329 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv)
      / 2.0;
  } else {
    piece98 = 0.5;
  }

  t2426 = pmf_log10(6.9 / (t2334 == 0.0 ? 1.0E-16 : t2334) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2334 == 0.0 ?
    1.0E-16 : t2334) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_1651 = 1.0 / (t2426 == 0.0 ? 1.0E-16 : t2426);
  t2428 = (pmf_pow(piece98, 0.66666666666666663) - 1.0) * pmf_sqrt
    (intrm_sf_mf_1651 / 8.0) * 12.7 + 1.0;
  t2334 = (t2334 - 1000.0) * (intrm_sf_mf_1651 / 8.0) * piece98 / (t2428 == 0.0 ?
    1.0E-16 : t2428);
  piece98 = (t2331 - 2000.0) / 2000.0;
  intrm_sf_mf_1651 = piece98 * piece98 * 3.0 - piece98 * piece98 * piece98 * 2.0;
  if (t2331 <= 2000.0) {
    piece98 = 3.66;
  } else if (t2331 >= 4000.0) {
    piece98 = t2334;
  } else {
    piece98 = (1.0 - intrm_sf_mf_1651) * 3.66 + t2334 * intrm_sf_mf_1651;
  }

  t2433 = t2424 / 2.0;
  if (t2331 > piece98 * 10.709248339636167 / 0.32 / (t2433 == 0.0 ? 1.0E-16 :
       t2433) / 30.0) {
    t2439 = (t2329 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv) /
      2.0;
    t2334 = piece98 * 10.709248339636167 / (t2331 == 0.0 ? 1.0E-16 : t2331) /
      0.32 / (t2439 == 0.0 ? 1.0E-16 : t2439);
  } else {
    t2334 = 30.0;
  }

  t2331 = (X[18ULL] - X[173ULL]) * (1.0 - pmf_exp(-t2334));
  t2330 = t2330 * 0.32 / 0.01 * (t2424 / 2.0) * ((t2157 + t2321) / 2.0) * t2331;
  if (X[82ULL] <= 0.0) {
    t2331 = 0.0;
  } else {
    t2331 = X[82ULL] >= 1.0 ? 1.0 : X[82ULL];
  }

  if (X[81ULL] <= 0.0) {
    t2334 = 0.0;
  } else {
    t2334 = X[81ULL] >= 1.0 ? 1.0 : X[81ULL];
  }

  piece98 = (((1.0 - t2331) - t2334) * 296.802103844292 + t2331 * 461.523) +
    t2334 * 259.836612622973;
  intrm_sf_mf_1651 = X[82ULL] * 461.523 / (piece98 == 0.0 ? 1.0E-16 : piece98);
  if (intrm_sf_mf_1651 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 =
      intrm_sf_mf_1651 >= 1.0 ? 1.0 : intrm_sf_mf_1651;
  }

  intrm_sf_mf_1651 = X[81ULL] * 259.836612622973 / (piece98 == 0.0 ? 1.0E-16 :
    piece98);
  if (intrm_sf_mf_1651 <= 0.0) {
    t2339 = 0.0;
  } else {
    t2339 = intrm_sf_mf_1651 >= 1.0 ? 1.0 : intrm_sf_mf_1651;
  }

  t2093[0ULL] = X[79ULL];
  tlu2_linear_nearest_prelookup(&oc_efOut.mField0[0ULL], &oc_efOut.mField1[0ULL],
    &oc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = oc_efOut;
  tlu2_1d_linear_nearest_value(&pc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = pc_efOut[0];
  tlu2_1d_linear_nearest_value(&qc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = qc_efOut[0];
  tlu2_1d_linear_nearest_value(&rc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = rc_efOut[0];
  intrm_sf_mf_1651 = (((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1)
                       - t2339) * t2086_idx_0 + t2099_idx_0 *
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1)
    + t2100_idx_0 * t2339;
  tlu2_1d_linear_nearest_value(&sc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = sc_efOut[0];
  tlu2_1d_linear_nearest_value(&tc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = tc_efOut[0];
  tlu2_1d_linear_nearest_value(&uc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = uc_efOut[0];
  zc_int357 = (((1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1)
                - t2339) * t2086_idx_0 + t2099_idx_0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1)
    + t2100_idx_0 * t2339;
  t2341 = t4237 <= 0.0 ? t4237 : 0.0;
  tlu2_1d_linear_nearest_value(&vc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vc_efOut[0];
  tlu2_1d_linear_nearest_value(&wc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = wc_efOut[0];
  tlu2_1d_linear_nearest_value(&xc_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = xc_efOut[0];
  t4237 = (((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1) -
            t2339) * t2086_idx_0 + t2099_idx_0 *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1) +
    t2100_idx_0 * t2339;
  t2447 = (t2306 + t4237) / 2.0 * 0.32;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 = -t2341 *
    0.01 / (t2447 == 0.0 ? 1.0E-16 : t2447);
  t2339 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 >= 0.0
    ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 :
    -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1;
  t2341 = t2339 > 1000.0 ? t2339 : 1000.0;
  t2448 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv +
    intrm_sf_mf_1651;
  if (t2448 / 2.0 > 0.5) {
    t2343 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv +
             intrm_sf_mf_1651) / 2.0;
  } else {
    t2343 = 0.5;
  }

  t2450 = pmf_log10(6.9 / (t2341 == 0.0 ? 1.0E-16 : t2341) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2341 == 0.0 ?
    1.0E-16 : t2341) + 0.00017169489553429715) * 3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5 = 1.0 / (t2450
    == 0.0 ? 1.0E-16 : t2450);
  t2452 = (pmf_pow(t2343, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5 / 8.0) *
    12.7 + 1.0;
  t2341 = (t2341 - 1000.0) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5 / 8.0) *
    t2343 / (t2452 == 0.0 ? 1.0E-16 : t2452);
  t2343 = (t2339 - 2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5 = t2343 *
    t2343 * 3.0 - t2343 * t2343 * t2343 * 2.0;
  if (t2339 <= 2000.0) {
    t2343 = 3.66;
  } else if (t2339 >= 4000.0) {
    t2343 = t2341;
  } else {
    t2343 = (1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5) *
      3.66 + t2341 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5;
  }

  t2457 = t2448 / 2.0;
  if (t2339 > t2343 * 10.709248339636167 / 0.32 / (t2457 == 0.0 ? 1.0E-16 :
       t2457) / 30.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 =
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv +
       intrm_sf_mf_1651) / 2.0;
    t2341 = t2343 * 10.709248339636167 / (t2339 == 0.0 ? 1.0E-16 : t2339) / 0.32
      / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 == 0.0 ?
         1.0E-16 :
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0);
  } else {
    t2341 = 30.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv = (X[18ULL] - X
    [79ULL]) * (1.0 - pmf_exp(-t2341));
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv = t2330 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 * 0.32 /
    0.01 * (t2448 / 2.0) * ((t2321 + zc_int357) / 2.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv;
  t2330 = pmf_sqrt(X[177ULL] * X[177ULL] + 2.5711439722933289E-8);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1 = pmf_sqrt(X
    [177ULL] * X[177ULL] + 4.9597684650720062E-8);
  t2339 = pmf_sqrt(X[177ULL] * X[177ULL] + 3.5023764535063275E-8);
  t2341 = pmf_sqrt(X[180ULL] * X[180ULL] + 2.5711439722933289E-8);
  t2343 = pmf_sqrt(X[180ULL] * X[180ULL] + 4.9597684650720062E-8);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5 = pmf_sqrt(X
    [180ULL] * X[180ULL] + 3.5023764535063275E-8);
  tlu2_1d_linear_linear_value(&yc_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = yc_efOut[0];
  t2351 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&ad_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ad_efOut[0];
  t2354 = X[186ULL] + X[191ULL];
  t2355 = (X[177ULL] + X[180ULL]) - t2311 * 100000.0;
  t2356 = (X[187ULL] + X[192ULL]) - t2311 * 100000.0;
  t2357 = (((1.0 - intrm_sf_mf_202) - t2298) * t2351 + intrm_sf_mf_339 *
           intrm_sf_mf_202) + t2086_idx_0 * t2298;
  t2359 = t2351 - X[12ULL] * 0.296802103844292;
  t2351 = t2086_idx_0 - X[12ULL] * 0.25983661262297303;
  t2353 = intrm_sf_mf_339 - X[12ULL] * 0.461523;
  if (X[17ULL] <= 0.0) {
    intrm_sf_mf_339 = 0.0;
  } else {
    intrm_sf_mf_339 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    t2360 = 0.0;
  } else {
    t2360 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  t2361 = (((1.0 - intrm_sf_mf_339) - t2360) * 296.802103844292 +
           intrm_sf_mf_339 * 461.523) + t2360 * 259.836612622973;
  t2362 = -((X[15ULL] / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) - X[199ULL] / (X
              [200ULL] == 0.0 ? 1.0E-16 : X[200ULL])) * X[180ULL] * t2361) /
    0.32;
  if (X[199ULL] <= 216.59999999999997) {
    t2363 = 216.59999999999997;
  } else {
    t2363 = X[199ULL] >= 623.15 ? 623.15 : X[199ULL];
  }

  t2365 = t2363 * t2363;
  t155 = (((1074.1165326382541 + t2363 * -0.2214565261064077) + t2365 *
           0.00037212980109010952) * ((1.0 - intrm_sf_mf_339) - t2360) +
          ((1479.6504774710445 + t2363 * 1.200211433705052) + t2365 *
           -0.00038614513167842338) * intrm_sf_mf_339) + ((900.63941224837913 +
    t2363 * -0.044484923911364271) + t2365 * 0.00036936011832043369) * t2360;
  t2472 = t155 - t2361;
  t2363 = t155 / (t2472 == 0.0 ? 1.0E-16 : t2472);
  t155 = pmf_sqrt(t2362 * t2362 * 9.999999999999999E-14 + fabs(X[199ULL] * t2363
    * t2361) * 1.0E-9);
  if (X[99ULL] <= 0.0) {
    t2365 = 0.0;
  } else {
    t2365 = X[99ULL] >= 1.0 ? 1.0 : X[99ULL];
  }

  if (X[98ULL] <= 0.0) {
    t2366 = 0.0;
  } else {
    t2366 = X[98ULL] >= 1.0 ? 1.0 : X[98ULL];
  }

  t2093[0ULL] = X[15ULL];
  tlu2_linear_nearest_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t103 = bd_efOut;
  tlu2_1d_linear_nearest_value(&cd_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cd_efOut[0];
  tlu2_1d_linear_nearest_value(&dd_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = dd_efOut[0];
  tlu2_1d_linear_nearest_value(&ed_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ed_efOut[0];
  t2367 = (((1.0 - t2365) - t2366) * t2086_idx_0 + t2099_idx_0 * t2365) +
    t2100_idx_0 * t2366;
  t3619 = X[200ULL] * X[200ULL] * t2363;
  zc_int12 = -pmf_sqrt(fabs(t3619 / (t2361 == 0.0 ? 1.0E-16 : t2361) / (X[199ULL]
    == 0.0 ? 1.0E-16 : X[199ULL]))) * 0.32;
  if (zc_int12 >= 0.0) {
    t2370 = zc_int12 * 100000.0;
  } else {
    t2370 = -zc_int12 * 100000.0;
  }

  t3688 = t2367 * 0.32;
  zc_int128 = t2370 * 0.01 / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t2479 = X[15ULL] * t2361;
  piece101 = X[24ULL] / (t2479 == 0.0 ? 1.0E-16 : t2479);
  t3626 = piece101 * 6.4000000000000011E-5;
  zc_int130 = zc_int12 * t2367 * 2.9973120849090416 / (t3626 == 0.0 ? 1.0E-16 :
    t3626);
  t2380 = zc_int128 >= 1.0 ? zc_int128 : 1.0;
  t2482 = pmf_log10(6.9 / (t2380 == 0.0 ? 1.0E-16 : t2380) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2380 == 0.0 ?
    1.0E-16 : t2380) + 0.00017169489553429715) * 3.24;
  t3633 = piece101 * 0.0020480000000000003;
  t2370 = zc_int12 * t2370 * (1.0 / (t2482 == 0.0 ? 1.0E-16 : t2482)) *
    0.046833001326703774 / (t3633 == 0.0 ? 1.0E-16 : t3633);
  t2380 = (zc_int128 - 2000.0) / 2000.0;
  t2382 = t2380 * t2380 * 3.0 - t2380 * t2380 * t2380 * 2.0;
  if (zc_int128 <= 2000.0) {
    t2380 = zc_int130 * 1.0E-5;
  } else if (zc_int128 >= 4000.0) {
    t2380 = t2370 * 1.0E-5;
  } else {
    t2380 = ((1.0 - t2382) * zc_int130 + t2370 * t2382) * 1.0E-5;
  }

  t155 = -(X[180ULL] * t155) / 0.32 * 0.00031622776601683789 + t2380;
  t2370 = X[80ULL] - X[24ULL];
  zc_int130 = (X[15ULL] / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) - X[202ULL] /
               (X[203ULL] == 0.0 ? 1.0E-16 : X[203ULL])) * X[201ULL] * t2361 /
    0.32;
  if (X[202ULL] <= 216.59999999999997) {
    t2380 = 216.59999999999997;
  } else {
    t2380 = X[202ULL] >= 623.15 ? 623.15 : X[202ULL];
  }

  t2386 = t2380 * t2380;
  t2382 = (((1074.1165326382541 + t2380 * -0.2214565261064077) + t2386 *
            0.00037212980109010952) * ((1.0 - intrm_sf_mf_339) - t2360) +
           ((1479.6504774710445 + t2380 * 1.200211433705052) + t2386 *
            -0.00038614513167842338) * intrm_sf_mf_339) + ((900.63941224837913 +
    t2380 * -0.044484923911364271) + t2386 * 0.00036936011832043369) * t2360;
  t2492 = t2382 - t2361;
  t2380 = t2382 / (t2492 == 0.0 ? 1.0E-16 : t2492);
  t2382 = pmf_sqrt(zc_int130 * zc_int130 * 9.999999999999999E-14 + fabs(X[202ULL]
    * t2380 * t2361) * 1.0E-9);
  t3693 = X[203ULL] * X[203ULL] * t2380;
  t2386 = -pmf_sqrt(fabs(t3693 / (t2361 == 0.0 ? 1.0E-16 : t2361) / (X[202ULL] ==
    0.0 ? 1.0E-16 : X[202ULL]))) * 0.32;
  if (t2386 >= 0.0) {
    t2388 = t2386 * 100000.0;
  } else {
    t2388 = -t2386 * 100000.0;
  }

  t2389 = t2388 * 0.01 / (t3688 == 0.0 ? 1.0E-16 : t3688);
  U_idx_0 = t2386 * t2367 * 2.9973120849090416 / (t3626 == 0.0 ? 1.0E-16 : t3626);
  t2392 = t2389 >= 1.0 ? t2389 : 1.0;
  t2500 = pmf_log10(6.9 / (t2392 == 0.0 ? 1.0E-16 : t2392) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2392 == 0.0 ?
    1.0E-16 : t2392) + 0.00017169489553429715) * 3.24;
  t2388 = t2386 * t2388 * (1.0 / (t2500 == 0.0 ? 1.0E-16 : t2500)) *
    0.046833001326703774 / (t3633 == 0.0 ? 1.0E-16 : t3633);
  t2392 = (t2389 - 2000.0) / 2000.0;
  t2397 = t2392 * t2392 * 3.0 - t2392 * t2392 * t2392 * 2.0;
  if (t2389 <= 2000.0) {
    t2392 = U_idx_0 * 1.0E-5;
  } else if (t2389 >= 4000.0) {
    t2392 = t2388 * 1.0E-5;
  } else {
    t2392 = ((1.0 - t2397) * U_idx_0 + t2388 * t2397) * 1.0E-5;
  }

  t2382 = X[201ULL] * t2382 / 0.32 * 0.00031622776601683789 + t2392;
  t2388 = X[196ULL] - X[24ULL];
  t2093[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = fd_efOut;
  tlu2_1d_linear_linear_value(&gd_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gd_efOut[0];
  t2392 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = hd_efOut[0];
  t2397 = t2086_idx_0;
  if (1.0 - X[17ULL] >= 0.01) {
    t2400 = 1.0 - X[17ULL];
  } else if (1.0 - X[17ULL] >= -0.1) {
    t2400 = pmf_exp(((1.0 - X[17ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2400 = 1.6701700790245661E-7;
  }

  piece117 = X[16ULL] / (t2400 == 0.0 ? 1.0E-16 : t2400) * -36.965491221318985 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&id_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = id_efOut[0];
  t2402 = pmf_exp(pmf_log(X[24ULL] * 100000.0) - t2086_idx_0);
  if (t2402 >= 1.0) {
    t2507 = (t2402 - 1.0) * 461.523 + piece117;
    t2404 = piece117 / (t2507 == 0.0 ? 1.0E-16 : t2507);
  } else {
    t2404 = 1.0;
  }

  intrm_sf_mf_800 = t2404 * 0.01;
  piece117 = (X[17ULL] - t2404) / (intrm_sf_mf_800 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_800);
  if (X[17ULL] - t2404 <= 0.0) {
    piece117 = 0.0;
  } else if (X[17ULL] - t2404 >= t2404 * 0.01) {
    piece117 = X[17ULL] - t2404;
  } else {
    piece117 = (X[17ULL] - t2404) * (piece117 * piece117 * 3.0 - piece117 *
      piece117 * piece117 * 2.0);
  }

  piece101 = piece101 * piece117 * 0.026773120849090417 / 0.001;
  piece117 = (t2392 - t2397) * piece101;
  tlu2_1d_linear_nearest_value(&jd_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jd_efOut[0];
  tlu2_1d_linear_nearest_value(&kd_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = kd_efOut[0];
  tlu2_1d_linear_nearest_value(&ld_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ld_efOut[0];
  t2397 = (((1.0 - t2365) - t2366) * t2086_idx_0 + t2099_idx_0 * t2365) +
    t2100_idx_0 * t2366;
  t2404 = (X[18ULL] - X[15ULL]) * (t2397 * 10.709248339636167 / 0.01);
  tlu2_1d_linear_nearest_value(&md_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = md_efOut[0];
  tlu2_1d_linear_nearest_value(&nd_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = nd_efOut[0];
  tlu2_1d_linear_nearest_value(&od_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = od_efOut[0];
  t2406 = (((1.0 - t2365) - t2366) * t2086_idx_0 + t2099_idx_0 * t2365) +
    t2100_idx_0 * t2366;
  t2365 = (-X[180ULL] - X[201ULL]) / 2.0;
  t2515 = (t4237 + t2367) / 2.0 * 0.32;
  t4237 = (t2365 >= 0.0 ? t2365 : 0.0) * 0.01 / (t2515 == 0.0 ? 1.0E-16 : t2515);
  t2366 = t4237 >= 0.0 ? t4237 : -t4237;
  t2407 = t2366 > 1000.0 ? t2366 : 1000.0;
  t2516 = intrm_sf_mf_1651 + t2406;
  if (t2516 / 2.0 > 0.5) {
    t2409 = (intrm_sf_mf_1651 + t2406) / 2.0;
  } else {
    t2409 = 0.5;
  }

  t2518 = pmf_log10(6.9 / (t2407 == 0.0 ? 1.0E-16 : t2407) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2407 == 0.0 ?
    1.0E-16 : t2407) + 0.00017169489553429715) * 3.24;
  t2410 = 1.0 / (t2518 == 0.0 ? 1.0E-16 : t2518);
  piece120 = (pmf_pow(t2409, 0.66666666666666663) - 1.0) * pmf_sqrt(t2410 / 8.0)
    * 12.7 + 1.0;
  t2407 = (t2407 - 1000.0) * (t2410 / 8.0) * t2409 / (piece120 == 0.0 ? 1.0E-16 :
    piece120);
  t2409 = (t2366 - 2000.0) / 2000.0;
  t2410 = t2409 * t2409 * 3.0 - t2409 * t2409 * t2409 * 2.0;
  if (t2366 <= 2000.0) {
    t2409 = 3.66;
  } else if (t2366 >= 4000.0) {
    t2409 = t2407;
  } else {
    t2409 = (1.0 - t2410) * 3.66 + t2407 * t2410;
  }

  t2525 = t2516 / 2.0;
  if (t2366 > t2409 * 10.709248339636167 / 0.32 / (t2525 == 0.0 ? 1.0E-16 :
       t2525) / 30.0) {
    t2531 = (intrm_sf_mf_1651 + t2406) / 2.0;
    t2407 = t2409 * 10.709248339636167 / (t2366 == 0.0 ? 1.0E-16 : t2366) / 0.32
      / (t2531 == 0.0 ? 1.0E-16 : t2531);
  } else {
    t2407 = 30.0;
  }

  intrm_sf_mf_1651 = (X[18ULL] - X[79ULL]) * (1.0 - pmf_exp(-t2407));
  t4237 = t4237 * 0.32 / 0.01 * (t2516 / 2.0) * ((zc_int357 + t2397) / 2.0) *
    intrm_sf_mf_1651;
  if (X[198ULL] <= 0.0) {
    intrm_sf_mf_1651 = 0.0;
  } else {
    intrm_sf_mf_1651 = X[198ULL] >= 1.0 ? 1.0 : X[198ULL];
  }

  if (X[197ULL] <= 0.0) {
    zc_int357 = 0.0;
  } else {
    zc_int357 = X[197ULL] >= 1.0 ? 1.0 : X[197ULL];
  }

  t2366 = (((1.0 - intrm_sf_mf_1651) - zc_int357) * 296.802103844292 +
           intrm_sf_mf_1651 * 461.523) + zc_int357 * 259.836612622973;
  t2407 = X[198ULL] * 461.523 / (t2366 == 0.0 ? 1.0E-16 : t2366);
  if (t2407 <= 0.0) {
    t2409 = 0.0;
  } else {
    t2409 = t2407 >= 1.0 ? 1.0 : t2407;
  }

  t2407 = X[197ULL] * 259.836612622973 / (t2366 == 0.0 ? 1.0E-16 : t2366);
  if (t2407 <= 0.0) {
    t2410 = 0.0;
  } else {
    t2410 = t2407 >= 1.0 ? 1.0 : t2407;
  }

  t2093[0ULL] = X[195ULL];
  tlu2_linear_nearest_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = pd_efOut;
  tlu2_1d_linear_nearest_value(&qd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qd_efOut[0];
  tlu2_1d_linear_nearest_value(&rd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = rd_efOut[0];
  tlu2_1d_linear_nearest_value(&sd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = sd_efOut[0];
  t2407 = (((1.0 - t2409) - t2410) * t2086_idx_0 + t2099_idx_0 * t2409) +
    t2100_idx_0 * t2410;
  tlu2_1d_linear_nearest_value(&td_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = td_efOut[0];
  tlu2_1d_linear_nearest_value(&ud_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ud_efOut[0];
  tlu2_1d_linear_nearest_value(&vd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = vd_efOut[0];
  t2411 = (((1.0 - t2409) - t2410) * t2086_idx_0 + t2099_idx_0 * t2409) +
    t2100_idx_0 * t2410;
  t2412 = t2365 <= 0.0 ? t2365 : 0.0;
  tlu2_1d_linear_nearest_value(&wd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wd_efOut[0];
  tlu2_1d_linear_nearest_value(&xd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = xd_efOut[0];
  tlu2_1d_linear_nearest_value(&yd_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = yd_efOut[0];
  t2365 = (((1.0 - t2409) - t2410) * t2086_idx_0 + t2099_idx_0 * t2409) +
    t2100_idx_0 * t2410;
  t2539 = (t2367 + t2365) / 2.0 * 0.32;
  t2409 = -t2412 * 0.01 / (t2539 == 0.0 ? 1.0E-16 : t2539);
  t2410 = t2409 >= 0.0 ? t2409 : -t2409;
  t2412 = t2410 > 1000.0 ? t2410 : 1000.0;
  t2540 = t2406 + t2407;
  if (t2540 / 2.0 > 0.5) {
    U_idx_0 = (t2406 + t2407) / 2.0;
  } else {
    U_idx_0 = 0.5;
  }

  t2542 = pmf_log10(6.9 / (t2412 == 0.0 ? 1.0E-16 : t2412) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2412 == 0.0 ?
    1.0E-16 : t2412) + 0.00017169489553429715) * 3.24;
  t2414 = 1.0 / (t2542 == 0.0 ? 1.0E-16 : t2542);
  t2544 = (pmf_pow(U_idx_0, 0.66666666666666663) - 1.0) * pmf_sqrt(t2414 / 8.0) *
    12.7 + 1.0;
  t2412 = (t2412 - 1000.0) * (t2414 / 8.0) * U_idx_0 / (t2544 == 0.0 ? 1.0E-16 :
    t2544);
  U_idx_0 = (t2410 - 2000.0) / 2000.0;
  t2414 = U_idx_0 * U_idx_0 * 3.0 - U_idx_0 * U_idx_0 * U_idx_0 * 2.0;
  if (t2410 <= 2000.0) {
    U_idx_0 = 3.66;
  } else if (t2410 >= 4000.0) {
    U_idx_0 = t2412;
  } else {
    U_idx_0 = (1.0 - t2414) * 3.66 + t2412 * t2414;
  }

  t162 = t2540 / 2.0;
  if (t2410 > U_idx_0 * 10.709248339636167 / 0.32 / (t162 == 0.0 ? 1.0E-16 :
       t162) / 30.0) {
    t2555 = (t2406 + t2407) / 2.0;
    t2412 = U_idx_0 * 10.709248339636167 / (t2410 == 0.0 ? 1.0E-16 : t2410) /
      0.32 / (t2555 == 0.0 ? 1.0E-16 : t2555);
  } else {
    t2412 = 30.0;
  }

  t2406 = (X[18ULL] - X[195ULL]) * (1.0 - pmf_exp(-t2412));
  t2406 = t4237 + t2409 * 0.32 / 0.01 * (t2540 / 2.0) * ((t2397 + t2411) / 2.0) *
    t2406;
  t2397 = pmf_sqrt(X[201ULL] * X[201ULL] + 2.5711439722933289E-8);
  t2409 = pmf_sqrt(X[201ULL] * X[201ULL] + 4.9597684650720062E-8);
  t2410 = pmf_sqrt(X[201ULL] * X[201ULL] + 3.5023764535063275E-8);
  tlu2_1d_linear_linear_value(&ae_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ae_efOut[0];
  t2412 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&be_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = be_efOut[0];
  t2414 = (-X[191ULL] + X[116ULL]) + X[209ULL];
  t2415 = (((-X[180ULL] + X[116ULL]) + X[201ULL]) + X[121ULL]) - piece101 *
    100000.0;
  t2416 = ((-X[192ULL] + X[210ULL]) + X[121ULL]) - piece101 * 100000.0;
  t2417 = (((1.0 - intrm_sf_mf_339) - t2360) * t2412 + t2392 * intrm_sf_mf_339)
    + t2086_idx_0 * t2360;
  t2419 = t2412 - X[15ULL] * 0.296802103844292;
  t2412 = t2086_idx_0 - X[15ULL] * 0.25983661262297303;
  t2420 = -X[220ULL] + U_idx_3 * -2.0;
  t2421 = pmf_sqrt(t2420 * t2420 + 6.4274470286298274E-9);
  t2093[0ULL] = X[219ULL];
  t386[0] = 11ULL;
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t86 = ce_efOut;
  t2093[0ULL] = 1.01325;
  t389[0] = 12ULL;
  tlu2_linear_linear_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t82 = de_efOut;
  tlu2_2d_linear_linear_value(&ee_efOut[0ULL], &t86.mField0[0ULL], &t86.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ee_efOut[0];
  t2423 = t2420 / (t2421 == 0.0 ? 1.0E-16 : t2421) * 1.01325 / (t2086_idx_0 ==
    0.0 ? 1.0E-16 : t2086_idx_0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan7 = (1.0 - t2420 /
    (t2421 == 0.0 ? 1.0E-16 : t2421)) / 2.0;
  t2420 = (t2420 / (t2421 == 0.0 ? 1.0E-16 : t2421) + 1.0) / 2.0;
  t2093[0ULL] = X[215ULL];
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t103 = fe_efOut;
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ge_efOut[0];
  t2424 = t2086_idx_0;
  t2093[0ULL] = X[25ULL];
  tlu2_linear_linear_prelookup(&he_efOut.mField0[0ULL], &he_efOut.mField1[0ULL],
    &he_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t116 = he_efOut;
  tlu2_2d_linear_linear_value(&ie_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ie_efOut[0];
  t2425 = t2086_idx_0;
  t2427 = X[218ULL] * 0.1;
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = je_efOut[0];
  t2426 = t2086_idx_0;
  t2428 = 1.01325 / (t2425 == 0.0 ? 1.0E-16 : t2425) * 100.0 + t2086_idx_0;
  t2429 = pmf_sqrt(X[228ULL] * X[228ULL] + 1.2620262729050631E-10);
  t2093[0ULL] = X[227ULL];
  tlu2_linear_linear_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t77 = ke_efOut;
  t2093[0ULL] = X[223ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t76 = le_efOut;
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = me_efOut[0];
  t2432 = X[228ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429) * X[223ULL] /
    (t2086_idx_0 == 0.0 ? 1.0E-16 : t2086_idx_0);
  t2430 = (1.0 - X[228ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429)) / 2.0;
  t2433 = (X[228ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429) + 1.0) / 2.0;
  t2093[0ULL] = X[222ULL];
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t116 = ne_efOut;
  tlu2_2d_linear_linear_value(&oe_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = oe_efOut[0];
  t2434 = t2086_idx_0;
  t2093[0ULL] = X[230ULL];
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t91 = pe_efOut;
  t2093[0ULL] = X[225ULL];
  tlu2_linear_linear_prelookup(&qe_efOut.mField0[0ULL], &qe_efOut.mField1[0ULL],
    &qe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t119 = qe_efOut;
  tlu2_2d_linear_linear_value(&re_efOut[0ULL], &t91.mField0[0ULL], &t91.mField2
    [0ULL], &t119.mField0[0ULL], &t119.mField2[0ULL], ((_NeDynamicSystem*)(LC)
    )->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = re_efOut[0];
  t2436 = -X[228ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429) * X[225ULL] /
    (t2086_idx_0 == 0.0 ? 1.0E-16 : t2086_idx_0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Flow_Resistance_TL_9 = (1.0 - -X
    [228ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429)) / 2.0;
  t2437 = (-X[228ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429) + 1.0) / 2.0;
  t2093[0ULL] = X[224ULL];
  tlu2_linear_linear_prelookup(&se_efOut.mField0[0ULL], &se_efOut.mField1[0ULL],
    &se_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t103 = se_efOut;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t119.mField0[0ULL], &t119.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = te_efOut[0];
  t2438 = t2086_idx_0;
  t2093[0ULL] = X[224ULL];
  tlu2_linear_nearest_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t131 = ue_efOut;
  t2093[0ULL] = X[27ULL];
  tlu2_linear_nearest_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t117 = ve_efOut;
  tlu2_2d_linear_nearest_value(&we_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = we_efOut[0];
  t2439 = t2086_idx_0;
  t2093[0ULL] = X[215ULL];
  tlu2_linear_nearest_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t138 = xe_efOut;
  tlu2_2d_linear_nearest_value(&ye_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ye_efOut[0];
  t2440 = t2086_idx_0;
  t2093[0ULL] = X[28ULL];
  tlu2_linear_nearest_prelookup(&af_efOut.mField0[0ULL], &af_efOut.mField1[0ULL],
    &af_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t116 = af_efOut;
  tlu2_2d_linear_nearest_value(&bf_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = bf_efOut[0];
  intrm_sf_mf_502 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&cf_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = cf_efOut[0];
  t2443 = t2086_idx_0;
  t2444 = (X[18ULL] - X[28ULL]) * (t2086_idx_0 * 1.6063872509454251 / 0.01);
  intrm_sf_mf_509 = (X[228ULL] - X[220ULL]) / 2.0;
  tlu2_2d_linear_nearest_value(&df_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = df_efOut[0];
  t2446 = t2086_idx_0;
  t3750 = intrm_sf_mf_509 * 0.01;
  t3757 = t2086_idx_0 * 0.002;
  t2447 = t3750 / (t3757 == 0.0 ? 1.0E-16 : t3757);
  t2448 = pmf_sqrt(X[228ULL] * X[228ULL] + 5.1419576229038592E-12);
  t2093[0ULL] = X[231ULL];
  tlu2_linear_linear_prelookup(&ef_efOut.mField0[0ULL], &ef_efOut.mField1[0ULL],
    &ef_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t135 = ef_efOut;
  tlu2_2d_linear_linear_value(&ff_efOut[0ULL], &t135.mField0[0ULL],
    &t135.mField2[0ULL], &t119.mField0[0ULL], &t119.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ff_efOut[0];
  t2450 = X[228ULL] / (t2448 == 0.0 ? 1.0E-16 : t2448) * X[225ULL] /
    (t2086_idx_0 == 0.0 ? 1.0E-16 : t2086_idx_0);
  t2449 = (1.0 - X[228ULL] / (t2448 == 0.0 ? 1.0E-16 : t2448)) / 2.0;
  t2451 = (X[228ULL] / (t2448 == 0.0 ? 1.0E-16 : t2448) + 1.0) / 2.0;
  t2452 = pmf_sqrt(X[220ULL] * X[220ULL] + 5.1419576229038592E-12);
  t2093[0ULL] = X[233ULL];
  tlu2_linear_linear_prelookup(&gf_efOut.mField0[0ULL], &gf_efOut.mField1[0ULL],
    &gf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t72 = gf_efOut;
  tlu2_2d_linear_linear_value(&hf_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = hf_efOut[0];
  t2454 = X[220ULL] / (t2452 == 0.0 ? 1.0E-16 : t2452) * 1.01325 / (t2086_idx_0 ==
    0.0 ? 1.0E-16 : t2086_idx_0);
  t2453 = (1.0 - X[220ULL] / (t2452 == 0.0 ? 1.0E-16 : t2452)) / 2.0;
  t2456 = (X[220ULL] / (t2452 == 0.0 ? 1.0E-16 : t2452) + 1.0) / 2.0;
  t2093[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&if_efOut.mField0[0ULL], &if_efOut.mField1[0ULL],
    &if_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t103 = if_efOut;
  t2093[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&jf_efOut.mField0[0ULL], &jf_efOut.mField1[0ULL],
    &jf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t116 = jf_efOut;
  tlu2_2d_linear_linear_value(&kf_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t116.mField0[0ULL], &t116.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = kf_efOut[0];
  t2457 = t2086_idx_0;
  tlu2_2d_linear_linear_value(&lf_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t116.mField0[0ULL], &t116.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = lf_efOut[0];
  t2458 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&mf_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = mf_efOut[0];
  t2459 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&nf_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = nf_efOut[0];
  t2460 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&of_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = of_efOut[0];
  t2461 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&pf_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = pf_efOut[0];
  zc_int138 = t2086_idx_0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 = U_idx_3 *
    2.0;
  t2466 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 +
     1.2620262729050631E-10);
  t2093[0ULL] = X[238ULL];
  tlu2_linear_linear_prelookup(&qf_efOut.mField0[0ULL], &qf_efOut.mField1[0ULL],
    &qf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t70 = qf_efOut;
  tlu2_2d_linear_linear_value(&rf_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = rf_efOut[0];
  t2467 = t2086_idx_0;
  t2471 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
    (t2466 == 0.0 ? 1.0E-16 : t2466) * 1.01325 / (t2086_idx_0 == 0.0 ? 1.0E-16 :
    t2086_idx_0);
  t2472 = (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0
           / (t2466 == 0.0 ? 1.0E-16 : t2466)) / 2.0;
  t2474 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
           (t2466 == 0.0 ? 1.0E-16 : t2466) + 1.0) / 2.0;
  t2093[0ULL] = X[240ULL];
  tlu2_linear_linear_prelookup(&sf_efOut.mField0[0ULL], &sf_efOut.mField1[0ULL],
    &sf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t69 = sf_efOut;
  t2093[0ULL] = X[236ULL];
  tlu2_linear_linear_prelookup(&tf_efOut.mField0[0ULL], &tf_efOut.mField1[0ULL],
    &tf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t68 = tf_efOut;
  tlu2_2d_linear_linear_value(&uf_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = uf_efOut[0];
  zc_int15 = t2086_idx_0;
  t2480 = -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
    (t2466 == 0.0 ? 1.0E-16 : t2466) * X[236ULL] / (t2086_idx_0 == 0.0 ? 1.0E-16
    : t2086_idx_0);
  t2482 = (1.0 -
           -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
           (t2466 == 0.0 ? 1.0E-16 : t2466)) / 2.0;
  t2483 = (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
           (t2466 == 0.0 ? 1.0E-16 : t2466) + 1.0) / 2.0;
  t2093[0ULL] = X[235ULL];
  tlu2_linear_linear_prelookup(&vf_efOut.mField0[0ULL], &vf_efOut.mField1[0ULL],
    &vf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t90 = vf_efOut;
  tlu2_2d_linear_linear_value(&wf_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = wf_efOut[0];
  t2485 = t2086_idx_0;
  t2467 = (t2467 + zc_int15) / 2.0;
  t2464 = (X[236ULL] - 1.01325) * (U_idx_3 * 2.0) / (t2467 == 0.0 ? 1.0E-16 :
    t2467);
  t2093[0ULL] = X[235ULL];
  tlu2_linear_nearest_prelookup(&xf_efOut.mField0[0ULL], &xf_efOut.mField1[0ULL],
    &xf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t103 = xf_efOut;
  t2093[0ULL] = X[29ULL];
  tlu2_linear_nearest_prelookup(&yf_efOut.mField0[0ULL], &yf_efOut.mField1[0ULL],
    &yf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t131 = yf_efOut;
  tlu2_2d_linear_nearest_value(&ag_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ag_efOut[0];
  t2467 = t2086_idx_0;
  t2093[0ULL] = X[222ULL];
  tlu2_linear_nearest_prelookup(&bg_efOut.mField0[0ULL], &bg_efOut.mField1[0ULL],
    &bg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t138 = bg_efOut;
  tlu2_2d_linear_nearest_value(&cg_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = cg_efOut[0];
  zc_int15 = t2086_idx_0;
  t2093[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&dg_efOut.mField0[0ULL], &dg_efOut.mField1[0ULL],
    &dg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t137 = dg_efOut;
  tlu2_2d_linear_nearest_value(&eg_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = eg_efOut[0];
  t2486 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&fg_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = fg_efOut[0];
  t2491 = t2086_idx_0;
  t2492 = (X[31ULL] - X[30ULL]) * (t2086_idx_0 * 1.3250000000000002 /
    0.0028301886792452828);
  t2494 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 -
           (-X[228ULL])) / 2.0;
  tlu2_2d_linear_nearest_value(&gg_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = gg_efOut[0];
  t2496 = t2086_idx_0;
  t3776 = t2494 * 0.0028301886792452828;
  t3779 = t2086_idx_0 * 0.00093750000000000007;
  intrm_sf_mf_791 = t3776 / (t3779 == 0.0 ? 1.0E-16 : t3779);
  t2500 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 +
     2.4102926357361849E-12);
  t2093[0ULL] = X[241ULL];
  tlu2_linear_linear_prelookup(&hg_efOut.mField0[0ULL], &hg_efOut.mField1[0ULL],
    &hg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t65 = hg_efOut;
  tlu2_2d_linear_linear_value(&ig_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ig_efOut[0];
  t2503 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
    (t2500 == 0.0 ? 1.0E-16 : t2500) * X[236ULL] / (t2086_idx_0 == 0.0 ? 1.0E-16
    : t2086_idx_0);
  t2501 = (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0
           / (t2500 == 0.0 ? 1.0E-16 : t2500)) / 2.0;
  t2504 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
           (t2500 == 0.0 ? 1.0E-16 : t2500) + 1.0) / 2.0;
  t2505 = pmf_sqrt(X[228ULL] * X[228ULL] + 2.4102926357361849E-12);
  t2093[0ULL] = X[243ULL];
  tlu2_linear_linear_prelookup(&jg_efOut.mField0[0ULL], &jg_efOut.mField1[0ULL],
    &jg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t136 = jg_efOut;
  tlu2_2d_linear_linear_value(&kg_efOut[0ULL], &t136.mField0[0ULL],
    &t136.mField2[0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = kg_efOut[0];
  t2507 = -X[228ULL] / (t2505 == 0.0 ? 1.0E-16 : t2505) * X[223ULL] /
    (t2086_idx_0 == 0.0 ? 1.0E-16 : t2086_idx_0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_convection_8 = (1.0 - -X
    [228ULL] / (t2505 == 0.0 ? 1.0E-16 : t2505)) / 2.0;
  t2508 = (-X[228ULL] / (t2505 == 0.0 ? 1.0E-16 : t2505) + 1.0) / 2.0;
  t2093[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&lg_efOut.mField0[0ULL], &lg_efOut.mField1[0ULL],
    &lg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t2093[0ULL],
    &t386[0ULL], &t170[0ULL]);
  t117 = lg_efOut;
  t2093[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&mg_efOut.mField0[0ULL], &mg_efOut.mField1[0ULL],
    &mg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t2093[0ULL],
    &t389[0ULL], &t170[0ULL]);
  t116 = mg_efOut;
  tlu2_2d_linear_linear_value(&ng_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], &t116.mField0[0ULL], &t116.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = ng_efOut[0];
  intrm_sf_mf_800 = t2086_idx_0;
  tlu2_2d_linear_linear_value(&og_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], &t116.mField0[0ULL], &t116.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = og_efOut[0];
  t2510 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&pg_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = pg_efOut[0];
  t2511 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&qg_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = qg_efOut[0];
  intrm_sf_mf_838 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&rg_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = rg_efOut[0];
  t2513 = t2086_idx_0;
  tlu2_2d_linear_nearest_value(&sg_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = sg_efOut[0];
  piece307 = t2086_idx_0;
  t2093[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&tg_efOut.mField0[0ULL], &tg_efOut.mField1[0ULL],
    &tg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = tg_efOut;
  tlu2_1d_linear_linear_value(&ug_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ug_efOut[0];
  t2515 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&vg_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vg_efOut[0];
  t2516 = t2086_idx_0;
  if (X[35ULL] <= 0.0) {
    t2517 = 0.0;
  } else {
    t2517 = X[35ULL] >= 1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    t2518 = 0.0;
  } else {
    t2518 = X[34ULL] >= 1.0 ? 1.0 : X[34ULL];
  }

  t2519 = (((1.0 - t2517) - t2518) * 296.802103844292 + t2517 * 461.523) + t2518
    * 4124.48151675695;
  t2615 = X[32ULL] * t2519;
  if (1.0 - X[35ULL] >= 0.01) {
    t2521 = 1.0 - X[35ULL];
  } else if (1.0 - X[35ULL] >= -0.1) {
    t2521 = pmf_exp(((1.0 - X[35ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2521 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = X[34ULL] /
    (t2521 == 0.0 ? 1.0E-16 : t2521) * 3827.6794129126583 + 296.802103844292;
  tlu2_1d_linear_linear_value(&wg_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wg_efOut[0];
  t2524 = pmf_exp(pmf_log(X[33ULL] * 100000.0) - t2086_idx_0);
  if (t2524 >= 1.0) {
    zc_int0 = (t2524 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2;
    t2525 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 /
      (zc_int0 == 0.0 ? 1.0E-16 : zc_int0);
  } else {
    t2525 = 1.0;
  }

  t2620 = t2525 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = (X[35ULL] -
    t2525) / (t2620 == 0.0 ? 1.0E-16 : t2620);
  if (X[35ULL] - t2525 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = 0.0;
  } else if (X[35ULL] - t2525 >= t2525 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = X[35ULL] -
      t2525;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = (X[35ULL] -
      t2525) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
                3.0 -
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
                2.0);
  }

  piece120 = X[33ULL] / (t2615 == 0.0 ? 1.0E-16 : t2615) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
    0.00012500000000000003 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = (t2515 -
    t2516) * piece120;
  t2516 = pmf_sqrt(X[263ULL] * X[263ULL] + 1.8324100759713822E-12);
  t2525 = pmf_sqrt(X[263ULL] * X[263ULL] + 2.0914103314136477E-13);
  t2526 = pmf_sqrt(X[263ULL] * X[263ULL] + 1.4768645655431184E-13);
  t2527 = U_idx_2 * 0.01;
  t2528 = pmf_sqrt(t2527 * t2527 + 1.8324100759713822E-12);
  t2529 = pmf_sqrt(t2527 * t2527 + 2.0914103314136477E-13);
  t2530 = pmf_sqrt(t2527 * t2527 + 1.4768645655431184E-13);
  t2531 = pmf_sqrt(X[272ULL] * X[272ULL] + 1.8324100759713822E-12);
  t2532 = pmf_sqrt(X[272ULL] * X[272ULL] + 2.0914103314136477E-13);
  t2534 = pmf_sqrt(X[272ULL] * X[272ULL] + 1.4768645655431184E-13);
  tlu2_1d_linear_linear_value(&xg_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xg_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&yg_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = yg_efOut[0];
  t2537 = (X[157ULL] + X[264ULL]) + X[273ULL];
  t2538 = ((X[263ULL] + t2527) + X[272ULL]) - piece120 * 100000.0;
  t2539 = ((X[159ULL] + X[265ULL]) + X[274ULL]) - piece120 * 100000.0;
  t2540 = (((1.0 - t2517) - t2518) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 +
           t2515 * t2517) + t2086_idx_0 * t2518;
  t2542 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 - X
    [32ULL] * 0.296802103844292;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 = t2086_idx_0
    - X[32ULL] * 4.12448151675695;
  t2536 = t2515 - X[32ULL] * 0.461523;
  if (X[283ULL] <= 0.0) {
    t2515 = 0.0;
  } else {
    t2515 = X[283ULL] >= 1.0 ? 1.0 : X[283ULL];
  }

  if (X[282ULL] <= 0.0) {
    t2543 = 0.0;
  } else {
    t2543 = X[282ULL] >= 1.0 ? 1.0 : X[282ULL];
  }

  t2544 = (((1.0 - t2515) - t2543) * 296.802103844292 + t2515 * 461.523) + t2543
    * 4124.48151675695;
  t2093[0ULL] = X[277ULL];
  tlu2_linear_linear_prelookup(&ah_efOut.mField0[0ULL], &ah_efOut.mField1[0ULL],
    &ah_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t59 = ah_efOut;
  tlu2_1d_linear_linear_value(&bh_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = bh_efOut[0];
  tlu2_1d_linear_linear_value(&ch_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = ch_efOut[0];
  tlu2_1d_linear_linear_value(&dh_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = dh_efOut[0];
  t161 = (((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
    t2100_idx_0 * t2543;
  t2093[0ULL] = X[280ULL];
  tlu2_linear_linear_prelookup(&eh_efOut.mField0[0ULL], &eh_efOut.mField1[0ULL],
    &eh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t57 = eh_efOut;
  tlu2_1d_linear_linear_value(&fh_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = fh_efOut[0];
  tlu2_1d_linear_linear_value(&gh_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = gh_efOut[0];
  tlu2_1d_linear_linear_value(&hh_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = hh_efOut[0];
  t2546 = (((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
    t2100_idx_0 * t2543;
  t2093[0ULL] = X[278ULL];
  tlu2_linear_linear_prelookup(&ih_efOut.mField0[0ULL], &ih_efOut.mField1[0ULL],
    &ih_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t107 = ih_efOut;
  tlu2_1d_linear_linear_value(&jh_efOut[0ULL], &t107.mField0[0ULL],
    &t107.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jh_efOut[0];
  tlu2_1d_linear_linear_value(&kh_efOut[0ULL], &t107.mField0[0ULL],
    &t107.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = kh_efOut[0];
  tlu2_1d_linear_linear_value(&lh_efOut[0ULL], &t107.mField0[0ULL],
    &t107.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = lh_efOut[0];
  t2548 = (((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
    t2100_idx_0 * t2543;
  t2093[0ULL] = X[279ULL];
  tlu2_linear_linear_prelookup(&mh_efOut.mField0[0ULL], &mh_efOut.mField1[0ULL],
    &mh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t12 = mh_efOut;
  tlu2_1d_linear_linear_value(&nh_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = nh_efOut[0];
  tlu2_1d_linear_linear_value(&oh_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = oh_efOut[0];
  tlu2_1d_linear_linear_value(&ph_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = ph_efOut[0];
  t162 = (((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
    t2100_idx_0 * t2543;
  t2093[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&qh_efOut.mField0[0ULL], &qh_efOut.mField1[0ULL],
    &qh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t137 = qh_efOut;
  tlu2_1d_linear_linear_value(&rh_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = rh_efOut[0];
  t2550 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&sh_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = sh_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0 = t2086_idx_0;
  if (X[39ULL] <= 0.0) {
    t2552 = 0.0;
  } else {
    t2552 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    t2553 = 0.0;
  } else {
    t2553 = X[38ULL] >= 1.0 ? 1.0 : X[38ULL];
  }

  t2554 = (((1.0 - t2552) - t2553) * 296.802103844292 + t2552 * 461.523) + t2553
    * 4124.48151675695;
  t2623 = X[36ULL] * t2554;
  if (1.0 - X[39ULL] >= 0.01) {
    t2556 = 1.0 - X[39ULL];
  } else if (1.0 - X[39ULL] >= -0.1) {
    t2556 = pmf_exp(((1.0 - X[39ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2556 = 1.6701700790245661E-7;
  }

  t2558 = X[38ULL] / (t2556 == 0.0 ? 1.0E-16 : t2556) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&th_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = th_efOut[0];
  t2559 = pmf_exp(pmf_log(X[37ULL] * 100000.0) - t2086_idx_0);
  if (t2559 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I = (t2559 - 1.0) *
      461.523 + t2558;
    t2560 = t2558 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I ==
                     0.0 ? 1.0E-16 :
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I);
  } else {
    t2560 = 1.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total = t2560 * 0.01;
  t2558 = (X[39ULL] - t2560) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total);
  if (X[39ULL] - t2560 <= 0.0) {
    t2558 = 0.0;
  } else if (X[39ULL] - t2560 >= t2560 * 0.01) {
    t2558 = X[39ULL] - t2560;
  } else {
    t2558 = (X[39ULL] - t2560) * (t2558 * t2558 * 3.0 - t2558 * t2558 * t2558 *
      2.0);
  }

  t2555 = X[37ULL] / (t2623 == 0.0 ? 1.0E-16 : t2623) * t2558 * 0.12 / 0.001;
  t2558 = (t2550 -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0) *
    t2555;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0 = pmf_sqrt(X
    [293ULL] * X[293ULL] + 1.8324100759713822E-12);
  t2560 = pmf_sqrt(X[293ULL] * X[293ULL] + 2.0914103314136477E-13);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection2 = pmf_sqrt(X
    [293ULL] * X[293ULL] + 1.4768645655431184E-13);
  tlu2_1d_linear_linear_value(&uh_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = uh_efOut[0];
  t2562 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&vh_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vh_efOut[0];
  t2567 = X[293ULL] - t2555 * 100000.0;
  t2568 = X[295ULL] - t2555 * 100000.0;
  t2569 = (((1.0 - t2552) - t2553) * t2562 + t2550 * t2552) + t2086_idx_0 *
    t2553;
  t2573 = t2562 - X[36ULL] * 0.296802103844292;
  t2562 = t2086_idx_0 - X[36ULL] * 4.12448151675695;
  t2563 = t2550 - X[36ULL] * 0.461523;
  if (X[42ULL] <= 0.0) {
    t2550 = 0.0;
  } else {
    t2550 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    t2574 = 0.0;
  } else {
    t2574 = X[43ULL] >= 1.0 ? 1.0 : X[43ULL];
  }

  t2575 = (((1.0 - t2550) - t2574) * 296.802103844292 + t2550 * 461.523) + t2574
    * 4124.48151675695;
  t2579 = -((X[40ULL] / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) - X[303ULL] / (X
              [304ULL] == 0.0 ? 1.0E-16 : X[304ULL])) * X[293ULL] * t2575) /
    7.8539816339744827E-5;
  if (X[303ULL] <= 216.59999999999997) {
    t2581 = 216.59999999999997;
  } else {
    t2581 = X[303ULL] >= 623.15 ? 623.15 : X[303ULL];
  }

  t2172 = t2581 * t2581;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 =
    (((1074.1165326382541 + t2581 * -0.2214565261064077) + t2172 *
      0.00037212980109010952) * ((1.0 - t2550) - t2574) + ((1479.6504774710445 +
       t2581 * 1.200211433705052) + t2172 * -0.00038614513167842338) * t2550) +
    ((12825.281119790017 + t2581 * 6.9647057412830984) + t2172 *
     -0.007052486824683288) * t2574;
  U_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 -
    t2575;
  t2581 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 /
    (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 = pmf_sqrt
    (t2579 * t2579 * 9.999999999999999E-14 + fabs(X[303ULL] * t2581 * t2575) *
     1.0E-9);
  if (X[305ULL] <= 0.0) {
    t2172 = 0.0;
  } else {
    t2172 = X[305ULL] >= 1.0 ? 1.0 : X[305ULL];
  }

  if (X[306ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = X[306ULL] >=
      1.0 ? 1.0 : X[306ULL];
  }

  t2093[0ULL] = X[40ULL];
  tlu2_linear_nearest_prelookup(&wh_efOut.mField0[0ULL], &wh_efOut.mField1[0ULL],
    &wh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = wh_efOut;
  tlu2_1d_linear_nearest_value(&xh_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xh_efOut[0];
  tlu2_1d_linear_nearest_value(&yh_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = yh_efOut[0];
  tlu2_1d_linear_nearest_value(&ai_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ai_efOut[0];
  t2587 = (((1.0 - t2172) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1) *
           t2086_idx_0 + t2099_idx_0 * t2172) + t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1;
  t3797 = X[304ULL] * X[304ULL] * t2581;
  t2589 = -pmf_sqrt(fabs(t3797 / (t2575 == 0.0 ? 1.0E-16 : t2575) / (X[303ULL] ==
    0.0 ? 1.0E-16 : X[303ULL]))) * 7.8539816339744827E-5;
  if (t2589 >= 0.0) {
    t2590 = t2589 * 100000.0;
  } else {
    t2590 = -t2589 * 100000.0;
  }

  t3798 = t2587 * 7.8539816339744827E-5;
  zc_int191 = t2590 * 0.01 / (t3798 == 0.0 ? 1.0E-16 : t3798);
  t2642 = X[40ULL] * t2575;
  t2592 = X[41ULL] / (t2642 == 0.0 ? 1.0E-16 : t2642);
  t3813 = t2592 * 1.5707963267948965E-8;
  t2593 = t2589 * t2587 * 35.2 / (t3813 == 0.0 ? 1.0E-16 : t3813);
  t2594 = zc_int191 >= 1.0 ? zc_int191 : 1.0;
  t2645 = pmf_log10(6.9 / (t2594 == 0.0 ? 1.0E-16 : t2594) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2594 == 0.0 ?
    1.0E-16 : t2594) + 0.00017169489553429715) * 3.24;
  t2647 = t2592 * 1.2337005501361697E-10;
  t2590 = t2589 * t2590 * (1.0 / (t2645 == 0.0 ? 1.0E-16 : t2645)) * 0.55 /
    (t2647 == 0.0 ? 1.0E-16 : t2647);
  t2594 = (zc_int191 - 2000.0) / 2000.0;
  t2596 = t2594 * t2594 * 3.0 - t2594 * t2594 * t2594 * 2.0;
  if (zc_int191 <= 2000.0) {
    t2594 = t2593 * 1.0E-5;
  } else if (zc_int191 >= 4000.0) {
    t2594 = t2590 * 1.0E-5;
  } else {
    t2594 = ((1.0 - t2596) * t2593 + t2590 * t2596) * 1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 = -(X[293ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0) /
    7.8539816339744827E-5 * 0.00031622776601683789 + t2594;
  t2590 = X[300ULL] - X[41ULL];
  t2593 = -((X[40ULL] / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) - X[307ULL] / (X
              [308ULL] == 0.0 ? 1.0E-16 : X[308ULL])) * X[263ULL] * t2575) /
    7.8539816339744827E-5;
  if (X[307ULL] <= 216.59999999999997) {
    t2594 = 216.59999999999997;
  } else {
    t2594 = X[307ULL] >= 623.15 ? 623.15 : X[307ULL];
  }

  t2598 = t2594 * t2594;
  t2596 = (((1074.1165326382541 + t2594 * -0.2214565261064077) + t2598 *
            0.00037212980109010952) * ((1.0 - t2550) - t2574) +
           ((1479.6504774710445 + t2594 * 1.200211433705052) + t2598 *
            -0.00038614513167842338) * t2550) + ((12825.281119790017 + t2594 *
    6.9647057412830984) + t2598 * -0.007052486824683288) * t2574;
  t2655 = t2596 - t2575;
  t2594 = t2596 / (t2655 == 0.0 ? 1.0E-16 : t2655);
  t2596 = pmf_sqrt(t2593 * t2593 * 9.999999999999999E-14 + fabs(X[307ULL] *
    t2594 * t2575) * 1.0E-9);
  t2656 = X[308ULL] * X[308ULL] * t2594;
  t2598 = -pmf_sqrt(fabs(t2656 / (t2575 == 0.0 ? 1.0E-16 : t2575) / (X[307ULL] ==
    0.0 ? 1.0E-16 : X[307ULL]))) * 7.8539816339744827E-5;
  if (t2598 >= 0.0) {
    t2599 = t2598 * 100000.0;
  } else {
    t2599 = -t2598 * 100000.0;
  }

  t2600 = t2599 * 0.01 / (t3798 == 0.0 ? 1.0E-16 : t3798);
  zc_int196 = t2598 * t2587 * 35.2 / (t3813 == 0.0 ? 1.0E-16 : t3813);
  intrm_sf_mf_713 = t2600 >= 1.0 ? t2600 : 1.0;
  t2663 = pmf_log10(6.9 / (intrm_sf_mf_713 == 0.0 ? 1.0E-16 : intrm_sf_mf_713) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_713 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_713) + 0.00017169489553429715) * 3.24;
  t2599 = t2598 * t2599 * (1.0 / (t2663 == 0.0 ? 1.0E-16 : t2663)) * 0.55 /
    (t2647 == 0.0 ? 1.0E-16 : t2647);
  intrm_sf_mf_713 = (t2600 - 2000.0) / 2000.0;
  piece174 = intrm_sf_mf_713 * intrm_sf_mf_713 * 3.0 - intrm_sf_mf_713 *
    intrm_sf_mf_713 * intrm_sf_mf_713 * 2.0;
  if (t2600 <= 2000.0) {
    intrm_sf_mf_713 = zc_int196 * 1.0E-5;
  } else if (t2600 >= 4000.0) {
    intrm_sf_mf_713 = t2599 * 1.0E-5;
  } else {
    intrm_sf_mf_713 = ((1.0 - piece174) * zc_int196 + t2599 * piece174) * 1.0E-5;
  }

  t2596 = -(X[263ULL] * t2596) / 7.8539816339744827E-5 * 0.00031622776601683789
    + intrm_sf_mf_713;
  t2599 = X[33ULL] - X[41ULL];
  t2093[0ULL] = X[40ULL];
  tlu2_linear_linear_prelookup(&bi_efOut.mField0[0ULL], &bi_efOut.mField1[0ULL],
    &bi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = bi_efOut;
  tlu2_1d_linear_linear_value(&ci_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ci_efOut[0];
  zc_int196 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&di_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = di_efOut[0];
  intrm_sf_mf_713 = t2086_idx_0;
  if (1.0 - X[42ULL] >= 0.01) {
    t2606 = 1.0 - X[42ULL];
  } else if (1.0 - X[42ULL] >= -0.1) {
    t2606 = pmf_exp(((1.0 - X[42ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2606 = 1.6701700790245661E-7;
  }

  piece174 = X[43ULL] / (t2606 == 0.0 ? 1.0E-16 : t2606) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&ei_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ei_efOut[0];
  t2607 = pmf_exp(pmf_log(X[41ULL] * 100000.0) - t2086_idx_0);
  if (t2607 >= 1.0) {
    t2670 = (t2607 - 1.0) * 461.523 + piece174;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = piece174 / (t2670
      == 0.0 ? 1.0E-16 : t2670);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = 1.0;
  }

  t2672 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond * 0.01;
  piece174 = (X[42ULL] -
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond) / (t2672
    == 0.0 ? 1.0E-16 : t2672);
  if (X[42ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond <= 0.0)
  {
    piece174 = 0.0;
  } else if (X[42ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond
             >= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond * 0.01)
  {
    piece174 = X[42ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond;
  } else {
    piece174 = (X[42ULL] -
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond) *
      (piece174 * piece174 * 3.0 - piece174 * piece174 * piece174 * 2.0);
  }

  t2592 = t2592 * piece174 * 7.8539816339744827E-5 / 0.001;
  piece174 = (zc_int196 - intrm_sf_mf_713) * t2592;
  tlu2_1d_linear_nearest_value(&fi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fi_efOut[0];
  tlu2_1d_linear_nearest_value(&gi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gi_efOut[0];
  tlu2_1d_linear_nearest_value(&hi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hi_efOut[0];
  intrm_sf_mf_713 = (((1.0 - t2172) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1)
                     * t2086_idx_0 + t2099_idx_0 * t2172) + t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond = (X[298ULL] - X
    [40ULL]) * (intrm_sf_mf_713 * 0.031415926535897927 / 0.01);
  if (X[302ULL] <= 0.0) {
    zc_int335 = 0.0;
  } else {
    zc_int335 = X[302ULL] >= 1.0 ? 1.0 : X[302ULL];
  }

  if (X[301ULL] <= 0.0) {
    t2613 = 0.0;
  } else {
    t2613 = X[301ULL] >= 1.0 ? 1.0 : X[301ULL];
  }

  t2616 = (((1.0 - zc_int335) - t2613) * 296.802103844292 + zc_int335 * 461.523)
    + t2613 * 4124.48151675695;
  piece313 = X[302ULL] * 461.523 / (t2616 == 0.0 ? 1.0E-16 : t2616);
  if (piece313 <= 0.0) {
    zc_int0 = 0.0;
  } else {
    zc_int0 = piece313 >= 1.0 ? 1.0 : piece313;
  }

  piece313 = X[301ULL] * 4124.48151675695 / (t2616 == 0.0 ? 1.0E-16 : t2616);
  if (piece313 <= 0.0) {
    zc_int257 = 0.0;
  } else {
    zc_int257 = piece313 >= 1.0 ? 1.0 : piece313;
  }

  t2093[0ULL] = X[299ULL];
  tlu2_linear_nearest_prelookup(&ii_efOut.mField0[0ULL], &ii_efOut.mField1[0ULL],
    &ii_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t137 = ii_efOut;
  tlu2_1d_linear_nearest_value(&ji_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ji_efOut[0];
  tlu2_1d_linear_nearest_value(&ki_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ki_efOut[0];
  tlu2_1d_linear_nearest_value(&li_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = li_efOut[0];
  piece313 = (((1.0 - zc_int0) - zc_int257) * t2086_idx_0 + t2099_idx_0 *
              zc_int0) + t2100_idx_0 * zc_int257;
  tlu2_1d_linear_nearest_value(&mi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = mi_efOut[0];
  tlu2_1d_linear_nearest_value(&ni_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ni_efOut[0];
  tlu2_1d_linear_nearest_value(&oi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = oi_efOut[0];
  t2620 = (((1.0 - t2172) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1) *
           t2086_idx_0 + t2099_idx_0 * t2172) + t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1;
  tlu2_1d_linear_nearest_value(&pi_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = pi_efOut[0];
  tlu2_1d_linear_nearest_value(&qi_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = qi_efOut[0];
  tlu2_1d_linear_nearest_value(&ri_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ri_efOut[0];
  t2172 = (((1.0 - zc_int0) - zc_int257) * t2086_idx_0 + t2099_idx_0 * zc_int0)
    + t2100_idx_0 * zc_int257;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = (-X[293ULL]
    - (-X[263ULL])) / 2.0;
  tlu2_1d_linear_nearest_value(&si_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = si_efOut[0];
  tlu2_1d_linear_nearest_value(&ti_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ti_efOut[0];
  tlu2_1d_linear_nearest_value(&ui_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ui_efOut[0];
  t2680 = (t2587 + ((((1.0 - zc_int0) - zc_int257) * t2086_idx_0 + t2099_idx_0 *
                     zc_int0) + t2100_idx_0 * zc_int257)) / 2.0 *
    7.8539816339744827E-5;
  zc_int0 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 >=
             0.0 ?
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 :
             0.0) * 0.01 / (t2680 == 0.0 ? 1.0E-16 : t2680);
  zc_int257 = zc_int0 >= 0.0 ? zc_int0 : -zc_int0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = zc_int257 >
    1000.0 ? zc_int257 : 1000.0;
  t2681 = piece313 + t2620;
  if (t2681 / 2.0 > 0.5) {
    intrm_sf_mf_742 = (piece313 + t2620) / 2.0;
  } else {
    intrm_sf_mf_742 = 0.5;
  }

  t2683 = pmf_log10(6.9 /
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0
                     == 0.0 ? 1.0E-16 :
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0)
                    + 0.00017169489553429715) * pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0)
    + 0.00017169489553429715) * 3.24;
  t2625 = 1.0 / (t2683 == 0.0 ? 1.0E-16 : t2683);
  t2685 = (pmf_pow(intrm_sf_mf_742, 0.66666666666666663) - 1.0) * pmf_sqrt(t2625
    / 8.0) * 12.7 + 1.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 - 1000.0) *
    (t2625 / 8.0) * intrm_sf_mf_742 / (t2685 == 0.0 ? 1.0E-16 : t2685);
  intrm_sf_mf_742 = (zc_int257 - 2000.0) / 2000.0;
  t2625 = intrm_sf_mf_742 * intrm_sf_mf_742 * 3.0 - intrm_sf_mf_742 *
    intrm_sf_mf_742 * intrm_sf_mf_742 * 2.0;
  if (zc_int257 <= 2000.0) {
    intrm_sf_mf_742 = 3.66;
  } else if (zc_int257 >= 4000.0) {
    intrm_sf_mf_742 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0;
  } else {
    intrm_sf_mf_742 = (1.0 - t2625) * 3.66 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 * t2625;
  }

  t2690 = t2681 / 2.0;
  if (zc_int257 > intrm_sf_mf_742 * 0.031415926535897927 / 7.8539816339744827E-5
      / (t2690 == 0.0 ? 1.0E-16 : t2690) / 30.0) {
    t2696 = (piece313 + t2620) / 2.0;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 =
      intrm_sf_mf_742 * 0.031415926535897927 / (zc_int257 == 0.0 ? 1.0E-16 :
      zc_int257) / 7.8539816339744827E-5 / (t2696 == 0.0 ? 1.0E-16 : t2696);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = 30.0;
  }

  piece313 = (X[298ULL] - X[299ULL]) * (1.0 - pmf_exp
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0));
  t2172 = zc_int0 * 7.8539816339744827E-5 / 0.01 * (t2681 / 2.0) * ((t2172 +
    intrm_sf_mf_713) / 2.0) * piece313;
  if (X[248ULL] <= 0.0) {
    piece313 = 0.0;
  } else {
    piece313 = X[248ULL] >= 1.0 ? 1.0 : X[248ULL];
  }

  if (X[247ULL] <= 0.0) {
    zc_int0 = 0.0;
  } else {
    zc_int0 = X[247ULL] >= 1.0 ? 1.0 : X[247ULL];
  }

  zc_int257 = (((1.0 - piece313) - zc_int0) * 296.802103844292 + piece313 *
               461.523) + zc_int0 * 4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = X[248ULL] *
    461.523 / (zc_int257 == 0.0 ? 1.0E-16 : zc_int257);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 <= 0.0) {
    intrm_sf_mf_742 = 0.0;
  } else {
    intrm_sf_mf_742 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 >= 1.0 ?
      1.0 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = X[247ULL] *
    4124.48151675695 / (zc_int257 == 0.0 ? 1.0E-16 : zc_int257);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 <= 0.0) {
    t2625 = 0.0;
  } else {
    t2625 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 >=
      1.0 ? 1.0 :
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0;
  }

  t2093[0ULL] = X[246ULL];
  tlu2_linear_nearest_prelookup(&vi_efOut.mField0[0ULL], &vi_efOut.mField1[0ULL],
    &vi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = vi_efOut;
  tlu2_1d_linear_nearest_value(&wi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wi_efOut[0];
  tlu2_1d_linear_nearest_value(&xi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = xi_efOut[0];
  tlu2_1d_linear_nearest_value(&yi_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = yi_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = (((1.0 -
    intrm_sf_mf_742) - t2625) * t2086_idx_0 + t2099_idx_0 * intrm_sf_mf_742) +
    t2100_idx_0 * t2625;
  tlu2_1d_linear_nearest_value(&aj_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = aj_efOut[0];
  tlu2_1d_linear_nearest_value(&bj_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = bj_efOut[0];
  tlu2_1d_linear_nearest_value(&cj_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = cj_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I = (((1.0 -
    intrm_sf_mf_742) - t2625) * t2086_idx_0 + t2099_idx_0 * intrm_sf_mf_742) +
    t2100_idx_0 * t2625;
  tlu2_1d_linear_nearest_value(&dj_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = dj_efOut[0];
  tlu2_1d_linear_nearest_value(&ej_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ej_efOut[0];
  tlu2_1d_linear_nearest_value(&fj_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = fj_efOut[0];
  U_idx_1 = (t2587 + ((((1.0 - intrm_sf_mf_742) - t2625) * t2086_idx_0 +
                       t2099_idx_0 * intrm_sf_mf_742) + t2100_idx_0 * t2625)) /
    2.0 * 7.8539816339744827E-5;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 =
    -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 <= 0.0 ?
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 : 0.0) *
    0.01 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  intrm_sf_mf_742 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 >= 0.0 ?
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 :
    -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1;
  t2625 = intrm_sf_mf_742 > 1000.0 ? intrm_sf_mf_742 : 1000.0;
  t2705 = t2620 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0;
  if (t2705 / 2.0 > 0.5) {
    t2627 = (t2620 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0) /
      2.0;
  } else {
    t2627 = 0.5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke = pmf_log10
    (6.9 / (t2625 == 0.0 ? 1.0E-16 : t2625) + 0.00017169489553429715) *
    pmf_log10(6.9 / (t2625 == 0.0 ? 1.0E-16 : t2625) + 0.00017169489553429715) *
    3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total = 1.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke);
  t2709 = (pmf_pow(t2627, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total / 8.0) *
    12.7 + 1.0;
  t2625 = (t2625 - 1000.0) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total / 8.0) *
    t2627 / (t2709 == 0.0 ? 1.0E-16 : t2709);
  t2627 = (intrm_sf_mf_742 - 2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total = t2627 * t2627
    * 3.0 - t2627 * t2627 * t2627 * 2.0;
  if (intrm_sf_mf_742 <= 2000.0) {
    t2627 = 3.66;
  } else if (intrm_sf_mf_742 >= 4000.0) {
    t2627 = t2625;
  } else {
    t2627 = (1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total) *
      3.66 + t2625 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total;
  }

  piece229 = t2705 / 2.0;
  if (intrm_sf_mf_742 > t2627 * 0.031415926535897927 / 7.8539816339744827E-5 /
      (piece229 == 0.0 ? 1.0E-16 : piece229) / 30.0) {
    t2720 = (t2620 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0) /
      2.0;
    t2625 = t2627 * 0.031415926535897927 / (intrm_sf_mf_742 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_742) / 7.8539816339744827E-5 / (t2720 == 0.0 ? 1.0E-16 : t2720);
  } else {
    t2625 = 30.0;
  }

  t2620 = (X[298ULL] - X[246ULL]) * (1.0 - pmf_exp(-t2625));
  intrm_sf_mf_713 = t2172 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 *
    7.8539816339744827E-5 / 0.01 * (t2705 / 2.0) * ((intrm_sf_mf_713 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I) / 2.0) * t2620;
  t2172 = pmf_sqrt(X[293ULL] * X[293ULL] + 2.0360111955237585E-13);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1 = pmf_sqrt(X
    [293ULL] * X[293ULL] + 2.3237892571262758E-14);
  t2620 = pmf_sqrt(X[293ULL] * X[293ULL] + 1.6409606283812424E-14);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0 = pmf_sqrt(X
    [263ULL] * X[263ULL] + 2.0360111955237585E-13);
  intrm_sf_mf_742 = pmf_sqrt(X[263ULL] * X[263ULL] + 2.3237892571262758E-14);
  t2625 = pmf_sqrt(X[263ULL] * X[263ULL] + 1.6409606283812424E-14);
  tlu2_1d_linear_linear_value(&gj_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gj_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I = t2086_idx_0;
  tlu2_1d_linear_linear_value(&hj_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = hj_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total = -X[294ULL] -
    X[264ULL];
  t2629 = (-X[293ULL] - X[263ULL]) - t2592 * 100000.0;
  t2630 = (-X[295ULL] - X[265ULL]) - t2592 * 100000.0;
  t2634 = (((1.0 - t2550) - t2574) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I + zc_int196 *
           t2550) + t2086_idx_0 * t2574;
  t2637 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I - X[40ULL] *
    0.296802103844292;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I = t2086_idx_0 - X
    [40ULL] * 4.12448151675695;
  t2627 = zc_int196 - X[40ULL] * 0.461523;
  zc_int196 = (X[300ULL] * -0.7999998 + U_idx_4 * 7.9999980000000006) +
    9.9999999947364415E-9;
  if (zc_int196 * 7.8539816339744827E-5 <= 7.8539816339744857E-13) {
    t2639 = 7.8539816339744857E-13;
  } else if (zc_int196 * 7.8539816339744827E-5 >= 3.1415926535897929E-6) {
    t2639 = 3.1415926535897929E-6;
  } else {
    t2639 = zc_int196 * 7.8539816339744827E-5;
  }

  zc_int196 = t2639 / 7.8539816339744827E-5;
  if (X[319ULL] <= 0.0) {
    t2643 = 0.0;
  } else {
    t2643 = X[319ULL] >= 1.0 ? 1.0 : X[319ULL];
  }

  if (X[320ULL] <= 0.0) {
    t2645 = 0.0;
  } else {
    t2645 = X[320ULL] >= 1.0 ? 1.0 : X[320ULL];
  }

  t2646 = (((1.0 - t2643) - t2645) * 296.802103844292 + t2643 * 461.523) + t2645
    * 4124.48151675695;
  t2725 = X[317ULL] * t2646;
  t2648 = X[318ULL] / (t2725 == 0.0 ? 1.0E-16 : t2725);
  t2649 = X[318ULL] / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) * (X[321ULL] / (X
    [317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t2654 = X[318ULL] / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]) * (X[322ULL] /
    (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  if (-X[293ULL] > 0.0) {
    t2655 = (zc_int196 + 1.0) * (1.0 - zc_int196 * t2649) * (-X[293ULL] / 0.64 /
      (t2639 == 0.0 ? 1.0E-16 : t2639) * (-X[293ULL] / 0.64 / (t2639 == 0.0 ?
      1.0E-16 : t2639)) / 2.0 / (t2648 == 0.0 ? 1.0E-16 : t2648)) *
      9.9999999999999991E-11;
  } else if (-X[293ULL] < 0.0) {
    t2655 = (zc_int196 + 1.0) * (1.0 - zc_int196 * t2654) * (-X[293ULL] / 0.64 /
      (t2639 == 0.0 ? 1.0E-16 : t2639) * (-X[293ULL] / 0.64 / (t2639 == 0.0 ?
      1.0E-16 : t2639)) / 2.0 / (t2648 == 0.0 ? 1.0E-16 : t2648)) *
      9.9999999999999991E-11;
  } else {
    t2655 = 0.0;
  }

  zc_int319 = (X[37ULL] + X[300ULL]) / 2.0 * 0.0010000000000000009;
  t2657 = (1.0 - zc_int196) * (1.0 - zc_int196);
  t2661 = zc_int319 * t2657;
  t2663 = (zc_int196 + 1.0) * (1.0 - zc_int196 * t2649) - (1.0 - zc_int196 *
    t2654) * zc_int196 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 = (X[37ULL] -
    X[300ULL]) * (t2663 >= t2657 ? t2663 : t2657);
  t2663 = (X[37ULL] - X[300ULL]) / (zc_int319 == 0.0 ? 1.0E-16 : zc_int319);
  t2666 = t2663 * t2663 * 3.0 - t2663 * t2663 * t2663 * 2.0;
  if (X[37ULL] - X[300ULL] <= 0.0) {
    t2663 = t2661;
  } else if (X[37ULL] - X[300ULL] >= zc_int319) {
    t2663 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18;
  } else {
    t2663 = (1.0 - t2666) * t2661 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 * t2666;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 = (zc_int196 +
    1.0) * (1.0 - zc_int196 * t2654) - (1.0 - zc_int196 * t2649) * zc_int196 *
    2.0;
  zc_int196 = (X[300ULL] - X[37ULL]) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 >= t2657 ?
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 : t2657);
  t2649 = (X[300ULL] - X[37ULL]) / (zc_int319 == 0.0 ? 1.0E-16 : zc_int319);
  t2654 = t2649 * t2649 * 3.0 - t2649 * t2649 * t2649 * 2.0;
  if (X[300ULL] - X[37ULL] <= 0.0) {
    t2649 = t2661;
  } else if (X[300ULL] - X[37ULL] >= zc_int319) {
    t2649 = zc_int196;
  } else {
    t2649 = (1.0 - t2654) * t2661 + zc_int196 * t2654;
  }

  if (X[37ULL] > X[300ULL]) {
    zc_int196 = t2663;
  } else {
    zc_int196 = X[37ULL] < X[300ULL] ? t2649 : t2661;
  }

  if (X[317ULL] <= 216.59999999999997) {
    t2649 = 216.59999999999997;
  } else {
    t2649 = X[317ULL] >= 623.15 ? 623.15 : X[317ULL];
  }

  t2667 = t2649 * t2649;
  t2654 = (((1074.1165326382541 + t2649 * -0.2214565261064077) + t2667 *
            0.00037212980109010952) * ((1.0 - t2643) - t2645) +
           ((1479.6504774710445 + t2649 * 1.200211433705052) + t2667 *
            -0.00038614513167842338) * t2643) + ((12825.281119790017 + t2649 *
    6.9647057412830984) + t2667 * -0.007052486824683288) * t2645;
  t2749 = t2654 - t2646;
  t2750 = X[318ULL] * X[318ULL] * (t2654 / (t2749 == 0.0 ? 1.0E-16 : t2749));
  t2649 = pmf_sqrt(fabs(t2750 / (t2646 == 0.0 ? 1.0E-16 : t2646) / (X[317ULL] ==
    0.0 ? 1.0E-16 : X[317ULL]))) * t2639 * 0.64;
  t2753 = t2648 * 2.0;
  t2648 = (X[37ULL] - X[300ULL]) * pmf_sqrt(fabs(t2753 / (zc_int196 == 0.0 ?
    1.0E-16 : zc_int196))) * t2639 * 0.64;
  t2654 = pmf_sqrt(X[330ULL] * X[330ULL] + 2.7104677895120892E-12);
  t2657 = pmf_sqrt(X[330ULL] * X[330ULL] + 5.2285258285341208E-12);
  t2661 = pmf_sqrt(X[330ULL] * X[330ULL] + 3.6921614138577959E-12);
  if (X[335ULL] <= 0.0) {
    t2663 = 0.0;
  } else {
    t2663 = X[335ULL] >= 1.0 ? 1.0 : X[335ULL];
  }

  if (X[336ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 = X[336ULL] >=
      1.0 ? 1.0 : X[336ULL];
  }

  t2666 = (((1.0 - t2663) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18) *
           296.802103844292 + t2663 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 *
    259.836612622973;
  if (1.0 - X[335ULL] >= 0.01) {
    t2667 = 1.0 - X[335ULL];
  } else if (1.0 - X[335ULL] >= -0.1) {
    t2667 = pmf_exp(((1.0 - X[335ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2667 = 1.6701700790245661E-7;
  }

  if (X[348ULL] <= 0.0) {
    t2668 = 0.0;
  } else {
    t2668 = X[348ULL] >= 1.0 ? 1.0 : X[348ULL];
  }

  if (X[347ULL] <= 0.0) {
    t2669 = 0.0;
  } else {
    t2669 = X[347ULL] >= 1.0 ? 1.0 : X[347ULL];
  }

  t2670 = (((1.0 - t2668) - t2669) * 296.802103844292 + t2668 * 461.523) + t2669
    * 259.836612622973;
  t2093[0ULL] = X[342ULL];
  tlu2_linear_linear_prelookup(&ij_efOut.mField0[0ULL], &ij_efOut.mField1[0ULL],
    &ij_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t128 = ij_efOut;
  tlu2_1d_linear_linear_value(&jj_efOut[0ULL], &t128.mField0[0ULL],
    &t128.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jj_efOut[0];
  tlu2_1d_linear_linear_value(&kj_efOut[0ULL], &t128.mField0[0ULL],
    &t128.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = kj_efOut[0];
  tlu2_1d_linear_linear_value(&lj_efOut[0ULL], &t128.mField0[0ULL],
    &t128.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = lj_efOut[0];
  t2671 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  t2093[0ULL] = X[345ULL];
  tlu2_linear_linear_prelookup(&mj_efOut.mField0[0ULL], &mj_efOut.mField1[0ULL],
    &mj_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t120 = mj_efOut;
  tlu2_1d_linear_linear_value(&nj_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = nj_efOut[0];
  tlu2_1d_linear_linear_value(&oj_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = oj_efOut[0];
  tlu2_1d_linear_linear_value(&pj_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = pj_efOut[0];
  t2672 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  t2093[0ULL] = X[343ULL];
  tlu2_linear_linear_prelookup(&qj_efOut.mField0[0ULL], &qj_efOut.mField1[0ULL],
    &qj_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t137 = qj_efOut;
  tlu2_1d_linear_linear_value(&rj_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = rj_efOut[0];
  tlu2_1d_linear_linear_value(&sj_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = sj_efOut[0];
  tlu2_1d_linear_linear_value(&tj_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = tj_efOut[0];
  t2673 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  t2093[0ULL] = X[344ULL];
  tlu2_linear_linear_prelookup(&uj_efOut.mField0[0ULL], &uj_efOut.mField1[0ULL],
    &uj_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t117 = uj_efOut;
  tlu2_1d_linear_linear_value(&vj_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vj_efOut[0];
  tlu2_1d_linear_linear_value(&wj_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = wj_efOut[0];
  tlu2_1d_linear_linear_value(&xj_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = xj_efOut[0];
  zc_int306 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  t2093[0ULL] = X[45ULL];
  tlu2_linear_linear_prelookup(&yj_efOut.mField0[0ULL], &yj_efOut.mField1[0ULL],
    &yj_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = yj_efOut;
  tlu2_1d_linear_linear_value(&ak_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ak_efOut[0];
  t2675 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&bk_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = bk_efOut[0];
  t2676 = t2086_idx_0;
  if (X[47ULL] <= 0.0) {
    t2677 = 0.0;
  } else {
    t2677 = X[47ULL] >= 1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    t2678 = 0.0;
  } else {
    t2678 = X[46ULL] >= 1.0 ? 1.0 : X[46ULL];
  }

  t2679 = (((1.0 - t2677) - t2678) * 296.802103844292 + t2677 * 461.523) + t2678
    * 259.836612622973;
  t2756 = X[45ULL] * t2679;
  if (1.0 - X[47ULL] >= 0.01) {
    t2681 = 1.0 - X[47ULL];
  } else if (1.0 - X[47ULL] >= -0.1) {
    t2681 = pmf_exp(((1.0 - X[47ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2681 = 1.6701700790245661E-7;
  }

  piece194 = X[46ULL] / (t2681 == 0.0 ? 1.0E-16 : t2681) * -36.965491221318985 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&ck_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ck_efOut[0];
  t2683 = pmf_exp(pmf_log(X[44ULL] * 100000.0) - t2086_idx_0);
  if (t2683 >= 1.0) {
    t2759 = (t2683 - 1.0) * 461.523 + piece194;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1 = piece194 /
      (t2759 == 0.0 ? 1.0E-16 : t2759);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1 = 1.0;
  }

  t3841 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1 * 0.01;
  piece194 = (X[47ULL] -
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1) /
    (t3841 == 0.0 ? 1.0E-16 : t3841);
  if (X[47ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1
      <= 0.0) {
    piece194 = 0.0;
  } else if (X[47ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1 *
             0.01) {
    piece194 = X[47ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1;
  } else {
    piece194 = (X[47ULL] -
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1)
      * (piece194 * piece194 * 3.0 - piece194 * piece194 * piece194 * 2.0);
  }

  t2680 = X[44ULL] / (t2756 == 0.0 ? 1.0E-16 : t2756) * piece194 * 0.0003 /
    0.001;
  piece194 = (t2675 - t2676) * t2680;
  t2676 = pmf_sqrt(X[361ULL] * X[361ULL] + 2.7104677895120892E-12);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1 = pmf_sqrt(X
    [361ULL] * X[361ULL] + 5.2285258285341208E-12);
  t2685 = pmf_sqrt(X[361ULL] * X[361ULL] + 3.6921614138577959E-12);
  tlu2_1d_linear_linear_value(&dk_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = dk_efOut[0];
  t2686 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&ek_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ek_efOut[0];
  t2689 = -X[331ULL] + X[362ULL];
  t2690 = (-X[330ULL] + X[361ULL]) - t2680 * 100000.0;
  t2691 = (-X[332ULL] + X[363ULL]) - t2680 * 100000.0;
  t2692 = (((1.0 - t2677) - t2678) * t2686 + t2675 * t2677) + t2086_idx_0 *
    t2678;
  t2694 = t2686 - X[45ULL] * 0.296802103844292;
  t2686 = t2086_idx_0 - X[45ULL] * 0.25983661262297303;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_u_w = t2675 - X
    [45ULL] * 0.461523;
  if (X[50ULL] <= 0.0) {
    t2696 = 0.0;
  } else {
    t2696 = X[50ULL] >= 1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    t2697 = 0.0;
  } else {
    t2697 = X[49ULL] >= 1.0 ? 1.0 : X[49ULL];
  }

  t2699 = (((1.0 - t2696) - t2697) * 296.802103844292 + t2696 * 461.523) + t2697
    * 4124.48151675695;
  zc_int273 = -((X[48ULL] / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) - X[382ULL] /
                 (X[383ULL] == 0.0 ? 1.0E-16 : X[383ULL])) * X[272ULL] * t2699) /
    0.0019634954084936209;
  if (X[382ULL] <= 216.59999999999997) {
    t2701 = 216.59999999999997;
  } else {
    t2701 = X[382ULL] >= 623.15 ? 623.15 : X[382ULL];
  }

  t2703 = t2701 * t2701;
  t2702 = (((1074.1165326382541 + t2701 * -0.2214565261064077) + t2703 *
            0.00037212980109010952) * ((1.0 - t2696) - t2697) +
           ((1479.6504774710445 + t2701 * 1.200211433705052) + t2703 *
            -0.00038614513167842338) * t2696) + ((12825.281119790017 + t2701 *
    6.9647057412830984) + t2703 * -0.007052486824683288) * t2697;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke = t2702 -
    t2699;
  t2701 = t2702 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke);
  t2702 = pmf_sqrt(zc_int273 * zc_int273 * 9.999999999999999E-14 + fabs(X[382ULL]
    * t2701 * t2699) * 1.0E-9);
  if (X[379ULL] <= 0.0) {
    t2703 = 0.0;
  } else {
    t2703 = X[379ULL] >= 1.0 ? 1.0 : X[379ULL];
  }

  if (X[378ULL] <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = X[378ULL] >= 1.0 ? 1.0 : X[378ULL];
  }

  t2093[0ULL] = X[48ULL];
  tlu2_linear_nearest_prelookup(&fk_efOut.mField0[0ULL], &fk_efOut.mField1[0ULL],
    &fk_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = fk_efOut;
  tlu2_1d_linear_nearest_value(&gk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gk_efOut[0];
  tlu2_1d_linear_nearest_value(&hk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = hk_efOut[0];
  tlu2_1d_linear_nearest_value(&ik_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ik_efOut[0];
  t2705 = (((1.0 - t2703) - U_idx_1) * t2086_idx_0 + t2099_idx_0 * t2703) +
    t2100_idx_0 * U_idx_1;
  t2771 = X[383ULL] * X[383ULL] * t2701;
  zc_int294 = -pmf_sqrt(fabs(t2771 / (t2699 == 0.0 ? 1.0E-16 : t2699) / (X
    [382ULL] == 0.0 ? 1.0E-16 : X[382ULL]))) * 0.0019634954084936209;
  if (zc_int294 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke = zc_int294 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke = -zc_int294
      * 100000.0;
  }

  t2775 = t2705 * 0.0019634954084936209;
  t2708 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke * 0.05
    / (t2775 == 0.0 ? 1.0E-16 : t2775);
  t2777 = X[48ULL] * t2699;
  t2709 = X[51ULL] / (t2777 == 0.0 ? 1.0E-16 : t2777);
  t2779 = t2709 * 9.8174770424681068E-6;
  t2710 = zc_int294 * t2705 * 11.2 / (t2779 == 0.0 ? 1.0E-16 : t2779);
  zc_int36 = t2708 >= 1.0 ? t2708 : 1.0;
  t3903 = pmf_log10(6.9 / (zc_int36 == 0.0 ? 1.0E-16 : zc_int36) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (zc_int36 == 0.0 ?
    1.0E-16 : zc_int36) + 2.8767404433520813E-5) * 3.24;
  t2782 = t2709 * 3.855314219175531E-7;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke = zc_int294 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke * (1.0 /
    (t3903 == 0.0 ? 1.0E-16 : t3903)) * 0.175 / (t2782 == 0.0 ? 1.0E-16 : t2782);
  zc_int36 = (t2708 - 2000.0) / 2000.0;
  t2713 = zc_int36 * zc_int36 * 3.0 - zc_int36 * zc_int36 * zc_int36 * 2.0;
  if (t2708 <= 2000.0) {
    zc_int36 = t2710 * 1.0E-5;
  } else if (t2708 >= 4000.0) {
    zc_int36 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke *
      1.0E-5;
  } else {
    zc_int36 = ((1.0 - t2713) * t2710 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke *
                t2713) * 1.0E-5;
  }

  t2702 = -(X[272ULL] * t2702) / 0.0019634954084936209 * 0.00031622776601683789
    + zc_int36;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke = X[33ULL] -
    X[51ULL];
  t2710 = (X[48ULL] / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) - X[385ULL] / (X
            [386ULL] == 0.0 ? 1.0E-16 : X[386ULL])) * X[384ULL] * t2699 /
    0.0019634954084936209;
  if (X[385ULL] <= 216.59999999999997) {
    zc_int36 = 216.59999999999997;
  } else {
    zc_int36 = X[385ULL] >= 623.15 ? 623.15 : X[385ULL];
  }

  piece229 = zc_int36 * zc_int36;
  t2713 = (((1074.1165326382541 + zc_int36 * -0.2214565261064077) + piece229 *
            0.00037212980109010952) * ((1.0 - t2696) - t2697) +
           ((1479.6504774710445 + zc_int36 * 1.200211433705052) + piece229 *
            -0.00038614513167842338) * t2696) + ((12825.281119790017 + zc_int36 *
    6.9647057412830984) + piece229 * -0.007052486824683288) * t2697;
  U_idx_0 = t2713 - t2699;
  zc_int36 = t2713 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  t2713 = pmf_sqrt(t2710 * t2710 * 9.999999999999999E-14 + fabs(X[385ULL] *
    zc_int36 * t2699) * 1.0E-9);
  t2791 = X[386ULL] * X[386ULL] * zc_int36;
  piece229 = -pmf_sqrt(fabs(t2791 / (t2699 == 0.0 ? 1.0E-16 : t2699) / (X[385ULL]
    == 0.0 ? 1.0E-16 : X[385ULL]))) * 0.0019634954084936209;
  if (piece229 >= 0.0) {
    t2715 = piece229 * 100000.0;
  } else {
    t2715 = -piece229 * 100000.0;
  }

  t2716 = t2715 * 0.05 / (t2775 == 0.0 ? 1.0E-16 : t2775);
  t2717 = piece229 * t2705 * 11.2 / (t2779 == 0.0 ? 1.0E-16 : t2779);
  t2718 = t2716 >= 1.0 ? t2716 : 1.0;
  t2798 = pmf_log10(6.9 / (t2718 == 0.0 ? 1.0E-16 : t2718) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t2718 == 0.0 ?
    1.0E-16 : t2718) + 2.8767404433520813E-5) * 3.24;
  t2715 = piece229 * t2715 * (1.0 / (t2798 == 0.0 ? 1.0E-16 : t2798)) * 0.175 /
    (t2782 == 0.0 ? 1.0E-16 : t2782);
  t2718 = (t2716 - 2000.0) / 2000.0;
  t2719 = t2718 * t2718 * 3.0 - t2718 * t2718 * t2718 * 2.0;
  if (t2716 <= 2000.0) {
    t2718 = t2717 * 1.0E-5;
  } else if (t2716 >= 4000.0) {
    t2718 = t2715 * 1.0E-5;
  } else {
    t2718 = ((1.0 - t2719) * t2717 + t2715 * t2719) * 1.0E-5;
  }

  t2713 = X[384ULL] * t2713 / 0.0019634954084936209 * 0.00031622776601683789 +
    t2718;
  t2715 = X[372ULL] - X[51ULL];
  t2093[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&jk_efOut.mField0[0ULL], &jk_efOut.mField1[0ULL],
    &jk_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = jk_efOut;
  tlu2_1d_linear_linear_value(&kk_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = kk_efOut[0];
  t2717 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&lk_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = lk_efOut[0];
  t2718 = t2086_idx_0;
  if (1.0 - X[50ULL] >= 0.01) {
    t2720 = 1.0 - X[50ULL];
  } else if (1.0 - X[50ULL] >= -0.1) {
    t2720 = pmf_exp(((1.0 - X[50ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2720 = 1.6701700790245661E-7;
  }

  t2719 = X[49ULL] / (t2720 == 0.0 ? 1.0E-16 : t2720) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&mk_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = mk_efOut[0];
  t2721 = pmf_exp(pmf_log(X[51ULL] * 100000.0) - t2086_idx_0);
  if (t2721 >= 1.0) {
    intrm_sf_mf_1140 = (t2721 - 1.0) * 461.523 + t2719;
    t2723 = t2719 / (intrm_sf_mf_1140 == 0.0 ? 1.0E-16 : intrm_sf_mf_1140);
  } else {
    t2723 = 1.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 = t2723 * 0.01;
  t2719 = (X[50ULL] - t2723) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0);
  if (X[50ULL] - t2723 <= 0.0) {
    t2719 = 0.0;
  } else if (X[50ULL] - t2723 >= t2723 * 0.01) {
    t2719 = X[50ULL] - t2723;
  } else {
    t2719 = (X[50ULL] - t2723) * (t2719 * t2719 * 3.0 - t2719 * t2719 * t2719 *
      2.0);
  }

  t2709 = t2709 * t2719 * 0.00049087385212340522 / 0.001;
  t2719 = (t2717 - t2718) * t2709;
  tlu2_1d_linear_nearest_value(&nk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = nk_efOut[0];
  tlu2_1d_linear_nearest_value(&ok_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ok_efOut[0];
  tlu2_1d_linear_nearest_value(&pk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = pk_efOut[0];
  t2718 = (((1.0 - t2703) - U_idx_1) * t2086_idx_0 + t2099_idx_0 * t2703) +
    t2100_idx_0 * U_idx_1;
  t2723 = (X[381ULL] - X[48ULL]) * (t2718 * 0.039269908169872414 / 0.05);
  t2728 = (-X[272ULL] - X[384ULL]) / 2.0;
  if (X[374ULL] <= 0.0) {
    t2734 = 0.0;
  } else {
    t2734 = X[374ULL] >= 1.0 ? 1.0 : X[374ULL];
  }

  if (X[373ULL] <= 0.0) {
    t2735 = 0.0;
  } else {
    t2735 = X[373ULL] >= 1.0 ? 1.0 : X[373ULL];
  }

  t2736 = (((1.0 - t2734) - t2735) * 296.802103844292 + t2734 * 461.523) + t2735
    * 4124.48151675695;
  intrm_sf_mf_1177 = X[373ULL] * 4124.48151675695 / (t2736 == 0.0 ? 1.0E-16 :
    t2736);
  if (intrm_sf_mf_1177 <= 0.0) {
    t4098 = 0.0;
  } else {
    t4098 = intrm_sf_mf_1177 >= 1.0 ? 1.0 : intrm_sf_mf_1177;
  }

  intrm_sf_mf_1177 = X[374ULL] * 461.523 / (t2736 == 0.0 ? 1.0E-16 : t2736);
  if (intrm_sf_mf_1177 <= 0.0) {
    t3858 = 0.0;
  } else {
    t3858 = intrm_sf_mf_1177 >= 1.0 ? 1.0 : intrm_sf_mf_1177;
  }

  t2093[0ULL] = X[371ULL];
  tlu2_linear_nearest_prelookup(&qk_efOut.mField0[0ULL], &qk_efOut.mField1[0ULL],
    &qk_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = qk_efOut;
  tlu2_1d_linear_nearest_value(&rk_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = rk_efOut[0];
  tlu2_1d_linear_nearest_value(&sk_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = sk_efOut[0];
  tlu2_1d_linear_nearest_value(&tk_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = tk_efOut[0];
  intrm_sf_mf_1177 = (((1.0 - t3858) - t4098) * t2086_idx_0 + t2099_idx_0 *
                      t3858) + t2100_idx_0 * t4098;
  t2815 = (intrm_sf_mf_1177 + t2705) / 2.0 * 0.0019634954084936209;
  t2732 = -(t2728 <= 0.0 ? t2728 : 0.0) * 0.05 / (t2815 == 0.0 ? 1.0E-16 : t2815);
  t3576 = t2732 >= 0.0 ? t2732 : -t2732;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = t3576 >
    1000.0 ? t3576 : 1000.0;
  tlu2_1d_linear_nearest_value(&uk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = uk_efOut[0];
  tlu2_1d_linear_nearest_value(&vk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = vk_efOut[0];
  tlu2_1d_linear_nearest_value(&wk_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = wk_efOut[0];
  t2742 = (((1.0 - t2703) - U_idx_1) * t2086_idx_0 + t2099_idx_0 * t2703) +
    t2100_idx_0 * U_idx_1;
  tlu2_1d_linear_nearest_value(&xk_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xk_efOut[0];
  tlu2_1d_linear_nearest_value(&yk_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = yk_efOut[0];
  tlu2_1d_linear_nearest_value(&al_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = al_efOut[0];
  t2703 = (((1.0 - t3858) - t4098) * t2086_idx_0 + t2099_idx_0 * t3858) +
    t2100_idx_0 * t4098;
  U_idx_0 = t2742 + t2703;
  if (U_idx_0 / 2.0 > 0.5) {
    U_idx_1 = (t2742 + t2703) / 2.0;
  } else {
    U_idx_1 = 0.5;
  }

  t2818 = pmf_log10(6.9 /
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2
                     == 0.0 ? 1.0E-16 :
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2)
                    + 2.8767404433520813E-5) * pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2)
    + 2.8767404433520813E-5) * 3.24;
  t2743 = 1.0 / (t2818 == 0.0 ? 1.0E-16 : t2818);
  t3939 = (pmf_pow(U_idx_1, 0.66666666666666663) - 1.0) * pmf_sqrt(t2743 / 8.0) *
    12.7 + 1.0;
  U_idx_1 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 -
             1000.0) * (t2743 / 8.0) * U_idx_1 / (t3939 == 0.0 ? 1.0E-16 : t3939);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = (t3576 -
    2000.0) / 2000.0;
  t2743 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 * 2.0;
  if (t3576 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = 3.66;
  } else if (t3576 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = U_idx_1;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = (1.0 -
      t2743) * 3.66 + U_idx_1 * t2743;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total = U_idx_0 /
    2.0;
  if (t3576 > Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 *
      0.039269908169872414 / 0.0019634954084936209 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total)
      / 30.0) {
    t3965 = (t2742 + t2703) / 2.0;
    U_idx_1 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 *
      0.039269908169872414 / (t3576 == 0.0 ? 1.0E-16 : t3576) /
      0.0019634954084936209 / (t3965 == 0.0 ? 1.0E-16 : t3965);
  } else {
    U_idx_1 = 30.0;
  }

  t3576 = (X[381ULL] - X[371ULL]) * (1.0 - pmf_exp(-U_idx_1));
  tlu2_1d_linear_nearest_value(&bl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = bl_efOut[0];
  tlu2_1d_linear_nearest_value(&cl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = cl_efOut[0];
  tlu2_1d_linear_nearest_value(&dl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = dl_efOut[0];
  U_idx_1 = (((1.0 - t3858) - t4098) * t2086_idx_0 + t2099_idx_0 * t3858) +
    t2100_idx_0 * t4098;
  t2732 = t2732 * 0.0019634954084936209 / 0.05 * (U_idx_0 / 2.0) * ((t2718 +
    U_idx_1) / 2.0) * t3576;
  if (X[251ULL] <= 0.0) {
    t4098 = 0.0;
  } else {
    t4098 = X[251ULL] >= 1.0 ? 1.0 : X[251ULL];
  }

  if (X[250ULL] <= 0.0) {
    t3858 = 0.0;
  } else {
    t3858 = X[250ULL] >= 1.0 ? 1.0 : X[250ULL];
  }

  t3576 = (((1.0 - t4098) - t3858) * 296.802103844292 + t4098 * 461.523) + t3858
    * 4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = X[251ULL] *
    461.523 / (t3576 == 0.0 ? 1.0E-16 : t3576);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 <= 0.0) {
    t2743 = 0.0;
  } else {
    t2743 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 >=
      1.0 ? 1.0 :
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = X[250ULL] *
    4124.48151675695 / (t3576 == 0.0 ? 1.0E-16 : t3576);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 <= 0.0) {
    t2744 = 0.0;
  } else {
    t2744 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 >=
      1.0 ? 1.0 :
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2;
  }

  t2093[0ULL] = X[249ULL];
  tlu2_linear_nearest_prelookup(&el_efOut.mField0[0ULL], &el_efOut.mField1[0ULL],
    &el_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = el_efOut;
  tlu2_1d_linear_nearest_value(&fl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fl_efOut[0];
  tlu2_1d_linear_nearest_value(&gl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gl_efOut[0];
  tlu2_1d_linear_nearest_value(&hl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hl_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = (((1.0 -
    t2743) - t2744) * t2086_idx_0 + t2099_idx_0 * t2743) + t2100_idx_0 * t2744;
  tlu2_1d_linear_nearest_value(&il_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = il_efOut[0];
  tlu2_1d_linear_nearest_value(&jl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = jl_efOut[0];
  tlu2_1d_linear_nearest_value(&kl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = kl_efOut[0];
  t2745 = (((1.0 - t2743) - t2744) * t2086_idx_0 + t2099_idx_0 * t2743) +
    t2100_idx_0 * t2744;
  tlu2_1d_linear_nearest_value(&ll_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ll_efOut[0];
  tlu2_1d_linear_nearest_value(&ml_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ml_efOut[0];
  tlu2_1d_linear_nearest_value(&nl_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = nl_efOut[0];
  t2839 = (t2705 + ((((1.0 - t2743) - t2744) * t2086_idx_0 + t2099_idx_0 * t2743)
                    + t2100_idx_0 * t2744)) / 2.0 * 0.0019634954084936209;
  t2728 = (t2728 >= 0.0 ? t2728 : 0.0) * 0.05 / (t2839 == 0.0 ? 1.0E-16 : t2839);
  t2743 = t2728 >= 0.0 ? t2728 : -t2728;
  t2744 = t2743 > 1000.0 ? t2743 : 1000.0;
  intrm_sf_mf_1248 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 + t2742;
  if (intrm_sf_mf_1248 / 2.0 > 0.5) {
    t2746 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 +
             t2742) / 2.0;
  } else {
    t2746 = 0.5;
  }

  t2842 = pmf_log10(6.9 / (t2744 == 0.0 ? 1.0E-16 : t2744) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t2744 == 0.0 ?
    1.0E-16 : t2744) + 2.8767404433520813E-5) * 3.24;
  t2747 = 1.0 / (t2842 == 0.0 ? 1.0E-16 : t2842);
  t2844 = (pmf_pow(t2746, 0.66666666666666663) - 1.0) * pmf_sqrt(t2747 / 8.0) *
    12.7 + 1.0;
  t2744 = (t2744 - 1000.0) * (t2747 / 8.0) * t2746 / (t2844 == 0.0 ? 1.0E-16 :
    t2844);
  t2746 = (t2743 - 2000.0) / 2000.0;
  t2747 = t2746 * t2746 * 3.0 - t2746 * t2746 * t2746 * 2.0;
  if (t2743 <= 2000.0) {
    t2746 = 3.66;
  } else if (t2743 >= 4000.0) {
    t2746 = t2744;
  } else {
    t2746 = (1.0 - t2747) * 3.66 + t2744 * t2747;
  }

  t2849 = intrm_sf_mf_1248 / 2.0;
  if (t2743 > t2746 * 0.039269908169872414 / 0.0019634954084936209 / (t2849 ==
       0.0 ? 1.0E-16 : t2849) / 30.0) {
    t2855 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 +
             t2742) / 2.0;
    t2744 = t2746 * 0.039269908169872414 / (t2743 == 0.0 ? 1.0E-16 : t2743) /
      0.0019634954084936209 / (t2855 == 0.0 ? 1.0E-16 : t2855);
  } else {
    t2744 = 30.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = (X[381ULL] -
    X[249ULL]) * (1.0 - pmf_exp(-t2744));
  t2728 = t2732 + t2728 * 0.0019634954084936209 / 0.05 * (intrm_sf_mf_1248 / 2.0)
    * ((t2745 + t2718) / 2.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2;
  t2718 = pmf_sqrt(X[272ULL] * X[272ULL] + 5.0900279888093953E-12);
  t2732 = pmf_sqrt(X[272ULL] * X[272ULL] + 5.8094731428156895E-13);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2 = pmf_sqrt(X
    [272ULL] * X[272ULL] + 4.1024015709531055E-13);
  t2742 = pmf_sqrt(X[384ULL] * X[384ULL] + 5.0900279888093953E-12);
  t2743 = pmf_sqrt(X[384ULL] * X[384ULL] + 5.8094731428156895E-13);
  t2744 = pmf_sqrt(X[384ULL] * X[384ULL] + 4.1024015709531055E-13);
  tlu2_1d_linear_linear_value(&ol_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ol_efOut[0];
  t2745 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&pl_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = pl_efOut[0];
  t2747 = -X[273ULL] + X[392ULL];
  t2748 = ((-X[272ULL] + X[384ULL]) + U_idx_6) - t2709 * 100000.0;
  t2749 = ((-X[274ULL] + X[393ULL]) + U_idx_6) - t2709 * 100000.0;
  t2751 = (((1.0 - t2696) - t2697) * t2745 + t2717 * t2696) + t2086_idx_0 *
    t2697;
  t2757 = t2745 - X[48ULL] * 0.296802103844292;
  t2745 = t2086_idx_0 - X[48ULL] * 4.12448151675695;
  t2746 = t2717 - X[48ULL] * 0.461523;
  if (X[8ULL] <= 0.0) {
    t2717 = 0.0;
  } else {
    t2717 = X[8ULL] >= 1.0 ? 1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    t2758 = 0.0;
  } else {
    t2758 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  t2759 = (((1.0 - t2717) - t2758) * 296.802103844292 + t2717 * 461.523) + t2758
    * 4124.48151675695;
  t3825 = -((X[6ULL] / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) - X[396ULL] / (X
              [397ULL] == 0.0 ? 1.0E-16 : X[397ULL])) * X[384ULL] * t2759) /
    0.32;
  if (X[396ULL] <= 216.59999999999997) {
    t3841 = 216.59999999999997;
  } else {
    t3841 = X[396ULL] >= 623.15 ? 623.15 : X[396ULL];
  }

  t2187 = t3841 * t3841;
  t3851 = (((1074.1165326382541 + t3841 * -0.2214565261064077) + t2187 *
            0.00037212980109010952) * ((1.0 - t2717) - t2758) +
           ((1479.6504774710445 + t3841 * 1.200211433705052) + t2187 *
            -0.00038614513167842338) * t2717) + ((12825.281119790017 + t3841 *
    6.9647057412830984) + t2187 * -0.007052486824683288) * t2758;
  t2864 = t3851 - t2759;
  t3841 = t3851 / (t2864 == 0.0 ? 1.0E-16 : t2864);
  t3851 = pmf_sqrt(t3825 * t3825 * 9.999999999999999E-14 + fabs(X[396ULL] *
    t3841 * t2759) * 1.0E-9);
  if (X[84ULL] <= 0.0) {
    t2187 = 0.0;
  } else {
    t2187 = X[84ULL] >= 1.0 ? 1.0 : X[84ULL];
  }

  if (X[83ULL] <= 0.0) {
    t3874 = 0.0;
  } else {
    t3874 = X[83ULL] >= 1.0 ? 1.0 : X[83ULL];
  }

  t2093[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&ql_efOut.mField0[0ULL], &ql_efOut.mField1[0ULL],
    &ql_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = ql_efOut;
  tlu2_1d_linear_nearest_value(&rl_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = rl_efOut[0];
  tlu2_1d_linear_nearest_value(&sl_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = sl_efOut[0];
  tlu2_1d_linear_nearest_value(&tl_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = tl_efOut[0];
  t3887 = (((1.0 - t2187) - t3874) * t2086_idx_0 + t2099_idx_0 * t2187) +
    t2100_idx_0 * t3874;
  t2865 = X[397ULL] * X[397ULL] * t3841;
  t3891 = -pmf_sqrt(fabs(t2865 / (t2759 == 0.0 ? 1.0E-16 : t2759) / (X[396ULL] ==
    0.0 ? 1.0E-16 : X[396ULL]))) * 0.32;
  if (t3891 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke = t3891 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke = -t3891 *
      100000.0;
  }

  t2869 = t3887 * 0.32;
  t4044 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke * 0.01
    / (t2869 == 0.0 ? 1.0E-16 : t2869);
  t2871 = X[6ULL] * t2759;
  t2774 = X[52ULL] / (t2871 == 0.0 ? 1.0E-16 : t2871);
  t2873 = t2774 * 6.4000000000000011E-5;
  t4097 = t3891 * t3887 * 2.9973120849090416 / (t2873 == 0.0 ? 1.0E-16 : t2873);
  t3903 = t4044 >= 1.0 ? t4044 : 1.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 = pmf_log10
    (6.9 / (t3903 == 0.0 ? 1.0E-16 : t3903) + 0.00017169489553429715) *
    pmf_log10(6.9 / (t3903 == 0.0 ? 1.0E-16 : t3903) + 0.00017169489553429715) *
    3.24;
  t2876 = t2774 * 0.0020480000000000003;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke = t3891 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke * (1.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1))
    * 0.046833001326703774 / (t2876 == 0.0 ? 1.0E-16 : t2876);
  t3903 = (t4044 - 2000.0) / 2000.0;
  t3918 = t3903 * t3903 * 3.0 - t3903 * t3903 * t3903 * 2.0;
  if (t4044 <= 2000.0) {
    t3903 = t4097 * 1.0E-5;
  } else if (t4044 >= 4000.0) {
    t3903 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke *
      1.0E-5;
  } else {
    t3903 = ((1.0 - t3918) * t4097 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke *
             t3918) * 1.0E-5;
  }

  t3851 = -(X[384ULL] * t3851) / 0.32 * 0.00031622776601683789 + t3903;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke = X[372ULL] -
    X[52ULL];
  t4097 = (X[6ULL] / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) - X[399ULL] / (X
            [400ULL] == 0.0 ? 1.0E-16 : X[400ULL])) * X[398ULL] * t2759 / 0.32;
  if (X[399ULL] <= 216.59999999999997) {
    t3903 = 216.59999999999997;
  } else {
    t3903 = X[399ULL] >= 623.15 ? 623.15 : X[399ULL];
  }

  t3926 = t3903 * t3903;
  t3918 = (((1074.1165326382541 + t3903 * -0.2214565261064077) + t3926 *
            0.00037212980109010952) * ((1.0 - t2717) - t2758) +
           ((1479.6504774710445 + t3903 * 1.200211433705052) + t3926 *
            -0.00038614513167842338) * t2717) + ((12825.281119790017 + t3903 *
    6.9647057412830984) + t3926 * -0.007052486824683288) * t2758;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = t3918 -
    t2759;
  t3903 = t3918 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1);
  t3918 = pmf_sqrt(t4097 * t4097 * 9.999999999999999E-14 + fabs(X[399ULL] *
    t3903 * t2759) * 1.0E-9);
  t2885 = X[400ULL] * X[400ULL] * t3903;
  t3926 = -pmf_sqrt(fabs(t2885 / (t2759 == 0.0 ? 1.0E-16 : t2759) / (X[399ULL] ==
    0.0 ? 1.0E-16 : X[399ULL]))) * 0.32;
  if (t3926 >= 0.0) {
    t2784 = t3926 * 100000.0;
  } else {
    t2784 = -t3926 * 100000.0;
  }

  t4010 = t2784 * 0.01 / (t2869 == 0.0 ? 1.0E-16 : t2869);
  U_idx_0 = t3926 * t3887 * 2.9973120849090416 / (t2873 == 0.0 ? 1.0E-16 : t2873);
  t2792 = t4010 >= 1.0 ? t4010 : 1.0;
  t2892 = pmf_log10(6.9 / (t2792 == 0.0 ? 1.0E-16 : t2792) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2792 == 0.0 ?
    1.0E-16 : t2792) + 0.00017169489553429715) * 3.24;
  t2784 = t3926 * t2784 * (1.0 / (t2892 == 0.0 ? 1.0E-16 : t2892)) *
    0.046833001326703774 / (t2876 == 0.0 ? 1.0E-16 : t2876);
  t2792 = (t4010 - 2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 = t2792 *
    t2792 * 3.0 - t2792 * t2792 * t2792 * 2.0;
  if (t4010 <= 2000.0) {
    t2792 = U_idx_0 * 1.0E-5;
  } else if (t4010 >= 4000.0) {
    t2792 = t2784 * 1.0E-5;
  } else {
    t2792 = ((1.0 -
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0) *
             U_idx_0 + t2784 *
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0) *
      1.0E-5;
  }

  t3918 = X[398ULL] * t3918 / 0.32 * 0.00031622776601683789 + t2792;
  t2784 = X[76ULL] - X[52ULL];
  t2093[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&ul_efOut.mField0[0ULL], &ul_efOut.mField1[0ULL],
    &ul_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = ul_efOut;
  tlu2_1d_linear_linear_value(&vl_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vl_efOut[0];
  t2792 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&wl_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wl_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 = t2086_idx_0;
  if (1.0 - X[8ULL] >= 0.01) {
    t2798 = 1.0 - X[8ULL];
  } else if (1.0 - X[8ULL] >= -0.1) {
    t2798 = pmf_exp(((1.0 - X[8ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2798 = 1.6701700790245661E-7;
  }

  t4885 = X[7ULL] / (t2798 == 0.0 ? 1.0E-16 : t2798) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&xl_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xl_efOut[0];
  t2799 = pmf_exp(pmf_log(X[52ULL] * 100000.0) - t2086_idx_0);
  if (t2799 >= 1.0) {
    t2899 = (t2799 - 1.0) * 461.523 + t4885;
    t2801 = t4885 / (t2899 == 0.0 ? 1.0E-16 : t2899);
  } else {
    t2801 = 1.0;
  }

  intrm_sf_mf_1395 = t2801 * 0.01;
  t4885 = (X[8ULL] - t2801) / (intrm_sf_mf_1395 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1395);
  if (X[8ULL] - t2801 <= 0.0) {
    t4885 = 0.0;
  } else if (X[8ULL] - t2801 >= t2801 * 0.01) {
    t4885 = X[8ULL] - t2801;
  } else {
    t4885 = (X[8ULL] - t2801) * (t4885 * t4885 * 3.0 - t4885 * t4885 * t4885 *
      2.0);
  }

  t2774 = t2774 * t4885 * 0.026773120849090417 / 0.001;
  t4885 = (t2792 -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0) *
    t2774;
  tlu2_1d_linear_nearest_value(&yl_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = yl_efOut[0];
  tlu2_1d_linear_nearest_value(&am_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = am_efOut[0];
  tlu2_1d_linear_nearest_value(&bm_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = bm_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 = (((1.0 -
    t2187) - t3874) * t2086_idx_0 + t2099_idx_0 * t2187) + t2100_idx_0 * t3874;
  t2801 = (X[18ULL] - X[6ULL]) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 *
     10.709248339636167 / 0.01);
  tlu2_1d_linear_nearest_value(&cm_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cm_efOut[0];
  tlu2_1d_linear_nearest_value(&dm_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = dm_efOut[0];
  tlu2_1d_linear_nearest_value(&em_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = em_efOut[0];
  t2802 = (((1.0 - t2187) - t3874) * t2086_idx_0 + t2099_idx_0 * t2187) +
    t2100_idx_0 * t3874;
  t2187 = (-X[384ULL] - X[398ULL]) / 2.0;
  t2907 = (intrm_sf_mf_1177 + t3887) / 2.0 * 0.32;
  intrm_sf_mf_1177 = (t2187 >= 0.0 ? t2187 : 0.0) * 0.01 / (t2907 == 0.0 ?
    1.0E-16 : t2907);
  t3874 = intrm_sf_mf_1177 >= 0.0 ? intrm_sf_mf_1177 : -intrm_sf_mf_1177;
  t2803 = t3874 > 1000.0 ? t3874 : 1000.0;
  t2908 = t2802 + t2703;
  if (t2908 / 2.0 > 0.5) {
    t2804 = (t2802 + t2703) / 2.0;
  } else {
    t2804 = 0.5;
  }

  t2910 = pmf_log10(6.9 / (t2803 == 0.0 ? 1.0E-16 : t2803) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2803 == 0.0 ?
    1.0E-16 : t2803) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_1140 = 1.0 / (t2910 == 0.0 ? 1.0E-16 : t2910);
  t2912 = (pmf_pow(t2804, 0.66666666666666663) - 1.0) * pmf_sqrt
    (intrm_sf_mf_1140 / 8.0) * 12.7 + 1.0;
  t2803 = (t2803 - 1000.0) * (intrm_sf_mf_1140 / 8.0) * t2804 / (t2912 == 0.0 ?
    1.0E-16 : t2912);
  t2804 = (t3874 - 2000.0) / 2000.0;
  intrm_sf_mf_1140 = t2804 * t2804 * 3.0 - t2804 * t2804 * t2804 * 2.0;
  if (t3874 <= 2000.0) {
    t2804 = 3.66;
  } else if (t3874 >= 4000.0) {
    t2804 = t2803;
  } else {
    t2804 = (1.0 - intrm_sf_mf_1140) * 3.66 + t2803 * intrm_sf_mf_1140;
  }

  t2917 = t2908 / 2.0;
  if (t3874 > t2804 * 10.709248339636167 / 0.32 / (t2917 == 0.0 ? 1.0E-16 :
       t2917) / 30.0) {
    t2923 = (t2802 + t2703) / 2.0;
    t2803 = t2804 * 10.709248339636167 / (t3874 == 0.0 ? 1.0E-16 : t3874) / 0.32
      / (t2923 == 0.0 ? 1.0E-16 : t2923);
  } else {
    t2803 = 30.0;
  }

  t2703 = (X[18ULL] - X[371ULL]) * (1.0 - pmf_exp(-t2803));
  U_idx_1 = intrm_sf_mf_1177 * 0.32 / 0.01 * (t2908 / 2.0) *
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 + U_idx_1)
     / 2.0) * t2703;
  if (X[78ULL] <= 0.0) {
    t2703 = 0.0;
  } else {
    t2703 = X[78ULL] >= 1.0 ? 1.0 : X[78ULL];
  }

  if (X[77ULL] <= 0.0) {
    intrm_sf_mf_1177 = 0.0;
  } else {
    intrm_sf_mf_1177 = X[77ULL] >= 1.0 ? 1.0 : X[77ULL];
  }

  t3874 = (((1.0 - t2703) - intrm_sf_mf_1177) * 296.802103844292 + t2703 *
           461.523) + intrm_sf_mf_1177 * 4124.48151675695;
  t2803 = X[78ULL] * 461.523 / (t3874 == 0.0 ? 1.0E-16 : t3874);
  if (t2803 <= 0.0) {
    t2804 = 0.0;
  } else {
    t2804 = t2803 >= 1.0 ? 1.0 : t2803;
  }

  t2803 = X[77ULL] * 4124.48151675695 / (t3874 == 0.0 ? 1.0E-16 : t3874);
  if (t2803 <= 0.0) {
    intrm_sf_mf_1140 = 0.0;
  } else {
    intrm_sf_mf_1140 = t2803 >= 1.0 ? 1.0 : t2803;
  }

  t2093[0ULL] = X[75ULL];
  tlu2_linear_nearest_prelookup(&fm_efOut.mField0[0ULL], &fm_efOut.mField1[0ULL],
    &fm_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = fm_efOut;
  tlu2_1d_linear_nearest_value(&gm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gm_efOut[0];
  tlu2_1d_linear_nearest_value(&hm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = hm_efOut[0];
  tlu2_1d_linear_nearest_value(&im_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = im_efOut[0];
  t2803 = (((1.0 - t2804) - intrm_sf_mf_1140) * t2086_idx_0 + t2099_idx_0 *
           t2804) + t2100_idx_0 * intrm_sf_mf_1140;
  tlu2_1d_linear_nearest_value(&jm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jm_efOut[0];
  tlu2_1d_linear_nearest_value(&km_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = km_efOut[0];
  tlu2_1d_linear_nearest_value(&lm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = lm_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I = (((1.0 - t2804) -
    intrm_sf_mf_1140) * t2086_idx_0 + t2099_idx_0 * t2804) + t2100_idx_0 *
    intrm_sf_mf_1140;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 = t2187 <= 0.0
    ? t2187 : 0.0;
  tlu2_1d_linear_nearest_value(&mm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = mm_efOut[0];
  tlu2_1d_linear_nearest_value(&nm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = nm_efOut[0];
  tlu2_1d_linear_nearest_value(&om_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = om_efOut[0];
  t2187 = (((1.0 - t2804) - intrm_sf_mf_1140) * t2086_idx_0 + t2099_idx_0 *
           t2804) + t2100_idx_0 * intrm_sf_mf_1140;
  t2931 = (t3887 + t2187) / 2.0 * 0.32;
  t2804 = -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 *
    0.01 / (t2931 == 0.0 ? 1.0E-16 : t2931);
  intrm_sf_mf_1140 = t2804 >= 0.0 ? t2804 : -t2804;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 =
    intrm_sf_mf_1140 > 1000.0 ? intrm_sf_mf_1140 : 1000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = t2802 +
    t2803;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke / 2.0 >
      0.5) {
    t2808 = (t2802 + t2803) / 2.0;
  } else {
    t2808 = 0.5;
  }

  intrm_sf_mf_1623 = pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0)
    + 0.00017169489553429715) * pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0)
    + 0.00017169489553429715) * 3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = 1.0 /
    (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623);
  intrm_sf_mf_1579 = (pmf_pow(t2808, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 / 8.0) *
    12.7 + 1.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 - 1000.0) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 / 8.0) *
    t2808 / (intrm_sf_mf_1579 == 0.0 ? 1.0E-16 : intrm_sf_mf_1579);
  t2808 = (intrm_sf_mf_1140 - 2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = t2808 *
    t2808 * 3.0 - t2808 * t2808 * t2808 * 2.0;
  if (intrm_sf_mf_1140 <= 2000.0) {
    t2808 = 3.66;
  } else if (intrm_sf_mf_1140 >= 4000.0) {
    t2808 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0;
  } else {
    t2808 = (1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2) *
      3.66 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke / 2.0;
  if (intrm_sf_mf_1140 > t2808 * 10.709248339636167 / 0.32 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2)
      / 30.0) {
    t2947 = (t2802 + t2803) / 2.0;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 = t2808 *
      10.709248339636167 / (intrm_sf_mf_1140 == 0.0 ? 1.0E-16 : intrm_sf_mf_1140)
      / 0.32 / (t2947 == 0.0 ? 1.0E-16 : t2947);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 = 30.0;
  }

  t2802 = (X[18ULL] - X[75ULL]) * (1.0 - pmf_exp
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0));
  t2802 = U_idx_1 + t2804 * 0.32 / 0.01 *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke / 2.0) *
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I) / 2.0) * t2802;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0 = pmf_sqrt(X
    [384ULL] * X[384ULL] + 4.3455507383574884E-7);
  t2804 = pmf_sqrt(X[384ULL] * X[384ULL] + 4.9597684650720062E-8);
  intrm_sf_mf_1140 = pmf_sqrt(X[384ULL] * X[384ULL] + 3.5023764535063275E-8);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0 = pmf_sqrt(X
    [398ULL] * X[398ULL] + 4.3455507383574884E-7);
  t2808 = pmf_sqrt(X[398ULL] * X[398ULL] + 4.9597684650720062E-8);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2 = pmf_sqrt(X
    [398ULL] * X[398ULL] + 3.5023764535063275E-8);
  tlu2_1d_linear_linear_value(&pm_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = pm_efOut[0];
  t2810 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&qm_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qm_efOut[0];
  t2812 = -X[392ULL] + X[406ULL];
  t2813 = (-X[384ULL] + X[398ULL]) - t2774 * 100000.0;
  t2814 = (-X[393ULL] + X[407ULL]) - t2774 * 100000.0;
  t2815 = (((1.0 - t2717) - t2758) * t2810 + t2792 * t2717) + t2086_idx_0 *
    t2758;
  t2817 = t2810 - X[6ULL] * 0.296802103844292;
  t2810 = t2086_idx_0 - X[6ULL] * 4.12448151675695;
  t2811 = t2792 - X[6ULL] * 0.461523;
  if (X[11ULL] <= 0.0) {
    t2792 = 0.0;
  } else {
    t2792 = X[11ULL] >= 1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    t2818 = 0.0;
  } else {
    t2818 = X[10ULL] >= 1.0 ? 1.0 : X[10ULL];
  }

  t2819 = (((1.0 - t2792) - t2818) * 296.802103844292 + t2792 * 461.523) + t2818
    * 4124.48151675695;
  t3939 = -((X[9ULL] / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) - X[410ULL] / (X
              [411ULL] == 0.0 ? 1.0E-16 : X[411ULL])) * X[398ULL] * t2819) /
    0.32;
  if (X[410ULL] <= 216.59999999999997) {
    t3942 = 216.59999999999997;
  } else {
    t3942 = X[410ULL] >= 623.15 ? 623.15 : X[410ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = t3942 * t3942;
  t3943 = (((1074.1165326382541 + t3942 * -0.2214565261064077) +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
            0.00037212980109010952) * ((1.0 - t2792) - t2818) +
           ((1479.6504774710445 + t3942 * 1.200211433705052) +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
            -0.00038614513167842338) * t2792) + ((12825.281119790017 + t3942 *
    6.9647057412830984) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
    -0.007052486824683288) * t2818;
  t2956 = t3943 - t2819;
  t3942 = t3943 / (t2956 == 0.0 ? 1.0E-16 : t2956);
  t3943 = pmf_sqrt(t3939 * t3939 * 9.999999999999999E-14 + fabs(X[410ULL] *
    t3942 * t2819) * 1.0E-9);
  if (X[89ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = X[89ULL] >= 1.0 ?
      1.0 : X[89ULL];
  }

  if (X[88ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total = X[88ULL] >=
      1.0 ? 1.0 : X[88ULL];
  }

  t2093[0ULL] = X[9ULL];
  tlu2_linear_nearest_prelookup(&rm_efOut.mField0[0ULL], &rm_efOut.mField1[0ULL],
    &rm_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = rm_efOut;
  tlu2_1d_linear_nearest_value(&sm_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = sm_efOut[0];
  tlu2_1d_linear_nearest_value(&tm_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = tm_efOut[0];
  tlu2_1d_linear_nearest_value(&um_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = um_efOut[0];
  t3946 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total) *
           t2086_idx_0 + t2099_idx_0 *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I) +
    t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total;
  t2957 = X[411ULL] * X[411ULL] * t3942;
  t4035 = -pmf_sqrt(fabs(t2957 / (t2819 == 0.0 ? 1.0E-16 : t2819) / (X[410ULL] ==
    0.0 ? 1.0E-16 : X[410ULL]))) * 0.32;
  if (t4035 >= 0.0) {
    t2828 = t4035 * 100000.0;
  } else {
    t2828 = -t4035 * 100000.0;
  }

  t2961 = t3946 * 0.32;
  t3951 = t2828 * 0.01 / (t2961 == 0.0 ? 1.0E-16 : t2961);
  t2963 = X[9ULL] * t2819;
  t2830 = X[53ULL] / (t2963 == 0.0 ? 1.0E-16 : t2963);
  t2965 = t2830 * 6.4000000000000011E-5;
  t3965 = t4035 * t3946 * 2.9973120849090416 / (t2965 == 0.0 ? 1.0E-16 : t2965);
  t3968 = t3951 >= 1.0 ? t3951 : 1.0;
  t2966 = pmf_log10(6.9 / (t3968 == 0.0 ? 1.0E-16 : t3968) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t3968 == 0.0 ?
    1.0E-16 : t3968) + 0.00017169489553429715) * 3.24;
  t2968 = t2830 * 0.0020480000000000003;
  t2828 = t4035 * t2828 * (1.0 / (t2966 == 0.0 ? 1.0E-16 : t2966)) *
    0.046833001326703774 / (t2968 == 0.0 ? 1.0E-16 : t2968);
  t3968 = (t3951 - 2000.0) / 2000.0;
  t3982 = t3968 * t3968 * 3.0 - t3968 * t3968 * t3968 * 2.0;
  if (t3951 <= 2000.0) {
    t3968 = t3965 * 1.0E-5;
  } else if (t3951 >= 4000.0) {
    t3968 = t2828 * 1.0E-5;
  } else {
    t3968 = ((1.0 - t3982) * t3965 + t2828 * t3982) * 1.0E-5;
  }

  t3943 = -(X[398ULL] * t3943) / 0.32 * 0.00031622776601683789 + t3968;
  t2828 = X[76ULL] - X[53ULL];
  t3965 = (X[9ULL] / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) - X[412ULL] / (X
            [413ULL] == 0.0 ? 1.0E-16 : X[413ULL])) * X[145ULL] * t2819 / 0.32;
  if (X[412ULL] <= 216.59999999999997) {
    t3968 = 216.59999999999997;
  } else {
    t3968 = X[412ULL] >= 623.15 ? 623.15 : X[412ULL];
  }

  t4043 = t3968 * t3968;
  t3982 = (((1074.1165326382541 + t3968 * -0.2214565261064077) + t4043 *
            0.00037212980109010952) * ((1.0 - t2792) - t2818) +
           ((1479.6504774710445 + t3968 * 1.200211433705052) + t4043 *
            -0.00038614513167842338) * t2792) + ((12825.281119790017 + t3968 *
    6.9647057412830984) + t4043 * -0.007052486824683288) * t2818;
  t3753 = t3982 - t2819;
  t3968 = t3982 / (t3753 == 0.0 ? 1.0E-16 : t3753);
  t3982 = pmf_sqrt(t3965 * t3965 * 9.999999999999999E-14 + fabs(X[412ULL] *
    t3968 * t2819) * 1.0E-9);
  t2977 = X[413ULL] * X[413ULL] * t3968;
  t4043 = -pmf_sqrt(fabs(t2977 / (t2819 == 0.0 ? 1.0E-16 : t2819) / (X[412ULL] ==
    0.0 ? 1.0E-16 : X[412ULL]))) * 0.32;
  if (t4043 >= 0.0) {
    t2836 = t4043 * 100000.0;
  } else {
    t2836 = -t4043 * 100000.0;
  }

  t4062 = t2836 * 0.01 / (t2961 == 0.0 ? 1.0E-16 : t2961);
  U_idx_0 = t4043 * t3946 * 2.9973120849090416 / (t2965 == 0.0 ? 1.0E-16 : t2965);
  t2839 = t4062 >= 1.0 ? t4062 : 1.0;
  intrm_sf_mf_1061 = pmf_log10(6.9 / (t2839 == 0.0 ? 1.0E-16 : t2839) +
    0.00017169489553429715) * pmf_log10(6.9 / (t2839 == 0.0 ? 1.0E-16 : t2839) +
    0.00017169489553429715) * 3.24;
  t2836 = t4043 * t2836 * (1.0 / (intrm_sf_mf_1061 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1061)) * 0.046833001326703774 / (t2968 == 0.0 ? 1.0E-16 : t2968);
  t2839 = (t4062 - 2000.0) / 2000.0;
  intrm_sf_mf_1248 = t2839 * t2839 * 3.0 - t2839 * t2839 * t2839 * 2.0;
  if (t4062 <= 2000.0) {
    t2839 = U_idx_0 * 1.0E-5;
  } else if (t4062 >= 4000.0) {
    t2839 = t2836 * 1.0E-5;
  } else {
    t2839 = ((1.0 - intrm_sf_mf_1248) * U_idx_0 + t2836 * intrm_sf_mf_1248) *
      1.0E-5;
  }

  t3982 = X[145ULL] * t3982 / 0.32 * 0.00031622776601683789 + t2839;
  t2836 = X[123ULL] - X[53ULL];
  t2093[0ULL] = X[9ULL];
  tlu2_linear_linear_prelookup(&vm_efOut.mField0[0ULL], &vm_efOut.mField1[0ULL],
    &vm_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = vm_efOut;
  tlu2_1d_linear_linear_value(&wm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wm_efOut[0];
  t2839 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&xm_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xm_efOut[0];
  intrm_sf_mf_1248 = t2086_idx_0;
  if (1.0 - X[11ULL] >= 0.01) {
    t2842 = 1.0 - X[11ULL];
  } else if (1.0 - X[11ULL] >= -0.1) {
    t2842 = pmf_exp(((1.0 - X[11ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2842 = 1.6701700790245661E-7;
  }

  intrm_sf_mf_1292 = X[10ULL] / (t2842 == 0.0 ? 1.0E-16 : t2842) *
    3827.6794129126583 + 296.802103844292;
  tlu2_1d_linear_linear_value(&ym_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ym_efOut[0];
  t2843 = pmf_exp(pmf_log(X[53ULL] * 100000.0) - t2086_idx_0);
  if (t2843 >= 1.0) {
    t2991 = (t2843 - 1.0) * 461.523 + intrm_sf_mf_1292;
    t2844 = intrm_sf_mf_1292 / (t2991 == 0.0 ? 1.0E-16 : t2991);
  } else {
    t2844 = 1.0;
  }

  t2993 = t2844 * 0.01;
  intrm_sf_mf_1292 = (X[11ULL] - t2844) / (t2993 == 0.0 ? 1.0E-16 : t2993);
  if (X[11ULL] - t2844 <= 0.0) {
    intrm_sf_mf_1292 = 0.0;
  } else if (X[11ULL] - t2844 >= t2844 * 0.01) {
    intrm_sf_mf_1292 = X[11ULL] - t2844;
  } else {
    intrm_sf_mf_1292 = (X[11ULL] - t2844) * (intrm_sf_mf_1292 * intrm_sf_mf_1292
      * 3.0 - intrm_sf_mf_1292 * intrm_sf_mf_1292 * intrm_sf_mf_1292 * 2.0);
  }

  t2830 = t2830 * intrm_sf_mf_1292 * 0.026773120849090417 / 0.001;
  intrm_sf_mf_1292 = (t2839 - intrm_sf_mf_1248) * t2830;
  tlu2_1d_linear_nearest_value(&an_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = an_efOut[0];
  tlu2_1d_linear_nearest_value(&bn_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = bn_efOut[0];
  tlu2_1d_linear_nearest_value(&cn_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = cn_efOut[0];
  intrm_sf_mf_1248 = (((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I)
                       - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total)
                      * t2086_idx_0 + t2099_idx_0 *
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I)
    + t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total;
  t2844 = (X[18ULL] - X[9ULL]) * (intrm_sf_mf_1248 * 10.709248339636167 / 0.01);
  tlu2_1d_linear_nearest_value(&dn_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = dn_efOut[0];
  tlu2_1d_linear_nearest_value(&en_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = en_efOut[0];
  tlu2_1d_linear_nearest_value(&fn_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = fn_efOut[0];
  t2845 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total) *
           t2086_idx_0 + t2099_idx_0 *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I) +
    t2100_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = (-X[398ULL] - X
    [145ULL]) / 2.0;
  t2999 = (t2187 + t3946) / 2.0 * 0.32;
  t2187 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I >= 0.0 ?
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I : 0.0) *
    0.01 / (t2999 == 0.0 ? 1.0E-16 : t2999);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total = t2187 >= 0.0
    ? t2187 : -t2187;
  t2846 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total >
    1000.0 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total :
    1000.0;
  t3000 = t2803 + t2845;
  if (t3000 / 2.0 > 0.5) {
    U_idx_0 = (t2803 + t2845) / 2.0;
  } else {
    U_idx_0 = 0.5;
  }

  t3002 = pmf_log10(6.9 / (t2846 == 0.0 ? 1.0E-16 : t2846) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2846 == 0.0 ?
    1.0E-16 : t2846) + 0.00017169489553429715) * 3.24;
  t2849 = 1.0 / (t3002 == 0.0 ? 1.0E-16 : t3002);
  t3004 = (pmf_pow(U_idx_0, 0.66666666666666663) - 1.0) * pmf_sqrt(t2849 / 8.0) *
    12.7 + 1.0;
  t2846 = (t2846 - 1000.0) * (t2849 / 8.0) * U_idx_0 / (t3004 == 0.0 ? 1.0E-16 :
    t3004);
  U_idx_0 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total -
             2000.0) / 2000.0;
  t2849 = U_idx_0 * U_idx_0 * 3.0 - U_idx_0 * U_idx_0 * U_idx_0 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total <= 2000.0)
  {
    U_idx_0 = 3.66;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total >=
             4000.0) {
    U_idx_0 = t2846;
  } else {
    U_idx_0 = (1.0 - t2849) * 3.66 + t2846 * t2849;
  }

  t3009 = t3000 / 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total > U_idx_0 *
      10.709248339636167 / 0.32 / (t3009 == 0.0 ? 1.0E-16 : t3009) / 30.0) {
    U_idx_2 = (t2803 + t2845) / 2.0;
    t2846 = U_idx_0 * 10.709248339636167 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total)
      / 0.32 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  } else {
    t2846 = 30.0;
  }

  t2803 = (X[18ULL] - X[75ULL]) * (1.0 - pmf_exp(-t2846));
  t2187 = t2187 * 0.32 / 0.01 * (t3000 / 2.0) *
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I +
      intrm_sf_mf_1248) / 2.0) * t2803;
  t3579 = (t3946 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I) /
    2.0 * 0.32;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I =
    -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I <= 0.0 ?
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I : 0.0) * 0.01 /
    (t3579 == 0.0 ? 1.0E-16 : t3579);
  t2803 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I >= 0.0 ?
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I :
    -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I = t2803 > 1000.0 ?
    t2803 : 1000.0;
  t3067 = t2845 + t2263;
  if (t3067 / 2.0 > 0.5) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = (t2845 + t2263) /
      2.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = 0.5;
  }

  U_idx_0 = pmf_log10(6.9 /
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I ==
                       0.0 ? 1.0E-16 :
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I)
                      + 0.00017169489553429715) * pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I) +
    0.00017169489553429715) * 3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total = 1.0 /
    (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  U_idx_0 = (pmf_pow(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I,
                     0.66666666666666663) - 1.0) * pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total / 8.0) *
    12.7 + 1.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I - 1000.0) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total / 8.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = (t2803 - 2000.0) /
    2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I * 2.0;
  if (t2803 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = 3.66;
  } else if (t2803 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = (1.0 -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total) * 3.66 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total;
  }

  U_idx_0 = t3067 / 2.0;
  if (t2803 > Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
      10.709248339636167 / 0.32 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0) / 30.0) {
    t3051 = (t2845 + t2263) / 2.0;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I *
      10.709248339636167 / (t2803 == 0.0 ? 1.0E-16 : t2803) / 0.32 / (t3051 ==
      0.0 ? 1.0E-16 : t3051);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I = 30.0;
  }

  t2263 = (X[18ULL] - X[122ULL]) * (1.0 - pmf_exp
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I));
  t2263 = t2187 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I * 0.32
    / 0.01 * (t3067 / 2.0) * ((intrm_sf_mf_1248 + t2269) / 2.0) * t2263;
  t2269 = pmf_sqrt(X[145ULL] * X[145ULL] + 4.3455507383574884E-7);
  t2187 = pmf_sqrt(X[145ULL] * X[145ULL] + 4.9597684650720062E-8);
  t2803 = pmf_sqrt(X[145ULL] * X[145ULL] + 3.5023764535063275E-8);
  tlu2_1d_linear_linear_value(&gn_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gn_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I = t2086_idx_0;
  tlu2_1d_linear_linear_value(&hn_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = hn_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total = (-X[406ULL]
    + X[114ULL]) + X[158ULL];
  intrm_sf_mf_1248 = (((-X[398ULL] + X[114ULL]) + X[120ULL]) + X[145ULL]) -
    t2830 * 100000.0;
  t2845 = ((-X[407ULL] + X[120ULL]) + X[160ULL]) - t2830 * 100000.0;
  t2846 = (((1.0 - t2792) - t2818) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I + t2839 *
           t2792) + t2086_idx_0 * t2818;
  t2849 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I - X[9ULL] *
    0.296802103844292;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I = t2086_idx_0 - X
    [9ULL] * 4.12448151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I = t2839 - X[9ULL] *
    0.461523;
  if (X[56ULL] <= 0.0) {
    t2839 = 0.0;
  } else {
    t2839 = X[56ULL] >= 1.0 ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    t2850 = 0.0;
  } else {
    t2850 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  t2851 = (((1.0 - t2839) - t2850) * 296.802103844292 + t2839 * 461.523) + t2850
    * 259.836612622973;
  t4075 = -((X[54ULL] / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) - X[427ULL] / (X
              [428ULL] == 0.0 ? 1.0E-16 : X[428ULL])) * X[361ULL] * t2851) /
    0.0019634954084936209;
  if (X[427ULL] <= 216.59999999999997) {
    t4083 = 216.59999999999997;
  } else {
    t4083 = X[427ULL] >= 623.15 ? 623.15 : X[427ULL];
  }

  t2855 = t4083 * t4083;
  t4085 = (((1074.1165326382541 + t4083 * -0.2214565261064077) + t2855 *
            0.00037212980109010952) * ((1.0 - t2839) - t2850) +
           ((1479.6504774710445 + t4083 * 1.200211433705052) + t2855 *
            -0.00038614513167842338) * t2839) + ((900.63941224837913 + t4083 *
    -0.044484923911364271) + t2855 * 0.00036936011832043369) * t2850;
  t3047 = t4085 - t2851;
  t4083 = t4085 / (t3047 == 0.0 ? 1.0E-16 : t3047);
  t4085 = pmf_sqrt(t4075 * t4075 * 9.999999999999999E-14 + fabs(X[427ULL] *
    t4083 * t2851) * 1.0E-9);
  if (X[424ULL] <= 0.0) {
    t2855 = 0.0;
  } else {
    t2855 = X[424ULL] >= 1.0 ? 1.0 : X[424ULL];
  }

  if (X[423ULL] <= 0.0) {
    t2856 = 0.0;
  } else {
    t2856 = X[423ULL] >= 1.0 ? 1.0 : X[423ULL];
  }

  t2093[0ULL] = X[54ULL];
  tlu2_linear_nearest_prelookup(&in_efOut.mField0[0ULL], &in_efOut.mField1[0ULL],
    &in_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = in_efOut;
  tlu2_1d_linear_nearest_value(&jn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jn_efOut[0];
  tlu2_1d_linear_nearest_value(&kn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = kn_efOut[0];
  tlu2_1d_linear_nearest_value(&ln_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ln_efOut[0];
  t2858 = (((1.0 - t2855) - t2856) * t2086_idx_0 + t2099_idx_0 * t2855) +
    t2100_idx_0 * t2856;
  t3047 = X[428ULL] * X[428ULL] * t4083;
  t2859 = -pmf_sqrt(fabs(t3047 / (t2851 == 0.0 ? 1.0E-16 : t2851) / (X[427ULL] ==
    0.0 ? 1.0E-16 : X[427ULL]))) * 0.0019634954084936209;
  if (t2859 >= 0.0) {
    t2863 = t2859 * 100000.0;
  } else {
    t2863 = -t2859 * 100000.0;
  }

  t3051 = t2858 * 0.0019634954084936209;
  t2864 = t2863 * 0.05 / (t3051 == 0.0 ? 1.0E-16 : t3051);
  t3050 = X[54ULL] * t2851;
  t2866 = X[57ULL] / (t3050 == 0.0 ? 1.0E-16 : t3050);
  t3055 = t2866 * 9.8174770424681068E-6;
  t2868 = t2859 * t2858 * 11.2 / (t3055 == 0.0 ? 1.0E-16 : t3055);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t2864 >= 1.0 ?
    t2864 : 1.0;
  U_idx_0 = pmf_log10(6.9 /
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
                       == 0.0 ? 1.0E-16 :
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI)
                      + 2.8767404433520813E-5) * pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI == 0.0 ? 1.0E-16
     : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
    2.8767404433520813E-5) * 3.24;
  t3058 = t2866 * 3.855314219175531E-7;
  t2863 = t2859 * t2863 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) * 0.175 /
    (t3058 == 0.0 ? 1.0E-16 : t3058);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = (t2864 - 2000.0) /
    2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 2.0;
  if (t2864 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t2868 * 1.0E-5;
  } else if (t2864 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t2863 * 1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = ((1.0 -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1) * t2868 +
      t2863 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1) *
      1.0E-5;
  }

  t4085 = -(X[361ULL] * t4085) / 0.0019634954084936209 * 0.00031622776601683789
    + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t2863 = X[44ULL] - X[57ULL];
  t2868 = -((X[54ULL] / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) - X[429ULL] / (X
              [430ULL] == 0.0 ? 1.0E-16 : X[430ULL])) * X[177ULL] * t2851) /
    0.0019634954084936209;
  if (X[429ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[429ULL] >=
      623.15 ? 623.15 : X[429ULL];
  }

  t2875 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
       -0.2214565261064077) + t2875 * 0.00037212980109010952) * ((1.0 - t2839) -
      t2850) + ((1479.6504774710445 +
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
                 1.200211433705052) + t2875 * -0.00038614513167842338) * t2839)
    + ((900.63941224837913 +
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
        -0.044484923911364271) + t2875 * 0.00036936011832043369) * t2850;
  t3067 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 -
    t2851;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 / (t3067 ==
    0.0 ? 1.0E-16 : t3067);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 = pmf_sqrt
    (t2868 * t2868 * 9.999999999999999E-14 + fabs(X[429ULL] *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t2851) *
     1.0E-9);
  t3067 = X[430ULL] * X[430ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t2875 = -pmf_sqrt(fabs(t3067 / (t2851 == 0.0 ? 1.0E-16 : t2851) / (X[429ULL] ==
    0.0 ? 1.0E-16 : X[429ULL]))) * 0.0019634954084936209;
  if (t2875 >= 0.0) {
    t2877 = t2875 * 100000.0;
  } else {
    t2877 = -t2875 * 100000.0;
  }

  t2878 = t2877 * 0.05 / (t3051 == 0.0 ? 1.0E-16 : t3051);
  t2883 = t2875 * t2858 * 11.2 / (t3055 == 0.0 ? 1.0E-16 : t3055);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = t2878 >= 1.0
    ? t2878 : 1.0;
  t3134 = pmf_log10(6.9 /
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1
                     == 0.0 ? 1.0E-16 :
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1)
                    + 2.8767404433520813E-5) * pmf_log10(6.9 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1)
    + 2.8767404433520813E-5) * 3.24;
  t2877 = t2875 * t2877 * (1.0 / (t3134 == 0.0 ? 1.0E-16 : t3134)) * 0.175 /
    (t3058 == 0.0 ? 1.0E-16 : t3058);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = (t2878 -
    2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 * 2.0;
  if (t2878 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = t2883 *
      1.0E-5;
  } else if (t2878 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = t2877 *
      1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = ((1.0 -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens) * t2883 +
      t2877 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens) *
      1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 = -(X[177ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1) /
    0.0019634954084936209 * 0.00031622776601683789 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1;
  t2877 = X[174ULL] - X[57ULL];
  t2093[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&mn_efOut.mField0[0ULL], &mn_efOut.mField1[0ULL],
    &mn_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = mn_efOut;
  tlu2_1d_linear_linear_value(&nn_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = nn_efOut[0];
  t2883 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&on_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = on_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = t2086_idx_0;
  if (1.0 - X[56ULL] >= 0.01) {
    t2888 = 1.0 - X[56ULL];
  } else if (1.0 - X[56ULL] >= -0.1) {
    t2888 = pmf_exp(((1.0 - X[56ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2888 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = X[55ULL] /
    (t2888 == 0.0 ? 1.0E-16 : t2888) * -36.965491221318985 + 296.802103844292;
  tlu2_1d_linear_linear_value(&pn_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = pn_efOut[0];
  t2890 = pmf_exp(pmf_log(X[57ULL] * 100000.0) - t2086_idx_0);
  if (t2890 >= 1.0) {
    t3134 = (t2890 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens;
    t2892 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens /
      (t3134 == 0.0 ? 1.0E-16 : t3134);
  } else {
    t2892 = 1.0;
  }

  U_idx_0 = t2892 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = (X[56ULL] -
    t2892) / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  if (X[56ULL] - t2892 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = 0.0;
  } else if (X[56ULL] - t2892 >= t2892 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = X[56ULL] -
      t2892;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = (X[56ULL]
      - t2892) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens * 2.0);
  }

  t2866 = t2866 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens *
    0.00049087385212340522 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens = (t2883 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1) * t2866;
  tlu2_1d_linear_nearest_value(&qn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qn_efOut[0];
  tlu2_1d_linear_nearest_value(&rn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = rn_efOut[0];
  tlu2_1d_linear_nearest_value(&sn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = sn_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = (((1.0 -
    t2855) - t2856) * t2086_idx_0 + t2099_idx_0 * t2855) + t2100_idx_0 * t2856;
  t2892 = (X[426ULL] - X[54ULL]) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 *
     0.039269908169872414 / 0.05);
  if (X[351ULL] <= 0.0) {
    intrm_sf_mf_1443 = 0.0;
  } else {
    intrm_sf_mf_1443 = X[351ULL] >= 1.0 ? 1.0 : X[351ULL];
  }

  if (X[350ULL] <= 0.0) {
    t2895 = 0.0;
  } else {
    t2895 = X[350ULL] >= 1.0 ? 1.0 : X[350ULL];
  }

  t3738 = (((1.0 - intrm_sf_mf_1443) - t2895) * 296.802103844292 +
           intrm_sf_mf_1443 * 461.523) + t2895 * 259.836612622973;
  t2897 = X[351ULL] * 461.523 / (t3738 == 0.0 ? 1.0E-16 : t3738);
  if (t2897 <= 0.0) {
    t2898 = 0.0;
  } else {
    t2898 = t2897 >= 1.0 ? 1.0 : t2897;
  }

  t2897 = X[350ULL] * 259.836612622973 / (t3738 == 0.0 ? 1.0E-16 : t3738);
  if (t2897 <= 0.0) {
    t2899 = 0.0;
  } else {
    t2899 = t2897 >= 1.0 ? 1.0 : t2897;
  }

  t2093[0ULL] = X[349ULL];
  tlu2_linear_nearest_prelookup(&tn_efOut.mField0[0ULL], &tn_efOut.mField1[0ULL],
    &tn_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t47 = tn_efOut;
  tlu2_1d_linear_nearest_value(&un_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = un_efOut[0];
  tlu2_1d_linear_nearest_value(&vn_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = vn_efOut[0];
  tlu2_1d_linear_nearest_value(&wn_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = wn_efOut[0];
  t2897 = (((1.0 - t2898) - t2899) * t2086_idx_0 + t2099_idx_0 * t2898) +
    t2100_idx_0 * t2899;
  tlu2_1d_linear_nearest_value(&xn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xn_efOut[0];
  tlu2_1d_linear_nearest_value(&yn_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = yn_efOut[0];
  tlu2_1d_linear_nearest_value(&ao_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ao_efOut[0];
  t2900 = (((1.0 - t2855) - t2856) * t2086_idx_0 + t2099_idx_0 * t2855) +
    t2100_idx_0 * t2856;
  tlu2_1d_linear_nearest_value(&bo_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL], &t170
    [0ULL]);
  t2086_idx_0 = bo_efOut[0];
  tlu2_1d_linear_nearest_value(&co_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL], &t170
    [0ULL]);
  t2099_idx_0 = co_efOut[0];
  tlu2_1d_linear_nearest_value(&do_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = do_efOut[0];
  t2855 = (((1.0 - t2898) - t2899) * t2086_idx_0 + t2099_idx_0 * t2898) +
    t2100_idx_0 * t2899;
  t2856 = (-X[361ULL] - (-X[177ULL])) / 2.0;
  tlu2_1d_linear_nearest_value(&eo_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL], &t170
    [0ULL]);
  t2086_idx_0 = eo_efOut[0];
  tlu2_1d_linear_nearest_value(&fo_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL], &t170
    [0ULL]);
  t2099_idx_0 = fo_efOut[0];
  tlu2_1d_linear_nearest_value(&go_efOut[0ULL], &t47.mField0[0ULL],
    &t47.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = go_efOut[0];
  U_idx_0 = (t2858 + ((((1.0 - t2898) - t2899) * t2086_idx_0 + t2099_idx_0 *
                       t2898) + t2100_idx_0 * t2899)) / 2.0 *
    0.0019634954084936209;
  t2898 = (t2856 >= 0.0 ? t2856 : 0.0) * 0.05 / (U_idx_0 == 0.0 ? 1.0E-16 :
    U_idx_0);
  t2899 = t2898 >= 0.0 ? t2898 : -t2898;
  intrm_sf_mf_1395 = t2899 > 1000.0 ? t2899 : 1000.0;
  t3134 = t2897 + t2900;
  if (t3134 / 2.0 > 0.5) {
    t2902 = (t2897 + t2900) / 2.0;
  } else {
    t2902 = 0.5;
  }

  U_idx_0 = pmf_log10(6.9 / (intrm_sf_mf_1395 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1395) + 2.8767404433520813E-5) * pmf_log10(6.9 /
    (intrm_sf_mf_1395 == 0.0 ? 1.0E-16 : intrm_sf_mf_1395) +
    2.8767404433520813E-5) * 3.24;
  t2903 = 1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  U_idx_0 = (pmf_pow(t2902, 0.66666666666666663) - 1.0) * pmf_sqrt(t2903 / 8.0) *
    12.7 + 1.0;
  intrm_sf_mf_1395 = (intrm_sf_mf_1395 - 1000.0) * (t2903 / 8.0) * t2902 /
    (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  t2902 = (t2899 - 2000.0) / 2000.0;
  t2903 = t2902 * t2902 * 3.0 - t2902 * t2902 * t2902 * 2.0;
  if (t2899 <= 2000.0) {
    t2902 = 3.66;
  } else if (t2899 >= 4000.0) {
    t2902 = intrm_sf_mf_1395;
  } else {
    t2902 = (1.0 - t2903) * 3.66 + intrm_sf_mf_1395 * t2903;
  }

  U_idx_0 = t3134 / 2.0;
  if (t2899 > t2902 * 0.039269908169872414 / 0.0019634954084936209 / (U_idx_0 ==
       0.0 ? 1.0E-16 : U_idx_0) / 30.0) {
    t3144 = (t2897 + t2900) / 2.0;
    intrm_sf_mf_1395 = t2902 * 0.039269908169872414 / (t2899 == 0.0 ? 1.0E-16 :
      t2899) / 0.0019634954084936209 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  } else {
    intrm_sf_mf_1395 = 30.0;
  }

  t2897 = (X[426ULL] - X[349ULL]) * (1.0 - pmf_exp(-intrm_sf_mf_1395));
  t2855 = t2898 * 0.0019634954084936209 / 0.05 * (t3134 / 2.0) * ((t2855 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1) / 2.0) *
    t2897;
  U_idx_0 = (t2858 + t2335) / 2.0 * 0.0019634954084936209;
  t2335 = -(t2856 <= 0.0 ? t2856 : 0.0) * 0.05 / (U_idx_0 == 0.0 ? 1.0E-16 :
    U_idx_0);
  t2856 = t2335 >= 0.0 ? t2335 : -t2335;
  t2897 = t2856 > 1000.0 ? t2856 : 1000.0;
  t3134 = t2900 + t2329;
  if (t3134 / 2.0 > 0.5) {
    t2898 = (t2900 + t2329) / 2.0;
  } else {
    t2898 = 0.5;
  }

  U_idx_0 = pmf_log10(6.9 / (t2897 == 0.0 ? 1.0E-16 : t2897) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t2897 == 0.0 ?
    1.0E-16 : t2897) + 2.8767404433520813E-5) * 3.24;
  t2899 = 1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  U_idx_0 = (pmf_pow(t2898, 0.66666666666666663) - 1.0) * pmf_sqrt(t2899 / 8.0) *
    12.7 + 1.0;
  t2897 = (t2897 - 1000.0) * (t2899 / 8.0) * t2898 / (U_idx_0 == 0.0 ? 1.0E-16 :
    U_idx_0);
  t2898 = (t2856 - 2000.0) / 2000.0;
  t2899 = t2898 * t2898 * 3.0 - t2898 * t2898 * t2898 * 2.0;
  if (t2856 <= 2000.0) {
    t2898 = 3.66;
  } else if (t2856 >= 4000.0) {
    t2898 = t2897;
  } else {
    t2898 = (1.0 - t2899) * 3.66 + t2897 * t2899;
  }

  U_idx_0 = t3134 / 2.0;
  if (t2856 > t2898 * 0.039269908169872414 / 0.0019634954084936209 / (U_idx_0 ==
       0.0 ? 1.0E-16 : U_idx_0) / 30.0) {
    t3144 = (t2900 + t2329) / 2.0;
    t2897 = t2898 * 0.039269908169872414 / (t2856 == 0.0 ? 1.0E-16 : t2856) /
      0.0019634954084936209 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  } else {
    t2897 = 30.0;
  }

  t2329 = (X[426ULL] - X[173ULL]) * (1.0 - pmf_exp(-t2897));
  t2329 = t2855 + t2335 * 0.0019634954084936209 / 0.05 * (t3134 / 2.0) *
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 + t2157) /
     2.0) * t2329;
  t2157 = pmf_sqrt(X[361ULL] * X[361ULL] + 3.0116308772356542E-13);
  t2335 = pmf_sqrt(X[361ULL] * X[361ULL] + 5.8094731428156895E-13);
  t2855 = pmf_sqrt(X[361ULL] * X[361ULL] + 4.1024015709531055E-13);
  t2856 = pmf_sqrt(X[177ULL] * X[177ULL] + 3.0116308772356542E-13);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1 = pmf_sqrt(X
    [177ULL] * X[177ULL] + 5.8094731428156895E-13);
  t2897 = pmf_sqrt(X[177ULL] * X[177ULL] + 4.1024015709531055E-13);
  tlu2_1d_linear_linear_value(&ho_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ho_efOut[0];
  t2898 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&io_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = io_efOut[0];
  t2900 = -X[362ULL] - X[186ULL];
  intrm_sf_mf_1395 = ((-X[361ULL] - X[177ULL]) + U_idx_8) - t2866 * 100000.0;
  t2902 = ((-X[363ULL] - X[187ULL]) + U_idx_8) - t2866 * 100000.0;
  t2903 = (((1.0 - t2839) - t2850) * t2898 + t2883 * t2839) + t2086_idx_0 *
    t2850;
  t2905 = t2898 - X[54ULL] * 0.296802103844292;
  t2898 = t2086_idx_0 - X[54ULL] * 0.25983661262297303;
  t2899 = t2883 - X[54ULL] * 0.461523;
  t2883 = pmf_sqrt(X[444ULL] * X[444ULL] + 2.7104677895120892E-12);
  t2906 = pmf_sqrt(X[444ULL] * X[444ULL] + 5.2285258285341208E-12);
  t2907 = pmf_sqrt(X[444ULL] * X[444ULL] + 3.6921614138577959E-12);
  if (X[449ULL] <= 0.0) {
    t2908 = 0.0;
  } else {
    t2908 = X[449ULL] >= 1.0 ? 1.0 : X[449ULL];
  }

  if (X[450ULL] <= 0.0) {
    t2909 = 0.0;
  } else {
    t2909 = X[450ULL] >= 1.0 ? 1.0 : X[450ULL];
  }

  t2910 = (((1.0 - t2908) - t2909) * 296.802103844292 + t2908 * 461.523) + t2909
    * 259.836612622973;
  if (1.0 - X[449ULL] >= 0.01) {
    t2911 = 1.0 - X[449ULL];
  } else if (1.0 - X[449ULL] >= -0.1) {
    t2911 = pmf_exp(((1.0 - X[449ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2911 = 1.6701700790245661E-7;
  }

  t2912 = (X[453ULL] * 0.07812500122070315 + U_idx_10 * 10.0) -
    7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    t2913 = 0.0;
  } else {
    t2913 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    t2914 = 0.0;
  } else {
    t2914 = X[61ULL] >= 1.0 ? 1.0 : X[61ULL];
  }

  t2916 = (((1.0 - t2913) - t2914) * 296.802103844292 + t2913 * 461.523) + t2914
    * 259.836612622973;
  t2917 = -((X[58ULL] / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) - X[456ULL] / (X
              [457ULL] == 0.0 ? 1.0E-16 : X[457ULL])) * X[201ULL] * t2916) /
    0.0019634954084936209;
  if (X[456ULL] <= 216.59999999999997) {
    t2918 = 216.59999999999997;
  } else {
    t2918 = X[456ULL] >= 623.15 ? 623.15 : X[456ULL];
  }

  t2920 = t2918 * t2918;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0 =
    (((1074.1165326382541 + t2918 * -0.2214565261064077) + t2920 *
      0.00037212980109010952) * ((1.0 - t2913) - t2914) + ((1479.6504774710445 +
       t2918 * 1.200211433705052) + t2920 * -0.00038614513167842338) * t2913) +
    ((900.63941224837913 + t2918 * -0.044484923911364271) + t2920 *
     0.00036936011832043369) * t2914;
  t3139 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0 -
    t2916;
  t2918 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0 /
    (t3139 == 0.0 ? 1.0E-16 : t3139);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0 = pmf_sqrt
    (t2917 * t2917 * 9.999999999999999E-14 + fabs(X[456ULL] * t2918 * t2916) *
     1.0E-9);
  if (X[458ULL] <= 0.0) {
    t2920 = 0.0;
  } else {
    t2920 = X[458ULL] >= 1.0 ? 1.0 : X[458ULL];
  }

  if (X[459ULL] <= 0.0) {
    intrm_sf_mf_1553 = 0.0;
  } else {
    intrm_sf_mf_1553 = X[459ULL] >= 1.0 ? 1.0 : X[459ULL];
  }

  t2093[0ULL] = X[58ULL];
  tlu2_linear_nearest_prelookup(&jo_efOut.mField0[0ULL], &jo_efOut.mField1[0ULL],
    &jo_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = jo_efOut;
  tlu2_1d_linear_nearest_value(&ko_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ko_efOut[0];
  tlu2_1d_linear_nearest_value(&lo_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = lo_efOut[0];
  tlu2_1d_linear_nearest_value(&mo_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = mo_efOut[0];
  t2922 = (((1.0 - t2920) - intrm_sf_mf_1553) * t2086_idx_0 + t2099_idx_0 *
           t2920) + t2100_idx_0 * intrm_sf_mf_1553;
  t3139 = X[457ULL] * X[457ULL] * t2918;
  t2923 = -pmf_sqrt(fabs(t3139 / (t2916 == 0.0 ? 1.0E-16 : t2916) / (X[456ULL] ==
    0.0 ? 1.0E-16 : X[456ULL]))) * 0.0019634954084936209;
  if (t2923 >= 0.0) {
    t2924 = t2923 * 100000.0;
  } else {
    t2924 = -t2923 * 100000.0;
  }

  t3144 = t2922 * 0.0019634954084936209;
  t2926 = t2924 * 0.05 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  t3143 = X[58ULL] * t2916;
  t2927 = X[59ULL] / (t3143 == 0.0 ? 1.0E-16 : t3143);
  t3148 = t2927 * 9.8174770424681068E-6;
  t2928 = t2923 * t2922 * 35.2 / (t3148 == 0.0 ? 1.0E-16 : t3148);
  t2675 = t2926 >= 1.0 ? t2926 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2675 == 0.0 ? 1.0E-16 : t2675) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t2675 == 0.0 ?
    1.0E-16 : t2675) + 2.8767404433520813E-5) * 3.24;
  t3151 = t2927 * 3.855314219175531E-7;
  t2924 = t2923 * t2924 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) * 0.55 /
    (t3151 == 0.0 ? 1.0E-16 : t3151);
  t2675 = (t2926 - 2000.0) / 2000.0;
  U_idx_10 = t2675 * t2675 * 3.0 - t2675 * t2675 * t2675 * 2.0;
  if (t2926 <= 2000.0) {
    t2675 = t2928 * 1.0E-5;
  } else if (t2926 >= 4000.0) {
    t2675 = t2924 * 1.0E-5;
  } else {
    t2675 = ((1.0 - U_idx_10) * t2928 + t2924 * U_idx_10) * 1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0 = -(X[201ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0) /
    0.0019634954084936209 * 0.00031622776601683789 + t2675;
  t2924 = X[196ULL] - X[59ULL];
  t2928 = -((X[58ULL] / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) - X[460ULL] / (X
              [461ULL] == 0.0 ? 1.0E-16 : X[461ULL])) * X[444ULL] * t2916) /
    0.0019634954084936209;
  if (X[460ULL] <= 216.59999999999997) {
    t2675 = 216.59999999999997;
  } else {
    t2675 = X[460ULL] >= 623.15 ? 623.15 : X[460ULL];
  }

  t2931 = t2675 * t2675;
  U_idx_10 = (((1074.1165326382541 + t2675 * -0.2214565261064077) + t2931 *
               0.00037212980109010952) * ((1.0 - t2913) - t2914) +
              ((1479.6504774710445 + t2675 * 1.200211433705052) + t2931 *
               -0.00038614513167842338) * t2913) + ((900.63941224837913 + t2675 *
    -0.044484923911364271) + t2931 * 0.00036936011832043369) * t2914;
  t3134 = U_idx_10 - t2916;
  t2675 = U_idx_10 / (t3134 == 0.0 ? 1.0E-16 : t3134);
  U_idx_10 = pmf_sqrt(t2928 * t2928 * 9.999999999999999E-14 + fabs(X[460ULL] *
    t2675 * t2916) * 1.0E-9);
  t3134 = X[461ULL] * X[461ULL] * t2675;
  t2931 = -pmf_sqrt(fabs(t3134 / (t2916 == 0.0 ? 1.0E-16 : t2916) / (X[460ULL] ==
    0.0 ? 1.0E-16 : X[460ULL]))) * 0.0019634954084936209;
  if (t2931 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = t2931 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = -t2931 *
      100000.0;
  }

  t2933 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke * 0.05
    / (t3144 == 0.0 ? 1.0E-16 : t3144);
  intrm_sf_mf_1623 = t2931 * t2922 * 35.2 / (t3148 == 0.0 ? 1.0E-16 : t3148);
  t2935 = t2933 >= 1.0 ? t2933 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2935 == 0.0 ? 1.0E-16 : t2935) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t2935 == 0.0 ?
    1.0E-16 : t2935) + 2.8767404433520813E-5) * 3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = t2931 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke * (1.0 /
    (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) * 0.55 / (t3151 == 0.0 ? 1.0E-16 :
    t3151);
  t2935 = (t2933 - 2000.0) / 2000.0;
  intrm_sf_mf_1579 = t2935 * t2935 * 3.0 - t2935 * t2935 * t2935 * 2.0;
  if (t2933 <= 2000.0) {
    t2935 = intrm_sf_mf_1623 * 1.0E-5;
  } else if (t2933 >= 4000.0) {
    t2935 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke *
      1.0E-5;
  } else {
    t2935 = ((1.0 - intrm_sf_mf_1579) * intrm_sf_mf_1623 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke *
             intrm_sf_mf_1579) * 1.0E-5;
  }

  U_idx_10 = -(X[444ULL] * U_idx_10) / 0.0019634954084936209 *
    0.00031622776601683789 + t2935;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke = t2912 - X
    [59ULL];
  t2093[0ULL] = X[58ULL];
  tlu2_linear_linear_prelookup(&no_efOut.mField0[0ULL], &no_efOut.mField1[0ULL],
    &no_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = no_efOut;
  tlu2_1d_linear_linear_value(&oo_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = oo_efOut[0];
  intrm_sf_mf_1623 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&po_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = po_efOut[0];
  t2935 = t2086_idx_0;
  if (1.0 - X[60ULL] >= 0.01) {
    t2937 = 1.0 - X[60ULL];
  } else if (1.0 - X[60ULL] >= -0.1) {
    t2937 = pmf_exp(((1.0 - X[60ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t2937 = 1.6701700790245661E-7;
  }

  intrm_sf_mf_1579 = X[61ULL] / (t2937 == 0.0 ? 1.0E-16 : t2937) *
    -36.965491221318985 + 296.802103844292;
  tlu2_1d_linear_linear_value(&qo_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qo_efOut[0];
  t2938 = pmf_exp(pmf_log(X[59ULL] * 100000.0) - t2086_idx_0);
  if (t2938 >= 1.0) {
    U_idx_0 = (t2938 - 1.0) * 461.523 + intrm_sf_mf_1579;
    t2940 = intrm_sf_mf_1579 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  } else {
    t2940 = 1.0;
  }

  t3216 = t2940 * 0.01;
  intrm_sf_mf_1579 = (X[60ULL] - t2940) / (t3216 == 0.0 ? 1.0E-16 : t3216);
  if (X[60ULL] - t2940 <= 0.0) {
    intrm_sf_mf_1579 = 0.0;
  } else if (X[60ULL] - t2940 >= t2940 * 0.01) {
    intrm_sf_mf_1579 = X[60ULL] - t2940;
  } else {
    intrm_sf_mf_1579 = (X[60ULL] - t2940) * (intrm_sf_mf_1579 * intrm_sf_mf_1579
      * 3.0 - intrm_sf_mf_1579 * intrm_sf_mf_1579 * intrm_sf_mf_1579 * 2.0);
  }

  t2927 = t2927 * intrm_sf_mf_1579 * 0.0019634954084936209 / 0.001;
  intrm_sf_mf_1579 = (intrm_sf_mf_1623 - t2935) * t2927;
  tlu2_1d_linear_nearest_value(&ro_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ro_efOut[0];
  tlu2_1d_linear_nearest_value(&so_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = so_efOut[0];
  tlu2_1d_linear_nearest_value(&to_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = to_efOut[0];
  t2935 = (((1.0 - t2920) - intrm_sf_mf_1553) * t2086_idx_0 + t2099_idx_0 *
           t2920) + t2100_idx_0 * intrm_sf_mf_1553;
  t2940 = (X[437ULL] - X[58ULL]) * (t2935 * 0.15707963267948966 / 0.05);
  tlu2_1d_linear_nearest_value(&uo_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = uo_efOut[0];
  tlu2_1d_linear_nearest_value(&vo_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = vo_efOut[0];
  tlu2_1d_linear_nearest_value(&wo_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = wo_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 = (((1.0 -
    t2920) - intrm_sf_mf_1553) * t2086_idx_0 + t2099_idx_0 * t2920) +
    t2100_idx_0 * intrm_sf_mf_1553;
  t2920 = (-X[201ULL] - (-X[444ULL])) / 2.0;
  t3250 = (t2922 + t2365) / 2.0 * 0.0019634954084936209;
  t2365 = (t2920 >= 0.0 ? t2920 : 0.0) * 0.05 / (t3250 == 0.0 ? 1.0E-16 : t3250);
  intrm_sf_mf_1553 = t2365 >= 0.0 ? t2365 : -t2365;
  intrm_sf_mf_1556 = intrm_sf_mf_1553 > 1000.0 ? intrm_sf_mf_1553 : 1000.0;
  U_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 +
    t2407;
  if (U_idx_0 / 2.0 > 0.5) {
    t2943 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 +
             t2407) / 2.0;
  } else {
    t2943 = 0.5;
  }

  t3216 = pmf_log10(6.9 / (intrm_sf_mf_1556 == 0.0 ? 1.0E-16 : intrm_sf_mf_1556)
                    + 2.8767404433520813E-5) * pmf_log10(6.9 / (intrm_sf_mf_1556
    == 0.0 ? 1.0E-16 : intrm_sf_mf_1556) + 2.8767404433520813E-5) * 3.24;
  t2944 = 1.0 / (t3216 == 0.0 ? 1.0E-16 : t3216);
  t3250 = (pmf_pow(t2943, 0.66666666666666663) - 1.0) * pmf_sqrt(t2944 / 8.0) *
    12.7 + 1.0;
  intrm_sf_mf_1556 = (intrm_sf_mf_1556 - 1000.0) * (t2944 / 8.0) * t2943 /
    (t3250 == 0.0 ? 1.0E-16 : t3250);
  t2943 = (intrm_sf_mf_1553 - 2000.0) / 2000.0;
  t2944 = t2943 * t2943 * 3.0 - t2943 * t2943 * t2943 * 2.0;
  if (intrm_sf_mf_1553 <= 2000.0) {
    t2943 = 3.66;
  } else if (intrm_sf_mf_1553 >= 4000.0) {
    t2943 = intrm_sf_mf_1556;
  } else {
    t2943 = (1.0 - t2944) * 3.66 + intrm_sf_mf_1556 * t2944;
  }

  t3216 = U_idx_0 / 2.0;
  if (intrm_sf_mf_1553 > t2943 * 0.15707963267948966 / 0.0019634954084936209 /
      (t3216 == 0.0 ? 1.0E-16 : t3216) / 30.0) {
    U_idx_1 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 +
               t2407) / 2.0;
    intrm_sf_mf_1556 = t2943 * 0.15707963267948966 / (intrm_sf_mf_1553 == 0.0 ?
      1.0E-16 : intrm_sf_mf_1553) / 0.0019634954084936209 / (U_idx_1 == 0.0 ?
      1.0E-16 : U_idx_1);
  } else {
    intrm_sf_mf_1556 = 30.0;
  }

  t2407 = (X[437ULL] - X[195ULL]) * (1.0 - pmf_exp(-intrm_sf_mf_1556));
  t2365 = t2365 * 0.0019634954084936209 / 0.05 * (U_idx_0 / 2.0) * ((t2935 +
    t2411) / 2.0) * t2407;
  if (X[455ULL] <= 0.0) {
    t2407 = 0.0;
  } else {
    t2407 = X[455ULL] >= 1.0 ? 1.0 : X[455ULL];
  }

  if (X[454ULL] <= 0.0) {
    t2411 = 0.0;
  } else {
    t2411 = X[454ULL] >= 1.0 ? 1.0 : X[454ULL];
  }

  intrm_sf_mf_1553 = (((1.0 - t2407) - t2411) * 296.802103844292 + t2407 *
                      461.523) + t2411 * 259.836612622973;
  intrm_sf_mf_1556 = X[455ULL] * 461.523 / (intrm_sf_mf_1553 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1553);
  if (intrm_sf_mf_1556 <= 0.0) {
    t2943 = 0.0;
  } else {
    t2943 = intrm_sf_mf_1556 >= 1.0 ? 1.0 : intrm_sf_mf_1556;
  }

  intrm_sf_mf_1556 = X[454ULL] * 259.836612622973 / (intrm_sf_mf_1553 == 0.0 ?
    1.0E-16 : intrm_sf_mf_1553);
  if (intrm_sf_mf_1556 <= 0.0) {
    t2944 = 0.0;
  } else {
    t2944 = intrm_sf_mf_1556 >= 1.0 ? 1.0 : intrm_sf_mf_1556;
  }

  t2093[0ULL] = X[452ULL];
  tlu2_linear_nearest_prelookup(&xo_efOut.mField0[0ULL], &xo_efOut.mField1[0ULL],
    &xo_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = xo_efOut;
  tlu2_1d_linear_nearest_value(&yo_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = yo_efOut[0];
  tlu2_1d_linear_nearest_value(&ap_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ap_efOut[0];
  tlu2_1d_linear_nearest_value(&bp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = bp_efOut[0];
  intrm_sf_mf_1556 = (((1.0 - t2943) - t2944) * t2086_idx_0 + t2099_idx_0 *
                      t2943) + t2100_idx_0 * t2944;
  tlu2_1d_linear_nearest_value(&cp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cp_efOut[0];
  tlu2_1d_linear_nearest_value(&dp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = dp_efOut[0];
  tlu2_1d_linear_nearest_value(&ep_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField17, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ep_efOut[0];
  t2945 = (((1.0 - t2943) - t2944) * t2086_idx_0 + t2099_idx_0 * t2943) +
    t2100_idx_0 * t2944;
  tlu2_1d_linear_nearest_value(&fp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fp_efOut[0];
  tlu2_1d_linear_nearest_value(&gp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gp_efOut[0];
  tlu2_1d_linear_nearest_value(&hp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hp_efOut[0];
  t3250 = (t2922 + ((((1.0 - t2943) - t2944) * t2086_idx_0 + t2099_idx_0 * t2943)
                    + t2100_idx_0 * t2944)) / 2.0 * 0.0019634954084936209;
  t2920 = -(t2920 <= 0.0 ? t2920 : 0.0) * 0.05 / (t3250 == 0.0 ? 1.0E-16 : t3250);
  t2943 = t2920 >= 0.0 ? t2920 : -t2920;
  t2944 = t2943 > 1000.0 ? t2943 : 1000.0;
  U_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 +
    intrm_sf_mf_1556;
  if (U_idx_0 / 2.0 > 0.5) {
    t2946 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 +
             intrm_sf_mf_1556) / 2.0;
  } else {
    t2946 = 0.5;
  }

  t3216 = pmf_log10(6.9 / (t2944 == 0.0 ? 1.0E-16 : t2944) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t2944 == 0.0 ?
    1.0E-16 : t2944) + 2.8767404433520813E-5) * 3.24;
  t2947 = 1.0 / (t3216 == 0.0 ? 1.0E-16 : t3216);
  t3250 = (pmf_pow(t2946, 0.66666666666666663) - 1.0) * pmf_sqrt(t2947 / 8.0) *
    12.7 + 1.0;
  t2944 = (t2944 - 1000.0) * (t2947 / 8.0) * t2946 / (t3250 == 0.0 ? 1.0E-16 :
    t3250);
  t2946 = (t2943 - 2000.0) / 2000.0;
  t2947 = t2946 * t2946 * 3.0 - t2946 * t2946 * t2946 * 2.0;
  if (t2943 <= 2000.0) {
    t2946 = 3.66;
  } else if (t2943 >= 4000.0) {
    t2946 = t2944;
  } else {
    t2946 = (1.0 - t2947) * 3.66 + t2944 * t2947;
  }

  t3216 = U_idx_0 / 2.0;
  if (t2943 > t2946 * 0.15707963267948966 / 0.0019634954084936209 / (t3216 ==
       0.0 ? 1.0E-16 : t3216) / 30.0) {
    U_idx_1 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 +
               intrm_sf_mf_1556) / 2.0;
    t2944 = t2946 * 0.15707963267948966 / (t2943 == 0.0 ? 1.0E-16 : t2943) /
      0.0019634954084936209 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  } else {
    t2944 = 30.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 = (X[437ULL] -
    X[452ULL]) * (1.0 - pmf_exp(-t2944));
  t2935 = t2365 + t2920 * 0.0019634954084936209 / 0.05 * (U_idx_0 / 2.0) *
    ((t2935 + t2945) / 2.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2;
  t2365 = pmf_sqrt(X[201ULL] * X[201ULL] + 3.0116308772356542E-13);
  t2920 = pmf_sqrt(X[201ULL] * X[201ULL] + 5.8094731428156895E-13);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2 = pmf_sqrt(X
    [201ULL] * X[201ULL] + 4.1024015709531055E-13);
  intrm_sf_mf_1556 = pmf_sqrt(X[444ULL] * X[444ULL] + 3.0116308772356542E-13);
  t2943 = pmf_sqrt(X[444ULL] * X[444ULL] + 5.8094731428156895E-13);
  t2944 = pmf_sqrt(X[444ULL] * X[444ULL] + 4.1024015709531055E-13);
  tlu2_1d_linear_linear_value(&ip_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ip_efOut[0];
  t2945 = t2086_idx_0;
  tlu2_1d_linear_linear_value(&jp_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jp_efOut[0];
  t2947 = -X[209ULL] - X[445ULL];
  t2948 = (-X[201ULL] - X[444ULL]) - t2927 * 100000.0;
  t2950 = (-X[210ULL] - X[446ULL]) - t2927 * 100000.0;
  t2951 = (((1.0 - t2913) - t2914) * t2945 + intrm_sf_mf_1623 * t2913) +
    t2086_idx_0 * t2914;
  t2956 = t2945 - X[58ULL] * 0.296802103844292;
  t2945 = t2086_idx_0 - X[58ULL] * 0.25983661262297303;
  t2946 = intrm_sf_mf_1623 - X[58ULL] * 0.461523;
  if (X[453ULL] * 0.0019634954084936209 <= 1.9634954084936209E-11) {
    intrm_sf_mf_1623 = 1.9634954084936209E-11;
  } else if (X[453ULL] * 0.0019634954084936209 >= 0.0012566370614359179) {
    intrm_sf_mf_1623 = 0.0012566370614359179;
  } else {
    intrm_sf_mf_1623 = X[453ULL] * 0.0019634954084936209;
  }

  t4237 = intrm_sf_mf_1623 / 0.0019634954084936209;
  if (X[472ULL] <= 0.0) {
    intrm_sf_mf_1660 = 0.0;
  } else {
    intrm_sf_mf_1660 = X[472ULL] >= 1.0 ? 1.0 : X[472ULL];
  }

  if (X[473ULL] <= 0.0) {
    t2964 = 0.0;
  } else {
    t2964 = X[473ULL] >= 1.0 ? 1.0 : X[473ULL];
  }

  t2966 = (((1.0 - intrm_sf_mf_1660) - t2964) * 296.802103844292 +
           intrm_sf_mf_1660 * 461.523) + t2964 * 259.836612622973;
  t3216 = X[470ULL] * t2966;
  t2967 = X[471ULL] / (t3216 == 0.0 ? 1.0E-16 : t3216);
  t2969 = X[471ULL] / (t2912 == 0.0 ? 1.0E-16 : t2912) * (X[474ULL] / (X[470ULL]
    == 0.0 ? 1.0E-16 : X[470ULL]));
  t2970 = X[471ULL] / 1.01325 * (X[475ULL] / (X[470ULL] == 0.0 ? 1.0E-16 : X
    [470ULL]));
  if (X[444ULL] > 0.0) {
    t2975 = (t4237 + 1.0) * (1.0 - t4237 * t2969) * (X[444ULL] / 0.64 /
      (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623) * (X[444ULL] / 0.64
      / (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623)) / 2.0 / (t2967 ==
      0.0 ? 1.0E-16 : t2967)) * 9.9999999999999991E-11;
  } else if (X[444ULL] < 0.0) {
    t2975 = (t4237 + 1.0) * (1.0 - t4237 * t2970) * (X[444ULL] / 0.64 /
      (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623) * (X[444ULL] / 0.64
      / (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623)) / 2.0 / (t2967 ==
      0.0 ? 1.0E-16 : t2967)) * 9.9999999999999991E-11;
  } else {
    t2975 = 0.0;
  }

  intrm_sf_mf_1704 = (t2912 + 1.01325) / 2.0 * 0.0010000000000000009;
  t3753 = (1.0 - t4237) * (1.0 - t4237);
  intrm_sf_mf_127 = intrm_sf_mf_1704 * t3753;
  t2982 = (t4237 + 1.0) * (1.0 - t4237 * t2969) - (1.0 - t4237 * t2970) * t4237 *
    2.0;
  intrm_sf_mf_1061 = (t2912 - 1.01325) * (t2982 >= t3753 ? t2982 : t3753);
  t2982 = (t2912 - 1.01325) / (intrm_sf_mf_1704 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1704);
  intrm_sf_mf_1335 = t2982 * t2982 * 3.0 - t2982 * t2982 * t2982 * 2.0;
  if (t2912 - 1.01325 <= 0.0) {
    t2982 = intrm_sf_mf_127;
  } else if (t2912 - 1.01325 >= intrm_sf_mf_1704) {
    t2982 = intrm_sf_mf_1061;
  } else {
    t2982 = (1.0 - intrm_sf_mf_1335) * intrm_sf_mf_127 + intrm_sf_mf_1061 *
      intrm_sf_mf_1335;
  }

  intrm_sf_mf_1061 = (t4237 + 1.0) * (1.0 - t4237 * t2970) - (1.0 - t4237 *
    t2969) * t4237 * 2.0;
  t4237 = (1.01325 - t2912) * (intrm_sf_mf_1061 >= t3753 ? intrm_sf_mf_1061 :
    t3753);
  t2969 = (1.01325 - t2912) / (intrm_sf_mf_1704 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1704);
  t2970 = t2969 * t2969 * 3.0 - t2969 * t2969 * t2969 * 2.0;
  if (1.01325 - t2912 <= 0.0) {
    t2969 = intrm_sf_mf_127;
  } else if (1.01325 - t2912 >= intrm_sf_mf_1704) {
    t2969 = t4237;
  } else {
    t2969 = (1.0 - t2970) * intrm_sf_mf_127 + t4237 * t2970;
  }

  if (t2912 > 1.01325) {
    t4237 = t2982;
  } else {
    t4237 = t2912 < 1.01325 ? t2969 : intrm_sf_mf_127;
  }

  if (X[470ULL] <= 216.59999999999997) {
    t2969 = 216.59999999999997;
  } else {
    t2969 = X[470ULL] >= 623.15 ? 623.15 : X[470ULL];
  }

  t2987 = t2969 * t2969;
  t2970 = (((1074.1165326382541 + t2969 * -0.2214565261064077) + t2987 *
            0.00037212980109010952) * ((1.0 - intrm_sf_mf_1660) - t2964) +
           ((1479.6504774710445 + t2969 * 1.200211433705052) + t2987 *
            -0.00038614513167842338) * intrm_sf_mf_1660) + ((900.63941224837913
    + t2969 * -0.044484923911364271) + t2987 * 0.00036936011832043369) * t2964;
  t3250 = t2970 - t2966;
  t3250 = X[471ULL] * X[471ULL] * (t2970 / (t3250 == 0.0 ? 1.0E-16 : t3250));
  t2969 = pmf_sqrt(fabs(t3250 / (t2966 == 0.0 ? 1.0E-16 : t2966) / (X[470ULL] ==
    0.0 ? 1.0E-16 : X[470ULL]))) * intrm_sf_mf_1623 * 0.64;
  t3253 = t2967 * 2.0;
  t2967 = (t2912 - 1.01325) * pmf_sqrt(fabs(t3253 / (t4237 == 0.0 ? 1.0E-16 :
    t4237))) * intrm_sf_mf_1623 * 0.64;
  t2093[0ULL] = X[62ULL];
  t1049[0] = 23ULL;
  tlu2_linear_nearest_prelookup(&kp_efOut.mField0[0ULL], &kp_efOut.mField1[0ULL],
    &kp_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t2093[0ULL],
    &t1049[0ULL], &t170[0ULL]);
  t116 = kp_efOut;
  t2093[0ULL] = X[477ULL];
  t1560[0] = 29ULL;
  tlu2_linear_nearest_prelookup(&lp_efOut.mField0[0ULL], &lp_efOut.mField1[0ULL],
    &lp_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t2093[0ULL],
    &t1560[0ULL], &t170[0ULL]);
  t131 = lp_efOut;
  tlu2_2d_linear_nearest_value(&mp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t131.mField0[0ULL], &t131.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField30, &t1049[0ULL], &t1560[0ULL], &t170[0ULL]);
  t2086_idx_0 = mp_efOut[0];
  t2970 = t2086_idx_0;
  t2093[0ULL] = X[249ULL];
  tlu2_linear_linear_prelookup(&np_efOut.mField0[0ULL], &np_efOut.mField1[0ULL],
    &np_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = np_efOut;
  tlu2_1d_linear_linear_value(&op_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = op_efOut[0];
  tlu2_1d_linear_linear_value(&pp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = pp_efOut[0];
  tlu2_1d_linear_linear_value(&qp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = qp_efOut[0];
  t3753 = (((1.0 - t4098) - t3858) * t2086_idx_0 + t2099_idx_0 * t4098) +
    t2100_idx_0 * t3858;
  t2093[0ULL] = X[371ULL];
  tlu2_linear_linear_prelookup(&rp_efOut.mField0[0ULL], &rp_efOut.mField1[0ULL],
    &rp_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t64 = rp_efOut;
  tlu2_1d_linear_linear_value(&sp_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = sp_efOut[0];
  tlu2_1d_linear_linear_value(&tp_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = tp_efOut[0];
  tlu2_1d_linear_linear_value(&up_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = up_efOut[0];
  t4098 = (((1.0 - t2734) - t2735) * t2086_idx_0 + t2099_idx_0 * t2734) +
    t2100_idx_0 * t2735;
  t2093[0ULL] = X[382ULL];
  tlu2_linear_linear_prelookup(&vp_efOut.mField0[0ULL], &vp_efOut.mField1[0ULL],
    &vp_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = vp_efOut;
  tlu2_1d_linear_linear_value(&wp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = wp_efOut[0];
  tlu2_1d_linear_linear_value(&xp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = xp_efOut[0];
  tlu2_1d_linear_linear_value(&yp_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = yp_efOut[0];
  t2734 = (((1.0 - t2696) - t2697) * t2086_idx_0 + t2099_idx_0 * t2696) +
    t2100_idx_0 * t2697;
  t2093[0ULL] = X[385ULL];
  tlu2_linear_linear_prelookup(&aq_efOut.mField0[0ULL], &aq_efOut.mField1[0ULL],
    &aq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = aq_efOut;
  tlu2_1d_linear_linear_value(&bq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = bq_efOut[0];
  tlu2_1d_linear_linear_value(&cq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = cq_efOut[0];
  tlu2_1d_linear_linear_value(&dq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = dq_efOut[0];
  t2735 = (((1.0 - t2696) - t2697) * t2086_idx_0 + t2099_idx_0 * t2696) +
    t2100_idx_0 * t2697;
  if (-X[272ULL] >= 0.0) {
    t3858 = -X[272ULL];
  } else {
    t3858 = X[272ULL];
  }

  intrm_sf_mf_127 = t3858 * 0.05 / (t2775 == 0.0 ? 1.0E-16 : t2775);
  t2982 = intrm_sf_mf_127 >= 1.0 ? intrm_sf_mf_127 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2982 == 0.0 ? 1.0E-16 : t2982) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t2982 == 0.0 ?
    1.0E-16 : t2982) + 2.8767404433520813E-5) * 3.24;
  intrm_sf_mf_1061 = X[272ULL] * t2705 * -11.2 / (t2779 == 0.0 ? 1.0E-16 : t2779);
  t3858 = X[272ULL] * t3858 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    -0.175 / (t2782 == 0.0 ? 1.0E-16 : t2782);
  t2982 = (intrm_sf_mf_127 - 2000.0) / 2000.0;
  intrm_sf_mf_1335 = t2982 * t2982 * 3.0 - t2982 * t2982 * t2982 * 2.0;
  if (intrm_sf_mf_127 <= 2000.0) {
    t2982 = intrm_sf_mf_1061 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_127 >= 4000.0) {
    t2982 = t3858 * 9.9999999999999991E-11;
  } else {
    t2982 = ((1.0 - intrm_sf_mf_1335) * intrm_sf_mf_1061 + t3858 *
             intrm_sf_mf_1335) * 9.9999999999999991E-11;
  }

  t3858 = X[384ULL] >= 0.0 ? X[384ULL] : -X[384ULL];
  intrm_sf_mf_127 = t3858 * 0.05 / (t2775 == 0.0 ? 1.0E-16 : t2775);
  intrm_sf_mf_1061 = intrm_sf_mf_127 >= 1.0 ? intrm_sf_mf_127 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (intrm_sf_mf_1061 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1061) + 2.8767404433520813E-5) * pmf_log10(6.9 /
    (intrm_sf_mf_1061 == 0.0 ? 1.0E-16 : intrm_sf_mf_1061) +
    2.8767404433520813E-5) * 3.24;
  intrm_sf_mf_1335 = X[384ULL] * t2705 * 11.2 / (t2779 == 0.0 ? 1.0E-16 : t2779);
  t3858 = X[384ULL] * t3858 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    0.175 / (t2782 == 0.0 ? 1.0E-16 : t2782);
  intrm_sf_mf_1061 = (intrm_sf_mf_127 - 2000.0) / 2000.0;
  t2149 = intrm_sf_mf_1061 * intrm_sf_mf_1061 * 3.0 - intrm_sf_mf_1061 *
    intrm_sf_mf_1061 * intrm_sf_mf_1061 * 2.0;
  if (intrm_sf_mf_127 <= 2000.0) {
    intrm_sf_mf_1061 = intrm_sf_mf_1335 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_127 >= 4000.0) {
    intrm_sf_mf_1061 = t3858 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_1061 = ((1.0 - t2149) * intrm_sf_mf_1335 + t3858 * t2149) *
      9.9999999999999991E-11;
  }

  t2093[0ULL] = X[75ULL];
  tlu2_linear_linear_prelookup(&eq_efOut.mField0[0ULL], &eq_efOut.mField1[0ULL],
    &eq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = eq_efOut;
  tlu2_1d_linear_linear_value(&fq_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fq_efOut[0];
  tlu2_1d_linear_linear_value(&gq_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gq_efOut[0];
  tlu2_1d_linear_linear_value(&hq_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hq_efOut[0];
  t3858 = (((1.0 - t2703) - intrm_sf_mf_1177) * t2086_idx_0 + t2099_idx_0 *
           t2703) + t2100_idx_0 * intrm_sf_mf_1177;
  t2093[0ULL] = X[396ULL];
  tlu2_linear_linear_prelookup(&iq_efOut.mField0[0ULL], &iq_efOut.mField1[0ULL],
    &iq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = iq_efOut;
  tlu2_1d_linear_linear_value(&jq_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jq_efOut[0];
  tlu2_1d_linear_linear_value(&kq_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = kq_efOut[0];
  tlu2_1d_linear_linear_value(&lq_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = lq_efOut[0];
  t2703 = (((1.0 - t2717) - t2758) * t2086_idx_0 + t2099_idx_0 * t2717) +
    t2100_idx_0 * t2758;
  t2093[0ULL] = X[399ULL];
  tlu2_linear_linear_prelookup(&mq_efOut.mField0[0ULL], &mq_efOut.mField1[0ULL],
    &mq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = mq_efOut;
  tlu2_1d_linear_linear_value(&nq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = nq_efOut[0];
  tlu2_1d_linear_linear_value(&oq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = oq_efOut[0];
  tlu2_1d_linear_linear_value(&pq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = pq_efOut[0];
  intrm_sf_mf_1177 = (((1.0 - t2717) - t2758) * t2086_idx_0 + t2099_idx_0 *
                      t2717) + t2100_idx_0 * t2758;
  if (-X[384ULL] >= 0.0) {
    intrm_sf_mf_127 = -X[384ULL];
  } else {
    intrm_sf_mf_127 = X[384ULL];
  }

  intrm_sf_mf_1335 = intrm_sf_mf_127 * 0.01 / (t2869 == 0.0 ? 1.0E-16 : t2869);
  t2149 = intrm_sf_mf_1335 >= 1.0 ? intrm_sf_mf_1335 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2149 == 0.0 ? 1.0E-16 : t2149) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t2149 == 0.0 ?
    1.0E-16 : t2149) + 0.00017169489553429715) * 3.24;
  t2987 = X[384ULL] * t3887 * -2.9973120849090416 / (t2873 == 0.0 ? 1.0E-16 :
    t2873);
  intrm_sf_mf_127 = X[384ULL] * intrm_sf_mf_127 * (1.0 / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * -0.046833001326703774 / (t2876 == 0.0 ? 1.0E-16 :
    t2876);
  t2149 = (intrm_sf_mf_1335 - 2000.0) / 2000.0;
  intrm_sf_mf_1437 = t2149 * t2149 * 3.0 - t2149 * t2149 * t2149 * 2.0;
  if (intrm_sf_mf_1335 <= 2000.0) {
    t2149 = t2987 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_1335 >= 4000.0) {
    t2149 = intrm_sf_mf_127 * 9.9999999999999991E-11;
  } else {
    t2149 = ((1.0 - intrm_sf_mf_1437) * t2987 + intrm_sf_mf_127 *
             intrm_sf_mf_1437) * 9.9999999999999991E-11;
  }

  intrm_sf_mf_127 = X[398ULL] >= 0.0 ? X[398ULL] : -X[398ULL];
  intrm_sf_mf_1335 = intrm_sf_mf_127 * 0.01 / (t2869 == 0.0 ? 1.0E-16 : t2869);
  t2987 = intrm_sf_mf_1335 >= 1.0 ? intrm_sf_mf_1335 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2987 == 0.0 ? 1.0E-16 : t2987) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t2987 == 0.0 ?
    1.0E-16 : t2987) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_1437 = X[398ULL] * t3887 * 2.9973120849090416 / (t2873 == 0.0 ?
    1.0E-16 : t2873);
  intrm_sf_mf_127 = X[398ULL] * intrm_sf_mf_127 * (1.0 / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * 0.046833001326703774 / (t2876 == 0.0 ? 1.0E-16 : t2876);
  t2987 = (intrm_sf_mf_1335 - 2000.0) / 2000.0;
  t2989 = t2987 * t2987 * 3.0 - t2987 * t2987 * t2987 * 2.0;
  if (intrm_sf_mf_1335 <= 2000.0) {
    t2987 = intrm_sf_mf_1437 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_1335 >= 4000.0) {
    t2987 = intrm_sf_mf_127 * 9.9999999999999991E-11;
  } else {
    t2987 = ((1.0 - t2989) * intrm_sf_mf_1437 + intrm_sf_mf_127 * t2989) *
      9.9999999999999991E-11;
  }

  t2093[0ULL] = X[122ULL];
  tlu2_linear_linear_prelookup(&qq_efOut.mField0[0ULL], &qq_efOut.mField1[0ULL],
    &qq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = qq_efOut;
  tlu2_1d_linear_linear_value(&rq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = rq_efOut[0];
  tlu2_1d_linear_linear_value(&sq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = sq_efOut[0];
  tlu2_1d_linear_linear_value(&tq_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = tq_efOut[0];
  intrm_sf_mf_127 = (((1.0 - t2225) - t2257) * t2086_idx_0 + t2099_idx_0 * t2225)
    + t2100_idx_0 * t2257;
  t2093[0ULL] = X[410ULL];
  tlu2_linear_linear_prelookup(&uq_efOut.mField0[0ULL], &uq_efOut.mField1[0ULL],
    &uq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = uq_efOut;
  tlu2_1d_linear_linear_value(&vq_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vq_efOut[0];
  tlu2_1d_linear_linear_value(&wq_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = wq_efOut[0];
  tlu2_1d_linear_linear_value(&xq_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = xq_efOut[0];
  t2225 = (((1.0 - t2792) - t2818) * t2086_idx_0 + t2099_idx_0 * t2792) +
    t2100_idx_0 * t2818;
  t2093[0ULL] = X[412ULL];
  tlu2_linear_linear_prelookup(&yq_efOut.mField0[0ULL], &yq_efOut.mField1[0ULL],
    &yq_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = yq_efOut;
  tlu2_1d_linear_linear_value(&ar_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ar_efOut[0];
  tlu2_1d_linear_linear_value(&br_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = br_efOut[0];
  tlu2_1d_linear_linear_value(&cr_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = cr_efOut[0];
  t2257 = (((1.0 - t2792) - t2818) * t2086_idx_0 + t2099_idx_0 * t2792) +
    t2100_idx_0 * t2818;
  if (-X[398ULL] >= 0.0) {
    intrm_sf_mf_1335 = -X[398ULL];
  } else {
    intrm_sf_mf_1335 = X[398ULL];
  }

  intrm_sf_mf_1437 = intrm_sf_mf_1335 * 0.01 / (t2961 == 0.0 ? 1.0E-16 : t2961);
  t2989 = intrm_sf_mf_1437 >= 1.0 ? intrm_sf_mf_1437 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2989 == 0.0 ? 1.0E-16 : t2989) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t2989 == 0.0 ?
    1.0E-16 : t2989) + 0.00017169489553429715) * 3.24;
  t2990 = X[398ULL] * t3946 * -2.9973120849090416 / (t2965 == 0.0 ? 1.0E-16 :
    t2965);
  intrm_sf_mf_1335 = X[398ULL] * intrm_sf_mf_1335 * (1.0 / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * -0.046833001326703774 / (t2968 == 0.0 ? 1.0E-16 :
    t2968);
  t2989 = (intrm_sf_mf_1437 - 2000.0) / 2000.0;
  t2991 = t2989 * t2989 * 3.0 - t2989 * t2989 * t2989 * 2.0;
  if (intrm_sf_mf_1437 <= 2000.0) {
    t2989 = t2990 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_1437 >= 4000.0) {
    t2989 = intrm_sf_mf_1335 * 9.9999999999999991E-11;
  } else {
    t2989 = ((1.0 - t2991) * t2990 + intrm_sf_mf_1335 * t2991) *
      9.9999999999999991E-11;
  }

  intrm_sf_mf_1335 = X[145ULL] >= 0.0 ? X[145ULL] : -X[145ULL];
  intrm_sf_mf_1437 = intrm_sf_mf_1335 * 0.01 / (t2961 == 0.0 ? 1.0E-16 : t2961);
  t2990 = intrm_sf_mf_1437 >= 1.0 ? intrm_sf_mf_1437 : 1.0;
  t2093[0ULL] = X[141ULL];
  tlu2_linear_linear_prelookup(&dr_efOut.mField0[0ULL], &dr_efOut.mField1[0ULL],
    &dr_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = dr_efOut;
  tlu2_1d_linear_linear_value(&er_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = er_efOut[0];
  tlu2_1d_linear_linear_value(&fr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = fr_efOut[0];
  tlu2_1d_linear_linear_value(&gr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = gr_efOut[0];
  t2991 = (((1.0 - intrm_sf_mf_139) - t2254) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_139) + t2100_idx_0 * t2254;
  U_idx_0 = pmf_log10(6.9 / (t2990 == 0.0 ? 1.0E-16 : t2990) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t2990 == 0.0 ?
    1.0E-16 : t2990) + 0.00017169489553429715) * 3.24;
  t2254 = X[145ULL] * t3946 * 2.9973120849090416 / (t2965 == 0.0 ? 1.0E-16 :
    t2965);
  intrm_sf_mf_139 = X[145ULL] * intrm_sf_mf_1335 * (1.0 / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * 0.046833001326703774 / (t2968 == 0.0 ? 1.0E-16 : t2968);
  intrm_sf_mf_1335 = (intrm_sf_mf_1437 - 2000.0) / 2000.0;
  t2990 = intrm_sf_mf_1335 * intrm_sf_mf_1335 * 3.0 - intrm_sf_mf_1335 *
    intrm_sf_mf_1335 * intrm_sf_mf_1335 * 2.0;
  if (intrm_sf_mf_1437 <= 2000.0) {
    intrm_sf_mf_1335 = t2254 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_1437 >= 4000.0) {
    intrm_sf_mf_1335 = intrm_sf_mf_139 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_1335 = ((1.0 - t2990) * t2254 + intrm_sf_mf_139 * t2990) *
      9.9999999999999991E-11;
  }

  t2093[0ULL] = X[146ULL];
  tlu2_linear_linear_prelookup(&hr_efOut.mField0[0ULL], &hr_efOut.mField1[0ULL],
    &hr_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = hr_efOut;
  tlu2_1d_linear_linear_value(&ir_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ir_efOut[0];
  tlu2_1d_linear_linear_value(&jr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = jr_efOut[0];
  tlu2_1d_linear_linear_value(&kr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = kr_efOut[0];
  intrm_sf_mf_139 = (((1.0 - t2219) - t2220) * t2086_idx_0 + t2099_idx_0 * t2219)
    + t2100_idx_0 * t2220;
  t2093[0ULL] = X[150ULL];
  tlu2_linear_linear_prelookup(&lr_efOut.mField0[0ULL], &lr_efOut.mField1[0ULL],
    &lr_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t47 = lr_efOut;
  tlu2_1d_linear_linear_value(&mr_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = mr_efOut[0];
  tlu2_1d_linear_linear_value(&nr_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = nr_efOut[0];
  tlu2_1d_linear_linear_value(&or_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = or_efOut[0];
  t2254 = (((1.0 - t2219) - t2220) * t2086_idx_0 + t2099_idx_0 * t2219) +
    t2100_idx_0 * t2220;
  t2093[0ULL] = X[349ULL];
  tlu2_linear_linear_prelookup(&pr_efOut.mField0[0ULL], &pr_efOut.mField1[0ULL],
    &pr_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = pr_efOut;
  tlu2_1d_linear_linear_value(&qr_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qr_efOut[0];
  tlu2_1d_linear_linear_value(&rr_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = rr_efOut[0];
  tlu2_1d_linear_linear_value(&sr_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = sr_efOut[0];
  intrm_sf_mf_1437 = (((1.0 - intrm_sf_mf_1443) - t2895) * t2086_idx_0 +
                      t2099_idx_0 * intrm_sf_mf_1443) + t2100_idx_0 * t2895;
  t2093[0ULL] = X[173ULL];
  tlu2_linear_linear_prelookup(&tr_efOut.mField0[0ULL], &tr_efOut.mField1[0ULL],
    &tr_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = tr_efOut;
  tlu2_1d_linear_linear_value(&ur_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ur_efOut[0];
  tlu2_1d_linear_linear_value(&vr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = vr_efOut[0];
  tlu2_1d_linear_linear_value(&wr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = wr_efOut[0];
  intrm_sf_mf_1443 = (((1.0 - intrm_sf_mf_1449) - intrm_sf_mf_1452) *
                      t2086_idx_0 + t2099_idx_0 * intrm_sf_mf_1449) +
    t2100_idx_0 * intrm_sf_mf_1452;
  t2093[0ULL] = X[427ULL];
  tlu2_linear_linear_prelookup(&xr_efOut.mField0[0ULL], &xr_efOut.mField1[0ULL],
    &xr_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = xr_efOut;
  tlu2_1d_linear_linear_value(&yr_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = yr_efOut[0];
  tlu2_1d_linear_linear_value(&as_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = as_efOut[0];
  tlu2_1d_linear_linear_value(&bs_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = bs_efOut[0];
  intrm_sf_mf_1449 = (((1.0 - t2839) - t2850) * t2086_idx_0 + t2099_idx_0 *
                      t2839) + t2100_idx_0 * t2850;
  t2093[0ULL] = X[429ULL];
  tlu2_linear_linear_prelookup(&cs_efOut.mField0[0ULL], &cs_efOut.mField1[0ULL],
    &cs_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t103 = cs_efOut;
  tlu2_1d_linear_linear_value(&ds_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ds_efOut[0];
  tlu2_1d_linear_linear_value(&es_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = es_efOut[0];
  tlu2_1d_linear_linear_value(&fs_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = fs_efOut[0];
  intrm_sf_mf_1452 = (((1.0 - t2839) - t2850) * t2086_idx_0 + t2099_idx_0 *
                      t2839) + t2100_idx_0 * t2850;
  if (-X[361ULL] >= 0.0) {
    t2895 = -X[361ULL];
  } else {
    t2895 = X[361ULL];
  }

  t2990 = t2895 * 0.05 / (t3051 == 0.0 ? 1.0E-16 : t3051);
  t2992 = t2990 >= 1.0 ? t2990 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2992 == 0.0 ? 1.0E-16 : t2992) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t2992 == 0.0 ?
    1.0E-16 : t2992) + 2.8767404433520813E-5) * 3.24;
  t2993 = t2215 >= 0.0 ? t2215 : -t2215;
  t2994 = X[361ULL] * t2858 * -11.2 / (t3055 == 0.0 ? 1.0E-16 : t3055);
  t2895 = X[361ULL] * t2895 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    -0.175 / (t3058 == 0.0 ? 1.0E-16 : t3058);
  t2992 = (t2990 - 2000.0) / 2000.0;
  t4551 = t2992 * t2992 * 3.0 - t2992 * t2992 * t2992 * 2.0;
  if (t2990 <= 2000.0) {
    t2992 = t2994 * 9.9999999999999991E-11;
  } else if (t2990 >= 4000.0) {
    t2992 = t2895 * 9.9999999999999991E-11;
  } else {
    t2992 = ((1.0 - t4551) * t2994 + t2895 * t4551) * 9.9999999999999991E-11;
  }

  if (-X[177ULL] >= 0.0) {
    t2895 = -X[177ULL];
  } else {
    t2895 = X[177ULL];
  }

  t2990 = t2895 * 0.05 / (t3051 == 0.0 ? 1.0E-16 : t3051);
  t2994 = t2990 >= 1.0 ? t2990 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t2994 == 0.0 ? 1.0E-16 : t2994) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t2994 == 0.0 ?
    1.0E-16 : t2994) + 2.8767404433520813E-5) * 3.24;
  t4551 = X[177ULL] * t2858 * -11.2 / (t3055 == 0.0 ? 1.0E-16 : t3055);
  intrm_sf_mf_163 = t2993 * 0.01 / (t2260 == 0.0 ? 1.0E-16 : t2260);
  t2895 = X[177ULL] * t2895 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    -0.175 / (t3058 == 0.0 ? 1.0E-16 : t3058);
  t2994 = (t2990 - 2000.0) / 2000.0;
  intrm_sf_mf_1586 = t2994 * t2994 * 3.0 - t2994 * t2994 * t2994 * 2.0;
  if (t2990 <= 2000.0) {
    t2994 = t4551 * 9.9999999999999991E-11;
  } else if (t2990 >= 4000.0) {
    t2994 = t2895 * 9.9999999999999991E-11;
  } else {
    t2994 = ((1.0 - intrm_sf_mf_1586) * t4551 + t2895 * intrm_sf_mf_1586) *
      9.9999999999999991E-11;
  }

  if (X[440ULL] <= 0.0) {
    t2895 = 0.0;
  } else {
    t2895 = X[440ULL] >= 1.0 ? 1.0 : X[440ULL];
  }

  if (X[439ULL] <= 0.0) {
    t2990 = 0.0;
  } else {
    t2990 = X[439ULL] >= 1.0 ? 1.0 : X[439ULL];
  }

  t4551 = (((1.0 - t2895) - t2990) * 296.802103844292 + t2895 * 461.523) + t2990
    * 259.836612622973;
  intrm_sf_mf_1586 = intrm_sf_mf_163 >= 1.0 ? intrm_sf_mf_163 : 1.0;
  t2093[0ULL] = X[438ULL];
  tlu2_linear_linear_prelookup(&gs_efOut.mField0[0ULL], &gs_efOut.mField1[0ULL],
    &gs_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = gs_efOut;
  tlu2_1d_linear_linear_value(&hs_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = hs_efOut[0];
  tlu2_1d_linear_linear_value(&is_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = is_efOut[0];
  tlu2_1d_linear_linear_value(&js_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = js_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I = (((1.0 - t2895) -
    t2990) * t2086_idx_0 + t2099_idx_0 * t2895) + t2100_idx_0 * t2990;
  U_idx_0 = pmf_log10(6.9 / (intrm_sf_mf_1586 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1586) + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1586 == 0.0 ? 1.0E-16 : intrm_sf_mf_1586) +
    0.00017169489553429715) * 3.24;
  t2990 = t2215 * t147 * 35.2 / (t2264 == 0.0 ? 1.0E-16 : t2264);
  t2895 = t2215 * t2993 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) * 0.55 /
    (t2267 == 0.0 ? 1.0E-16 : t2267);
  t2993 = (intrm_sf_mf_163 - 2000.0) / 2000.0;
  intrm_sf_mf_1586 = t2993 * t2993 * 3.0 - t2993 * t2993 * t2993 * 2.0;
  if (intrm_sf_mf_163 <= 2000.0) {
    t2993 = t2990 * 9.9999999999999991E-11;
  } else if (intrm_sf_mf_163 >= 4000.0) {
    t2993 = t2895 * 9.9999999999999991E-11;
  } else {
    t2993 = ((1.0 - intrm_sf_mf_1586) * t2990 + t2895 * intrm_sf_mf_1586) *
      9.9999999999999991E-11;
  }

  if (-X[133ULL] >= 0.0) {
    t2895 = -X[133ULL];
  } else {
    t2895 = X[133ULL];
  }

  t2990 = t2895 * 0.01 / (t2260 == 0.0 ? 1.0E-16 : t2260);
  intrm_sf_mf_163 = t2990 >= 1.0 ? t2990 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (intrm_sf_mf_163 == 0.0 ? 1.0E-16 : intrm_sf_mf_163)
                      + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_163 == 0.0 ? 1.0E-16 : intrm_sf_mf_163) +
    0.00017169489553429715) * 3.24;
  t2093[0ULL] = X[195ULL];
  tlu2_linear_linear_prelookup(&ks_efOut.mField0[0ULL], &ks_efOut.mField1[0ULL],
    &ks_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t64 = ks_efOut;
  tlu2_1d_linear_linear_value(&ls_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = ls_efOut[0];
  tlu2_1d_linear_linear_value(&ms_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = ms_efOut[0];
  tlu2_1d_linear_linear_value(&ns_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = ns_efOut[0];
  intrm_sf_mf_1586 = (((1.0 - intrm_sf_mf_1651) - zc_int357) * t2086_idx_0 +
                      t2099_idx_0 * intrm_sf_mf_1651) + t2100_idx_0 * zc_int357;
  intrm_sf_mf_1651 = X[133ULL] * t147 * -35.2 / (t2264 == 0.0 ? 1.0E-16 : t2264);
  t2093[0ULL] = X[452ULL];
  tlu2_linear_linear_prelookup(&os_efOut.mField0[0ULL], &os_efOut.mField1[0ULL],
    &os_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = os_efOut;
  tlu2_1d_linear_linear_value(&ps_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ps_efOut[0];
  tlu2_1d_linear_linear_value(&qs_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = qs_efOut[0];
  tlu2_1d_linear_linear_value(&rs_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = rs_efOut[0];
  zc_int357 = (((1.0 - t2407) - t2411) * t2086_idx_0 + t2099_idx_0 * t2407) +
    t2100_idx_0 * t2411;
  t2093[0ULL] = X[456ULL];
  tlu2_linear_linear_prelookup(&ss_efOut.mField0[0ULL], &ss_efOut.mField1[0ULL],
    &ss_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = ss_efOut;
  tlu2_1d_linear_linear_value(&ts_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ts_efOut[0];
  tlu2_1d_linear_linear_value(&us_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = us_efOut[0];
  tlu2_1d_linear_linear_value(&vs_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = vs_efOut[0];
  t2407 = (((1.0 - t2913) - t2914) * t2086_idx_0 + t2099_idx_0 * t2913) +
    t2100_idx_0 * t2914;
  t2411 = X[133ULL] * t2895 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    -0.55 / (t2267 == 0.0 ? 1.0E-16 : t2267);
  t2093[0ULL] = X[460ULL];
  tlu2_linear_linear_prelookup(&ws_efOut.mField0[0ULL], &ws_efOut.mField1[0ULL],
    &ws_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = ws_efOut;
  tlu2_1d_linear_linear_value(&xs_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xs_efOut[0];
  tlu2_1d_linear_linear_value(&ys_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ys_efOut[0];
  tlu2_1d_linear_linear_value(&at_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = at_efOut[0];
  t2895 = (((1.0 - t2913) - t2914) * t2086_idx_0 + t2099_idx_0 * t2913) +
    t2100_idx_0 * t2914;
  if (-X[201ULL] >= 0.0) {
    intrm_sf_mf_163 = -X[201ULL];
  } else {
    intrm_sf_mf_163 = X[201ULL];
  }

  t2999 = intrm_sf_mf_163 * 0.05 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  t3000 = t2999 >= 1.0 ? t2999 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t3000 == 0.0 ? 1.0E-16 : t3000) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t3000 == 0.0 ?
    1.0E-16 : t3000) + 2.8767404433520813E-5) * 3.24;
  t3557 = X[201ULL] * t2922 * -35.2 / (t3148 == 0.0 ? 1.0E-16 : t3148);
  t3002 = (t2990 - 2000.0) / 2000.0;
  intrm_sf_mf_163 = X[201ULL] * intrm_sf_mf_163 * (1.0 / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * -0.55 / (t3151 == 0.0 ? 1.0E-16 : t3151);
  t3000 = (t2999 - 2000.0) / 2000.0;
  t3734 = t3000 * t3000 * 3.0 - t3000 * t3000 * t3000 * 2.0;
  if (t2999 <= 2000.0) {
    t3000 = t3557 * 9.9999999999999991E-11;
  } else if (t2999 >= 4000.0) {
    t3000 = intrm_sf_mf_163 * 9.9999999999999991E-11;
  } else {
    t3000 = ((1.0 - t3734) * t3557 + intrm_sf_mf_163 * t3734) *
      9.9999999999999991E-11;
  }

  if (-X[444ULL] >= 0.0) {
    intrm_sf_mf_163 = -X[444ULL];
  } else {
    intrm_sf_mf_163 = X[444ULL];
  }

  t2999 = intrm_sf_mf_163 * 0.05 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  t3557 = t2999 >= 1.0 ? t2999 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t3557 == 0.0 ? 1.0E-16 : t3557) +
                      2.8767404433520813E-5) * pmf_log10(6.9 / (t3557 == 0.0 ?
    1.0E-16 : t3557) + 2.8767404433520813E-5) * 3.24;
  t3734 = X[444ULL] * t2922 * -35.2 / (t3148 == 0.0 ? 1.0E-16 : t3148);
  intrm_sf_mf_163 = X[444ULL] * intrm_sf_mf_163 * (1.0 / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * -0.55 / (t3151 == 0.0 ? 1.0E-16 : t3151);
  t3557 = t3002 * t3002 * 3.0 - t3002 * t3002 * t3002 * 2.0;
  t3002 = (t2999 - 2000.0) / 2000.0;
  t3004 = t3002 * t3002 * 3.0 - t3002 * t3002 * t3002 * 2.0;
  if (t2999 <= 2000.0) {
    t3002 = t3734 * 9.9999999999999991E-11;
  } else if (t2999 >= 4000.0) {
    t3002 = intrm_sf_mf_163 * 9.9999999999999991E-11;
  } else {
    t3002 = ((1.0 - t3004) * t3734 + intrm_sf_mf_163 * t3004) *
      9.9999999999999991E-11;
  }

  if (t2990 <= 2000.0) {
    intrm_sf_mf_163 = intrm_sf_mf_1651 * 9.9999999999999991E-11;
  } else if (t2990 >= 4000.0) {
    intrm_sf_mf_163 = t2411 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_163 = ((1.0 - t3557) * intrm_sf_mf_1651 + t2411 * t3557) *
      9.9999999999999991E-11;
  }

  t2093[0ULL] = X[474ULL];
  tlu2_linear_linear_prelookup(&bt_efOut.mField0[0ULL], &bt_efOut.mField1[0ULL],
    &bt_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = bt_efOut;
  tlu2_1d_linear_linear_value(&ct_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ct_efOut[0];
  tlu2_1d_linear_linear_value(&dt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = dt_efOut[0];
  tlu2_1d_linear_linear_value(&et_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = et_efOut[0];
  intrm_sf_mf_1651 = (((1.0 - intrm_sf_mf_1660) - t2964) * t2086_idx_0 +
                      t2099_idx_0 * intrm_sf_mf_1660) + t2100_idx_0 * t2964;
  t2093[0ULL] = X[475ULL];
  tlu2_linear_linear_prelookup(&ft_efOut.mField0[0ULL], &ft_efOut.mField1[0ULL],
    &ft_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t47 = ft_efOut;
  tlu2_1d_linear_linear_value(&gt_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = gt_efOut[0];
  tlu2_1d_linear_linear_value(&ht_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = ht_efOut[0];
  tlu2_1d_linear_linear_value(&it_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = it_efOut[0];
  t2411 = (((1.0 - intrm_sf_mf_1660) - t2964) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_1660) + t2100_idx_0 * t2964;
  t2093[0ULL] = X[470ULL];
  tlu2_linear_linear_prelookup(&jt_efOut.mField0[0ULL], &jt_efOut.mField1[0ULL],
    &jt_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = jt_efOut;
  tlu2_1d_linear_linear_value(&kt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = kt_efOut[0];
  tlu2_1d_linear_linear_value(&lt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = lt_efOut[0];
  tlu2_1d_linear_linear_value(&mt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = mt_efOut[0];
  t2990 = (((1.0 - intrm_sf_mf_1660) - t2964) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_1660) + t2100_idx_0 * t2964;
  U_idx_1 = intrm_sf_mf_1704 - (-intrm_sf_mf_1704);
  intrm_sf_mf_1660 = ((t2912 - 1.01325) - (-intrm_sf_mf_1704)) / (U_idx_1 == 0.0
    ? 1.0E-16 : U_idx_1);
  t2964 = intrm_sf_mf_1660 * intrm_sf_mf_1660 * 3.0 - intrm_sf_mf_1660 *
    intrm_sf_mf_1660 * intrm_sf_mf_1660 * 2.0;
  if (t2912 - 1.01325 <= -intrm_sf_mf_1704) {
    intrm_sf_mf_1660 = 1.01325;
  } else if (t2912 - 1.01325 >= intrm_sf_mf_1704) {
    intrm_sf_mf_1660 = t2912;
  } else {
    intrm_sf_mf_1660 = (1.0 - t2964) * 1.01325 + t2912 * t2964;
  }

  if (U_idx_11 >= 1.0) {
    t2964 = 1.0;
  } else {
    t2964 = U_idx_11 <= 0.0 ? 0.0 : U_idx_11;
  }

  tlu2_2d_linear_linear_value(&nt_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = nt_efOut[0];
  intrm_sf_mf_1704 = t2086_idx_0;
  if (X[340ULL] <= 0.0) {
    t2999 = 0.0;
  } else {
    t2999 = X[340ULL] >= 1.0 ? 1.0 : X[340ULL];
  }

  if (X[339ULL] <= 0.0) {
    t3557 = 0.0;
  } else {
    t3557 = X[339ULL] >= 1.0 ? 1.0 : X[339ULL];
  }

  t3734 = (((1.0 - t2999) - t3557) * 296.802103844292 + t2999 * 461.523) + t3557
    * 259.836612622973;
  t3004 = X[44ULL] / (t3734 == 0.0 ? 1.0E-16 : t3734) / (X[338ULL] == 0.0 ?
    1.0E-16 : X[338ULL]);
  t3005 = X[62ULL] * X[477ULL] * 0.001 + t2970;
  if (X[129ULL] <= 0.0) {
    t2970 = 0.0;
  } else {
    t2970 = X[129ULL] >= 1.0 ? 1.0 : X[129ULL];
  }

  if (X[128ULL] <= 0.0) {
    t3006 = 0.0;
  } else {
    t3006 = X[128ULL] >= 1.0 ? 1.0 : X[128ULL];
  }

  U_idx_4 = (((1.0 - t2970) - t3006) * 296.802103844292 + t2970 * 461.523) +
    t3006 * 4124.48151675695;
  t2093[0ULL] = X[127ULL];
  tlu2_linear_linear_prelookup(&ot_efOut.mField0[0ULL], &ot_efOut.mField1[0ULL],
    &ot_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = ot_efOut;
  tlu2_1d_linear_linear_value(&pt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = pt_efOut[0];
  tlu2_1d_linear_linear_value(&qt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = qt_efOut[0];
  tlu2_1d_linear_linear_value(&rt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = rt_efOut[0];
  t3009 = (((1.0 - t2970) - t3006) * t2086_idx_0 + t2099_idx_0 * t2970) +
    t2100_idx_0 * t3006;
  t2093[0ULL] = X[170ULL];
  tlu2_linear_linear_prelookup(&st_efOut.mField0[0ULL], &st_efOut.mField1[0ULL],
    &st_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t47 = st_efOut;
  tlu2_1d_linear_linear_value(&tt_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = tt_efOut[0];
  tlu2_1d_linear_linear_value(&ut_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = ut_efOut[0];
  tlu2_1d_linear_linear_value(&vt_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = vt_efOut[0];
  t2970 = (((1.0 - t2291) - t2292) * t2086_idx_0 + t2099_idx_0 * t2291) +
    t2100_idx_0 * t2292;
  t2093[0ULL] = X[171ULL];
  tlu2_linear_linear_prelookup(&wt_efOut.mField0[0ULL], &wt_efOut.mField1[0ULL],
    &wt_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = wt_efOut;
  tlu2_1d_linear_linear_value(&xt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xt_efOut[0];
  tlu2_1d_linear_linear_value(&yt_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = yt_efOut[0];
  tlu2_1d_linear_linear_value(&au_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = au_efOut[0];
  t3006 = (((1.0 - t2291) - t2292) * t2086_idx_0 + t2099_idx_0 * t2291) +
    t2100_idx_0 * t2292;
  t2093[0ULL] = X[166ULL];
  tlu2_linear_linear_prelookup(&bu_efOut.mField0[0ULL], &bu_efOut.mField1[0ULL],
    &bu_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t138 = bu_efOut;
  tlu2_1d_linear_linear_value(&cu_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cu_efOut[0];
  tlu2_1d_linear_linear_value(&du_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = du_efOut[0];
  tlu2_1d_linear_linear_value(&eu_efOut[0ULL], &t138.mField0[0ULL],
    &t138.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = eu_efOut[0];
  t3010 = (((1.0 - t2291) - t2292) * t2086_idx_0 + t2099_idx_0 * t2291) +
    t2100_idx_0 * t2292;
  U_idx_1 = zc_int95 - (-zc_int95);
  t2291 = ((X[142ULL] - 1.01325) - (-zc_int95)) / (U_idx_1 == 0.0 ? 1.0E-16 :
    U_idx_1);
  t2292 = t2291 * t2291 * 3.0 - t2291 * t2291 * t2291 * 2.0;
  if (X[142ULL] - 1.01325 <= -zc_int95) {
    t2291 = 1.01325;
  } else if (X[142ULL] - 1.01325 >= zc_int95) {
    t2291 = X[142ULL];
  } else {
    t2291 = (1.0 - t2292) * 1.01325 + X[142ULL] * t2292;
  }

  t2292 = (X[66ULL] - 0.9) / 0.099999999999999978;
  t2093[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&fu_efOut.mField0[0ULL], &fu_efOut.mField1[0ULL],
    &fu_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = fu_efOut;
  tlu2_1d_linear_linear_value(&gu_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gu_efOut[0];
  tlu2_1d_linear_linear_value(&hu_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = hu_efOut[0];
  tlu2_1d_linear_linear_value(&iu_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = iu_efOut[0];
  zc_int95 = (((1.0 - t2331) - t2334) * t2086_idx_0 + t2099_idx_0 * t2331) +
    t2100_idx_0 * t2334;
  t2093[0ULL] = X[178ULL];
  tlu2_linear_linear_prelookup(&ju_efOut.mField0[0ULL], &ju_efOut.mField1[0ULL],
    &ju_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t131 = ju_efOut;
  tlu2_1d_linear_linear_value(&ku_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ku_efOut[0];
  tlu2_1d_linear_linear_value(&lu_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = lu_efOut[0];
  tlu2_1d_linear_linear_value(&mu_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = mu_efOut[0];
  t2331 = (((1.0 - intrm_sf_mf_202) - t2298) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_202) + t2100_idx_0 * t2298;
  t2093[0ULL] = X[181ULL];
  tlu2_linear_linear_prelookup(&nu_efOut.mField0[0ULL], &nu_efOut.mField1[0ULL],
    &nu_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t90 = nu_efOut;
  tlu2_1d_linear_linear_value(&ou_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = ou_efOut[0];
  tlu2_1d_linear_linear_value(&pu_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = pu_efOut[0];
  tlu2_1d_linear_linear_value(&qu_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = qu_efOut[0];
  t2334 = (((1.0 - intrm_sf_mf_202) - t2298) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_202) + t2100_idx_0 * t2298;
  t3644 = X[177ULL] >= 0.0 ? X[177ULL] : -X[177ULL];
  t3012 = t3644 * 0.01 / (t2383 == 0.0 ? 1.0E-16 : t2383);
  intrm_sf_mf_327 = t3012 >= 1.0 ? t3012 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (intrm_sf_mf_327 == 0.0 ? 1.0E-16 : intrm_sf_mf_327)
                      + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_327 == 0.0 ? 1.0E-16 : intrm_sf_mf_327) +
    0.00017169489553429715) * 3.24;
  t3014 = X[177ULL] * t2306 * 2.9973120849090416 / (t2387 == 0.0 ? 1.0E-16 :
    t2387);
  t3644 = X[177ULL] * t3644 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    0.046833001326703774 / (t2390 == 0.0 ? 1.0E-16 : t2390);
  intrm_sf_mf_327 = (t3012 - 2000.0) / 2000.0;
  U_idx_2 = intrm_sf_mf_327 * intrm_sf_mf_327 * 3.0 - intrm_sf_mf_327 *
    intrm_sf_mf_327 * intrm_sf_mf_327 * 2.0;
  if (t3012 <= 2000.0) {
    intrm_sf_mf_327 = t3014 * 9.9999999999999991E-11;
  } else if (t3012 >= 4000.0) {
    intrm_sf_mf_327 = t3644 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_327 = ((1.0 - U_idx_2) * t3014 + t3644 * U_idx_2) *
      9.9999999999999991E-11;
  }

  t3644 = X[180ULL] >= 0.0 ? X[180ULL] : -X[180ULL];
  t3012 = t3644 * 0.01 / (t2383 == 0.0 ? 1.0E-16 : t2383);
  t3014 = t3012 >= 1.0 ? t3012 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t3014 == 0.0 ? 1.0E-16 : t3014) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t3014 == 0.0 ?
    1.0E-16 : t3014) + 0.00017169489553429715) * 3.24;
  U_idx_2 = X[180ULL] * t2306 * 2.9973120849090416 / (t2387 == 0.0 ? 1.0E-16 :
    t2387);
  t3644 = X[180ULL] * t3644 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    0.046833001326703774 / (t2390 == 0.0 ? 1.0E-16 : t2390);
  t3014 = (t3012 - 2000.0) / 2000.0;
  U_idx_11 = t3014 * t3014 * 3.0 - t3014 * t3014 * t3014 * 2.0;
  if (t3012 <= 2000.0) {
    t3014 = U_idx_2 * 9.9999999999999991E-11;
  } else if (t3012 >= 4000.0) {
    t3014 = t3644 * 9.9999999999999991E-11;
  } else {
    t3014 = ((1.0 - U_idx_11) * U_idx_2 + t3644 * U_idx_11) *
      9.9999999999999991E-11;
  }

  t3644 = t2292 * t2292 * 3.0 - t2292 * t2292 * t2292 * 2.0;
  t2093[0ULL] = X[199ULL];
  tlu2_linear_linear_prelookup(&ru_efOut.mField0[0ULL], &ru_efOut.mField1[0ULL],
    &ru_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = ru_efOut;
  tlu2_1d_linear_linear_value(&su_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = su_efOut[0];
  tlu2_1d_linear_linear_value(&tu_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = tu_efOut[0];
  tlu2_1d_linear_linear_value(&uu_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = uu_efOut[0];
  t2292 = (((1.0 - intrm_sf_mf_339) - t2360) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_339) + t2100_idx_0 * t2360;
  t2093[0ULL] = X[202ULL];
  tlu2_linear_linear_prelookup(&vu_efOut.mField0[0ULL], &vu_efOut.mField1[0ULL],
    &vu_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t90 = vu_efOut;
  tlu2_1d_linear_linear_value(&wu_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = wu_efOut[0];
  tlu2_1d_linear_linear_value(&xu_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = xu_efOut[0];
  tlu2_1d_linear_linear_value(&yu_efOut[0ULL], &t90.mField0[0ULL], &t90.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = yu_efOut[0];
  t3012 = (((1.0 - intrm_sf_mf_339) - t2360) * t2086_idx_0 + t2099_idx_0 *
           intrm_sf_mf_339) + t2100_idx_0 * t2360;
  if (-X[180ULL] >= 0.0) {
    U_idx_2 = -X[180ULL];
  } else {
    U_idx_2 = X[180ULL];
  }

  U_idx_11 = U_idx_2 * 0.01 / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t3018 = U_idx_11 >= 1.0 ? U_idx_11 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t3018 == 0.0 ? 1.0E-16 : t3018) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t3018 == 0.0 ?
    1.0E-16 : t3018) + 0.00017169489553429715) * 3.24;
  t3019 = X[180ULL] * t2367 * -2.9973120849090416 / (t3626 == 0.0 ? 1.0E-16 :
    t3626);
  U_idx_2 = X[180ULL] * U_idx_2 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    -0.046833001326703774 / (t3633 == 0.0 ? 1.0E-16 : t3633);
  t3018 = (U_idx_11 - 2000.0) / 2000.0;
  U_idx_3 = t3018 * t3018 * 3.0 - t3018 * t3018 * t3018 * 2.0;
  if (U_idx_11 <= 2000.0) {
    t3018 = t3019 * 9.9999999999999991E-11;
  } else if (U_idx_11 >= 4000.0) {
    t3018 = U_idx_2 * 9.9999999999999991E-11;
  } else {
    t3018 = ((1.0 - U_idx_3) * t3019 + U_idx_2 * U_idx_3) *
      9.9999999999999991E-11;
  }

  U_idx_2 = X[201ULL] >= 0.0 ? X[201ULL] : -X[201ULL];
  U_idx_11 = U_idx_2 * 0.01 / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t3019 = U_idx_11 >= 1.0 ? U_idx_11 : 1.0;
  U_idx_0 = pmf_log10(6.9 / (t3019 == 0.0 ? 1.0E-16 : t3019) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t3019 == 0.0 ?
    1.0E-16 : t3019) + 0.00017169489553429715) * 3.24;
  U_idx_3 = X[201ULL] * t2367 * 2.9973120849090416 / (t3626 == 0.0 ? 1.0E-16 :
    t3626);
  U_idx_2 = X[201ULL] * U_idx_2 * (1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) *
    0.046833001326703774 / (t3633 == 0.0 ? 1.0E-16 : t3633);
  t3019 = (U_idx_11 - 2000.0) / 2000.0;
  t3579 = t3019 * t3019 * 3.0 - t3019 * t3019 * t3019 * 2.0;
  if (U_idx_11 <= 2000.0) {
    t3019 = U_idx_3 * 9.9999999999999991E-11;
  } else if (U_idx_11 >= 4000.0) {
    t3019 = U_idx_2 * 9.9999999999999991E-11;
  } else {
    t3019 = ((1.0 - t3579) * U_idx_3 + U_idx_2 * t3579) * 9.9999999999999991E-11;
  }

  U_idx_1 = (t2461 + t2446) / 2.0 * 0.002;
  t2461 = t3750 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  U_idx_2 = t2461 >= 0.0 ? t2461 : -t2461;
  U_idx_11 = U_idx_2 > 1000.0 ? U_idx_2 : 1000.0;
  t3750 = t2439 + intrm_sf_mf_502;
  if (t3750 / 2.0 > 0.5) {
    U_idx_3 = (t2439 + intrm_sf_mf_502) / 2.0;
  } else {
    U_idx_3 = 0.5;
  }

  U_idx_0 = pmf_log10(6.9 / (U_idx_11 == 0.0 ? 1.0E-16 : U_idx_11) +
                      0.00017169489553429715) * pmf_log10(6.9 / (U_idx_11 == 0.0
    ? 1.0E-16 : U_idx_11) + 0.00017169489553429715) * 3.24;
  t3579 = 1.0 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  U_idx_1 = (pmf_pow(U_idx_3, 0.66666666666666663) - 1.0) * pmf_sqrt(t3579 / 8.0)
    * 12.7 + 1.0;
  U_idx_11 = (U_idx_11 - 1000.0) * (t3579 / 8.0) * U_idx_3 / (U_idx_1 == 0.0 ?
    1.0E-16 : U_idx_1);
  U_idx_3 = (U_idx_2 - 2000.0) / 2000.0;
  t3579 = U_idx_3 * U_idx_3 * 3.0 - U_idx_3 * U_idx_3 * U_idx_3 * 2.0;
  if (U_idx_2 <= 2000.0) {
    U_idx_3 = 3.66;
  } else if (U_idx_2 >= 4000.0) {
    U_idx_3 = U_idx_11;
  } else {
    U_idx_3 = (1.0 - t3579) * 3.66 + U_idx_11 * t3579;
  }

  t3579 = t3750 / 2.0;
  if (U_idx_2 > U_idx_3 * 1.6063872509454251 / 0.002 / (t3579 == 0.0 ? 1.0E-16 :
       t3579) / 30.0) {
    U_idx_0 = (t2439 + intrm_sf_mf_502) / 2.0;
    U_idx_11 = U_idx_3 * 1.6063872509454251 / (U_idx_2 == 0.0 ? 1.0E-16 :
      U_idx_2) / 0.002 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  } else {
    U_idx_11 = 30.0;
  }

  t2439 = (X[18ULL] - X[224ULL]) * (1.0 - pmf_exp(-U_idx_11));
  t2459 = t2461 * 0.002 / 0.01 * (t3750 / 2.0) * ((t2459 + t2443) / 2.0) * t2439;
  t3579 = (zc_int138 + t2446) / 2.0 * 0.002;
  t2439 = -intrm_sf_mf_509 * 0.01 / (t3579 == 0.0 ? 1.0E-16 : t3579);
  intrm_sf_mf_509 = t2439 >= 0.0 ? t2439 : -t2439;
  t2461 = intrm_sf_mf_509 > 1000.0 ? intrm_sf_mf_509 : 1000.0;
  U_idx_11 = t2440 + intrm_sf_mf_502;
  if (U_idx_11 / 2.0 > 0.5) {
    zc_int138 = (t2440 + intrm_sf_mf_502) / 2.0;
  } else {
    zc_int138 = 0.5;
  }

  U_idx_3 = pmf_log10(6.9 / (t2461 == 0.0 ? 1.0E-16 : t2461) +
                      0.00017169489553429715) * pmf_log10(6.9 / (t2461 == 0.0 ?
    1.0E-16 : t2461) + 0.00017169489553429715) * 3.24;
  U_idx_2 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  t3579 = (pmf_pow(zc_int138, 0.66666666666666663) - 1.0) * pmf_sqrt(U_idx_2 /
    8.0) * 12.7 + 1.0;
  t2461 = (t2461 - 1000.0) * (U_idx_2 / 8.0) * zc_int138 / (t3579 == 0.0 ?
    1.0E-16 : t3579);
  zc_int138 = (intrm_sf_mf_509 - 2000.0) / 2000.0;
  U_idx_2 = zc_int138 * zc_int138 * 3.0 - zc_int138 * zc_int138 * zc_int138 *
    2.0;
  if (intrm_sf_mf_509 <= 2000.0) {
    zc_int138 = 3.66;
  } else if (intrm_sf_mf_509 >= 4000.0) {
    zc_int138 = t2461;
  } else {
    zc_int138 = (1.0 - U_idx_2) * 3.66 + t2461 * U_idx_2;
  }

  U_idx_2 = U_idx_11 / 2.0;
  if (intrm_sf_mf_509 > zc_int138 * 1.6063872509454251 / 0.002 / (U_idx_2 == 0.0
       ? 1.0E-16 : U_idx_2) / 30.0) {
    U_idx_1 = (t2440 + intrm_sf_mf_502) / 2.0;
    t2461 = zc_int138 * 1.6063872509454251 / (intrm_sf_mf_509 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_509) / 0.002 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  } else {
    t2461 = 30.0;
  }

  t2440 = (X[18ULL] - X[215ULL]) * (1.0 - pmf_exp(-t2461));
  t2439 = t2439 * 0.002 / 0.01 * (U_idx_11 / 2.0) * ((t2460 + t2443) / 2.0) *
    t2440;
  if (X[66ULL] <= 0.9) {
    t2440 = 0.0;
  } else {
    t2440 = X[66ULL] >= 1.0 ? 1.0 : t3644;
  }

  intrm_sf_mf_502 = (t2447 - -20.0) / 40.0;
  t2443 = intrm_sf_mf_502 * intrm_sf_mf_502 * 3.0 - intrm_sf_mf_502 *
    intrm_sf_mf_502 * intrm_sf_mf_502 * 2.0;
  if (t2447 <= -20.0) {
    intrm_sf_mf_502 = t2439 * 0.001;
  } else if (t2447 >= 20.0) {
    intrm_sf_mf_502 = t2459 * 0.001;
  } else {
    intrm_sf_mf_502 = ((1.0 - t2443) * t2439 + t2459 * t2443) * 0.001;
  }

  t2439 = X[228ULL] >= 0.0 ? X[228ULL] : -X[228ULL];
  t2443 = t2439 * 0.01 / (t3757 == 0.0 ? 1.0E-16 : t3757);
  intrm_sf_mf_509 = t2443 >= 1.0 ? t2443 : 1.0;
  t3644 = pmf_log10(6.9 / (intrm_sf_mf_509 == 0.0 ? 1.0E-16 : intrm_sf_mf_509) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_509 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_509) + 0.00017169489553429715) * 3.24;
  U_idx_2 = t2457 * 4.0000000000000003E-7;
  t2447 = X[228ULL] * t2446 * 67.455490037817 / (U_idx_2 == 0.0 ? 1.0E-16 :
    U_idx_2);
  U_idx_11 = t2457 * 8.0E-8;
  t2439 = X[228ULL] * t2439 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) *
    1.0539920318408906 / (U_idx_11 == 0.0 ? 1.0E-16 : U_idx_11);
  intrm_sf_mf_509 = (t2443 - 2000.0) / 2000.0;
  t2457 = intrm_sf_mf_509 * intrm_sf_mf_509 * 3.0 - intrm_sf_mf_509 *
    intrm_sf_mf_509 * intrm_sf_mf_509 * 2.0;
  if (t2443 <= 2000.0) {
    intrm_sf_mf_509 = t2447 * 1.0E-5;
  } else if (t2443 >= 4000.0) {
    intrm_sf_mf_509 = t2439 * 1.0E-5;
  } else {
    intrm_sf_mf_509 = ((1.0 - t2457) * t2447 + t2439 * t2457) * 1.0E-5;
  }

  t2439 = X[220ULL] >= 0.0 ? X[220ULL] : -X[220ULL];
  t2443 = t2439 * 0.01 / (t3757 == 0.0 ? 1.0E-16 : t3757);
  t2447 = t2443 >= 1.0 ? t2443 : 1.0;
  t3644 = pmf_log10(6.9 / (t2447 == 0.0 ? 1.0E-16 : t2447) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2447 == 0.0 ?
    1.0E-16 : t2447) + 0.00017169489553429715) * 3.24;
  t2446 = X[220ULL] * t2446 * 67.455490037817 / (U_idx_2 == 0.0 ? 1.0E-16 :
    U_idx_2);
  t2439 = X[220ULL] * t2439 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) *
    1.0539920318408906 / (U_idx_11 == 0.0 ? 1.0E-16 : U_idx_11);
  t2447 = (t2443 - 2000.0) / 2000.0;
  t2457 = t2447 * t2447 * 3.0 - t2447 * t2447 * t2447 * 2.0;
  if (t2443 <= 2000.0) {
    t2447 = t2446 * 1.0E-5;
  } else if (t2443 >= 4000.0) {
    t2447 = t2439 * 1.0E-5;
  } else {
    t2447 = ((1.0 - t2457) * t2446 + t2439 * t2457) * 1.0E-5;
  }

  U_idx_2 = (t2513 + t2496) / 2.0 * 0.00093750000000000007;
  t2439 = t3776 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  t2443 = t2439 >= 0.0 ? t2439 : -t2439;
  t2446 = t2443 > 1000.0 ? t2443 : 1000.0;
  t3644 = t2467 + t2486;
  if (t3644 / 2.0 > 0.5) {
    t2457 = (t2467 + t2486) / 2.0;
  } else {
    t2457 = 0.5;
  }

  U_idx_2 = pmf_log10(6.9 / (t2446 == 0.0 ? 1.0E-16 : t2446) +
                      0.00069701528436089772) * pmf_log10(6.9 / (t2446 == 0.0 ?
    1.0E-16 : t2446) + 0.00069701528436089772) * 3.24;
  t2459 = 1.0 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  U_idx_11 = (pmf_pow(t2457, 0.66666666666666663) - 1.0) * pmf_sqrt(t2459 / 8.0)
    * 12.7 + 1.0;
  t2446 = (t2446 - 1000.0) * (t2459 / 8.0) * t2457 / (U_idx_11 == 0.0 ? 1.0E-16 :
    U_idx_11);
  t2457 = (t2443 - 2000.0) / 2000.0;
  t2459 = t2457 * t2457 * 3.0 - t2457 * t2457 * t2457 * 2.0;
  if (t2443 <= 2000.0) {
    t2457 = 3.66;
  } else if (t2443 >= 4000.0) {
    t2457 = t2446;
  } else {
    t2457 = (1.0 - t2459) * 3.66 + t2446 * t2459;
  }

  U_idx_2 = t3644 / 2.0;
  if (t2443 > t2457 * 1.3250000000000002 / 0.00093750000000000007 / (U_idx_2 ==
       0.0 ? 1.0E-16 : U_idx_2) / 30.0) {
    t3757 = (t2467 + t2486) / 2.0;
    t2446 = t2457 * 1.3250000000000002 / (t2443 == 0.0 ? 1.0E-16 : t2443) /
      0.00093750000000000007 / (t3757 == 0.0 ? 1.0E-16 : t3757);
  } else {
    t2446 = 30.0;
  }

  t2443 = (X[31ULL] - X[235ULL]) * (1.0 - pmf_exp(-t2446));
  t2439 = t2439 * 0.00093750000000000007 / 0.0028301886792452828 * (t3644 / 2.0)
    * ((t2511 + t2491) / 2.0) * t2443;
  U_idx_11 = (piece307 + t2496) / 2.0 * 0.00093750000000000007;
  t2443 = -t2494 * 0.0028301886792452828 / (U_idx_11 == 0.0 ? 1.0E-16 : U_idx_11);
  t2446 = t2443 >= 0.0 ? t2443 : -t2443;
  t2457 = t2446 > 1000.0 ? t2446 : 1000.0;
  t3644 = zc_int15 + t2486;
  if (t3644 / 2.0 > 0.5) {
    t2459 = (zc_int15 + t2486) / 2.0;
  } else {
    t2459 = 0.5;
  }

  U_idx_2 = pmf_log10(6.9 / (t2457 == 0.0 ? 1.0E-16 : t2457) +
                      0.00069701528436089772) * pmf_log10(6.9 / (t2457 == 0.0 ?
    1.0E-16 : t2457) + 0.00069701528436089772) * 3.24;
  t2460 = 1.0 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  U_idx_11 = (pmf_pow(t2459, 0.66666666666666663) - 1.0) * pmf_sqrt(t2460 / 8.0)
    * 12.7 + 1.0;
  t2457 = (t2457 - 1000.0) * (t2460 / 8.0) * t2459 / (U_idx_11 == 0.0 ? 1.0E-16 :
    U_idx_11);
  t2459 = (t2446 - 2000.0) / 2000.0;
  t2460 = t2459 * t2459 * 3.0 - t2459 * t2459 * t2459 * 2.0;
  if (t2446 <= 2000.0) {
    t2459 = 3.66;
  } else if (t2446 >= 4000.0) {
    t2459 = t2457;
  } else {
    t2459 = (1.0 - t2460) * 3.66 + t2457 * t2460;
  }

  U_idx_2 = t3644 / 2.0;
  if (t2446 > t2459 * 1.3250000000000002 / 0.00093750000000000007 / (U_idx_2 ==
       0.0 ? 1.0E-16 : U_idx_2) / 30.0) {
    t3757 = (zc_int15 + t2486) / 2.0;
    t2457 = t2459 * 1.3250000000000002 / (t2446 == 0.0 ? 1.0E-16 : t2446) /
      0.00093750000000000007 / (t3757 == 0.0 ? 1.0E-16 : t3757);
  } else {
    t2457 = 30.0;
  }

  t2446 = (X[31ULL] - X[222ULL]) * (1.0 - pmf_exp(-t2457));
  t2443 = t2443 * 0.00093750000000000007 / 0.0028301886792452828 * (t3644 / 2.0)
    * ((intrm_sf_mf_838 + t2491) / 2.0) * t2446;
  t2446 = (intrm_sf_mf_791 - -20.0) / 40.0;
  t2457 = t2446 * t2446 * 3.0 - t2446 * t2446 * t2446 * 2.0;
  if (intrm_sf_mf_791 <= -20.0) {
    t2446 = t2443 * 0.001;
  } else if (intrm_sf_mf_791 >= 20.0) {
    t2446 = t2439 * 0.001;
  } else {
    t2446 = ((1.0 - t2457) * t2443 + t2439 * t2457) * 0.001;
  }

  t2439 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 >= 0.0
    ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 :
    -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0;
  t2443 = t2439 * 0.0028301886792452828 / (t3779 == 0.0 ? 1.0E-16 : t3779);
  t2457 = t2443 >= 1.0 ? t2443 : 1.0;
  t3644 = pmf_log10(6.9 / (t2457 == 0.0 ? 1.0E-16 : t2457) +
                    0.00069701528436089772) * pmf_log10(6.9 / (t2457 == 0.0 ?
    1.0E-16 : t2457) + 0.00069701528436089772) * 3.24;
  U_idx_2 = intrm_sf_mf_800 * 1.50186899252403E-8;
  t2459 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 *
    t2496 * 112.0 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  U_idx_11 = intrm_sf_mf_800 * 4.97494103773585E-9;
  t2439 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 *
    t2439 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) * 1.75 / (U_idx_11 == 0.0 ?
    1.0E-16 : U_idx_11);
  t2457 = (t2443 - 2000.0) / 2000.0;
  t2460 = t2457 * t2457 * 3.0 - t2457 * t2457 * t2457 * 2.0;
  if (t2443 <= 2000.0) {
    t2457 = t2459 * 1.0E-5;
  } else if (t2443 >= 4000.0) {
    t2457 = t2439 * 1.0E-5;
  } else {
    t2457 = ((1.0 - t2460) * t2459 + t2439 * t2460) * 1.0E-5;
  }

  if (-X[228ULL] >= 0.0) {
    t2439 = -X[228ULL];
  } else {
    t2439 = X[228ULL];
  }

  t2443 = t2439 * 0.0028301886792452828 / (t3779 == 0.0 ? 1.0E-16 : t3779);
  t2459 = t2443 >= 1.0 ? t2443 : 1.0;
  t3644 = pmf_log10(6.9 / (t2459 == 0.0 ? 1.0E-16 : t2459) +
                    0.00069701528436089772) * pmf_log10(6.9 / (t2459 == 0.0 ?
    1.0E-16 : t2459) + 0.00069701528436089772) * 3.24;
  t2460 = X[228ULL] * t2496 * -112.0 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  t2439 = X[228ULL] * t2439 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) * -1.75 /
    (U_idx_11 == 0.0 ? 1.0E-16 : U_idx_11);
  t2459 = (t2443 - 2000.0) / 2000.0;
  t2461 = t2459 * t2459 * 3.0 - t2459 * t2459 * t2459 * 2.0;
  if (t2443 <= 2000.0) {
    t2459 = t2460 * 1.0E-5;
  } else if (t2443 >= 4000.0) {
    t2459 = t2439 * 1.0E-5;
  } else {
    t2459 = ((1.0 - t2461) * t2460 + t2439 * t2461) * 1.0E-5;
  }

  t2093[0ULL] = X[246ULL];
  tlu2_linear_linear_prelookup(&av_efOut.mField0[0ULL], &av_efOut.mField1[0ULL],
    &av_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = av_efOut;
  tlu2_1d_linear_linear_value(&bv_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = bv_efOut[0];
  tlu2_1d_linear_linear_value(&cv_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = cv_efOut[0];
  tlu2_1d_linear_linear_value(&dv_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = dv_efOut[0];
  t2439 = (((1.0 - piece313) - zc_int0) * t2086_idx_0 + t2099_idx_0 * piece313)
    + t2100_idx_0 * zc_int0;
  if (X[254ULL] <= 0.0) {
    t2443 = 0.0;
  } else {
    t2443 = X[254ULL] >= 1.0 ? 1.0 : X[254ULL];
  }

  if (X[253ULL] <= 0.0) {
    t2460 = 0.0;
  } else {
    t2460 = X[253ULL] >= 1.0 ? 1.0 : X[253ULL];
  }

  t2461 = (((1.0 - t2443) - t2460) * 296.802103844292 + t2443 * 461.523) + t2460
    * 4124.48151675695;
  t2093[0ULL] = X[252ULL];
  tlu2_linear_linear_prelookup(&ev_efOut.mField0[0ULL], &ev_efOut.mField1[0ULL],
    &ev_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t132 = ev_efOut;
  tlu2_1d_linear_linear_value(&fv_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fv_efOut[0];
  tlu2_1d_linear_linear_value(&gv_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gv_efOut[0];
  tlu2_1d_linear_linear_value(&hv_efOut[0ULL], &t132.mField0[0ULL],
    &t132.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hv_efOut[0];
  zc_int138 = (((1.0 - t2443) - t2460) * t2086_idx_0 + t2099_idx_0 * t2443) +
    t2100_idx_0 * t2460;
  tlu2_1d_linear_linear_value(&iv_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = iv_efOut[0];
  tlu2_1d_linear_linear_value(&jv_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = jv_efOut[0];
  tlu2_1d_linear_linear_value(&kv_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField35, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = kv_efOut[0];
  t2443 = (((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
    t2100_idx_0 * t2543;
  tlu2_1d_linear_linear_value(&lv_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = lv_efOut[0];
  tlu2_1d_linear_linear_value(&mv_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = mv_efOut[0];
  tlu2_1d_linear_linear_value(&nv_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField35, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = nv_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 = ((((((1.0 -
    t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) + t2100_idx_0 * t2543)
    - pmf_log(X[33ULL] * 100000.0) * t2544) - t2443) + pmf_log(X[123ULL] *
    100000.0) * t2544;
  tlu2_1d_linear_linear_value(&ov_efOut[0ULL], &t107.mField0[0ULL],
    &t107.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ov_efOut[0];
  tlu2_1d_linear_linear_value(&pv_efOut[0ULL], &t107.mField0[0ULL],
    &t107.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = pv_efOut[0];
  tlu2_1d_linear_linear_value(&qv_efOut[0ULL], &t107.mField0[0ULL],
    &t107.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField35, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = qv_efOut[0];
  t2443 = (((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
    t2100_idx_0 * t2543;
  tlu2_1d_linear_linear_value(&rv_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = rv_efOut[0];
  tlu2_1d_linear_linear_value(&sv_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = sv_efOut[0];
  tlu2_1d_linear_linear_value(&tv_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField35, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = tv_efOut[0];
  t2467 = ((((((1.0 - t2515) - t2543) * t2086_idx_0 + t2099_idx_0 * t2515) +
             t2100_idx_0 * t2543) - pmf_log(X[123ULL] * 100000.0) * t2544) -
           t2443) + pmf_log(X[33ULL] * 100000.0) * t2544;
  if (X[286ULL] <= 0.0) {
    t2443 = 0.0;
  } else {
    t2443 = X[286ULL] >= 1.0 ? 1.0 : X[286ULL];
  }

  if (X[285ULL] <= 0.0) {
    t2460 = 0.0;
  } else {
    t2460 = X[285ULL] >= 1.0 ? 1.0 : X[285ULL];
  }

  zc_int15 = (((1.0 - t2443) - t2460) * 296.802103844292 + t2443 * 461.523) +
    t2460 * 4124.48151675695;
  t2093[0ULL] = X[284ULL];
  tlu2_linear_linear_prelookup(&uv_efOut.mField0[0ULL], &uv_efOut.mField1[0ULL],
    &uv_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = uv_efOut;
  tlu2_1d_linear_linear_value(&vv_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vv_efOut[0];
  tlu2_1d_linear_linear_value(&wv_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = wv_efOut[0];
  tlu2_1d_linear_linear_value(&xv_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = xv_efOut[0];
  t2486 = (((1.0 - t2443) - t2460) * t2086_idx_0 + t2099_idx_0 * t2443) +
    t2100_idx_0 * t2460;
  t2093[0ULL] = X[299ULL];
  tlu2_linear_linear_prelookup(&yv_efOut.mField0[0ULL], &yv_efOut.mField1[0ULL],
    &yv_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = yv_efOut;
  tlu2_1d_linear_linear_value(&aw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = aw_efOut[0];
  tlu2_1d_linear_linear_value(&bw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = bw_efOut[0];
  tlu2_1d_linear_linear_value(&cw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = cw_efOut[0];
  t2443 = (((1.0 - zc_int335) - t2613) * t2086_idx_0 + t2099_idx_0 * zc_int335)
    + t2100_idx_0 * t2613;
  t2093[0ULL] = X[303ULL];
  tlu2_linear_linear_prelookup(&dw_efOut.mField0[0ULL], &dw_efOut.mField1[0ULL],
    &dw_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t12 = dw_efOut;
  tlu2_1d_linear_linear_value(&ew_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL], &t170[0ULL]);
  t2086_idx_0 = ew_efOut[0];
  tlu2_1d_linear_linear_value(&fw_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL], &t170[0ULL]);
  t2099_idx_0 = fw_efOut[0];
  tlu2_1d_linear_linear_value(&gw_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2100_idx_0 = gw_efOut[0];
  t2460 = (((1.0 - t2550) - t2574) * t2086_idx_0 + t2099_idx_0 * t2550) +
    t2100_idx_0 * t2574;
  t2093[0ULL] = X[307ULL];
  tlu2_linear_linear_prelookup(&hw_efOut.mField0[0ULL], &hw_efOut.mField1[0ULL],
    &hw_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = hw_efOut;
  tlu2_1d_linear_linear_value(&iw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = iw_efOut[0];
  tlu2_1d_linear_linear_value(&jw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = jw_efOut[0];
  tlu2_1d_linear_linear_value(&kw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = kw_efOut[0];
  t2491 = (((1.0 - t2550) - t2574) * t2086_idx_0 + t2099_idx_0 * t2550) +
    t2100_idx_0 * t2574;
  if (-X[293ULL] >= 0.0) {
    t2494 = -X[293ULL];
  } else {
    t2494 = X[293ULL];
  }

  t2496 = t2494 * 0.01 / (t3798 == 0.0 ? 1.0E-16 : t3798);
  intrm_sf_mf_791 = t2496 >= 1.0 ? t2496 : 1.0;
  t3644 = pmf_log10(6.9 / (intrm_sf_mf_791 == 0.0 ? 1.0E-16 : intrm_sf_mf_791) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_791 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_791) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_800 = X[293ULL] * t2587 * -35.2 / (t3813 == 0.0 ? 1.0E-16 : t3813);
  t2494 = X[293ULL] * t2494 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) * -0.55 /
    (t2647 == 0.0 ? 1.0E-16 : t2647);
  intrm_sf_mf_791 = (t2496 - 2000.0) / 2000.0;
  t2511 = intrm_sf_mf_791 * intrm_sf_mf_791 * 3.0 - intrm_sf_mf_791 *
    intrm_sf_mf_791 * intrm_sf_mf_791 * 2.0;
  if (t2496 <= 2000.0) {
    intrm_sf_mf_791 = intrm_sf_mf_800 * 9.9999999999999991E-11;
  } else if (t2496 >= 4000.0) {
    intrm_sf_mf_791 = t2494 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_791 = ((1.0 - t2511) * intrm_sf_mf_800 + t2494 * t2511) *
      9.9999999999999991E-11;
  }

  if (-X[263ULL] >= 0.0) {
    t2494 = -X[263ULL];
  } else {
    t2494 = X[263ULL];
  }

  t2496 = t2494 * 0.01 / (t3798 == 0.0 ? 1.0E-16 : t3798);
  intrm_sf_mf_800 = t2496 >= 1.0 ? t2496 : 1.0;
  t3644 = pmf_log10(6.9 / (intrm_sf_mf_800 == 0.0 ? 1.0E-16 : intrm_sf_mf_800) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_800 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_800) + 0.00017169489553429715) * 3.24;
  t2511 = X[263ULL] * t2587 * -35.2 / (t3813 == 0.0 ? 1.0E-16 : t3813);
  t2494 = X[263ULL] * t2494 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) * -0.55 /
    (t2647 == 0.0 ? 1.0E-16 : t2647);
  intrm_sf_mf_800 = (t2496 - 2000.0) / 2000.0;
  intrm_sf_mf_838 = intrm_sf_mf_800 * intrm_sf_mf_800 * 3.0 - intrm_sf_mf_800 *
    intrm_sf_mf_800 * intrm_sf_mf_800 * 2.0;
  if (t2496 <= 2000.0) {
    intrm_sf_mf_800 = t2511 * 9.9999999999999991E-11;
  } else if (t2496 >= 4000.0) {
    intrm_sf_mf_800 = t2494 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_800 = ((1.0 - intrm_sf_mf_838) * t2511 + t2494 * intrm_sf_mf_838)
      * 9.9999999999999991E-11;
  }

  t2093[0ULL] = X[321ULL];
  tlu2_linear_linear_prelookup(&lw_efOut.mField0[0ULL], &lw_efOut.mField1[0ULL],
    &lw_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = lw_efOut;
  tlu2_1d_linear_linear_value(&mw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = mw_efOut[0];
  tlu2_1d_linear_linear_value(&nw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = nw_efOut[0];
  tlu2_1d_linear_linear_value(&ow_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ow_efOut[0];
  t2494 = (((1.0 - t2643) - t2645) * t2086_idx_0 + t2099_idx_0 * t2643) +
    t2100_idx_0 * t2645;
  t2093[0ULL] = X[322ULL];
  tlu2_linear_linear_prelookup(&pw_efOut.mField0[0ULL], &pw_efOut.mField1[0ULL],
    &pw_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = pw_efOut;
  tlu2_1d_linear_linear_value(&qw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = qw_efOut[0];
  tlu2_1d_linear_linear_value(&rw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = rw_efOut[0];
  tlu2_1d_linear_linear_value(&sw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = sw_efOut[0];
  t2496 = (((1.0 - t2643) - t2645) * t2086_idx_0 + t2099_idx_0 * t2643) +
    t2100_idx_0 * t2645;
  t2093[0ULL] = X[317ULL];
  tlu2_linear_linear_prelookup(&tw_efOut.mField0[0ULL], &tw_efOut.mField1[0ULL],
    &tw_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = tw_efOut;
  tlu2_1d_linear_linear_value(&uw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = uw_efOut[0];
  tlu2_1d_linear_linear_value(&vw_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = vw_efOut[0];
  tlu2_1d_linear_linear_value(&ww_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ww_efOut[0];
  t2511 = (((1.0 - t2643) - t2645) * t2086_idx_0 + t2099_idx_0 * t2643) +
    t2100_idx_0 * t2645;
  U_idx_2 = zc_int319 - (-zc_int319);
  intrm_sf_mf_838 = ((X[37ULL] - X[300ULL]) - (-zc_int319)) / (U_idx_2 == 0.0 ?
    1.0E-16 : U_idx_2);
  t2513 = intrm_sf_mf_838 * intrm_sf_mf_838 * 3.0 - intrm_sf_mf_838 *
    intrm_sf_mf_838 * intrm_sf_mf_838 * 2.0;
  if (X[37ULL] - X[300ULL] <= -zc_int319) {
    intrm_sf_mf_838 = X[300ULL];
  } else if (X[37ULL] - X[300ULL] >= zc_int319) {
    intrm_sf_mf_838 = X[37ULL];
  } else {
    intrm_sf_mf_838 = (1.0 - t2513) * X[300ULL] + X[37ULL] * t2513;
  }

  if (X[326ULL] <= 0.0) {
    t2513 = 0.0;
  } else {
    t2513 = X[326ULL] >= 1.0 ? 1.0 : X[326ULL];
  }

  if (X[325ULL] <= 0.0) {
    piece307 = 0.0;
  } else {
    piece307 = X[325ULL] >= 1.0 ? 1.0 : X[325ULL];
  }

  t2515 = (((1.0 - t2513) - piece307) * 296.802103844292 + t2513 * 461.523) +
    piece307 * 259.836612622973;
  t2093[0ULL] = X[324ULL];
  tlu2_linear_linear_prelookup(&xw_efOut.mField0[0ULL], &xw_efOut.mField1[0ULL],
    &xw_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t103 = xw_efOut;
  tlu2_1d_linear_linear_value(&yw_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = yw_efOut[0];
  tlu2_1d_linear_linear_value(&ax_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = ax_efOut[0];
  tlu2_1d_linear_linear_value(&bx_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = bx_efOut[0];
  t2543 = (((1.0 - t2513) - piece307) * t2086_idx_0 + t2099_idx_0 * t2513) +
    t2100_idx_0 * piece307;
  tlu2_1d_linear_linear_value(&cx_efOut[0ULL], &t128.mField0[0ULL],
    &t128.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cx_efOut[0];
  tlu2_1d_linear_linear_value(&dx_efOut[0ULL], &t128.mField0[0ULL],
    &t128.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = dx_efOut[0];
  tlu2_1d_linear_linear_value(&ex_efOut[0ULL], &t128.mField0[0ULL],
    &t128.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField36, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ex_efOut[0];
  t2513 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  tlu2_1d_linear_linear_value(&fx_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = fx_efOut[0];
  tlu2_1d_linear_linear_value(&gx_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = gx_efOut[0];
  tlu2_1d_linear_linear_value(&hx_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField36, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = hx_efOut[0];
  piece307 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  t2093[0ULL] = X[338ULL];
  tlu2_linear_linear_prelookup(&ix_efOut.mField0[0ULL], &ix_efOut.mField1[0ULL],
    &ix_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t120 = ix_efOut;
  tlu2_1d_linear_linear_value(&jx_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = jx_efOut[0];
  tlu2_1d_linear_linear_value(&kx_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = kx_efOut[0];
  tlu2_1d_linear_linear_value(&lx_efOut[0ULL], &t120.mField0[0ULL],
    &t120.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = lx_efOut[0];
  zc_int335 = (((1.0 - t2999) - t3557) * t2086_idx_0 + t2099_idx_0 * t2999) +
    t2100_idx_0 * t3557;
  tlu2_1d_linear_linear_value(&mx_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = mx_efOut[0];
  tlu2_1d_linear_linear_value(&nx_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = nx_efOut[0];
  tlu2_1d_linear_linear_value(&ox_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField36, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = ox_efOut[0];
  t2613 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  tlu2_1d_linear_linear_value(&px_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField33, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = px_efOut[0];
  tlu2_1d_linear_linear_value(&qx_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField34, &t1563[0ULL],
    &t170[0ULL]);
  t2099_idx_0 = qx_efOut[0];
  tlu2_1d_linear_linear_value(&rx_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField36, &t1563[0ULL],
    &t170[0ULL]);
  t2100_idx_0 = rx_efOut[0];
  piece313 = (((1.0 - t2668) - t2669) * t2086_idx_0 + t2099_idx_0 * t2668) +
    t2100_idx_0 * t2669;
  if (M[1ULL] != 0) {
    t2085[0ULL] = 0ULL;
    for (t2107 = 0ULL; t2107 < 42ULL; t2107++) {
      t2108 = t2107 / 42ULL;
      t2109 = (t2107 - t2107 % 42ULL) + t2085[t2108 > 0ULL ? 0ULL : t2108];
      if (((_NeDynamicSystem*)(LC))->mField0[t2107] * 1.0E-5 <
          ((_NeDynamicSystem*)(LC))->mField0[t2109 > 41ULL ? 41ULL : t2109] *
          1.0E-5) {
        t2085[t2108 > 0ULL ? 0ULL : t2108] = t2107 % 42ULL;
      }
    }

    t2107 = t2085[0ULL];
    t2643 = ((_NeDynamicSystem*)(LC))->mField0[t2107 > 41ULL ? 41ULL : t2107] *
      1.0E-5;
  } else {
    t2643 = X[65ULL];
  }

  if (M[214ULL] != 0) {
    t2645 = 216.59999999999997;
  } else {
    t2645 = M[224ULL] != 0 ? 623.15 : X[18ULL];
  }

  zc_int319 = -pmf_sqrt(((real_T)(M[204ULL] != 0) * 2.0 - 1.0) * (t3619 / (t2361
    == 0.0 ? 1.0E-16 : t2361) / (X[199ULL] == 0.0 ? 1.0E-16 : X[199ULL]))) *
    0.32;
  if (zc_int12 >= 0.0) {
    t2999 = zc_int319 * 100000.0;
  } else {
    t2999 = -zc_int319 * 100000.0;
  }

  zc_int12 = t2999 * 0.01 / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t3557 = zc_int128 >= 1.0 ? zc_int12 : 1.0;
  t3644 = pmf_log10(6.9 / (t3557 == 0.0 ? 1.0E-16 : t3557) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t3557 == 0.0 ?
    1.0E-16 : t3557) + 0.00017169489553429715) * 3.24;
  t2999 = t2999 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) * zc_int319 *
    0.046833001326703774 / (t3633 == 0.0 ? 1.0E-16 : t3633);
  zc_int12 = (zc_int12 - 2000.0) / 2000.0;
  t3557 = zc_int12 * zc_int12 * 3.0 - zc_int12 * zc_int12 * zc_int12 * 2.0;
  zc_int12 = t2367 * zc_int319 * 2.9973120849090416 / (t3626 == 0.0 ? 1.0E-16 :
    t3626);
  if (zc_int128 <= 2000.0) {
    zc_int319 = zc_int12 * 1.0E-5;
  } else if (zc_int128 >= 4000.0) {
    zc_int319 = t2999 * 1.0E-5;
  } else {
    zc_int319 = ((1.0 - t3557) * zc_int12 + t2999 * t3557) * 1.0E-5;
  }

  zc_int12 = pmf_sqrt(t2362 * t2362 * 9.999999999999999E-14 + ((real_T)(M[202ULL]
    != 0) * 2.0 - 1.0) * X[199ULL] * t2363 * t2361 * 1.0E-9);
  t2999 = -(X[180ULL] * zc_int12);
  t2362 = t2999 / 0.32 * 0.00031622776601683789 + zc_int319;
  t3644 = -t2362 - t2362 * -0.95;
  t2363 = (-t2370 - t2362 * -0.95) / (t3644 == 0.0 ? 1.0E-16 : t3644);
  zc_int128 = t2363 * t2363 * 3.0 - t2363 * t2363 * t2363 * 2.0;
  if (-t2370 <= t155 * -0.95) {
    t2363 = t2370;
  } else if (-t2370 >= -t155) {
    t2363 = t2362;
  } else {
    t2363 = (1.0 - zc_int128) * t2370 + t2362 * zc_int128;
  }

  t2362 = -pmf_sqrt(((real_T)(M[206ULL] != 0) * 2.0 - 1.0) * (t3693 / (t2361 ==
    0.0 ? 1.0E-16 : t2361) / (X[202ULL] == 0.0 ? 1.0E-16 : X[202ULL]))) * 0.32;
  t155 = t2367 * t2362 * 2.9973120849090416 / (t3626 == 0.0 ? 1.0E-16 : t3626);
  if (t2386 >= 0.0) {
    t2367 = t2362 * 100000.0;
  } else {
    t2367 = -t2362 * 100000.0;
  }

  zc_int128 = t2367 * 0.01 / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t2386 = t2389 >= 1.0 ? zc_int128 : 1.0;
  t3557 = pmf_log10(6.9 / (t2386 == 0.0 ? 1.0E-16 : t2386) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2386 == 0.0 ?
    1.0E-16 : t2386) + 0.00017169489553429715) * 3.24;
  t2362 = t2362 * t2367 * (1.0 / (t3557 == 0.0 ? 1.0E-16 : t3557)) *
    0.046833001326703774 / (t3633 == 0.0 ? 1.0E-16 : t3633);
  t2367 = (zc_int128 - 2000.0) / 2000.0;
  t2093[0ULL] = X[116ULL] >= 0.0 ? t2645 : X[15ULL];
  tlu2_linear_linear_prelookup(&sx_efOut.mField0[0ULL], &sx_efOut.mField1[0ULL],
    &sx_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = sx_efOut;
  tlu2_1d_linear_linear_value(&tx_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = tx_efOut[0];
  zc_int12 = t2086_idx_0;
  zc_int128 = t2367 * t2367 * 3.0 - t2367 * t2367 * t2367 * 2.0;
  if (t2389 <= 2000.0) {
    t2367 = t155 * 1.0E-5;
  } else if (t2389 >= 4000.0) {
    t2367 = t2362 * 1.0E-5;
  } else {
    t2367 = ((1.0 - zc_int128) * t155 + t2362 * zc_int128) * 1.0E-5;
  }

  t2362 = pmf_sqrt(zc_int130 * zc_int130 * 9.999999999999999E-14 + ((real_T)(M
    [203ULL] != 0) * 2.0 - 1.0) * X[202ULL] * t2380 * t2361 * 1.0E-9);
  t3557 = X[201ULL] * t2362;
  t2362 = t3557 / 0.32 * 0.00031622776601683789 + t2367;
  U_idx_2 = -t2362 - t2362 * -0.95;
  t155 = (-t2388 - t2362 * -0.95) / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2);
  t2367 = t155 * t155 * 3.0 - t155 * t155 * t155 * 2.0;
  if (-t2388 <= t2382 * -0.95) {
    t155 = t2388;
  } else if (-t2388 >= -t2382) {
    t155 = t2362;
  } else {
    t155 = (1.0 - t2367) * t2388 + t2362 * t2367;
  }

  t3644 = X[246ULL] * zc_int257;
  t2362 = ((real_T)(M[210ULL] != 0) * 2.0 - 1.0) * (t3644 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (t3644 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (X[263ULL] / 7.8539816339744827E-5) * (X[263ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t2439;
  U_idx_11 = X[252ULL] * t2461;
  t2367 = ((real_T)(M[211ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (U_idx_11 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (t2527 / 7.8539816339744827E-5) * (t2527 / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + zc_int138;
  U_idx_3 = X[249ULL] * t3576;
  zc_int128 = ((real_T)(M[212ULL] != 0) * 2.0 - 1.0) * (U_idx_3 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL])) * (U_idx_3 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]))
    * (X[272ULL] / 7.8539816339744827E-5) * (X[272ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t3753;
  t3579 = X[122ULL] * zc_int129;
  zc_int130 = ((real_T)(M[211ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL])) * (U_idx_11 / (X[33ULL] == 0.0 ? 1.0E-16 : X
    [33ULL])) * (-t2527 / 7.8539816339744827E-5) * (-t2527 /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int138;
  U_idx_11 = X[280ULL] * t2544;
  t2380 = ((real_T)(M[215ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (U_idx_11 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (t2527 / 7.8539816339744827E-5) * (t2527 / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t2546;
  U_idx_11 = X[277ULL] * t2544;
  t2382 = ((real_T)(M[216ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[123ULL] == 0.0
    ? 1.0E-16 : X[123ULL])) * (U_idx_11 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]))
    * (t2527 / 7.8539816339744827E-5) * (t2527 / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t161;
  U_idx_11 = X[279ULL] * t2544;
  t2386 = ((real_T)(M[217ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[123ULL] == 0.0
    ? 1.0E-16 : X[123ULL])) * (U_idx_11 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]))
    * (-t2527 / 7.8539816339744827E-5) * (-t2527 / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t162;
  U_idx_11 = X[278ULL] * t2544;
  if (t2527 >= 0.0) {
    t2461 = (t2380 - t2382) * t2527;
  } else {
    t2461 = -((t2386 - (((real_T)(M[218ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X
      [33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) * (U_idx_11 / (X[33ULL] == 0.0 ?
      1.0E-16 : X[33ULL])) * (-t2527 / 7.8539816339744827E-5) * (-t2527 /
      7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2548)) * t2527);
  }

  U_idx_11 = X[284ULL] * zc_int15;
  t2382 = ((real_T)(M[219ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[37ULL] == 0.0 ?
    1.0E-16 : X[37ULL])) * (U_idx_11 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL])) *
    (X[293ULL] / 7.8539816339744827E-5) * (X[293ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t2486;
  t3688 = X[299ULL] * t2616;
  t2389 = ((real_T)(M[221ULL] != 0) * 2.0 - 1.0) * (t3688 / (X[300ULL] == 0.0 ?
    1.0E-16 : X[300ULL])) * (t3688 / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL])) *
    (-X[293ULL] / 7.8539816339744827E-5) * (-X[293ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t2443;
  zc_int138 = ((real_T)(M[210ULL] != 0) * 2.0 - 1.0) * (t3644 / (X[33ULL] == 0.0
    ? 1.0E-16 : X[33ULL])) * (t3644 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (-X[263ULL] / 7.8539816339744827E-5) * (-X[263ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t2439;
  t2439 = pmf_sqrt(t2579 * t2579 * 9.999999999999999E-14 + ((real_T)(M[222ULL]
    != 0) * 2.0 - 1.0) * X[303ULL] * t2581 * t2575 * 1.0E-9);
  t2544 = pmf_sqrt(t2593 * t2593 * 9.999999999999999E-14 + ((real_T)(M[223ULL]
    != 0) * 2.0 - 1.0) * X[307ULL] * t2594 * t2575 * 1.0E-9);
  t161 = -pmf_sqrt(((real_T)(M[225ULL] != 0) * 2.0 - 1.0) * (t3797 / (t2575 ==
    0.0 ? 1.0E-16 : t2575) / (X[303ULL] == 0.0 ? 1.0E-16 : X[303ULL]))) *
    7.8539816339744827E-5;
  t2546 = t2587 * t161 * 35.2 / (t3813 == 0.0 ? 1.0E-16 : t3813);
  if (t2589 >= 0.0) {
    t2548 = t161 * 100000.0;
  } else {
    t2548 = -t161 * 100000.0;
  }

  t162 = t2548 * 0.01 / (t3798 == 0.0 ? 1.0E-16 : t3798);
  t2579 = zc_int191 >= 1.0 ? t162 : 1.0;
  t3644 = pmf_log10(6.9 / (t2579 == 0.0 ? 1.0E-16 : t2579) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2579 == 0.0 ?
    1.0E-16 : t2579) + 0.00017169489553429715) * 3.24;
  t161 = t161 * t2548 * (1.0 / (t3644 == 0.0 ? 1.0E-16 : t3644)) * 0.55 / (t2647
    == 0.0 ? 1.0E-16 : t2647);
  t2548 = (t162 - 2000.0) / 2000.0;
  t162 = t2548 * t2548 * 3.0 - t2548 * t2548 * t2548 * 2.0;
  t2093[0ULL] = X[120ULL] >= 0.0 ? t2645 : X[9ULL];
  tlu2_linear_linear_prelookup(&ux_efOut.mField0[0ULL], &ux_efOut.mField1[0ULL],
    &ux_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = ux_efOut;
  tlu2_1d_linear_linear_value(&vx_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = vx_efOut[0];
  zc_int15 = t2086_idx_0;
  if (zc_int191 <= 2000.0) {
    t2548 = t2546 * 1.0E-5;
  } else if (zc_int191 >= 4000.0) {
    t2548 = t161 * 1.0E-5;
  } else {
    t2548 = ((1.0 - t162) * t2546 + t161 * t162) * 1.0E-5;
  }

  t3644 = -(X[293ULL] * t2439);
  t2439 = t3644 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2548;
  t3693 = -t2439 - t2439 * -0.95;
  t161 = (-t2590 - t2439 * -0.95) / (t3693 == 0.0 ? 1.0E-16 : t3693);
  t2546 = t161 * t161 * 3.0 - t161 * t161 * t161 * 2.0;
  if (-t2590 <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 *
      -0.95) {
    t161 = t2590;
  } else if (-t2590 >=
             -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0) {
    t161 = t2439;
  } else {
    t161 = (1.0 - t2546) * t2590 + t2439 * t2546;
  }

  t2439 = -pmf_sqrt(((real_T)(M[226ULL] != 0) * 2.0 - 1.0) * (t2656 / (t2575 ==
    0.0 ? 1.0E-16 : t2575) / (X[307ULL] == 0.0 ? 1.0E-16 : X[307ULL]))) *
    7.8539816339744827E-5;
  t2546 = t2587 * t2439 * 35.2 / (t3813 == 0.0 ? 1.0E-16 : t3813);
  if (t2598 >= 0.0) {
    t2548 = t2439 * 100000.0;
  } else {
    t2548 = -t2439 * 100000.0;
  }

  t162 = t2548 * 0.01 / (t3798 == 0.0 ? 1.0E-16 : t3798);
  t2579 = t2600 >= 1.0 ? t162 : 1.0;
  t3576 = pmf_log10(6.9 / (t2579 == 0.0 ? 1.0E-16 : t2579) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2579 == 0.0 ?
    1.0E-16 : t2579) + 0.00017169489553429715) * 3.24;
  t2439 = t2439 * t2548 * (1.0 / (t3576 == 0.0 ? 1.0E-16 : t3576)) * 0.55 /
    (t2647 == 0.0 ? 1.0E-16 : t2647);
  t2548 = (t162 - 2000.0) / 2000.0;
  t162 = t2548 * t2548 * 3.0 - t2548 * t2548 * t2548 * 2.0;
  if (t2600 <= 2000.0) {
    t2548 = t2546 * 1.0E-5;
  } else if (t2600 >= 4000.0) {
    t2548 = t2439 * 1.0E-5;
  } else {
    t2548 = ((1.0 - t162) * t2546 + t2439 * t162) * 1.0E-5;
  }

  t3576 = -(X[263ULL] * t2544);
  t2439 = t3576 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2548;
  t3750 = -t2439 - t2439 * -0.95;
  t2544 = (-t2599 - t2439 * -0.95) / (t3750 == 0.0 ? 1.0E-16 : t3750);
  t2546 = t2544 * t2544 * 3.0 - t2544 * t2544 * t2544 * 2.0;
  if (-t2599 <= t2596 * -0.95) {
    t2544 = t2599;
  } else if (-t2599 >= -t2596) {
    t2544 = t2439;
  } else {
    t2544 = (1.0 - t2546) * t2599 + t2439 * t2546;
  }

  t2439 = ((real_T)(M[219ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[37ULL] == 0.0 ?
    1.0E-16 : X[37ULL])) * (U_idx_11 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL])) *
    (-X[293ULL] / 7.8539816339744827E-5) * (-X[293ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t2486;
  t2546 = ((real_T)(M[221ULL] != 0) * 2.0 - 1.0) * (t3688 / (X[300ULL] == 0.0 ?
    1.0E-16 : X[300ULL])) * (t3688 / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL])) *
    (X[293ULL] / 7.8539816339744827E-5) * (X[293ULL] / 7.8539816339744827E-5) /
    2.0 * 9.999999999999999E-14 + t2443;
  t2443 = (X[37ULL] - X[300ULL]) * pmf_sqrt(((real_T)(M[230ULL] != 0) * 2.0 -
    1.0) * (t2753 / (zc_int196 == 0.0 ? 1.0E-16 : zc_int196))) * t2639 * 0.64;
  t2548 = pmf_sqrt(((real_T)(M[231ULL] != 0) * 2.0 - 1.0) * (t2750 / (t2646 ==
    0.0 ? 1.0E-16 : t2646) / (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]))) * t2639 *
    0.64;
  t3688 = t2548 - t2548 * 0.95;
  t162 = (t2443 - t2548 * 0.95) / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t2579 = t162 * t162 * 3.0 - t162 * t162 * t162 * 2.0;
  if (t2648 <= t2649 * 0.95) {
    t162 = t2443 * 100000.0;
  } else if (t2648 >= t2649) {
    t162 = t2548 * 100000.0;
  } else {
    t162 = ((1.0 - t2579) * t2443 + t2548 * t2579) * 100000.0;
  }

  t2579 = (-t2443 - t2548 * 0.95) / (t3688 == 0.0 ? 1.0E-16 : t3688);
  t2581 = t2579 * t2579 * 3.0 - t2579 * t2579 * t2579 * 2.0;
  if (-t2648 <= t2649 * 0.95) {
    t2579 = t2443 * 100000.0;
  } else if (-t2648 >= t2649) {
    t2579 = -t2548 * 100000.0;
  } else {
    t2579 = ((1.0 - t2581) * t2443 + -t2548 * t2581) * 100000.0;
  }

  U_idx_11 = X[324ULL] * t2515;
  t2443 = ((real_T)(M[236ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / 1.01325) *
    (U_idx_11 / 1.01325) * (X[330ULL] / 0.0019634954084936209) * (X[330ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2543;
  t2093[0ULL] = t4555 >= 0.0 ? t2645 : X[15ULL];
  tlu2_linear_linear_prelookup(&wx_efOut.mField0[0ULL], &wx_efOut.mField1[0ULL],
    &wx_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = wx_efOut;
  tlu2_1d_linear_linear_value(&xx_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = xx_efOut[0];
  t2486 = t2086_idx_0;
  t2515 = ((real_T)(M[236ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / 1.01325) *
    (U_idx_11 / 1.01325) * (-X[330ULL] / 0.0019634954084936209) * (-X[330ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2543;
  U_idx_11 = X[338ULL] * t3734;
  t2543 = ((real_T)(M[238ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[44ULL] == 0.0 ?
    1.0E-16 : X[44ULL])) * (U_idx_11 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) *
    (X[330ULL] / 0.0019634954084936209) * (X[330ULL] / 0.0019634954084936209) /
    2.0 * 9.999999999999999E-14 + zc_int335;
  t3734 = X[345ULL] * t2670;
  t2548 = ((real_T)(M[239ULL] != 0) * 2.0 - 1.0) * (t3734 / (X[44ULL] == 0.0 ?
    1.0E-16 : X[44ULL])) * (t3734 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) *
    (-X[330ULL] / 0.0019634954084936209) * (-X[330ULL] / 0.0019634954084936209) /
    2.0 * 9.999999999999999E-14 + t2672;
  t3734 = X[342ULL] * t2670;
  t2581 = ((real_T)(M[240ULL] != 0) * 2.0 - 1.0) * (t3734 / 1.01325) * (t3734 /
    1.01325) * (-X[330ULL] / 0.0019634954084936209) * (-X[330ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2671;
  t3734 = X[344ULL] * t2670;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 = ((real_T)(M
    [241ULL] != 0) * 2.0 - 1.0) * (t3734 / 1.01325) * (t3734 / 1.01325) * (X
    [330ULL] / 0.0019634954084936209) * (X[330ULL] / 0.0019634954084936209) /
    2.0 * 9.999999999999999E-14 + zc_int306;
  t3734 = X[343ULL] * t2670;
  if (-X[330ULL] >= 0.0) {
    t2589 = -((t2548 - t2581) * X[330ULL]);
  } else {
    t2589 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 -
             (((real_T)(M[242ULL] != 0) * 2.0 - 1.0) * (t3734 / (X[44ULL] == 0.0
                ? 1.0E-16 : X[44ULL])) * (t3734 / (X[44ULL] == 0.0 ? 1.0E-16 :
                X[44ULL])) * (X[330ULL] / 0.0019634954084936209) * (X[330ULL] /
               0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2673)) *
      X[330ULL];
  }

  t2581 = ((real_T)(M[238ULL] != 0) * 2.0 - 1.0) * (U_idx_11 / (X[44ULL] == 0.0 ?
    1.0E-16 : X[44ULL])) * (U_idx_11 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) *
    (-X[330ULL] / 0.0019634954084936209) * (-X[330ULL] / 0.0019634954084936209) /
    2.0 * 9.999999999999999E-14 + zc_int335;
  t3734 = X[349ULL] * t3738;
  if (M[244ULL] != 0) {
    zc_int191 = 216.59999999999997;
  } else {
    zc_int191 = M[245ULL] != 0 ? 623.15 : U_idx_7;
  }

  U_idx_11 = X[127ULL] * U_idx_4;
  t2093[0ULL] = U_idx_6 >= 0.0 ? zc_int191 : X[48ULL];
  tlu2_linear_linear_prelookup(&yx_efOut.mField0[0ULL], &yx_efOut.mField1[0ULL],
    &yx_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t137 = yx_efOut;
  tlu2_1d_linear_linear_value(&ay_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ay_efOut[0];
  zc_int191 = t2086_idx_0;
  t2594 = ((real_T)(M[212ULL] != 0) * 2.0 - 1.0) * (U_idx_3 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (U_idx_3 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (-X[272ULL] / 0.0019634954084936209) * (-X[272ULL] / 0.0019634954084936209) /
    2.0 * 9.999999999999999E-14 + t3753;
  t3753 = X[371ULL] * t2736;
  t2596 = ((real_T)(M[246ULL] != 0) * 2.0 - 1.0) * (t3753 / (X[372ULL] == 0.0 ?
    1.0E-16 : X[372ULL])) * (t3753 / (X[372ULL] == 0.0 ? 1.0E-16 : X[372ULL])) *
    (X[384ULL] / 0.0019634954084936209) * (X[384ULL] / 0.0019634954084936209) /
    2.0 * 9.999999999999999E-14 + t4098;
  t2598 = pmf_sqrt(zc_int273 * zc_int273 * 9.999999999999999E-14 + ((real_T)(M
    [247ULL] != 0) * 2.0 - 1.0) * X[382ULL] * t2701 * t2699 * 1.0E-9);
  t2600 = pmf_sqrt(t2710 * t2710 * 9.999999999999999E-14 + ((real_T)(M[248ULL]
    != 0) * 2.0 - 1.0) * X[385ULL] * zc_int36 * t2699 * 1.0E-9);
  zc_int196 = -pmf_sqrt(((real_T)(M[249ULL] != 0) * 2.0 - 1.0) * (t2771 / (t2699
    == 0.0 ? 1.0E-16 : t2699) / (X[382ULL] == 0.0 ? 1.0E-16 : X[382ULL]))) *
    0.0019634954084936209;
  zc_int335 = t2705 * zc_int196 * 11.2 / (t2779 == 0.0 ? 1.0E-16 : t2779);
  if (zc_int294 >= 0.0) {
    t2616 = zc_int196 * 100000.0;
  } else {
    t2616 = -zc_int196 * 100000.0;
  }

  zc_int257 = t2616 * 0.05 / (t2775 == 0.0 ? 1.0E-16 : t2775);
  zc_int319 = t2708 >= 1.0 ? zc_int257 : 1.0;
  t3776 = pmf_log10(6.9 / (zc_int319 == 0.0 ? 1.0E-16 : zc_int319) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (zc_int319 == 0.0 ?
    1.0E-16 : zc_int319) + 2.8767404433520813E-5) * 3.24;
  zc_int196 = zc_int196 * t2616 * (1.0 / (t3776 == 0.0 ? 1.0E-16 : t3776)) *
    0.175 / (t2782 == 0.0 ? 1.0E-16 : t2782);
  t2616 = (zc_int257 - 2000.0) / 2000.0;
  zc_int257 = t2616 * t2616 * 3.0 - t2616 * t2616 * t2616 * 2.0;
  if (t2708 <= 2000.0) {
    t2616 = zc_int335 * 1.0E-5;
  } else if (t2708 >= 4000.0) {
    t2616 = zc_int196 * 1.0E-5;
  } else {
    t2616 = ((1.0 - zc_int257) * zc_int335 + zc_int196 * zc_int257) * 1.0E-5;
  }

  t3776 = -(X[272ULL] * t2598);
  t2598 = t3776 / 0.0019634954084936209 * 0.00031622776601683789 + t2616;
  U_idx_0 = -t2598 - t2598 * -0.95;
  zc_int196 = (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke
               - t2598 * -0.95) / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0);
  zc_int335 = zc_int196 * zc_int196 * 3.0 - zc_int196 * zc_int196 * zc_int196 *
    2.0;
  if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke <= t2702 *
      -0.95) {
    zc_int196 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke;
  } else if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke >=
             -t2702) {
    zc_int196 = t2598;
  } else {
    zc_int196 = (1.0 - zc_int335) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke + t2598 *
      zc_int335;
  }

  t3779 = X[141ULL] * t2255;
  t2598 = -pmf_sqrt(((real_T)(M[251ULL] != 0) * 2.0 - 1.0) * (t2791 / (t2699 ==
    0.0 ? 1.0E-16 : t2699) / (X[385ULL] == 0.0 ? 1.0E-16 : X[385ULL]))) *
    0.0019634954084936209;
  zc_int335 = t2705 * t2598 * 11.2 / (t2779 == 0.0 ? 1.0E-16 : t2779);
  if (piece229 >= 0.0) {
    t2616 = t2598 * 100000.0;
  } else {
    t2616 = -t2598 * 100000.0;
  }

  zc_int257 = t2616 * 0.05 / (t2775 == 0.0 ? 1.0E-16 : t2775);
  zc_int319 = t2716 >= 1.0 ? zc_int257 : 1.0;
  t3797 = pmf_log10(6.9 / (zc_int319 == 0.0 ? 1.0E-16 : zc_int319) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (zc_int319 == 0.0 ?
    1.0E-16 : zc_int319) + 2.8767404433520813E-5) * 3.24;
  t2598 = t2598 * t2616 * (1.0 / (t3797 == 0.0 ? 1.0E-16 : t3797)) * 0.175 /
    (t2782 == 0.0 ? 1.0E-16 : t2782);
  t2616 = (zc_int257 - 2000.0) / 2000.0;
  zc_int257 = t2616 * t2616 * 3.0 - t2616 * t2616 * t2616 * 2.0;
  if (t2716 <= 2000.0) {
    t2616 = zc_int335 * 1.0E-5;
  } else if (t2716 >= 4000.0) {
    t2616 = t2598 * 1.0E-5;
  } else {
    t2616 = ((1.0 - zc_int257) * zc_int335 + t2598 * zc_int257) * 1.0E-5;
  }

  t2598 = pmf_sqrt(t2222 * t2222 * 9.999999999999999E-14 + ((real_T)(M[23ULL] !=
    0) * 2.0 - 1.0) * X[146ULL] * t2223 * t2221 * 1.0E-9);
  t3797 = X[384ULL] * t2600;
  t2222 = t3797 / 0.0019634954084936209 * 0.00031622776601683789 + t2616;
  t3813 = -t2222 - t2222 * -0.95;
  t2223 = (-t2715 - t2222 * -0.95) / (t3813 == 0.0 ? 1.0E-16 : t3813);
  t2600 = t2223 * t2223 * 3.0 - t2223 * t2223 * t2223 * 2.0;
  if (-t2715 <= t2713 * -0.95) {
    t2223 = t2715;
  } else if (-t2715 >= -t2713) {
    t2223 = t2222;
  } else {
    t2223 = (1.0 - t2600) * t2715 + t2222 * t2600;
  }

  t2222 = ((real_T)(M[246ULL] != 0) * 2.0 - 1.0) * (t3753 / (X[372ULL] == 0.0 ?
    1.0E-16 : X[372ULL])) * (t3753 / (X[372ULL] == 0.0 ? 1.0E-16 : X[372ULL])) *
    (-X[384ULL] / 0.32) * (-X[384ULL] / 0.32) / 2.0 * 9.999999999999999E-14 +
    t4098;
  t3753 = X[75ULL] * t3874;
  zc_int335 = pmf_sqrt(t3825 * t3825 * 9.999999999999999E-14 + ((real_T)(M
    [255ULL] != 0) * 2.0 - 1.0) * X[396ULL] * t3841 * t2759 * 1.0E-9);
  t2616 = pmf_sqrt(t4097 * t4097 * 9.999999999999999E-14 + ((real_T)(M[256ULL]
    != 0) * 2.0 - 1.0) * X[399ULL] * t3903 * t2759 * 1.0E-9);
  zc_int257 = -pmf_sqrt(((real_T)(M[257ULL] != 0) * 2.0 - 1.0) * (t2865 / (t2759
    == 0.0 ? 1.0E-16 : t2759) / (X[396ULL] == 0.0 ? 1.0E-16 : X[396ULL]))) *
    0.32;
  zc_int319 = t3887 * zc_int257 * 2.9973120849090416 / (t2873 == 0.0 ? 1.0E-16 :
    t2873);
  t2671 = pmf_sqrt(t2233 * t2233 * 9.999999999999999E-14 + ((real_T)(M[34ULL] !=
    0) * 2.0 - 1.0) * X[150ULL] * t2234 * t2221 * 1.0E-9);
  if (t3891 >= 0.0) {
    t2233 = zc_int257 * 100000.0;
  } else {
    t2233 = -zc_int257 * 100000.0;
  }

  t2234 = t2233 * 0.01 / (t2869 == 0.0 ? 1.0E-16 : t2869);
  t2672 = t4044 >= 1.0 ? t2234 : 1.0;
  t3825 = pmf_log10(6.9 / (t2672 == 0.0 ? 1.0E-16 : t2672) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2672 == 0.0 ?
    1.0E-16 : t2672) + 0.00017169489553429715) * 3.24;
  t2233 = zc_int257 * t2233 * (1.0 / (t3825 == 0.0 ? 1.0E-16 : t3825)) *
    0.046833001326703774 / (t2876 == 0.0 ? 1.0E-16 : t2876);
  t2234 = (t2234 - 2000.0) / 2000.0;
  zc_int257 = t2234 * t2234 * 3.0 - t2234 * t2234 * t2234 * 2.0;
  if (t4044 <= 2000.0) {
    t2234 = zc_int319 * 1.0E-5;
  } else if (t4044 >= 4000.0) {
    t2234 = t2233 * 1.0E-5;
  } else {
    t2234 = ((1.0 - zc_int257) * zc_int319 + t2233 * zc_int257) * 1.0E-5;
  }

  t3825 = -(X[384ULL] * zc_int335);
  t2233 = t3825 / 0.32 * 0.00031622776601683789 + t2234;
  t3891 = -t2233 - t2233 * -0.95;
  t2234 = (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke -
           t2233 * -0.95) / (t3891 == 0.0 ? 1.0E-16 : t3891);
  zc_int335 = -pmf_sqrt(((real_T)(M[43ULL] != 0) * 2.0 - 1.0) * (t2256 / (t2221 ==
    0.0 ? 1.0E-16 : t2221) / (X[146ULL] == 0.0 ? 1.0E-16 : X[146ULL]))) *
    7.8539816339744827E-5;
  zc_int257 = t2234 * t2234 * 3.0 - t2234 * t2234 * t2234 * 2.0;
  if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke <= t3851 *
      -0.95) {
    t2234 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke;
  } else if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke >=
             -t3851) {
    t2234 = t2233;
  } else {
    t2234 = (1.0 - zc_int257) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke + t2233 *
      zc_int257;
  }

  t2233 = -pmf_sqrt(((real_T)(M[258ULL] != 0) * 2.0 - 1.0) * (t2885 / (t2759 ==
    0.0 ? 1.0E-16 : t2759) / (X[399ULL] == 0.0 ? 1.0E-16 : X[399ULL]))) * 0.32;
  zc_int257 = t3887 * t2233 * 2.9973120849090416 / (t2873 == 0.0 ? 1.0E-16 :
    t2873);
  if (t3926 >= 0.0) {
    zc_int319 = t2233 * 100000.0;
  } else {
    zc_int319 = -t2233 * 100000.0;
  }

  t2672 = zc_int319 * 0.01 / (t2869 == 0.0 ? 1.0E-16 : t2869);
  t2673 = t4010 >= 1.0 ? t2672 : 1.0;
  t3841 = pmf_log10(6.9 / (t2673 == 0.0 ? 1.0E-16 : t2673) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2673 == 0.0 ?
    1.0E-16 : t2673) + 0.00017169489553429715) * 3.24;
  t2233 = t2233 * zc_int319 * (1.0 / (t3841 == 0.0 ? 1.0E-16 : t3841)) *
    0.046833001326703774 / (t2876 == 0.0 ? 1.0E-16 : t2876);
  zc_int319 = (t2672 - 2000.0) / 2000.0;
  t2672 = t147 * zc_int335 * 35.2 / (t2264 == 0.0 ? 1.0E-16 : t2264);
  t2673 = zc_int319 * zc_int319 * 3.0 - zc_int319 * zc_int319 * zc_int319 * 2.0;
  if (t4010 <= 2000.0) {
    zc_int319 = zc_int257 * 1.0E-5;
  } else if (t4010 >= 4000.0) {
    zc_int319 = t2233 * 1.0E-5;
  } else {
    zc_int319 = ((1.0 - t2673) * zc_int257 + t2233 * t2673) * 1.0E-5;
  }

  t3841 = X[398ULL] * t2616;
  t2233 = t3841 / 0.32 * 0.00031622776601683789 + zc_int319;
  t3887 = -t2233 - t2233 * -0.95;
  t2616 = (-t2784 - t2233 * -0.95) / (t3887 == 0.0 ? 1.0E-16 : t3887);
  zc_int257 = t2616 * t2616 * 3.0 - t2616 * t2616 * t2616 * 2.0;
  if (-t2784 <= t3918 * -0.95) {
    t2616 = t2784;
  } else if (-t2784 >= -t3918) {
    t2616 = t2233;
  } else {
    t2616 = (1.0 - zc_int257) * t2784 + t2233 * zc_int257;
  }

  zc_int319 = pmf_sqrt(t3939 * t3939 * 9.999999999999999E-14 + ((real_T)(M[7ULL]
    != 0) * 2.0 - 1.0) * X[410ULL] * t3942 * t2819 * 1.0E-9);
  t2673 = pmf_sqrt(t3965 * t3965 * 9.999999999999999E-14 + ((real_T)(M[8ULL] !=
    0) * 2.0 - 1.0) * X[412ULL] * t3968 * t2819 * 1.0E-9);
  if (t163 >= 0.0) {
    zc_int306 = zc_int335 * 100000.0;
  } else {
    zc_int306 = -zc_int335 * 100000.0;
  }

  t163 = -pmf_sqrt(((real_T)(M[9ULL] != 0) * 2.0 - 1.0) * (t2957 / (t2819 == 0.0
    ? 1.0E-16 : t2819) / (X[410ULL] == 0.0 ? 1.0E-16 : X[410ULL]))) * 0.32;
  zc_int273 = t3946 * t163 * 2.9973120849090416 / (t2965 == 0.0 ? 1.0E-16 :
    t2965);
  if (t4035 >= 0.0) {
    t2701 = t163 * 100000.0;
  } else {
    t2701 = -t163 * 100000.0;
  }

  t2702 = t2701 * 0.01 / (t2961 == 0.0 ? 1.0E-16 : t2961);
  t2705 = t3951 >= 1.0 ? t2702 : 1.0;
  t3874 = pmf_log10(6.9 / (t2705 == 0.0 ? 1.0E-16 : t2705) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2705 == 0.0 ?
    1.0E-16 : t2705) + 0.00017169489553429715) * 3.24;
  t163 = t163 * t2701 * (1.0 / (t3874 == 0.0 ? 1.0E-16 : t3874)) *
    0.046833001326703774 / (t2968 == 0.0 ? 1.0E-16 : t2968);
  t2701 = (t2702 - 2000.0) / 2000.0;
  t2702 = t2701 * t2701 * 3.0 - t2701 * t2701 * t2701 * 2.0;
  if (t3951 <= 2000.0) {
    t2701 = zc_int273 * 1.0E-5;
  } else if (t3951 >= 4000.0) {
    t2701 = t163 * 1.0E-5;
  } else {
    t2701 = ((1.0 - t2702) * zc_int273 + t163 * t2702) * 1.0E-5;
  }

  t163 = zc_int306 * 0.01 / (t2260 == 0.0 ? 1.0E-16 : t2260);
  t3874 = -(X[398ULL] * zc_int319);
  zc_int319 = t3874 / 0.32 * 0.00031622776601683789 + t2701;
  t3891 = -zc_int319 - zc_int319 * -0.95;
  zc_int273 = (-t2828 - zc_int319 * -0.95) / (t3891 == 0.0 ? 1.0E-16 : t3891);
  t2701 = zc_int273 * zc_int273 * 3.0 - zc_int273 * zc_int273 * zc_int273 * 2.0;
  if (-t2828 <= t3943 * -0.95) {
    zc_int273 = t2828;
  } else if (-t2828 >= -t3943) {
    zc_int273 = zc_int319;
  } else {
    zc_int273 = (1.0 - t2701) * t2828 + zc_int319 * t2701;
  }

  zc_int319 = -pmf_sqrt(((real_T)(M[10ULL] != 0) * 2.0 - 1.0) * (t2977 / (t2819 ==
    0.0 ? 1.0E-16 : t2819) / (X[412ULL] == 0.0 ? 1.0E-16 : X[412ULL]))) * 0.32;
  t2701 = t3946 * zc_int319 * 2.9973120849090416 / (t2965 == 0.0 ? 1.0E-16 :
    t2965);
  if (t4043 >= 0.0) {
    t2702 = zc_int319 * 100000.0;
  } else {
    t2702 = -zc_int319 * 100000.0;
  }

  t2705 = t2702 * 0.01 / (t2961 == 0.0 ? 1.0E-16 : t2961);
  zc_int294 = t4062 >= 1.0 ? t2705 : 1.0;
  t3887 = pmf_log10(6.9 / (zc_int294 == 0.0 ? 1.0E-16 : zc_int294) +
                    0.00017169489553429715) * pmf_log10(6.9 / (zc_int294 == 0.0 ?
    1.0E-16 : zc_int294) + 0.00017169489553429715) * 3.24;
  t2708 = t2230 >= 1.0 ? t163 : 1.0;
  zc_int319 = zc_int319 * t2702 * (1.0 / (t3887 == 0.0 ? 1.0E-16 : t3887)) *
    0.046833001326703774 / (t2968 == 0.0 ? 1.0E-16 : t2968);
  t2702 = (t2705 - 2000.0) / 2000.0;
  t2705 = t2702 * t2702 * 3.0 - t2702 * t2702 * t2702 * 2.0;
  if (t4062 <= 2000.0) {
    t2702 = t2701 * 1.0E-5;
  } else if (t4062 >= 4000.0) {
    t2702 = zc_int319 * 1.0E-5;
  } else {
    t2702 = ((1.0 - t2705) * t2701 + zc_int319 * t2705) * 1.0E-5;
  }

  t3887 = X[145ULL] * t2673;
  zc_int319 = t3887 / 0.32 * 0.00031622776601683789 + t2702;
  t4044 = -zc_int319 - zc_int319 * -0.95;
  t2673 = (-t2836 - zc_int319 * -0.95) / (t4044 == 0.0 ? 1.0E-16 : t4044);
  t2701 = t2673 * t2673 * 3.0 - t2673 * t2673 * t2673 * 2.0;
  if (-t2836 <= t3982 * -0.95) {
    t2673 = t2836;
  } else if (-t2836 >= -t3982) {
    t2673 = zc_int319;
  } else {
    t2673 = (1.0 - t2701) * t2836 + zc_int319 * t2701;
  }

  if (M[15ULL] != 0) {
    zc_int319 = 216.59999999999997;
  } else {
    zc_int319 = M[16ULL] != 0 ? 623.15 : U_idx_9;
  }

  t3891 = pmf_log10(6.9 / (t2708 == 0.0 ? 1.0E-16 : t2708) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2708 == 0.0 ?
    1.0E-16 : t2708) + 0.00017169489553429715) * 3.24;
  t2093[0ULL] = U_idx_8 >= 0.0 ? zc_int319 : X[54ULL];
  tlu2_linear_linear_prelookup(&by_efOut.mField0[0ULL], &by_efOut.mField1[0ULL],
    &by_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = by_efOut;
  tlu2_1d_linear_linear_value(&cy_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = cy_efOut[0];
  t2701 = t2086_idx_0;
  t4044 = X[173ULL] * zc_int292;
  zc_int292 = ((real_T)(M[18ULL] != 0) * 2.0 - 1.0) * (t4044 / (X[174ULL] == 0.0
    ? 1.0E-16 : X[174ULL])) * (t4044 / (X[174ULL] == 0.0 ? 1.0E-16 : X[174ULL]))
    * (-X[177ULL] / 0.0019634954084936209) * (-X[177ULL] / 0.0019634954084936209)
    / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1443;
  t2705 = pmf_sqrt(t4075 * t4075 * 9.999999999999999E-14 + ((real_T)(M[19ULL] !=
    0) * 2.0 - 1.0) * X[427ULL] * t4083 * t2851 * 1.0E-9);
  zc_int294 = pmf_sqrt(t2868 * t2868 * 9.999999999999999E-14 + ((real_T)(M[20ULL]
    != 0) * 2.0 - 1.0) * X[429ULL] *
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
                       * t2851 * 1.0E-9);
  t2708 = -pmf_sqrt(((real_T)(M[21ULL] != 0) * 2.0 - 1.0) * (t3047 / (t2851 ==
    0.0 ? 1.0E-16 : t2851) / (X[427ULL] == 0.0 ? 1.0E-16 : X[427ULL]))) *
    0.0019634954084936209;
  t2710 = t2858 * t2708 * 11.2 / (t3055 == 0.0 ? 1.0E-16 : t3055);
  if (t2859 >= 0.0) {
    zc_int36 = t2708 * 100000.0;
  } else {
    zc_int36 = -t2708 * 100000.0;
  }

  t2713 = zc_int36 * 0.05 / (t3051 == 0.0 ? 1.0E-16 : t3051);
  piece229 = t2864 >= 1.0 ? t2713 : 1.0;
  zc_int335 = zc_int335 * zc_int306 * (1.0 / (t3891 == 0.0 ? 1.0E-16 : t3891)) *
    0.55 / (t2267 == 0.0 ? 1.0E-16 : t2267);
  t3918 = pmf_log10(6.9 / (piece229 == 0.0 ? 1.0E-16 : piece229) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (piece229 == 0.0 ?
    1.0E-16 : piece229) + 2.8767404433520813E-5) * 3.24;
  zc_int319 = t2708 * zc_int36 * (1.0 / (t3918 == 0.0 ? 1.0E-16 : t3918)) *
    0.175 / (t3058 == 0.0 ? 1.0E-16 : t3058);
  zc_int306 = (t2713 - 2000.0) / 2000.0;
  t2708 = zc_int306 * zc_int306 * 3.0 - zc_int306 * zc_int306 * zc_int306 * 2.0;
  if (t2864 <= 2000.0) {
    zc_int306 = t2710 * 1.0E-5;
  } else if (t2864 >= 4000.0) {
    zc_int306 = zc_int319 * 1.0E-5;
  } else {
    zc_int306 = ((1.0 - t2708) * t2710 + zc_int319 * t2708) * 1.0E-5;
  }

  t3918 = -(X[361ULL] * t2705);
  zc_int319 = t3918 / 0.0019634954084936209 * 0.00031622776601683789 + zc_int306;
  t4010 = -zc_int319 - zc_int319 * -0.95;
  zc_int306 = (-t2863 - zc_int319 * -0.95) / (t4010 == 0.0 ? 1.0E-16 : t4010);
  t2705 = zc_int306 * zc_int306 * 3.0 - zc_int306 * zc_int306 * zc_int306 * 2.0;
  if (-t2863 <= t4085 * -0.95) {
    zc_int306 = t2863;
  } else if (-t2863 >= -t4085) {
    zc_int306 = zc_int319;
  } else {
    zc_int306 = (1.0 - t2705) * t2863 + zc_int319 * t2705;
  }

  zc_int319 = -pmf_sqrt(((real_T)(M[22ULL] != 0) * 2.0 - 1.0) * (t3067 / (t2851 ==
    0.0 ? 1.0E-16 : t2851) / (X[429ULL] == 0.0 ? 1.0E-16 : X[429ULL]))) *
    0.0019634954084936209;
  t163 = (t163 - 2000.0) / 2000.0;
  t2705 = t2858 * zc_int319 * 11.2 / (t3055 == 0.0 ? 1.0E-16 : t3055);
  if (t2875 >= 0.0) {
    t2708 = zc_int319 * 100000.0;
  } else {
    t2708 = -zc_int319 * 100000.0;
  }

  t2710 = t2708 * 0.05 / (t3051 == 0.0 ? 1.0E-16 : t3051);
  zc_int36 = t2878 >= 1.0 ? t2710 : 1.0;
  t3926 = pmf_log10(6.9 / (zc_int36 == 0.0 ? 1.0E-16 : zc_int36) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (zc_int36 == 0.0 ?
    1.0E-16 : zc_int36) + 2.8767404433520813E-5) * 3.24;
  zc_int319 = zc_int319 * t2708 * (1.0 / (t3926 == 0.0 ? 1.0E-16 : t3926)) *
    0.175 / (t3058 == 0.0 ? 1.0E-16 : t3058);
  t2708 = (t2710 - 2000.0) / 2000.0;
  t2710 = t2708 * t2708 * 3.0 - t2708 * t2708 * t2708 * 2.0;
  if (t2878 <= 2000.0) {
    t2708 = t2705 * 1.0E-5;
  } else if (t2878 >= 4000.0) {
    t2708 = zc_int319 * 1.0E-5;
  } else {
    t2708 = ((1.0 - t2710) * t2705 + zc_int319 * t2710) * 1.0E-5;
  }

  t3926 = -(X[177ULL] * zc_int294);
  zc_int319 = t3926 / 0.0019634954084936209 * 0.00031622776601683789 + t2708;
  t2705 = t163 * t163 * 3.0 - t163 * t163 * t163 * 2.0;
  t3939 = -zc_int319 - zc_int319 * -0.95;
  t163 = (-t2877 - zc_int319 * -0.95) / (t3939 == 0.0 ? 1.0E-16 : t3939);
  zc_int294 = t163 * t163 * 3.0 - t163 * t163 * t163 * 2.0;
  if (-t2877 <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1 *
      -0.95) {
    t163 = t2877;
  } else if (-t2877 >=
             -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_po1) {
    t163 = zc_int319;
  } else {
    t163 = (1.0 - zc_int294) * t2877 + zc_int319 * zc_int294;
  }

  t4010 = X[438ULL] * t4551;
  zc_int319 = ((real_T)(M[27ULL] != 0) * 2.0 - 1.0) * (t4010 / 1.01325) * (t4010
    / 1.01325) * (X[444ULL] / 0.0019634954084936209) * (X[444ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I;
  t3942 = X[195ULL] * t2366;
  t4035 = X[452ULL] * intrm_sf_mf_1553;
  zc_int294 = ((real_T)(M[30ULL] != 0) * 2.0 - 1.0) * (t4035 / (t2912 == 0.0 ?
    1.0E-16 : t2912)) * (t4035 / (t2912 == 0.0 ? 1.0E-16 : t2912)) * (-X[444ULL]
    / 0.0019634954084936209) * (-X[444ULL] / 0.0019634954084936209) / 2.0 *
    9.999999999999999E-14 + zc_int357;
  t2708 = pmf_sqrt(t2917 * t2917 * 9.999999999999999E-14 + ((real_T)(M[31ULL] !=
    0) * 2.0 - 1.0) * X[456ULL] * t2918 * t2916 * 1.0E-9);
  t2710 = pmf_sqrt(t2928 * t2928 * 9.999999999999999E-14 + ((real_T)(M[32ULL] !=
    0) * 2.0 - 1.0) * X[460ULL] * t2675 * t2916 * 1.0E-9);
  zc_int36 = -pmf_sqrt(((real_T)(M[33ULL] != 0) * 2.0 - 1.0) * (t3139 / (t2916 ==
    0.0 ? 1.0E-16 : t2916) / (X[456ULL] == 0.0 ? 1.0E-16 : X[456ULL]))) *
    0.0019634954084936209;
  t2713 = t2922 * zc_int36 * 35.2 / (t3148 == 0.0 ? 1.0E-16 : t3148);
  if (t2230 <= 2000.0) {
    piece229 = t2672 * 1.0E-5;
  } else if (t2230 >= 4000.0) {
    piece229 = zc_int335 * 1.0E-5;
  } else {
    piece229 = ((1.0 - t2705) * t2672 + zc_int335 * t2705) * 1.0E-5;
  }

  if (t2923 >= 0.0) {
    t2230 = zc_int36 * 100000.0;
  } else {
    t2230 = -zc_int36 * 100000.0;
  }

  zc_int335 = t2230 * 0.05 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  t2672 = t2926 >= 1.0 ? zc_int335 : 1.0;
  t3965 = pmf_log10(6.9 / (t2672 == 0.0 ? 1.0E-16 : t2672) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t2672 == 0.0 ?
    1.0E-16 : t2672) + 2.8767404433520813E-5) * 3.24;
  t2230 = zc_int36 * t2230 * (1.0 / (t3965 == 0.0 ? 1.0E-16 : t3965)) * 0.55 /
    (t3151 == 0.0 ? 1.0E-16 : t3151);
  zc_int335 = (zc_int335 - 2000.0) / 2000.0;
  t2672 = zc_int335 * zc_int335 * 3.0 - zc_int335 * zc_int335 * zc_int335 * 2.0;
  if (t2926 <= 2000.0) {
    zc_int335 = t2713 * 1.0E-5;
  } else if (t2926 >= 4000.0) {
    zc_int335 = t2230 * 1.0E-5;
  } else {
    zc_int335 = ((1.0 - t2672) * t2713 + t2230 * t2672) * 1.0E-5;
  }

  t3965 = -(X[201ULL] * t2708);
  t2230 = t3965 / 0.0019634954084936209 * 0.00031622776601683789 + zc_int335;
  t3982 = -t2230 - t2230 * -0.95;
  zc_int335 = (-t2924 - t2230 * -0.95) / (t3982 == 0.0 ? 1.0E-16 : t3982);
  t3968 = t2215 * t2598;
  t2598 = t3968 / 7.8539816339744827E-5 * 0.00031622776601683789 + piece229;
  t2672 = zc_int335 * zc_int335 * 3.0 - zc_int335 * zc_int335 * zc_int335 * 2.0;
  if (-t2924 <= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0 *
      -0.95) {
    zc_int335 = t2924;
  } else if (-t2924 >=
             -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po0) {
    zc_int335 = t2230;
  } else {
    zc_int335 = (1.0 - t2672) * t2924 + t2230 * t2672;
  }

  t2230 = -pmf_sqrt(((real_T)(M[35ULL] != 0) * 2.0 - 1.0) * (t3134 / (t2916 ==
    0.0 ? 1.0E-16 : t2916) / (X[460ULL] == 0.0 ? 1.0E-16 : X[460ULL]))) *
    0.0019634954084936209;
  t2672 = t2922 * t2230 * 35.2 / (t3148 == 0.0 ? 1.0E-16 : t3148);
  if (t2931 >= 0.0) {
    t2705 = t2230 * 100000.0;
  } else {
    t2705 = -t2230 * 100000.0;
  }

  t2708 = t2705 * 0.05 / (t3144 == 0.0 ? 1.0E-16 : t3144);
  zc_int36 = t2933 >= 1.0 ? t2708 : 1.0;
  t3982 = pmf_log10(6.9 / (zc_int36 == 0.0 ? 1.0E-16 : zc_int36) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (zc_int36 == 0.0 ?
    1.0E-16 : zc_int36) + 2.8767404433520813E-5) * 3.24;
  t2230 = t2230 * t2705 * (1.0 / (t3982 == 0.0 ? 1.0E-16 : t3982)) * 0.55 /
    (t3151 == 0.0 ? 1.0E-16 : t3151);
  t2705 = (t2708 - 2000.0) / 2000.0;
  t4043 = -t2598 - t2598 * -0.95;
  t2708 = (-t2229 - t2598 * -0.95) / (t4043 == 0.0 ? 1.0E-16 : t4043);
  zc_int36 = t2705 * t2705 * 3.0 - t2705 * t2705 * t2705 * 2.0;
  if (t2933 <= 2000.0) {
    t2705 = t2672 * 1.0E-5;
  } else if (t2933 >= 4000.0) {
    t2705 = t2230 * 1.0E-5;
  } else {
    t2705 = ((1.0 - zc_int36) * t2672 + t2230 * zc_int36) * 1.0E-5;
  }

  t3982 = -(X[444ULL] * t2710);
  t2230 = t3982 / 0.0019634954084936209 * 0.00031622776601683789 + t2705;
  t4062 = -t2230 - t2230 * -0.95;
  t2672 = (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke -
           t2230 * -0.95) / (t4062 == 0.0 ? 1.0E-16 : t4062);
  t2705 = t2672 * t2672 * 3.0 - t2672 * t2672 * t2672 * 2.0;
  if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke <=
      U_idx_10 * -0.95) {
    t2672 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke;
  } else if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke >=
             -U_idx_10) {
    t2672 = t2230;
  } else {
    t2672 = (1.0 - t2705) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke + t2230 *
      t2705;
  }

  t2230 = ((real_T)(M[30ULL] != 0) * 2.0 - 1.0) * (t4035 / (t2912 == 0.0 ?
    1.0E-16 : t2912)) * (t4035 / (t2912 == 0.0 ? 1.0E-16 : t2912)) * (X[444ULL] /
    0.0019634954084936209) * (X[444ULL] / 0.0019634954084936209) / 2.0 *
    9.999999999999999E-14 + zc_int357;
  zc_int357 = ((real_T)(M[27ULL] != 0) * 2.0 - 1.0) * (t4010 / 1.01325) * (t4010
    / 1.01325) * (-X[444ULL] / 0.0019634954084936209) * (-X[444ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I;
  t2705 = (t2912 - 1.01325) * pmf_sqrt(((real_T)(M[39ULL] != 0) * 2.0 - 1.0) *
    (t3253 / (t4237 == 0.0 ? 1.0E-16 : t4237))) * intrm_sf_mf_1623 * 0.64;
  t2710 = pmf_sqrt(((real_T)(M[40ULL] != 0) * 2.0 - 1.0) * (t3250 / (t2966 ==
    0.0 ? 1.0E-16 : t2966) / (X[470ULL] == 0.0 ? 1.0E-16 : X[470ULL]))) *
    intrm_sf_mf_1623 * 0.64;
  zc_int36 = t2708 * t2708 * 3.0 - t2708 * t2708 * t2708 * 2.0;
  t4035 = t2710 - t2710 * 0.95;
  t2708 = (t2705 - t2710 * 0.95) / (t4035 == 0.0 ? 1.0E-16 : t4035);
  t2713 = t2708 * t2708 * 3.0 - t2708 * t2708 * t2708 * 2.0;
  if (t2967 <= t2969 * 0.95) {
    t2708 = t2705 * 100000.0;
  } else if (t2967 >= t2969) {
    t2708 = t2710 * 100000.0;
  } else {
    t2708 = ((1.0 - t2713) * t2705 + t2710 * t2713) * 100000.0;
  }

  t2713 = (-t2705 - t2710 * 0.95) / (t4035 == 0.0 ? 1.0E-16 : t4035);
  piece229 = t2713 * t2713 * 3.0 - t2713 * t2713 * t2713 * 2.0;
  if (-t2967 <= t2969 * 0.95) {
    t2713 = t2705 * 100000.0;
  } else if (-t2967 >= t2969) {
    t2713 = -t2710 * 100000.0;
  } else {
    t2713 = ((1.0 - piece229) * t2705 + -t2710 * piece229) * 100000.0;
  }

  if (-t2229 <= zc_int44 * -0.95) {
    t2705 = t2229;
  } else if (-t2229 >= -zc_int44) {
    t2705 = t2598;
  } else {
    t2705 = (1.0 - zc_int36) * t2229 + t2598 * zc_int36;
  }

  zc_int44 = -pmf_sqrt(((real_T)(M[54ULL] != 0) * 2.0 - 1.0) * (t2276 / (t2221 ==
    0.0 ? 1.0E-16 : t2221) / (X[150ULL] == 0.0 ? 1.0E-16 : X[150ULL]))) *
    7.8539816339744827E-5;
  t147 = t147 * zc_int44 * 35.2 / (t2264 == 0.0 ? 1.0E-16 : t2264);
  if (t2236 >= 0.0) {
    t2598 = zc_int44 * 100000.0;
  } else {
    t2598 = -zc_int44 * 100000.0;
  }

  t2236 = t2598 * 0.01 / (t2260 == 0.0 ? 1.0E-16 : t2260);
  t2710 = zc_int54 >= 1.0 ? t2236 : 1.0;
  t4010 = pmf_log10(6.9 / (t2710 == 0.0 ? 1.0E-16 : t2710) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2710 == 0.0 ?
    1.0E-16 : t2710) + 0.00017169489553429715) * 3.24;
  zc_int44 = zc_int44 * t2598 * (1.0 / (t4010 == 0.0 ? 1.0E-16 : t4010)) * 0.55 /
    (t2267 == 0.0 ? 1.0E-16 : t2267);
  t2236 = (t2236 - 2000.0) / 2000.0;
  t2598 = t2236 * t2236 * 3.0 - t2236 * t2236 * t2236 * 2.0;
  if (zc_int54 <= 2000.0) {
    t2236 = t147 * 1.0E-5;
  } else if (zc_int54 >= 4000.0) {
    t2236 = zc_int44 * 1.0E-5;
  } else {
    t2236 = ((1.0 - t2598) * t147 + zc_int44 * t2598) * 1.0E-5;
  }

  t4010 = -(X[133ULL] * t2671);
  zc_int44 = t4010 / 7.8539816339744827E-5 * 0.00031622776601683789 + t2236;
  t4043 = -zc_int44 - zc_int44 * -0.95;
  t147 = (-t2238 - zc_int44 * -0.95) / (t4043 == 0.0 ? 1.0E-16 : t4043);
  zc_int54 = t147 * t147 * 3.0 - t147 * t147 * t147 * 2.0;
  if (-t2238 <= t2235 * -0.95) {
    t147 = t2238;
  } else if (-t2238 >= -t2235) {
    t147 = zc_int44;
  } else {
    t147 = (1.0 - zc_int54) * t2238 + zc_int44 * zc_int54;
  }

  zc_int54 = (X[142ULL] - 1.01325) * pmf_sqrt(((real_T)(M[120ULL] != 0) * 2.0 -
    1.0) * (t2372 / (t2241 == 0.0 ? 1.0E-16 : t2241))) * t2290 * 0.64;
  t2241 = pmf_sqrt(((real_T)(M[131ULL] != 0) * 2.0 - 1.0) * (t2369 / (t2293 ==
    0.0 ? 1.0E-16 : t2293) / (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]))) * t2290 *
    0.64;
  t4043 = t2241 - t2241 * 0.95;
  t2598 = (zc_int54 - t2241 * 0.95) / (t4043 == 0.0 ? 1.0E-16 : t4043);
  t2671 = t2598 * t2598 * 3.0 - t2598 * t2598 * t2598 * 2.0;
  if (t2294 <= t2295 * 0.95) {
    t2598 = zc_int54 * 100000.0;
  } else if (t2294 >= t2295) {
    t2598 = t2241 * 100000.0;
  } else {
    t2598 = ((1.0 - t2671) * zc_int54 + t2241 * t2671) * 100000.0;
  }

  t2671 = (-zc_int54 - t2241 * 0.95) / (t4043 == 0.0 ? 1.0E-16 : t4043);
  t2093[0ULL] = X[112ULL] >= 0.0 ? t2645 : X[15ULL];
  tlu2_linear_linear_prelookup(&dy_efOut.mField0[0ULL], &dy_efOut.mField1[0ULL],
    &dy_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t116 = dy_efOut;
  tlu2_1d_linear_linear_value(&ey_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = ey_efOut[0];
  t2236 = t2086_idx_0;
  t2710 = t2671 * t2671 * 3.0 - t2671 * t2671 * t2671 * 2.0;
  if (-t2294 <= t2295 * 0.95) {
    t2671 = zc_int54 * 100000.0;
  } else if (-t2294 >= t2295) {
    t2671 = -t2241 * 100000.0;
  } else {
    t2671 = ((1.0 - t2710) * zc_int54 + -t2241 * t2710) * 100000.0;
  }

  zc_int54 = ((real_T)(M[18ULL] != 0) * 2.0 - 1.0) * (t4044 / (X[174ULL] == 0.0 ?
    1.0E-16 : X[174ULL])) * (t4044 / (X[174ULL] == 0.0 ? 1.0E-16 : X[174ULL])) *
    (X[177ULL] / 0.32) * (X[177ULL] / 0.32) / 2.0 * 9.999999999999999E-14 +
    intrm_sf_mf_1443;
  t4044 = X[79ULL] * piece98;
  t2295 = pmf_sqrt(intrm_sf_mf_176 * intrm_sf_mf_176 * 9.999999999999999E-14 +
                   ((real_T)(M[194ULL] != 0) * 2.0 - 1.0) * X[178ULL] * t2302 *
                   t2300 * 1.0E-9);
  intrm_sf_mf_176 = pmf_sqrt(t2312 * t2312 * 9.999999999999999E-14 + ((real_T)
    (M[195ULL] != 0) * 2.0 - 1.0) * X[181ULL] * t2313 * t2300 * 1.0E-9);
  t2302 = -pmf_sqrt(((real_T)(M[197ULL] != 0) * 2.0 - 1.0) * (t2379 / (t2300 ==
    0.0 ? 1.0E-16 : t2300) / (X[178ULL] == 0.0 ? 1.0E-16 : X[178ULL]))) * 0.32;
  t2312 = t2306 * t2302 * 2.9973120849090416 / (t2387 == 0.0 ? 1.0E-16 : t2387);
  if (t2307 >= 0.0) {
    t2313 = t2302 * 100000.0;
  } else {
    t2313 = -t2302 * 100000.0;
  }

  t2307 = t2313 * 0.01 / (t2383 == 0.0 ? 1.0E-16 : t2383);
  piece98 = t2310 >= 1.0 ? t2307 : 1.0;
  t4062 = pmf_log10(6.9 / (piece98 == 0.0 ? 1.0E-16 : piece98) +
                    0.00017169489553429715) * pmf_log10(6.9 / (piece98 == 0.0 ?
    1.0E-16 : piece98) + 0.00017169489553429715) * 3.24;
  t2302 = t2302 * t2313 * (1.0 / (t4062 == 0.0 ? 1.0E-16 : t4062)) *
    0.046833001326703774 / (t2390 == 0.0 ? 1.0E-16 : t2390);
  t2307 = (t2307 - 2000.0) / 2000.0;
  t2313 = t2307 * t2307 * 3.0 - t2307 * t2307 * t2307 * 2.0;
  if (t2310 <= 2000.0) {
    t2307 = t2312 * 1.0E-5;
  } else if (t2310 >= 4000.0) {
    t2307 = t2302 * 1.0E-5;
  } else {
    t2307 = ((1.0 - t2313) * t2312 + t2302 * t2313) * 1.0E-5;
  }

  t4062 = X[177ULL] * t2295;
  t2295 = t4062 / 0.32 * 0.00031622776601683789 + t2307;
  t4083 = -t2295 - t2295 * -0.95;
  t2302 = (-t152 - t2295 * -0.95) / (t4083 == 0.0 ? 1.0E-16 : t4083);
  t2307 = t2302 * t2302 * 3.0 - t2302 * t2302 * t2302 * 2.0;
  if (-t152 <= t151 * -0.95) {
    t2302 = t152;
  } else if (-t152 >= -t151) {
    t2302 = t2295;
  } else {
    t2302 = (1.0 - t2307) * t152 + t2295 * t2307;
  }

  t151 = -pmf_sqrt(((real_T)(M[198ULL] != 0) * 2.0 - 1.0) * (t2399 / (t2300 ==
    0.0 ? 1.0E-16 : t2300) / (X[181ULL] == 0.0 ? 1.0E-16 : X[181ULL]))) * 0.32;
  t2306 = t2306 * t151 * 2.9973120849090416 / (t2387 == 0.0 ? 1.0E-16 : t2387);
  if (t2163 >= 0.0) {
    t2307 = t151 * 100000.0;
  } else {
    t2307 = -t151 * 100000.0;
  }

  t2310 = t2307 * 0.01 / (t2383 == 0.0 ? 1.0E-16 : t2383);
  t2312 = t2317 >= 1.0 ? t2310 : 1.0;
  t4075 = pmf_log10(6.9 / (t2312 == 0.0 ? 1.0E-16 : t2312) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t2312 == 0.0 ?
    1.0E-16 : t2312) + 0.00017169489553429715) * 3.24;
  t151 = t151 * t2307 * (1.0 / (t4075 == 0.0 ? 1.0E-16 : t4075)) *
    0.046833001326703774 / (t2390 == 0.0 ? 1.0E-16 : t2390);
  t2307 = (t2310 - 2000.0) / 2000.0;
  t2310 = t2307 * t2307 * 3.0 - t2307 * t2307 * t2307 * 2.0;
  if (t2317 <= 2000.0) {
    t2307 = t2306 * 1.0E-5;
  } else if (t2317 >= 4000.0) {
    t2307 = t151 * 1.0E-5;
  } else {
    t2307 = ((1.0 - t2310) * t2306 + t151 * t2310) * 1.0E-5;
  }

  t2093[0ULL] = X[114ULL] >= 0.0 ? t2645 : X[9ULL];
  tlu2_linear_linear_prelookup(&fy_efOut.mField0[0ULL], &fy_efOut.mField1[0ULL],
    &fy_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t117 = fy_efOut;
  tlu2_1d_linear_linear_value(&gy_efOut[0ULL], &t117.mField0[0ULL],
    &t117.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL],
    &t170[0ULL]);
  t2086_idx_0 = gy_efOut[0];
  t2295 = t2086_idx_0;
  t4075 = X[180ULL] * intrm_sf_mf_176;
  intrm_sf_mf_176 = t4075 / 0.32 * 0.00031622776601683789 + t2307;
  t4085 = -intrm_sf_mf_176 - intrm_sf_mf_176 * -0.95;
  t151 = (-t2316 - intrm_sf_mf_176 * -0.95) / (t4085 == 0.0 ? 1.0E-16 : t4085);
  t2306 = t151 * t151 * 3.0 - t151 * t151 * t151 * 2.0;
  if (-t2316 <= t2314 * -0.95) {
    t151 = t2316;
  } else if (-t2316 >= -t2314) {
    t151 = intrm_sf_mf_176;
  } else {
    t151 = (1.0 - t2306) * t2316 + intrm_sf_mf_176 * t2306;
  }

  t2306 = -(piece14 * 100000.0);
  t2312 = -(t2244 * 100000.0);
  t2244 = -(t2311 * 100000.0);
  t2311 = -(piece82 * 100000.0);
  t2313 = -(piece101 * 100000.0);
  t2314 = -(piece117 * 100000.0);
  t2163 = -(piece120 * 100000.0);
  t2317 = -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 *
            100000.0);
  piece82 = -(t2555 * 100000.0);
  piece101 = -(t2592 * 100000.0);
  piece117 = -(piece174 * 100000.0);
  piece120 = -(t2680 * 100000.0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2 = -(piece194 *
    100000.0);
  t2555 = -(t2709 * 100000.0);
  t2592 = -(t2774 * 100000.0);
  piece174 = -(t4885 * 100000.0);
  t2645 = -(t2830 * 100000.0);
  piece194 = -(t2866 * 100000.0);
  t2710 = -(t2927 * 100000.0);
  t2736 = t2237 / 192970.66424 * pmf_log(t2247 / (t4790 == 0.0 ? 1.0E-16 : t4790));
  t4790 = ((t2736 - t2141) - t2218 * 0.01) - piece245;
  t4551 = t4548 * 241812.2160511087 / 0.0020158806832745466 * 0.001 - t2217 *
    0.001;
  t2093[0] = 293.15;
  tlu2_linear_linear_prelookup(&hy_efOut.mField0[0ULL], &hy_efOut.mField1[0ULL],
    &hy_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t2093[0ULL],
    &t1563[0ULL], &t170[0ULL]);
  t137 = hy_efOut;
  tlu2_1d_linear_linear_value(&iy_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t1563[0ULL],
    &t170[0ULL]);
  t1565[0] = iy_efOut[0];
  tlu2_1d_linear_linear_value(&jy_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t1563[0ULL],
    &t170[0ULL]);
  t1613[0] = jy_efOut[0];
  t2114[0ULL] = t137.mField0[0ULL];
  t2114[1ULL] = t137.mField0[1ULL];
  t1560[0ULL] = t137.mField2[0ULL];
  tlu2_1d_linear_linear_value(&ky_efOut[0ULL], &t2114[0ULL], &t1560[0ULL],
    ((_NeDynamicSystem*)(LC))->mField15, &t1563[0ULL], &t170[0ULL]);
  t2093[0] = ky_efOut[0];
  t2217 = ((-t2137 - t2140) * t1565[0ULL] + t1613[0ULL] * t2137) + t2093[0ULL] *
    t2140;
  t2218 = ((-t2663 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18) *
           296.802103844292 + t2663 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 *
    259.836612622973;
  tlu2_1d_linear_linear_value(&ly_efOut[0ULL], &t137.mField0[0ULL],
    &t137.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t1563[0ULL],
    &t170[0ULL]);
  t2096[0] = ly_efOut[0];
  t2736 = ((-t2663 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18) *
           t1565[0ULL] + t1613[0ULL] * t2663) + t2096[0ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18;
  t4098 = ((-t2668 - t2669) * 296.802103844292 + t2668 * 461.523) + t2669 *
    259.836612622973;
  t2669 = ((piece307 - pmf_log(X[44ULL] * 100000.0) * t2670) - t2513) + t4098 *
    11.526088451496509;
  piece307 = ((piece313 - t4098 * 11.526088451496509) - t2613) + pmf_log(X[44ULL]
    * 100000.0) * t2670;
  t2613 = ((-t2908 - t2909) * 296.802103844292 + t2908 * 461.523) + t2909 *
    259.836612622973;
  piece313 = ((-t2908 - t2909) * t1565[0ULL] + t1613[0ULL] * t2908) + t2096[0ULL]
    * t2909;
  t1565[0ULL] = X[0ULL] * 5.2410901467505238E-5;
  t1560[0] = 6ULL;
  tlu2_linear_linear_prelookup(&my_efOut.mField0[0ULL], &my_efOut.mField1[0ULL],
    &my_efOut.mField2[0ULL], &nonscalar44[0ULL], &t1565[0ULL], &t1560[0ULL],
    &t170[0ULL]);
  t131 = my_efOut;
  t1565[0] = 298.15;
  t1563[0] = 7ULL;
  tlu2_linear_linear_prelookup(&ny_efOut.mField0[0ULL], &ny_efOut.mField1[0ULL],
    &ny_efOut.mField2[0ULL], &nonscalar45[0ULL], &t1565[0ULL], &t1563[0ULL],
    &t170[0ULL]);
  t138 = ny_efOut;
  t1565[0ULL] = X[367ULL];
  t2085[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&oy_efOut.mField0[0ULL], &oy_efOut.mField1[0ULL],
    &oy_efOut.mField2[0ULL], &nonscalar48[0ULL], &t1565[0ULL], &t2085[0ULL],
    &t170[0ULL]);
  t116 = oy_efOut;
  t1565[0ULL] = U_idx_5 * 376.99111843077515 * 0.99999999999999978 /
    0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978;
  t1569[0] = 3ULL;
  tlu2_linear_nearest_prelookup(&py_efOut.mField0[0ULL], &py_efOut.mField1[0ULL],
    &py_efOut.mField2[0ULL], &nonscalar49[0ULL], &t1565[0ULL], &t1569[0ULL],
    &t170[0ULL]);
  t117 = py_efOut;
  if (X[63ULL] != X[63ULL]) {
    t4885 = X[63ULL];
  } else if (X[63ULL] > 0.0) {
    t4885 = 1.0;
  } else {
    t4885 = X[63ULL] < 0.0 ? -1.0 : 0.0;
  }

  t1565[0ULL] = t4885 * X[62ULL];
  tlu2_linear_nearest_prelookup(&qy_efOut.mField0[0ULL], &qy_efOut.mField1[0ULL],
    &qy_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t1565[0ULL],
    &t1049[0ULL], &t170[0ULL]);
  t103 = qy_efOut;
  t3253 = -((X[68ULL] * 0.1 + 650.0) * t2440 + (1.0 - t2440) * X[68ULL] * 1000.0);
  t2774 = M[108ULL] != 0 ? X[66ULL] : 0.9;
  t2440 = -((X[70ULL] - X[68ULL] * X[69ULL] * 0.001) * t4536 / (t2774 == 0.0 ?
             1.0E-16 : t2774) * 1000.0 + (1.0 - t4536) * X[66ULL] / 1000.0);
  if (M[196ULL] != 0) {
    t4536 = ((t4830 - X[71ULL]) - 0.799999992) * 1000.0;
  } else {
    t4536 = (t4830 - X[71ULL]) * 1.0E-5;
  }

  if (M[205ULL] != 0) {
    t2670 = t4830 - (X[74ULL] - t4831) * t2964 * 0.001;
  } else {
    t2670 = (X[69ULL] - X[71ULL]) - (t4831 * 0.001 + X[69ULL]) * t2964;
  }

  if (M[233ULL] != 0) {
    t4830 = -X[73ULL] - (X[111ULL] - 0.59999999819999994) / 0.3;
  } else {
    t4830 = -X[73ULL] - X[111ULL] * 1.0E-8;
  }

  if (t2215 >= 0.0) {
    t2675 = (X[147ULL] - X[20ULL]) - t2229;
  } else {
    t2675 = (X[147ULL] - X[20ULL]) - t2705;
  }

  if (-X[133ULL] >= 0.0) {
    t2229 = (X[151ULL] - X[20ULL]) - t2238;
  } else {
    t2229 = (X[151ULL] - X[20ULL]) - t147;
  }

  if (t2294 >= 0.0) {
    t147 = X[133ULL] - t2598;
  } else {
    t147 = X[133ULL] - t2671;
  }

  if (X[177ULL] >= 0.0) {
    t2238 = (X[179ULL] - X[23ULL]) - t152;
  } else {
    t2238 = (X[179ULL] - X[23ULL]) - t2302;
  }

  if (X[180ULL] >= 0.0) {
    t2294 = (X[182ULL] - X[23ULL]) - t2316;
  } else {
    t2294 = (X[182ULL] - X[23ULL]) - t151;
  }

  if (-X[180ULL] >= 0.0) {
    t2302 = (X[200ULL] - X[24ULL]) - t2370;
  } else {
    t2302 = (X[200ULL] - X[24ULL]) - t2363;
  }

  if (X[201ULL] >= 0.0) {
    t151 = (X[203ULL] - X[24ULL]) - t2388;
  } else {
    t151 = (X[203ULL] - X[24ULL]) - t155;
  }

  if (-X[293ULL] >= 0.0) {
    t152 = (X[304ULL] - X[41ULL]) - t2590;
  } else {
    t152 = (X[304ULL] - X[41ULL]) - t161;
  }

  if (-X[263ULL] >= 0.0) {
    t2316 = (X[308ULL] - X[41ULL]) - t2599;
  } else {
    t2316 = (X[308ULL] - X[41ULL]) - t2544;
  }

  if (t2648 >= 0.0) {
    t2363 = -X[293ULL] - t162;
  } else {
    t2363 = -X[293ULL] - t2579;
  }

  if (-X[272ULL] >= 0.0) {
    t155 = (X[383ULL] - X[51ULL]) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_Dp_AI_unchoke;
  } else {
    t155 = (X[383ULL] - X[51ULL]) - zc_int196;
  }

  if (X[384ULL] >= 0.0) {
    t2370 = (X[386ULL] - X[51ULL]) - t2715;
  } else {
    t2370 = (X[386ULL] - X[51ULL]) - t2223;
  }

  if (-X[384ULL] >= 0.0) {
    t2223 = (X[397ULL] - X[52ULL]) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_AI_unchoke;
  } else {
    t2223 = (X[397ULL] - X[52ULL]) - t2234;
  }

  if (X[398ULL] >= 0.0) {
    t2234 = (X[400ULL] - X[52ULL]) - t2784;
  } else {
    t2234 = (X[400ULL] - X[52ULL]) - t2616;
  }

  if (-X[398ULL] >= 0.0) {
    t2388 = (X[411ULL] - X[53ULL]) - t2828;
  } else {
    t2388 = (X[411ULL] - X[53ULL]) - zc_int273;
  }

  if (X[145ULL] >= 0.0) {
    t2544 = (X[413ULL] - X[53ULL]) - t2836;
  } else {
    t2544 = (X[413ULL] - X[53ULL]) - t2673;
  }

  if (-X[361ULL] >= 0.0) {
    t161 = (X[428ULL] - X[57ULL]) - t2863;
  } else {
    t161 = (X[428ULL] - X[57ULL]) - zc_int306;
  }

  if (-X[177ULL] >= 0.0) {
    t162 = (X[430ULL] - X[57ULL]) - t2877;
  } else {
    t162 = (X[430ULL] - X[57ULL]) - t163;
  }

  if (-X[201ULL] >= 0.0) {
    t163 = (X[457ULL] - X[59ULL]) - t2924;
  } else {
    t163 = (X[457ULL] - X[59ULL]) - zc_int335;
  }

  if (-X[444ULL] >= 0.0) {
    t2579 = (X[461ULL] - X[59ULL]) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_unchoke;
  } else {
    t2579 = (X[461ULL] - X[59ULL]) - t2672;
  }

  if (t2967 >= 0.0) {
    t2590 = X[444ULL] - t2708;
  } else {
    t2590 = X[444ULL] - t2713;
  }

  if (M[45ULL] != 0) {
    t2598 = X[477ULL] - X[479ULL];
  } else if (M[46ULL] != 0) {
    t2598 = X[477ULL] - (-X[479ULL]);
  } else {
    t2598 = X[477ULL] - X[63ULL];
  }

  tlu2_2d_linear_linear_value(&ry_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], &t138.mField0[0ULL], &t138.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField0, &t1560[0ULL], &t1563[0ULL], &t170[0ULL]);
  t1565[0] = ry_efOut[0];
  tlu2_2d_linear_linear_value(&sy_efOut[0ULL], &t131.mField0[0ULL],
    &t131.mField2[0ULL], &t138.mField0[0ULL], &t138.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField37, &t1560[0ULL], &t1563[0ULL], &t170[0ULL]);
  t1613[0] = sy_efOut[0];
  tlu2_2d_linear_linear_value(&ty_efOut[0ULL], &t86.mField0[0ULL], &t86.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2096[0] = ty_efOut[0];
  tlu2_2d_linear_linear_value(&uy_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2093[0] = uy_efOut[0];
  tlu2_2d_linear_linear_value(&vy_efOut[0ULL], &t91.mField0[0ULL], &t91.mField2
    [0ULL], &t119.mField0[0ULL], &t119.mField2[0ULL], ((_NeDynamicSystem*)(LC)
    )->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2086_idx_0 = vy_efOut[0];
  tlu2_2d_linear_linear_value(&wy_efOut[0ULL], &t135.mField0[0ULL],
    &t135.mField2[0ULL], &t119.mField0[0ULL], &t119.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2099_idx_0 = wy_efOut[0];
  tlu2_2d_linear_linear_value(&xy_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  t2100_idx_0 = xy_efOut[0];
  tlu2_2d_linear_linear_value(&yy_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  U_idx_0 = yy_efOut[0];
  tlu2_2d_linear_linear_value(&aab_efOut[0ULL], &t69.mField0[0ULL],
    &t69.mField2[0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  U_idx_2 = aab_efOut[0];
  tlu2_2d_linear_linear_value(&bab_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  U_idx_4 = bab_efOut[0];
  tlu2_2d_linear_linear_value(&cab_efOut[0ULL], &t136.mField0[0ULL],
    &t136.mField2[0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField25, &t386[0ULL], &t389[0ULL], &t170[0ULL]);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I = cab_efOut[0];
  tlu2_2d_linear_nearest_value(&dab_efOut[0ULL], &t116.mField0[0ULL],
    &t116.mField2[0ULL], &t117.mField0[0ULL], &t117.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField38, &t2085[0ULL], &t1569[0ULL], &t170[0ULL]);
  U_idx_10 = dab_efOut[0];
  tlu2_1d_linear_nearest_value(&eab_efOut[0ULL], &t103.mField0[0ULL],
    &t103.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField39, &t1049[0ULL],
    &t170[0ULL]);
  t2969 = eab_efOut[0];
  t1612[0ULL] = -0.0;
  t1612[1ULL] = -X[64ULL] * (real_T)(X[64ULL] < 0.0) / 19080.0;
  t1612[2ULL] = 0.0;
  t1612[3ULL] = -0.0;
  t1612[4ULL] = -0.0;
  t1612[5ULL] = -0.0;
  t1612[6ULL] = -0.0;
  t1612[7ULL] = -((((t2287 - t2274 * X[21ULL]) * (-164.72089615570803 / (t2221 ==
    0.0 ? 1.0E-16 : t2221)) + (t2286 - t2274 * X[22ULL]) * (-3827.6794129126583 /
    (t2221 == 0.0 ? 1.0E-16 : t2221))) - t2306) / 12.896402563644669);
  t1612[8ULL] = -(-8.1984652990144453E-5 + ((((t2284 - t2289) * (t2287 - t2274 *
    X[21ULL]) + (t2283 - t2289) * (t2286 - t2274 * X[22ULL])) + t2274 * (t2275 -
    X[19ULL] * t2221 * 0.001)) - t2312) / 2246.65922904024);
  t1612[9ULL] = -(t2274 * X[21ULL] - t2306);
  t1612[10ULL] = -(t2274 * X[22ULL]);
  t1612[11ULL] = -(((t2356 - t2355 * X[14ULL]) * (-164.72089615570803 / (t2300 ==
    0.0 ? 1.0E-16 : t2300)) + (t2354 - t2355 * X[13ULL]) * (36.965491221318985 /
    (t2300 == 0.0 ? 1.0E-16 : t2300))) - t2244);
  t1612[12ULL] = -(((((t2353 - t2359) * (t2356 - t2355 * X[14ULL]) + (t2351 -
    t2359) * (t2354 - t2355 * X[13ULL])) + t2355 * (t2357 - X[12ULL] * t2300 *
    0.001)) - t2311) / 2172.7681408465714);
  t1612[13ULL] = -(t2355 * X[14ULL] - t2244);
  t1612[14ULL] = -(t2355 * X[13ULL]);
  t1612[15ULL] = -((((t2416 - t2415 * X[17ULL]) * (-164.72089615570803 / (t2361 ==
    0.0 ? 1.0E-16 : t2361)) + (t2414 - t2415 * X[16ULL]) * (36.965491221318985 /
    (t2361 == 0.0 ? 1.0E-16 : t2361))) - t2313) / 1.5549856083302016);
  t1612[16ULL] = -((((((t2392 - X[15ULL] * 0.461523) - t2419) * (t2416 - t2415 *
    X[17ULL]) + (t2412 - t2419) * (t2414 - t2415 * X[16ULL])) + t2415 * (t2417 -
    X[15ULL] * t2361 * 0.001)) - t2314) / 2374.9296201389902);
  t1612[17ULL] = -(t2415 * X[17ULL] - t2313);
  t1612[18ULL] = -(t2415 * X[16ULL]);
  t1612[19ULL] = -(t2427 * t2428 * t2425 / 8385.55841330098);
  t1612[20ULL] = 0.0;
  t1612[21ULL] = -0.0;
  t1612[22ULL] = -0.0;
  t1612[23ULL] = -0.0;
  t1612[24ULL] = -0.0;
  t1612[25ULL] = -0.0;
  t1612[26ULL] = -((((t2539 - t2538 * X[35ULL]) * (-164.72089615570803 / (t2519 ==
    0.0 ? 1.0E-16 : t2519)) + (t2537 - t2538 * X[34ULL]) * (-3827.6794129126583 /
    (t2519 == 0.0 ? 1.0E-16 : t2519))) - t2163) / 12.896402563644669);
  t1612[27ULL] = -(((((t2536 - t2542) * (t2539 - t2538 * X[35ULL]) +
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28
                       - t2542) * (t2537 - t2538 * X[34ULL])) + t2538 * (t2540 -
    X[32ULL] * t2519 * 0.001)) - t2317) / 2246.65922904024);
  t1612[28ULL] = -(t2538 * X[35ULL] - t2163);
  t1612[29ULL] = -(t2538 * X[34ULL]);
  t1612[30ULL] = -((((t2568 - t2567 * X[39ULL]) * (-164.72089615570803 / (t2554 ==
    0.0 ? 1.0E-16 : t2554)) + (X[294ULL] - t2567 * X[38ULL]) *
                     (-3827.6794129126583 / (t2554 == 0.0 ? 1.0E-16 : t2554))) -
                    piece82) / 12.896402563644669);
  t1612[31ULL] = -(((((t2563 - t2573) * (t2568 - t2567 * X[39ULL]) + (t2562 -
    t2573) * (X[294ULL] - t2567 * X[38ULL])) + t2567 * (t2569 - X[36ULL] * t2554
    * 0.001)) - (-(t2558 * 100000.0))) / 2246.65922904024);
  t1612[32ULL] = -(t2567 * X[39ULL] - piece82);
  t1612[33ULL] = -(t2567 * X[38ULL]);
  t1612[34ULL] = -((((t2630 - t2629 * X[42ULL]) * (-164.72089615570803 / (t2575 ==
    0.0 ? 1.0E-16 : t2575)) +
                     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total
                      - t2629 * X[43ULL]) * (-3827.6794129126583 / (t2575 == 0.0
    ? 1.0E-16 : t2575))) - piece101) / 12.896402563644669);
  t1612[35ULL] = -(((((t2627 - t2637) * (t2630 - t2629 * X[42ULL]) +
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_h_a_I -
                       t2637) *
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_g_total
                       - t2629 * X[43ULL])) + t2629 * (t2634 - X[40ULL] * t2575 *
    0.001)) - piece117) / 2246.65922904024);
  t1612[36ULL] = -(t2629 * X[42ULL] - piece101);
  t1612[37ULL] = -(t2629 * X[43ULL]);
  t1612[38ULL] = -(((t2691 - t2690 * X[47ULL]) * (-164.72089615570803 / (t2679 ==
    0.0 ? 1.0E-16 : t2679)) + (t2689 - t2690 * X[46ULL]) * (36.965491221318985 /
    (t2679 == 0.0 ? 1.0E-16 : t2679))) - piece120);
  t1612[39ULL] =
    -(((((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_u_w -
          t2694) * (t2691 - t2690 * X[47ULL]) + (t2686 - t2694) * (t2689 - t2690
          * X[46ULL])) + t2690 * (t2692 - X[45ULL] * t2679 * 0.001)) -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha2) /
      2172.7681408465714);
  t1612[40ULL] = -(t2690 * X[47ULL] - piece120);
  t1612[41ULL] = -(t2690 * X[46ULL]);
  t1612[42ULL] = -((((t2749 - t2748 * X[50ULL]) * (-164.72089615570803 / (t2699 ==
    0.0 ? 1.0E-16 : t2699)) + (t2747 - t2748 * X[49ULL]) * (-3827.6794129126583 /
    (t2699 == 0.0 ? 1.0E-16 : t2699))) - t2555) / 12.896402563644669);
  t1612[43ULL] = -(((((t2746 - t2757) * (t2749 - t2748 * X[50ULL]) + (t2745 -
    t2757) * (t2747 - t2748 * X[49ULL])) + t2748 * (t2751 - X[48ULL] * t2699 *
    0.001)) - (-(t2719 * 100000.0))) / 2246.65922904024);
  t1612[44ULL] = -(t2748 * X[50ULL] - t2555);
  t1612[45ULL] = -(t2748 * X[49ULL]);
  t1612[46ULL] = -((((t2814 - t2813 * X[8ULL]) * (-164.72089615570803 / (t2759 ==
    0.0 ? 1.0E-16 : t2759)) + (t2812 - t2813 * X[7ULL]) * (-3827.6794129126583 /
    (t2759 == 0.0 ? 1.0E-16 : t2759))) - t2592) / 12.896402563644669);
  t1612[47ULL] = -(((((t2811 - t2817) * (t2814 - t2813 * X[8ULL]) + (t2810 -
    t2817) * (t2812 - t2813 * X[7ULL])) + t2813 * (t2815 - X[6ULL] * t2759 *
    0.001)) - piece174) / 2246.65922904024);
  t1612[48ULL] = -(t2813 * X[8ULL] - t2592);
  t1612[49ULL] = -(t2813 * X[7ULL]);
  t1612[50ULL] = -((((t2845 - intrm_sf_mf_1248 * X[11ULL]) *
                     (-164.72089615570803 / (t2819 == 0.0 ? 1.0E-16 : t2819)) +
                     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total
                      - intrm_sf_mf_1248 * X[10ULL]) * (-3827.6794129126583 /
    (t2819 == 0.0 ? 1.0E-16 : t2819))) - t2645) / 13.896402563644669);
  t1612[51ULL] = -(((((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_w_I
                       - t2849) * (t2845 - intrm_sf_mf_1248 * X[11ULL]) +
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_u_g_I
                       - t2849) *
                      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_mdot_g_total
                       - intrm_sf_mf_1248 * X[10ULL])) + intrm_sf_mf_1248 *
                     (t2846 - X[9ULL] * t2819 * 0.001)) - (-(intrm_sf_mf_1292 *
    100000.0))) / 2448.8207083326588);
  t1612[52ULL] = -(intrm_sf_mf_1248 * X[11ULL] - t2645);
  t1612[53ULL] = -(intrm_sf_mf_1248 * X[10ULL]);
  t1612[54ULL] = -(((t2902 - intrm_sf_mf_1395 * X[56ULL]) * (-164.72089615570803
    / (t2851 == 0.0 ? 1.0E-16 : t2851)) + (t2900 - intrm_sf_mf_1395 * X[55ULL]) *
                    (36.965491221318985 / (t2851 == 0.0 ? 1.0E-16 : t2851))) -
                   piece194);
  t1612[55ULL] = -(((((t2899 - t2905) * (t2902 - intrm_sf_mf_1395 * X[56ULL]) +
                      (t2898 - t2905) * (t2900 - intrm_sf_mf_1395 * X[55ULL])) +
                     intrm_sf_mf_1395 * (t2903 - X[54ULL] * t2851 * 0.001)) -
                    (-(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Phi_w_condens
                       * 100000.0))) / 2172.7681408465714);
  t1612[56ULL] = -(intrm_sf_mf_1395 * X[56ULL] - piece194);
  t1612[57ULL] = -(intrm_sf_mf_1395 * X[55ULL]);
  t1612[58ULL] = -(((t2950 - t2948 * X[60ULL]) * (-164.72089615570803 / (t2916 ==
    0.0 ? 1.0E-16 : t2916)) + (t2947 - t2948 * X[61ULL]) * (36.965491221318985 /
    (t2916 == 0.0 ? 1.0E-16 : t2916))) - t2710);
  t1612[59ULL] = -(-0.00042386385785324375 + ((((t2946 - t2956) * (t2950 - t2948
    * X[60ULL]) + (t2945 - t2956) * (t2947 - t2948 * X[61ULL])) + t2948 * (t2951
    - X[58ULL] * t2916 * 0.001)) - (-(intrm_sf_mf_1579 * 100000.0))) /
                   2172.7681408465714);
  t1612[60ULL] = -(t2948 * X[60ULL] - t2710);
  t1612[61ULL] = -(t2948 * X[61ULL]);
  t1612[62ULL] = -0.0;
  t1612[63ULL] = -0.0;
  U_idx_3 = -t1565[0ULL];
  t1612[64ULL] = U_idx_3 / 285.83999999999992;
  t1612[65ULL] = -0.0 - (X[64ULL] * (M[0ULL] != 0 ? 4.03416E-7 : X[67ULL]) +
    t2643);
  t1612[66ULL] = -t1613[0ULL];
  t1612[67ULL] = t3253 / 1000.0;
  t1612[68ULL] = t2440;
  t1612[69ULL] = -(X[68ULL] * X[68ULL] * 0.00010037240412334386) - 0.001;
  t1612[70ULL] = -t4536;
  t1612[71ULL] = t2670;
  t1612[72ULL] = -(t4831 * t2964);
  t1612[73ULL] = X[112ULL] * t2236 / 2500.99462758899;
  t1612[74ULL] = X[114ULL] * t2295 / 3575.42283463482;
  t1612[75ULL] = X[116ULL] * zc_int12 / 248.058058319568;
  t1612[76ULL] = X[120ULL] * zc_int15 / 2500.99462758899;
  t1612[77ULL] = t4555 * t2486 / 2500.99462758899;
  t1612[78ULL] = -0.20883314131306652 + -(t4790 * 400.0) / 2353.8245806357045;
  t1612[79ULL] = -t4551 / 3931.85243448965;
  t1612[80ULL] = (t2117 * 0.20177105219743391 - t4554) / 0.25205662255327149;
  t1612[81ULL] = (t2125 * 0.20177105219743391 - (t2216 + t4554)) /
    0.25205662255327149;
  t1612[82ULL] = t4554;
  t1612[83ULL] = -t4554;
  t1612[84ULL] = t4548;
  t1612[85ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t1612[86ULL] = -t2216;
  t1612[87ULL] = t4830;
  U_idx_1 = X[133ULL] + t2132;
  U_idx_3 = t2132 - X[133ULL];
  t1612[88ULL] = -(U_idx_1 / 2.0 * (((real_T)(M[109ULL] != 0) * 2.0 - 1.0) *
    (U_idx_11 / 1.01325) * (U_idx_11 / 1.01325) * (X[133ULL] /
    7.8539816339744827E-5) * (X[133ULL] / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t3009) - U_idx_3 / 2.0 * X[132ULL]) /
    365.59674280784293;
  t3253 = X[133ULL] + t2129;
  t4237 = t2129 - X[133ULL];
  t1612[89ULL] = -(t3253 / 2.0 * X[129ULL] - t4237 / 2.0 * X[137ULL]);
  t4536 = X[133ULL] +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0;
  t4831 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0 - X
    [133ULL];
  t1612[90ULL] = -(t4536 / 2.0 * X[128ULL] - t4831 / 2.0 * X[136ULL]);
  t1612[91ULL] = 0.0;
  t1612[92ULL] = X[140ULL] * t2145 / 461.523;
  t1612[93ULL] = X[130ULL] * t2148;
  t1612[94ULL] = 0.071939481849452439 + (((-t2137 - t2140) * 296.802103844292 +
    t2137 * 461.523) + t2140 * 4124.48151675695) * 0.9997 / 4124.48151675695;
  t4830 = t2145 * 293.15;
  t1612[95ULL] = -304.06022922571 - (((real_T)(M[250ULL] != 0) * 2.0 - 1.0) *
    (t4830 / 1.01325) * (t4830 / 1.01325) * (X[133ULL] / 7.8539816339744827E-5) *
    (X[133ULL] / 7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2217);
  t1612[96ULL] = -t2137;
  t1612[97ULL] = -t2140;
  t1612[98ULL] = -((t2215 + t2268) / 2.0 * (((real_T)(M[2ULL] != 0) * 2.0 - 1.0)
    * (t3579 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) * (t3579 / (X[123ULL] ==
    0.0 ? 1.0E-16 : X[123ULL])) * (t2215 / 7.8539816339744827E-5) * (t2215 /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_127) -
                   (t2268 - t2215) / 2.0 * X[156ULL]);
  t1612[99ULL] = -((t2215 + t2243) / 2.0 * X[125ULL] - (t2243 - t2215) / 2.0 *
                   X[162ULL]);
  t1612[100ULL] = -((t2215 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1)
                    / 2.0 * X[124ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio1
                     - t2215) / 2.0 * X[161ULL]);
  t1612[101ULL] = -((-X[133ULL] + t2281) / 2.0 * (((real_T)(M[12ULL] != 0) * 2.0
    - 1.0) * (t3779 / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL])) * (t3779 / (X
    [142ULL] == 0.0 ? 1.0E-16 : X[142ULL])) * (-X[133ULL] /
    7.8539816339744827E-5) * (-X[133ULL] / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t2991) - (t2281 - (-X[133ULL])) / 2.0 * X[163ULL]);
  t1612[102ULL] = -((-X[133ULL] + t2279) / 2.0 * X[144ULL] - (t2279 - (-X[133ULL]))
                    / 2.0 * X[165ULL]);
  t1612[103ULL] = -((-X[133ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6)
                    / 2.0 * X[143ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio6
                     - (-X[133ULL])) / 2.0 * X[164ULL]);
  t1612[104ULL] = -((t2249 + t2266) * 0.001) - -0.18419157727996954;
  t1612[105ULL] = -(t3968 / 7.8539816339744827E-5 * 0.00031622776601683789 +
                    t2993);
  t1612[106ULL] = -(t4010 / 7.8539816339744827E-5 * 0.00031622776601683789 +
                    intrm_sf_mf_163);
  t1612[107ULL] = t2675;
  t1612[108ULL] = t2229;
  t4830 = X[146ULL] * t2221;
  t1612[109ULL] = -(((real_T)(M[65ULL] != 0) * 2.0 - 1.0) * (t4830 / (X[147ULL] ==
    0.0 ? 1.0E-16 : X[147ULL])) * (t4830 / (X[147ULL] == 0.0 ? 1.0E-16 : X
    [147ULL])) * (t2215 / 7.8539816339744827E-5) * (t2215 /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_139);
  t4830 = X[150ULL] * t2221;
  t1612[110ULL] = -(((real_T)(M[76ULL] != 0) * 2.0 - 1.0) * (t4830 / (X[151ULL] ==
    0.0 ? 1.0E-16 : X[151ULL])) * (t4830 / (X[151ULL] == 0.0 ? 1.0E-16 : X
    [151ULL])) * (-X[133ULL] / 7.8539816339744827E-5) * (-X[133ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2254);
  t1612[111ULL] = (X[153ULL] * t2221 / 461.523 - t2248 * X[21ULL]) /
    0.64309276860371423;
  t1612[112ULL] = X[148ULL] * t2221 / 461.523;
  t1612[113ULL] = X[152ULL] * t2245;
  t1612[114ULL] = X[149ULL] * t2221 / 4124.48151675695;
  t1612[115ULL] = -(((real_T)(M[87ULL] != 0) * 2.0 - 1.0) * (t2262 / (X[20ULL] ==
    0.0 ? 1.0E-16 : X[20ULL])) * (t2262 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]))
                    * (t2215 / 7.8539816339744827E-5) * (t2215 /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2275);
  t1612[116ULL] = -t2219;
  t1612[117ULL] = -t2220;
  t1612[118ULL] = -(((real_T)(M[87ULL] != 0) * 2.0 - 1.0) * (t2262 / (X[20ULL] ==
    0.0 ? 1.0E-16 : X[20ULL])) * (t2262 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]))
                    * (-X[133ULL] / 7.8539816339744827E-5) * (-X[133ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2275);
  t1612[119ULL] = -t2219;
  t1612[120ULL] = -t2220;
  t1612[121ULL] = -(U_idx_1 / 2.0 * (((real_T)(M[12ULL] != 0) * 2.0 - 1.0) *
    (t3779 / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL])) * (t3779 / (X[142ULL] ==
    0.0 ? 1.0E-16 : X[142ULL])) * (X[133ULL] / 7.8539816339744827E-5) * (X
    [133ULL] / 7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2991) -
                    U_idx_3 / 2.0 * X[172ULL]);
  t1612[122ULL] = -(t3253 / 2.0 * X[144ULL] - t4237 / 2.0 * X[168ULL]);
  t1612[123ULL] = -(t4536 / 2.0 * X[143ULL] - t4831 / 2.0 * X[169ULL]);
  t1612[124ULL] = -((-X[133ULL] + t2132) / 2.0 * (((real_T)(M[109ULL] != 0) *
    2.0 - 1.0) * (U_idx_11 / 1.01325) * (U_idx_11 / 1.01325) * (-X[133ULL] /
    7.8539816339744827E-5) * (-X[133ULL] / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t3009) - (t2132 - (-X[133ULL])) / 2.0 * X[172ULL]) /
    365.59674280784293;
  t1612[125ULL] = -((-X[133ULL] + t2129) / 2.0 * X[129ULL] - (t2129 - (-X[133ULL]))
                    / 2.0 * X[168ULL]);
  t1612[126ULL] = -((-X[133ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0)
                    / 2.0 * X[128ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Environment_conve0
                     - (-X[133ULL])) / 2.0 * X[169ULL]);
  t1612[127ULL] = t147;
  t1612[128ULL] = -(t2291 - t2297);
  U_idx_1 = X[170ULL] * t2293;
  t1612[129ULL] = -(((real_T)(M[142ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [142ULL] == 0.0 ? 1.0E-16 : X[142ULL])) * (U_idx_1 / (X[142ULL] == 0.0 ?
    1.0E-16 : X[142ULL])) * (X[133ULL] / 0.64 / 7.8539816339744827E-5) * (X
    [133ULL] / 0.64 / 7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 +
                    t2970);
  U_idx_1 = X[171ULL] * t2293;
  t1612[130ULL] = -(((real_T)(M[153ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / 1.01325)
                    * (U_idx_1 / 1.01325) * (X[133ULL] / 0.64 /
    7.8539816339744827E-5) * (X[133ULL] / 0.64 / 7.8539816339744827E-5) / 2.0 *
                    9.999999999999999E-14 + t3006) / 1.0413512978067061;
  t1612[131ULL] = -(((real_T)(M[164ULL] != 0) * 2.0 - 1.0) * (t2345 / (X[167ULL]
    == 0.0 ? 1.0E-16 : X[167ULL])) * (t2345 / (X[167ULL] == 0.0 ? 1.0E-16 : X
    [167ULL])) * (X[133ULL] / 0.64 / (t2290 == 0.0 ? 1.0E-16 : t2290)) * (X
    [133ULL] / 0.64 / (t2290 == 0.0 ? 1.0E-16 : t2290)) / 2.0 *
                    9.999999999999999E-14 + t3010);
  t1612[132ULL] = -((X[177ULL] + t2339) / 2.0 * zc_int54 - (t2339 - X[177ULL]) /
                    2.0 * X[185ULL]);
  t1612[133ULL] = -((X[177ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1)
                    / 2.0 * X[176ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_1
                     - X[177ULL]) / 2.0 * X[189ULL]);
  t1612[134ULL] = -((X[177ULL] + t2330) / 2.0 * X[175ULL] - (t2330 - X[177ULL]) /
                    2.0 * X[188ULL]);
  t1612[135ULL] = -((X[180ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5)
                    / 2.0 * (((real_T)(M[185ULL] != 0) * 2.0 - 1.0) * (t4044 /
    (X[80ULL] == 0.0 ? 1.0E-16 : X[80ULL])) * (t4044 / (X[80ULL] == 0.0 ?
    1.0E-16 : X[80ULL])) * (X[180ULL] / 0.32) * (X[180ULL] / 0.32) / 2.0 *
    9.999999999999999E-14 + zc_int95) -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5
                     - X[180ULL]) / 2.0 * X[190ULL]);
  t1612[136ULL] = -((X[180ULL] + t2343) / 2.0 * X[82ULL] - (t2343 - X[180ULL]) /
                    2.0 * X[194ULL]);
  t1612[137ULL] = -((X[180ULL] + t2341) / 2.0 * X[81ULL] - (t2341 - X[180ULL]) /
                    2.0 * X[193ULL]);
  t1612[138ULL] = -(((X[18ULL] - X[12ULL]) * (t2321 * 10.709248339636167 / 0.01)
                     + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_Q_conv)
                    * 0.001);
  t1612[139ULL] = -(t4062 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_327);
  t1612[140ULL] = -(t4075 / 0.32 * 0.00031622776601683789 + t3014);
  t1612[141ULL] = t2238;
  t1612[142ULL] = t2294;
  U_idx_1 = X[178ULL] * t2300;
  t1612[143ULL] = -(((real_T)(M[199ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [179ULL] == 0.0 ? 1.0E-16 : X[179ULL])) * (U_idx_1 / (X[179ULL] == 0.0 ?
    1.0E-16 : X[179ULL])) * (X[177ULL] / 0.32) * (X[177ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2331);
  U_idx_1 = X[181ULL] * t2300;
  t1612[144ULL] = -(((real_T)(M[200ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [182ULL] == 0.0 ? 1.0E-16 : X[182ULL])) * (U_idx_1 / (X[182ULL] == 0.0 ?
    1.0E-16 : X[182ULL])) * (X[180ULL] / 0.32) * (X[180ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2334);
  t1612[145ULL] = (X[96ULL] * t2300 / 461.523 - t2324 * X[14ULL]) /
    0.64309276860371423;
  t1612[146ULL] = X[94ULL] * t2300 / 461.523;
  t1612[147ULL] = X[97ULL] * t2323;
  t1612[148ULL] = X[93ULL] * t2300 / 259.836612622973 / 1.1422643670118826;
  t1612[149ULL] = 0.0;
  t1612[150ULL] = -(((real_T)(M[201ULL] != 0) * 2.0 - 1.0) * (t2385 / (X[23ULL] ==
    0.0 ? 1.0E-16 : X[23ULL])) * (t2385 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]))
                    * (X[177ULL] / 0.32) * (X[177ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2357);
  t1612[151ULL] = -intrm_sf_mf_202;
  t1612[152ULL] = -t2298;
  t1612[153ULL] = -(((real_T)(M[201ULL] != 0) * 2.0 - 1.0) * (t2385 / (X[23ULL] ==
    0.0 ? 1.0E-16 : X[23ULL])) * (t2385 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]))
                    * (X[180ULL] / 0.32) * (X[180ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2357);
  t1612[154ULL] = -intrm_sf_mf_202;
  t1612[155ULL] = -t2298;
  t1612[156ULL] = -((-X[180ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5)
                    / 2.0 * (((real_T)(M[185ULL] != 0) * 2.0 - 1.0) * (t4044 /
    (X[80ULL] == 0.0 ? 1.0E-16 : X[80ULL])) * (t4044 / (X[80ULL] == 0.0 ?
    1.0E-16 : X[80ULL])) * (-X[180ULL] / 0.32) * (-X[180ULL] / 0.32) / 2.0 *
    9.999999999999999E-14 + zc_int95) -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_convection_5
                     - (-X[180ULL])) / 2.0 * X[205ULL]);
  t1612[157ULL] = -((-X[180ULL] + t2343) / 2.0 * X[82ULL] - (t2343 - (-X[180ULL]))
                    / 2.0 * X[207ULL]);
  t1612[158ULL] = -((-X[180ULL] + t2341) / 2.0 * X[81ULL] - (t2341 - (-X[180ULL]))
                    / 2.0 * X[206ULL]);
  t1612[159ULL] = -((X[201ULL] + t2410) / 2.0 * (((real_T)(M[29ULL] != 0) * 2.0
    - 1.0) * (t3942 / (X[196ULL] == 0.0 ? 1.0E-16 : X[196ULL])) * (t3942 / (X
    [196ULL] == 0.0 ? 1.0E-16 : X[196ULL])) * (X[201ULL] / 0.32) * (X[201ULL] /
    0.32) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1586) - (t2410 - X[201ULL])
                    / 2.0 * X[208ULL]);
  t1612[160ULL] = -((X[201ULL] + t2409) / 2.0 * X[198ULL] - (t2409 - X[201ULL]) /
                    2.0 * X[212ULL]);
  t1612[161ULL] = -((X[201ULL] + t2397) / 2.0 * X[197ULL] - (t2397 - X[201ULL]) /
                    2.0 * X[211ULL]);
  t1612[162ULL] = -((t2404 + t2406) * 0.001);
  t1612[163ULL] = -(t2999 / 0.32 * 0.00031622776601683789 + t3018);
  t1612[164ULL] = -(t3557 / 0.32 * 0.00031622776601683789 + t3019);
  t1612[165ULL] = t2302;
  t1612[166ULL] = t151;
  U_idx_1 = X[199ULL] * t2361;
  t1612[167ULL] = -(((real_T)(M[207ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [200ULL] == 0.0 ? 1.0E-16 : X[200ULL])) * (U_idx_1 / (X[200ULL] == 0.0 ?
    1.0E-16 : X[200ULL])) * (-X[180ULL] / 0.32) * (-X[180ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2292);
  U_idx_1 = X[202ULL] * t2361;
  t1612[168ULL] = -(((real_T)(M[208ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [203ULL] == 0.0 ? 1.0E-16 : X[203ULL])) * (U_idx_1 / (X[203ULL] == 0.0 ?
    1.0E-16 : X[203ULL])) * (X[201ULL] / 0.32) * (X[201ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t3012);
  t1612[169ULL] = (X[101ULL] * t2361 / 461.523 - t2402 * X[17ULL]) /
    0.64309276860371423;
  t1612[170ULL] = X[99ULL] * t2361 / 461.523;
  t1612[171ULL] = X[102ULL] * t2400;
  t1612[172ULL] = X[98ULL] * t2361 / 259.836612622973 / 1.1422643670118826;
  t1612[173ULL] = 0.0;
  t1612[174ULL] = -(((real_T)(M[209ULL] != 0) * 2.0 - 1.0) * (t2479 / (X[24ULL] ==
    0.0 ? 1.0E-16 : X[24ULL])) * (t2479 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]))
                    * (-X[180ULL] / 0.32) * (-X[180ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2417);
  t1612[175ULL] = -intrm_sf_mf_339;
  t1612[176ULL] = -t2360;
  t1612[177ULL] = -(((real_T)(M[209ULL] != 0) * 2.0 - 1.0) * (t2479 / (X[24ULL] ==
    0.0 ? 1.0E-16 : X[24ULL])) * (t2479 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]))
                    * (X[201ULL] / 0.32) * (X[201ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2417);
  t1612[178ULL] = -intrm_sf_mf_339;
  t1612[179ULL] = -t2360;
  t1612[180ULL] = 293.15;
  t1612[181ULL] = ((-X[216ULL] - X[217ULL]) / (t2421 == 0.0 ? 1.0E-16 : t2421) -
                   ((t2420 * t2424 -
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan7
                     * X[221ULL]) + t2423 * 100.0)) / 1.233284047215034E+6;
  U_idx_1 = t2096[0ULL] - (t2420 * t2424 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan7 * X[221ULL]);
  t1612[182ULL] = U_idx_1 / 171803.29647667333;
  t1612[183ULL] = -t2426 / 4.1888;
  t1612[184ULL] = t2427 * t2425 / 99.820599640000012;
  t1612[185ULL] = (X[226ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429) - ((t2433 *
    t2434 - t2430 * X[229ULL]) + t2432 * 100.0)) / 8.80132724281134E+6;
  U_idx_3 = t2093[0ULL] - (t2433 * t2434 + t2430 * X[229ULL]);
  t1612[186ULL] = U_idx_3 / 1.2260736179143097E+6;
  t1612[187ULL] = (-X[226ULL] / (t2429 == 0.0 ? 1.0E-16 : t2429) - ((t2437 *
    t2438 - X[229ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Flow_Resistance_TL_9) + t2436 *
    100.0)) / 8.80132724281134E+6;
  t1612[188ULL] = (t2086_idx_0 - (t2437 * t2438 + X[229ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Flow_Resistance_TL_9)) /
    1.2260736179143097E+6;
  t1612[189ULL] = -(pmf_sqrt(X[228ULL] * X[228ULL] + 1.0E-8) * X[228ULL] *
                    0.99999999999999978);
  t1612[190ULL] = (X[226ULL] / (t2448 == 0.0 ? 1.0E-16 : t2448) - ((t2438 *
    t2451 - t2449 * X[232ULL]) + t2450 * 100.0)) / 4.3603175645747058E+7;
  t1612[191ULL] = (t2099_idx_0 - (t2438 * t2451 + t2449 * X[232ULL])) /
    6.0741637984429337E+6;
  t1612[192ULL] = (X[216ULL] / (t2452 == 0.0 ? 1.0E-16 : t2452) - ((t2424 *
    t2456 - t2453 * X[234ULL]) + t2454 * 100.0)) / 4.3603175645747058E+7;
  t1612[193ULL] = (t2100_idx_0 - (t2424 * t2456 + t2453 * X[234ULL])) /
    6.0741637984429337E+6;
  t1612[194ULL] = -(t2444 * 0.001 + intrm_sf_mf_502);
  t1612[195ULL] = -t2458 / 4.1887953489795917;
  t1612[196ULL] = -t2458 / 4.1887953489795917;
  t1612[197ULL] = -intrm_sf_mf_509;
  t1612[198ULL] = -t2447 + 1.01325;
  t1612[199ULL] = (X[217ULL] / (t2466 == 0.0 ? 1.0E-16 : t2466) - ((t2424 *
    t2474 - t2472 * X[239ULL]) + t2471 * 100.0)) / 8.80132724281134E+6;
  t1612[200ULL] = (U_idx_0 - (t2424 * t2474 + t2472 * X[239ULL])) /
    1.2260736179143097E+6;
  t1612[201ULL] = (X[237ULL] / (t2466 == 0.0 ? 1.0E-16 : t2466) - ((t2483 *
    t2485 - X[239ULL] * t2482) + t2480 * 100.0)) / 8.80132724281134E+6;
  t1612[202ULL] = (U_idx_2 - (t2483 * t2485 + X[239ULL] * t2482)) /
    1.2260736179143097E+6;
  t1612[203ULL] = t2464 * 100.0;
  t1612[204ULL] = (-X[237ULL] / (t2500 == 0.0 ? 1.0E-16 : t2500) - ((t2485 *
    t2504 - t2501 * X[242ULL]) + t2503 * 100.0)) / 6.3686514346761458E+7;
  t1612[205ULL] = (U_idx_4 - (t2485 * t2504 + t2501 * X[242ULL])) /
    8.87188408103589E+6;
  t1612[206ULL] = (-X[226ULL] / (t2505 == 0.0 ? 1.0E-16 : t2505) - ((t2434 *
    t2508 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_convection_8 * X
    [244ULL]) + t2507 * 100.0)) / 6.3686514346761458E+7;
  t1612[207ULL] = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_RH_I -
                   (t2434 * t2508 +
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_convection_8
                    * X[244ULL])) / 8.87188408103589E+6;
  t1612[208ULL] = -(t2492 * 0.001 + t2446);
  t1612[209ULL] = -t2510 / 4.1887953489795917;
  t1612[210ULL] = -t2510 / 4.1887953489795917;
  t1612[211ULL] = -t2457;
  t1612[212ULL] = -t2459;
  t1612[213ULL] = X[245ULL] * intrm_sf_mf_1704 * 1.0E-6;
  t1612[214ULL] = -((X[263ULL] + t2526) / 2.0 * t2362 - (t2526 - X[263ULL]) /
                    2.0 * X[262ULL]);
  t1612[215ULL] = -((X[263ULL] + t2525) / 2.0 * X[248ULL] - (t2525 - X[263ULL]) /
                    2.0 * X[267ULL]);
  t1612[216ULL] = -((X[263ULL] + t2516) / 2.0 * X[247ULL] - (t2516 - X[263ULL]) /
                    2.0 * X[266ULL]);
  U_idx_1 = t2527 + t2530;
  U_idx_3 = t2530 - t2527;
  t1612[217ULL] = -(U_idx_1 / 2.0 * t2367 - U_idx_3 / 2.0 * X[268ULL]);
  U_idx_0 = t2527 + t2529;
  t3253 = t2529 - t2527;
  t1612[218ULL] = -(U_idx_0 / 2.0 * X[254ULL] - t3253 / 2.0 * X[270ULL]);
  t4237 = t2527 + t2528;
  t4536 = t2528 - t2527;
  t1612[219ULL] = -(t4237 / 2.0 * X[253ULL] - t4536 / 2.0 * X[269ULL]);
  t1612[220ULL] = -((X[272ULL] + t2534) / 2.0 * zc_int128 - (t2534 - X[272ULL]) /
                    2.0 * X[271ULL]);
  t1612[221ULL] = -((X[272ULL] + t2532) / 2.0 * X[251ULL] - (t2532 - X[272ULL]) /
                    2.0 * X[276ULL]);
  t1612[222ULL] = -((X[272ULL] + t2531) / 2.0 * X[250ULL] - (t2531 - X[272ULL]) /
                    2.0 * X[275ULL]);
  t1612[223ULL] = (X[256ULL] * t2519 / 461.523 - t2524 * X[35ULL]) /
    0.64309276860371423;
  t1612[224ULL] = X[258ULL] * t2519 / 461.523;
  t1612[225ULL] = X[255ULL] * t2521;
  t1612[226ULL] = X[257ULL] * t2519 / 4124.48151675695;
  t1612[227ULL] = -(((real_T)(M[213ULL] != 0) * 2.0 - 1.0) * (t2615 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL])) * (t2615 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]))
                    * (X[263ULL] / 7.8539816339744827E-5) * (X[263ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2540);
  t1612[228ULL] = -t2517;
  t1612[229ULL] = -t2518;
  t1612[230ULL] = -(((real_T)(M[213ULL] != 0) * 2.0 - 1.0) * (t2615 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL])) * (t2615 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]))
                    * (t2527 / 7.8539816339744827E-5) * (t2527 /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2540);
  t1612[231ULL] = -t2517;
  t1612[232ULL] = -t2518;
  t1612[233ULL] = -(((real_T)(M[213ULL] != 0) * 2.0 - 1.0) * (t2615 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL])) * (t2615 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]))
                    * (X[272ULL] / 7.8539816339744827E-5) * (X[272ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2540);
  t1612[234ULL] = -t2517;
  t1612[235ULL] = -t2518;
  t1612[236ULL] = -(U_idx_1 / 2.0 * (((real_T)(M[2ULL] != 0) * 2.0 - 1.0) *
    (t3579 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) * (t3579 / (X[123ULL] ==
    0.0 ? 1.0E-16 : X[123ULL])) * (t2527 / 7.8539816339744827E-5) * (t2527 /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_127) -
                    U_idx_3 / 2.0 * X[281ULL]);
  t1612[237ULL] = -(U_idx_0 / 2.0 * X[125ULL] - t3253 / 2.0 * X[283ULL]);
  t1612[238ULL] = -(t4237 / 2.0 * X[124ULL] - t4536 / 2.0 * X[282ULL]);
  t1612[239ULL] = -((-t2527 + t2530) / 2.0 * zc_int130 - (t2530 - (-t2527)) /
                    2.0 * X[281ULL]);
  t1612[240ULL] = -((-t2527 + t2529) / 2.0 * X[254ULL] - (t2529 - (-t2527)) /
                    2.0 * X[283ULL]);
  t1612[241ULL] = -((-t2527 + t2528) / 2.0 * X[253ULL] - (t2528 - (-t2527)) /
                    2.0 * X[282ULL]);
  t1612[242ULL] = t2461;
  t1612[243ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_A_md0 /
    3.4930368471842854;
  t1612[244ULL] = t2467 / 3.4930368471842854;
  t1612[245ULL] = t2386;
  t1612[246ULL] = t2380;
  U_idx_1 = X[293ULL] +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection2;
  U_idx_3 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection2 - X
    [293ULL];
  t1612[247ULL] = -(U_idx_1 / 2.0 * t2382 - U_idx_3 / 2.0 * X[292ULL]);
  U_idx_0 = X[293ULL] + t2560;
  t3253 = t2560 - X[293ULL];
  t1612[248ULL] = -(U_idx_0 / 2.0 * X[286ULL] - t3253 / 2.0 * X[297ULL]);
  t4237 = X[293ULL] +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0;
  t4536 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0 - X
    [293ULL];
  t1612[249ULL] = -(t4237 / 2.0 * X[285ULL] - t4536 / 2.0 * X[296ULL]);
  t1612[250ULL] = (X[288ULL] * t2554 / 461.523 - t2559 * X[39ULL]) /
    0.64309276860371423;
  t1612[251ULL] = X[290ULL] * t2554 / 461.523;
  t1612[252ULL] = X[287ULL] * t2556;
  t1612[253ULL] = X[289ULL] * t2554 / 4124.48151675695;
  t1612[254ULL] = -(((real_T)(M[220ULL] != 0) * 2.0 - 1.0) * (t2623 / (X[37ULL] ==
    0.0 ? 1.0E-16 : X[37ULL])) * (t2623 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]))
                    * (X[293ULL] / 7.8539816339744827E-5) * (X[293ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2569);
  t1612[255ULL] = -t2552;
  t1612[256ULL] = -t2553;
  t1612[257ULL] = -((-X[293ULL] + t2620) / 2.0 * t2389 - (t2620 - (-X[293ULL])) /
                    2.0 * X[311ULL]);
  t1612[258ULL] = -((-X[293ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1)
                    / 2.0 * X[302ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_A1
                     - (-X[293ULL])) / 2.0 * X[313ULL]);
  t1612[259ULL] = -((-X[293ULL] + t2172) / 2.0 * X[301ULL] - (t2172 - (-X[293ULL]))
                    / 2.0 * X[312ULL]);
  t1612[260ULL] = -((-X[263ULL] + t2625) / 2.0 * zc_int138 - (t2625 - (-X[263ULL]))
                    / 2.0 * X[314ULL]);
  t1612[261ULL] = -((-X[263ULL] + intrm_sf_mf_742) / 2.0 * X[248ULL] -
                    (intrm_sf_mf_742 - (-X[263ULL])) / 2.0 * X[316ULL]);
  t1612[262ULL] = -((-X[263ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0)
                    / 2.0 * X[247ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_convection_B0
                     - (-X[263ULL])) / 2.0 * X[315ULL]);
  t1612[263ULL] = -((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Q_cond +
                     intrm_sf_mf_713) * 0.001) / 7.5401484792408886E-5;
  t1612[264ULL] = -(t3644 / 7.8539816339744827E-5 * 0.00031622776601683789 +
                    intrm_sf_mf_791);
  t1612[265ULL] = -(t3576 / 7.8539816339744827E-5 * 0.00031622776601683789 +
                    intrm_sf_mf_800);
  t1612[266ULL] = t152;
  t1612[267ULL] = t2316;
  t4831 = X[303ULL] * t2575;
  t1612[268ULL] = -(((real_T)(M[227ULL] != 0) * 2.0 - 1.0) * (t4831 / (X[304ULL]
    == 0.0 ? 1.0E-16 : X[304ULL])) * (t4831 / (X[304ULL] == 0.0 ? 1.0E-16 : X
    [304ULL])) * (-X[293ULL] / 7.8539816339744827E-5) * (-X[293ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2460);
  t4831 = X[307ULL] * t2575;
  t1612[269ULL] = -(((real_T)(M[228ULL] != 0) * 2.0 - 1.0) * (t4831 / (X[308ULL]
    == 0.0 ? 1.0E-16 : X[308ULL])) * (t4831 / (X[308ULL] == 0.0 ? 1.0E-16 : X
    [308ULL])) * (-X[263ULL] / 7.8539816339744827E-5) * (-X[263ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2491);
  t1612[270ULL] = (X[310ULL] * t2575 / 461.523 - t2607 * X[42ULL]) /
    0.64309276860371423;
  t1612[271ULL] = X[305ULL] * t2575 / 461.523;
  t1612[272ULL] = X[309ULL] * t2606;
  t1612[273ULL] = X[306ULL] * t2575 / 4124.48151675695;
  t1612[274ULL] = -(((real_T)(M[229ULL] != 0) * 2.0 - 1.0) * (t2642 / (X[41ULL] ==
    0.0 ? 1.0E-16 : X[41ULL])) * (t2642 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]))
                    * (-X[293ULL] / 7.8539816339744827E-5) * (-X[293ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2634);
  t1612[275ULL] = -t2550;
  t1612[276ULL] = -t2574;
  t1612[277ULL] = -(((real_T)(M[229ULL] != 0) * 2.0 - 1.0) * (t2642 / (X[41ULL] ==
    0.0 ? 1.0E-16 : X[41ULL])) * (t2642 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]))
                    * (-X[263ULL] / 7.8539816339744827E-5) * (-X[263ULL] /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2634);
  t1612[278ULL] = -t2550;
  t1612[279ULL] = -t2574;
  t1612[280ULL] = -((-X[293ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection2)
                    / 2.0 * t2439 -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection2
                     - (-X[293ULL])) / 2.0 * X[323ULL]);
  t1612[281ULL] = -((-X[293ULL] + t2560) / 2.0 * X[286ULL] - (t2560 - (-X[293ULL]))
                    / 2.0 * X[319ULL]);
  t1612[282ULL] = -((-X[293ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0)
                    / 2.0 * X[285ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_convection0
                     - (-X[293ULL])) / 2.0 * X[320ULL]);
  t1612[283ULL] = -(U_idx_1 / 2.0 * t2546 - U_idx_3 / 2.0 * X[323ULL]);
  t1612[284ULL] = -(U_idx_0 / 2.0 * X[302ULL] - t3253 / 2.0 * X[319ULL]);
  t1612[285ULL] = -(t4237 / 2.0 * X[301ULL] - t4536 / 2.0 * X[320ULL]);
  t1612[286ULL] = t2363;
  t1612[287ULL] = -(intrm_sf_mf_838 - t2655);
  U_idx_1 = X[321ULL] * t2646;
  t1612[288ULL] = -(((real_T)(M[232ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[37ULL]
    == 0.0 ? 1.0E-16 : X[37ULL])) * (U_idx_1 / (X[37ULL] == 0.0 ? 1.0E-16 : X
    [37ULL])) * (-X[293ULL] / 0.64 / 7.8539816339744827E-5) * (-X[293ULL] / 0.64
    / 7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t2494);
  U_idx_1 = X[322ULL] * t2646;
  t1612[289ULL] = -(((real_T)(M[234ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [300ULL] == 0.0 ? 1.0E-16 : X[300ULL])) * (U_idx_1 / (X[300ULL] == 0.0 ?
    1.0E-16 : X[300ULL])) * (-X[293ULL] / 0.64 / 7.8539816339744827E-5) * (-X
    [293ULL] / 0.64 / 7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 +
                    t2496);
  t1612[290ULL] = -(((real_T)(M[235ULL] != 0) * 2.0 - 1.0) * (t2725 / (X[318ULL]
    == 0.0 ? 1.0E-16 : X[318ULL])) * (t2725 / (X[318ULL] == 0.0 ? 1.0E-16 : X
    [318ULL])) * (-X[293ULL] / 0.64 / (t2639 == 0.0 ? 1.0E-16 : t2639)) * (-X
    [293ULL] / 0.64 / (t2639 == 0.0 ? 1.0E-16 : t2639)) / 2.0 *
                    9.999999999999999E-14 + t2511);
  U_idx_1 = X[330ULL] + t2661;
  U_idx_3 = t2661 - X[330ULL];
  t1612[291ULL] = -(U_idx_1 / 2.0 * t2443 - U_idx_3 / 2.0 * X[329ULL]) /
    365.59674280784293;
  U_idx_0 = X[330ULL] + t2657;
  t3253 = t2657 - X[330ULL];
  t1612[292ULL] = -(U_idx_0 / 2.0 * X[326ULL] - t3253 / 2.0 * X[334ULL]);
  t4237 = X[330ULL] + t2654;
  t4536 = t2654 - X[330ULL];
  t1612[293ULL] = -(t4237 / 2.0 * X[325ULL] - t4536 / 2.0 * X[333ULL]);
  t4831 = 148.401051922146;
  t1612[294ULL] = t4831 / 461.523 / 43.3158175294914 + t2218 * 0.5 / 461.523 /
    43.3158175294914;
  t1612[295ULL] = X[337ULL] * t2666 / 461.523;
  t1612[296ULL] = X[327ULL] * t2667;
  t4830 = 62.328441807301317;
  t1612[297ULL] = t4830 / 259.836612622973 + t2218 * 0.21 / 259.836612622973;
  t4790 = t2666 * 293.15;
  t1612[298ULL] = -304.06022922571 - (((real_T)(M[237ULL] != 0) * 2.0 - 1.0) *
    (t4790 / 1.01325) * (t4790 / 1.01325) * (X[330ULL] / 0.0019634954084936209) *
    (X[330ULL] / 0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2736);
  t1612[299ULL] = -t2663;
  t1612[300ULL] =
    -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18;
  t4790 = -X[330ULL] + t2661;
  t4548 = t2661 - (-X[330ULL]);
  t1612[301ULL] = -(t4790 / 2.0 * t2515 - t4548 / 2.0 * X[346ULL]) /
    365.59674280784293;
  t4551 = -X[330ULL] + t2657;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t2657 - (-X
    [330ULL]);
  t1612[302ULL] = -(t4551 / 2.0 * X[326ULL] -
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
                    / 2.0 * X[348ULL]);
  t4554 = -X[330ULL] + t2654;
  t4555 = t2654 - (-X[330ULL]);
  t1612[303ULL] = -(t4554 / 2.0 * X[325ULL] - t4555 / 2.0 * X[347ULL]);
  t1612[304ULL] = -(U_idx_1 / 2.0 * t2543 - U_idx_3 / 2.0 * X[346ULL]);
  t1612[305ULL] = -(U_idx_0 / 2.0 * X[340ULL] - t3253 / 2.0 * X[348ULL]);
  t1612[306ULL] = -(t4237 / 2.0 * X[339ULL] - t4536 / 2.0 * X[347ULL]);
  t1612[307ULL] = t2589;
  t1612[308ULL] = 979.36765375297466 + t2669 / 3.4930368471842854;
  t1612[309ULL] = -979.36765375297466 + piece307 / 3.4930368471842854;
  t1612[310ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_po0 /
    1.0413512978067061;
  t1612[311ULL] = t2548;
  t1612[312ULL] = -(t4790 / 2.0 * t2581 - t4548 / 2.0 * X[357ULL]);
  t1612[313ULL] = -(t4551 / 2.0 * X[340ULL] -
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
                    / 2.0 * X[359ULL]);
  t1612[314ULL] = -(t4554 / 2.0 * X[339ULL] - t4555 / 2.0 * X[358ULL]);
  t1612[315ULL] = -((X[361ULL] + t2685) / 2.0 * (((real_T)(M[17ULL] != 0) * 2.0
    - 1.0) * (t3734 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) * (t3734 / (X
    [44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) * (X[361ULL] / 0.0019634954084936209) *
    (X[361ULL] / 0.0019634954084936209) / 2.0 * 9.999999999999999E-14 +
    intrm_sf_mf_1437) - (t2685 - X[361ULL]) / 2.0 * X[360ULL]);
  t1612[316ULL] = -((X[361ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1)
                    / 2.0 * X[351ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_co1
                     - X[361ULL]) / 2.0 * X[365ULL]);
  t1612[317ULL] = -((X[361ULL] + t2676) / 2.0 * X[350ULL] - (t2676 - X[361ULL]) /
                    2.0 * X[364ULL]);
  t1612[318ULL] = (X[353ULL] * t2679 / 461.523 - t2683 * X[47ULL]) /
    0.64309276860371423;
  t1612[319ULL] = X[355ULL] * t2679 / 461.523;
  t1612[320ULL] = X[352ULL] * t2681;
  t1612[321ULL] = X[354ULL] * t2679 / 259.836612622973 / 1.1422643670118826;
  t1612[322ULL] = -(((real_T)(M[243ULL] != 0) * 2.0 - 1.0) * (t2756 / (X[44ULL] ==
    0.0 ? 1.0E-16 : X[44ULL])) * (t2756 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]))
                    * (-X[330ULL] / 0.0019634954084936209) * (-X[330ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2692);
  t1612[323ULL] = -t2677;
  t1612[324ULL] = -t2678;
  t1612[325ULL] = -(((real_T)(M[243ULL] != 0) * 2.0 - 1.0) * (t2756 / (X[44ULL] ==
    0.0 ? 1.0E-16 : X[44ULL])) * (t2756 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]))
                    * (X[361ULL] / 0.0019634954084936209) * (X[361ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2692);
  t1612[326ULL] = -t2677;
  t1612[327ULL] = -t2678;
  t1612[328ULL] = X[366ULL] * t3004 * 0.1;
  t1612[329ULL] = -U_idx_10;
  t1612[330ULL] = 0.0;
  t1612[331ULL] = -(X[369ULL] / (X[370ULL] == 0.0 ? 1.0E-16 : X[370ULL]));
  t1612[332ULL] = 0.0;
  t1612[333ULL] = -pmf_sqrt(X[324ULL] * 0.00347041471455839);
  t1612[334ULL] = U_idx_6 * zc_int191;
  t1612[335ULL] = -((-X[272ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2)
                    / 2.0 * t2594 -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_convection_A2
                     - (-X[272ULL])) / 2.0 * X[388ULL]);
  t1612[336ULL] = -((-X[272ULL] + t2732) / 2.0 * X[251ULL] - (t2732 - (-X[272ULL]))
                    / 2.0 * X[390ULL]);
  t1612[337ULL] = -((-X[272ULL] + t2718) / 2.0 * X[250ULL] - (t2718 - (-X[272ULL]))
                    / 2.0 * X[389ULL]);
  t1612[338ULL] = -((X[384ULL] + t2744) / 2.0 * t2596 - (t2744 - X[384ULL]) /
                    2.0 * X[391ULL]);
  t1612[339ULL] = -((X[384ULL] + t2743) / 2.0 * X[374ULL] - (t2743 - X[384ULL]) /
                    2.0 * X[395ULL]);
  t1612[340ULL] = -((X[384ULL] + t2742) / 2.0 * X[373ULL] - (t2742 - X[384ULL]) /
                    2.0 * X[394ULL]);
  t1612[341ULL] = -((t2723 + t2728) * 0.001) / 1.8850371198102225E-5;
  t1612[342ULL] = -(t3776 / 0.0019634954084936209 * 0.00031622776601683789 +
                    t2982);
  t1612[343ULL] = -(t3797 / 0.0019634954084936209 * 0.00031622776601683789 +
                    intrm_sf_mf_1061);
  t1612[344ULL] = t155;
  t1612[345ULL] = t2370;
  U_idx_1 = X[382ULL] * t2699;
  t1612[346ULL] = -(((real_T)(M[252ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [383ULL] == 0.0 ? 1.0E-16 : X[383ULL])) * (U_idx_1 / (X[383ULL] == 0.0 ?
    1.0E-16 : X[383ULL])) * (-X[272ULL] / 0.0019634954084936209) * (-X[272ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2734);
  U_idx_1 = X[385ULL] * t2699;
  t1612[347ULL] = -(((real_T)(M[253ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X
    [386ULL] == 0.0 ? 1.0E-16 : X[386ULL])) * (U_idx_1 / (X[386ULL] == 0.0 ?
    1.0E-16 : X[386ULL])) * (X[384ULL] / 0.0019634954084936209) * (X[384ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2735);
  t1612[348ULL] = (X[377ULL] * t2699 / 461.523 - t2721 * X[50ULL]) /
    0.64309276860371423;
  t1612[349ULL] = X[379ULL] * t2699 / 461.523;
  t1612[350ULL] = X[376ULL] * t2720;
  t1612[351ULL] = X[378ULL] * t2699 / 4124.48151675695;
  t1612[352ULL] = 0.0;
  t1612[353ULL] = -(((real_T)(M[254ULL] != 0) * 2.0 - 1.0) * (t2777 / (X[51ULL] ==
    0.0 ? 1.0E-16 : X[51ULL])) * (t2777 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]))
                    * (-X[272ULL] / 0.0019634954084936209) * (-X[272ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2751);
  t1612[354ULL] = -t2696;
  t1612[355ULL] = -t2697;
  t1612[356ULL] = -(((real_T)(M[254ULL] != 0) * 2.0 - 1.0) * (t2777 / (X[51ULL] ==
    0.0 ? 1.0E-16 : X[51ULL])) * (t2777 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]))
                    * (X[384ULL] / 0.0019634954084936209) * (X[384ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2751);
  t1612[357ULL] = -t2696;
  t1612[358ULL] = -t2697;
  t1612[359ULL] = -((-X[384ULL] + intrm_sf_mf_1140) / 2.0 * t2222 -
                    (intrm_sf_mf_1140 - (-X[384ULL])) / 2.0 * X[402ULL]);
  t1612[360ULL] = -((-X[384ULL] + t2804) / 2.0 * X[374ULL] - (t2804 - (-X[384ULL]))
                    / 2.0 * X[404ULL]);
  t1612[361ULL] = -((-X[384ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0)
                    / 2.0 * X[373ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_A0
                     - (-X[384ULL])) / 2.0 * X[403ULL]);
  t1612[362ULL] = -((X[398ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2)
                    / 2.0 * (((real_T)(M[6ULL] != 0) * 2.0 - 1.0) * (t3753 / (X
    [76ULL] == 0.0 ? 1.0E-16 : X[76ULL])) * (t3753 / (X[76ULL] == 0.0 ? 1.0E-16 :
    X[76ULL])) * (X[398ULL] / 0.32) * (X[398ULL] / 0.32) / 2.0 *
    9.999999999999999E-14 + t3858) -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2
                     - X[398ULL]) / 2.0 * X[405ULL]);
  t1612[363ULL] = -((X[398ULL] + t2808) / 2.0 * X[78ULL] - (t2808 - X[398ULL]) /
                    2.0 * X[409ULL]);
  t1612[364ULL] = -((X[398ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0)
                    / 2.0 * X[77ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0
                     - X[398ULL]) / 2.0 * X[408ULL]);
  t1612[365ULL] = -((t2801 + t2802) * 0.001);
  t1612[366ULL] = -(t3825 / 0.32 * 0.00031622776601683789 + t2149);
  t1612[367ULL] = -(t3841 / 0.32 * 0.00031622776601683789 + t2987);
  t1612[368ULL] = t2223;
  t1612[369ULL] = t2234;
  U_idx_1 = X[396ULL] * t2759;
  t1612[370ULL] = -(((real_T)(M[3ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[397ULL]
    == 0.0 ? 1.0E-16 : X[397ULL])) * (U_idx_1 / (X[397ULL] == 0.0 ? 1.0E-16 : X
    [397ULL])) * (-X[384ULL] / 0.32) * (-X[384ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2703);
  U_idx_1 = X[399ULL] * t2759;
  t1612[371ULL] = -(((real_T)(M[4ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[400ULL]
    == 0.0 ? 1.0E-16 : X[400ULL])) * (U_idx_1 / (X[400ULL] == 0.0 ? 1.0E-16 : X
    [400ULL])) * (X[398ULL] / 0.32) * (X[398ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + intrm_sf_mf_1177);
  t1612[372ULL] = (X[86ULL] * t2759 / 461.523 - t2799 * X[8ULL]) /
    0.64309276860371423;
  t1612[373ULL] = X[84ULL] * t2759 / 461.523;
  t1612[374ULL] = X[87ULL] * t2798;
  t1612[375ULL] = X[83ULL] * t2759 / 4124.48151675695;
  t1612[376ULL] = 0.0;
  t1612[377ULL] = -(((real_T)(M[5ULL] != 0) * 2.0 - 1.0) * (t2871 / (X[52ULL] ==
    0.0 ? 1.0E-16 : X[52ULL])) * (t2871 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]))
                    * (-X[384ULL] / 0.32) * (-X[384ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2815);
  t1612[378ULL] = -t2717;
  t1612[379ULL] = -t2758;
  t1612[380ULL] = -(((real_T)(M[5ULL] != 0) * 2.0 - 1.0) * (t2871 / (X[52ULL] ==
    0.0 ? 1.0E-16 : X[52ULL])) * (t2871 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]))
                    * (X[398ULL] / 0.32) * (X[398ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2815);
  t1612[381ULL] = -t2717;
  t1612[382ULL] = -t2758;
  t1612[383ULL] = -((-X[398ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2)
                    / 2.0 * (((real_T)(M[6ULL] != 0) * 2.0 - 1.0) * (t3753 / (X
    [76ULL] == 0.0 ? 1.0E-16 : X[76ULL])) * (t3753 / (X[76ULL] == 0.0 ? 1.0E-16 :
    X[76ULL])) * (-X[398ULL] / 0.32) * (-X[398ULL] / 0.32) / 2.0 *
    9.999999999999999E-14 + t3858) -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B2
                     - (-X[398ULL])) / 2.0 * X[414ULL]);
  t1612[384ULL] = -((-X[398ULL] + t2808) / 2.0 * X[78ULL] - (t2808 - (-X[398ULL]))
                    / 2.0 * X[416ULL]);
  t1612[385ULL] = -((-X[398ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0)
                    / 2.0 * X[77ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_convection_B0
                     - (-X[398ULL])) / 2.0 * X[415ULL]);
  t1612[386ULL] = -((X[145ULL] + t2803) / 2.0 * (((real_T)(M[2ULL] != 0) * 2.0 -
    1.0) * (t3579 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) * (t3579 / (X
    [123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) * (X[145ULL] / 0.32) * (X[145ULL] /
    0.32) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_127) - (t2803 - X[145ULL])
                    / 2.0 * X[417ULL]);
  t1612[387ULL] = -((X[145ULL] + t2187) / 2.0 * X[125ULL] - (t2187 - X[145ULL]) /
                    2.0 * X[419ULL]);
  t1612[388ULL] = -((X[145ULL] + t2269) / 2.0 * X[124ULL] - (t2269 - X[145ULL]) /
                    2.0 * X[418ULL]);
  t1612[389ULL] = -((t2844 + t2263) * 0.001);
  t1612[390ULL] = -(t3874 / 0.32 * 0.00031622776601683789 + t2989);
  t1612[391ULL] = -(t3887 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_1335);
  t1612[392ULL] = t2388;
  t1612[393ULL] = t2544;
  U_idx_1 = X[410ULL] * t2819;
  t1612[394ULL] = -(((real_T)(M[11ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[411ULL]
    == 0.0 ? 1.0E-16 : X[411ULL])) * (U_idx_1 / (X[411ULL] == 0.0 ? 1.0E-16 : X
    [411ULL])) * (-X[398ULL] / 0.32) * (-X[398ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2225);
  U_idx_1 = X[412ULL] * t2819;
  t1612[395ULL] = -(((real_T)(M[13ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[413ULL]
    == 0.0 ? 1.0E-16 : X[413ULL])) * (U_idx_1 / (X[413ULL] == 0.0 ? 1.0E-16 : X
    [413ULL])) * (X[145ULL] / 0.32) * (X[145ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2257);
  t1612[396ULL] = (X[92ULL] * t2819 / 461.523 - t2843 * X[11ULL]) /
    0.64309276860371423;
  t1612[397ULL] = X[89ULL] * t2819 / 461.523;
  t1612[398ULL] = X[90ULL] * t2842;
  t1612[399ULL] = X[88ULL] * t2819 / 4124.48151675695;
  t1612[400ULL] = 0.0;
  t1612[401ULL] = -(((real_T)(M[14ULL] != 0) * 2.0 - 1.0) * (t2963 / (X[53ULL] ==
    0.0 ? 1.0E-16 : X[53ULL])) * (t2963 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]))
                    * (-X[398ULL] / 0.32) * (-X[398ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2846);
  t1612[402ULL] = -t2792;
  t1612[403ULL] = -t2818;
  t1612[404ULL] = -(((real_T)(M[14ULL] != 0) * 2.0 - 1.0) * (t2963 / (X[53ULL] ==
    0.0 ? 1.0E-16 : X[53ULL])) * (t2963 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]))
                    * (X[145ULL] / 0.32) * (X[145ULL] / 0.32) / 2.0 *
                    9.999999999999999E-14 + t2846);
  t1612[405ULL] = -t2792;
  t1612[406ULL] = -t2818;
  t1612[407ULL] = U_idx_8 * t2701;
  t1612[408ULL] = -((-X[361ULL] + t2855) / 2.0 * (((real_T)(M[17ULL] != 0) * 2.0
    - 1.0) * (t3734 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) * (t3734 / (X
    [44ULL] == 0.0 ? 1.0E-16 : X[44ULL])) * (-X[361ULL] / 0.0019634954084936209)
    * (-X[361ULL] / 0.0019634954084936209) / 2.0 * 9.999999999999999E-14 +
    intrm_sf_mf_1437) - (t2855 - (-X[361ULL])) / 2.0 * X[431ULL]);
  t1612[409ULL] = -((-X[361ULL] + t2335) / 2.0 * X[351ULL] - (t2335 - (-X[361ULL]))
                    / 2.0 * X[433ULL]);
  t1612[410ULL] = -((-X[361ULL] + t2157) / 2.0 * X[350ULL] - (t2157 - (-X[361ULL]))
                    / 2.0 * X[432ULL]);
  t1612[411ULL] = -((-X[177ULL] + t2897) / 2.0 * zc_int292 - (t2897 - (-X[177ULL]))
                    / 2.0 * X[434ULL]);
  t1612[412ULL] = -((-X[177ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1)
                    / 2.0 * X[176ULL] -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_convection_B1
                     - (-X[177ULL])) / 2.0 * X[436ULL]);
  t1612[413ULL] = -((-X[177ULL] + t2856) / 2.0 * X[175ULL] - (t2856 - (-X[177ULL]))
                    / 2.0 * X[435ULL]);
  t1612[414ULL] = -((t2892 + t2329) * 0.001) / 1.8850371198102225E-5;
  t1612[415ULL] = -(t3918 / 0.0019634954084936209 * 0.00031622776601683789 +
                    t2992);
  t1612[416ULL] = -(t3926 / 0.0019634954084936209 * 0.00031622776601683789 +
                    t2994);
  t1612[417ULL] = t161;
  t1612[418ULL] = t162;
  U_idx_1 = X[427ULL] * t2851;
  t1612[419ULL] = -(((real_T)(M[24ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[428ULL]
    == 0.0 ? 1.0E-16 : X[428ULL])) * (U_idx_1 / (X[428ULL] == 0.0 ? 1.0E-16 : X
    [428ULL])) * (-X[361ULL] / 0.0019634954084936209) * (-X[361ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1449);
  U_idx_1 = X[429ULL] * t2851;
  t1612[420ULL] = -(((real_T)(M[25ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (X[430ULL]
    == 0.0 ? 1.0E-16 : X[430ULL])) * (U_idx_1 / (X[430ULL] == 0.0 ? 1.0E-16 : X
    [430ULL])) * (-X[177ULL] / 0.0019634954084936209) * (-X[177ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1452);
  t1612[421ULL] = (X[422ULL] * t2851 / 461.523 - t2890 * X[56ULL]) /
    0.64309276860371423;
  t1612[422ULL] = X[424ULL] * t2851 / 461.523;
  t1612[423ULL] = X[421ULL] * t2888;
  t1612[424ULL] = X[423ULL] * t2851 / 259.836612622973 / 1.1422643670118826;
  t1612[425ULL] = 0.0;
  t1612[426ULL] = -(((real_T)(M[26ULL] != 0) * 2.0 - 1.0) * (t3050 / (X[57ULL] ==
    0.0 ? 1.0E-16 : X[57ULL])) * (t3050 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]))
                    * (-X[361ULL] / 0.0019634954084936209) * (-X[361ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2903);
  t1612[427ULL] = -t2839;
  t1612[428ULL] = -t2850;
  t1612[429ULL] = -(((real_T)(M[26ULL] != 0) * 2.0 - 1.0) * (t3050 / (X[57ULL] ==
    0.0 ? 1.0E-16 : X[57ULL])) * (t3050 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]))
                    * (-X[177ULL] / 0.0019634954084936209) * (-X[177ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2903);
  t1612[430ULL] = -t2839;
  t1612[431ULL] = -t2850;
  U_idx_1 = X[444ULL] + t2907;
  U_idx_3 = t2907 - X[444ULL];
  t1612[432ULL] = -(U_idx_1 / 2.0 * zc_int319 - U_idx_3 / 2.0 * X[443ULL]) /
    365.59674280784293;
  U_idx_0 = X[444ULL] + t2906;
  t3253 = t2906 - X[444ULL];
  t1612[433ULL] = -(U_idx_0 / 2.0 * X[440ULL] - t3253 / 2.0 * X[448ULL]);
  t4237 = X[444ULL] + t2883;
  t4536 = t2883 - X[444ULL];
  t1612[434ULL] = -(t4237 / 2.0 * X[439ULL] - t4536 / 2.0 * X[447ULL]);
  t1612[435ULL] = t4831 / 461.523 / 43.3158175294914 + t2613 * 0.5 / 461.523 /
    43.3158175294914;
  t1612[436ULL] = X[451ULL] * t2910 / 461.523;
  t1612[437ULL] = X[441ULL] * t2911;
  t1612[438ULL] = t4830 / 259.836612622973 + t2613 * 0.21 / 259.836612622973;
  t4831 = t2910 * 293.15;
  t1612[439ULL] = -304.06022922571 - (((real_T)(M[28ULL] != 0) * 2.0 - 1.0) *
    (t4831 / 1.01325) * (t4831 / 1.01325) * (X[444ULL] / 0.0019634954084936209) *
    (X[444ULL] / 0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + piece313);
  t1612[440ULL] = -t2908;
  t1612[441ULL] = -t2909;
  t1612[442ULL] = -((-X[201ULL] +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2)
                    / 2.0 * (((real_T)(M[29ULL] != 0) * 2.0 - 1.0) * (t3942 /
    (X[196ULL] == 0.0 ? 1.0E-16 : X[196ULL])) * (t3942 / (X[196ULL] == 0.0 ?
    1.0E-16 : X[196ULL])) * (-X[201ULL] / 0.0019634954084936209) * (-X[201ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1586) -
                    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_A2
                     - (-X[201ULL])) / 2.0 * X[464ULL]);
  t1612[443ULL] = -((-X[201ULL] + t2920) / 2.0 * X[198ULL] - (t2920 - (-X[201ULL]))
                    / 2.0 * X[466ULL]);
  t1612[444ULL] = -((-X[201ULL] + t2365) / 2.0 * X[197ULL] - (t2365 - (-X[201ULL]))
                    / 2.0 * X[465ULL]);
  t1612[445ULL] = -((-X[444ULL] + t2944) / 2.0 * zc_int294 - (t2944 - (-X[444ULL]))
                    / 2.0 * X[467ULL]);
  t1612[446ULL] = -((-X[444ULL] + t2943) / 2.0 * X[455ULL] - (t2943 - (-X[444ULL]))
                    / 2.0 * X[469ULL]);
  t1612[447ULL] = -((-X[444ULL] + intrm_sf_mf_1556) / 2.0 * X[454ULL] -
                    (intrm_sf_mf_1556 - (-X[444ULL])) / 2.0 * X[468ULL]);
  t1612[448ULL] = -((t2940 + t2935) * 0.001) - -0.92095788639984788;
  t1612[449ULL] = -(t3965 / 0.0019634954084936209 * 0.00031622776601683789 +
                    t3000);
  t1612[450ULL] = -(t3982 / 0.0019634954084936209 * 0.00031622776601683789 +
                    t3002);
  t1612[451ULL] = t163;
  t1612[452ULL] = t2579;
  t4831 = X[456ULL] * t2916;
  t1612[453ULL] = -(((real_T)(M[36ULL] != 0) * 2.0 - 1.0) * (t4831 / (X[457ULL] ==
    0.0 ? 1.0E-16 : X[457ULL])) * (t4831 / (X[457ULL] == 0.0 ? 1.0E-16 : X
    [457ULL])) * (-X[201ULL] / 0.0019634954084936209) * (-X[201ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2407);
  t4831 = X[460ULL] * t2916;
  t1612[454ULL] = -(((real_T)(M[37ULL] != 0) * 2.0 - 1.0) * (t4831 / (X[461ULL] ==
    0.0 ? 1.0E-16 : X[461ULL])) * (t4831 / (X[461ULL] == 0.0 ? 1.0E-16 : X
    [461ULL])) * (-X[444ULL] / 0.0019634954084936209) * (-X[444ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2895);
  t1612[455ULL] = (X[463ULL] * t2916 / 461.523 - t2938 * X[60ULL]) /
    0.64309276860371423;
  t1612[456ULL] = X[458ULL] * t2916 / 461.523;
  t1612[457ULL] = X[462ULL] * t2937;
  t1612[458ULL] = X[459ULL] * t2916 / 259.836612622973 / 1.1422643670118826;
  t1612[459ULL] = -(((real_T)(M[38ULL] != 0) * 2.0 - 1.0) * (t3143 / (X[59ULL] ==
    0.0 ? 1.0E-16 : X[59ULL])) * (t3143 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]))
                    * (-X[201ULL] / 0.0019634954084936209) * (-X[201ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2951);
  t1612[460ULL] = -t2913;
  t1612[461ULL] = -t2914;
  t1612[462ULL] = -(((real_T)(M[38ULL] != 0) * 2.0 - 1.0) * (t3143 / (X[59ULL] ==
    0.0 ? 1.0E-16 : X[59ULL])) * (t3143 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]))
                    * (-X[444ULL] / 0.0019634954084936209) * (-X[444ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + t2951);
  t1612[463ULL] = -t2913;
  t1612[464ULL] = -t2914;
  t1612[465ULL] = -(U_idx_1 / 2.0 * t2230 - U_idx_3 / 2.0 * X[476ULL]);
  t1612[466ULL] = -(U_idx_0 / 2.0 * X[455ULL] - t3253 / 2.0 * X[472ULL]);
  t1612[467ULL] = -(t4237 / 2.0 * X[454ULL] - t4536 / 2.0 * X[473ULL]);
  t1612[468ULL] = -((-X[444ULL] + t2907) / 2.0 * zc_int357 - (t2907 - (-X[444ULL]))
                    / 2.0 * X[476ULL]) / 365.59674280784293;
  t1612[469ULL] = -((-X[444ULL] + t2906) / 2.0 * X[440ULL] - (t2906 - (-X[444ULL]))
                    / 2.0 * X[472ULL]);
  t1612[470ULL] = -((-X[444ULL] + t2883) / 2.0 * X[439ULL] - (t2883 - (-X[444ULL]))
                    / 2.0 * X[473ULL]);
  t1612[471ULL] = t2590;
  t1612[472ULL] = -(intrm_sf_mf_1660 - t2975);
  U_idx_1 = X[474ULL] * t2966;
  t1612[473ULL] = -(((real_T)(M[41ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / (t2912 ==
    0.0 ? 1.0E-16 : t2912)) * (U_idx_1 / (t2912 == 0.0 ? 1.0E-16 : t2912)) * (X
    [444ULL] / 0.64 / 0.0019634954084936209) * (X[444ULL] / 0.64 /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14 + intrm_sf_mf_1651);
  U_idx_1 = X[475ULL] * t2966;
  t1612[474ULL] = -(((real_T)(M[42ULL] != 0) * 2.0 - 1.0) * (U_idx_1 / 1.01325) *
                    (U_idx_1 / 1.01325) * (X[444ULL] / 0.64 /
    0.0019634954084936209) * (X[444ULL] / 0.64 / 0.0019634954084936209) / 2.0 *
                    9.999999999999999E-14 + t2411) / 1.0413512978067061;
  t1612[475ULL] = -(((real_T)(M[44ULL] != 0) * 2.0 - 1.0) * (t3216 / (X[471ULL] ==
    0.0 ? 1.0E-16 : X[471ULL])) * (t3216 / (X[471ULL] == 0.0 ? 1.0E-16 : X
    [471ULL])) * (X[444ULL] / 0.64 / (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1623)) * (X[444ULL] / 0.64 / (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_1623)) / 2.0 * 9.999999999999999E-14 + t2990);
  t1612[476ULL] = t2598;
  t1612[477ULL] = -(t3005 / (X[69ULL] == 0.0 ? 1.0E-16 : X[69ULL]) * 1000.0);
  t1612[478ULL] = -t2969;
  t1612[479ULL] = 0.0;
  for (b = 0; b < 480; b++) {
    out.mX[b] = t1612[b];
  }

  (void)LC;
  (void)t4887;
  return 0;
}
