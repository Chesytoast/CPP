#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define SMALLARRAYSIZE 2

#include <iostream>
#include <sys/time.h>
#include <vector>
#include <list>
#include <set>
#include <sstream>
#include <iterator>
#include <algorithm>
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
void	insertionSort(std::vector<int>& vector);
void	insertionSort(std::list<int>& vector);
/*___________________________________________________________________________*/

template <typename Container>
void	printcontainer(std::string s, Container container){
	std::cout << s;
	for (typename Container::iterator it = container.begin(); it != container.end(); ++it){
		std::cout << *it <<" ";
	}
	std::cout << std::endl;

}

template <typename Container>
void merge(Container& container, Container& leftcontainer, Container& rightcontainer){
	typename Container::iterator base = container.begin();
	typename Container::iterator left = leftcontainer.begin();
	typename Container::iterator right = rightcontainer.begin();
	while (left != leftcontainer.end() && right != rightcontainer.end()){
		if (*left < *right) {
			*base = *left;
			left++;
		} else {
			*base = *right;
			right++;
		}
		base++;
	}
	while (left != leftcontainer.end()){
		*base = *left;
		left++;
		base++;
	}
	while (right != rightcontainer.end()){
		*base = *right;
		right++;
		base++;
	}
}

template <typename Container>
void sort(Container& container){
	if (container.size() <= SMALLARRAYSIZE){
		insertionSort(container);
		return;
	}
	typename Container::iterator mid = container.begin();
	int half = (container.size() + 1) / 2;
	for (int i = 0; i < half ; i++){
		mid++;
	}
	Container leftcontainer(container.begin(), mid);
	Container rightcontainer(mid , container.end());
	sort(leftcontainer);
	sort(rightcontainer);
	merge(container, leftcontainer, rightcontainer);
}

template <typename Container>
void checkDouble(Container container){
	std::set<int> set(container.begin(), container.end());
	if (set.size() != container.size())
		throw NotUniqueException();
}

template <typename Container>
void	program(int ac, char** av, Container& container, std::string type, bool show){
	int	buff;
	
	for (int i = 1; i < ac; ++i){
		std::stringstream ss(av[i]);
		ss >> buff;
		if (ss.fail())
			throw NotNumericInputException();
		if (buff < 0)
			throw NegativeNumberException();
		ss.clear();
		container.insert(container.end(),buff);
	}
	checkDouble(container);
	timeval start, end;
	gettimeofday(&start, NULL);
	if (show)
		printcontainer("Before:   ", container);
	sort(container);
	if (show)
		printcontainer("After:   ", container);
	gettimeofday(&end, NULL);
	double elapsedtime = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1e6;
	std::cout << std::fixed;
	std::cout << "Time to process a range of " << ac-1 << " elemtents with std::[" 
	<< type << "] : " << elapsedtime << " s" << std::endl;
}

#endif