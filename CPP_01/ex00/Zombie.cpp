#include "Zombie.hpp"

Zombie::Zombie(){
	return ;
}

Zombie::Zombie(std::string name): _name(name){
	std::cout << "constructor called " << this->_name << std::endl;
	return ;
}

Zombie::~Zombie(){
	std::cout << "destructor called " << this->_name << std::endl;
	return ;
}

void	Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}