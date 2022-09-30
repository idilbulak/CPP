#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

    public:
        Bureaucrat( void );
        Bureaucrat ( const Bureaucrat& bureaucrat );
        Bureaucrat &operator=( const Bureaucrat& bureaucrat );
        virtual ~Bureaucrat ( void );

        const std::string& getName( void ) const;
        int& getGrade( void ) const;

        int& increment( int _grade )

    private:
        const std::string _name;
        int _grade; //1-150
};

#endif