#pragma once

/**
\brief Executes a python script.
\param szFileName Path to the file (UTF-8).
\return true if it succeeds, false if it fails.
*/
extern "C" __declspec(dllimport) bool ExecutePythonScriptA(const char* szFileName);

/**
\brief Executes a python script.
\param szFileName Path to the file (UTF-16).
\return true if it succeeds, false if it fails.
*/
extern "C" __declspec(dllimport) bool ExecutePythonScriptW(const wchar_t* szFileName);

#ifdef _WIN64
#pragma comment(lib, "x64dbgpy_x64.lib")
#else //x86
#pragma comment(lib, "x64dbgpy_x86.lib")
#endif
