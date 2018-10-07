//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/BulletsManager.hpp>
#include <Bullets/BasicBullet.hpp>
#include <Ship/ShipMob.hpp>
#include <utils/List.hpp>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <curses.h>
#include <utils/IBulletsManagerUser.hpp>


/** Static **/

/** Constructor **/

BulletsManager::BulletsManager(List<IBulletsManager *> *pList,
							   IBulletsManagerUser *user) :
		_shooters_ennemy(pList),
		_shooter_user(user) {
}

BulletsManager::BulletsManager() {}

BulletsManager::BulletsManager(BulletsManager const &i) {
	*this = i;
}

/** Public **/

void BulletsManager::fireUser() {
	List<ABullet*>	*lst = _shooter_user->fire();
	if (lst != 0) {
		for (List<ABullet *>::t_list *it = lst->begin(); it != 0; it = it->next) {
			_bullets_user.pushFront(it->data);
		}
		delete lst;
	}

}

void BulletsManager::fireMob() {
	List<IBulletsManager*>::t_list *it = _shooters_ennemy->begin();
	List<ABullet *> *lst_bullets;
	if (it != 0)
		for (List<IBulletsManager*>::t_list *it = _shooters_ennemy->begin(); it != 0; it = it->next)
			if (it->data->isAlive() && rand() % FIRE_RATE_MOB == 0) {
				lst_bullets = it->data->fire();
				for (List<ABullet *>::t_list *it = lst_bullets->begin(); it != 0; it = it->next)
					_bullets_ennemy.pushFront(it->data);
				delete lst_bullets;
			}
}

void BulletsManager::moveMobBullets() {
	List<ABullet *>::t_list *enemy_bullets;
	List<ABullet *>::t_list *tmp;

	for (enemy_bullets = _bullets_ennemy.begin(); enemy_bullets != 0;) {

		enemy_bullets->data->moveBullet();

		if (_shooter_user->isAlive() &&  _shooter_user->isCollide(enemy_bullets->data->getPosition())) {
				_shooter_user->isHit();
				ABullet * tmp_ = enemy_bullets->data;
				tmp = enemy_bullets;
				enemy_bullets = enemy_bullets->next;
				_bullets_ennemy.erase(tmp->data);
				delete tmp_;
			}
		else if (enemy_bullets != 0 && !enemy_bullets->data->isAlive()) {
			ABullet * tmp_ = enemy_bullets->data;
			tmp = enemy_bullets;
			enemy_bullets = enemy_bullets->next;
			_bullets_ennemy.erase(tmp->data);
			delete tmp_;
		}
		else
			enemy_bullets = enemy_bullets->next;
	}
}

void BulletsManager::moveBasicBullets() {
	List<ABullet *>::t_list *user_bullets;
	List<IBulletsManager *>::t_list *enemy_shooters;
	List<ABullet *>::t_list *tmp;

	for (user_bullets = _bullets_user.begin(); user_bullets != 0;) {

		user_bullets->data->moveBullet();

		for (enemy_shooters = _shooters_ennemy->begin();enemy_shooters != 0; enemy_shooters = enemy_shooters->next) {
			if (enemy_shooters->data->isAlive() &&  enemy_shooters->data->isCollide(user_bullets->data->getPosition())) {
				enemy_shooters->data->isHit();
				if (!enemy_shooters->data->isAlive())
					_shooter_user->setScore(_shooter_user->getScore() + enemy_shooters->data->getPowerfull());
				ABullet * tmp_ = user_bullets->data;
				tmp = user_bullets;
				user_bullets = user_bullets->next;
				_bullets_user.erase(tmp->data);
				_shooter_user->getAmmo();
				delete tmp_;
				break;
			}
		}
		if (user_bullets == 0)
			break;
		if (!user_bullets->data->isAlive()) {
			ABullet * tmp_ = user_bullets->data;
			tmp = user_bullets;
			user_bullets = user_bullets->next;
			_bullets_user.erase(tmp->data);
			_shooter_user->getAmmo();
			delete tmp_;
			continue;
		}
		user_bullets = user_bullets->next;
	}
}

/** Private **/

/** Operator **/

BulletsManager &BulletsManager::operator=(BulletsManager const &i) {
	if (this != &i) {
		
	}
	return *this;
}

/** Destructor **/

BulletsManager::~BulletsManager() {
	for (List<ABullet *>::t_list *it = _bullets_ennemy.begin(); it!=0; it = it->next) {
		delete it->data;
	}
	for (List<ABullet *>::t_list *it = _bullets_user.begin(); it!=0; it = it->next) {
		delete it->data;
	}
	delete _shooters_ennemy;
}



