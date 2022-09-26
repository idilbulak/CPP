#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
    : _name(""), _hitPoints(pHit), _energyPoints(pEnergy), _attackDamage(pAttackDamage) {
        std::cout << GREY << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap( const std::string &name ) 
    : _name( name ) , _hitPoints(pHit), _energyPoints(pEnergy), _attackDamage(pAttackDamage) {
        std::cout << GREY << "Name constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& claptrap ){
    std::cout << GREY << "Copy constructor called" << RESET << std::endl;
    *this = claptrap;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& claptrap ) {
    std::cout << GREY << "Copy assignment operator called" << RESET << std::endl;
    this->_name = claptrap.getName();
    this->_hitPoints = claptrap.getHitPoints();
    this->_energyPoints = claptrap.getEnergyPoints();
    this->_attackDamage = claptrap.getAttackDamage();
    return *this;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << GREY << "Destructor called" << RESET << std::endl;
}

const std::string& ClapTrap::getName( void ) const {
    return _name;
}

unsigned int ClapTrap::getHitPoints( void ) const {
    return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage( void ) const {
    return _attackDamage;
}

void ClapTrap::attack( const std::string& target) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
        std::cout << RED << _name << " can't do anything." << RESET << std::endl;
    else {
        std::cout << CYAN << "Attack: " << RESET << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage( unsigned int amount) {
    if (this->_hitPoints < amount) {
        std::cout << RED << _name << "'s hit points are not enough!" << RESET << std::endl;
        this->_hitPoints = 0;
    }
    else {
        std::cout << CYAN << "Take damage: " << RESET << _name << " takes " << amount << " points damage" << std::endl;
        this->_hitPoints -= amount; 
    }
}

void ClapTrap::beRepaired( unsigned int amount) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
        std::cout << RED << _name << " can't do anything." << RESET << std::endl;
    else {
        this->_hitPoints += amount;
        std::cout << CYAN << "Be repaired: " << RESET << _name << " gets " << amount << " hit points back." << std::endl;
        this->_energyPoints--;
    }
}