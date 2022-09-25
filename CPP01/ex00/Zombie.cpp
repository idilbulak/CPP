#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	_name = name;
	std::cout << "Zombie " << _name << " was born." << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << RED << "Zombie " << _name << " was destroyed." << RESET << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
