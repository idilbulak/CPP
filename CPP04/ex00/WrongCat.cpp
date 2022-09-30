/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:45:47 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:45:48 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << BLUE << "[ WrongCat ] "  << "Default constructor called" << RESET << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& wrongcat) {
	std::cout << BLUE << "[ WrongCat ] "  << "Copy constructor called" << RESET << std::endl;
	*this = wrongcat;
}

WrongCat &WrongCat::operator=(const WrongCat& wrongcat) {
	this->_type = wrongcat._type;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << BLUE << "[ WrongCat ] "  << "Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound( void ) const {
	std::cout << BLUE << "[ WrongCat ] "  << "Meeeoooowwwww" << RESET << std::endl;
}