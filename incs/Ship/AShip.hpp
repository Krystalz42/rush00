//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __ASHIP_HPP__
#define __ASHIP_HPP__

#include <utils/IShooter.hpp>
#include <clocale>
#include "utils/IShooter.hpp"

class AShip : public IShooter {
protected:
	Position		*_p;
	unsigned int	life;

public:
	AShip(int x, int y);
	AShip(AShip const &i);
	virtual ~AShip();

	AShip	&operator=(AShip const &i);

	virtual ABullet *fire() const = 0;

	virtual void isHit();

	virtual const Position &getPosition();
private:
	AShip();


};

#endif //__ASHIP_HPP__
