#include "Intern.hpp"

Intern::Intern(){
    return ;
}

Intern::Intern(const Intern& other) {
    (void)other;
    return ;
}

Intern& Intern::operator=(const Intern& other) {
    if (this == &other) {
        return *this; 
    }
    (void)other;
    return *this; 
}

Intern::~Intern(){
    return ;
}

const char* Intern::BadFormException::what() const throw(){
    return ("Can not create the form");
}

AForm*  Intern::makeForm(std::string form, std::string target){
    std::string tab[3]= {"presidential pardon", "Shrubbery", "Robotomy"};
    int index = -1;
    for (int i =0; i < 3; ++i){
        if (tab[i] == form){
            index = i;
            break;
        }
    }
    switch (index)
    {
    case 0:
        return new PresidentialPardonForm(target);
    case 1:
        return new ShrubberyCreationForm(target);
    case 2:
        return new RobotomyRequestForm(target);
    default:
        throw Intern::BadFormException();
    }
}