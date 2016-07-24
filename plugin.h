#pragma once

#include "pluginmain.h"

#define plugin_name "x64dbgpy-template" // set plugin name
#define plugin_version 1 // set plugin version

//functions
bool pyInit(PLUG_INITSTRUCT* initStruct);
bool pyStop();
void pySetup();
