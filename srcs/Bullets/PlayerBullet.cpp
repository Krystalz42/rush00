//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include "Bullets/PlayerBullet.hpp"

void PlayerBullet::drawBullet() const {

}

void PlayerBullet::deleteBullet() const {

}

PlayerBullet::PlayerBullet(Position *p) : ABullet(p, NORTH) {

}

PlayerBullet::~PlayerBullet() {
    deleteBullet();
}