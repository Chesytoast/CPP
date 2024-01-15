#include "PmergeMe.hpp"

int main(int ac, char **av){
	try {
		std::vector<int> vector;
		std::list<int> list;
		program(ac, av, list, "list", false);
		program(ac, av, vector, "vector", false);
	} catch (std::exception& e){
		std::cerr<< e.what() << std::endl;
		return 1;
	}
	return 0;
}