#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	Bureaucrat bob("bob", 1);
	ShrubberyCreationForm a("test");
	RobotomyRequestForm	b("rob");

	// bob.signAForm(a);
	// bob.executeForm(a);
	
	bob.signAForm(b);
	bob.executeForm(b);
	
	return 0;
}