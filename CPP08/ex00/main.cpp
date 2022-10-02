#include "easyfind.hpp"
#include <list>
#include <vector>

int main( void ) {

	std::cout << std::endl;
	std::cout << "............list iterator............" << std::endl;
	std::list<int> list_container;

	for (int i = 0; i < 5; i++) {
		list_container.push_back(i);
	}

	for (int i = 0; i < 7; ++i) {
        easyfind(list_container, i);
    }
    std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "............vector iterator............" << std::endl;
	std::vector<int> vector_container;

	for (int i = 0; i < 5; i++) {
		vector_container.push_back(i);
	}

	for (int i = 0; i < 7; ++i) {
        easyfind(vector_container, i);
    }
    std::cout << std::endl;
}

