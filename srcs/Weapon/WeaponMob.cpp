//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponMob.hpp>
#include <Bullets/MobBullet.hpp>

WeaponMob::WeaponMob() : AWeapon(1) {

}


WeaponMob::~WeaponMob() {

}

List<ABullet *> *WeaponMob::createBullets(Position const &p, Move m) {
	List<ABullet *>		*l = new List<ABullet *>();
	l->pushFront(new MobBullet(new Position(p), m));
	return l;
}

