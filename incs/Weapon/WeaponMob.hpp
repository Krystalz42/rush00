//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONMOB_HPP
#define WEAPONMOB_HPP
//
// Created by Alexandre ROULIN on 07/10/2018.
//


#include "AWeapon.hpp"
#include <Ship/ShipPlayer.hpp>

class WeaponMob : virtual public AWeapon {
public:
	WeaponMob();

	WeaponMob(WeaponMob const &i);

	virtual ~WeaponMob();

	WeaponMob &operator=(WeaponMob const &i);

	virtual List<ABullet *> *createBullets(Position const &p, Move m);

};


#endif //WEAPONMOB_HPP
