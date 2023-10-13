#include "DiamondTrap.hpp"

int main(){
	DiamondTrap bob("BOB");
	// DiamondTrap jo(bob);
	bob.showAll();
	bob.attack("his ennemy");
	// for (int i =0 ; i < 51; ++i)
	// 	bob.attack("his ennemy");
	bob.whoAmI();
	return 0;
}