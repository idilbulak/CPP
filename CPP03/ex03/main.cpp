#include "DiamondTrap.hpp"

#include <iostream>

int main(void) {
  DiamondTrap robot1("Scav");
  DiamondTrap robot2("Trap");

  for (int i = 0; i < 2; i++) {
    robot1.attack("Trap");
  }
  robot1.attack("Trap");

  for (int i = 0; i < 2; i++) {
    robot2.takeDamage(1);
    robot2.beRepaired(1);
  }
  robot2.beRepaired(1);

  robot1.whoAmI();
}