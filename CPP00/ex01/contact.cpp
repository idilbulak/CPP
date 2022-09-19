#include "contact.hpp"
#include "phonebook.hpp"

int	Contact::ft_getinfo() {

	std::string line;

	if (ft_getfn() == 1)
		return 0;
	if (ft_getln() == 1)
		return 0;
	if (ft_getnn() == 1)
		return 0;
	if (ft_getph() == 1)
		return 0;
	if (ft_getds() == 1)
		return 0;
	std::cout << std::endl;
	std::cout << "\033[0;36mContact added." << std::endl;
	std::cout << std::endl;
	std::cout << "\033[0;30mPlease enter another commmand" << std::endl;
	std::cout << std::endl;

	return 1;

}

int	Contact::ft_getfn() {
	std::cout << "\033[0;30mFirst name: ";
	if ( !(std::getline( std::cin, firstName)) )
		return 1;
	while ( firstName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getfn();
	}
	return 0;
}

int	Contact::ft_getln() {
	std::cout << "\033[0;30mLast name: ";
	if ( !(std::getline( std::cin, lastName)) )
		return 1;
	while ( lastName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getln();
	}
	return 0;
}

int	Contact::ft_getnn() {
	std::cout << "\033[0;30mNick name: ";
	if ( !(std::getline( std::cin, nickName)) )
		return 1;
	while ( nickName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getnn();
	}
	return 0;
}

int	Contact::ft_getph() {
	std::cout << "\033[0;30mPhone Number: ";
	if ( !(std::getline( std::cin, phoneNumber)) )
		return 1;
	while ( phoneNumber.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getph();
	}
	return 0;
}

int	Contact::ft_getds() {
	std::cout << "\033[0;30mDarkest Secret: ";
	if ( !(std::getline( std::cin, darkestSecret)) )
		return 1;
	while ( darkestSecret.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getds();
	}
	return 0;
}