//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <ncurses.h>
#include <Bullets/ABullet.hpp>

void ABullet::moveBullet() {
    deleteBullet();
	switch (_m) {
		case NORTH: _p->setY(_p->getY() - 1); break;
		case SOUTH: _p->setY(_p->getY() + 1); break;
		case EAST: _p->setX(_p->getX() + 1); break;
		case WEST: _p->setX(_p->getX() - 1); break;
		case NONE:break;
	}
    drawBullet();
}

bool ABullet::isAlive() {
    if ((_p->getY() < 0 || _p->getY() > COLS) || (_p->getX() < 0 || _p->getX() > LINES))
        return false;
    return true;
}

ABullet::ABullet(Position *p, Move m) : _p(p), _m(m) {
}

ABullet::~ABullet() {
}

Position *ABullet::getPosition() {
    return _p;
}
