#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

	public:
	
		Contact( void );
		~Contact( void );

		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

		int		ft_getinfo();
		int		ft_getfn();
		int		ft_getln();
		int		ft_getnn();
		int		ft_getph();
		int		ft_getds();

};


#endif