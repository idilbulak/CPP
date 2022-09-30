/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:08 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:09 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
                Cat( void );
                Cat ( const Cat& cat );
                Cat &operator=( const Cat& cat );
                virtual ~Cat ( void );

                virtual void makeSound( void ) const;
                Brain *getBrain( void ) const;
        
        private:
                Brain *_brain;
};

#endif