#include "Zombie.hpp"

Zombie*		zombieHorde( int n, const std::string name ) {

	Zombie	*zombies = new Zombie[n];
	if(!zombies)
		std::cout << "Memmory allocation failure" << std::endl;
	
	for (int i = 0; i < n; i++) {
		std::stringstream	str;
		str << i;
		zombies[i].giveName( name + str.str() );
	}
	return zombies;
}


	