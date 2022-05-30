#include <iostream>
#include <string>

class Student {

	public:

		Student( std::string login ) : _login( login ) {

			std::cout << "Student " << this->_login << " is born" << std::endl; 
		}
		~Student( void ) {

			std::cout << "Student "<< this->_login << " died" << std::endl; 
		}

	private:

		std::string	_login;
};

int	main( void ) {

	Student		Bob = Student("bfubar"); //allacoting on stack, static
	Student*	Jim = new Student("jfubar"); //allocating on heap, dynamic

	// do some stuf in here

	delete Jim; //jim is destroyed.

	return 0;  //bob is destroyed.
}