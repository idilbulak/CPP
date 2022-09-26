#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl; 
        std::cout << i->getType() << " " << std::endl; 
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
        delete j;
    }
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl; 
        i->makeSound(); //will output the cat sound!
        meta->makeSound();
        delete meta;
        delete i;
    }
return 0;
}