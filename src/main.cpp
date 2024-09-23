#include <grrlib.h>
#include <ogc/pad.h>
#include "state.h"

int main() {

    GRRLIB_Init();
    PAD_Init();

    State state;
    state.init();

    while(1) {

        state.update();
        state.draw();

        GRRLIB_SetBackgroundColour(255,0,0,255);
        GRRLIB_Render();

        if (state.currentState == 0) break;
    }
    
    GRRLIB_Exit();
    return 0;
}