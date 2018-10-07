//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __PLAYERBULLET_HPP__
#define __PLAYERBULLET_HPP__

#include "ABullet.hpp"

class BasicBullet : virtual public ABullet {
public:

	BasicBullet(Position *p, Move m);
	~BasicBullet();

private:
	virtual void drawBullet() const;
	virtual void deleteBullet() const;
	BasicBullet();
	BasicBullet(ABullet const &i);
};

#endif //__PLAYERBULLET_HPP__
