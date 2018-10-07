//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SHIPPLAYER_HPP
#define SHIPPLAYER_HPP

#include <ostream>
#include <utils/IScore.hpp>
#include <utils/IBulletsManagerUser.hpp>
#include "AShip.hpp"

class ShipPlayer : public AShip, public IBulletsManagerUser {
private:
	unsigned int	_score;

public:
	ShipPlayer();

	void setWeapon(AWeapon *w);

	virtual unsigned int getScore() const;

	virtual void setScore(unsigned int _score);

	ShipPlayer(ShipPlayer const &i);

	virtual void getAmmo();

	virtual void moveShip(Move m);

	virtual ~ShipPlayer();

	virtual ShipPlayer &operator=(ShipPlayer const &i);

	virtual List<ABullet *> *fire();


};

#endif //SHIPPLAYER_HPP
