/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:33:32 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:42:34 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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

class Bureaucrat {

    public:
        Bureaucrat( void );
        Bureaucrat( const std::string& name, int grade );
        Bureaucrat ( const Bureaucrat& bureaucrat );
        Bureaucrat &operator=( const Bureaucrat& bureaucrat );
        virtual ~Bureaucrat ( void );

        const std::string& getName( void ) const;
        const int& getGrade( void ) const;

        void promotion( void );
        void demotion( void );
        void signForm(Form& form) const;
        void executeForm(Form& form) const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

    private:
        const std::string _name;
        int _grade; //1-150
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif

/* 
class exception {
public:
  exception () throw();
  exception (const exception&) throw();
  exception& operator= (const exception&) throw();
  virtual ~exception() throw();
  virtual const char* what() const throw();
}

https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm#
https://www.bilgigunlugum.net/prog/cppprog/2cpp_exception
https://www.geeksforgeeks.org/exceptionwhat-in-c-with-examples/
*/