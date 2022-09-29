#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void )
    : _name(""), _inventoryCount(0) {
		// std::cout << GREEN << "[ Character ] " << "Default constructor called" << RESET << std::endl;
        for (int i = 0; i < 4; i++)
            _inventory[i] = NULL;
}

Character::Character( const Character& character) {
	// std::cout << GREEN << "[ Character ] " << "Copy constructor called" << RESET << std::endl;
    this->_name = character._name;
	this->_inventoryCount = character._inventoryCount;
    for (int i = 0; i < 4; i++) {
        if ( character._inventory[i] )
            _inventory[i] = character._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character::Character( const std::string& name)
    :_name(name), _inventoryCount(0) {
        for (int i = 0; i < 4; i++)
            _inventory[i] = NULL;
}

Character &Character::operator=(const Character& character) {
	if (this == &character)
	    return *this;
    for (int i = 0; i < 4; i++) {
        delete _inventory[i];
        _inventory[i] = NULL;
    }
    this->_inventoryCount = character._inventoryCount;
    this->_name = character._name;
    for (int i = 0; i < 4; i++) {
        if ( character._inventory[i] )
            _inventory[i] = character._inventory[i]->clone();
    }
    return *this;
}

Character::~Character( void ) {
	// std::cout << GREEN << "[ Character ] " << "Destructor called" << RESET << std::endl;
    for (int i = 0; i < _inventoryCount; i++) {
        delete _inventory[i];
}
}

std::string const& Character::getName( void ) const {
    return _name;
}

void Character::equip( AMateria *m ) {
    if (!m)
        std::cout << "No AMateria" << std::endl;
    else if ( _inventoryCount == 4 )
        std::cout << _name << " has no more slots available" << std::endl;
    else {
        _inventory[_inventoryCount] = m;
        _inventoryCount++;
    }
}

void Character::unequip( int idx ) {
    if (_inventoryCount == 0)
        std::cout << _name << " has no material" << std::endl;
    else if ( idx > 4 || idx < 0 )
        std::cout << "not an available index" << std::endl;
    else if ( _inventory[idx] == NULL )
        std::cout << "this slot is empty" << std::endl; 
    else {
        std::cout << _name << " unequips " << _inventory[idx]->getType() << std::endl; 
        _inventory[idx] = NULL;
        _inventoryCount--;
    }
}

void Character::use( int idx, ICharacter& target ) {
    if (_inventoryCount == 0 || not _inventory[idx])
        std::cout << _name << " has no material" << std::endl;
    else if ( idx > 4 || idx < 0 )
        std::cout << "not an available index" << std::endl;
    else
        _inventory[idx]->use( target );
}
