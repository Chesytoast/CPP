#include "HumanB.hpp"

HumanB::HumanB(std::string const name): _name(name), _weapon(NULL){
	return ;
}

HumanB::HumanB(std::string const name, Weapon& weapon): _name(name), _weapon(&weapon){
	return ;
}

HumanB::~HumanB(){
	return ;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack() const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
	return ;
}