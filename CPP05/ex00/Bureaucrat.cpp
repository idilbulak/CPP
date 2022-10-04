/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 09:42:59 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 09:47:36 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) 
    :_name(name) {
        if (grade < 1)
            throw GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
        _grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& bureaucrat ) {
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat& bureaucrat ) {
    const_cast<std::string &>(_name) = bureaucrat._name;
    _grade = bureaucrat._grade;
    return *this;
}

const std::string& Bureaucrat::getName( void ) const {
    return _name;
}

const int& Bureaucrat::getGrade( void ) const {
    return _grade;
}

void Bureaucrat::promotion( void ) {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat got a promotion"<< std::endl;
    _grade--;
}

void Bureaucrat::demotion( void ) {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat got a demotion"<< std::endl;
    _grade++;
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {
    return "GradeTooHigh";
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {
    return "GradeTooLow";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}



