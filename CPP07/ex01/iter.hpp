#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void ft_print(T& elem) {
    std::cout << elem << std::endl;
}

template<typename T>
void iter(T *array, int len, void (*func)(T& elem)) {
    for (int i = 0; i < len; i++) {
        func(array[i]);
    }
}

#endif