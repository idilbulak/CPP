#include "Span.hpp"

Span::Span( const std::size_t& N )
    : _N(N) {
        if (_N == 0)
            throw Span::NoElementException();
        _v.reserve(N);
}

Span::Span( const Span& span ) {
        *this = span;
}

Span &Span::operator=( const Span& span ) {
    if (this == &span)
        return *this;
    _N = span._N;
    _v.assign((span._v).begin(), (span._v).end());
    return *this;
}

Span::~Span( void ) {}

void Span::addNumber( int n ) {
    if (_v.size() < _N)
        _v.push_back(n);
    else
        throw NoSpaceException();
}

void Span::addNumberRange( int first, int last ) {
    if (static_cast<std::size_t>(std::abs(last - first)) > _N) {
        std::cout << "Wrong Range" << std::endl;
        return ;
    }
    else if (first >= last)
        throw std::runtime_error("Error");
    for (; first != last; first++)
        _v.push_back(first);
}

int Span::shortestSpan( void ) {
    if (_v.size() < 2)
        throw NoElementException();
    Span tmp = *this;
    std::sort(tmp._v.begin(), tmp._v.end());
    std::adjacent_difference(tmp._v.begin(), tmp._v.end(), tmp._v.begin());
    std::size_t shortestspan = std::abs(*std::min_element(++tmp._v.begin(), tmp._v.end()));
    return shortestspan;
}

int Span::longestSpan( void ) {
    if (_v.size() < 2)
        throw NoElementException();
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    int longestspan = tmp.at(0) - tmp.at(tmp.size() - 1);
    return std::abs(longestspan);
}
