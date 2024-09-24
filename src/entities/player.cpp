#include "player.h"
#include <ogc/pad.h>
#include <cstdint>

void Player::init() {


}

void Player::update() {
    
    Player::velX = static_cast<float>(PAD_StickX(0)/Player::speed);
    Player::velY = static_cast<float>(PAD_StickY(0)/Player::speed);


    Player::x = Player::x + Player::velX;
    Player::y = Player::y - Player::velY;
}

void Player::draw() {
    
    GRRLIB_Rectangle(Player::x,Player::y,50,50,RGBA(255,255,255,255), TRUE);

}