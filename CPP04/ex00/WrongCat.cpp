#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
		std::cout << CYAN << "[ WrongCat ] " << GREY << "Default constructor called" << RESET << std::endl;
		this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& wrongcat) {
	std::cout << CYAN << "[ WrongCat ] " << GREY << "Copy constructor called" << RESET << std::endl;
	*this = wrongcat;
}

WrongCat &WrongCat::operator=(const WrongCat& wrongcat) {
	this->_type = wrongcat._type;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << CYAN << "[ WrongCat ] " << GREY << "Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound( void ) const {
	std::cout << CYAN << "[ WrongCat ] " << GREY << "Meeeoooowwwww" << RESET << std::endl;
}