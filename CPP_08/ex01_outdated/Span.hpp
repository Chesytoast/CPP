#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm>
#include <climits>

class Span {
    private:
        Span();
        int *_tab;
        unsigned int _size;
        unsigned int _index;

    public:
        Span(unsigned int N);
        Span(Span const& other); 
        Span& operator=(Span const& other);
        ~Span();

        class filledException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class notEnoughNumberException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
        void    addNumber(int number);
        unsigned int shortestSpan()const;
        unsigned int longestSpan()const;
};

#endif
