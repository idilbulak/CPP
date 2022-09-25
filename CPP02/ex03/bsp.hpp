#ifndef BSP_HPP
# define BSP_HPP

#include "Point.hpp"

namespace bsp {
bool bsp( Point const a, Point const b, Point const c, Point const point);
}

#endif

// https://mathworld.wolfram.com/TriangleInterior.html#:~:text=The%20simplest%20way%20to%20determine,it%20lies%20outside%20the%20triangle.
// https://stackoverflow.com/questions/13300904/determine-whether-point-lies-inside-triangle
// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/