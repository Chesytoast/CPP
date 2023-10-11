#include "ScavTrap.hpp"

int main(){
	ScavTrap bob("Bob");
	bob.guardGate();
	bob.attack("a pineaple");
	bob.takeDamage(100);
	bob.beRepaired(20);
	return 0;
}