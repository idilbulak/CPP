#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        MutantStack( void );
        MutantStack ( const MutantStack& mutantStack );
        MutantStack &operator=( const MutantStack& mutantStack );
        virtual ~MutantStack ( void );

        iterator begin( void );
        iterator end( void );

};

template<typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack& mutantstack ) {
    *this = mutantstack;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack& mutantstack ) {
    std::stack<T>::operator=(mutantstack);
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack( void ) {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

#endif
