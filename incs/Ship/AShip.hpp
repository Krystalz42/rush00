//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __ASHIP_HPP__
#define __ASHIP_HPP__

#include <utils/IShooter.hpp>
#include <clocale>
#include <utils/IBulletsManager.hpp>
#include "utils/IShooter.hpp"

class AShip : public IBulletsManager {
protected:
	unsigned int	_current_bullets;
	unsigned int	_max_bullets;
	Position		*_p;
	unsigned int	_life;
	AShip();

public:
	AShip(int x, int y);
	AShip(AShip const &i);
	virtual ~AShip();

	AShip	&operator=(AShip const &i);

	virtual bool	isAlive();
	virtual ABullet *fire() const = 0;
	virtual void isHit();
	virtual const Position &getPosition();

};

#endif //__ASHIP_HPP__
