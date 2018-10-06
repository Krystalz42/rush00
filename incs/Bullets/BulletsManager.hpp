//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __BULLETSMANAGER_HPP__
#define __BULLETSMANAGER_HPP__


#include <utils/IShooter.hpp>
#include <utils/List.tpp>

class BulletsManager {
private:
	List<IShooter>		_shooters_ennemy;
	IShooter			*_shooter_user;
	List<ABullet>		_bullets_ennemy;
	List<ABullet>		_bullets_user;

public:
	void 		moveBullets();

};

#endif //__BULLETSMANAGER_HPP__