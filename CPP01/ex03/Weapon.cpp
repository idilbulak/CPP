#include "Weapon.hpp"

Weapon::Weapon( const std::string weapon )
	: _weapon( weapon ) {
		return ;
}

Weapon::Weapon( void ) {
	_weapon = " ";
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

const	std::string Weapon::getType( void ) const {
	return _weapon;
}

void	Weapon::setType( std::string nextWeapon) {

	_weapon = nextWeapon;
}