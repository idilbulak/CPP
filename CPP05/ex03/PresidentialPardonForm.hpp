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

        // virtual void makeSound( void ) const;

		const std::string& getTarget( void ) const;
        void execute(Bureaucrat const& executor) const;

	private:
		static const int _signGrade = 25;
		static const int _executeGrade = 5;
        const std::string _target;
};

#endif
