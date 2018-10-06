//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SHIPMANAGER_HPP
#define SHIPMANAGER_HPP

#include <utils/IShipsManager.hpp>
#include <utils/List.tpp>

class ShipManager {
	List<IShipsManager>		ships;
	IShipsManager			*user_ship;
public:
	ShipManager();

public:
};

#endif //SHIPMANAGER_HPP
