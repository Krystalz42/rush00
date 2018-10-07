//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef SHIPBOSS_HPP
#define SHIPBOSS_HPP

#include <Ship/AShip.hpp>

class ShipBoss : public AShip {
protected:

	virtual List<ABullet *> *fire();

	virtual void drawShip() const;

	virtual void isHit();

public:
	ShipBoss();
	ShipBoss(ShipBoss const &i);

	ShipBoss &operator=(ShipBoss const &i);

	virtual ~ShipBoss();
};

#endif //SHIPBOSS_HPP
