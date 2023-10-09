#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Nobody"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name) ,_HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Assignement constructor called, ClapTrap [" << _name << "] has been created."<< std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& clap){
	*this = clap;
	std::cout << "Copy constructor called, ClapTrap [" << _name << "] has been created."<< std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& clap){
	this->_name = clap._name;
	this->_HitPoints = clap._HitPoints;
	this->_EnergyPoints = clap._EnergyPoints;
	this->_AttackDamage = clap._AttackDamage;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called, ClapTrap [" << _name << "] has been destroyed."<< std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target){
	if (_EnergyPoints <= 0 && _HitPoints <= 0){
		std::cout << "ClapTrap " << _name << "has " << _EnergyPoints << "energy points and "
		<< _HitPoints << "Hp making it unable to attack" << std::endl;
		return ;
	}
	--this->_EnergyPoints;
	std::cout << "ClapTrap " << _name <<" attacks" << target << ", causing "
	<< _AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->_HitPoints -= amount;
	std::cout << "ClapTrap " << _name <<" receive" << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_EnergyPoints <= 0){
		std::cout << "ClapTrap " << _name << "has " << _EnergyPoints 
		<< "energy points making it unable to attack" << std::endl;
		return ;
	}
	--this->_EnergyPoints;
	std::cout << "ClapTrap " << _name <<" Heal " << amount << "Hp!" << std::endl;
}