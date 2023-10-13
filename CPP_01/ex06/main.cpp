#include "Harl.hpp"

int	main(int ac, char**av){
	if (ac != 2){
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
		return 0;
	}
	Harl		harl;
	std::string s(av[1]);
	harl.complain(s);
	return (0);
}