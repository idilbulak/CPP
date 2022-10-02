#include "Span.hpp"

Span::Span( unsigned int& N )
    : _N(N) {
}

Span::Span( const Span& span )
    : _N(span._N) {
}

Span &Span::operator=( const Span& span ) {
    if (this == &span)
        return *this;
    _N = span._N;
    return *this;
}

Span::~Span( void ) {}

void Span::addNumber( int i ) {
    
}
