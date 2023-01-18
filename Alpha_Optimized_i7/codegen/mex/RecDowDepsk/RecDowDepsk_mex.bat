@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=RecDowDepsk_mex
set MEX_NAME=RecDowDepsk_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for RecDowDepsk > RecDowDepsk_mex.mki
echo COMPILER=%COMPILER%>> RecDowDepsk_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> RecDowDepsk_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> RecDowDepsk_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> RecDowDepsk_mex.mki
echo LINKER=%LINKER%>> RecDowDepsk_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> RecDowDepsk_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> RecDowDepsk_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> RecDowDepsk_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> RecDowDepsk_mex.mki
echo BORLAND=%BORLAND%>> RecDowDepsk_mex.mki
echo OMPFLAGS= >> RecDowDepsk_mex.mki
echo OMPLINKFLAGS= >> RecDowDepsk_mex.mki
echo EMC_COMPILER=lcc64>> RecDowDepsk_mex.mki
echo EMC_CONFIG=optim>> RecDowDepsk_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f RecDowDepsk_mex.mk
