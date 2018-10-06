//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Space.hpp>
#include <Ship/ShipMob.hpp>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <Ship/ShipPlayer.hpp>

extern std::ofstream		file;

/** Static **/
/** Constructor **/

Space::Space() : _level(1) {
	ship_user = new ShipPlayer();
	initLevel();
}

Space::Space(Space const &i) {
	*this = i;
}
/** Public **/

void Space::getInput(int ch) {
	if (ship_user == 0)
		return;
	switch (ch)
	{
		case 'd':
		case 'D':
			ship_user->moveShip(EAST);
			break;
		case 'a':
		case 'A':
			ship_user->moveShip(WEST);
			break;
		case 'q':
		case 'Q':
			ship_user->moveShip(WEST);
			_bm->fireUser();
			break;
		case 'e':
		case 'E':
			ship_user->moveShip(EAST);
			_bm->fireUser();
			break;
		case ' ':
			_bm->fireUser();
			break;
		case 27:
			return;
		default:
			break;
	}
}

void Space::moveUserBullets() {
	_bm->moveBullets();
}

void Space::moveEnnemyBullets() {
	_bm->moveBullets();
}

void Space::ennemyAction() {

}

/** Private **/

void Space::initLevel() {
	file << "Init level" << std::endl;
	int difficulty = _level * 10;
	List<IShipsManager *> *t_sm = new List<IShipsManager *>();
	List<IBulletsManager *> *t_bm = new List<IBulletsManager *>();

	ship_ennemy = new List<AShip *>;

	for (int idx = 0; idx < difficulty; idx++) {
		ship_ennemy->pushFront(new ShipMob());
	}
	for (List<AShip *>::t_list *it = ship_ennemy->begin(); it != 0; it = it->next) {
		t_bm->pushFront(it->data);
		t_sm->pushFront(it->data);
	}
	_bm = new BulletsManager(t_bm, ship_user);
	_sm = new ShipManager(t_sm);
//	delete t_bm;
//	delete t_sm;
	file << "Finish init level" << std::endl;
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



