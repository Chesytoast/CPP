#include "PhoneBook.hpp"

int	main(){

	phoneBook	phone;
	std::string		buff;
	
	while (1){
		std::cout << "Type one of the folowing command: ADD SEARCH EXIT" << std::endl;
		std::cout << std::endl << "> ";
		if (!getline(std::cin, buff))
			return (1);
		if (!buff.compare("ADD")){
			if (!phone.setContact())
				return (1);
		}
		else if (!buff.compare("SEARCH")){
			phone.getContact();
		}
		else if (!buff.compare("EXIT")){
			return (0);
		}
		else
			std::cout << "[" + buff + "] is not a valid command" << std::endl;
	}
	std::cout << std::endl;
	return (0);
}