//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/BulletsManager.hpp>
#include <Bullets/BasicBullet.hpp>
#include <Ship/ShipMob.hpp>

void BulletsManager::moveBullets() {
	List<ABullet*>::t_list *begin = _bullets_ennemy.begin();
	Position player = _shooter_user->getPosition();
	while (begin) {
		begin->data->moveBullet();
		if (*begin->data->getPosition() == player)
		{
			_shooter_user->isHit();
			delete begin->data;
			
		}
	}
}
