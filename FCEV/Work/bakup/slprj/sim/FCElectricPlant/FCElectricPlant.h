#ifndef RTW_HEADER_FCElectricPlant_h_
#define RTW_HEADER_FCElectricPlant_h_
#ifndef FCElectricPlant_COMMON_INCLUDES_
#define FCElectricPlant_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw_rtp.h"
#include "FCElectricPlant_66b3e3da_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "FCElectricPlant_types.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "zero_crossing_types.h"
typedef struct { real_T pkj2z4oo3u ; real_T asjq4mbyhk [ 4 ] ; real_T
dk5flxuylx ; real_T l5mxciypgk ; real_T jqidlvl23f [ 4 ] ; real_T mnzqr3w1lk
; real_T p3lqlpcpn3 ; real_T ihhimpqqqy ; real_T n4gdrlsxmf [ 4 ] ; real_T
jvn35arcfz [ 4 ] ; real_T ayxlrgrsxz ; real_T mzb3loouga [ 4 ] ; real_T
oipaaa0kir ; real_T ls2e0pwrtj [ 33 ] ; real_T biw2tnvtb2 [ 12 ] ; real_T
nznfhl0kdq ; real_T bsqs4da4gs ; real_T kkir33ipb0 ; real_T p0nxzqx3wi ;
real_T esr0f4fvvl ; real_T gh1c3gg4et ; real_T pkj2z4oo3u_mbvzarwird ; real_T
dk5flxuylx_cl54gopm0x ; } o4lq13rlvq ; typedef struct { real_T kj5rz3xfjm ;
real_T edy5j03fnw ; real_T b2ulb3kawc [ 2 ] ; real_T lt1bov1sav [ 2 ] ;
real_T jshnxgkzwr [ 2 ] ; real_T izk0xvw1xd ; real_T frobztw51j ; real_T
dibdvley0g ; real_T lejit1v3js ; real_T hraxoo25u3 ; void * npwmlqxyce ; void
* al1fmehhaz ; void * elguqa0b2e ; void * pp1owdtl2u ; void * d1wvvmzm0f ;
void * gzv1u0tvgb ; void * ixid51lv3p ; void * arot5bjcnp ; void * ong0nqbuuh
; void * aeo5zp33lm ; void * d3bvrp35kc ; struct { void * AQHandles ; }
edo2yybvgy ; struct { void * AQHandles ; } k5lhedc1qi ; struct { void *
AQHandles ; } buyjzzgvti ; struct { void * AQHandles ; } edo2yybvgya ; struct
{ void * AQHandles ; } jhjx45yzf4 ; struct { void * AQHandles ; } gz2yikcxsb
; struct { void * AQHandles ; } aqh4yyrzcm ; struct { void * AQHandles ; }
dkfsbamwtk ; struct { void * AQHandles ; } gz3smcnpgn ; struct { void *
AQHandles ; } gz2yikcxsbr ; struct { void * AQHandles ; } nwagfadtz5 ; struct
{ void * AQHandles ; } ir3sjqcelg ; struct { void * AQHandles ; } boxtz4t1xz
; struct { void * AQHandles ; } gz2yikcxsbro ; struct { void * AQHandles ; }
jb5p2yd0pp ; struct { void * AQHandles ; } pt2ziyjsco ; struct { void *
AQHandles ; } kesjhajib2 ; struct { void * AQHandles ; } gz2yikcxsbro0 ;
struct { void * AQHandles ; } pt2ziyjsco3 ; struct { void * AQHandles ; }
nwagfadtz5a ; struct { void * AQHandles ; } li5lvqaaj1 ; struct { void *
AQHandles ; } gz2yikcxsbro0p ; struct { void * AQHandles ; } jb5p2yd0ppu ;
int_T ie3nwfalvy ; int_T ei0dla2ntt ; int_T ayncd5n545 [ 11 ] ; int_T
pezf5khqcc ; int_T pejv3isjj0 ; int_T itcp3adbb2 ; int_T fjzcmwatqu ; int32_T
gtb02rstsj ; int8_T ovpbztzj3o ; int8_T h4qt3151rq ; int8_T m2x0xkvn11 ;
boolean_T b1rnbazyek ; boolean_T drsumc42bk ; boolean_T otqenqom1m ;
boolean_T cftbneazjv ; } ammy3t1awn ; typedef struct { real_T firselc23g ;
real_T ggydzdzl02 ; real_T c0wdcmzq0f ; real_T cubrnq01gj ; real_T czf51nn3to
; real_T abtw1mwj2p ; real_T ghzzlnog0w ; real_T fpiq4t01ji ; real_T
bw1z2apabl ; real_T hobiusbml3 [ 22 ] ; real_T auhpbuhjo1 ; real_T hehcfcd5qe
; real_T hrtmiik4pa ; real_T movu3laimu ; real_T msh41qf5ar ; real_T
krft1240nt ; real_T czexk0o1qx ; } fw3fcrujzt ; typedef struct { real_T
firselc23g ; real_T ggydzdzl02 ; real_T c0wdcmzq0f ; real_T cubrnq01gj ;
real_T czf51nn3to ; real_T abtw1mwj2p ; real_T ghzzlnog0w ; real_T fpiq4t01ji
; real_T bw1z2apabl ; real_T hobiusbml3 [ 22 ] ; real_T auhpbuhjo1 ; real_T
hehcfcd5qe ; real_T hrtmiik4pa ; real_T movu3laimu ; real_T msh41qf5ar ;
real_T krft1240nt ; real_T czexk0o1qx ; } dmzi3aztzd ; typedef struct {
boolean_T firselc23g ; boolean_T ggydzdzl02 ; boolean_T c0wdcmzq0f ;
boolean_T cubrnq01gj ; boolean_T czf51nn3to ; boolean_T abtw1mwj2p ;
boolean_T ghzzlnog0w ; boolean_T fpiq4t01ji ; boolean_T bw1z2apabl ;
boolean_T hobiusbml3 [ 22 ] ; boolean_T auhpbuhjo1 ; boolean_T hehcfcd5qe ;
boolean_T hrtmiik4pa ; boolean_T movu3laimu ; boolean_T msh41qf5ar ;
boolean_T krft1240nt ; boolean_T czexk0o1qx ; } h1ig1prbuq ; typedef struct {
real_T firselc23g ; real_T ggydzdzl02 ; real_T c0wdcmzq0f ; real_T cubrnq01gj
; real_T czf51nn3to ; real_T abtw1mwj2p ; real_T ghzzlnog0w ; real_T
fpiq4t01ji ; real_T bw1z2apabl ; real_T hobiusbml3 [ 22 ] ; real_T auhpbuhjo1
; real_T hehcfcd5qe ; real_T hrtmiik4pa ; real_T movu3laimu ; real_T
msh41qf5ar ; real_T krft1240nt ; real_T czexk0o1qx ; } nwplfevrxw ; typedef
struct { real_T firselc23g ; real_T ggydzdzl02 ; real_T c0wdcmzq0f ; real_T
cubrnq01gj ; real_T czf51nn3to ; real_T abtw1mwj2p ; real_T ghzzlnog0w ;
real_T fpiq4t01ji ; real_T bw1z2apabl ; real_T hobiusbml3 [ 22 ] ; real_T
auhpbuhjo1 ; real_T hehcfcd5qe ; real_T hrtmiik4pa ; real_T movu3laimu ;
real_T msh41qf5ar ; real_T krft1240nt ; real_T czexk0o1qx ; } kz4c240slf ;
typedef struct { real_T firselc23g ; real_T ggydzdzl02 ; real_T c0wdcmzq0f ;
real_T cubrnq01gj ; real_T czf51nn3to ; real_T abtw1mwj2p ; real_T ghzzlnog0w
; real_T fpiq4t01ji ; real_T bw1z2apabl ; real_T hobiusbml3 [ 22 ] ; real_T
auhpbuhjo1 ; real_T hehcfcd5qe ; real_T hrtmiik4pa ; real_T movu3laimu ;
real_T msh41qf5ar ; real_T krft1240nt ; real_T czexk0o1qx ; } mclj3ytwnx ;
typedef struct { real_T f32er3p45w ; real_T lmv1fmusj4 ; real_T p2geidjuwo ;
real_T jmzcallcle ; real_T l2mwos2kg4 ; real_T p3lrsdcado ; real_T lgv2dm04sd
; real_T kfnrxgpifm ; real_T dr5f3rpamj ; real_T ddtoowsnq3 ; real_T
oyuckht2mz ; real_T lexj5vsuhk ; real_T b4skf40fyd ; real_T nexas45wuf ;
real_T h5dbph5xky ; real_T m2gmz50mwz ; real_T hjttzgkxyy ; real_T fxybjaw2ju
; real_T pm0xjg2pqc ; } kqptpzakik ; typedef struct { ZCSigState eleagvs5h0 ;
ZCSigState nrrnky0p5s ; ZCSigState oqnwqyvtzn ; ZCSigState bd3xkl2cao ;
ZCSigState izzexp35xc ; ZCSigState l3fbuw0nf2 ; ZCSigState ionpupjuyg ;
ZCSigState oxzyidyxki ; ZCSigState m1xtprldm3 ; ZCSigState pwx2vjo0qs ;
ZCSigState loauger5pf ; ZCSigState cunoffyaeu ; ZCSigState jo2aukiwdi ; }
km30avrcex ; typedef struct { int_T ir [ 25 ] ; int_T jc [ 39 ] ; real_T pr [
25 ] ; } nso0i44jvq ; typedef struct { const real_T a30h44rt3r ; } bfougxayhi
; struct locdm2fqb0b_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ;
real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T
P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ;
real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T
P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ;
real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T
P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 [ 869 ] ; real_T
P_42 [ 79 ] ; real_T P_43 [ 11 ] ; real_T P_44 [ 869 ] ; real_T P_45 [ 79 ] ;
real_T P_46 [ 11 ] ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ;
real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T
P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ;
real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T
P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ;
real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T
P_78 ; real_T P_79 ; uint32_T P_80 ; uint32_T P_81 [ 2 ] ; uint32_T P_82 ;
uint32_T P_83 [ 2 ] ; uint32_T P_84 ; uint32_T P_85 [ 2 ] ; uint32_T P_86 [ 2
] ; uint32_T P_87 [ 2 ] ; } ; struct fjefo04diq { struct SimStruct_tag *
_mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [
1 ] ; real_T mr_nonContSig2 [ 1 ] ; } NonContDerivMemory ;
ssNonContDerivSigInfo nonContDerivSignal [ 3 ] ; real_T * massMatrixBasePr ;
const rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
45 ] ; int32_T * vardimsAddress [ 45 ] ; RTWLoggingFcnPtr loggingPtrs [ 45 ]
; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { uint8_T rtmDbBufReadBuf2 ; uint8_T rtmDbBufWriteBuf2 ; boolean_T
rtmDbBufLastBufWr2 ; real_T rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3
] ; } Timing ; } ; typedef struct { o4lq13rlvq rtb ; ammy3t1awn rtdw ;
m5e23pbc2h rtm ; km30avrcex rtzce ; } g5h05g3u4wx ; extern void axkawtnuua (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , km30avrcex * localZCE , real_T *
localMM , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_FCElectricPlant_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_FCElectricPlant_GetDWork ( const g5h05g3u4wx * mdlrefDW ) ; extern void
mr_FCElectricPlant_SetDWork ( g5h05g3u4wx * mdlrefDW , const mxArray * ssDW )
; extern void mr_FCElectricPlant_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * FCElectricPlant_GetCAPIStaticMap (
void ) ; extern void irvj0luwjw ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn
* localDW ) ; extern void k5nsrx2akm ( m5e23pbc2h * const lmamcwn3a2 ,
ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern void gtrcczzcor (
m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW , fw3fcrujzt * localX )
; extern void irfppkdltu ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn *
localDW ) ; extern void alwc4n2foq ( m5e23pbc2h * const lmamcwn3a2 ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX , kz4c240slf
* localXPerturbMin , mclj3ytwnx * localXPerturbMax ) ; extern void imv3dllygl
( m5e23pbc2h * const lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq *
localB , ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot
) ; extern void mscgivy4fk ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq *
localB , ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern void
iyhavcqilr ( m5e23pbc2h * const lmamcwn3a2 , const real_T * crmxvln0sn ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd
* localXdot ) ; extern void bpia4crzhf ( m5e23pbc2h * const lmamcwn3a2 ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern
void abih3gg12y ( m5e23pbc2h * const lmamcwn3a2 , const real_T * enxvezuult ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX , kqptpzakik
* localZCSV ) ; extern void czx1gq31fm ( m5e23pbc2h * const lmamcwn3a2 ,
o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern
void FCElectricPlant ( m5e23pbc2h * const lmamcwn3a2 , const real_T *
nhquhhxexx , const real_T * crmxvln0sn , const real_T * enxvezuult , real_T *
laajwttrsw , real_T * l45wd5pbjh , real_T * pjtg1ua4jf , real_T * jkukrewnlm
, real_T * lwu0tsgovp , real_T * oz3dekjw3t , real_T * ca0lva1ra5 , real_T *
csbds3kgit , o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX
, km30avrcex * localZCE ) ; extern void FCElectricPlantTID2 ( m5e23pbc2h *
const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ) ; extern void
mt14yrnbuj ( ammy3t1awn * localDW , m5e23pbc2h * const lmamcwn3a2 ) ; extern
const real_T FCElectricPlant_RGND ;
#endif
