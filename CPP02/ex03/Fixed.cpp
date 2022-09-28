/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:48:31 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:48:32 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) 
    : _numberValue(0) {
        // std::cout << GREY << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed( const int integer) 
    : _numberValue( integer * ( 1 << _fractionalBits) ) {
    // std::cout << GREY << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed( const float floating) 
    : _numberValue( roundf( floating * ( 1 << _fractionalBits) )) {
    // std::cout << GREY << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) {
    // std::cout << GREY << "Copy constructor called" << RESET << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=( const Fixed& fixed ) {
    // std::cout << GREY << "Copy assignment operator called" << RESET << std::endl;
    this->_numberValue = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed( void ) {
    // std::cout << GREY << "Destructor called" << RESET << std::endl;
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

bool Fixed::operator>( const Fixed& fixed) const {
    return this->_numberValue > fixed.getRawBits();
}

bool Fixed::operator<( const Fixed& fixed) const {
    return this->_numberValue < fixed.getRawBits();
}

bool Fixed::operator>=( const Fixed& fixed) const {
    return this->_numberValue >= fixed.getRawBits();
}

bool Fixed::operator<=( const Fixed& fixed) const {
    return this->_numberValue <= fixed.getRawBits();
}

bool Fixed::operator==( const Fixed& fixed) const {
    return this->_numberValue == fixed.getRawBits();
}

bool Fixed::operator!=( const Fixed& fixed) const {
    return this->_numberValue != fixed.getRawBits();
}

Fixed Fixed::operator+( const Fixed& fixed ) const {
    Fixed result = this->toFloat() + fixed.toFloat();
    return result;
}

Fixed Fixed::operator-( const Fixed& fixed ) const {
    Fixed result = this->toFloat() - fixed.toFloat();
    return result;
}

Fixed Fixed::operator-( void ) {
    Fixed result = -this->toFloat();
    return result;
}

Fixed Fixed::operator*( const Fixed& fixed ) const {
    Fixed result = this->toFloat() * fixed.toFloat();
    return result;
}

Fixed Fixed::operator/( const Fixed& fixed ) const {
    Fixed result = this->toFloat() / fixed.toFloat();
    return result;
}

Fixed& Fixed::operator++( void ) {
    this->_numberValue++;
    return *this;
}

Fixed Fixed::operator++( int integer ) {
    (void)integer;
    Fixed result( *this );
    this->_numberValue++;
    return result;
}

Fixed& Fixed::operator--( void ) {
    this->_numberValue--;
    return *this;
}

Fixed Fixed::operator--( int integer ) {
    (void)integer;
    Fixed result( *this );
    this->_numberValue--;
    return result;
}

const Fixed& Fixed::min( Fixed& num1, Fixed& num2) {
    if ( num1 < num2 )
        return num1;
    return num2;
}

const Fixed& Fixed::min( const Fixed& num1, const Fixed& num2) {
    if ( num1 < num2 )
        return num1;
    return num2;
}

const Fixed& Fixed::max( Fixed& num1, Fixed& num2) {
    if ( num1 > num2 )
        return num1;
    return num2;
}

const Fixed& Fixed::max( const Fixed& num1, const Fixed& num2) {
    if ( num1 > num2 )
        return num1;
    return num2;
}

