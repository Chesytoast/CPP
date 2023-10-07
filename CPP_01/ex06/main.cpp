#include "Harl.hpp"

int	main(){
	Harl		harl;
	std::string s("DEBUG");

	std::cout << "Test 1" << std::endl;
	harl.complain(s);
	s.assign("INFO");
	std::cout << std::endl << "Test 2" << std::endl << std::endl;
	harl.complain(s);
	s.assign("ERROR");
	std::cout << std::endl << "Test 3" << std::endl << std::endl;
	harl.complain(s);
	s.assign("WARNING");
	std::cout << std::endl << "Test 4" << std::endl << std::endl;
	harl.complain(s);
	s.assign("anything else");
	std::cout << std::endl << "Test 5" << std::endl << std::endl;
	harl.complain(s);
	s.assign("");
	std::cout << std::endl << "Test 6" << std::endl << std::endl;
	harl.complain(s);
	return (0);
}