#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << YELLOW << "[ Dog ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog& dog) {
	std::cout << YELLOW << "[ Dog ] " << "Copy constructor called" << RESET << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog& dog) {
	this->_type = dog._type;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << YELLOW << "[ Dog ] " << "Destructor called" << RESET << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << YELLOW << "[ Dog ] " << "Bark Bark" << RESET << std::endl;
}