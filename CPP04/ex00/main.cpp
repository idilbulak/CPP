/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:45:38 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:45:39 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {
    {
        std::cout << std::endl;
        std::cout << YELLOW << "[ TEST_1 ] : Animal(base class)" << RESET << std::endl;
        std::cout << std::endl;
        std::cout << GREY << "Animal constructor: " << RESET << std::endl;
        const Animal* meta = new Animal();
        std::cout << GREY << "getType function: " << RESET << std::endl;
        std::cout << GREEN << meta->getType() << GREY << "(should be empty)" << RESET << std::endl;
        std::cout << GREY << "makeSound function: " << RESET << std::endl;
        meta->makeSound();
        std::cout << GREY << "Animal destructor:" << RESET << std::endl;
        delete meta;
    }
    {
        std::cout << std::endl;
        std::cout << YELLOW << "[ TEST_2 ] : Cat(derived class)" << RESET << std::endl;
        std::cout << std::endl;
        std::cout << GREY << "Cat constructor:" << RESET << std::endl;
        const Cat* i = new Cat();
        std::cout << GREY << "getType function:" << RESET << std::endl;
        std::cout << CYAN << i->getType() << GREY << " (should be Cat)" << RESET << std::endl;
        std::cout << GREY << "makeSound function:" << RESET << std::endl;
        i->makeSound();
        std::cout << GREY << "Cat destructor:" << RESET << std::endl;
        delete i;
    }
    {
        std::cout << std::endl;
        std::cout << YELLOW << "[ TEST_3 ] : Dog(derived class)" << RESET << std::endl;
        std::cout << std::endl;
        std::cout << GREY << "Dog constructor:" << RESET << std::endl;
        const Dog* j = new Dog();
        std::cout << GREY << "getType function:" << RESET << std::endl;
        std::cout << RED << j->getType() << GREY << " (should be Dog)" << RESET << std::endl;
        std::cout << GREY << "makeSound function:" << RESET << std::endl;
        j->makeSound();
        std::cout << GREY << "Dog destructor:" << RESET << std::endl;
        delete j;
    }
    {
        std::cout << std::endl;
        std::cout << YELLOW << "[ TEST_4 ] : Animal-Cat-Dog" << std::endl;
        std::cout << std::endl;
        const Animal* meta = new Animal();
        const Animal* i = new Cat();
        const Animal* j = new Dog();
        std::cout << CYAN << i->getType() << GREY << " (should be Cat)" << RESET << std::endl; 
        std::cout << RED << j->getType() << GREY << " (should be Dog)" << RESET << std::endl; 
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
        delete j;
    }
    {
        std::cout << std::endl;
        std::cout << YELLOW << "[ TEST_5 ] : Wrong Animal" << std::endl;
        std::cout << std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << BLUE << i->getType() << GREY << " (should be WrongCat)" << RESET << std::endl;
        std::cout << GREY << "WrongCat sound:" << RESET << std::endl;
        i->makeSound();
        std::cout << GREY << "WrongAnimal sound:" << RESET << std::endl;
        meta->makeSound();
        delete meta;
        delete i;
        std::cout << std::endl;
    }
    // while(42){};
return 0;
}