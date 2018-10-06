//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef ISHIPSMANAGER_HPP
#define ISHIPSMANAGER_HPP

#include "ICollision.hpp"

class IShipsManager : ICollision {
	virtual void 	move(Move m) = 0;

};

#endif //ISHIPSMANAGER_HPP
