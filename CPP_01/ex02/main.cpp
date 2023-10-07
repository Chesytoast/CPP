#include <iostream>
#include <string>


int	main(){
	std::string	string("HI THIS IS BRAIN");
	std::string	*stringPointer = &string;
	std::string	&stringReference = string;

	std::cout << "Address of the string: " << &string << std::endl;
	std::cout << "Address of the pointer: " << &stringPointer << std::endl;
	std::cout << "Address of the reference: " << &stringReference << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the string: " << string << std::endl;
	std::cout << "Value pointed to by pointer: " << *stringPointer << std::endl;
	std::cout << "Value pointed to by reference: " << stringReference << std::endl;
}