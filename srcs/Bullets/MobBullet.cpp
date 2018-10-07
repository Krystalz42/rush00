//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <ncurses.h>
#include <Bullets/MobBullet.hpp>

#include "Bullets/MobBullet.hpp"

void MobBullet::drawBullet() const {
    move(_p->getY(), _p->getX());
    addch(MOB_BULLET);
}

void MobBullet::deleteBullet() const {
	move(_p->getY(), _p->getX());
	addch(EMPTY);
}

MobBullet::~MobBullet() {
    deleteBullet();
}

MobBullet::MobBullet() {

}

MobBullet::MobBullet(const ABullet &i) : ABullet(i) {

}

MobBullet::MobBullet(Position *p, Move m) : ABullet(p, m) {
	switch (_m) {
		case NORTH: _p->setY(_p->getY() - 1); break;
		case SOUTH: _p->setY(_p->getY() + 1); break;
		case EAST: _p->setX(_p->getX() + 1); break;
		case WEST: _p->setX(_p->getX() - 1); break;
		case NONE:break;
		case NORTHWEST:break;
		case NORTHEAST:break;
		case SOUTHEAST:break;
		case SOUTHWEST:break;
	}
	drawBullet();
}
