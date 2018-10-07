//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMob.hpp>
#include <ncurses.h>
#include <cstdlib>
#include <iostream>
#include <Weapon/WeaponDoubleVertical.hpp>
#include <Weapon/WeaponBasic.hpp>

#include "Ship/ShipMob.hpp"

/** Static **/



/** Constructor **/

ShipMob::ShipMob() :
		AShip(
				10,
				3,
				1) {
	_w = new WeaponBasic();
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

void ShipMob::isHit() {
	AShip::isHit();
	system("afplay $PWD/sound/boom.mp3 &");
}

void ShipMob::drawShip() const {
	attron(COLOR_PAIR(COLOR_BLUE));
	AShip::drawShip();
	attroff(COLOR_PAIR(COLOR_BLUE));
}

void ShipMob::deleteShip() const {
	AShip::deleteShip();
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

