#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T& a, T& b) {
    if (a < b)
        return a;
    else
        return b;
}

template<typename T>
T max(T& a, T& b) {
    if (a > b)
        return a;
    else
        return b;
}

#endif
