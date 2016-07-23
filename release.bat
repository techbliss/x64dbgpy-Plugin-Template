@echo off
rmdir /S /Q release
xcopy x64dbgpy_plugins release\x32\plugins\x64dbgpy_plugins\* /S /Y
xcopy x64dbgpy_plugins release\x64\plugins\x64dbgpy_plugins\* /S /Y
copy bin\x32\*.dp32 release\x32\plugins\
copy bin\x64\*.dp64 release\x64\plugins\