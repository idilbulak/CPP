/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:26:56 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:26:57 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( const std::string &target );
        ShrubberyCreationForm ( const ShrubberyCreationForm& form );
        ShrubberyCreationForm &operator=( const ShrubberyCreationForm& form );
        virtual ~ShrubberyCreationForm ( void );

		const std::string& getTarget( void ) const;
        void execute(Bureaucrat const& exec) const;

	private:
		static const int _signGrade = 145;
		static const int _executeGrade = 137;
        const std::string _target;
};

#endif
