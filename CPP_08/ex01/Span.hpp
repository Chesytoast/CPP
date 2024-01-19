#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <climits>

class Span {
    private:
        std::vector<int> _cont;
        unsigned int _capacity;
        Span();
    
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        
        void    addNumber(int number);
        int     shortestSpan();
        int     longestSpan();
        void    fillSpan(int n, unsigned int nbInt);
        
        class SpanFilledException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class notEnoughNumberException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif
