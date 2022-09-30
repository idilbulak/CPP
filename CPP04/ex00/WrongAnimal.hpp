/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:45:44 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:45:45 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define BLUE 	"\033[34m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>

class WrongAnimal {

	public:
        WrongAnimal( void );
        WrongAnimal ( const WrongAnimal& wrongAnimal );
        WrongAnimal &operator=( const WrongAnimal& wrongAnimal );
        ~WrongAnimal ( void );

        void makeSound( void ) const;

		const std::string& getType( void ) const;
	
	protected:
		std::string _type;
};

#endif