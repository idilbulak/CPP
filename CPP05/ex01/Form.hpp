#ifndef FORM_HPP
# define FORM_HPP

#define CYAN	"\033[36m"
#define RESET	"\033[0m"

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:
        Form( void );
        Form( const std::string& name, int gradeSigned, int gradeExecute );
        Form ( const Form& form );
        Form &operator=( const Form& form );
        virtual ~Form ( void );

        const std::string& getName( void ) const;
        const bool& getIfSigned( void ) const;
        const int& getGradeSigned( void ) const;
        const int& getGradeExecute( void ) const;

        void beSigned( const Bureaucrat& bureaucrat );

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(){
                    return "Form_GradeTooHigh!";
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw(){
                    return "Form_GradeTooLow!";
                }
        };

    private:
        const std::string _name;
        bool _ifSigned;
        const int _gradeSign;
        const int _gradeExecute;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
