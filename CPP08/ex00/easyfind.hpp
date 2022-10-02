#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T& container, int& n) {
    if (std::find(container.begin(), container.end(), n) == container.end()) {
        std::cerr << n << " is not found!" << std::endl;
        return std::find(container.begin(), container.end(), n);
    }
    else {
        std::cout << n << " is found!" << std::endl;
        return std::find(container.begin(), container.end(), n);
    }
}   

#endif
