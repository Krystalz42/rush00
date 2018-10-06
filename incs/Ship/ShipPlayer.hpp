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


	virtual ~ShipPlayer();
	virtual ShipPlayer		&operator=(ShipPlayer const &i);
	virtual ABullet *fire() const;
	virtual void moveShip(Move m);

protected:
	virtual void drawShip() const;
	virtual void deleteShip() const;

public:
};

#endif //SHIPPLAYER_HPP
