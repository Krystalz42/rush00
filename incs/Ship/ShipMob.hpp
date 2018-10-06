//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __SHIPMOB_HPP__
#define __SHIPMOB_HPP__

#include "AShip.hpp"

class ShipMob : virtual  public AShip{
private:
	ShipMob();
public:
	ShipMob(int x, int y);
	ShipMob(ShipMob const & i);
	virtual ~ShipMob();
	ShipMob		&operator=(ShipMob const &i);

	virtual ABullet *fire() const;
};

#endif //__SHIPMOB_HPP__
