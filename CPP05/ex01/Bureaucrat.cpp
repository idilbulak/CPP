/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 09:51:16 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 09:51:17 by ibulak        ########   odam.nl         */
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

const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {
    return "GradeTooHigh";
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {
    return "GradeTooLow";
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
    _grade--;
}

void Bureaucrat::demotion( void ) {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm( Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& exception) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << exception.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}



