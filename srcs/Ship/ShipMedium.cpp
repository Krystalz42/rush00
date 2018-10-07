//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include "Ship/ShipMedium.hpp"
//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMedium.hpp>
#include <ncurses.h>
#include <cstdlib>
#include <iostream>
#include <Weapon/WeaponDoubleVertical.hpp>

#include "Ship/ShipMedium.hpp"

/** Static **/

/** Constructor **/

ShipMedium::ShipMedium() :
		AShip(
				10,
				3,
				3) {
	_w = new WeaponDoubleVertical();
	_ship_design = "<o>";
	Position p = Position(rand() % (LINES / 3) ,rand() % (COLS - 1));
	_p.pushFront(new Position(p));
	p.setX(p.getX() + 1);
	_p.pushFront(new Position(p));
	p.setX(p.getX() + 1);
	_p.pushFront(new Position(p));

}


ShipMedium::ShipMedium(ShipMedium const &i) {
	*this = i;
}

/** Public **/

List<ABullet *> *ShipMedium::fire() {
	if (_current_bullets > 0) {
		return _w->createBullets(*_p.begin()->data, SOUTH);
	}
	return 0;
}

void ShipMedium::isHit() {
	AShip::isHit();
	system("afplay $PWD/sound/boom.mp3 &");
}

void ShipMedium::drawShip() const {
	attron(COLOR_PAIR(RED));
	AShip::drawShip();
	attroff(COLOR_PAIR(RED));
}

void ShipMedium::deleteShip() const {
	AShip::deleteShip();
}
/** Private **/
/** Operator **/

ShipMedium &ShipMedium::operator=(ShipMedium const &i) {
	if (this != &i) {
		_p = i._p;
		_life = i._life;
	}
	return *this;
}

/** Destructor **/

ShipMedium::~ShipMedium() {
}

