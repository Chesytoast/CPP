#include "AMateria.hpp"

AMateria::AMateria(){
    return ;
}

AMateria::AMateria(std::string const& type): _type(type){
    return;
}

AMateria::AMateria(const AMateria& other) {
    *this = other;
    return ;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this == &other) {
        return *this; 
    }
     return *this;
}

AMateria::~AMateria(){
    return ;
}

std::string const& AMateria::getType() const{
    return this->_type;
}