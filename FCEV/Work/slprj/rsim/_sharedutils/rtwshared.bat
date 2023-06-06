
set skipSetupArg=%1
if "%skipSetupArg%" NEQ "skip_setup_msvc" (
call "setup_msvc.bat"
)

cd .
nmake -f rtwshared.mk  RSIM_SOLVER_SELECTION=1 PCMATLABROOT="E:\\MATLAB_R2022b" RSIM_PARAMETER_LOADING=0 OPTS="-DNRT -DRSIM_WITH_SL_SOLVER -DRSIM_PARAMETER_LOADING"
@if errorlevel 1 goto error_exit
exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1