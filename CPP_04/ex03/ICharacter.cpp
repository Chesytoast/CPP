#include "ICharacter.hpp"

ICharacter::ICharacter(){
    return ;
}

ICharacter::ICharacter(const ICharacter& other) {
    return ;
}

ICharacter& ICharacter::operator=(const ICharacter& other) {
    if (this == &other) {
        return *this; 
    }
}

ICharacter::~ICharacter(){
    return ;
}