#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:
	
	Weapon( const std::string weapon );
	Weapon( void );
	~Weapon( void );

	const std::string	getType( void ) const;
	void				setType( const std::string weapon );

private:

	std::string _weapon;

};


#endif
