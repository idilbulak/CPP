/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:11:42 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 13:11:43 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base {

	public:
        virtual ~Base ( void );
};

Base* generate( void );
void identify(Base* p);
void identify(Base& p);

#endif
