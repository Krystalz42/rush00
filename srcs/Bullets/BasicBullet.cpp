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
	*this = i;
}

BasicBullet::BasicBullet(Position *p, Move m, char c, char color) : ABullet(p, m, c, color) {
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
	attron(COLOR_PAIR(_color));
	addch(_c);
	attroff(COLOR_PAIR(RED));
}

void BasicBullet::deleteBullet() const {
	move(_p->getY(), _p->getX());
	addch(EMPTY);
}

/** Operator **/

BasicBullet &BasicBullet::operator=(BasicBullet const &i) {
	if (this != &i) {
		_p = i._p;
		_m = i._m;
		_c = i._c;
		_color = i._color;
	}
	return *this;
}

/** Destructor **/

BasicBullet::~BasicBullet() {
	deleteBullet();
	delete _p;
}


