#include "Fixed.hpp"

Fixed::Fixed( void )
    : _numberValue(0) {
    std::cout << GREY << "Default constructor called" << RESET << std::endl;
	return ;
}

Fixed::Fixed( const int fixed )
    : _numberValue( fixed * (1 << fractionalBits) ) {
    std::cout << GREY << "Int constructor called" << RESET << std::endl;
	return;
}

Fixed::Fixed( const float fixed )
    : _numberValue( std::roundf( fixed * (1 << fractionalBits)) ) {
    std::cout << GREY << "Float constructor called" << RESET << std::endl;
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
	return _numberValue;
}

void Fixed::setRawBits( int const raw ) {
	_numberValue = raw;
    return ;
}

float Fixed::toFloat( void ) const {
    float f = (float)_numberValue / (1 << fractionalBits);
    return f;
}

int Fixed::toInt( void ) const {
    int i = _numberValue / (1 << fractionalBits);
    return i;
}

std::ostream &operator<<( std::ostream &o, const Fixed &fixed){
    o << fixed.toFloat();
    return o;
}