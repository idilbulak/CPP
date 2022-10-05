/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:34:53 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/05 09:45:11 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( void ) {
		// std::cout << GREEN << "[ RobotomyRequestForm ] " << "Default constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& form) {
	// std::cout << GREEN << "[ RobotomyRequestForm ] " << "Copy constructor called" << RESET << std::endl;
	*this = form;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& form) {
	const_cast<std::string&>(_target) = form.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	// std::cout << GREEN << "[ RobotomyRequestForm ] " << "Destructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) 
	: Form("RobotomyRequestForm", _signGrade, _executeGrade) {
	const_cast<std::string&>(_target) = target;
	// std::cout << GREEN << "[ RobotomyRequestForm ] " << "Destructor called" << RESET << std::endl;
}

const std::string& RobotomyRequestForm::getTarget( void ) const {
	return _target;
}

void RobotomyRequestForm::execute( Bureaucrat const& executor ) const {
	execute_base(executor);
	std::cout << "*DRILLING NOISE*" << std::endl;
	srand((unsigned int)time(NULL));
    int randombool = rand() % 2;
    if (randombool)
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    else    
        std::cout << "robotomy failed." << std::endl;
}