/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:48:07 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:48:08 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAL_HPP
# define AMATERIAL_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public:
        AMateria( void );
        AMateria( std::string const& type );
        virtual ~AMateria ( void );

		std::string const& getType( void ) const;

        virtual AMateria* clone() const = 0;
        virtual void use( ICharacter& target ) = 0;

	protected:
		std::string _type;
        
        AMateria ( const AMateria& amateria );
        AMateria &operator=( const AMateria& amateria );
};

#endif
