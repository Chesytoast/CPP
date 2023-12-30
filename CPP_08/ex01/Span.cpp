#include "Span.hpp"

Span::Span():_capacity(0){};

Span::Span(unsigned int n): _capacity(n){}

Span::Span(const Span& other){
    *this = other;
}

Span&   Span::operator=(const Span& other){
    if (this == &other)
        return *this;
    this->_capacity = other._capacity;
    this->_cont = other._cont;
    return *this;
}

Span::~Span(){}

const char* Span::SpanFilledException::what() const throw(){
    return "Span already fill exception";
}

void    Span::addNumber(int number){
    if (this->_capacity == this->_cont.size())
        throw SpanFilledException();
    std::cout << "Number: " << number << " added to the span." << std::endl;
    this->_cont.push_back(number);
}

int Span::shortestSpan(){
    std::vector<int> vectorCopy(this->_cont.begin(), this->_cont.end());
    std::sort(vectorCopy.begin(), vectorCopy.end());
    int minSpan = INT_MAX;
    for (std::vector<int>::iterator it = vectorCopy.begin(); it != vectorCopy.end() - 1; ++it)
        if ((*(it + 1) - *it) < minSpan)
            minSpan = (*(it + 1) - *it);
    return minSpan;
}

int Span::longestSpan(){
    return (*std::max_element(this->_cont.begin(), this->_cont.end()) - *std::min_element(this->_cont.begin(), this->_cont.end()));
}

void    Span::fillSpan(int n, unsigned int nbInt){
    for (unsigned int i =0; i < nbInt; ++i)
        this->addNumber(n);
}