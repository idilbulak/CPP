#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    public:
        ScavTrap( void );
        ScavTrap ( const std::string &name );
        ScavTrap ( const ScavTrap& scavtrap );
        ScavTrap &operator=( const ScavTrap& scavtrap );
        ~ScavTrap ( void );

        void attack(const std::string& target);
        void guardGate( void );

    protected:
        static const unsigned int pHit = 100;
        static const unsigned int pEnergy = 50;
        static const unsigned int pAttackDamage = 20;
};

#endif

/* https://www.geeksforgeeks.org/inheritance-in-c/#:~:text=The%20capability%20of%20a%20class,features%20of%20Object%2DOriented%20Programming.
Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
*/