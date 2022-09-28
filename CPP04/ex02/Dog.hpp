#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

        public:
                Dog( void );
                Dog ( const Dog& dog );
                Dog &operator=( const Dog& dog );
                virtual ~Dog ( void );

                virtual void makeSound( void ) const;
                Brain *getBrain( void ) const;
        
        private:
                Brain *_brain;
};

#endif