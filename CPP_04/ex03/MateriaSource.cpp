#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    _inventory[0] = NULL;
    _inventory[1] = NULL;
    _inventory[2] = NULL;
    _inventory[3] = NULL;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& other): IMateriaSource() {
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
     return *this;
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

