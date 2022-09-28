#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << RED << "[ Dog ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog& dog) {
	std::cout << RED << "[ Dog ] " << "Copy constructor called" << RESET << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog& dog) {
	this->_type = dog._type;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << RED << "[ Dog ] " << "Destructor called" << RESET << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << RED << "[ Dog ] " << "Bark Bark" << RESET << std::endl;
}