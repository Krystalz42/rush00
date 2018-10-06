//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/AShip.hpp>

/** Static **/
/** Constructor **/

AShip::AShip() {

}

AShip::AShip(
		unsigned int _current_bullets,
		unsigned int _max_bullets,
			Position *_p,
			unsigned int _life
			) :
			_current_bullets(_current_bullets),
			_max_bullets(_max_bullets),
			_p(_p),
			_life(_life) {
}

AShip::AShip(AShip const &i) {

}

/** Public **/

void AShip::isHit() {
	_life--;
}

bool AShip::isAlive() {
	return _life > 0;
}

Position const &AShip::getPosition() {
	return *_p;
}

/** Private **/
/** Operator **/
AShip &AShip::operator=(const AShip &i) {
	return *this;
}

/** Destructor **/
AShip::~AShip() {
	if (_p != 0)
		delete _p;
}

void AShip::moveShip(Move m) {

}








