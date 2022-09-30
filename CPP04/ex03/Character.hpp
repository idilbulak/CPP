/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:49:13 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:50:45 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

#include "ICharacter.hpp"

class Character : public ICharacter {

    public:
        Character( void );
        Character ( const Character& character );
        Character ( const std::string& name );
        Character &operator=( const Character& character );
        virtual ~Character ( void );

        virtual std::string const& getName( void ) const;
        virtual void equip( AMateria *m );
        virtual void unequip( int idx);
        virtual void use( int idx, ICharacter& target );

    private:
        std::string _name;
        AMateria* _inventory[4];
        int _inventoryCount;
};

#endif
