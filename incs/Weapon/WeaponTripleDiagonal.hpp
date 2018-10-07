//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONTRIPLE_HPP
#define WEAPONTRIPLE_HPP

#include "AWeapon.hpp"

class WeaponTripleDiagonal : virtual public AWeapon {
public:
	WeaponTripleDiagonal();

	WeaponTripleDiagonal(WeaponTripleDiagonal const &i);

	virtual ~WeaponTripleDiagonal();

	WeaponTripleDiagonal &operator=(WeaponTripleDiagonal const &i);

	virtual List<ABullet *> *createBullets(Position const &p, Move m);
};

#endif //WEAPONTRIPLE_HPP
