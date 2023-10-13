#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
    return ;
}

Ice::Ice(const Ice& other): AMateria("ice"){
    *this = other;
    return ;
}

Ice& Ice::operator=(const Ice& other) {
    if (this == &other) {
        return *this; 
    }
    return *this;
}

Ice::~Ice(){
    return ;
}

AMateria*   Ice::clone()const{
    return new Ice();
}

void    Ice::use(ICharacter& target){
   std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}