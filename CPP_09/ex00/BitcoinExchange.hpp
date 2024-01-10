#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#define MAXAMOUNT 1000

#include <iostream>
#include <map>
#include <string>
#include <exception>
#include <fstream>
#include <sstream>

class OpenFileException: public std::exception{
	virtual const char* what() const throw(){
		return "Issue while opening a file";
	}
};

std::map<std::string, double>	mapDataBase(std::string filePath);
void	outputResult(char* inputFile, std::map<std::string, double> database);

#endif