#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(){
	std::cout << "DiamondTrap Default constructor called." << std::endl;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), _name(name) {
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Assignement constructor called, DiamondTrap [" << _name << "] has been created."<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diam): ClapTrap(), FragTrap(), ScavTrap(){
	*this = diam;
	std::cout << "Copy constructor called, DiamondTrap [" << _name << "] has been created."<< std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& diam){
	if (this != &diam){
		this->_name = diam._name;
		this->_EnergyPoints = diam._EnergyPoints;
		this->_AttackDamage = diam._AttackDamage;
		this->_HitPoints = diam._HitPoints;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void	DiamondTrap::showAll()const{
	std::cout << "name " << _name << std::endl;
	std::cout << "HitPoints " << _HitPoints << std::endl;
	std::cout << "EnergyPoints " << _EnergyPoints << std::endl;
	std::cout << "AttackDamage " << _AttackDamage << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "My name is: " << _name << " my ClapTrap name is: " << ClapTrap::_name << std::endl;
}