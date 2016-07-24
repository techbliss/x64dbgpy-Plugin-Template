@echo off
mkdir %~dp0\release\x32\plugins
mkdir %~dp0\release\x64\plugins
xcopy /E /Y %~dp0\plugins %~dp0\release\x32\plugins
xcopy /E /Y %~dp0\plugins %~dp0\release\x64\plugins
XCOPY /E /Y %~dp0\bin\x32\*.dp32 %~dp0\release\x32\*
XCOPY /E /Y %~dp0\bin\x64\*.dp64 %~dp0\release\x64\*