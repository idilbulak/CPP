#ifndef INTERN_HPP
# define INTERN_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Intern {

    public:
        Intern( void );
        Intern ( const Intern& intern );
        Intern &operator=( const Intern& intern );
        virtual ~Intern ( void );

        Form *makeForm( const std::string& name, const std::string& target);

        class FormDoesNotExistException : public std::exception {
            public:
                virtual const char *what() const throw(){
                    return "FormDoesNotExist!";
                }
        };
};

#endif

