#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap Default constructor called." << std::endl;
	this->_AttackDamage = 20;
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_name = name;
	this->_AttackDamage = 20;
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	std::cout << "ScavTrap Assignement constructor called, ScavTrap [" << _name << "] has been created."<< std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& scav): ClapTrap(){
	std::cout << "Copy constructor called, ScavTrap [" << _name << "] has been created."<< std::endl;
	*this = scav;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scav){
	if (this != &scav){
		this->_name = scav._name;
		this->_EnergyPoints = scav._EnergyPoints;
		this->_AttackDamage = scav._AttackDamage;
		this->_HitPoints = scav._HitPoints;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void	ScavTrap::guardGate(){
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (_HitPoints <= 0){
			std::cout << "[Scav] " + _name << " is dead" << std::endl;
			return ;
	}
	if (_EnergyPoints <= 0){
		std::cout <<"[Scav] " +  _name << " has " << _EnergyPoints << "energy points making it unable to attack" << std::endl;
		return ;
	}
	--this->_EnergyPoints;
	std::cout <<"[Scav] " +  _name <<" attacks " << target << ", causing "
	<< _AttackDamage << " points of damage!" << std::endl;
}
