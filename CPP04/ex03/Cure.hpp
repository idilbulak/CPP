/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:49:47 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:49:48 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include "AMateria.hpp"

class Cure : public AMateria {

   public:
        Cure( void );
        ~Cure ( void );

        virtual AMateria* clone() const;
        virtual void use( ICharacter& target );

   private:
        Cure ( const Cure& cure );
        Cure &operator=( const Cure& cure );
};

#endif
