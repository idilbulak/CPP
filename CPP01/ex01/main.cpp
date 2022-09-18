#include "Zombie.hpp"

const int	maxZombie = 10;

int main ( void ) {

	Zombie *zombies;

	zombies = zombieHorde( maxZombie, "zombie" );
	for(int i = 0; i < maxZombie; i++)
		zombies[i].announce();
	delete [] zombies;
	return 0;
}