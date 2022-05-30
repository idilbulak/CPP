#include "Zombie.hpp"

int	main() {

	Zombie	_zombie("_Stack");
	_zombie.announce();

	Zombie *heap = newZombie("_Heap");
	heap->announce();

	randomChump("_Random");

	delete heap;

	return 0;

}
