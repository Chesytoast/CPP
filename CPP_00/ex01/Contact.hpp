#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class contact{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		contact();
		~contact();
		bool	setValue();
		void	displaySimple(int i);
		void	displayDetail();
};

#endif