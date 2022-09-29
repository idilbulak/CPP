#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public:
        MateriaSource( void );
        ~MateriaSource ( void );

        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria( std::string const& type);

    private:
        AMateria* _create[4];
        AMateria* _learn[4];
        int _createCount;
        int _learnCount;
        // MateriaSource ( const MateriaSource& MateriaSource );
        // MateriaSource &operator=( const MateriaSource& MateriaSource );
};

#endif
