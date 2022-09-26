#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << GREY << "[FragTrap] Default constructor called" << RESET << std::endl;
    _hitPoints = pHit;
    _energyPoints = pEnergy;
    _attackDamage = pAttackDamage;
}

FragTrap::FragTrap( const std::string &name ) {
    std::cout << GREY << "[FragTrap] Name constructor called" << RESET << std::endl;
    _name = name;
    _hitPoints = pHit;
    _energyPoints = pEnergy;
    _attackDamage = pAttackDamage;
}

FragTrap::FragTrap( const FragTrap& fragTrap ){
    std::cout << GREY << "[FragTrap] Copy constructor called" << RESET << std::endl;
    *this = fragTrap;
}

FragTrap& FragTrap::operator=( const FragTrap& fragTrap ) {
    std::cout << GREY << "[FragTrap] Copy assignment operator called" << RESET << std::endl;
    ClapTrap::operator=(fragTrap);
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << GREY << "[FragTrap] Destructor called" << RESET << std::endl;
}

void FragTrap::attack( const std::string& target) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
        std::cout << RED << _name << " can't do anything." << RESET << std::endl;
    else {
        std::cout << CYAN << "[FragTrap] Attack: " << RESET << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
        this->_energyPoints--;
    }
}

void FragTrap::highFivesGuys( void ) {
    if (this->_hitPoints == 0)
        std::cout << RED << _name << " is dead, can't high five." << RESET << std::endl;
    else
        std::cout << CYAN << _name << " wants to high five " << RESET << std::endl;
}


