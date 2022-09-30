/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:45:30 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:45:31 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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