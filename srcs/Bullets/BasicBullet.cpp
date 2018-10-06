//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include "Bullets/BasicBullet.hpp"

void BasicBullet::drawBullet() const {

}

void BasicBullet::deleteBullet() const {

}

BasicBullet::BasicBullet(Position *p) : ABullet(p, m) {

}

BasicBullet::BasicBullet(ABullet const &i) {

}

BasicBullet::BasicBullet() {

}

BasicBullet::~BasicBullet() {
    deleteBullet();
}