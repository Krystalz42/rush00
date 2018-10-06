//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Ship/ShipMob.hpp>

#include "Ship/ShipMob.hpp"

ShipMob::ShipMob(int x, int y) : AShip(x, y) {

}

ABullet *ShipMob::fire() const {
	return 0;
}
