#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {

	_name = name;
	std::cout << "A zombie was born in " << _name << std::endl;
	return;
}

Zombie::~Zombie( void ) {

	std::cout << RED << "A zombie was destroyed in " << _name << RESET << std::endl;
	return; 
}

void	Zombie::announce( void ) {

	std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
	return;
}
