//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <ncurses.h>
#include <Bullets/ABullet.hpp>
#include <utils/List.hpp>

/** Static **/
/** Constructor **/

ABullet::ABullet() {

}


ABullet::ABullet(ABullet const &i) {
	*this = i;
}


ABullet::ABullet(Position *p, Move m, char c, char color) : _p(p), _m(m), _c(c), _color(color) {
}

/** Public **/

void ABullet::moveBullet() {
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
			_p->setX(_p->getX() - 1);
			_p->setY(_p->getY() - 1);
			_m = (_p->getX() == 0 ? NORTHEAST : NORTHWEST);
			break;
		case NORTHEAST:
			_p->setX(_p->getX() + 1);
			_p->setY(_p->getY() - 1);
			_m = (_p->getX() == COLS - 1 ? NORTHWEST : NORTHEAST);

			break;
		case SOUTHEAST:
			_p->setY(_p->getY() + 1);
			_p->setX(_p->getX() + 1);
			_m = (_p->getX() == COLS - 1 ? SOUTHWEST : SOUTHEAST);
			break;
		case SOUTHWEST:
			_p->setY(_p->getY() + 1);
			_p->setX(_p->getX() - 1);
			_m = (_p->getX() == 0 ? SOUTHEAST : SOUTHWEST);
			break;
	}
	drawBullet();
}

bool ABullet::isAlive() {
	return !(_p->getY() == 1 || _p->getY() == LINES - 1);
}


Position const &ABullet::getPosition() {
	return *_p;
}

/** Private **/
/** Operator **/

ABullet &ABullet::operator=(ABullet const &i) {
	if (this != &i) {
		_p = i._p;
		_m = i._m;
		_c = i._c;
		_color = i._color;
	}
	return *this;
}

/** Destructor **/

ABullet::~ABullet() {
}



