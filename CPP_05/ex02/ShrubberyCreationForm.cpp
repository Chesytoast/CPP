#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 145, 137){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", 145, 137), _target(target){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm("Shrubbery", 145, 137){
    *this = other;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this == &other) {
        return *this; 
    }
	this->_target =  other._target;
    return *this; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    return ;
}

void	ShrubberyCreationForm::action(Bureaucrat const & executor){
	try {
		AForm::execute(executor);
		//action
	}
	catch (std::exception& e){
		std::cout << "Nope";
	}
}