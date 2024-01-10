#include "BitcoinExchange.hpp"

int	main(int ac, char **av){
	if (ac != 2)
		return 1;
	std::map<std::string, double> dataBase;
	try{
		dataBase = mapDataBase("data.csv");
		outputResult(av[1], dataBase);
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}