//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __POSITION_HPP__
#define __POSITION_HPP__


#include <ostream>

class Position {
private:
	int 		_x;
	int 		_y;
	Position();

public:
	friend std::ostream &operator<<(std::ostream &os, const Position &position);

	int getX() const;

	void setX(int _x);

	int getY() const;

	void setY(int _y);

public:
	Position(int x, int y);

	Position(Position const &i);
	~Position();

	bool operator==(const Position &rhs) const;

	bool operator!=(const Position &rhs) const;

	Position	&operator=(Position const &i);
};


#endif //__POSITION_HPP__
