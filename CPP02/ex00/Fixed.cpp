/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:44:02 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:44:03 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) 
    : _numberValue(0) {
        std::cout << GREY << "Default constructor called" << RESET << std::endl;
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
    std::cout << GREY << "getRawBits member function called" << RESET << std::endl;
    return this->_numberValue;
}

void Fixed::setRawBits( int const raw) {
    std::cout << GREY << "setRawBits member function called" << RESET << std::endl;
    this->_numberValue = raw;
}
