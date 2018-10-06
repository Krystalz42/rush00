//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipPlayer.hpp>
#include <ncurses.h>
#include <cstdlib>
#include <Bullets/MobBullet.hpp>
#include <iostream>
#include <Bullets/PlayerBullet.hpp>


/** Static **/



/** Constructor **/


ShipPlayer::ShipPlayer() :
		AShip(
				10,
				10,
				new Position(LINES - 1 , COLS / 2),
				1) {
	drawShip();
}

ShipPlayer::ShipPlayer(ShipPlayer const &i) {
	*this = i;
}

/** Public **/

ABullet *ShipPlayer::fire() const {
	if (_current_bullets > 0) {
		return new PlayerBullet();
	}
	return 0;
}

/** Private **/
/** Operator **/

ShipPlayer &ShipPlayer::operator=(ShipPlayer const &i) {
	if (this != &i) {
		_p = i._p;
		_life = i._life;
		_current_bullets = i._current_bullets;
		_max_bullets = i._current_bullets;
	}
	return *this;
}

/** Destructor **/

ShipPlayer::~ShipPlayer() {

}

void ShipPlayer::moveShip(Move m) {
	deleteShip();
	switch (m) {
		case EAST:_p->setX(_p->getX() + 1); break;
		case WEST:_p->setX(_p->getX() - 1); break;
		case NONE:break;
		case NORTH:break;
		case SOUTH:break;
	}
	drawShip();
}

void ShipPlayer::drawShip() const {
	move(_p->getY(), _p->getX());
	addch(SHIP_PLAYER);
}

void ShipPlayer::deleteShip() const {
	move(_p->getY(), _p->getX());
	addch(EMPTY);
}

