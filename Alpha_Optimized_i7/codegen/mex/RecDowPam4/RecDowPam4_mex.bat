@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=RecDowPam4_mex
set MEX_NAME=RecDowPam4_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for RecDowPam4 > RecDowPam4_mex.mki
echo COMPILER=%COMPILER%>> RecDowPam4_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> RecDowPam4_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> RecDowPam4_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> RecDowPam4_mex.mki
echo LINKER=%LINKER%>> RecDowPam4_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> RecDowPam4_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> RecDowPam4_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> RecDowPam4_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> RecDowPam4_mex.mki
echo BORLAND=%BORLAND%>> RecDowPam4_mex.mki
echo OMPFLAGS= >> RecDowPam4_mex.mki
echo OMPLINKFLAGS= >> RecDowPam4_mex.mki
echo EMC_COMPILER=lcc64>> RecDowPam4_mex.mki
echo EMC_CONFIG=optim>> RecDowPam4_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f RecDowPam4_mex.mk
