#include "Bureaucrat.hpp"

int main(){
	
	try {
		Bureaucrat const bob("Bob", 10);
		Bureaucrat const dan("Dan", 10);
		Bureaucrat const luc("Luc", 151);
		Bureaucrat const tib("Tib", 10);
	
		std::cout << bob << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}