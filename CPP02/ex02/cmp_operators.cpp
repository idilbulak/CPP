#include "Fixed.hpp"

bool Fixed::operator==( const Fixed &fixed) const {
    if ( _numberValue == fixed.getRawBits() )
        return true;
    return false;
}

bool Fixed::operator>( const Fixed &fixed) const {
    if ( _numberValue > fixed.getRawBits() )
        return true;
    return false;
}

bool Fixed::operator<( const Fixed &fixed) const {
    if ( _numberValue < fixed.getRawBits() )
        return true;
    return false;
}

bool Fixed::operator>=( const Fixed &fixed) const {
    if ( _numberValue >= fixed.getRawBits() )
        return true;
    return false;
}

bool Fixed::operator<=( const Fixed &fixed) const {
    if ( _numberValue <= fixed.getRawBits() )
        return true;
    return false;
}

bool Fixed::operator!=( const Fixed &fixed) const {
    if ( _numberValue != fixed.getRawBits() )
        return true;
    return false;
}