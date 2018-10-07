//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONULTIME_HPP
#define WEAPONULTIME_HPP
#include "AWeapon.hpp"

class WeaponUltime : virtual public AWeapon {
public:
	WeaponUltime();

	WeaponUltime(WeaponUltime const &i);

	virtual ~WeaponUltime();

	WeaponUltime &operator=(WeaponUltime const &i);

	virtual List<ABullet *> *createBullets(Position const &p, Move m);
};


#endif //WEAPONULTIME_HPP
