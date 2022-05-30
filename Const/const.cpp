#include <iostream>
#include "const.hpp"

Const::Const( float const f ) : pi( f ), qd(42) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Const::~Const( void ) {

	std::cout << "Destructor callled" << std::endl;
	return; 
}

void	Const::bar( void ) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	// this->qd = 0;

	return;
}