//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Ship/AShip.hpp>
#include <Ship/ShipBoss.hpp>
#include <ncurses.h>
#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Weapon/WeaponTripleVertical.hpp>

/** Static **/
/** Constructor **/

ShipBoss::ShipBoss() :
	AShip(
			10,
			10,
			10) {
	_w = new WeaponTripleVertical();
	_ship_design = "\\/O/\\";
	Position p(rand() % (LINES / 3) + 1,rand() % (COLS - 3) + 1);
	_p.pushFront(new Position(p.getY() - 1, p.getX() - 1));
	_p.pushFront(new Position(p.getY() - 1, p.getX() + 1));
	_p.pushFront(new Position(p.getY(), p.getX()));
	_p.pushFront(new Position(p.getY() + 1, p.getX() - 1));
	_p.pushFront(new Position(p.getY() + 1, p.getX() + 1));
}

/** Public **/

List<ABullet *> *ShipBoss::fire() {

	if (_current_bullets > 0) {
		system("afplay $PWD/sound/piou.mp3 &");
		Position p = *_p.begin()->data;
		p.setX(p.getX() + 1);
		p.setY(p.getY() + 2);
		return _w->createBullets(p, SOUTH);
	}
	return 0;
}



void ShipBoss::isHit() {
	if (_life == 1) {
		system("afplay $PWD/sound/boom_boss.mp3 &");
	}
	AShip::isHit();
}

/** Private **/

void ShipBoss::drawShip() const {
	attron(COLOR_PAIR(MAGENTA));
	AShip::drawShip();
	attroff(COLOR_PAIR(RED));
}

/** Operator **/

ShipBoss &ShipBoss::operator=(ShipBoss const &i) {
	return *this;
}

/** Destructor **/



ShipBoss::~ShipBoss() {

}


