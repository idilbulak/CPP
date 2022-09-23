#include "Zombie.hpp"

Zombie::Zombie( ) {
	std::cout << "A zombie was born." << std::endl;
}

Zombie::Zombie( std::string name ) {
	_name = name;
	std::cout << _name << " zombie was born." << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << RED << _name << " zombie was destroyed." << RESET << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << YELLOW << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::giveName( const std::string name ) {
	_name = name;
}
