#include "Data.hpp"

Data::Data():i(42){
    return ;
}

Data::Data(const Data& other) {
	*this = other;
    return ;
}

Data& Data::operator=(const Data& other) {
    if (this == &other) {
        return *this; 
    }
    this->i = other.i;
    return *this; 
}

Data::~Data(){
    return ;
}