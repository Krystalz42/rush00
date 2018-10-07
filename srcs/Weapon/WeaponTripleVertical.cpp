//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Bullets/BasicBullet.hpp>
#include <Weapon/WeaponTripleVertical.hpp>

/** Static **/
/** Constructor **/

WeaponTripleVertical::WeaponTripleVertical() : AWeapon(3,
													   "Triple Diagonal Shot") {

}

WeaponTripleVertical::WeaponTripleVertical(WeaponTripleVertical const &i) {
	*this = i;
}

/** Public **/

List<ABullet *> *
WeaponTripleVertical::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	Position *pos;
	ABullet *b;
	pos = new Position(p);
	pos->setX(pos->getX() - 2);
	b = new BasicBullet(pos, m);
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX());
	b = new BasicBullet(pos, m);
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX() + 2);
	b = new BasicBullet(pos, m);
	l->pushFront(b);
	return l;
}

/** Private **/
/** Operator **/

WeaponTripleVertical &
WeaponTripleVertical::operator=(WeaponTripleVertical const &i) {
	if (this != &i) {

	}
	return *this;
}

/** Destructor **/

WeaponTripleVertical::~WeaponTripleVertical() {

}




