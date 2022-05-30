#include <iostream>
#include <string>
#define VIOLET	"\033[1;35m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int		main( void ) {

	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << VIOLET << "The memory address of the string variable: " << RESET << &string << std::endl;
	std::cout << VIOLET << "The memory address held by stringPTR: " << RESET << &stringPTR << std::endl;
	std::cout << VIOLET << "The memory address held by stringREF: " << RESET << &stringREF << std::endl;

	std::cout << GREEN << "The value of the string variable: " << RESET << string << std::endl;
	std::cout << GREEN << "The value pointed to by stringPTR: " << RESET << *stringPTR << std::endl;
	std::cout << GREEN << "The value pointed to by stringREF: " << RESET << stringREF << std::endl;

	return 0;
}