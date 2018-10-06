//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/AShip.hpp>

/** Static **/
/** Constructor **/

AShip::AShip() {

}

AShip::AShip(int x, int y) {

}

/** Public **/

/** Private **/
/** Operator **/
/** Destructor **/

AShip &AShip::operator=(const AShip &i) {
	return *this;
}

const Position &AShip::getPosition() {
	return *_p;
}

AShip::AShip(AShip const &i) {

}

AShip::~AShip() {

}

void AShip::isHit() {

}

