//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <ncurses.h>
#include <Bullets/BasicBullet.hpp>
#include <utils/List.hpp>

#include "Bullets/BasicBullet.hpp"

/** Static **/
/** Constructor **/

BasicBullet::BasicBullet() {

}

BasicBullet::BasicBullet(const ABullet &i) : ABullet(i) {

}

BasicBullet::BasicBullet(Position *p, Move m) : ABullet(p, m) {
	deleteBullet();
	switch (_m) {
		case NORTH:
			_p->setY(_p->getY() - 1);
			break;
		case SOUTH:
			_p->setY(_p->getY() + 1);
			break;
		case EAST:
			_p->setX(_p->getX() + 1);
			break;
		case WEST:
			_p->setX(_p->getX() - 1);
			break;
		case NONE:
			break;
		case NORTHWEST:
			break;
		case NORTHEAST:
			break;
		case SOUTHEAST:
			break;
		case SOUTHWEST:
			break;
	}
	if (isAlive())
		drawBullet();
}

/** Public **/
/** Private **/

void BasicBullet::drawBullet() const {
	move(_p->getY(), _p->getX());
	attron(COLOR_PAIR(CYAN));
	addch(PLAYER_BULLET);
	attroff(COLOR_PAIR(RED));
}

void BasicBullet::deleteBullet() const {
	move(_p->getY(), _p->getX());
	addch(EMPTY);
}

/** Operator **/
/** Destructor **/

BasicBullet::~BasicBullet() {
	deleteBullet();
	delete _p;
}


