#include <grrlib.h>
#include <ogc/pad.h>
#include "state.h"
#include "BMfont5_png.h"
#include "print.h"


int main() {

    GRRLIB_Init();
    PAD_Init();

    GRRLIB_texImg *tex_BMfont5 = GRRLIB_LoadTexture(BMfont5_png);
    GRRLIB_InitTileSet(tex_BMfont5, 8, 16, 0);
    Console console;
    console.init(tex_BMfont5);

    State state;
    state.init();

    while(1) {
        PAD_ScanPads();
        state.update();
        state.draw();

        GRRLIB_SetBackgroundColour(0,0,0,255);
        GRRLIB_Render();

        if (state.currentState == 0) break;
    }
    
    GRRLIB_Exit();
    return 0;
}