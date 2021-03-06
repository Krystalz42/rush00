//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Ship/ShipBigBoss.hpp>
#include <Weapon/WeaponTripleDiagonal.hpp>
#include <ncurses.h>
#include <Weapon/WeaponTripleVertical.hpp>
#include <Weapon/WeaponUltime.hpp>
#include "Ship/ShipBigBoss.hpp"

/** Static **/
/** Constructor **/


ShipBigBoss::ShipBigBoss() : AShip(
		10,
		10,
		20) {
	_w = new WeaponUltime();
	_ship_design = "_______"
				   "/__/ \\__\\"
				   "\\_______/"
				   "^   ^";

	Position p(rand() % (LINES / 5), rand() % (COLS - 20) + 10);

	_p.pushFront(new Position(p.getY() - 1, p.getX() - 3));
	_p.pushFront(new Position(p.getY() - 1, p.getX() - 2));
	_p.pushFront(new Position(p.getY() - 1, p.getX() - 1));
	_p.pushFront(new Position(p.getY() - 1, p.getX()));
	_p.pushFront(new Position(p.getY() - 1, p.getX() + 1));
	_p.pushFront(new Position(p.getY() - 1, p.getX() + 2));
	_p.pushFront(new Position(p.getY() - 1, p.getX() + 3));

	_p.pushFront(new Position(p.getY(), p.getX() - 4));
	_p.pushFront(new Position(p.getY(), p.getX() - 3));
	_p.pushFront(new Position(p.getY(), p.getX() - 2));
	_p.pushFront(new Position(p.getY(), p.getX() - 1));
	_p.pushFront(new Position(p.getY(), p.getX()));
	_p.pushFront(new Position(p.getY(), p.getX() + 1));
	_p.pushFront(new Position(p.getY(), p.getX() + 2));
	_p.pushFront(new Position(p.getY(), p.getX() + 3));
	_p.pushFront(new Position(p.getY(), p.getX() + 4));


	_p.pushFront(new Position(p.getY() + 1, p.getX() - 4));
	_p.pushFront(new Position(p.getY() + 1, p.getX() - 3));
	_p.pushFront(new Position(p.getY() + 1, p.getX() - 2));
	_p.pushFront(new Position(p.getY() + 1, p.getX() - 1));
	_p.pushFront(new Position(p.getY() + 1, p.getX()));
	_p.pushFront(new Position(p.getY() + 1, p.getX() + 1));
	_p.pushFront(new Position(p.getY() + 1, p.getX() + 2));
	_p.pushFront(new Position(p.getY() + 1, p.getX() + 3));
	_p.pushFront(new Position(p.getY() + 1, p.getX() + 4));


	_p.pushFront(new Position(p.getY() + 2, p.getX() - 2));
	_p.pushFront(new Position(p.getY() + 2, p.getX() - 1));
	_p.pushFront(new Position(p.getY() + 2, p.getX()));
	_p.pushFront(new Position(p.getY() + 2, p.getX() + 1));
	_p.pushFront(new Position(p.getY() + 2, p.getX() + 2));
}

/** Public **/

List<ABullet *> *ShipBigBoss::fire() {
	Position p = *_p.begin()->data;
	//new Position(p.getY() -1 , p.getX() - 2);
	p.setX(p.getX() + 2);
	p.setY(p.getY() + 4);
	return _w->createBullets(p, SOUTH);
}

/** Private **/
void ShipBigBoss::moveShip(Move m) {
	deleteShip();
	if (!isAlive())
		return;
	switch (m) {

		case NORTH:
			if (_p.begin()->data->getY() > 11) {
				for (List<Position *>::t_list *it = _p.begin();
					 it != 0; it = it->next)
					it->data->setY(it->data->getY() - 5);
			}
			break;
		case SOUTH:
			if (_p.begin()->data->getY() < LINES / 2) {
				for (List<Position *>::t_list *it = _p.begin();
					 it != 0; it = it->next)
					it->data->setY(it->data->getY() + 5);
			}
			break;
		case EAST:
			if (_p.begin()->data->getX() > 11) {
				for (List<Position *>::t_list *it = _p.begin();
					 it != 0; it = it->next)
					it->data->setX(it->data->getX() - 5);
			}
			break;
		case WEST:
			if (_p.begin()->data->getX() < COLS - 11) {
				for (List<Position *>::t_list *it = _p.begin();
					 it != 0; it = it->next)
					it->data->setX(it->data->getX() + 5);
			}
			break;
		case NORTHWEST:
			break;
		case NORTHEAST:
			break;
		case SOUTHEAST:
			break;
		case SOUTHWEST:
			break;
		case NONE:
			break;
	}
	attron(COLOR_PAIR(GREEN));
	AShip::drawShip();
	attroff(COLOR_PAIR(GREEN));}

/** Operator **/

ShipBigBoss &ShipBigBoss::operator=(ShipBigBoss const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

ShipBigBoss::~ShipBigBoss() {
}

void ShipBigBoss::isHit() {
	if (_life - 1 == 0)
		system("afplay ./sound/big_explosion.mp3 &");
	AShip::isHit();
}
