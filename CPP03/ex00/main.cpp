#include "ClapTrap.hpp"

#include <iostream>

int main(void) {

  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");

  for (int i = 0; i < 2; i++) {
    robot1.attack("Trap");
    robot2.takeDamage(5);
    robot2.beRepaired(2);
  }

  std::cout << std::endl;
}