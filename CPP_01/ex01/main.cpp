#include "Zombie.hpp"

int	main(){
	int	nbZombie = 10;
	Zombie *thehorde = zombieHorde(nbZombie, "Jo");
	for (int i = 0; i < nbZombie; ++i)
		thehorde[i].announce();
	delete []thehorde;
	return (0);
}