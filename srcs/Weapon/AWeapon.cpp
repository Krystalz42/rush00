
#include <utils/Position.hpp>
#include <Weapon/AWeapon.hpp>

/** Static **/
/** Constructor **/
AWeapon::AWeapon() {

}

AWeapon::AWeapon(unsigned int nu, std::string type) : _type(type), _nu(nu) {

}

AWeapon::AWeapon(AWeapon const &i) {
	*this = i;
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

AWeapon &AWeapon::operator=(AWeapon const &i) {
	if (this != &i) {

	}
	return *this;
}


/** Destructor **/

AWeapon::~AWeapon() {


}


