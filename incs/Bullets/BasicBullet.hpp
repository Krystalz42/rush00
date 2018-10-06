//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef RUSH00_BASICBULLET_HPP
#define RUSH00_BASICBULLET_HPP

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

#endif //RUSH00_BASICBULLET_HPP
