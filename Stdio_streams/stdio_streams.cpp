#include <iostream>

int	 main( void ) {

	char	buff[512];

	std::cout << "Hello world!" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return 0;
}

// std::endl   -new line
// https://www.educative.io/blog/cpp-data-structures-interview-prep -data structures
// cplusplus.com