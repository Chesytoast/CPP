#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
    return ;
}

Dog::Dog(const Dog& other): Animal(), _brain(NULL){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
    return ;
}

Dog& Dog::operator=(const Dog& other) {
    if (this == &other) {
        return *this; 
    }
    this->_type = other._type;
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
    return ;
}

void    Dog::makeSound(){
    std::cout << "Meow" << std::endl;
}

void    Dog::modifIdeas(int start, int end, std::string idea){
    if (start < 0 || start > 99 || end < 0 || end > 99){
        std::cout << "Try to put ideas inside his brain (0-99)" << std::endl;
        return ;
    }
    while (start <= end){
        this->_brain->setIdea(idea, start);
        ++start;
    }
}

void    Dog::tellIdeas(int nb)const{
    if (nb > 99){
        std::cout << "a " + _type + " has not that much ideas in his brain..." << std::endl;
        return ;
    }
    for (int i = 0; i < nb; ++i){
         std::cout << "[" << i << "] " << this->_brain->getIdea(i) << std::endl;
    }
}