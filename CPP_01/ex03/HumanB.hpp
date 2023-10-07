#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
	private:
		std::string _name;
		Weapon*	_weapon;

	public:
		HumanB(std::string const name);
		HumanB(std::string const name, Weapon& weapon);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack() const;
};

#endif