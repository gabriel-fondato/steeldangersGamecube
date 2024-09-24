#include "state.h"
#include "inGameState.h"


    InGameState gamestate;
void State::init(){
    if(State::currentState == 2) gamestate.init();
}

void State::update(){
    if (State::currentState == 2) gamestate.update();
}

void State::draw(){
    if (State::currentState == 2) gamestate.draw();
}