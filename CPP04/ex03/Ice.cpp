#include "Ice.hpp"

Ice::Ice( void )
    : AMateria("ice") {
		// std::cout << GREEN << "[ Ice ] " << "Default constructor called" << RESET << std::endl;
}

// Ice::Ice( const Ice& ice) {
// 	std::cout << GREEN << "[ Ice ] " << "Copy constructor called" << RESET << std::endl;
// 	*this = ice;
// }

// Ice &Ice::operator=(const Ice& ice) {
// 	this->_type = ice._type;
// 	return *this;
// }

Ice::~Ice( void ) {
	// std::cout << GREEN << "[ Ice ] " << "Destructor called" << RESET << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
