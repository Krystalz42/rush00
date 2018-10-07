//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef SHIPBOSS_HPP
#define SHIPBOSS_HPP

#include <Ship/AShip.hpp>

class ShipBoss : public AShip {
protected:

	virtual List<ABullet *> *fire() ;



public:
protected:

public:
	ShipBoss();
};

#endif //SHIPBOSS_HPP
