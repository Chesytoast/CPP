#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class notFoundException : public std::exception{
	public:
		virtual const char* what() const throw();
};

const char* notFoundException::what() const throw(){
	return ("element not found");
}

template<typename T>
typename T::iterator	easyfind(T& cont, int i){
	typename T::iterator found;
	found = find(cont.begin(), cont.end(), i);
	// test pour comprendre les vectors
	// std::cout<< "contenu de fin: "<< *cont.end() << " size: "<<cont.size() << " capacity: " << cont.capacity() << std::endl;
	if (found == cont.end())
		throw notFoundException();
	return found;
}

#endif