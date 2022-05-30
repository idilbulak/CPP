#include <iostream>
#include "this.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
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