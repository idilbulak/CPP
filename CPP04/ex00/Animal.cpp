#include "Animal.hpp"

Animal::Animal( void )
	: _type("") {
		std::cout << GREEN << "[ Animal ] " << GREY << "Default constructor called" << RESET << std::endl;
}

Animal::Animal( const Animal& animal) {
	std::cout << GREEN << "[ Animal ] " << GREY << "Copy constructor called" << RESET << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal& animal) {
	this->_type = animal._type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << GREEN << "[ Animal ] " << GREY << "Destructor called" << RESET << std::endl;
}

const std::string& Animal::getType( void ) const {
	return _type;
}

void Animal::makeSound( void ) const {
	std::cout << GREEN << "[ Animal ] " << GREY << "makes ? sound" << RESET << std::endl;
}