#include "Class.hpp"
#include <ctime>
#include <cstdlib>
#include <exception>

Base::~Base(){}


Base* generate(){
	std::srand(static_cast<unsigned int>(std::time(0)));
	time_t i = rand() % 3;
	switch (i)
	{
	case 0:
		std::cout << "Object of A class generated" << std::endl;
		return new A();
	case 1:
		std::cout << "Object of B class generated" << std::endl;
		return new B();
	case 2:
		std::cout << "Object of C class generated" << std::endl;
		return new C();
	default:
		std::cout << "No object generated" << std::endl;
		return NULL;
	}
}

void	identify(Base* p){
	Base *test;
	test = dynamic_cast<A *>(p);
	if (test){
		std::cout << "Object is of type A" << std::endl;
		return;
	}
	test = dynamic_cast<B *>(p);
	if (test){
		std::cout << "Object is of type B" << std::endl;
		return;
	}
	test = dynamic_cast<C *>(p);
	if (test){
		std::cout << "Object is of type C" << std::endl;
		return;
	}
}

void	identify(Base& p){
	try{
		Base& test = dynamic_cast<A&>(p);
		std::cout << "Object is of type A" << std::endl;
	}
	catch (std::exception &bc){}
	try{
		Base& test = dynamic_cast<B&>(p);
		std::cout << "Object is of type B" << std::endl;
	}
	catch (std::exception &bc){}
	try{
		Base& test = dynamic_cast<C&>(p);
		std::cout << "Object is of type C" << std::endl;
	}
	catch (std::exception &bc){}
}