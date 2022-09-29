#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource {

    public:
        virtual ~IMateriaSource ( void ) {}
        virtual void learnMateria( AMateria *m ) = 0;
        virtual AMateria* createMateria( std::string const &type) = 0;

    // private:
    //     IMateriaSource( void );
    //     IMateriaSource ( const IMateriaSource& IMateriaSource );
    //     IMateriaSource &operator=( const IMateriaSource& IMateriaSource );
};

#endif
