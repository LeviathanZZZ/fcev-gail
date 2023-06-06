/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_m_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_m_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[481] = { 0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 13, 14,
    16, 17, 18, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 34, 36, 38, 40,
    41, 43, 44, 45, 46, 48, 49, 50, 51, 53, 54, 55, 56, 57, 59, 60, 61, 63, 64,
    65, 66, 67, 68, 70, 71, 72, 73, 75, 76, 77, 78, 79, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80,
    80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mM_P;
  out.mNumCol = 480ULL;
  out.mNumRow = 480ULL;
  for (b = 0; b < 481; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 6;
  out.mIr[6] = 46;
  out.mIr[7] = 47;
  out.mIr[8] = 49;
  out.mIr[9] = 48;
  out.mIr[10] = 50;
  out.mIr[11] = 51;
  out.mIr[12] = 53;
  out.mIr[13] = 52;
  out.mIr[14] = 11;
  out.mIr[15] = 12;
  out.mIr[16] = 14;
  out.mIr[17] = 13;
  out.mIr[18] = 15;
  out.mIr[19] = 16;
  out.mIr[20] = 18;
  out.mIr[21] = 17;
  out.mIr[22] = 5;
  out.mIr[23] = 7;
  out.mIr[24] = 8;
  out.mIr[25] = 7;
  out.mIr[26] = 9;
  out.mIr[27] = 10;
  out.mIr[28] = 11;
  out.mIr[29] = 15;
  out.mIr[30] = 19;
  out.mIr[31] = 20;
  out.mIr[32] = 21;
  out.mIr[33] = 22;
  out.mIr[34] = 21;
  out.mIr[35] = 22;
  out.mIr[36] = 23;
  out.mIr[37] = 24;
  out.mIr[38] = 23;
  out.mIr[39] = 24;
  out.mIr[40] = 25;
  out.mIr[41] = 26;
  out.mIr[42] = 27;
  out.mIr[43] = 26;
  out.mIr[44] = 29;
  out.mIr[45] = 28;
  out.mIr[46] = 30;
  out.mIr[47] = 31;
  out.mIr[48] = 30;
  out.mIr[49] = 33;
  out.mIr[50] = 32;
  out.mIr[51] = 34;
  out.mIr[52] = 35;
  out.mIr[53] = 34;
  out.mIr[54] = 36;
  out.mIr[55] = 37;
  out.mIr[56] = 38;
  out.mIr[57] = 38;
  out.mIr[58] = 39;
  out.mIr[59] = 41;
  out.mIr[60] = 40;
  out.mIr[61] = 42;
  out.mIr[62] = 43;
  out.mIr[63] = 45;
  out.mIr[64] = 44;
  out.mIr[65] = 42;
  out.mIr[66] = 46;
  out.mIr[67] = 50;
  out.mIr[68] = 54;
  out.mIr[69] = 55;
  out.mIr[70] = 57;
  out.mIr[71] = 56;
  out.mIr[72] = 54;
  out.mIr[73] = 58;
  out.mIr[74] = 59;
  out.mIr[75] = 58;
  out.mIr[76] = 60;
  out.mIr[77] = 61;
  out.mIr[78] = 63;
  out.mIr[79] = 62;
  (void)LC;
  (void)t2;
  return 0;
}
