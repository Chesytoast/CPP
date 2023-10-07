#include "Harl.hpp"

int	main(int ac, char**av){
	Harl		harl;
	std::string s(av[1]);
	
	(void)ac;
	harl.complain(s);
	return (0);
}