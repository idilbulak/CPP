#include "Cure.hpp"

Cure::Cure( void )
    : AMateria("cure") {
		// std::cout << GREEN << "[ Cure ] " << "Default constructor called" << RESET << std::endl;
}

// Cure::Cure( const Cure& cure) {
// 	std::cout << GREEN << "[ Cure ] " << "Copy constructor called" << RESET << std::endl;
// 	*this = cure;
// }

// Cure &Cure::operator=(const Cure& cure) {
// 	this->_type = cure._type;
// 	return *this;
// }

Cure::~Cure( void ) {
	// std::cout << GREEN << "[ Cure ] " << "Destructor called" << RESET << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
