#ifndef THIS_HPP
# define THIS_HPP

class Sample {

public:
	
	int	foo;

	Sample( void );
	~Sample( void );

	void	bar( void );

};


#endif

/*
this: The compiler supplies an implicit pointer along with the names of 
the functions as ‘this’. The ‘this’ pointer is passed as a hidden argument 
to all nonstatic member function calls and is available as a local variable
within the body of all nonstatic functions. ‘this’ pointer is not available 
in static member functions as static member functions can be called without 
any object (with class name).
*/