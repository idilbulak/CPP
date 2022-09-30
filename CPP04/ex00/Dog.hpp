/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:45:35 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:45:36 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:
        Dog( void );
        Dog ( const Dog& dog );
        Dog &operator=( const Dog& dog );
        virtual ~Dog ( void );

        virtual void makeSound( void ) const;
};

#endif