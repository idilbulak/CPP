#include "inc/phonebook.hpp"
#include "inc/instructions.hpp"

int		main( void ) {

	PhoneBook	phoneBook;
	std::string	command;

	instructions::print_instructions();
	
	while ( true ) {

		if ( !(std::getline( std::cin, command)) )
			std::exit( EXIT_FAILURE );
		else if ( command == "EXIT" )
			std::exit ( EXIT_SUCCESS );
		else if ( command == "ADD" ) {
			std::cout << std::endl;
			if ( !phoneBook.add() )
				std::cout << "Failuere!" << std::endl;
		}
		else if ( command == "SEARCH")
			phoneBook.search();
		else {
			std::cout << "Not a command!" << std::endl;
			std::cout << "ADD - SEARCH - EXIT" << std::endl;
		}
		std::cin.clear();
	}

	return 0;

}