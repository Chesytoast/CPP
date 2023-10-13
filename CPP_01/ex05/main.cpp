#include "Harl.hpp"

int	main(int ac, char**av){
	if (ac != 2)
		return 1;
	Harl		harl;
	std::string s(av[1]);
	
	(void)ac;
	harl.complain(s);
	return (0);
}