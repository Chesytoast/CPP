#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(){
    return ;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other) {
    return ;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other) {
    if (this == &other) {
        return *this; 
    }
}

IMateriaSource::~IMateriaSource(){
    return ;
}