#include "Fixed.hpp"

Fixed::Fixed( void ) {
    _numberValue = 0;
    std::cout << GREY << "Default constructor called" << RESET << std::endl;
	return;
}

Fixed::Fixed( const Fixed &fixed ) {
    std::cout << GREY << "Copy constructor called" << RESET << std::endl;
    *this = fixed;
	return;
}

Fixed& Fixed::operator=( const Fixed &fixed ) {
    std::cout << GREY << "Copy assignment operator called" << RESET << std::endl;
    _numberValue = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
    std::cout << GREY << "Destructor called" << RESET << std::endl;
	return; 
}

int	Fixed::getRawBits( void ) const {
    std::cout << GREY << "getRawBits member function called" << RESET << std::endl;
	return _numberValue;
}

void Fixed::setRawBits( int const raw ) {
	_numberValue = raw;
    return ;
}
