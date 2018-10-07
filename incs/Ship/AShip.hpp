//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __ASHIP_HPP__
#define __ASHIP_HPP__

#include <utils/IShooter.hpp>
#include <utils/IBulletsManager.hpp>
#include <utils/IShipsManager.hpp>
#include <utils/List.hpp>
#include <Weapon/AWeapon.hpp>

class AShip : public IBulletsManager, public IShipsManager {
protected:
	unsigned int _current_bullets;
	unsigned int _max_bullets;
	List<Position *> _p;
	const char *_ship_design;
	unsigned int _life;
	AWeapon *_w;

	AShip();

	virtual void drawShip() const;

	virtual void deleteShip() const;

	virtual bool isAlive() const;

	virtual List<ABullet *> *fire() = 0;

	virtual void isHit();

	virtual void moveShip(Move m);

	virtual bool isCollide(Position const &p);

public:
	AShip(
			unsigned int _current_bullets,
			unsigned int _max_bullets,
			unsigned int _life);

	AShip(AShip const &i);

	virtual ~AShip();

	virtual AShip &operator=(AShip const &i);

	virtual void getAmmo();

	virtual void levelUp();

	unsigned int getMaxBullets() const;

	unsigned int getLife() const;

	unsigned int getCurrentBullets() const;

	std::string const &getWeaponType() const;
};

#endif //__ASHIP_HPP__
