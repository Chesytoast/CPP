#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdlib.h>

class phoneBook{
	private:
		int		_index;
		contact	_array[8];
		void	setIndex();
	public:
		phoneBook();
		~phoneBook();
		bool	setContact();
		void	getContact();
};

#endif