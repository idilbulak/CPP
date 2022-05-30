#include "inc/HumanA.hpp"

HumanA::HumanA( const std::string name, const Weapon &weapon ) 
	: _name( name ), _weapon( weapon )  {

}

HumanA::~HumanA( void ) {

}

void	HumanA::attack( void ) const {

	std::cout << _name << " attacks with his" << _weapon.getType() << std::endl;
	return;
}