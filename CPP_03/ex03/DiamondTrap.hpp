#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& scav);
		DiamondTrap& operator=(DiamondTrap const& scav);
		~DiamondTrap();
		void whoAmI();
};

#endif