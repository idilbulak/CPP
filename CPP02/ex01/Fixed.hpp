/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:45:09 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:45:10 by ibulak        ########   odam.nl         */
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

    private:
        int _numberValue;
        static const int _fractionalBits = 8; 
};

std::ostream &operator<<( std::ostream &o, const Fixed &fixed);

#endif
