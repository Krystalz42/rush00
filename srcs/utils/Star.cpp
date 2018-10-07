//
// Created by Alexandre ROULIN on 07/10/2018.
//



#include <Space.hpp>
#include <Ship/ShipMob.hpp>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <Ship/ShipPlayer.hpp>
#include <Ship/ShipBoss.hpp>
#include <ncurses.h>
#include <utils/Utils.hpp>
#include <Ship/ShipBigBoss.hpp>
#include <utils/Star.hpp>

extern std::ofstream file;

/** Static **/
/** Constructor **/
Star::Star() {
	drawStar();
}
Star::Star(Position *p): _p(p) {
	drawStar();
}

Star::Star(Star const &i) {
	*this = i;
}

/** Public **/

void Star::moveStar() {
	drawStar();
}

/** Private **/

void Star::drawStar() {
	move(_p->getY(), _p->getX());
	addch('*');
}

/** Operator **/

Star &Star::operator=(Star const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/


Star::~Star() {

}






