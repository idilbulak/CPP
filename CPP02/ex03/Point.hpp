#ifndef POINT_HPP
# define POINT_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREY	"\033[0;30m"
#define RESET	"\033[0m"

#include "Fixed.hpp"

class Point {

    public:
        Point( void );
        Point( const float &f1, const float &f2);
        Point( const Point& point);
        Point &operator=( const Point& point);
        ~Point( void );

        Point operator-( const Point& point ) const;

        const Fixed& getX( void ) const;
        const Fixed& getY( void ) const;
        void  setX( const Fixed& fixed);
        void  setY( const Fixed& fixed);

    private:
        const Fixed _x;
        const Fixed _y; 
};

#endif