/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 09:43:05 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 09:48:51 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_1 ] : Promotion (2 >> 1) " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat", 2);
        std::cout << b << std::endl;
        b.promotion();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_2 ] : Promotion (1 >> ?) " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat", 1);
        std::cout << b << std::endl;
        b.promotion();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_3 ] : Demotion (1 >> 2) " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat", 1);
        std::cout << b << std::endl;
        b.demotion();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_4 ] : Demotion (150 >> ?) " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat", 150);
        std::cout << b << std::endl;
        b.demotion();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_5 ] : Starting with a TooHighGrade (0 >> ?) " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat", 0);
        std::cout << b << std::endl;
        b.promotion();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_6 ] : Starting with a TooLowGrade (151 >> ?) " << RESET << std::endl;
    try {
        Bureaucrat b("Bureaucrat", 151);
        std::cout << b << std::endl;
        b.demotion();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
std::cout << std::endl;
// while(42){};
}