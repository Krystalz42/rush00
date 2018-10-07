//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef IBULLETSMANAGERUSER_HPP
#define IBULLETSMANAGERUSER_HPP

#include "IBulletsManager.hpp"
#include "IScore.hpp"

class IBulletsManagerUser : public IBulletsManager, public IScore {
public:
	~IBulletsManagerUser() {};
};

#endif //IBULLETSMANAGERUSER_HPP
