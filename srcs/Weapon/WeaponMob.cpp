//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponMob.hpp>
#include <Bullets/MobBullet.hpp>

/** Static **/
/** Constructor **/

WeaponMob::WeaponMob() : AWeapon(1, "Weapon Mob") {

}
WeaponMob::WeaponMob(WeaponMob const &i) {
	*this = i;
}
/** Public **/

List<ABullet *> *WeaponMob::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	l->pushFront(new MobBullet(new Position(p), m));
	return l;
}


/** Private **/
/** Operator **/

WeaponMob &WeaponMob::operator=(WeaponMob const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

WeaponMob::~WeaponMob() {

}