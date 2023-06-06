#ifndef RTW_HEADER_FCEvReferenceApplication_h_
#define RTW_HEADER_FCEvReferenceApplication_h_
#ifndef FCEvReferenceApplication_COMMON_INCLUDES_
#define FCEvReferenceApplication_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "FCEvReferenceApplication_types.h"
#include "DrivetrainEv.h"
#include "FCElectricPlant.h"
#include "FCEvPowertrainController.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <string.h>
#include <stddef.h>
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "zero_crossing_types.h"
#define MODEL_NAME FCEvReferenceApplication
#define NSAMPLE_TIMES (7) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (88) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (528)   
#elif NCSTATES != 528
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T i1rtqrd21n ; } aqpkndaxav ; typedef struct { int8_T
g1iyf3f52k ; boolean_T flozbskedr ; } oycks5i3te ; typedef struct { real_T
mdtyud1uco ; real_T hs2db3gxe1 ; real_T kyvnagqwsz ; real_T nldptn0dqc ;
real_T gh4eu0hgdx ; real_T k0miwqwhp4 ; real_T ccugnyas5r ; real_T fyc3gwx23b
[ 2 ] ; real_T jvpo5pxor4 [ 2 ] ; real_T nivlwap1ku ; real_T ovilnfqx3i ;
real_T k4zvb232bn ; real_T nwobq5pehg ; real_T grzfptpe55 ; real_T hzezmdv3lt
; real_T aqtgj50qai ; real_T evj5xoqrrj ; real_T lfu0clsnxa ; real_T
hrpk2gwn22 ; real_T fvrzozslmz ; real_T nlscj1wkoa ; real_T f1gdql1qam ;
real_T jo21islmqg ; real_T jb5z2dve1g ; real_T okzca3psdg ; real_T pngeld3eh4
; real_T nclhnaqn33 ; real_T dex1ynigww ; real_T eksslsa3nq ; real_T
c1yh21bbxg ; real_T puf4jg5pqu ; real_T jjtf4hxjvb ; real_T pvr5co4ozs ;
real_T hnspac23rl ; real_T ghz3myl3uq ; real_T bg0r4hctuw ; real_T ifdyy33fmz
; real_T gmg1uuwodr ; real_T imasaqk5dh ; real_T pjcnv0yr3h ; real_T
amo2ayshmg ; real_T mtqi5bjqaq ; real_T ox3udpfx0s ; real_T ggv2kf5x13 ;
real_T ob5patswnz ; real_T m2ujessiey ; real_T dkmci12msj ; real_T jdqevtvewp
[ 2 ] ; real_T ntnlhbhu4n ; real_T jrzv51i13d ; real_T n1mdtuox5b ; real_T
ixmdmgwvrg ; real_T pg4vu0woab ; real_T cxt45itkxu ; real_T akfb4dpcur ;
real_T c0jtinjrgp ; real_T fi4crlath4 ; real_T byu4dnscl5 ; real_T dffnpnahry
; real_T itnb0b3ert ; real_T b5bw4cab53 ; real_T azqdsmx4o5 ; real_T
gc4ky0bjec ; real_T a5mvaifpwe ; real_T aawice3zmc ; real_T pwqsmmfyxm ;
real_T kfjumalmu5 ; real_T a1ifzjuqu2 ; real_T iewvvph2bn ; real_T b0hrwclaey
; real_T iioo4rwecj ; real_T mbw0oe0xgq ; real_T gnzc0nrj3w ; real_T
dfgfnvbjkq ; real_T l0xwo0ycrz ; real_T b2ehf0ulx5 ; real_T ee51mjy2aa [ 2 ]
; real_T lpbnodzorb [ 2 ] ; real_T jrtiyk3oiq ; real_T caokwv1pyy ; real_T
dcnebbmssf ; boolean_T pmarfk24je ; boolean_T l33ngyt2ph ; boolean_T
drdlsysypy ; boolean_T mhizywt5g2 ; boolean_T jupidj25f2 ; aqpkndaxav
dxcv00k5uk ; aqpkndaxav mfp3l0luimk ; } arol2xwgeu ; typedef struct { real_T
mumtw2t4fy [ 2 ] ; real_T kvonjsymh5 ; real_T dsvgzsahab ; real_T iw5r3fihha
; real_T am1tetzj4p ; volatile real_T lxkfwihbro [ 2 ] ; volatile real_T
cqehw34o0h ; real_T hfmbz1d5vw ; real_T cd2xpetkh4 ; real_T bo4hodedpa ;
real_T cm5tdkgoya ; real_T bkuu3yyjsl ; real_T nez5k4mt2q ; real_T eyagulv3eu
; real_T evm1loz2xr ; volatile real_T ahnghn4brt ; volatile real_T cl5g0rwk2e
; volatile real_T filyznw4an ; volatile real_T fmivgn3dll ; volatile real_T
ab044e5fyd ; volatile real_T bus0ytb1zk ; real_T mgx323pfpy ; real_T
lkzjqwrbzn ; real_T naf5zf5ewa ; real_T a2bqy2lbvf ; volatile real_T
mhjabgx12v ; volatile real_T flieyulmtp ; volatile real_T mzpieghwj5 ;
volatile real_T itjxrblkjw ; volatile real_T kyu2utgbhq ; volatile real_T
ayylq5cimi ; volatile real_T ghmgweglut ; volatile real_T gjzj5p0bc1 ; real_T
pn5h0qud2t ; real_T lddh2eciz1 ; real_T bsds3pyzel ; real_T cuuxgkcmrh ;
real_T jx2b1t4erw ; struct { void * AQHandles ; } jfjzwnxtuk ; struct { void
* LoggedData [ 8 ] ; } ovlvx5kkbf ; struct { void * LoggedData ; } i5lo0wqw00
; struct { void * AQHandles ; } alsymnf2nf ; struct { void * AQHandles ; }
h4dlhxn3ru ; struct { void * AQHandles ; } jfjzwnxtukc ; struct { void *
AQHandles ; } nyib12dh5l ; struct { void * AQHandles ; } epffddpn0z ; struct
{ void * AQHandles ; } alsymnf2nfl ; struct { void * AQHandles ; }
h4dlhxn3rui ; struct { void * LoggedData ; } icos43ell0 ; int32_T ahou0vl2z3
; uint32_T pjfrrptm45 ; uint32_T nmxkq34d03 ; int_T noc02rvf4u ; int_T
id1a31qwaj ; int_T jskwu05yzr ; volatile int8_T agsuq5sl52 ; volatile int8_T
aqmbdilrtq ; volatile int8_T fondni20e2 ; volatile int8_T kyjqeczcx2 ;
volatile int8_T axxnlh2wvc ; volatile int8_T p4tvqhnquk ; volatile int8_T
gc5sh1wkwt ; volatile int8_T aq2j102lks ; int8_T gzgin33ia0 ; volatile int8_T
pv4mryn5kw ; volatile int8_T bz2xjgs4w4 ; volatile int8_T jawpdqhxq5 ;
volatile int8_T pvituonzi0 ; volatile int8_T oztkmm3ipn ; volatile int8_T
dl1wjiyyo5 ; volatile int8_T fp52fvpgcn ; volatile int8_T mmgm2ezxm5 ;
uint8_T mbvoiiw20z ; uint8_T draduovrmv ; boolean_T lzrdwg5jtp ; boolean_T
nx4k1o3c2b ; hmke5fx3tcj jkb4b3hcqy ; g5h05g3u4wx f2cw5vgug5 ; int32_T
im32k3bxdo ; dif03hcjvgl jfaeol5er3 ; oycks5i3te dxcv00k5uk ; oycks5i3te
mfp3l0luimk ; } lw0sy0o11j ; typedef struct { real_T gstwyn3q5a ; edp3webv0p
ietjokded4 ; fw3fcrujzt m5iyq5n2ct ; real_T ksul3xbf4x ; real_T mbchhank0o ;
real_T k335v0wdxu ; real_T pq24pxcnro ; } gtrdqgpqkf ; typedef int_T
m44wadfesj [ 1 ] ; typedef real_T gag0esqvhe [ 2 ] ; typedef struct { real_T
gstwyn3q5a ; cspbap1de4 ietjokded4 ; dmzi3aztzd m5iyq5n2ct ; real_T
ksul3xbf4x ; real_T mbchhank0o ; real_T k335v0wdxu ; real_T pq24pxcnro ; }
hpb1o51mh3 ; typedef struct { boolean_T gstwyn3q5a ; bbuzvmnhsa ietjokded4 ;
h1ig1prbuq m5iyq5n2ct ; boolean_T ksul3xbf4x ; boolean_T mbchhank0o ;
boolean_T k335v0wdxu ; boolean_T pq24pxcnro ; } bhwklpbnhv ; typedef struct {
real_T gstwyn3q5a ; nupxuy3etd ietjokded4 ; nwplfevrxw m5iyq5n2ct ; real_T
ksul3xbf4x ; real_T mbchhank0o ; real_T k335v0wdxu ; real_T pq24pxcnro ; }
njxchgos5w ; typedef struct { real_T gstwyn3q5a ; aciiplviyd ietjokded4 ;
kz4c240slf m5iyq5n2ct ; real_T ksul3xbf4x ; real_T mbchhank0o ; real_T
k335v0wdxu ; real_T pq24pxcnro ; } amcrnl5xhe ; typedef struct { real_T
gstwyn3q5a ; cphoervchx ietjokded4 ; mclj3ytwnx m5iyq5n2ct ; real_T
ksul3xbf4x ; real_T mbchhank0o ; real_T k335v0wdxu ; real_T pq24pxcnro ; }
erijzqocdu ; typedef struct { real_T fjxfckhbpi ; pmzuarg20b c5wprycnbf ;
kqptpzakik pnytuy05dq ; real_T haml3r3buk ; real_T f3pm3langs ; real_T
haca2ktl4e ; real_T hbjn53qhmd ; real_T ohhfbatyhl ; real_T cfqa4pb0am ;
real_T hugs3seba2 ; real_T bbjxsxtbos ; } mnwdf2fetg ; typedef struct { int_T
ir [ 129 ] ; int_T jc [ 529 ] ; real_T pr [ 129 ] ; } amt5hqyor4 ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [
3 ] ; } DataMapInfo ; struct bo1z0vnccpa_ { real_T
LongitudinalDriverModel_GearInit ; real_T SignalHold_IC ; real_T
SignalHold_IC_k5etbcnmrh ; real_T LongitudinalDriverModel_Kpt ; real_T
LongitudinalDriverModel_L ; real_T LongitudinalDriverModel_aR ; real_T
LongitudinalDriverModel_bR ; real_T LongitudinalDriverModel_cR ; real_T
LongitudinalDriverModel_g ; real_T LongitudinalDriverModel_m ; real_T
LongitudinalDriverModel_tShift ; real_T LongitudinalDriverModel_tau ; real_T
u1_UpperSat ; real_T u1_LowerSat ; real_T u0_UpperSat ; real_T u0_LowerSat ;
real_T Constant_Value ; real_T Constant_Value_nhp3htkj21 ; real_T
Switch_Threshold ; real_T uDLookupTable_tableData [ 1370 ] ; real_T
uDLookupTable_bp01Data [ 1370 ] ; real_T MotorCouplingDynamics_A ; real_T
MotorCouplingDynamics_C ; real_T FirstOrderHold_IniOut ; real_T
FirstOrderHold_ErrTol ; real_T mstomph_Gain ; real_T radstoRPM_Gain ; real_T
FirstOrderHold_IniOut_ign3oxg5f1 ; real_T FirstOrderHold_ErrTol_gdzadtrzfv ;
real_T FirstOrderHold1_IniOut ; real_T FirstOrderHold1_ErrTol ; real_T
Integrator_IC ; real_T mtomile_Gain ; real_T Integrator1_IC ; real_T
m3toUSGal_Gain ; real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ;
real_T mto100Km_Gain ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T m3toL_Gain ; real_T
Saturation_UpperSat_i5ock22ux5 ; real_T Saturation_LowerSat_lcopxrfjqs ;
real_T Gain_Gain ; real_T kgstoGasgals_Gain ; real_T m3pergal_Gain ; real_T
Integrator1_IC_ajivek24xs ; real_T Saturation_UpperSat_ejlhkaxvm3 ; real_T
Saturation_LowerSat_jq5vbx40o3 ; real_T Saturation_UpperSat_n5cfzewtp3 ;
real_T Saturation_LowerSat_jdvecoiqp4 ; real_T Gain2_Gain ; real_T
Saturation_UpperSat_eqdlv1qluu ; real_T Saturation_LowerSat_lo2mm43j55 ;
real_T Gain1_Gain ; real_T HitCrossing_Offset ; real_T Integrator2_IC ;
real_T UnitDelay_InitialCondition [ 2 ] ; real_T pause_time_Value ; real_T
Constant_Value_brbakq3rcg ; real_T Gain_Gain_nhytib1535 ; real_T
USEPAkwhUSgalequivalent_Value ; real_T sperh_Value ; real_T wtokw_Value ;
real_T repeat_Value ; real_T tFinal_Value ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Constant_Value_mg0ii2c5jx ; real_T
Constant_Value_lfd1si2n0l ; real_T Constant_Value_fb5mg350bv ; real_T
Constant1_Value ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern
arol2xwgeu arol2xwgeua ; extern gtrdqgpqkf gtrdqgpqkfx ; extern lw0sy0o11j
lw0sy0o11jr ; extern amt5hqyor4 amt5hqyor4n ; extern bo1z0vnccpa bo1z0vnccp ;
extern mxArray * mr_FCEvReferenceApplication_GetDWork ( ) ; extern void
mr_FCEvReferenceApplication_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_FCEvReferenceApplication_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
FCEvReferenceApplication_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
