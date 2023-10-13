#include "DiamondTrap.hpp"

int main(){
	DiamondTrap bob("did");
	DiamondTrap jo(bob);
	DiamondTrap ti;
	bob.showAll();
	bob.attack("his ennemy");
	// for (int i =0 ; i < 51; ++i)
	// 	bob.attack("his ennemy");
	bob.whoAmI();
	jo.whoAmI();
	ti.whoAmI();
	return 0;
}