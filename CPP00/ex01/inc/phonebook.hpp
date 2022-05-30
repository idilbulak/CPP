#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook {

	public:
	
		PhoneBook( void );
		~PhoneBook( void );

		Contact contacts[8];
		int		size;

		const static int column_width = 10;
		const static int max_cont = 8;
		int	empty_space;

	bool	add( void );
	void	search( void );
	void	print_search( void );
	void	print_with_width( const std::string& str );
	void	print_contact( const Contact& contact, int index );
};


#endif