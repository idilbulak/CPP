/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:45:50 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:45:51 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
                WrongCat( void );
                WrongCat ( const WrongCat& wrongcat );
                WrongCat &operator=( const WrongCat& wrongcat );
                ~WrongCat ( void );

                void makeSound( void ) const;
};

#endif