#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_zc.h"
#include "FCElectricPlant_66b3e3da_1_ds_tdxy_p.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxy_p.h"
#include "FCElectricPlant_66b3e3da_1_ds_y.h"
#include "FCElectricPlant_66b3e3da_1_ds_obs_all.h"
#include "FCElectricPlant_66b3e3da_1_ds_obs_act.h"
#include "FCElectricPlant_66b3e3da_1_ds_obs_exp.h"
#include "FCElectricPlant_66b3e3da_1_ds_log.h"
#include "FCElectricPlant_66b3e3da_1_ds_tdxf_p.h"
#include "FCElectricPlant_66b3e3da_1_ds_a_p.h"
#include "FCElectricPlant_66b3e3da_1_ds_a.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxy.h"
#include "FCElectricPlant_66b3e3da_1_ds_obs_il.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxf_p.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxf.h"
#include "FCElectricPlant_66b3e3da_1_ds_mode.h"
#include "FCElectricPlant_66b3e3da_1_ds_f.h"
#include "FCElectricPlant_66b3e3da_1_ds_duf.h"
#include "FCElectricPlant_66b3e3da_1_ds_assert.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "ssc_ml_fun.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
static int32_T ds_m_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_m (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vmf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vpf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vsf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dpdxf ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dwf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dwf
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dnf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dnf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dnf_v_x ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_cer ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxcer ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxcer_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddcer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_ic ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icrm_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxicrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_ddicrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_freqs ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_mdxy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_duy ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_t ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxdelt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dtdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_l ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_i
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_j ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qx ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_q1 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qx_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_var_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_eq_tol ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_slv ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_nldv ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_sclv ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_imin ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_imax
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimin ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dimax ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_m ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_a_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_c ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_f ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vpf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf0 (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxf_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpdxf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tduf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dnf_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf_v_x ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cer ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddcer ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_icr ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_im
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mduy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_nldv (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_imin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dimin ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static void
release_reference ( NeDynamicSystem * ds ) ; static void get_reference (
NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics (
NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 22 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 2U , 0U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 2U , 2U , FALSE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/DC-DC Converter" , 2U , 4U , TRUE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 6U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 2U , 7U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , 1U
, 9U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Motor/Motor" , 1U , 10U , TRUE , 1.0 , "1" , } , { "" , 0U ,
8 , NE_EQUATION_DOMAIN_TIME , "FCElectricPlant/Motor/Motor" , 2U , 11U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 13U , FALSE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 14U , FALSE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 15U , FALSE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/DC-DC Converter" , 5U , 16U , FALSE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/DC-DC Converter" , 5U , 21U , FALSE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 26U , FALSE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 27U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 4U , 28U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 2U , 32U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , 3U ,
34U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Motor/Motor" , 7U , 37U , TRUE , 1.0 , "1" , } , { "" , 0U ,
8 , NE_EQUATION_DOMAIN_TIME , "FCElectricPlant/Motor/Motor" , 3U , 44U ,
FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Motor/Motor" , 1U , 47U , FALSE , 1.0 , "1" , } , { "" , 0U
, 8 , NE_EQUATION_DOMAIN_TIME ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Angular Velocity Source1" ,
1U , 48U , TRUE , 1.0 , "1" , } } ; static NeCERData * s_cer_data = NULL ;
static NeICRData s_icr_data [ 9 ] = { { "" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 0U , } , { ""
, 0U , 0 , "FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 1U
, } , { "" , 0U , 0 , "FCElectricPlant/Battery System/Battery (Table-Based)1"
, 1U , 2U , } , { "" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 3U , } , { ""
, 0U , 0 , "FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 4U
, } , { "" , 0U , 0 , "FCElectricPlant/Battery System/Battery (Table-Based)1"
, 1U , 5U , } , { "" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 6U , } , { ""
, 0U , 0 , "FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 7U , } , { "" ,
0U , 0 , "FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 8U , } } ; static
NeVariableData s_variable_data [ 22 ] = { {
"Battery_System.Battery_Table_Based1.charge" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Charge" , } , {
"Battery_System.Battery_Table_Based1.num_cycles" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY , "Discharge cycles" ,
} , { "Battery_System.DC_DC_Converter.v" , 0U , 0 ,
"FCElectricPlant/Battery System/DC-DC Converter" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Output voltage before ohmic drop" , } , { "Fuel_Cell.Boost_Converter.C.vc" ,
0U , 0 , "FCElectricPlant/Fuel Cell/Boost Converter" , 1.0 , "1" , 0.0 , TRUE
, FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Capacitor voltage" , } , {
"Fuel_Cell.Boost_Converter.L.i_L" , 0U , 0 ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_NONE , "Inductor current" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.vc" , 0U , 0 ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" ,
1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , { "Motor.Motor.w" , 0U , 0 ,
"FCElectricPlant/Motor/Motor" , 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 }
} , NE_INIT_MODE_MANDATORY , "Angular velocity" , } , {
"Motor.Motor.torque_ref" , 0U , 0 , "FCElectricPlant/Motor/Motor" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Demanded torque"
, } , { "Battery_System.Battery_Table_Based1.i" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current (positive in)" ,
} , { "Battery_System.Battery_Table_Based1.xVint" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_System.DC_DC_Converter.v1" , 0U , 0 ,
"FCElectricPlant/Battery System/DC-DC Converter" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Input voltage" , } , {
"Battery_System.Battery_Table_Based1.xR0" , 0U , 0 ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_System.DC_DC_Converter.i2" , 0U , 0 ,
"FCElectricPlant/Battery System/DC-DC Converter" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Output current" , } , {
"Battery_System.DC_DC_Converter.p2.v" , 0U , 1 ,
"FCElectricPlant/Battery System/DC-DC Converter" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery_System.DC_DC_Converter.power_loss_used" , 0U , 0 ,
"FCElectricPlant/Battery System/DC-DC Converter" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Total power loss" , } , {
"Fuel_Cell.Boost_Converter.Dn.v" , 0U , 0 ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.L.v" , 0U , 0 ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.i" , 0U , 0 ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Controlled Voltage Source1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "i" ,
} , { "Fuel_Cell.Boost_Converter.i2" , 0U , 0 ,
"FCElectricPlant/Fuel Cell/Boost Converter" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_NONE , "i2" , } , { "Motor.Motor.torque_elec"
, 0U , 0 , "FCElectricPlant/Motor/Motor" , 1.0 , "1" , 0.0 , FALSE , FALSE ,
{ { 1 , 1 } } , NE_INIT_MODE_NONE , "Electrical torque" , } , {
"Motor.Motor.t" , 0U , 0 , "FCElectricPlant/Motor/Motor" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Torque" , } , {
"Motor.Motor.torqueLimit" , 0U , 0 , "FCElectricPlant/Motor/Motor" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Maximum torque magnitude" , } } ; static NeVariableData * s_discrete_data =
NULL ; static NeObservableData s_observable_data [ 211 ] = { {
"Battery_System.Battery_Table_Based1.H.T" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "K"
, 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery_System.Battery_Table_Based1.cell_temperature" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "K"
, 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery_System.Battery_Table_Based1.charge" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Charge" , } , {
"Battery_System.Battery_Table_Based1.i" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Battery_System.Battery_Table_Based1.n.v" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Battery_Table_Based1.num_cycles" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Discharge cycles" , } , {
"Battery_System.Battery_Table_Based1.xVint" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
"Battery_System.Battery_Table_Based1.xdVint_fade" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Open-circuit voltage fading factor" ,
} , { "Battery_System.Battery_Table_Based1.ocv" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Open-circuit voltage" , } , {
"Battery_System.Battery_Table_Based1.p.v" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Battery_Table_Based1.power_dissipated" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "W"
, 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery_System.Battery_Table_Based1.soc" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "SOC" , } , {
"Battery_System.Battery_Table_Based1.stateOfCharge" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "State of charge" , } , {
"Battery_System.Battery_Table_Based1.v" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Terminal voltage" , } , {
"Battery_System.Battery_Table_Based1.vrc1" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc1" , } , {
"Battery_System.Battery_Table_Based1.vrc2" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc2" , } , {
"Battery_System.Battery_Table_Based1.vrc3" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc3" , } , {
"Battery_System.Battery_Table_Based1.vrc4" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc4" , } , {
"Battery_System.Battery_Table_Based1.vrc5" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc5" , } , {
"Battery_System.Battery_Table_Based1.xG1" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/R1(SOC,T,N)" , } , { "Battery_System.Battery_Table_Based1.xG2" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/R2(SOC,T,N)" , } , { "Battery_System.Battery_Table_Based1.xG3" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/R3(SOC,T,N)" , } , { "Battery_System.Battery_Table_Based1.xG4" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/R4(SOC,T,N)" , } , { "Battery_System.Battery_Table_Based1.xG5" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/R5(SOC,T,N)" , } , { "Battery_System.Battery_Table_Based1.xGsd" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/Rleak(T,N)" , } , { "Battery_System.Battery_Table_Based1.xR0" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
"Battery_System.Battery_Table_Based1.xdAH_fade" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Cell capacity fading factor" , } , {
"Battery_System.Battery_Table_Based1.xdR0_fade" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Internal resistance fading factor" ,
} , { "Battery_System.Battery_Table_Based1.xqnom" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , { { 1 , 1 } } ,
"A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faded cell capacity" , } , {
"Battery_System.Battery_Table_Based1_soc" ,
"FCElectricPlant/Battery System/PS-Simulink\nConverter4" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery_Table_Based1_soc" , }
, { "Battery_System.DC_DC_Converter.i1" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } , {
"Battery_System.DC_DC_Converter.v1" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input voltage" , } , {
"Battery_System.DC_DC_Converter.B1" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "B1" , } , {
"Battery_System.DC_DC_Converter.B2" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "B2" , } , {
"Battery_System.DC_DC_Converter.F" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "F" , } , {
"Battery_System.DC_DC_Converter.Vref" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Vref" , } , {
"Battery_System.DC_DC_Converter.i_rated" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "i_rated" , } , {
"Battery_System.DC_DC_Converter.R_out" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "kW/A^2" ,
1.0 , "kW/A^2" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "R_out" , } , {
"Battery_System.DC_DC_Converter.i2" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Output current" , } , {
"Battery_System.DC_DC_Converter.n1.v" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.DC_DC_Converter.n2.v" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.DC_DC_Converter.p1.v" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.DC_DC_Converter.p2.v" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.DC_DC_Converter.power_dissipated" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Dissipated power" , } , {
"Battery_System.DC_DC_Converter.power_loss_used" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Total power loss" , } , {
"Battery_System.DC_DC_Converter.v" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Output voltage before ohmic drop" , }
, { "Battery_System.DC_DC_Converter.v2" ,
"FCElectricPlant/Battery System/DC-DC Converter" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Output voltage" , } , {
"Battery_System.Electrical_Reference1.V.v" ,
"FCElectricPlant/Battery System/Electrical Reference1" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Electrical_Reference2.V.v" ,
"FCElectricPlant/Battery System/Electrical Reference2" , { { 1 , 1 } } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Power_Acc.Controlled_Current_Source.head.v" ,
"FCElectricPlant/Battery System/Power Acc/Controlled Current Source" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Power_Acc.Controlled_Current_Source.i" ,
"FCElectricPlant/Battery System/Power Acc/Controlled Current Source" , { { 1
, 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Battery_System.Power_Acc.Controlled_Current_Source.iT" ,
"FCElectricPlant/Battery System/Power Acc/Controlled Current Source" , { { 1
, 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "iT" , } , {
"Battery_System.Power_Acc.Controlled_Current_Source.tail.v" ,
"FCElectricPlant/Battery System/Power Acc/Controlled Current Source" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Power_Acc.Controlled_Current_Source.v" ,
"FCElectricPlant/Battery System/Power Acc/Controlled Current Source" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Battery_System.Power_Acc.Simulink_PS_Converter_output" ,
"FCElectricPlant/Battery System/Power Acc/Simulink-PS\nConverter" , { { 1 , 1
} } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter_output"
, } , { "Battery_System.Power_Acc.x0.v" ,
"FCElectricPlant/Battery System/Power Acc" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_System.Power_Acc.x1.v" , "FCElectricPlant/Battery System/Power Acc"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , { "Battery_System.Sensor_VI.Current_Sensor.I" ,
"FCElectricPlant/Battery System/Sensor VI/Current Sensor" , { { 1 , 1 } } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery_System.Sensor_VI.Current_Sensor.i1" ,
"FCElectricPlant/Battery System/Sensor VI/Current Sensor" , { { 1 , 1 } } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_System.Sensor_VI.Current_Sensor.n.v" ,
"FCElectricPlant/Battery System/Sensor VI/Current Sensor" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI.Current_Sensor.p.v" ,
"FCElectricPlant/Battery System/Sensor VI/Current Sensor" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI.Current_Sensor_I" ,
"FCElectricPlant/Battery System/Sensor VI/PS-Simulink\nConverter2" , { { 1 ,
1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I" , } , {
"Battery_System.Sensor_VI.G.v" , "FCElectricPlant/Battery System/Sensor VI" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI.Voltage_Sensor2.V" ,
"FCElectricPlant/Battery System/Sensor VI/Voltage Sensor2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Battery_System.Sensor_VI.Voltage_Sensor2.n.v" ,
"FCElectricPlant/Battery System/Sensor VI/Voltage Sensor2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI.Voltage_Sensor2.p.v" ,
"FCElectricPlant/Battery System/Sensor VI/Voltage Sensor2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI.Voltage_Sensor2_V" ,
"FCElectricPlant/Battery System/Sensor VI/PS-Simulink\nConverter4" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor2_V" , } , {
"Battery_System.Sensor_VI.x0.v" , "FCElectricPlant/Battery System/Sensor VI"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , { "Battery_System.Sensor_VI.x1.v" ,
"FCElectricPlant/Battery System/Sensor VI" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI1.Current_Sensor.I" ,
"FCElectricPlant/Battery System/Sensor VI1/Current Sensor" , { { 1 , 1 } } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery_System.Sensor_VI1.Current_Sensor.i1" ,
"FCElectricPlant/Battery System/Sensor VI1/Current Sensor" , { { 1 , 1 } } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery_System.Sensor_VI1.Current_Sensor.n.v" ,
"FCElectricPlant/Battery System/Sensor VI1/Current Sensor" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI1.Current_Sensor.p.v" ,
"FCElectricPlant/Battery System/Sensor VI1/Current Sensor" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI1.G.v" , "FCElectricPlant/Battery System/Sensor VI1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , { "Battery_System.Sensor_VI1.I" ,
"FCElectricPlant/Battery System/Sensor VI1" , { { 1 , 1 } } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery_System.Sensor_VI1.Voltage_Sensor2.V" ,
"FCElectricPlant/Battery System/Sensor VI1/Voltage Sensor2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Battery_System.Sensor_VI1.Voltage_Sensor2.n.v" ,
"FCElectricPlant/Battery System/Sensor VI1/Voltage Sensor2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI1.Voltage_Sensor2.p.v" ,
"FCElectricPlant/Battery System/Sensor VI1/Voltage Sensor2" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI1.Voltage_Sensor2_V" ,
"FCElectricPlant/Battery System/Sensor VI1/PS-Simulink\nConverter4" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor2_V" , } , {
"Battery_System.Sensor_VI1.x0.v" ,
"FCElectricPlant/Battery System/Sensor VI1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_System.Sensor_VI1.x1.v" ,
"FCElectricPlant/Battery System/Sensor VI1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_System.Thermal.PS_Simulink_Converter_input" ,
"FCElectricPlant/Battery System/Thermal/PS-Simulink\nConverter" , { { 1 , 1 }
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "PS_Simulink_Converter_input"
, } , { "Battery_System.Thermal.i" , "FCElectricPlant/Battery System/Thermal"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "Battery_System.x0.v" , "FCElectricPlant/Battery System" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery_System.x1.v" , "FCElectricPlant/Battery System" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Electrical_Reference1.V.v" , "FCElectricPlant/Electrical Reference1" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.C.i" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "Fuel_Cell.Boost_Converter.C.n.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.C.p.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.C.v" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Boost_Converter.C.vc" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"Fuel_Cell.Boost_Converter.C.power_dissipated" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"Fuel_Cell.Boost_Converter.Dn.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.G" , "FCElectricPlant/Fuel Cell/Boost Converter" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Fuel_Cell.Boost_Converter.Gn.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.Gp.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.L.i" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "Fuel_Cell.Boost_Converter.L.n.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.L.p.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.L.v" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Boost_Converter.L.i_L" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Inductor current" , } , {
"Fuel_Cell.Boost_Converter.L.power_dissipated" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"Fuel_Cell.Boost_Converter.Ln.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.i2" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"i2" , } , { "Fuel_Cell.Boost_Converter.iL" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Inductor current" , } , {
"Fuel_Cell.Boost_Converter.i_L" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"i_L" , } , { "Fuel_Cell.Boost_Converter.i_d" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i_d" , } , {
"Fuel_Cell.Boost_Converter.n1.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.n2.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.p1.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.p2.v" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Boost_Converter.power_dissipated" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , { { 1 , 1 } } , "A*V" , 1.0 ,
"A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"Fuel_Cell.Boost_Converter.vc" , "FCElectricPlant/Fuel Cell/Boost Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "Capacitor voltage" , } , { "Fuel_Cell.Current_Sensor1.I" ,
"FCElectricPlant/Fuel Cell/Current Sensor1" , { { 1 , 1 } } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Fuel_Cell.Current_Sensor1.i1" , "FCElectricPlant/Fuel Cell/Current Sensor1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "Fuel_Cell.Current_Sensor1.n.v" ,
"FCElectricPlant/Fuel Cell/Current Sensor1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Current_Sensor1.p.v" , "FCElectricPlant/Fuel Cell/Current Sensor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Current_Sensor1_I" ,
"FCElectricPlant/Fuel Cell/PS-Simulink\nConverter" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor1_I" , } , {
"Fuel_Cell.Electrical_Reference5.V.v" ,
"FCElectricPlant/Fuel Cell/Electrical Reference5" , { { 1 , 1 } } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x0.v" , "FCElectricPlant/Fuel Cell/Fuel Cell" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x1.v" , "FCElectricPlant/Fuel Cell/Fuel Cell" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.i" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , {
{ 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.n.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , {
{ 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.p.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , {
{ 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , {
{ 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.vc" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , {
{ 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Capacitor voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Capacitor.power_dissipated" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , {
{ 1 , 1 } } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" ,
} , { "Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.i" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Controlled Voltage Source1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.n.v" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Controlled Voltage Source1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.p.v" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Controlled Voltage Source1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.v" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Controlled Voltage Source1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v"
, } , { "Fuel_Cell.Fuel_Cell.x2.Controlled_Voltage_Source1.vT" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Controlled Voltage Source1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vT" , } , { "Fuel_Cell.Fuel_Cell.x2.Current_Sensor1.I" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Current Sensor1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I"
, } , { "Fuel_Cell.Fuel_Cell.x2.Current_Sensor1.i1" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Current Sensor1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "Fuel_Cell.Fuel_Cell.x2.Current_Sensor1.n.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Current Sensor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Fuel_Cell.x2.Current_Sensor1.p.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Current Sensor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Fuel_Cell.x2.Current_Sensor1_I" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/PS-Simulink\nConverter6"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor1_I" , } , { "Fuel_Cell.Fuel_Cell.x2.Diode.i" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , { { 1
, 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Fuel_Cell.Fuel_Cell.x2.Diode.n.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Diode.p.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Diode.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , { { 1
, 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Diode.power_dissipated" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , { { 1
, 1 } } , "A*V" , 1.0 , "A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , }
, { "Fuel_Cell.Fuel_Cell.x2.Resistor.i" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , { {
1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Fuel_Cell.Fuel_Cell.x2.Resistor.n.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Resistor.p.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Resistor.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , { {
1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.Resistor.power_dissipated" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , { {
1 , 1 } } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
"Fuel_Cell.Fuel_Cell.x2.Simulink_PS_Converter3_output" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Simulink-PS\nConverter3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter3_output" , } , {
"Fuel_Cell.Fuel_Cell.x2.Voltage_Sensor.V" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , { "Fuel_Cell.Fuel_Cell.x2.Voltage_Sensor.n.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Fuel_Cell.x2.Voltage_Sensor.p.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Fuel_Cell.Fuel_Cell.x2.Voltage_Sensor_V" ,
 "FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/PS-Simulink\nConverter5"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor_V" , } , { "Fuel_Cell.Fuel_Cell.x2.x0.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Fuel_Cell.x2.x1.v" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Fuel_Cell.Simulink_PS_Converter2_output" ,
"FCElectricPlant/Fuel Cell/Simulink-PS\nConverter2" , { { 1 , 1 } } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter2_output" , } ,
{ "Fuel_Cell.Voltage_Sensor.V" , "FCElectricPlant/Fuel Cell/Voltage Sensor" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Fuel_Cell.Voltage_Sensor.n.v" , "FCElectricPlant/Fuel Cell/Voltage Sensor" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Voltage_Sensor.p.v" , "FCElectricPlant/Fuel Cell/Voltage Sensor" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Fuel_Cell.Voltage_Sensor_V" ,
"FCElectricPlant/Fuel Cell/PS-Simulink\nConverter1" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V" , } , {
"Fuel_Cell.x0.v" , "FCElectricPlant/Fuel Cell" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "Fuel_Cell.x1.v" ,
"FCElectricPlant/Fuel Cell" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.Current_Sensor2.I" ,
"FCElectricPlant/Motor/Elec Sensor/Current Sensor2" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Motor.Elec_Sensor.Current_Sensor2.i1" ,
"FCElectricPlant/Motor/Elec Sensor/Current Sensor2" , { { 1 , 1 } } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Motor.Elec_Sensor.Current_Sensor2.n.v" ,
"FCElectricPlant/Motor/Elec Sensor/Current Sensor2" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.Current_Sensor2.p.v" ,
"FCElectricPlant/Motor/Elec Sensor/Current Sensor2" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.Current_Sensor2_I" ,
"FCElectricPlant/Motor/Elec Sensor/PS-Simulink\nConverter4" , { { 1 , 1 } } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor2_I" , } , {
"Motor.Elec_Sensor.Electrical_Reference.V.v" ,
"FCElectricPlant/Motor/Elec Sensor/Electrical Reference" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.Voltage_Sensor.V" ,
"FCElectricPlant/Motor/Elec Sensor/Voltage Sensor" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Motor.Elec_Sensor.Voltage_Sensor.n.v" ,
"FCElectricPlant/Motor/Elec Sensor/Voltage Sensor" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.Voltage_Sensor.p.v" ,
"FCElectricPlant/Motor/Elec Sensor/Voltage Sensor" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.Voltage_Sensor_V" ,
"FCElectricPlant/Motor/Elec Sensor/PS-Simulink\nConverter" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V" , } , {
"Motor.Elec_Sensor.x0.v" , "FCElectricPlant/Motor/Elec Sensor" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Motor.Elec_Sensor.x1.v" , "FCElectricPlant/Motor/Elec Sensor" , { { 1 , 1 }
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Motor.Mechanical_Rotational_Reference1.W.w" ,
"FCElectricPlant/Motor/Mechanical Rotational Reference1" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Motor.Motor.Omega" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "rad/s"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w" , } , { "Motor.Motor.R.w" ,
"FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Motor.Motor.Tr" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Tr" , } , { "Motor.Motor.Vm.v" ,
"FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Motor.Motor.Vp.v" ,
"FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Motor.Motor.C.w" ,
"FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Motor.Motor.faulted" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , { "Motor.Motor.i"
, "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Motor.Motor.power_dissipated" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 }
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Motor.Motor.t" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "N*m" , 1.0
, "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Motor.Motor.torqueLimit" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Maximum torque magnitude" , }
, { "Motor.Motor.torqueLimitContinuous" , "FCElectricPlant/Motor/Motor" , { {
1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Calculated continuous torque limit (always positive)" , } , {
"Motor.Motor.torque_elec" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" , } , {
"Motor.Motor.torque_ref" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , } , {
"Motor.Motor.v" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Motor.Motor.w" ,
"FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "rpm" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } , {
"Motor.Motor.F" , "FCElectricPlant/Motor/Motor" , { { 1 , 1 } } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "F" , } , {
"Motor.Simulink_Interface.C.w" , "FCElectricPlant/Motor/Simulink Interface" ,
{ { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Motor.Simulink_Interface.Ideal_Angular_Velocity_Source1.C.w" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Angular Velocity Source1" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Motor.Simulink_Interface.Ideal_Angular_Velocity_Source1.R.w" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Angular Velocity Source1" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"Motor.Simulink_Interface.Ideal_Angular_Velocity_Source1.S" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Angular Velocity Source1" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , { "Motor.Simulink_Interface.Ideal_Angular_Velocity_Source1.t" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Angular Velocity Source1" , {
{ 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , { "Motor.Simulink_Interface.Ideal_Angular_Velocity_Source1.w"
, "FCElectricPlant/Motor/Simulink Interface/Ideal Angular Velocity Source1" ,
{ { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"Motor.Simulink_Interface.Ideal_Torque_Sensor1.C.w" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor1" , { { 1 , 1 }
} , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Motor.Simulink_Interface.Ideal_Torque_Sensor1.R.w" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor1" , { { 1 , 1 }
} , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Motor.Simulink_Interface.Ideal_Torque_Sensor1.T" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor1" , { { 1 , 1 }
} , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Motor.Simulink_Interface.Ideal_Torque_Sensor1.t" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor1" , { { 1 , 1 }
} , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Motor.Simulink_Interface.Ideal_Torque_Sensor2.C.w" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor2" , { { 1 , 1 }
} , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Motor.Simulink_Interface.Ideal_Torque_Sensor2.R.w" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor2" , { { 1 , 1 }
} , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Motor.Simulink_Interface.Ideal_Torque_Sensor2.T" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor2" , { { 1 , 1 }
} , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Motor.Simulink_Interface.Ideal_Torque_Sensor2.t" ,
"FCElectricPlant/Motor/Simulink Interface/Ideal Torque Sensor2" , { { 1 , 1 }
} , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Motor.Simulink_Interface.Ideal_Torque_Sensor2_T" ,
"FCElectricPlant/Motor/Simulink Interface/PS-Simulink\nConverter2" , { { 1 ,
1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor2_T" , } , { "Motor.Simulink_Interface.R.w" ,
"FCElectricPlant/Motor/Simulink Interface" , { { 1 , 1 } } , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Motor.Simulink_Interface.Simulink_PS_Converter4_output" ,
"FCElectricPlant/Motor/Simulink Interface/Simulink-PS\nConverter4" , { { 1 ,
1 } } , "rad/s" , 1.0 , "rad/s" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter4_output" , } , { "Motor.Simulink_PS_Converter3_output"
, "FCElectricPlant/Motor/Simulink-PS\nConverter3" , { { 1 , 1 } } , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter3_output" , } ,
{ "Motor.x0.v" , "FCElectricPlant/Motor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "Motor.x1.v" ,
"FCElectricPlant/Motor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } } ; static NeModeData *
s_major_mode_data = NULL ; static NeZCData s_zc_data [ 11 ] = { {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 0U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 1U ,
"Battery_System.Battery_Table_Based1.xxR0" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 2U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 3U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , { "FCElectricPlant/Battery System/DC-DC Converter" ,
1U , 4U , "Battery_System.DC_DC_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, NE_ZC_TYPE_TRUE , } , { "FCElectricPlant/Fuel Cell/Boost Converter" , 1U ,
5U , "Fuel_Cell.Boost_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, NE_ZC_TYPE_FALSE , } , { "FCElectricPlant/Fuel Cell/Boost Converter" , 1U ,
6U , "Fuel_Cell.Boost_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, NE_ZC_TYPE_TRUE , } , { "FCElectricPlant/Motor/Motor" , 1U , 7U ,
"Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , { "FCElectricPlant/Motor/Motor" , 1U , 8U ,
"Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , { "FCElectricPlant/Motor/Motor" , 1U , 9U ,
"Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , 1U ,
10U , "Fuel_Cell.Fuel_Cell.x2.Diode" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 11 ] = { {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } } ; static NeAssertData
s_assert_data [ 43 ] = { {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 0U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 1U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 2U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , { "FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 3U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , { "FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 4U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 5U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 6U ,
"Fuel_Cell.Boost_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, TRUE ,
 "G is not in an acceptable range. G must be between 0 and 1, inclusive. Input is clipped and might give wrong results."
, "physmod:ee:library:AdjustedInput" , } , { "FCElectricPlant/Motor/Motor" ,
1U , 7U , "Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE , "Servomotor DC voltage supply must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 8U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 9U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 10U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/Battery (Table-Based)1" , 1U , 11U ,
"Battery_System.Battery_Table_Based1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 12U ,
"Battery_System.DC_DC_Converter.B1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 13U ,
"Battery_System.DC_DC_Converter.B1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 14U ,
"Battery_System.DC_DC_Converter.B1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 15U ,
"Battery_System.DC_DC_Converter.B1" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 16U ,
"Battery_System.DC_DC_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 17U ,
"Battery_System.DC_DC_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 18U ,
"Fuel_Cell.Boost_Converter.C.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 19U ,
"Fuel_Cell.Boost_Converter.C.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 20U ,
"Fuel_Cell.Boost_Converter.C.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 21U ,
"Fuel_Cell.Boost_Converter.C.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 22U ,
"Fuel_Cell.Boost_Converter.L.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 23U ,
"Fuel_Cell.Boost_Converter.L.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 24U ,
"Fuel_Cell.Boost_Converter.L.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Boost Converter" , 1U , 25U ,
"Fuel_Cell.Boost_Converter.L.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , 1U
, 26U , "Fuel_Cell.Fuel_Cell.x2.Capacitor.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , 1U
, 27U , "Fuel_Cell.Fuel_Cell.x2.Capacitor.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , 1U
, 28U , "Fuel_Cell.Fuel_Cell.x2.Capacitor.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , 1U
, 29U , "Fuel_Cell.Fuel_Cell.x2.Capacitor.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , 1U
, 30U , "Fuel_Cell.Fuel_Cell.x2.Resistor.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Resistor" , 1U
, 31U , "Fuel_Cell.Fuel_Cell.x2.Resistor.power_dissipated" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Motor/Motor" , 1U , 32U , "Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Motor/Motor" , 1U , 33U , "Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 34U ,
"Battery_System.DC_DC_Converter.B2" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 35U ,
"Battery_System.DC_DC_Converter.B2" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 36U ,
"Battery_System.DC_DC_Converter.B2" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 37U ,
"Battery_System.DC_DC_Converter.B2" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 38U ,
"Battery_System.DC_DC_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 39U ,
"Battery_System.DC_DC_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"FCElectricPlant/Battery System/DC-DC Converter" , 1U , 40U ,
"Battery_System.DC_DC_Converter" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Diode" , 1U ,
41U , "Fuel_Cell.Fuel_Cell.x2.Diode" ,
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"FCElectricPlant/Motor/Motor" , 1U , 42U , "Motor.Motor" ,
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 43 ] = { {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 22U , 11U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 20U , 11U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 30U , 11U , 31U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 28U , 11U , 29U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 22U , 11U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 20U , 11U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 30U , 11U , 31U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 11U , 28U , 11U , 29U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 34U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 49 ] = { {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+simscape/+function/blend.ssc"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/dc_dc_converter_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+dcdc_converters/+boost/nonsynchronous.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 29U , 8U , 29U , 14U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 30U , 7U , 30U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 32U , 7U , 32U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } } ; static NeRange *
s_cer_range = NULL ; static NeRange s_icr_range [ 9 ] = { {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "E:/MATLAB_R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData *
s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData s_real_parameter_data
[ 4 ] = { { "RTP_6F181CC8_vc" ,
"FCElectricPlant/Fuel Cell/Fuel Cell/\345\205\254\345\274\217/Capacitor" , ""
, 0U , 1U , TRUE , } , { "RTP_0ABF9833_stateOfCharge" ,
"FCElectricPlant/Battery System/Battery (Table-Based)1" , "" , 0U , 1U , TRUE
, } , { "RTP_E1FEEF9A_iL" , "FCElectricPlant/Fuel Cell/Boost Converter" , ""
, 0U , 1U , TRUE , } , { "RTP_E1FEEF9A_vc" ,
"FCElectricPlant/Fuel Cell/Boost Converter" , "" , 0U , 1U , TRUE , } } ;
static real_T s_constant_table0 [ 42 ] = { 201.6 , 258.768 , 264.96 , 272.952
, 286.128 , 303.912 , 201.6 , 258.768 , 264.96 , 272.952 , 286.128 , 303.912
, 201.6 , 258.768 , 264.96 , 272.952 , 286.128 , 303.912 , 201.6 , 258.768 ,
264.96 , 272.952 , 286.128 , 303.912 , 201.6 , 258.768 , 264.96 , 272.952 ,
286.128 , 303.912 , 201.6 , 258.768 , 264.96 , 272.952 , 286.128 , 303.912 ,
201.6 , 258.768 , 264.96 , 272.952 , 286.128 , 303.912 } ; static real_T
s_constant_table1 [ 667 ] = { 26.405142554365803 , 20.152982660794091 ,
14.77099703793094 , 12.92462240818957 , 11.078247778448205 ,
9.2318731487068391 , 8.95688118257515 , 12.555142329504681 ,
11.693705988362014 , 9.5675776268416488 , 6.1907855232504758 , 0.0 ,
5.2621676947629039 , 8.4194683116206459 , 10.524335389525804 ,
11.299628096554205 , 8.4194683116206388 , 8.770279491271495 ,
10.524335389525794 , 12.27839128778009 , 14.032447186034389 ,
18.943803701146432 , 24.556782575560202 , 24.519060943339671 ,
18.713483899308798 , 13.715925820935873 , 12.001435093318888 ,
10.286944365701906 , 8.5724536380849212 , 8.3171039552483546 ,
11.658346448825775 , 10.858441274907584 , 8.8841792249243881 ,
5.7485865573040131 , 0.0 , 4.88629857370841 , 7.8180777179334555 ,
9.7725971474168176 , 10.492511803943191 , 7.8180777179334484 ,
8.1438309561806737 , 9.772597147416807 , 11.40136333865294 ,
13.030129529889075 , 17.590674865350259 , 22.8027266773059 ,
22.632979332313543 , 17.273985137823509 , 12.660854603940805 ,
11.078247778448203 , 9.4956409529556041 , 7.9130341274630034 ,
7.6773267279215585 , 10.76155056814687 , 10.023176561453152 ,
8.2007808230071273 , 5.3063875913575504 , 0.0 , 4.5104294526539173 ,
7.2166871242462669 , 9.0208589053078327 , 9.6853955113321764 ,
7.21668712424626 , 7.5173824210898523 , 9.0208589053078221 ,
10.52433538952579 , 12.027811873743762 , 16.237546029554085 ,
21.048670779051598 , 20.746897721287414 , 15.834486376338214 ,
11.60578338694574 , 10.15506046357752 , 8.7043375402093037 ,
7.2536146168410873 , 7.0375495005947624 , 9.864754687467963 ,
9.1879118479987252 , 7.5173824210898674 , 4.8641886254110887 , 0.0 ,
4.1345603315994248 , 6.6152965305590792 , 8.2691206631988479 ,
8.8782792187211612 , 6.6152965305590721 , 6.890933885999031 ,
8.269120663198839 , 9.6473074403986434 , 11.025494217598451 ,
14.884417193757912 , 19.294614880797297 , 18.860816110261286 ,
14.394987614852925 , 10.550712169950671 , 9.2318731487068373 ,
7.9130341274630034 , 6.59419510621917 , 6.3977722732679654 ,
7.0184025444436022 , 6.5368542792085709 , 6.8339840191726067 ,
4.4219896594646251 , 0.0 , 3.758691210544931 , 6.0139059368718888 ,
6.0139059368718861 , 6.4569303408881149 , 6.0139059368718835 ,
6.26448535090821 , 7.5173824210898523 , 8.7702794912714932 ,
10.023176561453134 , 13.53128835796174 , 17.540558982543 , 16.974734499235158
, 12.955488853367632 , 9.4956409529556041 , 8.3086858338361544 ,
7.1217307147167048 , 5.9347755955972525 , 5.7579950459411684 ,
6.3165622899992426 , 5.8831688512877154 , 5.0115882807265759 ,
3.9797906935181628 , 0.0 , 3.3828220894904382 , 4.5104294526539164 ,
5.4125153431846993 , 5.8112373067993044 , 5.4125153431846948 ,
5.6380368158173892 , 6.7656441789808683 , 7.8932515421443439 ,
9.0208589053078221 , 12.178159522165565 , 15.7865030842887 ,
15.088652888209028 , 11.515990091882337 , 8.4405697359605369 ,
7.38549851896547 , 6.3304273019704036 , 5.2753560849753356 ,
5.1182178186143723 , 5.6147220355548821 , 5.2294834233668572 ,
4.4547451384236236 , 3.5375917275717 , 0.0 , 3.0069529684359448 ,
4.0092706245812586 , 4.81112474949751 , 5.1655442727104921 ,
4.8111247494975071 , 5.011588280726567 , 6.0139059368718817 ,
7.0162235930171946 , 8.0185412491625083 , 10.82503068636939 ,
14.032447186034398 , 13.202571277182901 , 10.076491330397046 ,
7.38549851896547 , 6.4623112040947852 , 5.5391238892241024 ,
4.6159365743534195 , 4.4784405912875753 , 4.2525482083806123 , 4.575797995446
, 3.8979019961206709 , 3.0953927616252379 , 0.0 , 2.631083847381452 ,
3.5081117965086013 , 4.2097341558103212 , 3.9548698337939694 ,
4.2097341558103194 , 4.3851397456357475 , 5.2621676947628968 ,
6.1391956438900452 , 7.0162235930171946 , 9.4719018505732162 ,
12.278391287780101 , 11.316489666156771 , 8.6369925689117544 ,
6.3304273019704027 , 5.5391238892241015 , 4.747820476477802 ,
3.9565170637315017 , 3.8386633639607792 , 3.6450413214690958 ,
3.9221125675251423 , 3.3410588538177177 , 2.6531937956787752 , 0.0 ,
2.2552147263269586 , 3.0069529684359435 , 3.6083435621231317 ,
3.38988842896626 , 3.60834356212313 , 3.7586912105449262 , 4.510429452653911
, 5.262167694762895 , 6.0139059368718808 , 8.1187730147770427 ,
10.524335389525799 , 9.4304080551306431 , 7.1974938074264623 ,
5.2753560849753356 , 4.6159365743534186 , 3.9565170637315017 ,
3.2970975531095852 , 3.1988861366339827 , 3.03753443455758 ,
3.2684271396042854 , 2.784215711514765 , 2.2109948297323125 , 0.0 ,
1.8793456052724655 , 2.5057941403632866 , 3.0069529684359431 ,
2.82490702413855 , 3.0069529684359417 , 3.1322426754541048 ,
3.7586912105449262 , 4.3851397456357466 , 5.011588280726567 ,
6.76564417898087 , 8.7702794912715 , 7.5443264441045139 , 5.7579950459411684
, 4.2202848679802685 , 3.6927492594827349 , 3.8386633639607797 ,
3.1988861366339827 , 2.5591089093071862 , 2.430027547646064 ,
2.6147417116834286 , 2.2273725692118118 , 1.76879586378585 , 0.0 ,
1.5034764842179724 , 2.0046353122906293 , 2.4055623747487549 ,
2.25992561931084 , 2.4055623747487536 , 3.0069529684359417 ,
3.6083435621231303 , 3.5081117965085973 , 4.0092706245812542 ,
5.4125153431846948 , 7.016223593017199 , 6.5368542792085709 ,
4.3184962844558772 , 3.8386633639607792 , 3.3588304434656813 ,
2.8789975229705842 , 2.3991646024754867 , 1.9193316819803896 ,
2.1055207633330806 , 1.9610562837625711 , 1.6705294269088589 ,
1.3265968978393876 , 0.0 , 1.1276073631634793 , 1.5034764842179718 ,
1.8041717810615658 , 1.9370791022664346 , 1.8041717810615649 ,
2.2552147263269564 , 2.7062576715923474 , 3.157300616857738 ,
3.60834356212313 , 4.0593865073885214 , 6.0139059368718861 , 5.56843142302953
, 3.3949468998470311 , 3.0177305776418057 , 2.64051425543658 ,
2.2632979332313545 , 1.8860816110261285 , 1.5088652888209029 ,
1.4036805088887205 , 1.3073708558417143 , 1.1136862846059059 ,
0.884397931892925 , 0.0 , 0.75173824210898621 , 1.0023176561453147 ,
1.2027811873743774 , 1.291386068177623 , 1.4032447186034398 ,
1.7540558982542998 , 2.10486707790516 , 2.45567825755602 , 2.8064894372068796
, 3.1573006168577393 , 5.0115882807265733 , 4.4219896594646251 ,
3.9797906935181628 , 3.5375917275717 , 3.0953927616252379 ,
2.6531937956787757 , 2.2109948297323125 , 1.76879586378585 ,
1.4243228693135559 , 1.3265968978393878 , 0.884397931892925 ,
0.44219896594646252 , 0.0 , 0.3758691210544931 , 0.75173824210898621 ,
1.1276073631634795 , 1.2106744389165225 , 1.5034764842179724 ,
1.8793456052724655 , 2.2552147263269591 , 2.631083847381452 ,
3.0069529684359448 , 3.3828220894904382 , 3.758691210544931 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 3.758691210544931 ,
3.3828220894904382 , 3.0069529684359448 , 2.631083847381452 ,
2.2552147263269591 , 1.8793456052724655 , 1.5034764842179724 ,
1.2106744389165225 , 1.1276073631634795 , 0.75173824210898621 ,
0.3758691210544931 , 0.0 , 0.44219896594646252 , 0.884397931892925 ,
1.3265968978393878 , 1.4243228693135559 , 1.76879586378585 ,
2.2109948297323125 , 2.6531937956787757 , 3.0953927616252379 ,
3.5375917275717 , 3.9797906935181628 , 4.4219896594646251 ,
5.0115882807265733 , 3.1573006168577393 , 2.8064894372068796 ,
2.45567825755602 , 2.10486707790516 , 1.7540558982542998 , 1.4032447186034398
, 1.291386068177623 , 1.2027811873743774 , 1.0023176561453147 ,
0.75173824210898621 , 0.0 , 0.884397931892925 , 1.1136862846059059 ,
1.3073708558417143 , 1.4036805088887205 , 1.5088652888209029 ,
1.8860816110261285 , 2.2632979332313545 , 2.64051425543658 ,
3.0177305776418057 , 3.3949468998470311 , 5.56843142302953 ,
6.0139059368718861 , 4.0593865073885214 , 3.60834356212313 ,
3.157300616857738 , 2.7062576715923474 , 2.2552147263269564 ,
1.8041717810615649 , 1.9370791022664346 , 1.8041717810615658 ,
1.5034764842179718 , 1.1276073631634793 , 0.0 , 1.3265968978393876 ,
1.6705294269088589 , 1.9610562837625711 , 2.1055207633330806 ,
1.9193316819803896 , 2.3991646024754867 , 2.8789975229705842 ,
3.3588304434656813 , 3.8386633639607792 , 4.3184962844558772 ,
6.5368542792085709 , 7.016223593017199 , 5.4125153431846948 ,
4.0092706245812542 , 3.5081117965085973 , 3.6083435621231303 ,
3.0069529684359417 , 2.4055623747487536 , 2.25992561931084 ,
2.4055623747487549 , 2.0046353122906293 , 1.5034764842179724 , 0.0 ,
1.76879586378585 , 2.2273725692118118 , 2.6147417116834286 ,
2.430027547646064 , 2.5591089093071862 , 3.1988861366339827 ,
3.8386633639607797 , 3.6927492594827349 , 4.2202848679802685 ,
5.7579950459411684 , 7.5443264441045139 , 8.7702794912715 , 6.76564417898087
, 5.011588280726567 , 4.3851397456357466 , 3.7586912105449262 ,
3.1322426754541048 , 3.0069529684359417 , 2.82490702413855 ,
3.0069529684359431 , 2.5057941403632866 , 1.8793456052724655 , 0.0 ,
2.2109948297323125 , 2.784215711514765 , 3.2684271396042854 ,
3.03753443455758 , 3.1988861366339827 , 3.2970975531095852 ,
3.9565170637315017 , 4.6159365743534186 , 5.2753560849753356 ,
7.1974938074264623 , 9.4304080551306431 , 10.524335389525799 ,
8.1187730147770427 , 6.0139059368718808 , 5.262167694762895 ,
4.510429452653911 , 3.7586912105449262 , 3.60834356212313 , 3.38988842896626
, 3.6083435621231317 , 3.0069529684359435 , 2.2552147263269586 , 0.0 ,
2.6531937956787752 , 3.3410588538177177 , 3.9221125675251423 ,
3.6450413214690958 , 3.8386633639607792 , 3.9565170637315017 ,
4.747820476477802 , 5.5391238892241015 , 6.3304273019704027 ,
8.6369925689117544 , 11.316489666156771 , 12.278391287780101 ,
9.4719018505732162 , 7.0162235930171946 , 6.1391956438900452 ,
5.2621676947628968 , 4.3851397456357475 , 4.2097341558103194 ,
3.9548698337939694 , 4.2097341558103212 , 3.5081117965086013 ,
2.631083847381452 , 0.0 , 3.0953927616252379 , 3.8979019961206709 ,
4.575797995446 , 4.2525482083806123 , 4.4784405912875753 , 4.6159365743534195
, 5.5391238892241024 , 6.4623112040947852 , 7.38549851896547 ,
10.076491330397046 , 13.202571277182901 , 14.032447186034398 ,
10.82503068636939 , 8.0185412491625083 , 7.0162235930171946 ,
6.0139059368718817 , 5.011588280726567 , 4.8111247494975071 ,
5.1655442727104921 , 4.81112474949751 , 4.0092706245812586 ,
3.0069529684359448 , 0.0 , 3.5375917275717 , 4.4547451384236236 ,
5.2294834233668572 , 5.6147220355548821 , 5.1182178186143723 ,
5.2753560849753356 , 6.3304273019704036 , 7.38549851896547 ,
8.4405697359605369 , 11.515990091882337 , 15.088652888209028 ,
15.7865030842887 , 12.178159522165565 , 9.0208589053078221 ,
7.8932515421443439 , 6.7656441789808683 , 5.6380368158173892 ,
5.4125153431846948 , 5.8112373067993044 , 5.4125153431846993 ,
4.5104294526539164 , 3.3828220894904382 , 0.0 , 3.9797906935181628 ,
5.0115882807265759 , 5.8831688512877154 , 6.3165622899992426 ,
5.7579950459411684 , 5.9347755955972525 , 7.1217307147167048 ,
8.3086858338361544 , 9.4956409529556041 , 12.955488853367632 ,
16.974734499235158 , 17.540558982543 , 13.53128835796174 , 10.023176561453134
, 8.7702794912714932 , 7.5173824210898523 , 6.26448535090821 ,
6.0139059368718835 , 6.4569303408881149 , 6.0139059368718861 ,
6.0139059368718888 , 3.758691210544931 , 0.0 , 4.4219896594646251 ,
6.8339840191726067 , 6.5368542792085709 , 7.0184025444436022 ,
6.3977722732679654 , 6.59419510621917 , 7.9130341274630034 ,
9.2318731487068373 , 10.550712169950671 , 14.394987614852925 ,
18.860816110261286 , 19.294614880797297 , 14.884417193757912 ,
11.025494217598451 , 9.6473074403986434 , 8.269120663198839 ,
6.890933885999031 , 6.6152965305590721 , 8.8782792187211612 ,
8.2691206631988479 , 6.6152965305590792 , 4.1345603315994248 , 0.0 ,
4.8641886254110887 , 7.5173824210898674 , 9.1879118479987252 ,
9.864754687467963 , 7.0375495005947624 , 7.2536146168410873 ,
8.7043375402093037 , 10.15506046357752 , 11.60578338694574 ,
15.834486376338214 , 20.746897721287414 , 21.048670779051598 ,
16.237546029554085 , 12.027811873743762 , 10.52433538952579 ,
9.0208589053078221 , 7.5173824210898523 , 7.21668712424626 ,
9.6853955113321764 , 9.0208589053078327 , 7.2166871242462669 ,
4.5104294526539173 , 0.0 , 5.3063875913575504 , 8.2007808230071273 ,
10.023176561453152 , 10.76155056814687 , 7.6773267279215585 ,
7.9130341274630034 , 9.4956409529556041 , 11.078247778448203 ,
12.660854603940805 , 17.273985137823509 , 22.632979332313543 ,
22.8027266773059 , 17.590674865350259 , 13.030129529889075 ,
11.40136333865294 , 9.772597147416807 , 8.1438309561806737 ,
7.8180777179334484 , 10.492511803943191 , 9.7725971474168176 ,
7.8180777179334555 , 4.88629857370841 , 0.0 , 5.7485865573040131 ,
8.8841792249243881 , 10.858441274907584 , 11.658346448825775 ,
8.3171039552483546 , 8.5724536380849212 , 10.286944365701906 ,
12.001435093318888 , 13.715925820935873 , 18.713483899308798 ,
24.519060943339671 , 24.556782575560202 , 18.943803701146432 ,
14.032447186034389 , 12.27839128778009 , 10.524335389525794 ,
8.770279491271495 , 8.4194683116206388 , 11.299628096554205 ,
10.524335389525804 , 8.4194683116206459 , 5.2621676947629039 , 0.0 ,
6.1907855232504758 , 9.5675776268416488 , 11.693705988362014 ,
12.555142329504681 , 8.95688118257515 , 9.2318731487068391 ,
11.078247778448205 , 12.92462240818957 , 14.77099703793094 ,
20.152982660794091 , 26.405142554365803 } ; static real_T s_constant_table2 [
23 ] = { - 1047.1975511965977 , - 942.47779607693792 , - 837.75804095727813 ,
- 733.03828583761833 , - 628.31853071795865 , - 523.59877559829886 , -
418.87902047863906 , - 337.30233124042411 , - 314.15926535897933 , -
209.43951023931953 , - 104.71975511965977 , 0.0 , 104.71975511965977 ,
209.43951023931953 , 314.15926535897933 , 337.30233124042411 ,
418.87902047863906 , 523.59877559829886 , 628.31853071795865 ,
733.03828583761833 , 837.75804095727813 , 942.47779607693792 ,
1047.1975511965977 } ; static real_T s_constant_table3 [ 29 ] = { - 335.0 , -
311.07142857142856 , - 287.14285714285711 , - 263.21428571428572 , -
239.28571428571428 , - 215.35714285714286 , - 191.42857142857142 , - 167.5 ,
- 143.57142857142856 , - 119.64285714285714 , - 95.714285714285708 , -
71.785714285714278 , - 47.857142857142854 , - 23.928571428571427 , 0.0 ,
23.928571428571427 , 47.857142857142854 , 71.785714285714278 ,
95.714285714285708 , 119.64285714285714 , 143.57142857142856 , 167.5 ,
191.42857142857142 , 215.35714285714286 , 239.28571428571428 ,
263.21428571428572 , 287.14285714285711 , 311.07142857142856 , 335.0 } ;
static real_T s_constant_table4 [ 42 ] = { 0.63691199999999992 ,
0.6709679999999999 , 0.64994400000000008 , 0.60984 , 0.74303999999999992 ,
0.94608 , 0.460008 , 0.471888 , 0.399816 , 0.39780000000000004 , 0.435096 ,
0.56196 , 0.314208 , 0.295272 , 0.29232 , 0.24854400000000001 , 0.276912 ,
0.325224 , 0.14623199999999997 , 0.184536 , 0.182304 , 0.17712 , 0.195552 ,
0.219384 , 0.103896 , 0.1314 , 0.12924 , 0.12801600000000002 ,
0.13852799999999998 , 0.160848 , 0.0403416 , 0.0517824 , 0.0495864 ,
0.0544104 , 0.052956 , 0.07300799999999999 , 0.074016 , 0.096336 ,
0.072000000000000008 , 0.110592 , 0.11131200000000001 , 0.200808 } ; static
real_T s_constant_table5 [ 23 ] = { 107.90705141630504 , 119.89672379589449 ,
134.88381427038132 , 154.15293059472151 , 179.84508569384172 ,
215.81410283261008 , 269.76762854076264 , 335.0 , 335.0 , 335.0 , 335.0 ,
335.0 , 335.0 , 335.0 , 335.0 , 335.0 , 269.76762854076264 ,
215.81410283261008 , 179.84508569384172 , 154.15293059472151 ,
134.88381427038132 , 119.89672379589449 , 107.90705141630504 } ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mM_P . mNumCol = 22 ; out -> mM_P . mNumRow = 22 ; out -> mM_P . mJc =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 23 )
; out -> mM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 8 ) ; return out ; } static NeDsMethodOutput *
ds_output_m ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM .
mN = 8 ; out -> mM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 8 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmm ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMM .
mN = 8 ; out -> mVMM . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 8 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 22 ; out -> mDXM_P .
mNumRow = 8 ; out -> mDXM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 23 ) ; out -> mDXM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dxm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_ddm_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out -> mDDM_P .
mNumRow = 8 ; out -> mDDM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dum_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 5 ; out -> mDUM_P .
mNumRow = 8 ; out -> mDUM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dum ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out -> mDTM_P .
mNumRow = 8 ; out -> mDTM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dtm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dpm_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 4 ; out -> mDPM_P .
mNumRow = 8 ; out -> mDPM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mDPM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_a_p ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 22 ; out -> mA_P . mNumRow
= 22 ; out -> mA_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 23 ) ; out -> mA_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 32 ) ; return out ; } static
NeDsMethodOutput * ds_output_a ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mA . mN = 32 ; out -> mA . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 32 ) ; return out ; } static NeDsMethodOutput
* ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB_P .
mNumCol = 5 ; out -> mB_P . mNumRow = 22 ; out -> mB_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mB_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 3 ) ; return out ; } static NeDsMethodOutput * ds_output_b ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB . mN = 3 ; out -> mB . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_c_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P . mNumCol = 1 ; out -> mC_P
. mNumRow = 22 ; out -> mC_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 22 ; out -> mF . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 22 ) ; return out
; } static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 22 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 22
) ; return out ; } static NeDsMethodOutput * ds_output_vpf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVPF . mN = 22 ; out -> mVPF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_vsf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVSF . mN = 22 ; out -> mVSF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 22 ; out -> mSLF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 22 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 22 ; out ->
mDXF_P . mNumRow = 22 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 40 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 40 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
40 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 5 ; out ->
mDUF_P . mNumRow = 22 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 4 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 4 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 22 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 22 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 4 ; out ->
mDPDXF_P . mNumRow = 40 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 22 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 5 ; out ->
mTDUF_P . mNumRow = 22 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 22 ; out ->
mTDXF_P . mNumRow = 22 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 20 ; out ->
mDNF_P . mNumRow = 22 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 21 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 0 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 22 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
22 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER . mN = 0 ; out
-> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER_P . mNumCol = 0
; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 22 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 9 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 9 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 9 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 9 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 9 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 9 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 9 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 9 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 3 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 22 ; out ->
mDXICR_P . mNumRow = 9 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 9 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 5 ; out ->
mTDUICR_P . mNumRow = 9 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 22 ; out ->
mICRM_P . mNumRow = 9 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 22 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out -> mDXICRM_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 0 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 5
; out -> mMDUY_P . mNumRow = 12 ; out -> mMDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out ->
mMDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 22
; out -> mMDXY_P . mNumRow = 12 ; out -> mMDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out ->
mMDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 5
; out -> mTDUY_P . mNumRow = 12 ; out -> mTDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out ->
mTDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 22
; out -> mTDXY_P . mNumRow = 12 ; out -> mTDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out ->
mTDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 25 ) ; return out ; } static NeDsMethodOutput * ds_output_y (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 12 ; out ->
mY . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 12 ) ; return out ; } static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 22 ; out ->
mDXY_P . mNumRow = 12 ; out -> mDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 23 ) ; out -> mDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 25 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 25 ; out -> mDXY .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
25 ) ; return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 5 ; out ->
mDUY_P . mNumRow = 12 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 12 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 11 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
11 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 11 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 11 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 154 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 154 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 43 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 43 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 22 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 23 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 5 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 200 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 200 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 200 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 200 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 200 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 200
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 200 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 200 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 22 ; out -> mQX_P .
mNumRow = 22 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 23 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 5 ; out -> mQU_P .
mNumRow = 22 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 6 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 22 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 22 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 22 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 22 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 22 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 22 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 22 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 22 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 22 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 22 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 22 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 22 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 22 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 22 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
22 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * FCElectricPlant_66b3e3da_1_dae_ds ( PmAllocator * allocator
) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static SscIoInfo
input_info [ 5 ] ; static SscIoInfo output_info [ 12 ] ; _ds = (
_NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 22 ; ds ->
mNumDiscreteRealVariables = 0 ; ds -> mNumDifferentialVariables = 8 ; ds ->
mNumEquations = 22 ; ds -> mNumCEResiduals = 0 ; ds -> mNumICResiduals = 9 ;
ds -> mNumFreqs = 0 ; ds -> mNumModes = 11 ; ds -> mNumMajorModes = 0 ; ds ->
mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds -> mNumObservables = 211 ; ds
-> mNumObservableElements = 200 ; ds -> mNumZcs = 11 ; ds -> mNumAsserts = 43
; ds -> mNumAssertRanges = 43 ; ds -> mNumParamAsserts = 0 ; ds ->
mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 11 ; ds ->
mNumEquationRanges = 49 ; ds -> mNumCERRanges = 0 ; ds -> mNumICRRanges = 9 ;
ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ; ds ->
mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 4 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 5 ; input_info [ 0
] . mIdentifier = "Battery_System.Power_Acc.Simulink_PS_Converter_output" ;
input_info [ 0 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 1 , 1 ) ; input_info [
0 ] . mName = "Battery_System.Power_Acc.Simulink_PS_Converter_output" ;
input_info [ 0 ] . mUnit = "A" ; input_info [ 1 ] . mIdentifier =
"Fuel_Cell.Fuel_Cell.x2.Simulink_PS_Converter3_output" ; input_info [ 1 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
input_info [ 1 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [
1 ] . mSize , 1 , 1 ) ; input_info [ 1 ] . mName =
"Fuel_Cell.Fuel_Cell.x2.Simulink_PS_Converter3_output" ; input_info [ 1 ] .
mUnit = "V" ; input_info [ 2 ] . mIdentifier =
"Fuel_Cell.Simulink_PS_Converter2_output" ; input_info [ 2 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 2 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 2 ] . mSize , 1 ,
1 ) ; input_info [ 2 ] . mName = "Fuel_Cell.Simulink_PS_Converter2_output" ;
input_info [ 2 ] . mUnit = "1" ; input_info [ 3 ] . mIdentifier =
"Motor.Simulink_PS_Converter3_output" ; input_info [ 3 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 3 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 3 ] . mSize , 1 ,
1 ) ; input_info [ 3 ] . mName = "Motor.Simulink_PS_Converter3_output" ;
input_info [ 3 ] . mUnit = "N*m" ; input_info [ 4 ] . mIdentifier =
"Motor.Simulink_Interface.Simulink_PS_Converter4_output" ; input_info [ 4 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
input_info [ 4 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [
4 ] . mSize , 1 , 1 ) ; input_info [ 4 ] . mName =
"Motor.Simulink_Interface.Simulink_PS_Converter4_output" ; input_info [ 4 ] .
mUnit = "rad/s" ; ds -> mIo [ SSC_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo
[ SSC_OUTPUT_IO_TYPE ] = 12 ; output_info [ 0 ] . mIdentifier =
"Battery_System.Battery_Table_Based1_soc" ; output_info [ 0 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 0 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 1
, 1 ) ; output_info [ 0 ] . mName = "Battery_System.Battery_Table_Based1_soc"
; output_info [ 0 ] . mUnit = "1" ; output_info [ 1 ] . mIdentifier =
"Battery_System.Sensor_VI.Current_Sensor_I" ; output_info [ 1 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 1 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 1 ] . mSize , 1
, 1 ) ; output_info [ 1 ] . mName =
"Battery_System.Sensor_VI.Current_Sensor_I" ; output_info [ 1 ] . mUnit = "A"
; output_info [ 2 ] . mIdentifier =
"Battery_System.Sensor_VI.Voltage_Sensor2_V" ; output_info [ 2 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 2 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 1
, 1 ) ; output_info [ 2 ] . mName =
"Battery_System.Sensor_VI.Voltage_Sensor2_V" ; output_info [ 2 ] . mUnit =
"V" ; output_info [ 3 ] . mIdentifier =
"Battery_System.Sensor_VI1.Voltage_Sensor2_V" ; output_info [ 3 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 3 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 3 ] . mSize , 1
, 1 ) ; output_info [ 3 ] . mName =
"Battery_System.Sensor_VI1.Voltage_Sensor2_V" ; output_info [ 3 ] . mUnit =
"V" ; output_info [ 4 ] . mIdentifier =
"Battery_System.Thermal.PS_Simulink_Converter_input" ; output_info [ 4 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
output_info [ 4 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info
[ 4 ] . mSize , 1 , 1 ) ; output_info [ 4 ] . mName =
"Battery_System.Thermal.PS_Simulink_Converter_input" ; output_info [ 4 ] .
mUnit = "A" ; output_info [ 5 ] . mIdentifier = "Fuel_Cell.Current_Sensor1_I"
; output_info [ 5 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 5 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 5 ] . mSize , 1 , 1 ) ; output_info
[ 5 ] . mName = "Fuel_Cell.Current_Sensor1_I" ; output_info [ 5 ] . mUnit =
"A" ; output_info [ 6 ] . mIdentifier =
"Fuel_Cell.Fuel_Cell.x2.Current_Sensor1_I" ; output_info [ 6 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 6 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 6 ] . mSize , 1
, 1 ) ; output_info [ 6 ] . mName =
"Fuel_Cell.Fuel_Cell.x2.Current_Sensor1_I" ; output_info [ 6 ] . mUnit = "A"
; output_info [ 7 ] . mIdentifier = "Fuel_Cell.Fuel_Cell.x2.Voltage_Sensor_V"
; output_info [ 7 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 7 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 7 ] . mSize , 1 , 1 ) ; output_info
[ 7 ] . mName = "Fuel_Cell.Fuel_Cell.x2.Voltage_Sensor_V" ; output_info [ 7 ]
. mUnit = "V" ; output_info [ 8 ] . mIdentifier =
"Fuel_Cell.Voltage_Sensor_V" ; output_info [ 8 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 8 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 8 ] . mSize , 1
, 1 ) ; output_info [ 8 ] . mName = "Fuel_Cell.Voltage_Sensor_V" ;
output_info [ 8 ] . mUnit = "V" ; output_info [ 9 ] . mIdentifier =
"Motor.Elec_Sensor.Current_Sensor2_I" ; output_info [ 9 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 9 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 9 ] . mSize , 1
, 1 ) ; output_info [ 9 ] . mName = "Motor.Elec_Sensor.Current_Sensor2_I" ;
output_info [ 9 ] . mUnit = "A" ; output_info [ 10 ] . mIdentifier =
"Motor.Elec_Sensor.Voltage_Sensor_V" ; output_info [ 10 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & output_info [ 10
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info [ 10 ] . mSize ,
1 , 1 ) ; output_info [ 10 ] . mName = "Motor.Elec_Sensor.Voltage_Sensor_V" ;
output_info [ 10 ] . mUnit = "V" ; output_info [ 11 ] . mIdentifier =
"Motor.Simulink_Interface.Ideal_Torque_Sensor2_T" ; output_info [ 11 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
output_info [ 11 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info
[ 11 ] . mSize , 1 , 1 ) ; output_info [ 11 ] . mName =
"Motor.Simulink_Interface.Ideal_Torque_Sensor2_T" ; output_info [ 11 ] .
mUnit = "N*m" ; ds -> mIo [ SSC_OUTPUT_IO_TYPE ] = output_info ; ds ->
mReleaseReference = release_reference ; ds -> mGetReference = get_reference ;
ds -> mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds ->
mRtpMapFcn = rtpmap ; ds -> mMethods [ NE_DS_METHOD_M_P ] = ds_m_p ; ds ->
mMakeOutput [ NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [
NE_DS_METHOD_M ] = ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m
; ds -> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [
NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds ->
mMethods [ NE_DS_METHOD_DXM ] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM
] = ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [
NE_DS_METHOD_DDM ] = ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] =
ds_output_ddm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [
NE_DS_METHOD_DPM ] = ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] =
ds_output_dpm ; ds -> mMethods [ NE_DS_METHOD_A_P ] =
FCElectricPlant_66b3e3da_1_ds_a_p ; ds -> mMakeOutput [ NE_DS_METHOD_A_P ] =
ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
FCElectricPlant_66b3e3da_1_ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] =
ds_output_a ; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds ->
mMakeOutput [ NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [
NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b
; ds -> mMethods [ NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [
NE_DS_METHOD_C_P ] = ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c
; ds -> mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = FCElectricPlant_66b3e3da_1_ds_f ; ds -> mMakeOutput [
NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] = ds_vmf
; ds -> mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_VPF ] = ds_vpf ; ds -> mMakeOutput [ NE_DS_METHOD_VPF ] =
ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] = ds_vsf ; ds ->
mMakeOutput [ NE_DS_METHOD_VSF ] = ds_output_vsf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [
NE_DS_METHOD_DXF_P ] = FCElectricPlant_66b3e3da_1_ds_dxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [
NE_DS_METHOD_DXF ] = FCElectricPlant_66b3e3da_1_ds_dxf ; ds -> mMakeOutput [
NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] =
ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds ->
mMethods [ NE_DS_METHOD_DUF ] = FCElectricPlant_66b3e3da_1_ds_duf ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [
NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] =
ds_output_dtf_p ; ds -> mMethods [ NE_DS_METHOD_DTF ] = ds_dtf ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF ] = ds_output_dtf ; ds -> mMethods [
NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DDF_P ] =
ds_output_ddf_p ; ds -> mMethods [ NE_DS_METHOD_DDF ] = ds_ddf ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF ] = ds_output_ddf ; ds -> mMethods [
NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = FCElectricPlant_66b3e3da_1_ds_tdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = ds_dnf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DNF_P ] =
ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ] = ds_dnf ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [
NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = ds_dxcer_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = ds_ic ; ds -> mMakeOutput [ NE_DS_METHOD_IC ] =
ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] = ds_icr ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds -> mMethods [
NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IM ]
= ds_output_icr_im ; ds -> mMethods [ NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_ID ] = ds_output_icr_id ; ds -> mMethods [
NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IL ]
= ds_output_icr_il ; ds -> mMethods [ NE_DS_METHOD_DXICR ] = ds_dxicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICR ] = ds_output_dxicr ; ds -> mMethods [
NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ] =
ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = ds_icrm_p ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM_P ]
= ds_output_icrm_p ; ds -> mMethods [ NE_DS_METHOD_ICRM ] = ds_icrm ; ds ->
mMakeOutput [ NE_DS_METHOD_ICRM ] = ds_output_icrm ; ds -> mMethods [
NE_DS_METHOD_DXICRM_P ] = ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_FREQS ] = ds_freqs ; ds -> mMakeOutput [ NE_DS_METHOD_FREQS ] =
ds_output_freqs ; ds -> mMethods [ NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_MDUY_P ] = ds_output_mduy_p ; ds -> mMethods [
NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDXY_P ]
= ds_output_mdxy_p ; ds -> mMethods [ NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_TDUY_P ] = ds_output_tduy_p ; ds -> mMethods [
NE_DS_METHOD_TDXY_P ] = FCElectricPlant_66b3e3da_1_ds_tdxy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [
NE_DS_METHOD_Y ] = FCElectricPlant_66b3e3da_1_ds_y ; ds -> mMakeOutput [
NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
FCElectricPlant_66b3e3da_1_ds_dxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXY_P
] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ] =
FCElectricPlant_66b3e3da_1_ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] =
ds_output_dxy ; ds -> mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [
NE_DS_METHOD_DUY ] = ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] =
ds_output_duy ; ds -> mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [
NE_DS_METHOD_DTY ] = ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] =
ds_output_dty ; ds -> mMethods [ NE_DS_METHOD_MODE ] =
FCElectricPlant_66b3e3da_1_ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE ]
= ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
FCElectricPlant_66b3e3da_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = FCElectricPlant_66b3e3da_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
FCElectricPlant_66b3e3da_1_ds_assert ; ds -> mMakeOutput [
NE_DS_METHOD_ASSERT ] = ds_output_assert ; ds -> mMethods [
NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
FCElectricPlant_66b3e3da_1_ds_obs_exp ; ds -> mMakeOutput [
NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = FCElectricPlant_66b3e3da_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = FCElectricPlant_66b3e3da_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = FCElectricPlant_66b3e3da_1_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] = ds_nldv ; ds ->
mMakeOutput [ NE_DS_METHOD_NLDV ] = ds_output_nldv ; ds -> mMethods [
NE_DS_METHOD_SCLV ] = ds_sclv ; ds -> mMakeOutput [ NE_DS_METHOD_SCLV ] =
ds_output_sclv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] = ds_imin ; ds ->
mMakeOutput [ NE_DS_METHOD_IMIN ] = ds_output_imin ; ds -> mMethods [
NE_DS_METHOD_IMAX ] = ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX ] =
ds_output_imax ; ds -> mMethods [ NE_DS_METHOD_DIMIN ] = ds_dimin ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMIN ] = ds_output_dimin ; ds -> mMethods [
NE_DS_METHOD_DIMAX ] = ds_dimax ; ds -> mMakeOutput [ NE_DS_METHOD_DIMAX ] =
ds_output_dimax ; ds -> mEquationData = s_equation_data ; ds -> mCERData =
s_cer_data ; ds -> mICRData = s_icr_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; _ds
-> mField0 = s_constant_table0 ; _ds -> mField1 = s_constant_table1 ; _ds ->
mField2 = s_constant_table2 ; _ds -> mField3 = s_constant_table3 ; _ds ->
mField4 = s_constant_table4 ; _ds -> mField5 = s_constant_table5 ; ds ->
mNumLargeArray = 6 ; return ( NeDynamicSystem * ) _ds ; } static int32_T
ds_passert ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_iassert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_cer (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dxcer ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxcer_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDXCER_P ; out . mNumCol = 22ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ;
out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ; out .
mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out . mJc [ 20
] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_ddcer ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddcer_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDCER_P ; out . mNumCol = 0ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_del_v0 ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_tmax ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_del_t ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dxdelt_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXDELT_P ; out . mNumCol =
22ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [
5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ;
out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc
[ 12 ] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] =
0 ; out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out
. mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [
22 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dudelt
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dudelt_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUDELT_P ; out . mNumCol =
5ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out
. mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ]
= 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTDELT_P ; out . mNumCol =
1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; (
void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_cache_r ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_init_r ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_init_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update2_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock2_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update2_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock2_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_sfp (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_sfo ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_duf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUF_P
; out . mNumCol = 5ULL ; out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 4 ; out . mJc [ 4 ] =
4 ; out . mJc [ 5 ] = 4 ; out . mIr [ 0 ] = 12 ; out . mIr [ 1 ] = 17 ; out .
mIr [ 2 ] = 15 ; out . mIr [ 3 ] = 16 ; ( void ) LC ; ( void ) t2 ; return 0
; } static int32_T ds_dtf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTF_P
; out . mNumCol = 1ULL ; out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddf ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_ddf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDDF_P ; out . mNumCol = 0ULL ;
out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_b ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mB ; out . mX [ 0 ] = - 1.0 ; out . mX
[ 1 ] = 1.0 ; out . mX [ 2 ] = 1.0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_b_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mB_P ; out . mNumCol = 5ULL ; out .
mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ]
= 1 ; out . mJc [ 3 ] = 1 ; out . mJc [ 4 ] = 2 ; out . mJc [ 5 ] = 3 ; out .
mIr [ 0 ] = 12 ; out . mIr [ 1 ] = 6 ; out . mIr [ 2 ] = 21 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_c ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_c_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mC_P ; out . mNumCol = 1ULL ; out . mNumRow = 22ULL ; out . mJc [
0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_tduf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mTDUF_P ; out . mNumCol = 5ULL ; out
. mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2
] = 2 ; out . mJc [ 3 ] = 4 ; out . mJc [ 4 ] = 5 ; out . mJc [ 5 ] = 6 ; out
. mIr [ 0 ] = 12 ; out . mIr [ 1 ] = 17 ; out . mIr [ 2 ] = 15 ; out . mIr [
3 ] = 16 ; out . mIr [ 4 ] = 6 ; out . mIr [ 5 ] = 21 ; ( void ) LC ; ( void
) t2 ; return 0 ; } static int32_T ds_dwf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dwf_p
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDWF_P ; out . mNumCol = 0ULL ; out . mNumRow = 22ULL ; out . mJc
[ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dpdxf
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dpdxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDPDXF_P ; out . mNumCol = 4ULL
; out . mNumRow = 40ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out .
mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_vmf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; ( void ) t1 ; ( void ) LC ; out = t2 -> mVMF ; out . mX [ 0 ] = true ; out
. mX [ 1 ] = true ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out .
mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX
[ 7 ] = false ; out . mX [ 8 ] = true ; out . mX [ 9 ] = true ; out . mX [ 10
] = true ; out . mX [ 11 ] = true ; out . mX [ 12 ] = true ; out . mX [ 13 ]
= true ; out . mX [ 14 ] = true ; out . mX [ 15 ] = true ; out . mX [ 16 ] =
true ; out . mX [ 17 ] = true ; out . mX [ 18 ] = true ; out . mX [ 19 ] =
true ; out . mX [ 20 ] = true ; out . mX [ 21 ] = false ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_slf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; ( void ) t1 ; ( void ) LC ; out = t2 -> mSLF ; out . mX [ 0 ] = false ; out
. mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out .
mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX
[ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [
10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [
13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [
16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [
19 ] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; ( void )
LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dnf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDNF_P ; out . mNumCol = 20ULL ; out . mNumRow = 22ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ;
out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ; out .
mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out . mJc [ 20
] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf_v_x (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mDNF_V_X ; out . mX [ 0 ] = true ; out . mX [ 1 ] = true ; out . mX [
2 ] = true ; out . mX [ 3 ] = true ; out . mX [ 4 ] = true ; out . mX [ 5 ] =
true ; out . mX [ 6 ] = true ; out . mX [ 7 ] = true ; out . mX [ 8 ] = true
; out . mX [ 9 ] = true ; out . mX [ 10 ] = true ; out . mX [ 11 ] = true ;
out . mX [ 12 ] = true ; out . mX [ 13 ] = true ; out . mX [ 14 ] = true ;
out . mX [ 15 ] = true ; out . mX [ 16 ] = true ; out . mX [ 17 ] = true ;
out . mX [ 18 ] = true ; out . mX [ 19 ] = true ; out . mX [ 20 ] = true ;
out . mX [ 21 ] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_slf0 ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mSLF0 ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out .
mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX
[ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [
8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [
11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [
14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX [
17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19 ] = false ; out . mX [
20 ] = false ; out . mX [ 21 ] = false ; ( void ) LC ; ( void ) t2 ; return 0
; } static int32_T ds_vpf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mVPF ; out . mX [ 0 ] = false ; out .
mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX
[ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [
7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10
] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13
] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16
] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19
] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; ( void ) LC ;
( void ) t2 ; return 0 ; } static int32_T ds_vsf ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mVSF ; out . mX [ 0 ] = false ;
out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ;
out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ;
out . mX [ 10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ;
out . mX [ 13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ;
out . mX [ 16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ;
out . mX [ 19 ] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ;
( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_freqs ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_ic ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T P_R_idx_0 ; ( void ) LC ; P_R_idx_0 = t1 -> mP_R . mX [ 0 ] ; out = t2
-> mIC ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 10.0
; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ; out . mX [ 5 ] = P_R_idx_0 ;
out . mX [ 6 ] = 0.0 ; out . mX [ 7 ] = 0.0 ; out . mX [ 8 ] = 0.0 ; out . mX
[ 9 ] = 1.0 ; out . mX [ 10 ] = 0.0 ; out . mX [ 11 ] = 1.0 ; out . mX [ 12 ]
= 0.0 ; out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = 0.0 ; out . mX [ 15 ] = 0.0
; out . mX [ 16 ] = 0.0 ; out . mX [ 17 ] = 0.0 ; out . mX [ 18 ] = 0.0 ; out
. mX [ 19 ] = 0.0 ; out . mX [ 20 ] = 0.0 ; out . mX [ 21 ] = 0.0 ; ( void )
LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icr ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmRealVector out ; real_T P_R_idx_1 ; real_T P_R_idx_2 ; real_T P_R_idx_3 ;
real_T X_idx_0 ; real_T X_idx_3 ; real_T X_idx_4 ; ( void ) LC ; X_idx_0 = t1
-> mX . mX [ 0 ] ; X_idx_3 = t1 -> mX . mX [ 3 ] ; X_idx_4 = t1 -> mX . mX [
4 ] ; P_R_idx_1 = t1 -> mP_R . mX [ 1 ] ; P_R_idx_2 = t1 -> mP_R . mX [ 2 ] ;
P_R_idx_3 = t1 -> mP_R . mX [ 3 ] ; out = t2 -> mICR ; out . mX [ 0 ] = 0.0 ;
out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out . mX
[ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0 ; out . mX [ 6 ] = X_idx_0 *
5.2410901467505238E-5 - P_R_idx_1 ; out . mX [ 7 ] = X_idx_4 - P_R_idx_2 ;
out . mX [ 8 ] = X_idx_3 - P_R_idx_3 ; ( void ) LC ; ( void ) t2 ; return 0 ;
} static int32_T ds_icr_im ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmIntVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mICR_IM ; out . mX [ 0 ] = 3 ; out . mX
[ 1 ] = 3 ; out . mX [ 2 ] = 3 ; out . mX [ 3 ] = 3 ; out . mX [ 4 ] = 3 ;
out . mX [ 5 ] = 3 ; out . mX [ 6 ] = 3 ; out . mX [ 7 ] = 3 ; out . mX [ 8 ]
= 3 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_id (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mICR_ID ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX
[ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [
5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8
] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_il
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mICR_IL ; out . mX [ 0 ] = true ; out . mX [ 1 ] = true ; out . mX [
2 ] = true ; out . mX [ 3 ] = true ; out . mX [ 4 ] = true ; out . mX [ 5 ] =
true ; out . mX [ 6 ] = true ; out . mX [ 7 ] = true ; out . mX [ 8 ] = true
; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXICR ;
out . mX [ 0 ] = 5.2410901467505238E-5 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2
] = 1.0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr_p
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDXICR_P ; out . mNumCol = 22ULL ; out . mNumRow = 9ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 1 ; out . mJc [ 3 ] =
1 ; out . mJc [ 4 ] = 2 ; out . mJc [ 5 ] = 3 ; out . mJc [ 6 ] = 3 ; out .
mJc [ 7 ] = 3 ; out . mJc [ 8 ] = 3 ; out . mJc [ 9 ] = 3 ; out . mJc [ 10 ]
= 3 ; out . mJc [ 11 ] = 3 ; out . mJc [ 12 ] = 3 ; out . mJc [ 13 ] = 3 ;
out . mJc [ 14 ] = 3 ; out . mJc [ 15 ] = 3 ; out . mJc [ 16 ] = 3 ; out .
mJc [ 17 ] = 3 ; out . mJc [ 18 ] = 3 ; out . mJc [ 19 ] = 3 ; out . mJc [ 20
] = 3 ; out . mJc [ 21 ] = 3 ; out . mJc [ 22 ] = 3 ; out . mIr [ 0 ] = 6 ;
out . mIr [ 1 ] = 8 ; out . mIr [ 2 ] = 7 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_ddicr ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddicr_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDICR_P ; out . mNumCol = 0ULL ; out . mNumRow = 9ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_tduicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mTDUICR_P ; out . mNumCol = 5ULL ; out . mNumRow = 9ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_icrm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_icrm_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mICRM_P ; out . mNumCol = 22ULL ; out . mNumRow = 9ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ;
out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ; out .
mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out . mJc [ 20
] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dxicrm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicrm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDXICRM_P ; out . mNumCol = 22ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out . mJc [ 13 ] = 0 ;
out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [ 16 ] = 0 ; out .
mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0 ; out . mJc [ 20
] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_ddicrm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicrm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDICRM_P ; out . mNumCol = 0ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_imin ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mIMIN ; out . mX [ 0 ] = - pmf_get_inf ( ) ; out . mX [ 1 ] = -
pmf_get_inf ( ) ; out . mX [ 2 ] = - pmf_get_inf ( ) ; out . mX [ 3 ] = -
pmf_get_inf ( ) ; out . mX [ 4 ] = - pmf_get_inf ( ) ; out . mX [ 5 ] = -
pmf_get_inf ( ) ; out . mX [ 6 ] = - pmf_get_inf ( ) ; out . mX [ 7 ] = -
pmf_get_inf ( ) ; out . mX [ 8 ] = - pmf_get_inf ( ) ; out . mX [ 9 ] = -
pmf_get_inf ( ) ; out . mX [ 10 ] = - pmf_get_inf ( ) ; out . mX [ 11 ] = -
pmf_get_inf ( ) ; out . mX [ 12 ] = - pmf_get_inf ( ) ; out . mX [ 13 ] = -
pmf_get_inf ( ) ; out . mX [ 14 ] = - pmf_get_inf ( ) ; out . mX [ 15 ] = -
pmf_get_inf ( ) ; out . mX [ 16 ] = - pmf_get_inf ( ) ; out . mX [ 17 ] = -
pmf_get_inf ( ) ; out . mX [ 18 ] = - pmf_get_inf ( ) ; out . mX [ 19 ] = -
pmf_get_inf ( ) ; out . mX [ 20 ] = - pmf_get_inf ( ) ; out . mX [ 21 ] = -
pmf_get_inf ( ) ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_imax ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mIMAX ; out . mX [ 0 ] = pmf_get_inf ( ) ; out . mX [ 1 ] =
pmf_get_inf ( ) ; out . mX [ 2 ] = pmf_get_inf ( ) ; out . mX [ 3 ] =
pmf_get_inf ( ) ; out . mX [ 4 ] = pmf_get_inf ( ) ; out . mX [ 5 ] =
pmf_get_inf ( ) ; out . mX [ 6 ] = pmf_get_inf ( ) ; out . mX [ 7 ] =
pmf_get_inf ( ) ; out . mX [ 8 ] = pmf_get_inf ( ) ; out . mX [ 9 ] =
pmf_get_inf ( ) ; out . mX [ 10 ] = pmf_get_inf ( ) ; out . mX [ 11 ] =
pmf_get_inf ( ) ; out . mX [ 12 ] = pmf_get_inf ( ) ; out . mX [ 13 ] =
pmf_get_inf ( ) ; out . mX [ 14 ] = pmf_get_inf ( ) ; out . mX [ 15 ] =
pmf_get_inf ( ) ; out . mX [ 16 ] = pmf_get_inf ( ) ; out . mX [ 17 ] =
pmf_get_inf ( ) ; out . mX [ 18 ] = pmf_get_inf ( ) ; out . mX [ 19 ] =
pmf_get_inf ( ) ; out . mX [ 20 ] = pmf_get_inf ( ) ; out . mX [ 21 ] =
pmf_get_inf ( ) ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dimin ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dimax ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_m (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mM ; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] =
1.0 ; out . mX [ 3 ] = - 0.001 ; out . mX [ 4 ] = - 0.005 ; out . mX [ 5 ] =
- 1.0E-6 ; out . mX [ 6 ] = 5.0E-6 ; out . mX [ 7 ] = 0.02 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_m_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mM_P ; out . mNumCol = 22ULL ;
out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc
[ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ;
out . mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ] = 8 ; out . mJc [
9 ] = 8 ; out . mJc [ 10 ] = 8 ; out . mJc [ 11 ] = 8 ; out . mJc [ 12 ] = 8
; out . mJc [ 13 ] = 8 ; out . mJc [ 14 ] = 8 ; out . mJc [ 15 ] = 8 ; out .
mJc [ 16 ] = 8 ; out . mJc [ 17 ] = 8 ; out . mJc [ 18 ] = 8 ; out . mJc [ 19
] = 8 ; out . mJc [ 20 ] = 8 ; out . mJc [ 21 ] = 8 ; out . mJc [ 22 ] = 8 ;
out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 2 ; out . mIr [
3 ] = 3 ; out . mIr [ 4 ] = 4 ; out . mIr [ 5 ] = 5 ; out . mIr [ 6 ] = 7 ;
out . mIr [ 7 ] = 6 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dxm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXM_P ; out . mNumCol = 22ULL
; out . mNumRow = 8ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out .
mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] =
0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out .
mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12
] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ;
out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out .
mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22
] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddm (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_ddm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDDM_P ; out . mNumCol = 0ULL ;
out . mNumRow = 8ULL ; out . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_dum ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dum_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUM_P
; out . mNumCol = 5ULL ; out . mNumRow = 8ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] =
0 ; out . mJc [ 5 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dtm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void
) t2 ; return 0 ; } static int32_T ds_dtm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTM_P ; out . mNumCol = 1ULL ;
out . mNumRow = 8ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void )
LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dpm ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dpm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDPM_P ; out . mNumCol = 4ULL ; out . mNumRow = 8ULL ; out . mJc
[ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ;
out . mJc [ 4 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_vmm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mVMM ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2
] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ]
= false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dp_l ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_i (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dp_j ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_r ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qx ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qu ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qt ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_q1 ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qx_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mQX_P ; out . mNumCol = 22ULL ; out .
mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out .
mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] =
0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; out
. mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out . mJc [
16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19 ] = 0
; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ; ( void
) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qu_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mQU_P
; out . mNumCol = 5ULL ; out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] =
0 ; out . mJc [ 5 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_qt_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void )
LC ; out = t2 -> mQT_P ; out . mNumCol = 1ULL ; out . mNumRow = 22ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ;
} static int32_T ds_q1_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mQ1_P ; out . mNumCol = 1ULL ; out .
mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_var_tol ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mVAR_TOL ; out . mX [ 0 ] =
1.0E-9 ; out . mX [ 1 ] = 1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] =
1.0E-9 ; out . mX [ 4 ] = 1.0E-9 ; out . mX [ 5 ] = 1.0E-9 ; out . mX [ 6 ] =
1.0E-9 ; out . mX [ 7 ] = 1.0E-9 ; out . mX [ 8 ] = 1.0E-9 ; out . mX [ 9 ] =
1.0E-9 ; out . mX [ 10 ] = 1.0E-9 ; out . mX [ 11 ] = 1.0E-9 ; out . mX [ 12
] = 1.0E-9 ; out . mX [ 13 ] = 1.0E-9 ; out . mX [ 14 ] = 1.0E-9 ; out . mX [
15 ] = 1.0E-9 ; out . mX [ 16 ] = 1.0E-9 ; out . mX [ 17 ] = 1.0E-9 ; out .
mX [ 18 ] = 1.0E-9 ; out . mX [ 19 ] = 1.0E-9 ; out . mX [ 20 ] = 1.0E-9 ;
out . mX [ 21 ] = 1.0E-9 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_eq_tol ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mEQ_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] = 1.0E-9 ; out
. mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] = 1.0E-9 ; out
. mX [ 5 ] = 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7 ] = 1.0E-9 ; out
. mX [ 8 ] = 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; out . mX [ 10 ] = 1.0E-9 ;
out . mX [ 11 ] = 1.0E-9 ; out . mX [ 12 ] = 1.0E-9 ; out . mX [ 13 ] =
1.0E-9 ; out . mX [ 14 ] = 1.0E-9 ; out . mX [ 15 ] = 1.0E-9 ; out . mX [ 16
] = 1.0E-9 ; out . mX [ 17 ] = 1.0E-9 ; out . mX [ 18 ] = 1.0E-9 ; out . mX [
19 ] = 1.0E-9 ; out . mX [ 20 ] = 1.0E-9 ; out . mX [ 21 ] = 1.0E-9 ; ( void
) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_lv ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mLV ; out .
mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX
[ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [
6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9
] = false ; out . mX [ 10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12
] = false ; out . mX [ 13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15
] = false ; out . mX [ 16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18
] = false ; out . mX [ 19 ] = false ; out . mX [ 20 ] = true ; out . mX [ 21
] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_slv (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mSLV ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2
] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ]
= false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] =
false ; out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [ 11 ] =
false ; out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [ 14 ] =
false ; out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX [ 17 ] =
false ; out . mX [ 18 ] = false ; out . mX [ 19 ] = false ; out . mX [ 20 ] =
true ; out . mX [ 21 ] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_nldv ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mNLDV ; out . mX [ 0 ] = false ; out .
mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX
[ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [
7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10
] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13
] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ; out . mX [ 16
] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19
] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; ( void ) LC ;
( void ) t2 ; return 0 ; } static int32_T ds_sclv ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mSCLV ; out . mX [ 0 ] = false
; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ;
out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ;
out . mX [ 10 ] = false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ;
out . mX [ 13 ] = false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = false ;
out . mX [ 16 ] = false ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ;
out . mX [ 19 ] = false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ;
( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_duy ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_duy_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDUY_P ; out . mNumCol = 5ULL ; out .
mNumRow = 12ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; (
void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_mduy_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mMDUY_P ; out . mNumCol = 5ULL ; out . mNumRow = 12ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_mdxy_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mMDXY_P ; out . mNumCol = 22ULL ; out
. mNumRow = 12ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2
] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out
. mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ]
= 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ;
out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ; out .
mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out . mJc [ 19
] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22 ] = 0 ;
( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_tduy_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mTDUY_P ; out . mNumCol = 5ULL ; out . mNumRow = 12ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dty ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dty_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTY_P
; out . mNumCol = 1ULL ; out . mNumRow = 12ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
