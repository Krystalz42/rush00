//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef ICOLLISION_HPP
#define ICOLLISION_HPP

#include "Position.hpp"

class ICollision {
public:
	virtual void	isHit() = 0;
	virtual Position	const &getPosition() = 0;
	virtual ~ICollision() {}
};

#endif //ICOLLISION_HPP
