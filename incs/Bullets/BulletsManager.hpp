//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BULLETSMANAGER_HPP__
#define __BULLETSMANAGER_HPP__


#include <utils/IShooter.hpp>
#include <utils/List.hpp>
#include <utils/IBulletsManager.hpp>
#include <Ship/AShip.hpp>
#include <Ship/ShipMob.hpp>
#include <Ship/ShipBoss.hpp>
#include <utils/IBulletsManagerUser.hpp>

class BulletsManager {
private:
	List<IBulletsManager *> *_shooters_ennemy;
	IBulletsManagerUser *_shooter_user;
	List<ABullet *> _bullets_ennemy;
	List<ABullet *> _bullets_user;

	BulletsManager();

public:
	void moveMobBullets();

	void moveBasicBullets();

	BulletsManager(List<IBulletsManager *> *pList, IBulletsManagerUser *user);

	BulletsManager(BulletsManager const &i);

	BulletsManager &operator=(BulletsManager const &i);

	void fireUser();

	void fireMob();

	virtual ~BulletsManager();
};

#endif //__BULLETSMANAGER_HPP__
