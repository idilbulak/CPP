#include "DiamondTrap.hpp"

// #include <iostream>

// int main(void) {
//   DiamondTrap robot1("Scav");
//   DiamondTrap robot2("Trap");

//   for (int i = 0; i < 2; i++) {
//     robot1.attack("Trap");
//   }
//   robot1.attack("Trap");

//   for (int i = 0; i < 2; i++) {
//     robot2.takeDamage(1);
//     robot2.beRepaired(1);
//   }
//   robot2.beRepaired(1);

//   robot1.whoAmI();
// }

int main(int argc, char **argv) {
  (void)argv;
  if (argc != 1)
    exit(EXIT_FAILURE);
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Default constructor & Destructor ]" << RESET << std::endl;
  ClapTrap robot;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Default constructor & Destructor ]" << RESET << std::endl;
  ScavTrap robot;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_FragTrap : Default constructor & Destructor ]" << RESET << std::endl;
  FragTrap robot;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_DiamondTrap : Default constructor & Destructor ]" << RESET << std::endl;
  DiamondTrap robot;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_DiamondTrap : Name constructor & Destructor ]" << std::endl;
  DiamondTrap robot("Diamond");
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_DiamondTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  DiamondTrap robot1;
  DiamondTrap robot(robot1);
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  robot1.attack("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  robot2.takeDamage(0);
  robot2.beRepaired(0);
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_DiamondTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
  DiamondTrap robot1("Diamond");
  DiamondTrap robot2("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  robot1.attack("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  robot2.takeDamage(0);
  robot2.beRepaired(0);
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  robot1.whoAmI();
  robot1.highFivesGuys();
  robot1.guardGate();
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  for (int i = 0; i < 3; i++) {
    robot1.attack("Trap");
    std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
    robot2.takeDamage(5);
    robot2.beRepaired(2);
    std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  }
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_DiamondTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  DiamondTrap robot1("Diamond");
  DiamondTrap robot2("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  for (int i = 0; i < 3; i++) {
    robot1.attack("Trap");
    std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
    robot2.takeDamage(5);
    robot2.beRepaired(2);
    std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
    robot1.whoAmI();
  }
}
  std::cout << std::endl;
}