#include <iostream>
#include "class.hpp"

Sample2::Sample2( void ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample2::~Sample2( void ) {

	std::cout << "Destructor callled" << std::endl;
	return; 
}

void	Sample2::bar( void ) const {

	std::cout << "Member function bar called" << std::endl;
	return;
}