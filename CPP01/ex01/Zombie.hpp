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
#include <sstream>
#include <string>

class Zombie {

public:
	
	int	foo;

	Zombie( );
	Zombie( const std::string name );
	~Zombie( void );

	void	announce( void );
	void	giveName( const std::string name );

private:

	std::string _name;

};

Zombie*		zombieHorde( int n, const std::string name );


#endif