//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMob.hpp>
#include <Bullets/BasicBullet.hpp>

#include "Ship/ShipMob.hpp"

/** Static **/



/** Constructor **/


ShipMob::ShipMob() {

}
ShipMob::ShipMob(int x, int y) : AShip(x, y) {
	_current_bullets = 10;
	_max_bullets = 10;
}

ShipMob::ShipMob(ShipMob const &i) {

}

/** Public **/

ABullet *ShipMob::fire() const {
	if (_current_bullets > 0) {
		return new BasicBullet();
	}
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

