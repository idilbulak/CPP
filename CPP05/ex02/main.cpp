#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iomanip>

int main( void ) {
	std::cout << std::boolalpha;
	{
		std::cout << YELLOW << "[ TEST ] : ShrubberyCreationForm" << RESET << std::endl;
		std::cout << std::endl;
		std::cout << RED << "Bureaucrat1 can sign & execute the form." << RESET << std::endl;
		ShrubberyCreationForm sf1("test1");
		try {
			Bureaucrat b("Bureaucrat1", 10);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(sf1);
			std::cout << std::endl;
			std::cout << sf1 << std::endl;
			b.executeForm(sf1);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << RED << "Bureaucrat2 can sign but not execute the form." << RESET << std::endl;
		ShrubberyCreationForm sf2("test2");
		try {
			Bureaucrat b("Bureaucrat2", 145);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(sf2);
			std::cout << std::endl;
			std::cout << sf2 << std::endl;
			b.executeForm(sf2);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << RED << "Bureaucrat3 can not sign & execute the form." << RESET << std::endl;
		ShrubberyCreationForm sf3("test3");
		try {
			Bureaucrat b("Bureaucrat3", 150);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(sf3);
			std::cout << std::endl;
			std::cout << sf3 << std::endl;
			b.executeForm(sf3);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << YELLOW << "[ TEST ] : RobotomyRequestForm" << RESET << std::endl;
		std::cout << std::endl;
		std::cout << RED << "Bureaucrat1 can sign & execute the form." << RESET << std::endl;
		RobotomyRequestForm rf1("test1");
		try {
			Bureaucrat b("Bureaucrat1", 10);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(rf1);
			std::cout << std::endl;
			std::cout << rf1 << std::endl;
			b.executeForm(rf1);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << RED << "Bureaucrat2 can sign but not execute the form." << RESET << std::endl;
		RobotomyRequestForm rf2("test2");
		try {
			Bureaucrat b("Bureaucrat2", 50);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(rf2);
			std::cout << std::endl;
			std::cout << rf2 << std::endl;
			b.executeForm(rf2);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << RED << "Bureaucrat3 can not sign & execute the form." << RESET << std::endl;
		RobotomyRequestForm rf3("test3");
		try {
			Bureaucrat b("Bureaucrat3", 100);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(rf3);
			std::cout << std::endl;
			std::cout << rf3 << std::endl;
			b.executeForm(rf3);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << YELLOW << "[ TEST ] : PresidentialPardonForm" << RESET << std::endl;
		std::cout << std::endl;
		std::cout << RED << "Bureaucrat1 can sign & execute the form." << RESET << std::endl;
		PresidentialPardonForm pf1("test1");
		try {
			Bureaucrat b("Bureaucrat1", 4);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(pf1);
			std::cout << std::endl;
			std::cout << pf1 << std::endl;
			b.executeForm(pf1);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << RED << "Bureaucrat2 can sign but not execute the form." << RESET << std::endl;
		PresidentialPardonForm pf2("test2");
		try {
			Bureaucrat b("Bureaucrat2", 20);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(pf2);
			std::cout << std::endl;
			std::cout << pf2 << std::endl;
			b.executeForm(pf2);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << RED << "Bureaucrat3 can not sign & execute the form." << RESET << std::endl;
		PresidentialPardonForm pf3("test3");
		try {
			Bureaucrat b("Bureaucrat3", 100);
			std::cout << b << std::endl;
			std::cout << std::endl;
			b.signForm(pf3);
			std::cout << std::endl;
			std::cout << pf3 << std::endl;
			b.executeForm(pf3);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
}