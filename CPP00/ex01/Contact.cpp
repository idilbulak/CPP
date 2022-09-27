#include "Contact.hpp"
#include "PhoneBook.hpp"

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
		exit(EXIT_FAILURE);
	if ( firstName.empty()) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getfn();
	}
		std::cin.clear();
	return 0;
}

int	Contact::ft_getln() {
	std::cout << "\033[0;30mLast name: ";
	if ( !(std::getline( std::cin, lastName)) )
		exit(EXIT_FAILURE);
	if ( lastName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getln();
	}
	return 0;
}

int	Contact::ft_getnn() {
	std::cout << "\033[0;30mNick name: ";
	if ( !(std::getline( std::cin, nickName)) )
		exit(EXIT_FAILURE);
	if ( nickName.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getnn();
	}
	return 0;
}

int	Contact::ft_getph() {
	std::cout << "\033[0;30mPhone Number: ";
	if ( !(std::getline( std::cin, phoneNumber)) )
		exit(EXIT_FAILURE);
	if ( phoneNumber.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getph();
	}
	return 0;
}

int	Contact::ft_getds() {
	std::cout << "\033[0;30mDarkest Secret: ";
	if ( !(std::getline( std::cin, darkestSecret)) )
		exit(EXIT_FAILURE);
	if ( darkestSecret.empty() ) {
		std::cout << "\033[0;36mA contact can't have an empty field" << std::endl;
		ft_getds();
	}
	return 0;
}