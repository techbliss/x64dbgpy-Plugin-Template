# x64dbgpy-template

Template for easying the making of pythyon plugins for x64dbgpy

This is a template for compiling x64dbgpy plugins.

## Howto

1. Put the Python files you want to ship with your plugin in the `plugins\Python_app_folder` directory
2. Modify `plugin.h` and `plugin.cpp` to work with your plugin
3. Rename the project file from `x64dbgpy-template` to something else to change the output filename
3. Run `release.bat`
4. People can copy the contents of the `release` folder in their x64dbg installation for your plugin to work.

## Requirements

https://github.com/x64dbg/x64dbgpy

## Example Plugin

https://github.com/techbliss/x64dbg_updater

## Thx
Tomer Zait



