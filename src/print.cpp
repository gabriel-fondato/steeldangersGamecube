#include "print.h"



void Console::init() {
    
    GRRLIB_texImg *tex_BMfont5 = GRRLIB_LoadTexture(BMfont5_png);
    GRRLIB_InitTileSet(tex_BMfont5, 8, 16, 0);
    Console::fontTex = tex_BMfont5;
}

void Console::print(float x, float y, u32 colorRGBA, char* msg){
    GRRLIB_Printf(x,y,Console::fontTex,colorRGBA,1,msg);
}