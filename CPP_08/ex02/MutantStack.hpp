#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
		private:

		public:
			typedef typename std::deque<T>::iterator iterator;
			iterator begin(){return this->c.begin();}
			iterator end(){return this->c.end();}

};

#endif