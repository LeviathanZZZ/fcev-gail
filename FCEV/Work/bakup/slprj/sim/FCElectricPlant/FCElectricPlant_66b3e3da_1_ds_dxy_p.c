#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxy_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_dxy_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXY_P ; out . mNumCol = 22ULL
; out . mNumRow = 12ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out .
mJc [ 2 ] = 1 ; out . mJc [ 3 ] = 1 ; out . mJc [ 4 ] = 3 ; out . mJc [ 5 ] =
7 ; out . mJc [ 6 ] = 8 ; out . mJc [ 7 ] = 8 ; out . mJc [ 8 ] = 8 ; out .
mJc [ 9 ] = 9 ; out . mJc [ 10 ] = 9 ; out . mJc [ 11 ] = 10 ; out . mJc [ 12
] = 10 ; out . mJc [ 13 ] = 12 ; out . mJc [ 14 ] = 17 ; out . mJc [ 15 ] =
17 ; out . mJc [ 16 ] = 17 ; out . mJc [ 17 ] = 21 ; out . mJc [ 18 ] = 22 ;
out . mJc [ 19 ] = 24 ; out . mJc [ 20 ] = 24 ; out . mJc [ 21 ] = 25 ; out .
mJc [ 22 ] = 25 ; out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 5 ; out . mIr [ 2 ]
= 9 ; out . mIr [ 3 ] = 5 ; out . mIr [ 4 ] = 6 ; out . mIr [ 5 ] = 7 ; out .
mIr [ 6 ] = 9 ; out . mIr [ 7 ] = 7 ; out . mIr [ 8 ] = 1 ; out . mIr [ 9 ] =
2 ; out . mIr [ 10 ] = 4 ; out . mIr [ 11 ] = 9 ; out . mIr [ 12 ] = 3 ; out
. mIr [ 13 ] = 5 ; out . mIr [ 14 ] = 8 ; out . mIr [ 15 ] = 9 ; out . mIr [
16 ] = 10 ; out . mIr [ 17 ] = 5 ; out . mIr [ 18 ] = 6 ; out . mIr [ 19 ] =
7 ; out . mIr [ 20 ] = 9 ; out . mIr [ 21 ] = 7 ; out . mIr [ 22 ] = 5 ; out
. mIr [ 23 ] = 9 ; out . mIr [ 24 ] = 11 ; ( void ) LC ; ( void ) t2 ; return
0 ; }
