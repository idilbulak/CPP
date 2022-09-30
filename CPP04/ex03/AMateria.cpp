/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:47:05 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:48:00 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ){
		// std::cout << GREEN << "[ AMateria ] " << "Default constructor called" << RESET << std::endl;
}

AMateria::AMateria( const AMateria& amateria) {
	std::cout << GREEN << "[ AMateria ] " << "Copy constructor called" << RESET << std::endl;
	*this = amateria;
}

AMateria &AMateria::operator=(const AMateria& amateria) {
	this->_type = amateria._type;
	return *this;
}

AMateria::AMateria( std::string const& type){
	this->_type = type;
}

AMateria::~AMateria( void ) {
	// std::cout << GREEN << "[ AMateria ] " << "Destructor called" << RESET << std::endl;
}

std::string const& AMateria::getType( void ) const {
	return _type;
}
