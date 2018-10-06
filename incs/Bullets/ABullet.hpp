//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef RUSH00_BULLET_HPP
#define RUSH00_BULLET_HPP


#include <ft_retro.h>
#include "utils/Position.hpp"

class ABullet {
protected:
	Position		*p;
	virtual void		drawBullet() const = 0;
	virtual void		deleteBullet() const = 0;

public:
	ABullet();
	ABullet(Position *p);
	ABullet(ABullet const &i);
	virtual ~ABullet();
	void		moveBullet();
};


#endif //RUSH00_BULLET_HPP
