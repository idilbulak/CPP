#include "FragTrap.hpp"

#include <iostream>

int main(void) {
  {
    FragTrap robot1("Frag");
    FragTrap robot2;

    robot2 = robot1;
  }

  FragTrap robot1("Frag");
  FragTrap robot2("Trap");

  for (int i = 0; i < 2; i++) {
    robot1.attack("Trap");
  }
  robot1.attack("Trap");


  for (int i = 0; i < 2; i++) {
    robot2.takeDamage(1);
    robot2.beRepaired(1);
  }
  robot2.beRepaired(1);
  robot1.highFivesGuys();
}