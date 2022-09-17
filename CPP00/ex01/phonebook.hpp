#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cctype>
#include "contact.hpp"

class PhoneBook {

	public:
	
		PhoneBook( void );
		~PhoneBook( void );

		Contact contacts[8];
		int		index;
		int		emptySpace;

		const static int max = 8;
		const static int column_width = 10;

	int		ft_add( void );
	int		ft_search( void );
	void	ft_printphonebook( void );
	void	ft_printcontact( Contact& contact, int index );
	void	ft_printcontactdetails( Contact& contact, int index );
	void	ft_checkwidth( const std::string& str );
};


#endif