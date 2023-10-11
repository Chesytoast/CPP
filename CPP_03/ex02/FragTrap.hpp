#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& scav);
		FragTrap& operator=(FragTrap const& scav);
		~FragTrap();
		void highFivesGuys(void);
};

#endif