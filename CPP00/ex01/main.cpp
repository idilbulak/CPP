#include "phonebook.hpp"

void	ft_instructions( void ) {
	std::cout << std::endl;
	std::cout << "\033[0;36mPlease enter a command to continue.." << std::endl;
	std::cout << "\033[0;30mADD\t:to save a new contact." << std::endl;
	std::cout << "SEARCH\t:to display a specific contact." << std::endl;
	std::cout << "EXIT\t:to quit & delete all the contacts." << std::endl;
	std::cout << std::endl;
}

int		main( int argc, char **argv ) {

	PhoneBook	phoneBook;
	std::string	command;
	
	if ( argc != 1) {
		std::cout << "ERROR" << std::endl;
		exit (EXIT_FAILURE);
	}
	ft_instructions();
	while ( 42 ) {
		if ( !(std::getline( std::cin, command)) )
			std::exit( EXIT_FAILURE );
		else if ( command == "EXIT" ) {
			std::cout << "\033[0;31mContacts are deleted and phonebook is closed." << std::endl;
			std::exit ( EXIT_SUCCESS );
		}
		else if ( command == "ADD" ) {
			std::cout << std::endl;
			if ( !phoneBook.ft_add() )
				std::cout << "\033[0;30mAnother command please!" << std::endl;
		}
		else if ( command == "SEARCH") {
			std::cout << std::endl;
			if ( !phoneBook.ft_search() )
				std::cout << "\033[0;30mAnother command please!" << std::endl;
		}
		else {
			std::cout << std::endl;
			std::cout << "ADD - SEARCH - EXIT" << std::endl;
			std::cout << std::endl;
		}
		std::cin.clear();
	}
	return 0;
}