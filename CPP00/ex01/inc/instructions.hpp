#ifndef INSTRUCTIONS_HPP
# define INSTRUCTIONS_HPP

#include <iostream>

namespace	instructions {

	static const char *inst =
		"*---------------------------------------------*\n"
		"|                                             |\n"
		"|                PhoneBook                    |\n"
		"|                                             |\n"
		"| Please enter a command to continue..        |\n"
		"|                                             |\n"
		"| ADD	  :to save a new contact.             |\n"
		"| SEARCH  :to display a specific contact.     |\n"
		"| EXIT	  :to quit & delete all the contacts. |\n"
		"|                                             |\n"
		"*---------------------------------------------*\n";

	void	print_instructions( void );
}

#endif
