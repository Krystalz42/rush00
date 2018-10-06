//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BASICBULLET_HPP__
#define __BASICBULLET_HPP__

#include "ABullet.hpp"

class BasicBullet : ABullet {
public:
	BasicBullet();

	BasicBullet(const ABullet &i);

	BasicBullet(Position *p);


private:
	virtual void drawBullet() const;
	virtual void deleteBullet() const;
};

#endif //__BASICBULLET_HPP__
