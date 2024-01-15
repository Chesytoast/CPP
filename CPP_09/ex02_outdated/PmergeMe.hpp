#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define SMALLARRAYSIZE 2

#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <set>
#include <sstream>
#include <iterator>
#include <exception>

class NegativeNumberException: public std::exception {
	public:
		virtual const char* what() const throw(){
			return "Error: negative number";
		}
};

class NotNumericInputException: public std::exception {
	public:
		virtual const char* what() const throw(){
			return "Error: input a non number";
		}
};

class NotUniqueException: public std::exception {
	public:
		virtual const char* what() const throw(){
			return "Error: input is not made of unique number";
		}
};

void	program(int ac, char** av);

#endif