#ifndef HARL_HPP
# define HARL_HPP

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define GREY	"\033[1;30m"
#define VIOLET	"\033[1;35m"
#define WHITE	"\033[1;37m"
#define RESET	"\033[0m"

#include <iostream>

class Harl {

public:
	
	Harl( void );
	~Harl( void );

	void complain( std::string level );

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

};


#endif
