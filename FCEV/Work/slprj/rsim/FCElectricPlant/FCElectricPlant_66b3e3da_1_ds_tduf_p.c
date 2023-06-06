/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_tduf_p.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_tduf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUF_P;
  out.mNumCol = 14ULL;
  out.mNumRow = 480ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 4;
  out.mJc[3] = 33;
  out.mJc[4] = 47;
  out.mJc[5] = 50;
  out.mJc[6] = 51;
  out.mJc[7] = 56;
  out.mJc[8] = 57;
  out.mJc[9] = 62;
  out.mJc[10] = 63;
  out.mJc[11] = 69;
  out.mJc[12] = 71;
  out.mJc[13] = 72;
  out.mJc[14] = 73;
  out.mIr[0] = 68;
  out.mIr[1] = 127;
  out.mIr[2] = 128;
  out.mIr[3] = 131;
  out.mIr[4] = 7;
  out.mIr[5] = 8;
  out.mIr[6] = 9;
  out.mIr[7] = 10;
  out.mIr[8] = 26;
  out.mIr[9] = 27;
  out.mIr[10] = 28;
  out.mIr[11] = 29;
  out.mIr[12] = 98;
  out.mIr[13] = 99;
  out.mIr[14] = 100;
  out.mIr[15] = 104;
  out.mIr[16] = 105;
  out.mIr[17] = 107;
  out.mIr[18] = 109;
  out.mIr[19] = 115;
  out.mIr[20] = 217;
  out.mIr[21] = 218;
  out.mIr[22] = 219;
  out.mIr[23] = 230;
  out.mIr[24] = 236;
  out.mIr[25] = 237;
  out.mIr[26] = 238;
  out.mIr[27] = 239;
  out.mIr[28] = 240;
  out.mIr[29] = 241;
  out.mIr[30] = 242;
  out.mIr[31] = 245;
  out.mIr[32] = 246;
  out.mIr[33] = 23;
  out.mIr[34] = 181;
  out.mIr[35] = 182;
  out.mIr[36] = 184;
  out.mIr[37] = 199;
  out.mIr[38] = 200;
  out.mIr[39] = 201;
  out.mIr[40] = 202;
  out.mIr[41] = 203;
  out.mIr[42] = 204;
  out.mIr[43] = 205;
  out.mIr[44] = 208;
  out.mIr[45] = 211;
  out.mIr[46] = 213;
  out.mIr[47] = 286;
  out.mIr[48] = 287;
  out.mIr[49] = 290;
  out.mIr[50] = 329;
  out.mIr[51] = 42;
  out.mIr[52] = 43;
  out.mIr[53] = 44;
  out.mIr[54] = 45;
  out.mIr[55] = 334;
  out.mIr[56] = 334;
  out.mIr[57] = 54;
  out.mIr[58] = 55;
  out.mIr[59] = 56;
  out.mIr[60] = 57;
  out.mIr[61] = 407;
  out.mIr[62] = 407;
  out.mIr[63] = 445;
  out.mIr[64] = 452;
  out.mIr[65] = 465;
  out.mIr[66] = 471;
  out.mIr[67] = 472;
  out.mIr[68] = 473;
  out.mIr[69] = 71;
  out.mIr[70] = 72;
  out.mIr[71] = 62;
  out.mIr[72] = 479;
  (void)LC;
  (void)t2;
  return 0;
}
