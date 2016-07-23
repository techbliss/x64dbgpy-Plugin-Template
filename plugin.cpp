#include "plugin.h"
#include "resource.h"
#include "x64dbgpy.h"

// edit this
enum
{
    MENU_TEMPLATE,
};

// editor
static void Template() // function to call main python app file
{
    ExecutePythonScriptW(L"plugins\\x64dbgpy_plugins\\x64dbgpy-template.py"); // execution of main file location (relative to x64dbg.exe)
}

extern "C" __declspec(dllexport) void CBMENUENTRY(CBTYPE cbType, PLUG_CB_MENUENTRY* info)
{
    switch(info->hEntry)
    {
    case MENU_TEMPLATE: // edit this
        Template();
        break;
    }
}

bool pyInit(PLUG_INITSTRUCT* initStruct)
{
    return true;
}

bool pyStop()
{
    return true;
}

void pySetup()
{
    // Set Menu Icon
    ICONDATA pyIcon;
    HRSRC hRes = FindResourceW(hInst, MAKEINTRESOURCEW(IDB_PNG1), L"PNG");
    HGLOBAL hMem = LoadResource(hInst, hRes);
    pyIcon.data = LockResource(hMem);
    pyIcon.size = SizeofResource(hInst, hRes);
    _plugin_menuseticon(hMenu, &pyIcon);
    FreeResource(hMem);

    // Register menu entry
    _plugin_menuaddentry(hMenu, MENU_TEMPLATE, "Template"); // edit this (name in subwindow)
}