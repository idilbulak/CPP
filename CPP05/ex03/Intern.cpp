#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void ) {}

Intern::Intern( const Intern& intern ) {
    *this = intern;
}

Intern::~Intern( void ) {}

Intern &Intern::operator=( const Intern& intern ) {
    (void)intern;
    return *this;
}

Form *Intern::makeForm( const std::string& name, const std::string& target) {
    std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    try {
        int i;
        for (i = 0; i < 3; i++)
            if (forms[i] == name) {
                std::cout << "Intern creates " << forms[i] << std::endl;
                break;
            }
        switch (i) {
            case 0 : return new ShrubberyCreationForm(target);
            case 1 : return new RobotomyRequestForm(target);
            case 2 : return new PresidentialPardonForm(target);
        }
        throw FormDoesNotExistException();
    }
    catch(const std::exception& exception) {
        std::cerr << exception.what() << std::endl;
    }
    return NULL;
}




