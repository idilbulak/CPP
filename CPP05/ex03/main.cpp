#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void ) {
  Intern intern;
  Form *form;

  std::cout << std::boolalpha;

  std::cout << YELLOW << "[ TEST_1 ] : makeShrubberyCreationForm " << RESET << std::endl;
  form = intern.makeForm("ShrubberyCreationForm", "test1");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_2 ] : makeRobotomyRequestForm " << RESET << std::endl;
  form = intern.makeForm("RobotomyRequestForm", "test2");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_3 ] : makePresidentialPardonForm " << RESET << std::endl;
  form = intern.makeForm("PresidentialPardonForm", "test3");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_4 ] : wrongForm " << RESET << std::endl;
  form = intern.makeForm("wrongForm", "test4");
	delete form;
  std::cout << std::endl;
}