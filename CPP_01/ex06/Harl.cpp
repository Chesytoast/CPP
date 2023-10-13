#include "Harl.hpp"

Harl::Harl() {
	_memPointer[0] = &Harl::debug;
	_memPointer[1] = &Harl::info;
	_memPointer[2] = &Harl::warning;
	_memPointer[3] = &Harl::error;
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
	int	i = 0;
	std::string stringTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while(i < 4){
		if (!stringTab[i].compare(level)){
			break ;
		}
		++i;
	}
	switch (i){
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			(this->*_memPointer[0])();
			std::cout << std::endl;
		case 1:
			std::cout << "[INFO]" << std::endl;
			(this->*_memPointer[0])();
			std::cout << std::endl;
		case 2:
			std::cout << "[WARNING]" << std::endl;
			(this->*_memPointer[2])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ERROR]" << std::endl;
			(this->*_memPointer[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
	}
}