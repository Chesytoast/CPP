#include "AMateria.hpp"

AMateria::AMateria(){
    return ;
}

AMateria::AMateria(std::string const& type): _type(type){
    return;
}

AMateria::AMateria(const AMateria& other): _type(other._type) {
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

AMateria* AMateria::clone()const{
    return new AMateria(*this);
}

std::string const& AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){
    (void)target;
    std::cout << "Je ne devrais pas etre appeler" << std::endl;
    return ;
}