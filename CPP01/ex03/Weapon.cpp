#include "Weapon.hpp"

Weapon::Weapon( const std::string weapon )
	: _weapon( weapon ) {
}

Weapon::Weapon( void )
	: _weapon( "NO WEAPON" ) {
}

Weapon::~Weapon( void ) {
}

const std::string& Weapon::getType( void ) const {
	return _weapon;
}

void Weapon::setType( const std::string nextWeapon) {
	_weapon = nextWeapon;
}