#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	protected:
		int	_EnergyPoints;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& scav);
		ScavTrap& operator=(ScavTrap const& scav);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif