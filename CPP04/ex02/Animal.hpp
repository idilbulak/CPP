#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>

class Animal {

	public:
        Animal( void );
        Animal ( const Animal& animal );
        Animal &operator=( const Animal& Animal );
        virtual ~Animal ( void );

        virtual void makeSound( void ) const = 0;
		const std::string& getType( void ) const;

	protected:
		std::string _type;
};

#endif

// https://www.geeksforgeeks.org/virtual-function-cpp/
//pure virtual function (=0)