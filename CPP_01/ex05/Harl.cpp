#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void	Harl::debug(){
	std::cout << "Debug message" <<std::endl;
}

void	Harl::info(){
	std::cout << "Info message" << std::endl;
}

void	Harl::warning(){
	std::cout << "Warning message" << std::endl;
}

void	Harl::error(){
	std::cout << "Error message" <<std::endl;
}

void	Harl::complain(std::string level){
	std::string stringTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*memberPointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; ++i){
		if (!stringTab[i].compare(level))
			(this->*memberPointer[i])();
	}
}