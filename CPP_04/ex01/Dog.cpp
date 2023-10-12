#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
    return ;
}

Dog::Dog(const Dog& other): Animal(){
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
    return ;
}

Dog& Dog::operator=(const Dog& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
    return ;
}
void    Dog::makeSound(){
    std::cout << "Woof" << std::endl;
}