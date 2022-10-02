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

        // virtual void makeSound( void ) const;

		const std::string& getTarget( void ) const;
        void execute(Bureaucrat const& exec) const;

	private:
		static const int _signGrade = 145;
		static const int _executeGrade = 137;
        const std::string _target;
};

#endif
