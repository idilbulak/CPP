/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 10:07:58 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 10:07:59 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

MateriaSource::MateriaSource( const MateriaSource& materiaSource) {
	// std::cout << GREEN << "[ MateriaSource ] " << "Copy constructor called" << RESET << std::endl;
    this->_createCount = materiaSource._createCount;
    this->_learnCount = materiaSource._learnCount;
    for (int i = 0; i < 4; i++) {
        if ( materiaSource._create[i] )
            _create[i] = materiaSource._create[i];
        else
            _create[i] = NULL;
    }
    for (int i = 0; i < 4; i++) {
        if ( materiaSource._learn[i] )
            _learn[i] = materiaSource._learn[i];
        else
            _learn[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& materiaSource) {
    for (int i = 0; i < 4; i++) {
        delete _create[i];
        _create[i] = NULL;
    }
    for (int i = 0; i < 4; i++) {
        delete _learn[i];
        _learn[i] = NULL;
    }
    this->_createCount = materiaSource._createCount;
    this->_learnCount = materiaSource._learnCount;
    return *this;
}

MateriaSource::~MateriaSource( void ) {
	// std::cout << GREEN << "[ MateriaSource ] " << "Destructor called" << RESET << std::endl;
    for (int i = 0; i < _createCount; i++)
        delete _create[i];
    for (int i = 0; i < _learnCount; i++)
        delete _learn[i];
}

void MateriaSource::learnMateria( AMateria *m ) {
    if (m && _learnCount < 4) {
        _learn[_learnCount] = m;
        _learnCount++;
    }
    else if ( _learnCount == 4 ) {
        std::cout << "learnMateria is full" << std::endl;
        delete m;
    }
}

AMateria* MateriaSource::createMateria( std::string const& type ) {
    if (_createCount == 4) {
        std::cout << "can not create" << std::endl;
        return NULL;
    }
    for ( int i = 0; i < _learnCount; i++) {
        if (_learn[i]->getType() == type ) {
            _create[_createCount] = _learn[i]->clone();
            return _create[_createCount++]->clone();
        }
    }
    return NULL;
}

