#include "iter.hpp"

int main( void ) {
	int arrayInt[5];
	char arrayChar[5];

	for(int i=0; i < 5; i++) {
		arrayInt[i] = i;
		arrayChar[i] = i + 'a';
	}

	::iter(arrayInt, 5, ft_print);
	::iter(arrayChar, 5, ft_print);
	
	return 0;
}
