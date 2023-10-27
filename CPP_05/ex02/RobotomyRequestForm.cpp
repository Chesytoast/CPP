#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 72, 45){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", 145, 137), _target(target){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm("Robotomy", 145, 137){
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
   
   std::srand(std::time(0));
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