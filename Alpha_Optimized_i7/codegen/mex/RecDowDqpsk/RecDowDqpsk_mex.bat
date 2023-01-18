@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=RecDowDqpsk_mex
set MEX_NAME=RecDowDqpsk_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for RecDowDqpsk > RecDowDqpsk_mex.mki
echo COMPILER=%COMPILER%>> RecDowDqpsk_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> RecDowDqpsk_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> RecDowDqpsk_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> RecDowDqpsk_mex.mki
echo LINKER=%LINKER%>> RecDowDqpsk_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> RecDowDqpsk_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> RecDowDqpsk_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> RecDowDqpsk_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> RecDowDqpsk_mex.mki
echo BORLAND=%BORLAND%>> RecDowDqpsk_mex.mki
echo OMPFLAGS= >> RecDowDqpsk_mex.mki
echo OMPLINKFLAGS= >> RecDowDqpsk_mex.mki
echo EMC_COMPILER=lcc64>> RecDowDqpsk_mex.mki
echo EMC_CONFIG=optim>> RecDowDqpsk_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f RecDowDqpsk_mex.mk
