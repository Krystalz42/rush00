
#include <utils/Position.hpp>
#include <Weapon/AWeapon.hpp>

/** Static **/
/** Constructor **/
AWeapon::AWeapon() {

}

AWeapon::AWeapon(unsigned int nu, std::string type) : _nu(nu), _type(type) {

}

AWeapon::AWeapon(AWeapon const &i) {

}


/** Public **/


unsigned int AWeapon::getSize() const {
	return _nu;
}


const std::string &AWeapon::getType() const {
	return _type;
}

/** Private **/
/** Operator **/

AWeapon &AWeapon::operator=(AWeapon const &) {
	return *this;
}


/** Destructor **/

AWeapon::~AWeapon() {


}


