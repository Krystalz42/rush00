//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Weapon/WeaponUltime.hpp>
#include <Weapon/WeaponTripleDiagonal.hpp>

#include "Weapon/WeaponUltime.hpp"

/** Static **/
/** Constructor **/

WeaponUltime::WeaponUltime() : AWeapon(6,
									   "Ultimate Weapon") {

}

WeaponUltime::WeaponUltime(WeaponUltime const &i) {
	*this = i;
}

/** Public **/
/** Private **/

List<ABullet *> *WeaponUltime::createBullets(Position const &p, Move m) {
	WeaponTripleDiagonal wtd;
	List<ABullet *> *lst = new List<ABullet*>();
	Position * pos = new Position(p);

	pos->setX(pos->getX() + 1);
	List<ABullet *> * temp = wtd.createBullets(*pos, m);
	file << temp->begin()->data->getPosition() << std::endl;
	for (List<ABullet *>::t_list *it = temp->begin(); it!=0; it= it->next) {
		lst->pushFront(it->data);
	}
	delete temp;

	pos->setX(pos->getX() - 2);
	temp = wtd.createBullets(*pos, m);
	file << temp->begin()->data->getPosition() << std::endl;
	for (List<ABullet *>::t_list *it =temp->begin(); it!=0; it= it->next) {
		lst->pushFront(it->data);
	}
	delete temp;
	delete pos;
	return lst;
}

/** Operator **/

WeaponUltime &WeaponUltime::operator=(WeaponUltime const &i) {
	return *this;
}

/** Destructor **/

WeaponUltime::~WeaponUltime() {

}







