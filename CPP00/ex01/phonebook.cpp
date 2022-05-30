#include "inc/phonebook.hpp"

PhoneBook::PhoneBook( void ) {

	this->size = 0;
	this->empty_space = 8;
}

PhoneBook::~PhoneBook( void ) {
	
}

bool	PhoneBook::add( void ) {

	Contact	newCont;

	newCont.get_details();
	if ( this->size < 8 ) {
		this->contacts[size] = newCont;
		this->size++;
		this->empty_space--;
		return true;
	}
	else {
		for( int i = 0; i < 7; i++ )
			this->contacts[i] = this->contacts[i+1];
		this->contacts[7] = newCont;
		return true;
	}

}

void	PhoneBook::print_with_width(const std::string& str) {

	std::cout << std::setfill(' ');
	if (str.length() > column_width)
		std::cout << str.substr(0, column_width - 1) << ".";
	else
		std::cout << std::setw(column_width) << str;

}

void	PhoneBook::print_contact( const Contact& contact, int index ) {

	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << index;
	std::cout << "|";
	print_with_width(contact.firstname);
	std::cout << "|";
	print_with_width(contact.lastname);
	std::cout << "|";
	print_with_width(contact.nickname);
	std::cout << "|" << std::endl;

}

void	PhoneBook::print_search( void ) {

	std::cout << "*"<< std::setfill('-') << std::setw(44) << "*"<< std::endl;
	std::cout << "|";
	print_with_width("Index");
	std::cout << "|";
	print_with_width("First Name");
	std::cout << "|";
	print_with_width("Last Name");
	std::cout << "|";
	print_with_width("Nickname");
	std::cout << "|" << std::endl;
	std::cout << "|"<< std::setfill('-') << std::setw(44) << "|"<< std::endl;
	for ( int i = 0; i < max_cont - empty_space; i++) {
		print_contact(contacts[i], i+1);
	std::cout << "*"<< std::setfill('-') << std::setw(44) << "*"<< std::endl;
	}

}

void	PhoneBook::search( void ) {

	int	i;

	std::cout << std::endl;
	if ( this->size == 0) {
		std::cout << "No contacts saved."<< std::endl;
		std::cout << std::endl;
		return;
	}
	this->print_search();
	std::cout << std::endl;
	std::cout << "Please choose index to see all the details: ";
	std::cin >> i;
	if (std::cin.fail() || i <= 0 || i > this->size) {
		std::cin.clear();
		std::cout << "Not an available contact index!" << std::endl;
	}
	else
		this->contacts[i-1].print_cont();
	if (std::cin.get() == '\n')
		std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter another commmand" << std::endl;
	std::cout << std::endl;

}
