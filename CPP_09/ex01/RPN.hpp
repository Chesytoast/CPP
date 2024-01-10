#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <cstdio>
#include <exception>

void	calculationLoop(std::string input, std::stack<int>& stack);

class FormatError: public std::exception{
	public:
		const char* what() const throw(){
			return "Error";
		}
};

class OperationError: public std::exception{
	public:
		const char* what() const throw(){
			return "Error: wrong operation format or there is too many of them";
		}
};

class ZeroDivisionError: public std::exception{
	public:
		const char* what() const throw(){
			return "Error: division by 0";
		}
};

#endif