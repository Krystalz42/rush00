//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __SHIPMOB_HPP__
#define __SHIPMOB_HPP__

#include "AShip.hpp"

class ShipMob : virtual public AShip {
public:
	ShipMob();

	ShipMob(ShipMob const &i);

	virtual ~ShipMob();

	virtual ShipMob &operator=(ShipMob const &i);

protected:
	virtual List<ABullet *> *fire();

	virtual void drawShip() const;

	virtual void deleteShip() const;

	virtual void isHit();
};

#endif //__SHIPMOB_HPP__
