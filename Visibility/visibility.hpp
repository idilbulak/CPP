#ifndef VISIBILITY_HPP
# define VISIBILITY_HPP

class Sample {

public:
	
	int	publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;

private:

    int _privateFoo;

    void    _privateBar( void ) const;

};


#endif

// for private class try t use '_''

/* there are three access specifiers:
    public - members are accessible from outside the class
    private - members cannot be accessed (or viewed) from outside 
    the class.
    protected - members cannot be accessed from outside the class,
    however, they can be accessed in inherited classes.
*/

