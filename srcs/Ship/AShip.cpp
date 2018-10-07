//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/AShip.hpp>
#include <curses.h>
#include <Weapon/WeaponBasic.hpp>

/** Static **/
/** Constructor **/

AShip::AShip() {

}

AShip::AShip(AShip const &i) {
	*this = i;
}
AShip::AShip(
		unsigned int _current_bullets,
		unsigned int _max_bullets,
		unsigned int _life) :
		_current_bullets(_current_bullets),
		_max_bullets(_max_bullets),
		_life(_life),
		_w(0)
{
	_p = List<Position *>();
}


void AShip::moveShip(Move m) {
	deleteShip();
	if (!isAlive())
		return;

	switch (m) {
		case NORTH:
			if (_p.begin()->data->getY() > 0)
				for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next)
					it->data->setY(it->data->getY() - 1);
			break;
		case SOUTH:
			if (_p.begin()->data->getY() != (LINES / 3) + 1 || _p.last()->data->getY() != (LINES / 3) + 1 )
				for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next)
					it->data->setY(it->data->getY() + 1);
			break;
		case WEST:
			if (_p.begin()->data->getX() > 0)
				for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next)
					it->data->setX(it->data->getX() - 1);
			break;
		case EAST:
			if (_p.last()->data->getX() < COLS - 1)
				for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next)
					it->data->setX(it->data->getX() + 1);
			break;

		case NONE:
			break;
		case NORTHWEST:break;
		case NORTHEAST:break;
		case SOUTHEAST:break;
		case SOUTHWEST:break;
	}
 	drawShip();
}

bool AShip::isCollide(Position const &p) {
	for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next) {
		if (*it->data == p)
			return true;
	}
	return false;
}

/** Public **/

unsigned int AShip::getPowerfull() {
	return _max_bullets;
}

void AShip::isHit() {
	if (_life != 0) _life--; else 	deleteShip();
}

void AShip::getAmmo() {
	_current_bullets++;
}

bool AShip::isAlive() const {
	return _life > 0;
}

void AShip::levelUp() {
	_max_bullets += 4;
	_current_bullets = _max_bullets;
	_life++;
}

unsigned int AShip::getLife() const {
	return _life;
}

unsigned int AShip::getMaxBullets() const {
	return _max_bullets;
}

unsigned int AShip::getCurrentBullets() const {
	return _current_bullets;
}

std::string const &AShip::getWeaponType() const {
	return _w->getType();
}

/** Private **/


void AShip::deleteShip() const {
	for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next) {
		move(it->data->getY(), it->data->getX());
		addch(EMPTY);
	}
}

void AShip::drawShip() const {
	int index = 0;
	for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next) {
		move(it->data->getY(), it->data->getX());
		addch(_ship_design[index]);
		index++;
	}

}
/** Operator **/

AShip &AShip::operator=(const AShip &i) {
	if (this != &i) {
	}
	return *this;
}

/** Destructor **/
AShip::~AShip() {
	delete _w;
	for (List<Position *>::t_list *it = _p.begin();it != 0; it = it->next) {
		delete it->data;
	}
}


