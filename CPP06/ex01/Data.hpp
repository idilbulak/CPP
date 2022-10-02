#ifndef DATA_HPP
# define DATA_HPP

#define CYAN	"\033[36m"
#define RESET	"\033[0m"

#include <iostream>
#include <exception>

class Data {

    public:
        Data( int n );
        Data ( const Data& data );
        Data &operator=( const Data& data );
        virtual ~Data ( void );

        int getInt( void ) const ;

    private:
        const int _n;

};

std::ostream &operator<<(std::ostream &os, const Data &data);

#endif
