#ifndef ACCESSORS_HPP
# define ACCESSORS_HPP

class Sample {

public:

	Sample( void );
	~Sample( void );

	int     getFoo( void ) const;
    void    setFoo( int v );

private:

    int     _foo;
};


#endif