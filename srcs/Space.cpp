//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Space.hpp>
#include <Ship/ShipMob.hpp>

#include "Space.hpp"

/** Static **/
/** Constructor **/

Space::Space() : _level(0) {
	initLevel();
}

Space::Space(Space const &i) {
	*this = i;
}
/** Public **/

void Space::getInput(int ch) {

}

void Space::moveBullets() {
	_bm->moveBullets();
}

void Space::moveEnnemyBullets() {
	_bm->moveBullets();
}

void Space::ennemyAction() {
}

/** Private **/

void Space::initLevel() {
	int difficulty = _level *  10;
	ship_ennemy = new List<AShip *>;



	for (int idx = 0; idx < difficulty; idx++) {
		ship_ennemy->pushFront(new ShipMob(10 ,10));
	}

	_sm = new ShipManager(ship_ennemy);
}
/** Operator **/

Space &Space::operator=(Space const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

Space::~Space() {

}



