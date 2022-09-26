#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

	public:
        Cat( void );
        Cat ( const Cat& cat );
        Cat &operator=( const Cat& cat );
        virtual ~Cat ( void );

        virtual void makeSound( void ) const;
};

#endif