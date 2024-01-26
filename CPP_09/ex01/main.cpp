#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Error: wrong number of argument: " << ac << " expected 2." << std::endl;
		return 1;
	}
	std::string input(av[1]);
	if(input.empty())
		return 1;
	std::stack<int> stack;
	try{
		calculationLoop(input, stack);
		if (stack.size() > 1)
			std::cout << "Take into consideration that there might be a missing operation." << std::endl;
		std::cout << stack.top() << std::endl;
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}