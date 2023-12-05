#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	Bureaucrat bob("bob", 1);
	ShrubberyCreationForm a("test");
	RobotomyRequestForm	b("rob");
	PresidentialPardonForm  c("Bill");

	// bob.signAForm(a);
	// bob.executeForm(a);
	
	bob.signAForm(b);
	bob.executeForm(b);
	std::cout << std::endl;
	bob.executeForm(b);
	std::cout << std::endl;
	bob.executeForm(b);
	std::cout << std::endl;
	bob.executeForm(b);
	std::cout << std::endl;
	bob.executeForm(b);
	std::cout << std::endl;
	bob.executeForm(b);
	std::cout << std::endl;

	bob.executeForm(b);
	std::cout << std::endl;
	


	
	bob.signAForm(c);
	bob.executeForm(c);
	
	return 0;
}