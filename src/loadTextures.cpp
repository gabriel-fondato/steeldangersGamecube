#include <grrlib.h>
#include "loadTextures.h" 
#include "print.h"

#include "atlasminecraft_bmp.h"

GRRLIB_texImg *tilemap1 = nullptr;

void loadTextures() {
    tilemap1 = GRRLIB_LoadTexture(atlasminecraft_bmp);
    GRRLIB_InitTileSet(tilemap1,16,16,0);
    console.print(100,100,RGBA(255,255,255,255),"textures loaded");
}


