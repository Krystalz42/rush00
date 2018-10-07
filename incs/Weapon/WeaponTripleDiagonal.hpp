//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef WEAPONTRIPLE_HPP
#define WEAPONTRIPLE_HPP

#include "AWeapon.hpp"

class WeaponTripleDiagonal: virtual public AWeapon  {
private:
public:
	WeaponTripleDiagonal();

	virtual ~WeaponTripleDiagonal();

	virtual List<ABullet *> *createBullets(Position const &p, Move m);
};

#endif //WEAPONTRIPLE_HPP
