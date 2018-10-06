//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef IBULLETSMANAGER_HPP
#define IBULLETSMANAGER_HPP

#include "ICollision.hpp"
#include "IShooter.hpp"

class IBulletsManager : ICollision, IShooter{
public:
	virtual ~IBulletsManager() {}
};

#endif //IBULLETSMANAGER_HPP
