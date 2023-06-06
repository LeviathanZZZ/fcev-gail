#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxf_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_dxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDXF_P ; out . mNumCol = 22ULL
; out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 2 ; out .
mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 2 ; out . mJc [ 4 ] = 2 ; out . mJc [ 5 ] =
6 ; out . mJc [ 6 ] = 9 ; out . mJc [ 7 ] = 11 ; out . mJc [ 8 ] = 12 ; out .
mJc [ 9 ] = 15 ; out . mJc [ 10 ] = 17 ; out . mJc [ 11 ] = 19 ; out . mJc [
12 ] = 20 ; out . mJc [ 13 ] = 23 ; out . mJc [ 14 ] = 26 ; out . mJc [ 15 ]
= 27 ; out . mJc [ 16 ] = 29 ; out . mJc [ 17 ] = 33 ; out . mJc [ 18 ] = 36
; out . mJc [ 19 ] = 37 ; out . mJc [ 20 ] = 39 ; out . mJc [ 21 ] = 39 ; out
. mJc [ 22 ] = 40 ; out . mIr [ 0 ] = 8 ; out . mIr [ 1 ] = 10 ; out . mIr [
2 ] = 14 ; out . mIr [ 3 ] = 15 ; out . mIr [ 4 ] = 16 ; out . mIr [ 5 ] = 17
; out . mIr [ 6 ] = 14 ; out . mIr [ 7 ] = 15 ; out . mIr [ 8 ] = 17 ; out .
mIr [ 9 ] = 19 ; out . mIr [ 10 ] = 20 ; out . mIr [ 11 ] = 18 ; out . mIr [
12 ] = 1 ; out . mIr [ 13 ] = 9 ; out . mIr [ 14 ] = 12 ; out . mIr [ 15 ] =
0 ; out . mIr [ 16 ] = 9 ; out . mIr [ 17 ] = 11 ; out . mIr [ 18 ] = 12 ;
out . mIr [ 19 ] = 9 ; out . mIr [ 20 ] = 11 ; out . mIr [ 21 ] = 12 ; out .
mIr [ 22 ] = 13 ; out . mIr [ 23 ] = 12 ; out . mIr [ 24 ] = 15 ; out . mIr [
25 ] = 19 ; out . mIr [ 26 ] = 12 ; out . mIr [ 27 ] = 14 ; out . mIr [ 28 ]
= 15 ; out . mIr [ 29 ] = 14 ; out . mIr [ 30 ] = 15 ; out . mIr [ 31 ] = 16
; out . mIr [ 32 ] = 17 ; out . mIr [ 33 ] = 14 ; out . mIr [ 34 ] = 15 ; out
. mIr [ 35 ] = 17 ; out . mIr [ 36 ] = 15 ; out . mIr [ 37 ] = 18 ; out . mIr
[ 38 ] = 19 ; out . mIr [ 39 ] = 18 ; ( void ) LC ; ( void ) t2 ; return 0 ;
}
