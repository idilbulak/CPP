#include "HumanA.hpp"

HumanA::HumanA( const std::string name, const Weapon &weapon ) 
	: _name( name ), _weapon( weapon )  {
}

HumanA::~HumanA( void ) {
}

void	HumanA::attack( void ) const {
	if ( !_weapon.getType().compare("NO WEAPON") )
		std::cout << "\033[1;30m" + _name << " can not attack without a weapon" <<  std::endl;
	else
		std::cout << "\033[1;30m" + _name << " attacks with his " << _weapon.getType() << std::endl;
	return;
}