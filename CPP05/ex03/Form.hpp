/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:34:30 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:34:31 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
        virtual void execute(Bureaucrat const& executor) const = 0;
        void execute_base( Bureaucrat const& executor) const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class SignedException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

    private:
        const std::string _name;
        bool _ifSigned;
        const int _gradeSign;
        const int _gradeExecute;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
