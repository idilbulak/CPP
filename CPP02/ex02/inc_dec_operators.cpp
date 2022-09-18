#include "Fixed.hpp"

Fixed &Fixed::operator++( void ) {
    _numberValue++;
    return *this;
}

Fixed Fixed::operator++( int ) {
    Fixed temp(*this);
    _numberValue++;
    return temp;
}

Fixed &Fixed::operator--( void ) {
    _numberValue--;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed temp(*this);
    _numberValue--;
    return temp; 
}