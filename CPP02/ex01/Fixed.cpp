/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:45:06 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:45:07 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) 
    : _numberValue(0) {
        std::cout << GREY << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed( const int integer) 
    : _numberValue( integer * ( 1 << _fractionalBits) ) {
    std::cout << GREY << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed( const float floating) 
    : _numberValue( roundf( floating * ( 1 << _fractionalBits) )) {
    std::cout << GREY << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) {
    std::cout << GREY << "Copy constructor called" << RESET << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=( const Fixed& fixed ) {
    std::cout << GREY << "Copy assignment operator called" << RESET << std::endl;
    this->_numberValue = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed( void ) {
    std::cout << GREY << "Destructor called" << RESET << std::endl;
}

int Fixed::getRawBits( void ) const {
    // std::cout << GREY << "getRawBits member function called" << RESET << std::endl;
    return this->_numberValue;
}

void Fixed::setRawBits( int const raw) {
    // std::cout << GREY << "setRawBits member function called" << RESET << std::endl;
    this->_numberValue = raw;
}

float Fixed::toFloat( void ) const{
    return (float)this->_numberValue / (1 << this->_fractionalBits);
}

int Fixed::toInt( void ) const {
    return (int)this->_numberValue / (1 << this->_fractionalBits);
}

std::ostream &operator<<( std::ostream &o, const Fixed &fixed){
    o << fixed.toFloat();
    return o;
}