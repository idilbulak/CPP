/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 09:52:06 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/30 10:08:56 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#include <iostream>
#include <cstdlib>

int main()
{
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_1 ] : Example from subject" << RESET << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    AMateria* temp;
    temp = src->createMateria("ice");
    me->equip(temp);
    temp = src->createMateria("cure");
    me->equip(temp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    std::cout << std::endl;
}
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_2 ] : UNEQUIP" << RESET << std::endl;
    IMateriaSource *src1 = new MateriaSource();
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    ICharacter *idil = new Character("idil");

    AMateria *temp;
    temp = src1->createMateria("ice");
    idil->equip(temp);
    temp = src1->createMateria("cure");
    idil->equip(temp);

    idil->unequip(0);
    idil->unequip(1);

    delete src1;
    delete idil;
    std::cout << std::endl;
}
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_3 ] : Create wrong value" << RESET << std::endl;
    IMateriaSource *src2 = new MateriaSource();
    Character idil("idil");

    AMateria *temp;
    temp = src2->createMateria("wrong value");
    idil.equip(temp);

    delete src2;
    std::cout << std::endl;
}
{
    std::cout << std::endl;
    std::cout << YELLOW << "[ TEST_4 ] : Creating more" << RESET << std::endl;
    IMateriaSource *src3 = new MateriaSource();
    src3->learnMateria(new Ice());
    src3->learnMateria(new Ice());
    src3->learnMateria(new Ice());
    src3->learnMateria(new Cure());
    src3->learnMateria(new Cure());
    Character idil("idil");

    AMateria *temp;
    temp = src3->createMateria("ice");
    idil.equip(temp);
    temp = src3->createMateria("ice");
    idil.equip(temp);
    temp = src3->createMateria("ice");
    idil.equip(temp);
    temp = src3->createMateria("cure");
    idil.equip(temp);
    temp = src3->createMateria("cure");
    idil.equip(temp);

    delete src3;
    std::cout << std::endl;
}
    // system("leaks interface_recap");
    return 0;
}
