#include "Dog.hpp"
#include "Cat.hpp"

int main() {
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
while (1){};
return 0; 
}