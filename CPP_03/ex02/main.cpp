#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	FragTrap bob("Bob");
	FragTrap did("did");
	FragTrap jo(bob);
	FragTrap c;

	bob.highFivesGuys();
	bob.attack("a pineaple");
	bob.takeDamage(100);
	c = did;
	bob.beRepaired(20);
	c.beRepaired(12);
	return 0;
}