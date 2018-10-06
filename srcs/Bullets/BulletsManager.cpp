//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/BulletsManager.hpp>
#include <Bullets/BasicBullet.hpp>
#include <Ship/ShipMob.hpp>

void BulletsManager::moveBullets() {
	_shooters_ennemy.begin();
	_shooters_ennemy.end();
	_shooters_ennemy.pushBack(new ShipMob(0, 0));
}
