//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipPlayer.hpp>
#include <ncurses.h>
#include <cstdlib>
#include <Bullets/MobBullet.hpp>
#include <iostream>
#include <Bullets/BasicBullet.hpp>
#include <utils/List.hpp>
#include <Weapon/WeaponBasic.hpp>
#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Weapon/WeaponTripleVertical.hpp>
#include <iostream>
#include <thread>
#include <chrono>
#include <Weapon/WeaponUltime.hpp>


/** Constructor **/


ShipPlayer::ShipPlayer() :
		AShip(
				12,
				12,
				5), _score(0) {
	drawShip();
	_w = new WeaponBasic();
	_ship_design = "<^^>";
	_p.pushFront(new Position(LINES - 1, (COLS / 2) - 1));
	_p.pushFront(new Position(LINES - 2, COLS / 2));
	_p.pushFront(new Position(LINES - 1, COLS / 2));
	_p.pushFront(new Position(LINES - 1, (COLS / 2) + 1));
	moveShip(NONE);
}

ShipPlayer::ShipPlayer(ShipPlayer const &i) {
	*this = i;
}

/** Public **/


void ShipPlayer::setWeapon(AWeapon *w) {
	if (w) {
		delete _w;
		_w = w;
	}
}

unsigned int ShipPlayer::getScore() const {
	return _score;
}

void ShipPlayer::setScore(unsigned int score) {
	_score = score;
}

List<ABullet *> *ShipPlayer::fire() {
	if (_w == 0)
		return 0;
	if (_current_bullets >= _w->getSize()) {
		_current_bullets -= _w->getSize();
		system("afplay $PWD/sound/piou.mp3 &");
		Position p = *_p.begin()->data;
		p.setX(p.getX() + 1);
		p.setY(p.getY() - 2);
		return _w->createBullets(p, NORTH);
	}
	return 0;
}

void ShipPlayer::moveShip(Move m) {
	deleteShip();
	if (!isAlive())
		return;
	switch (m) {

		case EAST:
			if (_p.last()->data->getX() != COLS - 1)
				for (List<Position *>::t_list *it = _p.begin();
					 it != 0; it = it->next)
					it->data->setX(it->data->getX() + 1);
			break;
		case WEST:
			if (_p.begin()->data->getX() != 1)
				for (List<Position *>::t_list *it = _p.begin();
					 it != 0; it = it->next) {
					it->data->setX(it->data->getX() - 1);
				}
			break;
		case NORTH:
			for (List<Position *>::t_list *it = _p.begin();
				 it != 0; it = it->next)
				it->data->setY(it->data->getY() - 1);
			break;
		case SOUTH:
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
	attron(COLOR_PAIR(CYAN));
	AShip::drawShip();
	attroff(COLOR_PAIR(RED));
}

void ShipPlayer::getAmmo() {
	_current_bullets++;
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

