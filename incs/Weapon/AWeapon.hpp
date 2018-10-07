//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <Bullets/ABullet.hpp>
#include <utils/List.hpp>

class AWeapon {
protected:
	AWeapon(unsigned int _nu);

public:

protected:
	unsigned int		_nu;
public:

	virtual ~AWeapon();

	virtual List<ABullet *>		*createBullets(Position const &p, Move m) = 0;
private:
	AWeapon();
public:
	unsigned int getSize() const;
};

#endif //AWEAPON_HPP
