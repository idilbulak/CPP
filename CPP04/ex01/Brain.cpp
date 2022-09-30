/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:00 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:01 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
		std::cout << PURPLE << "[ Brain ] " << "Default constructor called" << RESET << std::endl;
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = "An idea";
}

Brain::Brain( const Brain& brain) {
	std::cout << PURPLE << "[ Brain ] "  << "Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain.getIdeas(i);
}

Brain &Brain::operator=(const Brain& brain) {
    for (int i = 0; i < 100; i++)
	    this->_ideas[i] = brain.getIdeas(i);
	return *this;
}

Brain::~Brain( void ) {
	std::cout << PURPLE << "[ Brain ] " << "Destructor called" << RESET << std::endl;
}

const std::string& Brain::getIdeas(int i) const {
    return _ideas[i];
}