#include <iostream>
#include <string>
#include <cctype>


int	 main( int argc, char** argv ) {

	std::string message;

	if ( argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for (int i = 1; i < argc; i++) {
		message = argv[i];
		for (size_t j = 0; j < message.length(); j++)
				std::cout << (char)toupper(message[j]);
	}

	std::cout << std::endl;

	return 0;
}

// size_t length() const;
// int toupper ( int c );

/*
./megaphone "shhhhh... I think the students are asleep..."
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
./megaphone
*/