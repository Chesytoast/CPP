#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	FragTrap bob("Bob");
	
	bob.attack("a pineaple");
	bob.takeDamage(100);
	bob.beRepaired(20);
	bob.highFivesGuys();
	
	return 0;
}