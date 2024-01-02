#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <string>
#include <iostream>

class Test {
    private:
        Test();

    public:
        std::string _str;
        int         _nb;
        Test(std::string str, int nb);
        Test(Test const& other); 
        Test& operator=(Test const& other);
		bool	operator>(const Test& other) const;
		bool	operator<(const Test& other) const;
        ~Test();
};

std::ostream& operator<<(std::ostream& out, const Test& arg);

template < typename T>
T const & max(T const& x, T const& y){
	return (x > y ? x : y);
}

template < typename T>
T const & min(T const& x, T const& y){
	return (x < y ? x : y);
}

template < typename T>
void swap(T& x, T& y){
	T temp(x);
	x = y;
	y = temp;
}

#endif