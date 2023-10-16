#include "DiamondTrap.hpp"

int main(){
	DiamondTrap bob("Didier");
	DiamondTrap jo(bob);
	DiamondTrap ti;
	ti = jo;
	// bob.showAll();
	// bob.attack("his ennemy");
	// // for (int i =0 ; i < 51; ++i)
	// // 	bob.attack("his ennemy");
	bob.whoAmI();
	jo.whoAmI();
	ti.whoAmI();
	return 0;
}