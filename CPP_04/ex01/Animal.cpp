#include "Animal.hpp"

Animal::Animal(): _type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    return ;
}

Animal& Animal::operator=(const Animal& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

std::string    Animal::getType()const{
    return _type;
}

void    Animal::makeSound(){
    std::cout << "A sound" << std::endl;
}
