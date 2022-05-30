#include <string>
#include <iostream>

class Student {

	public:

		Student( std::string const & login ) : _login( login ) {

		}

		~Student( void ) {

			std::cout << "Student "<< this->_login << " died" << std::endl; 
		}

		std::string&	getLoginRef() {

			return this->_login;
		}

		std::string const &	getLoginRefConst() const {

			return this->_login;
		}

		std::string*	getLoginPtr() {

			return &(this->_login);
		}

		std::string const *	getLoginPtrConst() const {

			return &(this->_login);
		}

	private:

		std::string	_login;
};

int main( void ) {

	Student			Bob = Student("bfubar"); 
	Student const	Jim = Student("jfubar");

	std::cout << Bob.getLoginRefConst() << " " << Jim.getLoginRefConst() << std::endl;
	std::cout << *(Bob.getLoginPtrConst()) << " " << *(Jim.getLoginPtrConst()) << std::endl;
	
	Bob.getLoginRef() = "bobfubar";
	std::cout << Bob.getLoginRefConst() << std::endl;
	
	*(Bob.getLoginPtr()) = "bobbyfubar";
	std::cout << Bob.getLoginRefConst() << std::endl;

	return 0;  //bob is destroyed.
}