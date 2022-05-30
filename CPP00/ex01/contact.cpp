#include "inc/contact.hpp"

Contact::Contact( void ) {

}

Contact::~Contact( void ) {

}

void	Contact::print_cont() {

	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;

}

bool	Contact::get_details() {

	std::string line;

	std::cout << "Please fill in the below" << std::endl;
	std::cout << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);
	std::cout << std::endl;
	std::cout << "Contact added." << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter another commmand" << std::endl;
	std::cout << std::endl;

	return true;

}