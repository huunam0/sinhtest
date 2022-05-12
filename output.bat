rem Tran Huu Nam - huunam0@gmail.com - 2/2022
@echo off

for %%d in (*.inp) do (
   echo processing... %%~nd
   solution.exe < %%d > %%~nd.out
)

