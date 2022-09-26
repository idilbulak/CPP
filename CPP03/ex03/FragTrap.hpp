#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public:
        FragTrap( void );
        FragTrap ( const std::string &name );
        FragTrap ( const FragTrap& fragtrap );
        FragTrap &operator=( const FragTrap& Fragtrap );
        ~FragTrap ( void );

        void attack(const std::string& target);
        void highFivesGuys( void );

    protected:
        static const unsigned int pHit = 100;
        static const unsigned int pEnergy = 100;
        static const unsigned int pAttackDamage = 30;
};

#endif

