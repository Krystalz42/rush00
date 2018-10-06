//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BASICBULLET_HPP__
#define __BASICBULLET_HPP__

#include "ABullet.hpp"

class BasicBullet : virtual public ABullet {
public:
	BasicBullet();
	BasicBullet(Position *p);
	BasicBullet(const ABullet &i);


private:
	virtual void drawBullet() const;
	virtual void deleteBullet() const;
};

#endif //__BASICBULLET_HPP__
