#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <iterator>
#include <exception>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <array>

class Span {
    public:
        Span( const std::size_t& N );
        Span ( const Span& span );
        Span &operator=( const Span& span );
        ~Span ( void );

        void addNumber( int n );
        void addNumberRange( int first, int last );
        int shortestSpan( void );
        int longestSpan( void );

        class NoSpaceException : public std::exception {
            public:
                virtual char const *what() const throw(){
                    return "NoSpace!";
                }
        };

        class NoElementException : public std::exception {
            public:
                virtual char const *what() const throw() {
                    return "NoElement";
                }
        };

    private:
        uint _N;
        std::vector<int> _v;
};


#endif
