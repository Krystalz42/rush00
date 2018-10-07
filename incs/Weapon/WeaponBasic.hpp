//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONBASIC_HPP
#define WEAPONBASIC_HPP

#include "AWeapon.hpp"
#include <Ship/ShipPlayer.hpp>

class WeaponBasic: virtual public AWeapon  {
private:
public:
	WeaponBasic();

	virtual ~WeaponBasic();


	virtual List<ABullet *> *createBullets(Position const &p, Move m);

};

#endif //WEAPONBASIC_HPP
