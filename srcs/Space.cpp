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
#include <Ship/ShipBoss.hpp>
#include <ncurses.h>
#include <utils/Utils.hpp>
#include <Ship/ShipBigBoss.hpp>
#include <utils/Star.hpp>
#include <zconf.h>
#include <Weapon/WeaponDoubleVertical.hpp>
#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Ship/ShipMedium.hpp>
#include <Weapon/WeaponUltime.hpp>

/** Static **/
/** Constructor **/

Space::Space() : _level(1), _time(time(0)) {
	ship_user = new ShipPlayer();
	initLevel();
	system("afplay $PWD/sound/star_wars.mp3 &");
	initStars();
}

Space::Space(Space const &i) {
	*this = i;
}

/** Public **/
void Space::refresh() {
	attron(A_BOLD);
	std::string r;
	//[Level : %d | Life : %d. | Score : %d | Timer : %d| Current Bullets %d/%d | Weapon : %s ]
	r += "  [ Level : ";
	r += std::to_string(_level);
	r += " | Life : ";
	r += std::to_string(ship_user->getLife());
	r += " | Score : ";
	r += std::to_string(ship_user->getScore());
	r += " | Time : ";
	r += std::to_string(time(0) - _time);
	r += " | Current Bullets ";
	r += std::to_string(ship_user->getCurrentBullets());
	r += "/";
	r += std::to_string(ship_user->getMaxBullets());
	r += " | Weapon : ";
	r += ship_user->getWeaponType();
	r += " ]";
	move(0, COLS - r.size());
	addstr(r.c_str());
	attroff(A_BOLD);
}

bool Space::getInput(int ch) {
	if (_sm == 0) {
		return false;
	}
	switch (ch) {
		case 'd':
		case 'D':
			_sm->moveUser(EAST);
			break;
		case 'a':
		case 'A':
			_sm->moveUser(WEST);
			break;
		case 'q':
		case 'Q':
			_sm->moveUser(WEST);
			_bm->fireUser();
			break;
		case 'e':
		case 'E':
			_sm->moveUser(EAST);
			_bm->fireUser();
			break;
		case ' ':
			_bm->fireUser();
			break;
		case 27:
			return true;
		default:
			break;
	}
	return false;
}

void Space::moveUserBullets() {
	if (_bm != 0) {
		_bm->moveBasicBullets();
	}
}

void Space::moveEnnemyBullets() {
	if (_bm != 0) {
		_bm->moveMobBullets();
	}
}

void Space::ennemyAction() {

	if (_sm != 0) {
		_sm->moveEnnemy();
		_bm->fireMob();
		for (List<Star *>::t_list *it = _star.begin(); it != 0; it = it->next) {
			it->data->moveStar();
		}

		if (_sm->isAllEnnemyDead()) {
			delete _bm;
			_bm = 0;
			delete _sm;
			_sm = 0;
			for (List<AShip *>::t_list *it = ship_ennemy->begin();
				 it != 0; it = it->next) {
				delete it->data;
			}
			delete ship_ennemy;
			ship_ennemy = 0;
			_level++;
			system("afplay $PWD/sound/level_up.mp3 &");
			ship_user->levelUp();
			initLevel();
		} else if (ship_user->getLife() == 0) {
			system("afplay $PWD/sound/game_over.mp3");
			Utils::getInstance()->exitAndReset();
		}
	}
}

/** Private **/

void Space::initLevel() {
	int difficulty = _level * 14;
	List<IShipsManager *> *t_sm = new List<IShipsManager *>();
	List<IBulletsManager *> *t_bm = new List<IBulletsManager *>();
	ship_ennemy = new List<AShip *>;
	if (_level == 3) {
		ship_user->levelUp();
		ship_user->setWeapon(new WeaponDoubleVertical());
	}
	if (_level == 6) {
		ship_user->levelUp();
		ship_user->setWeapon(new WeaponTripleDiagonal());
	}
	if (_level == 9) {
		ship_user->levelUp();
		ship_user->setWeapon(new WeaponUltime());
	}
	for (int idx = 0; idx < difficulty / 30; idx++) {
		AShip *sm = new ShipBigBoss();
		ship_ennemy->pushFront(sm);
		t_bm->pushFront(sm);
		t_sm->pushFront(sm);
		difficulty -= 10;
	}

	for (int idx = 0; idx < difficulty / 15; idx++) {
		AShip *sm = new ShipBoss();
		ship_ennemy->pushFront(sm);
		t_bm->pushFront(sm);
		t_sm->pushFront(sm);
		difficulty -= 5;
	}

	for (int idx = 0; idx < difficulty / 8; idx++) {
		AShip *sm = new ShipMedium();
		ship_ennemy->pushFront(sm);
		t_bm->pushFront(sm);
		t_sm->pushFront(sm);
		difficulty -= 3;
	}


	for (int idx = 0; idx < difficulty; idx++) {
		AShip *sm = new ShipMob();
		ship_ennemy->pushFront(sm);
		t_bm->pushFront(sm);
		t_sm->pushFront(sm);
	}
	_bm = new BulletsManager(t_bm, ship_user);
	_sm = new ShipManager(t_sm, ship_user);
}

/** Operator **/

Space &Space::operator=(Space const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

Space::~Space() {
	delete ship_user;
}

void Space::initStars() {
	int randp;
	for (int y = 0; y < LINES; y++) {
		if (y % 15 == 0)
			for (int x = 0; x < COLS; x++) {
				if (x % 15 == 0) {
					randp = rand() % 8;
					_star.pushFront(new Star(
							new Position(((randp <= 3) ? y - randp : y + randp),
										 (randp <= 3 ? x + randp : x -
																   randp))));
				}
			}
	}
}



