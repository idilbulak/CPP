#include "ScavTrap.hpp"

#include <iostream>

int main(void) {
  // ScavTrap robot;
  // ScavTrap robot1("Scav");
  // ScavTrap robot2;
  // robot2 = robot1;

  ScavTrap robot1("Scav");
  ScavTrap robot2("Trap");

  for (int i = 0; i < 2; i++) {
    robot1.attack("Trap");
  }
  robot1.attack("Trap");

  for (int i = 0; i < 2; i++) {
    robot2.takeDamage(1);
    robot2.beRepaired(1);
  }
  robot2.beRepaired(1);

  robot1.guardGate();
}