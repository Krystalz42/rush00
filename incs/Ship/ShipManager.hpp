//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SHIPMANAGER_HPP
#define SHIPMANAGER_HPP

#include <utils/IShipsManager.hpp>
#include <utils/List.hpp>
#include "AShip.hpp"

class ShipManager {
private:
	List<IShipsManager *> *ships;
	IShipsManager *user_ship;

	ShipManager();

public:
	ShipManager(ShipManager const &i);

	ShipManager(List<IShipsManager *> *ships, IShipsManager *user_ship);

	virtual ~ShipManager();

	ShipManager &operator=(ShipManager const &i);

	void moveEnnemy();

	void moveUser(Move m);

	bool isAllEnnemyDead();
};

#endif //SHIPMANAGER_HPP
