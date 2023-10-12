#include "Ice.hpp"

Ice::Ice(): _type("ice"){
    return ;
}

Ice::Ice(const Ice& other): AMateria(), _type("ice"){
    return ;
}

Ice& Ice::operator=(const Ice& other) {
    if (this == &other) {
        return *this; 
    }
}

Ice::~Ice(){
    return ;
}

AMateria* Ice::clone()const{
    return new Ice(*this);
}

void    Ice::use(ICharacter& target){
   std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}