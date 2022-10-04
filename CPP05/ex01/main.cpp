/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:07:26 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 10:08:10 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_1 ] " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat1", 1);
        Form f("Form1", 10, 120);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_2 ] " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat2", 10);
        Form f("Form2", 10, 120);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_3 ] " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat3", 11);
        Form f("Form3", 10, 120);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_4 ] " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat4", 11);
        Form f("Form4", 12, 9);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_5 ] " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat5", 1);
        Form f("Form5", 10, 155);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_6 ]" << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat6", 1);
        Form f("Form6", 0, 120);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
std::cout << std::endl;
// while(42){};
}