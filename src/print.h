#pragma once
#include <grrlib.h>
#include "BMfont5_png.h"

class ConsoleLine {
public:
    int lineNumber;
    char* msg;
    u8 color;
};

class Console {
public:
    void init();
    
    void draw();
    void print(float x, float y, u32 colorRGBA, char* msg);
    GRRLIB_texImg* fontTex;
};

extern Console console;