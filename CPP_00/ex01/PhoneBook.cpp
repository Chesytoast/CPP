#include "PhoneBook.hpp"

phoneBook::phoneBook() : _index(0){
	return;
}

phoneBook::~phoneBook(){
	return;
}

void	phoneBook::setIndex(){
	++this->_index;
}

bool	phoneBook::setContact(){
	if(this->_array[this->_index % 8].setValue() == 0)
		return (false);
	this->setIndex();
	std::cout << std::endl;
	return (true);
}

void	phoneBook::getContact(){
	std::string	buff;
	int			index;

	if (this->_index == 0){
		std::cout << "Try to add a contact first. You can add a contact with the [ADD] command" << std::endl;
		return ;
	}
	std::string	border(45, '*');
	std::cout << border << std::endl;
	for (int i = 0; i < this->_index && i < 8; ++i)
		this->_array[i].displaySimple(i);
	std::cout << border << std::endl;
	std::cout << "Enter the index of a contact to see more deatailed information" << std::endl << "\t> ";
	while (1){
		if (!getline(std::cin, buff))
			return ;
		if (isdigit(buff[0]) && buff.size() == 1)
			index = atoi(buff.c_str());
		else
			index = -1;
		if (index >= 0 && index <= 7){
			if (this->_index > index){
		
				this->_array[index].displayDetail();
				break ;
			}
			else
				std::cout << "[" << buff << "] no contact has been had to this index yet" << std::endl << "\t> ";
		}
		else
			std::cout << "[" << buff << "] index is not in range [0,7] or is not a number." << std::endl << "\t> ";
	}
;}