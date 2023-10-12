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
    return ;
}