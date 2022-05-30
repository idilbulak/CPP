#include "inc/HumanB.hpp"

HumanB::HumanB( const std::string name ) 
	: _name( name ), _weapon( nullptr )  {

}

HumanB::~HumanB( void ) {

}

void	HumanB::attack( void ) const {

	if(!_weapon)
		std::cout << _name << " attacks without a weapon" << std::endl;
	else
		std::cout << _name << " attacks with his" << _weapon->getType() << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}