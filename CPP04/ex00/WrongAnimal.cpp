#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) 
	: _type("") {
		std::cout << RED << "[ WrongAnimal ] " << "Default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& WrongAnimal) {
	std::cout << RED << "[ WrongAnimal ] " << "Copy constructor called" << RESET << std::endl;
	*this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& WrongAnimal) {
	this->_type = WrongAnimal._type;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << RED << "[ WrongAnimal ] " << "Destructor called" << RESET << std::endl;
}

const std::string& WrongAnimal::getType( void ) const {
	return _type;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << RED << "[ WrongAnimal ] " << "makes ? sound" << RESET << std::endl;
}