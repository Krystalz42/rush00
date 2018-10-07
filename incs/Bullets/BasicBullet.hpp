//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __PLAYERBULLET_HPP__
#define __PLAYERBULLET_HPP__

#include "ABullet.hpp"

class BasicBullet : virtual public ABullet {
public:
	BasicBullet(Position *p, Move m, char c, char color);

	~BasicBullet();

private:
	BasicBullet(ABullet const &i);

	BasicBullet();

	BasicBullet &operator=(BasicBullet const &i);

	virtual void drawBullet() const;

	virtual void deleteBullet() const;
};

#endif //__PLAYERBULLET_HPP__
