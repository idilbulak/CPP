#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array {

	public:
        Array( void );
        Array ( unsigned int n );
        Array ( const Array& array );
        Array &operator=( const Array& array );
        T &operator[]( unsigned int i );
        ~Array ( void );

        int size( void ) {return _len;};
        void			display(std::ostream& stream) const;

        class OutOfBoundsException : public std::exception {
            public:
                const char *what() const throw() {
                    return "OutOfBounds!";
                }
        };

	protected:
		T* _array;
        unsigned int _len;
};

template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& cl);

template<typename T>
Array<T>::Array( void ) {
    _array = NULL;
    _len = 0;
    std::cout << "ArrayNull is created." << std::endl;
}

template<typename T>
Array<T>::~Array( void ) {
    if (_len)
        delete[] _array;
    std::cout << "Array is deleted." << std::endl;
}

template<typename T>
Array<T>::Array( unsigned int n ) {
    _array = new T[n];
    _len = n;
    std::cout << "Array[" << n << "] is created" << std::endl;
}

template<typename T>
Array<T>::Array( const Array& array ) {
    _array = new T[array._len];
    _len = array._len;
    for (unsigned int i = 0; i < _len; i++)
        _array[i] = array._array[i];
    std::cout << "CopyArray[" << _len << "] is created" << std::endl;
}

template<typename T>
Array<T>& Array<T>::operator=( const Array& array ) {
    if (this == &array)
        return *this;
    if (_len != 0)
        delete[] _array;
    _array = new T[array._len];
    _len = array._len;
    for (unsigned int i = 0; i < _len; i++)
        _array[i] = array._array[i];
    return *this;
}

template<typename T>
T& Array<T>::operator[]( unsigned int i ) {
    if (_len <= i)
        throw OutOfBoundsException();
    return _array[i];
}

template <typename T>
void Array<T>::display(std::ostream& o) const
{
	unsigned int i;
	if (_len == 0)
		return;
	for (i = 0; i < _len - 1; i++)
		o << _array[i] << " .. ";
	if (i == _len - 1)
		o << _array[i];
}

template <class T>
std::ostream&	operator<<(std::ostream& o, Array<T>const& array) {
	array.display(o);
	return (o);
}

#endif