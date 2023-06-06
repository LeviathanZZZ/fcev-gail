#include "DrivetrainEv.h"
#include "rtwtypes.h"
#include "DrivetrainEv_private.h"
#include "mwmathutil.h"
#include "interp2_0XbyHNhZ.h"
#include <emmintrin.h>
#include "automldiffopen_wAtp5Ifz.h"
#include "DrivetrainEv_capi.h"
#include "look1_binlxpw.h"
#include "look1_binlcpw.h"
#include "zero_crossing_types.h"
#include <string.h>
#include "rt_nonfinite.h"
#define ixrnqnhdfr ((uint8_T)0U)
#define mcuvnmapwy ((uint8_T)1U)
#define ns2cbkftdn ((uint8_T)2U)
#define fygjrc0bwn ((uint8_T)1U)
#define nrvxfifrf3 ((uint8_T)0U)
#define ojhcgwmuav ((uint8_T)2U)
static RegMdlInfo rtMdlInfo_DrivetrainEv [ 254 ] = { { "i2nkjxda1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cekzt1rnxr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fptwlttveg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "hwisdnpky5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mngph55n5r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fvwoypcxq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jipem2r5u4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cklgoq5png" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "n0eio1rlpk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cu3q4upwwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"eyoob242x4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "epqdxq1edn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gzahetipq4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ob4gehxedj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "dlgnmjtuzs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "aeu2unkift" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"niajceetmc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fooqmswbbc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pwcyz0zv0a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ave4ahp3br" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ehwuq2flhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "do51n4jljv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ldftyohcr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lu0k1fvhhc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nxa00c0sli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lgsc2euz0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jamoiccw5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "amel0smx4y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lps5fweizp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "asw3ocj4en" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kyr1rhkn5p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ocyn02au15" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ezr503rgsr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dsrrdrnhl5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"crgdzu0qgz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "a5og3r0icn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "aremv21hur" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ibb22rhdhi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ejajaq4sjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dl1frozi3a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"agrz53hsbl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "g4adqhhvma" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mtq5ysirlz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fmcgiua5km" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "n2kbk514ks" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "iw40cciuda" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lyzqt0nklo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cntvboex4v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cbz2dlzqjt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"j3ujqghva4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "benvcf5o21" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fjgmsl5hqy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lxb2my1viu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ah133o01lx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "m2kmkbqxuq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ermqezac44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lt0y4hy3pd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "i01qvr2ezq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hl10vqkas0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kmotidl0fz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pd3fxbwbdh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"anse5zkp05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "p4tcmhlmqo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "oizox0twh0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fqp5ibbznb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "l0fe3oafgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "airt52dhps" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ic22b1irhk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ontjheoysm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ahfih3jzau" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"nnlikfhqgo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gztm1me5j3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ayxswdewl1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pooh4v3ih0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cev0vg1qh4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "k15rssna2x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oecdflrzti" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pfqfx2f4zk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pibajuhrfy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kgdb5tut5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kckfzckqe5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jsyfghzlbs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oj3qcikvsd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pjvirltsck" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bobjql0acy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"eqkvgltva4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jn13uy3k03" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mljqquawlq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pymb3fi5g4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fmdhv4fck3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dmpx2jc2pu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fwdtimy1yf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "iyfebu03dj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fgqtupspgf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"aufkcqjofk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "atojkui03z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kqspnrjgmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lbl1s0hghr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oi5wx40azd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jbcz0jpnwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pw0nsh0h05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gwbuyqty4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mxjlqvkjce" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"avaxmyit3j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ljddmczf4f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gkyrgx403d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kv5dd5iizc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "m2khnalf54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ms1i05pajk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oc0zihyyg4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "d4ycflth2y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gozrujzaaw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"chdajczivx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "iwcsoi3ar4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gwi2hokzxw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"p2lbhyas44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lc2agjjnwf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bjtf3mo10h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"niqqjkrxmt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oq4c5t0foy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "j2jbaak5ro" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ln33slfpeu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "nu045e3o1q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dzq322z3qz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"e4lswbhl1f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gfakbvs42h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "curfouepya" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fu2d21p2me" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lzduu3oepy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gqcilb1ome" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hmke5fx3tcj" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pmzuarg20b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cphoervchx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"aciiplviyd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "nupxuy3etd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bbuzvmnhsa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cspbap1de4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "edp3webv0p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nzmos2zlw4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"at3vnbf5fi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "khz3ktgddz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bbwlhhd1yt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lvsoqlxlcs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pw4f2kjo3k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "lzqecqna5o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ekywbf3nku" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cmuw0kqmoe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gjrktinair" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lcrhwa0gkm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "a2spfqi5as" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ekz3w3o33e" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"er1nyhy4k5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "eqyc2wn3m1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ktxb3gprz3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ka5dospcnh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fzkpqsvdo4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "efb0jiqqrw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"detsq240wj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ox4522myug" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bxwynbswnf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mkid0gorbi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "dq1cbs3e5h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "b1g3pdb1rr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"gkwx1uvgy3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "efyr52spdx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "koortnfexc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"p3l4kwjfse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hoxerz5r3l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "b5prwuabwt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch" } , {
"bhfnq0gvty" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "diav50533w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fpkexilwx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pa01ypljzv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hbitco4kzk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "blmwtgrkjm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"jchsnf4kft" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hjtn2cfetd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fhk5xmrghf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kbesg5n00g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jzxqghlsdl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ncnwl1puqr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cddyh02qci" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch"
} , { "daf5agucai" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "aoflhlgav1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "n4a12hefr4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ihxvxssvuy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fpmjbkubaz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "btu025qxla" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oec2gataco" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "c1qzjjjrev" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bh1yzkl0yd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fvimnjpkij" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "bxtrkjpjgc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ehaq3xi2i2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ndg43gdj2c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Slipping" } , { "fykpdnvvl5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "DrivetrainEv" } , { "ij11pv3qli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"plfejxniy4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oxojvdus0j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mbjlcj4mlk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"c4xb3zu25o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hao3nl0wlo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ehvsb4g243" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"h4eaymynye" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hpjac0modf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( void * ) "Locked" } , { "dzbhhot2tg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "DrivetrainEv" } , { "cz1ljsnlgo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hrhkjhjudb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ms52wr2yr5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mn2sbc14hy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fvcqjct50p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gf1chc542w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "lqozigtnao" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ox0m3irtud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jkqilwbv4l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( void * ) "detectLockup" } , { "ik4b1pjhko" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"dx3kktby5q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hldn5hj5im" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kk0gqeonff" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"btzl12r1cd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "bl2yl1izeh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "e22zipb4tr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lx5pzbjgnj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"detectSlip" } , { "k4kq5a5ocp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "DrivetrainEv" } , { "gv3b21mocx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pkbppjdhhu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "phtlzjoqko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cmaimownvk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"gqxnwdwkoc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ocvm13bhlg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nnjg45upsq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pafzrlxpms" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Simple Magic Tire" } , { "DrivetrainEv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "egole5a0hr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainEv" } , { "kz1ziyy35g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hcopmldpph" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , (
void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" }
, { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_DrivetrainEv_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mr_DrivetrainEv_restoreDataFromMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "DrivetrainEv" } , { "mr_DrivetrainEv_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "DrivetrainEv" } , { "mr_DrivetrainEv_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"DrivetrainEv.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"DrivetrainEv.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"DrivetrainEv" } } ; akbgnuupjzy akbgnuupjz = { 2.27 , 0.28 , 0.1 , 0.1 , {
0.0 , 0.0 } , { 0.0 , 0.0 } , 6570.0 , 6570.0 , 0.0 , 0.0 , { - 700000.0 , -
7000.0 , - 700.0 , 0.0 , 700.0 , 7000.0 , 700000.0 } , { - 700000.0 , -
7000.0 , - 700.0 , 0.0 , 700.0 , 7000.0 , 700000.0 } , { - 8928.57142857143 ,
- 178.57142857142858 , 0.0 , 357.14285714285717 , 535.71428571428567 ,
9285.7142857142862 } , { - 5357.1428571428569 , - 107.14285714285714 , 0.0 ,
214.28571428571428 , 321.42857142857144 , 5571.4285714285716 } , 0.8 , 0.8 ,
3000.0 , 0.1 , 0.025 , 0.01 , 0.01 , 0.15 , 0.15 , 7.94 , 101325.0 , 287.058
, 0.0 , 0.0 , 0.327 , 0.327 , 0.15 , 0.15 , 273.0 , 0.336 , 0.336 , 2.0 , 2.0
, 1.1880000000000002 , 0.01 , 0.01 , 0.0 , 0.0 , 1.5120000000000002 , 400.0 ,
400.0 , 0.001 , 0.0 , 0.0 , 0.001 , 1.0 , 1.0 , { - 1.0 , 1.0 } , 0.001 ,
0.001 , 0.001 , 0.001 , 0.0 , 0.0 , 0.05 , 0.05 , 0.0 , 0.0 , { - 10.0 , -
1.0 , - 0.1 , 0.0 , 0.1 , 1.0 , 10.0 } , { - 10.0 , - 1.0 , - 0.1 , 0.0 , 0.1
, 1.0 , 10.0 } , { - 0.005 , - 0.0001 , 0.0 , 0.2 , 0.2001 , 0.2051 } , { -
0.005 , - 0.0001 , 0.0 , 0.2 , 0.2001 , 0.2051 } , 1.0 , 0.0 , 9.81 , 0.5 ,
10000.0 , 10000.0 , 1.5 , 1.5 , 1.0 , 1.0 , 1500.0 , 0.35 , 0.35 , 0.45 ,
0.45 , 2.0 , 2.0 , 100.0 , 100.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , -
0.35 } , 234400.0 , 234400.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0E-6 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 3.1415926535897931 , - 3.1415926535897931 , { 2.0 , 2.0 } ,
{ - 1.0 , 1.0 , 1.0 } , { - 1.0 , 1.0 , 1.0 } , 0.5 , 0.0 , 0.0 , - 1.0 , 0.6
, 0.0 , 2.2204460492503131E-16 , 0.5 , 0.0 , - 1.0 , 0.4 , 0.0 ,
2.2204460492503131E-16 , { 0.0 , 0.0 } , { - 1.0 , 1.0 } , { 4.0 , 4.0 , 0.0
} , { 0.0 , 1.0 , - 1.0 , 0.0 } , { 2.0 , 2.0 } , { 2.0 , 2.0 } , 0.0 ,
5000.0 , - 5000.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 ,
0.0 , 20.0 , 4.0 , 0.5 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 1.0 } , 0.0 , 0.0 ,
2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } ,
{ 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.78539816339744828 ,
0.0 , 0.0 , 2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.78539816339744828 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , { { { - 4.0 } , { 0.0 , 0.0 ,
0.0 } , { 0.0 , false , false , { false , true , false , false , true , true
, true , false } } , { false } } } , { { { - 4.0 } , { 0.0 , 0.0 , 0.0 } , {
0.0 , false , false , { false , true , false , false , true , true , true ,
false } } , { false } } } , { 0.0 , 0.0 } } ; static void gypno2p4rq ( real_T
u , real_T tol , real_T * y , real_T * yabs ) ; static real_T njagxepmjm (
real_T kappa , real_T Vx , real_T Fz , real_T b_gamma , real_T LONGVL ,
real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX , real_T press , real_T
NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1 ,
real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 , real_T
PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T PHX2 ,
real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 , real_T
PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux , real_T lam_Kxkappa
, real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T lam_Vx ) ; static
real_T iggcenaiwj ( real_T Fz , real_T omega , real_T Vx , real_T press ,
real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T
UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T
PRESMAX ) ; static real_T nnh25h0kmd ( real_T omega , real_T Fz , real_T Vx ,
const real_T VxMy [ 3 ] , const real_T FzMy [ 3 ] , const real_T MyMap [ 9 ]
, real_T b_FZMAX ) ; static real_T ipmaflmbfh ( real_T Fz , real_T omega ,
real_T Tamb , real_T Fpl , real_T Cr , real_T Kt , real_T Tmeas , real_T Re ,
real_T b_FZMIN , real_T b_FZMAX , real_T TMIN , real_T TMAX ) ; static
boolean_T gppluqklue ( real_T Tout , real_T Tfmaxs , dmpx2jc2pu * localB ,
fmdhv4fck3 * localDW ) ; static boolean_T g0el31fu5q ( real_T Tout , real_T
Tfmaxs , dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP ) ;
static boolean_T k5qdrctgwd ( real_T Tout , real_T Tfmaxs , gzahetipq4 *
localB , epqdxq1edn * localDW ) ; static boolean_T oknnk3qrza ( real_T Tout ,
real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4 *
localP ) ; static void gypno2p4rq ( real_T u , real_T tol , real_T * y ,
real_T * yabs ) { real_T varargin_1 ; int32_T trueCount ; boolean_T yneginds
; boolean_T ytolinds ; * yabs = muDoubleScalarAbs ( u ) ; ytolinds = ( * yabs
< tol ) ; trueCount = 0 ; if ( ytolinds ) { trueCount = 1 ; } if ( trueCount
- 1 >= 0 ) { varargin_1 = * yabs / tol ; varargin_1 = 2.0 * tol / ( 3.0 -
varargin_1 * varargin_1 ) ; } * y = * yabs ; yneginds = ( u < 0.0 ) ;
trueCount = - 1 ; if ( ytolinds ) { * y = varargin_1 ; } if ( yneginds ) {
trueCount = 0 ; } * yabs = * y ; if ( trueCount >= 0 ) { varargin_1 = - * y ;
} if ( yneginds ) { * y = varargin_1 ; } } static real_T njagxepmjm ( real_T
kappa , real_T Vx , real_T Fz , real_T b_gamma , real_T LONGVL , real_T
FNOMIN , real_T b_FZMIN , real_T b_FZMAX , real_T press , real_T NOMPRES ,
real_T PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 ,
real_T PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T
PKX1 , real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 ,
real_T PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T
lam_Fzo , real_T lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T
lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T lam_Vx ) { real_T Cx ; real_T
CxDxp ; real_T Dx ; real_T Dx_tmp ; real_T Ex ; real_T Fxo ; real_T a__1 ;
real_T b_idx_0 ; real_T dfz ; real_T dpi ; real_T kappa_x ; real_T
lam_mux_star ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0 = b_FZMIN ; } if
( b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } Cx = press ; if ( press <
PRESMIN ) { Cx = PRESMIN ; } if ( Cx > PRESMAX ) { Cx = PRESMAX ; } dpi = (
Cx - NOMPRES ) / NOMPRES ; dfz = ( b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN *
lam_Fzo ; kappa_x = ( PHX2 * dfz + PHX1 ) * lam_Hx + kappa ; lam_mux_star = -
muDoubleScalarAbs ( Vx ) * kappa ; lam_mux_star = lam_mux / (
muDoubleScalarSqrt ( lam_mux_star * lam_mux_star ) * lam_muV / LONGVL + 1.0 )
; Cx = PCX1 * lam_Cx ; Dx_tmp = dpi * dpi ; Dx = ( ( PPX3 * dpi + 1.0 ) +
Dx_tmp * PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0 - b_gamma * b_gamma * PDX3 )
* lam_mux_star * b_idx_0 ; Ex = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 )
* ( 1.0 - muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; if ( Cx <
0.0 ) { Cx = 0.0 ; } if ( Dx < 0.0 ) { Dx = 0.0 ; } if ( Ex > 1.0 ) { Ex =
1.0 ; } gypno2p4rq ( Cx * Dx , 0.1 , & CxDxp , & a__1 ) ; dpi = ( PKX2 * dfz
+ PKX1 ) * b_idx_0 * muDoubleScalarExp ( PKX3 * dfz ) * ( ( PPX1 * dpi + 1.0
) + Dx_tmp * PPX2 ) * lam_Kxkappa / CxDxp * kappa_x ; Fxo = muDoubleScalarSin
( muDoubleScalarAtan ( dpi - ( dpi - muDoubleScalarAtan ( dpi ) ) * Ex ) * Cx
) * Dx + ( PVX2 * dfz + PVX1 ) * b_idx_0 * ( lam_mux_star * 10.0 / ( 9.0 *
lam_mux_star + 1.0 ) ) * lam_Vx ; return Fxo ; } static real_T iggcenaiwj (
real_T Fz , real_T omega , real_T Vx , real_T press , real_T QSY1 , real_T
QSY2 , real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T UNLOADED_RADIUS ,
real_T b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T PRESMAX ) { real_T
b_idx_0 ; real_T d_idx_0 ; b_idx_0 = press ; if ( press < PRESMIN ) { b_idx_0
= PRESMIN ; } if ( b_idx_0 > PRESMAX ) { b_idx_0 = PRESMAX ; } d_idx_0 = Fz ;
if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) {
d_idx_0 = b_FZMAX ; } return ( ( QSY2 * muDoubleScalarAbs ( Vx ) + QSY1 ) +
Vx * Vx * QSY3 ) * ( muDoubleScalarTanh ( omega ) * UNLOADED_RADIUS ) * (
muDoubleScalarPower ( d_idx_0 , QSY7 ) * muDoubleScalarPower ( b_idx_0 , QSY8
) ) ; } static real_T nnh25h0kmd ( real_T omega , real_T Fz , real_T Vx ,
const real_T VxMy [ 3 ] , const real_T FzMy [ 3 ] , const real_T MyMap [ 9 ]
, real_T b_FZMAX ) { real_T MyMap_p [ 9 ] ; real_T My ; real_T b_idx_0 ;
int32_T i ; b_idx_0 = Fz ; if ( Fz < 0.0 ) { b_idx_0 = 0.0 ; } if ( b_idx_0 >
b_FZMAX ) { b_idx_0 = b_FZMAX ; } for ( i = 0 ; i < 3 ; i ++ ) { MyMap_p [ 3
* i ] = MyMap [ i ] ; MyMap_p [ 3 * i + 1 ] = MyMap [ i + 3 ] ; MyMap_p [ 3 *
i + 2 ] = MyMap [ i + 6 ] ; } My = muDoubleScalarTanh ( omega ) *
interp2_0XbyHNhZ ( VxMy , FzMy , MyMap_p , Vx , b_idx_0 ) ; return My ; }
static real_T ipmaflmbfh ( real_T Fz , real_T omega , real_T Tamb , real_T
Fpl , real_T Cr , real_T Kt , real_T Tmeas , real_T Re , real_T b_FZMIN ,
real_T b_FZMAX , real_T TMIN , real_T TMAX ) { real_T b_idx_0 ; real_T
d_idx_0 ; b_idx_0 = Tamb ; if ( Tamb < TMIN ) { b_idx_0 = TMIN ; } if (
b_idx_0 > TMAX ) { b_idx_0 = TMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) {
d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return
( d_idx_0 * Cr * 0.001 / ( ( b_idx_0 - Tmeas ) * Kt + 1.0 ) + Fpl ) * ( -
muDoubleScalarTanh ( omega ) * Re ) ; } void pafzrlxpms ( real_T lhfh0lgexg ,
real_T dddksvopvu , real_T aqziyf45vh , real_T kmxusdamtu , real_T kvgp2fkjhy
, real_T gnoj3vvd04 , real_T i5tazc1u4j , real_T hrxlzevx3z , real_T
jblgopnf1i , const real_T pkjxdlvuwn [ 34 ] , const real_T n0mhhr4t1h [ 3 ] ,
const real_T cjgdxidpon [ 3 ] , const real_T csyrzuatjk [ 9 ] , real_T
hiqsfmypee , real_T mx5so5mgvw , real_T inchkh4kac , real_T gycdhdasg2 ,
real_T few2l1fwxa , real_T jklaqvkxfe , real_T otfgbpbyhn , real_T kv2iqsifba
, real_T hiawd1p1fx , real_T o5ygoxqi30 , real_T ig4mu234iu , real_T
dbtrggoxo1 , real_T fdpxrz5vmb , real_T k2udx51syx , real_T pfq2eyet0u ,
real_T e3zacyak04 , const real_T i11thzoaok [ 3 ] , const real_T jiefker5rr [
3 ] , const real_T govy01dn4l [ 9 ] , real_T n5xjjpqvhi , real_T bodbaw1ynp ,
real_T gehf3geyns , real_T gakbsgqcve , real_T hdwkghxa4l , real_T bt0sy4q3zx
, real_T djkh3gvlkv , real_T bbl12fnfds , real_T maogfv1bti , real_T
b55yk0qpmy , real_T c4pn3rsir2 , real_T hhd1av5ez0 , real_T epvhuoa1qy ,
real_T p4b5kxhudx , real_T a5c4goqooi , real_T fs3ildlixj , real_T prsb4scvfy
, real_T cmj0idhrc5 , real_T m2do5j31ef , real_T dgy4icut3a , real_T
kh4hnzmazk , real_T jtbjysdjqj , real_T iypogydhcm , real_T lkloq2embq ,
real_T pvhuw1msck , real_T d3jy5zi252 , real_T fg54spf2n5 , real_T *
j1fnstwyfj , real_T * ihdfu1wy5f , real_T * nsspl2j5q4 , real_T * krssuruyhs
, real_T * j4xjl2dd0q , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T
rtp_VXLOW , real_T rtp_kappamax , lc2agjjnwf * localB ) { real_T csyrzuatjk_p
[ 9 ] ; real_T FxType ; real_T Fz ; real_T Omega ; real_T ReNom ; real_T Vx ;
real_T Vxpabs ; real_T a__1 ; real_T b_FZMAX ; real_T b_FZMIN ; real_T b_Re ;
real_T b_kappamax ; real_T rollingType ; int32_T trueCount ; localB ->
eh3bmirodr [ 0 ] = kvgp2fkjhy ; localB -> eh3bmirodr [ 1 ] = gnoj3vvd04 ;
localB -> eh3bmirodr [ 2 ] = i5tazc1u4j ; localB -> eh3bmirodr [ 3 ] =
hrxlzevx3z ; localB -> eh3bmirodr [ 4 ] = jblgopnf1i ; localB -> k3pqpt3554 [
0 ] = hiqsfmypee ; localB -> k3pqpt3554 [ 1 ] = mx5so5mgvw ; localB ->
k3pqpt3554 [ 2 ] = inchkh4kac ; localB -> k3pqpt3554 [ 3 ] = gycdhdasg2 ;
localB -> k3pqpt3554 [ 4 ] = few2l1fwxa ; localB -> k3pqpt3554 [ 5 ] =
jklaqvkxfe ; localB -> k3pqpt3554 [ 6 ] = otfgbpbyhn ; localB -> k3pqpt3554 [
7 ] = kv2iqsifba ; localB -> k3pqpt3554 [ 8 ] = hiawd1p1fx ; localB ->
k3pqpt3554 [ 9 ] = o5ygoxqi30 ; localB -> k3pqpt3554 [ 10 ] = ig4mu234iu ;
localB -> k3pqpt3554 [ 11 ] = dbtrggoxo1 ; localB -> k3pqpt3554 [ 12 ] =
fdpxrz5vmb ; localB -> k3pqpt3554 [ 13 ] = k2udx51syx ; localB -> k3pqpt3554
[ 14 ] = pfq2eyet0u ; localB -> k3pqpt3554 [ 15 ] = e3zacyak04 ; localB ->
myssjwdee1 [ 0 ] = hiqsfmypee ; localB -> myssjwdee1 [ 1 ] = bodbaw1ynp ;
localB -> myssjwdee1 [ 2 ] = gehf3geyns ; localB -> myssjwdee1 [ 3 ] =
gakbsgqcve ; localB -> myssjwdee1 [ 4 ] = hdwkghxa4l ; localB -> myssjwdee1 [
5 ] = bt0sy4q3zx ; localB -> myssjwdee1 [ 6 ] = djkh3gvlkv ; localB ->
myssjwdee1 [ 7 ] = bbl12fnfds ; localB -> myssjwdee1 [ 8 ] = maogfv1bti ;
localB -> myssjwdee1 [ 9 ] = b55yk0qpmy ; localB -> myssjwdee1 [ 10 ] =
c4pn3rsir2 ; localB -> myssjwdee1 [ 11 ] = hhd1av5ez0 ; localB -> myssjwdee1
[ 12 ] = epvhuoa1qy ; localB -> myssjwdee1 [ 13 ] = p4b5kxhudx ; localB ->
myssjwdee1 [ 14 ] = a5c4goqooi ; localB -> myssjwdee1 [ 15 ] = fs3ildlixj ;
localB -> myssjwdee1 [ 16 ] = prsb4scvfy ; localB -> myssjwdee1 [ 17 ] =
cmj0idhrc5 ; localB -> myssjwdee1 [ 18 ] = m2do5j31ef ; localB -> myssjwdee1
[ 19 ] = dgy4icut3a ; localB -> myssjwdee1 [ 20 ] = kh4hnzmazk ; localB ->
myssjwdee1 [ 21 ] = jtbjysdjqj ; localB -> myssjwdee1 [ 22 ] = iypogydhcm ;
localB -> myssjwdee1 [ 23 ] = lkloq2embq ; ReNom = lhfh0lgexg ; Fz =
dddksvopvu ; Omega = aqziyf45vh ; Vx = kmxusdamtu ; b_FZMIN = rtp_FZMIN ;
b_FZMAX = rtp_FZMAX ; b_kappamax = rtp_kappamax ; FxType = pvhuw1msck ;
rollingType = d3jy5zi252 ; switch ( ( int32_T ) fg54spf2n5 ) { case 0 : *
j4xjl2dd0q = dddksvopvu ; b_Re = lhfh0lgexg ; break ; case 1 : b_Re = 0.0 *
muDoubleScalarAbs ( aqziyf45vh ) + n5xjjpqvhi ; if ( b_Re < 0.001 ) { b_Re =
0.001 ; } * j4xjl2dd0q = ( rtNaN ) ; break ; case 2 : b_Re = lhfh0lgexg ; *
j4xjl2dd0q = dddksvopvu ; break ; default : b_Re = lhfh0lgexg ; * j4xjl2dd0q
= dddksvopvu ; break ; } gypno2p4rq ( kmxusdamtu , rtp_VXLOW , & a__1 , &
Vxpabs ) ; a__1 = ( ReNom * Omega - Vx ) / Vxpabs ; Vxpabs = a__1 ; trueCount
= 0 ; if ( a__1 < - b_kappamax ) { trueCount = 1 ; } if ( trueCount - 1 >= 0
) { Vxpabs = - b_kappamax ; } a__1 = Vxpabs ; if ( Vxpabs > b_kappamax ) {
a__1 = b_kappamax ; } * nsspl2j5q4 = a__1 ; switch ( ( int32_T ) FxType ) {
case 0 : Vxpabs = Fz ; if ( Fz < b_FZMIN ) { Vxpabs = b_FZMIN ; } if ( Vxpabs
> b_FZMAX ) { Vxpabs = b_FZMAX ; } FxType = a__1 * localB -> eh3bmirodr [ 2 ]
; FxType = muDoubleScalarSin ( muDoubleScalarAtan ( FxType - ( FxType -
muDoubleScalarAtan ( FxType ) ) * localB -> eh3bmirodr [ 3 ] ) * localB ->
eh3bmirodr [ 1 ] ) * localB -> eh3bmirodr [ 0 ] * ( Vxpabs * localB ->
eh3bmirodr [ 4 ] ) ; break ; case 2 : FxType = njagxepmjm ( a__1 , Vx , Fz ,
pkjxdlvuwn [ 0 ] , pkjxdlvuwn [ 1 ] , pkjxdlvuwn [ 2 ] , b_FZMIN , b_FZMAX ,
pkjxdlvuwn [ 3 ] , pkjxdlvuwn [ 4 ] , pkjxdlvuwn [ 5 ] , pkjxdlvuwn [ 6 ] ,
pkjxdlvuwn [ 7 ] , pkjxdlvuwn [ 8 ] , pkjxdlvuwn [ 9 ] , pkjxdlvuwn [ 10 ] ,
pkjxdlvuwn [ 11 ] , pkjxdlvuwn [ 12 ] , pkjxdlvuwn [ 13 ] , pkjxdlvuwn [ 14 ]
, pkjxdlvuwn [ 15 ] , pkjxdlvuwn [ 16 ] , pkjxdlvuwn [ 17 ] , pkjxdlvuwn [ 18
] , pkjxdlvuwn [ 19 ] , pkjxdlvuwn [ 20 ] , pkjxdlvuwn [ 21 ] , pkjxdlvuwn [
22 ] , pkjxdlvuwn [ 23 ] , pkjxdlvuwn [ 24 ] , pkjxdlvuwn [ 25 ] , pkjxdlvuwn
[ 26 ] , pkjxdlvuwn [ 27 ] , pkjxdlvuwn [ 28 ] , pkjxdlvuwn [ 29 ] ,
pkjxdlvuwn [ 30 ] , pkjxdlvuwn [ 31 ] , pkjxdlvuwn [ 32 ] , pkjxdlvuwn [ 33 ]
) ; break ; case 3 : Vxpabs = Fz ; if ( Fz < b_FZMIN ) { Vxpabs = b_FZMIN ; }
if ( Vxpabs > b_FZMAX ) { Vxpabs = b_FZMAX ; } for ( trueCount = 0 ;
trueCount < 3 ; trueCount ++ ) { csyrzuatjk_p [ 3 * trueCount ] = csyrzuatjk
[ trueCount ] ; csyrzuatjk_p [ 3 * trueCount + 1 ] = csyrzuatjk [ trueCount +
3 ] ; csyrzuatjk_p [ 3 * trueCount + 2 ] = csyrzuatjk [ trueCount + 6 ] ; }
FxType = interp2_0XbyHNhZ ( n0mhhr4t1h , cjgdxidpon , csyrzuatjk_p , a__1 ,
Vxpabs ) * localB -> eh3bmirodr [ 4 ] ; break ; default : FxType = 0.0 ; *
nsspl2j5q4 = 0.0 ; break ; } switch ( ( int32_T ) rollingType ) { case 0 : *
ihdfu1wy5f = 0.0 ; break ; case 1 : * ihdfu1wy5f = iggcenaiwj ( Fz , Omega ,
Vx , localB -> k3pqpt3554 [ 0 ] , localB -> k3pqpt3554 [ 3 ] , localB ->
k3pqpt3554 [ 4 ] , localB -> k3pqpt3554 [ 5 ] , localB -> k3pqpt3554 [ 9 ] ,
localB -> k3pqpt3554 [ 10 ] , b_Re , b_FZMIN , b_FZMAX , localB -> k3pqpt3554
[ 14 ] , localB -> k3pqpt3554 [ 15 ] ) ; break ; case 2 : a__1 = localB ->
k3pqpt3554 [ 0 ] ; if ( localB -> k3pqpt3554 [ 0 ] < localB -> k3pqpt3554 [
14 ] ) { a__1 = localB -> k3pqpt3554 [ 14 ] ; } if ( a__1 > localB ->
k3pqpt3554 [ 15 ] ) { a__1 = localB -> k3pqpt3554 [ 15 ] ; } Vxpabs = Fz ; if
( Fz < 0.0 ) { Vxpabs = 0.0 ; } if ( Vxpabs > b_FZMAX ) { Vxpabs = b_FZMAX ;
} * ihdfu1wy5f = ( ( ( ( localB -> k3pqpt3554 [ 4 ] * FxType / localB ->
k3pqpt3554 [ 1 ] + localB -> k3pqpt3554 [ 3 ] ) + muDoubleScalarAbs ( Vx /
16.7 ) * localB -> k3pqpt3554 [ 5 ] ) + muDoubleScalarPower ( Vx / 16.7 , 4.0
) * localB -> k3pqpt3554 [ 6 ] ) + ( Vxpabs * localB -> k3pqpt3554 [ 8 ] /
localB -> k3pqpt3554 [ 1 ] + localB -> k3pqpt3554 [ 7 ] ) * ( localB ->
k3pqpt3554 [ 11 ] * localB -> k3pqpt3554 [ 11 ] ) ) * ( muDoubleScalarTanh (
Omega ) * Vxpabs * localB -> k3pqpt3554 [ 13 ] ) * ( muDoubleScalarPower (
Vxpabs / localB -> k3pqpt3554 [ 1 ] , localB -> k3pqpt3554 [ 9 ] ) *
muDoubleScalarPower ( a__1 / localB -> k3pqpt3554 [ 2 ] , localB ->
k3pqpt3554 [ 10 ] ) ) * localB -> k3pqpt3554 [ 12 ] ; break ; case 3 : *
ihdfu1wy5f = - nnh25h0kmd ( Omega , Fz , Vx , i11thzoaok , jiefker5rr ,
govy01dn4l , b_FZMAX ) ; break ; case 4 : * ihdfu1wy5f = - ipmaflmbfh ( Fz ,
Omega , localB -> k3pqpt3554 [ 0 ] , localB -> k3pqpt3554 [ 3 ] , localB ->
k3pqpt3554 [ 4 ] , localB -> k3pqpt3554 [ 5 ] , localB -> k3pqpt3554 [ 6 ] ,
b_Re , b_FZMIN , b_FZMAX , localB -> k3pqpt3554 [ 14 ] , localB -> k3pqpt3554
[ 15 ] ) ; break ; default : * ihdfu1wy5f = 0.0 ; break ; } * j1fnstwyfj =
FxType ; * krssuruyhs = b_Re ; } void kk0gqeonff ( boolean_T * grd1lflkc0 ,
k15rssna2x * localP ) { * grd1lflkc0 = localP -> P_0 ; } void bl2yl1izeh (
boolean_T * grd1lflkc0 ) { * grd1lflkc0 = false ; } void lx5pzbjgnj ( real_T
ay3xeuearj , real_T dotxz5qshb , boolean_T * grd1lflkc0 , oecdflrzti *
localDW ) { * grd1lflkc0 = ( muDoubleScalarAbs ( ay3xeuearj ) >= dotxz5qshb )
; localDW -> k3j1amkab5 = 4 ; } void fvcqjct50p ( boolean_T * j1l0ikyczw ,
oizox0twh0 * localDW , p4tcmhlmqo * localP ) { localDW -> jrdv3hmnoc = localP
-> P_2 ; * j1l0ikyczw = localP -> P_1 ; } void lqozigtnao ( boolean_T *
j1l0ikyczw , fqp5ibbznb * localB ) { * j1l0ikyczw = false ; localB ->
mjdk2hab1e = 0.0 ; } void jkqilwbv4l ( real_T deauqq3iqo , real_T aggo5m10cn
, boolean_T * j1l0ikyczw , fqp5ibbznb * localB , oizox0twh0 * localDW ,
p4tcmhlmqo * localP ) { * j1l0ikyczw = localP -> P_3 [ ( ( ( uint32_T ) (
muDoubleScalarAbs ( ( ( 0.0 - deauqq3iqo ) - localB -> mjdk2hab1e ) + localB
-> mjdk2hab1e ) >= aggo5m10cn ) + ( ( uint32_T ) ( muDoubleScalarAbs ( -
deauqq3iqo ) <= aggo5m10cn ) << 1 ) ) << 1 ) + localDW -> jrdv3hmnoc ] ;
localDW -> jrdv3hmnoc = * j1l0ikyczw ; localDW -> d3vznomj0x = 4 ; } void
jkqilwbv4lTID2 ( real_T rtp_br , fqp5ibbznb * localB , p4tcmhlmqo * localP )
{ localB -> mjdk2hab1e = rtp_br * localP -> P_0 ; } void mbjlcj4mlk (
hcopmldpph * const a5ree4wwe5 ) { if ( rtmGetTaskTime ( a5ree4wwe5 , 0 ) !=
rtmGetTStart ( a5ree4wwe5 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; } } void oxojvdus0j ( hcopmldpph * const
a5ree4wwe5 ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; } void ehvsb4g243 ( real_T * jk5v2hweet , real_T *
mfovcxxqab , real_T * jilotr4g4q , real_T * m4inimtjpw ) { * jk5v2hweet = 0.0
; * mfovcxxqab = 0.0 ; * jilotr4g4q = 0.0 ; * m4inimtjpw = 0.0 ; } void
hpjac0modf ( hcopmldpph * const a5ree4wwe5 , real_T kj3rg4elqk , real_T *
jk5v2hweet , real_T * mfovcxxqab , real_T * jilotr4g4q , real_T * m4inimtjpw
, j3ujqghva4 * localP ) { * jk5v2hweet = - kj3rg4elqk ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ * mfovcxxqab = localP -> P_0 ; * jilotr4g4q = localP -> P_1 ; * m4inimtjpw
= localP -> P_2 ; } } void bh1yzkl0yd ( real_T rtp_omegao , ezr503rgsr *
localX ) { localX -> cxk3fsuqri = rtp_omegao ; } void fpmjbkubaz ( hcopmldpph
* const a5ree4wwe5 , kyr1rhkn5p * localXdis ) { if ( rtmGetTaskTime (
a5ree4wwe5 , 0 ) != rtmGetTStart ( a5ree4wwe5 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
localXdis -> cxk3fsuqri = 0 ; } void ihxvxssvuy ( hcopmldpph * const
a5ree4wwe5 , kyr1rhkn5p * localXdis ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ;
localXdis -> cxk3fsuqri = 1 ; } void bxtrkjpjgc ( real_T * fxady5f4e0 ,
real_T * e2aiz2vbp3 , real_T * b5fl0n1q0j , real_T * mcbbov3w1s , ejajaq4sjj
* localB ) { localB -> ewkfjng1l4 = 0.0 ; localB -> hcmrnlatk5 = 0.0 ; localB
-> mwz5tssn5o = 0.0 ; localB -> exbq33mn51 = 0.0 ; * mcbbov3w1s = 0.0 ; *
fxady5f4e0 = 0.0 ; localB -> dgykadrj5y = 0.0 ; localB -> aereisbden = 0.0 ;
* e2aiz2vbp3 = 0.0 ; * b5fl0n1q0j = 0.0 ; } void ndg43gdj2c ( real_T
oh55pom3vz , real_T mcytrmfgpa , real_T * fxady5f4e0 , real_T * e2aiz2vbp3 ,
real_T * b5fl0n1q0j , real_T * mcbbov3w1s , real_T rtp_br , real_T rtp_Iyy ,
ejajaq4sjj * localB , aremv21hur * localP , ezr503rgsr * localX ) { real_T
tmp ; localB -> ewkfjng1l4 = localX -> cxk3fsuqri ; localB -> hcmrnlatk5 =
localP -> P_0 * localB -> ewkfjng1l4 ; localB -> mwz5tssn5o = oh55pom3vz *
muDoubleScalarTanh ( localB -> hcmrnlatk5 ) ; localB -> exbq33mn51 = rtp_br *
localB -> ewkfjng1l4 ; * mcbbov3w1s = localB -> exbq33mn51 ; * fxady5f4e0 =
localB -> ewkfjng1l4 ; localB -> dgykadrj5y = ( localB -> mwz5tssn5o -
mcytrmfgpa ) - localB -> exbq33mn51 ; tmp = 1.0 / rtp_Iyy ; localB ->
aereisbden = tmp * localB -> dgykadrj5y ; * e2aiz2vbp3 = localB -> aereisbden
; * b5fl0n1q0j = localB -> dgykadrj5y ; } void btu025qxla ( ejajaq4sjj *
localB , ocyn02au15 * localXdot ) { localXdot -> cxk3fsuqri = localB ->
aereisbden ; } static boolean_T gppluqklue ( real_T Tout , real_T Tfmaxs ,
dmpx2jc2pu * localB , fmdhv4fck3 * localDW ) { boolean_T b_yn ; lx5pzbjgnj (
Tout , Tfmaxs , & localB -> czgarjscn0 , & localDW -> lx5pzbjgnjw ) ; b_yn =
localB -> czgarjscn0 ; return b_yn ; } static boolean_T g0el31fu5q ( real_T
Tout , real_T Tfmaxs , dmpx2jc2pu * localB , fmdhv4fck3 * localDW ,
pymb3fi5g4 * localP ) { boolean_T b_yn ; jkqilwbv4l ( Tout , Tfmaxs , &
localB -> ba0brbanq5 , & localB -> jkqilwbv4li , & localDW -> jkqilwbv4li , &
localP -> jkqilwbv4li ) ; b_yn = localB -> ba0brbanq5 ; return b_yn ; } void
fhk5xmrghf ( real_T * pwdllqgo55 , real_T * evp41woadu , real_T * kqgisutphd
, real_T * lgy4zlekl2 , real_T rtp_omegao , dmpx2jc2pu * localB , fmdhv4fck3
* localDW , pymb3fi5g4 * localP , bobjql0acy * localX ) { localDW ->
hvnu2ozezg = 0U ; localDW -> flehlwltws = ixrnqnhdfr ; localX -> ndg43gdj2cy
. cxk3fsuqri = 0.0 ; * pwdllqgo55 = 0.0 ; * evp41woadu = 0.0 ; * kqgisutphd =
0.0 ; * lgy4zlekl2 = 0.0 ; kk0gqeonff ( & localB -> czgarjscn0 , & localP ->
lx5pzbjgnjw ) ; fvcqjct50p ( & localB -> ba0brbanq5 , & localDW ->
jkqilwbv4li , & localP -> jkqilwbv4li ) ; bh1yzkl0yd ( rtp_omegao , & localX
-> ndg43gdj2cy ) ; } void hjtn2cfetd ( real_T * pwdllqgo55 , real_T *
evp41woadu , real_T * kqgisutphd , real_T * lgy4zlekl2 , fmdhv4fck3 * localDW
, bobjql0acy * localX ) { localDW -> hvnu2ozezg = 0U ; localDW -> flehlwltws
= ixrnqnhdfr ; localX -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; * pwdllqgo55 = 0.0
; * evp41woadu = 0.0 ; * kqgisutphd = 0.0 ; * lgy4zlekl2 = 0.0 ; } void
jzxqghlsdl ( real_T * pwdllqgo55 , real_T * evp41woadu , real_T * kqgisutphd
, real_T * lgy4zlekl2 , dmpx2jc2pu * localB ) { * pwdllqgo55 = 0.0 ; *
evp41woadu = 0.0 ; * lgy4zlekl2 = 0.0 ; * kqgisutphd = 0.0 ; ehvsb4g243 (
lgy4zlekl2 , pwdllqgo55 , evp41woadu , kqgisutphd ) ; bl2yl1izeh ( & localB
-> czgarjscn0 ) ; lqozigtnao ( & localB -> ba0brbanq5 , & localB ->
jkqilwbv4li ) ; bxtrkjpjgc ( pwdllqgo55 , evp41woadu , lgy4zlekl2 ,
kqgisutphd , & localB -> ndg43gdj2cy ) ; } void cddyh02qci ( hcopmldpph *
const a5ree4wwe5 , real_T fgvs5banyw , real_T auareadgka , real_T ka4js1rmku
, real_T * pwdllqgo55 , real_T * evp41woadu , real_T * kqgisutphd , real_T *
lgy4zlekl2 , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T
rtp_OmegaTol , dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 *
localP , bobjql0acy * localX , oj3qcikvsd * localXdis ) { if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { localDW ->
il1k1v3adw = rtmGetTaskTime ( a5ree4wwe5 , 0 ) ; if ( localDW -> hvnu2ozezg
== 0U ) { localDW -> hvnu2ozezg = 1U ; localX -> ndg43gdj2cy . cxk3fsuqri =
rtp_omegao ; localDW -> flehlwltws = ns2cbkftdn ; fpmjbkubaz ( a5ree4wwe5 , &
localXdis -> ndg43gdj2cy ) ; ndg43gdj2c ( ka4js1rmku , fgvs5banyw ,
pwdllqgo55 , evp41woadu , lgy4zlekl2 , kqgisutphd , rtp_br , rtp_Iyy , &
localB -> ndg43gdj2cy , & localP -> ndg43gdj2cy , & localX -> ndg43gdj2cy ) ;
localDW -> ikmpdntrw1 = true ; ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; } else if ( localDW -> flehlwltws ==
mcuvnmapwy ) { if ( gppluqklue ( fgvs5banyw , auareadgka , localB , localDW )
) { localX -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; oxojvdus0j ( a5ree4wwe5 ) ;
localDW -> f4leq45rjn = false ; localDW -> flehlwltws = ns2cbkftdn ;
fpmjbkubaz ( a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; ndg43gdj2c (
ka4js1rmku , fgvs5banyw , pwdllqgo55 , evp41woadu , lgy4zlekl2 , kqgisutphd ,
rtp_br , rtp_Iyy , & localB -> ndg43gdj2cy , & localP -> ndg43gdj2cy , &
localX -> ndg43gdj2cy ) ; localDW -> ikmpdntrw1 = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( g0el31fu5q ( fgvs5banyw , auareadgka , localB , localDW , localP
) && ( muDoubleScalarAbs ( * pwdllqgo55 ) <= rtp_OmegaTol ) ) { ihxvxssvuy (
a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; localDW -> ikmpdntrw1 = false ;
localDW -> flehlwltws = mcuvnmapwy ; mbjlcj4mlk ( a5ree4wwe5 ) ; hpjac0modf (
a5ree4wwe5 , fgvs5banyw , lgy4zlekl2 , pwdllqgo55 , evp41woadu , kqgisutphd ,
& localP -> hpjac0modfc ) ; localDW -> f4leq45rjn = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} if ( localDW -> flehlwltws == mcuvnmapwy ) { if ( ! localDW -> f4leq45rjn )
{ hpjac0modf ( a5ree4wwe5 , fgvs5banyw , lgy4zlekl2 , pwdllqgo55 , evp41woadu
, kqgisutphd , & localP -> hpjac0modfc ) ; } else { localDW -> f4leq45rjn =
false ; } } else if ( ! localDW -> ikmpdntrw1 ) { ndg43gdj2c ( ka4js1rmku ,
fgvs5banyw , pwdllqgo55 , evp41woadu , lgy4zlekl2 , kqgisutphd , rtp_br ,
rtp_Iyy , & localB -> ndg43gdj2cy , & localP -> ndg43gdj2cy , & localX ->
ndg43gdj2cy ) ; } else { localDW -> ikmpdntrw1 = false ; } } void
cddyh02qciTID2 ( real_T rtp_br , dmpx2jc2pu * localB , pymb3fi5g4 * localP )
{ jkqilwbv4lTID2 ( rtp_br , & localB -> jkqilwbv4li , & localP -> jkqilwbv4li
) ; } void blmwtgrkjm ( dmpx2jc2pu * localB , fmdhv4fck3 * localDW ,
pjvirltsck * localXdot ) { localXdot -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; if (
localDW -> flehlwltws == ns2cbkftdn ) { btu025qxla ( & localB -> ndg43gdj2cy
, & localXdot -> ndg43gdj2cy ) ; } if ( localDW -> flehlwltws == mcuvnmapwy )
{ if ( localDW -> f4leq45rjn ) { localDW -> f4leq45rjn = false ; } } else if
( localDW -> ikmpdntrw1 ) { localDW -> ikmpdntrw1 = false ; } } static
boolean_T k5qdrctgwd ( real_T Tout , real_T Tfmaxs , gzahetipq4 * localB ,
epqdxq1edn * localDW ) { boolean_T b_yn ; lx5pzbjgnj ( Tout , Tfmaxs , &
localB -> d3ulkktm5a , & localDW -> aqualkdqvn ) ; b_yn = localB ->
d3ulkktm5a ; return b_yn ; } static boolean_T oknnk3qrza ( real_T Tout ,
real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4 *
localP ) { boolean_T b_yn ; jkqilwbv4l ( Tout , Tfmaxs , & localB ->
iwpgh2gzqh , & localB -> i5fcczml0p , & localDW -> i5fcczml0p , & localP ->
i5fcczml0p ) ; b_yn = localB -> iwpgh2gzqh ; return b_yn ; } void efyr52spdx
( real_T * ckea2phy4a , real_T * mbdwegsgqk , real_T * akcvyr55kg , real_T *
khmbidmlxe , real_T rtp_omegao , gzahetipq4 * localB , epqdxq1edn * localDW ,
eyoob242x4 * localP , jipem2r5u4 * localX ) { localDW -> nwijlmanjr = 0U ;
localDW -> eevc2cersy = nrvxfifrf3 ; localX -> fkdt002bwx . cxk3fsuqri = 0.0
; * ckea2phy4a = 0.0 ; * mbdwegsgqk = 0.0 ; * akcvyr55kg = 0.0 ; * khmbidmlxe
= 0.0 ; kk0gqeonff ( & localB -> d3ulkktm5a , & localP -> aqualkdqvn ) ;
fvcqjct50p ( & localB -> iwpgh2gzqh , & localDW -> i5fcczml0p , & localP ->
i5fcczml0p ) ; bh1yzkl0yd ( rtp_omegao , & localX -> fkdt002bwx ) ; } void
gkwx1uvgy3 ( real_T * ckea2phy4a , real_T * mbdwegsgqk , real_T * akcvyr55kg
, real_T * khmbidmlxe , epqdxq1edn * localDW , jipem2r5u4 * localX ) {
localDW -> nwijlmanjr = 0U ; localDW -> eevc2cersy = nrvxfifrf3 ; localX ->
fkdt002bwx . cxk3fsuqri = 0.0 ; * ckea2phy4a = 0.0 ; * mbdwegsgqk = 0.0 ; *
akcvyr55kg = 0.0 ; * khmbidmlxe = 0.0 ; } void p3l4kwjfse ( real_T *
ckea2phy4a , real_T * mbdwegsgqk , real_T * akcvyr55kg , real_T * khmbidmlxe
, gzahetipq4 * localB ) { * ckea2phy4a = 0.0 ; * mbdwegsgqk = 0.0 ; *
khmbidmlxe = 0.0 ; * akcvyr55kg = 0.0 ; ehvsb4g243 ( khmbidmlxe , ckea2phy4a
, mbdwegsgqk , akcvyr55kg ) ; bl2yl1izeh ( & localB -> d3ulkktm5a ) ;
lqozigtnao ( & localB -> iwpgh2gzqh , & localB -> i5fcczml0p ) ; bxtrkjpjgc (
ckea2phy4a , mbdwegsgqk , khmbidmlxe , akcvyr55kg , & localB -> fkdt002bwx )
; } void b5prwuabwt ( hcopmldpph * const a5ree4wwe5 , real_T kx4svy31tg ,
real_T br5yrlp4to , real_T dq54xdamlz , real_T * ckea2phy4a , real_T *
mbdwegsgqk , real_T * akcvyr55kg , real_T * khmbidmlxe , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , gzahetipq4 * localB ,
epqdxq1edn * localDW , eyoob242x4 * localP , jipem2r5u4 * localX , mngph55n5r
* localXdis ) { if ( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) )
{ localDW -> kldfuelvbc = rtmGetTaskTime ( a5ree4wwe5 , 0 ) ; if ( localDW ->
nwijlmanjr == 0U ) { localDW -> nwijlmanjr = 1U ; localX -> fkdt002bwx .
cxk3fsuqri = rtp_omegao ; localDW -> eevc2cersy = ojhcgwmuav ; fpmjbkubaz (
a5ree4wwe5 , & localXdis -> fkdt002bwx ) ; ndg43gdj2c ( dq54xdamlz ,
kx4svy31tg , ckea2phy4a , mbdwegsgqk , khmbidmlxe , akcvyr55kg , rtp_br ,
rtp_Iyy , & localB -> fkdt002bwx , & localP -> fkdt002bwx , & localX ->
fkdt002bwx ) ; localDW -> kevuk2jdkp = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
else if ( localDW -> eevc2cersy == fygjrc0bwn ) { if ( k5qdrctgwd (
kx4svy31tg , br5yrlp4to , localB , localDW ) ) { localX -> fkdt002bwx .
cxk3fsuqri = 0.0 ; oxojvdus0j ( a5ree4wwe5 ) ; localDW -> hgortb0uau = false
; localDW -> eevc2cersy = ojhcgwmuav ; fpmjbkubaz ( a5ree4wwe5 , & localXdis
-> fkdt002bwx ) ; ndg43gdj2c ( dq54xdamlz , kx4svy31tg , ckea2phy4a ,
mbdwegsgqk , khmbidmlxe , akcvyr55kg , rtp_br , rtp_Iyy , & localB ->
fkdt002bwx , & localP -> fkdt002bwx , & localX -> fkdt002bwx ) ; localDW ->
kevuk2jdkp = true ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } } else if ( oknnk3qrza ( kx4svy31tg , br5yrlp4to ,
localB , localDW , localP ) && ( muDoubleScalarAbs ( * ckea2phy4a ) <=
rtp_OmegaTol ) ) { ihxvxssvuy ( a5ree4wwe5 , & localXdis -> fkdt002bwx ) ;
localDW -> kevuk2jdkp = false ; localDW -> eevc2cersy = fygjrc0bwn ;
mbjlcj4mlk ( a5ree4wwe5 ) ; hpjac0modf ( a5ree4wwe5 , kx4svy31tg , khmbidmlxe
, ckea2phy4a , mbdwegsgqk , akcvyr55kg , & localP -> fsjpudim4x ) ; localDW
-> hgortb0uau = true ; ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; } } if ( localDW -> eevc2cersy == fygjrc0bwn )
{ if ( ! localDW -> hgortb0uau ) { hpjac0modf ( a5ree4wwe5 , kx4svy31tg ,
khmbidmlxe , ckea2phy4a , mbdwegsgqk , akcvyr55kg , & localP -> fsjpudim4x )
; } else { localDW -> hgortb0uau = false ; } } else if ( ! localDW ->
kevuk2jdkp ) { ndg43gdj2c ( dq54xdamlz , kx4svy31tg , ckea2phy4a , mbdwegsgqk
, khmbidmlxe , akcvyr55kg , rtp_br , rtp_Iyy , & localB -> fkdt002bwx , &
localP -> fkdt002bwx , & localX -> fkdt002bwx ) ; } else { localDW ->
kevuk2jdkp = false ; } } void b5prwuabwtTID2 ( real_T rtp_br , gzahetipq4 *
localB , eyoob242x4 * localP ) { jkqilwbv4lTID2 ( rtp_br , & localB ->
i5fcczml0p , & localP -> i5fcczml0p ) ; } void dq1cbs3e5h ( gzahetipq4 *
localB , epqdxq1edn * localDW , fvwoypcxq5 * localXdot ) { localXdot ->
fkdt002bwx . cxk3fsuqri = 0.0 ; if ( localDW -> eevc2cersy == ojhcgwmuav ) {
btu025qxla ( & localB -> fkdt002bwx , & localXdot -> fkdt002bwx ) ; } if (
localDW -> eevc2cersy == fygjrc0bwn ) { if ( localDW -> hgortb0uau ) {
localDW -> hgortb0uau = false ; } } else if ( localDW -> kevuk2jdkp ) {
localDW -> kevuk2jdkp = false ; } } void eqyc2wn3m1 ( hcopmldpph * const
a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; real_T a134j1egmo_e ; real_T
kokcvpiiky_e ; real_T ovggp1qwn3_e ; boolean_T tmp ; localDW -> jg0qnrcaox =
1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { localX -> ncmmxrrgvr [ 0 ] =
0.0 ; localX -> ncmmxrrgvr [ 1 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating
( ) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> jg0qnrcaox = ! tmp ; } else { localDW -> jg0qnrcaox = 1 ; } localX ->
m2l0c5x3qt = 0.0 ; } localX -> d5vyxqghh0 [ 0 ] = akbgnuupjz . P_102 ; localX
-> noatsby3ej [ 0 ] = akbgnuupjz . P_90 [ 0 ] ; localX -> d5vyxqghh0 [ 1 ] =
akbgnuupjz . P_102 ; localX -> noatsby3ej [ 1 ] = akbgnuupjz . P_90 [ 1 ] ;
localX -> in4ouu3rj0 = akbgnuupjz . P_94 ; localX -> fmsvpqigtm = akbgnuupjz
. P_93 ; localDW -> jdfraz14md = akbgnuupjz . P_109 ; localDW -> nz2ycl5px5 =
1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> nz2ycl5px5 = ! tmp ; } else {
localDW -> nz2ycl5px5 = 1 ; } localX -> pclrccjq3k = 0.0 ; } localX ->
jphiqvsdq1 = akbgnuupjz . P_95 ; localX -> neffdf1vy0 = akbgnuupjz . P_110 ;
localX -> exw1srp224 = akbgnuupjz . P_116 ; localX -> lwzedupgn2 = akbgnuupjz
. P_99 ; localDW -> jrm4ykfn0y = akbgnuupjz . P_127 ; localDW -> huxlbxlfje =
1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> huxlbxlfje = ! tmp ; } else {
localDW -> huxlbxlfje = 1 ; } localX -> nn4yztzwjs [ 0 ] = 0.0 ; localX ->
nn4yztzwjs [ 1 ] = 0.0 ; } localX -> avikqegq2n = akbgnuupjz . P_96 ; localX
-> ifgziugp0p = akbgnuupjz . P_85 ; localDW -> hs0twsijyj = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> hs0twsijyj = ! tmp ; } else { localDW -> hs0twsijyj = 1 ; } } for (
jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { fhk5xmrghf ( & localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . bzjc1unozv , & ovggp1qwn3_e , & a134j1egmo_e , &
kokcvpiiky_e , akbgnuupjz . P_86 , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog , & localDW -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , &
akbgnuupjz . nod5vp1cyy . fate2u2iog , & localX -> nod5vp1cyy [ jzsp3rpdl2 ]
. fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) {
efyr52spdx ( & localB -> eblhn1q21v [ ggxhvsmzpg ] . iztgeaiw2b , &
ovggp1qwn3_e , & a134j1egmo_e , & kokcvpiiky_e , akbgnuupjz . P_87 , & localB
-> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localDW -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm , & akbgnuupjz . eblhn1q21v . fd4qjwy5lm , & localX
-> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void er1nyhy4k5 (
hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW ,
edp3webv0p * localX ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; real_T
a134j1egmo_i ; real_T kokcvpiiky_i ; real_T ovggp1qwn3_i ; boolean_T tmp ;
localDW -> jg0qnrcaox = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { localX
-> ncmmxrrgvr [ 0 ] = 0.0 ; localX -> ncmmxrrgvr [ 1 ] = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> jg0qnrcaox = ! tmp ; } else {
localDW -> jg0qnrcaox = 1 ; } localX -> m2l0c5x3qt = 0.0 ; } localX ->
d5vyxqghh0 [ 0 ] = akbgnuupjz . P_102 ; localX -> noatsby3ej [ 0 ] =
akbgnuupjz . P_90 [ 0 ] ; localX -> d5vyxqghh0 [ 1 ] = akbgnuupjz . P_102 ;
localX -> noatsby3ej [ 1 ] = akbgnuupjz . P_90 [ 1 ] ; localX -> in4ouu3rj0 =
akbgnuupjz . P_94 ; localX -> fmsvpqigtm = akbgnuupjz . P_93 ; localDW ->
jdfraz14md = akbgnuupjz . P_109 ; localDW -> nz2ycl5px5 = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> nz2ycl5px5 = ! tmp ; } else { localDW -> nz2ycl5px5 = 1 ; } localX ->
pclrccjq3k = 0.0 ; } localX -> jphiqvsdq1 = akbgnuupjz . P_95 ; localX ->
neffdf1vy0 = akbgnuupjz . P_110 ; localX -> exw1srp224 = akbgnuupjz . P_116 ;
localX -> lwzedupgn2 = akbgnuupjz . P_99 ; localDW -> jrm4ykfn0y = akbgnuupjz
. P_127 ; localDW -> huxlbxlfje = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 )
) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> huxlbxlfje = ! tmp ; } else {
localDW -> huxlbxlfje = 1 ; } localX -> nn4yztzwjs [ 0 ] = 0.0 ; localX ->
nn4yztzwjs [ 1 ] = 0.0 ; } localX -> avikqegq2n = akbgnuupjz . P_96 ; localX
-> ifgziugp0p = akbgnuupjz . P_85 ; localDW -> hs0twsijyj = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> hs0twsijyj = ! tmp ; } else { localDW -> hs0twsijyj = 1 ; } } for (
jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { hjtn2cfetd ( & localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . bzjc1unozv , & ovggp1qwn3_i , & a134j1egmo_i , &
kokcvpiiky_i , & localDW -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localX
-> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ;
ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { gkwx1uvgy3 ( & localB -> eblhn1q21v [
ggxhvsmzpg ] . iztgeaiw2b , & ovggp1qwn3_i , & a134j1egmo_i , & kokcvpiiky_i
, & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localX ->
eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void ka5dospcnh ( pw4f2kjo3k *
localB , lvsoqlxlcs * localDW ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ;
int32_T ji4pzz2y51 ; real_T a134j1egmo_p ; real_T kokcvpiiky_p ; real_T
ovggp1qwn3_p ; int32_T i ; for ( ji4pzz2y51 = 0 ; ji4pzz2y51 < 4 ; ji4pzz2y51
++ ) { localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 0 ] = 0.0 ; localB
-> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 1 ] = 0.0 ; localB -> izrftnejci
[ ji4pzz2y51 ] . oqgrsi0ejr [ 2 ] = 0.0 ; for ( i = 0 ; i < 9 ; i ++ ) {
localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ i ] = 0.0 ; } } for (
jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { jzxqghlsdl ( & localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . bzjc1unozv , & ovggp1qwn3_p , & a134j1egmo_p , &
kokcvpiiky_p , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; } for (
ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { p3l4kwjfse ( & localB ->
eblhn1q21v [ ggxhvsmzpg ] . iztgeaiw2b , & ovggp1qwn3_p , & a134j1egmo_p , &
kokcvpiiky_p , & localB -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; }
localB -> o21hp01df2 = akbgnuupjz . P_60 ; localB -> evq31jzljx = akbgnuupjz
. P_61 ; localDW -> kxp34i0kfp = 0 ; localDW -> mdigxevyus = 0 ; localDW ->
bbyh2lmjuh = 0 ; } void DrivetrainEv ( hcopmldpph * const a5ree4wwe5 , const
real_T * a10dw5c4tm , const real_T * ccn5sowg0n , const real_T * dxefyqzind ,
const real_T * iudgegw2lz , real_T * hk0t0gzq0m , real_T * jnhw4b1r4n ,
pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX , at3vnbf5fi
* localZCE , bbuzvmnhsa * localXdis ) { real_T ebarpbqxjx ; real_T by2nsc5u0e
; real_T gbv1keysa1 ; real_T cexmufpll2 ; real_T nfg2wfex2g ; real_T
a4w0fiwopi ; real_T ghrkyf2wqh ; real_T lbzwvz35ur ; real_T e1uxquvo4b ;
real_T co0hnw4z10 ; real_T kedsav5mep ; real_T kh22t51mhe ; real_T hfxdronop5
; real_T k5eh0b5abw ; real_T hwa31ra5p5 ; real_T k1lyaspank ; real_T
aohzet2du1 ; int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; int32_T ji4pzz2y51 ;
__m128d tmp ; real_T fzak5q5isu_p [ 12 ] ; real_T kq3ho01jf4_p [ 9 ] ; real_T
omskzwfqex_p [ 6 ] ; real_T lnwgoxkd41_p [ 4 ] ; real_T a1lc0bzspv_p [ 3 ] ;
real_T hcngskyyjy [ 3 ] ; real_T kq3ho01jf4_e [ 3 ] ; real_T lezo4vnn1w [ 3 ]
; real_T ljy4tr2zcn_p [ 3 ] ; real_T g3arwv4dau_p [ 2 ] ; real_T aaj1knyzxs_p
; real_T aggo5314p1_p ; real_T cgf2haddsb_p ; real_T di4vinm4lt_p ; real_T
g0n14ylbe1_p ; real_T g433g0qrhs_p ; real_T gg1apbf2wu_idx_0 ; real_T
huwm2dqlds_p ; real_T jb4mtkb30x ; real_T jznx433nsh_p ; real_T kcmnuu1yx1_p
; real_T n5lx4vpukv_p ; real_T nh1w3novru ; real_T nvq24ipryj_p ; real_T
otssvk1ntn_idx_0 ; real_T otssvk1ntn_idx_2 ; int32_T iU ; boolean_T
xHasBeenChanged ; ZCEventType zcEvent ; if ( ssIsModeUpdateTimeStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ) { if ( localDW -> jg0qnrcaox != 0 ) {
di4vinm4lt_p = muDoubleScalarAtan2 ( akbgnuupjz . P_100 , akbgnuupjz . P_99 )
; localX -> ncmmxrrgvr [ 0 ] = akbgnuupjz . P_98 * muDoubleScalarCos (
di4vinm4lt_p ) ; localX -> ncmmxrrgvr [ 1 ] = akbgnuupjz . P_98 *
muDoubleScalarSin ( di4vinm4lt_p ) ; } g3arwv4dau_p [ 0 ] = localX ->
ncmmxrrgvr [ 0 ] ; g3arwv4dau_p [ 1 ] = localX -> ncmmxrrgvr [ 1 ] ; } else {
g3arwv4dau_p [ 0 ] = localX -> ncmmxrrgvr [ 0 ] ; g3arwv4dau_p [ 1 ] = localX
-> ncmmxrrgvr [ 1 ] ; } localB -> kn3kq1dbud [ 0 ] = g3arwv4dau_p [ 0 ] ;
localB -> kn3kq1dbud [ 1 ] = 0.0 ; localB -> kn3kq1dbud [ 2 ] = g3arwv4dau_p
[ 1 ] ; * hk0t0gzq0m = localB -> kn3kq1dbud [ 0 ] ; localB -> if3fq2sidt [ 0
] = 0.0 ; localB -> if3fq2sidt [ 1 ] = 0.0 ; fzak5q5isu_p [ 0 ] = - *
iudgegw2lz ; fzak5q5isu_p [ 1 ] = - 0.0 ; fzak5q5isu_p [ 2 ] = - 0.0 ;
fzak5q5isu_p [ 3 ] = 0.0 ; fzak5q5isu_p [ 4 ] = 0.0 ; di4vinm4lt_p = localX
-> in4ouu3rj0 ; a1lc0bzspv_p [ 0 ] = akbgnuupjz . P_149 ; a1lc0bzspv_p [ 1 ]
= localX -> in4ouu3rj0 ; a1lc0bzspv_p [ 2 ] = akbgnuupjz . P_147 ;
muDoubleScalarSinCos ( akbgnuupjz . P_149 , & lezo4vnn1w [ 0 ] , & hcngskyyjy
[ 0 ] ) ; muDoubleScalarSinCos ( localX -> in4ouu3rj0 , & lezo4vnn1w [ 1 ] ,
& hcngskyyjy [ 1 ] ) ; muDoubleScalarSinCos ( akbgnuupjz . P_147 , &
lezo4vnn1w [ 2 ] , & hcngskyyjy [ 2 ] ) ; kq3ho01jf4_p [ 0 ] = hcngskyyjy [ 0
] * hcngskyyjy [ 1 ] ; jb4mtkb30x = lezo4vnn1w [ 1 ] * lezo4vnn1w [ 2 ] ;
kq3ho01jf4_p [ 1 ] = jb4mtkb30x * hcngskyyjy [ 0 ] - lezo4vnn1w [ 0 ] *
hcngskyyjy [ 2 ] ; otssvk1ntn_idx_0 = lezo4vnn1w [ 1 ] * hcngskyyjy [ 2 ] ;
kq3ho01jf4_p [ 2 ] = otssvk1ntn_idx_0 * hcngskyyjy [ 0 ] + lezo4vnn1w [ 0 ] *
lezo4vnn1w [ 2 ] ; kq3ho01jf4_p [ 3 ] = lezo4vnn1w [ 0 ] * hcngskyyjy [ 1 ] ;
kq3ho01jf4_p [ 4 ] = jb4mtkb30x * lezo4vnn1w [ 0 ] + hcngskyyjy [ 0 ] *
hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 5 ] = otssvk1ntn_idx_0 * lezo4vnn1w [ 0 ] -
hcngskyyjy [ 0 ] * lezo4vnn1w [ 2 ] ; kq3ho01jf4_p [ 6 ] = - lezo4vnn1w [ 1 ]
; kq3ho01jf4_p [ 7 ] = hcngskyyjy [ 1 ] * lezo4vnn1w [ 2 ] ; kq3ho01jf4_p [ 8
] = hcngskyyjy [ 1 ] * hcngskyyjy [ 2 ] ; for ( iU = 0 ; iU < 3 ; iU ++ ) {
muDoubleScalarSinCos ( a1lc0bzspv_p [ iU ] , & hcngskyyjy [ iU ] , &
lezo4vnn1w [ iU ] ) ; kq3ho01jf4_e [ iU ] = ( kq3ho01jf4_p [ 3 * iU + 1 ] *
localB -> kqttujkp5i [ 1 ] + kq3ho01jf4_p [ 3 * iU ] * localB -> kqttujkp5i [
0 ] ) + kq3ho01jf4_p [ 3 * iU + 2 ] * localB -> kqttujkp5i [ 2 ] ; }
kq3ho01jf4_p [ 0 ] = lezo4vnn1w [ 0 ] * lezo4vnn1w [ 1 ] ; jb4mtkb30x =
hcngskyyjy [ 1 ] * hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 1 ] = jb4mtkb30x *
lezo4vnn1w [ 0 ] - hcngskyyjy [ 0 ] * lezo4vnn1w [ 2 ] ; otssvk1ntn_idx_0 =
hcngskyyjy [ 1 ] * lezo4vnn1w [ 2 ] ; kq3ho01jf4_p [ 2 ] = otssvk1ntn_idx_0 *
lezo4vnn1w [ 0 ] + hcngskyyjy [ 0 ] * hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 3 ] =
hcngskyyjy [ 0 ] * lezo4vnn1w [ 1 ] ; kq3ho01jf4_p [ 4 ] = jb4mtkb30x *
hcngskyyjy [ 0 ] + lezo4vnn1w [ 0 ] * lezo4vnn1w [ 2 ] ; kq3ho01jf4_p [ 5 ] =
otssvk1ntn_idx_0 * hcngskyyjy [ 0 ] - lezo4vnn1w [ 0 ] * hcngskyyjy [ 2 ] ;
kq3ho01jf4_p [ 6 ] = - hcngskyyjy [ 1 ] ; kq3ho01jf4_p [ 7 ] = lezo4vnn1w [ 1
] * hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 8 ] = lezo4vnn1w [ 1 ] * lezo4vnn1w [ 2
] ; for ( iU = 0 ; iU < 3 ; iU ++ ) { hcngskyyjy [ iU ] = ( kq3ho01jf4_p [ 3
* iU + 1 ] * localB -> a1lc0bzspv [ 1 ] + kq3ho01jf4_p [ 3 * iU ] * localB ->
a1lc0bzspv [ 0 ] ) + kq3ho01jf4_p [ 3 * iU + 2 ] * localB -> a1lc0bzspv [ 2 ]
; } localB -> b1gikpnzh3 = localX -> fmsvpqigtm ; fzak5q5isu_p [ 5 ] = (
look1_binlxpw ( ( ( 0.0 * localB -> kqttujkp5i [ 1 ] - localB -> kqttujkp5i [
0 ] * localB -> b1gikpnzh3 ) + localB -> kn3kq1dbud [ 2 ] ) - localB ->
if3fq2sidt [ 0 ] , akbgnuupjz . P_62 , akbgnuupjz . P_10 , 6U ) +
look1_binlxpw ( ( localX -> noatsby3ej [ 1 ] + kq3ho01jf4_e [ 2 ] ) - localX
-> d5vyxqghh0 [ 0 ] , akbgnuupjz . P_64 , akbgnuupjz . P_12 , 5U ) ) *
akbgnuupjz . P_105 [ 0 ] ; fzak5q5isu_p [ 6 ] = 0.0 ; fzak5q5isu_p [ 7 ] =
0.0 ; fzak5q5isu_p [ 8 ] = ( look1_binlxpw ( ( ( 0.0 * localB -> a1lc0bzspv [
1 ] - localB -> a1lc0bzspv [ 0 ] * localB -> b1gikpnzh3 ) + localB ->
kn3kq1dbud [ 2 ] ) - localB -> if3fq2sidt [ 1 ] , akbgnuupjz . P_63 ,
akbgnuupjz . P_11 , 6U ) + look1_binlxpw ( ( localX -> noatsby3ej [ 1 ] +
hcngskyyjy [ 2 ] ) - localX -> d5vyxqghh0 [ 1 ] , akbgnuupjz . P_65 ,
akbgnuupjz . P_13 , 5U ) ) * akbgnuupjz . P_105 [ 1 ] ; fzak5q5isu_p [ 9 ] =
localB -> eq4bvclop4 [ 0 ] ; fzak5q5isu_p [ 10 ] = localB -> eq4bvclop4 [ 1 ]
; fzak5q5isu_p [ 11 ] = localB -> eq4bvclop4 [ 2 ] ; lnwgoxkd41_p [ 0 ] = -
localX -> in4ouu3rj0 ; lnwgoxkd41_p [ 1 ] = - localX -> in4ouu3rj0 ;
lnwgoxkd41_p [ 2 ] = - localX -> in4ouu3rj0 ; jb4mtkb30x =
0.017453292519943295 * * dxefyqzind ; lnwgoxkd41_p [ 3 ] = - localX ->
in4ouu3rj0 - jb4mtkb30x ; ji4pzz2y51 = 0 ; while ( ji4pzz2y51 < 4 ) { localB
-> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 1 ] = lnwgoxkd41_p [ ji4pzz2y51 ]
; hcngskyyjy [ 0 ] = fzak5q5isu_p [ 3 * ji4pzz2y51 ] ; hcngskyyjy [ 1 ] =
fzak5q5isu_p [ 3 * ji4pzz2y51 + 1 ] ; hcngskyyjy [ 2 ] = fzak5q5isu_p [ 3 *
ji4pzz2y51 + 2 ] ; localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 0 ] =
akbgnuupjz . izrftnejci . P_1 ; localB -> izrftnejci [ ji4pzz2y51 ] .
oqgrsi0ejr [ 2 ] = akbgnuupjz . izrftnejci . P_0 ; muDoubleScalarSinCos (
localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 0 ] , & gg1apbf2wu_idx_0 ,
& otssvk1ntn_idx_0 ) ; muDoubleScalarSinCos ( localB -> izrftnejci [
ji4pzz2y51 ] . oqgrsi0ejr [ 1 ] , & g433g0qrhs_p , & huwm2dqlds_p ) ;
muDoubleScalarSinCos ( localB -> izrftnejci [ ji4pzz2y51 ] . oqgrsi0ejr [ 2 ]
, & jb4mtkb30x , & otssvk1ntn_idx_2 ) ; localB -> izrftnejci [ ji4pzz2y51 ] .
h1dclck55f [ 0 ] = otssvk1ntn_idx_0 * huwm2dqlds_p ; n5lx4vpukv_p =
g433g0qrhs_p * jb4mtkb30x ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f
[ 1 ] = n5lx4vpukv_p * otssvk1ntn_idx_0 - gg1apbf2wu_idx_0 * otssvk1ntn_idx_2
; kcmnuu1yx1_p = g433g0qrhs_p * otssvk1ntn_idx_2 ; localB -> izrftnejci [
ji4pzz2y51 ] . h1dclck55f [ 2 ] = kcmnuu1yx1_p * otssvk1ntn_idx_0 +
gg1apbf2wu_idx_0 * jb4mtkb30x ; localB -> izrftnejci [ ji4pzz2y51 ] .
h1dclck55f [ 3 ] = gg1apbf2wu_idx_0 * huwm2dqlds_p ; localB -> izrftnejci [
ji4pzz2y51 ] . h1dclck55f [ 4 ] = n5lx4vpukv_p * gg1apbf2wu_idx_0 +
otssvk1ntn_idx_0 * otssvk1ntn_idx_2 ; localB -> izrftnejci [ ji4pzz2y51 ] .
h1dclck55f [ 5 ] = kcmnuu1yx1_p * gg1apbf2wu_idx_0 - otssvk1ntn_idx_0 *
jb4mtkb30x ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 6 ] = -
g433g0qrhs_p ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 7 ] =
huwm2dqlds_p * jb4mtkb30x ; localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f
[ 8 ] = huwm2dqlds_p * otssvk1ntn_idx_2 ; for ( iU = 0 ; iU < 3 ; iU ++ ) {
kq3ho01jf4_e [ iU ] = ( localB -> izrftnejci [ ji4pzz2y51 ] . h1dclck55f [ 3
* iU + 1 ] * hcngskyyjy [ 1 ] + localB -> izrftnejci [ ji4pzz2y51 ] .
h1dclck55f [ 3 * iU ] * hcngskyyjy [ 0 ] ) + localB -> izrftnejci [
ji4pzz2y51 ] . h1dclck55f [ 3 * iU + 2 ] * hcngskyyjy [ 2 ] ; } localB ->
cpxmevd5ln [ 3 * ji4pzz2y51 ] = kq3ho01jf4_e [ 0 ] ; localB -> cpxmevd5ln [ 3
* ji4pzz2y51 + 1 ] = kq3ho01jf4_e [ 1 ] ; localB -> cpxmevd5ln [ 3 *
ji4pzz2y51 + 2 ] = kq3ho01jf4_e [ 2 ] ; ji4pzz2y51 ++ ; } gg1apbf2wu_idx_0 =
akbgnuupjz . P_106 [ 0 ] * localB -> cpxmevd5ln [ 3 ] ; jb4mtkb30x =
akbgnuupjz . P_106 [ 2 ] * localB -> cpxmevd5ln [ 5 ] ; nvq24ipryj_p =
akbgnuupjz . P_37 * jb4mtkb30x ; otssvk1ntn_idx_0 = akbgnuupjz . P_107 [ 0 ]
* localB -> cpxmevd5ln [ 6 ] ; otssvk1ntn_idx_2 = akbgnuupjz . P_107 [ 2 ] *
localB -> cpxmevd5ln [ 8 ] ; aggo5314p1_p = akbgnuupjz . P_42 *
otssvk1ntn_idx_2 ; omskzwfqex_p [ 1 ] = akbgnuupjz . P_106 [ 1 ] * localB ->
cpxmevd5ln [ 4 ] ; omskzwfqex_p [ 4 ] = akbgnuupjz . P_107 [ 1 ] * localB ->
cpxmevd5ln [ 7 ] ; g433g0qrhs_p = ( gg1apbf2wu_idx_0 * gg1apbf2wu_idx_0 +
omskzwfqex_p [ 1 ] * omskzwfqex_p [ 1 ] ) + jb4mtkb30x * jb4mtkb30x ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( localDW -> kxp34i0kfp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; localDW -> kxp34i0kfp = 0 ; } nh1w3novru =
muDoubleScalarSqrt ( g433g0qrhs_p ) ; } else if ( g433g0qrhs_p < 0.0 ) {
nh1w3novru = - muDoubleScalarSqrt ( muDoubleScalarAbs ( g433g0qrhs_p ) ) ;
localDW -> kxp34i0kfp = 1 ; } else { nh1w3novru = muDoubleScalarSqrt (
g433g0qrhs_p ) ; } cgf2haddsb_p = akbgnuupjz . P_108 * nh1w3novru ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ localB -> n1fith1shx = localDW -> jdfraz14md ; } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> jvitvqlix1 , ( localB -> n1fith1shx )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> nz2ycl5px5 != 0 ) ) {
xHasBeenChanged = ( localX -> m2l0c5x3qt != localB -> o21hp01df2 ) ; localX
-> m2l0c5x3qt = localB -> o21hp01df2 ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} g0n14ylbe1_p = localX -> m2l0c5x3qt ; } else { g0n14ylbe1_p = localX ->
m2l0c5x3qt ; } nh1w3novru = akbgnuupjz . P_43 * g0n14ylbe1_p + akbgnuupjz .
P_70 * localX -> jphiqvsdq1 ; jznx433nsh_p = localX -> neffdf1vy0 ; localB ->
bq4m0yykga = ( nh1w3novru - localX -> neffdf1vy0 * localB -> kbmx45xxxk ) *
akbgnuupjz . P_111 ; g433g0qrhs_p = akbgnuupjz . P_112 * * ccn5sowg0n ;
n5lx4vpukv_p = g433g0qrhs_p * localB -> otssvk1ntn * akbgnuupjz . P_58 *
akbgnuupjz . P_81 ; if ( n5lx4vpukv_p > akbgnuupjz . P_113 ) { n5lx4vpukv_p =
akbgnuupjz . P_113 ; } else if ( n5lx4vpukv_p < akbgnuupjz . P_114 ) {
n5lx4vpukv_p = akbgnuupjz . P_114 ; } g433g0qrhs_p = akbgnuupjz . P_30 *
akbgnuupjz . P_77 * n5lx4vpukv_p ; localB -> oac32d025c = akbgnuupjz . P_79 /
akbgnuupjz . P_77 * g433g0qrhs_p ; localB -> h35rll4cn4 = akbgnuupjz . P_77 /
akbgnuupjz . P_77 * g433g0qrhs_p ; jzsp3rpdl2 = 0 ; while ( jzsp3rpdl2 < 1 )
{ co0hnw4z10 = localB -> bq4m0yykga ; kedsav5mep = localB -> oac32d025c ;
kh22t51mhe = localB -> h35rll4cn4 ; cddyh02qci ( a5ree4wwe5 , co0hnw4z10 ,
kedsav5mep , kh22t51mhe , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . bzjc1unozv
, & g433g0qrhs_p , & huwm2dqlds_p , & n5lx4vpukv_p , akbgnuupjz . P_86 ,
akbgnuupjz . P_52 , akbgnuupjz . P_14 , akbgnuupjz . P_35 * akbgnuupjz . P_28
* 0.0 , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & akbgnuupjz . nod5vp1cyy .
fate2u2iog , & localX -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localXdis
-> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; localB -> kms3o3yk0z = localB
-> nod5vp1cyy [ jzsp3rpdl2 ] . bzjc1unozv ; jzsp3rpdl2 ++ ; } pafzrlxpms (
localB -> kbmx45xxxk , cgf2haddsb_p , localB -> kms3o3yk0z , localB ->
kn3kq1dbud [ 0 ] , akbgnuupjz . P_155 , akbgnuupjz . P_156 , akbgnuupjz .
P_157 , akbgnuupjz . P_158 , akbgnuupjz . P_74 , akbgnuupjz . P_159 ,
akbgnuupjz . P_160 , akbgnuupjz . P_161 , akbgnuupjz . P_162 , akbgnuupjz .
P_91 , akbgnuupjz . P_163 , akbgnuupjz . P_164 , akbgnuupjz . P_38 ,
akbgnuupjz . P_46 , akbgnuupjz . P_56 , akbgnuupjz . P_165 , akbgnuupjz .
P_166 , akbgnuupjz . P_167 , akbgnuupjz . P_49 , akbgnuupjz . P_40 ,
akbgnuupjz . P_168 , akbgnuupjz . P_169 , akbgnuupjz . P_33 , akbgnuupjz .
P_170 , akbgnuupjz . P_171 , akbgnuupjz . P_172 , akbgnuupjz . P_173 ,
akbgnuupjz . P_174 , 0.0 , akbgnuupjz . P_175 , akbgnuupjz . P_176 ,
akbgnuupjz . P_177 , akbgnuupjz . P_178 , akbgnuupjz . P_179 , akbgnuupjz .
P_180 , akbgnuupjz . P_181 , akbgnuupjz . P_182 , akbgnuupjz . P_183 ,
akbgnuupjz . P_184 , akbgnuupjz . P_185 , akbgnuupjz . P_186 , akbgnuupjz .
P_187 , akbgnuupjz . P_188 , akbgnuupjz . P_189 , akbgnuupjz . P_190 ,
akbgnuupjz . P_191 , akbgnuupjz . P_192 , akbgnuupjz . P_193 , akbgnuupjz .
P_194 , akbgnuupjz . P_195 , akbgnuupjz . P_196 , akbgnuupjz . P_197 ,
akbgnuupjz . P_152 , akbgnuupjz . P_198 , akbgnuupjz . P_199 , & hfxdronop5 ,
& k5eh0b5abw , & hwa31ra5p5 , & k1lyaspank , & aohzet2du1 , akbgnuupjz . P_6
, akbgnuupjz . P_8 , akbgnuupjz . P_35 , akbgnuupjz . P_72 , & localB ->
f0qvxxi2xz ) ; huwm2dqlds_p = hfxdronop5 + hfxdronop5 ; g433g0qrhs_p = (
otssvk1ntn_idx_0 * otssvk1ntn_idx_0 + omskzwfqex_p [ 4 ] * omskzwfqex_p [ 4 ]
) + otssvk1ntn_idx_2 * otssvk1ntn_idx_2 ; if ( rtmIsMajorTimeStep (
a5ree4wwe5 ) ) { if ( localDW -> mdigxevyus != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; localDW -> mdigxevyus = 0 ; } cgf2haddsb_p =
muDoubleScalarSqrt ( g433g0qrhs_p ) ; } else if ( g433g0qrhs_p < 0.0 ) {
cgf2haddsb_p = - muDoubleScalarSqrt ( muDoubleScalarAbs ( g433g0qrhs_p ) ) ;
localDW -> mdigxevyus = 1 ; } else { cgf2haddsb_p = muDoubleScalarSqrt (
g433g0qrhs_p ) ; } g433g0qrhs_p = akbgnuupjz . P_115 * cgf2haddsb_p ;
cgf2haddsb_p = localX -> exw1srp224 ; localB -> gzmaney24b = ( 0.0 - localX
-> exw1srp224 * localB -> c2um2c3fzr ) * akbgnuupjz . P_117 ; n5lx4vpukv_p =
akbgnuupjz . P_118 * * ccn5sowg0n ; n5lx4vpukv_p = n5lx4vpukv_p * localB ->
pr2530cved * akbgnuupjz . P_59 * akbgnuupjz . P_82 ; if ( n5lx4vpukv_p >
akbgnuupjz . P_119 ) { n5lx4vpukv_p = akbgnuupjz . P_119 ; } else if (
n5lx4vpukv_p < akbgnuupjz . P_120 ) { n5lx4vpukv_p = akbgnuupjz . P_120 ; }
n5lx4vpukv_p *= akbgnuupjz . P_31 * akbgnuupjz . P_78 ; localB -> jk3qveh3bd
= akbgnuupjz . P_80 / akbgnuupjz . P_78 * n5lx4vpukv_p ; localB -> a0hsqpxz3b
= akbgnuupjz . P_78 / akbgnuupjz . P_78 * n5lx4vpukv_p ; ggxhvsmzpg = 0 ;
while ( ggxhvsmzpg < 1 ) { by2nsc5u0e = localB -> gzmaney24b ; gbv1keysa1 =
localB -> jk3qveh3bd ; cexmufpll2 = localB -> a0hsqpxz3b ; b5prwuabwt (
a5ree4wwe5 , by2nsc5u0e , gbv1keysa1 , cexmufpll2 , & localB -> eblhn1q21v [
ggxhvsmzpg ] . iztgeaiw2b , & n5lx4vpukv_p , & kcmnuu1yx1_p , & aaj1knyzxs_p
, akbgnuupjz . P_87 , akbgnuupjz . P_53 , akbgnuupjz . P_15 , akbgnuupjz .
P_36 * akbgnuupjz . P_29 * 0.0 , & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , &
akbgnuupjz . eblhn1q21v . fd4qjwy5lm , & localX -> eblhn1q21v [ ggxhvsmzpg ]
. fd4qjwy5lm , & localXdis -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ;
localB -> g3qrjs4pvm = localB -> eblhn1q21v [ ggxhvsmzpg ] . iztgeaiw2b ;
ggxhvsmzpg ++ ; } pafzrlxpms ( localB -> c2um2c3fzr , g433g0qrhs_p , localB
-> g3qrjs4pvm , localB -> kn3kq1dbud [ 0 ] , akbgnuupjz . P_204 , akbgnuupjz
. P_205 , akbgnuupjz . P_206 , akbgnuupjz . P_207 , akbgnuupjz . P_75 ,
akbgnuupjz . P_208 , akbgnuupjz . P_209 , akbgnuupjz . P_210 , akbgnuupjz .
P_211 , akbgnuupjz . P_92 , akbgnuupjz . P_212 , akbgnuupjz . P_213 ,
akbgnuupjz . P_39 , akbgnuupjz . P_47 , akbgnuupjz . P_57 , akbgnuupjz .
P_214 , akbgnuupjz . P_215 , akbgnuupjz . P_216 , akbgnuupjz . P_50 ,
akbgnuupjz . P_41 , akbgnuupjz . P_217 , akbgnuupjz . P_218 , akbgnuupjz .
P_34 , akbgnuupjz . P_219 , akbgnuupjz . P_220 , akbgnuupjz . P_221 ,
akbgnuupjz . P_222 , akbgnuupjz . P_223 , 0.0 , akbgnuupjz . P_224 ,
akbgnuupjz . P_225 , akbgnuupjz . P_226 , akbgnuupjz . P_227 , akbgnuupjz .
P_228 , akbgnuupjz . P_229 , akbgnuupjz . P_230 , akbgnuupjz . P_231 ,
akbgnuupjz . P_232 , akbgnuupjz . P_233 , akbgnuupjz . P_234 , akbgnuupjz .
P_235 , akbgnuupjz . P_236 , akbgnuupjz . P_237 , akbgnuupjz . P_238 ,
akbgnuupjz . P_239 , akbgnuupjz . P_240 , akbgnuupjz . P_241 , akbgnuupjz .
P_242 , akbgnuupjz . P_243 , akbgnuupjz . P_244 , akbgnuupjz . P_245 ,
akbgnuupjz . P_246 , akbgnuupjz . P_201 , akbgnuupjz . P_247 , akbgnuupjz .
P_248 , & nfg2wfex2g , & a4w0fiwopi , & ghrkyf2wqh , & lbzwvz35ur , &
e1uxquvo4b , akbgnuupjz . P_7 , akbgnuupjz . P_9 , akbgnuupjz . P_36 ,
akbgnuupjz . P_73 , & localB -> cl0311alh3 ) ; gg1apbf2wu_idx_0 +=
otssvk1ntn_idx_0 ; huwm2dqlds_p = ( ( nfg2wfex2g + nfg2wfex2g ) +
huwm2dqlds_p ) + gg1apbf2wu_idx_0 ; kcmnuu1yx1_p = huwm2dqlds_p * akbgnuupjz
. P_69 ; otssvk1ntn_idx_0 = localB -> kn3kq1dbud [ 0 ] - localB -> cpxmevd5ln
[ 0 ] ; a1lc0bzspv_p [ 0 ] = otssvk1ntn_idx_0 * otssvk1ntn_idx_0 ; hcngskyyjy
[ 0 ] = otssvk1ntn_idx_0 ; otssvk1ntn_idx_0 = localB -> kn3kq1dbud [ 1 ] -
localB -> cpxmevd5ln [ 1 ] ; a1lc0bzspv_p [ 1 ] = otssvk1ntn_idx_0 *
otssvk1ntn_idx_0 ; hcngskyyjy [ 1 ] = otssvk1ntn_idx_0 ; otssvk1ntn_idx_0 =
localB -> kn3kq1dbud [ 2 ] - localB -> cpxmevd5ln [ 2 ] ; g433g0qrhs_p = (
a1lc0bzspv_p [ 0 ] + a1lc0bzspv_p [ 1 ] ) + otssvk1ntn_idx_0 *
otssvk1ntn_idx_0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( localDW ->
bbyh2lmjuh != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW -> bbyh2lmjuh = 0 ; } g433g0qrhs_p =
muDoubleScalarSqrt ( g433g0qrhs_p ) ; } else if ( g433g0qrhs_p < 0.0 ) {
g433g0qrhs_p = - muDoubleScalarSqrt ( muDoubleScalarAbs ( g433g0qrhs_p ) ) ;
localDW -> bbyh2lmjuh = 1 ; } else { g433g0qrhs_p = muDoubleScalarSqrt (
g433g0qrhs_p ) ; } aaj1knyzxs_p = g433g0qrhs_p * g433g0qrhs_p ; omskzwfqex_p
[ 0 ] = akbgnuupjz . P_1 ; g433g0qrhs_p = muDoubleScalarAtan2 ( hcngskyyjy [
1 ] , hcngskyyjy [ 0 ] ) ; omskzwfqex_p [ 1 ] = look1_binlcpw ( g433g0qrhs_p
, akbgnuupjz . P_51 , akbgnuupjz . P_4 , 1U ) ; omskzwfqex_p [ 2 ] =
akbgnuupjz . P_2 ; omskzwfqex_p [ 3 ] = look1_binlxpw ( g433g0qrhs_p ,
akbgnuupjz . P_122 , akbgnuupjz . P_121 , 1U ) ; hcngskyyjy [ 0 ] =
muDoubleScalarTanh ( akbgnuupjz . P_123 [ 0 ] * hcngskyyjy [ 0 ] ) ;
omskzwfqex_p [ 4 ] = hcngskyyjy [ 0 ] * akbgnuupjz . P_3 ; omskzwfqex_p [ 5 ]
= look1_binlxpw ( g433g0qrhs_p , akbgnuupjz . P_51 , akbgnuupjz . P_5 , 1U )
; g433g0qrhs_p = 0.5 * akbgnuupjz . P_0 * akbgnuupjz . P_24 / akbgnuupjz .
P_25 ; for ( iU = 0 ; iU <= 4 ; iU += 2 ) { tmp = _mm_loadu_pd ( &
omskzwfqex_p [ iU ] ) ; _mm_storeu_pd ( & omskzwfqex_p [ iU ] , _mm_mul_pd (
_mm_div_pd ( _mm_mul_pd ( _mm_set1_pd ( aaj1knyzxs_p ) , tmp ) , _mm_set1_pd
( akbgnuupjz . P_32 ) ) , _mm_set1_pd ( g433g0qrhs_p ) ) ) ; } localB ->
nlkcdzukvl = ( ( ( ( ( nvq24ipryj_p - aggo5314p1_p ) + kcmnuu1yx1_p ) + (
akbgnuupjz . P_37 + akbgnuupjz . P_42 ) * omskzwfqex_p [ 4 ] ) + akbgnuupjz .
P_144 [ 1 ] ) - akbgnuupjz . P_145 * localB -> b1gikpnzh3 ) / akbgnuupjz .
P_16 ; muDoubleScalarSinCos ( di4vinm4lt_p , & g433g0qrhs_p , & nvq24ipryj_p
) ; localB -> gsrk5elwxp [ 0 ] = ( ( ( ( huwm2dqlds_p - ( hcngskyyjy [ 0 ] -
akbgnuupjz . P_151 [ 0 ] ) * omskzwfqex_p [ 0 ] ) + localB -> cpxmevd5ln [ 9
] ) + akbgnuupjz . P_143 [ 0 ] ) / akbgnuupjz . P_76 + - g433g0qrhs_p *
akbgnuupjz . P_67 ) + ( akbgnuupjz . P_124 [ 0 ] * g3arwv4dau_p [ 0 ] +
g3arwv4dau_p [ 1 ] * akbgnuupjz . P_124 [ 2 ] ) * localB -> b1gikpnzh3 ;
localB -> gsrk5elwxp [ 1 ] = ( ( ( ( ( muDoubleScalarTanh ( akbgnuupjz .
P_123 [ 2 ] * otssvk1ntn_idx_0 ) - akbgnuupjz . P_151 [ 2 ] ) * omskzwfqex_p
[ 2 ] - ( jb4mtkb30x + otssvk1ntn_idx_2 ) ) + localB -> cpxmevd5ln [ 11 ] ) +
akbgnuupjz . P_143 [ 2 ] ) / akbgnuupjz . P_76 + nvq24ipryj_p * akbgnuupjz .
P_67 ) + ( g3arwv4dau_p [ 0 ] * akbgnuupjz . P_124 [ 1 ] + g3arwv4dau_p [ 1 ]
* akbgnuupjz . P_124 [ 3 ] ) * localB -> b1gikpnzh3 ; muDoubleScalarSinCos (
akbgnuupjz . P_146 , & hcngskyyjy [ 0 ] , & lezo4vnn1w [ 0 ] ) ;
muDoubleScalarSinCos ( di4vinm4lt_p , & hcngskyyjy [ 1 ] , & lezo4vnn1w [ 1 ]
) ; muDoubleScalarSinCos ( akbgnuupjz . P_146 , & hcngskyyjy [ 2 ] , &
lezo4vnn1w [ 2 ] ) ; kq3ho01jf4_p [ 0 ] = lezo4vnn1w [ 0 ] * lezo4vnn1w [ 1 ]
; jb4mtkb30x = hcngskyyjy [ 1 ] * hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 1 ] =
jb4mtkb30x * lezo4vnn1w [ 0 ] - hcngskyyjy [ 0 ] * lezo4vnn1w [ 2 ] ;
otssvk1ntn_idx_0 = hcngskyyjy [ 1 ] * lezo4vnn1w [ 2 ] ; kq3ho01jf4_p [ 2 ] =
otssvk1ntn_idx_0 * lezo4vnn1w [ 0 ] + hcngskyyjy [ 0 ] * hcngskyyjy [ 2 ] ;
kq3ho01jf4_p [ 3 ] = hcngskyyjy [ 0 ] * lezo4vnn1w [ 1 ] ; kq3ho01jf4_p [ 4 ]
= jb4mtkb30x * hcngskyyjy [ 0 ] + lezo4vnn1w [ 0 ] * lezo4vnn1w [ 2 ] ;
kq3ho01jf4_p [ 5 ] = otssvk1ntn_idx_0 * hcngskyyjy [ 0 ] - lezo4vnn1w [ 0 ] *
hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 6 ] = - hcngskyyjy [ 1 ] ; kq3ho01jf4_p [ 7
] = lezo4vnn1w [ 1 ] * hcngskyyjy [ 2 ] ; kq3ho01jf4_p [ 8 ] = lezo4vnn1w [ 1
] * lezo4vnn1w [ 2 ] ; di4vinm4lt_p = g3arwv4dau_p [ 0 ] ; otssvk1ntn_idx_0 =
g3arwv4dau_p [ 1 ] ; for ( iU = 0 ; iU < 3 ; iU ++ ) { lezo4vnn1w [ iU ] = (
kq3ho01jf4_p [ 3 * iU + 1 ] * akbgnuupjz . P_146 + kq3ho01jf4_p [ 3 * iU ] *
di4vinm4lt_p ) + kq3ho01jf4_p [ 3 * iU + 2 ] * otssvk1ntn_idx_0 ; } localB ->
ltgafk04fm [ 0 ] = lezo4vnn1w [ 0 ] ; localB -> ltgafk04fm [ 1 ] = lezo4vnn1w
[ 2 ] ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5
, 1 , 0 ) ) { localB -> bhoakmd05s = localDW -> jrm4ykfn0y ; } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> jgxptiecam , ( localB -> bhoakmd05s )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> huxlbxlfje != 0 ) ) {
xHasBeenChanged = ( localX -> pclrccjq3k != localB -> evq31jzljx ) ; localX
-> pclrccjq3k = localB -> evq31jzljx ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} di4vinm4lt_p = localX -> pclrccjq3k ; } else { di4vinm4lt_p = localX ->
pclrccjq3k ; } otssvk1ntn_idx_0 = akbgnuupjz . P_44 * di4vinm4lt_p +
akbgnuupjz . P_71 * localX -> avikqegq2n ; ebarpbqxjx = - otssvk1ntn_idx_0 ;
* jnhw4b1r4n = localX -> ifgziugp0p ; lezo4vnn1w [ 0 ] = * a10dw5c4tm ;
localB -> mlyerx0zo2 = ( ( lezo4vnn1w [ 0 ] + ebarpbqxjx ) + - akbgnuupjz .
P_45 * * jnhw4b1r4n ) / localB -> ck4qnpyfku ; gg1apbf2wu_idx_0 = localB ->
kms3o3yk0z * localB -> kbmx45xxxk ; if ( ( gg1apbf2wu_idx_0 >= - akbgnuupjz .
P_35 ) && ( gg1apbf2wu_idx_0 <= akbgnuupjz . P_35 ) ) { gg1apbf2wu_idx_0 =
4.0 / ( 3.0 - muDoubleScalarPower ( gg1apbf2wu_idx_0 / 2.0 , 2.0 ) ) ; } else
{ gg1apbf2wu_idx_0 = muDoubleScalarAbs ( gg1apbf2wu_idx_0 ) ; } localB ->
o5qnqtv4rr = ( ( k5eh0b5abw / localB -> kbmx45xxxk + hfxdronop5 ) -
jznx433nsh_p ) * ( gg1apbf2wu_idx_0 / akbgnuupjz . P_21 ) ; gg1apbf2wu_idx_0
= localB -> g3qrjs4pvm * localB -> c2um2c3fzr ; if ( ( gg1apbf2wu_idx_0 >= -
akbgnuupjz . P_36 ) && ( gg1apbf2wu_idx_0 <= akbgnuupjz . P_36 ) ) {
gg1apbf2wu_idx_0 = 4.0 / ( 3.0 - muDoubleScalarPower ( gg1apbf2wu_idx_0 / 2.0
, 2.0 ) ) ; } else { gg1apbf2wu_idx_0 = muDoubleScalarAbs ( gg1apbf2wu_idx_0
) ; } localB -> b5gfnja0pu = ( ( a4w0fiwopi / localB -> c2um2c3fzr +
nfg2wfex2g ) - cgf2haddsb_p ) * ( gg1apbf2wu_idx_0 / akbgnuupjz . P_22 ) ; if
( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { if ( localDW ->
hs0twsijyj != 0 ) { localX -> nn4yztzwjs [ 0 ] = localB -> pmhtxeb5od [ 0 ] ;
localX -> nn4yztzwjs [ 1 ] = localB -> pmhtxeb5od [ 1 ] ; } if ( localX ->
nn4yztzwjs [ 0 ] >= akbgnuupjz . P_128 ) { if ( localX -> nn4yztzwjs [ 0 ] !=
akbgnuupjz . P_128 ) { localX -> nn4yztzwjs [ 0 ] = akbgnuupjz . P_128 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> nn4yztzwjs [ 0 ] <= akbgnuupjz . P_129 ) && ( localX
-> nn4yztzwjs [ 0 ] != akbgnuupjz . P_129 ) ) { localX -> nn4yztzwjs [ 0 ] =
akbgnuupjz . P_129 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } if ( localX -> nn4yztzwjs [ 1 ] >= akbgnuupjz . P_128 )
{ if ( localX -> nn4yztzwjs [ 1 ] != akbgnuupjz . P_128 ) { localX ->
nn4yztzwjs [ 1 ] = akbgnuupjz . P_128 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> nn4yztzwjs [ 1 ] <= akbgnuupjz . P_129 ) && ( localX
-> nn4yztzwjs [ 1 ] != akbgnuupjz . P_129 ) ) { localX -> nn4yztzwjs [ 1 ] =
akbgnuupjz . P_129 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } g3arwv4dau_p [ 0 ] = localX -> nn4yztzwjs [ 0 ] ;
g3arwv4dau_p [ 1 ] = localX -> nn4yztzwjs [ 1 ] ; } else { if ( localX ->
nn4yztzwjs [ 0 ] >= akbgnuupjz . P_128 ) { g3arwv4dau_p [ 0 ] = akbgnuupjz .
P_128 ; } else if ( localX -> nn4yztzwjs [ 0 ] <= akbgnuupjz . P_129 ) {
g3arwv4dau_p [ 0 ] = akbgnuupjz . P_129 ; } else { g3arwv4dau_p [ 0 ] =
localX -> nn4yztzwjs [ 0 ] ; } if ( localX -> nn4yztzwjs [ 1 ] >= akbgnuupjz
. P_128 ) { g3arwv4dau_p [ 1 ] = akbgnuupjz . P_128 ; } else if ( localX ->
nn4yztzwjs [ 1 ] <= akbgnuupjz . P_129 ) { g3arwv4dau_p [ 1 ] = akbgnuupjz .
P_129 ; } else { g3arwv4dau_p [ 1 ] = localX -> nn4yztzwjs [ 1 ] ; } }
g433g0qrhs_p = akbgnuupjz . P_23 / 2.0 ; localB -> a454anbfuk = -
g3arwv4dau_p [ 0 ] - localB -> kms3o3yk0z ; if ( ! ( localB -> n1fith1shx !=
0.0 ) ) { g0n14ylbe1_p = localB -> o21hp01df2 ; } localB -> osvj5d1pkv = (
localB -> a454anbfuk - g0n14ylbe1_p ) * akbgnuupjz . P_83 ; g433g0qrhs_p =
localB -> boxmszjlz1 * g3arwv4dau_p [ 0 ] * g433g0qrhs_p + localB ->
boxmszjlz1 * g3arwv4dau_p [ 1 ] * g433g0qrhs_p ; gg1apbf2wu_idx_0 = (
muDoubleScalarTanh ( ( akbgnuupjz . P_132 * muDoubleScalarAbs ( g433g0qrhs_p
) - akbgnuupjz . P_262 ) * akbgnuupjz . P_133 ) + akbgnuupjz . P_262 ) *
akbgnuupjz . P_134 ; cgf2haddsb_p = ( muDoubleScalarTanh ( ( akbgnuupjz .
P_136 * muDoubleScalarAbs ( - g3arwv4dau_p [ 0 ] ) - akbgnuupjz . P_256 ) *
akbgnuupjz . P_137 ) + akbgnuupjz . P_256 ) * akbgnuupjz . P_138 ;
g0n14ylbe1_p = ( muDoubleScalarTanh ( ( akbgnuupjz . P_140 *
muDoubleScalarAbs ( - g3arwv4dau_p [ 1 ] ) - akbgnuupjz . P_259 ) *
akbgnuupjz . P_141 ) + akbgnuupjz . P_259 ) * akbgnuupjz . P_142 ; if (
akbgnuupjz . P_101 == 1.0 ) { if ( otssvk1ntn_idx_0 * g433g0qrhs_p >
akbgnuupjz . P_131 ) { jb4mtkb30x = akbgnuupjz . P_66 ; } else { jb4mtkb30x =
akbgnuupjz . P_260 ; } ljy4tr2zcn_p [ 0 ] = ( ( akbgnuupjz . P_262 -
gg1apbf2wu_idx_0 ) * akbgnuupjz . P_261 + jb4mtkb30x * gg1apbf2wu_idx_0 ) *
otssvk1ntn_idx_0 ; if ( - nh1w3novru * - g3arwv4dau_p [ 0 ] > akbgnuupjz .
P_135 ) { jb4mtkb30x = akbgnuupjz . P_66 ; } else { jb4mtkb30x = akbgnuupjz .
P_254 ; } ljy4tr2zcn_p [ 1 ] = ( ( akbgnuupjz . P_256 - cgf2haddsb_p ) *
akbgnuupjz . P_255 + jb4mtkb30x * cgf2haddsb_p ) * - nh1w3novru ; if ( -
nh1w3novru * - g3arwv4dau_p [ 1 ] > akbgnuupjz . P_139 ) { jb4mtkb30x =
akbgnuupjz . P_66 ; } else { jb4mtkb30x = akbgnuupjz . P_257 ; } ljy4tr2zcn_p
[ 2 ] = ( ( akbgnuupjz . P_259 - g0n14ylbe1_p ) * akbgnuupjz . P_258 +
jb4mtkb30x * g0n14ylbe1_p ) * - nh1w3novru ; automldiffopen_wAtp5Ifz (
ljy4tr2zcn_p , akbgnuupjz . P_54 , akbgnuupjz . P_48 , akbgnuupjz . P_55 ,
akbgnuupjz . P_23 , 1.0 , akbgnuupjz . P_18 , akbgnuupjz . P_19 , akbgnuupjz
. P_20 , g3arwv4dau_p , lezo4vnn1w , localB -> k4h2lncslm ) ; } else { if (
otssvk1ntn_idx_0 * g433g0qrhs_p > akbgnuupjz . P_131 ) { jb4mtkb30x =
akbgnuupjz . P_66 ; } else { jb4mtkb30x = akbgnuupjz . P_260 ; } ljy4tr2zcn_p
[ 0 ] = ( ( akbgnuupjz . P_262 - gg1apbf2wu_idx_0 ) * akbgnuupjz . P_261 +
jb4mtkb30x * gg1apbf2wu_idx_0 ) * otssvk1ntn_idx_0 ; if ( - nh1w3novru * -
g3arwv4dau_p [ 0 ] > akbgnuupjz . P_135 ) { jb4mtkb30x = akbgnuupjz . P_66 ;
} else { jb4mtkb30x = akbgnuupjz . P_254 ; } ljy4tr2zcn_p [ 1 ] = ( (
akbgnuupjz . P_256 - cgf2haddsb_p ) * akbgnuupjz . P_255 + jb4mtkb30x *
cgf2haddsb_p ) * - nh1w3novru ; if ( - nh1w3novru * - g3arwv4dau_p [ 1 ] >
akbgnuupjz . P_139 ) { jb4mtkb30x = akbgnuupjz . P_66 ; } else { jb4mtkb30x =
akbgnuupjz . P_257 ; } ljy4tr2zcn_p [ 2 ] = ( ( akbgnuupjz . P_259 -
g0n14ylbe1_p ) * akbgnuupjz . P_258 + jb4mtkb30x * g0n14ylbe1_p ) * -
nh1w3novru ; automldiffopen_wAtp5Ifz ( ljy4tr2zcn_p , akbgnuupjz . P_54 ,
akbgnuupjz . P_48 , akbgnuupjz . P_55 , akbgnuupjz . P_23 , 0.0 , akbgnuupjz
. P_18 , akbgnuupjz . P_19 , akbgnuupjz . P_20 , g3arwv4dau_p , lezo4vnn1w ,
localB -> k4h2lncslm ) ; } localB -> apaluifwyb = * jnhw4b1r4n - g433g0qrhs_p
; if ( ! ( localB -> bhoakmd05s != 0.0 ) ) { di4vinm4lt_p = localB ->
evq31jzljx ; } localB -> cerbjdl0lv = ( localB -> apaluifwyb - di4vinm4lt_p )
* akbgnuupjz . P_84 ; } void DrivetrainEvTID2 ( pw4f2kjo3k * localB ) {
int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; int32_T ji4pzz2y51 ; localB ->
kqttujkp5i [ 0 ] = akbgnuupjz . P_37 ; localB -> kqttujkp5i [ 1 ] =
akbgnuupjz . P_26 ; localB -> kqttujkp5i [ 2 ] = akbgnuupjz . P_69 ; localB
-> a1lc0bzspv [ 0 ] = - akbgnuupjz . P_42 ; localB -> a1lc0bzspv [ 1 ] =
akbgnuupjz . P_27 ; localB -> a1lc0bzspv [ 2 ] = akbgnuupjz . P_69 ; localB
-> eq4bvclop4 [ 0 ] = 0.0 ; localB -> eq4bvclop4 [ 1 ] = 0.0 ; localB ->
eq4bvclop4 [ 2 ] = akbgnuupjz . P_76 * akbgnuupjz . P_68 ; ji4pzz2y51 = 0 ;
while ( ji4pzz2y51 < 4 ) { ji4pzz2y51 ++ ; } if ( ( akbgnuupjz . P_17 >= -
akbgnuupjz . P_97 ) && ( akbgnuupjz . P_17 <= akbgnuupjz . P_97 ) ) { localB
-> ck4qnpyfku = 2.0E-6 / ( 3.0 - muDoubleScalarPower ( akbgnuupjz . P_17 /
1.0e-6 , 2.0 ) ) ; } else { localB -> ck4qnpyfku = muDoubleScalarAbs (
akbgnuupjz . P_17 ) ; } if ( akbgnuupjz . P_28 > akbgnuupjz . P_153 ) {
localB -> kbmx45xxxk = akbgnuupjz . P_153 ; } else if ( akbgnuupjz . P_28 <
akbgnuupjz . P_154 ) { localB -> kbmx45xxxk = akbgnuupjz . P_154 ; } else {
localB -> kbmx45xxxk = akbgnuupjz . P_28 ; } localB -> otssvk1ntn =
akbgnuupjz . P_200 * akbgnuupjz . P_58 ; jzsp3rpdl2 = 0 ; while ( jzsp3rpdl2
< 1 ) { cddyh02qciTID2 ( akbgnuupjz . P_52 , & localB -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog , & akbgnuupjz . nod5vp1cyy . fate2u2iog ) ;
jzsp3rpdl2 ++ ; } if ( akbgnuupjz . P_29 > akbgnuupjz . P_202 ) { localB ->
c2um2c3fzr = akbgnuupjz . P_202 ; } else if ( akbgnuupjz . P_29 < akbgnuupjz
. P_203 ) { localB -> c2um2c3fzr = akbgnuupjz . P_203 ; } else { localB ->
c2um2c3fzr = akbgnuupjz . P_29 ; } localB -> pr2530cved = akbgnuupjz . P_249
* akbgnuupjz . P_59 ; ggxhvsmzpg = 0 ; while ( ggxhvsmzpg < 1 ) {
b5prwuabwtTID2 ( akbgnuupjz . P_53 , & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & akbgnuupjz . eblhn1q21v . fd4qjwy5lm ) ; ggxhvsmzpg ++ ; }
localB -> o21hp01df2 = akbgnuupjz . P_60 ; localB -> pmhtxeb5od [ 0 ] =
akbgnuupjz . P_88 ; localB -> pmhtxeb5od [ 1 ] = akbgnuupjz . P_89 ; if (
akbgnuupjz . P_263 > akbgnuupjz . P_265 ) { localB -> boxmszjlz1 = akbgnuupjz
. P_264 ; } else { localB -> boxmszjlz1 = - akbgnuupjz . P_264 ; } localB ->
evq31jzljx = akbgnuupjz . P_61 ; } void ekz3w3o33e ( hcopmldpph * const
a5ree4wwe5 , lvsoqlxlcs * localDW ) { if ( rtmIsMajorTimeStep ( a5ree4wwe5 )
) { if ( memcmp ( a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pPrevVal , a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . sizeInBytes ) != 0 ) { ( void ) memcpy (
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pPrevVal , a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . pCurrVal , a5ree4wwe5 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) ; ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if
( memcmp ( a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 1 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
1 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 2 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
2 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
3 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 4 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 4 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
4 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 5 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 5 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
5 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 5 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 5 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } } localDW ->
jg0qnrcaox = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit (
a5ree4wwe5 , 1 , 0 ) ) { localDW -> jdfraz14md = akbgnuupjz . P_250 ; }
localDW -> nz2ycl5px5 = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) &&
rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { localDW -> jrm4ykfn0y = akbgnuupjz
. P_266 ; } localDW -> huxlbxlfje = 0 ; localDW -> hs0twsijyj = 0 ; } void
a2spfqi5as ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
, cspbap1de4 * localXdot ) { real_T by2nsc5u0e ; real_T gbv1keysa1 ; real_T
cexmufpll2 ; real_T co0hnw4z10 ; real_T kedsav5mep ; real_T kh22t51mhe ;
int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; localXdot -> ncmmxrrgvr [ 0 ] =
localB -> gsrk5elwxp [ 0 ] ; localXdot -> d5vyxqghh0 [ 0 ] = localB ->
if3fq2sidt [ 0 ] ; localXdot -> noatsby3ej [ 0 ] = localB -> ltgafk04fm [ 0 ]
; localXdot -> ncmmxrrgvr [ 1 ] = localB -> gsrk5elwxp [ 1 ] ; localXdot ->
d5vyxqghh0 [ 1 ] = localB -> if3fq2sidt [ 1 ] ; localXdot -> noatsby3ej [ 1 ]
= localB -> ltgafk04fm [ 1 ] ; localXdot -> in4ouu3rj0 = localB -> b1gikpnzh3
; localXdot -> fmsvpqigtm = localB -> nlkcdzukvl ; localXdot -> m2l0c5x3qt =
localB -> osvj5d1pkv ; localXdot -> jphiqvsdq1 = localB -> a454anbfuk ;
localXdot -> neffdf1vy0 = localB -> o5qnqtv4rr ; for ( jzsp3rpdl2 = 0 ;
jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { co0hnw4z10 = localB -> bq4m0yykga ;
kedsav5mep = localB -> oac32d025c ; kh22t51mhe = localB -> h35rll4cn4 ;
blmwtgrkjm ( & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW
-> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localXdot -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog ) ; } localXdot -> exw1srp224 = localB ->
b5gfnja0pu ; for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) {
by2nsc5u0e = localB -> gzmaney24b ; gbv1keysa1 = localB -> jk3qveh3bd ;
cexmufpll2 = localB -> a0hsqpxz3b ; dq1cbs3e5h ( & localB -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm , & localDW -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & localXdot -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; }
localXdot -> lwzedupgn2 = localB -> kn3kq1dbud [ 0 ] ; localXdot ->
pclrccjq3k = localB -> cerbjdl0lv ; localXdot -> avikqegq2n = localB ->
apaluifwyb ; localXdot -> ifgziugp0p = localB -> mlyerx0zo2 ; if ( ( ( localX
-> nn4yztzwjs [ 0 ] > akbgnuupjz . P_129 ) && ( localX -> nn4yztzwjs [ 0 ] <
akbgnuupjz . P_128 ) ) || ( ( localX -> nn4yztzwjs [ 0 ] <= akbgnuupjz .
P_129 ) && ( localB -> k4h2lncslm [ 0 ] > 0.0 ) ) || ( ( localX -> nn4yztzwjs
[ 0 ] >= akbgnuupjz . P_128 ) && ( localB -> k4h2lncslm [ 0 ] < 0.0 ) ) ) {
localXdot -> nn4yztzwjs [ 0 ] = localB -> k4h2lncslm [ 0 ] ; } else {
localXdot -> nn4yztzwjs [ 0 ] = 0.0 ; } if ( ( ( localX -> nn4yztzwjs [ 1 ] >
akbgnuupjz . P_129 ) && ( localX -> nn4yztzwjs [ 1 ] < akbgnuupjz . P_128 ) )
|| ( ( localX -> nn4yztzwjs [ 1 ] <= akbgnuupjz . P_129 ) && ( localB ->
k4h2lncslm [ 1 ] > 0.0 ) ) || ( ( localX -> nn4yztzwjs [ 1 ] >= akbgnuupjz .
P_128 ) && ( localB -> k4h2lncslm [ 1 ] < 0.0 ) ) ) { localXdot -> nn4yztzwjs
[ 1 ] = localB -> k4h2lncslm [ 1 ] ; } else { localXdot -> nn4yztzwjs [ 1 ] =
0.0 ; } } void ekywbf3nku ( hcopmldpph * const a5ree4wwe5 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( a5ree4wwe5 ->
_mdlRefSfcnS , "DrivetrainEv" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void ktxb3gprz3 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
int_T mdlref_TID1 , int_T mdlref_TID2 , hcopmldpph * const a5ree4wwe5 ,
pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX , at3vnbf5fi
* localZCE , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; akbgnuupjz . P_113
= rtInf ; akbgnuupjz . P_119 = rtInf ; akbgnuupjz . P_153 = rtInf ;
akbgnuupjz . P_202 = rtInf ; ( void ) memset ( ( void * ) a5ree4wwe5 , 0 ,
sizeof ( hcopmldpph ) ) ; a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; a5ree4wwe5 ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( a5ree4wwe5 -> _mdlRefSfcnS , "DrivetrainEv" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( pw4f2kjo3k ) ) ; { int32_T i ; for ( i = 0 ; i < 12
; i ++ ) { localB -> cpxmevd5ln [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i ++ )
{ localB -> cl0311alh3 . eh3bmirodr [ i ] = 0.0 ; } for ( i = 0 ; i < 16 ; i
++ ) { localB -> cl0311alh3 . k3pqpt3554 [ i ] = 0.0 ; } for ( i = 0 ; i < 24
; i ++ ) { localB -> cl0311alh3 . myssjwdee1 [ i ] = 0.0 ; } for ( i = 0 ; i
< 5 ; i ++ ) { localB -> f0qvxxi2xz . eh3bmirodr [ i ] = 0.0 ; } for ( i = 0
; i < 16 ; i ++ ) { localB -> f0qvxxi2xz . k3pqpt3554 [ i ] = 0.0 ; } for ( i
= 0 ; i < 24 ; i ++ ) { localB -> f0qvxxi2xz . myssjwdee1 [ i ] = 0.0 ; }
localB -> kn3kq1dbud [ 0 ] = 0.0 ; localB -> kn3kq1dbud [ 1 ] = 0.0 ; localB
-> kn3kq1dbud [ 2 ] = 0.0 ; localB -> if3fq2sidt [ 0 ] = 0.0 ; localB ->
if3fq2sidt [ 1 ] = 0.0 ; localB -> b1gikpnzh3 = 0.0 ; localB -> n1fith1shx =
0.0 ; localB -> bq4m0yykga = 0.0 ; localB -> oac32d025c = 0.0 ; localB ->
h35rll4cn4 = 0.0 ; localB -> gzmaney24b = 0.0 ; localB -> jk3qveh3bd = 0.0 ;
localB -> a0hsqpxz3b = 0.0 ; localB -> nlkcdzukvl = 0.0 ; localB ->
gsrk5elwxp [ 0 ] = 0.0 ; localB -> gsrk5elwxp [ 1 ] = 0.0 ; localB ->
ltgafk04fm [ 0 ] = 0.0 ; localB -> ltgafk04fm [ 1 ] = 0.0 ; localB ->
bhoakmd05s = 0.0 ; localB -> mlyerx0zo2 = 0.0 ; localB -> o5qnqtv4rr = 0.0 ;
localB -> b5gfnja0pu = 0.0 ; localB -> a454anbfuk = 0.0 ; localB ->
osvj5d1pkv = 0.0 ; localB -> apaluifwyb = 0.0 ; localB -> cerbjdl0lv = 0.0 ;
localB -> kqttujkp5i [ 0 ] = 0.0 ; localB -> kqttujkp5i [ 1 ] = 0.0 ; localB
-> kqttujkp5i [ 2 ] = 0.0 ; localB -> a1lc0bzspv [ 0 ] = 0.0 ; localB ->
a1lc0bzspv [ 1 ] = 0.0 ; localB -> a1lc0bzspv [ 2 ] = 0.0 ; localB ->
eq4bvclop4 [ 0 ] = 0.0 ; localB -> eq4bvclop4 [ 1 ] = 0.0 ; localB ->
eq4bvclop4 [ 2 ] = 0.0 ; localB -> ck4qnpyfku = 0.0 ; localB -> kbmx45xxxk =
0.0 ; localB -> otssvk1ntn = 0.0 ; localB -> c2um2c3fzr = 0.0 ; localB ->
pr2530cved = 0.0 ; localB -> o21hp01df2 = 0.0 ; localB -> pmhtxeb5od [ 0 ] =
0.0 ; localB -> pmhtxeb5od [ 1 ] = 0.0 ; localB -> boxmszjlz1 = 0.0 ; localB
-> evq31jzljx = 0.0 ; localB -> g3qrjs4pvm = 0.0 ; localB -> kms3o3yk0z = 0.0
; localB -> k4h2lncslm [ 0 ] = 0.0 ; localB -> k4h2lncslm [ 1 ] = 0.0 ; } (
void ) memset ( ( void * ) localDW , 0 , sizeof ( lvsoqlxlcs ) ) ; localDW ->
jdfraz14md = 0.0 ; localDW -> jrm4ykfn0y = 0.0 ;
DrivetrainEv_InitializeDataMapInfo ( a5ree4wwe5 , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( a5ree4wwe5 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
a5ree4wwe5 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( a5ree4wwe5 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig0 ; a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> bhoakmd05s ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig1 ; a5ree4wwe5 ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> n1fith1shx ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig2 ; a5ree4wwe5 ->
nonContDerivSignal [ 2 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> eblhn1q21v [ 0 ] . fd4qjwy5lm . d3ulkktm5a ) ; ; a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig3 ; a5ree4wwe5 -> nonContDerivSignal [ 3 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . pCurrVal = ( char_T * ) ( & localB -> eblhn1q21v [
0 ] . fd4qjwy5lm . iwpgh2gzqh ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 4 ] .
pPrevVal = ( char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig4 ;
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . sizeInBytes = ( 1 * sizeof (
boolean_T ) ) ; a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal = ( char_T
* ) ( & localB -> nod5vp1cyy [ 0 ] . fate2u2iog . czgarjscn0 ) ; ; a5ree4wwe5
-> nonContDerivSignal [ 5 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig5 ; a5ree4wwe5 -> nonContDerivSignal [ 5 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pCurrVal = ( char_T * ) ( & localB -> nod5vp1cyy [
0 ] . fate2u2iog . ba0brbanq5 ) ; ; localZCE -> jvitvqlix1 =
UNINITIALIZED_ZCSIG ; localZCE -> jgxptiecam = UNINITIALIZED_ZCSIG ; } void
mr_DrivetrainEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_DrivetrainEv , 254 ) ; * retVal = 1 ; } static void
mr_DrivetrainEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_DrivetrainEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DrivetrainEv_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_DrivetrainEv_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_DrivetrainEv_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_DrivetrainEv_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_DrivetrainEv_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DrivetrainEv_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_DrivetrainEv_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_DrivetrainEv_GetDWork ( const hmke5fx3tcj * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_DrivetrainEv_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 33 ] = { "mdlrefDW->rtdw.jdfraz14md" ,
"mdlrefDW->rtdw.jrm4ykfn0y" , "mdlrefDW->rtdw.jg0qnrcaox" ,
"mdlrefDW->rtdw.nz2ycl5px5" , "mdlrefDW->rtdw.huxlbxlfje" ,
"mdlrefDW->rtdw.hs0twsijyj" , "mdlrefDW->rtdw.kxp34i0kfp" ,
"mdlrefDW->rtdw.mdigxevyus" , "mdlrefDW->rtdw.bbyh2lmjuh" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.kldfuelvbc" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.cog0zpqeoa" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.d4ugeviqji" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.eevc2cersy" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.nwijlmanjr" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.kevuk2jdkp" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.hgortb0uau" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.fkdt002bwx.iojd2jlc3k" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.fsjpudim4x.lim0ml1jqw" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.i5fcczml0p.jrdv3hmnoc" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.i5fcczml0p.d3vznomj0x" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.aqualkdqvn.k3j1amkab5" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.il1k1v3adw" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.azoxgesvxj" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.dufw0vwv3o" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.flehlwltws" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.hvnu2ozezg" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.ikmpdntrw1" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.f4leq45rjn" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.ndg43gdj2cy.iojd2jlc3k" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.hpjac0modfc.lim0ml1jqw" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jkqilwbv4li.jrdv3hmnoc" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jkqilwbv4li.d3vznomj0x" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.lx5pzbjgnjw.k3j1amkab5" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 33 , rtdwDataFieldNames )
; int k0 ; mxSetFieldByNumber ( rtdwData , 0 , 9 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . kldfuelvbc ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 10 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 11 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . d4ugeviqji ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 12 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . eevc2cersy ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 13 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . nwijlmanjr ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 14 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 15 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . hgortb0uau ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 16 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . fkdt002bwx .
iojd2jlc3k ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 17 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 18 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 19 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p .
d3vznomj0x ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 20 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 21 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . il1k1v3adw ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 22 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . azoxgesvxj ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 23 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . dufw0vwv3o ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 24 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . flehlwltws ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 25 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . hvnu2ozezg ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 26 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ikmpdntrw1 ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 27 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . f4leq45rjn ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 28 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ndg43gdj2cy .
iojd2jlc3k ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 29 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 30 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , mxUINT8_CLASS , mxREAL ) )
; mxSetFieldByNumber ( rtdwData , 0 , 31 , mxCreateUninitNumericMatrix ( 1 ,
1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li .
d3vznomj0x ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 32 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . jdfraz14md ) , sizeof ( mdlrefDW -> rtdw .
jdfraz14md ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( mdlrefDW -> rtdw . jrm4ykfn0y ) , sizeof ( mdlrefDW ->
rtdw . jrm4ykfn0y ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 2
, ( const void * ) & ( mdlrefDW -> rtdw . jg0qnrcaox ) , sizeof ( mdlrefDW ->
rtdw . jg0qnrcaox ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 3
, ( const void * ) & ( mdlrefDW -> rtdw . nz2ycl5px5 ) , sizeof ( mdlrefDW ->
rtdw . nz2ycl5px5 ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 4
, ( const void * ) & ( mdlrefDW -> rtdw . huxlbxlfje ) , sizeof ( mdlrefDW ->
rtdw . huxlbxlfje ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 5
, ( const void * ) & ( mdlrefDW -> rtdw . hs0twsijyj ) , sizeof ( mdlrefDW ->
rtdw . hs0twsijyj ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 6
, ( const void * ) & ( mdlrefDW -> rtdw . kxp34i0kfp ) , sizeof ( mdlrefDW ->
rtdw . kxp34i0kfp ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 7
, ( const void * ) & ( mdlrefDW -> rtdw . mdigxevyus ) , sizeof ( mdlrefDW ->
rtdw . mdigxevyus ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 8
, ( const void * ) & ( mdlrefDW -> rtdw . bbyh2lmjuh ) , sizeof ( mdlrefDW ->
rtdw . bbyh2lmjuh ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex
offset0 = k0 ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
9 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
kldfuelvbc ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
kldfuelvbc ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 10 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
cog0zpqeoa ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
cog0zpqeoa ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 11 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
d4ugeviqji ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
d4ugeviqji ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 12 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
eevc2cersy ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
eevc2cersy ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 13 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
nwijlmanjr ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
nwijlmanjr ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 14 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
kevuk2jdkp ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
kevuk2jdkp ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 15 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
hgortb0uau ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
hgortb0uau ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 16 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm .
fkdt002bwx . iojd2jlc3k ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] .
fd4qjwy5lm . fkdt002bwx . iojd2jlc3k ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 17 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . fsjpudim4x .
lim0ml1jqw ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fsjpudim4x . lim0ml1jqw ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 18 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] .
fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 19 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p .
d3vznomj0x ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . d3vznomj0x ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 20 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] .
fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) ) ; } for ( k0 = 0
; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 21 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . il1k1v3adw ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . il1k1v3adw ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 22 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . azoxgesvxj ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . azoxgesvxj ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 23 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . dufw0vwv3o ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . dufw0vwv3o ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 24 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . flehlwltws ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . flehlwltws ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 25 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . hvnu2ozezg ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . hvnu2ozezg ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 26 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ikmpdntrw1 ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ikmpdntrw1 ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 27 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . f4leq45rjn ) , sizeof
( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . f4leq45rjn ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 28 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ndg43gdj2cy .
iojd2jlc3k ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
ndg43gdj2cy . iojd2jlc3k ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 29 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . hpjac0modfc . lim0ml1jqw ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 30 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li .
jrdv3hmnoc ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . jrdv3hmnoc ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 31 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . jkqilwbv4li . d3vznomj0x ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li . d3vznomj0x ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 32 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . lx5pzbjgnjw .
k3j1amkab5 ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
lx5pzbjgnjw . k3j1amkab5 ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } mr_DrivetrainEv_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * ) &
( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void ) mdlrefDW ;
return ssDW ; } void mr_DrivetrainEv_SetDWork ( hmke5fx3tcj * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ;
mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jdfraz14md ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . jdfraz14md ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jrm4ykfn0y ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . jrm4ykfn0y ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jg0qnrcaox ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . jg0qnrcaox ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
nz2ycl5px5 ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . nz2ycl5px5 ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
huxlbxlfje ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . huxlbxlfje ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hs0twsijyj ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . hs0twsijyj ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kxp34i0kfp ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . kxp34i0kfp ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mdigxevyus ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . mdigxevyus ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bbyh2lmjuh ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . bbyh2lmjuh ) )
; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . kldfuelvbc ) , rtdwData , 0 , 9 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kldfuelvbc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . cog0zpqeoa ) , rtdwData , 0 , 10 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . d4ugeviqji ) , rtdwData , 0 , 11 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . d4ugeviqji ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . eevc2cersy ) , rtdwData , 0 , 12 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . eevc2cersy ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . nwijlmanjr ) , rtdwData , 0 , 13 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . nwijlmanjr ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . kevuk2jdkp ) , rtdwData , 0 , 14 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . hgortb0uau ) , rtdwData , 0 , 15 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . hgortb0uau ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . fkdt002bwx . iojd2jlc3k ) , rtdwData , 0 ,
16 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fkdt002bwx . iojd2jlc3k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , rtdwData , 0 ,
17 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fsjpudim4x . lim0ml1jqw ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , rtdwData , 0 ,
18 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p . d3vznomj0x ) , rtdwData , 0 ,
19 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . d3vznomj0x ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , rtdwData , 0 ,
20 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqualkdqvn . k3j1amkab5 ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . il1k1v3adw ) , rtdwData ,
0 , 21 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. il1k1v3adw ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . azoxgesvxj ) , rtdwData ,
0 , 22 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. azoxgesvxj ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . dufw0vwv3o ) , rtdwData ,
0 , 23 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. dufw0vwv3o ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . flehlwltws ) , rtdwData ,
0 , 24 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. flehlwltws ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . hvnu2ozezg ) , rtdwData ,
0 , 25 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. hvnu2ozezg ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ikmpdntrw1 ) , rtdwData ,
0 , 26 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. ikmpdntrw1 ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . f4leq45rjn ) , rtdwData ,
0 , 27 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. f4leq45rjn ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k
) , rtdwData , 0 , 28 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0
] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) , rtdwData , 0 ,
29 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
hpjac0modfc . lim0ml1jqw ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , rtdwData , 0 ,
30 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li . d3vznomj0x ) , rtdwData , 0 ,
31 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . d3vznomj0x ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , rtdwData , 0 ,
32 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
lx5pzbjgnjw . k3j1amkab5 ) ) ; } } mr_DrivetrainEv_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_DrivetrainEv_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 3158446925U , 326450940U , 996841817U ,
566023199U , } ; slmrModelRefRegisterSimStateChecksum ( S , "DrivetrainEv" ,
& chksum [ 0 ] ) ; } mxArray * mr_DrivetrainEv_GetSimStateDisallowedBlocks (
) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
