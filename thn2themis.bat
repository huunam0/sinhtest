
echo off
echo convert test from thnoj to themis

rem go in test folder and run

if "%1"=="" (
   echo Usage:  thn2themis.bat problem_code
   goto end
)


set bai=%1

if exist %bai% (
   cd %bai%
)

md %bai%

FOR  %%t in (*.inp) DO (
   echo copying... %%~nt %%t
   md %bai%\%%~nt
   copy %%~nt.* %bai%\%%~nt\%bai%.*
)


if exist check%bai%.exe (
   copy check%bai%.exe %bai%
) else (
  if exist check.cpp (
   g++  check.cpp -o %bai%\check%bai%
  )
)

cd ..

:end