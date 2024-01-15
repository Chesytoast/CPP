#include "PmergeMe.hpp"


int main(int ac, char **av){
	// timeval start;
	// gettimeofday(&start, NULL);
	
	try {
		program(ac,av);
	} catch (std::exception& e){
		std::cerr<< e.what() << std::endl;
		return 1;
	}
	// timeval end;
	// gettimeofday(&end, NULL);
	// std::cout << "Time to process a range of " << ac - 1 << " elements with std::[..] : "
	// << end.tv_usec - start.tv_usec << " us" << std::endl;
	return 0;
}