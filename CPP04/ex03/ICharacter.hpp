/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:51:59 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 10:06:04 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter {

    public:
        ICharacter( void ) {}
        virtual ~ICharacter ( void ) {}
        virtual std::string const& getName( void ) const = 0;
        virtual void equip( AMateria* m ) = 0;
        virtual void unequip( int idx) = 0;
        virtual void use( int idx, ICharacter& target ) = 0;

    private:
        ICharacter ( const ICharacter& ICharacter );
        ICharacter &operator=( const ICharacter& ICharacter );
};

#endif
