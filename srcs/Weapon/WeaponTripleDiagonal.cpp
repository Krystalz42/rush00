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
	*this = i;
}

/** Public **/

List<ABullet *> *
WeaponTripleDiagonal::createBullets(Position const &p, Move m) {
	List<ABullet *> *l = new List<ABullet *>();
	Position *pos;
	ABullet *b;
	pos = new Position(p);
	pos->setX(pos->getX() - 1);
	b = new BasicBullet(pos, (m == NORTH ? NORTHWEST : SOUTHWEST), PLAYER_BULLET, (m == NORTH ? CYAN : MAGENTA));
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX());
	b = new BasicBullet(pos, m, PLAYER_BULLET, (m == NORTH ? CYAN : MAGENTA));
	l->pushFront(b);

	pos = new Position(p);
	pos->setX(pos->getX() + 1);
	b = new BasicBullet(pos, (m == NORTH ? NORTHEAST : SOUTHEAST), PLAYER_BULLET, (m == NORTH ? CYAN : MAGENTA));
	l->pushFront(b);
	return l;
}

/** Private **/
/** Operator **/

WeaponTripleDiagonal &
WeaponTripleDiagonal::operator=(WeaponTripleDiagonal const &i) {
	if (this != &i ) {

	}
	return *this;
}

/** Destructor **/

WeaponTripleDiagonal::~WeaponTripleDiagonal() {

}




