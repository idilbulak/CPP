#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}

// int main( void ) {

//     int valueInt1 = 1;
//     int valuInt2 = 2;
//     char  valueChar1 = 'a'; 
//     char  valueChar2 = 'b';
	
//     std::cout << "before swap:\t" << valueInt1 << " - " << valuInt2 << std::endl;
//     swap(valueInt1, valuInt2); 
//     // swap<int>(valueInt1, valuInt2); 
//     std::cout << "after swap:\t" << valueInt1 << " - " << valuInt2 << std::endl;

//     std::cout << "max of \t" << valueInt1 << " - " << valuInt2 << ": " << max(valueInt1, valuInt2) << std::endl; 
//     // max<int>(valueInt1, valuInt2); 

//     std::cout << "min of \t" << valueInt1 << " - " << valuInt2 << ": " << min(valueInt1, valuInt2) << std::endl; 
//     // max<int>(valueInt1, valuInt2);

//     std::cout << "==========================" << std::endl;
//     std::cout << "before swap:\t" << valueChar1 << " - " << valueChar2 << std::endl;
//     swap(valueChar1, valueChar2); 
//     // swap<char>(valueChar1, valuChar2); 
//     std::cout << "after swap:\t" << valueChar1 << " - " << valueChar2 << std::endl;

//     std::cout << "max of \t" << valueChar1 << " - " << valueChar2 << ": " << max(valueChar1, valueChar2) << std::endl; 
//     // max<char>(valueChar1, valueChar2); 

//     std::cout << "min of \t" << valueChar1 << " - " << valueChar2 << ": " << min(valueChar1, valueChar2) << std::endl; 
//     // max<char>(valueChar1, valueChar2);
// }