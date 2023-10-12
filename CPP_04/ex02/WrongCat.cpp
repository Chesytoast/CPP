#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

void    WrongCat::makeSound(){
    std::cout << "Meow" << std::endl;
}