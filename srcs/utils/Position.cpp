//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <utils/Position.hpp>
#include <curses.h>


Position::Position() {

}

Position::Position(int _x, int _y) : _x(_x), _y(_y) {

}

Position::Position(Position const &i) {
	*this = i;
}

int Position::getX() const {
	return _x;
}

void Position::setX(int x) {
	if (x > 0 && x < COLS)
		_x = x;
}

int Position::getY() const {
	return _y;
}

void Position::setY(int y) {
	if (y > 0 && y < LINES)
		_y = y;
}

Position &Position::operator=(Position const &i) {
	if (this != &i) {
		_y = i._y;
		_x = i._x;
	}
	return *this;
}

bool Position::operator!=(const Position &rhs) const {
	return !(rhs == *this);
}

bool Position::operator==(const Position &rhs) const {
	return _x == rhs._x && _y == rhs._y;
}




Position::~Position() {

}