//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BULLET_HPP__
#define __BULLET_HPP__


#include <ft_retro.h>
#include "utils/Position.hpp"

class ABullet {
protected:
	Position		*p;
	Move			m;			
	virtual void		drawBullet() const = 0;
	virtual void		deleteBullet() const = 0;

public:
	ABullet();
	ABullet(Position *p, Move m);
	ABullet(ABullet const &i);
	virtual ~ABullet();
	void		moveBullet();
	Position *	getPosition();
};


#endif //__BULLET_HPP__
