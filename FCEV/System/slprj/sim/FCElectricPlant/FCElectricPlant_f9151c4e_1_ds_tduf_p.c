#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_tduf_p.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_tduf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDUF_P ; out . mNumCol = 13ULL
; out . mNumRow = 394ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out .
mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 5 ; out . mJc [ 4 ] = 8 ; out . mJc [ 5 ] =
9 ; out . mJc [ 6 ] = 14 ; out . mJc [ 7 ] = 15 ; out . mJc [ 8 ] = 20 ; out
. mJc [ 9 ] = 21 ; out . mJc [ 10 ] = 27 ; out . mJc [ 11 ] = 29 ; out . mJc
[ 12 ] = 30 ; out . mJc [ 13 ] = 31 ; out . mIr [ 0 ] = 51 ; out . mIr [ 1 ]
= 52 ; out . mIr [ 2 ] = 112 ; out . mIr [ 3 ] = 113 ; out . mIr [ 4 ] = 116
; out . mIr [ 5 ] = 156 ; out . mIr [ 6 ] = 157 ; out . mIr [ 7 ] = 160 ; out
. mIr [ 8 ] = 198 ; out . mIr [ 9 ] = 21 ; out . mIr [ 10 ] = 22 ; out . mIr
[ 11 ] = 23 ; out . mIr [ 12 ] = 24 ; out . mIr [ 13 ] = 200 ; out . mIr [ 14
] = 200 ; out . mIr [ 15 ] = 33 ; out . mIr [ 16 ] = 34 ; out . mIr [ 17 ] =
35 ; out . mIr [ 18 ] = 36 ; out . mIr [ 19 ] = 273 ; out . mIr [ 20 ] = 273
; out . mIr [ 21 ] = 311 ; out . mIr [ 22 ] = 318 ; out . mIr [ 23 ] = 331 ;
out . mIr [ 24 ] = 337 ; out . mIr [ 25 ] = 338 ; out . mIr [ 26 ] = 339 ;
out . mIr [ 27 ] = 55 ; out . mIr [ 28 ] = 56 ; out . mIr [ 29 ] = 49 ; out .
mIr [ 30 ] = 393 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
