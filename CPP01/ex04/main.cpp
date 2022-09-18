#include <iostream>
#include <fstream>

void	ft_error( void ) {

		std::cout << "ERROR" << std::endl;
		exit (EXIT_FAILURE);
}

int	main( int argc, char** argv) {

	if ( argc != 4 )
		ft_error();

	(std::string)*argv;
	std::string	fileName = argv[1];
	std::string	s1 = argv[2];
	if (s1.length() == 0)
		ft_error();
	std::string	s2 = argv[3];
	std::string	line;

	std::ifstream	ifs(fileName); //open a file in only read mode.
	if (!ifs.is_open())
		ft_error();

	fileName = fileName + ".replace";
	std::ofstream	ofs(fileName); //open a file in write mode.
	if (!ofs.is_open())
		ft_error();

	while (getline(ifs, line)) {
		size_t	index;
		while ((index = (&line)->find(s1)) != std::string::npos) {
			(&line)->erase(index, s1.length());
			(&line)->insert(index, s2);
		}

		if (!std::cin.eof())
			ofs << line << std::endl;

	}
	ofs.close();
	ifs.close();
}

// ./sed empty.txt Hello Yes

// void open(const char *filename, ios::openmode mode);
// istream& getline (char* s, streamsize n );
// InputIterator find (InputIterator first, InputIterator last, const T& val)
/* std::string::npos
This value, when used as the value for a len (or sublen) parameter in string's
member functions, means "until the end of the string". */
// iterator list_name.erase(iterator first, iterator last)
// vector_name.insert (position, val)
