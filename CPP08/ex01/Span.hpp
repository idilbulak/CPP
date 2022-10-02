#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <iterator>

class Span {
    public:
        Span( unsigned int& N );
        Span ( const Span& span );
        Span &operator=( const Span& span );
        ~Span ( void );

        void addNumber( int i );

    private:
        unsigned int _N;
};


#endif
