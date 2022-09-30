/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:48 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:49 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << CYAN << "[ Dog ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog( const Dog& dog) {
	std::cout << CYAN << "[ Dog ] "  << "Copy constructor called" << RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
	*(this->_brain) = *(dog._brain);
}

Dog &Dog::operator=(const Dog& dog) {
	*(this->_brain) = *(dog._brain);
	return *this;
}

Dog::~Dog( void ) {
	std::cout << CYAN << "[ Dog ] " << "Destructor called" << RESET << std::endl;
	delete _brain;
}

void Dog::makeSound( void ) const {
	std::cout << CYAN << "[ Dog ] " << "Bark Bark" << RESET << std::endl;
}

Brain *Dog::getBrain( void ) const {
	return this->_brain;
}