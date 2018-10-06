//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/BulletsManager.hpp>
#include <Bullets/PlayerBullet.hpp>
#include <Bullets/MobBullet.hpp>
#include <Ship/ShipMob.hpp>


void BulletsManager::moveBullets() {
	{
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
	{
		List<ABullet*>::t_list *user_bullets = _bullets_user.begin();
		List<IBulletsManager*>::t_list *enemy_shooters;
		List<ABullet*>::t_list *tmp;
		while (user_bullets) {
			user_bullets->data->moveBullet();
			enemy_shooters = _shooters_ennemy->begin();
			while (enemy_shooters && *user_bullets->data->getPosition() != enemy_shooters->data->getPosition())
				enemy_shooters = enemy_shooters->next;
			if (*user_bullets->data->getPosition() == enemy_shooters->data->getPosition())
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
}

BulletsManager::BulletsManager(List<IBulletsManager *> *pList, IBulletsManager* user) : 
	_shooters_ennemy(pList),
	_shooter_user(user)
{

}

void BulletsManager::fireUser() {
	_bullets_user.pushFront(_shooter_user->fire());
}

