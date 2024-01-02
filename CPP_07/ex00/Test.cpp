#include "Test.hpp"

Test::Test(){
    return ;
}

Test::Test(std::string str, int nb): _str(str), _nb(nb){
    return;
}

Test::Test(const Test& other) {
    *this = other;
    return;
}

Test& Test::operator=(const Test& other) {
    if (this == &other) {
        return *this; 
    }
    this->_nb = other._nb;
    this->_str = other._str;
    return *this; 
}

Test::~Test(){
    return ;
}

bool	Test::operator<(const Test& other)const{
	return (this->_nb < other._nb);
}

bool	Test::operator>(const Test& other)const{
	return (this->_nb > other._nb);
}

std::ostream& operator<<(std::ostream& out, const Test& arg){
	out << arg._nb;
	return out;
}