//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Bullets/BasicBullet.hpp>
#include <Weapon/WeaponBasic.hpp>

#include "Weapon/WeaponBasic.hpp"

/** Static **/
/** Constructor **/

WeaponBasic::WeaponBasic() : AWeapon(1, "Basic Weapon") {

}

WeaponBasic::WeaponBasic(WeaponBasic const &i) {
	*this = i;
}

/** Public **/

List<ABullet *> *WeaponBasic::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	l->pushFront(new BasicBullet(new Position(p.getY(), p.getX()), m, (m == NORTH ? PLAYER_DOT : PLAYER_BULLET_VERTIC) , (m == NORTH ? CYAN : MAGENTA)));
	return l;
}

/** Private **/

/** Operator **/

WeaponBasic &WeaponBasic::operator=(WeaponBasic const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

WeaponBasic::~WeaponBasic() {

}










