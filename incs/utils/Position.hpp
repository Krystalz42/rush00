//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __POSITION_HPP__
#define __POSITION_HPP__


#include <ostream>

class Position {
private:
	int _x;
	int _y;

public:

	int getX() const;

	void setX(int x);

	int getY() const;

	void setY(int y);
	Position(int x, int y);
	Position(Position const &i);

	~Position();

	bool operator==(const Position &rhs) const;
	bool operator!=(const Position &rhs) const;

	Position &operator=(Position const &i);

	Position();
};

std::ostream &operator<<(std::ostream &os, const Position &position);

#endif //__POSITION_HPP__
