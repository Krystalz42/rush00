//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <utils/Position.hpp>
#include <ncurses.h>
#include <iostream>
#include <utils/List.hpp>

/** Static **/
/** Constructor **/

Position::Position() {

}

Position::Position(int y, int x) : _x(x) , _y(y) {
	if (_y == 0) _y++;
}

Position::Position(Position const &i) {
	*this = i;
}

/** Public **/


int Position::getX() const {
	return _x;
}

void Position::setX(int x) {
	if (!(x < 0 || x >= COLS)) {
		_x = x;
	}
}

int Position::getY() const {
	return _y;
}

void Position::setY(int y) {
	if (!(y <= 0 || y >= LINES)) {
		_y = y;
	}
}

/** Private **/
/** Operator **/

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

std::ostream &operator<<(std::ostream &os, const Position &position) {
	os << "_x: " << position.getX() << " _y: " << position.getY();
	return os;
}

/** Destructor **/

Position::~Position() {

}


