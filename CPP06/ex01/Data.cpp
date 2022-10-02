#include "Data.hpp"

Data::Data( int n ) 
	:_n(n) {}

Data::Data( const Data& data ) :_n(data._n){
	*this = data;
}

Data::~Data( void ) {}

Data &Data::operator=( const Data& data ) {
	const_cast<int &>(_n) = data._n;
	return *this;
}

int Data::getInt( void ) const {
	return _n;
}

std::ostream& operator<<(std::ostream& os, const Data& data) {
    os << "n: " << data.getInt();
    return os;
}