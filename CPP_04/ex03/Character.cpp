#include "Character.hpp"

Character::Character(): _name("Default"){
    _inventory[0] = nullptr;
    _inventory[1] = nullptr;
    _inventory[2] = nullptr;
    _inventory[3] = nullptr;
    return ;
}

Character::Character(std::string name): _name(name){
    _inventory[0] = nullptr;
    _inventory[1] = nullptr;
    _inventory[2] = nullptr;
    _inventory[3] = nullptr;
    return ;
}

Character::Character(const Character& other) {
    *this = other;
    return ;
}

Character& Character::operator=(const Character& other) {
    if (this == &other) {
        return *this; 
    }
    this->_name = other._name;
    for (int i = 0; i < 4; ++i){
        if (this->_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = other._inventory[i]->clone();
    }
}

Character::~Character(){
    for (int i = 0; i < 4; ++i){
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    return ;
}

std::string const& Character::getName()const{
    return _name;
}

void    Character::equip(AMateria* m){
    for (int i = 0; i < 4; ++i){
        if (!this->_inventory[i])
            this->_inventory[i] = m->clone();
    }
}

//memory leaks check beforehand
void    Character::unequip(int idx){
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = nullptr;
}

void    Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4)
        this->_inventory[idx]->use(target);
}