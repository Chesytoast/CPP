#include "Brain.hpp"

Brain::Brain(){
    return ;
}

Brain::Brain(const Brain& other) {
    *this = other;
    return ;
}

Brain& Brain::operator=(const Brain& other) {
    if (this == &other) {
        return *this; 
    }
    for(int i = 0; i < 100; ++i)
        this->_ideas[i] = other._ideas[i];
    return *this; 
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

void    Brain::setIdea(std::string idea, int i){
    if (i < 0 || i > 99){
        std::cout << "[" << i << "] is outside the 0-99 index for ideas" << std::endl;
        return ;
    }
    this->_ideas[i] = idea;
}


std::string Brain::getIdea(int i)const{
    if (i < 0 || i > 99){
        std::cout << "[" << i << "] is outside the 0-99 index for ideas";
        return "";
    }
    return this->_ideas[i];
}