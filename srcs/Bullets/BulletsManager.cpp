//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/BulletsManager.hpp>
#include <Bullets/PlayerBullet.hpp>
#include <Bullets/MobBullet.hpp>
#include <Ship/ShipMob.hpp>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>


extern std::ofstream		file;

void BulletsManager::moveMobBullets() {
		List<ABullet*>::t_list *enemy_bullets = _bullets_ennemy.begin();
		List<ABullet*>::t_list *tmp;

		while (enemy_bullets) {
			enemy_bullets->data->moveBullet();
			if (*enemy_bullets->data->getPosition() == _shooter_user->getPosition())
			{
				_shooter_user->isHit();
				tmp = enemy_bullets->next;
				_bullets_ennemy.erase(enemy_bullets->data);
				enemy_bullets = tmp;

			}
			else
				enemy_bullets = enemy_bullets->next;
		}
}

void BulletsManager::movePlayerBullets() {
		List<ABullet*>::t_list *user_bullets = _bullets_user.begin();
		List<IBulletsManager*>::t_list *enemy_shooters;
		List<ABullet*>::t_list *tmp;

		while (user_bullets) {
			user_bullets->data->moveBullet();
			enemy_shooters = _shooters_ennemy->begin();
			while (enemy_shooters && *user_bullets->data->getPosition() != enemy_shooters->data->getPosition())
				enemy_shooters = enemy_shooters->next;
			if (enemy_shooters != 0)
				{
					enemy_shooters->data->isHit();
					tmp = user_bullets->next;
					_bullets_user.erase(user_bullets->data);
					user_bullets = tmp;
				}
			else
				user_bullets = user_bullets->next;
		}
}

BulletsManager::BulletsManager(List<IBulletsManager *> *pList, IBulletsManager* user) : 
	_shooters_ennemy(pList),
	_shooter_user(user)
{

}

void BulletsManager::fireUser() {
	file << "SHOOTER USER IS NULL" << (_shooter_user ==  0) <<std::endl;
	_bullets_user.pushFront(_shooter_user->fire());
}

void BulletsManager::fireMob() {
	file << "SHOOTER MOB IS NULL" << (_shooters_ennemy ==  0) <<std::endl;
	// if (rand() % 10 == 1)

	// _bullets_ennemy.pushFront(_shooters_ennemy->fire());
}