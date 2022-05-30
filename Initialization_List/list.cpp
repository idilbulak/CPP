#include <iostream>
#include "list.hpp"

List::List( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1: " << this->a1 << std::endl;
	std::cout << "this->a2: " << this->a2 << std::endl;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return;
}

List::~List( void ) {

	std::cout << "Destructor callled" << std::endl;
	return; 
}


// List::List( char p1, int p2, float p3 ) {

// 	std::cout << "Constructor called" << std::endl;

// 	this->a1 = p1;
// 	std::cout << "this->a1: " << this->a1 << std::endl;

// 	this->a2 = p2;
// 	std::cout << "this->a2: " << this->a2 << std::endl;

// 	this->a3 = p3;
// 	std::cout << "this->a3: " << this->a3 << std::endl;

// 	return;
// }

