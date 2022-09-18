#include "HumanA.hpp"
#include "HumanB.hpp"


int		main( void ) {

	std::cout << "\033[0;36mBob will attack with two different weapons" << std::endl;
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	std::cout << "\033[0;36mJim will attack with two different weapons" << std::endl;
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	std::cout << "\033[0;36mBob without a weapon?" << std::endl;
	{
	Weapon club = Weapon();
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("crude spiked club");
	bob.attack();
	}
	std::cout << "\033[0;36mJim without a weapon?" << std::endl;
	{
	HumanB jim("Jim");
	jim.attack();
	Weapon club = Weapon("crude spiked club");
	jim.setWeapon(club);
	jim.attack();
	}
	
	return 0;
}