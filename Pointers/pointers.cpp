#include <iostream>
#include "pointers.hpp"

Sample::Sample( void ) : foo( 0 ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor callled" << std::endl;
	return; 
}

void	Sample::bar( void ) const {

	std::cout << "Member function bar called" << std::endl;
	return;
}