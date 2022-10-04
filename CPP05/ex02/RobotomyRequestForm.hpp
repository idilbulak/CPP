/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:26:35 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:26:36 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( const std::string &target );
        RobotomyRequestForm ( const RobotomyRequestForm& form );
        RobotomyRequestForm &operator=( const RobotomyRequestForm& form );
        virtual ~RobotomyRequestForm ( void );

		const std::string& getTarget( void ) const;
        void execute(Bureaucrat const& exec) const;

	private:
		static const int _signGrade = 72;
		static const int _executeGrade = 45;
        const std::string _target;
};

#endif