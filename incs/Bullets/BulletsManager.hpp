//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef RUSH00_BULLETSMANAGER_HPP
#define RUSH00_BULLETSMANAGER_HPP


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

#endif //RUSH00_BULLETSMANAGER_HPP
