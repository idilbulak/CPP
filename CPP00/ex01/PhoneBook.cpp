#include "PhoneBook.hpp"

int	PhoneBook::ft_add( void ) {

	Contact	newCont;

	if ( !newCont.ft_getinfo() ) {
		return 0;
	}
	if ( this->index < 8 ) {
		this->contacts[index] = newCont;
		this->index++;
		emptySpace--;
		return 1;
	}
	else {
		for( int i = 0; i < 7; i++ )
			this->contacts[i] = this->contacts[i+1];
		this->contacts[0] = newCont;
		return 1;
	}
	std::cout << std::endl;
	std::cout << "Please enter another commmand" << std::endl;
}

int	PhoneBook::ft_search( void ) {

	int	i;

	if ( this->index == 0) {
		std::cout << "\033[0;36mNo contacts saved."<< std::endl;
		std::cout << "\033[0;30mPlease enter another commmand" << std::endl;
		std::cout << std::endl;
		return 1;
	}
	this->ft_printphonebook();
	std::cout << std::endl;
	std::cout << "\033[0;30mPlease choose index to see all the details: ";
	std::cin >> i;
	if (std::cin.fail() || (int)i <= 0 || (int)i > this->index ) {
		std::cin.clear();
		std::cout << "\033[0;36mNot an available contact index!" << std::endl;
		std::cout << std::endl;
		return 0;
	}
	else {
		std::cout << std::endl;
		ft_printcontactdetails(contacts[i - 1], i);;
	}
	return 1;
}

void	PhoneBook::ft_checkwidth(const std::string& str) {

	std::cout << std::setfill(' ');
	if (str.length() > column_width)
		std::cout << str.substr(0, column_width - 1) << ".";
	else
		std::cout << std::setw(column_width) << str;

}

void	PhoneBook::ft_printcontact( Contact& contact, int index  ) {

		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << index;
		std::cout << "|";
		ft_checkwidth(contact.firstName);
		std::cout << "|";
		ft_checkwidth(contact.lastName);
		std::cout << "|";
		ft_checkwidth(contact.nickName);
		std::cout << "|" << std::endl;
		std::cout << "*"<< std::setfill('-') << std::setw(44) << "*"<< std::endl;
}

void	PhoneBook::ft_printcontactdetails( Contact& contact, int index  ) {

		std::cout << "First Name\t: " << contact.firstName << std::endl;
		std::cout << "Last Name\t: " << contact.lastName << std::endl;
		std::cout << "Nickname\t: " << contact.nickName << std::endl;
		std::cout << "Phone Number\t: " << contact.phoneNumber << std::endl;
		std::cout << "Darkest Secret\t: " << contact.darkestSecret << std::endl;
		std::cout << std::endl;
		std::cout << "Please enter another commmand" << std::endl;
}

void	PhoneBook::ft_printphonebook( void ) {

	std::cout << "\033[0;30m*"<< std::setfill('-') << std::setw(44) << "*"<< std::endl;
	std::cout << "|";
	ft_checkwidth("Index");
	std::cout << "|";
	ft_checkwidth("First Name");
	std::cout << "|";
	ft_checkwidth("Last Name");
	std::cout << "|";
	ft_checkwidth("Nickname");
	std::cout << "|" << std::endl;
	std::cout << "|"<< std::setfill('-') << std::setw(44) << "|"<< std::endl;

	for ( int i = 0; i < max - emptySpace; i++)
		ft_printcontact(contacts[i], i + 1);
}

/*
	setw = Sets the field width to be used on output operations.
	setfill = Behaves as if member fill were called with c as argument on the stream on which it is inserted as a manipulator (it can be inserted on output streams).

*/