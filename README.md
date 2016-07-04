# x64dbgpy-Plugin-Template
Template for easying the making of pythyon plugins for x64dbgpy

This is a template for compiling x64dbgpy plugins.


**Howto**

simply edit the temnplate after your needs in the code.
Places that needs modification is quoted in the code.
the compiled plugin loader calls your main script, so put 
the compiled plugin *.dp32/*.dp64 in x64/c32/plugins folder and main python script in 
plugins\\pythonapp\\main.py

Also change outputfile name in project setting in VS2013
Compiled files will be located in plugin folder.


**examble py.cpp**

`// editor
static void Editor() // function to call main python app file
{
    wchar_t szFileName[MAX_PATH] = {0};
	char szDir[256]; GetCurrentDirectoryA(256,szDir); _plugin_logputs(szDir);
    ExecutePythonScript(L"plugins\\pythonappfolder\\Main.py"); // execution of main file location
}
`

**Needed**

[https://github.com/x64dbg/x64dbgpy]()

Use vs2013 same as x64dbg to avoid runtime error.

python 2.7.x x86/x64(depend on your needs)

Examble of a finished plugin


**Important**

If you do os.chdir() in python script , remember to set x86/x64 root dir , and set it back to root before exiting script or it will be hard to find the plugin again

**Example
**
```sys.path.insert(0, os.getcwd() + r'\\plugins\\Updater')
dn = os.getcwd()
bob = os.chdir(os.getcwd() + r'\\plugins\\Updater')
bob```

then end of script

`os.chdir(dn)`

**Example Plugin**

https://github.com/techbliss/x64dbg_updater

**Thx**

Tomer Zait



