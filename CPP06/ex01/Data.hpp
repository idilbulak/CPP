/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 11:07:01 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/05 09:39:45 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#define CYAN	"\033[36m"
#define RESET	"\033[0m"

#include <iostream>
#include <exception>

struct Data {
   int _n;
};

// class Data {

//     public:
//         Data( int n );
//         Data ( const Data& data );
//         Data &operator=( const Data& data );
//         virtual ~Data ( void );

//         int getInt( void ) const ;

//     private:
//         const int _n;

// };

// std::ostream &operator<<(std::ostream &os, const Data &data);

#endif
