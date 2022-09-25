#include "Zombie.hpp"

int	main( int argc, char **argv) {

	(void)argv;

	if ( argc != 1 ) {
		std::cout << "ERROR" << std::endl;
		exit(EXIT_FAILURE);
	}

	Zombie *heap = newZombie("Heap");
	heap->announce();

	randomChump("Stack");

	delete heap;
	return 0;

}
