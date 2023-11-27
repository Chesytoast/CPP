#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main(){
	std::vector<int> v;
	
	v.push_back(2);
	v.push_back(0);
	v.push_back(-12);
	v.push_back(34);
	v.push_back(34);
	std::cout << "Vector tests:" << std::endl;
	try {
		std::cout<< *easyfind(v, 34) << std::endl;
		std::cout<< *easyfind(v, 2) << std::endl;
		std::cout<< *easyfind(v, 0) << std::endl;
		std::cout<< *easyfind(v, 10000) << std::endl;
		std::cout<< *easyfind(v, -12) << std::endl;	
	}
	catch (std::exception &e){
		std::cout << e.what() <<std::endl;
	}
	std::cout<<std::endl;
	std::list<int> l;
	
	l.push_back(10);
	l.push_back(2);
	l.push_back(1);
	l.push_back(-9);
	std::cout << "List tests:" << std::endl;
	try {
		std::cout<< *easyfind(l, 10) << std::endl;
		std::cout<< *easyfind(l, -9) << std::endl;
		std::cout<< *easyfind(l, 2) << std::endl;
		std::cout<< *easyfind(l, 10000) << std::endl;
		std::cout<< *easyfind(l, 1) << std::endl;	
	}
	catch (std::exception &e){
		std::cout << e.what() <<std::endl;
	}
	return 0;
}