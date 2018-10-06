//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include "Bullets/MobBullet.hpp"

void MobBullet::drawBullet() const {

}

void MobBullet::deleteBullet() const {

}

MobBullet::MobBullet(Position *p) : ABullet(p, NORTH) {

}

MobBullet::~MobBullet() {
    deleteBullet();
}