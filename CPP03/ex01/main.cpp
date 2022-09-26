#include "ScavTrap.hpp"

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
  std::cout << GREEN << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
  ClapTrap robot("Clap");
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Name constructor & Destructor ]" << std::endl;
  ScavTrap robot("Scav");
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  ClapTrap robot1;
  ClapTrap robot(robot1);
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  ScavTrap robot1;
  ScavTrap robot(robot1);
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
  std::cout << GREEN << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
  ScavTrap robot1("Scav");
  ScavTrap robot2("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  robot1.attack("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  robot2.takeDamage(0);
  robot2.beRepaired(0);
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
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
  std::cout << GREEN << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  ScavTrap robot1("Scav");
  ScavTrap robot2("Trap");
  std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
  std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
  for (int i = 0; i < 3; i++) {
    robot1.attack("Trap");
    std::cout << GREY <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << RESET << std::endl;
    robot2.takeDamage(5);
    robot2.beRepaired(2);
    std::cout << GREY <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << RESET << std::endl;
    robot1.guardGate();
  }
}
  std::cout << std::endl;
}

