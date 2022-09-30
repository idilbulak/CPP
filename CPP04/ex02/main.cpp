/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:54 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:55 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define SIZE 2

int main( void ) {
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_1 ] : Example from subject" << RESET << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i; 
}
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_2 ] : Example that subject requires" << RESET << std::endl;
    Animal  *array[SIZE];
    for (int i = 0; i < SIZE; i++) {
        if (i % 2)
            array[i] = new Dog;
        else
            array[i] = new Cat;
        array[i]->makeSound();
    }
    for (int i = SIZE - 1; i > -1; i--)
        delete array[i];
}
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_3 ] : Deep Copies" << RESET << std::endl;

    const Dog     dog;
    const Cat     cat;
    Dog     dog1(dog);
    Cat     cat1(cat);
}
// {
//     std::cout << std::endl;
//     std::cout << YELLOW << "[ TEST_5 ] : abstract class" << RESET << std::endl;

//     const Animal* meta = new Animal();
//     meta->makeSound();
//     delete meta; 
// }
// while(42){};
}
