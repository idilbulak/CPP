/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:34:50 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:34:51 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( const std::string &target );
        PresidentialPardonForm ( const PresidentialPardonForm& form );
        PresidentialPardonForm &operator=( const PresidentialPardonForm& form );
        virtual ~PresidentialPardonForm ( void );
        
		const std::string& getTarget( void ) const;
        void execute(Bureaucrat const& executor) const;

	private:
		static const int _signGrade = 25;
		static const int _executeGrade = 5;
        const std::string _target;
};

#endif
