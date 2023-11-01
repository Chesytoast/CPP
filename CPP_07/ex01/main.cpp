#include <iostream>
#include "iter.hpp"

void	fadd(int& i){
	++i;
}

void	fsubstract(int& i){
	--i;
}

int main(){
	int tab[] = {1,2,3,4,5,6};
	
	iter(tab, 6, &fadd);
	for (int i =0; i < 6; i++)
		std::cout << tab[i] << std::endl;
	iter(tab, 6, &fsubstract);
	for (int i =0; i < 6; i++)
		std::cout << tab[i] << std::endl;
	return 0;
}