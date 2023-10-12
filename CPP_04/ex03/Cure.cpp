#include "Cure.hpp"

Cure::Cure(): _type("cure"){
    return ;
}

Cure::Cure(const Cure& other): AMateria(), _type("cure"){
    return ;
}

Cure& Cure::operator=(const Cure& other) {
    if (this == &other) {
        return *this; 
    }
}

Cure::~Cure(){
    return ;
}

AMateria* Cure::clone()const{
    return new Cure(*this);
}

void    Cure::use(ICharacter& target){
   std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}