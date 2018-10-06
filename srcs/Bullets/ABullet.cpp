//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/ABullet.hpp>

void ABullet::moveBullet() {

}

ABullet::ABullet(Position *p, Move m) : p(p) {

}

ABullet::ABullet(ABullet const &i) {

}

ABullet::ABullet() {

}

ABullet::~ABullet() {
}

Position *ABullet::getPosition() {
    return p;
}
