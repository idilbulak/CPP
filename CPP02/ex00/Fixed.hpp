/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:44:06 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:44:07 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>

class Fixed {

    public:
        Fixed( void );
        Fixed( const Fixed& fixed);
        Fixed &operator=(const Fixed& fixed);
        ~Fixed( void );

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _numberValue;
        static const int _fractionalBits = 8; 
};

#endif