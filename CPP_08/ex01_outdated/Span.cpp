#include "Span.hpp"

Span::Span(unsigned int N): _tab(new int[N]), _size(N), _index(0){}

Span::Span(const Span& other): _tab(0) {
    *this = other;
    return ;
}

Span& Span::operator=(const Span& other) {
    if (this == &other) {
        return *this; 
    }
    if (this->_tab)
        delete []_tab;
    this->_size = other._size;
    this->_index = other._index;
    this->_tab = new int[other._size];
    for (unsigned int i=0; i< other._index; ++i){
        this->_tab[i] = other._tab[i];
    }
    return *this; 
}

Span::~Span(){
    delete []_tab;
    return ;
}

const char* Span::filledException::what()const throw(){
    return ("span is already full");
}
const char* Span::notEnoughNumberException::what()const throw(){
    return ("no span can be found");
}

void Span::addNumber(int number){
    if (this->_size == this->_index)
        throw filledException();
    this->_tab[this->_index] = number;
    ++this->_index;
}

unsigned int    Span::longestSpan()const{
    if (this->_index < 2)
        throw notEnoughNumberException();
    int min = *std::min_element(&this->_tab[0], &this->_tab[this->_index]);
    int max = *std::max_element(&this->_tab[0], &this->_tab[this->_index]);
    return (max - min);
}

unsigned int    Span::shortestSpan()const{
    if (this->_index < 2)
        throw notEnoughNumberException();
    Span copy(*this);
    int min = INT_MAX;
    int tmp;
    std::sort(&copy._tab[0], &copy._tab[copy._index]);
    for (unsigned int i=0; i < this->_index - 1; ++i){
        tmp = copy._tab[i+1] - copy._tab[i];
        if (tmp < min)
            min = tmp;
    }
    return min;
}