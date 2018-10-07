//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Bullets/BasicBullet.hpp>

/** Static **/
/** Constructor **/

WeaponTripleDiagonal::WeaponTripleDiagonal() : AWeapon(3,
													   "Triple Diagonal Shot") {

}

WeaponTripleDiagonal::WeaponTripleDiagonal(WeaponTripleDiagonal const &i) {

}

/** Public **/

List<ABullet *> *
WeaponTripleDiagonal::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	Position *pos;
	ABullet *b;
	pos = new Position(p);
	pos->setX(pos->getX() - 1);
	b = new BasicBullet(pos, (m == NORTH ? NORTHWEST : SOUTHWEST));
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX());
	b = new BasicBullet(pos, m);
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX() + 1);
	b = new BasicBullet(pos, (m == NORTH ? NORTHEAST : SOUTHEAST));
	l->pushFront(b);
	return l;
}

/** Private **/
/** Operator **/

WeaponTripleDiagonal &
WeaponTripleDiagonal::operator=(WeaponTripleDiagonal const &i) {
	return *this;
}

/** Destructor **/

WeaponTripleDiagonal::~WeaponTripleDiagonal() {

}




