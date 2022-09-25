#include "Zombie.hpp"

void	randomChump( const std::string &name ) {
	Zombie	new_zombie(name);
	new_zombie.announce();
}
