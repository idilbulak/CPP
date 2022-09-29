#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
    : _createCount(0), _learnCount(0) {
		// std::cout << GREEN << "[ MateriaSource ] " << "Default constructor called" << RESET << std::endl;
        for (int i = 0; i < 4; i++)
            _create[i] = NULL;
        for (int i = 0; i < 4; i++)
            _learn[i] = NULL;
}

// MateriaSource::MateriaSource( const MateriaSource& MateriaSource) {
// 	// std::cout << GREEN << "[ MateriaSource ] " << "Copy constructor called" << RESET << std::endl;
//     this->_name = MateriaSource._name;
// 	this->_inventoryCount = MateriaSource._inventoryCount;
//     for (int i = 0; i < 4; i++) {
//         if ( MateriaSource._inventory[i] )
//             _inventory[i] = MateriaSource._inventory[i]->clone();
//         else
//             _inventory[i] = NULL;
//     }
// }

// MateriaSource::MateriaSource( const std::string& name)
//     :_name(name), _inventoryCount(0) {
//         for (int i = 0; i < 4; i++)
//             _inventory[i] = NULL;
// }

// MateriaSource &MateriaSource::operator=(const MateriaSource& MateriaSource) {
// 	if (this == &MateriaSource);
// 	    return *this;
//     for (int i = 0; i < 4; i++) {
//         delete _inventory[i];
//         _inventory[i] = NULL;
//     }
//     this->_inventoryCount = MateriaSource._inventoryCount;
//     this->_name = MateriaSource._name;
//     for (int i = 0; i < 4; i++) {
//         if ( MateriaSource._inventory[i] )
//             _inventory[i] = MateriaSource._inventory[i]->clone();
//     }
//     return *this;
// }

MateriaSource::~MateriaSource( void ) {
	// std::cout << GREEN << "[ MateriaSource ] " << "Destructor called" << RESET << std::endl;
    for (int i = 0; i < _createCount; i++) {
        delete _create[i];
    for (int i = 0; i < _learnCount; i++) {
        delete _learn[i];
}

// std::string const& MateriaSource::getName( void ) const {
//     return _name;
// }

void MateriaSource::learnMateria( AMateria *m ) {
    if (!m && _learnCount < 4) {
        _learn[_learnCount] = m;
        _learnCount++;
    }
    else if ( _learnCount = 4 ) {
        std::cout << "learnMateria is full" << std::endl;
        delete m;
    }
}

AMateria* MateriaSource::createMateria( std::string const& type ) {
    if (_createCount == 4) {
        std::cout << "can not create" << std::endl;
        retrun NULL;
    }
    for ( int i = 0; i < _learnCount; i++) {
        if (_learn[i]->getType() == type ) {
            _create[_createCount] = _learn[i]->clone();
            return _create[_createCount++]->clone();
        }
    }
}

