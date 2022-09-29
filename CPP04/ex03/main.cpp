#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#include <iostream>

// #include <cstdlib> // check memory

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    // std::cout << std::endl;

    // std::cout << "===== Unequip test =====" << std::endl;

    // IMateriaSource *src1 = new MateriaSource();
    // src1->learnMateria(new Ice());
    // src1->learnMateria(new Cure());
    // ICharacter *kang = new Character("kang");

    // AMateria *temp;
    // temp = src1->createMateria("ice");
    // kang->equip(temp);
    // temp = src1->createMateria("cure");
    // kang->equip(temp);

    // kang->unequip(0);
    // kang->unequip(1);

    // delete src1;
    // delete kang;
    // std::cout << std::endl;


    // std::cout << "===== Deep copy test =====" << std::endl;

    // IMateriaSource *src2 = new MateriaSource();
    // src2->learnMateria(new Ice());
    // src2->learnMateria(new Cure());
    // Character kim("kim");

    // AMateria *temp2;
    // temp2 = src2->createMateria("ice");
    // kim.equip(temp2);
    // temp2 = src2->createMateria("cure");
    // kim.equip(temp2);

    // Character deep1(kim);
    // Character deep2;

    // deep2 = deep1;

    // kim.unequip(0);

    // delete src2;
    // std::cout << std::endl;

    // std::cout << "===== Extra test =====" << std::endl;

    // IMateriaSource *src3 = new MateriaSource();
    // Character kangkim("kangkim");

    // AMateria *temp3;
    // temp3 = src3->createMateria("wrong value");
    // kangkim.equip(temp3);

    // delete src3;
    
    // system("leaks main"); // check memory
    return 0;
}
