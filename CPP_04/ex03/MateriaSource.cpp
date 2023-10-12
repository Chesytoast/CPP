#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    _inventory[0] = nullptr;
    _inventory[1] = nullptr;
    _inventory[2] = nullptr;
    _inventory[3] = nullptr;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    *this = other;
    return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this == &other) {
        return *this; 
    }
    for (int i = 0; i < 4; ++i){
        if (this->_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = other._inventory[i]->clone();
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; ++i){
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    return ;
}

void    MateriaSource::learnMateria(AMateria* m){
     for (int i = 0; i < 4; ++i){
        if (!this->_inventory[i])
            this->_inventory[i] = m->clone();
    }
}

