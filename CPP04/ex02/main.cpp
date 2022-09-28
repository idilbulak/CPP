#include "Dog.hpp"
#include "Cat.hpp"

#define SIZE 2

int main() {
 {
        std::cout << std::endl;
        std::cout << YELLOW << "[ TEST_4 ] : Animal-Cat-Dog" << std::endl;
        std::cout << std::endl;
        Animal meta;
        Cat i ;
        Dog j ;
        i.makeSound();
        j.makeSound();
        meta.makeSound();
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
