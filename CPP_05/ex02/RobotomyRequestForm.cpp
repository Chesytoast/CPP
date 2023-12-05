#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 72, 45){
	std::srand(std::time(0));
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", 72, 45), _target(target){
    std::srand(std::time(0));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm("Robotomy", 72, 45){
    *this = other;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this == &other) {
        return *this; 
    }
	this->_target =  other._target;
    return *this; 
}

RobotomyRequestForm::~RobotomyRequestForm(){
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
   AForm::execute(executor);
   
   int i = rand() % 2;
   switch (i)
   {
   case 0:
        std::cout << this->_target << " has been robotomized" << std::endl;
    break;
   case 1:
        std::cout << this->_target << " robotomy failed" << std::endl;
    break;
   default:
    break;
   }
}