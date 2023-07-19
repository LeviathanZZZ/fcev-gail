#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_duf_p.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_duf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUF_P ; out . mNumCol = 12ULL
; out . mNumRow = 399ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out .
mJc [ 2 ] = 4 ; out . mJc [ 3 ] = 7 ; out . mJc [ 4 ] = 8 ; out . mJc [ 5 ] =
13 ; out . mJc [ 6 ] = 14 ; out . mJc [ 7 ] = 19 ; out . mJc [ 8 ] = 20 ; out
. mJc [ 9 ] = 26 ; out . mJc [ 10 ] = 28 ; out . mJc [ 11 ] = 28 ; out . mJc
[ 12 ] = 28 ; out . mIr [ 0 ] = 57 ; out . mIr [ 1 ] = 117 ; out . mIr [ 2 ]
= 118 ; out . mIr [ 3 ] = 121 ; out . mIr [ 4 ] = 161 ; out . mIr [ 5 ] = 162
; out . mIr [ 6 ] = 165 ; out . mIr [ 7 ] = 203 ; out . mIr [ 8 ] = 23 ; out
. mIr [ 9 ] = 24 ; out . mIr [ 10 ] = 25 ; out . mIr [ 11 ] = 26 ; out . mIr
[ 12 ] = 205 ; out . mIr [ 13 ] = 205 ; out . mIr [ 14 ] = 35 ; out . mIr [
15 ] = 36 ; out . mIr [ 16 ] = 37 ; out . mIr [ 17 ] = 38 ; out . mIr [ 18 ]
= 278 ; out . mIr [ 19 ] = 278 ; out . mIr [ 20 ] = 316 ; out . mIr [ 21 ] =
323 ; out . mIr [ 22 ] = 336 ; out . mIr [ 23 ] = 342 ; out . mIr [ 24 ] =
343 ; out . mIr [ 25 ] = 344 ; out . mIr [ 26 ] = 60 ; out . mIr [ 27 ] = 61
; ( void ) LC ; ( void ) t2 ; return 0 ; }
