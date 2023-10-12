#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Cat";
    return ;
}

Cat::Cat(const Cat& other): Animal(){
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
    return ;
}

Cat& Cat::operator=(const Cat& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    this->_brain = other._brain;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
    return ;
}

void    Cat::makeSound(){
    std::cout << "Meow" << std::endl;
}