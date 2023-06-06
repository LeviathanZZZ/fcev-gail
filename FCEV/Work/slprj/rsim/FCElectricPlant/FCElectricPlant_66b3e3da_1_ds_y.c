/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_y.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t27, NeDsMethodOutput *t28)
{
  PmRealVector out;
  real_T X[480];
  int32_T b;
  (void)LC;
  for (b = 0; b < 480; b++) {
    X[b] = t27->mX.mX[b];
  }

  out = t28->mY;
  out.mX[0] = X[0ULL] * 5.2410901467505238E-5;
  out.mX[1] = -X[64ULL];
  out.mX[2] = X[66ULL];
  out.mX[3] = X[69ULL];
  out.mX[4] = -X[68ULL];
  out.mX[5] = (((X[3ULL] * 0.1 + X[69ULL] * -0.1) + X[72ULL] * 1.0E-9) - X[74ULL])
    + X[4ULL];
  out.mX[6] = -(((((-X[105ULL] - X[106ULL]) - X[107ULL]) - X[108ULL]) - X[109ULL])
                - X[110ULL]);
  out.mX[7] = X[72ULL] * 1.0E-9 + X[4ULL];
  out.mX[8] = ((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0E-15) + X[73ULL] * -1.0E-6) +
    X[5ULL];
  out.mX[9] = (1.01325 - X[236ULL]) * X[245ULL] * 0.0001 * 1111.1111111111111;
  out.mX[10] = X[18ULL] - 273.15;
  out.mX[11] = -X[293ULL];
  out.mX[12] = -X[361ULL];
  out.mX[13] = -(X[44ULL] - 1.01325) * X[366ULL] * 0.0001 * 1111.1111111111111;
  out.mX[14] = X[377ULL];
  out.mX[15] = X[422ULL];
  out.mX[16] = X[69ULL];
  out.mX[17] = ((((X[3ULL] * 0.1 - X[68ULL]) + X[69ULL] * -0.1) + X[72ULL] *
                 1.0E-9) - X[74ULL]) + X[4ULL];
  out.mX[18] = X[69ULL];
  out.mX[19] = -X[478ULL];
  (void)LC;
  (void)t28;
  return 0;
}
