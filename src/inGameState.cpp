#include "inGameState.h"
#include "entities/player.h"


Player player;

void InGameState::init() {
    player.init();

}

void InGameState::update() {
    if (player.alive) player.update();

}

void InGameState::draw() {
    if (player.alive) player.draw();

}