#include "ClapTrap.hpp"

int main(){
	ClapTrap a;
	ClapTrap bob("Bob");
	ClapTrap dan("Dan");
	ClapTrap jo(bob);
	ClapTrap b;
	
	b = dan;
	
	return 0;
}