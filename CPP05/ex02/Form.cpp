/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:25:38 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:25:39 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) 
    :_name(""), _ifSigned(false), _gradeSign(0), _gradeExecute(0) {}

Form::Form( const std::string &name, int gradeSign, int gradeExecute ) 
    :_name(name), _ifSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
        if (_gradeSign < 1 || _gradeExecute < 1)
            throw GradeTooHighException();
        if (_gradeSign > 150 || _gradeExecute > 150)
            throw GradeTooLowException();
}

Form::Form( const Form& form )
    :_name(form.getName()), _ifSigned(false), _gradeSign(form.getGradeSigned()), _gradeExecute(form.getGradeExecute()) {}

Form::~Form( void ) {}

Form &Form::operator=( const Form& form ) {
    const_cast<std::string &>(_name) = form.getName();
    _ifSigned = form.getIfSigned();
    const_cast<int &>(_gradeSign) = form.getGradeSigned();
    const_cast<int &>(_gradeExecute) = form.getGradeExecute();
    return *this;
}

const char *Form::GradeTooHighException::what( void ) const throw() {
    return "Form_GradeTooHigh";
}

const char *Form::GradeTooLowException::what( void ) const throw() {
    return "Form_GradeTooLow";
}

const char *Form::SignedException::what( void ) const throw() {
    return "Form_NotSigned";
}

const std::string& Form::getName( void ) const {
    return _name;
}

const bool& Form::getIfSigned( void ) const {
    return _ifSigned;
}

const int& Form::getGradeSigned( void ) const {
    return _gradeSign;
}

const int& Form::getGradeExecute( void ) const {
    return _gradeExecute;
}

void Form::beSigned( const Bureaucrat& bureaucrat ) {
    if ( bureaucrat.getGrade() > getGradeSigned())
        throw Bureaucrat::GradeTooLowException();
    _ifSigned = true;
}


std::ostream& operator<<(std::ostream& os, const Form& Form) {
    os << "name: " << Form.getName() << std::endl;
    os << "ifSigned: " << Form.getIfSigned() << std::endl;
    os << "gradeSigned: " << Form.getGradeSigned() << std::endl;
    os << "gradeExecute: " << Form.getGradeExecute() << std::endl;
    return os;
}

void Form::execute_base(const Bureaucrat& executor) const {
    if (!getIfSigned())
        throw SignedException();
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
}


