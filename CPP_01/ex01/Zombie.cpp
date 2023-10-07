#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "constructor called " << std::endl;
	return ;
}

Zombie::~Zombie(){
	std::cout << "destructor called " << std::endl;
	return ;
}

void	Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}