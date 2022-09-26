#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << GREY << "[ScavTrap] Default constructor called" << RESET << std::endl;
    _hitPoints = pHit;
    _energyPoints = pEnergy;
    _attackDamage = pAttackDamage;
}

ScavTrap::ScavTrap( const std::string &name ) {
    std::cout << GREY << "[ScavTrap] Name constructor called" << RESET << std::endl;
    _name = name;
    _hitPoints = pHit;
    _energyPoints = pEnergy;
    _attackDamage = pAttackDamage;
}

ScavTrap::ScavTrap( const ScavTrap& scavtrap ){
    std::cout << GREY << "[ScavTrap] Copy constructor called" << RESET << std::endl;
    *this = scavtrap;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& scavtrap ) {
    std::cout << GREY << "[ScavTrap] Copy assignment operator called" << RESET << std::endl;
    ClapTrap::operator=(scavtrap);
    return *this;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << GREY << "[ScavTrap] Destructor called" << RESET << std::endl;
}

void ScavTrap::attack( const std::string& target) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
        std::cout << RED << _name << " can't do anything." << RESET << std::endl;
    else {
        std::cout << CYAN << "[ScavTrap] Attack: " << RESET << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
        this->_energyPoints--;
    }
}

void ScavTrap::guardGate( void ) {
    if (this->_hitPoints == 0)
        std::cout << RED << _name << " is dead, can't be in gate keeper mode." << RESET << std::endl;
    else
        std::cout << CYAN << _name << " is in gatekeeper mode " << RESET << std::endl;
}


