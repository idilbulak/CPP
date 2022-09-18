#include "Harl.hpp"

Harl::Harl( void ) {

	std::cout << CYAN << "Harl is ready to complain" << RESET << std::endl;
	return;
}

Harl::~Harl( void ) {

	std::cout << RED << "Harl is destroyed" << RESET << std::endl;
	return; 
}

void	Harl::debug( void ) {

	std::cout << GREY << "Level : DEBUG" << RESET << std::endl;
	std::cout << GREY << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
	return;
}

void	Harl::info( void ) {

	std::cout << GREY << "Level : INFO" << RESET << std::endl;
	std::cout << GREY << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
	return;
}

void	Harl::warning( void ) {

	std::cout << GREY << "Level : WARNING" << RESET << std::endl;
	std::cout << GREY << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
	return;
}

void	Harl::error( void ) {

	std::cout << GREY << "Level : ERROR" << RESET << std::endl;
	std::cout << GREY << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
	return;
}

void	Harl::complain( std::string level ) {

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 	index;

	void	(Harl::*point[4])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	for ( int i = 0; i < 4; i++) {
		if ( levels[i] == level ) {
			index = i;
			break;
		}
	}

	switch (index) {

		case( 0 ):
			for (int i = index; i < 4; i++)
				(this->*(point[i]))();
			break;

		case( 1 ):
			for (int i = index; i < 4; i++)
				(this->*(point[i]))();
			break;

		case( 2 ):
			for (int i = index; i < 4; i++)
				(this->*(point[i]))();
			break;

		case( 3 ):
			for (int i = index; i < 4; i++)
				(this->*(point[i]))();
			break;
	}

}

// https://www.ibm.com/docs/en/i/7.4?topic=only-pointers-members-c