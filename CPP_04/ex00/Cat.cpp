#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    return ;
}

Cat::Cat(const Cat& other): Animal(){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
    return ;
}

Cat& Cat::operator=(const Cat& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

void    Cat::makeSound(){
    std::cout << "Meow" << std::endl;
}