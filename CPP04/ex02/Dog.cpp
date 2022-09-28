#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << CYAN << "[ Dog ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog( const Dog& dog) {
	std::cout << CYAN << "[ Dog ] "  << "Copy constructor called" << RESET << std::endl;
	this->_type = dog.getType();
	this->_brain = new Brain;
}

Dog &Dog::operator=(const Dog& dog) {
	this->_type = dog._type;
	this->_brain = dog._brain; //new brain
	return *this;
}

Dog::~Dog( void ) {
	std::cout << CYAN << "[ Dog ] " << "Destructor called" << RESET << std::endl;
	delete _brain;
}

void Dog::makeSound( void ) const {
	std::cout << CYAN << "[ Dog ] " << "Meeeoooowwwww" << RESET << std::endl;
}

Brain *Dog::getBrain( void ) const {
	return this->_brain;
}