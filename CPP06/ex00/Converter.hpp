/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:58:47 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/05 09:25:09 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#define CYAN	"\033[36m"
#define RESET	"\033[0m"

#include <iostream>
#include <exception>

class Converter {

    public:
        Converter( void );
        Converter( const std::string& string );
        Converter ( const Converter& converter );
        Converter &operator=( const Converter& converter );
        virtual ~Converter ( void );

        const std::string& getString( void ) const;
        double& getValued( void ) ;
        float& getValuef( void ) ;
        int& getValuei( void ) ;
        int& getType( void ) ;

        void ft_print( void );
        void ft_printInt( void );
        void ft_printFloat( void );
        void ft_printDouble( void );

    private:
        const std::string _string;
        double _valued;
        float _valuef;
        int _valuei;
        int _type;

};

#endif
