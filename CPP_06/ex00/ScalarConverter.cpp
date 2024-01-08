#include "ScalarConverter.hpp"
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter(){
    return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	(void)other;
    return ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    if (this == &other) {
        return *this; 
    }
    return *this; 
}

ScalarConverter::~ScalarConverter(){
    return ;
}

int getDataType(std::string input){
    size_t len = input.length();
    switch (len){
        case 0:
            return BADTYPE;
        case 1:
            if (isdigit(input[0]))
                return INT;
            else if (isprint(input[0]))
                return CHAR;
            break;
        default:
            int dot = 0;
            int fl = 0;
            if (input[0] == '.')
                return BADTYPE;
            if (input == "nan" || input == "+inf" || input == "-inf")
                return DOUBLE;
            if (input == "nanf" || input == "+inff" || input == "-inff")
                return FLOAT;
            for (size_t i = 0; i < len; ++i){
                if (input[i] == '.')
                    dot++;
                else if (input[i] == 'f')
                    fl++;
                else if (i==0 && input[i] == '-');
                else if (!isdigit(input[i]))
                    return BADTYPE;
            }
            if (!dot && !fl)
                return INT;
            if (dot == 1){
                if (fl == 1 && input[len - 1] == 'f')
                    return FLOAT;
                else if (!fl)
                    return DOUBLE;
            }
            break;
    }
    return BADTYPE;
}

void    toChar(std::string input){
    char c;
    
    c = input[0];
    std::cout << "char: " << "'"<< c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    
}

void toInt(std::string input){
    int i;
    std::stringstream s(input);
    
    s >> i;
    if (s.fail()){
        std::cout << "int overflow" << std::endl;
        return ;
    }
    if (i > INT_MAX)
        std::cout << "more than max" << std::endl;
    if (i < 256 && i >= 0){
        if (isprint(i))
            std::cout << "char: " << "'"<< static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char: " << "impossible" << std::endl;
    }
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

size_t	givePrecision(std::string input){
	return (input.size() - input.find(".") - 1);
}

void toFloat(std::string input){  
   if (input == "nanf" || input == "+inff" || input == "-inff"){
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << input << std::endl;
        std::cout << "double: " << input. substr(0, input.length() - 1) << std::endl;
        return ;
   }
        float f;
        input.erase(input.end()-1);
		int precision = static_cast<int>(givePrecision(input));
        std::stringstream s(input);
        s >> f;
    if (s.fail()){
        std::cout << "float overflow" << std::endl;
        return ;
    }
    if (f < 256 && f >= 0){
        if (isprint( static_cast<int>(f)))
            std::cout << "char: " << "'"<< static_cast<char>(f) << "'" << std::endl;
        else
            std::cout << "char: " << "impossible" << std::endl;
    }
    else
        std::cout << "char: " << "impossible" << std::endl;
    if (f < static_cast<float>(INT_MAX) && f > static_cast<float>(INT_MIN))
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    else
         std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(precision) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(precision) << static_cast<double>(f) << std::endl;
}

void toDouble(std::string input){
    
   if (input == "nan" || input == "+inf" || input == "-inf"){
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << input + "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    }
    else{
        double d;
		int precision = static_cast<int>(givePrecision(input));
        std::stringstream s(input);
        s >> d;
        if (s.fail()){
            std::cout << "double overflow" << std::endl;
            return;
        }
        if (d < 256 && d >= 0){
            if (isprint(static_cast<int>(d)))
                std::cout << "char: " << "'"<< static_cast<char>(d) << "'" << std::endl;
            else
                std::cout << "char: " << "impossible" << std::endl;
        }
        else
            std::cout << "char: " << "impossible" << std::endl;
        if (d < static_cast<double>(INT_MAX) && d > static_cast<double>(INT_MIN))
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        else
             std::cout << "int: impossible" << std::endl;
        std::cout << "float: " <<  std::fixed << std::setprecision(precision) << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(precision) << d << std::endl;
    }
}

void    ScalarConverter::convert(std::string input){
    int type = getDataType(input);
    switch (type)
    {
    case CHAR:
        toChar(input);
        break;
    case INT:
        toInt(input);
        break;
    case FLOAT: 
        toFloat(input);
        break;
    case DOUBLE:
        toDouble(input);
        break;
    default:
        std::cout << "[" <<input <<"] is not of type char, int, float or double." << std::endl;
        break;
    }
}