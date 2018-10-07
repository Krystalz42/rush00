//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __ISHOOTER_HPP__
#define __ISHOOTER_HPP__

#include "Bullets/ABullet.hpp"
#include "Position.hpp"
#include "List.hpp"

class IShooter {
public:
	virtual List<ABullet *>	*fire() = 0;
	virtual ~IShooter() {}
	virtual void getAmmo() = 0;
};

#endif //__ISHOOTER_HPP__
