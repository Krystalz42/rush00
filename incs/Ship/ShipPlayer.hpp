//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef SHIPPLAYER_HPP
#define SHIPPLAYER_HPP

#include <ostream>
#include "AShip.hpp"

class ShipPlayer : public AShip {
public:
	ShipPlayer();
	ShipPlayer(ShipPlayer const & i);

	virtual void getAmmo();

	virtual void			moveShip(Move m);
	virtual ~ShipPlayer();
	virtual ShipPlayer		&operator=(ShipPlayer const &i);

protected:
	virtual List<ABullet *> *fire();

public:
};

#endif //SHIPPLAYER_HPP
