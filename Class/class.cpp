#include <iostream>
#include "class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor callled" << std::endl;
	return; 
}

void	Sample::bar( void ) {

	std::cout << "Member function bar called" << std::endl;
	return;
}