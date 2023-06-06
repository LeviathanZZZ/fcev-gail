#include "FCEvReferenceApplication.h"
#include "rtwtypes.h"
#include "FCEvReferenceApplication_private.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "recomputeBlockDiag_gs6kEciD.h"
#include "xhseqr_H6eRN0gF.h"
#include "norm_CF3EtBNC.h"
#include "log2_DgASG5hL.h"
#include <math.h>
#include "rt_logging_mmi.h"
#include "FCEvReferenceApplication_capi.h"
#include "look1_pbinlcapw.h"
#include "FCEvPowertrainController.h"
#include "DrivetrainEv.h"
#include "FCElectricPlant.h"
#include "FCEvReferenceApplication_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 6 , & stopRequested ) ; }
rtExtModeShutdown ( 6 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 7 ; const char_T
* gbl_raccel_Version = "9.8 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define cqdyacctvm (1U)
#define crzhigcaqo ((uint8_T)0U)
#define erln4z22fs (3U)
#define mlasyn5ga4 (2U)
arol2xwgeu arol2xwgeua ; gtrdqgpqkf gtrdqgpqkfx ; lw0sy0o11j lw0sy0o11jr ;
m44wadfesj m44wadfesjn ; gag0esqvhe gag0esqvheg ; amt5hqyor4 amt5hqyor4n ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; static void
eq130nkbpl ( const real_T a [ 4 ] , real_T b , real_T c [ 4 ] ) ; static
boolean_T grmxdyohbg ( const real_T x [ 4 ] ) ; static void clfhrayx01 (
const real_T a [ 4 ] , real_T b , real_T c [ 4 ] ) ; static void ny353d4mdb (
const real_T A [ 4 ] , real_T A2 [ 4 ] , real_T A4 [ 4 ] , real_T A6 [ 4 ] ,
int32_T * m , real_T * s ) ; static void oxwesns2qv ( const real_T A [ 4 ] ,
real_T V [ 4 ] , real_T T [ 4 ] ) ; static void cmz30h31m5 ( real_T A [ 4 ] ,
real_T F [ 4 ] ) ; void frb52ryevs ( real_T rtp_IC , aqpkndaxav * localB ) {
localB -> i1rtqrd21n = rtp_IC ; } void gvoongqpzo ( oycks5i3te * localDW ) {
localDW -> flozbskedr = false ; } void pi2ok4w0z3 ( SimStruct * rtS_p ,
oycks5i3te * localDW ) { localDW -> flozbskedr = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void mfp3l0luim (
SimStruct * rtS_i , boolean_T dfkwj4xiq4 , real_T of3mkwktaa , aqpkndaxav *
localB , oycks5i3te * localDW ) { if ( ssIsSampleHit ( rtS_i , 1 , 0 ) &&
ssIsModeUpdateTimeStep ( rtS_i ) ) { if ( dfkwj4xiq4 ) { if ( ! localDW ->
flozbskedr ) { if ( ssGetTaskTime ( rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } localDW ->
flozbskedr = true ; } } else if ( localDW -> flozbskedr ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; gvoongqpzo ( localDW )
; } } if ( localDW -> flozbskedr ) { localB -> i1rtqrd21n = of3mkwktaa ; if (
ssIsModeUpdateTimeStep ( rtS_i ) ) { srUpdateBC ( localDW -> g1iyf3f52k ) ; }
} } static void eq130nkbpl ( const real_T a [ 4 ] , real_T b , real_T c [ 4 ]
) { __m128d tmp ; __m128d tmp_p ; real_T aBuffer [ 4 ] ; real_T b_a [ 4 ] ;
real_T cBuffer [ 4 ] ; real_T cBuffer_e [ 4 ] ; real_T cBuffer_p [ 4 ] ;
real_T y ; int32_T b_n ; int32_T n ; int32_T nb ; int32_T nbitson ; boolean_T
aBufferInUse ; boolean_T cBufferInUse ; boolean_T first ; if ( b == b ) { b_a
[ 0 ] = a [ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a [ 2 ] ; b_a [ 3 ] = a [
3 ] ; y = muDoubleScalarAbs ( b ) ; n = ( int32_T ) muDoubleScalarAbs ( b ) ;
b_n = ( int32_T ) y ; nbitson = 0 ; nb = - 2 ; while ( b_n > 0 ) { nb ++ ; if
( ( ( uint32_T ) b_n & 1U ) != 0U ) { nbitson ++ ; } b_n >>= 1 ; } if ( (
int32_T ) y <= 2 ) { if ( b == 2.0 ) { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { c
[ b_n << 1 ] = 0.0 ; c [ b_n << 1 ] += a [ b_n << 1 ] * a [ 0 ] ; c [ b_n <<
1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 2 ] ; c [ ( b_n << 1 ) + 1 ] = 0.0 ; c [
( b_n << 1 ) + 1 ] += a [ b_n << 1 ] * a [ 1 ] ; c [ ( b_n << 1 ) + 1 ] += a
[ ( b_n << 1 ) + 1 ] * a [ 3 ] ; } } else if ( b == 1.0 ) { c [ 0 ] = a [ 0 ]
; c [ 1 ] = a [ 1 ] ; c [ 2 ] = a [ 2 ] ; c [ 3 ] = a [ 3 ] ; } else { first
= false ; if ( muDoubleScalarIsNaN ( a [ 0 ] ) || muDoubleScalarIsNaN ( a [ 1
] ) ) { first = true ; } if ( first || muDoubleScalarIsNaN ( a [ 2 ] ) ) {
first = true ; } if ( first || muDoubleScalarIsNaN ( a [ 3 ] ) ) { first =
true ; } if ( first ) { c [ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ] =
( rtNaN ) ; c [ 3 ] = ( rtNaN ) ; } else { c [ 1 ] = 0.0 ; c [ 2 ] = 0.0 ; c
[ 0 ] = 1.0 ; c [ 3 ] = 1.0 ; } } } else { first = true ; aBufferInUse =
false ; cBufferInUse = ( ( ( uint32_T ) nbitson & 1U ) == 0U ) ; for (
nbitson = 0 ; nbitson <= nb ; nbitson ++ ) { if ( ( ( uint32_T ) n & 1U ) !=
0U ) { if ( first ) { first = false ; if ( cBufferInUse ) { if ( aBufferInUse
) { cBuffer [ 0 ] = aBuffer [ 0 ] ; cBuffer [ 1 ] = aBuffer [ 1 ] ; cBuffer [
2 ] = aBuffer [ 2 ] ; cBuffer [ 3 ] = aBuffer [ 3 ] ; } else { cBuffer [ 0 ]
= b_a [ 0 ] ; cBuffer [ 1 ] = b_a [ 1 ] ; cBuffer [ 2 ] = b_a [ 2 ] ; cBuffer
[ 3 ] = b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ;
c [ 1 ] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ;
} else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c
[ 3 ] = b_a [ 3 ] ; } } else { if ( aBufferInUse ) { if ( cBufferInUse ) {
for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] )
; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
aBuffer [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd
( 0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd (
& c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd (
& cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd
( aBuffer [ 3 ] ) ) , tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n
+= 2 ) { _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n
+ 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ]
) ) , tmp_p ) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 )
) ; tmp = _mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [
b_n + 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd (
& c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 3 ] ) ) , tmp_p ) ) ; } } } else if ( cBufferInUse )
{ for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] )
; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
b_a [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd (
0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( &
c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd
( b_a [ 3 ] ) ) , tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2
) { _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2
] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p
) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] )
; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2 ]
) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 3 ]
) ) , tmp_p ) ) ; } } cBufferInUse = ! cBufferInUse ; } } n >>= 1 ; if (
aBufferInUse ) { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( &
b_a [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n ]
) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n ] ) ; _mm_storeu_pd ( & b_a [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ;
tmp = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & b_a [
b_n ] ) ; _mm_storeu_pd ( & b_a [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & b_a [ b_n + 2
] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n ] ) ; tmp_p
= _mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; _mm_storeu_pd ( & b_a [ b_n + 2 ] ,
_mm_add_pd ( tmp_p , _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ;
tmp = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & b_a [
b_n + 2 ] ) ; _mm_storeu_pd ( & b_a [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd (
tmp , _mm_set1_pd ( aBuffer [ 3 ] ) ) , tmp_p ) ) ; } } else { for ( b_n = 0
; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & aBuffer [ b_n ] , _mm_set1_pd (
0.0 ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( &
aBuffer [ b_n ] ) ; _mm_storeu_pd ( & aBuffer [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n ]
) ; _mm_storeu_pd ( & aBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2
] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2
] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ;
tmp = _mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [
b_n + 2 ] ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd
( tmp , _mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } } aBufferInUse = !
aBufferInUse ; } for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { cBuffer_p [ b_n << 1 ]
= 0.0 ; cBuffer_e [ b_n << 1 ] = 0.0 ; cBuffer_p [ b_n << 1 ] += aBuffer [
b_n << 1 ] * cBuffer [ 0 ] ; cBuffer_e [ b_n << 1 ] += b_a [ b_n << 1 ] *
cBuffer [ 0 ] ; cBuffer_p [ b_n << 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] *
cBuffer [ 2 ] ; cBuffer_e [ b_n << 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer
[ 2 ] ; cBuffer_p [ ( b_n << 1 ) + 1 ] = 0.0 ; cBuffer_e [ ( b_n << 1 ) + 1 ]
= 0.0 ; cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ b_n << 1 ] * cBuffer [ 1
] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ b_n << 1 ] * cBuffer [ 1 ] ;
cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; } if ( first ) { if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [ 1 ]
= aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; } else
{ c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = cBuffer_p [ 0 ] ; c [ 1
] = cBuffer_p [ 1 ] ; c [ 2 ] = cBuffer_p [ 2 ] ; c [ 3 ] = cBuffer_p [ 3 ] ;
} else { c [ 0 ] = cBuffer_e [ 0 ] ; c [ 1 ] = cBuffer_e [ 1 ] ; c [ 2 ] =
cBuffer_e [ 2 ] ; c [ 3 ] = cBuffer_e [ 3 ] ; } } } } static boolean_T
grmxdyohbg ( const real_T x [ 4 ] ) { boolean_T b_p ; b_p = true ; if (
muDoubleScalarIsInf ( x [ 0 ] ) || muDoubleScalarIsNaN ( x [ 0 ] ) ) { b_p =
false ; } if ( b_p && ( ( ! muDoubleScalarIsInf ( x [ 1 ] ) ) && ( !
muDoubleScalarIsNaN ( x [ 1 ] ) ) ) ) { } else { b_p = false ; } if ( b_p &&
( ( ! muDoubleScalarIsInf ( x [ 2 ] ) ) && ( ! muDoubleScalarIsNaN ( x [ 2 ]
) ) ) ) { } else { b_p = false ; } if ( b_p && ( ( ! muDoubleScalarIsInf ( x
[ 3 ] ) ) && ( ! muDoubleScalarIsNaN ( x [ 3 ] ) ) ) ) { } else { b_p = false
; } return ! b_p ; } static void clfhrayx01 ( const real_T a [ 4 ] , real_T b
, real_T c [ 4 ] ) { __m128d tmp ; __m128d tmp_p ; real_T aBuffer [ 4 ] ;
real_T b_a [ 4 ] ; real_T cBuffer [ 4 ] ; real_T cBuffer_e [ 4 ] ; real_T
cBuffer_p [ 4 ] ; real_T e ; real_T ed2 ; int32_T b_n ; int32_T exitg1 ;
int32_T n ; int32_T nb ; int32_T nbitson ; boolean_T aBufferInUse ; boolean_T
cBufferInUse ; boolean_T firstmult ; if ( muDoubleScalarAbs ( b ) <=
2.147483647E+9 ) { b_a [ 0 ] = a [ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a
[ 2 ] ; b_a [ 3 ] = a [ 3 ] ; e = muDoubleScalarAbs ( b ) ; n = ( int32_T )
muDoubleScalarAbs ( b ) ; b_n = ( int32_T ) e ; nbitson = 0 ; nb = - 2 ;
while ( b_n > 0 ) { nb ++ ; if ( ( ( uint32_T ) b_n & 1U ) != 0U ) { nbitson
++ ; } b_n >>= 1 ; } if ( ( int32_T ) e <= 2 ) { if ( b == 2.0 ) { for ( b_n
= 0 ; b_n < 2 ; b_n ++ ) { c [ b_n << 1 ] = 0.0 ; c [ b_n << 1 ] += a [ b_n
<< 1 ] * a [ 0 ] ; c [ b_n << 1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 2 ] ; c [ (
b_n << 1 ) + 1 ] = 0.0 ; c [ ( b_n << 1 ) + 1 ] += a [ b_n << 1 ] * a [ 1 ] ;
c [ ( b_n << 1 ) + 1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 3 ] ; } } else {
firstmult = false ; if ( muDoubleScalarIsNaN ( a [ 0 ] ) ||
muDoubleScalarIsNaN ( a [ 1 ] ) ) { firstmult = true ; } if ( firstmult ||
muDoubleScalarIsNaN ( a [ 2 ] ) ) { firstmult = true ; } if ( firstmult ||
muDoubleScalarIsNaN ( a [ 3 ] ) ) { firstmult = true ; } if ( firstmult ) { c
[ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ] = ( rtNaN ) ; c [ 3 ] = (
rtNaN ) ; } else { c [ 1 ] = 0.0 ; c [ 2 ] = 0.0 ; c [ 0 ] = 1.0 ; c [ 3 ] =
1.0 ; } } } else { firstmult = true ; aBufferInUse = false ; cBufferInUse = (
( ( uint32_T ) nbitson & 1U ) == 0U ) ; for ( nbitson = 0 ; nbitson <= nb ;
nbitson ++ ) { if ( ( ( uint32_T ) n & 1U ) != 0U ) { if ( firstmult ) {
firstmult = false ; if ( cBufferInUse ) { if ( aBufferInUse ) { cBuffer [ 0 ]
= aBuffer [ 0 ] ; cBuffer [ 1 ] = aBuffer [ 1 ] ; cBuffer [ 2 ] = aBuffer [ 2
] ; cBuffer [ 3 ] = aBuffer [ 3 ] ; } else { cBuffer [ 0 ] = b_a [ 0 ] ;
cBuffer [ 1 ] = b_a [ 1 ] ; cBuffer [ 2 ] = b_a [ 2 ] ; cBuffer [ 3 ] = b_a [
3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [ 1 ] =
aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; } else {
c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; } } else { if ( aBufferInUse ) { if ( cBufferInUse ) { for ( b_n
= 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] , _mm_set1_pd ( 0.0
) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [
b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & cBuffer
[ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [
b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ] ) ) ,
tmp_p ) ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] )
; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n
+ 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 3 ] ) ) ,
tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd
( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & c [ b_n
] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 0 ] ) ) ,
tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( &
cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] )
; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & c [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [
3 ] ) ) , tmp_p ) ) ; } } } else if ( cBufferInUse ) { for ( b_n = 0 ; b_n <=
0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] ) ;
_mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd
( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n + 2 ]
) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n + 2
] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ;
} } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & c [ b_n ] ) ; tmp_p
= _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp
= _mm_loadu_pd ( & c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ]
) ; _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2
] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & c [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2
] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ;
tmp = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [
b_n + 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd
( tmp , _mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } } cBufferInUse = !
cBufferInUse ; } } n >>= 1 ; if ( aBufferInUse ) { for ( b_n = 0 ; b_n <= 0 ;
b_n += 2 ) { _mm_storeu_pd ( & b_a [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & aBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n ] ) ;
_mm_storeu_pd ( & b_a [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] )
; tmp_p = _mm_loadu_pd ( & b_a [ b_n ] ) ; _mm_storeu_pd ( & b_a [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & b_a [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & aBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n + 2 ]
) ; _mm_storeu_pd ( & b_a [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp
, _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n
+ 2 ] ) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; _mm_storeu_pd ( & b_a
[ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 3 ] ) )
, tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) {
_mm_storeu_pd ( & aBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n ] ) ;
_mm_storeu_pd ( & aBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n ] ) ; _mm_storeu_pd ( &
aBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) )
, tmp_p ) ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ;
tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n
+ 2 ] ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ;
_mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } } aBufferInUse = ! aBufferInUse ;
} for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { cBuffer_p [ b_n << 1 ] = 0.0 ;
cBuffer_e [ b_n << 1 ] = 0.0 ; cBuffer_p [ b_n << 1 ] += aBuffer [ b_n << 1 ]
* cBuffer [ 0 ] ; cBuffer_e [ b_n << 1 ] += b_a [ b_n << 1 ] * cBuffer [ 0 ]
; cBuffer_p [ b_n << 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] * cBuffer [ 2 ] ;
cBuffer_e [ b_n << 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer [ 2 ] ;
cBuffer_p [ ( b_n << 1 ) + 1 ] = 0.0 ; cBuffer_e [ ( b_n << 1 ) + 1 ] = 0.0 ;
cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ b_n << 1 ] * cBuffer [ 1 ] ;
cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ b_n << 1 ] * cBuffer [ 1 ] ;
cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; } if ( firstmult ) { if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [
1 ] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; }
else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [
3 ] = b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = cBuffer_p [ 0 ] ;
c [ 1 ] = cBuffer_p [ 1 ] ; c [ 2 ] = cBuffer_p [ 2 ] ; c [ 3 ] = cBuffer_p [
3 ] ; } else { c [ 0 ] = cBuffer_e [ 0 ] ; c [ 1 ] = cBuffer_e [ 1 ] ; c [ 2
] = cBuffer_e [ 2 ] ; c [ 3 ] = cBuffer_e [ 3 ] ; } } } else { b_a [ 0 ] = a
[ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a [ 2 ] ; b_a [ 3 ] = a [ 3 ] ; if
( ( ! muDoubleScalarIsInf ( b ) ) && ( ! muDoubleScalarIsNaN ( b ) ) ) { e =
muDoubleScalarAbs ( b ) ; firstmult = true ; do { exitg1 = 0 ; ed2 =
muDoubleScalarFloor ( e / 2.0 ) ; if ( 2.0 * ed2 != e ) { if ( firstmult ) {
c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; firstmult = false ; } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2
) { _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2
] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p
) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] )
; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2 ]
) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 3 ]
) ) , tmp_p ) ) ; } c [ 0 ] = cBuffer [ 0 ] ; c [ 1 ] = cBuffer [ 1 ] ; c [ 2
] = cBuffer [ 2 ] ; c [ 3 ] = cBuffer [ 3 ] ; } } if ( ed2 == 0.0 ) { exitg1
= 1 ; } else { e = ed2 ; for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) {
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) )
, tmp_p ) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ;
tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n
+ 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } b_a [ 0 ] = cBuffer [ 0 ] ; b_a [
1 ] = cBuffer [ 1 ] ; b_a [ 2 ] = cBuffer [ 2 ] ; b_a [ 3 ] = cBuffer [ 3 ] ;
} } while ( exitg1 == 0 ) ; } else { c [ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN
) ; c [ 2 ] = ( rtNaN ) ; c [ 3 ] = ( rtNaN ) ; } } } static void ny353d4mdb
( const real_T A [ 4 ] , real_T A2 [ 4 ] , real_T A4 [ 4 ] , real_T A6 [ 4 ]
, int32_T * m , real_T * s ) { __m128d tmp ; __m128d tmp_p ; real_T A4_p [ 4
] ; real_T T [ 4 ] ; real_T tmp_e [ 4 ] ; real_T d6 ; real_T eta1 ; int32_T
b_s ; int32_T i ; boolean_T guard1 = false ; boolean_T guard2 = false ;
boolean_T guard3 = false ; boolean_T guard4 = false ; * s = 0.0 ; for ( i = 0
; i < 2 ; i ++ ) { A2 [ i << 1 ] = 0.0 ; A2 [ i << 1 ] += A [ i << 1 ] * A [
0 ] ; A2 [ i << 1 ] += A [ ( i << 1 ) + 1 ] * A [ 2 ] ; A2 [ ( i << 1 ) + 1 ]
= 0.0 ; A2 [ ( i << 1 ) + 1 ] += A [ i << 1 ] * A [ 1 ] ; A2 [ ( i << 1 ) + 1
] += A [ ( i << 1 ) + 1 ] * A [ 3 ] ; } for ( i = 0 ; i <= 0 ; i += 2 ) {
_mm_storeu_pd ( & A4 [ i ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( &
A2 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i ] ) ; _mm_storeu_pd ( & A4 [ i ]
, _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 0 ] ) ) , tmp_p ) ) ;
tmp = _mm_loadu_pd ( & A2 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i ] ) ;
_mm_storeu_pd ( & A4 [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2
[ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & A4 [ i + 2 ] , _mm_set1_pd ( 0.0 )
) ; tmp = _mm_loadu_pd ( & A2 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i + 2 ]
) ; _mm_storeu_pd ( & A4 [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( A2 [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & A2 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & A4 [ i + 2 ] ) ; _mm_storeu_pd ( & A4 [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 3 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & A6 [ i ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( &
A4 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ; _mm_storeu_pd ( & A6 [ i ]
, _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 0 ] ) ) , tmp_p ) ) ;
tmp = _mm_loadu_pd ( & A4 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ;
_mm_storeu_pd ( & A6 [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2
[ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & A6 [ i + 2 ] , _mm_set1_pd ( 0.0 )
) ; tmp = _mm_loadu_pd ( & A4 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i + 2 ]
) ; _mm_storeu_pd ( & A6 [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( A2 [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & A4 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & A6 [ i + 2 ] ) ; _mm_storeu_pd ( & A6 [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 3 ] ) ) , tmp_p ) ) ; } d6
= muDoubleScalarPower ( norm_CF3EtBNC ( A6 ) , 0.16666666666666666 ) ; eta1 =
muDoubleScalarMax ( muDoubleScalarPower ( norm_CF3EtBNC ( A4 ) , 0.25 ) , d6
) ; guard1 = false ; guard2 = false ; guard3 = false ; guard4 = false ; if (
eta1 <= 0.01495585217958292 ) { A4_p [ 0 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 3 ] ) ; clfhrayx01 ( A4_p , 7.0 , tmp_e ) ; if (
muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL ( norm_CF3EtBNC (
tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 / 2.2204460492503131E-16 ) / 6.0 ) , 0.0
) == 0.0 ) { * m = 3 ; } else { guard4 = true ; } } else { guard4 = true ; }
if ( guard4 ) { if ( eta1 <= 0.253939833006323 ) { A4_p [ 0 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 3 ] ) ; clfhrayx01 ( A4_p ,
11.0 , tmp_e ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL
( norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 /
2.2204460492503131E-16 ) / 10.0 ) , 0.0 ) == 0.0 ) { * m = 5 ; } else {
guard3 = true ; } } else { guard3 = true ; } } if ( guard3 ) { clfhrayx01 (
A4 , 2.0 , tmp_e ) ; eta1 = muDoubleScalarPower ( norm_CF3EtBNC ( tmp_e ) ,
0.125 ) ; d6 = muDoubleScalarMax ( d6 , eta1 ) ; if ( d6 <=
0.95041789961629319 ) { A4_p [ 0 ] = 0.090475336558796943 * muDoubleScalarAbs
( A [ 0 ] ) ; A4_p [ 1 ] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 1 ]
) ; A4_p [ 2 ] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p
[ 3 ] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 3 ] ) ; clfhrayx01 (
A4_p , 15.0 , tmp_e ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil (
log2_DgASG5hL ( norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 /
2.2204460492503131E-16 ) / 14.0 ) , 0.0 ) == 0.0 ) { * m = 7 ; } else {
guard2 = true ; } } else { guard2 = true ; } } if ( guard2 ) { if ( d6 <=
2.097847961257068 ) { A4_p [ 0 ] = 0.071467735648795785 * muDoubleScalarAbs (
A [ 0 ] ) ; A4_p [ 1 ] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 1 ] )
; A4_p [ 2 ] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [
3 ] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 3 ] ) ; clfhrayx01 (
A4_p , 19.0 , tmp_e ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil (
log2_DgASG5hL ( norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 /
2.2204460492503131E-16 ) / 18.0 ) , 0.0 ) == 0.0 ) { * m = 9 ; } else {
guard1 = true ; } } else { guard1 = true ; } } if ( guard1 ) { for ( i = 0 ;
i < 2 ; i ++ ) { A4_p [ i << 1 ] = 0.0 ; A4_p [ i << 1 ] += A6 [ i << 1 ] *
A4 [ 0 ] ; A4_p [ i << 1 ] += A6 [ ( i << 1 ) + 1 ] * A4 [ 2 ] ; A4_p [ ( i
<< 1 ) + 1 ] = 0.0 ; A4_p [ ( i << 1 ) + 1 ] += A6 [ i << 1 ] * A4 [ 1 ] ;
A4_p [ ( i << 1 ) + 1 ] += A6 [ ( i << 1 ) + 1 ] * A4 [ 3 ] ; } * s =
muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL ( muDoubleScalarMin (
d6 , muDoubleScalarMax ( eta1 , muDoubleScalarPower ( norm_CF3EtBNC ( A4_p )
, 0.1 ) ) ) / 5.3719203511481517 ) ) , 0.0 ) ; d6 = muDoubleScalarPower ( 2.0
, * s ) ; eta1 = A [ 0 ] / d6 ; A4_p [ 0 ] = 0.05031554467093536 *
muDoubleScalarAbs ( eta1 ) ; T [ 0 ] = eta1 ; eta1 = A [ 1 ] / d6 ; A4_p [ 1
] = 0.05031554467093536 * muDoubleScalarAbs ( eta1 ) ; T [ 1 ] = eta1 ; eta1
= A [ 2 ] / d6 ; A4_p [ 2 ] = 0.05031554467093536 * muDoubleScalarAbs ( eta1
) ; T [ 2 ] = eta1 ; eta1 = A [ 3 ] / d6 ; A4_p [ 3 ] = 0.05031554467093536 *
muDoubleScalarAbs ( eta1 ) ; T [ 3 ] = eta1 ; clfhrayx01 ( A4_p , 27.0 ,
tmp_e ) ; * s += muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( T ) * 2.0 / 2.2204460492503131E-16
) / 26.0 ) , 0.0 ) ; if ( muDoubleScalarIsInf ( * s ) ) { d6 = norm_CF3EtBNC
( A ) / 5.3719203511481517 ; if ( ( ! muDoubleScalarIsInf ( d6 ) ) && ( !
muDoubleScalarIsNaN ( d6 ) ) ) { d6 = frexp ( d6 , & b_s ) ; } else { b_s = 0
; } * s = b_s ; if ( d6 == 0.5 ) { * s = ( real_T ) b_s - 1.0 ; } } * m = 13
; } } static void oxwesns2qv ( const real_T A [ 4 ] , real_T V [ 4 ] , real_T
T [ 4 ] ) { if ( grmxdyohbg ( A ) ) { V [ 0 ] = ( rtNaN ) ; V [ 2 ] = ( rtNaN
) ; V [ 3 ] = ( rtNaN ) ; V [ 1 ] = 0.0 ; T [ 0 ] = ( rtNaN ) ; T [ 1 ] = (
rtNaN ) ; T [ 2 ] = ( rtNaN ) ; T [ 3 ] = ( rtNaN ) ; } else { T [ 0 ] = A [
0 ] ; T [ 2 ] = A [ 2 ] ; T [ 3 ] = A [ 3 ] ; T [ 1 ] = A [ 1 ] ; V [ 2 ] =
0.0 ; V [ 1 ] = 0.0 ; V [ 0 ] = 1.0 ; V [ 3 ] = 1.0 ; xhseqr_H6eRN0gF ( T , V
) ; } } static void cmz30h31m5 ( real_T A [ 4 ] , real_T F [ 4 ] ) { __m128d
tmp ; __m128d tmp_e ; __m128d tmp_p ; real_T A2 [ 4 ] ; real_T A4 [ 4 ] ;
real_T A6 [ 4 ] ; real_T A6_p [ 4 ] ; real_T U [ 4 ] ; real_T V [ 4 ] ;
real_T A6_idx_2 ; real_T A6_idx_3 ; real_T a22 ; real_T d ; real_T exptj ;
int32_T blockFormat ; int32_T exitg1 ; int32_T i ; int32_T r1 ; int32_T r2 ;
boolean_T exitg2 ; boolean_T recomputeDiags ; if ( grmxdyohbg ( A ) ) { F [ 0
] = ( rtNaN ) ; F [ 1 ] = ( rtNaN ) ; F [ 2 ] = ( rtNaN ) ; F [ 3 ] = ( rtNaN
) ; } else { recomputeDiags = true ; blockFormat = 0 ; exitg2 = false ; while
( ( ! exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0 ; do { exitg1 = 0 ; if ( r1
< 2 ) { if ( ( r1 != blockFormat ) && ( ! ( A [ ( blockFormat << 1 ) + r1 ]
== 0.0 ) ) ) { recomputeDiags = false ; exitg1 = 1 ; } else { r1 ++ ; } }
else { blockFormat ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1
== 1 ) { exitg2 = true ; } } if ( recomputeDiags ) { F [ 1 ] = 0.0 ; F [ 2 ]
= 0.0 ; F [ 0 ] = muDoubleScalarExp ( A [ 0 ] ) ; F [ 3 ] = muDoubleScalarExp
( A [ 3 ] ) ; } else { recomputeDiags = true ; blockFormat = 0 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0 ; do { exitg1
= 0 ; if ( r1 <= blockFormat ) { if ( ! ( A [ ( blockFormat << 1 ) + r1 ] ==
A [ ( r1 << 1 ) + blockFormat ] ) ) { recomputeDiags = false ; exitg1 = 1 ; }
else { r1 ++ ; } } else { blockFormat ++ ; exitg1 = 2 ; } } while ( exitg1 ==
0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } if ( recomputeDiags ) {
oxwesns2qv ( A , A4 , A2 ) ; exptj = muDoubleScalarExp ( A2 [ 0 ] ) ; A6 [ 0
] = A4 [ 0 ] * exptj ; A6 [ 1 ] = A4 [ 1 ] * exptj ; exptj =
muDoubleScalarExp ( A2 [ 3 ] ) ; A6 [ 2 ] = A4 [ 2 ] * exptj ; A6 [ 3 ] = A4
[ 3 ] * exptj ; for ( i = 0 ; i <= 0 ; i += 2 ) { _mm_storeu_pd ( & F [ i ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_p =
_mm_loadu_pd ( & F [ i ] ) ; _mm_storeu_pd ( & F [ i ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( A4 [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & A6 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & F [ i ] ) ;
_mm_storeu_pd ( & F [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A4
[ 2 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & F [ i + 2 ] , _mm_set1_pd ( 0.0 ) )
; tmp = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_p = _mm_loadu_pd ( & F [ i + 2 ] )
; _mm_storeu_pd ( & F [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( A4 [ 1 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & A6 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & F [ i + 2 ] ) ; _mm_storeu_pd ( & F [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A4 [ 3 ] ) ) , tmp_p ) ) ; }
exptj = ( F [ 1 ] + F [ 2 ] ) / 2.0 ; F [ 3 ] = ( F [ 3 ] + F [ 3 ] ) / 2.0 ;
F [ 0 ] = ( F [ 0 ] + F [ 0 ] ) / 2.0 ; F [ 1 ] = ( F [ 1 ] + F [ 2 ] ) / 2.0
; F [ 2 ] = exptj ; } else { recomputeDiags = true ; if ( ( A [ 1 ] != 0.0 )
&& ( ( A [ 0 ] != A [ 3 ] ) || ( muDoubleScalarSign ( A [ 1 ] ) *
muDoubleScalarSign ( A [ 2 ] ) != - 1.0 ) ) ) { recomputeDiags = false ; }
ny353d4mdb ( A , A2 , A4 , A6 , & r1 , & exptj ) ; if ( exptj != 0.0 ) { d =
muDoubleScalarPower ( 2.0 , exptj ) ; A [ 0 ] /= d ; A [ 1 ] /= d ; A [ 2 ]
/= d ; A [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 2.0 * exptj ) ; A2 [ 0
] /= d ; A2 [ 1 ] /= d ; A2 [ 2 ] /= d ; A2 [ 3 ] /= d ; d =
muDoubleScalarPower ( 2.0 , 4.0 * exptj ) ; A4 [ 0 ] /= d ; A4 [ 1 ] /= d ;
A4 [ 2 ] /= d ; A4 [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 6.0 * exptj )
; A6 [ 0 ] /= d ; A6 [ 1 ] /= d ; A6 [ 2 ] /= d ; A6 [ 3 ] /= d ; } if (
recomputeDiags ) { if ( A [ 1 ] == 0.0 ) { blockFormat = 1 ; } else {
blockFormat = 2 ; } } if ( r1 == 3 ) { U [ 1 ] = A2 [ 1 ] ; U [ 2 ] = A2 [ 2
] ; U [ 0 ] = A2 [ 0 ] + 60.0 ; U [ 3 ] = A2 [ 3 ] + 60.0 ; for ( i = 0 ; i <
2 ; i ++ ) { A6_p [ i << 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0
] ; A6_p [ i << 1 ] += U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1
] = 0.0 ; A6_p [ ( i << 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1
) + 1 ] += U [ ( i << 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ]
= 12.0 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 12.0 * A2 [ 1 ] ; U [ 2
] = A6_p [ 2 ] ; V [ 2 ] = 12.0 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] =
12.0 * A2 [ 3 ] ; d = 120.0 ; } else if ( r1 == 5 ) { U [ 0 ] = 420.0 * A2 [
0 ] + A4 [ 0 ] ; U [ 1 ] = 420.0 * A2 [ 1 ] + A4 [ 1 ] ; U [ 2 ] = 420.0 * A2
[ 2 ] + A4 [ 2 ] ; U [ 3 ] = 420.0 * A2 [ 3 ] + A4 [ 3 ] ; U [ 0 ] += 15120.0
; U [ 3 ] += 15120.0 ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i << 1 ] = 0.0 ;
A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i << 1 ] += U [ ( i << 1 )
+ 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ; A6_p [ ( i << 1 ) + 1 ] +=
U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ] += U [ ( i << 1 ) + 1 ] * A
[ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = 30.0 * A4 [ 0 ] + 3360.0 * A2 [ 0
] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 30.0 * A4 [ 1 ] + 3360.0 * A2 [ 1 ] ; U
[ 2 ] = A6_p [ 2 ] ; V [ 2 ] = 30.0 * A4 [ 2 ] + 3360.0 * A2 [ 2 ] ; U [ 3 ]
= A6_p [ 3 ] ; V [ 3 ] = 30.0 * A4 [ 3 ] + 3360.0 * A2 [ 3 ] ; d = 30240.0 ;
} else if ( r1 == 7 ) { U [ 0 ] = ( 1512.0 * A4 [ 0 ] + A6 [ 0 ] ) + 277200.0
* A2 [ 0 ] ; U [ 1 ] = ( 1512.0 * A4 [ 1 ] + A6 [ 1 ] ) + 277200.0 * A2 [ 1 ]
; U [ 2 ] = ( 1512.0 * A4 [ 2 ] + A6 [ 2 ] ) + 277200.0 * A2 [ 2 ] ; U [ 3 ]
= ( 1512.0 * A4 [ 3 ] + A6 [ 3 ] ) + 277200.0 * A2 [ 3 ] ; U [ 0 ] +=
8.64864E+6 ; U [ 3 ] += 8.64864E+6 ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i
<< 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i << 1 ] +=
U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ; A6_p [ ( i
<< 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ] += U [ ( i
<< 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = ( 56.0 * A6 [ 0 ]
+ 25200.0 * A4 [ 0 ] ) + 1.99584E+6 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1
] = ( 56.0 * A6 [ 1 ] + 25200.0 * A4 [ 1 ] ) + 1.99584E+6 * A2 [ 1 ] ; U [ 2
] = A6_p [ 2 ] ; V [ 2 ] = ( 56.0 * A6 [ 2 ] + 25200.0 * A4 [ 2 ] ) +
1.99584E+6 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] = ( 56.0 * A6 [ 3 ] +
25200.0 * A4 [ 3 ] ) + 1.99584E+6 * A2 [ 3 ] ; d = 1.729728E+7 ; } else if (
r1 == 9 ) { for ( i = 0 ; i < 2 ; i ++ ) { V [ i << 1 ] = 0.0 ; V [ i << 1 ]
+= A2 [ i << 1 ] * A6 [ 0 ] ; V [ i << 1 ] += A2 [ ( i << 1 ) + 1 ] * A6 [ 2
] ; V [ ( i << 1 ) + 1 ] = 0.0 ; V [ ( i << 1 ) + 1 ] += A2 [ i << 1 ] * A6 [
1 ] ; V [ ( i << 1 ) + 1 ] += A2 [ ( i << 1 ) + 1 ] * A6 [ 3 ] ; } U [ 0 ] =
( ( 3960.0 * A6 [ 0 ] + V [ 0 ] ) + 2.16216E+6 * A4 [ 0 ] ) + 3.027024E+8 *
A2 [ 0 ] ; U [ 1 ] = ( ( 3960.0 * A6 [ 1 ] + V [ 1 ] ) + 2.16216E+6 * A4 [ 1
] ) + 3.027024E+8 * A2 [ 1 ] ; U [ 2 ] = ( ( 3960.0 * A6 [ 2 ] + V [ 2 ] ) +
2.16216E+6 * A4 [ 2 ] ) + 3.027024E+8 * A2 [ 2 ] ; U [ 3 ] = ( ( 3960.0 * A6
[ 3 ] + V [ 3 ] ) + 2.16216E+6 * A4 [ 3 ] ) + 3.027024E+8 * A2 [ 3 ] ; U [ 0
] += 8.8216128E+9 ; U [ 3 ] += 8.8216128E+9 ; for ( i = 0 ; i < 2 ; i ++ ) {
A6_p [ i << 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i
<< 1 ] += U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ;
A6_p [ ( i << 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ]
+= U [ ( i << 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = ( (
90.0 * V [ 0 ] + 110880.0 * A6 [ 0 ] ) + 3.027024E+7 * A4 [ 0 ] ) +
2.0756736E+9 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = ( ( 90.0 * V [ 1 ]
+ 110880.0 * A6 [ 1 ] ) + 3.027024E+7 * A4 [ 1 ] ) + 2.0756736E+9 * A2 [ 1 ]
; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = ( ( 90.0 * V [ 2 ] + 110880.0 * A6 [ 2 ] )
+ 3.027024E+7 * A4 [ 2 ] ) + 2.0756736E+9 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ;
V [ 3 ] = ( ( 90.0 * V [ 3 ] + 110880.0 * A6 [ 3 ] ) + 3.027024E+7 * A4 [ 3 ]
) + 2.0756736E+9 * A2 [ 3 ] ; d = 1.76432256E+10 ; } else { U [ 0 ] = (
3.352212864E+10 * A6 [ 0 ] + 1.05594705216E+13 * A4 [ 0 ] ) +
1.1873537964288E+15 * A2 [ 0 ] ; U [ 1 ] = ( 3.352212864E+10 * A6 [ 1 ] +
1.05594705216E+13 * A4 [ 1 ] ) + 1.1873537964288E+15 * A2 [ 1 ] ; U [ 2 ] = (
3.352212864E+10 * A6 [ 2 ] + 1.05594705216E+13 * A4 [ 2 ] ) +
1.1873537964288E+15 * A2 [ 2 ] ; U [ 3 ] = ( 3.352212864E+10 * A6 [ 3 ] +
1.05594705216E+13 * A4 [ 3 ] ) + 1.1873537964288E+15 * A2 [ 3 ] ; U [ 0 ] +=
3.238237626624E+16 ; U [ 3 ] += 3.238237626624E+16 ; d = ( 16380.0 * A4 [ 0 ]
+ A6 [ 0 ] ) + 4.08408E+7 * A2 [ 0 ] ; a22 = ( 16380.0 * A4 [ 1 ] + A6 [ 1 ]
) + 4.08408E+7 * A2 [ 1 ] ; A6_idx_2 = ( 16380.0 * A4 [ 2 ] + A6 [ 2 ] ) +
4.08408E+7 * A2 [ 2 ] ; A6_idx_3 = ( 16380.0 * A4 [ 3 ] + A6 [ 3 ] ) +
4.08408E+7 * A2 [ 3 ] ; for ( i = 0 ; i <= 0 ; i += 2 ) { tmp = _mm_loadu_pd
( & A6 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_e =
_mm_loadu_pd ( & U [ i ] ) ; _mm_storeu_pd ( & A6_p [ i ] , _mm_add_pd (
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( a22 ) ) , _mm_mul_pd ( tmp_p ,
_mm_set1_pd ( d ) ) ) , tmp_e ) ) ; tmp = _mm_loadu_pd ( & A6 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_e = _mm_loadu_pd ( & U [ i + 2 ] )
; _mm_storeu_pd ( & A6_p [ i + 2 ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd (
tmp , _mm_set1_pd ( A6_idx_3 ) ) , _mm_mul_pd ( tmp_p , _mm_set1_pd (
A6_idx_2 ) ) ) , tmp_e ) ) ; } d = ( 182.0 * A6 [ 0 ] + 960960.0 * A4 [ 0 ] )
+ 1.32324192E+9 * A2 [ 0 ] ; a22 = ( 182.0 * A6 [ 1 ] + 960960.0 * A4 [ 1 ] )
+ 1.32324192E+9 * A2 [ 1 ] ; A6_idx_2 = ( 182.0 * A6 [ 2 ] + 960960.0 * A4 [
2 ] ) + 1.32324192E+9 * A2 [ 2 ] ; A6_idx_3 = ( 182.0 * A6 [ 3 ] + 960960.0 *
A4 [ 3 ] ) + 1.32324192E+9 * A2 [ 3 ] ; for ( i = 0 ; i < 2 ; i ++ ) { U [ i
<< 1 ] = 0.0 ; U [ i << 1 ] += A6_p [ i << 1 ] * A [ 0 ] ; U [ i << 1 ] +=
A6_p [ ( i << 1 ) + 1 ] * A [ 2 ] ; U [ ( i << 1 ) + 1 ] = 0.0 ; U [ ( i << 1
) + 1 ] += A6_p [ i << 1 ] * A [ 1 ] ; U [ ( i << 1 ) + 1 ] += A6_p [ ( i <<
1 ) + 1 ] * A [ 3 ] ; V [ i ] = ( ( ( A6 [ i + 2 ] * a22 + A6 [ i ] * d ) +
6.704425728E+11 * A6 [ i ] ) + 1.29060195264E+14 * A4 [ i ] ) +
7.7717703038976E+15 * A2 [ i ] ; V [ i + 2 ] = ( ( ( A6 [ i + 2 ] * A6_idx_3
+ A6 [ i ] * A6_idx_2 ) + A6 [ i + 2 ] * 6.704425728E+11 ) + A4 [ i + 2 ] *
1.29060195264E+14 ) + A2 [ i + 2 ] * 7.7717703038976E+15 ; } d =
6.476475253248E+16 ; } V [ 0 ] += d ; V [ 0 ] -= U [ 0 ] ; U [ 0 ] *= 2.0 ; V
[ 1 ] -= U [ 1 ] ; U [ 1 ] *= 2.0 ; V [ 2 ] -= U [ 2 ] ; U [ 2 ] *= 2.0 ; V [
3 ] = ( V [ 3 ] + d ) - U [ 3 ] ; U [ 3 ] *= 2.0 ; if ( muDoubleScalarAbs ( V
[ 1 ] ) > muDoubleScalarAbs ( V [ 0 ] ) ) { r1 = 1 ; r2 = 0 ; } else { r1 = 0
; r2 = 1 ; } d = V [ r2 ] / V [ r1 ] ; a22 = V [ r2 + 2 ] - V [ r1 + 2 ] * d
; F [ 1 ] = ( U [ r2 ] - U [ r1 ] * d ) / a22 ; F [ 0 ] = ( U [ r1 ] - V [ r1
+ 2 ] * F [ 1 ] ) / V [ r1 ] ; F [ 3 ] = ( U [ r2 + 2 ] - U [ r1 + 2 ] * d )
/ a22 ; F [ 2 ] = ( U [ r1 + 2 ] - V [ r1 + 2 ] * F [ 3 ] ) / V [ r1 ] ; F [
0 ] ++ ; F [ 3 ] ++ ; if ( recomputeDiags ) { recomputeBlockDiag_gs6kEciD ( A
, F , blockFormat ) ; } r1 = ( int32_T ) exptj ; for ( r2 = 0 ; r2 < r1 ; r2
++ ) { for ( i = 0 ; i <= 0 ; i += 2 ) { _mm_storeu_pd ( & A4 [ i ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & F [ i ] ) ; tmp_p =
_mm_loadu_pd ( & A4 [ i ] ) ; _mm_storeu_pd ( & A4 [ i ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( F [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd
( & F [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i ] ) ; _mm_storeu_pd ( &
A4 [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( F [ 1 ] ) ) , tmp_p
) ) ; _mm_storeu_pd ( & A4 [ i + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & F [ i ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i + 2 ] ) ;
_mm_storeu_pd ( & A4 [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( F [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & F [ i + 2 ] ) ; tmp_p
= _mm_loadu_pd ( & A4 [ i + 2 ] ) ; _mm_storeu_pd ( & A4 [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( F [ 3 ] ) ) , tmp_p ) ) ; } F [
0 ] = A4 [ 0 ] ; F [ 1 ] = A4 [ 1 ] ; F [ 2 ] = A4 [ 2 ] ; F [ 3 ] = A4 [ 3 ]
; if ( recomputeDiags ) { A [ 0 ] *= 2.0 ; A [ 1 ] *= 2.0 ; A [ 2 ] *= 2.0 ;
A [ 3 ] *= 2.0 ; recomputeBlockDiag_gs6kEciD ( A , F , blockFormat ) ; } } }
} } } void MdlInitialize ( void ) { gtrdqgpqkfx . gstwyn3q5a = 0.0 ;
lw0sy0o11jr . kvonjsymh5 = ( rtInf ) ; lw0sy0o11jr . dsvgzsahab = bo1z0vnccp
. FirstOrderHold_IniOut ; lw0sy0o11jr . am1tetzj4p = ( rtInf ) ; lw0sy0o11jr
. iw5r3fihha = 0.0 ; lw0sy0o11jr . hfmbz1d5vw = ( rtInf ) ; lw0sy0o11jr .
cd2xpetkh4 = bo1z0vnccp . FirstOrderHold_IniOut_ign3oxg5f1 ; lw0sy0o11jr .
cm5tdkgoya = ( rtInf ) ; lw0sy0o11jr . bo4hodedpa = 0.0 ; lw0sy0o11jr .
bkuu3yyjsl = ( rtInf ) ; lw0sy0o11jr . nez5k4mt2q = bo1z0vnccp .
FirstOrderHold1_IniOut ; lw0sy0o11jr . evm1loz2xr = ( rtInf ) ; lw0sy0o11jr .
eyagulv3eu = 0.0 ; gtrdqgpqkfx . ksul3xbf4x = bo1z0vnccp . Integrator_IC ;
gtrdqgpqkfx . mbchhank0o = bo1z0vnccp . Integrator1_IC ; lw0sy0o11jr .
mgx323pfpy = ( rtInf ) ; lw0sy0o11jr . naf5zf5ewa = ( rtInf ) ; gtrdqgpqkfx .
k335v0wdxu = bo1z0vnccp . Integrator1_IC_ajivek24xs ; gtrdqgpqkfx .
pq24pxcnro = bo1z0vnccp . Integrator2_IC ; lw0sy0o11jr . mumtw2t4fy [ 0 ] =
bo1z0vnccp . UnitDelay_InitialCondition [ 0 ] ; lw0sy0o11jr . mumtw2t4fy [ 1
] = bo1z0vnccp . UnitDelay_InitialCondition [ 1 ] ; eqyc2wn3m1 ( & (
lw0sy0o11jr . jkb4b3hcqy . rtm ) , & ( lw0sy0o11jr . jkb4b3hcqy . rtb ) , & (
lw0sy0o11jr . jkb4b3hcqy . rtdw ) , & ( gtrdqgpqkfx . ietjokded4 ) ) ;
k5nsrx2akm ( & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) ) ; frb52ryevs (
bo1z0vnccp . SignalHold_IC , & arol2xwgeua . mfp3l0luimk ) ; frb52ryevs (
bo1z0vnccp . SignalHold_IC_k5etbcnmrh , & arol2xwgeua . dxcv00k5uk ) ;
lw0sy0o11jr . ahou0vl2z3 = - 1 ; lw0sy0o11jr . draduovrmv = 0U ; lw0sy0o11jr
. nmxkq34d03 = crzhigcaqo ; lw0sy0o11jr . lddh2eciz1 = 0.0 ; lw0sy0o11jr .
mbvoiiw20z = 0U ; lw0sy0o11jr . pn5h0qud2t = 0.0 ; arol2xwgeua . dcnebbmssf =
0.0 ; lw0sy0o11jr . bsds3pyzel = 0.0 ; lw0sy0o11jr . cuuxgkcmrh = 0.0 ;
lw0sy0o11jr . jx2b1t4erw = 0.0 ; dyjn3zzpfq ( & arol2xwgeua . byu4dnscl5 , &
( lw0sy0o11jr . jfaeol5er3 . rtdw ) ) ; { int_T rootPeriodicContStateIndices
[ 1 ] = { 7 } ; real_T rootPeriodicContStateRanges [ 2 ] = { -
3.1415926535897931 , 3.1415926535897931 } ; ( void ) memcpy ( ( void * )
m44wadfesjn , rootPeriodicContStateIndices , 1 * sizeof ( int_T ) ) ; ( void
) memcpy ( ( void * ) gag0esqvheg , rootPeriodicContStateRanges , 2 * sizeof
( real_T ) ) ; } { static int_T modelMassMatrixIr [ 129 ] = { 0 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20
, 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 ,
36 , 37 , 38 , 39 , 40 , 41 , 42 , 44 , 84 , 85 , 87 , 86 , 88 , 89 , 91 , 90
, 49 , 50 , 52 , 51 , 53 , 54 , 56 , 55 , 43 , 45 , 46 , 45 , 47 , 48 , 49 ,
53 , 57 , 58 , 59 , 60 , 59 , 60 , 61 , 62 , 61 , 62 , 63 , 64 , 65 , 64 , 67
, 66 , 68 , 69 , 68 , 71 , 70 , 72 , 73 , 72 , 74 , 75 , 76 , 76 , 77 , 79 ,
78 , 80 , 81 , 83 , 82 , 80 , 84 , 88 , 92 , 93 , 95 , 94 , 92 , 96 , 97 , 96
, 98 , 99 , 101 , 517 , 100 , 518 , 519 , 520 , 521 , 522 , 523 , 524 , 525 ,
526 , 527 } ; static int_T modelMassMatrixJc [ 529 ] = { 0 , 1 , 2 , 3 , 4 ,
5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21
, 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 ,
37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 46 , 47 , 48 , 50 , 51 , 52 , 54 , 55
, 56 , 58 , 59 , 60 , 61 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 72 , 74 ,
76 , 78 , 79 , 81 , 82 , 83 , 84 , 86 , 87 , 88 , 89 , 91 , 92 , 93 , 94 , 95
, 97 , 98 , 99 , 101 , 102 , 103 , 104 , 105 , 106 , 108 , 109 , 110 , 111 ,
113 , 114 , 115 , 116 , 118 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 , 119 ,
119 , 119 , 119 , 119 , 119 , 119 , 120 , 121 , 122 , 123 , 124 , 125 , 126 ,
127 , 128 , 129 } ; static real_T modelMassMatrixPr [ 129 ] = { 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void ) memcpy
( amt5hqyor4n . ir , modelMassMatrixIr , 129 * sizeof ( int_T ) ) ; ( void )
memcpy ( amt5hqyor4n . jc , modelMassMatrixJc , 529 * sizeof ( int_T ) ) ; (
void ) memcpy ( amt5hqyor4n . pr , modelMassMatrixPr , 129 * sizeof ( real_T
) ) ; } } void MdlEnable ( void ) { lw0sy0o11jr . bsds3pyzel = ssGetTaskTime
( rtS , 1 ) ; lw0sy0o11jr . jx2b1t4erw = lw0sy0o11jr . bsds3pyzel ; } void
MdlStart ( void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} simTgtPushModelBlockPath ( rtS ,
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) ; irvj0luwjw ( & (
lw0sy0o11jr . f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtdw ) ) ;
simTgtPopModelBlockPath ( rtS ,
"FCEvReferenceApplication/Passenger Car/Electric Plant" ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Clock" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Clock" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "FCEvReferenceApplication/To Workspace3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Clock" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; lw0sy0o11jr . jfjzwnxtuk . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "b1191993-9f1e-4b82-93b0-1f4524193f9d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( lw0sy0o11jr . jfjzwnxtuk . AQHandles , hDT
, & srcInfo ) ; if ( lw0sy0o11jr . jfjzwnxtuk . AQHandles ) {
sdiSetSignalSampleTimeString ( lw0sy0o11jr . jfjzwnxtuk . AQHandles , "1" ,
1.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( lw0sy0o11jr . jfjzwnxtuk
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( lw0sy0o11jr . jfjzwnxtuk .
AQHandles , ssGetTaskTime ( rtS , 5 ) ) ; sdiAsyncRepoSetSignalExportSettings
( lw0sy0o11jr . jfjzwnxtuk . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr . jfjzwnxtuk . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
lw0sy0o11jr . jfjzwnxtuk . AQHandles ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { {
sdiLabelU varName = sdiGetLabelFromChars ( "Clock" ) ; sdiRegisterWksVariable
( lw0sy0o11jr . jfjzwnxtuk . AQHandles , varName , "array" ) ; sdiFreeLabel (
varName ) ; } } } } } { { { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Performance Calculations:2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars
( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"Performance Calculations:2" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"FCEvReferenceApplication/Visualization/To Workspace1" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Performance Calculations:2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
lw0sy0o11jr . alsymnf2nf . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"37e3df7b-4e58-41c4-865c-e1ead83dfcdf" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
lw0sy0o11jr . alsymnf2nf . AQHandles , hDT , & srcInfo ) ; if ( lw0sy0o11jr .
alsymnf2nf . AQHandles ) { sdiSetSignalSampleTimeString ( lw0sy0o11jr .
alsymnf2nf . AQHandles , "0.5" , 0.5 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( lw0sy0o11jr . alsymnf2nf . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( lw0sy0o11jr . alsymnf2nf . AQHandles , ssGetTaskTime (
rtS , 4 ) ) ; sdiAsyncRepoSetSignalExportSettings ( lw0sy0o11jr . alsymnf2nf
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr .
alsymnf2nf . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( lw0sy0o11jr . alsymnf2nf . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"efc" ) ; sdiRegisterWksVariable ( lw0sy0o11jr . alsymnf2nf . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Battery SOC (%)" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "Battery SOC (%)" ) ; sdiLabelU propName
= sdiGetLabelFromChars ( "Battery SOC (%)" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCEvReferenceApplication/Visualization/To Workspace2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Battery SOC (%)" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
lw0sy0o11jr . h4dlhxn3ru . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ac0b941a-7d82-4e82-b14a-cebb9cb7e026" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
lw0sy0o11jr . h4dlhxn3ru . AQHandles , hDT , & srcInfo ) ; if ( lw0sy0o11jr .
h4dlhxn3ru . AQHandles ) { sdiSetSignalSampleTimeString ( lw0sy0o11jr .
h4dlhxn3ru . AQHandles , "0.5" , 0.5 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( lw0sy0o11jr . h4dlhxn3ru . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( lw0sy0o11jr . h4dlhxn3ru . AQHandles , ssGetTaskTime (
rtS , 4 ) ) ; sdiAsyncRepoSetSignalExportSettings ( lw0sy0o11jr . h4dlhxn3ru
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr .
h4dlhxn3ru . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( lw0sy0o11jr . h4dlhxn3ru . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"soc" ) ; sdiRegisterWksVariable ( lw0sy0o11jr . h4dlhxn3ru . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Gain" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Gain" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "FCEvReferenceApplication/Visualization/To Workspace3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Gain" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
lw0sy0o11jr . jfjzwnxtukc . AQHandles = sdiStartAsyncioQueueCreation ( hDT ,
& srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"2bb366d6-710b-4317-b891-56a486e5b104" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
lw0sy0o11jr . jfjzwnxtukc . AQHandles , hDT , & srcInfo ) ; if ( lw0sy0o11jr
. jfjzwnxtukc . AQHandles ) { sdiSetSignalSampleTimeString ( lw0sy0o11jr .
jfjzwnxtukc . AQHandles , "0.5" , 0.5 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( lw0sy0o11jr . jfjzwnxtukc . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( lw0sy0o11jr . jfjzwnxtukc . AQHandles , ssGetTaskTime (
rtS , 4 ) ) ; sdiAsyncRepoSetSignalExportSettings ( lw0sy0o11jr . jfjzwnxtukc
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr .
jfjzwnxtukc . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( lw0sy0o11jr . jfjzwnxtukc . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"v" ) ; sdiRegisterWksVariable ( lw0sy0o11jr . jfjzwnxtukc . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Derivative" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Derivative" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "FCEvReferenceApplication/Visualization/To Workspace4"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Derivative" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
lw0sy0o11jr . nyib12dh5l . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c0552e23-e9e8-4e36-a439-29974ee2a40e" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
lw0sy0o11jr . nyib12dh5l . AQHandles , hDT , & srcInfo ) ; if ( lw0sy0o11jr .
nyib12dh5l . AQHandles ) { sdiSetSignalSampleTimeString ( lw0sy0o11jr .
nyib12dh5l . AQHandles , "0.5" , 0.5 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( lw0sy0o11jr . nyib12dh5l . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( lw0sy0o11jr . nyib12dh5l . AQHandles , ssGetTaskTime (
rtS , 4 ) ) ; sdiAsyncRepoSetSignalExportSettings ( lw0sy0o11jr . nyib12dh5l
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr .
nyib12dh5l . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( lw0sy0o11jr . nyib12dh5l . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"a" ) ; sdiRegisterWksVariable ( lw0sy0o11jr . nyib12dh5l . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Gain2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Gain2" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "FCEvReferenceApplication/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Gain2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; lw0sy0o11jr . epffddpn0z . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "6a7a4017-580d-43ef-a1dc-bc5caaef28fc" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( lw0sy0o11jr . epffddpn0z . AQHandles , hDT
, & srcInfo ) ; if ( lw0sy0o11jr . epffddpn0z . AQHandles ) {
sdiSetSignalSampleTimeString ( lw0sy0o11jr . epffddpn0z . AQHandles , "0.5" ,
0.5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( lw0sy0o11jr . epffddpn0z
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( lw0sy0o11jr . epffddpn0z .
AQHandles , ssGetTaskTime ( rtS , 4 ) ) ; sdiAsyncRepoSetSignalExportSettings
( lw0sy0o11jr . epffddpn0z . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr . epffddpn0z . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
lw0sy0o11jr . epffddpn0z . AQHandles ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { {
sdiLabelU varName = sdiGetLabelFromChars ( "Pe" ) ; sdiRegisterWksVariable (
lw0sy0o11jr . epffddpn0z . AQHandles , varName , "array" ) ; sdiFreeLabel (
varName ) ; } } } } } { { { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Passenger Car:2" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "Passenger Car:2" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars ( "FCEvReferenceApplication/To Workspace1" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Passenger Car:2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
lw0sy0o11jr . alsymnf2nfl . AQHandles = sdiStartAsyncioQueueCreation ( hDT ,
& srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"930d59a8-489e-455b-8472-7217b99b9e50" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "degC" ) ; sdiCompleteAsyncioQueueCreation (
lw0sy0o11jr . alsymnf2nfl . AQHandles , hDT , & srcInfo ) ; if ( lw0sy0o11jr
. alsymnf2nfl . AQHandles ) { sdiSetSignalSampleTimeString ( lw0sy0o11jr .
alsymnf2nfl . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( lw0sy0o11jr . alsymnf2nfl . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( lw0sy0o11jr . alsymnf2nfl . AQHandles , ssGetTaskTime (
rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings ( lw0sy0o11jr . alsymnf2nfl
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr .
alsymnf2nfl . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( lw0sy0o11jr . alsymnf2nfl . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"T" ) ; sdiRegisterWksVariable ( lw0sy0o11jr . alsymnf2nfl . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Gain1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Gain1" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "FCEvReferenceApplication/To Workspace2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Gain1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; lw0sy0o11jr . h4dlhxn3rui . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "7f89a7f4-171b-4be3-ad3f-b2c1706008c0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( lw0sy0o11jr . h4dlhxn3rui . AQHandles , hDT
, & srcInfo ) ; if ( lw0sy0o11jr . h4dlhxn3rui . AQHandles ) {
sdiSetSignalSampleTimeString ( lw0sy0o11jr . h4dlhxn3rui . AQHandles , "0.5"
, 0.5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( lw0sy0o11jr .
h4dlhxn3rui . AQHandles , 0.0 ) ; sdiSetRunStartTime ( lw0sy0o11jr .
h4dlhxn3rui . AQHandles , ssGetTaskTime ( rtS , 4 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( lw0sy0o11jr . h4dlhxn3rui . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( lw0sy0o11jr . h4dlhxn3rui .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( lw0sy0o11jr . h4dlhxn3rui . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Pfc" ) ; sdiRegisterWksVariable ( lw0sy0o11jr . h4dlhxn3rui . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } hjsbdkg1ln ( &
arol2xwgeua . byu4dnscl5 ) ; ka5dospcnh ( & ( lw0sy0o11jr . jkb4b3hcqy . rtb
) , & ( lw0sy0o11jr . jkb4b3hcqy . rtdw ) ) ; alwc4n2foq ( & ( lw0sy0o11jr .
f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) , & ( ( ( amcrnl5xhe * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) -> m5iyq5n2ct ) , & ( ( (
erijzqocdu * ) ssGetJacobianPerturbationBoundsMaxVec ( rtS ) ) -> m5iyq5n2ct
) ) ; lw0sy0o11jr . gzgin33ia0 = 0 ; pi2ok4w0z3 ( rtS , & lw0sy0o11jr .
mfp3l0luimk ) ; pi2ok4w0z3 ( rtS , & lw0sy0o11jr . dxcv00k5uk ) ;
MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { real_T
brpxwlqh5p ; real_T m33upxgbis ; real_T b_a [ 4 ] ; real_T dxbnvj4sno [ 4 ] ;
real_T nmlfag3r0z [ 4 ] ; real_T sigmaA [ 4 ] ; real_T bcl1b5rt4n ; real_T e
; real_T g_data ; real_T huyf4gqd4j_idx_1 ; real_T jnb1m1brfj ; real_T
sigmaB_idx_0 ; real_T sigmaB_idx_1 ; real_T sigmaB_idx_2 ; real_T
sigmaB_idx_3 ; real_T * lastU ; int32_T trueCount ; boolean_T ytolinds ;
SimStruct * S ; void * diag ; static const real_T e_p [ 170 ] = { 1.0 , 2.0 ,
6.0 , 24.0 , 120.0 , 720.0 , 5040.0 , 40320.0 , 362880.0 , 3.6288E+6 ,
3.99168E+7 , 4.790016E+8 , 6.2270208E+9 , 8.71782912E+10 , 1.307674368E+12 ,
2.0922789888E+13 , 3.55687428096E+14 , 6.402373705728E+15 ,
1.21645100408832E+17 , 2.43290200817664E+18 , 5.109094217170944E+19 ,
1.1240007277776077E+21 , 2.5852016738884978E+22 , 6.2044840173323941E+23 ,
1.5511210043330986E+25 , 4.0329146112660565E+26 , 1.0888869450418352E+28 ,
3.0488834461171384E+29 , 8.8417619937397008E+30 , 2.6525285981219103E+32 ,
8.2228386541779224E+33 , 2.6313083693369352E+35 , 8.6833176188118859E+36 ,
2.9523279903960412E+38 , 1.0333147966386144E+40 , 3.7199332678990118E+41 ,
1.3763753091226343E+43 , 5.23022617466601E+44 , 2.0397882081197442E+46 ,
8.1591528324789768E+47 , 3.3452526613163803E+49 , 1.4050061177528798E+51 ,
6.0415263063373834E+52 , 2.6582715747884485E+54 , 1.1962222086548019E+56 ,
5.5026221598120885E+57 , 2.5862324151116818E+59 , 1.2413915592536073E+61 ,
6.0828186403426752E+62 , 3.0414093201713376E+64 , 1.5511187532873822E+66 ,
8.0658175170943877E+67 , 4.2748832840600255E+69 , 2.3084369733924138E+71 ,
1.2696403353658276E+73 , 7.1099858780486348E+74 , 4.0526919504877221E+76 ,
2.3505613312828789E+78 , 1.3868311854568986E+80 , 8.3209871127413916E+81 ,
5.0758021387722484E+83 , 3.1469973260387939E+85 , 1.98260831540444E+87 ,
1.2688693218588417E+89 , 8.2476505920824715E+90 , 5.4434493907744307E+92 ,
3.6471110918188683E+94 , 2.4800355424368305E+96 , 1.711224524281413E+98 ,
1.197857166996989E+100 , 8.5047858856786218E+101 , 6.1234458376886077E+103 ,
4.4701154615126834E+105 , 3.3078854415193856E+107 , 2.4809140811395391E+109 ,
1.8854947016660498E+111 , 1.4518309202828584E+113 , 1.1324281178206295E+115 ,
8.9461821307829729E+116 , 7.1569457046263779E+118 , 5.7971260207473655E+120 ,
4.75364333701284E+122 , 3.9455239697206569E+124 , 3.314240134565352E+126 ,
2.8171041143805494E+128 , 2.4227095383672724E+130 , 2.1077572983795269E+132 ,
1.8548264225739836E+134 , 1.6507955160908452E+136 , 1.4857159644817607E+138 ,
1.3520015276784023E+140 , 1.24384140546413E+142 , 1.1567725070816409E+144 ,
1.0873661566567424E+146 , 1.0329978488239052E+148 , 9.916779348709491E+149 ,
9.6192759682482062E+151 , 9.426890448883242E+153 , 9.33262154439441E+155 ,
9.33262154439441E+157 , 9.4259477598383536E+159 , 9.6144667150351211E+161 ,
9.9029007164861754E+163 , 1.0299016745145622E+166 , 1.0813967582402903E+168 ,
1.1462805637347078E+170 , 1.2265202031961373E+172 , 1.3246418194518284E+174 ,
1.4438595832024928E+176 , 1.5882455415227421E+178 , 1.7629525510902437E+180 ,
1.9745068572210728E+182 , 2.2311927486598123E+184 , 2.5435597334721862E+186 ,
2.9250936934930141E+188 , 3.3931086844518965E+190 , 3.969937160808719E+192 ,
4.6845258497542883E+194 , 5.5745857612076033E+196 , 6.6895029134491239E+198 ,
8.09429852527344E+200 , 9.8750442008335976E+202 , 1.2146304367025325E+205 ,
1.5061417415111404E+207 , 1.8826771768889254E+209 , 2.3721732428800459E+211 ,
3.0126600184576582E+213 , 3.8562048236258025E+215 , 4.9745042224772855E+217 ,
6.4668554892204716E+219 , 8.4715806908788174E+221 , 1.1182486511960039E+224 ,
1.4872707060906852E+226 , 1.9929427461615181E+228 , 2.6904727073180495E+230 ,
3.6590428819525472E+232 , 5.01288874827499E+234 , 6.9177864726194859E+236 ,
9.6157231969410859E+238 , 1.346201247571752E+241 , 1.89814375907617E+243 ,
2.6953641378881614E+245 , 3.8543707171800706E+247 , 5.5502938327393013E+249 ,
8.0479260574719866E+251 , 1.17499720439091E+254 , 1.7272458904546376E+256 ,
2.5563239178728637E+258 , 3.8089226376305671E+260 , 5.7133839564458505E+262 ,
8.6272097742332346E+264 , 1.3113358856834518E+267 , 2.0063439050956811E+269 ,
3.0897696138473489E+271 , 4.7891429014633912E+273 , 7.47106292628289E+275 ,
1.1729568794264138E+278 , 1.8532718694937338E+280 , 2.9467022724950369E+282 ,
4.714723635992059E+284 , 7.5907050539472148E+286 , 1.2296942187394488E+289 ,
2.0044015765453015E+291 , 3.2872185855342945E+293 , 5.423910666131586E+295 ,
9.0036917057784329E+297 , 1.5036165148649983E+300 , 2.5260757449731969E+302 ,
4.2690680090047027E+304 , 7.257415615307994E+306 } ; srClearBC ( lw0sy0o11jr
. mfp3l0luimk . g1iyf3f52k ) ; arol2xwgeua . mdtyud1uco = ssGetT ( rtS ) ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsModeUpdateTimeStep ( rtS ) ) {
lw0sy0o11jr . lzrdwg5jtp = ( arol2xwgeua . mdtyud1uco <= bo1z0vnccp .
pause_time_Value ) ; } if ( ! lw0sy0o11jr . lzrdwg5jtp ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
"FCEvReferenceApplication/Assertion" , 2 , ssGetT ( rtS ) ) ;
rt_ssReportDiagnosticAsWarning ( S , diag ) ; } } if ( ssIsSampleHit ( rtS ,
5 , 0 ) ) { { if ( lw0sy0o11jr . jfjzwnxtuk . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( lw0sy0o11jr . jfjzwnxtuk . AQHandles ,
ssGetTaskTime ( rtS , 5 ) , ( char * ) & arol2xwgeua . mdtyud1uco + 0 ) ; } }
} jnb1m1brfj = ssGetT ( rtS ) ; if ( bo1z0vnccp . repeat_Value > bo1z0vnccp .
Switch_Threshold ) { arol2xwgeua . hs2db3gxe1 = muDoubleScalarMod (
jnb1m1brfj , bo1z0vnccp . tFinal_Value ) ; } else { arol2xwgeua . hs2db3gxe1
= jnb1m1brfj ; } arol2xwgeua . kyvnagqwsz = look1_pbinlcapw ( arol2xwgeua .
hs2db3gxe1 , bo1z0vnccp . uDLookupTable_bp01Data , bo1z0vnccp .
uDLookupTable_tableData , & lw0sy0o11jr . pjfrrptm45 , 1369U ) ; arol2xwgeua
. nldptn0dqc = 0.0 ; arol2xwgeua . nldptn0dqc += bo1z0vnccp .
MotorCouplingDynamics_C * gtrdqgpqkfx . gstwyn3q5a ; arol2xwgeua . gh4eu0hgdx
= lw0sy0o11jr . dsvgzsahab ; if ( lw0sy0o11jr . kvonjsymh5 != ( rtInf ) ) {
arol2xwgeua . gh4eu0hgdx += ( ssGetT ( rtS ) - lw0sy0o11jr . kvonjsymh5 ) *
lw0sy0o11jr . iw5r3fihha ; } DrivetrainEv ( & ( lw0sy0o11jr . jkb4b3hcqy .
rtm ) , & arol2xwgeua . nldptn0dqc , & arol2xwgeua . gh4eu0hgdx , &
bo1z0vnccp . Constant2_Value , & bo1z0vnccp . Constant3_Value , & arol2xwgeua
. k0miwqwhp4 , & arol2xwgeua . ccugnyas5r , & ( lw0sy0o11jr . jkb4b3hcqy .
rtb ) , & ( lw0sy0o11jr . jkb4b3hcqy . rtdw ) , & ( gtrdqgpqkfx . ietjokded4
) , & ( lw0sy0o11jr . jkb4b3hcqy . rtzce ) , & ( ( ( bhwklpbnhv * )
ssGetContStateDisabled ( rtS ) ) -> ietjokded4 ) ) ; arol2xwgeua . fyc3gwx23b
[ 0 ] = bo1z0vnccp . mstomph_Gain * arol2xwgeua . kyvnagqwsz ; arol2xwgeua .
fyc3gwx23b [ 1 ] = bo1z0vnccp . mstomph_Gain * arol2xwgeua . k0miwqwhp4 ; if
( ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . agsuq5sl52 == 0 ) ) {
lw0sy0o11jr . lxkfwihbro [ 0 ] = arol2xwgeua . fyc3gwx23b [ 0 ] ; lw0sy0o11jr
. lxkfwihbro [ 1 ] = arol2xwgeua . fyc3gwx23b [ 1 ] ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { lw0sy0o11jr . agsuq5sl52 = 1 ; arol2xwgeua . jvpo5pxor4 [ 0
] = lw0sy0o11jr . lxkfwihbro [ 0 ] ; arol2xwgeua . jvpo5pxor4 [ 1 ] =
lw0sy0o11jr . lxkfwihbro [ 1 ] ; lw0sy0o11jr . agsuq5sl52 = 0 ; } arol2xwgeua
. nivlwap1ku = bo1z0vnccp . radstoRPM_Gain * arol2xwgeua . ccugnyas5r ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . aqmbdilrtq == 0 ) ) {
lw0sy0o11jr . cqehw34o0h = arol2xwgeua . nivlwap1ku ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { lw0sy0o11jr . aqmbdilrtq = 1 ; arol2xwgeua . ovilnfqx3i =
lw0sy0o11jr . cqehw34o0h ; lw0sy0o11jr . aqmbdilrtq = 0 ; } arol2xwgeua .
k4zvb232bn = lw0sy0o11jr . cd2xpetkh4 ; if ( lw0sy0o11jr . hfmbz1d5vw != (
rtInf ) ) { arol2xwgeua . k4zvb232bn += ( ssGetT ( rtS ) - lw0sy0o11jr .
hfmbz1d5vw ) * lw0sy0o11jr . bo4hodedpa ; } arol2xwgeua . nwobq5pehg =
lw0sy0o11jr . nez5k4mt2q ; if ( lw0sy0o11jr . bkuu3yyjsl != ( rtInf ) ) {
arol2xwgeua . nwobq5pehg += ( ssGetT ( rtS ) - lw0sy0o11jr . bkuu3yyjsl ) *
lw0sy0o11jr . eyagulv3eu ; } FCElectricPlant ( & ( lw0sy0o11jr . f2cw5vgug5 .
rtm ) , & arol2xwgeua . k4zvb232bn , & arol2xwgeua . ccugnyas5r , &
arol2xwgeua . nwobq5pehg , & arol2xwgeua . grzfptpe55 , & arol2xwgeua .
hzezmdv3lt , & arol2xwgeua . aqtgj50qai , & arol2xwgeua . evj5xoqrrj , &
arol2xwgeua . lfu0clsnxa , & arol2xwgeua . hrpk2gwn22 , & arol2xwgeua .
fvrzozslmz , & arol2xwgeua . nlscj1wkoa , & arol2xwgeua . f1gdql1qam , & (
lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtdw ) , &
( gtrdqgpqkfx . m5iyq5n2ct ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtzce ) ) ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( lw0sy0o11jr . fondni20e2 == 0 ) {
lw0sy0o11jr . ahnghn4brt = arol2xwgeua . evj5xoqrrj ; } if ( lw0sy0o11jr .
kyjqeczcx2 == 0 ) { lw0sy0o11jr . cl5g0rwk2e = arol2xwgeua . grzfptpe55 ; } }
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { lw0sy0o11jr . fondni20e2 = 1 ;
arol2xwgeua . jo21islmqg = lw0sy0o11jr . ahnghn4brt ; lw0sy0o11jr .
fondni20e2 = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr .
axxnlh2wvc == 0 ) ) { lw0sy0o11jr . filyznw4an = arol2xwgeua . aqtgj50qai ; }
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { lw0sy0o11jr . kyjqeczcx2 = 1 ;
arol2xwgeua . jb5z2dve1g = lw0sy0o11jr . cl5g0rwk2e ; lw0sy0o11jr .
kyjqeczcx2 = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr .
p4tvqhnquk == 0 ) ) { lw0sy0o11jr . fmivgn3dll = arol2xwgeua . lfu0clsnxa ; }
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { lw0sy0o11jr . axxnlh2wvc = 1 ;
arol2xwgeua . okzca3psdg = lw0sy0o11jr . filyznw4an ; lw0sy0o11jr .
axxnlh2wvc = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr .
gc5sh1wkwt == 0 ) ) { lw0sy0o11jr . ab044e5fyd = arol2xwgeua . hrpk2gwn22 ; }
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { lw0sy0o11jr . p4tvqhnquk = 1 ;
arol2xwgeua . pngeld3eh4 = lw0sy0o11jr . fmivgn3dll ; lw0sy0o11jr .
p4tvqhnquk = 0 ; lw0sy0o11jr . gc5sh1wkwt = 1 ; arol2xwgeua . nclhnaqn33 =
lw0sy0o11jr . ab044e5fyd ; lw0sy0o11jr . gc5sh1wkwt = 0 ; } arol2xwgeua .
dex1ynigww = gtrdqgpqkfx . ksul3xbf4x ; arol2xwgeua . eksslsa3nq =
gtrdqgpqkfx . mbchhank0o ; arol2xwgeua . c1yh21bbxg = bo1z0vnccp .
m3toUSGal_Gain * arol2xwgeua . eksslsa3nq ; if ( ssIsModeUpdateTimeStep ( rtS
) ) { lw0sy0o11jr . noc02rvf4u = arol2xwgeua . c1yh21bbxg >= bo1z0vnccp .
Saturation1_UpperSat ? 1 : arol2xwgeua . c1yh21bbxg > bo1z0vnccp .
Saturation1_LowerSat ? 0 : - 1 ; } arol2xwgeua . puf4jg5pqu = bo1z0vnccp .
mtomile_Gain * arol2xwgeua . dex1ynigww / ( lw0sy0o11jr . noc02rvf4u == 1 ?
bo1z0vnccp . Saturation1_UpperSat : lw0sy0o11jr . noc02rvf4u == - 1 ?
bo1z0vnccp . Saturation1_LowerSat : arol2xwgeua . c1yh21bbxg ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . aq2j102lks == 0 ) ) {
lw0sy0o11jr . bus0ytb1zk = arol2xwgeua . puf4jg5pqu ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { lw0sy0o11jr . aq2j102lks = 1 ; arol2xwgeua . jjtf4hxjvb =
lw0sy0o11jr . bus0ytb1zk ; lw0sy0o11jr . aq2j102lks = 0 ; arol2xwgeua .
pvr5co4ozs = arol2xwgeua . pngeld3eh4 * arol2xwgeua . nclhnaqn33 ; }
arol2xwgeua . hnspac23rl = bo1z0vnccp . mto100Km_Gain * arol2xwgeua .
dex1ynigww ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { lw0sy0o11jr . id1a31qwaj
= arol2xwgeua . hnspac23rl >= bo1z0vnccp . Saturation_UpperSat ? 1 :
arol2xwgeua . hnspac23rl > bo1z0vnccp . Saturation_LowerSat ? 0 : - 1 ; }
arol2xwgeua . ghz3myl3uq = 1.0 / ( lw0sy0o11jr . id1a31qwaj == 1 ? bo1z0vnccp
. Saturation_UpperSat : lw0sy0o11jr . id1a31qwaj == - 1 ? bo1z0vnccp .
Saturation_LowerSat : arol2xwgeua . hnspac23rl ) * ( bo1z0vnccp . m3toL_Gain
* arol2xwgeua . eksslsa3nq ) ; if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { { if (
lw0sy0o11jr . alsymnf2nf . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( lw0sy0o11jr . alsymnf2nf . AQHandles , ssGetTaskTime ( rtS ,
4 ) , ( char * ) & arol2xwgeua . ghz3myl3uq + 0 ) ; } } { if ( lw0sy0o11jr .
h4dlhxn3ru . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
lw0sy0o11jr . h4dlhxn3ru . AQHandles , ssGetTaskTime ( rtS , 4 ) , ( char * )
& arol2xwgeua . jb5z2dve1g + 0 ) ; } } } if ( ssIsModeUpdateTimeStep ( rtS )
) { lw0sy0o11jr . jskwu05yzr = arol2xwgeua . k0miwqwhp4 >= bo1z0vnccp .
Saturation_UpperSat_i5ock22ux5 ? 1 : arol2xwgeua . k0miwqwhp4 > bo1z0vnccp .
Saturation_LowerSat_lcopxrfjqs ? 0 : - 1 ; } arol2xwgeua . bg0r4hctuw = (
lw0sy0o11jr . jskwu05yzr == 1 ? bo1z0vnccp . Saturation_UpperSat_i5ock22ux5 :
lw0sy0o11jr . jskwu05yzr == - 1 ? bo1z0vnccp . Saturation_LowerSat_lcopxrfjqs
: arol2xwgeua . k0miwqwhp4 ) * bo1z0vnccp . Gain_Gain ; if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { { if ( lw0sy0o11jr . jfjzwnxtukc . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( lw0sy0o11jr . jfjzwnxtukc .
AQHandles , ssGetTaskTime ( rtS , 4 ) , ( char * ) & arol2xwgeua . bg0r4hctuw
+ 0 ) ; } } } if ( ( lw0sy0o11jr . mgx323pfpy >= ssGetT ( rtS ) ) && (
lw0sy0o11jr . naf5zf5ewa >= ssGetT ( rtS ) ) ) { arol2xwgeua . ifdyy33fmz =
0.0 ; } else { bcl1b5rt4n = lw0sy0o11jr . mgx323pfpy ; lastU = & lw0sy0o11jr
. lkzjqwrbzn ; if ( lw0sy0o11jr . mgx323pfpy < lw0sy0o11jr . naf5zf5ewa ) {
if ( lw0sy0o11jr . naf5zf5ewa < ssGetT ( rtS ) ) { bcl1b5rt4n = lw0sy0o11jr .
naf5zf5ewa ; lastU = & lw0sy0o11jr . a2bqy2lbvf ; } } else if ( lw0sy0o11jr .
mgx323pfpy >= ssGetT ( rtS ) ) { bcl1b5rt4n = lw0sy0o11jr . naf5zf5ewa ;
lastU = & lw0sy0o11jr . a2bqy2lbvf ; } arol2xwgeua . ifdyy33fmz = (
arol2xwgeua . bg0r4hctuw - * lastU ) / ( ssGetT ( rtS ) - bcl1b5rt4n ) ; } if
( ssIsSampleHit ( rtS , 4 , 0 ) ) { { if ( lw0sy0o11jr . nyib12dh5l .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( lw0sy0o11jr .
nyib12dh5l . AQHandles , ssGetTaskTime ( rtS , 4 ) , ( char * ) & arol2xwgeua
. ifdyy33fmz + 0 ) ; } } } arol2xwgeua . gmg1uuwodr = arol2xwgeua .
hzezmdv3lt / bo1z0vnccp . wtokw_Value ; arol2xwgeua . imasaqk5dh =
arol2xwgeua . gmg1uuwodr / bo1z0vnccp . USEPAkwhUSgalequivalent_Value ;
arol2xwgeua . pjcnv0yr3h = arol2xwgeua . imasaqk5dh / bo1z0vnccp .
sperh_Value ; arol2xwgeua . amo2ayshmg = bo1z0vnccp . kgstoGasgals_Gain *
arol2xwgeua . nlscj1wkoa ; arol2xwgeua . mtqi5bjqaq = arol2xwgeua .
pjcnv0yr3h + arol2xwgeua . amo2ayshmg ; arol2xwgeua . ox3udpfx0s =
arol2xwgeua . k0miwqwhp4 * arol2xwgeua . k0miwqwhp4 ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( lw0sy0o11jr . gzgin33ia0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; lw0sy0o11jr .
gzgin33ia0 = 0 ; } arol2xwgeua . ggv2kf5x13 = muDoubleScalarSqrt (
arol2xwgeua . ox3udpfx0s ) ; } else { if ( arol2xwgeua . ox3udpfx0s < 0.0 ) {
arol2xwgeua . ggv2kf5x13 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
arol2xwgeua . ox3udpfx0s ) ) ; } else { arol2xwgeua . ggv2kf5x13 =
muDoubleScalarSqrt ( arol2xwgeua . ox3udpfx0s ) ; } if ( arol2xwgeua .
ox3udpfx0s < 0.0 ) { lw0sy0o11jr . gzgin33ia0 = 1 ; } } arol2xwgeua .
ob5patswnz = bo1z0vnccp . m3pergal_Gain * arol2xwgeua . mtqi5bjqaq ;
arol2xwgeua . m2ujessiey = gtrdqgpqkfx . k335v0wdxu ; arol2xwgeua .
dkmci12msj = arol2xwgeua . m2ujessiey - arol2xwgeua . caokwv1pyy ; if (
arol2xwgeua . l33ngyt2ph ) { bcl1b5rt4n = 0.0 ; } else if ( arol2xwgeua .
dkmci12msj > bo1z0vnccp . u1_UpperSat ) { bcl1b5rt4n = bo1z0vnccp .
u1_UpperSat ; } else if ( arol2xwgeua . dkmci12msj < bo1z0vnccp . u1_LowerSat
) { bcl1b5rt4n = bo1z0vnccp . u1_LowerSat ; } else { bcl1b5rt4n = arol2xwgeua
. dkmci12msj ; } if ( bcl1b5rt4n > bo1z0vnccp .
Saturation_UpperSat_ejlhkaxvm3 ) { brpxwlqh5p = bo1z0vnccp .
Saturation_UpperSat_ejlhkaxvm3 ; } else if ( bcl1b5rt4n < bo1z0vnccp .
Saturation_LowerSat_jq5vbx40o3 ) { brpxwlqh5p = bo1z0vnccp .
Saturation_LowerSat_jq5vbx40o3 ; } else { brpxwlqh5p = bcl1b5rt4n ; }
mfp3l0luim ( rtS , arol2xwgeua . drdlsysypy , brpxwlqh5p , & arol2xwgeua .
mfp3l0luimk , & lw0sy0o11jr . mfp3l0luimk ) ; if ( arol2xwgeua . mhizywt5g2 )
{ bcl1b5rt4n = 0.0 ; } else if ( arol2xwgeua . dkmci12msj > bo1z0vnccp .
u0_UpperSat ) { bcl1b5rt4n = - bo1z0vnccp . u0_UpperSat ; } else if (
arol2xwgeua . dkmci12msj < bo1z0vnccp . u0_LowerSat ) { bcl1b5rt4n = -
bo1z0vnccp . u0_LowerSat ; } else { bcl1b5rt4n = - arol2xwgeua . dkmci12msj ;
} if ( bcl1b5rt4n > bo1z0vnccp . Saturation_UpperSat_n5cfzewtp3 ) {
m33upxgbis = bo1z0vnccp . Saturation_UpperSat_n5cfzewtp3 ; } else if (
bcl1b5rt4n < bo1z0vnccp . Saturation_LowerSat_jdvecoiqp4 ) { m33upxgbis =
bo1z0vnccp . Saturation_LowerSat_jdvecoiqp4 ; } else { m33upxgbis =
bcl1b5rt4n ; } mfp3l0luim ( rtS , arol2xwgeua . jupidj25f2 , m33upxgbis , &
arol2xwgeua . dxcv00k5uk , & lw0sy0o11jr . dxcv00k5uk ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { lw0sy0o11jr . bsds3pyzel = ssGetTaskTime ( rtS , 1 ) ;
lw0sy0o11jr . cuuxgkcmrh = lw0sy0o11jr . bsds3pyzel - lw0sy0o11jr .
jx2b1t4erw ; lw0sy0o11jr . jx2b1t4erw = lw0sy0o11jr . bsds3pyzel ;
lw0sy0o11jr . lddh2eciz1 += lw0sy0o11jr . cuuxgkcmrh ; lw0sy0o11jr .
ahou0vl2z3 = - 1 ; if ( lw0sy0o11jr . mbvoiiw20z == 0U ) { lw0sy0o11jr .
mbvoiiw20z = 1U ; lw0sy0o11jr . draduovrmv = 1U ; arol2xwgeua . dcnebbmssf =
bo1z0vnccp . LongitudinalDriverModel_GearInit ; lw0sy0o11jr . pn5h0qud2t =
bo1z0vnccp . LongitudinalDriverModel_GearInit ; if ( bo1z0vnccp .
LongitudinalDriverModel_GearInit < 0.0 ) { lw0sy0o11jr . nmxkq34d03 =
erln4z22fs ; lw0sy0o11jr . lddh2eciz1 = 0.0 ; arol2xwgeua . dcnebbmssf = -
1.0 ; } else if ( bo1z0vnccp . LongitudinalDriverModel_GearInit == 0.0 ) {
lw0sy0o11jr . nmxkq34d03 = cqdyacctvm ; lw0sy0o11jr . lddh2eciz1 = 0.0 ;
arol2xwgeua . dcnebbmssf = 0.0 ; } else { lw0sy0o11jr . nmxkq34d03 =
mlasyn5ga4 ; lw0sy0o11jr . lddh2eciz1 = 0.0 ; } } else { switch ( lw0sy0o11jr
. nmxkq34d03 ) { case cqdyacctvm : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
lw0sy0o11jr . jx2b1t4erw ) + lw0sy0o11jr . lddh2eciz1 >= bo1z0vnccp .
LongitudinalDriverModel_tShift ) && ( ( arol2xwgeua . kyvnagqwsz > 0.0 ) && (
arol2xwgeua . mfp3l0luimk . i1rtqrd21n > 0.0 ) ) ) { lw0sy0o11jr . pn5h0qud2t
++ ; lw0sy0o11jr . nmxkq34d03 = mlasyn5ga4 ; lw0sy0o11jr . lddh2eciz1 = 0.0 ;
arol2xwgeua . dcnebbmssf = lw0sy0o11jr . pn5h0qud2t ; } else if ( ( (
ssGetTaskTime ( rtS , 1 ) - lw0sy0o11jr . jx2b1t4erw ) + lw0sy0o11jr .
lddh2eciz1 >= bo1z0vnccp . LongitudinalDriverModel_tShift ) && ( arol2xwgeua
. kyvnagqwsz < 0.0 ) ) { lw0sy0o11jr . pn5h0qud2t -- ; lw0sy0o11jr .
nmxkq34d03 = erln4z22fs ; lw0sy0o11jr . lddh2eciz1 = 0.0 ; arol2xwgeua .
dcnebbmssf = - 1.0 ; } break ; case mlasyn5ga4 : if ( ( ( ssGetTaskTime ( rtS
, 1 ) - lw0sy0o11jr . jx2b1t4erw ) + lw0sy0o11jr . lddh2eciz1 >= bo1z0vnccp .
LongitudinalDriverModel_tShift ) && ( ( ( arol2xwgeua . dxcv00k5uk .
i1rtqrd21n >= 0.0 ) && ( arol2xwgeua . k0miwqwhp4 <= 0.0 ) && ( arol2xwgeua .
mfp3l0luimk . i1rtqrd21n <= 0.0 ) ) || ( arol2xwgeua . kyvnagqwsz <= 0.0 ) )
) { lw0sy0o11jr . pn5h0qud2t -- ; lw0sy0o11jr . nmxkq34d03 = cqdyacctvm ;
lw0sy0o11jr . lddh2eciz1 = 0.0 ; arol2xwgeua . dcnebbmssf = 0.0 ; } break ;
default : if ( ( ( ssGetTaskTime ( rtS , 1 ) - lw0sy0o11jr . jx2b1t4erw ) +
lw0sy0o11jr . lddh2eciz1 >= bo1z0vnccp . LongitudinalDriverModel_tShift ) &&
( arol2xwgeua . kyvnagqwsz >= 0.0 ) ) { lw0sy0o11jr . pn5h0qud2t ++ ;
lw0sy0o11jr . nmxkq34d03 = cqdyacctvm ; lw0sy0o11jr . lddh2eciz1 = 0.0 ;
arol2xwgeua . dcnebbmssf = 0.0 ; } break ; } } if ( ssIsModeUpdateTimeStep (
rtS ) ) { lw0sy0o11jr . nx4k1o3c2b = ( arol2xwgeua . kyvnagqwsz != bo1z0vnccp
. Constant_Value ) ; } arol2xwgeua . pmarfk24je = ( lw0sy0o11jr . nx4k1o3c2b
&& ( arol2xwgeua . dcnebbmssf > bo1z0vnccp . Constant_Value_nhp3htkj21 ) ) ;
} if ( arol2xwgeua . pmarfk24je ) { if ( arol2xwgeua . dcnebbmssf != 0.0 ) {
arol2xwgeua . jdqevtvewp [ 0 ] = arol2xwgeua . mfp3l0luimk . i1rtqrd21n ; }
else { arol2xwgeua . jdqevtvewp [ 0 ] = bo1z0vnccp . Constant1_Value ; }
arol2xwgeua . jdqevtvewp [ 1 ] = arol2xwgeua . dxcv00k5uk . i1rtqrd21n ; }
else if ( arol2xwgeua . dcnebbmssf != 0.0 ) { arol2xwgeua . jdqevtvewp [ 0 ]
= arol2xwgeua . dxcv00k5uk . i1rtqrd21n ; arol2xwgeua . jdqevtvewp [ 1 ] =
arol2xwgeua . mfp3l0luimk . i1rtqrd21n ; } else { arol2xwgeua . jdqevtvewp [
0 ] = bo1z0vnccp . Constant_Value_fb5mg350bv ; arol2xwgeua . jdqevtvewp [ 1 ]
= muDoubleScalarMax ( arol2xwgeua . dxcv00k5uk . i1rtqrd21n , arol2xwgeua .
mfp3l0luimk . i1rtqrd21n ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
lw0sy0o11jr . pv4mryn5kw == 0 ) { lw0sy0o11jr . mhjabgx12v = arol2xwgeua .
jdqevtvewp [ 0 ] ; } if ( lw0sy0o11jr . bz2xjgs4w4 == 0 ) { lw0sy0o11jr .
flieyulmtp = arol2xwgeua . jdqevtvewp [ 1 ] ; } } if ( ssIsSampleHit ( rtS ,
2 , 0 ) ) { lw0sy0o11jr . pv4mryn5kw = 1 ; arol2xwgeua . ntnlhbhu4n =
lw0sy0o11jr . mhjabgx12v ; lw0sy0o11jr . pv4mryn5kw = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . jawpdqhxq5 == 0 ) ) {
lw0sy0o11jr . mzpieghwj5 = arol2xwgeua . k0miwqwhp4 ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lw0sy0o11jr . bz2xjgs4w4 = 1 ; arol2xwgeua . jrzv51i13d =
lw0sy0o11jr . flieyulmtp ; lw0sy0o11jr . bz2xjgs4w4 = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . pvituonzi0 == 0 ) ) {
lw0sy0o11jr . itjxrblkjw = arol2xwgeua . grzfptpe55 ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lw0sy0o11jr . jawpdqhxq5 = 1 ; arol2xwgeua . n1mdtuox5b =
lw0sy0o11jr . mzpieghwj5 ; lw0sy0o11jr . jawpdqhxq5 = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . oztkmm3ipn == 0 ) ) {
lw0sy0o11jr . kyu2utgbhq = arol2xwgeua . ccugnyas5r ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lw0sy0o11jr . pvituonzi0 = 1 ; arol2xwgeua . ixmdmgwvrg =
lw0sy0o11jr . itjxrblkjw ; lw0sy0o11jr . pvituonzi0 = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( lw0sy0o11jr . dl1wjiyyo5 == 0 ) ) {
lw0sy0o11jr . ayylq5cimi = arol2xwgeua . lfu0clsnxa ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { lw0sy0o11jr . oztkmm3ipn = 1 ; arol2xwgeua . pg4vu0woab =
lw0sy0o11jr . kyu2utgbhq ; lw0sy0o11jr . oztkmm3ipn = 0 ; lw0sy0o11jr .
dl1wjiyyo5 = 1 ; arol2xwgeua . cxt45itkxu = lw0sy0o11jr . ayylq5cimi ;
lw0sy0o11jr . dl1wjiyyo5 = 0 ; FCEvPowertrainController ( & ( lw0sy0o11jr .
jfaeol5er3 . rtm ) , & arol2xwgeua . ntnlhbhu4n , & arol2xwgeua . jrzv51i13d
, & arol2xwgeua . n1mdtuox5b , & arol2xwgeua . ixmdmgwvrg , & arol2xwgeua .
pg4vu0woab , & arol2xwgeua . cxt45itkxu , & arol2xwgeua . jrtiyk3oiq , &
arol2xwgeua . akfb4dpcur , & arol2xwgeua . c0jtinjrgp , & arol2xwgeua .
fi4crlath4 , & arol2xwgeua . byu4dnscl5 , & arol2xwgeua . dffnpnahry , &
arol2xwgeua . itnb0b3ert , & ( lw0sy0o11jr . jfaeol5er3 . rtb ) , & (
lw0sy0o11jr . jfaeol5er3 . rtdw ) ) ; arol2xwgeua . b5bw4cab53 = bo1z0vnccp .
Gain2_Gain * arol2xwgeua . dffnpnahry ; } if ( ssIsSampleHit ( rtS , 4 , 0 )
) { { if ( lw0sy0o11jr . epffddpn0z . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( lw0sy0o11jr . epffddpn0z . AQHandles , ssGetTaskTime ( rtS ,
4 ) , ( char * ) & arol2xwgeua . b5bw4cab53 + 0 ) ; } } } if ( ssIsSampleHit
( rtS , 3 , 0 ) ) { { if ( lw0sy0o11jr . alsymnf2nfl . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( lw0sy0o11jr . alsymnf2nfl .
AQHandles , ssGetTaskTime ( rtS , 3 ) , ( char * ) & arol2xwgeua . f1gdql1qam
+ 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( arol2xwgeua .
itnb0b3ert > bo1z0vnccp . Saturation_UpperSat_eqdlv1qluu ) { bcl1b5rt4n =
bo1z0vnccp . Saturation_UpperSat_eqdlv1qluu ; } else if ( arol2xwgeua .
itnb0b3ert < bo1z0vnccp . Saturation_LowerSat_lo2mm43j55 ) { bcl1b5rt4n =
bo1z0vnccp . Saturation_LowerSat_lo2mm43j55 ; } else { bcl1b5rt4n =
arol2xwgeua . itnb0b3ert ; } arol2xwgeua . azqdsmx4o5 = bo1z0vnccp .
Gain1_Gain * bcl1b5rt4n ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { { if (
lw0sy0o11jr . h4dlhxn3rui . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( lw0sy0o11jr . h4dlhxn3rui . AQHandles , ssGetTaskTime ( rtS
, 4 ) , ( char * ) & arol2xwgeua . azqdsmx4o5 + 0 ) ; } } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( lw0sy0o11jr . fp52fvpgcn == 0 ) {
lw0sy0o11jr . ghmgweglut = arol2xwgeua . hzezmdv3lt ; } if ( lw0sy0o11jr .
mmgm2ezxm5 == 0 ) { lw0sy0o11jr . gjzj5p0bc1 = arol2xwgeua . aqtgj50qai ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { lw0sy0o11jr . fp52fvpgcn = 1 ;
arol2xwgeua . gc4ky0bjec = lw0sy0o11jr . ghmgweglut ; lw0sy0o11jr .
fp52fvpgcn = 0 ; lw0sy0o11jr . mmgm2ezxm5 = 1 ; arol2xwgeua . a5mvaifpwe =
lw0sy0o11jr . gjzj5p0bc1 ; lw0sy0o11jr . mmgm2ezxm5 = 0 ; } if (
ssIsSampleHit ( rtS , 4 , 0 ) ) { arol2xwgeua . aawice3zmc = ssGetTaskTime (
rtS , 4 ) ; } arol2xwgeua . pwqsmmfyxm = jnb1m1brfj - arol2xwgeua .
aawice3zmc ; jnb1m1brfj = muDoubleScalarAbs ( arol2xwgeua . k0miwqwhp4 ) ;
ytolinds = ( jnb1m1brfj < 0.001 ) ; trueCount = 0 ; if ( ytolinds ) {
trueCount = 1 ; } if ( trueCount - 1 >= 0 ) { bcl1b5rt4n = jnb1m1brfj / 0.001
; g_data = 0.002 / ( 3.0 - bcl1b5rt4n * bcl1b5rt4n ) ; } if ( ytolinds ) {
jnb1m1brfj = g_data ; } ytolinds = ( arol2xwgeua . k0miwqwhp4 < 0.0 ) ;
trueCount = - 1 ; if ( ytolinds ) { trueCount = 0 ; } if ( trueCount >= 0 ) {
g_data = - jnb1m1brfj ; } bcl1b5rt4n = jnb1m1brfj ; if ( ytolinds ) {
bcl1b5rt4n = g_data ; } if ( jnb1m1brfj > 5.0 ) { jnb1m1brfj =
muDoubleScalarMax ( muDoubleScalarMin ( bo1z0vnccp .
LongitudinalDriverModel_tau , bo1z0vnccp . LongitudinalDriverModel_L /
jnb1m1brfj ) , 0.001 ) ; } else { jnb1m1brfj = bo1z0vnccp .
LongitudinalDriverModel_tau ; } dxbnvj4sno [ 0 ] = 0.0 ; dxbnvj4sno [ 2 ] =
1.0 ; dxbnvj4sno [ 1 ] = - ( ( bo1z0vnccp . LongitudinalDriverModel_aR /
bcl1b5rt4n + bo1z0vnccp . LongitudinalDriverModel_cR * arol2xwgeua .
k0miwqwhp4 ) * muDoubleScalarTanh ( arol2xwgeua . k0miwqwhp4 ) + bo1z0vnccp .
LongitudinalDriverModel_bR ) / bo1z0vnccp . LongitudinalDriverModel_m ;
dxbnvj4sno [ 3 ] = 0.0 ; huyf4gqd4j_idx_1 = bo1z0vnccp .
LongitudinalDriverModel_Kpt / bo1z0vnccp . LongitudinalDriverModel_m ; sigmaA
[ 0 ] = 0.0 ; sigmaB_idx_0 = 0.0 ; sigmaA [ 1 ] = 0.0 ; sigmaB_idx_1 = 0.0 ;
sigmaA [ 2 ] = 0.0 ; sigmaB_idx_2 = 0.0 ; sigmaA [ 3 ] = 0.0 ; sigmaB_idx_3 =
0.0 ; for ( trueCount = 0 ; trueCount < 15 ; trueCount ++ ) { bcl1b5rt4n =
muDoubleScalarPower ( jnb1m1brfj , ( real_T ) trueCount + 1.0 ) ; eq130nkbpl
( dxbnvj4sno , ( real_T ) trueCount + 1.0 , nmlfag3r0z ) ; e = e_p [
trueCount + 1 ] ; sigmaA [ 0 ] += nmlfag3r0z [ 0 ] * bcl1b5rt4n / e ; sigmaA
[ 1 ] += nmlfag3r0z [ 1 ] * bcl1b5rt4n / e ; sigmaA [ 2 ] += nmlfag3r0z [ 2 ]
* bcl1b5rt4n / e ; sigmaA [ 3 ] += nmlfag3r0z [ 3 ] * bcl1b5rt4n / e ;
bcl1b5rt4n = muDoubleScalarPower ( jnb1m1brfj , ( real_T ) trueCount + 1.0 )
; eq130nkbpl ( dxbnvj4sno , ( real_T ) trueCount + 1.0 , nmlfag3r0z ) ; e =
e_p [ trueCount ] ; sigmaB_idx_0 += nmlfag3r0z [ 0 ] * bcl1b5rt4n / e ;
sigmaB_idx_1 += nmlfag3r0z [ 1 ] * bcl1b5rt4n / e ; sigmaB_idx_2 +=
nmlfag3r0z [ 2 ] * bcl1b5rt4n / e ; sigmaB_idx_3 += nmlfag3r0z [ 3 ] *
bcl1b5rt4n / e ; } jnb1m1brfj = ( ( sigmaA [ 0 ] + 1.0 ) * jnb1m1brfj +
jnb1m1brfj * sigmaA [ 1 ] ) * 0.0 + ( ( sigmaA [ 3 ] + 1.0 ) * jnb1m1brfj +
jnb1m1brfj * sigmaA [ 2 ] ) * huyf4gqd4j_idx_1 ; nmlfag3r0z [ 0 ] = 0.0 ;
nmlfag3r0z [ 1 ] = dxbnvj4sno [ 1 ] * 0.001 ; nmlfag3r0z [ 2 ] = 0.001 ;
nmlfag3r0z [ 3 ] = 0.0 ; cmz30h31m5 ( nmlfag3r0z , sigmaA ) ; nmlfag3r0z [ 0
] = 0.0 ; nmlfag3r0z [ 1 ] = dxbnvj4sno [ 1 ] * 0.0 ; nmlfag3r0z [ 2 ] = 0.0
; nmlfag3r0z [ 3 ] = 0.0 ; cmz30h31m5 ( nmlfag3r0z , b_a ) ; nmlfag3r0z [ 0 ]
= 0.0 ; nmlfag3r0z [ 1 ] = dxbnvj4sno [ 1 ] * 0.001 ; nmlfag3r0z [ 2 ] =
0.001 ; nmlfag3r0z [ 3 ] = 0.0 ; cmz30h31m5 ( nmlfag3r0z , dxbnvj4sno ) ;
arol2xwgeua . kfjumalmu5 = ( ( ( b_a [ 0 ] * 0.0 + b_a [ 2 ] *
huyf4gqd4j_idx_1 ) + ( dxbnvj4sno [ 0 ] * 0.0 + dxbnvj4sno [ 2 ] *
huyf4gqd4j_idx_1 ) ) / 2.0 * 0.001 * arol2xwgeua . dkmci12msj + ( sigmaA [ 0
] * arol2xwgeua . k0miwqwhp4 + sigmaA [ 2 ] * 0.0 ) ) * ( ( sigmaB_idx_0 +
1.0 ) + sigmaB_idx_1 ) + ( ( ( b_a [ 1 ] * 0.0 + b_a [ 3 ] * huyf4gqd4j_idx_1
) + ( dxbnvj4sno [ 1 ] * 0.0 + dxbnvj4sno [ 3 ] * huyf4gqd4j_idx_1 ) ) / 2.0
* 0.001 * arol2xwgeua . dkmci12msj + ( sigmaA [ 1 ] * arol2xwgeua .
k0miwqwhp4 + sigmaA [ 3 ] * 0.0 ) ) * ( ( sigmaB_idx_3 + 1.0 ) + sigmaB_idx_2
) ; arol2xwgeua . a1ifzjuqu2 = arol2xwgeua . dkmci12msj * jnb1m1brfj ;
arol2xwgeua . iewvvph2bn = arol2xwgeua . kfjumalmu5 + arol2xwgeua .
a1ifzjuqu2 ; arol2xwgeua . b0hrwclaey = arol2xwgeua . kyvnagqwsz -
arol2xwgeua . iewvvph2bn ; arol2xwgeua . iioo4rwecj = arol2xwgeua .
b0hrwclaey / jnb1m1brfj ; arol2xwgeua . mbw0oe0xgq = arol2xwgeua . iioo4rwecj
+ arol2xwgeua . m2ujessiey ; arol2xwgeua . gnzc0nrj3w = arol2xwgeua .
mbw0oe0xgq - arol2xwgeua . m2ujessiey ; arol2xwgeua . dfgfnvbjkq = 1.0 /
bo1z0vnccp . LongitudinalDriverModel_tau * 3.1415926535897931 * 2.0 *
arol2xwgeua . gnzc0nrj3w ; arol2xwgeua . l0xwo0ycrz = arol2xwgeua .
kyvnagqwsz - arol2xwgeua . k0miwqwhp4 ; arol2xwgeua . b2ehf0ulx5 =
arol2xwgeua . l0xwo0ycrz * arol2xwgeua . l0xwo0ycrz ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { arol2xwgeua . ee51mjy2aa [ 0 ] = lw0sy0o11jr . mumtw2t4fy [
0 ] ; arol2xwgeua . ee51mjy2aa [ 1 ] = lw0sy0o11jr . mumtw2t4fy [ 1 ] ; } if
( arol2xwgeua . l0xwo0ycrz > arol2xwgeua . ee51mjy2aa [ 0 ] ) { arol2xwgeua .
lpbnodzorb [ 0 ] = arol2xwgeua . l0xwo0ycrz ; } else { arol2xwgeua .
lpbnodzorb [ 0 ] = arol2xwgeua . ee51mjy2aa [ 0 ] ; } if ( arol2xwgeua .
l0xwo0ycrz < arol2xwgeua . ee51mjy2aa [ 1 ] ) { arol2xwgeua . lpbnodzorb [ 1
] = arol2xwgeua . l0xwo0ycrz ; } else { arol2xwgeua . lpbnodzorb [ 1 ] =
arol2xwgeua . ee51mjy2aa [ 1 ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID6 ( int_T tid ) { arol2xwgeua . jrtiyk3oiq = bo1z0vnccp .
Gain_Gain_nhytib1535 * bo1z0vnccp . Constant_Value_brbakq3rcg ;
FCEvPowertrainControllerTID1 ( & ( lw0sy0o11jr . jfaeol5er3 . rtb ) ) ;
arol2xwgeua . l33ngyt2ph = false ; arol2xwgeua . drdlsysypy = true ;
arol2xwgeua . mhizywt5g2 = false ; arol2xwgeua . jupidj25f2 = true ;
arol2xwgeua . caokwv1pyy = bo1z0vnccp . LongitudinalDriverModel_g *
bo1z0vnccp . LongitudinalDriverModel_m * bo1z0vnccp .
LongitudinalDriverModel_m / bo1z0vnccp . LongitudinalDriverModel_Kpt * 0.0 ;
DrivetrainEvTID2 ( & ( lw0sy0o11jr . jkb4b3hcqy . rtb ) ) ;
FCElectricPlantTID2 ( & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr
. f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtdw ) ) ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T err ;
real_T tol ; real_T * lastU ; boolean_T guard1 = false ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { guard1 = false ; if ( ! ( lw0sy0o11jr . kvonjsymh5 == (
rtInf ) ) ) { if ( ( arol2xwgeua . c0jtinjrgp >= - 1.0 ) && ( arol2xwgeua .
c0jtinjrgp <= 1.0 ) ) { tol = bo1z0vnccp . FirstOrderHold_ErrTol ; } else if
( arol2xwgeua . c0jtinjrgp > 1.0 ) { tol = arol2xwgeua . c0jtinjrgp *
bo1z0vnccp . FirstOrderHold_ErrTol ; } else { tol = - ( arol2xwgeua .
c0jtinjrgp * bo1z0vnccp . FirstOrderHold_ErrTol ) ; } err = arol2xwgeua .
gh4eu0hgdx - arol2xwgeua . c0jtinjrgp ; if ( ( err > tol ) || ( err < - tol )
) { guard1 = true ; } else { lw0sy0o11jr . iw5r3fihha = ( arol2xwgeua .
c0jtinjrgp - lw0sy0o11jr . am1tetzj4p ) / ( ssGetT ( rtS ) - lw0sy0o11jr .
kvonjsymh5 ) ; lw0sy0o11jr . dsvgzsahab = arol2xwgeua . gh4eu0hgdx ; } } else
{ guard1 = true ; } if ( guard1 ) { if ( arol2xwgeua . c0jtinjrgp !=
arol2xwgeua . gh4eu0hgdx ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
lw0sy0o11jr . dsvgzsahab = arol2xwgeua . c0jtinjrgp ; lw0sy0o11jr .
iw5r3fihha = 0.0 ; } lw0sy0o11jr . am1tetzj4p = arol2xwgeua . c0jtinjrgp ;
lw0sy0o11jr . kvonjsymh5 = ssGetT ( rtS ) ; } ekz3w3o33e ( & ( lw0sy0o11jr .
jkb4b3hcqy . rtm ) , & ( lw0sy0o11jr . jkb4b3hcqy . rtdw ) ) ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { guard1 = false ; if ( ! ( lw0sy0o11jr .
hfmbz1d5vw == ( rtInf ) ) ) { if ( ( arol2xwgeua . akfb4dpcur >= - 1.0 ) && (
arol2xwgeua . akfb4dpcur <= 1.0 ) ) { tol = bo1z0vnccp .
FirstOrderHold_ErrTol_gdzadtrzfv ; } else if ( arol2xwgeua . akfb4dpcur > 1.0
) { tol = arol2xwgeua . akfb4dpcur * bo1z0vnccp .
FirstOrderHold_ErrTol_gdzadtrzfv ; } else { tol = - ( arol2xwgeua .
akfb4dpcur * bo1z0vnccp . FirstOrderHold_ErrTol_gdzadtrzfv ) ; } err =
arol2xwgeua . k4zvb232bn - arol2xwgeua . akfb4dpcur ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { lw0sy0o11jr . bo4hodedpa = (
arol2xwgeua . akfb4dpcur - lw0sy0o11jr . cm5tdkgoya ) / ( ssGetT ( rtS ) -
lw0sy0o11jr . hfmbz1d5vw ) ; lw0sy0o11jr . cd2xpetkh4 = arol2xwgeua .
k4zvb232bn ; } } else { guard1 = true ; } if ( guard1 ) { if ( arol2xwgeua .
akfb4dpcur != arol2xwgeua . k4zvb232bn ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lw0sy0o11jr .
cd2xpetkh4 = arol2xwgeua . akfb4dpcur ; lw0sy0o11jr . bo4hodedpa = 0.0 ; }
lw0sy0o11jr . cm5tdkgoya = arol2xwgeua . akfb4dpcur ; lw0sy0o11jr .
hfmbz1d5vw = ssGetT ( rtS ) ; guard1 = false ; if ( ! ( lw0sy0o11jr .
bkuu3yyjsl == ( rtInf ) ) ) { if ( ( arol2xwgeua . fi4crlath4 >= - 1.0 ) && (
arol2xwgeua . fi4crlath4 <= 1.0 ) ) { tol = bo1z0vnccp .
FirstOrderHold1_ErrTol ; } else if ( arol2xwgeua . fi4crlath4 > 1.0 ) { tol =
arol2xwgeua . fi4crlath4 * bo1z0vnccp . FirstOrderHold1_ErrTol ; } else { tol
= - ( arol2xwgeua . fi4crlath4 * bo1z0vnccp . FirstOrderHold1_ErrTol ) ; }
err = arol2xwgeua . nwobq5pehg - arol2xwgeua . fi4crlath4 ; if ( ( err > tol
) || ( err < - tol ) ) { guard1 = true ; } else { lw0sy0o11jr . eyagulv3eu =
( arol2xwgeua . fi4crlath4 - lw0sy0o11jr . evm1loz2xr ) / ( ssGetT ( rtS ) -
lw0sy0o11jr . bkuu3yyjsl ) ; lw0sy0o11jr . nez5k4mt2q = arol2xwgeua .
nwobq5pehg ; } } else { guard1 = true ; } if ( guard1 ) { if ( arol2xwgeua .
fi4crlath4 != arol2xwgeua . nwobq5pehg ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } lw0sy0o11jr .
nez5k4mt2q = arol2xwgeua . fi4crlath4 ; lw0sy0o11jr . eyagulv3eu = 0.0 ; }
lw0sy0o11jr . evm1loz2xr = arol2xwgeua . fi4crlath4 ; lw0sy0o11jr .
bkuu3yyjsl = ssGetT ( rtS ) ; } czx1gq31fm ( & ( lw0sy0o11jr . f2cw5vgug5 .
rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr . f2cw5vgug5 .
rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) ) ; if ( lw0sy0o11jr . mgx323pfpy ==
( rtInf ) ) { lw0sy0o11jr . mgx323pfpy = ssGetT ( rtS ) ; lastU = &
lw0sy0o11jr . lkzjqwrbzn ; } else if ( lw0sy0o11jr . naf5zf5ewa == ( rtInf )
) { lw0sy0o11jr . naf5zf5ewa = ssGetT ( rtS ) ; lastU = & lw0sy0o11jr .
a2bqy2lbvf ; } else if ( lw0sy0o11jr . mgx323pfpy < lw0sy0o11jr . naf5zf5ewa
) { lw0sy0o11jr . mgx323pfpy = ssGetT ( rtS ) ; lastU = & lw0sy0o11jr .
lkzjqwrbzn ; } else { lw0sy0o11jr . naf5zf5ewa = ssGetT ( rtS ) ; lastU = &
lw0sy0o11jr . a2bqy2lbvf ; } * lastU = arol2xwgeua . bg0r4hctuw ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { otjhyqv5ki ( & ( lw0sy0o11jr . jfaeol5er3 .
rtb ) , & ( lw0sy0o11jr . jfaeol5er3 . rtdw ) ) ; lw0sy0o11jr . mumtw2t4fy [
0 ] = arol2xwgeua . lpbnodzorb [ 0 ] ; lw0sy0o11jr . mumtw2t4fy [ 1 ] =
arol2xwgeua . lpbnodzorb [ 1 ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID6 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { hpb1o51mh3 * _rtXdot ; _rtXdot = ( ( hpb1o51mh3 * )
ssGetdX ( rtS ) ) ; _rtXdot -> gstwyn3q5a = 0.0 ; _rtXdot -> gstwyn3q5a +=
bo1z0vnccp . MotorCouplingDynamics_A * gtrdqgpqkfx . gstwyn3q5a ; _rtXdot ->
gstwyn3q5a += arol2xwgeua . evj5xoqrrj ; a2spfqi5as ( & ( lw0sy0o11jr .
jkb4b3hcqy . rtb ) , & ( lw0sy0o11jr . jkb4b3hcqy . rtdw ) , & ( gtrdqgpqkfx
. ietjokded4 ) , & ( ( ( hpb1o51mh3 * ) ssGetdX ( rtS ) ) -> ietjokded4 ) ) ;
imv3dllygl ( & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) , & arol2xwgeua .
ccugnyas5r , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) , & ( ( ( hpb1o51mh3 * )
ssGetdX ( rtS ) ) -> m5iyq5n2ct ) ) ; _rtXdot -> ksul3xbf4x = arol2xwgeua .
ggv2kf5x13 ; _rtXdot -> mbchhank0o = arol2xwgeua . ob5patswnz ; _rtXdot ->
k335v0wdxu = arol2xwgeua . dfgfnvbjkq ; _rtXdot -> pq24pxcnro = arol2xwgeua .
b2ehf0ulx5 ; } void MdlProjection ( void ) { mscgivy4fk ( & ( lw0sy0o11jr .
f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) ) ; } void
MdlForcingFunction ( void ) { hpb1o51mh3 * _rtXdot ; _rtXdot = ( ( hpb1o51mh3
* ) ssGetdX ( rtS ) ) ; _rtXdot -> gstwyn3q5a = 0.0 ; _rtXdot -> gstwyn3q5a
+= bo1z0vnccp . MotorCouplingDynamics_A * gtrdqgpqkfx . gstwyn3q5a ; _rtXdot
-> gstwyn3q5a += arol2xwgeua . evj5xoqrrj ; a2spfqi5as ( & ( lw0sy0o11jr .
jkb4b3hcqy . rtb ) , & ( lw0sy0o11jr . jkb4b3hcqy . rtdw ) , & ( gtrdqgpqkfx
. ietjokded4 ) , & ( ( ( hpb1o51mh3 * ) ssGetdX ( rtS ) ) -> ietjokded4 ) ) ;
iyhavcqilr ( & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) , & arol2xwgeua .
ccugnyas5r , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) , & ( ( ( hpb1o51mh3 * )
ssGetdX ( rtS ) ) -> m5iyq5n2ct ) ) ; _rtXdot -> ksul3xbf4x = arol2xwgeua .
ggv2kf5x13 ; _rtXdot -> mbchhank0o = arol2xwgeua . ob5patswnz ; _rtXdot ->
k335v0wdxu = arol2xwgeua . dfgfnvbjkq ; _rtXdot -> pq24pxcnro = arol2xwgeua .
b2ehf0ulx5 ; } void MdlMassMatrix ( void ) { bpia4crzhf ( & ( lw0sy0o11jr .
f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) ) ; } void
MdlZeroCrossings ( void ) { mnwdf2fetg * _rtZCSV ; _rtZCSV = ( ( mnwdf2fetg *
) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> fjxfckhbpi = arol2xwgeua .
mdtyud1uco - bo1z0vnccp . pause_time_Value ; abih3gg12y ( & ( lw0sy0o11jr .
f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtb ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct ) , & ( ( ( mnwdf2fetg * )
ssGetSolverZcSignalVector ( rtS ) ) -> pnytuy05dq ) ) ; _rtZCSV -> haml3r3buk
= arol2xwgeua . c1yh21bbxg - bo1z0vnccp . Saturation1_UpperSat ; _rtZCSV ->
f3pm3langs = arol2xwgeua . c1yh21bbxg - bo1z0vnccp . Saturation1_LowerSat ;
_rtZCSV -> haca2ktl4e = arol2xwgeua . hnspac23rl - bo1z0vnccp .
Saturation_UpperSat ; _rtZCSV -> hbjn53qhmd = arol2xwgeua . hnspac23rl -
bo1z0vnccp . Saturation_LowerSat ; _rtZCSV -> ohhfbatyhl = arol2xwgeua .
k0miwqwhp4 - bo1z0vnccp . Saturation_UpperSat_i5ock22ux5 ; _rtZCSV ->
cfqa4pb0am = arol2xwgeua . k0miwqwhp4 - bo1z0vnccp .
Saturation_LowerSat_lcopxrfjqs ; _rtZCSV -> hugs3seba2 = arol2xwgeua .
kyvnagqwsz - bo1z0vnccp . Constant_Value ; _rtZCSV -> bbjxsxtbos =
arol2xwgeua . pwqsmmfyxm - bo1z0vnccp . HitCrossing_Offset ; } void
MdlTerminate ( void ) { bsdghwadnz ( & ( lw0sy0o11jr . jfaeol5er3 . rtm ) ) ;
ekywbf3nku ( & ( lw0sy0o11jr . jkb4b3hcqy . rtm ) ) ; mt14yrnbuj ( & (
lw0sy0o11jr . f2cw5vgug5 . rtdw ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) ) ;
irfppkdltu ( & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr .
f2cw5vgug5 . rtdw ) ) ; { if ( lw0sy0o11jr . jfjzwnxtuk . AQHandles ) {
sdiTerminateStreaming ( & lw0sy0o11jr . jfjzwnxtuk . AQHandles ) ; } } { if (
lw0sy0o11jr . alsymnf2nf . AQHandles ) { sdiTerminateStreaming ( &
lw0sy0o11jr . alsymnf2nf . AQHandles ) ; } } { if ( lw0sy0o11jr . h4dlhxn3ru
. AQHandles ) { sdiTerminateStreaming ( & lw0sy0o11jr . h4dlhxn3ru .
AQHandles ) ; } } { if ( lw0sy0o11jr . jfjzwnxtukc . AQHandles ) {
sdiTerminateStreaming ( & lw0sy0o11jr . jfjzwnxtukc . AQHandles ) ; } } { if
( lw0sy0o11jr . nyib12dh5l . AQHandles ) { sdiTerminateStreaming ( &
lw0sy0o11jr . nyib12dh5l . AQHandles ) ; } } { if ( lw0sy0o11jr . epffddpn0z
. AQHandles ) { sdiTerminateStreaming ( & lw0sy0o11jr . epffddpn0z .
AQHandles ) ; } } { if ( lw0sy0o11jr . alsymnf2nfl . AQHandles ) {
sdiTerminateStreaming ( & lw0sy0o11jr . alsymnf2nfl . AQHandles ) ; } } { if
( lw0sy0o11jr . h4dlhxn3rui . AQHandles ) { sdiTerminateStreaming ( &
lw0sy0o11jr . h4dlhxn3rui . AQHandles ) ; } } } static void
mr_FCEvReferenceApplication_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_FCEvReferenceApplication_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_FCEvReferenceApplication_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_FCEvReferenceApplication_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_FCEvReferenceApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_FCEvReferenceApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_FCEvReferenceApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_FCEvReferenceApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_FCEvReferenceApplication_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_FCEvReferenceApplication_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_FCEvReferenceApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_FCEvReferenceApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_FCEvReferenceApplication_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_FCEvReferenceApplication_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_FCEvReferenceApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_FCEvReferenceApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_FCEvReferenceApplication_GetDWork ( )
{ static const char * ssDWFieldNames [ 3 ] = { "arol2xwgeua" , "lw0sy0o11jr"
, "NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( ssDW , 0
, 0 , ( const void * ) & ( arol2xwgeua ) , sizeof ( arol2xwgeua ) ) ; {
static const char * rtdwDataFieldNames [ 73 ] = { "lw0sy0o11jr.jkb4b3hcqy" ,
"lw0sy0o11jr.f2cw5vgug5" , "lw0sy0o11jr.jfaeol5er3" ,
"lw0sy0o11jr.mumtw2t4fy" , "lw0sy0o11jr.kvonjsymh5" ,
"lw0sy0o11jr.dsvgzsahab" , "lw0sy0o11jr.iw5r3fihha" ,
"lw0sy0o11jr.am1tetzj4p" , "lw0sy0o11jr.lxkfwihbro" ,
"lw0sy0o11jr.cqehw34o0h" , "lw0sy0o11jr.hfmbz1d5vw" ,
"lw0sy0o11jr.cd2xpetkh4" , "lw0sy0o11jr.bo4hodedpa" ,
"lw0sy0o11jr.cm5tdkgoya" , "lw0sy0o11jr.bkuu3yyjsl" ,
"lw0sy0o11jr.nez5k4mt2q" , "lw0sy0o11jr.eyagulv3eu" ,
"lw0sy0o11jr.evm1loz2xr" , "lw0sy0o11jr.ahnghn4brt" ,
"lw0sy0o11jr.cl5g0rwk2e" , "lw0sy0o11jr.filyznw4an" ,
"lw0sy0o11jr.fmivgn3dll" , "lw0sy0o11jr.ab044e5fyd" ,
"lw0sy0o11jr.bus0ytb1zk" , "lw0sy0o11jr.mgx323pfpy" ,
"lw0sy0o11jr.lkzjqwrbzn" , "lw0sy0o11jr.naf5zf5ewa" ,
"lw0sy0o11jr.a2bqy2lbvf" , "lw0sy0o11jr.mhjabgx12v" ,
"lw0sy0o11jr.flieyulmtp" , "lw0sy0o11jr.mzpieghwj5" ,
"lw0sy0o11jr.itjxrblkjw" , "lw0sy0o11jr.kyu2utgbhq" ,
"lw0sy0o11jr.ayylq5cimi" , "lw0sy0o11jr.ghmgweglut" ,
"lw0sy0o11jr.gjzj5p0bc1" , "lw0sy0o11jr.pn5h0qud2t" ,
"lw0sy0o11jr.lddh2eciz1" , "lw0sy0o11jr.bsds3pyzel" ,
"lw0sy0o11jr.cuuxgkcmrh" , "lw0sy0o11jr.jx2b1t4erw" ,
"lw0sy0o11jr.ahou0vl2z3" , "lw0sy0o11jr.pjfrrptm45" ,
"lw0sy0o11jr.nmxkq34d03" , "lw0sy0o11jr.noc02rvf4u" ,
"lw0sy0o11jr.id1a31qwaj" , "lw0sy0o11jr.jskwu05yzr" ,
"lw0sy0o11jr.agsuq5sl52" , "lw0sy0o11jr.aqmbdilrtq" ,
"lw0sy0o11jr.fondni20e2" , "lw0sy0o11jr.kyjqeczcx2" ,
"lw0sy0o11jr.axxnlh2wvc" , "lw0sy0o11jr.p4tvqhnquk" ,
"lw0sy0o11jr.gc5sh1wkwt" , "lw0sy0o11jr.aq2j102lks" ,
"lw0sy0o11jr.gzgin33ia0" , "lw0sy0o11jr.pv4mryn5kw" ,
"lw0sy0o11jr.bz2xjgs4w4" , "lw0sy0o11jr.jawpdqhxq5" ,
"lw0sy0o11jr.pvituonzi0" , "lw0sy0o11jr.oztkmm3ipn" ,
"lw0sy0o11jr.dl1wjiyyo5" , "lw0sy0o11jr.fp52fvpgcn" ,
"lw0sy0o11jr.mmgm2ezxm5" , "lw0sy0o11jr.mbvoiiw20z" ,
"lw0sy0o11jr.draduovrmv" , "lw0sy0o11jr.lzrdwg5jtp" ,
"lw0sy0o11jr.nx4k1o3c2b" , "lw0sy0o11jr.im32k3bxdo" ,
"lw0sy0o11jr.dxcv00k5uk.g1iyf3f52k" , "lw0sy0o11jr.dxcv00k5uk.flozbskedr" ,
"lw0sy0o11jr.mfp3l0luimk.g1iyf3f52k" , "lw0sy0o11jr.mfp3l0luimk.flozbskedr" ,
} ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 73 ,
rtdwDataFieldNames ) ; { mxArray * varData = mr_DrivetrainEv_GetDWork ( & (
lw0sy0o11jr . jkb4b3hcqy ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_FCElectricPlant_GetDWork ( & (
lw0sy0o11jr . f2cw5vgug5 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 ,
varData ) ; } { mxArray * varData = mr_FCEvPowertrainController_GetDWork ( &
( lw0sy0o11jr . jfaeol5er3 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 ,
varData ) ; } mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 ,
3 , ( const void * ) & ( lw0sy0o11jr . mumtw2t4fy ) , sizeof ( lw0sy0o11jr .
mumtw2t4fy ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 4 , ( const void * ) & ( lw0sy0o11jr . kvonjsymh5 ) , sizeof (
lw0sy0o11jr . kvonjsymh5 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 5 , ( const void * ) & ( lw0sy0o11jr . dsvgzsahab ) , sizeof
( lw0sy0o11jr . dsvgzsahab ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( lw0sy0o11jr . iw5r3fihha ) , sizeof ( lw0sy0o11jr . iw5r3fihha )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 7 , (
const void * ) & ( lw0sy0o11jr . am1tetzj4p ) , sizeof ( lw0sy0o11jr .
am1tetzj4p ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 8 , ( const void * ) & ( lw0sy0o11jr . lxkfwihbro ) , sizeof (
lw0sy0o11jr . lxkfwihbro ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 9 , ( const void * ) & ( lw0sy0o11jr . cqehw34o0h ) , sizeof
( lw0sy0o11jr . cqehw34o0h ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( lw0sy0o11jr . hfmbz1d5vw ) , sizeof ( lw0sy0o11jr . hfmbz1d5vw )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( lw0sy0o11jr . cd2xpetkh4 ) , sizeof ( lw0sy0o11jr .
cd2xpetkh4 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 12 , ( const void * ) & ( lw0sy0o11jr . bo4hodedpa ) , sizeof (
lw0sy0o11jr . bo4hodedpa ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 13 , ( const void * ) & ( lw0sy0o11jr . cm5tdkgoya ) ,
sizeof ( lw0sy0o11jr . cm5tdkgoya ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( lw0sy0o11jr . bkuu3yyjsl ) , sizeof ( lw0sy0o11jr . bkuu3yyjsl )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 15 , (
const void * ) & ( lw0sy0o11jr . nez5k4mt2q ) , sizeof ( lw0sy0o11jr .
nez5k4mt2q ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 16 , ( const void * ) & ( lw0sy0o11jr . eyagulv3eu ) , sizeof (
lw0sy0o11jr . eyagulv3eu ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 17 , ( const void * ) & ( lw0sy0o11jr . evm1loz2xr ) ,
sizeof ( lw0sy0o11jr . evm1loz2xr ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( lw0sy0o11jr . ahnghn4brt ) , sizeof ( lw0sy0o11jr . ahnghn4brt )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 19 , (
const void * ) & ( lw0sy0o11jr . cl5g0rwk2e ) , sizeof ( lw0sy0o11jr .
cl5g0rwk2e ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 20 , ( const void * ) & ( lw0sy0o11jr . filyznw4an ) , sizeof (
lw0sy0o11jr . filyznw4an ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 21 , ( const void * ) & ( lw0sy0o11jr . fmivgn3dll ) ,
sizeof ( lw0sy0o11jr . fmivgn3dll ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( lw0sy0o11jr . ab044e5fyd ) , sizeof ( lw0sy0o11jr . ab044e5fyd )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 23 , (
const void * ) & ( lw0sy0o11jr . bus0ytb1zk ) , sizeof ( lw0sy0o11jr .
bus0ytb1zk ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 24 , ( const void * ) & ( lw0sy0o11jr . mgx323pfpy ) , sizeof (
lw0sy0o11jr . mgx323pfpy ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 25 , ( const void * ) & ( lw0sy0o11jr . lkzjqwrbzn ) ,
sizeof ( lw0sy0o11jr . lkzjqwrbzn ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( lw0sy0o11jr . naf5zf5ewa ) , sizeof ( lw0sy0o11jr . naf5zf5ewa )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 27 , (
const void * ) & ( lw0sy0o11jr . a2bqy2lbvf ) , sizeof ( lw0sy0o11jr .
a2bqy2lbvf ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 28 , ( const void * ) & ( lw0sy0o11jr . mhjabgx12v ) , sizeof (
lw0sy0o11jr . mhjabgx12v ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 29 , ( const void * ) & ( lw0sy0o11jr . flieyulmtp ) ,
sizeof ( lw0sy0o11jr . flieyulmtp ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( lw0sy0o11jr . mzpieghwj5 ) , sizeof ( lw0sy0o11jr . mzpieghwj5 )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 31 , (
const void * ) & ( lw0sy0o11jr . itjxrblkjw ) , sizeof ( lw0sy0o11jr .
itjxrblkjw ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 32 , ( const void * ) & ( lw0sy0o11jr . kyu2utgbhq ) , sizeof (
lw0sy0o11jr . kyu2utgbhq ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 33 , ( const void * ) & ( lw0sy0o11jr . ayylq5cimi ) ,
sizeof ( lw0sy0o11jr . ayylq5cimi ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( lw0sy0o11jr . ghmgweglut ) , sizeof ( lw0sy0o11jr . ghmgweglut )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 35 , (
const void * ) & ( lw0sy0o11jr . gjzj5p0bc1 ) , sizeof ( lw0sy0o11jr .
gjzj5p0bc1 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 36 , ( const void * ) & ( lw0sy0o11jr . pn5h0qud2t ) , sizeof (
lw0sy0o11jr . pn5h0qud2t ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 37 , ( const void * ) & ( lw0sy0o11jr . lddh2eciz1 ) ,
sizeof ( lw0sy0o11jr . lddh2eciz1 ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const
void * ) & ( lw0sy0o11jr . bsds3pyzel ) , sizeof ( lw0sy0o11jr . bsds3pyzel )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 39 , (
const void * ) & ( lw0sy0o11jr . cuuxgkcmrh ) , sizeof ( lw0sy0o11jr .
cuuxgkcmrh ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 40 , ( const void * ) & ( lw0sy0o11jr . jx2b1t4erw ) , sizeof (
lw0sy0o11jr . jx2b1t4erw ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 41 , ( const void * ) & ( lw0sy0o11jr . ahou0vl2z3 ) ,
sizeof ( lw0sy0o11jr . ahou0vl2z3 ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( lw0sy0o11jr . pjfrrptm45 ) , sizeof ( lw0sy0o11jr . pjfrrptm45 )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 43 , (
const void * ) & ( lw0sy0o11jr . nmxkq34d03 ) , sizeof ( lw0sy0o11jr .
nmxkq34d03 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 44 , ( const void * ) & ( lw0sy0o11jr . noc02rvf4u ) , sizeof (
lw0sy0o11jr . noc02rvf4u ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 45 , ( const void * ) & ( lw0sy0o11jr . id1a31qwaj ) ,
sizeof ( lw0sy0o11jr . id1a31qwaj ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const
void * ) & ( lw0sy0o11jr . jskwu05yzr ) , sizeof ( lw0sy0o11jr . jskwu05yzr )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 47 , (
const void * ) & ( lw0sy0o11jr . agsuq5sl52 ) , sizeof ( lw0sy0o11jr .
agsuq5sl52 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 48 , ( const void * ) & ( lw0sy0o11jr . aqmbdilrtq ) , sizeof (
lw0sy0o11jr . aqmbdilrtq ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 49 , ( const void * ) & ( lw0sy0o11jr . fondni20e2 ) ,
sizeof ( lw0sy0o11jr . fondni20e2 ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const
void * ) & ( lw0sy0o11jr . kyjqeczcx2 ) , sizeof ( lw0sy0o11jr . kyjqeczcx2 )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 51 , (
const void * ) & ( lw0sy0o11jr . axxnlh2wvc ) , sizeof ( lw0sy0o11jr .
axxnlh2wvc ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 52 , ( const void * ) & ( lw0sy0o11jr . p4tvqhnquk ) , sizeof (
lw0sy0o11jr . p4tvqhnquk ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 53 , ( const void * ) & ( lw0sy0o11jr . gc5sh1wkwt ) ,
sizeof ( lw0sy0o11jr . gc5sh1wkwt ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const
void * ) & ( lw0sy0o11jr . aq2j102lks ) , sizeof ( lw0sy0o11jr . aq2j102lks )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 55 , (
const void * ) & ( lw0sy0o11jr . gzgin33ia0 ) , sizeof ( lw0sy0o11jr .
gzgin33ia0 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 56 , ( const void * ) & ( lw0sy0o11jr . pv4mryn5kw ) , sizeof (
lw0sy0o11jr . pv4mryn5kw ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 57 , ( const void * ) & ( lw0sy0o11jr . bz2xjgs4w4 ) ,
sizeof ( lw0sy0o11jr . bz2xjgs4w4 ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const
void * ) & ( lw0sy0o11jr . jawpdqhxq5 ) , sizeof ( lw0sy0o11jr . jawpdqhxq5 )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 59 , (
const void * ) & ( lw0sy0o11jr . pvituonzi0 ) , sizeof ( lw0sy0o11jr .
pvituonzi0 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 60 , ( const void * ) & ( lw0sy0o11jr . oztkmm3ipn ) , sizeof (
lw0sy0o11jr . oztkmm3ipn ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 61 , ( const void * ) & ( lw0sy0o11jr . dl1wjiyyo5 ) ,
sizeof ( lw0sy0o11jr . dl1wjiyyo5 ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const
void * ) & ( lw0sy0o11jr . fp52fvpgcn ) , sizeof ( lw0sy0o11jr . fp52fvpgcn )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 63 , (
const void * ) & ( lw0sy0o11jr . mmgm2ezxm5 ) , sizeof ( lw0sy0o11jr .
mmgm2ezxm5 ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 64 , ( const void * ) & ( lw0sy0o11jr . mbvoiiw20z ) , sizeof (
lw0sy0o11jr . mbvoiiw20z ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 65 , ( const void * ) & ( lw0sy0o11jr . draduovrmv ) ,
sizeof ( lw0sy0o11jr . draduovrmv ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const
void * ) & ( lw0sy0o11jr . lzrdwg5jtp ) , sizeof ( lw0sy0o11jr . lzrdwg5jtp )
) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 67 , (
const void * ) & ( lw0sy0o11jr . nx4k1o3c2b ) , sizeof ( lw0sy0o11jr .
nx4k1o3c2b ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 68 , ( const void * ) & ( lw0sy0o11jr . im32k3bxdo ) , sizeof (
lw0sy0o11jr . im32k3bxdo ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 69 , ( const void * ) & ( lw0sy0o11jr . dxcv00k5uk .
g1iyf3f52k ) , sizeof ( lw0sy0o11jr . dxcv00k5uk . g1iyf3f52k ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const
void * ) & ( lw0sy0o11jr . dxcv00k5uk . flozbskedr ) , sizeof ( lw0sy0o11jr .
dxcv00k5uk . flozbskedr ) ) ; mr_FCEvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 71 , ( const void * ) & ( lw0sy0o11jr . mfp3l0luimk .
g1iyf3f52k ) , sizeof ( lw0sy0o11jr . mfp3l0luimk . g1iyf3f52k ) ) ;
mr_FCEvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const
void * ) & ( lw0sy0o11jr . mfp3l0luimk . flozbskedr ) , sizeof ( lw0sy0o11jr
. mfp3l0luimk . flozbskedr ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } return ssDW ; } void mr_FCEvReferenceApplication_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
arol2xwgeua ) , ssDW , 0 , 0 , sizeof ( arol2xwgeua ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_DrivetrainEv_SetDWork ( &
( lw0sy0o11jr . jkb4b3hcqy ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_FCElectricPlant_SetDWork ( & ( lw0sy0o11jr . f2cw5vgug5 ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ;
mr_FCEvPowertrainController_SetDWork ( & ( lw0sy0o11jr . jfaeol5er3 ) ,
mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . mumtw2t4fy ) , rtdwData , 0 , 3 , sizeof ( lw0sy0o11jr .
mumtw2t4fy ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . kvonjsymh5 ) , rtdwData , 0 , 4 , sizeof ( lw0sy0o11jr
. kvonjsymh5 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . dsvgzsahab ) , rtdwData , 0 , 5 , sizeof (
lw0sy0o11jr . dsvgzsahab ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . iw5r3fihha ) , rtdwData , 0 , 6 , sizeof ( lw0sy0o11jr .
iw5r3fihha ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . am1tetzj4p ) , rtdwData , 0 , 7 , sizeof ( lw0sy0o11jr
. am1tetzj4p ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . lxkfwihbro ) , rtdwData , 0 , 8 , sizeof (
lw0sy0o11jr . lxkfwihbro ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . cqehw34o0h ) , rtdwData , 0 , 9 , sizeof ( lw0sy0o11jr .
cqehw34o0h ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . hfmbz1d5vw ) , rtdwData , 0 , 10 , sizeof ( lw0sy0o11jr
. hfmbz1d5vw ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . cd2xpetkh4 ) , rtdwData , 0 , 11 , sizeof (
lw0sy0o11jr . cd2xpetkh4 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . bo4hodedpa ) , rtdwData , 0 , 12 , sizeof ( lw0sy0o11jr .
bo4hodedpa ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . cm5tdkgoya ) , rtdwData , 0 , 13 , sizeof ( lw0sy0o11jr
. cm5tdkgoya ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . bkuu3yyjsl ) , rtdwData , 0 , 14 , sizeof (
lw0sy0o11jr . bkuu3yyjsl ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . nez5k4mt2q ) , rtdwData , 0 , 15 , sizeof ( lw0sy0o11jr .
nez5k4mt2q ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . eyagulv3eu ) , rtdwData , 0 , 16 , sizeof ( lw0sy0o11jr
. eyagulv3eu ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . evm1loz2xr ) , rtdwData , 0 , 17 , sizeof (
lw0sy0o11jr . evm1loz2xr ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . ahnghn4brt ) , rtdwData , 0 , 18 , sizeof ( lw0sy0o11jr .
ahnghn4brt ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . cl5g0rwk2e ) , rtdwData , 0 , 19 , sizeof ( lw0sy0o11jr
. cl5g0rwk2e ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . filyznw4an ) , rtdwData , 0 , 20 , sizeof (
lw0sy0o11jr . filyznw4an ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . fmivgn3dll ) , rtdwData , 0 , 21 , sizeof ( lw0sy0o11jr .
fmivgn3dll ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . ab044e5fyd ) , rtdwData , 0 , 22 , sizeof ( lw0sy0o11jr
. ab044e5fyd ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . bus0ytb1zk ) , rtdwData , 0 , 23 , sizeof (
lw0sy0o11jr . bus0ytb1zk ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . mgx323pfpy ) , rtdwData , 0 , 24 , sizeof ( lw0sy0o11jr .
mgx323pfpy ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . lkzjqwrbzn ) , rtdwData , 0 , 25 , sizeof ( lw0sy0o11jr
. lkzjqwrbzn ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . naf5zf5ewa ) , rtdwData , 0 , 26 , sizeof (
lw0sy0o11jr . naf5zf5ewa ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . a2bqy2lbvf ) , rtdwData , 0 , 27 , sizeof ( lw0sy0o11jr .
a2bqy2lbvf ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . mhjabgx12v ) , rtdwData , 0 , 28 , sizeof ( lw0sy0o11jr
. mhjabgx12v ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . flieyulmtp ) , rtdwData , 0 , 29 , sizeof (
lw0sy0o11jr . flieyulmtp ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . mzpieghwj5 ) , rtdwData , 0 , 30 , sizeof ( lw0sy0o11jr .
mzpieghwj5 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . itjxrblkjw ) , rtdwData , 0 , 31 , sizeof ( lw0sy0o11jr
. itjxrblkjw ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . kyu2utgbhq ) , rtdwData , 0 , 32 , sizeof (
lw0sy0o11jr . kyu2utgbhq ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . ayylq5cimi ) , rtdwData , 0 , 33 , sizeof ( lw0sy0o11jr .
ayylq5cimi ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . ghmgweglut ) , rtdwData , 0 , 34 , sizeof ( lw0sy0o11jr
. ghmgweglut ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . gjzj5p0bc1 ) , rtdwData , 0 , 35 , sizeof (
lw0sy0o11jr . gjzj5p0bc1 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . pn5h0qud2t ) , rtdwData , 0 , 36 , sizeof ( lw0sy0o11jr .
pn5h0qud2t ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . lddh2eciz1 ) , rtdwData , 0 , 37 , sizeof ( lw0sy0o11jr
. lddh2eciz1 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . bsds3pyzel ) , rtdwData , 0 , 38 , sizeof (
lw0sy0o11jr . bsds3pyzel ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . cuuxgkcmrh ) , rtdwData , 0 , 39 , sizeof ( lw0sy0o11jr .
cuuxgkcmrh ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . jx2b1t4erw ) , rtdwData , 0 , 40 , sizeof ( lw0sy0o11jr
. jx2b1t4erw ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . ahou0vl2z3 ) , rtdwData , 0 , 41 , sizeof (
lw0sy0o11jr . ahou0vl2z3 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . pjfrrptm45 ) , rtdwData , 0 , 42 , sizeof ( lw0sy0o11jr .
pjfrrptm45 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . nmxkq34d03 ) , rtdwData , 0 , 43 , sizeof ( lw0sy0o11jr
. nmxkq34d03 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . noc02rvf4u ) , rtdwData , 0 , 44 , sizeof (
lw0sy0o11jr . noc02rvf4u ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . id1a31qwaj ) , rtdwData , 0 , 45 , sizeof ( lw0sy0o11jr .
id1a31qwaj ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . jskwu05yzr ) , rtdwData , 0 , 46 , sizeof ( lw0sy0o11jr
. jskwu05yzr ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . agsuq5sl52 ) , rtdwData , 0 , 47 , sizeof (
lw0sy0o11jr . agsuq5sl52 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . aqmbdilrtq ) , rtdwData , 0 , 48 , sizeof ( lw0sy0o11jr .
aqmbdilrtq ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . fondni20e2 ) , rtdwData , 0 , 49 , sizeof ( lw0sy0o11jr
. fondni20e2 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . kyjqeczcx2 ) , rtdwData , 0 , 50 , sizeof (
lw0sy0o11jr . kyjqeczcx2 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . axxnlh2wvc ) , rtdwData , 0 , 51 , sizeof ( lw0sy0o11jr .
axxnlh2wvc ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . p4tvqhnquk ) , rtdwData , 0 , 52 , sizeof ( lw0sy0o11jr
. p4tvqhnquk ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . gc5sh1wkwt ) , rtdwData , 0 , 53 , sizeof (
lw0sy0o11jr . gc5sh1wkwt ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . aq2j102lks ) , rtdwData , 0 , 54 , sizeof ( lw0sy0o11jr .
aq2j102lks ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . gzgin33ia0 ) , rtdwData , 0 , 55 , sizeof ( lw0sy0o11jr
. gzgin33ia0 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . pv4mryn5kw ) , rtdwData , 0 , 56 , sizeof (
lw0sy0o11jr . pv4mryn5kw ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . bz2xjgs4w4 ) , rtdwData , 0 , 57 , sizeof ( lw0sy0o11jr .
bz2xjgs4w4 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . jawpdqhxq5 ) , rtdwData , 0 , 58 , sizeof ( lw0sy0o11jr
. jawpdqhxq5 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . pvituonzi0 ) , rtdwData , 0 , 59 , sizeof (
lw0sy0o11jr . pvituonzi0 ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . oztkmm3ipn ) , rtdwData , 0 , 60 , sizeof ( lw0sy0o11jr .
oztkmm3ipn ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . dl1wjiyyo5 ) , rtdwData , 0 , 61 , sizeof ( lw0sy0o11jr
. dl1wjiyyo5 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . fp52fvpgcn ) , rtdwData , 0 , 62 , sizeof (
lw0sy0o11jr . fp52fvpgcn ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . mmgm2ezxm5 ) , rtdwData , 0 , 63 , sizeof ( lw0sy0o11jr .
mmgm2ezxm5 ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . mbvoiiw20z ) , rtdwData , 0 , 64 , sizeof ( lw0sy0o11jr
. mbvoiiw20z ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . draduovrmv ) , rtdwData , 0 , 65 , sizeof (
lw0sy0o11jr . draduovrmv ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . lzrdwg5jtp ) , rtdwData , 0 , 66 , sizeof ( lw0sy0o11jr .
lzrdwg5jtp ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void
* ) & ( lw0sy0o11jr . nx4k1o3c2b ) , rtdwData , 0 , 67 , sizeof ( lw0sy0o11jr
. nx4k1o3c2b ) ) ; mr_FCEvReferenceApplication_restoreDataFromMxArray ( (
void * ) & ( lw0sy0o11jr . im32k3bxdo ) , rtdwData , 0 , 68 , sizeof (
lw0sy0o11jr . im32k3bxdo ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . dxcv00k5uk . g1iyf3f52k ) , rtdwData , 0 , 69 , sizeof (
lw0sy0o11jr . dxcv00k5uk . g1iyf3f52k ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . dxcv00k5uk . flozbskedr ) , rtdwData , 0 , 70 , sizeof (
lw0sy0o11jr . dxcv00k5uk . flozbskedr ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . mfp3l0luimk . g1iyf3f52k ) , rtdwData , 0 , 71 , sizeof (
lw0sy0o11jr . mfp3l0luimk . g1iyf3f52k ) ) ;
mr_FCEvReferenceApplication_restoreDataFromMxArray ( ( void * ) & (
lw0sy0o11jr . mfp3l0luimk . flozbskedr ) , rtdwData , 0 , 72 , sizeof (
lw0sy0o11jr . mfp3l0luimk . flozbskedr ) ) ; } } mxArray *
mr_FCEvReferenceApplication_GetSimStateDisallowedBlocks ( ) { mxArray * data
= NULL ; mwIndex subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks
= 0 ; size_t numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 3 ] ;
disallowedBlocksInChild [ 0 ] = mr_DrivetrainEv_GetSimStateDisallowedBlocks (
) ; disallowedBlocksInChild [ 1 ] =
mr_FCElectricPlant_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild
[ 2 ] = mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( ) ; {
size_t i ; for ( i = 0 ; i < 3 ; ++ i ) { mxArray * data_i =
disallowedBlocksInChild [ i ] ; if ( ( NULL ) != data_i ) { if ( 0 ==
numChildrenWithDisallowedBlocks ++ ) { data = data_i ; } numBlocks += mxGetM
( data_i ) ; } } } data = mxCreateCellMatrix ( numBlocks + 3 , 3 ) ; { static
const char * blockType [ 3 ] = { "Scope" , "Scope" , "Scope" , } ; static
const char * blockPath [ 3 ] = {
"FCEvReferenceApplication/Visualization/Performance and FE Scope" ,
"FCEvReferenceApplication/Visualization/Scope" ,
"FCEvReferenceApplication/Scope" , } ; static const int reason [ 3 ] = { 0 ,
0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ; ++ ( subs [ 0 ] ) ) {
subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } { size_t i ; for ( i = 0 ; i < 3 ; ++ i ) { mxArray * data_i
= disallowedBlocksInChild [ i ] ; if ( ( NULL ) != data_i ) { mwIndex subs_i
[ 2 ] , offset_i ; const mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ;
for ( subs_i [ 0 ] = 0 ; subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) {
mwIndex j ; for ( j = 0 ; j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] =
j ; offset_i = mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij =
mxGetCell ( data_i , offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ;
subs [ 1 ] = j ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; }
mxDestroyArray ( data_i ) ; } } } return data ; } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 528 ) ; ssSetNumPeriodicContStates ( rtS
, 1 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ;
ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 6 ) ;
ssSetNumBlocks ( rtS , 155 ) ; ssSetNumBlockIO ( rtS , 88 ) ;
ssSetNumBlockParams ( rtS , 2811 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.01 ) ; ssSetSampleTime ( rtS , 3 , 0.1 ) ;
ssSetSampleTime ( rtS , 4 , 0.5 ) ; ssSetSampleTime ( rtS , 5 , 1.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; ssSetOffsetTime ( rtS , 5 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 869903735U ) ;
ssSetChecksumVal ( rtS , 1 , 1051471062U ) ; ssSetChecksumVal ( rtS , 2 ,
1937168891U ) ; ssSetChecksumVal ( rtS , 3 , 3224586444U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & arol2xwgeua ) ) ; ( void ) memset ( ( ( void * ) & arol2xwgeua
) , 0 , sizeof ( arol2xwgeu ) ) ; } { real_T * x = ( real_T * ) & gtrdqgpqkfx
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
gtrdqgpqkf ) ) ; } { void * dwork = ( void * ) & lw0sy0o11jr ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( lw0sy0o11j ) ) ; } {
lw0sy0o11jr . im32k3bxdo = 21 ; } { static DataTypeTransInfo dtInfo ; ( void
) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 26 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } FCEvReferenceApplication_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"FCEvReferenceApplication" ) ; ssSetPath ( rtS , "FCEvReferenceApplication" )
; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 1369.0 ) ; k2oudzyk03 ( rtS
, 2 , 0 , & ( lw0sy0o11jr . jfaeol5er3 . rtm ) , & ( lw0sy0o11jr . jfaeol5er3
. rtb ) , & ( lw0sy0o11jr . jfaeol5er3 . rtdw ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" , 0 ,
- 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lw0sy0o11jr . jfaeol5er3
. rtm ) , sizeof ( lw0sy0o11jr . jfaeol5er3 . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"FCEvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } ktxb3gprz3 ( rtS , 0 ,
1 , 0 , & ( lw0sy0o11jr . jkb4b3hcqy . rtm ) , & ( lw0sy0o11jr . jkb4b3hcqy .
rtb ) , & ( lw0sy0o11jr . jkb4b3hcqy . rtdw ) , & ( gtrdqgpqkfx . ietjokded4
) , & ( lw0sy0o11jr . jkb4b3hcqy . rtzce ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "FCEvReferenceApplication/Passenger Car/Drivetrain" , 1 , 1 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lw0sy0o11jr . jkb4b3hcqy . rtm )
, sizeof ( lw0sy0o11jr . jkb4b3hcqy . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "FCEvReferenceApplication/Passenger Car/Drivetrain" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } axkawtnuua ( rtS , 0 ,
1 , 0 , & ( lw0sy0o11jr . f2cw5vgug5 . rtm ) , & ( lw0sy0o11jr . f2cw5vgug5 .
rtb ) , & ( lw0sy0o11jr . f2cw5vgug5 . rtdw ) , & ( gtrdqgpqkfx . m5iyq5n2ct
) , & ( lw0sy0o11jr . f2cw5vgug5 . rtzce ) , & ( amt5hqyor4n . pr [
lw0sy0o11jr . im32k3bxdo ] ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"FCEvReferenceApplication/Passenger Car/Electric Plant" , 2 , 21 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( lw0sy0o11jr . f2cw5vgug5 . rtm )
, sizeof ( lw0sy0o11jr . f2cw5vgug5 . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "FCEvReferenceApplication/Passenger Car/Electric Plant"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , m44wadfesjn ) ;
( void ) memset ( ( void * ) m44wadfesjn , 0 , 1 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , gag0esqvheg ) ; ( void ) memset ( ( void
* ) gag0esqvheg , 0 , 2 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 528 ] ; static real_T absTol [ 528 ] = { 1.0E-6 , 1.0E-6
, 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 528 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 528 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 528 ] ; static uint8_T zcAttributes [ 299 ]
= { ( ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP
) , ( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_DN ) }
; static uint8_T zcEvents [ 299 ] = { ( ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_DN ) ,
( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
0x40 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_DN ) } ; { int i ; for ( i = 0 ; i <
528 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "ode23t" ) ; ssSetVariableStepSolver (
rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ; ssSetMassMatrixNzMax ( rtS
, 129 ) ; ssSetModelMassMatrix ( rtS , MdlMassMatrix ) ;
ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 129 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 299 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverZcEventsVector ( rtS , zcEvents ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 10 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 295 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 10 ) ; {
int_T * ir = amt5hqyor4n . ir ; int_T * jc = amt5hqyor4n . jc ; real_T * pr =
amt5hqyor4n . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS ,
jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0 ,
129 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 528 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 129 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 869903735U ) ; ssSetChecksumVal
( rtS , 1 , 1051471062U ) ; ssSetChecksumVal ( rtS , 2 , 1937168891U ) ;
ssSetChecksumVal ( rtS , 3 , 3224586444U ) ; { static const sysRanDType
rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo
; static const sysRanDType * systemRan [ 14 ] ; gblRTWExtModeInfo = &
rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & lw0sy0o11jr . mfp3l0luimk . g1iyf3f52k
; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ;
systemRan [ 5 ] = ( sysRanDType * ) & lw0sy0o11jr . dxcv00k5uk . g1iyf3f52k ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_FCEvReferenceApplication_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_FCEvReferenceApplication_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_FCEvReferenceApplication_SetDWork ) ;
bo1z0vnccp . FirstOrderHold_ErrTol = rtInf ; bo1z0vnccp .
FirstOrderHold_ErrTol_gdzadtrzfv = rtInf ; bo1z0vnccp .
FirstOrderHold1_ErrTol = rtInf ; bo1z0vnccp . Saturation1_UpperSat = rtInf ;
bo1z0vnccp . Saturation_UpperSat = rtInf ; bo1z0vnccp .
Saturation_UpperSat_i5ock22ux5 = rtInf ; bo1z0vnccp .
Saturation_UpperSat_eqdlv1qluu = rtInf ; rt_RapidReadMatFileAndUpdateParams (
rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 6 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID6 ( tid ) ; }
