//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __ASHIP_HPP__
#define __ASHIP_HPP__

#include <utils/IShooter.hpp>
#include <clocale>
#include <utils/IBulletsManager.hpp>
#include <utils/IShipsManager.hpp>
#include "utils/IShooter.hpp"

class AShip : public IBulletsManager, public IShipsManager {
protected:
	unsigned int	_current_bullets;
	unsigned int	_max_bullets;
	Position		*_p;
	unsigned int	_life;
	AShip(unsigned int _current_bullets, unsigned int _max_bullets,
		  Position *_p, unsigned int _life);

protected:
	AShip();
	virtual void		drawShip() const = 0;
	virtual void		deleteShip() const = 0;

public:
	AShip(AShip const &i);
	virtual ~AShip();

	virtual AShip	&operator=(AShip const &i);

	virtual void moveShip(Move m);
	virtual bool	isAlive();
	virtual ABullet *fire() const = 0;
	virtual void isHit();
	virtual const Position &getPosition();

};

#endif //__ASHIP_HPP__
