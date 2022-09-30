/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:50:06 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:50:07 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include "AMateria.hpp"

class Ice : public AMateria {

    public:
        Ice( void );
        ~Ice ( void );

        virtual AMateria* clone() const;
        virtual void use( ICharacter& target );

    private:
        Ice ( const Ice& ice );
        Ice &operator=( const Ice& ice );
};

#endif
