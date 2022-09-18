#include "Fixed.hpp"

Fixed::Fixed( void )
    : _numberValue(0) {
	return ;
}

Fixed::Fixed( const int fixed )
    : _numberValue( fixed * (1 << fractionalBits) ) {
	return;
}

Fixed::Fixed( const float fixed )
    : _numberValue( std::roundf( fixed * (1 << fractionalBits)) ) {
	return;
}

Fixed::Fixed( const Fixed &fixed ) {
    *this = fixed;
	return;
}

Fixed& Fixed::operator=( const Fixed &fixed ) {
    _numberValue = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
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