#include "Fixed.hpp"

Fixed Fixed::operator+( const Fixed &fixed) const {
    Fixed result;
    result.setRawBits( _numberValue + fixed._numberValue);
    return result;
}

Fixed Fixed::operator-( const Fixed &fixed) const {
    Fixed result;
    result.setRawBits( _numberValue - fixed._numberValue);
    return result;
}

Fixed Fixed::operator*( const Fixed &fixed) const {
    Fixed result;
    result.setRawBits( _numberValue * fixed._numberValue);
    return result;
}

Fixed Fixed::operator/( const Fixed &fixed) const {
    Fixed result;
    result.setRawBits( _numberValue / fixed._numberValue);
    return result;
}

