//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef ISHIPSMANAGER_HPP
#define ISHIPSMANAGER_HPP

#include "ICollision.hpp"

class IShipsManager : virtual public ICollision {

public:
	virtual void moveShip(Move m) = 0;

	~IShipsManager() {};
};

#endif //ISHIPSMANAGER_HPP
