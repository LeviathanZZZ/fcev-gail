#include "rtwtypes.h"
#include "BatteryChargingEfficiency_C1XpRdVx.h"
#include "mwmathutil.h"

real_T BatteryChargingEfficiency_C1XpRdVx(real_T SOC)
{
  SOC *= 0.01;
  return ((((-5.128 * muDoubleScalarPower(SOC, 5.0) + 12.66 *
             muDoubleScalarPower(SOC, 4.0)) + -11.84 * muDoubleScalarPower(SOC,
             3.0)) + SOC * SOC * 5.233) + -1.156 * SOC) + 1.063;
}
