#ifndef STRUCT_HPP
# define STRUCT_HPP

struct Sample1 {

	int	foo;

	Sample1( void );
	~Sample1( void );

	void	bar( void ) const;

};


#endif

/* 
scope of a structure is public by default whereas scope of 
a class is private by default. 
*/