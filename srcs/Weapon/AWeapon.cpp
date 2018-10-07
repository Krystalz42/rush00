
#include <utils/Position.hpp>
#include <Weapon/AWeapon.hpp>



AWeapon::AWeapon() {

}

AWeapon::~AWeapon() {


}

unsigned int AWeapon::getSize() const {
	return _nu;
}

AWeapon::AWeapon(unsigned int _nu) : _nu(_nu) {}
