#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class	Harl{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		void	(Harl::*_memPointer[4])();
	
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif