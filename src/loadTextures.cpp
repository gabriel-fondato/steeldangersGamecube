#include <grrlib.h>
#include "loadTextures.h" 


#include "atlasminecraft_bmp.h"

GRRLIB_texImg *tilemap1 = nullptr;

void loadTextures() {
    
    GRRLIB_texImg *tilemap1 = GRRLIB_LoadTexture(atlasminecraft_bmp);
    GRRLIB_InitTileSet(tilemap1,16,16,0);
}


