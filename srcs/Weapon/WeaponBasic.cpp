//
// Created by Alexandre ROULIN on 07/10/2018.
//

#include <Bullets/BasicBullet.hpp>
#include <Weapon/WeaponBasic.hpp>

#include "Weapon/WeaponBasic.hpp"

/** Static **/
/** Constructor **/


/** Public **/



/** Private **/
/** Operator **/
/** Destructor **/

WeaponBasic::~WeaponBasic() {

}

WeaponBasic::WeaponBasic() : AWeapon(1) {

}

List<ABullet *> *WeaponBasic::createBullets(Position const &p, Move m) {
	List<ABullet *>		*l = new List<ABullet *>();
	l->pushFront(new BasicBullet(new Position(p.getY(), p.getX()), m));
	return l;
}





