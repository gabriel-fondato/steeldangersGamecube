#include "player.h"
#include <ogc/pad.h>
#include <cstdint>
#include "../print.h"
#include "../loadTextures.h"

void Player::init() {

    Player::texture = tilemap1;
}

void Player::update() {
    
    Player::velX = static_cast<float>(PAD_StickX(0)/Player::speed);
    Player::velY = static_cast<float>(PAD_StickY(0)/Player::speed);

    

    Player::x = Player::x + Player::velX;
    Player::y = Player::y - Player::velY;

    //console.print(Player::x+60,Player::y, 0xFFFFFFFF,"alguma coisa");
}

void Player::draw() {
    
    GRRLIB_Rectangle(Player::x,Player::y,50,50,RGBA(255,255,255,255), TRUE);
    GRRLIB_DrawTile(Player::x+16,Player::y+16,tilemap1,0,2,2,RGBA(255,255,255,255),1);

}