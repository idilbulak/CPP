#ifndef NON_MEMBER_HPP
# define NON_MEMBER_HPP

class Sample {

public:

	Sample( void );
	~Sample( void );

	static int	getNbInst( void );

private:

    static int  _nbInst;
    
};


#endif

/* When static keyword is used, variable or data 
members or functions can not be modified again. It 
is allocated for the lifetime of program. Static
functions can be called directly by using class name.
Static variables are initialized only once. */