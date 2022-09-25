#include "bsp.hpp"

namespace bsp {
    
static Fixed cross_product( Point const& u, Point const& v) {
    return u.getX() * v.getY() - v.getX() * u.getY();
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed denominator = cross_product( b-a, c-a );
    if ( denominator == 0)
        return false;
    Fixed x = cross_product( point-a, c-a ) / denominator;
    Fixed y = -(cross_product( point-a, b-a ) / denominator);
    return x > 0 && y > 0 && x + y < 1;
}
}