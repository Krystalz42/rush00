//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef SHIPBIGBOSS_HPP
#define SHIPBIGBOSS_HPP

#include <Ship/AShip.hpp>

class ShipBigBoss : public AShip {
protected:

	virtual List<ABullet *> *fire();

	virtual void moveShip(Move m);


public:
	ShipBigBoss();

	ShipBigBoss &operator=(ShipBigBoss const &i);

	virtual ~ShipBigBoss();
};

#endif //SHIPBIGBOSS_HPP
