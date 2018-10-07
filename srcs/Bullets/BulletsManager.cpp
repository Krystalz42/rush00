//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <Bullets/BulletsManager.hpp>
#include <Bullets/BasicBullet.hpp>
#include <Bullets/MobBullet.hpp>
#include <Ship/ShipMob.hpp>
#include <utils/List.hpp>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <curses.h>


extern std::ofstream file;

void BulletsManager::moveMobBullets() {
	List<ABullet *>::t_list *enemy_bullets = _bullets_ennemy.begin();
	List<ABullet *>::t_list *tmp;

	while (enemy_bullets) {
		enemy_bullets->data->moveBullet();
//		if (*enemy_bullets->data->getPosition() == _shooter_user->getPosition()) {
//			_shooter_user->isHit();
//			tmp = enemy_bullets->next;
//			enemy_bullets = tmp;
//
//		} else
//			enemy_bullets = enemy_bullets->next;
	}
}

void BulletsManager::moveBasicBullets() {
	List<ABullet *>::t_list *user_bullets;
	List<IBulletsManager *>::t_list *enemy_shooters;
	List<ABullet *>::t_list		*tmp;
	ABullet						*tmp_bullet;
	int i =0;
	for (user_bullets = _bullets_user.begin(); user_bullets != 0;) {
		file << "b4 move" << i << std::endl;
		user_bullets->data->moveBullet();
//		file << *user_bullets->data->getPosition() << std::endl;
		file << "b4 for" << i << std::endl;
		for (enemy_shooters = _shooters_ennemy->begin();enemy_shooters != 0; enemy_shooters = enemy_shooters->next) {
			file<< "in for"  << i << std::endl;
			if (enemy_shooters->data->isAlive() &&  enemy_shooters->data->isCollide(*user_bullets->data->getPosition())) {
				file << "in if" << i << std::endl;
//				file << "isHit" << std::endl;
				enemy_shooters->data->isHit();
				tmp_bullet  = user_bullets->data;
				tmp = user_bullets;
				user_bullets = user_bullets->next;
				_bullets_user.erase(tmp->data);
				_shooter_user->getAmmo();
				delete tmp_bullet;
				break;
			}
		}
		file << "b4 if" << i << std::endl;
		if (enemy_shooters == 0 && !user_bullets->data->isAlive()) {
			file << "in if" << i << std::endl;
//			file << "isAlive" << std::endl;
			tmp_bullet = user_bullets->data;
			tmp = user_bullets;
			user_bullets = user_bullets->next;
			_bullets_user.erase(tmp->data);
			_shooter_user->getAmmo();
			delete tmp_bullet ;
			continue;
		}
		file << "next" << i << std::endl;
		user_bullets = user_bullets->next;
		file << "end" << i << std::endl;
	}

//	while (user_bullets) {
//		user_bullets->data->moveBullet();
//		file << "Lines:" << LINES << " isAlive:" <<user_bullets->data->isAlive() << *user_bullets->data->getPosition() << std::endl;
//		enemy_shooters = _shooters_ennemy->begin();
//		while (enemy_shooters && *user_bullets->data->getPosition() !=
//								 enemy_shooters->data->getPosition())
//			enemy_shooters = enemy_shooters->next;
//		if (enemy_shooters != 0) {
//			enemy_shooters->data->isHit();
//			tmp = user_bullets->next;
//			user_bullets = tmp;
//		} else
//			user_bullets = user_bullets->next;
//
//	}
}

BulletsManager::BulletsManager(List<IBulletsManager *> *pList,
							   IBulletsManager *user) :
		_shooters_ennemy(pList),
		_shooter_user(user) {

}

void BulletsManager::fireUser() {
//	file << "SHOOTER USER IS NULL" << (_shooter_user != 0) << std::endl;
	List<ABullet*>	*lst = _shooter_user->fire();
	if (lst != 0) {
		for (List<ABullet *>::t_list *it = lst->begin(); it != 0; it = it->next) {
			_bullets_user.pushFront(it->data);
		}
		delete lst;
	}

}

void BulletsManager::fireMob() {
//	file << "SHOOTER MOB IS NULL" << (_shooters_ennemy == 0) << std::endl;
	// if (rand() % 10 == 1)

	// _bullets_ennemy.pushFront(_shooters_ennemy->fire());
}

BulletsManager::~BulletsManager() {
	for (List<ABullet *>::t_list *it = _bullets_ennemy.begin(); it!=0; it = it->next) {
		delete it->data;
	}
	for (List<ABullet *>::t_list *it = _bullets_user.begin(); it!=0; it = it->next) {
		delete it->data;
	}
	delete _shooters_ennemy;
}
