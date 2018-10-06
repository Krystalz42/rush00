//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/ABullet.hpp>

void ABullet::moveBullet() {

}

ABullet::ABullet(Position *p, Move m) : _p(p), _m(m) {

}

ABullet::~ABullet() {
}

Position *ABullet::getPosition() {
    return _p;
}
