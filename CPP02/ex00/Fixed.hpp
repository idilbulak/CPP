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
    Fixed( const Fixed &fixed );
	~Fixed( void );

    Fixed &operator=( const Fixed &fixed );
	
    int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

    int _numberValue;
    static const int fractionalBits = 8;

};


#endif