//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BULLETSMANAGER_HPP__
#define __BULLETSMANAGER_HPP__


#include <utils/IShooter.hpp>
#include <utils/List.tpp>
#include <utils/IBulletsManager.hpp>
#include <Ship/AShip.hpp>

class BulletsManager {
private:
	List<IBulletsManager *>		_shooters_ennemy;
	IShooter			*_shooter_user;
	List<ABullet *>		_bullets_ennemy;
	List<ABullet *>		_bullets_user;

public:
	void 		moveBullets();

	BulletsManager(List<IBulletsManager *> *pList);
};

#endif //__BULLETSMANAGER_HPP__
