#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << CYAN << "[ Cat ] " << "Default constructor called" << RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat( const Cat& cat) {
	std::cout << CYAN << "[ Cat ] "  << "Copy constructor called" << RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
	*(this->_brain) = *(cat._brain);
}

Cat &Cat::operator=(const Cat& cat) {
	*(this->_brain) = *(cat._brain);
	return *this;
}

Cat::~Cat( void ) {
	std::cout << CYAN << "[ Cat ] " << "Destructor called" << RESET << std::endl;
	delete _brain;
}

void Cat::makeSound( void ) const {
	std::cout << CYAN << "[ Cat ] " << "Meeeoooowwwww" << RESET << std::endl;
}

Brain *Cat::getBrain( void ) const {
	return this->_brain;
}

/*
if the variables of an object have been dynamically allocated, then it is required to do a Deep Copy in order to 
create a copy of the object.
In shallow copy, an object is created by simply copying the data of all variables of the original object. 
This works well if none of the variables of the object are defined in the heap section of memory. If some 
variables are dynamically allocated memory from heap section, then the copied object variable will also 
reference the same memory location. This will create ambiguity and run-time errors, dangling pointer. 
Since both objects will reference to the same memory location, then change made by one will reflect 
those change in another object as well. Since we wanted to create a replica of the object, this purpose 
will not be filled by Shallow copy.
https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/
*/