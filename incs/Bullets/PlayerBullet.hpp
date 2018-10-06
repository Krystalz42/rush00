//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __PLAYERBULLET_HPP__
#define __PLAYERBULLET_HPP__

#include "ABullet.hpp"

class PlayerBullet : virtual public ABullet {
public:
	PlayerBullet();
	PlayerBullet(Position *p);
	PlayerBullet(const ABullet &i);
	~PlayerBullet();

private:
	virtual void drawBullet() const;
	virtual void deleteBullet() const;
};

#endif //__PLAYERBULLET_HPP__
