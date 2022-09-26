#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << CYAN << "[ Cat ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat& cat) {
	std::cout << CYAN << "[ Cat ] "  << "Copy constructor called" << RESET << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat& cat) {
	this->_type = cat._type;
	return *this;
}

Cat::~Cat( void ) {
	std::cout << CYAN << "[ Cat ] " << "Destructor called" << RESET << std::endl;
}

void Cat::makeSound( void ) const {
	std::cout << CYAN << "[ Cat ] " << "Meeeoooowwwww" << RESET << std::endl;
}