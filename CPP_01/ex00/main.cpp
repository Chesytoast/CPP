#include "Zombie.hpp"

void	bip(Zombie *momo){
	momo->announce();
}

int	main(){
	Zombie *momo = newZombie("Momo");
	randomChump("Didier");
	bip(momo);
	randomChump("Foo");
	randomChump("foo");
	delete momo;
	return (0);
}