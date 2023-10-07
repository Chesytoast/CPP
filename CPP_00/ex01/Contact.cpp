#include "Contact.hpp"

contact::contact(){
	return;
}

contact::~contact(){
	return;
}

bool	contact::setValue(){
	while (1){
		std::cout << "\tEnter first name : ";
		if (!getline(std::cin, this->_firstName))
			return (false) ;
		if (this->_firstName.size() >= 1)
			break ;
	}
	while (1){
		std::cout << "\tEnter last name : ";
		if (!getline(std::cin, this->_lastName))
			return (false) ;
		if (this->_lastName.size() >= 1)
			break ;
	}
	while (1){
		std::cout << "\tEnter nickname : ";
		if (!getline(std::cin, this->_nickName))
			return (false) ;
		if (this->_nickName.size() >= 1)
			break ;
	}
	while (1){
		std::cout << "\tEnter phone number : ";
		if (!getline(std::cin, this->_phoneNumber))
			return (false) ;
		if (this->_phoneNumber.size() >= 1)
			break ;
	}
	while (1){
		std::cout << "\tEnter darkest secret : ";
		if (!getline(std::cin, this->_darkestSecret))
			return (false) ;
		if (this->_darkestSecret.size() >= 1)
			break ;
	}
	return (true);
}

static	void	displayString(std::string s){
	if (s.size() >= 10){
		std::cout << s.substr(0, 9);
		std::cout << ".";
	}
	else{
		std::string space(10 - s.size(), ' ');
		std::cout << space;
		std::cout << s;
	}
}

void	contact::displaySimple(int i){
	std::cout << "|" << "         " << i << "|";
	displayString(this->_firstName);
	std::cout<< "|";
	displayString(this->_lastName);
	std::cout<< "|";
	displayString(this->_nickName);
	std::cout<< "|" << std::endl;
}

void	contact::displayDetail(){
	std::cout << "\t\tContact information" << std::endl;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nick name: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}