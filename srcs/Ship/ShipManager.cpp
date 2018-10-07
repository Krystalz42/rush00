//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <utils/IShipsManager.hpp>
#include <Ship/ShipManager.hpp>
#include <Ship/ShipMob.hpp>
#include <Space.hpp>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <Ship/ShipPlayer.hpp>

extern std::ofstream		file;


ShipManager::ShipManager() {

}

ShipManager::ShipManager(
		List<IShipsManager *> *ships,
		IShipsManager *user_ship)
		: ships(ships), user_ship(user_ship) {
}

void ShipManager::moveEnnemy() {
	for (List<IShipsManager *>::t_list *it = ships->begin(); it != 0; it = it->next) {
		it->data->moveShip(static_cast<Move>(rand() % 4));
	}
}

void ShipManager::moveUser(Move m) {
	user_ship->moveShip(m);
}

bool ShipManager::isAllEnnemyDead() {
	for (List<IShipsManager *>::t_list *it = ships->begin(); it != 0; it = it->next) {
		if (it->data->isAlive())
			return false;
	}
	return true;
}

ShipManager::~ShipManager() {
	delete ships;
}

