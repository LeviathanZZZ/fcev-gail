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
; out . mNumRow = 399ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out .
mJc [ 2 ] = 3 ; out . mJc [ 3 ] = 6 ; out . mJc [ 4 ] = 7 ; out . mJc [ 5 ] =
12 ; out . mJc [ 6 ] = 13 ; out . mJc [ 7 ] = 18 ; out . mJc [ 8 ] = 19 ; out
. mJc [ 9 ] = 25 ; out . mJc [ 10 ] = 27 ; out . mJc [ 11 ] = 27 ; out . mJc
[ 12 ] = 27 ; out . mIr [ 0 ] = 117 ; out . mIr [ 1 ] = 118 ; out . mIr [ 2 ]
= 121 ; out . mIr [ 3 ] = 161 ; out . mIr [ 4 ] = 162 ; out . mIr [ 5 ] = 165
; out . mIr [ 6 ] = 203 ; out . mIr [ 7 ] = 23 ; out . mIr [ 8 ] = 24 ; out .
mIr [ 9 ] = 25 ; out . mIr [ 10 ] = 26 ; out . mIr [ 11 ] = 205 ; out . mIr [
12 ] = 205 ; out . mIr [ 13 ] = 35 ; out . mIr [ 14 ] = 36 ; out . mIr [ 15 ]
= 37 ; out . mIr [ 16 ] = 38 ; out . mIr [ 17 ] = 278 ; out . mIr [ 18 ] =
278 ; out . mIr [ 19 ] = 316 ; out . mIr [ 20 ] = 323 ; out . mIr [ 21 ] =
336 ; out . mIr [ 22 ] = 342 ; out . mIr [ 23 ] = 343 ; out . mIr [ 24 ] =
344 ; out . mIr [ 25 ] = 60 ; out . mIr [ 26 ] = 61 ; ( void ) LC ; ( void )
t2 ; return 0 ; }
