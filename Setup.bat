@echo off

pushd
Premake\premake5.exe --file=Build.lua vs2026
popd
pause