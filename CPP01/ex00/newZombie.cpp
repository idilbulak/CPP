#include "Zombie.hpp"

Zombie*	newZombie( const std::string& name ) {

	Zombie	*new_zombie;
	
	new_zombie = new Zombie(name);
	if(!new_zombie)
		std::cout << "Memmory allocation failure" << std::endl;
	return new_zombie;
}