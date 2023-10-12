#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
     std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

std::string    WrongAnimal::getType()const{
    return _type;
}

void    WrongAnimal::makeSound(){
    std::cout << "A sound" << std::endl;
}
