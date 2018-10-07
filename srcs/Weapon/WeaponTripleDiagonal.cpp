//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponTripleDiagonal.hpp>
#include <Bullets/BasicBullet.hpp>

WeaponTripleDiagonal::WeaponTripleDiagonal() : AWeapon(3) {

}


WeaponTripleDiagonal::~WeaponTripleDiagonal() {

}

List<ABullet *> *WeaponTripleDiagonal::createBullets(Position const &p, Move m) {
	List<ABullet *>		*l = new List<ABullet *>();
	Position * pos;
	ABullet * b;
	pos =new Position(p);
	pos->setX(pos->getX() - 1);
	b = new BasicBullet(pos, (m == NORTH ? NORTHWEST : SOUTHWEST));
	l->pushFront(b);

	pos =new Position(p);
	pos->setX(pos->getX());
	b = new BasicBullet(pos, m);
	l->pushFront(b);

	pos =new Position(p);
	pos->setX(pos->getX() + 1);
	b = new BasicBullet(pos, (m == NORTH ? NORTHEAST : SOUTHEAST));
	l->pushFront(b);
	return l;
}
