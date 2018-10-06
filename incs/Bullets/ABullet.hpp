//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BULLET_HPP__
#define __BULLET_HPP__


#include <ft_retro.h>
#include "utils/Position.hpp"

class ABullet {
protected:
	Position		*_p;
	Move			_m;			
	virtual void		drawBullet() const = 0;
	virtual void		deleteBullet() const = 0;

public:
	ABullet(Position *p, Move m);
	ABullet(ABullet const &i);
	virtual ~ABullet();

	void		moveBullet();
	Position *	getPosition();
	bool 		isAlive();
private:
	ABullet();

};


#endif //__BULLET_HPP__
