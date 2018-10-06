//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <utils/IShipsManager.hpp>
#include <Ship/ShipManager.hpp>


ShipManager::ShipManager() {

}

ShipManager::ShipManager(List<AShip>::t_list *list_ship) {
	for (List<AShip>::t_list *it = list_ship; it != 0; it = it->next) {

	}
}
