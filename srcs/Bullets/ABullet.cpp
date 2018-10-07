//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <ncurses.h>
#include <Bullets/ABullet.hpp>
#include <utils/List.hpp>

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
			_m = (_p->getX() == COLS -1  ? NORTHWEST : NORTHEAST);

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
	return !(_p->getY() == 0 || _p->getY() == LINES);
}

ABullet::ABullet(Position *p, Move m) : _p(p), _m(m) {
}

ABullet::~ABullet() {
}


Position *ABullet::getPosition() {
	return _p;
}

ABullet::ABullet(ABullet const &i) {

}

ABullet::ABullet() {

}
