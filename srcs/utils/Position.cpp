//
// Created by Alexandre ROULIN on 06/10/2018.
//

#include <utils/Position.hpp>

Position::Position() {

}

Position::~Position() {

}

Position::Position(Position const &i) {

}

Position &Position::operator=(Position const &i) {
	return *this;
}

bool Position::operator==(const Position &rhs) const {
	return _x == rhs._x && _y == rhs._y;
}

bool Position::operator!=(const Position &rhs) const {
	return !(rhs == *this);
}

Position::Position(int _x, int _y) : _x(_x), _y(_y) {}

