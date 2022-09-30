/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:36 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:37 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define BLUE 	"\033[34m"
#define PURPLE 	"\033[35m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include <iostream>

class Brain {

	public:
        Brain( void );
        Brain ( const Brain& brain );
        Brain &operator=( const Brain& brain );
        ~Brain ( void );

		const std::string& getIdeas( int i ) const;

	protected:
		std::string _ideas[100];
};

#endif