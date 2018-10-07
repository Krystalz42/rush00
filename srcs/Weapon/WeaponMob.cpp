//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponMob.hpp>
#include <Bullets/BasicBullet.hpp>

/** Static **/
/** Constructor **/

WeaponMob::WeaponMob() : AWeapon(1, "Weapon Mob") {

}

/** Public **/

List<ABullet *> *WeaponMob::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	l->pushFront(new BasicBullet(new Position(p), m, MOB_BULLET, GREEN));
	return l;
}

WeaponMob::WeaponMob(WeaponMob const &i) {

}
/** Private **/
/** Operator **/

WeaponMob &WeaponMob::operator=(WeaponMob const &i) {
	return *this;
}

/** Destructor **/

WeaponMob::~WeaponMob() {

}