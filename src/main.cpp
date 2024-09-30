#include <grrlib.h>
#include <ogc/pad.h>
#include "state.h"
#include "loadTextures.h"

#include "print.h"

    Console console;

int main() {

    GRRLIB_Init();
    PAD_Init();


    console.init();

    State state;
    state.init();

    loadTextures();

    while(1) {
        PAD_ScanPads();
        state.update();
        state.draw();

        console.print(50,50,0xFFFFFFFF,"hello world");

        GRRLIB_SetBackgroundColour(0,0,0,255);
        GRRLIB_Render();


        
        if (state.currentState == 0) break;
    }
    
    GRRLIB_Exit();
    return 0;
}