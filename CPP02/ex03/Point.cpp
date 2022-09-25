#include "Point.hpp"

Point::Point( void ) 
    : _x(0), _y(0) {
}

Point::Point( const float &f1, const float &f2) 
    : _x(f1), _y(f2) {
}

Point::Point( const Point& point ) {
    *this = point;
}
 
Point& Point::operator=( const Point& point ) {
    const_cast<Fixed &>(this->_x) = point.getX();
    const_cast<Fixed &>(this->_y) = point.getY();
    return *this;
}

Point::~Point( void ) {
}

Point Point::operator-( Point const &point ) const {
    Point result;
    result.setX(this->_x - point._x);
    result.setY(this->_y - point._y);
    return result;
}

const Fixed& Point::getX( void ) const {
    return _x;
}

const Fixed& Point::getY( void ) const {
    return _y;
}

void Point::setX( const Fixed& fixed ) {
    const_cast<Fixed &>(this->_x) = fixed.getRawBits();
}

void Point::setY( const Fixed& fixed ) {
    const_cast<Fixed &>(this->_y) = fixed.getRawBits();
}
