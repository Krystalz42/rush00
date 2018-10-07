//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONDOUBLEVERTICAL_HPP
#define WEAPONDOUBLEVERTICAL_HPP

#include "AWeapon.hpp"

class WeaponDoubleVertical : virtual public AWeapon {
public:
	WeaponDoubleVertical();

	WeaponDoubleVertical(WeaponDoubleVertical const &i);

	virtual ~WeaponDoubleVertical();

	WeaponDoubleVertical &operator=(WeaponDoubleVertical const &i);

	virtual List<ABullet *> *createBullets(Position const &p, Move m);
};



#endif //WEAPONDOUBLEVERTICAL_HPP
