//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BULLET_HPP__
#define __BULLET_HPP__


#include <ft_retro.h>
#include "utils/Position.hpp"

class ABullet {
protected:
	Position *_p;
	Move _m;
	char _c;
	char _color;

	virtual void drawBullet() const = 0;

	virtual void deleteBullet() const = 0;

	ABullet();

public:
	ABullet(Position *p, Move m, char c, char color);

	ABullet(ABullet const &i);

	virtual ~ABullet();

	ABullet &operator=(ABullet const &i);

	void moveBullet();

	Position const &getPosition();

	bool isAlive();
};


#endif //__BULLET_HPP__
