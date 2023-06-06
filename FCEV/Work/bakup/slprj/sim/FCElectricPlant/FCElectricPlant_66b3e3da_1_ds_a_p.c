#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_a_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_a_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mA_P ; out . mNumCol = 22ULL ;
out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc
[ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 2 ; out . mJc [ 5 ] = 6 ;
out . mJc [ 6 ] = 7 ; out . mJc [ 7 ] = 9 ; out . mJc [ 8 ] = 10 ; out . mJc
[ 9 ] = 12 ; out . mJc [ 10 ] = 13 ; out . mJc [ 11 ] = 14 ; out . mJc [ 12 ]
= 15 ; out . mJc [ 13 ] = 17 ; out . mJc [ 14 ] = 20 ; out . mJc [ 15 ] = 21
; out . mJc [ 16 ] = 21 ; out . mJc [ 17 ] = 25 ; out . mJc [ 18 ] = 26 ; out
. mJc [ 19 ] = 28 ; out . mJc [ 20 ] = 30 ; out . mJc [ 21 ] = 31 ; out . mJc
[ 22 ] = 32 ; out . mIr [ 0 ] = 3 ; out . mIr [ 1 ] = 19 ; out . mIr [ 2 ] =
4 ; out . mIr [ 3 ] = 5 ; out . mIr [ 4 ] = 14 ; out . mIr [ 5 ] = 19 ; out .
mIr [ 6 ] = 5 ; out . mIr [ 7 ] = 7 ; out . mIr [ 8 ] = 21 ; out . mIr [ 9 ]
= 6 ; out . mIr [ 10 ] = 0 ; out . mIr [ 11 ] = 12 ; out . mIr [ 12 ] = 8 ;
out . mIr [ 13 ] = 9 ; out . mIr [ 14 ] = 10 ; out . mIr [ 15 ] = 11 ; out .
mIr [ 16 ] = 19 ; out . mIr [ 17 ] = 3 ; out . mIr [ 18 ] = 11 ; out . mIr [
19 ] = 19 ; out . mIr [ 20 ] = 13 ; out . mIr [ 21 ] = 4 ; out . mIr [ 22 ] =
5 ; out . mIr [ 23 ] = 14 ; out . mIr [ 24 ] = 19 ; out . mIr [ 25 ] = 5 ;
out . mIr [ 26 ] = 16 ; out . mIr [ 27 ] = 19 ; out . mIr [ 28 ] = 7 ; out .
mIr [ 29 ] = 18 ; out . mIr [ 30 ] = 7 ; out . mIr [ 31 ] = 20 ; ( void ) LC
; ( void ) t2 ; return 0 ; }
