#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	public:

		HumanA( const std::string name, const Weapon &weapon );
		~HumanA( void );

		void	attack( void ) const;

	private:

		const std::string _name;
		const Weapon	&_weapon;
};


#endif
