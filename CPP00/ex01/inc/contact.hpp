#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

	public:
	
		Contact( void );
		~Contact( void );

		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

		bool	get_details();
		void	print_cont();

	
};


#endif