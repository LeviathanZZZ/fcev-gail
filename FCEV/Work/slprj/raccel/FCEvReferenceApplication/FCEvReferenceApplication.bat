@echo off

call "setup_mingw.bat"

cd .

if "%1"=="" ("E:\MATLAB_R2022b\bin\win64\gmake"  -f FCEvReferenceApplication.mk all) else ("E:\MATLAB_R2022b\bin\win64\gmake"  -f FCEvReferenceApplication.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1