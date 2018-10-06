//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __SHIPMOB_HPP__
#define __SHIPMOB_HPP__

#include "AShip.hpp"

class ShipMob : virtual  public AShip{
public:
	ShipMob(int x, int y);

	virtual ABullet *fire() const;
};

#endif //__SHIPMOB_HPP__
