/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "FCElectricPlant_66b3e3da_1.h"
#include "FCElectricPlant_66b3e3da_1_gateway.h"

void FCElectricPlant_66b3e3da_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 0, 0.01, 0.01, 0.01, 1, 0,
    (NeModifyAbsTol) 0, 0.001, 0, 0, 0, 0, (SscLoggingSetting) 0, 601783876, 0,
  };

  NeSolverParameters solverparams = { 0, (NeMBLocalSolverChoice) 0, 0.001, 0, 0,
    1, 0, 0, 0.001, 0.001, 1e-09, 0, 0, 100, 0, 1, (NeConsistencySolver) 2,
    (NeIndexReductionMethod) 1, 0, 1e-09, (NeToleranceSource) 1, 0.01, 0.01,
    0.01, 0, (NeLocalSolverChoice) 0, 1, 1, 0.001, 0, 3, 2, 0, 2,
    (NeLinearAlgebraChoice) 1, 0, (NeEquationFormulationChoice) 0, 1024, 1,
    0.001, (NePartitionStorageMethod) 0, 1024, (NePartitionMethod) 0, };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;
  int rtpDaes[1] = { 0 };

  int* rtwLogDaes = NULL;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0, }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  FCElectricPlant_66b3e3da_1_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group("FCElectricPlant/Solver Configuration_1",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    1,
    rtpDaes,
    0,
    rtwLogDaes);
}
