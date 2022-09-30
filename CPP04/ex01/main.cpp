/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:46:17 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 09:46:18 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define SIZE 2

int main() {
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
// while(42){};
}

/*Shallow Copy
1.	When we create a copy of object by copying data of all member variables as it is, then it is called shallow copy 	
2.	A shallow copy of an object copies all of the member field values.	 
3.	In shallow copy, the two objects are not independent	
4.	It also creates a copy of the dynamically allocated objects	
Deep copy
1. When we create an object by copying data of another object along with the values of memory resources that reside outside the object, then it is called a deep copy
2. Deep copy is performed by implementing our own copy constructor.
3. It copies all fields, and makes copies of dynamically allocated memory pointed to by the fields
4. If we do not create the deep copy in a rightful way then the copy will point to the original, with disastrous consequences.*/
