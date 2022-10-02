#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm( void ) {
		// std::cout << GREEN << "[ PresidentialPardonForm ] " << "Default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& form) {
	// std::cout << GREEN << "[ PresidentialPardonForm ] " << "Copy constructor called" << RESET << std::endl;
	*this = form;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& form) {
	const_cast<std::string&>(_target) = form.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	// std::cout << GREEN << "[ PresidentialPardonForm ] " << "Destructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
	: Form("PresidentialPardonForm", _signGrade, _executeGrade) {
	const_cast<std::string&>(_target) = target;
	// std::cout << GREEN << "[ PresidentialPardonForm ] " << "Destructor called" << RESET << std::endl;
}

const std::string& PresidentialPardonForm::getTarget( void ) const {
	return _target;
}

void PresidentialPardonForm::execute( Bureaucrat const& executor ) const {
    execute_base(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}