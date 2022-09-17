#include "contact.hpp"

int	Contact::ft_getinfo() {

	std::string line;

	std::cout << "First name: ";
	if ( !(std::getline( std::cin, firstName)) )
		std::exit( EXIT_FAILURE );
	while ( firstName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		std::cout << "\033[0;30mFirst name: ";
		std::getline(std::cin, firstName);
	}
	std::cout << "Last name: ";
	if ( !(std::getline( std::cin, lastName)) )
		std::exit( EXIT_FAILURE );
	while ( lastName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		std::cout << "\033[0;30mLast name: ";
		std::getline(std::cin, lastName);
	}
	std::cout << "Nickname: ";
	if ( !(std::getline( std::cin, nickName)) )
		std::exit( EXIT_FAILURE );
	while ( nickName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		std::cout << "\033[0;30mNick name: ";
		std::getline(std::cin, nickName);
	}
	std::cout << "Phone Number: ";
	if ( !(std::getline( std::cin, phoneNumber)) )
		std::exit( EXIT_FAILURE );
	while ( phoneNumber.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		std::cout << "\033[0;30mPhone Number: ";
		std::getline(std::cin, phoneNumber);
	}
	std::cout << "Darkest Secret: ";
	if ( !(std::getline( std::cin, darkestSecret)) )
		std::exit( EXIT_FAILURE );
	while ( darkestSecret.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		std::cout << "\033[0;30mDarkest Secret: ";
		std::getline(std::cin, darkestSecret);
	}
	std::cout << std::endl;
	std::cout << "\033[0;36mContact added." << std::endl;
	std::cout << std::endl;
	std::cout << "\033[0;30mPlease enter another commmand" << std::endl;
	std::cout << std::endl;

	return 1;

}

void	Contact::print_cont() {

	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickName << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;

}
