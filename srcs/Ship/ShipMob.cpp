//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMob.hpp>
#include <ncurses.h>
#include <cstdlib>
#include <Bullets/MobBullet.hpp>
#include <iostream>

#include "Ship/ShipMob.hpp"

/** Static **/



/** Constructor **/


ShipMob::ShipMob() :
	AShip(
			10,
			10,
			new Position(rand() % (LINES / 3) ,rand() % (COLS - 1)),
			1){

	drawShip();
}

ShipMob::ShipMob(ShipMob const &i) {
	*this = i;
}

/** Public **/

ABullet *ShipMob::fire() const {
	if (_current_bullets > 0) {
		Position * t_p = new Position(*_p);
		t_p->setY(t_p->getY() + 1);
		return new MobBullet(t_p);
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

