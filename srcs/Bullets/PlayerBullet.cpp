//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <ncurses.h>
#include "Bullets/PlayerBullet.hpp"

void PlayerBullet::drawBullet() const {
    move(_p->getY(), _p->getX());
    addch(PLAYER_BULLET);
}

void PlayerBullet::deleteBullet() const {
	move(_p->getY(), _p->getX());
	addch(EMPTY);
}

PlayerBullet::PlayerBullet(Position *p) : ABullet(p, NORTH) {
    	switch (_m) {
		case NORTH: _p->setY(_p->getY() - 1); break;
		case SOUTH: _p->setY(_p->getY() + 1); break;
		case EAST: _p->setX(_p->getX() + 1); break;
		case WEST: _p->setX(_p->getX() - 1); break;
		case NONE:break;
	}
    drawBullet();
}

PlayerBullet::~PlayerBullet() {
    deleteBullet();
}