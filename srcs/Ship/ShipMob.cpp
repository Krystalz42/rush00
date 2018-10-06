//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMob.hpp>

#include "Ship/ShipMob.hpp"

/** Static **/
/** Constructor **/


ShipMob::ShipMob() {

}
ShipMob::ShipMob(int x, int y) : AShip(x, y) {

}

ShipMob::ShipMob(ShipMob const &i) {

}

/** Public **/

ABullet *ShipMob::fire() const {
	return 0;
}




/** Private **/
/** Operator **/

ShipMob &ShipMob::operator=(ShipMob const &i) {
	if (this != &i) {
		_p = i._p;
		_life = i._life;
	}
	return *this;
}

/** Destructor **/

ShipMob::~ShipMob() {

}