//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMob.hpp>
#include <ncurses.h>
#include <cstdlib>
#include <Bullets/MobBullet.hpp>

#include "Ship/ShipMob.hpp"

/** Static **/



/** Constructor **/


ShipMob::ShipMob() {
	_p = new Position(rand() % (COLS / 3), rand() % (LINES - 1));
	_max_bullets = 10;
	_current_bullets = 10;
}

ShipMob::ShipMob(ShipMob const &i) {

}

/** Public **/

ABullet *ShipMob::fire() const {
	if (_current_bullets > 0) {
		return new MobBullet();
	}
	return 0;
}

/** Private **/
/** Operator **/

ShipMob &ShipMob::operator=(ShipMob const &i) {
	if (this != &i) {
		_p = i._p;
		_life = i._life;
	}
	return *this;
}

/** Destructor **/

ShipMob::~ShipMob() {

}

void ShipMob::moveShip(Move m) {
	deleteShip();
	switch (m) {
		case NORTH: _p->setY(_p->getY() - 1); break;
		case SOUTH: _p->setY(_p->getY() + 1); break;
		case EAST:_p->setX(_p->getX() + 1); break;
		case WEST:_p->setX(_p->getX() - 1); break;
		case NONE:break;
	}
	drawShip();
}

void ShipMob::drawShip() const {
	move(_p->getY(), _p->getX());
	addch(SHIP_MOB);
}

void ShipMob::deleteShip() const {
	move(_p->getY(), _p->getX());
	addch(EMPTY);
}

