#include "ScavTrap.hpp"

int main(){
	ScavTrap bob("Bob");
	ScavTrap did("did");
	ScavTrap jo(bob);
	ScavTrap c;

	bob.guardGate();
	bob.attack("a pineaple");
	bob.takeDamage(100);
	c = did;
	bob.beRepaired(20);
	c.beRepaired(12);
	return 0;
}