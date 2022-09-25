#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

    public:
        DiamondTrap( void );
        DiamondTrap ( const std::string &name );
        DiamondTrap ( const DiamondTrap& diamondtrap );
        DiamondTrap &operator=( const DiamondTrap& diamondtrap );
        ~DiamondTrap ( void );

        void attack(const std::string& target);
        void whoAmI( void );

    private:
        std::string _name;
};

#endif