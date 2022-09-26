#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>

class ClapTrap {

    public:
        ClapTrap( void );
        ClapTrap ( const std::string &name );
        ClapTrap ( const ClapTrap& claptrap );
        ClapTrap &operator=( const ClapTrap& claptrap );
        ~ClapTrap ( void );

        void attack(const std::string& target);
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount);

        const std::string& getName( void ) const;
        unsigned int getHitPoints ( void ) const;
        unsigned int getEnergyPoints( void ) const;
        unsigned int getAttackDamage( void ) const;

    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

        static const unsigned int pHit = 10;
        static const unsigned int pEnergy = 10;
        static const unsigned int pAttackDamage = 0;
};

#endif