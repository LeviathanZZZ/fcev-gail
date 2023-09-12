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
#include "FCElectricPlant_f9151c4e_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "FCElectricPlant_types.h"
#include <stddef.h>
#include <string.h>
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
typedef struct { real_T dv [ 665 ] ; real_T dv1 [ 665 ] ; real_T n5zg2lo03g ;
real_T brkjgij31f [ 4 ] ; real_T d31fe02c1j [ 4 ] ; real_T m4vtulkmjt [ 4 ] ;
real_T b13j45cydo ; real_T kqzmt5kme1 [ 4 ] ; real_T d1vyttnzih [ 4 ] ;
real_T jke0x3nf0x [ 4 ] ; real_T eartrnbzob [ 4 ] ; real_T jbwae2aqzh [ 4 ] ;
real_T l3n4ugyftb [ 4 ] ; real_T juwfq1mzri ; real_T hmhvu0ftwl ; real_T
ogx5lh5hr4 ; real_T dycp3mt3z3 [ 4 ] ; real_T hiaxbfam0w [ 4 ] ; real_T
ddehjbnx4b ; real_T jw0eii0b1p [ 4 ] ; real_T l1cguzheni ; real_T i3uwmxb4ma
[ 617 ] ; real_T al53ax5qkn [ 17 ] ; real_T d35fz3l5re ; real_T e3vzfch03e ;
real_T hreg3iigz5 ; real_T dwtus23pzu ; real_T bzodxox54x ; real_T gl1x3cqcqk
; real_T b0gerusyrk ; real_T lrv2smzsir ; real_T eartrnbzob_mbvzarwird ;
real_T goyafd53a5 ; } o4lq13rlvq ; typedef struct { real_T esgihri23s [ 2 ] ;
real_T aol2pgne35 [ 2 ] ; real_T mybfclyhka [ 2 ] ; real_T imu4ipn3nw [ 2 ] ;
real_T am2ldqdyyx [ 2 ] ; real_T dfduxfsclz [ 2 ] ; real_T cr135euvis [ 2 ] ;
real_T hinpofzfpa [ 2 ] ; real_T jqrc2iageq [ 2 ] ; real_T nhy4fjrvev [ 2 ] ;
real_T do5uuitab4 [ 2 ] ; real_T anv3dgii23 ; real_T cgodyj4yxm ; real_T
gfu5yue0a4 ; real_T jjwo3uvfgq ; real_T lgfdzy32uf ; void * ksiklz0hbn ; void
* pymy2pyhih ; void * j1mjeinhrl ; void * caf04x50w3 ; void * ietxxwcmve ;
void * mv5ka5whh1 ; void * ai5tmyvkr4 ; void * fuu3yr5t3a ; void * ln3oq3n23r
; void * ifelfl3pzw ; void * emvib5ax1p ; struct { void * AQHandles ; }
edo2yybvgy ; struct { void * AQHandles ; } k5lhedc1qi ; void * bcdomoeobw ;
void * dy4oa554kf ; void * d1c3ioipfx ; void * j5tmwqwkt2 ; void * nuawnfhb4p
; struct { void * AQHandles ; } buyjzzgvti ; struct { void * AQHandles ; }
edo2yybvgya ; struct { void * AQHandles ; } jhjx45yzf4 ; struct { void *
AQHandles ; } gz2yikcxsb ; struct { void * AQHandles ; } aqh4yyrzcm ; struct
{ void * AQHandles ; } dkfsbamwtk ; struct { void * AQHandles ; } gz3smcnpgn
; struct { void * AQHandles ; } gz2yikcxsbr ; struct { void * AQHandles ; }
nwagfadtz5 ; struct { void * AQHandles ; } ir3sjqcelg ; struct { void *
AQHandles ; } boxtz4t1xz ; struct { void * AQHandles ; } gz2yikcxsbro ;
struct { void * AQHandles ; } jb5p2yd0pp ; struct { void * AQHandles ; }
pt2ziyjsco ; struct { void * AQHandles ; } kesjhajib2 ; struct { void *
AQHandles ; } gz2yikcxsbro0 ; struct { void * AQHandles ; } pt2ziyjsco3 ;
struct { void * AQHandles ; } nwagfadtz5a ; struct { void * AQHandles ; }
li5lvqaaj1 ; struct { void * AQHandles ; } gz2yikcxsbro0p ; struct { void *
AQHandles ; } jb5p2yd0ppu ; int_T ie3nwfalvy ; int_T ei0dla2ntt ; int_T
dpbhdgg3j4 [ 218 ] ; int_T gl2catqxix ; int_T iobl1pwm02 ; int_T jn1hlles4f ;
int_T itcp3adbb2 ; int_T avda114tgy ; int32_T kpvq4y4ytj ; boolean_T
fczbez2now ; boolean_T f321hccueh ; boolean_T ocb0wghbme ; boolean_T
lzvkb5wx12 ; } ammy3t1awn ; typedef struct { real_T cjg15axlwj ; real_T
ggydzdzl02 ; real_T obun43xkmt ; real_T ghqrh5fgbd ; real_T egyqa4syxe ;
real_T ptuc3j0waz ; real_T nupwktvts5 ; real_T pbkku1th1h ; real_T ipbdkiozya
; real_T czf51nn3to ; real_T abtw1mwj2p ; real_T ghzzlnog0w ; real_T
fpiq4t01ji ; real_T n3wx255ehc ; real_T lq4bzlrlb1 [ 399 ] ; real_T
ep1kvce3ls ; real_T hehcfcd5qe ; real_T hrtmiik4pa ; } fw3fcrujzt ; typedef
struct { real_T cjg15axlwj ; real_T ggydzdzl02 ; real_T obun43xkmt ; real_T
ghqrh5fgbd ; real_T egyqa4syxe ; real_T ptuc3j0waz ; real_T nupwktvts5 ;
real_T pbkku1th1h ; real_T ipbdkiozya ; real_T czf51nn3to ; real_T abtw1mwj2p
; real_T ghzzlnog0w ; real_T fpiq4t01ji ; real_T n3wx255ehc ; real_T
lq4bzlrlb1 [ 399 ] ; real_T ep1kvce3ls ; real_T hehcfcd5qe ; real_T
hrtmiik4pa ; } dmzi3aztzd ; typedef struct { boolean_T cjg15axlwj ; boolean_T
ggydzdzl02 ; boolean_T obun43xkmt ; boolean_T ghqrh5fgbd ; boolean_T
egyqa4syxe ; boolean_T ptuc3j0waz ; boolean_T nupwktvts5 ; boolean_T
pbkku1th1h ; boolean_T ipbdkiozya ; boolean_T czf51nn3to ; boolean_T
abtw1mwj2p ; boolean_T ghzzlnog0w ; boolean_T fpiq4t01ji ; boolean_T
n3wx255ehc ; boolean_T lq4bzlrlb1 [ 399 ] ; boolean_T ep1kvce3ls ; boolean_T
hehcfcd5qe ; boolean_T hrtmiik4pa ; } h1ig1prbuq ; typedef struct { real_T
cjg15axlwj ; real_T ggydzdzl02 ; real_T obun43xkmt ; real_T ghqrh5fgbd ;
real_T egyqa4syxe ; real_T ptuc3j0waz ; real_T nupwktvts5 ; real_T pbkku1th1h
; real_T ipbdkiozya ; real_T czf51nn3to ; real_T abtw1mwj2p ; real_T
ghzzlnog0w ; real_T fpiq4t01ji ; real_T n3wx255ehc ; real_T lq4bzlrlb1 [ 399
] ; real_T ep1kvce3ls ; real_T hehcfcd5qe ; real_T hrtmiik4pa ; } nwplfevrxw
; typedef struct { real_T cjg15axlwj ; real_T ggydzdzl02 ; real_T obun43xkmt
; real_T ghqrh5fgbd ; real_T egyqa4syxe ; real_T ptuc3j0waz ; real_T
nupwktvts5 ; real_T pbkku1th1h ; real_T ipbdkiozya ; real_T czf51nn3to ;
real_T abtw1mwj2p ; real_T ghzzlnog0w ; real_T fpiq4t01ji ; real_T n3wx255ehc
; real_T lq4bzlrlb1 [ 399 ] ; real_T ep1kvce3ls ; real_T hehcfcd5qe ; real_T
hrtmiik4pa ; } kz4c240slf ; typedef struct { real_T cjg15axlwj ; real_T
ggydzdzl02 ; real_T obun43xkmt ; real_T ghqrh5fgbd ; real_T egyqa4syxe ;
real_T ptuc3j0waz ; real_T nupwktvts5 ; real_T pbkku1th1h ; real_T ipbdkiozya
; real_T czf51nn3to ; real_T abtw1mwj2p ; real_T ghzzlnog0w ; real_T
fpiq4t01ji ; real_T n3wx255ehc ; real_T lq4bzlrlb1 [ 399 ] ; real_T
ep1kvce3ls ; real_T hehcfcd5qe ; real_T hrtmiik4pa ; } mclj3ytwnx ; typedef
struct { real_T pmxnff0i3c ; real_T l1a2mui1wh ; real_T p2geidjuwo ; real_T
jmzcallcle ; real_T l2mwos2kg4 ; real_T p3lrsdcado ; real_T bvy2rszkxl ;
real_T dmfiwqlfq0 ; real_T a330yume1b ; real_T eebichhuck ; real_T pefr2efk5a
; real_T bhyxlbrmzw ; real_T pgyievvdcy ; real_T c4cxablpfh ; real_T
frenaqh0b3 ; real_T jgbff4whfm ; real_T p3pr5yjucq ; real_T gtk3l15uef ;
real_T hwvso4lpga ; real_T mng4dobjxf ; real_T kj555andyw ; real_T e4imarjz1z
; real_T gz4i2twx5m ; real_T mqku2wkwrv ; real_T fy3opqiti4 ; real_T
itnrqksi5z ; real_T k4w1ftp3ni ; real_T btxf3uiygq ; real_T af23cks2nt ;
real_T d2uxndo3s1 ; real_T lrsfkuoqoc ; real_T lir3xeworf ; real_T eabhbncux5
; real_T g1awe1hb0f ; real_T n00kjq3q33 ; real_T egac5vnecq ; real_T
pk40xnkl4v ; real_T dqw0lstq1d ; real_T fr0tm4q42u ; real_T jd0ormzu3g ;
real_T foh4eu0j0m ; real_T o0wlgoabhb ; real_T mnkuawmaic ; real_T milgzbqgjo
; real_T e4gdtceygy ; real_T nhwyrm4gyt ; real_T k50orfuwai ; real_T
ehzafpizoo ; real_T h1dtu2pmva ; real_T ee1bwe2c0j ; real_T pe2bxof2ab ;
real_T agvkez5bmh ; real_T drzq3ed4lo ; real_T bn52j1m21n ; real_T edxfeorks1
; real_T mhnicewex1 ; real_T lwdh05gdab ; real_T g3hwz4xhfo ; real_T
ocjhh2w23m ; real_T h2hv4bljh0 ; real_T b2l04uzig2 ; real_T edtrsrstww ;
real_T hyxjtypfsi ; real_T pwg150uv2o ; real_T ac0z1lwt3e ; real_T gu4srphknp
; real_T ixu3l5txkt ; real_T eccirzrtev ; real_T aj2aceswtk ; real_T
eoxikjf3zk ; real_T by1wdseczt ; real_T muebbmlxy5 ; real_T mlye0tmiq2 ;
real_T jhfnikbt24 ; real_T bv3gaeztz5 ; real_T k5dhg4vwgd ; real_T pbpwo41g5c
; real_T ecw32vh2bp ; real_T cpobkbjibk ; real_T abh0ambzey ; real_T
hujscpdzz5 ; real_T d1c2pijsau ; real_T lljhm3zcbc ; real_T mruwols4hh ;
real_T lvmunn2z5f ; real_T axtnb2j1gv ; real_T nxqlsfmivt ; real_T igwvpd0b5g
; real_T eo3djagh5b ; real_T j2415d5b15 ; real_T panzeehg5m ; real_T
greyjba1pz ; real_T ayanae5dxh ; real_T bu1cmeoyjv ; real_T ifhex0jpf3 ;
real_T ms5hqvhimx ; real_T kyruac2fcg ; real_T ctuo0y3p4e ; real_T i00dxjpeel
; real_T hjp1r0zqnv ; real_T l5yfxk4bjc ; real_T i5ixdb2wmb ; real_T
dhyq2h3k4t ; real_T iikjcjgymb ; real_T bo4py4ufa4 ; real_T niqfjso5nh ;
real_T nslzpxf45t ; real_T kbbowku0ep ; real_T bwixatkg01 ; real_T okfqwoha3o
; real_T pqq4tdtaek ; real_T arpjpyw44p ; real_T bznogthyqi ; real_T
ke5roanznn ; real_T p44urcnrra ; real_T mzjbqo3kmh ; real_T kxok5a3ro0 ;
real_T jvl0zlx4cz ; real_T e0ntxjf3hh ; real_T ohqr1c2lfm ; real_T nw44kgaind
; real_T adsuomlppv ; real_T dndjvmtigl ; real_T e2uyrluvv0 ; real_T
pcii4gfaob ; real_T bixaluu5pg ; real_T bakmdg5ewk ; real_T cxr5nke0nr ;
real_T fzswrmx4uy ; real_T i0s3x2vecn ; real_T naow30wpvt ; real_T aoaub2crgw
; real_T m3s02vdq2h ; real_T glk4p3fz51 ; real_T ii1bsf4gfb ; real_T
obejtp3c0n ; real_T bo0ej53zcq ; real_T ppwlk4swdk ; real_T dsk4ypxgiw ;
real_T i4fiw1obin ; real_T dperkqqyas ; real_T a1oepqhpy0 ; real_T h1vqmvzzbb
; real_T ncvnxknwwy ; real_T dxe3paijjw ; real_T amwut3z1e4 ; real_T
avmmmxkzmk ; real_T gzmjkocxi0 ; real_T ba4yxkhgzm ; real_T ckpkrwvv4i ;
real_T lx1gnl3rcc ; real_T gc2xc4axdp ; real_T i2ssv1xgql ; real_T lymhiww0cn
; real_T ns5uvdluk4 ; real_T hqtxvy1omo ; real_T nxfzdfu3iu ; real_T
dy13fp15f4 ; real_T gteh4a45iv ; real_T bhsibearfl ; real_T id5xuxuip3 ;
real_T ikyybtzk0e ; real_T fi4msmqol4 ; real_T gxxdlbyobw ; real_T pe1yv1v2t1
; real_T hdgejfual1 ; real_T bnomyr5wak ; real_T d33nhj1wsz ; real_T
apce3umwht ; real_T gq3ryrjcs1 ; real_T cakbwgides ; real_T czgge2c3ru ;
real_T pe2m0x2goq ; real_T hh3svjxk5s ; real_T gj2gvh1thm ; real_T fd5zlfw53a
; real_T iiymnefupe ; real_T dxr0en1n0v ; real_T kmnmzjngla ; real_T
pwgsei5jh2 ; real_T nacvaramz5 ; real_T or3hqwtlnb ; real_T nhe0y3myub ;
real_T ew3zxxdtt2 ; real_T cbmbdass5x ; real_T fezczd3new ; real_T guafwnxbat
; real_T by11s5eod1 ; real_T dcx3m4cc44 ; real_T lagkyzbym0 ; real_T
do3yztmlmc ; real_T fmzidmaumc ; real_T bimgcn1bz3 ; real_T aipizrpxpz ;
real_T p2nxdfrrtt ; real_T fbrgqy0wwu ; real_T cbqtsnagf3 ; real_T d5ulueal3s
; real_T dhzru4iumd ; real_T djvqtpeo1m ; real_T a1d2c5t45g ; real_T
ahpoec2cnt ; real_T h512gtgqg0 ; real_T menquuvzxt ; real_T pf0v5dlsst ;
real_T dccve45a3y ; real_T aqkse53x2n ; real_T inimumc0es ; real_T i0uwq2v3qs
; real_T oot5k0kym3 ; real_T dhfelkpigs ; real_T mm14ph2ryb ; real_T
pwwt0qhaaf ; real_T dhzhj3xjby ; real_T kd0zswaktg ; real_T at1lt13l4d ;
real_T bnxkowneu5 ; real_T odaxg3zmep ; real_T g21jb4x2oj ; real_T lqzp4obceq
; real_T gq4itpvei2 ; real_T dguo1zbtr5 ; real_T bhpoan1q0q ; real_T
pwn3wjaini ; real_T pcwz1nhoe5 ; real_T ake5oh3bfq ; real_T e5urfgn5lu ;
real_T lya1afctcl ; real_T f5i5ti2m4f ; real_T gnv4tigecl ; real_T a2jgelmhpe
; real_T kizkxrpdkd ; real_T kmsljkinup ; real_T a1g1rmx2m4 ; real_T
jhqzg2ly51 ; real_T krn4qnl4yw ; real_T nvq4vf4v2r ; real_T mpyuh51gvx ;
real_T mnydfahans ; real_T k43knmyyns ; real_T a0dzchsrd1 ; real_T pmn5urtr1j
; } kqptpzakik ; typedef struct { ZCSigState eleagvs5h0 ; ZCSigState
nrrnky0p5s ; ZCSigState fmvjc00fed ; ZCSigState evkssu2rsd ; ZCSigState
psv0ua1aol ; ZCSigState ia3srrk1pb ; ZCSigState libeg1hv4e ; ZCSigState
boupjdbcg3 ; ZCSigState hrqohyz4mf ; ZCSigState hkraytumrs ; ZCSigState
nl3o0xdpnk ; ZCSigState ao2jzjggzq ; ZCSigState nm4jcpzxfu ; ZCSigState
nhbu3okczd ; ZCSigState c1e4qud3wq ; ZCSigState i521nz10nf ; ZCSigState
pridysklhu ; ZCSigState a1xkhd51th ; ZCSigState jf1ziybtf1 ; ZCSigState
orw35egs4i ; ZCSigState bv1jwv5syk ; ZCSigState mghjrg0aln ; ZCSigState
fe03h5kqb3 ; ZCSigState iuewezrumv ; ZCSigState lyabunf1ly ; ZCSigState
n1lebq4iut ; ZCSigState ibhttt5pr5 ; ZCSigState jvs2etvt2f ; ZCSigState
paal0ddbkt ; ZCSigState lka2wam4ya ; ZCSigState ckize1fh5d ; ZCSigState
ccjjcl2cic ; ZCSigState bh2t3bnkv2 ; ZCSigState jei1qbf04w ; ZCSigState
iqqphkbxt1 ; ZCSigState h1fv2mtzaf ; ZCSigState h21lreddzp ; ZCSigState
mv4vhxmmbi ; ZCSigState d3xb2myqos ; ZCSigState l2ohkzey3y ; ZCSigState
mleg1hqyhf ; ZCSigState kb5qrymeri ; ZCSigState i32rmv2hdb ; ZCSigState
jkbnhs53wj ; ZCSigState kaj0jlcpwl ; ZCSigState hpu401yzae ; ZCSigState
msadgkay1b ; ZCSigState nfmai42mqs ; ZCSigState kuciczc4gz ; ZCSigState
hevzrsu12b ; ZCSigState ncl0j1mino ; ZCSigState avocovtrxq ; ZCSigState
f5jnvw3udr ; ZCSigState akjjj4e4dw ; ZCSigState fx21ausayu ; ZCSigState
psvpfmemoz ; ZCSigState mdwxxjb3eb ; ZCSigState ayss0mba4m ; ZCSigState
o41thu0335 ; ZCSigState mesceqptjr ; ZCSigState i43qbihegi ; ZCSigState
flnhylpk1g ; ZCSigState gem3aodse2 ; ZCSigState f3j5qzdab4 ; ZCSigState
fno2wglk1k ; ZCSigState hdv2igxx3f ; ZCSigState ocijqaj22d ; ZCSigState
kge20e2pmg ; ZCSigState jo0cv35e5s ; ZCSigState jnhsuj3yu1 ; ZCSigState
co1fkkdgg3 ; ZCSigState gwgnnl12rx ; ZCSigState mutd1h5t0c ; ZCSigState
kmdrkbwhqa ; ZCSigState eqtapepeps ; ZCSigState dsaeyha1t1 ; ZCSigState
aejl3gvgbx ; ZCSigState dmegszdizx ; ZCSigState i544aferpx ; ZCSigState
cipddz4yid ; ZCSigState jm3lmbgx2a ; ZCSigState hy4e4ghkul ; ZCSigState
auez45pm4v ; ZCSigState oiv5ahvrho ; ZCSigState hsu2lutkpr ; ZCSigState
nbskacgqbe ; ZCSigState lj51bmfx0k ; ZCSigState m3xfiqwjcz ; ZCSigState
l13ttzjubc ; ZCSigState bf3smj5drg ; ZCSigState ar5wki4shq ; ZCSigState
p5x4sv3nz3 ; ZCSigState njudff11vp ; ZCSigState okg1cf4gcf ; ZCSigState
cjv2iqli3k ; ZCSigState el1qycvoj3 ; ZCSigState cytrwgbpvc ; ZCSigState
env0rt4xog ; ZCSigState hhjehxgbsd ; ZCSigState loeerk30id ; ZCSigState
aogvu3xvhf ; ZCSigState gxlma5yj10 ; ZCSigState g2vcql1xwb ; ZCSigState
fsvjeqjdtu ; ZCSigState ml5injlomp ; ZCSigState bzj5240qzn ; ZCSigState
pa4s3rrmbh ; ZCSigState hxdz40tgbg ; ZCSigState f02mexxeo4 ; ZCSigState
hzb4b21guc ; ZCSigState f3g2b10kt2 ; ZCSigState k20quwqpfj ; ZCSigState
ctcgeyvbru ; ZCSigState ptoymth24g ; ZCSigState h34ssvin1x ; ZCSigState
aa5e54jjrr ; ZCSigState kw3ehsv0rf ; ZCSigState jw1xes13nj ; ZCSigState
ljpgvxzmsp ; ZCSigState bokyjjvn25 ; ZCSigState dndxr3opog ; ZCSigState
fwmngp2bsz ; ZCSigState lyxbcjiw32 ; ZCSigState etw3kq2zrr ; ZCSigState
awaddmvl14 ; ZCSigState ppwkywvznn ; ZCSigState o10ryzn5g5 ; ZCSigState
owrowdi2sk ; ZCSigState ijbhvm0wfg ; ZCSigState pqj2xdsf4c ; ZCSigState
mmmru1uovh ; ZCSigState dz3j3mk13o ; ZCSigState n4bifpgjtf ; ZCSigState
muqjlrx1l5 ; ZCSigState elhwojcujw ; ZCSigState juxd1uenuo ; ZCSigState
d0bsmlxx3s ; ZCSigState dncq0r4cln ; ZCSigState fl5valihsh ; ZCSigState
hog2ldhfuz ; ZCSigState ae4lenlkkm ; ZCSigState opn5p0sqgc ; ZCSigState
m3cpcm5uue ; ZCSigState d0q1ng0k2o ; ZCSigState hdqitan1eg ; ZCSigState
hvfq5bcuwa ; ZCSigState fgw0qxbesi ; ZCSigState fht1fuqo0m ; ZCSigState
fkivmermxj ; ZCSigState o2w3icajkp ; ZCSigState iya3izxhzy ; ZCSigState
on4x5u4cau ; ZCSigState cxzwdmrck3 ; ZCSigState m5zcq1xrxo ; ZCSigState
pkw433i0bf ; ZCSigState am5rs2fvcn ; ZCSigState eguuezqhyp ; ZCSigState
av0cda25ll ; ZCSigState o3c0cz0hss ; ZCSigState hmefpbfyta ; ZCSigState
dofl3qidxe ; ZCSigState ihmzhbujvb ; ZCSigState ikscgjkhby ; ZCSigState
gsv4gt0o5s ; ZCSigState ag23a22sn5 ; ZCSigState budcknuw0y ; ZCSigState
gjd230dw1s ; ZCSigState gf4equhxhz ; ZCSigState g1bbbc43an ; ZCSigState
fzjvcccsfy ; ZCSigState i4fvamdqzp ; ZCSigState d1ybiygd0a ; ZCSigState
cthsuosoqc ; ZCSigState alz04moxyg ; ZCSigState jtxj1s12gt ; ZCSigState
kvui0yyxrv ; ZCSigState axz3en5pe0 ; ZCSigState mniplgwpgf ; ZCSigState
hil3glumm2 ; ZCSigState a0medo0mjy ; ZCSigState hguodon40t ; ZCSigState
eko51t3jl5 ; ZCSigState dgshmsiotz ; ZCSigState oel0mfqeyh ; ZCSigState
gak4sjukmq ; ZCSigState ij52uncflz ; ZCSigState omp4rhhopd ; ZCSigState
l3l20maxir ; ZCSigState fyjoayqwmu ; ZCSigState hluc4eyfwu ; ZCSigState
mcvesezbmu ; ZCSigState p1o1lprwf5 ; ZCSigState md5a3picax ; ZCSigState
clgjf3wmls ; ZCSigState i1socmabp1 ; ZCSigState akrvfrmz5o ; ZCSigState
kczu34z4xs ; ZCSigState gtbe5f2u2e ; ZCSigState cbqxkq1tyv ; ZCSigState
nnyfz0clve ; ZCSigState ivieb3etn0 ; ZCSigState ewej5w0hb1 ; ZCSigState
bwavrbejm5 ; ZCSigState g1vcgly2m2 ; ZCSigState hrhxd3trlz ; ZCSigState
l2onhgg5ho ; ZCSigState pgvwok2t04 ; ZCSigState obz3xcazrt ; ZCSigState
ca4z4kzqb2 ; ZCSigState dpgzcycmgu ; ZCSigState pb4mhcip4i ; ZCSigState
h0tcddsie0 ; ZCSigState ehupfweni1 ; ZCSigState b33facdz5o ; ZCSigState
ecfujaq5op ; ZCSigState pmtybztt2g ; ZCSigState jyb2ydmtjt ; ZCSigState
bfvv3rnvfj ; ZCSigState kaiv0wynnk ; ZCSigState m3mm324jly ; ZCSigState
ceibz5evj2 ; ZCSigState janxlgdt1e ; ZCSigState aiuyfkf4e0 ; ZCSigState
is1zmppzbj ; ZCSigState gc4eq24yu2 ; ZCSigState fd4k34d211 ; ZCSigState
hythp0bxb1 ; ZCSigState me0bzaayhw ; ZCSigState hkaan014hs ; ZCSigState
gq5wxdkgfw ; ZCSigState ectjarfsgx ; ZCSigState gxjb2tmiva ; ZCSigState
kxn4wfo55l ; ZCSigState ax0fkgjprq ; ZCSigState n20kbpcazg ; ZCSigState
dilw5fjhxz ; } km30avrcex ; typedef struct { int_T ir [ 83 ] ; int_T jc [ 417
] ; real_T pr [ 83 ] ; } nso0i44jvq ; struct locdm2fqb0b_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T
P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ;
real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T
P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ;
real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T
P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ;
real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T
P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ;
real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T
P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ;
real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T
P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ;
real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T
P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ;
real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T
P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ;
real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T
P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T
P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T P_109 ; real_T
P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T
P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T
P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; uint32_T
P_125 ; uint32_T P_126 [ 2 ] ; uint32_T P_127 ; uint32_T P_128 [ 2 ] ;
uint32_T P_129 ; uint32_T P_130 [ 2 ] ; } ; struct fjefo04diq { struct
SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; }
NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 1 ] ; real_T
* massMatrixBasePr ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 429 ] ; int32_T * vardimsAddress [
429 ] ; RTWLoggingFcnPtr loggingPtrs [ 429 ] ; sysRanDType * systemRan [ 2 ]
; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf2 ;
uint8_T rtmDbBufWriteBuf2 ; boolean_T rtmDbBufLastBufWr2 ; real_T
rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef
struct { o4lq13rlvq rtb ; ammy3t1awn rtdw ; m5e23pbc2h rtm ; km30avrcex rtzce
; } g5h05g3u4wx ; extern void axkawtnuua ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , m5e23pbc2h * const
lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW , fw3fcrujzt * localX
, km30avrcex * localZCE , real_T * localMM , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_FCElectricPlant_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_FCElectricPlant_GetDWork (
const g5h05g3u4wx * mdlrefDW ) ; extern void mr_FCElectricPlant_SetDWork (
g5h05g3u4wx * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_FCElectricPlant_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * FCElectricPlant_GetCAPIStaticMap ( void ) ;
extern void irvj0luwjw ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW
) ; extern void k5nsrx2akm ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn *
localDW , fw3fcrujzt * localX ) ; extern void gtrcczzcor ( m5e23pbc2h * const
lmamcwn3a2 , ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern void
irfppkdltu ( m5e23pbc2h * const lmamcwn3a2 , ammy3t1awn * localDW ) ; extern
void alwc4n2foq ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , kz4c240slf * localXPerturbMin ,
mclj3ytwnx * localXPerturbMax ) ; extern void imv3dllygl ( m5e23pbc2h * const
lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq * localB , ammy3t1awn *
localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot ) ; extern void
mscgivy4fk ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn
* localDW , fw3fcrujzt * localX ) ; extern void iyhavcqilr ( m5e23pbc2h *
const lmamcwn3a2 , const real_T * crmxvln0sn , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , dmzi3aztzd * localXdot ) ;
extern void bpia4crzhf ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB
, ammy3t1awn * localDW , fw3fcrujzt * localX ) ; extern void abih3gg12y (
m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX , kqptpzakik * localZCSV ) ; extern void czx1gq31fm (
m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq * localB , ammy3t1awn * localDW ,
fw3fcrujzt * localX ) ; extern void FCElectricPlant ( m5e23pbc2h * const
lmamcwn3a2 , const real_T * nhquhhxexx , const real_T * crmxvln0sn , const
real_T * enxvezuult , real_T * laajwttrsw , real_T * l45wd5pbjh , real_T *
pjtg1ua4jf , real_T * jkukrewnlm , real_T * lwu0tsgovp , real_T * oz3dekjw3t
, real_T * ca0lva1ra5 , real_T * csbds3kgit , o4lq13rlvq * localB ,
ammy3t1awn * localDW , fw3fcrujzt * localX , km30avrcex * localZCE ) ; extern
void FCElectricPlantTID2 ( m5e23pbc2h * const lmamcwn3a2 , o4lq13rlvq *
localB , ammy3t1awn * localDW ) ; extern void mt14yrnbuj ( ammy3t1awn *
localDW , m5e23pbc2h * const lmamcwn3a2 ) ; extern const real_T
FCElectricPlant_RGND ;
#endif
