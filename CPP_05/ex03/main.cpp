#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
	Bureaucrat bob("bob", 1);
	// ShrubberyCreationForm a("test");
	// RobotomyRequestForm	b("rob");
	// PresidentialPardonForm  c("Bill");

	// bob.signAForm(a);
	// bob.executeForm(a);
	
	// bob.signAForm(b);
	// bob.executeForm(b);
	
	// bob.signAForm(c);
	// bob.executeForm(c);
	
	// "Presidential form" "Robotomy" "Shrubbery"
	try{
		Intern kevin;
		AForm* form;
		
		form = kevin.makeForm("Robotomy", "Bill");
		bob.signAForm(*form);
		bob.executeForm(*form);
		
		delete form;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}