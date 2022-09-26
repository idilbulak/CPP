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

/* 
https://www.geeksforgeeks.org/inheritance-in-c/#:~:text=The%20capability%20of%20a%20class,features%20of%20Object%2DOriented%20Programming.

Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

https://www.geeksforgeeks.org/virtual-base-class-in-c/

Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.
*/