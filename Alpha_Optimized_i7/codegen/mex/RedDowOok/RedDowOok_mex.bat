@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=RedDowOok_mex
set MEX_NAME=RedDowOok_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for RedDowOok > RedDowOok_mex.mki
echo COMPILER=%COMPILER%>> RedDowOok_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> RedDowOok_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> RedDowOok_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> RedDowOok_mex.mki
echo LINKER=%LINKER%>> RedDowOok_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> RedDowOok_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> RedDowOok_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> RedDowOok_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> RedDowOok_mex.mki
echo BORLAND=%BORLAND%>> RedDowOok_mex.mki
echo OMPFLAGS= >> RedDowOok_mex.mki
echo OMPLINKFLAGS= >> RedDowOok_mex.mki
echo EMC_COMPILER=lcc64>> RedDowOok_mex.mki
echo EMC_CONFIG=optim>> RedDowOok_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f RedDowOok_mex.mk
