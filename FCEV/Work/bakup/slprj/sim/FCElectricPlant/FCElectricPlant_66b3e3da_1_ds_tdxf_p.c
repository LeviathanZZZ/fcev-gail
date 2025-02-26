#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_tdxf_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_66b3e3da_1_ds_tdxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDXF_P ; out . mNumCol = 22ULL
; out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 2 ; out .
mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 2 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] =
11 ; out . mJc [ 6 ] = 15 ; out . mJc [ 7 ] = 19 ; out . mJc [ 8 ] = 22 ; out
. mJc [ 9 ] = 26 ; out . mJc [ 10 ] = 29 ; out . mJc [ 11 ] = 32 ; out . mJc
[ 12 ] = 34 ; out . mJc [ 13 ] = 38 ; out . mJc [ 14 ] = 43 ; out . mJc [ 15
] = 45 ; out . mJc [ 16 ] = 47 ; out . mJc [ 17 ] = 54 ; out . mJc [ 18 ] =
58 ; out . mJc [ 19 ] = 61 ; out . mJc [ 20 ] = 64 ; out . mJc [ 21 ] = 65 ;
out . mJc [ 22 ] = 67 ; out . mIr [ 0 ] = 8 ; out . mIr [ 1 ] = 10 ; out .
mIr [ 2 ] = 3 ; out . mIr [ 3 ] = 19 ; out . mIr [ 4 ] = 4 ; out . mIr [ 5 ]
= 5 ; out . mIr [ 6 ] = 14 ; out . mIr [ 7 ] = 15 ; out . mIr [ 8 ] = 16 ;
out . mIr [ 9 ] = 17 ; out . mIr [ 10 ] = 19 ; out . mIr [ 11 ] = 5 ; out .
mIr [ 12 ] = 14 ; out . mIr [ 13 ] = 15 ; out . mIr [ 14 ] = 17 ; out . mIr [
15 ] = 7 ; out . mIr [ 16 ] = 19 ; out . mIr [ 17 ] = 20 ; out . mIr [ 18 ] =
21 ; out . mIr [ 19 ] = 6 ; out . mIr [ 20 ] = 18 ; out . mIr [ 21 ] = 20 ;
out . mIr [ 22 ] = 0 ; out . mIr [ 23 ] = 1 ; out . mIr [ 24 ] = 9 ; out .
mIr [ 25 ] = 12 ; out . mIr [ 26 ] = 0 ; out . mIr [ 27 ] = 8 ; out . mIr [
28 ] = 9 ; out . mIr [ 29 ] = 9 ; out . mIr [ 30 ] = 11 ; out . mIr [ 31 ] =
12 ; out . mIr [ 32 ] = 9 ; out . mIr [ 33 ] = 10 ; out . mIr [ 34 ] = 11 ;
out . mIr [ 35 ] = 12 ; out . mIr [ 36 ] = 13 ; out . mIr [ 37 ] = 19 ; out .
mIr [ 38 ] = 3 ; out . mIr [ 39 ] = 11 ; out . mIr [ 40 ] = 12 ; out . mIr [
41 ] = 15 ; out . mIr [ 42 ] = 19 ; out . mIr [ 43 ] = 12 ; out . mIr [ 44 ]
= 13 ; out . mIr [ 45 ] = 14 ; out . mIr [ 46 ] = 15 ; out . mIr [ 47 ] = 4 ;
out . mIr [ 48 ] = 5 ; out . mIr [ 49 ] = 14 ; out . mIr [ 50 ] = 15 ; out .
mIr [ 51 ] = 16 ; out . mIr [ 52 ] = 17 ; out . mIr [ 53 ] = 19 ; out . mIr [
54 ] = 5 ; out . mIr [ 55 ] = 14 ; out . mIr [ 56 ] = 15 ; out . mIr [ 57 ] =
17 ; out . mIr [ 58 ] = 15 ; out . mIr [ 59 ] = 16 ; out . mIr [ 60 ] = 19 ;
out . mIr [ 61 ] = 7 ; out . mIr [ 62 ] = 18 ; out . mIr [ 63 ] = 19 ; out .
mIr [ 64 ] = 7 ; out . mIr [ 65 ] = 18 ; out . mIr [ 66 ] = 20 ; ( void ) LC
; ( void ) t2 ; return 0 ; }
