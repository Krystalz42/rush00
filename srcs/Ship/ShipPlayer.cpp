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

/** Static **/



/** Constructor **/


ShipPlayer::ShipPlayer() :
		AShip(
				120,
				120,
				5) {
	drawShip();

	_w = new WeaponTripleDiagonal();
	_ship_design = "<^^>";
	_p.pushFront(new Position(LINES - 1, (COLS / 2) - 1));
	_p.pushFront(new Position(LINES - 2, COLS / 2));
	_p.pushFront(new Position(LINES - 1, COLS / 2));
	_p.pushFront(new Position(LINES - 1, (COLS / 2) + 1));
	drawShip();
}

ShipPlayer::ShipPlayer(ShipPlayer const &i) {
	*this = i;
}

/** Public **/


List<ABullet *> *ShipPlayer::fire(){
	file << _current_bullets << std::endl;
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

void ShipPlayer::moveShip(Move m) {
	deleteShip();
	if (!isAlive())
		return;
	switch (m) {

		case EAST:
			if (_p.last()->data->getX() != COLS - 1)
				for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next)
					it->data->setX(it->data->getX() + 1);
			break;
		case WEST:
			if (_p.begin()->data->getX() != 1)
			for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next)
				it->data->setX(it->data->getX() - 1);
			break;
		case NORTH:break;
		case SOUTH:break;
		case NONE:break;
		case NORTHWEST:break;
		case NORTHEAST:break;
		case SOUTHEAST:break;
		case SOUTHWEST:break;
	}
	drawShip();
}

void ShipPlayer::getAmmo() {
	_current_bullets++;
}
