/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxy_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_dxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[481] = { 0, 1, 1, 1, 3, 7, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 10, 10, 10, 10, 11, 12, 13, 13, 13, 13, 14, 15, 16, 16, 16,
    16, 16, 16, 16, 16, 17, 17, 18, 18, 20, 25, 25, 25, 29, 30, 32, 32, 32, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 33, 34, 35, 36, 37, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38,
    38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39, 39, 39, 40, 40, 40, 40,
    40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
    40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
    40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
    41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
    41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
    41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 42, 42,
    42, 42, 42, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 44, 45, 46, 47, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 49, 50, 51, 52, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53,
    53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53,
    53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53,
    53, 54, 54 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mDXY_P;
  out.mNumCol = 480ULL;
  out.mNumRow = 20ULL;
  for (b = 0; b < 481; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 0;
  out.mIr[1] = 5;
  out.mIr[2] = 17;
  out.mIr[3] = 5;
  out.mIr[4] = 7;
  out.mIr[5] = 8;
  out.mIr[6] = 17;
  out.mIr[7] = 8;
  out.mIr[8] = 10;
  out.mIr[9] = 13;
  out.mIr[10] = 14;
  out.mIr[11] = 14;
  out.mIr[12] = 14;
  out.mIr[13] = 15;
  out.mIr[14] = 15;
  out.mIr[15] = 15;
  out.mIr[16] = 1;
  out.mIr[17] = 2;
  out.mIr[18] = 4;
  out.mIr[19] = 17;
  out.mIr[20] = 3;
  out.mIr[21] = 5;
  out.mIr[22] = 16;
  out.mIr[23] = 17;
  out.mIr[24] = 18;
  out.mIr[25] = 5;
  out.mIr[26] = 7;
  out.mIr[27] = 8;
  out.mIr[28] = 17;
  out.mIr[29] = 8;
  out.mIr[30] = 5;
  out.mIr[31] = 17;
  out.mIr[32] = 6;
  out.mIr[33] = 6;
  out.mIr[34] = 6;
  out.mIr[35] = 6;
  out.mIr[36] = 6;
  out.mIr[37] = 6;
  out.mIr[38] = 9;
  out.mIr[39] = 9;
  out.mIr[40] = 11;
  out.mIr[41] = 12;
  out.mIr[42] = 13;
  out.mIr[43] = 14;
  out.mIr[44] = 14;
  out.mIr[45] = 14;
  out.mIr[46] = 14;
  out.mIr[47] = 14;
  out.mIr[48] = 15;
  out.mIr[49] = 15;
  out.mIr[50] = 15;
  out.mIr[51] = 15;
  out.mIr[52] = 15;
  out.mIr[53] = 19;
  (void)LC;
  (void)t2;
  return 0;
}
