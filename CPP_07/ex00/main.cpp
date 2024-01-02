#include "whatever.hpp"

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




int	main(){
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	//complex type
	std::cout << std::endl << "Testing complex type:" << std::endl;
	Test t1("bip ", 30);
	Test t2("boup ", -4);
	
	std::cout << "t1: " << t1._str << t1._nb <<std::endl;
	std::cout << "t2: " << t2._str << t2._nb <<std::endl;
	std::cout << "min( t1, t2) = " << ::min( t1, t2) << std::endl;
	std::cout << "max( t1, t2) = " << ::max( t1, t2) << std::endl;
	swap<Test>(t1,t2);
	std::cout << "t1: " << t1._str << t1._nb <<std::endl;
	std::cout << "t2: " << t2._str << t2._nb <<std::endl;


	
	return 0;
}