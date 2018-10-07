//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONTRIPLEVERTICAL_HPP
#define WEAPONTRIPLEVERTICAL_HPP

#include "AWeapon.hpp"

class WeaponTripleVertical : virtual public AWeapon {
public:
	WeaponTripleVertical();

	WeaponTripleVertical(WeaponTripleVertical const &i);

	virtual ~WeaponTripleVertical();

	WeaponTripleVertical &operator=(WeaponTripleVertical const &i);

	virtual List<ABullet *> *createBullets(Position const &p, Move m);
};


#endif //WEAPONTRIPLEVERTICAL_HPP
