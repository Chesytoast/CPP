#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("golf club");
		bob.attack();
	}
	std::cout<< std::endl;
	{
		Weapon knife = Weapon("kitchen knife");
		HumanB jim("Jim");
		jim.setWeapon(knife);
		jim.attack();
		knife.setType("butcher knife");
		jim.attack();
	}
	std::cout<< std::endl;
	{
		Weapon knife = Weapon("sword");
		HumanB tib("tib", knife);
		tib.attack();
		knife.setType("butcher knife");
		tib.attack();
	}
	std::cout<< std::endl;
	{
		Weapon knife = Weapon("sword");
		HumanB Renauld("Renauld");
		Renauld.attack();
		Renauld.setWeapon(knife);
		Renauld.attack();
		knife.setType("butcher knife");
		Renauld.attack();
	}
return (0);
}