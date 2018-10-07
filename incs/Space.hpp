//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SPACE_HPP
#define SPACE_HPP

#include <Ship/ShipManager.hpp>
#include <Bullets/BulletsManager.hpp>
#include <utils/List.hpp>
#include <utils/Star.hpp>
#include <Ship/ShipPlayer.hpp>

class Space {
private:
	List<AShip *> *ship_ennemy;
	ShipPlayer *ship_user;
	List<Star *> _star;
	ShipManager *_sm;
	BulletsManager *_bm;
	unsigned int _level;
	time_t _time;

	void initLevel();

public:
	Space();

	Space(Space const &i);

	~Space();

	Space &operator=(Space const &i);

	void initStars();

	bool getInput(int ch);

	void moveUserBullets();

	void moveEnnemyBullets();

	void ennemyAction();

	void refresh();

};

#endif //SPACE_HPP
