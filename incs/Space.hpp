//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SPACE_HPP
#define SPACE_HPP

#include <Ship/ShipManager.hpp>
#include <Bullets/BulletsManager.hpp>
#include <utils/List.tpp>

class Space {
private:
	List<AShip *>		*ship_ennemy;
	AShip*				ship_user;

	ShipManager		*_sm;
	BulletsManager		*_bm;
	unsigned int		_level;
	void		initLevel();

public:
	Space();
	Space(Space const &i);
	~Space();

	Space &operator=(Space const & i);

	void getInput(int ch);
	void moveBullets();
	void moveEnnemyBullets();
	void ennemyAction();

};

#endif //SPACE_HPP
