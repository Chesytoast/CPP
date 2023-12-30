#include "Span.hpp"

int main(){
	Span sp = Span(5);
	Span scnd(sp);
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(342234);
		sp.addNumber(4331);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span test(10);
	try{
		test.fillSpan(3, 14);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}