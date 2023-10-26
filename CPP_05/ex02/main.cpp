#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	Bureaucrat bob("bob", 1);
	ShrubberyCreationForm a("test");

	// bob.signAForm(a);
	bob.executeForm(a);
	return 0;
}