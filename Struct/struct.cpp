#include <iostream>
#include "struct.hpp"

Sample1::Sample1( void ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample1::~Sample1( void ) {

	std::cout << "Destructor callled" << std::endl;
	return; 
}

void	Sample1::bar( void ) const {

	std::cout << "Member function bar called" << std::endl;
	return;
}