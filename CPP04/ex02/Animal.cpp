/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:27 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:28 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
	: _type("") {
		std::cout << GREEN << "[ Animal ] " << "Default constructor called" << RESET << std::endl;
}

Animal::Animal( const Animal& animal) {
	std::cout << GREEN << "[ Animal ] " << "Copy constructor called" << RESET << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal& animal) {
	this->_type = animal._type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << GREEN << "[ Animal ] " << "Destructor called" << RESET << std::endl;
}

const std::string& Animal::getType( void ) const {
	return _type;
}

void Animal::makeSound( void ) const {
	std::cout << GREEN << "[ Animal ] " << "has no sound" << RESET << std::endl;
}