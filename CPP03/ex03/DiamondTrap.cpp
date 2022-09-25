#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
    : ClapTrap("_clapName"), _name("") {
    std::cout << GREY << "[DiamondTrap] Default constructor called" << RESET << std::endl;
    _hitPoints = FragTrap::pHit;
    _energyPoints = ScavTrap::pEnergy;
    _attackDamage = FragTrap::pAttackDamage;
}

DiamondTrap::DiamondTrap( const std::string &name )
    : ClapTrap(name + "_clapName"), _name(name) {
    std::cout << GREY << "[DiamondTrap] Name constructor called" << RESET << std::endl;
    _hitPoints = FragTrap::pHit;
    _energyPoints = ScavTrap::pEnergy;
    _attackDamage = FragTrap::pAttackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamondTrap ){
    std::cout << GREY << "[DiamondTrap] Copy constructor called" << RESET << std::endl;
    *this = diamondTrap;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& diamondTrap ) {
    std::cout << GREY << "[DiamondTrap] Copy assignment operator called" << RESET << std::endl;
    ClapTrap::operator=(diamondTrap);
    _name = diamondTrap._name;
    return *this;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << GREY << "[DiamondTrap] Destructor called" << RESET << std::endl;
}

void DiamondTrap::attack( const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ) {
    std::cout << CYAN << "[DiamondTrap] " << _name << " [ClapTrap] " << ClapTrap::_name << RESET << std::endl;
}