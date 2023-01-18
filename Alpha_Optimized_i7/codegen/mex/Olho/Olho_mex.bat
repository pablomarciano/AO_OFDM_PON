@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Olho_mex
set MEX_NAME=Olho_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Olho > Olho_mex.mki
echo COMPILER=%COMPILER%>> Olho_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Olho_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Olho_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Olho_mex.mki
echo LINKER=%LINKER%>> Olho_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Olho_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Olho_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Olho_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Olho_mex.mki
echo BORLAND=%BORLAND%>> Olho_mex.mki
echo OMPFLAGS= >> Olho_mex.mki
echo OMPLINKFLAGS= >> Olho_mex.mki
echo EMC_COMPILER=lcc64>> Olho_mex.mki
echo EMC_CONFIG=optim>> Olho_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f Olho_mex.mk
