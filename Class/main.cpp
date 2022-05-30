#include <iostream>
#include "class.hpp"

int	main() {

	Sample	instance;

	instance.foo = 42;
	std::cout << "instance.foo:" << instance.foo << std::endl;

	instance.bar();

	return 0;

}

//class is the static part whereas instance is the dynamic part.