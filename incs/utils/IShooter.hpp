//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __ISHOOTER_HPP__
#define __ISHOOTER_HPP__

#include "Bullets/ABullet.hpp"
#include "Position.hpp"

class IShooter {
public:
	virtual ABullet	*fire() const = 0;
	virtual void	isHit() = 0;
	virtual Position	const &getPosition() = 0;
	virtual ~IShooter() {}
};

#endif //__ISHOOTER_HPP__
