//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __MOBBULLET_HPP__
#define __MOBBULLET_HPP__

#include "ABullet.hpp"

class MobBullet : virtual public ABullet {
public:
	MobBullet(Position *p, Move m);
	~MobBullet();

private:
	virtual void drawBullet() const;
	virtual void deleteBullet() const;
	MobBullet();
	MobBullet(const ABullet &i);
};

#endif //__MOBBULLET_HPP__
