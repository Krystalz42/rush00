//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef ICOLLISION_HPP
#define ICOLLISION_HPP

#include <ft_retro.h>
#include "Position.hpp"

class ICollision {
public:
	virtual void isHit() = 0;

	virtual bool isCollide(Position const &p) = 0;

	virtual bool isAlive() const = 0;

	virtual ~ICollision() {}
};

#endif //ICOLLISION_HPP
