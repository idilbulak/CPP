#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:
	
	HumanB( const std::string name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon);

private:

	const std::string _name;
	const Weapon	*_weapon;

};


#endif