#ifndef CONST_HPP
# define CONST_HPP

class Const {

public:
	
	float const	pi;
	int			qd;

	Const( float const f );
	~Const( void );

	void	bar( void ) const;

};


#endif