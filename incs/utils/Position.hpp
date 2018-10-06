//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __POSITION_HPP__
#define __POSITION_HPP__


class Position {
private:
	int 		_x;
	int 		_y;
	Position();
public:
	Position(int _x, int _y);

	Position(Position const &i);
	~Position();

	bool operator==(const Position &rhs) const;

	bool operator!=(const Position &rhs) const;

	Position	&operator=(Position const &i);
};


#endif //__POSITION_HPP__
