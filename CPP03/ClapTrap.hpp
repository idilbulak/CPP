#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    public:
        ClapTrap( void );
        ClapTrap ( std::string &name );
        ~ClapTrap ( void );

        void attack(const std::string& target);
        void takeDamage( unsigned int amount );
        void beRepaired(unsigned int amount);

        std::string getName( void );
        unsigned int getHitPoints ( void );
        unsigned int getEnergyPoints( void );
        unsigned int getAttackDamage( void );

    private:
        std::string _name;
        unsigned int _hitPoints = 10;
        unsigned int _energyPoints = 10;
        unsigned int _attackDamage = 0;
};

#endif