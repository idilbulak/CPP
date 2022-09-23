#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define GREEN	"\033[32m"
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[0;33m"
#define VIOLET	"\033[1;35m"
#define WHITE	"\033[1;37m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>

class Zombie {

	public:

		Zombie( const std::string name );
		~Zombie( void );

		void	announce( void );

	private:

		std::string _name;
};

Zombie* newZombie( const std::string &name );
void	randomChump( const std::string &name );


#endif
