//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef ISCORE_HPP
#define ISCORE_HPP

class IScore {
public:
	virtual unsigned int getScore() const = 0;
	virtual void setScore(unsigned int _score) = 0;
	~IScore() {};
};

#endif //ISCORE_HPP
