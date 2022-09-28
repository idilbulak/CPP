/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:48:38 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:48:39 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREY	"\033[0;30m"
#define RESET	"\033[0m"

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {

    public:
        Fixed( void );
        Fixed( const int integer);
        Fixed( const float floating);
        Fixed( const Fixed& fixed);
        Fixed &operator=(const Fixed& fixed);
        ~Fixed( void );

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int  toInt( void ) const;

        bool operator>(const Fixed& fixed) const;
        bool operator<(const Fixed& fixed) const;
        bool operator>=(const Fixed& fixed) const;
        bool operator<=(const Fixed& fixed) const;
        bool operator==(const Fixed& fixed) const;
        bool operator!=(const Fixed& fixed) const;

        Fixed operator+( const Fixed& fixed ) const;
        Fixed operator-( const Fixed& fixed ) const;
        Fixed operator-( void );
        Fixed operator*( const Fixed& fixed ) const;
        Fixed operator/( const Fixed& fixed ) const;

        Fixed &operator++( void );
        Fixed operator++( int integer);
        Fixed &operator--( void );
        Fixed operator--( int integer);

        static const Fixed& min( Fixed& num1, Fixed& num2);
        static const Fixed& min( const Fixed& num1, const Fixed& num2);
        static const Fixed& max( Fixed& num1, Fixed& num2);
        static const Fixed& max( const Fixed& num1, const Fixed& num2);

    private:
        int _numberValue;
        static const int _fractionalBits = 8; 
};

std::ostream &operator<<( std::ostream &o, const Fixed &fixed);

#endif
