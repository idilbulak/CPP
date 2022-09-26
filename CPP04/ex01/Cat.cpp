#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << CYAN << "[ Cat ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat( const Cat& cat) {
	std::cout << CYAN << "[ Cat ] "  << "Copy constructor called" << RESET << std::endl;
	this->_type = cat.getType();
	this->_brain = new Brain;
}

Cat &Cat::operator=(const Cat& cat) {
	this->_type = cat._type;
	this->_brain = cat._brain; //new brain
	return *this;
}

Cat::~Cat( void ) {
	std::cout << CYAN << "[ Cat ] " << "Destructor called" << RESET << std::endl;
	delete _brain;
}

void Cat::makeSound( void ) const {
	std::cout << CYAN << "[ Cat ] " << "Meeeoooowwwww" << RESET << std::endl;
}

Brain *Cat::getBrain( void ) const {
	return this->_brain;
}
