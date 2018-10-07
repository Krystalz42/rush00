//
// Created by Alexandre ROULIN on 07/10/2018.
//

//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Bullets/BasicBullet.hpp>
#include <Weapon/WeaponDoubleVertical.hpp>

/** Static **/
/** Constructor **/

WeaponDoubleVertical::WeaponDoubleVertical() : AWeapon(2,
													   "Double Diagonal Shot") {

}

WeaponDoubleVertical::WeaponDoubleVertical(WeaponDoubleVertical const &i) {
	*this = i;
}

/** Public **/

List<ABullet *> *
WeaponDoubleVertical::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	Position *pos;
	ABullet *b;
	pos = new Position(p);
	pos->setX(pos->getX() - 2);
	b = new BasicBullet(pos, m, PLAYER_BULLET_VERTIC, CYAN);
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX() + 2);
	b = new BasicBullet(pos, m, PLAYER_BULLET_VERTIC, CYAN);
	l->pushFront(b);
	return l;
}

/** Private **/
/** Operator **/

WeaponDoubleVertical &
WeaponDoubleVertical::operator=(WeaponDoubleVertical const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

WeaponDoubleVertical::~WeaponDoubleVertical() {

}




