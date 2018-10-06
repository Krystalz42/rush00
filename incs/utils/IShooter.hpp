//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef RUSH00_ISHOOTER_HPP
#define RUSH00_ISHOOTER_HPP

#include "Bullets/ABullet.hpp"
#include "Position.hpp"

class IShooter {
public:
	virtual ABullet	*fire() const = 0;
	virtual void	isHit() = 0;
	virtual Position	const &getPosition() = 0;
	virtual ~IShooter() {}
};

#endif //RUSH00_ISHOOTER_HPP
