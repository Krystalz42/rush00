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
				1) {
	_ship_design = "@";
	_p.pushFront(new Position(rand() % (LINES / 3) ,rand() % (COLS - 1)));
}


ShipMob::ShipMob(ShipMob const &i) {
	*this = i;
}

/** Public **/

List<ABullet *> *ShipMob::fire() {
	if (_current_bullets > 0) {
		return _w->createBullets(*_p.begin()->data, SOUTH);
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

