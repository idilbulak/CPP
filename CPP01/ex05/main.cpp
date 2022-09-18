#include "Harl.hpp"

int main( int argc, char** argv ) {


	if ( argc != 2 ) {
		std::cout << RED << "Wrong number of arguments" << RESET << std::endl;
		std::cout << GREY << "DEBUG _ INFO _ WARNING _ ERROR" << RESET << std::endl;
		exit (EXIT_FAILURE);
	}
	else if ( strcmp(argv[1], "DEBUG") && strcmp(argv[1], "INFO")
			&& strcmp(argv[1], "WARNING") && strcmp(argv[1], "ERROR") ) {
				std::cout << RED << "Wrong Argument" << RESET << std::endl;
				std::cout << GREY << "DEBUG _ INFO _ WARNING _ ERROR" << RESET << std::endl;
		exit (EXIT_FAILURE);
	}
	Harl _harl;
	std::string str = argv[1];
	_harl.complain(str);
	return 0;
}	