#include "BitcoinExchange.hpp"

std::map<std::string, double>	mapDataBase(std::string filePath){
	std::fstream					csvFile;
	std::string						line;
	std::map<std::string, double>	dataBase;

	csvFile.open(filePath.c_str());
	if (csvFile.fail()){
		throw OpenFileException();
	}
	//getline to skip first line of csv file
	getline(csvFile, line);
	while (getline(csvFile, line)){
		double		exchangeRate;
		size_t coma = line.find(",");
		if (coma != std::string::npos){
			std::string	date = line.substr(0, coma);
			std::string	exchangeRateString = line.substr(coma + 1);
			std::stringstream	ss(exchangeRateString);
			ss >> exchangeRate;
			dataBase.insert(std::pair<std::string, double>(date, exchangeRate));
		}
		else
			std::cerr << "error" << std::endl;
	}
	csvFile.close();
	return dataBase;
}

bool	validDate(int year, int month, int day){
	if (month < 1 || month > 12 || day < 1)
		return false;
	switch (month){
		case 2:
			if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && day == 29)
				return true;
			else if (day > 28)
				return false;
			return true;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30)
				return false;
			return true;
		default:
		if (day > 31)
				return false;
			return true;
	}
}

void	outputLine(std::string line, std::map<std::string, double> database){
	std::stringstream ss(line);
	int year, month, day;
	double amount;
	char a, b, c;
	ss >> year >> a >> month>> b >> day>> c >> amount;
	if (ss.fail()){
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if (a != '-' || b != '-' || c != '|'){
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if (!validDate(year, month, day)){
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if (amount < 0){
		std::cerr << "Error: not a positive number." << std::endl;
		return;
	}
	if (amount > MAXAMOUNT){
		std::cerr << "Error: too large number." << std::endl;
		return;
	}
	//find value in map
	std::string key(line.substr(0, line.find(" ")));
	double value;
	if (database.count(key)) //if the key exist take the value
		value = database[key];
	else { //or find the closest lower key that exist and take its value
		std::map<std::string, double>::iterator lowerBound = database.lower_bound(key);
		if (lowerBound != database.begin())
			lowerBound--;
		value = lowerBound->second;
	}
	std::cout << year << a << month << a << day << " => " << amount << " = "<< value * amount <<std::endl;
}

void	outputResult(char* input, std::map<std::string, double> database){
	std::fstream					inputFile;
	std::string						line;
	
	inputFile.open(input);
	if (inputFile.fail()){
		throw OpenFileException();
	}
	getline(inputFile, line);
	while (getline(inputFile, line)){
		outputLine(line, database);
	}
}