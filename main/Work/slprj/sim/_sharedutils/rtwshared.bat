@echo off
set MATLAB=C:\Program Files\Polyspace\R2020a
"%MATLAB%\bin\win64\gmake" -f rtwshared.mk  GENERATE_ASAP2=0 TMW_EXTMODE_TESTING=0 OPTS="-DNRT"
