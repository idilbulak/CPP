#include <iostream>
#include <string>

class Student {

	public:

		Student( ) : _login( "Idefault" ) {

			std::cout << "Student " << this->_login << " is born" << std::endl; 
		}
		~Student( void ) {

			std::cout << "Student "<< this->_login << " died" << std::endl; 
		}

	private:

		std::string	_login;
};

int	main( void ) {

	Student*	students = new Student[42];

	// do some stuf in here

	delete [] students; //students are destroyed.

	return 0;  
}