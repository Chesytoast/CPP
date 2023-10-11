#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap Default constructor called." << std::endl;
	this->_AttackDamage = 30;
	this->_EnergyPoints = 100;
	this->_HitPoints = 100;
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap Assignement constructor called, FragTrap [" << _name << "] has been created."<< std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& scav): ClapTrap(){
	std::cout << "Copy constructor called, FragTrap [" << _name << "] has been created."<< std::endl;
	*this = scav;
	this->_AttackDamage = 30;
	this->_EnergyPoints = 100;
	this->_HitPoints = 100;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const& scav){
	if (this != &scav){
		this->_name = scav._name;
		this->_EnergyPoints = scav._EnergyPoints;
		this->_AttackDamage = scav._AttackDamage;
		this->_HitPoints = scav._HitPoints;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void){
	std::cout << _name << " is asking for a high fives" << std::endl;
}