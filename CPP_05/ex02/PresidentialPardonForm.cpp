#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential pardon", 25, 5){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential pardon", 25, 5), _target(target){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm("Presidential pardon", 25, 5){
    *this = other;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this == &other) {
        return *this; 
    }
	this->_target =  other._target;
    return *this; 
}

PresidentialPardonForm::~PresidentialPardonForm(){
    return ;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    AForm::execute(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblerox." << std::endl;
}