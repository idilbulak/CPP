#include "inc/Weapon.hpp"

Weapon::Weapon( const std::string weapon )
	: _weapon( weapon ) {

}

Weapon::~Weapon( void ) {

}

const	std::string Weapon::getType( void ) const {

	return _weapon;
}

void	Weapon::setType( std::string nextWeapon) {

	_weapon = nextWeapon;
}