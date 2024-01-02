#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array {
    private:
        unsigned int _size;
        T   *_tab;

    public:
        Array<T>(): _size(0), _tab(NULL){}
        Array(unsigned int n): _size(n), _tab(new T[n]){}
        Array(Array const& other); 
        Array& operator=(Array const& other);
        ~Array(){delete []_tab;}
        unsigned int size()const{return this->_size;}
        class outOfBoundException: public std::exception{
            public:
            virtual const char* what() const throw(){
                return ("index is out of bound");
            }
        };
        T&  operator[](int);
};

template<typename T>
Array<T>::Array(const Array& other): _size(0), _tab(NULL) {
    *this = other;
    return ;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this == &other) {
        return *this; 
    }
    if (this->_tab)
        delete []this->_tab;
    this->_size = other._size;
    this->_tab = new T[this->_size];
    for (unsigned int i =0; i < this->_size; ++i){
        this->_tab[i] = other._tab[i];
    }
    return *this; 
}

template<typename T>
T&  Array<T>::operator[](int index){
    if (index >= static_cast<int>(this->_size) || index < 0)
        throw Array<T>::outOfBoundException();
    return this->_tab[index];
}

#endif
