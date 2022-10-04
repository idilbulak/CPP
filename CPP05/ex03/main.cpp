/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:42:43 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:45:16 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void ) {
  Intern intern;
  Form *form;

  std::cout << std::boolalpha;

  std::cout << YELLOW << "[ TEST_1 ] : makeShrubberyCreationForm " << RESET << std::endl;
  form = intern.makeForm("ShrubberyCreationForm", "target1");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_2 ] : makeRobotomyRequestForm " << RESET << std::endl;
  form = intern.makeForm("RobotomyRequestForm", "target2");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_3 ] : makePresidentialPardonForm " << RESET << std::endl;
  form = intern.makeForm("PresidentialPardonForm", "target3");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_4 ] : wrongForm " << RESET << std::endl;
  form = intern.makeForm("wrongForm", "target4");
	delete form;
  std::cout << std::endl;
}