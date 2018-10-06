//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef RUSH00_SHIPMOB_HPP
#define RUSH00_SHIPMOB_HPP

#include "AShip.hpp"

class ShipMob : virtual  public AShip{
public:
	ShipMob(int x, int y);

	virtual ABullet *fire() const;
};

#endif //RUSH00_SHIPMOB_HPP
