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
    Fixed( const int fixed );
    Fixed( const float fixed );
    Fixed( const Fixed &fixed );
	~Fixed( void );

    Fixed &operator=( const Fixed &fixed );
    
    bool operator==(const Fixed &fixed) const;
    bool operator>(const Fixed &fixed) const;
    bool operator<(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;

    Fixed operator+( const Fixed &fixed ) const;
    Fixed operator-( const Fixed &fixed ) const;
    Fixed operator*( const Fixed &fixed ) const;
    Fixed operator/( const Fixed &fixed ) const;

    Fixed &operator++( void );
    Fixed operator++( int );
    Fixed &operator--( void );
    Fixed operator--( int );


	int getRawBits( void ) const;
	void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;


private:

    int _numberValue;
    static const int fractionalBits = 8;

};

std::ostream &operator<<( std::ostream &o, const Fixed &fixed);


#endif