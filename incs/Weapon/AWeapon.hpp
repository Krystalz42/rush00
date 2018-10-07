//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <Bullets/ABullet.hpp>
#include <utils/List.hpp>

class AWeapon {

protected:
	std::string _type;

	AWeapon(unsigned int _nu, std::string type);

	unsigned int _nu;

	AWeapon();

public:
	const std::string &getType() const;
	AWeapon(AWeapon const &i);

	virtual ~AWeapon();

	AWeapon &operator=(AWeapon const &);

	virtual List<ABullet *> *createBullets(Position const &p, Move m) = 0;
	unsigned int getSize() const;
};

#endif //AWEAPON_HPP
