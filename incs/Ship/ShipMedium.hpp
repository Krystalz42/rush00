//
// Created by Alexandre ROULIN on 07/10/2018.
//
//
#ifndef SHIPMEDIUM_HPP
#define SHIPMEDIUM_HPP

#include "AShip.hpp"

class ShipMedium : virtual public AShip {
public:
	ShipMedium();

	ShipMedium(ShipMedium const &i);

	virtual ~ShipMedium();

	virtual ShipMedium &operator=(ShipMedium const &i);

protected:
	virtual List<ABullet *> *fire();

	virtual void drawShip() const;

	virtual void deleteShip() const;

	virtual void isHit();
};

#endif //SHIPMEDIUM_HPP
