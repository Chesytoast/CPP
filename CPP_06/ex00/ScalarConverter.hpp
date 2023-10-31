#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

enum {
    BADTYPE = -1,
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const& other); 

    public:
        ScalarConverter& operator=(ScalarConverter const& other);
        ~ScalarConverter();
        
        static void convert(std::string s);

};

#endif
