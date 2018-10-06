//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SHIPMANAGER_HPP
#define SHIPMANAGER_HPP

#include <utils/IShipsManager.hpp>
#include <utils/List.tpp>
#include "AShip.hpp"

class ShipManager {
private:
	List<IShipsManager *>		*ships;
	IShipsManager			*user_ship;
	ShipManager();

public:

	ShipManager(List<IShipsManager *> *pList);
};

#endif //SHIPMANAGER_HPP
